// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141bd69c0 FUN_141bd69c0 body=525 status=ok
// SIG undefined FUN_141bd69c0(void)

undefined8 FUN_141bd69c0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26e20) && (_Init_thread_header(&DAT_146a26e20), DAT_146a26e20 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26e18 = lVar10;
    _Init_thread_footer(&DAT_146a26e20);
  }
  if ((*piVar11 < DAT_146a26e30) && (_Init_thread_header(&DAT_146a26e30), DAT_146a26e30 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26e28 = lVar10;
    _Init_thread_footer(&DAT_146a26e30);
  }
  lVar10 = DAT_146a26e18;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26e28;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be76d0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd6bd0 FUN_141bd6bd0 body=525 status=ok
// SIG undefined FUN_141bd6bd0(void)

undefined8 FUN_141bd6bd0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26d40) && (_Init_thread_header(&DAT_146a26d40), DAT_146a26d40 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26d38 = lVar10;
    _Init_thread_footer(&DAT_146a26d40);
  }
  if ((*piVar11 < DAT_146a26d50) && (_Init_thread_header(&DAT_146a26d50), DAT_146a26d50 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26d48 = lVar10;
    _Init_thread_footer(&DAT_146a26d50);
  }
  lVar10 = DAT_146a26d38;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26d48;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be76d0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd6de0 FUN_141bd6de0 body=525 status=ok
// SIG undefined FUN_141bd6de0(void)

undefined8 FUN_141bd6de0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26c40) && (_Init_thread_header(&DAT_146a26c40), DAT_146a26c40 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26c38 = lVar10;
    _Init_thread_footer(&DAT_146a26c40);
  }
  if ((*piVar11 < DAT_146a26c50) && (_Init_thread_header(&DAT_146a26c50), DAT_146a26c50 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26c48 = lVar10;
    _Init_thread_footer(&DAT_146a26c50);
  }
  lVar10 = DAT_146a26c38;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26c48;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be76d0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd6ff0 FUN_141bd6ff0 body=525 status=ok
// SIG undefined FUN_141bd6ff0(void)

undefined8 FUN_141bd6ff0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26b40) && (_Init_thread_header(&DAT_146a26b40), DAT_146a26b40 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26b38 = lVar10;
    _Init_thread_footer(&DAT_146a26b40);
  }
  if ((*piVar11 < DAT_146a26b50) && (_Init_thread_header(&DAT_146a26b50), DAT_146a26b50 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26b48 = lVar10;
    _Init_thread_footer(&DAT_146a26b50);
  }
  lVar10 = DAT_146a26b38;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26b48;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be76d0(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd7200 FUN_141bd7200 body=452 status=ok
// SIG undefined FUN_141bd7200(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bd7200(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int *piVar5;
  
  uVar4 = 0;
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146a26ea0) && (_Init_thread_header(&DAT_146a26ea0), DAT_146a26ea0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar2 = uVar4;
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a26e98 = uVar2;
    _Init_thread_footer(&DAT_146a26ea0);
  }
  if ((*piVar5 < DAT_146a26eb0) && (_Init_thread_header(&DAT_146a26eb0), DAT_146a26eb0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar3 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a26ea8 = uVar4;
    _Init_thread_footer(&DAT_146a26eb0);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be76d0(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     (cVar1 = FUN_142753a10(), cVar1 != '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 141bd73d0 FUN_141bd73d0 body=546 status=ok
// SIG undefined FUN_141bd73d0(void)

undefined8 FUN_141bd73d0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26a40) && (_Init_thread_header(&DAT_146a26a40), DAT_146a26a40 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26a38 = lVar10;
    _Init_thread_footer(&DAT_146a26a40);
  }
  if ((*piVar11 < DAT_146a26a50) && (_Init_thread_header(&DAT_146a26a50), DAT_146a26a50 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26a48 = lVar10;
    _Init_thread_footer(&DAT_146a26a50);
  }
  lVar10 = DAT_146a26a38;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26a48;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((((iVar7 == 0) || (iVar1 != 1)) || (iVar2 < 1)) &&
     (((iVar7 == 0 || (iVar2 < 0x7fffffff)) || (iVar1 == 1)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be76d0(param_1,param_2,param_3);
  if (((cVar5 != '\0') && (param_1 < 0x1e)) &&
     (((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0 &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd7600 FUN_141bd7600 body=541 status=ok
// SIG undefined FUN_141bd7600(void)

undefined8 FUN_141bd7600(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a267a8) && (_Init_thread_header(&DAT_146a267a8), DAT_146a267a8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a267a0 = lVar10;
    _Init_thread_footer(&DAT_146a267a8);
  }
  if ((*piVar11 < DAT_146a267b8) && (_Init_thread_header(&DAT_146a267b8), DAT_146a267b8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a267b0 = lVar10;
    _Init_thread_footer(&DAT_146a267b8);
  }
  lVar10 = DAT_146a267a0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a267b0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd7820 FUN_141bd7820 body=541 status=ok
// SIG undefined FUN_141bd7820(void)

undefined8 FUN_141bd7820(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a266a8) && (_Init_thread_header(&DAT_146a266a8), DAT_146a266a8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a266a0 = lVar10;
    _Init_thread_footer(&DAT_146a266a8);
  }
  if ((*piVar11 < DAT_146a266b8) && (_Init_thread_header(&DAT_146a266b8), DAT_146a266b8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a266b0 = lVar10;
    _Init_thread_footer(&DAT_146a266b8);
  }
  lVar10 = DAT_146a266a0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a266b0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd7a40 FUN_141bd7a40 body=541 status=ok
// SIG undefined FUN_141bd7a40(void)

undefined8 FUN_141bd7a40(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a265a8) && (_Init_thread_header(&DAT_146a265a8), DAT_146a265a8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a265a0 = lVar10;
    _Init_thread_footer(&DAT_146a265a8);
  }
  if ((*piVar11 < DAT_146a265b8) && (_Init_thread_header(&DAT_146a265b8), DAT_146a265b8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a265b0 = lVar10;
    _Init_thread_footer(&DAT_146a265b8);
  }
  lVar10 = DAT_146a265a0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a265b0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd7c60 FUN_141bd7c60 body=541 status=ok
// SIG undefined FUN_141bd7c60(void)

undefined8 FUN_141bd7c60(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a264a8) && (_Init_thread_header(&DAT_146a264a8), DAT_146a264a8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a264a0 = lVar10;
    _Init_thread_footer(&DAT_146a264a8);
  }
  if ((*piVar11 < DAT_146a264b8) && (_Init_thread_header(&DAT_146a264b8), DAT_146a264b8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a264b0 = lVar10;
    _Init_thread_footer(&DAT_146a264b8);
  }
  lVar10 = DAT_146a264a0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a264b0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd7e80 FUN_141bd7e80 body=461 status=ok
// SIG undefined FUN_141bd7e80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bd7e80(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int *piVar6;
  
  uVar5 = 0;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar6 < DAT_146a26880) && (_Init_thread_header(&DAT_146a26880), DAT_146a26880 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar3 = uVar5;
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a26878 = uVar3;
    _Init_thread_footer(&DAT_146a26880);
  }
  if ((*piVar6 < DAT_146a2689c) && (_Init_thread_header(&DAT_146a2689c), DAT_146a2689c == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar4 != (longlong *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a26890 = uVar5;
    _Init_thread_footer(&DAT_146a2689c);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be7910(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     ((cVar1 = FUN_142753a10(), cVar1 == '\0' || (iVar2 == 0)))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 141bd8050 FUN_141bd8050 body=553 status=ok
// SIG undefined FUN_141bd8050(void)

undefined8 FUN_141bd8050(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a263a8) && (_Init_thread_header(&DAT_146a263a8), DAT_146a263a8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a263a0 = lVar10;
    _Init_thread_footer(&DAT_146a263a8);
  }
  if ((*piVar11 < DAT_146a263b8) && (_Init_thread_header(&DAT_146a263b8), DAT_146a263b8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a263b0 = lVar10;
    _Init_thread_footer(&DAT_146a263b8);
  }
  lVar10 = DAT_146a263a0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a263b0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((iVar7 == 0) || (((iVar1 != 1 || (iVar2 < 1)) && ((iVar2 < 0x7fffffff || (iVar1 == 1)))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd8280 FUN_141bd8280 body=525 status=ok
// SIG undefined FUN_141bd8280(void)

undefined8 FUN_141bd8280(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26828) && (_Init_thread_header(&DAT_146a26828), DAT_146a26828 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26820 = lVar10;
    _Init_thread_footer(&DAT_146a26828);
  }
  if ((*piVar11 < DAT_146a26838) && (_Init_thread_header(&DAT_146a26838), DAT_146a26838 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26830 = lVar10;
    _Init_thread_footer(&DAT_146a26838);
  }
  lVar10 = DAT_146a26820;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26830;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd8490 FUN_141bd8490 body=525 status=ok
// SIG undefined FUN_141bd8490(void)

undefined8 FUN_141bd8490(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26728) && (_Init_thread_header(&DAT_146a26728), DAT_146a26728 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26720 = lVar10;
    _Init_thread_footer(&DAT_146a26728);
  }
  if ((*piVar11 < DAT_146a26738) && (_Init_thread_header(&DAT_146a26738), DAT_146a26738 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26730 = lVar10;
    _Init_thread_footer(&DAT_146a26738);
  }
  lVar10 = DAT_146a26720;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26730;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd86a0 FUN_141bd86a0 body=525 status=ok
// SIG undefined FUN_141bd86a0(void)

undefined8 FUN_141bd86a0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26628) && (_Init_thread_header(&DAT_146a26628), DAT_146a26628 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26620 = lVar10;
    _Init_thread_footer(&DAT_146a26628);
  }
  if ((*piVar11 < DAT_146a26638) && (_Init_thread_header(&DAT_146a26638), DAT_146a26638 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26630 = lVar10;
    _Init_thread_footer(&DAT_146a26638);
  }
  lVar10 = DAT_146a26620;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26630;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd88b0 FUN_141bd88b0 body=525 status=ok
// SIG undefined FUN_141bd88b0(void)

undefined8 FUN_141bd88b0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26528) && (_Init_thread_header(&DAT_146a26528), DAT_146a26528 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26520 = lVar10;
    _Init_thread_footer(&DAT_146a26528);
  }
  if ((*piVar11 < DAT_146a26538) && (_Init_thread_header(&DAT_146a26538), DAT_146a26538 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26530 = lVar10;
    _Init_thread_footer(&DAT_146a26538);
  }
  lVar10 = DAT_146a26520;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26530;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd8ac0 FUN_141bd8ac0 body=452 status=ok
// SIG undefined FUN_141bd8ac0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bd8ac0(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int *piVar5;
  
  uVar4 = 0;
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146a268f0) && (_Init_thread_header(&DAT_146a268f0), DAT_146a268f0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar2 = uVar4;
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a268e8 = uVar2;
    _Init_thread_footer(&DAT_146a268f0);
  }
  if ((*piVar5 < DAT_146a2690c) && (_Init_thread_header(&DAT_146a2690c), DAT_146a2690c == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar3 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a26900 = uVar4;
    _Init_thread_footer(&DAT_146a2690c);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be7910(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     (cVar1 = FUN_142753a10(), cVar1 == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 141bd8c90 FUN_141bd8c90 body=546 status=ok
// SIG undefined FUN_141bd8c90(void)

undefined8 FUN_141bd8c90(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26428) && (_Init_thread_header(&DAT_146a26428), DAT_146a26428 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26420 = lVar10;
    _Init_thread_footer(&DAT_146a26428);
  }
  if ((*piVar11 < DAT_146a26438) && (_Init_thread_header(&DAT_146a26438), DAT_146a26438 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26430 = lVar10;
    _Init_thread_footer(&DAT_146a26438);
  }
  lVar10 = DAT_146a26420;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26430;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((((iVar7 == 0) || (iVar1 != 1)) || (iVar2 < 1)) &&
     (((iVar7 == 0 || (iVar2 < 0x7fffffff)) || (iVar1 == 1)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if (((cVar5 != '\0') && (param_1 < 0x1e)) &&
     (((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0 &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd8ec0 FUN_141bd8ec0 body=541 status=ok
// SIG undefined FUN_141bd8ec0(void)

undefined8 FUN_141bd8ec0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a267e8) && (_Init_thread_header(&DAT_146a267e8), DAT_146a267e8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a267e0 = lVar10;
    _Init_thread_footer(&DAT_146a267e8);
  }
  if ((*piVar11 < DAT_146a267f8) && (_Init_thread_header(&DAT_146a267f8), DAT_146a267f8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a267f0 = lVar10;
    _Init_thread_footer(&DAT_146a267f8);
  }
  lVar10 = DAT_146a267e0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a267f0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd90e0 FUN_141bd90e0 body=541 status=ok
// SIG undefined FUN_141bd90e0(void)

undefined8 FUN_141bd90e0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a266e8) && (_Init_thread_header(&DAT_146a266e8), DAT_146a266e8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a266e0 = lVar10;
    _Init_thread_footer(&DAT_146a266e8);
  }
  if ((*piVar11 < DAT_146a266f8) && (_Init_thread_header(&DAT_146a266f8), DAT_146a266f8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a266f0 = lVar10;
    _Init_thread_footer(&DAT_146a266f8);
  }
  lVar10 = DAT_146a266e0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a266f0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd9300 FUN_141bd9300 body=541 status=ok
// SIG undefined FUN_141bd9300(void)

undefined8 FUN_141bd9300(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a265e8) && (_Init_thread_header(&DAT_146a265e8), DAT_146a265e8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a265e0 = lVar10;
    _Init_thread_footer(&DAT_146a265e8);
  }
  if ((*piVar11 < DAT_146a265f8) && (_Init_thread_header(&DAT_146a265f8), DAT_146a265f8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a265f0 = lVar10;
    _Init_thread_footer(&DAT_146a265f8);
  }
  lVar10 = DAT_146a265e0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a265f0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd9520 FUN_141bd9520 body=541 status=ok
// SIG undefined FUN_141bd9520(void)

undefined8 FUN_141bd9520(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a264e8) && (_Init_thread_header(&DAT_146a264e8), DAT_146a264e8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a264e0 = lVar10;
    _Init_thread_footer(&DAT_146a264e8);
  }
  if ((*piVar11 < DAT_146a264f8) && (_Init_thread_header(&DAT_146a264f8), DAT_146a264f8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a264f0 = lVar10;
    _Init_thread_footer(&DAT_146a264f8);
  }
  lVar10 = DAT_146a264e0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a264f0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd9740 FUN_141bd9740 body=461 status=ok
// SIG undefined FUN_141bd9740(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bd9740(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int *piVar6;
  
  uVar5 = 0;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar6 < DAT_146a268b8) && (_Init_thread_header(&DAT_146a268b8), DAT_146a268b8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar3 = uVar5;
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a268b0 = uVar3;
    _Init_thread_footer(&DAT_146a268b8);
  }
  if ((*piVar6 < DAT_146a268d4) && (_Init_thread_header(&DAT_146a268d4), DAT_146a268d4 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar4 != (longlong *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a268c8 = uVar5;
    _Init_thread_footer(&DAT_146a268d4);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be7910(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     ((cVar1 = FUN_142753a10(), cVar1 != '\0' || (iVar2 == 0)))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 141bd9910 FUN_141bd9910 body=553 status=ok
// SIG undefined FUN_141bd9910(void)

undefined8 FUN_141bd9910(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a263e8) && (_Init_thread_header(&DAT_146a263e8), DAT_146a263e8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a263e0 = lVar10;
    _Init_thread_footer(&DAT_146a263e8);
  }
  if ((*piVar11 < DAT_146a263f8) && (_Init_thread_header(&DAT_146a263f8), DAT_146a263f8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a263f0 = lVar10;
    _Init_thread_footer(&DAT_146a263f8);
  }
  lVar10 = DAT_146a263e0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a263f0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((iVar7 == 0) || (((iVar1 != 1 || (iVar2 < 1)) && ((iVar2 < 0x7fffffff || (iVar1 == 1)))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd9b40 FUN_141bd9b40 body=525 status=ok
// SIG undefined FUN_141bd9b40(void)

undefined8 FUN_141bd9b40(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26848) && (_Init_thread_header(&DAT_146a26848), DAT_146a26848 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26840 = lVar10;
    _Init_thread_footer(&DAT_146a26848);
  }
  if ((*piVar11 < DAT_146a26864) && (_Init_thread_header(&DAT_146a26864), DAT_146a26864 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26858 = lVar10;
    _Init_thread_footer(&DAT_146a26864);
  }
  lVar10 = DAT_146a26840;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26858;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd9d50 FUN_141bd9d50 body=525 status=ok
// SIG undefined FUN_141bd9d50(void)

undefined8 FUN_141bd9d50(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26768) && (_Init_thread_header(&DAT_146a26768), DAT_146a26768 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26760 = lVar10;
    _Init_thread_footer(&DAT_146a26768);
  }
  if ((*piVar11 < DAT_146a26778) && (_Init_thread_header(&DAT_146a26778), DAT_146a26778 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26770 = lVar10;
    _Init_thread_footer(&DAT_146a26778);
  }
  lVar10 = DAT_146a26760;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26770;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bd9f60 FUN_141bd9f60 body=525 status=ok
// SIG undefined FUN_141bd9f60(void)

undefined8 FUN_141bd9f60(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26668) && (_Init_thread_header(&DAT_146a26668), DAT_146a26668 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26660 = lVar10;
    _Init_thread_footer(&DAT_146a26668);
  }
  if ((*piVar11 < DAT_146a26678) && (_Init_thread_header(&DAT_146a26678), DAT_146a26678 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26670 = lVar10;
    _Init_thread_footer(&DAT_146a26678);
  }
  lVar10 = DAT_146a26660;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26670;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bda170 FUN_141bda170 body=525 status=ok
// SIG undefined FUN_141bda170(void)

undefined8 FUN_141bda170(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26568) && (_Init_thread_header(&DAT_146a26568), DAT_146a26568 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26560 = lVar10;
    _Init_thread_footer(&DAT_146a26568);
  }
  if ((*piVar11 < DAT_146a26578) && (_Init_thread_header(&DAT_146a26578), DAT_146a26578 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26570 = lVar10;
    _Init_thread_footer(&DAT_146a26578);
  }
  lVar10 = DAT_146a26560;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26570;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bda380 FUN_141bda380 body=452 status=ok
// SIG undefined FUN_141bda380(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bda380(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int *piVar5;
  
  uVar4 = 0;
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146a26928) && (_Init_thread_header(&DAT_146a26928), DAT_146a26928 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar2 = uVar4;
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a26920 = uVar2;
    _Init_thread_footer(&DAT_146a26928);
  }
  if ((*piVar5 < DAT_146a26944) && (_Init_thread_header(&DAT_146a26944), DAT_146a26944 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar3 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a26938 = uVar4;
    _Init_thread_footer(&DAT_146a26944);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be7910(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     (cVar1 = FUN_142753a10(), cVar1 != '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 141bda550 FUN_141bda550 body=546 status=ok
// SIG undefined FUN_141bda550(void)

undefined8 FUN_141bda550(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26468) && (_Init_thread_header(&DAT_146a26468), DAT_146a26468 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26460 = lVar10;
    _Init_thread_footer(&DAT_146a26468);
  }
  if ((*piVar11 < DAT_146a26478) && (_Init_thread_header(&DAT_146a26478), DAT_146a26478 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26470 = lVar10;
    _Init_thread_footer(&DAT_146a26478);
  }
  lVar10 = DAT_146a26460;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26470;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((((iVar7 == 0) || (iVar1 != 1)) || (iVar2 < 1)) &&
     (((iVar7 == 0 || (iVar2 < 0x7fffffff)) || (iVar1 == 1)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if (((cVar5 != '\0') && (param_1 < 0x1e)) &&
     (((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0 &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bda780 FUN_141bda780 body=541 status=ok
// SIG undefined FUN_141bda780(void)

undefined8 FUN_141bda780(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a261c0) && (_Init_thread_header(&DAT_146a261c0), DAT_146a261c0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a261b8 = lVar10;
    _Init_thread_footer(&DAT_146a261c0);
  }
  if ((*piVar11 < DAT_146a261e0) && (_Init_thread_header(&DAT_146a261e0), DAT_146a261e0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a261d8 = lVar10;
    _Init_thread_footer(&DAT_146a261e0);
  }
  lVar10 = DAT_146a261b8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a261d8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bda9a0 FUN_141bda9a0 body=541 status=ok
// SIG undefined FUN_141bda9a0(void)

undefined8 FUN_141bda9a0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26088) && (_Init_thread_header(&DAT_146a26088), DAT_146a26088 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26078 = lVar10;
    _Init_thread_footer(&DAT_146a26088);
  }
  if ((*piVar11 < DAT_146a26098) && (_Init_thread_header(&DAT_146a26098), DAT_146a26098 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26090 = lVar10;
    _Init_thread_footer(&DAT_146a26098);
  }
  lVar10 = DAT_146a26078;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26090;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bdabc0 FUN_141bdabc0 body=541 status=ok
// SIG undefined FUN_141bdabc0(void)

undefined8 FUN_141bdabc0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25f40) && (_Init_thread_header(&DAT_146a25f40), DAT_146a25f40 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25f38 = lVar10;
    _Init_thread_footer(&DAT_146a25f40);
  }
  if ((*piVar11 < DAT_146a25f50) && (_Init_thread_header(&DAT_146a25f50), DAT_146a25f50 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25f48 = lVar10;
    _Init_thread_footer(&DAT_146a25f50);
  }
  lVar10 = DAT_146a25f38;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25f48;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bdade0 FUN_141bdade0 body=541 status=ok
// SIG undefined FUN_141bdade0(void)

undefined8 FUN_141bdade0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25e08) && (_Init_thread_header(&DAT_146a25e08), DAT_146a25e08 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25e00 = lVar10;
    _Init_thread_footer(&DAT_146a25e08);
  }
  if ((*piVar11 < DAT_146a25e18) && (_Init_thread_header(&DAT_146a25e18), DAT_146a25e18 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25e10 = lVar10;
    _Init_thread_footer(&DAT_146a25e18);
  }
  lVar10 = DAT_146a25e00;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25e10;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bdb000 FUN_141bdb000 body=461 status=ok
// SIG undefined FUN_141bdb000(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bdb000(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int *piVar6;
  
  uVar5 = 0;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar6 < DAT_146a262a8) && (_Init_thread_header(&DAT_146a262a8), DAT_146a262a8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar3 = uVar5;
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a262a0 = uVar3;
    _Init_thread_footer(&DAT_146a262a8);
  }
  if ((*piVar6 < DAT_146a262c4) && (_Init_thread_header(&DAT_146a262c4), DAT_146a262c4 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar4 != (longlong *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a262b8 = uVar5;
    _Init_thread_footer(&DAT_146a262c4);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be7910(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     ((cVar1 = FUN_142753a10(), cVar1 == '\0' || (iVar2 == 0)))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 141bdb1d0 FUN_141bdb1d0 body=553 status=ok
// SIG undefined FUN_141bdb1d0(void)

undefined8 FUN_141bdb1d0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25cc8) && (_Init_thread_header(&DAT_146a25cc8), DAT_146a25cc8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25cc0 = lVar10;
    _Init_thread_footer(&DAT_146a25cc8);
  }
  if ((*piVar11 < DAT_146a25cd8) && (_Init_thread_header(&DAT_146a25cd8), DAT_146a25cd8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25cd0 = lVar10;
    _Init_thread_footer(&DAT_146a25cd8);
  }
  lVar10 = DAT_146a25cc0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25cd0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((iVar7 == 0) || (((iVar1 != 1 || (iVar2 < 1)) && ((iVar2 < 0x7fffffff || (iVar1 == 1)))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bdb400 FUN_141bdb400 body=525 status=ok
// SIG undefined FUN_141bdb400(void)

undefined8 FUN_141bdb400(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26250) && (_Init_thread_header(&DAT_146a26250), DAT_146a26250 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26248 = lVar10;
    _Init_thread_footer(&DAT_146a26250);
  }
  if ((*piVar11 < DAT_146a26260) && (_Init_thread_header(&DAT_146a26260), DAT_146a26260 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26258 = lVar10;
    _Init_thread_footer(&DAT_146a26260);
  }
  lVar10 = DAT_146a26248;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26258;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bdb610 FUN_141bdb610 body=525 status=ok
// SIG undefined FUN_141bdb610(void)

undefined8 FUN_141bdb610(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26120) && (_Init_thread_header(&DAT_146a26120), DAT_146a26120 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26118 = lVar10;
    _Init_thread_footer(&DAT_146a26120);
  }
  if ((*piVar11 < DAT_146a26130) && (_Init_thread_header(&DAT_146a26130), DAT_146a26130 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26128 = lVar10;
    _Init_thread_footer(&DAT_146a26130);
  }
  lVar10 = DAT_146a26118;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26128;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bdb820 FUN_141bdb820 body=525 status=ok
// SIG undefined FUN_141bdb820(void)

undefined8 FUN_141bdb820(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25ff4) && (_Init_thread_header(&DAT_146a25ff4), DAT_146a25ff4 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25fe8 = lVar10;
    _Init_thread_footer(&DAT_146a25ff4);
  }
  if ((*piVar11 < DAT_146a26000) && (_Init_thread_header(&DAT_146a26000), DAT_146a26000 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25ff8 = lVar10;
    _Init_thread_footer(&DAT_146a26000);
  }
  lVar10 = DAT_146a25fe8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25ff8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bdba30 FUN_141bdba30 body=525 status=ok
// SIG undefined FUN_141bdba30(void)

undefined8 FUN_141bdba30(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25ea4) && (_Init_thread_header(&DAT_146a25ea4), DAT_146a25ea4 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25e98 = lVar10;
    _Init_thread_footer(&DAT_146a25ea4);
  }
  if ((*piVar11 < DAT_146a25eb0) && (_Init_thread_header(&DAT_146a25eb0), DAT_146a25eb0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25ea8 = lVar10;
    _Init_thread_footer(&DAT_146a25eb0);
  }
  lVar10 = DAT_146a25e98;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25ea8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bdbc40 FUN_141bdbc40 body=452 status=ok
// SIG undefined FUN_141bdbc40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bdbc40(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int *piVar5;
  
  uVar4 = 0;
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146a26318) && (_Init_thread_header(&DAT_146a26318), DAT_146a26318 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar2 = uVar4;
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a26310 = uVar2;
    _Init_thread_footer(&DAT_146a26318);
  }
  if ((*piVar5 < DAT_146a26334) && (_Init_thread_header(&DAT_146a26334), DAT_146a26334 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar3 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a26328 = uVar4;
    _Init_thread_footer(&DAT_146a26334);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be7910(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     (cVar1 = FUN_142753a10(), cVar1 == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 141bdbe10 FUN_141bdbe10 body=546 status=ok
// SIG undefined FUN_141bdbe10(void)

undefined8 FUN_141bdbe10(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25d48) && (_Init_thread_header(&DAT_146a25d48), DAT_146a25d48 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25d40 = lVar10;
    _Init_thread_footer(&DAT_146a25d48);
  }
  if ((*piVar11 < DAT_146a25d58) && (_Init_thread_header(&DAT_146a25d58), DAT_146a25d58 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25d50 = lVar10;
    _Init_thread_footer(&DAT_146a25d58);
  }
  lVar10 = DAT_146a25d40;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25d50;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((((iVar7 == 0) || (iVar1 != 1)) || (iVar2 < 1)) &&
     (((iVar7 == 0 || (iVar2 < 0x7fffffff)) || (iVar1 == 1)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if (((cVar5 != '\0') && (param_1 < 0x1e)) &&
     (((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0 &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bdc040 FUN_141bdc040 body=541 status=ok
// SIG undefined FUN_141bdc040(void)

undefined8 FUN_141bdc040(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26210) && (_Init_thread_header(&DAT_146a26210), DAT_146a26210 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26208 = lVar10;
    _Init_thread_footer(&DAT_146a26210);
  }
  if ((*piVar11 < DAT_146a26220) && (_Init_thread_header(&DAT_146a26220), DAT_146a26220 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26218 = lVar10;
    _Init_thread_footer(&DAT_146a26220);
  }
  lVar10 = DAT_146a26208;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26218;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bdc260 FUN_141bdc260 body=541 status=ok
// SIG undefined FUN_141bdc260(void)

undefined8 FUN_141bdc260(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a260e4) && (_Init_thread_header(&DAT_146a260e4), DAT_146a260e4 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a260d8 = lVar10;
    _Init_thread_footer(&DAT_146a260e4);
  }
  if ((*piVar11 < DAT_146a260f0) && (_Init_thread_header(&DAT_146a260f0), DAT_146a260f0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a260e8 = lVar10;
    _Init_thread_footer(&DAT_146a260f0);
  }
  lVar10 = DAT_146a260d8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a260e8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bdc480 FUN_141bdc480 body=541 status=ok
// SIG undefined FUN_141bdc480(void)

undefined8 FUN_141bdc480(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25f9c) && (_Init_thread_header(&DAT_146a25f9c), DAT_146a25f9c == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25f90 = lVar10;
    _Init_thread_footer(&DAT_146a25f9c);
  }
  if ((*piVar11 < DAT_146a25fa8) && (_Init_thread_header(&DAT_146a25fa8), DAT_146a25fa8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25fa0 = lVar10;
    _Init_thread_footer(&DAT_146a25fa8);
  }
  lVar10 = DAT_146a25f90;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25fa0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bdc6a0 FUN_141bdc6a0 body=541 status=ok
// SIG undefined FUN_141bdc6a0(void)

undefined8 FUN_141bdc6a0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25e48) && (_Init_thread_header(&DAT_146a25e48), DAT_146a25e48 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25e40 = lVar10;
    _Init_thread_footer(&DAT_146a25e48);
  }
  if ((*piVar11 < DAT_146a25e58) && (_Init_thread_header(&DAT_146a25e58), DAT_146a25e58 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25e50 = lVar10;
    _Init_thread_footer(&DAT_146a25e58);
  }
  lVar10 = DAT_146a25e40;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25e50;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bdc8c0 FUN_141bdc8c0 body=461 status=ok
// SIG undefined FUN_141bdc8c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bdc8c0(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int *piVar6;
  
  uVar5 = 0;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar6 < DAT_146a262e0) && (_Init_thread_header(&DAT_146a262e0), DAT_146a262e0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar3 = uVar5;
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a262d8 = uVar3;
    _Init_thread_footer(&DAT_146a262e0);
  }
  if ((*piVar6 < DAT_146a262fc) && (_Init_thread_header(&DAT_146a262fc), DAT_146a262fc == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar4 != (longlong *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a262f0 = uVar5;
    _Init_thread_footer(&DAT_146a262fc);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be7910(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     ((cVar1 = FUN_142753a10(), cVar1 != '\0' || (iVar2 == 0)))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 141bdca90 FUN_141bdca90 body=553 status=ok
// SIG undefined FUN_141bdca90(void)

undefined8 FUN_141bdca90(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25d08) && (_Init_thread_header(&DAT_146a25d08), DAT_146a25d08 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25d00 = lVar10;
    _Init_thread_footer(&DAT_146a25d08);
  }
  if ((*piVar11 < DAT_146a25d18) && (_Init_thread_header(&DAT_146a25d18), DAT_146a25d18 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25d10 = lVar10;
    _Init_thread_footer(&DAT_146a25d18);
  }
  lVar10 = DAT_146a25d00;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25d10;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((iVar7 == 0) || (((iVar1 != 1 || (iVar2 < 1)) && ((iVar2 < 0x7fffffff || (iVar1 == 1)))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bdccc0 FUN_141bdccc0 body=525 status=ok
// SIG undefined FUN_141bdccc0(void)

undefined8 FUN_141bdccc0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26270) && (_Init_thread_header(&DAT_146a26270), DAT_146a26270 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26268 = lVar10;
    _Init_thread_footer(&DAT_146a26270);
  }
  if ((*piVar11 < DAT_146a2628c) && (_Init_thread_header(&DAT_146a2628c), DAT_146a2628c == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26280 = lVar10;
    _Init_thread_footer(&DAT_146a2628c);
  }
  lVar10 = DAT_146a26268;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26280;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bdced0 FUN_141bdced0 body=525 status=ok
// SIG undefined FUN_141bdced0(void)

undefined8 FUN_141bdced0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a2616c) && (_Init_thread_header(&DAT_146a2616c), DAT_146a2616c == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26160 = lVar10;
    _Init_thread_footer(&DAT_146a2616c);
  }
  if ((*piVar11 < DAT_146a26184) && (_Init_thread_header(&DAT_146a26184), DAT_146a26184 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26178 = lVar10;
    _Init_thread_footer(&DAT_146a26184);
  }
  lVar10 = DAT_146a26160;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26178;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bdd0e0 FUN_141bdd0e0 body=525 status=ok
// SIG undefined FUN_141bdd0e0(void)

undefined8 FUN_141bdd0e0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26030) && (_Init_thread_header(&DAT_146a26030), DAT_146a26030 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26028 = lVar10;
    _Init_thread_footer(&DAT_146a26030);
  }
  if ((*piVar11 < DAT_146a26040) && (_Init_thread_header(&DAT_146a26040), DAT_146a26040 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26038 = lVar10;
    _Init_thread_footer(&DAT_146a26040);
  }
  lVar10 = DAT_146a26028;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26038;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bdd2f0 FUN_141bdd2f0 body=525 status=ok
// SIG undefined FUN_141bdd2f0(void)

undefined8 FUN_141bdd2f0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25f00) && (_Init_thread_header(&DAT_146a25f00), DAT_146a25f00 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25ef8 = lVar10;
    _Init_thread_footer(&DAT_146a25f00);
  }
  if ((*piVar11 < DAT_146a25f10) && (_Init_thread_header(&DAT_146a25f10), DAT_146a25f10 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25f08 = lVar10;
    _Init_thread_footer(&DAT_146a25f10);
  }
  lVar10 = DAT_146a25ef8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25f08;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bdd500 FUN_141bdd500 body=452 status=ok
// SIG undefined FUN_141bdd500(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bdd500(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int *piVar5;
  
  uVar4 = 0;
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146a26350) && (_Init_thread_header(&DAT_146a26350), DAT_146a26350 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar2 = uVar4;
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a26348 = uVar2;
    _Init_thread_footer(&DAT_146a26350);
  }
  if ((*piVar5 < DAT_146a2636c) && (_Init_thread_header(&DAT_146a2636c), DAT_146a2636c == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar3 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a26360 = uVar4;
    _Init_thread_footer(&DAT_146a2636c);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be7910(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     (cVar1 = FUN_142753a10(), cVar1 != '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 141bdd6d0 FUN_141bdd6d0 body=546 status=ok
// SIG undefined FUN_141bdd6d0(void)

undefined8 FUN_141bdd6d0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25da8) && (_Init_thread_header(&DAT_146a25da8), DAT_146a25da8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25da0 = lVar10;
    _Init_thread_footer(&DAT_146a25da8);
  }
  if ((*piVar11 < DAT_146a25db8) && (_Init_thread_header(&DAT_146a25db8), DAT_146a25db8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25db0 = lVar10;
    _Init_thread_footer(&DAT_146a25db8);
  }
  lVar10 = DAT_146a25da0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25db0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((((iVar7 == 0) || (iVar1 != 1)) || (iVar2 < 1)) &&
     (((iVar7 == 0 || (iVar2 < 0x7fffffff)) || (iVar1 == 1)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7910(param_1,param_2,param_3);
  if (((cVar5 != '\0') && (param_1 < 0x1e)) &&
     (((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0 &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bdd900 FUN_141bdd900 body=541 status=ok
// SIG undefined FUN_141bdd900(void)

undefined8 FUN_141bdd900(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26010) && (_Init_thread_header(&DAT_146a26010), DAT_146a26010 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26008 = lVar10;
    _Init_thread_footer(&DAT_146a26010);
  }
  if ((*piVar11 < DAT_146a26020) && (_Init_thread_header(&DAT_146a26020), DAT_146a26020 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26018 = lVar10;
    _Init_thread_footer(&DAT_146a26020);
  }
  lVar10 = DAT_146a26008;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26018;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7330(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bddb20 FUN_141bddb20 body=541 status=ok
// SIG undefined FUN_141bddb20(void)

undefined8 FUN_141bddb20(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25ec0) && (_Init_thread_header(&DAT_146a25ec0), DAT_146a25ec0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25eb8 = lVar10;
    _Init_thread_footer(&DAT_146a25ec0);
  }
  if ((*piVar11 < DAT_146a25ed0) && (_Init_thread_header(&DAT_146a25ed0), DAT_146a25ed0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25ec8 = lVar10;
    _Init_thread_footer(&DAT_146a25ed0);
  }
  lVar10 = DAT_146a25eb8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25ec8;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7330(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bddd40 FUN_141bddd40 body=541 status=ok
// SIG undefined FUN_141bddd40(void)

undefined8 FUN_141bddd40(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25d68) && (_Init_thread_header(&DAT_146a25d68), DAT_146a25d68 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25d60 = lVar10;
    _Init_thread_footer(&DAT_146a25d68);
  }
  if ((*piVar11 < DAT_146a25d78) && (_Init_thread_header(&DAT_146a25d78), DAT_146a25d78 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25d70 = lVar10;
    _Init_thread_footer(&DAT_146a25d78);
  }
  lVar10 = DAT_146a25d60;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25d70;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7330(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bddf60 FUN_141bddf60 body=541 status=ok
// SIG undefined FUN_141bddf60(void)

undefined8 FUN_141bddf60(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25c88) && (_Init_thread_header(&DAT_146a25c88), DAT_146a25c88 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25c80 = lVar10;
    _Init_thread_footer(&DAT_146a25c88);
  }
  if ((*piVar11 < DAT_146a25c98) && (_Init_thread_header(&DAT_146a25c98), DAT_146a25c98 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25c90 = lVar10;
    _Init_thread_footer(&DAT_146a25c98);
  }
  lVar10 = DAT_146a25c80;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25c90;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7330(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bde180 FUN_141bde180 body=461 status=ok
// SIG undefined FUN_141bde180(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bde180(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int *piVar6;
  
  uVar5 = 0;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar6 < DAT_146a26140) && (_Init_thread_header(&DAT_146a26140), DAT_146a26140 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar3 = uVar5;
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a26138 = uVar3;
    _Init_thread_footer(&DAT_146a26140);
  }
  if ((*piVar6 < DAT_146a26150) && (_Init_thread_header(&DAT_146a26150), DAT_146a26150 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar4 != (longlong *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a26148 = uVar5;
    _Init_thread_footer(&DAT_146a26150);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be7330(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     ((cVar1 = FUN_142753a10(), cVar1 == '\0' || (iVar2 == 0)))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 141bde350 FUN_141bde350 body=553 status=ok
// SIG undefined FUN_141bde350(void)

undefined8 FUN_141bde350(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25c08) && (_Init_thread_header(&DAT_146a25c08), DAT_146a25c08 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25c00 = lVar10;
    _Init_thread_footer(&DAT_146a25c08);
  }
  if ((*piVar11 < DAT_146a25c18) && (_Init_thread_header(&DAT_146a25c18), DAT_146a25c18 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25c10 = lVar10;
    _Init_thread_footer(&DAT_146a25c18);
  }
  lVar10 = DAT_146a25c00;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25c10;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((iVar7 == 0) || (((iVar1 != 1 || (iVar2 < 1)) && ((iVar2 < 0x7fffffff || (iVar1 == 1)))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7330(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bde580 FUN_141bde580 body=525 status=ok
// SIG undefined FUN_141bde580(void)

undefined8 FUN_141bde580(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a260a8) && (_Init_thread_header(&DAT_146a260a8), DAT_146a260a8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a260a0 = lVar10;
    _Init_thread_footer(&DAT_146a260a8);
  }
  if ((*piVar11 < DAT_146a260b8) && (_Init_thread_header(&DAT_146a260b8), DAT_146a260b8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a260b0 = lVar10;
    _Init_thread_footer(&DAT_146a260b8);
  }
  lVar10 = DAT_146a260a0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a260b0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7330(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bde790 FUN_141bde790 body=525 status=ok
// SIG undefined FUN_141bde790(void)

undefined8 FUN_141bde790(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25f60) && (_Init_thread_header(&DAT_146a25f60), DAT_146a25f60 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25f58 = lVar10;
    _Init_thread_footer(&DAT_146a25f60);
  }
  if ((*piVar11 < DAT_146a25f70) && (_Init_thread_header(&DAT_146a25f70), DAT_146a25f70 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25f68 = lVar10;
    _Init_thread_footer(&DAT_146a25f70);
  }
  lVar10 = DAT_146a25f58;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25f68;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7330(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bde9a0 FUN_141bde9a0 body=525 status=ok
// SIG undefined FUN_141bde9a0(void)

undefined8 FUN_141bde9a0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25e28) && (_Init_thread_header(&DAT_146a25e28), DAT_146a25e28 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25e20 = lVar10;
    _Init_thread_footer(&DAT_146a25e28);
  }
  if ((*piVar11 < DAT_146a25e38) && (_Init_thread_header(&DAT_146a25e38), DAT_146a25e38 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25e30 = lVar10;
    _Init_thread_footer(&DAT_146a25e38);
  }
  lVar10 = DAT_146a25e20;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25e30;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7330(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bdebb0 FUN_141bdebb0 body=525 status=ok
// SIG undefined FUN_141bdebb0(void)

undefined8 FUN_141bdebb0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25ce8) && (_Init_thread_header(&DAT_146a25ce8), DAT_146a25ce8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25ce0 = lVar10;
    _Init_thread_footer(&DAT_146a25ce8);
  }
  if ((*piVar11 < DAT_146a25cf8) && (_Init_thread_header(&DAT_146a25cf8), DAT_146a25cf8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25cf0 = lVar10;
    _Init_thread_footer(&DAT_146a25cf8);
  }
  lVar10 = DAT_146a25ce0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25cf0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7330(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bdedc0 FUN_141bdedc0 body=452 status=ok
// SIG undefined FUN_141bdedc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bdedc0(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int *piVar5;
  
  uVar4 = 0;
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146a261f0) && (_Init_thread_header(&DAT_146a261f0), DAT_146a261f0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar2 = uVar4;
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a261e8 = uVar2;
    _Init_thread_footer(&DAT_146a261f0);
  }
  if ((*piVar5 < DAT_146a26200) && (_Init_thread_header(&DAT_146a26200), DAT_146a26200 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar3 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a261f8 = uVar4;
    _Init_thread_footer(&DAT_146a26200);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be7330(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     (cVar1 = FUN_142753a10(), cVar1 == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 141bdef90 FUN_141bdef90 body=546 status=ok
// SIG undefined FUN_141bdef90(void)

undefined8 FUN_141bdef90(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25c48) && (_Init_thread_header(&DAT_146a25c48), DAT_146a25c48 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25c40 = lVar10;
    _Init_thread_footer(&DAT_146a25c48);
  }
  if ((*piVar11 < DAT_146a25c58) && (_Init_thread_header(&DAT_146a25c58), DAT_146a25c58 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25c50 = lVar10;
    _Init_thread_footer(&DAT_146a25c58);
  }
  lVar10 = DAT_146a25c40;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25c50;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((((iVar7 == 0) || (iVar1 != 1)) || (iVar2 < 1)) &&
     (((iVar7 == 0 || (iVar2 < 0x7fffffff)) || (iVar1 == 1)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7330(param_1,param_2,param_3);
  if (((cVar5 != '\0') && (param_1 < 0x1e)) &&
     (((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0 &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bdf1c0 FUN_141bdf1c0 body=541 status=ok
// SIG undefined FUN_141bdf1c0(void)

undefined8 FUN_141bdf1c0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26050) && (_Init_thread_header(&DAT_146a26050), DAT_146a26050 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26048 = lVar10;
    _Init_thread_footer(&DAT_146a26050);
  }
  if ((*piVar11 < DAT_146a26060) && (_Init_thread_header(&DAT_146a26060), DAT_146a26060 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26058 = lVar10;
    _Init_thread_footer(&DAT_146a26060);
  }
  lVar10 = DAT_146a26048;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26058;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7330(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bdf3e0 FUN_141bdf3e0 body=541 status=ok
// SIG undefined FUN_141bdf3e0(void)

undefined8 FUN_141bdf3e0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25f20) && (_Init_thread_header(&DAT_146a25f20), DAT_146a25f20 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25f18 = lVar10;
    _Init_thread_footer(&DAT_146a25f20);
  }
  if ((*piVar11 < DAT_146a25f30) && (_Init_thread_header(&DAT_146a25f30), DAT_146a25f30 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25f28 = lVar10;
    _Init_thread_footer(&DAT_146a25f30);
  }
  lVar10 = DAT_146a25f18;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25f28;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7330(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bdf600 FUN_141bdf600 body=541 status=ok
// SIG undefined FUN_141bdf600(void)

undefined8 FUN_141bdf600(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25dc8) && (_Init_thread_header(&DAT_146a25dc8), DAT_146a25dc8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25dc0 = lVar10;
    _Init_thread_footer(&DAT_146a25dc8);
  }
  if ((*piVar11 < DAT_146a25dd8) && (_Init_thread_header(&DAT_146a25dd8), DAT_146a25dd8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25dd0 = lVar10;
    _Init_thread_footer(&DAT_146a25dd8);
  }
  lVar10 = DAT_146a25dc0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25dd0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7330(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bdf820 FUN_141bdf820 body=541 status=ok
// SIG undefined FUN_141bdf820(void)

undefined8 FUN_141bdf820(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25ca8) && (_Init_thread_header(&DAT_146a25ca8), DAT_146a25ca8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25ca0 = lVar10;
    _Init_thread_footer(&DAT_146a25ca8);
  }
  if ((*piVar11 < DAT_146a25cb8) && (_Init_thread_header(&DAT_146a25cb8), DAT_146a25cb8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25cb0 = lVar10;
    _Init_thread_footer(&DAT_146a25cb8);
  }
  lVar10 = DAT_146a25ca0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25cb0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7330(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bdfa40 FUN_141bdfa40 body=461 status=ok
// SIG undefined FUN_141bdfa40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141bdfa40(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int *piVar6;
  
  uVar5 = 0;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar6 < DAT_146a26190) && (_Init_thread_header(&DAT_146a26190), DAT_146a26190 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar3 = uVar5;
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a26188 = uVar3;
    _Init_thread_footer(&DAT_146a26190);
  }
  if ((*piVar6 < DAT_146a261a0) && (_Init_thread_header(&DAT_146a261a0), DAT_146a261a0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar4 != (longlong *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a26198 = uVar5;
    _Init_thread_footer(&DAT_146a261a0);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be7330(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     ((cVar1 = FUN_142753a10(), cVar1 != '\0' || (iVar2 == 0)))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 141bdfc10 FUN_141bdfc10 body=553 status=ok
// SIG undefined FUN_141bdfc10(void)

undefined8 FUN_141bdfc10(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25c28) && (_Init_thread_header(&DAT_146a25c28), DAT_146a25c28 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25c20 = lVar10;
    _Init_thread_footer(&DAT_146a25c28);
  }
  if ((*piVar11 < DAT_146a25c38) && (_Init_thread_header(&DAT_146a25c38), DAT_146a25c38 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25c30 = lVar10;
    _Init_thread_footer(&DAT_146a25c38);
  }
  lVar10 = DAT_146a25c20;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25c30;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((iVar7 == 0) || (((iVar1 != 1 || (iVar2 < 1)) && ((iVar2 < 0x7fffffff || (iVar1 == 1)))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7330(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141bdfe40 FUN_141bdfe40 body=525 status=ok
// SIG undefined FUN_141bdfe40(void)

undefined8 FUN_141bdfe40(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a26100) && (_Init_thread_header(&DAT_146a26100), DAT_146a26100 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a260f8 = lVar10;
    _Init_thread_footer(&DAT_146a26100);
  }
  if ((*piVar11 < DAT_146a26110) && (_Init_thread_header(&DAT_146a26110), DAT_146a26110 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a26108 = lVar10;
    _Init_thread_footer(&DAT_146a26110);
  }
  lVar10 = DAT_146a260f8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a26108;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7330(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be0050 FUN_141be0050 body=525 status=ok
// SIG undefined FUN_141be0050(void)

undefined8 FUN_141be0050(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25fb8) && (_Init_thread_header(&DAT_146a25fb8), DAT_146a25fb8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25fb0 = lVar10;
    _Init_thread_footer(&DAT_146a25fb8);
  }
  if ((*piVar11 < DAT_146a25fc8) && (_Init_thread_header(&DAT_146a25fc8), DAT_146a25fc8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25fc0 = lVar10;
    _Init_thread_footer(&DAT_146a25fc8);
  }
  lVar10 = DAT_146a25fb0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25fc0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7330(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be0260 FUN_141be0260 body=525 status=ok
// SIG undefined FUN_141be0260(void)

undefined8 FUN_141be0260(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25e68) && (_Init_thread_header(&DAT_146a25e68), DAT_146a25e68 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25e60 = lVar10;
    _Init_thread_footer(&DAT_146a25e68);
  }
  if ((*piVar11 < DAT_146a25e78) && (_Init_thread_header(&DAT_146a25e78), DAT_146a25e78 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25e70 = lVar10;
    _Init_thread_footer(&DAT_146a25e78);
  }
  lVar10 = DAT_146a25e60;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25e70;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7330(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be0470 FUN_141be0470 body=525 status=ok
// SIG undefined FUN_141be0470(void)

undefined8 FUN_141be0470(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25d28) && (_Init_thread_header(&DAT_146a25d28), DAT_146a25d28 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25d20 = lVar10;
    _Init_thread_footer(&DAT_146a25d28);
  }
  if ((*piVar11 < DAT_146a25d38) && (_Init_thread_header(&DAT_146a25d38), DAT_146a25d38 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25d30 = lVar10;
    _Init_thread_footer(&DAT_146a25d38);
  }
  lVar10 = DAT_146a25d20;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25d30;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7330(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be0680 FUN_141be0680 body=452 status=ok
// SIG undefined FUN_141be0680(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141be0680(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int *piVar5;
  
  uVar4 = 0;
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146a26230) && (_Init_thread_header(&DAT_146a26230), DAT_146a26230 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar2 = uVar4;
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a26228 = uVar2;
    _Init_thread_footer(&DAT_146a26230);
  }
  if ((*piVar5 < DAT_146a26240) && (_Init_thread_header(&DAT_146a26240), DAT_146a26240 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar3 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a26238 = uVar4;
    _Init_thread_footer(&DAT_146a26240);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be7330(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     (cVar1 = FUN_142753a10(), cVar1 != '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 141be0850 FUN_141be0850 body=546 status=ok
// SIG undefined FUN_141be0850(void)

undefined8 FUN_141be0850(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25c68) && (_Init_thread_header(&DAT_146a25c68), DAT_146a25c68 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25c60 = lVar10;
    _Init_thread_footer(&DAT_146a25c68);
  }
  if ((*piVar11 < DAT_146a25c78) && (_Init_thread_header(&DAT_146a25c78), DAT_146a25c78 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25c70 = lVar10;
    _Init_thread_footer(&DAT_146a25c78);
  }
  lVar10 = DAT_146a25c60;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25c70;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((((iVar7 == 0) || (iVar1 != 1)) || (iVar2 < 1)) &&
     (((iVar7 == 0 || (iVar2 < 0x7fffffff)) || (iVar1 == 1)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7330(param_1,param_2,param_3);
  if (((cVar5 != '\0') && (param_1 < 0x1e)) &&
     (((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0 &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be0a80 FUN_141be0a80 body=541 status=ok
// SIG undefined FUN_141be0a80(void)

undefined8 FUN_141be0a80(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25b08) && (_Init_thread_header(&DAT_146a25b08), DAT_146a25b08 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25b00 = lVar10;
    _Init_thread_footer(&DAT_146a25b08);
  }
  if ((*piVar11 < DAT_146a25b18) && (_Init_thread_header(&DAT_146a25b18), DAT_146a25b18 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25b10 = lVar10;
    _Init_thread_footer(&DAT_146a25b18);
  }
  lVar10 = DAT_146a25b00;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25b10;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7460(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be0ca0 FUN_141be0ca0 body=541 status=ok
// SIG undefined FUN_141be0ca0(void)

undefined8 FUN_141be0ca0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25a88) && (_Init_thread_header(&DAT_146a25a88), DAT_146a25a88 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25a80 = lVar10;
    _Init_thread_footer(&DAT_146a25a88);
  }
  if ((*piVar11 < DAT_146a25a98) && (_Init_thread_header(&DAT_146a25a98), DAT_146a25a98 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25a90 = lVar10;
    _Init_thread_footer(&DAT_146a25a98);
  }
  lVar10 = DAT_146a25a80;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25a90;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7460(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be0ec0 FUN_141be0ec0 body=541 status=ok
// SIG undefined FUN_141be0ec0(void)

undefined8 FUN_141be0ec0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25a08) && (_Init_thread_header(&DAT_146a25a08), DAT_146a25a08 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25a00 = lVar10;
    _Init_thread_footer(&DAT_146a25a08);
  }
  if ((*piVar11 < DAT_146a25a18) && (_Init_thread_header(&DAT_146a25a18), DAT_146a25a18 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25a10 = lVar10;
    _Init_thread_footer(&DAT_146a25a18);
  }
  lVar10 = DAT_146a25a00;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25a10;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7460(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be10e0 FUN_141be10e0 body=541 status=ok
// SIG undefined FUN_141be10e0(void)

undefined8 FUN_141be10e0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25988) && (_Init_thread_header(&DAT_146a25988), DAT_146a25988 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25980 = lVar10;
    _Init_thread_footer(&DAT_146a25988);
  }
  if ((*piVar11 < DAT_146a25998) && (_Init_thread_header(&DAT_146a25998), DAT_146a25998 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25990 = lVar10;
    _Init_thread_footer(&DAT_146a25998);
  }
  lVar10 = DAT_146a25980;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25990;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7460(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be1300 FUN_141be1300 body=461 status=ok
// SIG undefined FUN_141be1300(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141be1300(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int *piVar6;
  
  uVar5 = 0;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar6 < DAT_146a25b88) && (_Init_thread_header(&DAT_146a25b88), DAT_146a25b88 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar3 = uVar5;
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a25b80 = uVar3;
    _Init_thread_footer(&DAT_146a25b88);
  }
  if ((*piVar6 < DAT_146a25b98) && (_Init_thread_header(&DAT_146a25b98), DAT_146a25b98 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar4 != (longlong *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a25b90 = uVar5;
    _Init_thread_footer(&DAT_146a25b98);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be7460(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     ((cVar1 = FUN_142753a10(), cVar1 == '\0' || (iVar2 == 0)))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 141be14d0 FUN_141be14d0 body=553 status=ok
// SIG undefined FUN_141be14d0(void)

undefined8 FUN_141be14d0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25908) && (_Init_thread_header(&DAT_146a25908), DAT_146a25908 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25900 = lVar10;
    _Init_thread_footer(&DAT_146a25908);
  }
  if ((*piVar11 < DAT_146a25918) && (_Init_thread_header(&DAT_146a25918), DAT_146a25918 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25910 = lVar10;
    _Init_thread_footer(&DAT_146a25918);
  }
  lVar10 = DAT_146a25900;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25910;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((iVar7 == 0) || (((iVar1 != 1 || (iVar2 < 1)) && ((iVar2 < 0x7fffffff || (iVar1 == 1)))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7460(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be1700 FUN_141be1700 body=525 status=ok
// SIG undefined FUN_141be1700(void)

undefined8 FUN_141be1700(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25b48) && (_Init_thread_header(&DAT_146a25b48), DAT_146a25b48 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25b40 = lVar10;
    _Init_thread_footer(&DAT_146a25b48);
  }
  if ((*piVar11 < DAT_146a25b58) && (_Init_thread_header(&DAT_146a25b58), DAT_146a25b58 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25b50 = lVar10;
    _Init_thread_footer(&DAT_146a25b58);
  }
  lVar10 = DAT_146a25b40;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25b50;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7460(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be1910 FUN_141be1910 body=525 status=ok
// SIG undefined FUN_141be1910(void)

undefined8 FUN_141be1910(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25ac8) && (_Init_thread_header(&DAT_146a25ac8), DAT_146a25ac8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25ac0 = lVar10;
    _Init_thread_footer(&DAT_146a25ac8);
  }
  if ((*piVar11 < DAT_146a25ad8) && (_Init_thread_header(&DAT_146a25ad8), DAT_146a25ad8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25ad0 = lVar10;
    _Init_thread_footer(&DAT_146a25ad8);
  }
  lVar10 = DAT_146a25ac0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25ad0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7460(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be1b20 FUN_141be1b20 body=525 status=ok
// SIG undefined FUN_141be1b20(void)

undefined8 FUN_141be1b20(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25a48) && (_Init_thread_header(&DAT_146a25a48), DAT_146a25a48 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25a40 = lVar10;
    _Init_thread_footer(&DAT_146a25a48);
  }
  if ((*piVar11 < DAT_146a25a58) && (_Init_thread_header(&DAT_146a25a58), DAT_146a25a58 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25a50 = lVar10;
    _Init_thread_footer(&DAT_146a25a58);
  }
  lVar10 = DAT_146a25a40;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25a50;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7460(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be1d30 FUN_141be1d30 body=525 status=ok
// SIG undefined FUN_141be1d30(void)

undefined8 FUN_141be1d30(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a259c8) && (_Init_thread_header(&DAT_146a259c8), DAT_146a259c8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a259c0 = lVar10;
    _Init_thread_footer(&DAT_146a259c8);
  }
  if ((*piVar11 < DAT_146a259d8) && (_Init_thread_header(&DAT_146a259d8), DAT_146a259d8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a259d0 = lVar10;
    _Init_thread_footer(&DAT_146a259d8);
  }
  lVar10 = DAT_146a259c0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a259d0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7460(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be1f40 FUN_141be1f40 body=452 status=ok
// SIG undefined FUN_141be1f40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141be1f40(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int *piVar5;
  
  uVar4 = 0;
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146a25bc8) && (_Init_thread_header(&DAT_146a25bc8), DAT_146a25bc8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar2 = uVar4;
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a25bc0 = uVar2;
    _Init_thread_footer(&DAT_146a25bc8);
  }
  if ((*piVar5 < DAT_146a25bd8) && (_Init_thread_header(&DAT_146a25bd8), DAT_146a25bd8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar3 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a25bd0 = uVar4;
    _Init_thread_footer(&DAT_146a25bd8);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be7460(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     (cVar1 = FUN_142753a10(), cVar1 == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 141be2110 FUN_141be2110 body=546 status=ok
// SIG undefined FUN_141be2110(void)

undefined8 FUN_141be2110(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25948) && (_Init_thread_header(&DAT_146a25948), DAT_146a25948 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25940 = lVar10;
    _Init_thread_footer(&DAT_146a25948);
  }
  if ((*piVar11 < DAT_146a25958) && (_Init_thread_header(&DAT_146a25958), DAT_146a25958 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25950 = lVar10;
    _Init_thread_footer(&DAT_146a25958);
  }
  lVar10 = DAT_146a25940;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25950;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((((iVar7 == 0) || (iVar1 != 1)) || (iVar2 < 1)) &&
     (((iVar7 == 0 || (iVar2 < 0x7fffffff)) || (iVar1 == 1)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7460(param_1,param_2,param_3);
  if (((cVar5 != '\0') && (param_1 < 0x1e)) &&
     (((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0 &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be2340 FUN_141be2340 body=541 status=ok
// SIG undefined FUN_141be2340(void)

undefined8 FUN_141be2340(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25b28) && (_Init_thread_header(&DAT_146a25b28), DAT_146a25b28 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25b20 = lVar10;
    _Init_thread_footer(&DAT_146a25b28);
  }
  if ((*piVar11 < DAT_146a25b38) && (_Init_thread_header(&DAT_146a25b38), DAT_146a25b38 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25b30 = lVar10;
    _Init_thread_footer(&DAT_146a25b38);
  }
  lVar10 = DAT_146a25b20;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25b30;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7460(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be2560 FUN_141be2560 body=541 status=ok
// SIG undefined FUN_141be2560(void)

undefined8 FUN_141be2560(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25aa8) && (_Init_thread_header(&DAT_146a25aa8), DAT_146a25aa8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25aa0 = lVar10;
    _Init_thread_footer(&DAT_146a25aa8);
  }
  if ((*piVar11 < DAT_146a25ab8) && (_Init_thread_header(&DAT_146a25ab8), DAT_146a25ab8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25ab0 = lVar10;
    _Init_thread_footer(&DAT_146a25ab8);
  }
  lVar10 = DAT_146a25aa0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25ab0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7460(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be2780 FUN_141be2780 body=541 status=ok
// SIG undefined FUN_141be2780(void)

undefined8 FUN_141be2780(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25a28) && (_Init_thread_header(&DAT_146a25a28), DAT_146a25a28 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25a20 = lVar10;
    _Init_thread_footer(&DAT_146a25a28);
  }
  if ((*piVar11 < DAT_146a25a38) && (_Init_thread_header(&DAT_146a25a38), DAT_146a25a38 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25a30 = lVar10;
    _Init_thread_footer(&DAT_146a25a38);
  }
  lVar10 = DAT_146a25a20;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25a30;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7460(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be29a0 FUN_141be29a0 body=541 status=ok
// SIG undefined FUN_141be29a0(void)

undefined8 FUN_141be29a0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a259a8) && (_Init_thread_header(&DAT_146a259a8), DAT_146a259a8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a259a0 = lVar10;
    _Init_thread_footer(&DAT_146a259a8);
  }
  if ((*piVar11 < DAT_146a259b8) && (_Init_thread_header(&DAT_146a259b8), DAT_146a259b8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a259b0 = lVar10;
    _Init_thread_footer(&DAT_146a259b8);
  }
  lVar10 = DAT_146a259a0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a259b0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7460(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be2bc0 FUN_141be2bc0 body=461 status=ok
// SIG undefined FUN_141be2bc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141be2bc0(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int *piVar6;
  
  uVar5 = 0;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar6 < DAT_146a25ba8) && (_Init_thread_header(&DAT_146a25ba8), DAT_146a25ba8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar3 = uVar5;
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a25ba0 = uVar3;
    _Init_thread_footer(&DAT_146a25ba8);
  }
  if ((*piVar6 < DAT_146a25bb8) && (_Init_thread_header(&DAT_146a25bb8), DAT_146a25bb8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar4 != (longlong *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a25bb0 = uVar5;
    _Init_thread_footer(&DAT_146a25bb8);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be7460(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     ((cVar1 = FUN_142753a10(), cVar1 != '\0' || (iVar2 == 0)))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 141be2d90 FUN_141be2d90 body=553 status=ok
// SIG undefined FUN_141be2d90(void)

undefined8 FUN_141be2d90(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25928) && (_Init_thread_header(&DAT_146a25928), DAT_146a25928 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25920 = lVar10;
    _Init_thread_footer(&DAT_146a25928);
  }
  if ((*piVar11 < DAT_146a25938) && (_Init_thread_header(&DAT_146a25938), DAT_146a25938 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25930 = lVar10;
    _Init_thread_footer(&DAT_146a25938);
  }
  lVar10 = DAT_146a25920;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25930;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((iVar7 == 0) || (((iVar1 != 1 || (iVar2 < 1)) && ((iVar2 < 0x7fffffff || (iVar1 == 1)))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7460(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be2fc0 FUN_141be2fc0 body=525 status=ok
// SIG undefined FUN_141be2fc0(void)

undefined8 FUN_141be2fc0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25b68) && (_Init_thread_header(&DAT_146a25b68), DAT_146a25b68 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25b60 = lVar10;
    _Init_thread_footer(&DAT_146a25b68);
  }
  if ((*piVar11 < DAT_146a25b78) && (_Init_thread_header(&DAT_146a25b78), DAT_146a25b78 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25b70 = lVar10;
    _Init_thread_footer(&DAT_146a25b78);
  }
  lVar10 = DAT_146a25b60;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25b70;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7460(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be31d0 FUN_141be31d0 body=525 status=ok
// SIG undefined FUN_141be31d0(void)

undefined8 FUN_141be31d0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25ae8) && (_Init_thread_header(&DAT_146a25ae8), DAT_146a25ae8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25ae0 = lVar10;
    _Init_thread_footer(&DAT_146a25ae8);
  }
  if ((*piVar11 < DAT_146a25af8) && (_Init_thread_header(&DAT_146a25af8), DAT_146a25af8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25af0 = lVar10;
    _Init_thread_footer(&DAT_146a25af8);
  }
  lVar10 = DAT_146a25ae0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25af0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7460(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be33e0 FUN_141be33e0 body=525 status=ok
// SIG undefined FUN_141be33e0(void)

undefined8 FUN_141be33e0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25a68) && (_Init_thread_header(&DAT_146a25a68), DAT_146a25a68 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25a60 = lVar10;
    _Init_thread_footer(&DAT_146a25a68);
  }
  if ((*piVar11 < DAT_146a25a78) && (_Init_thread_header(&DAT_146a25a78), DAT_146a25a78 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25a70 = lVar10;
    _Init_thread_footer(&DAT_146a25a78);
  }
  lVar10 = DAT_146a25a60;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25a70;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7460(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be35f0 FUN_141be35f0 body=525 status=ok
// SIG undefined FUN_141be35f0(void)

undefined8 FUN_141be35f0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a259e8) && (_Init_thread_header(&DAT_146a259e8), DAT_146a259e8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a259e0 = lVar10;
    _Init_thread_footer(&DAT_146a259e8);
  }
  if ((*piVar11 < DAT_146a259f8) && (_Init_thread_header(&DAT_146a259f8), DAT_146a259f8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a259f0 = lVar10;
    _Init_thread_footer(&DAT_146a259f8);
  }
  lVar10 = DAT_146a259e0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a259f0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7460(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be3800 FUN_141be3800 body=452 status=ok
// SIG undefined FUN_141be3800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141be3800(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int *piVar5;
  
  uVar4 = 0;
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146a25be8) && (_Init_thread_header(&DAT_146a25be8), DAT_146a25be8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar2 = uVar4;
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a25be0 = uVar2;
    _Init_thread_footer(&DAT_146a25be8);
  }
  if ((*piVar5 < DAT_146a25bf8) && (_Init_thread_header(&DAT_146a25bf8), DAT_146a25bf8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar3 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a25bf0 = uVar4;
    _Init_thread_footer(&DAT_146a25bf8);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be7460(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     (cVar1 = FUN_142753a10(), cVar1 != '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 141be39d0 FUN_141be39d0 body=546 status=ok
// SIG undefined FUN_141be39d0(void)

undefined8 FUN_141be39d0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25968) && (_Init_thread_header(&DAT_146a25968), DAT_146a25968 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25960 = lVar10;
    _Init_thread_footer(&DAT_146a25968);
  }
  if ((*piVar11 < DAT_146a25978) && (_Init_thread_header(&DAT_146a25978), DAT_146a25978 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25970 = lVar10;
    _Init_thread_footer(&DAT_146a25978);
  }
  lVar10 = DAT_146a25960;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25970;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((((iVar7 == 0) || (iVar1 != 1)) || (iVar2 < 1)) &&
     (((iVar7 == 0 || (iVar2 < 0x7fffffff)) || (iVar1 == 1)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7460(param_1,param_2,param_3);
  if (((cVar5 != '\0') && (param_1 < 0x1e)) &&
     (((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0 &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be3c00 FUN_141be3c00 body=541 status=ok
// SIG undefined FUN_141be3c00(void)

undefined8 FUN_141be3c00(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25808) && (_Init_thread_header(&DAT_146a25808), DAT_146a25808 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25800 = lVar10;
    _Init_thread_footer(&DAT_146a25808);
  }
  if ((*piVar11 < DAT_146a25818) && (_Init_thread_header(&DAT_146a25818), DAT_146a25818 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25810 = lVar10;
    _Init_thread_footer(&DAT_146a25818);
  }
  lVar10 = DAT_146a25800;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25810;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be3e20 FUN_141be3e20 body=541 status=ok
// SIG undefined FUN_141be3e20(void)

undefined8 FUN_141be3e20(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25788) && (_Init_thread_header(&DAT_146a25788), DAT_146a25788 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25780 = lVar10;
    _Init_thread_footer(&DAT_146a25788);
  }
  if ((*piVar11 < DAT_146a25798) && (_Init_thread_header(&DAT_146a25798), DAT_146a25798 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25790 = lVar10;
    _Init_thread_footer(&DAT_146a25798);
  }
  lVar10 = DAT_146a25780;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25790;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be4040 FUN_141be4040 body=541 status=ok
// SIG undefined FUN_141be4040(void)

undefined8 FUN_141be4040(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25708) && (_Init_thread_header(&DAT_146a25708), DAT_146a25708 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25700 = lVar10;
    _Init_thread_footer(&DAT_146a25708);
  }
  if ((*piVar11 < DAT_146a25718) && (_Init_thread_header(&DAT_146a25718), DAT_146a25718 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25710 = lVar10;
    _Init_thread_footer(&DAT_146a25718);
  }
  lVar10 = DAT_146a25700;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25710;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be4260 FUN_141be4260 body=541 status=ok
// SIG undefined FUN_141be4260(void)

undefined8 FUN_141be4260(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25688) && (_Init_thread_header(&DAT_146a25688), DAT_146a25688 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25680 = lVar10;
    _Init_thread_footer(&DAT_146a25688);
  }
  if ((*piVar11 < DAT_146a25698) && (_Init_thread_header(&DAT_146a25698), DAT_146a25698 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25690 = lVar10;
    _Init_thread_footer(&DAT_146a25698);
  }
  lVar10 = DAT_146a25680;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25690;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be4480 FUN_141be4480 body=461 status=ok
// SIG undefined FUN_141be4480(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141be4480(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int *piVar6;
  
  uVar5 = 0;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar6 < DAT_146a25888) && (_Init_thread_header(&DAT_146a25888), DAT_146a25888 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar3 = uVar5;
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a25880 = uVar3;
    _Init_thread_footer(&DAT_146a25888);
  }
  if ((*piVar6 < DAT_146a25898) && (_Init_thread_header(&DAT_146a25898), DAT_146a25898 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar4 != (longlong *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a25890 = uVar5;
    _Init_thread_footer(&DAT_146a25898);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be7230(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     ((cVar1 = FUN_142753a10(), cVar1 == '\0' || (iVar2 == 0)))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 141be4650 FUN_141be4650 body=553 status=ok
// SIG undefined FUN_141be4650(void)

undefined8 FUN_141be4650(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25608) && (_Init_thread_header(&DAT_146a25608), DAT_146a25608 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25600 = lVar10;
    _Init_thread_footer(&DAT_146a25608);
  }
  if ((*piVar11 < DAT_146a25618) && (_Init_thread_header(&DAT_146a25618), DAT_146a25618 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25610 = lVar10;
    _Init_thread_footer(&DAT_146a25618);
  }
  lVar10 = DAT_146a25600;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25610;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((iVar7 == 0) || (((iVar1 != 1 || (iVar2 < 1)) && ((iVar2 < 0x7fffffff || (iVar1 == 1)))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be4880 FUN_141be4880 body=525 status=ok
// SIG undefined FUN_141be4880(void)

undefined8 FUN_141be4880(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25848) && (_Init_thread_header(&DAT_146a25848), DAT_146a25848 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25840 = lVar10;
    _Init_thread_footer(&DAT_146a25848);
  }
  if ((*piVar11 < DAT_146a25858) && (_Init_thread_header(&DAT_146a25858), DAT_146a25858 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25850 = lVar10;
    _Init_thread_footer(&DAT_146a25858);
  }
  lVar10 = DAT_146a25840;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25850;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be4a90 FUN_141be4a90 body=525 status=ok
// SIG undefined FUN_141be4a90(void)

undefined8 FUN_141be4a90(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a257c8) && (_Init_thread_header(&DAT_146a257c8), DAT_146a257c8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a257c0 = lVar10;
    _Init_thread_footer(&DAT_146a257c8);
  }
  if ((*piVar11 < DAT_146a257d8) && (_Init_thread_header(&DAT_146a257d8), DAT_146a257d8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a257d0 = lVar10;
    _Init_thread_footer(&DAT_146a257d8);
  }
  lVar10 = DAT_146a257c0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a257d0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be4ca0 FUN_141be4ca0 body=525 status=ok
// SIG undefined FUN_141be4ca0(void)

undefined8 FUN_141be4ca0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25748) && (_Init_thread_header(&DAT_146a25748), DAT_146a25748 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25740 = lVar10;
    _Init_thread_footer(&DAT_146a25748);
  }
  if ((*piVar11 < DAT_146a25758) && (_Init_thread_header(&DAT_146a25758), DAT_146a25758 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25750 = lVar10;
    _Init_thread_footer(&DAT_146a25758);
  }
  lVar10 = DAT_146a25740;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25750;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be4eb0 FUN_141be4eb0 body=525 status=ok
// SIG undefined FUN_141be4eb0(void)

undefined8 FUN_141be4eb0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a256c8) && (_Init_thread_header(&DAT_146a256c8), DAT_146a256c8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a256c0 = lVar10;
    _Init_thread_footer(&DAT_146a256c8);
  }
  if ((*piVar11 < DAT_146a256d8) && (_Init_thread_header(&DAT_146a256d8), DAT_146a256d8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a256d0 = lVar10;
    _Init_thread_footer(&DAT_146a256d8);
  }
  lVar10 = DAT_146a256c0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a256d0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be50c0 FUN_141be50c0 body=452 status=ok
// SIG undefined FUN_141be50c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141be50c0(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int *piVar5;
  
  uVar4 = 0;
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146a258c8) && (_Init_thread_header(&DAT_146a258c8), DAT_146a258c8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar2 = uVar4;
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a258c0 = uVar2;
    _Init_thread_footer(&DAT_146a258c8);
  }
  if ((*piVar5 < DAT_146a258d8) && (_Init_thread_header(&DAT_146a258d8), DAT_146a258d8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar3 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a258d0 = uVar4;
    _Init_thread_footer(&DAT_146a258d8);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be7230(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     (cVar1 = FUN_142753a10(), cVar1 == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 141be5290 FUN_141be5290 body=546 status=ok
// SIG undefined FUN_141be5290(void)

undefined8 FUN_141be5290(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25648) && (_Init_thread_header(&DAT_146a25648), DAT_146a25648 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25640 = lVar10;
    _Init_thread_footer(&DAT_146a25648);
  }
  if ((*piVar11 < DAT_146a25658) && (_Init_thread_header(&DAT_146a25658), DAT_146a25658 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25650 = lVar10;
    _Init_thread_footer(&DAT_146a25658);
  }
  lVar10 = DAT_146a25640;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25650;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((((iVar7 == 0) || (iVar1 != 1)) || (iVar2 < 1)) &&
     (((iVar7 == 0 || (iVar2 < 0x7fffffff)) || (iVar1 == 1)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if (((cVar5 != '\0') && (param_1 < 0x1e)) &&
     (((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0 &&
      ((cVar5 = FUN_142753a10(), cVar5 != '\0' && (bVar3)))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be54c0 FUN_141be54c0 body=541 status=ok
// SIG undefined FUN_141be54c0(void)

undefined8 FUN_141be54c0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25828) && (_Init_thread_header(&DAT_146a25828), DAT_146a25828 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25820 = lVar10;
    _Init_thread_footer(&DAT_146a25828);
  }
  if ((*piVar11 < DAT_146a25838) && (_Init_thread_header(&DAT_146a25838), DAT_146a25838 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25830 = lVar10;
    _Init_thread_footer(&DAT_146a25838);
  }
  lVar10 = DAT_146a25820;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25830;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be56e0 FUN_141be56e0 body=541 status=ok
// SIG undefined FUN_141be56e0(void)

undefined8 FUN_141be56e0(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a257a8) && (_Init_thread_header(&DAT_146a257a8), DAT_146a257a8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a257a0 = lVar10;
    _Init_thread_footer(&DAT_146a257a8);
  }
  if ((*piVar11 < DAT_146a257b8) && (_Init_thread_header(&DAT_146a257b8), DAT_146a257b8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a257b0 = lVar10;
    _Init_thread_footer(&DAT_146a257b8);
  }
  lVar10 = DAT_146a257a0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a257b0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be5900 FUN_141be5900 body=541 status=ok
// SIG undefined FUN_141be5900(void)

undefined8 FUN_141be5900(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25728) && (_Init_thread_header(&DAT_146a25728), DAT_146a25728 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25720 = lVar10;
    _Init_thread_footer(&DAT_146a25728);
  }
  if ((*piVar11 < DAT_146a25738) && (_Init_thread_header(&DAT_146a25738), DAT_146a25738 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25730 = lVar10;
    _Init_thread_footer(&DAT_146a25738);
  }
  lVar10 = DAT_146a25720;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25730;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be5b20 FUN_141be5b20 body=541 status=ok
// SIG undefined FUN_141be5b20(void)

undefined8 FUN_141be5b20(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a256a8) && (_Init_thread_header(&DAT_146a256a8), DAT_146a256a8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a256a0 = lVar10;
    _Init_thread_footer(&DAT_146a256a8);
  }
  if ((*piVar11 < DAT_146a256b8) && (_Init_thread_header(&DAT_146a256b8), DAT_146a256b8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a256b0 = lVar10;
    _Init_thread_footer(&DAT_146a256b8);
  }
  lVar10 = DAT_146a256a0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a256b0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be5d40 FUN_141be5d40 body=461 status=ok
// SIG undefined FUN_141be5d40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141be5d40(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int *piVar6;
  
  uVar5 = 0;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar6 < DAT_146a258a8) && (_Init_thread_header(&DAT_146a258a8), DAT_146a258a8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar3 = uVar5;
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a258a0 = uVar3;
    _Init_thread_footer(&DAT_146a258a8);
  }
  if ((*piVar6 < DAT_146a258b8) && (_Init_thread_header(&DAT_146a258b8), DAT_146a258b8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar4 != (longlong *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    _DAT_146a258b0 = uVar5;
    _Init_thread_footer(&DAT_146a258b8);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be7230(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     ((cVar1 = FUN_142753a10(), cVar1 != '\0' || (iVar2 == 0)))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 141be5f10 FUN_141be5f10 body=553 status=ok
// SIG undefined FUN_141be5f10(void)

undefined8 FUN_141be5f10(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25628) && (_Init_thread_header(&DAT_146a25628), DAT_146a25628 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25620 = lVar10;
    _Init_thread_footer(&DAT_146a25628);
  }
  if ((*piVar11 < DAT_146a25638) && (_Init_thread_header(&DAT_146a25638), DAT_146a25638 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25630 = lVar10;
    _Init_thread_footer(&DAT_146a25638);
  }
  lVar10 = DAT_146a25620;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25630;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((iVar7 == 0) || (((iVar1 != 1 || (iVar2 < 1)) && ((iVar2 < 0x7fffffff || (iVar1 == 1)))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if (((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (iVar7 != 0)))) && (bVar3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be6140 FUN_141be6140 body=525 status=ok
// SIG undefined FUN_141be6140(void)

undefined8 FUN_141be6140(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25868) && (_Init_thread_header(&DAT_146a25868), DAT_146a25868 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25860 = lVar10;
    _Init_thread_footer(&DAT_146a25868);
  }
  if ((*piVar11 < DAT_146a25878) && (_Init_thread_header(&DAT_146a25878), DAT_146a25878 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25870 = lVar10;
    _Init_thread_footer(&DAT_146a25878);
  }
  lVar10 = DAT_146a25860;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25870;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 1)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be6350 FUN_141be6350 body=525 status=ok
// SIG undefined FUN_141be6350(void)

undefined8 FUN_141be6350(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a257e8) && (_Init_thread_header(&DAT_146a257e8), DAT_146a257e8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a257e0 = lVar10;
    _Init_thread_footer(&DAT_146a257e8);
  }
  if ((*piVar11 < DAT_146a257f8) && (_Init_thread_header(&DAT_146a257f8), DAT_146a257f8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a257f0 = lVar10;
    _Init_thread_footer(&DAT_146a257f8);
  }
  lVar10 = DAT_146a257e0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a257f0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 2)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be6560 FUN_141be6560 body=525 status=ok
// SIG undefined FUN_141be6560(void)

undefined8 FUN_141be6560(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25768) && (_Init_thread_header(&DAT_146a25768), DAT_146a25768 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25760 = lVar10;
    _Init_thread_footer(&DAT_146a25768);
  }
  if ((*piVar11 < DAT_146a25778) && (_Init_thread_header(&DAT_146a25778), DAT_146a25778 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25770 = lVar10;
    _Init_thread_footer(&DAT_146a25778);
  }
  lVar10 = DAT_146a25760;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25770;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 3)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be6770 FUN_141be6770 body=525 status=ok
// SIG undefined FUN_141be6770(void)

undefined8 FUN_141be6770(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a256e8) && (_Init_thread_header(&DAT_146a256e8), DAT_146a256e8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a256e0 = lVar10;
    _Init_thread_footer(&DAT_146a256e8);
  }
  if ((*piVar11 < DAT_146a256f8) && (_Init_thread_header(&DAT_146a256f8), DAT_146a256f8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a256f0 = lVar10;
    _Init_thread_footer(&DAT_146a256f8);
  }
  lVar10 = DAT_146a256e0;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a256f0;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar7 == 0) || (iVar2 < 4)) || (iVar1 == 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if ((((cVar5 != '\0') && (param_1 < 0x1e)) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) &&
     ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be6980 FUN_141be6980 body=452 status=ok
// SIG undefined FUN_141be6980(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141be6980(uint param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int *piVar5;
  
  uVar4 = 0;
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146a258e8) && (_Init_thread_header(&DAT_146a258e8), DAT_146a258e8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    uVar2 = uVar4;
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a258e0 = uVar2;
    _Init_thread_footer(&DAT_146a258e8);
  }
  if ((*piVar5 < DAT_146a258f8) && (_Init_thread_header(&DAT_146a258f8), DAT_146a258f8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar3 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146a258f0 = uVar4;
    _Init_thread_footer(&DAT_146a258f8);
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  (**(code **)(*param_2 + 0x1f8))(param_2);
  cVar1 = FUN_141be7230(param_1,param_2,param_3);
  if ((((cVar1 == '\0') || (0x1d < param_1)) || ((0x25e2cf88U >> (param_1 & 0x1f) & 1) == 0)) ||
     (cVar1 = FUN_142753a10(), cVar1 != '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 141be6b50 FUN_141be6b50 body=546 status=ok
// SIG undefined FUN_141be6b50(void)

undefined8 FUN_141be6b50(uint param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146a25668) && (_Init_thread_header(&DAT_146a25668), DAT_146a25668 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25660 = lVar10;
    _Init_thread_footer(&DAT_146a25668);
  }
  if ((*piVar11 < DAT_146a25678) && (_Init_thread_header(&DAT_146a25678), DAT_146a25678 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a25670 = lVar10;
    _Init_thread_footer(&DAT_146a25678);
  }
  lVar10 = DAT_146a25660;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 4;
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    lVar8 = 4;
  }
  else {
    lVar8 = 0;
  }
  lVar4 = DAT_146a25670;
  iVar1 = *(int *)(lVar8 + lVar10);
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  iVar2 = *(int *)(lVar12 + lVar4);
  iVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((((iVar7 == 0) || (iVar1 != 1)) || (iVar2 < 1)) &&
     (((iVar7 == 0 || (iVar2 < 0x7fffffff)) || (iVar1 == 1)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar5 = FUN_141be7230(param_1,param_2,param_3);
  if (((cVar5 != '\0') && (param_1 < 0x1e)) &&
     (((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0 &&
      ((cVar5 = FUN_142753a10(), cVar5 == '\0' && (bVar3)))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be6d80 FUN_141be6d80 body=51 status=ok
// SIG undefined FUN_141be6d80(void)

undefined8 FUN_141be6d80(uint param_1)

{
  char cVar1;
  
  if ((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) {
    cVar1 = FUN_141ae17b0();
    if (cVar1 != '\0') {
      cVar1 = FUN_142753a10();
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 141be6dc0 FUN_141be6dc0 body=51 status=ok
// SIG undefined FUN_141be6dc0(void)

undefined8 FUN_141be6dc0(uint param_1)

{
  char cVar1;
  
  if ((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) {
    cVar1 = FUN_141ae17b0();
    if (cVar1 != '\0') {
      cVar1 = FUN_142753a10();
      if (cVar1 == '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 141be6e00 ShouldCompilePermutation body=42 status=ok
// SIG undefined ShouldCompilePermutation(void)

undefined8 TMobileBasePassVS<TUniformLightMapPolicy<0>,1>::ShouldCompilePermutation(uint param_1)

{
  char cVar1;
  
  if ((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) {
    cVar1 = FUN_142753a10();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141be6e30 ShouldCompilePermutation body=42 status=ok
// SIG undefined ShouldCompilePermutation(void)

undefined8 TMobileBasePassVS<TUniformLightMapPolicy<0>,0>::ShouldCompilePermutation(uint param_1)

{
  char cVar1;
  
  if ((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) {
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141be6e60 FUN_141be6e60 body=51 status=ok
// SIG undefined FUN_141be6e60(void)

undefined8 FUN_141be6e60(uint param_1)

{
  char cVar1;
  
  if ((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) {
    cVar1 = FUN_141be75a0();
    if (cVar1 != '\0') {
      cVar1 = FUN_142753a10();
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 141be6ea0 FUN_141be6ea0 body=51 status=ok
// SIG undefined FUN_141be6ea0(void)

undefined8 FUN_141be6ea0(uint param_1)

{
  char cVar1;
  
  if ((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) {
    cVar1 = FUN_141be75a0();
    if (cVar1 != '\0') {
      cVar1 = FUN_142753a10();
      if (cVar1 == '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 141be6ee0 FUN_141be6ee0 body=51 status=ok
// SIG undefined FUN_141be6ee0(void)

undefined8 FUN_141be6ee0(uint param_1)

{
  char cVar1;
  
  if ((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) {
    cVar1 = FUN_141be7230();
    if (cVar1 != '\0') {
      cVar1 = FUN_142753a10();
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 141be6f20 FUN_141be6f20 body=51 status=ok
// SIG undefined FUN_141be6f20(void)

undefined8 FUN_141be6f20(uint param_1)

{
  char cVar1;
  
  if ((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) {
    cVar1 = FUN_141be7230();
    if (cVar1 != '\0') {
      cVar1 = FUN_142753a10();
      if (cVar1 == '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 141be6f60 FUN_141be6f60 body=51 status=ok
// SIG undefined FUN_141be6f60(void)

undefined8 FUN_141be6f60(uint param_1)

{
  char cVar1;
  
  if ((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) {
    cVar1 = FUN_141be77f0();
    if (cVar1 != '\0') {
      cVar1 = FUN_142753a10();
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 141be6fa0 FUN_141be6fa0 body=51 status=ok
// SIG undefined FUN_141be6fa0(void)

undefined8 FUN_141be6fa0(uint param_1)

{
  char cVar1;
  
  if ((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) {
    cVar1 = FUN_141be77f0();
    if (cVar1 != '\0') {
      cVar1 = FUN_142753a10();
      if (cVar1 == '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 141be6fe0 FUN_141be6fe0 body=51 status=ok
// SIG undefined FUN_141be6fe0(void)

undefined8 FUN_141be6fe0(uint param_1)

{
  char cVar1;
  
  if ((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) {
    cVar1 = FUN_141be76d0();
    if (cVar1 != '\0') {
      cVar1 = FUN_142753a10();
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 141be7020 FUN_141be7020 body=51 status=ok
// SIG undefined FUN_141be7020(void)

undefined8 FUN_141be7020(uint param_1)

{
  char cVar1;
  
  if ((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) {
    cVar1 = FUN_141be76d0();
    if (cVar1 != '\0') {
      cVar1 = FUN_142753a10();
      if (cVar1 == '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 141be7060 FUN_141be7060 body=51 status=ok
// SIG undefined FUN_141be7060(void)

undefined8 FUN_141be7060(uint param_1)

{
  char cVar1;
  
  if ((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) {
    cVar1 = FUN_141be7910();
    if (cVar1 != '\0') {
      cVar1 = FUN_142753a10();
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 141be70a0 FUN_141be70a0 body=51 status=ok
// SIG undefined FUN_141be70a0(void)

undefined8 FUN_141be70a0(uint param_1)

{
  char cVar1;
  
  if ((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) {
    cVar1 = FUN_141be7910();
    if (cVar1 != '\0') {
      cVar1 = FUN_142753a10();
      if (cVar1 == '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 141be70e0 FUN_141be70e0 body=51 status=ok
// SIG undefined FUN_141be70e0(void)

undefined8 FUN_141be70e0(uint param_1)

{
  char cVar1;
  
  if ((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) {
    cVar1 = FUN_141be7330();
    if (cVar1 != '\0') {
      cVar1 = FUN_142753a10();
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 141be7120 FUN_141be7120 body=51 status=ok
// SIG undefined FUN_141be7120(void)

undefined8 FUN_141be7120(uint param_1)

{
  char cVar1;
  
  if ((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) {
    cVar1 = FUN_141be7330();
    if (cVar1 != '\0') {
      cVar1 = FUN_142753a10();
      if (cVar1 == '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 141be7160 FUN_141be7160 body=51 status=ok
// SIG undefined FUN_141be7160(void)

undefined8 FUN_141be7160(uint param_1)

{
  char cVar1;
  
  if ((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) {
    cVar1 = FUN_141be7460();
    if (cVar1 != '\0') {
      cVar1 = FUN_142753a10();
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 141be71a0 FUN_141be71a0 body=51 status=ok
// SIG undefined FUN_141be71a0(void)

undefined8 FUN_141be71a0(uint param_1)

{
  char cVar1;
  
  if ((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) {
    cVar1 = FUN_141be7460();
    if (cVar1 != '\0') {
      cVar1 = FUN_142753a10();
      if (cVar1 == '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 141be71e0 ShouldCompilePermutation body=74 status=ok
// SIG undefined ShouldCompilePermutation(void)

undefined8 FLpvVisualiseGS::ShouldCompilePermutation(uint *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  
  uVar1 = *param_1;
  iVar3 = FUN_1419ef5f0(uVar1);
  if (2 < iVar3) {
    iVar3 = FUN_1419ef5f0(uVar1);
    if ((1 < iVar3) && ((0x1d < uVar1 || ((0x28e71800U >> (uVar1 & 0x1f) & 1) == 0)))) {
      cVar2 = FUN_141ba1700(uVar1);
      if (cVar2 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 141be7230 FUN_141be7230 body=251 status=ok
// SIG undefined FUN_141be7230(void)

ulonglong FUN_141be7230(undefined8 param_1,longlong *param_2)

{
  DWORD DVar1;
  ulonglong uVar2;
  undefined4 extraout_var;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469fe6c8) && (_Init_thread_header(&DAT_1469fe6c8), DAT_1469fe6c8 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AllowStaticLighting");
    lVar4 = lVar5;
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    DAT_1469fe6c0 = lVar4;
    _Init_thread_footer(&DAT_1469fe6c8);
  }
  lVar4 = DAT_1469fe6c0;
  uVar2 = FUN_1415ad720(&DAT_1468e2448);
  if (((char)uVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar1 = GetCurrentThreadId();
    uVar2 = CONCAT71((int7)(CONCAT44(extraout_var,DVar1) >> 8),DVar1 == DAT_1468c21c0);
    if (DVar1 != DAT_1468c21c0) {
      lVar5 = 4;
    }
  }
  if (*(int *)(lVar5 + lVar4) != 0) {
    uVar2 = (**(code **)(*param_2 + 0x1f8))(param_2);
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141be7330 FUN_141be7330 body=294 status=ok
// SIG undefined FUN_141be7330(void)

undefined8 FUN_141be7330(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  DWORD DVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469fe698) && (_Init_thread_header(&DAT_1469fe698), DAT_1469fe698 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.Mobile.AllowDistanceFieldShadows");
    lVar5 = lVar6;
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_1469fe690 = lVar5;
    _Init_thread_footer(&DAT_1469fe698);
  }
  lVar5 = DAT_1469fe690;
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 != DAT_1468c21c0) {
      lVar6 = 4;
    }
  }
  if ((*(int *)(lVar6 + lVar5) == 1) &&
     (cVar1 = FUN_141ae17b0(param_1,param_2,param_3), cVar1 != '\0')) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 141be7460 FUN_141be7460 body=314 status=ok
// SIG undefined FUN_141be7460(void)

undefined8 FUN_141be7460(undefined4 param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  DWORD DVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469fe6b8) && (_Init_thread_header(&DAT_1469fe6b8), DAT_1469fe6b8 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.Mobile.EnableStaticAndCSMShadowReceivers");
    lVar6 = lVar7;
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe6b0 = lVar6;
    _Init_thread_footer(&DAT_1469fe6b8);
  }
  lVar6 = DAT_1469fe6b0;
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 != DAT_1468c21c0) {
      lVar7 = 4;
    }
  }
  if (((*(int *)(lVar7 + lVar6) == 1) &&
      (iVar3 = (**(code **)(*param_2 + 0x1f8))(param_2), iVar3 != 0)) &&
     (cVar1 = FUN_141be7330(param_1,param_2,param_3), cVar1 != '\0')) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 141be75a0 FUN_141be75a0 body=294 status=ok
// SIG undefined FUN_141be75a0(void)

undefined8 FUN_141be75a0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  DWORD DVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469fe6d8) && (_Init_thread_header(&DAT_1469fe6d8), DAT_1469fe6d8 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.Mobile.AllowMovableDirectionalLights");
    lVar5 = lVar6;
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_1469fe6d0 = lVar5;
    _Init_thread_footer(&DAT_1469fe6d8);
  }
  lVar5 = DAT_1469fe6d0;
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 != DAT_1468c21c0) {
      lVar6 = 4;
    }
  }
  if ((*(int *)(lVar6 + lVar5) == 0) ||
     (cVar1 = FUN_141be7230(param_1,param_2,param_3), cVar1 == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 141be76d0 FUN_141be76d0 body=277 status=ok
// SIG undefined FUN_141be76d0(void)

undefined8 FUN_141be76d0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  DWORD DVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469fe6f8) && (_Init_thread_header(&DAT_1469fe6f8), DAT_1469fe6f8 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.Mobile.AllowMovableDirectionalLights");
    lVar5 = lVar6;
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_1469fe6f0 = lVar5;
    _Init_thread_footer(&DAT_1469fe6f8);
  }
  lVar5 = DAT_1469fe6f0;
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 != DAT_1468c21c0) {
      lVar6 = 4;
    }
  }
  if ((*(int *)(lVar6 + lVar5) != 0) &&
     (iVar3 = (**(code **)(*param_2 + 0x1f8))(param_2), iVar3 != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be77f0 FUN_141be77f0 body=277 status=ok
// SIG undefined FUN_141be77f0(void)

undefined8 FUN_141be77f0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  DWORD DVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469fe6e8) && (_Init_thread_header(&DAT_1469fe6e8), DAT_1469fe6e8 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.Mobile.AllowMovableDirectionalLights");
    lVar5 = lVar6;
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_1469fe6e0 = lVar5;
    _Init_thread_footer(&DAT_1469fe6e8);
  }
  lVar5 = DAT_1469fe6e0;
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 != DAT_1468c21c0) {
      lVar6 = 4;
    }
  }
  if ((*(int *)(lVar6 + lVar5) != 0) &&
     (iVar3 = (**(code **)(*param_2 + 0x1f8))(param_2), iVar3 != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be7910 FUN_141be7910 body=509 status=ok
// SIG undefined FUN_141be7910(void)

undefined8 FUN_141be7910(undefined4 param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  DWORD DVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar8 < DAT_1469fe714) && (_Init_thread_header(&DAT_1469fe714), DAT_1469fe714 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.Mobile.AllowMovableDirectionalLights");
    lVar6 = 0;
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe708 = lVar6;
    _Init_thread_footer(&DAT_1469fe714);
  }
  lVar6 = DAT_1469fe708;
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  lVar7 = 4;
  if (((cVar1 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar2 = GetCurrentThreadId(), DVar2 != DAT_1468c21c0)) {
    lVar4 = 4;
  }
  else {
    lVar4 = 0;
  }
  iVar3 = *(int *)(lVar4 + lVar6);
  if ((*piVar8 < DAT_1469fe730) && (_Init_thread_header(&DAT_1469fe730), DAT_1469fe730 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AllowStaticLighting");
    lVar6 = 0;
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe728 = lVar6;
    _Init_thread_footer(&DAT_1469fe730);
  }
  lVar6 = DAT_1469fe728;
  if (DAT_1469fe728 != 0) {
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar1 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar2 = GetCurrentThreadId(), DVar2 == DAT_1468c21c0)) {
      lVar7 = 0;
    }
    if (*(int *)(lVar7 + lVar6) == 0) {
      return 0;
    }
  }
  if (((iVar3 != 0) && (iVar3 = (**(code **)(*param_2 + 0x1f8))(param_2), iVar3 != 0)) &&
     (cVar1 = FUN_141ae17b0(param_1,param_2,param_3), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 141be7b10 FUN_141be7b10 body=107 status=ok
// SIG undefined FUN_141be7b10(void)

bool FUN_141be7b10(undefined4 *param_1)

{
  int iVar1;
  int local_18;
  char local_14;
  char local_13;
  char local_11;
  char local_10;
  char local_e;
  
  TShaderPermutationDomain<FDeferredLightPS::FSourceShapeDim,FDeferredLightPS::FSourceTextureDim,FDeferredLightPS::FIESProfileDim,FDeferredLightPS::FInverseSquaredDim,FDeferredLightPS::FVisualizeCullingDim,FDeferredLightPS::FLightingChannelsDim,FDeferredLightPS::FTransmissionDim,FDeferredLightPS::FHairLighting>
  ::
  TShaderPermutationDomain<FDeferredLightPS::FSourceShapeDim,FDeferredLightPS::FSourceTextureDim,FDeferredLightPS::FIESProfileDim,FDeferredLightPS::FInverseSquaredDim,FDeferredLightPS::FVisualizeCullingDim,FDeferredLightPS::FLightingChannelsDim,FDeferredLightPS::FTransmissionDim,FDeferredLightPS::FHairLighting>
            (&local_18,param_1[1]);
  if (local_18 == 0) {
    if (local_14 != '\0') {
      return false;
    }
    if (local_13 != '\0') {
      return false;
    }
  }
  else if ((local_18 == 2) && (local_13 == '\0')) {
    return false;
  }
  if ((local_e != '\0') && (((local_18 != 1 || (local_11 != '\0')) || (local_10 != '\0')))) {
    return false;
  }
  iVar1 = FUN_1419ef5f0(*param_1);
  return 1 < iVar1;
}



// FUNCTION 141be7b80 FUN_141be7b80 body=159 status=ok
// SIG undefined FUN_141be7b80(void)

ulonglong FUN_141be7b80(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong in_RAX;
  longlong lVar3;
  
  if (*(char *)(param_2 + 0x1a98) == '\0') goto LAB_141be7c19;
  if ((*(byte *)(param_1 + 0x90) & 4) != 0) {
    uVar1 = *(uint *)(param_1 + 0x58);
    if (((int)uVar1 < 0) || (*(int *)(param_2 + 0x1e20) <= (int)uVar1)) goto LAB_141be7c19;
    lVar3 = *(longlong *)(param_2 + 0x1e18);
    if (*(longlong *)(param_2 + 0x1e18) == 0) {
      lVar3 = param_2 + 0x1e08;
    }
    uVar2 = *(uint *)(lVar3 + (longlong)((int)(uVar1 + ((int)uVar1 >> 0x1f & 0x1fU)) >> 5) * 4);
    in_RAX = (ulonglong)uVar2;
    if ((uVar2 >> (uVar1 & 0x1f) & 1) == 0) goto LAB_141be7c19;
  }
  if (((*(char *)(param_2 + 0x1208) == '\0') ||
      (in_RAX = *(ulonglong *)(param_1 + 0x30), (*(uint *)(in_RAX + 0x180) >> 3 & 1) != 0)) &&
     ((in_RAX = *(ulonglong *)(param_1 + 0x30), (*(byte *)(in_RAX + 0x189) & 1) != 0 ||
      ((*(uint *)(param_2 + 0x28cc) & 0x400) != 0)))) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
LAB_141be7c19:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141be7c20 FUN_141be7c20 body=403 status=ok
// SIG undefined FUN_141be7c20(void)

undefined8 FUN_141be7c20(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  float fVar2;
  float extraout_XMM0_Da;
  float fVar3;
  float fVar4;
  float local_48;
  float local_44;
  float local_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_1c;
  
  uStack_30 = *(undefined4 *)(param_1 + 0x8e4);
  local_38 = *(undefined8 *)(param_1 + 0x8dc);
  (**(code **)(**(longlong **)(param_2 + 0x30) + 0x88))
            (*(longlong **)(param_2 + 0x30),&local_48,&local_38);
  uStack_2c = 0x3f800000;
  local_1c = 0x3f800000;
  fVar2 = *(float *)(param_1 + 0x8e4) - local_40;
  fVar4 = *(float *)(param_1 + 0x8e0) - local_44;
  fVar3 = *(float *)(param_1 + 0x8dc) - local_48;
  if ((0.0 < *(float *)(param_1 + 0x5cc) * 1.0 + local_40 * *(float *)(param_1 + 0x5bc) +
             local_44 * *(float *)(param_1 + 0x5ac) + local_48 * *(float *)(param_1 + 0x59c)) &&
     (((plVar1 = *(longlong **)(param_2 + 0x30),
       1e-05 <= *(float *)(plVar1 + 0x20) * *(float *)(plVar1 + 0x20) ||
       (1e-05 <= *(float *)((longlong)plVar1 + 0x104) * *(float *)((longlong)plVar1 + 0x104))) ||
      (1e-05 <= *(float *)(plVar1 + 0x21) * *(float *)(plVar1 + 0x21))))) {
    if (((char)plVar1[0x31] != '\0') &&
       ((**(code **)(*plVar1 + 0x18))(),
       extraout_XMM0_Da * 5.0 <= SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) + 200.0)) {
      return 0;
    }
    return 1;
  }
  return 0;
}



// FUNCTION 141be7dc0 FUN_141be7dc0 body=118 status=ok
// SIG undefined FUN_141be7dc0(void)

ulonglong FUN_141be7dc0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = *(ulonglong *)(param_1 + 0x30);
  if (((1e-05 <= *(float *)(uVar3 + 0x100) * *(float *)(uVar3 + 0x100)) ||
      (1e-05 <= *(float *)(uVar3 + 0x104) * *(float *)(uVar3 + 0x104))) ||
     (1e-05 <= *(float *)(uVar3 + 0x108) * *(float *)(uVar3 + 0x108))) {
    puVar1 = (uint *)(uVar3 + 0x180);
    uVar2 = *puVar1 >> 2;
    uVar3 = (ulonglong)uVar2;
    if (((uVar2 & 1) == 0) ||
       ((((*(byte *)(param_1 + 0x90) & 1) == 0 ||
         (uVar3 = (ulonglong)DAT_1464c1f74, (int)DAT_1464c1f74 <= *(int *)(param_1 + 0xa0))) &&
        ((*puVar1 >> 3 & 1) != 0)))) {
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 141be7e40 FUN_141be7e40 body=123 status=ok
// SIG undefined FUN_141be7e40(void)

longlong FUN_141be7e40(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  uint7 uVar5;
  
  uVar4 = FUN_141be7dc0();
  cVar3 = (char)uVar4;
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x30) + 0x180);
  if ((((uVar1 >> 3 & 1) == 0) || ((uVar1 >> 4 & 1) == 0)) ||
     (((*(byte *)(param_1 + 0x90) & 1) != 0 &&
      (uVar4 = (ulonglong)DAT_1464c1f74, *(int *)(param_1 + 0xa0) < (int)DAT_1464c1f74)))) {
    uVar4 = uVar4 & 0xffffffffffffff00;
    bVar2 = false;
  }
  else {
    uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
    bVar2 = true;
  }
  uVar5 = (uint7)(uVar4 >> 8);
  if (((cVar3 != '\0') && ((uVar1 >> 4 & 1) != 0)) && (((uVar1 >> 2 & 1) == 0 || (bVar2)))) {
    return CONCAT71(uVar5,1);
  }
  return (ulonglong)uVar5 << 8;
}



// FUNCTION 141be7ec0 FUN_141be7ec0 body=1409 status=ok
// SIG undefined FUN_141be7ec0(void)

void FUN_141be7ec0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_res8;
  int local_158;
  uint uStack_154;
  int iStack_144;
  float fStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  float fStack_120;
  longlong *local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  longlong *local_f8;
  int iStack_f0;
  uint uStack_ec;
  uint *local_e8;
  uint uStack_e0;
  int iStack_dc;
  int local_d8;
  longlong *local_d0;
  float local_c0;
  
  uStack_154 = 1;
  plVar1 = (longlong *)(param_1 + 0x40);
  local_158 = 0;
  iVar6 = *(int *)(param_1 + 0x68);
  local_e8 = (uint *)(param_1 + 0x50);
  iStack_144 = 0;
  fStack_140 = 0.0;
  if (iVar6 != 0) {
    puVar14 = *(uint **)(param_1 + 0x60);
    if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
      puVar14 = local_e8;
    }
    uVar7 = *puVar14;
    local_158 = 0;
    fStack_140 = (float)0;
    while (uVar7 == 0) {
      lVar10 = (longlong)local_158;
      fStack_140 = (float)((int)fStack_140 + 0x20);
      iVar12 = local_158 + 1;
      bVar8 = (int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_158;
      local_158 = iVar12;
      if (bVar8) goto LAB_141be7f92;
      uVar7 = puVar14[lVar10 + 1];
    }
    uStack_154 = -uVar7 & uVar7;
    iVar12 = 0x1f;
    if (uStack_154 != 0) {
      for (; uStack_154 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uStack_154 == 0) {
      iVar12 = 0x20;
    }
    else {
      iVar12 = 0x1f - iVar12;
    }
    iStack_144 = ((int)fStack_140 - iVar12) + 0x1f;
    if (iVar6 < iStack_144) {
LAB_141be7f92:
      iStack_144 = iVar6;
    }
  }
  iStack_f0 = local_158;
  uStack_ec = uStack_154;
  uStack_e0 = 0xffffffff;
  iStack_dc = iStack_144;
  local_d8 = (int)fStack_140;
  local_f8 = plVar1;
  local_d0 = plVar1;
  if (iStack_144 < iVar6) {
    do {
      fStack_120 = 0.0;
      lVar13 = (longlong)iStack_dc * 0xe0;
      local_138 = (longlong *)0x0;
      uStack_130._0_4_ = 0.0;
      lVar10 = *local_f8;
      iVar6 = *(int *)(lVar13 + 0x18 + lVar10);
      if (iVar6 != 0) {
        lVar11 = *(longlong *)(lVar13 + 0x10 + lVar10);
        uStack_128 = *(undefined8 *)(lVar11 + 0x20);
        fStack_120 = *(float *)(lVar11 + 0x28);
        local_138 = *(longlong **)(lVar11 + 0x10);
        uStack_130 = *(undefined8 *)(lVar11 + 0x18);
        if (1 < (longlong)iVar6) {
          pfVar9 = (float *)(lVar11 + 0x5c);
          lVar11 = (longlong)iVar6 + -1;
          do {
            fVar19 = (float)local_138 - uStack_130._4_4_;
            uStack_130._4_4_ = uStack_130._4_4_ + (float)local_138;
            fVar20 = local_138._4_4_ - (float)uStack_128;
            local_res8 = (float)local_138;
            fVar18 = (float)uStack_130 - uStack_128._4_4_;
            uStack_128._0_4_ = (float)uStack_128 + local_138._4_4_;
            uStack_128._4_4_ = uStack_128._4_4_ + (float)uStack_130;
            fVar23 = fVar19;
            if (uStack_130._4_4_ < fVar19) {
              fVar23 = uStack_130._4_4_;
            }
            fVar22 = fVar20;
            if ((float)uStack_128 < fVar20) {
              fVar22 = (float)uStack_128;
            }
            fVar21 = fVar18;
            if (uStack_128._4_4_ < fVar18) {
              fVar21 = uStack_128._4_4_;
            }
            if (fVar19 < uStack_130._4_4_) {
              fVar19 = uStack_130._4_4_;
            }
            if (fVar20 < (float)uStack_128) {
              fVar20 = (float)uStack_128;
            }
            if (fVar18 < uStack_128._4_4_) {
              fVar18 = uStack_128._4_4_;
            }
            fVar3 = pfVar9[-5];
            fVar4 = pfVar9[-4];
            fVar16 = fVar3 - pfVar9[-2];
            fVar5 = pfVar9[-3];
            fVar15 = fVar4 - pfVar9[-1];
            fVar17 = fVar5 - *pfVar9;
            if (fVar16 < fVar23) {
              fVar23 = fVar16;
            }
            if (fVar15 < fVar22) {
              fVar22 = fVar15;
            }
            if (fVar17 < fVar21) {
              fVar21 = fVar17;
            }
            if (fVar19 < fVar16) {
              fVar19 = fVar16;
            }
            if (fVar20 < fVar15) {
              fVar20 = fVar15;
            }
            if (fVar18 < fVar17) {
              fVar18 = fVar17;
            }
            fVar17 = fVar3 + pfVar9[-2];
            fVar15 = fVar4 + pfVar9[-1];
            fVar16 = fVar5 + *pfVar9;
            if (fVar17 < fVar23) {
              fVar23 = fVar17;
            }
            if (fVar15 < fVar22) {
              fVar22 = fVar15;
            }
            if (fVar16 < fVar21) {
              fVar21 = fVar16;
            }
            if (fVar19 < fVar17) {
              fVar19 = fVar17;
            }
            if (fVar20 < fVar15) {
              fVar20 = fVar15;
            }
            if (fVar18 < fVar16) {
              fVar18 = fVar16;
            }
            fVar19 = fVar19 - fVar23;
            fVar20 = fVar20 - fVar22;
            fVar18 = fVar18 - fVar21;
            fVar23 = fVar23 + fVar19 * 0.5;
            local_c0 = fVar18 * 0.5;
            fVar22 = fVar22 + fVar20 * 0.5;
            fVar21 = fVar21 + local_c0;
            fVar18 = SQRT((fVar19 * fVar19 + fVar20 * fVar20 + fVar18 * fVar18) * 0.25);
            fStack_140 = SQRT((fVar3 - fVar23) * (fVar3 - fVar23) +
                              (fVar4 - fVar22) * (fVar4 - fVar22) +
                              (fVar5 - fVar21) * (fVar5 - fVar21)) + pfVar9[1];
            fStack_120 = SQRT((local_138._4_4_ - fVar22) * (local_138._4_4_ - fVar22) +
                              ((float)local_138 - fVar23) * ((float)local_138 - fVar23) +
                              ((float)uStack_130 - fVar21) * ((float)uStack_130 - fVar21)) +
                         fStack_120;
            if (fStack_140 <= fStack_120) {
              fStack_140 = fStack_120;
            }
            if (fVar18 <= fStack_140) {
              fStack_140 = fVar18;
            }
            local_138 = (longlong *)CONCAT44(fVar22,fVar23);
            uStack_130 = CONCAT44(fVar19 * 0.5,fVar21);
            pfVar9 = pfVar9 + 0xe;
            uStack_128 = CONCAT44(local_c0,fVar20 * 0.5);
            fStack_120 = fStack_140;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
      }
      uStack_e0 = uStack_e0 & ~uStack_ec;
      local_110 = local_138;
      uStack_108 = CONCAT44(fStack_120,(float)uStack_130);
      puVar2 = (undefined4 *)(lVar13 + 0xb4 + lVar10);
      *puVar2 = (float)local_138;
      puVar2[1] = local_138._4_4_;
      puVar2[2] = (float)uStack_130;
      puVar2[3] = fStack_120;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_f0);
    } while (iStack_dc < (int)local_e8[6]);
  }
  uStack_108 = *param_2;
  local_100 = *(undefined4 *)(param_2 + 1);
  local_110 = plVar1;
  AlgoImpl::
  IntroSortInternal<FSetElementId,FIdentityFunctor,TDereferenceWrapper<FSetElementId,TCompareStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>_>_>
            (*(undefined8 *)(param_1 + 0x30),(longlong)*(int *)(param_1 + 0x38),local_res8._0_1_,
             &local_110);
  return;
}



// FUNCTION 141be8450 FUN_141be8450 body=768 status=ok
// SIG undefined FUN_141be8450(void)

void FUN_141be8450(longlong param_1,longlong param_2)

{
  bool bVar1;
  undefined1 auVar2 [16];
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint local_a8;
  uint uStack_a4;
  int iStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  uint uStack_80;
  uint uStack_7c;
  uint *puStack_78;
  uint uStack_70;
  int iStack_6c;
  uint uStack_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 uStack_50;
  uint *local_48;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  longlong *local_28;
  char local_20;
  char cStack_1f;
  
  uVar11 = 0;
  uStack_a4 = 1;
  local_58 = (longlong *)(param_1 + 0x1238);
  iVar8 = *(int *)(param_1 + 0x1260);
  local_48 = (uint *)(param_1 + 0x1248);
  local_a8 = 0;
  iStack_94 = 0;
  uStack_90 = 0;
  if (iVar8 != 0) {
    puVar9 = *(uint **)(param_1 + 0x1258);
    if (*(uint **)(param_1 + 0x1258) == (uint *)0x0) {
      puVar9 = local_48;
    }
    uVar6 = *puVar9;
    local_a8 = uVar11;
    uStack_90 = uVar11;
    while (uVar6 == 0) {
      lVar7 = (longlong)(int)local_a8;
      uStack_90 = uStack_90 + 0x20;
      uVar6 = local_a8 + 1;
      bVar1 = (int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_a8;
      local_a8 = uVar6;
      if (bVar1) goto LAB_141be851f;
      uVar6 = puVar9[lVar7 + 1];
    }
    uStack_a4 = -uVar6 & uVar6;
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
    iStack_94 = (uStack_90 - iVar4) + 0x1f;
    if (iVar8 < iStack_94) {
LAB_141be851f:
      iStack_94 = iVar8;
    }
  }
  uStack_40 = CONCAT44(iStack_94,0xffffffff);
  auVar2._8_4_ = uStack_90;
  auVar2._0_8_ = uStack_40;
  auVar2._12_4_ = uStack_8c;
  local_60._0_4_ = SUB84(local_58,0);
  local_60._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50 = CONCAT44(uStack_a4,local_a8);
  local_20 = '\0';
  cStack_1f = '\0';
  local_38._8_4_ = (undefined4)local_60;
  local_38._0_8_ = auVar2._8_8_;
  local_38._12_4_ = local_60._4_4_;
  if (iStack_94 < *(int *)(param_1 + 0x1260)) {
    puVar9 = (uint *)(param_2 + 0x1080);
    iVar8 = iStack_94;
    local_28 = local_58;
    local_60 = local_58;
    do {
      plVar3 = local_58;
      iVar4 = *(int *)(param_2 + 0x1098);
      local_a8 = 0;
      uStack_a4 = 1;
      iStack_94 = 0;
      uStack_90 = 0;
      if (iVar4 != 0) {
        puVar10 = *(uint **)(param_2 + 0x1090);
        if (*(uint **)(param_2 + 0x1090) == (uint *)0x0) {
          puVar10 = puVar9;
        }
        uVar6 = *puVar10;
        local_a8 = uVar11;
        uStack_90 = uVar11;
        while (uVar6 == 0) {
          lVar7 = (longlong)(int)local_a8;
          uStack_90 = uStack_90 + 0x20;
          uVar6 = local_a8 + 1;
          bVar1 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_a8;
          local_a8 = uVar6;
          if (bVar1) goto LAB_141be8651;
          uVar6 = puVar10[lVar7 + 1];
        }
        uStack_a4 = -uVar6 & uVar6;
        iVar5 = 0x1f;
        if (uStack_a4 != 0) {
          for (; uStack_a4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        if (uStack_a4 == 0) {
          iVar5 = 0x20;
        }
        else {
          iVar5 = 0x1f - iVar5;
        }
        iStack_94 = (uStack_90 - iVar5) + 0x1f;
        if (iVar4 < iStack_94) {
LAB_141be8651:
          iStack_94 = iVar4;
        }
      }
      uStack_80 = local_a8;
      uStack_80 = local_a8;
      uStack_7c = uStack_a4;
      uStack_70 = 0xffffffff;
      iStack_6c = iStack_94;
      uStack_68 = uStack_90;
      puStack_78 = puVar9;
      if (iStack_94 < iVar4) {
        do {
          if (*(longlong *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(param_2 + 0x1070) + 0x20 + (longlong)iStack_6c * 0x30)
                 + 0x30) + 0x10) == *(longlong *)((longlong)iVar8 * 0x40 + *plVar3))
          goto LAB_141be86e5;
          uStack_70 = uStack_70 & ~uStack_7c;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
        } while (iStack_6c < (int)puStack_78[6]);
      }
      TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
      ::Remove(local_38._8_8_,iVar8);
      local_20 = '\x01';
LAB_141be86e5:
      uStack_40 = CONCAT44(uStack_40._4_4_,(uint)uStack_40 & ~uStack_50._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      iVar8 = uStack_40._4_4_;
    } while (uStack_40._4_4_ < (int)local_48[6]);
    if ((local_20 != '\0') && (cStack_1f != '\0')) {
      TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_28,(int)local_28[1] - *(int *)((longlong)local_28 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 141be8750 UnbindBuffers body=2467 status=ok
// SIG undefined UnbindBuffers(void)

void FLpvWriteShaderCSBase::UnbindBuffers(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  ushort *puVar10;
  undefined8 *puVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  int local_res20;
  int local_88;
  longlong local_80;
  int local_78;
  int local_74;
  longlong local_70;
  int local_68;
  int local_64;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  
  lVar15 = *(longlong *)(param_1 + 0x48);
  local_60 = 0;
  local_80 = 0;
  iVar8 = 0;
  local_res20 = 0;
  iVar12 = 0;
  local_74 = 0;
  local_58 = 0;
  local_70 = 0;
  local_88 = 0;
  local_64 = 0;
  if (*(char *)(lVar15 + 0x28) == '\0') {
    FUN_1419f3850(lVar15);
  }
  local_50 = *(undefined8 *)(lVar15 + 0x60);
  puVar11 = (undefined8 *)(param_3 + 0x40);
  puVar10 = (ushort *)(param_1 + 0xc0);
  local_48 = 7;
  do {
    if (puVar10[1] != 0) {
      uVar2 = *puVar10;
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar7;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_144d92090;
      puVar6[2] = local_50;
      *(uint *)(puVar6 + 3) = (uint)uVar2;
      puVar6[4] = 0;
    }
    if (puVar10[0xf] != 0) {
      uVar2 = puVar10[0xe];
      lVar15 = (longlong)iVar8;
      local_78 = iVar8 + 1;
      if (local_res20 < local_78) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_80,iVar8);
        local_res20 = local_74;
        local_60 = local_80;
      }
      iVar8 = local_78;
      *(uint *)(local_60 + lVar15 * 4) = (uint)uVar2;
      local_68 = iVar12 + 1;
      if (local_88 < local_68) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_70,iVar12);
        local_58 = local_70;
        local_88 = local_64;
      }
      *(undefined8 *)(local_58 + (longlong)iVar12 * 8) = *puVar11;
      iVar12 = local_68;
    }
    puVar11 = puVar11 + 1;
    puVar10 = puVar10 + 2;
    local_48 = local_48 + -1;
  } while (local_48 != 0);
  if (*(short *)(param_1 + 0xfe) != 0) {
    uVar2 = *(ushort *)(param_1 + 0xfc);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar11;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    puVar7[2] = local_50;
    *puVar7 = &PTR_LAB_144dcb360;
    *(uint *)(puVar7 + 3) = (uint)uVar2;
    puVar7[4] = 0;
  }
  if (*(short *)(param_1 + 0x102) != 0) {
    uVar2 = *(ushort *)(param_1 + 0x100);
    lVar15 = (longlong)iVar8;
    local_78 = iVar8 + 1;
    if (local_res20 < local_78) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_80);
      local_res20 = local_74;
      local_60 = local_80;
    }
    iVar8 = local_78;
    *(uint *)(local_60 + lVar15 * 4) = (uint)uVar2;
    lVar15 = (longlong)iVar12;
    iVar12 = iVar12 + 1;
    local_68 = iVar12;
    if (local_88 < iVar12) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_70);
      local_88 = local_64;
      local_58 = local_70;
      *(undefined8 *)(local_70 + lVar15 * 8) = *(undefined8 *)(param_3 + 0x80);
      iVar12 = local_68;
    }
    else {
      *(undefined8 *)(local_58 + lVar15 * 8) = *(undefined8 *)(param_3 + 0x80);
    }
  }
  lVar15 = local_58;
  if (*(short *)(param_1 + 0x106) != 0) {
    uVar2 = *(ushort *)(param_1 + 0x104);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar11;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144dcb360;
    puVar7[2] = local_50;
    *(uint *)(puVar7 + 3) = (uint)uVar2;
    puVar7[4] = 0;
  }
  if (*(short *)(param_1 + 0x10a) != 0) {
    uVar2 = *(ushort *)(param_1 + 0x108);
    lVar9 = (longlong)iVar8;
    local_78 = iVar8 + 1;
    if (local_res20 < local_78) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_80);
      local_res20 = local_74;
      local_60 = local_80;
    }
    iVar8 = local_78;
    *(uint *)(local_60 + lVar9 * 4) = (uint)uVar2;
    local_68 = iVar12 + 1;
    if (local_88 < local_68) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_70);
      local_88 = local_64;
      local_58 = local_70;
      lVar15 = local_70;
    }
    *(undefined8 *)(lVar15 + (longlong)iVar12 * 8) = *(undefined8 *)(param_3 + 0x90);
    iVar12 = local_68;
  }
  puVar11 = (undefined8 *)(param_3 + 0xb0);
  puVar10 = (ushort *)(param_1 + 0x10c);
  local_40 = 2;
  do {
    if (puVar10[1] != 0) {
      local_48 = CONCAT44(local_48._4_4_,(uint)*puVar10);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar7;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_144d92090;
      puVar6[2] = local_50;
      *(undefined4 *)(puVar6 + 3) = (undefined4)local_48;
      puVar6[4] = 0;
    }
    if (puVar10[5] != 0) {
      uVar2 = puVar10[4];
      lVar15 = (longlong)iVar8;
      local_78 = iVar8 + 1;
      if (local_res20 < local_78) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_80);
        local_res20 = local_74;
        local_60 = local_80;
      }
      iVar8 = local_78;
      *(uint *)(local_60 + lVar15 * 4) = (uint)uVar2;
      local_68 = iVar12 + 1;
      if (local_88 < local_68) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_70);
        local_88 = local_64;
        local_58 = local_70;
      }
      *(undefined8 *)(local_58 + (longlong)iVar12 * 8) = *puVar11;
      lVar15 = local_58;
      iVar12 = local_68;
    }
    puVar11 = puVar11 + 1;
    puVar10 = puVar10 + 2;
    local_40 = local_40 + -1;
  } while (local_40 != 0);
  if (*(short *)(param_1 + 0x12e) != 0) {
    uVar2 = *(ushort *)(param_1 + 300);
    lVar9 = (longlong)iVar8;
    local_78 = iVar8 + 1;
    if (local_res20 < local_78) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_80);
      local_res20 = local_74;
      local_60 = local_80;
    }
    iVar8 = local_78;
    *(uint *)(local_60 + lVar9 * 4) = (uint)uVar2;
    local_68 = iVar12 + 1;
    if (local_88 < local_68) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_70);
      local_88 = local_64;
      local_58 = local_70;
      lVar15 = local_70;
    }
    *(undefined8 *)(lVar15 + (longlong)iVar12 * 8) = *(undefined8 *)(param_3 + 0xe8);
    iVar12 = local_68;
  }
  if (*(short *)(param_1 + 0x132) != 0) {
    uVar2 = *(ushort *)(param_1 + 0x130);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar11;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144dcb360;
    puVar7[2] = local_50;
    *(uint *)(puVar7 + 3) = (uint)uVar2;
    puVar7[4] = 0;
  }
  if (*(short *)(param_1 + 0x122) != 0) {
    uVar2 = *(ushort *)(param_1 + 0x120);
    lVar9 = (longlong)iVar8;
    local_78 = iVar8 + 1;
    if (local_res20 < local_78) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_80);
      local_res20 = local_74;
      local_60 = local_80;
    }
    iVar8 = local_78;
    *(uint *)(local_60 + lVar9 * 4) = (uint)uVar2;
    local_68 = iVar12 + 1;
    if (local_88 < local_68) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_70);
      local_88 = local_64;
      local_58 = local_70;
      lVar15 = local_70;
    }
    *(undefined8 *)(lVar15 + (longlong)iVar12 * 8) = *(undefined8 *)(param_3 + 0xe0);
    iVar12 = local_68;
  }
  if (*(short *)(param_1 + 0x12a) != 0) {
    uVar2 = *(ushort *)(param_1 + 0x128);
    lVar9 = (longlong)iVar8;
    local_78 = iVar8 + 1;
    if (local_res20 < local_78) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_80);
      local_60 = local_80;
    }
    iVar8 = local_78;
    *(uint *)(local_60 + lVar9 * 4) = (uint)uVar2;
    local_68 = iVar12 + 1;
    if (local_88 < local_68) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_70);
      local_58 = local_70;
      lVar15 = local_70;
    }
    *(undefined8 *)(lVar15 + (longlong)iVar12 * 8) = *(undefined8 *)(param_3 + 0xd0);
    iVar12 = local_68;
  }
  if (*(short *)(param_1 + 0x11e) != 0) {
    uVar2 = *(ushort *)(param_1 + 0x11c);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar11;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144dcb360;
    puVar7[2] = local_50;
    *(uint *)(puVar7 + 3) = (uint)uVar2;
    puVar7[4] = 0;
  }
  uVar4 = local_50;
  if (*(short *)(param_1 + 0x126) != 0) {
    uVar2 = *(ushort *)(param_1 + 0x124);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar11;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144dcb360;
    puVar7[2] = uVar4;
    *(uint *)(puVar7 + 3) = (uint)uVar2;
    puVar7[4] = 0;
  }
  iVar1 = iVar12 * 8;
  puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar5 = (longlong)puVar11 + (longlong)iVar1;
  if (*(ulonglong *)(param_2 + 0x38) < uVar5) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,iVar1 + 8);
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar5 = (longlong)puVar11 + (longlong)iVar1;
  }
  lVar15 = local_58;
  *(ulonglong *)(param_2 + 0x30) = uVar5;
  lVar9 = (longlong)iVar12;
  if (0 < iVar12) {
    puVar7 = puVar11;
    do {
      *puVar7 = *(undefined8 *)((local_58 - (longlong)puVar11) + (longlong)puVar7);
      puVar7 = puVar7 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar6 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar6 + 6;
  }
  lVar9 = local_60;
  *(undefined8 **)(param_2 + 0x30) = puVar7;
  uVar13 = 0;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar6;
  *(undefined8 **)(param_2 + 8) = puVar6 + 1;
  puVar6[1] = 0;
  puVar6[3] = puVar11;
  *puVar6 = &PTR_LAB_144d91e60;
  *(int *)(puVar6 + 2) = iVar12;
  *(undefined4 *)(puVar6 + 4) = 0;
  *(undefined4 *)((longlong)puVar6 + 0x24) = 1;
  puVar6[5] = 0;
  uVar5 = uVar13;
  if (0 < iVar8) {
    do {
      uVar3 = *(undefined4 *)(uVar13 + lVar9);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar7 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar11 = puVar7 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar11;
      uVar14 = (int)uVar5 + 1;
      uVar13 = uVar13 + 4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_144d91e40;
      puVar7[2] = local_50;
      *(undefined4 *)(puVar7 + 3) = uVar3;
      puVar7[4] = 0;
      lVar15 = local_58;
      uVar5 = (ulonglong)uVar14;
    } while ((int)uVar14 < iVar8);
  }
  if (lVar15 != 0) {
    FMemory::Free(lVar15);
  }
  if (local_60 != 0) {
    FMemory::Free(local_60);
  }
  return;
}



// FUNCTION 141be9100 FUN_141be9100 body=1460 status=ok
// SIG undefined FUN_141be9100(void)

void FUN_141be9100(longlong param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  uint local_res8 [2];
  undefined *local_168;
  undefined4 local_160;
  undefined8 local_158 [36];
  
  if (*(char *)(param_1 + 0x168) != '\0') {
    TUniformBuffer<FLpvWriteUniformBufferParameters>::SetContents
              (param_1 + 0x198,*(undefined8 *)(param_1 + 0xa8));
    fVar1 = *(float *)(param_1 + 0x15c);
    fVar2 = *(float *)(param_1 + 0x158);
    fVar3 = *(float *)(*(longlong *)(param_1 + 0xa8) + 0x98);
    if (*(int *)(param_1 + 0x120) != 0) {
      local_160 = 0;
      *(int *)(param_1 + 0x16c) = 1 - *(int *)(param_1 + 0x16c);
      lVar5 = *(longlong *)(param_3 + 0x3090);
      local_168 = &DAT_146a27da0;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar5 + 0x38,local_res8,&local_168);
      plVar11 = (longlong *)0x0;
      if (local_res8[0] != 0xffffffff) {
        plVar11 = (longlong *)((longlong)(int)local_res8[0] * 0x20 + *(longlong *)(lVar5 + 0x38));
      }
      plVar12 = plVar11 + 2;
      if (plVar11 == (longlong *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      lVar5 = *plVar12;
      lVar8 = *(longlong *)(lVar5 + 0x48);
      if (*(char *)(lVar8 + 0x28) == '\0') {
        FUN_1419f3850(lVar8);
      }
      uVar6 = *(undefined8 *)(lVar8 + 0x60);
      FRHIComputeShader::UpdateStats(uVar6);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 3;
      if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
        puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar9 = puVar10 + 3;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar9;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar10;
      *(undefined8 **)(param_2 + 8) = puVar10 + 1;
      puVar10[2] = uVar6;
      puVar10[1] = 0;
      *puVar10 = &PTR_LAB_144d91e50;
      local_158[0] = 0;
      FLightPropagationVolume::GetShaderParams(param_1,local_158);
      FUN_141bbec00(lVar5,param_2,local_158);
      DispatchComputeShader(param_2,lVar5,8,8,8);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 2;
      if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x18);
        puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar9 = puVar10 + 2;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar9;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar10;
      *(undefined8 **)(param_2 + 8) = puVar10 + 1;
      puVar10[1] = 0;
      *puVar10 = &PTR_LAB_144dc9c50;
      FLpvWriteShaderCSBase::UnbindBuffers(lVar5,param_2,local_158);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_158);
    }
    iVar13 = 0;
    if (0.001 < fVar3) {
      FUN_141b92a50(param_1,param_2,param_3);
    }
    iVar4 = *(int *)(DAT_146a276d8 + 4);
    if (0 < iVar4) {
      bVar7 = 0.001 < fVar2;
      local_res8[0] = bVar7 | 2;
      if (fVar1 <= 0.001) {
        local_res8[0] = (uint)bVar7;
      }
      do {
        *(int *)(param_1 + 0x16c) = 1 - *(int *)(param_1 + 0x16c);
        lVar8 = FUN_141b9d350(param_3);
        lVar5 = *(longlong *)(lVar8 + 0x48);
        if (*(char *)(lVar5 + 0x28) == '\0') {
          FUN_1419f3850(lVar5);
        }
        uVar6 = *(undefined8 *)(lVar5 + 0x60);
        FRHIComputeShader::UpdateStats(uVar6);
        puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar9 = puVar10 + 3;
        if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30);
          puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar9 = puVar10 + 3;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar9;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        local_158[0] = 0;
        **(undefined8 **)(param_2 + 8) = puVar10;
        *(undefined8 **)(param_2 + 8) = puVar10 + 1;
        puVar10[1] = 0;
        *puVar10 = &PTR_LAB_144d91e50;
        puVar10[2] = uVar6;
        *(int *)(*(longlong *)(param_1 + 0xa8) + 0xbc) = iVar13;
        FLightPropagationVolume::GetShaderParams(param_1,local_158);
        FUN_141bbec00(lVar8,param_2,local_158);
        DispatchComputeShader(param_2,lVar8,8,8,8);
        if (iVar13 < iVar4 + -1) {
          puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar9 = puVar10 + 2;
          if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x18);
            puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar9 = puVar10 + 2;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar9;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar10;
          *(undefined8 **)(param_2 + 8) = puVar10 + 1;
          puVar10[1] = 0;
          *puVar10 = &PTR_LAB_144dc9c50;
        }
        FLpvWriteShaderCSBase::UnbindBuffers(lVar8,param_2,local_158);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_158);
        iVar13 = iVar13 + 1;
      } while (iVar13 < iVar4);
    }
    *(int *)(param_1 + 0x16c) = 1 - *(int *)(param_1 + 0x16c);
    local_160 = 0;
    local_168 = &DAT_146a28040;
    lVar5 = *(longlong *)(param_3 + 0x3090);
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar5 + 0x38,local_res8,&local_168);
    plVar11 = (longlong *)0x0;
    if (local_res8[0] != 0xffffffff) {
      plVar11 = (longlong *)((longlong)(int)local_res8[0] * 0x20 + *(longlong *)(lVar5 + 0x38));
    }
    plVar12 = plVar11 + 2;
    if (plVar11 == (longlong *)0x0) {
      plVar12 = (longlong *)0x0;
    }
    plVar12 = (longlong *)*plVar12;
    lVar5 = plVar12[9];
    if (*(char *)(lVar5 + 0x28) == '\0') {
      FUN_1419f3850(lVar5);
    }
    uVar6 = *(undefined8 *)(lVar5 + 0x60);
    FRHIComputeShader::UpdateStats(uVar6);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_144d91e50;
    puVar10[2] = uVar6;
    local_158[0] = 0;
    FLightPropagationVolume::GetShaderParams(param_1,local_158);
    (**(code **)(*plVar12 + 0x30))(plVar12,param_2,local_158);
    TUniformBuffer<FLpvWriteUniformBufferParameters>::SetContents
              (param_1 + 0x198,*(undefined8 *)(param_1 + 0xa8));
    DispatchComputeShader(param_2,plVar12,8,8,8);
    FLpvWriteShaderCSBase::UnbindBuffers(plVar12,param_2,local_158);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_158);
  }
  return;
}



// FUNCTION 141be96c0 FUN_141be96c0 body=1347 status=ok
// SIG undefined FUN_141be96c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141be96c0(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined1 uVar17;
  undefined1 auStack_1e8 [32];
  wchar_t *local_1c8;
  ulonglong local_1c0;
  undefined1 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 *local_1a0;
  undefined1 local_198 [8];
  undefined8 local_190;
  int local_188;
  int local_180;
  int local_17c;
  longlong *local_178;
  undefined8 *local_170;
  undefined8 local_168;
  longlong local_160;
  char local_158;
  undefined8 local_150;
  undefined **local_148;
  ulonglong local_140;
  int local_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  longlong local_128;
  longlong *local_120;
  undefined4 *local_118;
  undefined *local_108;
  undefined1 *puStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined1 *puStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined2 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80;
  wchar_t *local_78;
  undefined2 local_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  local_118 = param_6;
  puStack_100 = local_198;
  local_108 = &DAT_14060d670;
  local_d8 = 0x4060d670;
  uStack_d4 = 1;
  local_198[0] = 0;
  local_128 = param_4;
  local_120 = param_3;
  puStack_d0 = puStack_100;
  lVar11 = FUN_1415d8310(&local_d8,&DAT_146216a38);
  local_170 = (undefined8 *)(lVar11 + 0x18);
  local_168 = *local_170;
  local_160 = *(longlong *)(lVar11 + 0x28);
  local_158 = '\0';
  local_150 = *(undefined8 *)(lVar11 + 0x30);
  *(undefined8 ***)(lVar11 + 0x30) = &local_170;
  *(int *)(lVar11 + 0x38) = *(int *)(lVar11 + 0x38) + 1;
  FDeferredUpdateResource::UpdateResources(param_1);
  iVar1 = *(int *)((longlong)param_2 + 0x74);
  local_188 = iVar1;
  cVar10 = FUN_142753a10();
  if ((DAT_146ab62cc - 8U < 3) || (DAT_146ab62cc == 0x18)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  if (((cVar10 == '\0') || (iVar1 == 2)) && (bVar8)) {
    uVar17 = 1;
    uVar9 = 1;
    if (iVar1 != 2) goto LAB_141be97d3;
    bVar8 = true;
  }
  else {
    uVar9 = 0;
LAB_141be97d3:
    uVar17 = uVar9;
    bVar8 = false;
  }
  plVar4 = (longlong *)param_2[5];
  local_178 = (longlong *)0x0;
  if (bVar8) {
    plVar12 = (longlong *)(**(code **)(*plVar4 + 8))(plVar4);
    lVar11 = *plVar12;
    lVar6 = *(longlong *)(lVar11 + 0x20);
    uVar15 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar3 = *(undefined4 *)(lVar11 + 0x3c);
    puVar13 = (ulonglong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_e8);
    local_1b8 = 1;
    local_1c0 = CONCAT71(local_1c0._1_7_,1);
    uVar5 = *puVar13;
    local_a4 = (undefined4)uVar5;
    local_190._4_4_ = (undefined4)(uVar5 >> 0x20);
    local_a0 = local_190._4_4_;
    local_98 = 1;
    local_90 = 1;
    local_84 = 1;
    local_78 = L"UnknownTexture2D";
    local_1c8 = L"SceneCaptureFlipped";
    local_9c = 0;
    local_94 = 0x10000;
    local_88 = 0;
    local_80 = 0;
    local_70 = 1;
    local_190 = uVar5;
    local_b8 = lVar6;
    uStack_b0 = uVar15;
    local_a8 = uVar2;
    local_8c = uVar3;
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_1,&local_b8,&local_178);
    if (local_178 != (longlong *)0x0) {
      local_140 = (**(code **)(*(longlong *)local_178[1] + 8))();
      goto LAB_141be98af;
    }
  }
  local_140 = 0;
LAB_141be98af:
  local_148 = &PTR_FUN_144e0aa98;
  if (local_140 != 0) {
    LOCK();
    *(int *)(local_140 + 8) = *(int *)(local_140 + 8) + 1;
    UNLOCK();
  }
  lVar11 = param_2[0x18];
  uVar15 = *(undefined8 *)(lVar11 + 0x368);
  uVar7 = *(undefined8 *)(lVar11 + 0x370);
  local_138 = *(int *)(lVar11 + 0x378);
  iStack_134 = *(int *)(lVar11 + 0x37c);
  iStack_130 = *(int *)(lVar11 + 0x380);
  iStack_12c = *(int *)(lVar11 + 900);
  local_f8 = uVar15;
  uStack_f0 = uVar7;
  if (bVar8) {
    puVar14 = (undefined8 *)(**(code **)(*plVar4 + 8))(plVar4);
    FUN_141a19150(param_1,*puVar14,0,1);
    puVar14 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4,local_e0);
    local_1a0 = &local_c8;
    local_1a8 = *puVar14;
    local_1b0 = (longlong *)((ulonglong)local_1b0._4_4_ << 0x20);
    local_1b8 = 0;
    local_1c0 = local_1c0 & 0xffffffff00000000;
    local_1c8 = (wchar_t *)((ulonglong)local_1c8 & 0xffffffffffffff00);
    local_c8 = uVar15;
    uStack_c0 = uVar7;
    FUN_141a149c0(param_1,1,1,&DAT_1464aa6e0);
    param_2[5] = (longlong)&local_148;
  }
  (**(code **)(*param_2 + 8))(param_2,param_1);
  if (bVar8) {
    param_2[5] = (longlong)plVar4;
  }
  local_180 = iStack_130 - local_138;
  local_17c = iStack_12c - iStack_134;
  if (bVar8) {
    local_190 = local_140;
    if (local_140 != 0) {
      LOCK();
      *(int *)(local_140 + 8) = *(int *)(local_140 + 8) + 1;
      UNLOCK();
    }
    local_1c0 = local_140;
    local_1c8 = (wchar_t *)&local_f8;
    local_1b8 = uVar17;
    local_1b0 = param_2;
    FUN_141b94a20(param_1,plVar4,&local_180,lVar11);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_190);
  }
  else if (local_188 != 2) {
    uVar15 = FSceneRenderTargets::Get(param_1);
    puVar14 = (undefined8 *)FSceneRenderTargets::GetSceneColorTexture(uVar15);
    local_1c0 = (**(code **)(*(longlong *)*puVar14 + 8))();
    local_1c8 = (wchar_t *)&local_f8;
    local_1b8 = uVar17;
    local_1b0 = param_2;
    FUN_141b94a20(param_1,plVar4,&local_180,lVar11);
  }
  uVar15 = *(undefined8 *)(local_128 + 0x30);
  puVar14 = (undefined8 *)(**(code **)(*local_120 + 8))();
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  plVar4 = (longlong *)*puVar14;
  puVar14 = puVar16 + 10;
  if (*(undefined8 **)(param_1 + 0x38) < puVar14) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x58);
    puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar14 = puVar16 + 10;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar14;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar16;
  *(undefined8 **)(param_1 + 8) = puVar16 + 1;
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar16 + 2) = *local_118;
  *(undefined4 *)((longlong)puVar16 + 0x14) = local_118[1];
  *(undefined4 *)(puVar16 + 3) = local_118[2];
  *(undefined4 *)((longlong)puVar16 + 0x1c) = local_118[3];
  *(undefined4 *)(puVar16 + 4) = local_118[4];
  *(undefined4 *)((longlong)puVar16 + 0x24) = local_118[5];
  *(undefined4 *)(puVar16 + 5) = local_118[6];
  *(undefined4 *)((longlong)puVar16 + 0x2c) = local_118[7];
  *(undefined4 *)(puVar16 + 6) = local_118[8];
  *(undefined4 *)((longlong)puVar16 + 0x34) = local_118[9];
  *(undefined4 *)(puVar16 + 7) = local_118[10];
  *(undefined4 *)((longlong)puVar16 + 0x3c) = local_118[0xb];
  puVar16[8] = plVar4;
  puVar16[9] = uVar15;
  lVar11 = (**(code **)(*plVar4 + 8))(plVar4);
  if (lVar11 == 0) {
    lVar11 = (**(code **)(*(longlong *)puVar16[8] + 0x18))();
    if (lVar11 == 0) {
      (**(code **)(*(longlong *)puVar16[8] + 0x20))();
    }
  }
  lVar11 = (**(code **)(*(longlong *)puVar16[9] + 8))();
  if (lVar11 == 0) {
    lVar11 = (**(code **)(*(longlong *)puVar16[9] + 0x18))();
    if (lVar11 == 0) {
      (**(code **)(*(longlong *)puVar16[9] + 0x20))();
    }
  }
  local_148 = &PTR_FUN_144dd5318;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_140);
  if (local_178 != (longlong *)0x0) {
    (**(code **)(*local_178 + 0x30))();
  }
  FUN_141d7b5e0(param_1,param_2,1);
  if (local_158 == '\0') {
    local_158 = 1;
    *(int *)(local_170 + 4) = *(int *)(local_170 + 4) + -1;
    if (local_160 != local_170[2]) {
      FMemStackBase::FreeChunks();
    }
    *local_170 = local_168;
    local_170[3] = local_150;
  }
  return;
}



// FUNCTION 141be9c10 UseLightPropagationVolumeRT body=23 status=ok
// SIG undefined UseLightPropagationVolumeRT(void)

ulonglong UseLightPropagationVolumeRT(int param_1)

{
  ulonglong in_RAX;
  
  if (param_1 < 3) {
    return in_RAX & 0xffffffffffffff00;
  }
  return CONCAT71((int7)((ulonglong)DAT_146a27678 >> 8),*(int *)(DAT_146a27678 + 4) != 0);
}



// FUNCTION 141be9c30 FUN_141be9c30 body=48 status=ok
// SIG undefined FUN_141be9c30(void)

ulonglong FUN_141be9c30(longlong param_1)

{
  ulonglong in_RAX;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x1228) == 0)) &&
      (in_RAX = 0, *(longlong *)(param_1 + 0x1150) != 0)) &&
     ((in_RAX = *(ulonglong *)(*(longlong *)(param_1 + 0x1150) + 8), in_RAX != 0 &&
      (*(longlong *)(in_RAX + 0x30) != 0)))) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141be9c60 zzGetMembersBefore body=507 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FDeferredLightUniformStruct::zzGetMembersBefore(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  zzGetMembersBefore(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"SoftSourceRadius";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x50;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"SourceLength";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x54;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"ContactShadowLength";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x58;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"DistanceFadeMAD";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000060;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 2;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141be9e60 zzGetMembersBefore body=598 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FDeferredLightUniformStruct::zzGetMembersBefore(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = 0;
  param_1[1] = 1;
  TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,0);
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = L"LightPosition";
  puVar3[1] = &DAT_143f3eda8;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = 4;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 1;
  *(undefined4 *)(puVar3 + 4) = 3;
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
  *(undefined4 *)(puVar3 + 5) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"LightInvRadius";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0xc;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"LightColor";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x10;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 3;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"LightFalloffExponent";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x1c;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"NormalizedLightDirection";
  puVar3[1] = &DAT_143f3eda8;
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar3 = 0x400000020;
  puVar3[1] = 0x100000000;
  puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar3 = 3;
  puVar3[1] = 0;
  return param_1;
}



// FUNCTION 141bea0c0 FUN_141bea0c0 body=507 status=ok
// SIG undefined FUN_141bea0c0(void)

longlong * FUN_141bea0c0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FDeferredLightUniformStruct::zzGetMembersBefore(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"bExposureCompensation";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x8c;
  puVar2[1] = 2;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"OrientedBoxLocation";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x90;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"OrientedBoxBasisX";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xa0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"OrientedBoxBasisY";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x4000000b0;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141bea2c0 zzGetMembersBefore body=507 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FDeferredLightUniformStruct::zzGetMembersBefore(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  zzGetMembersBefore(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"NormalizedLightTangent";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x30;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"SpotAngles";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x40;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"SpecularScale";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x48;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"SourceRadius";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x40000004c;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141bea4c0 zzGetMembersBefore body=507 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FDeferredLightUniformStruct::zzGetMembersBefore(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  zzGetMembersBefore(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"ShadowMapChannelMask";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x70;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"ShadowedBits";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x80;
  puVar2[1] = 3;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"LightingChannelMask";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x84;
  puVar2[1] = 3;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"VolumetricScatteringIntensity";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000088;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141bea6c0 zzGetMembersBefore body=598 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FLpvDirectLightInjectParameters::zzGetMembersBefore(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = 0;
  param_1[1] = 1;
  TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,0);
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = L"LightRadius";
  puVar3[1] = &DAT_143f3eda8;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = 4;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 1;
  *(undefined4 *)(puVar3 + 4) = 1;
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
  *(undefined4 *)(puVar3 + 5) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"LightPosition";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x10;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"LightColor";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x20;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"LightFalloffExponent";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x30;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"LightSourceLength";
  puVar3[1] = &DAT_143f3eda8;
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar3 = 0x400000034;
  puVar3[1] = 0x100000000;
  puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar3 = 1;
  puVar3[1] = 0;
  return param_1;
}



// FUNCTION 141bea920 zzGetMembersBefore body=507 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FLpvWriteUniformBufferParameters::zzGetMembersBefore(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  zzGetMembersBefore(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"SecondaryOcclusionStrength";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xa8;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"SecondaryBounceStrength";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xac;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"VplInjectionBias";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xb0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"GeometryVolumeInjectionBias";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x4000000b4;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141beab20 zzGetMembersBefore body=507 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FLpvWriteUniformBufferParameters::zzGetMembersBefore(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  zzGetMembersBefore(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"mLpvGridOffset";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x80;
  puVar2[1] = 2;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"ClearMultiplier";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x8c;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"LpvScale";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x90;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"OneOverLpvScale";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000094;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141bead20 zzGetMembersBefore body=507 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FLpvWriteUniformBufferParameters::zzGetMembersBefore(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  zzGetMembersBefore(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"DirectionalOcclusionIntensity";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x98;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"DirectionalOcclusionRadius";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x9c;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"RsmAreaIntensityMultiplier";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xa0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"RsmPixelToTexcoordMultiplier";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x4000000a4;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141beaf20 zzGetMembersBefore body=598 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FLpvWriteUniformBufferParameters::zzGetMembersBefore(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = 0;
  param_1[1] = 1;
  TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,0);
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = L"mRsmToWorld";
  puVar3[1] = &DAT_143f3eda8;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = 4;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 4;
  *(undefined4 *)(puVar3 + 4) = 4;
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
  *(undefined4 *)(puVar3 + 5) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"mLightColour";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x40;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"GeometryVolumeCaptureLightDirection";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x50;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"mEyePos";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x60;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"mOldGridOffset";
  puVar3[1] = &DAT_143f3eda8;
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar3 = 0x200000070;
  puVar3[1] = 0x100000000;
  puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar3 = 3;
  puVar3[1] = 0;
  return param_1;
}



// FUNCTION 141beb180 FUN_141beb180 body=514 status=ok
// SIG undefined FUN_141beb180(void)

longlong * FUN_141beb180(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_141beb5a0(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"StaticShadowTexture";
  puVar1[1] = L"Texture2D";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x268;
  puVar2[1] = 9;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"LightMapSampler";
  puVar1[1] = L"SamplerState";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x270;
  puVar2[1] = 8;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"SkyOcclusionSampler";
  puVar1[1] = L"SamplerState";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x278;
  puVar2[1] = 8;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"AOMaterialMaskSampler";
  puVar1[1] = L"SamplerState";
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x800000280;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141beb390 FUN_141beb390 body=514 status=ok
// SIG undefined FUN_141beb390(void)

longlong * FUN_141beb390(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_141bebdd0(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"SkyOcclusionTexture";
  puVar1[1] = L"Texture2D";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x228;
  puVar2[1] = 9;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"AOMaterialMaskTexture";
  puVar1[1] = L"Texture2D";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x230;
  puVar2[1] = 9;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"IndirectLightingCacheTexture0";
  puVar1[1] = L"Texture3D";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x238;
  puVar2[1] = 9;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"IndirectLightingCacheTexture1";
  puVar1[1] = L"Texture3D";
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x900000240;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141beb5a0 FUN_141beb5a0 body=507 status=ok
// SIG undefined FUN_141beb5a0(void)

longlong * FUN_141beb5a0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_141beb390(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"IndirectLightingCacheTexture2";
  puVar1[1] = L"Texture3D";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x248;
  puVar2[1] = 9;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"IndirectLightingCacheTexture0TimeOfDay";
  puVar1[1] = L"Texture3D";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x250;
  puVar2[1] = 9;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"IndirectLightingCacheTexture1TimeOfDay";
  puVar1[1] = L"Texture3D";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 600;
  puVar2[1] = 9;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"IndirectLightingCacheTexture2TimeOfDay";
  puVar1[1] = L"Texture3D";
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x900000260;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141beb7a0 zzGetMembersBefore body=519 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FPrecomputedLightingParameters::zzGetMembersBefore(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  zzGetMembersBefore(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"DirectionalLightShadowing";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x50;
  puVar2[1] = 4;
  puVar2[2] = 1;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"StaticShadowMapMasks";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x60;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"InvUniformPenumbraSizes";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x70;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"IndirectLightingSHCoefficients0";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000080;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 0x300000004;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141beb9b0 FUN_141beb9b0 body=525 status=ok
// SIG undefined FUN_141beb9b0(void)

longlong * FUN_141beb9b0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FPrecomputedLightingParameters::zzGetMembersBefore(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"IndirectLightingSHCoefficients1";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xb0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 3;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"IndirectLightingSHCoefficients2";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xe0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"IndirectLightingSHSingleCoefficient";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xf0;
  puVar2[1] = 4;
  puVar2[2] = 1;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"IndirectLightingSHCoefficients0TimeOfDay";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000100;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 0x300000004;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141bebbc0 FUN_141bebbc0 body=519 status=ok
// SIG undefined FUN_141bebbc0(void)

longlong * FUN_141bebbc0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_141beb9b0(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"IndirectLightingSHCoefficients1TimeOfDay";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x130;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 3;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"IndirectLightingSHCoefficients2TimeOfDay";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x160;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"IndirectLightingSHSingleCoefficientTimeOfDay";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x170;
  puVar2[1] = 4;
  puVar2[2] = 1;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"LightMapCoordinateScaleBias";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000180;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141bebdd0 FUN_141bebdd0 body=538 status=ok
// SIG undefined FUN_141bebdd0(void)

longlong * FUN_141bebdd0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_141bebbc0(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"ShadowMapCoordinateScaleBias";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 400;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"LightMapScale";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x1a0;
  puVar2[1] = 4;
  puVar2[2] = 1;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"LightMapAdd";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x1e0;
  puVar2[1] = 4;
  puVar2[2] = 1;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"LightMapTexture";
  puVar1[1] = L"Texture2D";
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x900000220;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141bebff0 zzGetMembersBefore body=598 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FPrecomputedLightingParameters::zzGetMembersBefore(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = 0;
  param_1[1] = 1;
  TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,0);
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = L"IndirectLightingCachePrimitiveAdd";
  puVar3[1] = &DAT_143f3eda8;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = 4;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 1;
  *(undefined4 *)(puVar3 + 4) = 3;
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
  *(undefined4 *)(puVar3 + 5) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"IndirectLightingCachePrimitiveScale";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x10;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 3;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"IndirectLightingCacheMinUV";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x20;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 3;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"IndirectLightingCacheMaxUV";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x30;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 3;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"PointSkyBentNormal";
  puVar3[1] = &DAT_143f3eda8;
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar3 = 0x400000040;
  puVar3[1] = 0x100000000;
  puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar3 = 4;
  puVar3[1] = 0;
  return param_1;
}



// FUNCTION 141bec250 FUN_141bec250 body=507 status=ok
// SIG undefined FUN_141bec250(void)

longlong * FUN_141bec250(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_141beb180(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"IndirectLightingCacheTextureSampler0";
  puVar1[1] = L"SamplerState";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x288;
  puVar2[1] = 8;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"IndirectLightingCacheTextureSampler1";
  puVar1[1] = L"SamplerState";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x290;
  puVar2[1] = 8;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"IndirectLightingCacheTextureSampler2";
  puVar1[1] = L"SamplerState";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x298;
  puVar2[1] = 8;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"StaticShadowTextureSampler";
  puVar1[1] = L"SamplerState";
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x8000002a0;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141bec460 Serialize body=168 status=ok
// SIG undefined Serialize(void)

undefined1 FPostProcessDiaphragmDOFGatherCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = `anonymous_namespace'::FPostProcessDiaphragmDOFShader::Serialize();
  FUN_1419e0a40(param_2,param_1 + 0x1f8);
  FUN_1419e0a40(param_2,param_1 + 0x1fe);
  FUN_1419e0a40(param_2,param_1 + 0x204);
  FUN_1419e0a40(param_2,param_1 + 0x20a);
  FUN_1419e0a40(param_2,param_1 + 0x210);
  FUN_1419e0a40(param_2,param_1 + 0x216);
  FUN_1419e0a40(param_2,param_1 + 0x21c);
  FUN_1419e0a40(param_2,param_1 + 0x222);
  return uVar1;
}



// FUNCTION 141bec510 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessDiaphragmDOFGatherCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x228);
  }
  return param_1;
}



// FUNCTION 141bec560 FUN_141bec560 body=50 status=ok
// SIG undefined FUN_141bec560(void)

ulonglong FUN_141bec560(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = operator<<(param_2,param_1 + 0xc0);
  uVar2 = FUN_1419e0a40(uVar1,param_1 + 0x1bc);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141bec5a0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessBloomSetupPS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1c8);
  }
  return param_1;
}



// FUNCTION 141bec5f0 Serialize body=78 status=ok
// SIG undefined Serialize(void)

undefined1 FPostProcessDiaphragmDOFDownsampleCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = `anonymous_namespace'::FPostProcessDiaphragmDOFShader::Serialize();
  FUN_1419e0a40(param_2,param_1 + 0x1f8);
  FUN_1419e0a40(param_2,param_1 + 0x1fe);
  return uVar1;
}



// FUNCTION 141bec640 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessDiaphragmDOFDownsampleCS::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x208);
  }
  return param_1;
}



// FUNCTION 141bec690 Serialize body=138 status=ok
// SIG undefined Serialize(void)

undefined1 FPostProcessDiaphragmDOFBuildBokehLUTCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = `anonymous_namespace'::FPostProcessDiaphragmDOFShader::Serialize();
  FUN_1419e0a40(param_2,param_1 + 0x1f8);
  FUN_1419e0a40(param_2,param_1 + 0x1fe);
  FUN_1419e0a40(param_2,param_1 + 0x204);
  FUN_1419e0a40(param_2,param_1 + 0x20a);
  FUN_1419e0a40(param_2,param_1 + 0x210);
  FUN_1419e0a40(param_2,param_1 + 0x216);
  return uVar1;
}



// FUNCTION 141bec720 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessDiaphragmDOFBuildBokehLUTCS::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x220);
  }
  return param_1;
}



// FUNCTION 141bec760 FUN_141bec760 body=93 status=ok
// SIG undefined FUN_141bec760(void)

undefined1 FUN_141bec760(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = `anonymous_namespace'::FPostProcessDiaphragmDOFShader::Serialize();
  FUN_1419e0a40(param_2,param_1 + 0x1f8);
  FUN_1419e0a40(param_2,param_1 + 0x1fe);
  FUN_1419e0b60(param_2,param_1 + 0x204);
  return uVar1;
}



// FUNCTION 141bec7c0 Serialize body=74 status=ok
// SIG undefined Serialize(void)

undefined1 FPlanarReflectionPS::Serialize(longlong param_1,undefined8 param_2)

{
  ::operator<<(param_2,param_1 + 0xc0);
  FUN_141ad3f10(param_1 + 0x10c,param_2);
  FUN_141ad3f10(param_1 + 0x114,param_2);
  return 0;
}



// FUNCTION 141bec810 Serialize body=77 status=ok
// SIG undefined Serialize(void)

ulonglong FPostProcessBokehDOFPS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = ::operator<<(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0x1bc);
  uVar2 = FUN_1419e0b60(uVar1,param_1 + 0x1c0);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141bec860 Serialize body=178 status=ok
// SIG undefined Serialize(void)

ulonglong FPostProcessBokehDOFVS<1>::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = ::operator<<(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1bc);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1c2);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1c8);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1ce);
  FUN_141ad3f10(param_1 + 0x1d4,uVar1);
  uVar2 = FUN_141ad3f10(param_1 + 0x1dc,uVar1);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141bec920 Serialize body=184 status=ok
// SIG undefined Serialize(void)

ulonglong FPostProcessBokehDOFRecombinePS<1>::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = ::operator<<(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1cc);
  FUN_141ad3f10(param_1 + 0x1bc,uVar1);
  FUN_141ad3f10(param_1 + 0x1c4,uVar1);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1d2);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0x1d8);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0x1dc);
  uVar2 = FUN_1419e0b60(uVar1,param_1 + 0x1e0);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141bec9e0 Serialize body=229 status=ok
// SIG undefined Serialize(void)

undefined1 FPostProcessBokehDOFRecombineCS<1>::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xc4);
  FUN_1419e0a40(uVar1,param_1 + 200);
  uVar1 = ::operator<<(param_2,param_1 + 0xce);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1dc);
  FUN_141ad3f10(param_1 + 0x1cc,uVar1);
  FUN_141ad3f10(param_1 + 0x1d4,uVar1);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1e2);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0x1e8);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0x1ec);
  FUN_1419e0b60(uVar1,param_1 + 0x1f0);
  return 0;
}



// FUNCTION 141becad0 FUN_141becad0 body=207 status=ok
// SIG undefined FUN_141becad0(void)

undefined1 FUN_141becad0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1419e0a40(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xf0);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xf4);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xc6);
  FUN_1419e0a40(uVar1,param_1 + 0xcc);
  FUN_1419e0a40(param_2,param_1 + 0xd2);
  FUN_1419e0a40(param_2,param_1 + 0xd8);
  FUN_1419e0a40(param_2,param_1 + 0xde);
  FUN_1419e0a40(param_2,param_1 + 0xe4);
  FUN_1419e0a40(param_2,param_1 + 0xea);
  return 0;
}



// FUNCTION 141becba0 FUN_141becba0 body=50 status=ok
// SIG undefined FUN_141becba0(void)

ulonglong FUN_141becba0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_1419e0a40(param_2,param_1 + 0xc0);
  uVar2 = FUN_1419e0a40(uVar1,param_1 + 0xc6);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141becbe0 Serialize body=149 status=ok
// SIG undefined Serialize(void)

undefined1 FPostProcessDiaphragmDOFRecombineCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = `anonymous_namespace'::FPostProcessDiaphragmDOFShader::Serialize();
  FUN_141ad3f10(param_1 + 0x1f8,param_2);
  FUN_141ad3f10(param_1 + 0x200,param_2);
  FUN_1419e0a40(param_2,param_1 + 0x208);
  FUN_1419e0a40(param_2,param_1 + 0x20e);
  FUN_1419e0a40(param_2,param_1 + 0x214);
  FUN_1419e0a40(param_2,param_1 + 0x21a);
  return uVar1;
}



// FUNCTION 141becc80 Serialize body=117 status=ok
// SIG undefined Serialize(void)

ulonglong FPostProcessCircleDOFPS<1>::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = ::operator<<(param_2,param_1 + 0xc0);
  FUN_141ad3f10(param_1 + 0x1bc,uVar1);
  FUN_141ad3f10(param_1 + 0x1c4,uVar1);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1cc);
  uVar2 = FUN_1419e0a40(uVar1,param_1 + 0x1d2);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141becd00 Serialize body=246 status=ok
// SIG undefined Serialize(void)

ulonglong FPostProcessAntiAliasingPS<1>::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = ::operator<<(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1bc);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1c2);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1c8);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1ce);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1d4);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1da);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1e0);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1e6);
  uVar2 = FUN_1419e0a40(uVar1,param_1 + 0x1ec);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141bece10 FUN_141bece10 body=29 status=ok
// SIG undefined FUN_141bece10(void)

ulonglong FUN_141bece10(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_141c12ee0(param_2,param_1 + 0xc0);
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 141bece30 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessDiaphragmDOFGatherCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x218);
  }
  return param_1;
}



// FUNCTION 141bece70 FUN_141bece70 body=29 status=ok
// SIG undefined FUN_141bece70(void)

ulonglong FUN_141bece70(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_141c131f0(param_2,param_1 + 0xc0);
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 141bece90 FUN_141bece90 body=29 status=ok
// SIG undefined FUN_141bece90(void)

ulonglong FUN_141bece90(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_141c13520(param_2,param_1 + 0xc0);
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 141beceb0 FUN_141beceb0 body=50 status=ok
// SIG undefined FUN_141beceb0(void)

ulonglong FUN_141beceb0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = operator<<(param_2,param_1 + 0xc0);
  uVar2 = FUN_1419e0b60(uVar1,param_1 + 0x1bc);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141becef0 FUN_141becef0 body=29 status=ok
// SIG undefined FUN_141becef0(void)

ulonglong FUN_141becef0(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_141c13850(param_2,param_1 + 0xc0);
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 141becf10 Serialize body=105 status=ok
// SIG undefined Serialize(void)

ulonglong FPostProcessBloomSetupCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = ::operator<<(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0x1bc);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1c0);
  uVar2 = FUN_1419e0a40(uVar1,param_1 + 0x1c6);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141becf80 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessBloomSetupCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d0);
  }
  return param_1;
}



// FUNCTION 141becfc0 FUN_141becfc0 body=29 status=ok
// SIG undefined FUN_141becfc0(void)

ulonglong FUN_141becfc0(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_141c13b80(param_2,param_1 + 0xc0);
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 141becfe0 FUN_141becfe0 body=109 status=ok
// SIG undefined FUN_141becfe0(void)

undefined1 FUN_141becfe0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xc4);
  FUN_1419e0a40(uVar1,param_1 + 200);
  FUN_141c12ee0(param_2,param_1 + 0xce);
  return 0;
}



// FUNCTION 141bed050 FUN_141bed050 body=109 status=ok
// SIG undefined FUN_141bed050(void)

undefined1 FUN_141bed050(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xc4);
  FUN_1419e0a40(uVar1,param_1 + 200);
  FUN_141c131f0(param_2,param_1 + 0xce);
  return 0;
}



// FUNCTION 141bed0c0 FUN_141bed0c0 body=109 status=ok
// SIG undefined FUN_141bed0c0(void)

undefined1 FUN_141bed0c0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xc4);
  FUN_1419e0a40(uVar1,param_1 + 200);
  FUN_141c13520(param_2,param_1 + 0xce);
  return 0;
}



// FUNCTION 141bed130 FUN_141bed130 body=109 status=ok
// SIG undefined FUN_141bed130(void)

undefined1 FUN_141bed130(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xc4);
  FUN_1419e0a40(uVar1,param_1 + 200);
  FUN_141c13850(param_2,param_1 + 0xce);
  return 0;
}



// FUNCTION 141bed1a0 FUN_141bed1a0 body=343 status=ok
// SIG undefined FUN_141bed1a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141bed1a0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  longlong local_60 [3];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  uVar2 = 0;
  local_48 = 1;
  local_34 = 0;
  local_70 = local_60;
  local_60[0] = 0;
  local_60[1] = 0;
  local_60[2] = 0;
  local_78 = local_60 + 1;
  local_80 = 1;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_88 = 0xc00;
  (**(code **)(*DAT_146ab6358 + 0x488))(DAT_146ab6358,local_68,&DAT_146ab6e78,2);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  do {
    sVar3 = (short)uVar2 * 4;
    uVar1 = uVar2 * 6;
    *(short *)(local_60[0] + (ulonglong)uVar1 * 2) = sVar3;
    uVar2 = uVar2 + 1;
    *(short *)(local_60[0] + (ulonglong)(uVar1 + 1) * 2) = sVar3 + 3;
    *(short *)(local_60[0] + (ulonglong)(uVar1 + 2) * 2) = sVar3 + 2;
    *(short *)(local_60[0] + (ulonglong)(uVar1 + 3) * 2) = sVar3;
    *(short *)(local_60[0] + (ulonglong)(uVar1 + 4) * 2) = sVar3 + 1;
    *(short *)(local_60[0] + (ulonglong)(uVar1 + 5) * 2) = sVar3 + 3;
  } while (uVar2 < 0x100);
  (**(code **)(*DAT_146ab6358 + 0x500))
            (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
  return;
}



// FUNCTION 141bed300 FUN_141bed300 body=109 status=ok
// SIG undefined FUN_141bed300(void)

undefined1 FUN_141bed300(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xc4);
  FUN_1419e0a40(uVar1,param_1 + 200);
  FUN_141c13b80(param_2,param_1 + 0xce);
  return 0;
}



// FUNCTION 141bed370 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FDummyPrevTransformBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e12dd0;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR__scalar_deleting_destructor__143f48b30;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 141bed3e0 Serialize body=169 status=ok
// SIG undefined Serialize(void)

ulonglong PostProcessVisualizeDOFPS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = ::operator<<(param_2,param_1 + 0xc0);
  FUN_141ad3f10(param_1 + 0x1bc,uVar1);
  FUN_141ad3f10(param_1 + 0x1c4,uVar1);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0x1de);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1cc);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0x1d2);
  uVar2 = FUN_1419e0a40(uVar1,param_1 + 0x1d8);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141bed490 Serialize body=129 status=ok
// SIG undefined Serialize(void)

ulonglong `anonymous_namespace'::FPostProcessDiaphragmDOFShader::Serialize
                    (longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  ::operator<<(param_2,param_1 + 0xc0);
  uVar3 = 0;
  do {
    uVar2 = 0;
    do {
      uVar1 = FUN_1419e0b60(param_2,param_1 + ((longlong)(int)uVar2 + 0x6f +
                                              (longlong)(int)uVar3 * 5) * 4);
      uVar2 = uVar2 + 1;
    } while (uVar2 < 5);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 3);
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 141bed520 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessDiaphragmDOFDownsampleCS::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1f8);
  }
  return param_1;
}



// FUNCTION 141bed560 FUN_141bed560 body=340 status=ok
// SIG undefined FUN_141bed560(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141bed560(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  longlong local_60 [3];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  uVar2 = 0;
  local_48 = 1;
  local_34 = 0;
  local_70 = local_60;
  local_60[0] = 0;
  local_60[1] = 0;
  local_60[2] = 0;
  local_78 = local_60 + 1;
  local_80 = 1;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_88 = 0xc0;
  (**(code **)(*DAT_146ab6358 + 0x488))(DAT_146ab6358,local_68,&DAT_146ab6e78,2);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  do {
    sVar3 = (short)uVar2 * 4;
    uVar1 = uVar2 * 6;
    *(short *)(local_60[0] + (ulonglong)uVar1 * 2) = sVar3;
    uVar2 = uVar2 + 1;
    *(short *)(local_60[0] + (ulonglong)(uVar1 + 1) * 2) = sVar3 + 3;
    *(short *)(local_60[0] + (ulonglong)(uVar1 + 2) * 2) = sVar3 + 2;
    *(short *)(local_60[0] + (ulonglong)(uVar1 + 3) * 2) = sVar3;
    *(short *)(local_60[0] + (ulonglong)(uVar1 + 4) * 2) = sVar3 + 1;
    *(short *)(local_60[0] + (ulonglong)(uVar1 + 5) * 2) = sVar3 + 3;
  } while (uVar2 < 0x10);
  (**(code **)(*DAT_146ab6358 + 0x500))
            (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
  return;
}



// FUNCTION 141bed6c0 FUN_141bed6c0 body=77 status=ok
// SIG undefined FUN_141bed6c0(void)

void FUN_141bed6c0(longlong param_1)

{
  FUN_141ace450(param_1 + 0x30);
  FUN_141b38020(param_1 + 0x58);
  FUN_141b38020(param_1 + 0x80);
  if (DAT_146ab62e6 == '\0') {
    (**(code **)(*(longlong *)(param_1 + 0xa8) + 0x20))();
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  return;
}



// FUNCTION 141bed710 `scalar_deleting_destructor' body=70 status=ok
// SIG void * `scalar_deleting_destructor'(basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl std::basic_stringbuf<char,struct
   std::char_traits<char>,class std::allocator<char> >::`scalar deleting destructor'(unsigned int)
   __ptr64
   
   Library: Visual Studio 2017 Release */

void * __thiscall
std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
_scalar_deleting_destructor_
          (basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__144e131b8;
  FRenderResource::ReleaseResource();
  FUN_141c12cf0(this);
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0xf0);
  }
  return this;
}



// FUNCTION 141bed770 Serialize body=29 status=ok
// SIG undefined Serialize(void)

ulonglong FPostProcessBusyWaitPS::Serialize(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1419e0a40(param_2,param_1 + 0x1bc);
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 141bed790 FUN_141bed790 body=93 status=ok
// SIG undefined FUN_141bed790(void)

undefined1 FUN_141bed790(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = `anonymous_namespace'::FPostProcessDiaphragmDOFShader::Serialize();
  FUN_1419e0a40(param_2,param_1 + 0x1f8);
  FUN_1419e0a40(param_2,param_1 + 0x1fe);
  FUN_1419e0a40(param_2,param_1 + 0x204);
  return uVar1;
}



// FUNCTION 141bed7f0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessCocDilateCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x210);
  }
  return param_1;
}



// FUNCTION 141bed830 Serialize body=134 status=ok
// SIG undefined Serialize(void)

undefined1 FPrefilterPlanarReflectionPS<1>::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 0xc0);
  FUN_1419e0a40(param_2,param_1 + 0xc6);
  FUN_1419e0b60(param_2,param_1 + 0xcc);
  FUN_1419e0b60(param_2,param_1 + 0xd0);
  ::operator<<(param_2,param_1 + 0xd4);
  FUN_141ad3f10(param_1 + 0x120,param_2);
  FUN_141ad3f10(param_1 + 0x128,param_2);
  return 0;
}



// FUNCTION 141bed8c0 Serialize body=108 status=ok
// SIG undefined Serialize(void)

undefined1 FPostProcessCocDilateCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = `anonymous_namespace'::FPostProcessDiaphragmDOFShader::Serialize();
  FUN_1419e0a40(param_2,param_1 + 0x1f8);
  FUN_1419e0a40(param_2,param_1 + 0x1fe);
  FUN_1419e0a40(param_2,param_1 + 0x204);
  FUN_1419e0a40(param_2,param_1 + 0x20a);
  return uVar1;
}



// FUNCTION 141bed930 Serialize body=119 status=ok
// SIG undefined Serialize(void)

undefined1 FMonoscopicFarFieldMaskPS<1>::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0b60(param_2,param_1 + 0xc4);
  FUN_1419e0a40(param_2,param_1 + 0xd8);
  FUN_1419e0a40(param_2,param_1 + 0xde);
  FUN_141ad3f10(param_1 + 200,param_2);
  FUN_141ad3f10(param_1 + 0xd0,param_2);
  return 0;
}



// FUNCTION 141bed9b0 Serialize body=183 status=ok
// SIG undefined Serialize(void)

undefined1 FPostProcessDiaphragmDOFReduceCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = `anonymous_namespace'::FPostProcessDiaphragmDOFShader::Serialize();
  FUN_1419e0a40(param_2,param_1 + 0x1f8);
  FUN_1419e0a40(param_2,param_1 + 0x1fe);
  FUN_1419e0a40(param_2,param_1 + 0x204);
  FUN_1419e0a40(param_2,param_1 + 0x20a);
  FUN_1419e0a40(param_2,param_1 + 0x210);
  FUN_1419e0b60(param_2,param_1 + 0x216);
  FUN_1419e0b60(param_2,param_1 + 0x21a);
  FUN_1419e0b60(param_2,param_1 + 0x21e);
  FUN_1419e0b60(param_2,param_1 + 0x222);
  return uVar1;
}



// FUNCTION 141beda70 operator<int,FIndividualOcclusionHistory>_TTuple<int,FIndividualOcclusionHistory> body=119 status=ok
// SIG undefined operator<int,FIndividualOcclusionHistory>_TTuple<int,FIndividualOcclusionHistory>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 *
TKeyInitializer<int_const_&>::
operator<int,FIndividualOcclusionHistory>_TTuple<int,FIndividualOcclusionHistory>
          (undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  local_20 = 0;
  uStack_18 = 0;
  *param_2 = *(undefined4 *)*param_1;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  param_2[10] = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  FIndividualOcclusionHistory::~FIndividualOcclusionHistory(&local_38);
  return param_2;
}



// FUNCTION 141bedaf0 FUN_141bedaf0 body=526 status=ok
// SIG undefined FUN_141bedaf0(void)

void FUN_141bedaf0(undefined8 param_1,longlong param_2,longlong param_3,int *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res18;
  int local_res1c;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_3 + 0x60);
  local_38 = &DAT_146a4b1c0;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res18,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar10 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar9;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar11;
  *(undefined8 **)(param_2 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144dc9ce0;
  puVar11[2] = uVar8;
  iVar2 = param_4[2];
  iVar3 = param_4[3];
  iVar4 = *param_4;
  iVar5 = param_4[1];
  local_res18 = iVar2 - iVar4;
  local_res1c = iVar3 - iVar5;
  FUN_141c06290(lVar6,param_2,param_3,&local_res18,param_5,param_6);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_2,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 0x1c8);
  puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar9;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar11;
  *(undefined8 **)(param_2 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144dc9cd0;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141bedd00 FUN_141bedd00 body=1404 status=ok
// SIG undefined FUN_141bedd00(void)

void FUN_141bedd00(undefined8 param_1,longlong param_2,longlong param_3,int *param_4,
                  undefined8 param_5,int param_6,undefined4 param_7)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  int local_res20;
  int local_res24;
  undefined4 uVar10;
  undefined *local_48;
  undefined4 local_40;
  
  local_res20 = param_4[2] - *param_4;
  local_res24 = param_4[3] - param_4[1];
  lVar9 = *(longlong *)(param_3 + 0x60);
  iVar4 = local_res20 + 7;
  iVar1 = local_res24 + 7;
  if (param_6 == 1) {
    local_40 = 0;
    local_48 = &DAT_146a4de20;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(lVar9 + 0x38),&param_6,&local_48);
    plVar6 = (longlong *)0x0;
    if (param_6 != -1) {
      plVar6 = (longlong *)((longlong)param_6 * 0x20 + *(longlong *)(lVar9 + 0x38));
    }
    plVar8 = plVar6 + 2;
    if (plVar6 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    lVar9 = *plVar8;
    lVar2 = *(longlong *)(lVar9 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    uVar3 = *(undefined8 *)(lVar2 + 0x60);
    FRHIComputeShader::UpdateStats(uVar3);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144dc9ce0;
    puVar7[2] = uVar3;
    FUN_141c05ce0(lVar9,param_2,param_3,&local_res20,param_5,param_7);
    uVar10 = (undefined4)((ulonglong)param_5 >> 0x20);
  }
  else if (param_6 == 2) {
    local_40 = 0;
    local_48 = &DAT_146a4df70;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(lVar9 + 0x38),&param_6,&local_48);
    plVar6 = (longlong *)0x0;
    if (param_6 != -1) {
      plVar6 = (longlong *)((longlong)param_6 * 0x20 + *(longlong *)(lVar9 + 0x38));
    }
    plVar8 = plVar6 + 2;
    if (plVar6 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    lVar9 = *plVar8;
    lVar2 = *(longlong *)(lVar9 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    uVar3 = *(undefined8 *)(lVar2 + 0x60);
    FRHIComputeShader::UpdateStats(uVar3);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144dc9ce0;
    puVar7[2] = uVar3;
    FUN_141c05ce0(lVar9,param_2,param_3,&local_res20,param_5,param_7);
    uVar10 = (undefined4)((ulonglong)param_5 >> 0x20);
  }
  else if (param_6 == 3) {
    local_40 = 0;
    local_48 = &DAT_146a4e0c0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(lVar9 + 0x38),&param_6,&local_48);
    plVar6 = (longlong *)0x0;
    if (param_6 != -1) {
      plVar6 = (longlong *)((longlong)param_6 * 0x20 + *(longlong *)(lVar9 + 0x38));
    }
    plVar8 = plVar6 + 2;
    if (plVar6 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    lVar9 = *plVar8;
    lVar2 = *(longlong *)(lVar9 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    uVar3 = *(undefined8 *)(lVar2 + 0x60);
    FRHIComputeShader::UpdateStats(uVar3);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144dc9ce0;
    puVar7[2] = uVar3;
    FUN_141c05ce0(lVar9,param_2,param_3,&local_res20,param_5,param_7);
    uVar10 = (undefined4)((ulonglong)param_5 >> 0x20);
  }
  else if (param_6 == 4) {
    local_40 = 0;
    local_48 = &DAT_146a4e210;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(lVar9 + 0x38),&param_6,&local_48);
    plVar6 = (longlong *)0x0;
    if (param_6 != -1) {
      plVar6 = (longlong *)((longlong)param_6 * 0x20 + *(longlong *)(lVar9 + 0x38));
    }
    plVar8 = plVar6 + 2;
    if (plVar6 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    lVar9 = *plVar8;
    lVar2 = *(longlong *)(lVar9 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    uVar3 = *(undefined8 *)(lVar2 + 0x60);
    FRHIComputeShader::UpdateStats(uVar3);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144dc9ce0;
    puVar7[2] = uVar3;
    FUN_141c05f40(lVar9,param_2,param_3,&local_res20,param_5,param_7);
    uVar10 = (undefined4)((ulonglong)param_5 >> 0x20);
  }
  else {
    if (param_6 != 5) {
      return;
    }
    local_40 = 0;
    local_48 = &DAT_146a4e360;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(lVar9 + 0x38),&param_6,&local_48);
    plVar6 = (longlong *)0x0;
    if (param_6 != -1) {
      plVar6 = (longlong *)((longlong)param_6 * 0x20 + *(longlong *)(lVar9 + 0x38));
    }
    plVar8 = plVar6 + 2;
    if (plVar6 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    lVar9 = *plVar8;
    lVar2 = *(longlong *)(lVar9 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    uVar3 = *(undefined8 *)(lVar2 + 0x60);
    FRHIComputeShader::UpdateStats(uVar3);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144dc9ce0;
    puVar7[2] = uVar3;
    FUN_141c05f40(lVar9,param_2,param_3,&local_res20,param_5,param_7);
    uVar10 = (undefined4)((ulonglong)param_5 >> 0x20);
  }
  DispatchComputeShader
            (param_2,lVar9,(int)((iVar4 >> 0x1f & 7U) + iVar4) >> 3,
             (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3,CONCAT44(uVar10,1));
  lVar2 = *(longlong *)(lVar9 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FRWShaderParameter::UnsetUAV<FRHICommandList>(lVar9 + 0xc0,param_2,*(undefined8 *)(lVar2 + 0x60));
  return;
}



// FUNCTION 141bee280 FUN_141bee280 body=2252 status=ok
// SIG undefined FUN_141bee280(void)

void FUN_141bee280(longlong param_1,longlong param_2,longlong *param_3,int *param_4,
                  ulonglong param_5,int param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined4 uVar15;
  undefined8 uVar14;
  undefined *local_48;
  float local_40;
  float local_3c;
  
  iVar4 = param_4[3] - param_4[1];
  iVar11 = param_4[2] - *param_4;
  uVar1 = *(uint *)(param_1 + 0xb0);
  lVar10 = param_3[0xc];
  iVar12 = (int)((iVar11 + 7 >> 0x1f & 7U) + iVar11 + 7) >> 3;
  iVar5 = FUN_1419ef5f0(uVar1);
  if (((iVar5 < 2) || (DAT_1464c9c1a == '\0')) ||
     ((uVar1 < 0x1e && ((0x20221800U >> (uVar1 & 0x1f) & 1) != 0)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  iVar5 = 1;
  if (bVar3) {
    iVar5 = iVar12;
  }
  if (param_6 == 1) {
    local_48 = &DAT_146a4f750;
    local_40 = 0.0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar10 + 0x38,&param_6,&local_48);
    plVar7 = (longlong *)0x0;
    if (param_6 != -1) {
      plVar7 = (longlong *)((longlong)param_6 * 0x20 + *(longlong *)(lVar10 + 0x38));
    }
    plVar9 = plVar7 + 2;
    if (plVar7 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    lVar10 = *plVar9;
    lVar13 = *(longlong *)(lVar10 + 0x48);
    if (*(char *)(lVar13 + 0x28) == '\0') {
      FUN_1419f3850(lVar13);
    }
    uVar2 = *(undefined8 *)(lVar13 + 0x60);
    FRHIComputeShader::UpdateStats(uVar2);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144dc9ce0;
    puVar8[2] = uVar2;
    lVar13 = *(longlong *)(lVar10 + 0x48);
    if (*(char *)(lVar13 + 0x28) == '\0') {
      FUN_1419f3850(lVar13);
    }
    uVar2 = *(undefined8 *)(lVar13 + 0x60);
    FUN_141aa92b0(lVar10,param_2,uVar2,*(undefined8 *)(*param_3 + 0x20));
    lVar13 = lVar10 + 0xc0;
    FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHIAsyncComputeCommandListImmediate>
              (lVar13,param_2,uVar2,0,param_5);
    local_48 = (undefined *)0x0;
    local_40 = 1.0 / (float)iVar11;
    local_3c = 1.0 / (float)iVar4;
    FUN_141aac7b0(param_2,uVar2,lVar10 + 200,&local_48,param_5 & 0xffffffff00000000);
    uVar14 = param_7;
    FUN_141bf19a0(lVar10 + 0xce,param_2,uVar2,*param_3,param_7,param_8);
    uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
  }
  else if (param_6 == 2) {
    local_48 = &DAT_146a4f8a0;
    local_40 = 0.0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar10 + 0x38,&param_6,&local_48);
    plVar7 = (longlong *)0x0;
    if (param_6 != -1) {
      plVar7 = (longlong *)((longlong)param_6 * 0x20 + *(longlong *)(lVar10 + 0x38));
    }
    plVar9 = plVar7 + 2;
    if (plVar7 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    lVar10 = *plVar9;
    lVar13 = *(longlong *)(lVar10 + 0x48);
    if (*(char *)(lVar13 + 0x28) == '\0') {
      FUN_1419f3850(lVar13);
    }
    uVar2 = *(undefined8 *)(lVar13 + 0x60);
    FRHIComputeShader::UpdateStats(uVar2);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144dc9ce0;
    puVar8[2] = uVar2;
    lVar13 = *(longlong *)(lVar10 + 0x48);
    if (*(char *)(lVar13 + 0x28) == '\0') {
      FUN_1419f3850(lVar13);
    }
    uVar2 = *(undefined8 *)(lVar13 + 0x60);
    FUN_141aa92b0(lVar10,param_2,uVar2,*(undefined8 *)(*param_3 + 0x20));
    lVar13 = lVar10 + 0xc0;
    FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHIAsyncComputeCommandListImmediate>
              (lVar13,param_2,uVar2,0,param_5);
    local_48 = (undefined *)0x0;
    local_40 = 1.0 / (float)iVar11;
    local_3c = 1.0 / (float)iVar4;
    FUN_141aac7b0(param_2,uVar2,lVar10 + 200,&local_48,param_5 & 0xffffffff00000000);
    uVar14 = param_7;
    FUN_141bf2c60(lVar10 + 0xce,param_2,uVar2,*param_3,param_7,param_8);
    uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
  }
  else if (param_6 == 3) {
    local_48 = &DAT_146a4f9f0;
    local_40 = 0.0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar10 + 0x38,&param_6,&local_48);
    plVar7 = (longlong *)0x0;
    if (param_6 != -1) {
      plVar7 = (longlong *)((longlong)param_6 * 0x20 + *(longlong *)(lVar10 + 0x38));
    }
    plVar9 = plVar7 + 2;
    if (plVar7 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    lVar10 = *plVar9;
    lVar13 = *(longlong *)(lVar10 + 0x48);
    if (*(char *)(lVar13 + 0x28) == '\0') {
      FUN_1419f3850(lVar13);
    }
    uVar2 = *(undefined8 *)(lVar13 + 0x60);
    FRHIComputeShader::UpdateStats(uVar2);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144dc9ce0;
    puVar8[2] = uVar2;
    lVar13 = *(longlong *)(lVar10 + 0x48);
    if (*(char *)(lVar13 + 0x28) == '\0') {
      FUN_1419f3850(lVar13);
    }
    uVar2 = *(undefined8 *)(lVar13 + 0x60);
    FUN_141aa92b0(lVar10,param_2,uVar2,*(undefined8 *)(*param_3 + 0x20));
    lVar13 = lVar10 + 0xc0;
    FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHIAsyncComputeCommandListImmediate>
              (lVar13,param_2,uVar2,0,param_5);
    local_48 = (undefined *)0x0;
    local_40 = 1.0 / (float)iVar11;
    local_3c = 1.0 / (float)iVar4;
    FUN_141aac7b0(param_2,uVar2,lVar10 + 200,&local_48,param_5 & 0xffffffff00000000);
    uVar14 = param_7;
    FUN_141bf41d0(lVar10 + 0xce,param_2,uVar2,*param_3,param_7,param_8);
    uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
  }
  else if (param_6 == 4) {
    local_48 = &DAT_146a4fb40;
    local_40 = 0.0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar10 + 0x38,&param_6,&local_48);
    plVar7 = (longlong *)0x0;
    if (param_6 != -1) {
      plVar7 = (longlong *)((longlong)param_6 * 0x20 + *(longlong *)(lVar10 + 0x38));
    }
    plVar9 = plVar7 + 2;
    if (plVar7 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    lVar10 = *plVar9;
    lVar13 = *(longlong *)(lVar10 + 0x48);
    if (*(char *)(lVar13 + 0x28) == '\0') {
      FUN_1419f3850(lVar13);
    }
    uVar2 = *(undefined8 *)(lVar13 + 0x60);
    FRHIComputeShader::UpdateStats(uVar2);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144dc9ce0;
    puVar8[2] = uVar2;
    lVar13 = *(longlong *)(lVar10 + 0x48);
    if (*(char *)(lVar13 + 0x28) == '\0') {
      FUN_1419f3850(lVar13);
    }
    uVar2 = *(undefined8 *)(lVar13 + 0x60);
    FUN_141aa92b0(lVar10,param_2,uVar2,*(undefined8 *)(*param_3 + 0x20));
    lVar13 = lVar10 + 0xc0;
    FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHIAsyncComputeCommandListImmediate>
              (lVar13,param_2,uVar2,0,param_5);
    local_48 = (undefined *)0x0;
    local_40 = 1.0 / (float)iVar11;
    local_3c = 1.0 / (float)iVar4;
    FUN_141aac7b0(param_2,uVar2,lVar10 + 200,&local_48,param_5 & 0xffffffff00000000);
    uVar14 = param_7;
    FUN_141bf5740(lVar10 + 0xce,param_2,uVar2,*param_3,param_7,param_8);
    uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
  }
  else {
    if (param_6 != 5) {
      return;
    }
    local_48 = &DAT_146a4fc90;
    local_40 = 0.0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar10 + 0x38,&param_6,&local_48);
    plVar7 = (longlong *)0x0;
    if (param_6 != -1) {
      plVar7 = (longlong *)((longlong)param_6 * 0x20 + *(longlong *)(lVar10 + 0x38));
    }
    plVar9 = plVar7 + 2;
    if (plVar7 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    lVar10 = *plVar9;
    lVar13 = *(longlong *)(lVar10 + 0x48);
    if (*(char *)(lVar13 + 0x28) == '\0') {
      FUN_1419f3850(lVar13);
    }
    uVar2 = *(undefined8 *)(lVar13 + 0x60);
    FRHIComputeShader::UpdateStats(uVar2);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144dc9ce0;
    puVar8[2] = uVar2;
    lVar13 = *(longlong *)(lVar10 + 0x48);
    if (*(char *)(lVar13 + 0x28) == '\0') {
      FUN_1419f3850(lVar13);
    }
    uVar2 = *(undefined8 *)(lVar13 + 0x60);
    FUN_141aa92b0(lVar10,param_2,uVar2,*(undefined8 *)(*param_3 + 0x20));
    lVar13 = lVar10 + 0xc0;
    FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHIAsyncComputeCommandListImmediate>
              (lVar13,param_2,uVar2,0,param_5);
    local_48 = (undefined *)0x0;
    local_40 = 1.0 / (float)iVar11;
    local_3c = 1.0 / (float)iVar4;
    FUN_141aac7b0(param_2,uVar2,lVar10 + 200,&local_48,param_5 & 0xffffffff00000000);
    uVar14 = param_7;
    FUN_141bf6cb0(lVar10 + 0xce,param_2,uVar2,*param_3,param_7,param_8);
    uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
  }
  DispatchComputeShader(param_2,lVar10,iVar12,iVar12,CONCAT44(uVar15,iVar5));
  lVar10 = *(longlong *)(lVar10 + 0x48);
  if (*(char *)(lVar10 + 0x28) == '\0') {
    FUN_1419f3850(lVar10);
  }
  FRWShaderParameter::UnsetUAV<FRHICommandList>(lVar13,param_2,*(undefined8 *)(lVar10 + 0x60));
  return;
}



// FUNCTION 141beeb50 FUN_141beeb50 body=526 status=ok
// SIG undefined FUN_141beeb50(void)

void FUN_141beeb50(undefined8 param_1,longlong param_2,longlong param_3,int *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int local_res18;
  int local_res1c;
  undefined *local_38;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_3 + 0x60);
  local_38 = &DAT_146a4b1c0;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res18,&local_38);
  plVar10 = (longlong *)0x0;
  if (local_res18 != -1) {
    plVar10 = (longlong *)((longlong)local_res18 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar12 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  lVar6 = *plVar12;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar9;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar11;
  *(undefined8 **)(param_2 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144d91e50;
  puVar11[2] = uVar8;
  iVar2 = param_4[2];
  iVar3 = param_4[3];
  iVar4 = *param_4;
  iVar5 = param_4[1];
  local_res18 = iVar2 - iVar4;
  local_res1c = iVar3 - iVar5;
  FUN_141c07640(lVar6,param_2,param_3,&local_res18,param_5,param_6);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_2,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 0x1c8);
  puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar11 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar9;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar11;
  *(undefined8 **)(param_2 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *(uint *)(puVar11 + 3) = (uint)uVar1;
  *puVar11 = &PTR_LAB_144d91e40;
  puVar11[2] = uVar8;
  puVar11[4] = 0;
  return;
}



// FUNCTION 141beed60 FUN_141beed60 body=1404 status=ok
// SIG undefined FUN_141beed60(void)

void FUN_141beed60(undefined8 param_1,longlong param_2,longlong param_3,int *param_4,
                  undefined8 param_5,int param_6,undefined4 param_7)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  int local_res20;
  int local_res24;
  undefined4 uVar10;
  undefined *local_48;
  undefined4 local_40;
  
  local_res20 = param_4[2] - *param_4;
  local_res24 = param_4[3] - param_4[1];
  lVar9 = *(longlong *)(param_3 + 0x60);
  iVar4 = local_res20 + 7;
  iVar1 = local_res24 + 7;
  if (param_6 == 1) {
    local_40 = 0;
    local_48 = &DAT_146a4de20;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(lVar9 + 0x38),&param_6,&local_48);
    plVar6 = (longlong *)0x0;
    if (param_6 != -1) {
      plVar6 = (longlong *)((longlong)param_6 * 0x20 + *(longlong *)(lVar9 + 0x38));
    }
    plVar8 = plVar6 + 2;
    if (plVar6 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    lVar9 = *plVar8;
    lVar2 = *(longlong *)(lVar9 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    uVar3 = *(undefined8 *)(lVar2 + 0x60);
    FRHIComputeShader::UpdateStats(uVar3);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d91e50;
    puVar7[2] = uVar3;
    FUN_141c06740(lVar9,param_2,param_3,&local_res20,param_5,param_7);
    uVar10 = (undefined4)((ulonglong)param_5 >> 0x20);
  }
  else if (param_6 == 2) {
    local_40 = 0;
    local_48 = &DAT_146a4df70;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(lVar9 + 0x38),&param_6,&local_48);
    plVar6 = (longlong *)0x0;
    if (param_6 != -1) {
      plVar6 = (longlong *)((longlong)param_6 * 0x20 + *(longlong *)(lVar9 + 0x38));
    }
    plVar8 = plVar6 + 2;
    if (plVar6 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    lVar9 = *plVar8;
    lVar2 = *(longlong *)(lVar9 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    uVar3 = *(undefined8 *)(lVar2 + 0x60);
    FRHIComputeShader::UpdateStats(uVar3);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d91e50;
    puVar7[2] = uVar3;
    FUN_141c06740(lVar9,param_2,param_3,&local_res20,param_5,param_7);
    uVar10 = (undefined4)((ulonglong)param_5 >> 0x20);
  }
  else if (param_6 == 3) {
    local_40 = 0;
    local_48 = &DAT_146a4e0c0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(lVar9 + 0x38),&param_6,&local_48);
    plVar6 = (longlong *)0x0;
    if (param_6 != -1) {
      plVar6 = (longlong *)((longlong)param_6 * 0x20 + *(longlong *)(lVar9 + 0x38));
    }
    plVar8 = plVar6 + 2;
    if (plVar6 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    lVar9 = *plVar8;
    lVar2 = *(longlong *)(lVar9 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    uVar3 = *(undefined8 *)(lVar2 + 0x60);
    FRHIComputeShader::UpdateStats(uVar3);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d91e50;
    puVar7[2] = uVar3;
    FUN_141c06740(lVar9,param_2,param_3,&local_res20,param_5,param_7);
    uVar10 = (undefined4)((ulonglong)param_5 >> 0x20);
  }
  else if (param_6 == 4) {
    local_40 = 0;
    local_48 = &DAT_146a4e210;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(lVar9 + 0x38),&param_6,&local_48);
    plVar6 = (longlong *)0x0;
    if (param_6 != -1) {
      plVar6 = (longlong *)((longlong)param_6 * 0x20 + *(longlong *)(lVar9 + 0x38));
    }
    plVar8 = plVar6 + 2;
    if (plVar6 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    lVar9 = *plVar8;
    lVar2 = *(longlong *)(lVar9 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    uVar3 = *(undefined8 *)(lVar2 + 0x60);
    FRHIComputeShader::UpdateStats(uVar3);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d91e50;
    puVar7[2] = uVar3;
    FUN_141c069a0(lVar9,param_2,param_3,&local_res20,param_5,param_7);
    uVar10 = (undefined4)((ulonglong)param_5 >> 0x20);
  }
  else {
    if (param_6 != 5) {
      return;
    }
    local_40 = 0;
    local_48 = &DAT_146a4e360;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(lVar9 + 0x38),&param_6,&local_48);
    plVar6 = (longlong *)0x0;
    if (param_6 != -1) {
      plVar6 = (longlong *)((longlong)param_6 * 0x20 + *(longlong *)(lVar9 + 0x38));
    }
    plVar8 = plVar6 + 2;
    if (plVar6 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    lVar9 = *plVar8;
    lVar2 = *(longlong *)(lVar9 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    uVar3 = *(undefined8 *)(lVar2 + 0x60);
    FRHIComputeShader::UpdateStats(uVar3);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d91e50;
    puVar7[2] = uVar3;
    FUN_141c069a0(lVar9,param_2,param_3,&local_res20,param_5,param_7);
    uVar10 = (undefined4)((ulonglong)param_5 >> 0x20);
  }
  DispatchComputeShader
            (param_2,lVar9,(int)((iVar4 >> 0x1f & 7U) + iVar4) >> 3,
             (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3,CONCAT44(uVar10,1));
  lVar2 = *(longlong *)(lVar9 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FRWShaderParameter::UnsetUAV<FRHICommandList>(lVar9 + 0xc0,param_2,*(undefined8 *)(lVar2 + 0x60));
  return;
}



// FUNCTION 141bef2e0 FUN_141bef2e0 body=805 status=ok
// SIG undefined FUN_141bef2e0(void)

void FUN_141bef2e0(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 local_res18;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar14;
  undefined *local_38;
  float local_30;
  float local_2c;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  lVar6 = param_3[0xc];
  local_38 = &DAT_146a4b850;
  local_30 = 0.0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x38,&local_res18,&local_38);
  plVar11 = (longlong *)0x0;
  if ((int)local_res18 != -1) {
    plVar11 = (longlong *)((longlong)(int)local_res18 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar13 = plVar11 + 2;
  if (plVar11 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
  }
  lVar6 = *plVar13;
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar8);
  puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar12 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar10;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar12;
  *(undefined8 **)(param_2 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_144d91e50;
  puVar12[2] = uVar8;
  iVar2 = param_4[2];
  iVar3 = param_4[3];
  iVar4 = *param_4;
  iVar5 = param_4[1];
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  local_res18 = *(undefined8 *)(lVar7 + 0x60);
  FUN_141aa9420(lVar6,param_2,local_res18,*(undefined8 *)(*param_3 + 0x20));
  FUN_141aa6060(lVar6 + 0x1bc,param_2,&local_res18,*(undefined4 *)(*param_3 + 0x1a38),
                CONCAT44(uVar14,0xf));
  uVar9 = FUN_1404a0e20();
  FUN_141caac70(lVar6 + 0xc0,&local_res18,param_3,param_2,uVar9,0,0);
  uVar8 = local_res18;
  uVar1 = *(ushort *)(lVar6 + 0x1d4);
  puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar12 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar10;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar12;
  *(undefined8 **)(param_2 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_144d91e40;
  puVar12[2] = uVar8;
  *(uint *)(puVar12 + 3) = (uint)uVar1;
  puVar12[4] = param_5;
  local_38 = (undefined *)0x0;
  local_30 = 1.0 / (float)(iVar2 - iVar4);
  local_2c = 1.0 / (float)(iVar3 - iVar5);
  FUN_141a120e0(param_2,local_res18,lVar6 + 0x1cc,&local_38,uVar9 & 0xffffffff00000000);
  iVar3 = (iVar3 - iVar5) + 7;
  iVar2 = (iVar2 - iVar4) + 7;
  DispatchComputeShader
            (param_2,lVar6,(int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,
             (int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3,1);
  lVar7 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  uVar1 = *(ushort *)(lVar6 + 0x1d4);
  puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar12 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar10;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar12;
  *(undefined8 **)(param_2 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  puVar12[2] = uVar8;
  *(uint *)(puVar12 + 3) = (uint)uVar1;
  *puVar12 = &PTR_LAB_144d91e40;
  puVar12[4] = 0;
  return;
}



// FUNCTION 141bef610 FUN_141bef610 body=2252 status=ok
// SIG undefined FUN_141bef610(void)

void FUN_141bef610(longlong param_1,longlong param_2,longlong *param_3,int *param_4,
                  ulonglong param_5,int param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined4 uVar15;
  undefined8 uVar14;
  undefined *local_48;
  float local_40;
  float local_3c;
  
  iVar4 = param_4[3] - param_4[1];
  iVar11 = param_4[2] - *param_4;
  uVar1 = *(uint *)(param_1 + 0xb0);
  lVar10 = param_3[0xc];
  iVar12 = (int)((iVar11 + 7 >> 0x1f & 7U) + iVar11 + 7) >> 3;
  iVar5 = FUN_1419ef5f0(uVar1);
  if (((iVar5 < 2) || (DAT_1464c9c1a == '\0')) ||
     ((uVar1 < 0x1e && ((0x20221800U >> (uVar1 & 0x1f) & 1) != 0)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  iVar5 = 1;
  if (bVar3) {
    iVar5 = iVar12;
  }
  if (param_6 == 1) {
    local_48 = &DAT_146a4f750;
    local_40 = 0.0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar10 + 0x38,&param_6,&local_48);
    plVar7 = (longlong *)0x0;
    if (param_6 != -1) {
      plVar7 = (longlong *)((longlong)param_6 * 0x20 + *(longlong *)(lVar10 + 0x38));
    }
    plVar9 = plVar7 + 2;
    if (plVar7 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    lVar10 = *plVar9;
    lVar13 = *(longlong *)(lVar10 + 0x48);
    if (*(char *)(lVar13 + 0x28) == '\0') {
      FUN_1419f3850(lVar13);
    }
    uVar2 = *(undefined8 *)(lVar13 + 0x60);
    FRHIComputeShader::UpdateStats(uVar2);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144d91e50;
    puVar8[2] = uVar2;
    lVar13 = *(longlong *)(lVar10 + 0x48);
    if (*(char *)(lVar13 + 0x28) == '\0') {
      FUN_1419f3850(lVar13);
    }
    uVar2 = *(undefined8 *)(lVar13 + 0x60);
    FUN_141aa9420(lVar10,param_2,uVar2,*(undefined8 *)(*param_3 + 0x20));
    lVar13 = lVar10 + 0xc0;
    FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHICommandList>
              (lVar13,param_2,uVar2,0,param_5);
    local_48 = (undefined *)0x0;
    local_40 = 1.0 / (float)iVar11;
    local_3c = 1.0 / (float)iVar4;
    FUN_141a120e0(param_2,uVar2,lVar10 + 200,&local_48,param_5 & 0xffffffff00000000);
    uVar14 = param_7;
    FUN_141bf82e0(lVar10 + 0xce,param_2,uVar2,*param_3,param_7,param_8);
    uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
  }
  else if (param_6 == 2) {
    local_48 = &DAT_146a4f8a0;
    local_40 = 0.0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar10 + 0x38,&param_6,&local_48);
    plVar7 = (longlong *)0x0;
    if (param_6 != -1) {
      plVar7 = (longlong *)((longlong)param_6 * 0x20 + *(longlong *)(lVar10 + 0x38));
    }
    plVar9 = plVar7 + 2;
    if (plVar7 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    lVar10 = *plVar9;
    lVar13 = *(longlong *)(lVar10 + 0x48);
    if (*(char *)(lVar13 + 0x28) == '\0') {
      FUN_1419f3850(lVar13);
    }
    uVar2 = *(undefined8 *)(lVar13 + 0x60);
    FRHIComputeShader::UpdateStats(uVar2);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144d91e50;
    puVar8[2] = uVar2;
    lVar13 = *(longlong *)(lVar10 + 0x48);
    if (*(char *)(lVar13 + 0x28) == '\0') {
      FUN_1419f3850(lVar13);
    }
    uVar2 = *(undefined8 *)(lVar13 + 0x60);
    FUN_141aa9420(lVar10,param_2,uVar2,*(undefined8 *)(*param_3 + 0x20));
    lVar13 = lVar10 + 0xc0;
    FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHICommandList>
              (lVar13,param_2,uVar2,0,param_5);
    local_48 = (undefined *)0x0;
    local_40 = 1.0 / (float)iVar11;
    local_3c = 1.0 / (float)iVar4;
    FUN_141a120e0(param_2,uVar2,lVar10 + 200,&local_48,param_5 & 0xffffffff00000000);
    uVar14 = param_7;
    FUN_141bf95a0(lVar10 + 0xce,param_2,uVar2,*param_3,param_7,param_8);
    uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
  }
  else if (param_6 == 3) {
    local_48 = &DAT_146a4f9f0;
    local_40 = 0.0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar10 + 0x38,&param_6,&local_48);
    plVar7 = (longlong *)0x0;
    if (param_6 != -1) {
      plVar7 = (longlong *)((longlong)param_6 * 0x20 + *(longlong *)(lVar10 + 0x38));
    }
    plVar9 = plVar7 + 2;
    if (plVar7 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    lVar10 = *plVar9;
    lVar13 = *(longlong *)(lVar10 + 0x48);
    if (*(char *)(lVar13 + 0x28) == '\0') {
      FUN_1419f3850(lVar13);
    }
    uVar2 = *(undefined8 *)(lVar13 + 0x60);
    FRHIComputeShader::UpdateStats(uVar2);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144d91e50;
    puVar8[2] = uVar2;
    lVar13 = *(longlong *)(lVar10 + 0x48);
    if (*(char *)(lVar13 + 0x28) == '\0') {
      FUN_1419f3850(lVar13);
    }
    uVar2 = *(undefined8 *)(lVar13 + 0x60);
    FUN_141aa9420(lVar10,param_2,uVar2,*(undefined8 *)(*param_3 + 0x20));
    lVar13 = lVar10 + 0xc0;
    FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHICommandList>
              (lVar13,param_2,uVar2,0,param_5);
    local_48 = (undefined *)0x0;
    local_40 = 1.0 / (float)iVar11;
    local_3c = 1.0 / (float)iVar4;
    FUN_141a120e0(param_2,uVar2,lVar10 + 200,&local_48,param_5 & 0xffffffff00000000);
    uVar14 = param_7;
    FUN_141bfab10(lVar10 + 0xce,param_2,uVar2,*param_3,param_7,param_8);
    uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
  }
  else if (param_6 == 4) {
    local_48 = &DAT_146a4fb40;
    local_40 = 0.0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar10 + 0x38,&param_6,&local_48);
    plVar7 = (longlong *)0x0;
    if (param_6 != -1) {
      plVar7 = (longlong *)((longlong)param_6 * 0x20 + *(longlong *)(lVar10 + 0x38));
    }
    plVar9 = plVar7 + 2;
    if (plVar7 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    lVar10 = *plVar9;
    lVar13 = *(longlong *)(lVar10 + 0x48);
    if (*(char *)(lVar13 + 0x28) == '\0') {
      FUN_1419f3850(lVar13);
    }
    uVar2 = *(undefined8 *)(lVar13 + 0x60);
    FRHIComputeShader::UpdateStats(uVar2);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144d91e50;
    puVar8[2] = uVar2;
    lVar13 = *(longlong *)(lVar10 + 0x48);
    if (*(char *)(lVar13 + 0x28) == '\0') {
      FUN_1419f3850(lVar13);
    }
    uVar2 = *(undefined8 *)(lVar13 + 0x60);
    FUN_141aa9420(lVar10,param_2,uVar2,*(undefined8 *)(*param_3 + 0x20));
    lVar13 = lVar10 + 0xc0;
    FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHICommandList>
              (lVar13,param_2,uVar2,0,param_5);
    local_48 = (undefined *)0x0;
    local_40 = 1.0 / (float)iVar11;
    local_3c = 1.0 / (float)iVar4;
    FUN_141a120e0(param_2,uVar2,lVar10 + 200,&local_48,param_5 & 0xffffffff00000000);
    uVar14 = param_7;
    FUN_141bfc080(lVar10 + 0xce,param_2,uVar2,*param_3,param_7,param_8);
    uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
  }
  else {
    if (param_6 != 5) {
      return;
    }
    local_48 = &DAT_146a4fc90;
    local_40 = 0.0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar10 + 0x38,&param_6,&local_48);
    plVar7 = (longlong *)0x0;
    if (param_6 != -1) {
      plVar7 = (longlong *)((longlong)param_6 * 0x20 + *(longlong *)(lVar10 + 0x38));
    }
    plVar9 = plVar7 + 2;
    if (plVar7 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    lVar10 = *plVar9;
    lVar13 = *(longlong *)(lVar10 + 0x48);
    if (*(char *)(lVar13 + 0x28) == '\0') {
      FUN_1419f3850(lVar13);
    }
    uVar2 = *(undefined8 *)(lVar13 + 0x60);
    FRHIComputeShader::UpdateStats(uVar2);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144d91e50;
    puVar8[2] = uVar2;
    lVar13 = *(longlong *)(lVar10 + 0x48);
    if (*(char *)(lVar13 + 0x28) == '\0') {
      FUN_1419f3850(lVar13);
    }
    uVar2 = *(undefined8 *)(lVar13 + 0x60);
    FUN_141aa9420(lVar10,param_2,uVar2,*(undefined8 *)(*param_3 + 0x20));
    lVar13 = lVar10 + 0xc0;
    FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHICommandList>
              (lVar13,param_2,uVar2,0,param_5);
    local_48 = (undefined *)0x0;
    local_40 = 1.0 / (float)iVar11;
    local_3c = 1.0 / (float)iVar4;
    FUN_141a120e0(param_2,uVar2,lVar10 + 200,&local_48,param_5 & 0xffffffff00000000);
    uVar14 = param_7;
    FUN_141bfd5f0(lVar10 + 0xce,param_2,uVar2,*param_3,param_7,param_8);
    uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
  }
  DispatchComputeShader(param_2,lVar10,iVar12,iVar12,CONCAT44(uVar15,iVar5));
  lVar10 = *(longlong *)(lVar10 + 0x48);
  if (*(char *)(lVar10 + 0x28) == '\0') {
    FUN_1419f3850(lVar10);
  }
  FRWShaderParameter::UnsetUAV<FRHICommandList>(lVar13,param_2,*(undefined8 *)(lVar10 + 0x60));
  return;
}



// FUNCTION 141befee0 FUN_141befee0 body=680 status=ok
// SIG undefined FUN_141befee0(void)

void FUN_141befee0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *local_58;
  longlong local_50;
  undefined1 local_48 [4];
  int local_44;
  int local_3c;
  
  FTranslucenyPrimCount::GetPassRange(param_1,local_48,*param_5);
  if (local_44 < local_3c) {
    local_50 = (longlong)local_44 << 4;
    uVar11 = (ulonglong)(uint)(local_3c - local_44);
    do {
      lVar2 = *(longlong *)(local_50 + *(longlong *)(param_1 + 0x18));
      lVar8 = *(longlong *)(param_3 + 0x1b30);
      lVar6 = (longlong)*(int *)(lVar2 + 0xe8);
      uVar5 = *(uint *)(lVar8 + 4 + lVar6 * 8);
      if ((uVar5 >> 10 & 1) != 0) {
        iVar9 = 0;
        if (*(int *)(lVar2 + 0xe8) != 0) {
          iVar9 = *(int *)(*(longlong *)(param_3 + 0x2290) + -4 + lVar6 * 4);
        }
        iVar1 = *(int *)(*(longlong *)(param_3 + 0x2290) + lVar6 * 4);
        if (iVar9 < iVar1) {
          lVar7 = (longlong)iVar9 * 0x18;
          uVar10 = (ulonglong)(uint)(iVar1 - iVar9);
          do {
            local_58 = (longlong *)0x1;
            lVar3 = *(longlong *)(*(longlong *)(param_3 + 0x2280) + lVar7);
            if (*(int *)(lVar3 + 0x80) != 1) {
              local_58 = (longlong *)((1L << ((byte)*(int *)(lVar3 + 0x80) & 0x3f)) + -1);
            }
            FUN_141c1b2d0(param_2,param_3,*param_5,lVar3,&local_58,param_4,0,
                          *(undefined8 *)(*(longlong *)(param_3 + 0x2280) + 8 + lVar7),
                          *(undefined4 *)(lVar3 + 0xb0));
            lVar7 = lVar7 + 0x18;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
          uVar5 = *(uint *)(lVar8 + lVar6 * 8 + 4);
        }
        if (((uVar5 >> 8 & 1) != 0) && (iVar9 = 0, 0 < *(int *)(lVar2 + 0x38))) {
          lVar8 = 0;
          do {
            lVar6 = *(longlong *)(lVar8 + *(longlong *)(lVar2 + 0x30));
            uVar5 = *(uint *)(lVar6 + 200);
            lVar7 = *(longlong *)(param_3 + 0x1b50);
            if (*(longlong *)(param_3 + 0x1b50) == 0) {
              lVar7 = param_3 + 0x1b40;
            }
            uVar4 = uVar5;
            if ((int)uVar5 < 0) {
              uVar4 = uVar5 + 0x1f;
            }
            if ((*(uint *)(lVar7 + (longlong)((int)uVar4 >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0) {
              local_58 = (longlong *)0x0;
              (**(code **)(**(longlong **)(lVar6 + 0xa8) + 0x40))
                        (*(longlong **)(lVar6 + 0xa8),*(undefined4 *)(param_3 + 0x1a38),local_48,
                         &local_58);
              uVar5 = (**(code **)(*local_58 + 0x1e8))();
              if (1 < uVar5) {
                local_58 = (longlong *)0x1;
                if (*(int *)(lVar6 + 0x80) != 1) {
                  local_58 = (longlong *)((1L << ((byte)*(int *)(lVar6 + 0x80) & 0x3f)) + -1);
                }
                FUN_141c1b2d0(param_2,param_3,*param_5,lVar6,&local_58,param_4,0,
                              *(undefined8 *)(lVar2 + 8),*(undefined4 *)(lVar6 + 0xb0));
              }
            }
            iVar9 = iVar9 + 1;
            lVar8 = lVar8 + 8;
          } while (iVar9 < *(int *)(lVar2 + 0x38));
        }
      }
      local_50 = local_50 + 0x10;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return;
}



// FUNCTION 141bf0190 FUN_141bf0190 body=590 status=ok
// SIG undefined FUN_141bf0190(void)

void FUN_141bf0190(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *local_58;
  longlong local_50;
  undefined1 local_48 [4];
  int local_44;
  int local_3c;
  
  FTranslucenyPrimCount::GetPassRange(param_1,local_48,*param_5);
  if (local_44 < local_3c) {
    local_50 = (longlong)local_44 << 4;
    uVar11 = (ulonglong)(uint)(local_3c - local_44);
    do {
      lVar2 = *(longlong *)(local_50 + *(longlong *)(param_1 + 0x18));
      lVar9 = *(longlong *)(param_3 + 0x1b30);
      lVar6 = (longlong)*(int *)(lVar2 + 0xe8);
      uVar5 = *(uint *)(lVar9 + 4 + lVar6 * 8);
      if ((uVar5 >> 10 & 1) != 0) {
        iVar7 = 0;
        if (*(int *)(lVar2 + 0xe8) != 0) {
          iVar7 = *(int *)(*(longlong *)(param_3 + 0x2290) + -4 + lVar6 * 4);
        }
        iVar1 = *(int *)(*(longlong *)(param_3 + 0x2290) + lVar6 * 4);
        if (iVar7 < iVar1) {
          lVar8 = (longlong)iVar7 * 0x18;
          uVar10 = (ulonglong)(uint)(iVar1 - iVar7);
          do {
            lVar3 = *(longlong *)(*(longlong *)(param_3 + 0x2280) + lVar8);
            FUN_141c1b0f0(param_2,param_3,*param_5,lVar3,0,param_4,
                          *(undefined8 *)(*(longlong *)(param_3 + 0x2280) + 8 + lVar8),
                          *(undefined4 *)(lVar3 + 0xb0));
            lVar8 = lVar8 + 0x18;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
          uVar5 = *(uint *)(lVar9 + lVar6 * 8 + 4);
        }
        if (((uVar5 >> 8 & 1) != 0) && (iVar7 = 0, 0 < *(int *)(lVar2 + 0x38))) {
          lVar9 = 0;
          do {
            lVar6 = *(longlong *)(lVar9 + *(longlong *)(lVar2 + 0x30));
            uVar5 = *(uint *)(lVar6 + 200);
            lVar8 = *(longlong *)(param_3 + 0x1b50);
            if (*(longlong *)(param_3 + 0x1b50) == 0) {
              lVar8 = param_3 + 0x1b40;
            }
            uVar4 = uVar5;
            if ((int)uVar5 < 0) {
              uVar4 = uVar5 + 0x1f;
            }
            if ((*(uint *)(lVar8 + (longlong)((int)uVar4 >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0) {
              local_58 = (longlong *)0x0;
              (**(code **)(**(longlong **)(lVar6 + 0xa8) + 0x40))
                        (*(longlong **)(lVar6 + 0xa8),*(undefined4 *)(param_3 + 0x1a38),local_48,
                         &local_58);
              uVar5 = (**(code **)(*local_58 + 0x1e8))();
              if (1 < uVar5) {
                FUN_141c1b0f0(param_2,param_3,*param_5,lVar6,0,param_4,*(undefined8 *)(lVar2 + 8),
                              *(undefined4 *)(lVar6 + 0xb0));
              }
            }
            iVar7 = iVar7 + 1;
            lVar9 = lVar9 + 8;
          } while (iVar7 < *(int *)(lVar2 + 0x38));
        }
      }
      local_50 = local_50 + 0x10;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return;
}



// FUNCTION 141bf03e0 FUN_141bf03e0 body=469 status=ok
// SIG undefined FUN_141bf03e0(void)

undefined8
FUN_141bf03e0(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined4 *param_4,
             char param_5,undefined1 param_6)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong *local_88;
  longlong local_80;
  longlong *local_78;
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined1 local_34;
  
  lVar3 = 0x2268;
  if (param_5 != '\x01') {
    lVar3 = 0x2258;
  }
  if (*(int *)(lVar3 + param_2) == 0) {
    return 0;
  }
  lVar4 = 0x2260;
  if (param_5 != '\x01') {
    lVar4 = 0x2250;
  }
  local_78 = (longlong *)(lVar4 + param_2);
  iVar2 = *(int *)(lVar3 + param_2) + -1;
  local_80 = (longlong)iVar2;
  if (-1 < iVar2) {
    lVar3 = 0;
    do {
      local_88 = (longlong *)0x0;
      lVar4 = *(longlong *)(*local_78 + lVar3 * 8);
      (**(code **)(**(longlong **)(lVar4 + 0xa8) + 0x40))
                (*(longlong **)(lVar4 + 0xa8),*(undefined4 *)(param_2 + 0x1a38),local_70,&local_88);
      cVar1 = (**(code **)(*local_88 + 0x28))();
      uVar5 = (uint)(cVar1 != '\0');
      do {
        local_68 = *param_3;
        local_60 = param_3[1];
        local_58 = *(undefined4 *)(param_3 + 2);
        local_50 = param_3[3];
        if (local_50 != 0) {
          LOCK();
          *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
          UNLOCK();
        }
        local_48 = param_3[4];
        local_38 = *(undefined4 *)(param_3 + 6);
        local_40 = *(undefined4 *)(param_3 + 5);
        local_3c = -(uint)(uVar5 != 0) & 8 ^ *(uint *)((longlong)param_3 + 0x2c);
        local_34 = 0;
        FUN_141c1b0f0(param_1,param_2,*param_4,lVar4,param_6,&local_68,0,
                      *(undefined4 *)(lVar4 + 0xb0));
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>();
        uVar5 = uVar5 - 1;
      } while (-1 < (int)uVar5);
      lVar3 = lVar3 + 1;
    } while (lVar3 <= local_80);
  }
  return 1;
}



// FUNCTION 141bf05c0 FUN_141bf05c0 body=702 status=ok
// SIG undefined FUN_141bf05c0(void)

int * FUN_141bf05c0(longlong *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void *_Dst;
  char cVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  bool local_res8;
  
  iVar6 = 1;
  iVar12 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)((longlong)iVar7 * 0x38 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)((longlong)iVar8 * 0x38 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar11 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar11 = *puVar11 | 1 << ((byte)iVar7 & 0x1f);
  puVar11 = (uint *)((longlong)iVar7 * 0x38 + *param_1);
  TKeyInitializer<int_const_&>::
  operator<int,FIndividualOcclusionHistory>_TTuple<int,FIndividualOcclusionHistory>(param_3,puVar11)
  ;
  puVar11[0xc] = 0xffffffff;
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar10 != 1) {
    iVar7 = iVar12;
    if (uVar10 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar5 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar11) * 4);
      if (iVar8 != -1) {
        do {
          iVar7 = iVar8;
          if (*(uint *)((longlong)iVar8 * 0x38 + *param_1) == *puVar11) break;
          iVar8 = *(int *)((longlong)iVar8 * 0x38 + 0x30 + *param_1);
          iVar7 = iVar12;
        } while (iVar8 != -1);
      }
    }
    local_res8 = iVar7 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar7 * 0x38 + *param_1);
      FIndividualOcclusionHistory::~FIndividualOcclusionHistory((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,puVar11,0x30);
      iVar6 = *param_2;
      bVar1 = (byte)iVar6 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x38 + *param_1) = iVar6;
      }
      puVar4 = (undefined4 *)((longlong)iVar6 * 0x38 + *param_1);
      *puVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar12 = (int)param_1[6];
      }
      puVar4[1] = iVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar6;
      plVar5 = (longlong *)param_1[4];
      *param_2 = iVar7;
      if (plVar5 == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      puVar11 = (uint *)((longlong)plVar5 +
                        (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar11 = *puVar11 & ~(1 << bVar1 | 1U >> 0x20 - bVar1);
      goto LAB_141bf0855;
    }
  }
  if (3 < uVar10) {
    uVar3 = (uVar10 >> 1) + 8;
    iVar12 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar6 = 0x20;
    cVar9 = '\0';
    if (uVar3 != 0) {
      iVar6 = 0x1f - iVar12;
    }
    uVar3 = (uVar10 >> 1) + 7;
    iVar12 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar3 != 0) {
      cVar9 = '\x1f' - (char)iVar12;
    }
    iVar6 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar6 <= (int)param_1[9])))) {
    uVar10 = (int)param_1[9] - 1U & *puVar11;
    puVar11[0xd] = uVar10;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    puVar11[0xc] = *(uint *)((longlong)plVar5 +
                            ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar6;
    TSet<TTuple<int,FIndividualOcclusionHistory>,TDefaultMapHashableKeyFuncs<int,FIndividualOcclusionHistory,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141bf0855:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 141bf0880 FUN_141bf0880 body=1380 status=ok
// SIG undefined FUN_141bf0880(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141bf0880(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  int iVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  undefined1 uVar17;
  int iVar18;
  longlong *plVar19;
  int iVar20;
  undefined1 auStack_468 [32];
  longlong **local_448;
  float local_440;
  float local_438;
  float local_430;
  float local_428;
  undefined8 local_420;
  undefined8 local_418;
  longlong local_410;
  undefined4 local_408;
  undefined4 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined *local_3e0;
  ulonglong uStack_3d8;
  undefined1 local_3d0;
  undefined1 local_3cf;
  longlong *local_3c8;
  longlong *local_3c0;
  undefined8 local_3b8;
  undefined8 local_3a8;
  longlong *plStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined4 local_360;
  ulonglong local_35c;
  undefined8 local_354;
  undefined4 local_34c;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined8 local_304;
  undefined8 local_2fc;
  undefined4 local_2f4;
  undefined1 local_2e8 [192];
  undefined4 local_228;
  undefined1 local_158 [256];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_468;
  bVar6 = false;
  local_3f8 = local_3f8 & 0xffffffff00000000;
  local_3b8 = param_3;
  uVar10 = FSceneRenderTargets::Get();
  plVar11 = (longlong *)FSceneRenderTargets::GetSceneColorTexture(uVar10);
  local_3e8 = *plVar11;
  if (1 < *(int *)(param_2 + 0x1a38)) {
    local_448 = &local_3c8;
    local_3c0 = (longlong *)0x0;
    local_3c8 = (longlong *)0x0;
    FUN_141c57a70(&DAT_146a503f0,param_1,param_2,&local_3c0);
    if (local_3c8 != (longlong *)0x0) {
      local_3e8 = local_3c8[2];
      (**(code **)(*local_3c8 + 0x30))();
    }
    if (local_3c0 != (longlong *)0x0) {
      (**(code **)(*local_3c0 + 0x30))();
    }
  }
  iVar8 = FUN_14274f980(param_2);
  if (((iVar8 - 0x11U & 0xfffffff3) == 0) && (iVar8 != 0x19)) {
    uVar17 = 2;
  }
  else {
    uVar17 = 0;
  }
  puVar12 = (undefined8 *)(**(code **)(*param_4 + 8))(param_4);
  uStack_3d8 = 0xffffffff00000000;
  local_3e0 = (undefined *)*puVar12;
  local_3cf = 1;
  local_3f8 = 0;
  local_3f0 = 0;
  local_3d0 = uVar17;
  FUN_140c63b80(local_2e8,1,&local_3e0,&local_3f8);
  FRHICommandListBase::CacheActiveRenderTargets(param_1,local_228,local_2e8,local_158);
  puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar15 + 0x54;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x2a8);
    puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar15 + 0x54;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar15;
  *(undefined8 **)(param_1 + 8) = puVar15 + 1;
  puVar15[1] = 0;
  *puVar15 = &PTR_FUN_1444d5488;
  FUN_140c63680(puVar15 + 2,local_2e8);
  uVar1 = *(undefined4 *)(param_2 + 0x1aac);
  uVar2 = *(undefined4 *)(param_2 + 0x1aa8);
  puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar3 = *(undefined4 *)(param_2 + 0x1aa4);
  local_3f8 = CONCAT44(local_3f8._4_4_,*(undefined4 *)(param_2 + 0x1aa0));
  puVar12 = puVar15 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar15 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar15;
  *(undefined8 **)(param_1 + 8) = puVar15 + 1;
  puVar15[1] = 0;
  *(undefined4 *)((longlong)puVar15 + 0x14) = uVar3;
  plVar11 = (longlong *)0x0;
  *puVar15 = &PTR_LAB_143f59420;
  *(int *)(puVar15 + 2) = (int)local_3f8;
  *(undefined4 *)(puVar15 + 3) = 0;
  *(undefined4 *)((longlong)puVar15 + 0x1c) = uVar2;
  *(undefined4 *)(puVar15 + 4) = uVar1;
  *(undefined4 *)((longlong)puVar15 + 0x24) = 0x3f800000;
  local_3a8 = 0;
  plStack_3a0 = (longlong *)0x0;
  local_398 = 0;
  uStack_390 = 0;
  local_388 = 0;
  uStack_380 = 0;
  local_378 = 0;
  uStack_370 = 0;
  local_368 = 0;
  local_360 = 0;
  local_35c = 0x26;
  local_354 = 0;
  local_34c = 0;
  local_348 = 0;
  uStack_340 = 0;
  local_338 = 0;
  local_330 = 0;
  local_328 = 0;
  local_320 = 0;
  local_318 = 0;
  local_310 = 0;
  local_308 = 0;
  local_304 = 0;
  local_2fc = 0;
  local_2f4 = 0;
  FUN_14049afe0(param_1,&local_3a8);
  local_378 = FUN_1404a0ce0();
  uStack_370 = FUN_140985530();
  local_368 = FUN_1409853f0();
  lVar13 = *(longlong *)(param_2 + 0x3090);
  uStack_3d8 = uStack_3d8 & 0xffffffff00000000;
  local_3e0 = &DAT_146a2df00;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar13 + 0x38,&local_3f8,&local_3e0);
  plVar16 = plVar11;
  if ((int)local_3f8 != -1) {
    plVar16 = (longlong *)((longlong)(int)local_3f8 * 0x20 + *(longlong *)(lVar13 + 0x38));
  }
  uStack_3d8 = uStack_3d8 & 0xffffffff00000000;
  plVar19 = plVar16 + 2;
  if (plVar16 == (longlong *)0x0) {
    plVar19 = plVar11;
  }
  local_3e0 = &DAT_146a4ca50;
  lVar4 = *plVar19;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar13 + 0x38,&local_3f8,&local_3e0);
  plVar16 = plVar11;
  if ((int)local_3f8 != -1) {
    plVar16 = (longlong *)((longlong)(int)local_3f8 * 0x20 + *(longlong *)(lVar13 + 0x38));
  }
  plVar19 = plVar16 + 2;
  if (plVar16 == (longlong *)0x0) {
    plVar19 = plVar11;
  }
  lVar13 = *plVar19;
  local_3a8 = DAT_1464c2720;
  if (lVar4 == 0) {
    local_3f8 = 0;
    bVar6 = true;
  }
  else {
    lVar5 = *(longlong *)(lVar4 + 0x48);
    if (*(char *)(lVar5 + 0x28) == '\0') {
      FUN_1419f3850(lVar5);
    }
    plVar11 = *(longlong **)(lVar5 + 0x38);
  }
  uVar10 = 0;
  plStack_3a0 = plVar11;
  if (bVar6) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_3f8);
  }
  bVar6 = false;
  if (lVar13 == 0) {
    bVar6 = true;
    local_3f8 = 0;
  }
  else {
    lVar5 = *(longlong *)(lVar13 + 0x48);
    if (*(char *)(lVar5 + 0x28) == '\0') {
      FUN_1419f3850(lVar5);
    }
    uVar10 = *(undefined8 *)(lVar5 + 0x40);
  }
  local_388 = uVar10;
  if (bVar6) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_3f8);
  }
  local_35c = local_35c & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_3a8,2,1);
  local_448 = (longlong **)local_3e8;
  FUN_141c2b010(lVar13,param_1,param_2,local_3b8);
  local_3e0 = (undefined *)0x0;
  uStack_3d8 = 0;
  FUN_141c2bd60(lVar4,param_1,param_2,&local_3e0);
  local_3f8 = *(undefined8 *)(param_2 + 0x1aa0);
  iVar8 = *(int *)(param_2 + 0x1aa8);
  iVar9 = (int)local_3f8;
  iVar18 = *(int *)(param_2 + 0x1aac) - (int)(local_3f8 >> 0x20);
  if ((((&DAT_1464c9c48)[*(int *)(param_2 + 0x1a38)] - 8 < 3) ||
      ((&DAT_1464c9c48)[*(int *)(param_2 + 0x1a38)] == 0x18)) &&
     (cVar7 = FUN_142753a10(), cVar7 == '\0')) {
    iVar20 = local_3f8._4_4_ + iVar18;
    iVar18 = -iVar18;
  }
  else {
    iVar20 = local_3f8._4_4_;
  }
  lVar13 = FSceneRenderTargets::Get(param_1);
  iVar14 = *(int *)(param_2 + 0x1aac) - *(int *)(param_2 + 0x1aa4);
  local_418 = *(undefined8 *)(lVar13 + 0x378);
  local_400 = 1;
  local_408 = 1;
  local_430 = (float)(iVar8 - iVar9);
  local_3e8 = CONCAT44(iVar14,*(int *)(param_2 + 0x1aa8) - *(int *)(param_2 + 0x1aa0));
  local_420 = local_3e8;
  local_428 = (float)iVar18;
  local_438 = (float)iVar20;
  local_440 = (float)(int)local_3f8;
  local_448 = (longlong **)CONCAT44(local_448._4_4_,(float)iVar14);
  local_410 = lVar4;
  DrawRectangle(param_1);
  FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2e8);
  return;
}



// FUNCTION 141bf0df0 FUN_141bf0df0 body=1380 status=ok
// SIG undefined FUN_141bf0df0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141bf0df0(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  int iVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  undefined1 uVar17;
  int iVar18;
  longlong *plVar19;
  int iVar20;
  undefined1 auStack_468 [32];
  longlong **local_448;
  float local_440;
  float local_438;
  float local_430;
  float local_428;
  undefined8 local_420;
  undefined8 local_418;
  longlong local_410;
  undefined4 local_408;
  undefined4 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined *local_3e0;
  ulonglong uStack_3d8;
  undefined1 local_3d0;
  undefined1 local_3cf;
  longlong *local_3c8;
  longlong *local_3c0;
  undefined8 local_3b8;
  undefined8 local_3a8;
  longlong *plStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined4 local_360;
  ulonglong local_35c;
  undefined8 local_354;
  undefined4 local_34c;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined8 local_304;
  undefined8 local_2fc;
  undefined4 local_2f4;
  undefined1 local_2e8 [192];
  undefined4 local_228;
  undefined1 local_158 [256];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_468;
  bVar6 = false;
  local_3f8 = local_3f8 & 0xffffffff00000000;
  local_3b8 = param_3;
  uVar10 = FSceneRenderTargets::Get();
  plVar11 = (longlong *)FSceneRenderTargets::GetSceneColorTexture(uVar10);
  local_3e8 = *plVar11;
  if (1 < *(int *)(param_2 + 0x1a38)) {
    local_448 = &local_3c8;
    local_3c0 = (longlong *)0x0;
    local_3c8 = (longlong *)0x0;
    FUN_141c57a70(&DAT_146a503f0,param_1,param_2,&local_3c0);
    if (local_3c8 != (longlong *)0x0) {
      local_3e8 = local_3c8[2];
      (**(code **)(*local_3c8 + 0x30))();
    }
    if (local_3c0 != (longlong *)0x0) {
      (**(code **)(*local_3c0 + 0x30))();
    }
  }
  iVar8 = FUN_14274f980(param_2);
  if (((iVar8 - 0x11U & 0xfffffff3) == 0) && (iVar8 != 0x19)) {
    uVar17 = 2;
  }
  else {
    uVar17 = 0;
  }
  puVar12 = (undefined8 *)(**(code **)(*param_4 + 8))(param_4);
  uStack_3d8 = 0xffffffff00000000;
  local_3e0 = (undefined *)*puVar12;
  local_3cf = 1;
  local_3f8 = 0;
  local_3f0 = 0;
  local_3d0 = uVar17;
  FUN_140c63b80(local_2e8,1,&local_3e0,&local_3f8);
  FRHICommandListBase::CacheActiveRenderTargets(param_1,local_228,local_2e8,local_158);
  puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar15 + 0x54;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x2a8);
    puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar15 + 0x54;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar15;
  *(undefined8 **)(param_1 + 8) = puVar15 + 1;
  puVar15[1] = 0;
  *puVar15 = &PTR_FUN_1444d5488;
  FUN_140c63680(puVar15 + 2,local_2e8);
  uVar1 = *(undefined4 *)(param_2 + 0x1aac);
  uVar2 = *(undefined4 *)(param_2 + 0x1aa8);
  puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar3 = *(undefined4 *)(param_2 + 0x1aa4);
  local_3f8 = CONCAT44(local_3f8._4_4_,*(undefined4 *)(param_2 + 0x1aa0));
  puVar12 = puVar15 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar15 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar15;
  *(undefined8 **)(param_1 + 8) = puVar15 + 1;
  puVar15[1] = 0;
  *(undefined4 *)((longlong)puVar15 + 0x14) = uVar3;
  plVar11 = (longlong *)0x0;
  *puVar15 = &PTR_LAB_143f59420;
  *(int *)(puVar15 + 2) = (int)local_3f8;
  *(undefined4 *)(puVar15 + 3) = 0;
  *(undefined4 *)((longlong)puVar15 + 0x1c) = uVar2;
  *(undefined4 *)(puVar15 + 4) = uVar1;
  *(undefined4 *)((longlong)puVar15 + 0x24) = 0x3f800000;
  local_3a8 = 0;
  plStack_3a0 = (longlong *)0x0;
  local_398 = 0;
  uStack_390 = 0;
  local_388 = 0;
  uStack_380 = 0;
  local_378 = 0;
  uStack_370 = 0;
  local_368 = 0;
  local_360 = 0;
  local_35c = 0x26;
  local_354 = 0;
  local_34c = 0;
  local_348 = 0;
  uStack_340 = 0;
  local_338 = 0;
  local_330 = 0;
  local_328 = 0;
  local_320 = 0;
  local_318 = 0;
  local_310 = 0;
  local_308 = 0;
  local_304 = 0;
  local_2fc = 0;
  local_2f4 = 0;
  FUN_14049afe0(param_1,&local_3a8);
  local_378 = FUN_1404a0ce0();
  uStack_370 = FUN_140985530();
  local_368 = FUN_1409853f0();
  lVar13 = *(longlong *)(param_2 + 0x3090);
  uStack_3d8 = uStack_3d8 & 0xffffffff00000000;
  local_3e0 = &DAT_146a2df00;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar13 + 0x38,&local_3f8,&local_3e0);
  plVar16 = plVar11;
  if ((int)local_3f8 != -1) {
    plVar16 = (longlong *)((longlong)(int)local_3f8 * 0x20 + *(longlong *)(lVar13 + 0x38));
  }
  uStack_3d8 = uStack_3d8 & 0xffffffff00000000;
  plVar19 = plVar16 + 2;
  if (plVar16 == (longlong *)0x0) {
    plVar19 = plVar11;
  }
  local_3e0 = &DAT_146a4c900;
  lVar4 = *plVar19;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar13 + 0x38,&local_3f8,&local_3e0);
  plVar16 = plVar11;
  if ((int)local_3f8 != -1) {
    plVar16 = (longlong *)((longlong)(int)local_3f8 * 0x20 + *(longlong *)(lVar13 + 0x38));
  }
  plVar19 = plVar16 + 2;
  if (plVar16 == (longlong *)0x0) {
    plVar19 = plVar11;
  }
  lVar13 = *plVar19;
  local_3a8 = DAT_1464c2720;
  if (lVar4 == 0) {
    local_3f8 = 0;
    bVar6 = true;
  }
  else {
    lVar5 = *(longlong *)(lVar4 + 0x48);
    if (*(char *)(lVar5 + 0x28) == '\0') {
      FUN_1419f3850(lVar5);
    }
    plVar11 = *(longlong **)(lVar5 + 0x38);
  }
  uVar10 = 0;
  plStack_3a0 = plVar11;
  if (bVar6) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_3f8);
  }
  bVar6 = false;
  if (lVar13 == 0) {
    bVar6 = true;
    local_3f8 = 0;
  }
  else {
    lVar5 = *(longlong *)(lVar13 + 0x48);
    if (*(char *)(lVar5 + 0x28) == '\0') {
      FUN_1419f3850(lVar5);
    }
    uVar10 = *(undefined8 *)(lVar5 + 0x40);
  }
  local_388 = uVar10;
  if (bVar6) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_3f8);
  }
  local_35c = local_35c & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_3a8,2,1);
  local_448 = (longlong **)local_3e8;
  FUN_141c2b010(lVar13,param_1,param_2,local_3b8);
  local_3e0 = (undefined *)0x0;
  uStack_3d8 = 0;
  FUN_141c2bd60(lVar4,param_1,param_2,&local_3e0);
  local_3f8 = *(undefined8 *)(param_2 + 0x1aa0);
  iVar8 = *(int *)(param_2 + 0x1aa8);
  iVar9 = (int)local_3f8;
  iVar18 = *(int *)(param_2 + 0x1aac) - (int)(local_3f8 >> 0x20);
  if ((((&DAT_1464c9c48)[*(int *)(param_2 + 0x1a38)] - 8 < 3) ||
      ((&DAT_1464c9c48)[*(int *)(param_2 + 0x1a38)] == 0x18)) &&
     (cVar7 = FUN_142753a10(), cVar7 == '\0')) {
    iVar20 = local_3f8._4_4_ + iVar18;
    iVar18 = -iVar18;
  }
  else {
    iVar20 = local_3f8._4_4_;
  }
  lVar13 = FSceneRenderTargets::Get(param_1);
  iVar14 = *(int *)(param_2 + 0x1aac) - *(int *)(param_2 + 0x1aa4);
  local_418 = *(undefined8 *)(lVar13 + 0x378);
  local_400 = 1;
  local_408 = 1;
  local_430 = (float)(iVar8 - iVar9);
  local_3e8 = CONCAT44(iVar14,*(int *)(param_2 + 0x1aa8) - *(int *)(param_2 + 0x1aa0));
  local_420 = local_3e8;
  local_428 = (float)iVar18;
  local_438 = (float)iVar20;
  local_440 = (float)(int)local_3f8;
  local_448 = (longlong **)CONCAT44(local_448._4_4_,(float)iVar14);
  local_410 = lVar4;
  DrawRectangle(param_1);
  FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2e8);
  return;
}



// FUNCTION 141bf1360 FUN_141bf1360 body=927 status=ok
// SIG undefined FUN_141bf1360(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141bf1360(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  undefined8 *puVar15;
  char cVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined8 *puVar21;
  int iVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  undefined1 auStack_3a8 [32];
  longlong local_388;
  undefined4 local_378 [16];
  int local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_328 [38];
  int local_1f8;
  undefined8 local_1d8 [3];
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_3a8;
  uVar25 = 0;
  if ((int)param_2[5] == 0) {
LAB_141bf16b0:
    local_378[0] = 0;
  }
  else {
    if (*(longlong *)(*param_2 + 0x98) == 0) {
      puVar17 = &local_198;
      local_198 = 0;
      uStack_190 = 0x3f80000000000000;
      local_188 = 0;
      uStack_180 = 0x3f80000000000000;
      local_178 = 0;
      uStack_170 = 0x3f80000000000000;
      local_168 = 0;
      uStack_160 = 0x3f80000000000000;
      local_158 = 0;
      uStack_150 = 0x3f80000000000000;
      local_148 = 0;
      uStack_140 = 0x3f80000000000000;
      local_138 = 0;
      uStack_130 = 0x3f80000000000000;
      local_128 = 0;
      uStack_120 = 0x3f80000000000000;
      local_f8 = 0;
      uStack_f0 = 0x3f80000000000000;
      local_e8 = 0;
      uStack_e0 = 0x3f80000000000000;
      local_d8 = 0;
      uStack_d0 = 0x3f80000000000000;
      local_c8 = 0;
      uStack_c0 = 0x3f80000000000000;
      local_b8 = 0;
      uStack_b0 = 0x3f80000000000000;
      local_a8 = 0;
      uStack_a0 = 0x3f80000000000000;
      local_98 = 0;
      uStack_90 = 0x3f80000000000000;
      local_88 = 0;
      uStack_80 = 0x3f80000000000000;
      local_110 = 0;
      local_108 = 0;
      local_68 = 0;
    }
    else {
      puVar17 = (undefined8 *)
                FUN_14274f0e0(*(longlong *)(*param_2 + 0x98),&local_198,(int)param_2[6]);
    }
    lVar23 = 2;
    puVar15 = local_328;
    do {
      puVar21 = puVar15;
      puVar18 = puVar17;
      uVar10 = puVar18[1];
      uVar11 = puVar18[2];
      uVar12 = puVar18[3];
      *puVar21 = *puVar18;
      puVar21[1] = uVar10;
      uVar10 = puVar18[4];
      uVar13 = puVar18[5];
      puVar21[2] = uVar11;
      puVar21[3] = uVar12;
      uVar11 = puVar18[6];
      uVar12 = puVar18[7];
      puVar21[4] = uVar10;
      puVar21[5] = uVar13;
      uVar10 = puVar18[8];
      uVar13 = puVar18[9];
      puVar21[6] = uVar11;
      puVar21[7] = uVar12;
      uVar11 = puVar18[10];
      uVar12 = puVar18[0xb];
      puVar21[8] = uVar10;
      puVar21[9] = uVar13;
      uVar10 = puVar18[0xc];
      uVar13 = puVar18[0xd];
      puVar21[10] = uVar11;
      puVar21[0xb] = uVar12;
      uVar11 = puVar18[0xe];
      uVar12 = puVar18[0xf];
      puVar21[0xc] = uVar10;
      puVar21[0xd] = uVar13;
      puVar21[0xe] = uVar11;
      puVar21[0xf] = uVar12;
      lVar23 = lVar23 + -1;
      puVar17 = puVar18 + 0x10;
      puVar15 = puVar21 + 0x10;
    } while (lVar23 != 0);
    uVar10 = puVar18[0x11];
    lVar23 = param_2[3];
    uVar11 = puVar18[0x12];
    uVar12 = puVar18[0x13];
    puVar21[0x10] = puVar18[0x10];
    puVar21[0x11] = uVar10;
    uVar10 = puVar18[0x14];
    uVar13 = puVar18[0x15];
    puVar21[0x12] = uVar11;
    puVar21[0x13] = uVar12;
    uVar2 = *(undefined4 *)(puVar18 + 0x16);
    uVar3 = *(undefined4 *)((longlong)puVar18 + 0xb4);
    uVar4 = *(undefined4 *)(puVar18 + 0x17);
    uVar5 = *(undefined4 *)((longlong)puVar18 + 0xbc);
    puVar21[0x14] = uVar10;
    puVar21[0x15] = uVar13;
    uVar6 = *(undefined4 *)(puVar18 + 0x18);
    uVar7 = *(undefined4 *)((longlong)puVar18 + 0xc4);
    uVar8 = *(undefined4 *)(puVar18 + 0x19);
    uVar9 = *(undefined4 *)((longlong)puVar18 + 0xcc);
    *(undefined4 *)(puVar21 + 0x16) = uVar2;
    *(undefined4 *)((longlong)puVar21 + 0xb4) = uVar3;
    *(undefined4 *)(puVar21 + 0x17) = uVar4;
    *(undefined4 *)((longlong)puVar21 + 0xbc) = uVar5;
    *(undefined4 *)(puVar21 + 0x18) = uVar6;
    *(undefined4 *)((longlong)puVar21 + 0xc4) = uVar7;
    *(undefined4 *)(puVar21 + 0x19) = uVar8;
    *(undefined4 *)((longlong)puVar21 + 0xcc) = uVar9;
    uVar19 = uVar25;
    if ((lVar23 != 0) &&
       (lVar20 = *(longlong *)(*(longlong *)(*param_3 + 0x10) + 0x20), lVar20 != 0)) {
      bVar1 = *(byte *)(lVar23 + 0x2c);
      if (bVar1 == 0) {
        iVar22 = -1;
      }
      else {
        iVar22 = 0;
        if (bVar1 != 0) {
          for (; (bVar1 >> iVar22 & 1) == 0; iVar22 = iVar22 + 1) {
          }
        }
      }
      uVar19 = 0;
      if (-1 < iVar22) {
        uVar19 = FUN_141b9e830(lVar20);
      }
    }
    lVar23 = FUN_14274dce0();
    if (((uVar19 == 0) || ((*(uint *)(*(longlong *)(uVar19 + 0x30) + 0x180) >> 3 & 1) != 0)) ||
       (*(char *)(lVar23 + 6) == '\0')) {
      bVar14 = false;
    }
    else {
      bVar14 = true;
    }
    if (uVar19 != 0) {
      (**(code **)(**(longlong **)(uVar19 + 0x30) + 0xa0))();
    }
    if (bVar14) {
      FUN_141be7e40(uVar19);
    }
    if (((local_1f8 == 2) && (*(char *)(lVar23 + 5) != '\0')) && (*(char *)(lVar23 + 3) != '\0')) {
      if (*(longlong *)(*param_2 + 0x98) == 0) {
        local_1d8[0] = 0;
        local_1b8 = 0;
        uStack_1b0 = 0;
        lVar20 = (longlong)&local_1c0 + 1;
        local_1a8 = 0;
        do {
          uVar24 = (int)uVar25 + 4;
          uVar25 = (ulonglong)uVar24;
          *(undefined4 *)(lVar20 + -1) = 0;
          lVar20 = lVar20 + 4;
        } while (uVar24 < 4);
        puVar17 = local_1d8;
      }
      else {
        puVar17 = (undefined8 *)
                  FLightCacheInterface::GetShadowMapInteraction
                            (*(longlong *)(*param_2 + 0x98),local_1d8);
      }
      local_338 = *(int *)(puVar17 + 6);
      uStack_334 = *(undefined4 *)((longlong)puVar17 + 0x34);
      uStack_330 = *(undefined4 *)(puVar17 + 7);
      uStack_32c = *(undefined4 *)((longlong)puVar17 + 0x3c);
      if (bVar14) {
        cVar16 = FUN_141be7e40(uVar19);
        local_388 = *param_2 + 0x98;
        if (cVar16 == '\0') {
          local_378[0] = 0x15;
        }
        else {
          local_378[0] = 0x16;
        }
        goto LAB_141bf16d0;
      }
      if ((local_338 == 2) && (*(char *)(lVar23 + 7) != '\0')) {
        local_378[0] = 0xd;
      }
      else {
        local_378[0] = 10;
      }
    }
    else {
      cVar16 = FUN_141b66cf0((int)param_2[6]);
      if (((cVar16 == '\0') || (param_2[3] == 0)) || (1 < *(int *)(param_2[3] + 0x10) - 1U)) {
        local_378[0] = 0x13;
        if (!bVar14) goto LAB_141bf16b0;
      }
      else if (bVar14) {
        if (uVar19 != 0) {
          FUN_141be7e40(uVar19);
        }
        local_378[0] = 0x10;
      }
      else {
        local_378[0] = 0xf;
      }
    }
  }
  local_388 = *param_2 + 0x98;
LAB_141bf16d0:
  FUN_141c1e5a0(param_3,param_1,param_2,local_378);
  return;
}



// FUNCTION 141bf1700 FUN_141bf1700 body=466 status=ok
// SIG undefined FUN_141bf1700(void)

void FUN_141bf1700(longlong param_1,longlong param_2,undefined8 *param_3,int param_4,uint param_5)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_38 [2];
  
  if ((1 < param_4) && (cVar3 = *(char *)(param_1 + 6), cVar3 != '\0')) {
    if (((param_5 & 0x10) == 0) || ((param_5 != DAT_146a61370 || (DAT_146a632a8 == 0)))) {
      uVar4 = FUN_141c969f0(local_38,param_2,param_5);
      TRefCountPtr<FRHIIndexBuffer>::operator=(&DAT_146a632a8,uVar4);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_38);
      DAT_146a61370 = param_5;
      cVar3 = *(char *)(param_1 + 6);
    }
    lVar2 = DAT_146a632a8;
    uVar4 = *param_3;
    if (cVar3 != '\0') {
      uVar1 = *(ushort *)(param_1 + 4);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      *puVar6 = &PTR_LAB_144dcb388;
      puVar6[2] = uVar4;
      puVar6[4] = lVar2;
    }
  }
  if ((param_4 < 2) && (*(char *)(param_1 + 0xe) != '\0')) {
    CreateMobileSceneTextureUniformBufferSingleDraw<FRHIAsyncComputeCommandListImmediate>
              (local_38,param_2,param_4);
    uVar4 = *param_3;
    if (*(char *)(param_1 + 0xe) != '\0') {
      uVar1 = *(ushort *)(param_1 + 0xc);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_144dcb388;
      puVar6[2] = uVar4;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      puVar6[4] = local_38[0];
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_38);
  }
  return;
}



// FUNCTION 141bf18e0 Set body=187 status=ok
// SIG undefined Set(void)

void FColorRemapShaderParameters::Set(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_18;
  float local_14;
  float local_10;
  
  local_10 = *(float *)(DAT_146a4bfc8 + 4);
  if (-10.0 <= local_10) {
    if (10.0 <= local_10) {
      local_10 = 10.0;
    }
  }
  else {
    local_10 = -10.0;
  }
  fVar3 = *(float *)(DAT_146a4bfe0 + 4);
  if (-10.0 <= fVar3) {
    if (10.0 <= fVar3) {
      fVar3 = 10.0;
    }
  }
  else {
    fVar3 = -10.0;
  }
  fVar1 = *(float *)(DAT_146a4bff8 + 4);
  fVar2 = -10.0;
  if ((-10.0 <= fVar1) && (fVar2 = fVar1, 10.0 <= fVar1)) {
    fVar2 = 10.0;
  }
  local_14 = (fVar3 * 4.0 - local_10 * 3.0) - fVar2;
  local_18 = (fVar2 - local_10) - local_14;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>(param_2,param_3,param_1,&local_18,0);
  return;
}



// FUNCTION 141bf19a0 FUN_141bf19a0 body=4789 status=ok
// SIG undefined FUN_141bf19a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141bf19a0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  float *pfVar7;
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
  float fVar21;
  undefined1 auStack_218 [32];
  undefined4 local_1f8;
  float local_1e8 [4];
  float local_1d8;
  float fStack_1d4;
  undefined8 uStack_1d0;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  lVar6 = 0;
  lVar4 = *(longlong *)(param_4 + 0x10);
  local_1f8 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0x28,param_6);
  local_1f8 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x2e,param_4 + 0xf50);
  local_1f8 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x34,param_4 + 0xf40);
  FColorRemapShaderParameters::Set(param_1 + 0x40,param_2,param_3);
  local_1f8 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0x46,param_4 + 0x125c);
  local_1f8 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0x4c,param_4 + 0x1260);
  local_1f8 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x52,param_4 + 0x1270);
  local_1f8 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x58,param_4 + 0x1280);
  local_1f8 = 0;
  fStack_1d4 = DAT_146a496b0 + *(float *)(param_4 + 0x1294);
  local_1d8 = DAT_146a496b0 + *(float *)(param_4 + 0x1290);
  uStack_1d0 = CONCAT44(*(undefined4 *)(param_4 + 0x129c),
                        DAT_146a496b0 + *(float *)(param_4 + 0x1298));
  FUN_141aac7b0(param_2,param_3,param_1 + 0x5e,&local_1d8);
  local_1f8 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 100,param_4 + 0x12a0);
  local_1f8 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x6a,param_4 + 0x12b0);
  local_1f8 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x70,param_4 + 0x12c0);
  local_1f8 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x76,param_4 + 0x12d0);
  local_1f8 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x7c,param_4 + 0x12e0);
  local_1f8 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x82,param_4 + 0x12f0);
  local_1f8 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x88,param_4 + 0x1300);
  local_1f8 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x8e,param_4 + 0x1320);
  local_1f8 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x94,param_4 + 0x1330);
  local_1f8 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x9a,param_4 + 0x1340);
  local_1f8 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0xa0,param_4 + 0x1350);
  local_1f8 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0xa6,param_4 + 0x1360);
  local_1f8 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0xac,param_4 + 0x1370);
  local_1f8 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0xb2,param_4 + 0x1380);
  local_1f8 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0xb8,param_4 + 0x1390);
  local_1f8 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0xbe,param_4 + 0x13a0);
  local_1f8 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0xc4,param_4 + 0x13b0);
  local_1f8 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xca,param_4 + 0x1310);
  local_1f8 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xd0,param_4 + 0x13c0);
  local_1f8 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xd6,param_4 + 0x13c4);
  local_1f8 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xdc,param_4 + 0x13c8);
  local_1f8 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xe2,param_4 + 0x13cc);
  local_1f8 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xe8,param_4 + 0x13d0);
  local_1f8 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xee,param_4 + 0x13d4);
  local_1f8 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xf4,param_4 + 0x13d8);
  local_1f8 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xfa,param_4 + 0x13dc);
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x38) < DAT_146a4fe58) &&
     (_Init_thread_header(&DAT_146a4fe58), DAT_146a4fe58 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.OutputDevice");
    lVar3 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_146a4fe50 = lVar3;
    _Init_thread_footer(&DAT_146a4fe58);
  }
  if ((*(int *)(lVar1 + 0x38) < DAT_146a4fe68) &&
     (_Init_thread_header(&DAT_146a4fe68), DAT_146a4fe68 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.TonemapperGamma");
    lVar3 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar5 + 0x40))(plVar5);
    }
    DAT_146a4fe60 = lVar3;
    _Init_thread_footer(&DAT_146a4fe68);
  }
  fVar20 = *(float *)(DAT_146a4fe50 + 4);
  fVar17 = *(float *)(DAT_146a4fe60 + 4);
  local_1c8 = fVar20;
  if ((0.0 < fVar17) && (local_1c8 = 2.8026e-45, 1 < (int)fVar20)) {
    local_1c8 = fVar20;
  }
  if ((*(int *)(lVar1 + 0x38) < DAT_146a4fe78) &&
     (_Init_thread_header(&DAT_146a4fe78), DAT_146a4fe78 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.ColorGamut");
    lVar3 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_146a4fe70 = lVar3;
    _Init_thread_footer(&DAT_146a4fe78);
  }
  local_1b8 = *(float *)(DAT_146a4fe70 + 4);
  if ((*(longlong *)(param_4 + 0x1a40) == 0) ||
     (*(char *)(*(longlong *)(param_4 + 0x1a40) + 0xc9) == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((*(char *)(param_4 + 0x1202) == '\0') || (bVar2)) {
    local_1f8 = 0;
    FUN_141c0b130(param_2,param_3,param_1 + 0x106,&local_1b8);
    pfVar7 = &local_1c8;
  }
  else {
    local_1e8[0] = 0.0;
    local_1f8 = 0;
    FUN_141c0b130(param_2,param_3,param_1 + 0x106,local_1e8);
    pfVar7 = local_1e8;
    local_1e8[0] = 0.0;
  }
  local_1f8 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0x100,pfVar7);
  local_1d8 = (float)(**(code **)(**(longlong **)(lVar4 + 0x18) + 0x28))();
  fVar20 = 1.0;
  local_1d8 = 1.0 / local_1d8;
  fStack_1d4 = (float)(**(code **)(**(longlong **)(lVar4 + 0x18) + 0x28))();
  if (fVar17 <= 1.0) {
    fVar17 = 1.0;
  }
  fStack_1d4 = 2.2 / fStack_1d4;
  local_1f8 = 0;
  uStack_1d0 = CONCAT44(uStack_1d0._4_4_,1.0 / fVar17);
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,param_3,param_1 + 0x3a,&local_1d8);
  if ((*(int *)(lVar1 + 0x38) < DAT_146a4fe88) &&
     (_Init_thread_header(&DAT_146a4fe88), DAT_146a4fe88 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Tonemapper.Calibrate");
    lVar4 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_146a4fe80 = lVar4;
    _Init_thread_footer(&DAT_146a4fe88);
  }
  if ((*(int *)(lVar1 + 0x38) < DAT_146a4fe98) &&
     (_Init_thread_header(&DAT_146a4fe98), DAT_146a4fe98 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxGameNits");
    lVar4 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar5 + 0x40))(plVar5);
    }
    DAT_146a4fe90 = lVar4;
    _Init_thread_footer(&DAT_146a4fe98);
  }
  if ((*(int *)(lVar1 + 0x38) < DAT_146a4fea8) &&
     (_Init_thread_header(&DAT_146a4fea8), DAT_146a4fea8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxTvNits");
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x40))(plVar5);
    }
    DAT_146a4fea0 = lVar6;
    _Init_thread_footer(&DAT_146a4fea8);
  }
  local_1f8 = 0;
  local_1e8[0] = *(float *)(DAT_146a4fe80 + 4);
  FUN_141c0b130(param_2,param_3,param_1 + 0x10c,local_1e8);
  local_1f8 = 0;
  local_1e8[0] = *(float *)(DAT_146a4fe90 + 4);
  FUN_141c0b130(param_2,param_3,param_1 + 0x112,local_1e8);
  local_1f8 = 0;
  local_1e8[0] = *(float *)(DAT_146a4fea0 + 4);
  FUN_141c0b130(param_2,param_3,param_1 + 0x118,local_1e8);
  local_1f8 = 0;
  local_1e8[0] = (float)(uint)(*(char *)(param_4 + 0x120e) != '\0');
  FUN_141c0b130(param_2,param_3,param_1 + 0x11e,local_1e8);
  local_1b4 = *(float *)(param_4 + 0x13e4);
  local_1b0 = *(float *)(param_4 + 0x13e8);
  local_19c = *(float *)(param_4 + 0x1408);
  if (0.0 <= local_19c) {
    if (2.0 <= local_19c) {
      local_19c = 2.0;
    }
  }
  else {
    local_19c = 0.0;
  }
  fVar17 = *(float *)(param_4 + 0x143c);
  fVar10 = *(float *)(param_4 + 0x140c);
  fVar13 = *(float *)(param_4 + 0x1420);
  fVar15 = *(float *)(param_4 + 0x1434);
  if (0.0 <= fVar17) {
    if (1.0 <= fVar17) {
      fVar17 = 1.0;
    }
  }
  else {
    fVar17 = 0.0;
  }
  fVar21 = *(float *)(param_4 + 0x1448);
  fVar17 = fVar17 + 1.0;
  if (1.0 <= fVar21) {
    if (4.0 <= fVar21) {
      fVar21 = 4.0;
    }
  }
  else {
    fVar21 = 1.0;
  }
  fVar8 = _guard_xfg_dispatch_icall_nop(2.0,fVar21);
  fVar21 = *(float *)(param_4 + 0x1440);
  if (0.0 <= fVar21) {
    if (1.0 <= fVar21) {
      fVar21 = 1.0;
    }
  }
  else {
    fVar21 = 0.0;
  }
  fVar9 = 0.0225;
  fVar21 = (1.0 - fVar21) * 0.18;
  if ((fVar21 < 0.0225) || (fVar9 = 0.16875, 0.16875 <= fVar21)) {
    fVar21 = fVar9;
  }
  fVar9 = *(float *)(param_4 + 0x1444);
  if (0.0 <= fVar9) {
    if (1.0 <= fVar9) {
      fVar9 = 1.0;
    }
  }
  else {
    fVar9 = 0.0;
  }
  fStack_1d4 = *(float *)(param_4 + 0x1400);
  fVar9 = 1.0 - fVar9;
  if (fVar9 <= 0.03125) {
    fVar9 = 0.03125;
  }
  if (0.0 <= fStack_1d4) {
    if (1.0 <= fStack_1d4) {
      fStack_1d4 = 1.0;
    }
  }
  else {
    fStack_1d4 = 0.0;
  }
  local_1c0 = *(float *)(param_4 + 0x1404);
  if (0.0 <= local_1c0) {
    if (1.0 <= local_1c0) {
      local_1c0 = 1.0;
    }
  }
  else {
    local_1c0 = 0.0;
  }
  local_1e8[0] = *(float *)(param_4 + 0x13e8) + 4.7683716e-07;
  fVar16 = *(float *)(param_4 + 0x13e4) + 4.7683716e-07;
  fVar11 = 1.0 / (*(float *)(param_4 + 0x1410) + fVar10 + 4.7683716e-07 +
                 *(float *)(param_4 + 0x1414));
  local_1c8 = *(float *)(param_4 + 0x1414) * fVar11;
  fVar18 = (fVar10 + 4.7683716e-07) * fVar11;
  fVar11 = *(float *)(param_4 + 0x1410) * fVar11;
  fVar12 = 1.0 / (*(float *)(param_4 + 0x141c) + fVar13 + 4.7683716e-07 +
                 *(float *)(param_4 + 0x1424));
  local_194 = *(float *)(param_4 + 0x1424) * fVar12;
  local_198 = *(float *)(param_4 + 0x141c) * fVar12;
  fVar12 = (fVar13 + 4.7683716e-07) * fVar12;
  fVar13 = 1.0 / (*(float *)(param_4 + 0x1430) + *(float *)(param_4 + 0x142c) + fVar15 +
                 4.7683716e-07);
  fVar14 = *(float *)(param_4 + 0x1430) * fVar13;
  local_190 = *(float *)(param_4 + 0x142c) * fVar13;
  fVar13 = (fVar15 + 4.7683716e-07) * fVar13;
  local_18c = *(float *)(param_4 + 0x13e0) + 4.7683716e-07;
  local_1b8 = 1.0 / (local_18c * 0.2126 + fVar16 * 0.7152 + local_1e8[0] * 0.0722);
  local_18c = local_1b8 * local_18c;
  local_1e8[0] = local_1b8 * local_1e8[0];
  local_1b8 = local_1b8 * fVar16;
  fVar15 = (*(float *)(param_4 + 0x13f4) - local_1b4) * local_1c0 + local_1b4 + 4.7683716e-07;
  fVar19 = (*(float *)(param_4 + 0x13f0) - *(float *)(param_4 + 0x13e0)) * local_1c0 +
           *(float *)(param_4 + 0x13e0) + 4.7683716e-07;
  fVar16 = (*(float *)(param_4 + 0x13f8) - local_1b0) * local_1c0 + local_1b0 + 4.7683716e-07;
  fVar10 = 1.0 / (fVar19 * 0.2126 + fVar15 * 0.7152 + fVar16 * 0.0722);
  local_180 = fVar16 * fVar10 - local_1e8[0];
  local_184 = fVar15 * fVar10 - local_1b8;
  local_158 = (fVar18 + local_198 + local_190) * 0.33333334;
  local_1b4 = (fVar12 + fVar11 + fVar14) * 0.33333334;
  local_1bc = (local_194 + local_1c8 + fVar13) * 0.33333334;
  local_1d8 = fStack_1d4 * 13.6064;
  local_1c8 = local_1c8 - local_1bc;
  fStack_120 = fStack_1d4 * 4.6208;
  fStack_1d4 = fStack_1d4 * 45.7728;
  local_178 = local_158 + local_19c * (fVar18 - local_158);
  local_1a4 = local_1b4 + local_19c * (fVar11 - local_1b4);
  local_1a8 = local_1bc + local_19c * local_1c8;
  local_168 = local_158 + local_19c * (local_198 - local_158);
  local_1ac = local_1b4 + local_19c * (fVar12 - local_1b4);
  local_1b0 = local_1bc + local_19c * (local_194 - local_1bc);
  local_158 = local_158 + local_19c * (local_190 - local_158);
  local_1b4 = local_1b4 + local_19c * (fVar14 - local_1b4);
  local_1bc = local_1bc + local_19c * (fVar13 - local_1bc);
  fVar13 = 0.18 - fVar17 * 0.18;
  fStack_140 = (-1.0 / fVar17) * fVar13;
  fVar15 = (1.0 - fVar13) / fVar17 - fStack_140;
  local_148 = fVar15 * fVar21 + fStack_140;
  fStack_140 = fVar15 * (1.0 - fVar9 * 0.82) + fStack_140;
  fVar15 = local_148 * fVar17 + fVar13;
  fVar13 = fStack_140 * fVar17 + fVar13;
  fVar21 = 1.0 - fVar13;
  fStack_14c = (fVar13 - fVar15) / (fStack_140 - local_148);
  fVar17 = fStack_14c * (fVar8 - fStack_140);
  fStack_15c = fStack_14c * local_148;
  fVar17 = (fVar17 - fVar21) / fVar17;
  local_1a0 = fVar21 / fVar17;
  local_1c4 = (-1.0 / fVar17) * fVar21 * fStack_140;
  fVar13 = (fStack_15c - fVar15) / fStack_15c;
  fStack_13c = fVar21 / (fVar17 * fStack_14c) - fStack_140;
  fStack_16c = 0.0;
  fStack_15c = fVar15 - fStack_15c;
  if (fVar13 == 0.0) {
    local_148 = 0.0;
    fStack_15c = 0.0;
  }
  else {
    fStack_16c = (-1.0 / fVar13) * fVar15;
    fVar20 = fVar15 / (fVar13 * fStack_14c);
  }
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_11c = 0;
  uStack_1d0 = (ulonglong)(uint)fStack_120;
  uStack_10c = 0;
  local_1f8 = 0;
  _local_108 = CONCAT44(local_184,fVar19 * fVar10 - local_18c);
  _fStack_100 = CONCAT44((float)*(int *)(DAT_146a4c020 + 4),local_180);
  local_1c0 = local_1d8;
  local_188 = fStack_1d4;
  fStack_174 = local_1a4;
  fStack_170 = local_1a8;
  fStack_164 = local_1ac;
  fStack_160 = local_1b0;
  fStack_154 = local_1b4;
  fStack_150 = local_1bc;
  fStack_144 = fVar20;
  local_138 = local_1a0;
  fStack_134 = local_1c4;
  local_128 = local_1d8;
  fStack_124 = fStack_1d4;
  local_118 = local_18c;
  fStack_114 = local_1b8;
  fStack_110 = local_1e8[0];
  FUN_141aac7b0(param_2,param_3,param_1 + 0x124,&local_178);
  local_1f8 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x12a,&local_168);
  local_1f8 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x130,&local_158);
  local_1f8 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x136,&local_148);
  local_1f8 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x13c,&local_138);
  local_1f8 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x142,&local_128);
  local_1f8 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x148,&local_118);
  local_1f8 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x14e,&local_108);
  return;
}



// FUNCTION 141bf2c60 FUN_141bf2c60 body=5475 status=ok
// SIG undefined FUN_141bf2c60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141bf2c60(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong *param_5,longlong param_6)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  float *pfVar12;
  ushort *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_258 [32];
  uint local_238;
  float local_228;
  float fStack_224;
  undefined8 uStack_220;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0 [2];
  float local_1e8;
  float local_1e4;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  undefined1 local_198 [32];
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  puVar13 = (ushort *)(param_1 + 0x14);
  local_1c0 = param_5;
  local_1d8 = *(longlong *)(param_4 + 0x10);
  local_214 = 0.0;
  local_1d0 = param_4;
  do {
    fVar23 = local_214;
    local_1b8 = param_6;
    if (local_214 != 0.0) {
      if (DAT_1469fc430 == 0) {
        if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
          cVar5 = IsInRenderingThread();
          if (cVar5 == '\0') {
            FScopedEvent::FScopedEvent(local_1f0);
            plVar9 = (longlong *)FUN_14049e3d0(local_198,0,0xff);
            lVar6 = *plVar9;
            *(undefined1 **)(lVar6 + 0x10) = &LAB_141a15860;
            *(float **)(lVar6 + 0x18) = local_1f0;
            lVar6 = *plVar9;
            lVar8 = plVar9[2];
            lVar3 = plVar9[1];
            lVar10 = *(longlong *)(lVar6 + 0x28);
            piVar1 = (int *)(lVar10 + 0x48);
            if (lVar10 != 0) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            local_1e0 = lVar10;
            FUN_1404a4fe0(lVar6,lVar3,(int)lVar8,1);
            if (lVar10 != 0) {
              LOCK();
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                FGraphEvent::Recycle(local_1e0);
              }
            }
            FScopedEvent::~FScopedEvent(local_1f0);
            fVar23 = local_214;
          }
          else {
            lVar6 = operator_new(0x38);
            if (lVar6 == 0) {
              DAT_1469fc430 = 0;
            }
            else {
              DAT_1469fc430 =
                   TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                   ::FStaticStateResource::FStaticStateResource(lVar6);
            }
          }
        }
        else {
          lVar6 = operator_new();
          if (lVar6 == 0) {
            LOCK();
            if (DAT_1469fc430 == 0) {
              DAT_1469fc430 = 0;
            }
            UNLOCK();
          }
          else {
            lVar6 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                    ::FStaticStateResource::FStaticStateResource(lVar6);
            LOCK();
            if (DAT_1469fc430 != 0) {
              lVar6 = DAT_1469fc430;
            }
            DAT_1469fc430 = lVar6;
            UNLOCK();
          }
        }
      }
      local_1c8 = *(undefined8 *)(DAT_1469fc430 + 0x30);
      local_1b0 = *(undefined8 *)(*local_1c0 + 0x30);
      if (puVar13[-9] != 0) {
        local_20c = (float)(uint)puVar13[-10];
        puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar11 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
          puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar11 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar7;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar11;
        *(undefined8 **)(param_2 + 8) = puVar11 + 1;
        puVar11[1] = 0;
        *puVar11 = &PTR_LAB_144dc9ca0;
        *(float *)(puVar11 + 3) = local_20c;
        puVar11[4] = local_1b0;
        puVar11[2] = param_3;
      }
      if (puVar13[1] != 0) {
        local_20c = (float)(uint)*puVar13;
        puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar11 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
          puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar11 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar7;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar11;
        *(undefined8 **)(param_2 + 8) = puVar11 + 1;
        puVar11[1] = 0;
        *puVar11 = &PTR_LAB_144dc9cb0;
        *(float *)(puVar11 + 3) = local_20c;
        puVar11[4] = local_1c8;
        puVar11[2] = param_3;
      }
    }
    param_6 = local_1b8;
    local_238 = (uint)fVar23;
    FUN_141c0b130(param_2,param_3,param_1 + 0x28,local_1b8);
    lVar6 = local_1d0;
    local_1c0 = local_1c0 + 1;
    local_214 = (float)((int)fVar23 + 1);
    param_6 = param_6 + 4;
    puVar13 = puVar13 + 2;
  } while ((uint)local_214 < 2);
  lVar10 = 0;
  local_238 = 0;
  local_1b8 = param_6;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x2e,local_1d0 + 0xf50);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x34,lVar6 + 0xf40);
  FColorRemapShaderParameters::Set(param_1 + 0x40,param_2,param_3);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0x46,lVar6 + 0x125c);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0x4c,lVar6 + 0x1260);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x52,lVar6 + 0x1270);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x58,lVar6 + 0x1280);
  local_238 = 0;
  fStack_224 = DAT_146a496b0 + *(float *)(lVar6 + 0x1294);
  local_228 = DAT_146a496b0 + *(float *)(lVar6 + 0x1290);
  uStack_220 = CONCAT44(*(undefined4 *)(lVar6 + 0x129c),DAT_146a496b0 + *(float *)(lVar6 + 0x1298));
  FUN_141aac7b0(param_2,param_3,param_1 + 0x5e,&local_228);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 100,lVar6 + 0x12a0);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x6a,lVar6 + 0x12b0);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x70,lVar6 + 0x12c0);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x76,lVar6 + 0x12d0);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x7c,lVar6 + 0x12e0);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x82,lVar6 + 0x12f0);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x88,lVar6 + 0x1300);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x8e,lVar6 + 0x1320);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x94,lVar6 + 0x1330);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x9a,lVar6 + 0x1340);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0xa0,lVar6 + 0x1350);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0xa6,lVar6 + 0x1360);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0xac,lVar6 + 0x1370);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0xb2,lVar6 + 0x1380);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0xb8,lVar6 + 0x1390);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0xbe,lVar6 + 0x13a0);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0xc4,lVar6 + 0x13b0);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xca,lVar6 + 0x1310);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xd0,lVar6 + 0x13c0);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xd6,lVar6 + 0x13c4);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xdc,lVar6 + 0x13c8);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xe2,lVar6 + 0x13cc);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xe8,lVar6 + 0x13d0);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xee,lVar6 + 0x13d4);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xf4,lVar6 + 0x13d8);
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0xfa,lVar6 + 0x13dc);
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar3 + 0x38) < DAT_146a4feb8) &&
     (_Init_thread_header(&DAT_146a4feb8), DAT_146a4feb8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.OutputDevice");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a4feb0 = lVar8;
    _Init_thread_footer(&DAT_146a4feb8);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a4fec8) &&
     (_Init_thread_header(&DAT_146a4fec8), DAT_146a4fec8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.TonemapperGamma");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x40))(plVar9);
    }
    DAT_146a4fec0 = lVar8;
    _Init_thread_footer(&DAT_146a4fec8);
  }
  fVar26 = *(float *)(DAT_146a4feb0 + 4);
  fVar23 = *(float *)(DAT_146a4fec0 + 4);
  local_218 = fVar26;
  if ((0.0 < fVar23) && (local_218 = 2.8026e-45, 1 < (int)fVar26)) {
    local_218 = fVar26;
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a4fed8) &&
     (_Init_thread_header(&DAT_146a4fed8), DAT_146a4fed8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.ColorGamut");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a4fed0 = lVar8;
    _Init_thread_footer(&DAT_146a4fed8);
  }
  local_210 = *(float *)(DAT_146a4fed0 + 4);
  if ((*(longlong *)(lVar6 + 0x1a40) == 0) ||
     (*(char *)(*(longlong *)(lVar6 + 0x1a40) + 0xc9) == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((*(char *)(lVar6 + 0x1202) == '\0') || (bVar4)) {
    local_238 = 0;
    FUN_141c0b130(param_2,param_3,param_1 + 0x106,&local_210);
    pfVar12 = &local_218;
  }
  else {
    local_1f4 = 0.0;
    local_238 = 0;
    FUN_141c0b130(param_2,param_3,param_1 + 0x106,&local_1f4);
    pfVar12 = &local_1f8;
    local_1f8 = 0.0;
  }
  local_238 = 0;
  FUN_141c0b130(param_2,param_3,param_1 + 0x100,pfVar12);
  lVar8 = local_1d8;
  local_1a8 = (float)(**(code **)(**(longlong **)(local_1d8 + 0x18) + 0x28))();
  fVar26 = 1.0;
  local_1a8 = 1.0 / local_1a8;
  local_1a4 = (float)(**(code **)(**(longlong **)(lVar8 + 0x18) + 0x28))();
  if (fVar23 <= 1.0) {
    fVar23 = 1.0;
  }
  local_1a4 = 2.2 / local_1a4;
  local_238 = 0;
  local_1a0 = 1.0 / fVar23;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,param_3,param_1 + 0x3a,&local_1a8);
  if ((*(int *)(lVar3 + 0x38) < DAT_146a4fee8) &&
     (_Init_thread_header(&DAT_146a4fee8), DAT_146a4fee8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Tonemapper.Calibrate");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146a4fee0 = lVar8;
    _Init_thread_footer(&DAT_146a4fee8);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a4fef8) &&
     (_Init_thread_header(&DAT_146a4fef8), DAT_146a4fef8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxGameNits");
    lVar8 = lVar10;
    if (plVar9 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar9 + 0x40))(plVar9);
    }
    DAT_146a4fef0 = lVar8;
    _Init_thread_footer(&DAT_146a4fef8);
  }
  if ((*(int *)(lVar3 + 0x38) < DAT_146a4ff08) &&
     (_Init_thread_header(&DAT_146a4ff08), DAT_146a4ff08 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.MaxTvNits");
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x40))(plVar9);
    }
    DAT_146a4ff00 = lVar10;
    _Init_thread_footer(&DAT_146a4ff08);
  }
  local_238 = 0;
  local_1fc = *(float *)(DAT_146a4fee0 + 4);
  FUN_141c0b130(param_2,param_3,param_1 + 0x10c,&local_1fc);
  local_238 = 0;
  local_200 = *(float *)(DAT_146a4fef0 + 4);
  FUN_141c0b130(param_2,param_3,param_1 + 0x112,&local_200);
  local_238 = 0;
  local_204 = *(float *)(DAT_146a4ff00 + 4);
  FUN_141c0b130(param_2,param_3,param_1 + 0x118,&local_204);
  local_238 = 0;
  local_208 = (float)(uint)(*(char *)(lVar6 + 0x120e) != '\0');
  FUN_141c0b130(param_2,param_3,param_1 + 0x11e,&local_208);
  local_1e8 = *(float *)(lVar6 + 0x13e4);
  local_1e4 = *(float *)(lVar6 + 0x13e8);
  local_208 = *(float *)(lVar6 + 0x1408);
  if (0.0 <= local_208) {
    if (2.0 <= local_208) {
      local_208 = 2.0;
    }
  }
  else {
    local_208 = 0.0;
  }
  fVar23 = *(float *)(lVar6 + 0x143c);
  fVar16 = *(float *)(lVar6 + 0x140c);
  fVar19 = *(float *)(lVar6 + 0x1420);
  fVar21 = *(float *)(lVar6 + 0x1434);
  if (0.0 <= fVar23) {
    if (1.0 <= fVar23) {
      fVar23 = 1.0;
    }
  }
  else {
    fVar23 = 0.0;
  }
  fVar27 = *(float *)(lVar6 + 0x1448);
  fVar23 = fVar23 + 1.0;
  if (1.0 <= fVar27) {
    if (4.0 <= fVar27) {
      fVar27 = 4.0;
    }
  }
  else {
    fVar27 = 1.0;
  }
  fVar14 = _guard_xfg_dispatch_icall_nop(2.0,fVar27);
  fVar27 = *(float *)(lVar6 + 0x1440);
  if (0.0 <= fVar27) {
    if (1.0 <= fVar27) {
      fVar27 = 1.0;
    }
  }
  else {
    fVar27 = 0.0;
  }
  fVar15 = 0.0225;
  fVar27 = (1.0 - fVar27) * 0.18;
  if ((fVar27 < 0.0225) || (fVar15 = 0.16875, 0.16875 <= fVar27)) {
    fVar27 = fVar15;
  }
  fVar15 = *(float *)(lVar6 + 0x1444);
  if (0.0 <= fVar15) {
    if (1.0 <= fVar15) {
      fVar15 = 1.0;
    }
  }
  else {
    fVar15 = 0.0;
  }
  fStack_224 = *(float *)(lVar6 + 0x1400);
  fVar15 = 1.0 - fVar15;
  if (fVar15 <= 0.03125) {
    fVar15 = 0.03125;
  }
  if (0.0 <= fStack_224) {
    if (1.0 <= fStack_224) {
      fStack_224 = 1.0;
    }
  }
  else {
    fStack_224 = 0.0;
  }
  local_218 = *(float *)(lVar6 + 0x1404);
  if (0.0 <= local_218) {
    if (1.0 <= local_218) {
      local_218 = 1.0;
    }
  }
  else {
    local_218 = 0.0;
  }
  local_20c = *(float *)(lVar6 + 0x13e8) + 4.7683716e-07;
  fVar22 = *(float *)(lVar6 + 0x13e4) + 4.7683716e-07;
  fVar17 = 1.0 / (*(float *)(lVar6 + 0x1410) + fVar16 + 4.7683716e-07 + *(float *)(lVar6 + 0x1414));
  local_214 = *(float *)(lVar6 + 0x1414) * fVar17;
  fVar24 = (fVar16 + 4.7683716e-07) * fVar17;
  fVar17 = *(float *)(lVar6 + 0x1410) * fVar17;
  fVar18 = 1.0 / (*(float *)(lVar6 + 0x141c) + fVar19 + 4.7683716e-07 + *(float *)(lVar6 + 0x1424));
  local_200 = *(float *)(lVar6 + 0x1424) * fVar18;
  local_204 = *(float *)(lVar6 + 0x141c) * fVar18;
  fVar18 = (fVar19 + 4.7683716e-07) * fVar18;
  fVar19 = 1.0 / (*(float *)(lVar6 + 0x1430) + *(float *)(lVar6 + 0x142c) + fVar21 + 4.7683716e-07);
  fVar20 = *(float *)(lVar6 + 0x1430) * fVar19;
  local_1fc = *(float *)(lVar6 + 0x142c) * fVar19;
  fVar19 = (fVar21 + 4.7683716e-07) * fVar19;
  local_1f8 = *(float *)(lVar6 + 0x13e0) + 4.7683716e-07;
  local_1f4 = 1.0 / (local_1f8 * 0.2126 + fVar22 * 0.7152 + local_20c * 0.0722);
  local_1f8 = local_1f4 * local_1f8;
  local_20c = local_1f4 * local_20c;
  local_1f4 = local_1f4 * fVar22;
  fVar21 = (*(float *)(lVar6 + 0x13f4) - local_1e8) * local_218 + local_1e8 + 4.7683716e-07;
  fVar25 = (*(float *)(lVar6 + 0x13f0) - *(float *)(lVar6 + 0x13e0)) * local_218 +
           *(float *)(lVar6 + 0x13e0) + 4.7683716e-07;
  fVar22 = (*(float *)(lVar6 + 0x13f8) - local_1e4) * local_218 + local_1e4 + 4.7683716e-07;
  fVar16 = 1.0 / (fVar25 * 0.2126 + fVar21 * 0.7152 + fVar22 * 0.0722);
  fVar22 = fVar22 * fVar16 - local_20c;
  fVar21 = fVar21 * fVar16 - local_1f4;
  local_158 = (fVar24 + local_204 + local_1fc) * 0.33333334;
  local_1e8 = (fVar18 + fVar17 + fVar20) * 0.33333334;
  local_210 = (local_200 + local_214 + fVar19) * 0.33333334;
  local_1b0 = CONCAT44(local_1b0._4_4_,fVar22);
  local_228 = fStack_224 * 13.6064;
  local_214 = local_214 - local_210;
  local_1b8 = CONCAT44(local_1b8._4_4_,fVar21);
  fStack_120 = fStack_224 * 4.6208;
  fStack_224 = fStack_224 * 45.7728;
  local_1c0 = (longlong *)CONCAT44(local_1c0._4_4_,fStack_224);
  local_178 = local_158 + local_208 * (fVar24 - local_158);
  fStack_174 = local_1e8 + local_208 * (fVar17 - local_1e8);
  local_1c8 = CONCAT44(local_1c8._4_4_,fStack_174);
  fStack_170 = local_210 + local_208 * local_214;
  local_1d0 = CONCAT44(local_1d0._4_4_,fStack_170);
  local_168 = local_158 + local_208 * (local_204 - local_158);
  fStack_164 = local_1e8 + local_208 * (fVar18 - local_1e8);
  local_1d8 = CONCAT44(local_1d8._4_4_,fStack_164);
  local_1e4 = local_210 + local_208 * (local_200 - local_210);
  local_158 = local_158 + local_208 * (local_1fc - local_158);
  local_1e8 = local_1e8 + local_208 * (fVar20 - local_1e8);
  local_210 = local_210 + local_208 * (fVar19 - local_210);
  fVar19 = 0.18 - fVar23 * 0.18;
  fStack_140 = (-1.0 / fVar23) * fVar19;
  fVar17 = (1.0 - fVar19) / fVar23 - fStack_140;
  local_148 = fVar17 * fVar27 + fStack_140;
  fStack_140 = fVar17 * (1.0 - fVar15 * 0.82) + fStack_140;
  fVar27 = local_148 * fVar23 + fVar19;
  fVar19 = fStack_140 * fVar23 + fVar19;
  fVar15 = 1.0 - fVar19;
  fStack_14c = (fVar19 - fVar27) / (fStack_140 - local_148);
  fVar23 = fStack_14c * (fVar14 - fStack_140);
  fStack_15c = fStack_14c * local_148;
  fVar23 = (fVar23 - fVar15) / fVar23;
  local_138 = fVar15 / fVar23;
  local_1e0 = CONCAT44(local_1e0._4_4_,local_138);
  local_1f0[0] = (-1.0 / fVar23) * fVar15 * fStack_140;
  fVar19 = (fStack_15c - fVar27) / fStack_15c;
  fStack_13c = fVar15 / (fVar23 * fStack_14c) - fStack_140;
  fStack_16c = 0.0;
  fStack_15c = fVar27 - fStack_15c;
  if (fVar19 == 0.0) {
    local_148 = 0.0;
    fStack_15c = 0.0;
  }
  else {
    fStack_16c = (-1.0 / fVar19) * fVar27;
    fVar26 = fVar27 / (fVar19 * fStack_14c);
  }
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_11c = 0;
  uStack_220 = (ulonglong)(uint)fStack_120;
  uStack_10c = 0;
  local_238 = 0;
  _local_108 = CONCAT44(fVar21,fVar25 * fVar16 - local_1f8);
  _fStack_100 = CONCAT44((float)*(int *)(DAT_146a4c020 + 4),fVar22);
  local_218 = local_228;
  fStack_160 = local_1e4;
  fStack_154 = local_1e8;
  fStack_150 = local_210;
  fStack_144 = fVar26;
  fStack_134 = local_1f0[0];
  local_128 = local_228;
  fStack_124 = fStack_224;
  local_118 = local_1f8;
  fStack_114 = local_1f4;
  fStack_110 = local_20c;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x124,&local_178);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x12a,&local_168);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x130,&local_158);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x136,&local_148);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x13c,&local_138);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x142,&local_128);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x148,&local_118);
  local_238 = 0;
  FUN_141aac7b0(param_2,param_3,param_1 + 0x14e,&local_108);
  return;
}


