// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141add800 FUN_141add800 body=102 status=ok
// SIG undefined FUN_141add800(void)

undefined8 FUN_141add800(undefined4 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (iVar2 != 0) {
    uVar3 = (**(code **)(*param_2 + 0x1e8))(param_2);
    if (1 < uVar3) {
      iVar2 = FUN_1419ef5f0(param_1);
      if (1 < iVar2) {
        cVar1 = (**(code **)(*param_2 + 0x170))(param_2);
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 141add870 FUN_141add870 body=543 status=ok
// SIG undefined FUN_141add870(void)

undefined8 FUN_141add870(undefined4 param_1,longlong *param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  DWORD DVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  byte bVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_1469feb70) && (_Init_thread_header(&DAT_1469feb70), DAT_1469feb70 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAtmosphericFog");
    lVar9 = 0;
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar8 + 0x38))(plVar8);
    }
    DAT_1469feb68 = lVar9;
    _Init_thread_footer(&DAT_1469feb70);
  }
  if ((*piVar11 < DAT_1469feb80) && (_Init_thread_header(&DAT_1469feb80), DAT_1469feb80 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    lVar9 = 0;
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar8 + 0x38))(plVar8);
    }
    DAT_1469feb78 = lVar9;
    _Init_thread_footer(&DAT_1469feb80);
  }
  lVar9 = DAT_1469feb78;
  lVar12 = 4;
  if (DAT_1469feb78 == 0) {
LAB_141add915:
    bVar1 = false;
  }
  else {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
      lVar7 = 4;
    }
    else {
      lVar7 = 0;
    }
    if (*(int *)(lVar7 + lVar9) == 0) goto LAB_141add915;
    bVar1 = true;
  }
  lVar9 = DAT_1469feb68;
  if (DAT_1469feb68 != 0) {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)) {
      lVar12 = 0;
    }
    if ((*(int *)(lVar12 + lVar9) == 0) && (!bVar1)) {
      bVar1 = false;
      goto LAB_141add962;
    }
  }
  bVar1 = true;
LAB_141add962:
  bVar3 = FUN_141ae1aa0(param_1,param_2,param_3);
  if ((bVar1) && (uVar5 = (**(code **)(*param_2 + 0x1e8))(), 1 < uVar5)) {
    bVar10 = 1;
  }
  else {
    bVar10 = 0;
  }
  if (((bVar3 & bVar10) != 0) && (iVar6 = FUN_1419ef5f0(param_1), 1 < iVar6)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141adda90 FUN_141adda90 body=448 status=ok
// SIG undefined FUN_141adda90(void)

undefined8 FUN_141adda90(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  
  lVar6 = 0;
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar7 < DAT_1469feb90) && (_Init_thread_header(&DAT_1469feb90), DAT_1469feb90 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAtmosphericFog");
    lVar4 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469feb88 = lVar4;
    _Init_thread_footer(&DAT_1469feb90);
  }
  if ((*piVar7 < DAT_1469feba0) && (_Init_thread_header(&DAT_1469feba0), DAT_1469feba0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469feb98 = lVar6;
    _Init_thread_footer(&DAT_1469feba0);
  }
  if (((DAT_1469feb98 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  if (((DAT_1469feb88 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_141ae1aa0(param_1,param_2,param_3);
  if ((cVar1 == '\0') || (iVar2 = FUN_1419ef5f0(param_1), iVar2 < 2)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 141addc50 FUN_141addc50 body=473 status=ok
// SIG undefined FUN_141addc50(void)

ulonglong FUN_141addc50(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  longlong *plVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar8 < DAT_1469feb10) {
    _Init_thread_header(&DAT_1469feb10);
    if (DAT_1469feb10 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar6 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAtmosphericFog");
      lVar7 = 0;
      if (plVar6 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar6 + 0x38))(plVar6);
      }
      DAT_1469feb08 = lVar7;
      _Init_thread_footer(&DAT_1469feb10);
    }
  }
  if (*piVar8 < DAT_1469feb20) {
    _Init_thread_header(&DAT_1469feb20);
    if (DAT_1469feb20 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar6 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations")
      ;
      lVar7 = 0;
      if (plVar6 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar6 + 0x38))(plVar6);
      }
      DAT_1469feb18 = lVar7;
      _Init_thread_footer(&DAT_1469feb20);
    }
  }
  lVar7 = DAT_1469feb18;
  lVar9 = 4;
  if (DAT_1469feb18 == 0) {
LAB_141addcec:
    bVar1 = false;
  }
  else {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar3 = GetCurrentThreadId();
      if (DVar3 == DAT_1468c21c0) goto LAB_141addcdf;
      lVar4 = 4;
    }
    else {
LAB_141addcdf:
      lVar4 = 0;
    }
    if (*(int *)(lVar4 + lVar7) == 0) goto LAB_141addcec;
    bVar1 = true;
  }
  lVar7 = DAT_1469feb08;
  if (DAT_1469feb08 != 0) {
    uVar5 = FUN_1415ad720(&DAT_1468e2448);
    if (((char)uVar5 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar3 = GetCurrentThreadId();
      uVar5 = CONCAT71((int7)(CONCAT44(extraout_var,DVar3) >> 8),DVar3 == DAT_1468c21c0);
      if (DVar3 == DAT_1468c21c0) goto LAB_141addd26;
    }
    else {
LAB_141addd26:
      lVar9 = 0;
    }
    if ((*(int *)(lVar9 + lVar7) == 0) && (!bVar1)) goto LAB_141addd3f;
  }
  uVar5 = (**(code **)(*param_2 + 0x1e8))(param_2);
LAB_141addd3f:
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 141adde30 FUN_141adde30 body=366 status=ok
// SIG undefined FUN_141adde30(void)

ulonglong FUN_141adde30(void)

{
  uint uVar1;
  DWORD DVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  uint *puVar7;
  
  lVar6 = 0;
  puVar7 = (uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if (((int)*puVar7 < DAT_1469feb30) && (_Init_thread_header(&DAT_1469feb30), DAT_1469feb30 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAtmosphericFog");
    lVar4 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469feb28 = lVar4;
    _Init_thread_footer(&DAT_1469feb30);
  }
  uVar1 = *puVar7;
  uVar3 = (ulonglong)uVar1;
  if (((int)uVar1 < DAT_1469feb40) &&
     (uVar3 = _Init_thread_header(&DAT_1469feb40), DAT_1469feb40 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469feb38 = lVar6;
    uVar3 = _Init_thread_footer(&DAT_1469feb40);
  }
  if (((DAT_1469feb38 != 0) && (uVar3 = FUN_1415ad720(&DAT_1468e2448), (char)uVar3 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    uVar3 = CONCAT44(extraout_var,DVar2);
  }
  if (((DAT_1469feb28 != 0) && (uVar3 = FUN_1415ad720(&DAT_1468e2448), (char)uVar3 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    uVar3 = CONCAT44(extraout_var_00,DVar2);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 141addfa0 FUN_141addfa0 body=473 status=ok
// SIG undefined FUN_141addfa0(void)

ulonglong FUN_141addfa0(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  longlong *plVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar8 < DAT_1469feab0) {
    _Init_thread_header(&DAT_1469feab0);
    if (DAT_1469feab0 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar6 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAtmosphericFog");
      lVar7 = 0;
      if (plVar6 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar6 + 0x38))(plVar6);
      }
      DAT_1469feaa8 = lVar7;
      _Init_thread_footer(&DAT_1469feab0);
    }
  }
  if (*piVar8 < DAT_1469feac0) {
    _Init_thread_header(&DAT_1469feac0);
    if (DAT_1469feac0 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar6 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations")
      ;
      lVar7 = 0;
      if (plVar6 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar6 + 0x38))(plVar6);
      }
      DAT_1469feab8 = lVar7;
      _Init_thread_footer(&DAT_1469feac0);
    }
  }
  lVar7 = DAT_1469feab8;
  lVar9 = 4;
  if (DAT_1469feab8 == 0) {
LAB_141ade03c:
    bVar1 = false;
  }
  else {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar3 = GetCurrentThreadId();
      if (DVar3 == DAT_1468c21c0) goto LAB_141ade02f;
      lVar4 = 4;
    }
    else {
LAB_141ade02f:
      lVar4 = 0;
    }
    if (*(int *)(lVar4 + lVar7) == 0) goto LAB_141ade03c;
    bVar1 = true;
  }
  lVar7 = DAT_1469feaa8;
  if (DAT_1469feaa8 != 0) {
    uVar5 = FUN_1415ad720(&DAT_1468e2448);
    if (((char)uVar5 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar3 = GetCurrentThreadId();
      uVar5 = CONCAT71((int7)(CONCAT44(extraout_var,DVar3) >> 8),DVar3 == DAT_1468c21c0);
      if (DVar3 == DAT_1468c21c0) goto LAB_141ade076;
    }
    else {
LAB_141ade076:
      lVar9 = 0;
    }
    if ((*(int *)(lVar9 + lVar7) == 0) && (!bVar1)) goto LAB_141ade08f;
  }
  uVar5 = (**(code **)(*param_2 + 0x1e8))(param_2);
LAB_141ade08f:
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 141ade180 FUN_141ade180 body=366 status=ok
// SIG undefined FUN_141ade180(void)

ulonglong FUN_141ade180(void)

{
  uint uVar1;
  DWORD DVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  uint *puVar7;
  
  lVar6 = 0;
  puVar7 = (uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if (((int)*puVar7 < DAT_1469fead0) && (_Init_thread_header(&DAT_1469fead0), DAT_1469fead0 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAtmosphericFog");
    lVar4 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469feac8 = lVar4;
    _Init_thread_footer(&DAT_1469fead0);
  }
  uVar1 = *puVar7;
  uVar3 = (ulonglong)uVar1;
  if (((int)uVar1 < DAT_1469feae0) &&
     (uVar3 = _Init_thread_header(&DAT_1469feae0), DAT_1469feae0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fead8 = lVar6;
    uVar3 = _Init_thread_footer(&DAT_1469feae0);
  }
  if (((DAT_1469fead8 != 0) && (uVar3 = FUN_1415ad720(&DAT_1468e2448), (char)uVar3 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    uVar3 = CONCAT44(extraout_var,DVar2);
  }
  if (((DAT_1469feac8 != 0) && (uVar3 = FUN_1415ad720(&DAT_1468e2448), (char)uVar3 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    uVar3 = CONCAT44(extraout_var_00,DVar2);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 141ade2f0 FUN_141ade2f0 body=541 status=ok
// SIG undefined FUN_141ade2f0(void)

undefined8 FUN_141ade2f0(undefined4 param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  DWORD DVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int *piVar10;
  longlong lVar11;
  
  piVar10 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar10 < DAT_1469fea50) && (_Init_thread_header(&DAT_1469fea50), DAT_1469fea50 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAtmosphericFog");
    lVar9 = 0;
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar8 + 0x38))(plVar8);
    }
    DAT_1469fea48 = lVar9;
    _Init_thread_footer(&DAT_1469fea50);
  }
  if ((*piVar10 < DAT_1469fea60) && (_Init_thread_header(&DAT_1469fea60), DAT_1469fea60 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    lVar9 = 0;
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar8 + 0x38))(plVar8);
    }
    DAT_1469fea58 = lVar9;
    _Init_thread_footer(&DAT_1469fea60);
  }
  lVar9 = DAT_1469fea58;
  lVar11 = 4;
  if (DAT_1469fea58 == 0) {
LAB_141ade394:
    bVar1 = false;
  }
  else {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
      lVar7 = 4;
    }
    else {
      lVar7 = 0;
    }
    if (*(int *)(lVar7 + lVar9) == 0) goto LAB_141ade394;
    bVar1 = true;
  }
  lVar9 = DAT_1469fea48;
  if (DAT_1469fea48 != 0) {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)) {
      lVar11 = 0;
    }
    if ((*(int *)(lVar11 + lVar9) == 0) && (!bVar1)) {
      bVar1 = false;
      goto LAB_141ade3e1;
    }
  }
  bVar1 = true;
LAB_141ade3e1:
  cVar2 = FUN_141ee4e30(param_1);
  if ((bVar1) && (uVar5 = (**(code **)(*param_2 + 0x1e8))(param_2), 1 < uVar5)) {
    bVar3 = 1;
  }
  else {
    bVar3 = 0;
  }
  if (((bool)(cVar2 != '\0' & bVar3)) && (iVar6 = FUN_1419ef5f0(param_1), 1 < iVar6)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141ade510 FUN_141ade510 body=432 status=ok
// SIG undefined FUN_141ade510(void)

undefined8 FUN_141ade510(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int *piVar6;
  
  lVar5 = 0;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar6 < DAT_1469fea70) && (_Init_thread_header(&DAT_1469fea70), DAT_1469fea70 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAtmosphericFog");
    lVar3 = lVar5;
    if (plVar4 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_1469fea68 = lVar3;
    _Init_thread_footer(&DAT_1469fea70);
  }
  if ((*piVar6 < DAT_1469fea80) && (_Init_thread_header(&DAT_1469fea80), DAT_1469fea80 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_1469fea78 = lVar5;
    _Init_thread_footer(&DAT_1469fea80);
  }
  if (((DAT_1469fea78 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  if (((DAT_1469fea68 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_141ee4e30(param_1);
  if ((cVar1 != '\0') && (iVar2 = FUN_1419ef5f0(param_1), 1 < iVar2)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141ade6c0 FUN_141ade6c0 body=543 status=ok
// SIG undefined FUN_141ade6c0(void)

undefined8 FUN_141ade6c0(undefined4 param_1,longlong *param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  DWORD DVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  byte bVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_1469fe9f0) && (_Init_thread_header(&DAT_1469fe9f0), DAT_1469fe9f0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAtmosphericFog");
    lVar9 = 0;
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar8 + 0x38))(plVar8);
    }
    DAT_1469fe9e8 = lVar9;
    _Init_thread_footer(&DAT_1469fe9f0);
  }
  if ((*piVar11 < DAT_1469fea00) && (_Init_thread_header(&DAT_1469fea00), DAT_1469fea00 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    lVar9 = 0;
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar8 + 0x38))(plVar8);
    }
    DAT_1469fe9f8 = lVar9;
    _Init_thread_footer(&DAT_1469fea00);
  }
  lVar9 = DAT_1469fe9f8;
  lVar12 = 4;
  if (DAT_1469fe9f8 == 0) {
LAB_141ade765:
    bVar1 = false;
  }
  else {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
      lVar7 = 4;
    }
    else {
      lVar7 = 0;
    }
    if (*(int *)(lVar7 + lVar9) == 0) goto LAB_141ade765;
    bVar1 = true;
  }
  lVar9 = DAT_1469fe9e8;
  if (DAT_1469fe9e8 != 0) {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)) {
      lVar12 = 0;
    }
    if ((*(int *)(lVar12 + lVar9) == 0) && (!bVar1)) {
      bVar1 = false;
      goto LAB_141ade7b2;
    }
  }
  bVar1 = true;
LAB_141ade7b2:
  bVar3 = FUN_141ae1d30(param_1,param_2,param_3);
  if ((bVar1) && (uVar5 = (**(code **)(*param_2 + 0x1e8))(), 1 < uVar5)) {
    bVar10 = 1;
  }
  else {
    bVar10 = 0;
  }
  if (((bVar3 & bVar10) != 0) && (iVar6 = FUN_1419ef5f0(param_1), 1 < iVar6)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141ade8e0 FUN_141ade8e0 body=448 status=ok
// SIG undefined FUN_141ade8e0(void)

undefined8 FUN_141ade8e0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  
  lVar6 = 0;
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar7 < DAT_1469fea10) && (_Init_thread_header(&DAT_1469fea10), DAT_1469fea10 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAtmosphericFog");
    lVar4 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fea08 = lVar4;
    _Init_thread_footer(&DAT_1469fea10);
  }
  if ((*piVar7 < DAT_1469fea20) && (_Init_thread_header(&DAT_1469fea20), DAT_1469fea20 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fea18 = lVar6;
    _Init_thread_footer(&DAT_1469fea20);
  }
  if (((DAT_1469fea18 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  if (((DAT_1469fea08 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_141ae1d30(param_1,param_2,param_3);
  if ((cVar1 == '\0') || (iVar2 = FUN_1419ef5f0(param_1), iVar2 < 2)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 141adeaa0 FUN_141adeaa0 body=543 status=ok
// SIG undefined FUN_141adeaa0(void)

undefined8 FUN_141adeaa0(undefined4 param_1,longlong *param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  DWORD DVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  byte bVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_1469fe990) && (_Init_thread_header(&DAT_1469fe990), DAT_1469fe990 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAtmosphericFog");
    lVar9 = 0;
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar8 + 0x38))(plVar8);
    }
    DAT_1469fe988 = lVar9;
    _Init_thread_footer(&DAT_1469fe990);
  }
  if ((*piVar11 < DAT_1469fe9a0) && (_Init_thread_header(&DAT_1469fe9a0), DAT_1469fe9a0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    lVar9 = 0;
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar8 + 0x38))(plVar8);
    }
    DAT_1469fe998 = lVar9;
    _Init_thread_footer(&DAT_1469fe9a0);
  }
  lVar9 = DAT_1469fe998;
  lVar12 = 4;
  if (DAT_1469fe998 == 0) {
LAB_141adeb45:
    bVar1 = false;
  }
  else {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
      lVar7 = 4;
    }
    else {
      lVar7 = 0;
    }
    if (*(int *)(lVar7 + lVar9) == 0) goto LAB_141adeb45;
    bVar1 = true;
  }
  lVar9 = DAT_1469fe988;
  if (DAT_1469fe988 != 0) {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)) {
      lVar12 = 0;
    }
    if ((*(int *)(lVar12 + lVar9) == 0) && (!bVar1)) {
      bVar1 = false;
      goto LAB_141adeb92;
    }
  }
  bVar1 = true;
LAB_141adeb92:
  bVar3 = FUN_141ae1cf0(param_1,param_2,param_3);
  if ((bVar1) && (uVar5 = (**(code **)(*param_2 + 0x1e8))(), 1 < uVar5)) {
    bVar10 = 1;
  }
  else {
    bVar10 = 0;
  }
  if (((bVar3 & bVar10) != 0) && (iVar6 = FUN_1419ef5f0(param_1), 1 < iVar6)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141adecc0 FUN_141adecc0 body=448 status=ok
// SIG undefined FUN_141adecc0(void)

undefined8 FUN_141adecc0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  
  lVar6 = 0;
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar7 < DAT_1469fe9b0) && (_Init_thread_header(&DAT_1469fe9b0), DAT_1469fe9b0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAtmosphericFog");
    lVar4 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe9a8 = lVar4;
    _Init_thread_footer(&DAT_1469fe9b0);
  }
  if ((*piVar7 < DAT_1469fe9c0) && (_Init_thread_header(&DAT_1469fe9c0), DAT_1469fe9c0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe9b8 = lVar6;
    _Init_thread_footer(&DAT_1469fe9c0);
  }
  if (((DAT_1469fe9b8 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  if (((DAT_1469fe9a8 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_141ae1cf0(param_1,param_2,param_3);
  if ((cVar1 == '\0') || (iVar2 = FUN_1419ef5f0(param_1), iVar2 < 2)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 141adee80 FUN_141adee80 body=543 status=ok
// SIG undefined FUN_141adee80(void)

undefined8 FUN_141adee80(undefined4 param_1,longlong *param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  DWORD DVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  byte bVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_1469fe930) && (_Init_thread_header(&DAT_1469fe930), DAT_1469fe930 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAtmosphericFog");
    lVar9 = 0;
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar8 + 0x38))(plVar8);
    }
    DAT_1469fe928 = lVar9;
    _Init_thread_footer(&DAT_1469fe930);
  }
  if ((*piVar11 < DAT_1469fe940) && (_Init_thread_header(&DAT_1469fe940), DAT_1469fe940 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    lVar9 = 0;
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar8 + 0x38))(plVar8);
    }
    DAT_1469fe938 = lVar9;
    _Init_thread_footer(&DAT_1469fe940);
  }
  lVar9 = DAT_1469fe938;
  lVar12 = 4;
  if (DAT_1469fe938 == 0) {
LAB_141adef25:
    bVar1 = false;
  }
  else {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
      lVar7 = 4;
    }
    else {
      lVar7 = 0;
    }
    if (*(int *)(lVar7 + lVar9) == 0) goto LAB_141adef25;
    bVar1 = true;
  }
  lVar9 = DAT_1469fe928;
  if (DAT_1469fe928 != 0) {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)) {
      lVar12 = 0;
    }
    if ((*(int *)(lVar12 + lVar9) == 0) && (!bVar1)) {
      bVar1 = false;
      goto LAB_141adef72;
    }
  }
  bVar1 = true;
LAB_141adef72:
  bVar3 = FUN_141ae1e60(param_1,param_2,param_3);
  if ((bVar1) && (uVar5 = (**(code **)(*param_2 + 0x1e8))(), 1 < uVar5)) {
    bVar10 = 1;
  }
  else {
    bVar10 = 0;
  }
  if (((bVar3 & bVar10) != 0) && (iVar6 = FUN_1419ef5f0(param_1), 1 < iVar6)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141adf0a0 FUN_141adf0a0 body=448 status=ok
// SIG undefined FUN_141adf0a0(void)

undefined8 FUN_141adf0a0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  
  lVar6 = 0;
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar7 < DAT_1469fe950) && (_Init_thread_header(&DAT_1469fe950), DAT_1469fe950 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAtmosphericFog");
    lVar4 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe948 = lVar4;
    _Init_thread_footer(&DAT_1469fe950);
  }
  if ((*piVar7 < DAT_1469fe960) && (_Init_thread_header(&DAT_1469fe960), DAT_1469fe960 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe958 = lVar6;
    _Init_thread_footer(&DAT_1469fe960);
  }
  if (((DAT_1469fe958 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  if (((DAT_1469fe948 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_141ae1e60(param_1,param_2,param_3);
  if ((cVar1 == '\0') || (iVar2 = FUN_1419ef5f0(param_1), iVar2 < 2)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 141adf260 FUN_141adf260 body=543 status=ok
// SIG undefined FUN_141adf260(void)

undefined8 FUN_141adf260(undefined4 param_1,longlong *param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  DWORD DVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  byte bVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_1469fe8d0) && (_Init_thread_header(&DAT_1469fe8d0), DAT_1469fe8d0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAtmosphericFog");
    lVar9 = 0;
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar8 + 0x38))(plVar8);
    }
    DAT_1469fe8c8 = lVar9;
    _Init_thread_footer(&DAT_1469fe8d0);
  }
  if ((*piVar11 < DAT_1469fe8e0) && (_Init_thread_header(&DAT_1469fe8e0), DAT_1469fe8e0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    lVar9 = 0;
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar8 + 0x38))(plVar8);
    }
    DAT_1469fe8d8 = lVar9;
    _Init_thread_footer(&DAT_1469fe8e0);
  }
  lVar9 = DAT_1469fe8d8;
  lVar12 = 4;
  if (DAT_1469fe8d8 == 0) {
LAB_141adf305:
    bVar1 = false;
  }
  else {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
      lVar7 = 4;
    }
    else {
      lVar7 = 0;
    }
    if (*(int *)(lVar7 + lVar9) == 0) goto LAB_141adf305;
    bVar1 = true;
  }
  lVar9 = DAT_1469fe8c8;
  if (DAT_1469fe8c8 != 0) {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)) {
      lVar12 = 0;
    }
    if ((*(int *)(lVar12 + lVar9) == 0) && (!bVar1)) {
      bVar1 = false;
      goto LAB_141adf352;
    }
  }
  bVar1 = true;
LAB_141adf352:
  bVar3 = FUN_141ae1f90(param_1,param_2,param_3);
  if ((bVar1) && (uVar5 = (**(code **)(*param_2 + 0x1e8))(), 1 < uVar5)) {
    bVar10 = 1;
  }
  else {
    bVar10 = 0;
  }
  if (((bVar3 & bVar10) != 0) && (iVar6 = FUN_1419ef5f0(param_1), 1 < iVar6)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141adf480 FUN_141adf480 body=448 status=ok
// SIG undefined FUN_141adf480(void)

undefined8 FUN_141adf480(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  
  lVar6 = 0;
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar7 < DAT_1469fe8f0) && (_Init_thread_header(&DAT_1469fe8f0), DAT_1469fe8f0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAtmosphericFog");
    lVar4 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe8e8 = lVar4;
    _Init_thread_footer(&DAT_1469fe8f0);
  }
  if ((*piVar7 < DAT_1469fe900) && (_Init_thread_header(&DAT_1469fe900), DAT_1469fe900 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe8f8 = lVar6;
    _Init_thread_footer(&DAT_1469fe900);
  }
  if (((DAT_1469fe8f8 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  if (((DAT_1469fe8e8 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_141ae1f90(param_1,param_2,param_3);
  if ((cVar1 == '\0') || (iVar2 = FUN_1419ef5f0(param_1), iVar2 < 2)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 141adf640 FUN_141adf640 body=543 status=ok
// SIG undefined FUN_141adf640(void)

undefined8 FUN_141adf640(undefined4 param_1,longlong *param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  DWORD DVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  byte bVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_1469fe870) && (_Init_thread_header(&DAT_1469fe870), DAT_1469fe870 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAtmosphericFog");
    lVar9 = 0;
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar8 + 0x38))(plVar8);
    }
    DAT_1469fe868 = lVar9;
    _Init_thread_footer(&DAT_1469fe870);
  }
  if ((*piVar11 < DAT_1469fe880) && (_Init_thread_header(&DAT_1469fe880), DAT_1469fe880 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    lVar9 = 0;
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar8 + 0x38))(plVar8);
    }
    DAT_1469fe878 = lVar9;
    _Init_thread_footer(&DAT_1469fe880);
  }
  lVar9 = DAT_1469fe878;
  lVar12 = 4;
  if (DAT_1469fe878 == 0) {
LAB_141adf6e5:
    bVar1 = false;
  }
  else {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
      lVar7 = 4;
    }
    else {
      lVar7 = 0;
    }
    if (*(int *)(lVar7 + lVar9) == 0) goto LAB_141adf6e5;
    bVar1 = true;
  }
  lVar9 = DAT_1469fe868;
  if (DAT_1469fe868 != 0) {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)) {
      lVar12 = 0;
    }
    if ((*(int *)(lVar12 + lVar9) == 0) && (!bVar1)) {
      bVar1 = false;
      goto LAB_141adf732;
    }
  }
  bVar1 = true;
LAB_141adf732:
  bVar3 = FUN_141ae2090(param_1,param_2,param_3);
  if ((bVar1) && (uVar5 = (**(code **)(*param_2 + 0x1e8))(), 1 < uVar5)) {
    bVar10 = 1;
  }
  else {
    bVar10 = 0;
  }
  if (((bVar3 & bVar10) != 0) && (iVar6 = FUN_1419ef5f0(param_1), 1 < iVar6)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141adf860 FUN_141adf860 body=448 status=ok
// SIG undefined FUN_141adf860(void)

undefined8 FUN_141adf860(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  
  lVar6 = 0;
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar7 < DAT_1469fe890) && (_Init_thread_header(&DAT_1469fe890), DAT_1469fe890 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAtmosphericFog");
    lVar4 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe888 = lVar4;
    _Init_thread_footer(&DAT_1469fe890);
  }
  if ((*piVar7 < DAT_1469fe8a0) && (_Init_thread_header(&DAT_1469fe8a0), DAT_1469fe8a0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe898 = lVar6;
    _Init_thread_footer(&DAT_1469fe8a0);
  }
  if (((DAT_1469fe898 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  if (((DAT_1469fe888 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_141ae2090(param_1,param_2,param_3);
  if ((cVar1 == '\0') || (iVar2 = FUN_1419ef5f0(param_1), iVar2 < 2)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 141adfa20 FUN_141adfa20 body=543 status=ok
// SIG undefined FUN_141adfa20(void)

undefined8 FUN_141adfa20(undefined4 param_1,longlong *param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  DWORD DVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  byte bVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_1469fe810) && (_Init_thread_header(&DAT_1469fe810), DAT_1469fe810 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAtmosphericFog");
    lVar9 = 0;
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar8 + 0x38))(plVar8);
    }
    DAT_1469fe808 = lVar9;
    _Init_thread_footer(&DAT_1469fe810);
  }
  if ((*piVar11 < DAT_1469fe820) && (_Init_thread_header(&DAT_1469fe820), DAT_1469fe820 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    lVar9 = 0;
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar8 + 0x38))(plVar8);
    }
    DAT_1469fe818 = lVar9;
    _Init_thread_footer(&DAT_1469fe820);
  }
  lVar9 = DAT_1469fe818;
  lVar12 = 4;
  if (DAT_1469fe818 == 0) {
LAB_141adfac5:
    bVar1 = false;
  }
  else {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
      lVar7 = 4;
    }
    else {
      lVar7 = 0;
    }
    if (*(int *)(lVar7 + lVar9) == 0) goto LAB_141adfac5;
    bVar1 = true;
  }
  lVar9 = DAT_1469fe808;
  if (DAT_1469fe808 != 0) {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)) {
      lVar12 = 0;
    }
    if ((*(int *)(lVar12 + lVar9) == 0) && (!bVar1)) {
      bVar1 = false;
      goto LAB_141adfb12;
    }
  }
  bVar1 = true;
LAB_141adfb12:
  bVar3 = FUN_141ae17b0(param_1,param_2,param_3);
  if ((bVar1) && (uVar5 = (**(code **)(*param_2 + 0x1e8))(), 1 < uVar5)) {
    bVar10 = 1;
  }
  else {
    bVar10 = 0;
  }
  if (((bVar3 & bVar10) != 0) && (iVar6 = FUN_1419ef5f0(param_1), 1 < iVar6)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141adfc40 FUN_141adfc40 body=448 status=ok
// SIG undefined FUN_141adfc40(void)

undefined8 FUN_141adfc40(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  
  lVar6 = 0;
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar7 < DAT_1469fe830) && (_Init_thread_header(&DAT_1469fe830), DAT_1469fe830 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAtmosphericFog");
    lVar4 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe828 = lVar4;
    _Init_thread_footer(&DAT_1469fe830);
  }
  if ((*piVar7 < DAT_1469fe840) && (_Init_thread_header(&DAT_1469fe840), DAT_1469fe840 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe838 = lVar6;
    _Init_thread_footer(&DAT_1469fe840);
  }
  if (((DAT_1469fe838 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  if (((DAT_1469fe828 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_141ae17b0(param_1,param_2,param_3);
  if ((cVar1 == '\0') || (iVar2 = FUN_1419ef5f0(param_1), iVar2 < 2)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 141adfe00 FUN_141adfe00 body=517 status=ok
// SIG undefined FUN_141adfe00(void)

undefined8 FUN_141adfe00(undefined4 param_1,longlong *param_2)

{
  char cVar1;
  bool bVar2;
  DWORD DVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  
  piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar9 < DAT_1469febd0) && (_Init_thread_header(&DAT_1469febd0), DAT_1469febd0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAtmosphericFog");
    lVar8 = 0;
    if (plVar7 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar7 + 0x38))(plVar7);
    }
    DAT_1469febc8 = lVar8;
    _Init_thread_footer(&DAT_1469febd0);
  }
  if ((*piVar9 < DAT_1469febe0) && (_Init_thread_header(&DAT_1469febe0), DAT_1469febe0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    lVar8 = 0;
    if (plVar7 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar7 + 0x38))(plVar7);
    }
    DAT_1469febd8 = lVar8;
    _Init_thread_footer(&DAT_1469febe0);
  }
  lVar8 = DAT_1469febd8;
  lVar10 = 4;
  if (DAT_1469febd8 == 0) {
LAB_141adfea4:
    bVar2 = false;
  }
  else {
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar1 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
      lVar6 = 4;
    }
    else {
      lVar6 = 0;
    }
    if (*(int *)(lVar6 + lVar8) == 0) goto LAB_141adfea4;
    bVar2 = true;
  }
  lVar8 = DAT_1469febc8;
  if (DAT_1469febc8 == 0) {
LAB_141adfeeb:
    uVar4 = (**(code **)(*param_2 + 0x1e8))(param_2);
    if (1 < uVar4) {
      bVar2 = true;
      goto LAB_141adff02;
    }
  }
  else {
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar3 = GetCurrentThreadId();
      if (DVar3 == DAT_1468c21c0) goto LAB_141adfede;
    }
    else {
LAB_141adfede:
      lVar10 = 0;
    }
    if ((*(int *)(lVar10 + lVar8) != 0) || (bVar2)) goto LAB_141adfeeb;
  }
  bVar2 = false;
LAB_141adff02:
  if ((bVar2) && (iVar5 = FUN_1419ef5f0(param_1), 1 < iVar5)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141ae0010 FUN_141ae0010 body=393 status=ok
// SIG undefined FUN_141ae0010(void)

bool FUN_141ae0010(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int *piVar6;
  
  lVar5 = 0;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar6 < DAT_1469febf0) && (_Init_thread_header(&DAT_1469febf0), DAT_1469febf0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAtmosphericFog");
    lVar3 = lVar5;
    if (plVar4 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_1469febe8 = lVar3;
    _Init_thread_footer(&DAT_1469febf0);
  }
  if ((*piVar6 < DAT_1469fec00) && (_Init_thread_header(&DAT_1469fec00), DAT_1469fec00 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_1469febf8 = lVar5;
    _Init_thread_footer(&DAT_1469fec00);
  }
  if (((DAT_1469febf8 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  if (((DAT_1469febe8 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = FUN_1419ef5f0(param_1);
  return 1 < iVar2;
}



// FUNCTION 141ae01a0 FUN_141ae01a0 body=543 status=ok
// SIG undefined FUN_141ae01a0(void)

undefined8 FUN_141ae01a0(undefined4 param_1,longlong *param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  DWORD DVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  byte bVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_1469fe7a0) && (_Init_thread_header(&DAT_1469fe7a0), DAT_1469fe7a0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAtmosphericFog");
    lVar9 = 0;
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar8 + 0x38))(plVar8);
    }
    DAT_1469fe798 = lVar9;
    _Init_thread_footer(&DAT_1469fe7a0);
  }
  if ((*piVar11 < DAT_1469fe7b0) && (_Init_thread_header(&DAT_1469fe7b0), DAT_1469fe7b0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    lVar9 = 0;
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar8 + 0x38))(plVar8);
    }
    DAT_1469fe7a8 = lVar9;
    _Init_thread_footer(&DAT_1469fe7b0);
  }
  lVar9 = DAT_1469fe7a8;
  lVar12 = 4;
  if (DAT_1469fe7a8 == 0) {
LAB_141ae0245:
    bVar1 = false;
  }
  else {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
      lVar7 = 4;
    }
    else {
      lVar7 = 0;
    }
    if (*(int *)(lVar7 + lVar9) == 0) goto LAB_141ae0245;
    bVar1 = true;
  }
  lVar9 = DAT_1469fe798;
  if (DAT_1469fe798 != 0) {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)) {
      lVar12 = 0;
    }
    if ((*(int *)(lVar12 + lVar9) == 0) && (!bVar1)) {
      bVar1 = false;
      goto LAB_141ae0292;
    }
  }
  bVar1 = true;
LAB_141ae0292:
  bVar3 = FUN_141ae1510(param_1,param_2,param_3);
  if ((bVar1) && (uVar5 = (**(code **)(*param_2 + 0x1e8))(), 1 < uVar5)) {
    bVar10 = 1;
  }
  else {
    bVar10 = 0;
  }
  if (((bVar3 & bVar10) != 0) && (iVar6 = FUN_1419ef5f0(param_1), 1 < iVar6)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141ae03c0 FUN_141ae03c0 body=448 status=ok
// SIG undefined FUN_141ae03c0(void)

undefined8 FUN_141ae03c0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  
  lVar6 = 0;
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar7 < DAT_1469fe7c0) && (_Init_thread_header(&DAT_1469fe7c0), DAT_1469fe7c0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAtmosphericFog");
    lVar4 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe7b8 = lVar4;
    _Init_thread_footer(&DAT_1469fe7c0);
  }
  if ((*piVar7 < DAT_1469fe7d0) && (_Init_thread_header(&DAT_1469fe7d0), DAT_1469fe7d0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe7c8 = lVar6;
    _Init_thread_footer(&DAT_1469fe7d0);
  }
  if (((DAT_1469fe7c8 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  if (((DAT_1469fe7b8 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_141ae1510(param_1,param_2,param_3);
  if ((cVar1 == '\0') || (iVar2 = FUN_1419ef5f0(param_1), iVar2 < 2)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 141ae0580 FUN_141ae0580 body=543 status=ok
// SIG undefined FUN_141ae0580(void)

undefined8 FUN_141ae0580(undefined4 param_1,longlong *param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  DWORD DVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  byte bVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_1469fe740) && (_Init_thread_header(&DAT_1469fe740), DAT_1469fe740 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAtmosphericFog");
    lVar9 = 0;
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar8 + 0x38))(plVar8);
    }
    DAT_1469fe738 = lVar9;
    _Init_thread_footer(&DAT_1469fe740);
  }
  if ((*piVar11 < DAT_1469fe750) && (_Init_thread_header(&DAT_1469fe750), DAT_1469fe750 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    lVar9 = 0;
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar8 + 0x38))(plVar8);
    }
    DAT_1469fe748 = lVar9;
    _Init_thread_footer(&DAT_1469fe750);
  }
  lVar9 = DAT_1469fe748;
  lVar12 = 4;
  if (DAT_1469fe748 == 0) {
LAB_141ae0625:
    bVar1 = false;
  }
  else {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
      lVar7 = 4;
    }
    else {
      lVar7 = 0;
    }
    if (*(int *)(lVar7 + lVar9) == 0) goto LAB_141ae0625;
    bVar1 = true;
  }
  lVar9 = DAT_1469fe738;
  if (DAT_1469fe738 != 0) {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)) {
      lVar12 = 0;
    }
    if ((*(int *)(lVar12 + lVar9) == 0) && (!bVar1)) {
      bVar1 = false;
      goto LAB_141ae0672;
    }
  }
  bVar1 = true;
LAB_141ae0672:
  bVar3 = FUN_141ae1510(param_1,param_2,param_3);
  if ((bVar1) && (uVar5 = (**(code **)(*param_2 + 0x1e8))(), 1 < uVar5)) {
    bVar10 = 1;
  }
  else {
    bVar10 = 0;
  }
  if (((bVar3 & bVar10) != 0) && (iVar6 = FUN_1419ef5f0(param_1), 1 < iVar6)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141ae07a0 FUN_141ae07a0 body=448 status=ok
// SIG undefined FUN_141ae07a0(void)

undefined8 FUN_141ae07a0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  
  lVar6 = 0;
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar7 < DAT_1469fe760) && (_Init_thread_header(&DAT_1469fe760), DAT_1469fe760 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAtmosphericFog");
    lVar4 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe758 = lVar4;
    _Init_thread_footer(&DAT_1469fe760);
  }
  if ((*piVar7 < DAT_1469fe770) && (_Init_thread_header(&DAT_1469fe770), DAT_1469fe770 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fe768 = lVar6;
    _Init_thread_footer(&DAT_1469fe770);
  }
  if (((DAT_1469fe768 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  if (((DAT_1469fe758 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_141ae1510(param_1,param_2,param_3);
  if ((cVar1 == '\0') || (iVar2 = FUN_1419ef5f0(param_1), iVar2 < 2)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 141ae0960 FUN_141ae0960 body=473 status=ok
// SIG undefined FUN_141ae0960(void)

ulonglong FUN_141ae0960(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  longlong *plVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar8 < DAT_1469fec90) {
    _Init_thread_header(&DAT_1469fec90);
    if (DAT_1469fec90 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar6 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAtmosphericFog");
      lVar7 = 0;
      if (plVar6 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar6 + 0x38))(plVar6);
      }
      DAT_1469fec88 = lVar7;
      _Init_thread_footer(&DAT_1469fec90);
    }
  }
  if (*piVar8 < DAT_1469feca0) {
    _Init_thread_header(&DAT_1469feca0);
    if (DAT_1469feca0 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar6 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations")
      ;
      lVar7 = 0;
      if (plVar6 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar6 + 0x38))(plVar6);
      }
      DAT_1469fec98 = lVar7;
      _Init_thread_footer(&DAT_1469feca0);
    }
  }
  lVar7 = DAT_1469fec98;
  lVar9 = 4;
  if (DAT_1469fec98 == 0) {
LAB_141ae09fc:
    bVar1 = false;
  }
  else {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar3 = GetCurrentThreadId();
      if (DVar3 == DAT_1468c21c0) goto LAB_141ae09ef;
      lVar4 = 4;
    }
    else {
LAB_141ae09ef:
      lVar4 = 0;
    }
    if (*(int *)(lVar4 + lVar7) == 0) goto LAB_141ae09fc;
    bVar1 = true;
  }
  lVar7 = DAT_1469fec88;
  if (DAT_1469fec88 != 0) {
    uVar5 = FUN_1415ad720(&DAT_1468e2448);
    if (((char)uVar5 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar3 = GetCurrentThreadId();
      uVar5 = CONCAT71((int7)(CONCAT44(extraout_var,DVar3) >> 8),DVar3 == DAT_1468c21c0);
      if (DVar3 == DAT_1468c21c0) goto LAB_141ae0a36;
    }
    else {
LAB_141ae0a36:
      lVar9 = 0;
    }
    if ((*(int *)(lVar9 + lVar7) == 0) && (!bVar1)) goto LAB_141ae0a4f;
  }
  uVar5 = (**(code **)(*param_2 + 0x1e8))(param_2);
LAB_141ae0a4f:
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 141ae0b40 FUN_141ae0b40 body=366 status=ok
// SIG undefined FUN_141ae0b40(void)

ulonglong FUN_141ae0b40(void)

{
  uint uVar1;
  DWORD DVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  uint *puVar7;
  
  lVar6 = 0;
  puVar7 = (uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if (((int)*puVar7 < DAT_1469fecb0) && (_Init_thread_header(&DAT_1469fecb0), DAT_1469fecb0 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAtmosphericFog");
    lVar4 = lVar6;
    if (plVar5 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469feca8 = lVar4;
    _Init_thread_footer(&DAT_1469fecb0);
  }
  uVar1 = *puVar7;
  uVar3 = (ulonglong)uVar1;
  if (((int)uVar1 < DAT_1469fecc0) &&
     (uVar3 = _Init_thread_header(&DAT_1469fecc0), DAT_1469fecc0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_1469fecb8 = lVar6;
    uVar3 = _Init_thread_footer(&DAT_1469fecc0);
  }
  if (((DAT_1469fecb8 != 0) && (uVar3 = FUN_1415ad720(&DAT_1468e2448), (char)uVar3 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    uVar3 = CONCAT44(extraout_var,DVar2);
  }
  if (((DAT_1469feca8 != 0) && (uVar3 = FUN_1415ad720(&DAT_1468e2448), (char)uVar3 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    uVar3 = CONCAT44(extraout_var_00,DVar2);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 141ae0cb0 FUN_141ae0cb0 body=598 status=ok
// SIG undefined FUN_141ae0cb0(void)

undefined8 FUN_141ae0cb0(undefined4 param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  DWORD DVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  byte bVar11;
  int *piVar12;
  longlong lVar13;
  
  piVar12 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar12 < DAT_1469fecf0) && (_Init_thread_header(&DAT_1469fecf0), DAT_1469fecf0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAtmosphericFog");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_1469fece8 = lVar10;
    _Init_thread_footer(&DAT_1469fecf0);
  }
  if ((*piVar12 < DAT_1469fed00) && (_Init_thread_header(&DAT_1469fed00), DAT_1469fed00 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    lVar10 = 0;
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_1469fecf8 = lVar10;
    _Init_thread_footer(&DAT_1469fed00);
  }
  lVar10 = DAT_1469fecf8;
  lVar13 = 4;
  if (DAT_1469fecf8 == 0) {
LAB_141ae0d55:
    bVar1 = false;
  }
  else {
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar3 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar5 = GetCurrentThreadId(), DVar5 != DAT_1468c21c0)) {
      lVar8 = 4;
    }
    else {
      lVar8 = 0;
    }
    if (*(int *)(lVar8 + lVar10) == 0) goto LAB_141ae0d55;
    bVar1 = true;
  }
  lVar10 = DAT_1469fece8;
  if (DAT_1469fece8 != 0) {
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar3 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)) {
      lVar13 = 0;
    }
    if ((*(int *)(lVar13 + lVar10) == 0) && (bVar2 = false, !bVar1)) goto LAB_141ae0d9f;
  }
  bVar2 = true;
LAB_141ae0d9f:
  iVar6 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((((iVar6 == 0) || (uVar7 = (**(code **)(*param_2 + 0x1e8))(param_2), uVar7 < 2)) ||
      (iVar6 = FUN_1419ef5f0(param_1), iVar6 < 2)) ||
     (cVar3 = (**(code **)(*param_2 + 0x170))(param_2), cVar3 == '\0')) {
    bVar11 = 0;
  }
  else {
    bVar11 = 1;
  }
  if ((bVar2) && (uVar7 = (**(code **)(*param_2 + 0x1e8))(param_2), 1 < uVar7)) {
    bVar4 = 1;
  }
  else {
    bVar4 = 0;
  }
  if (((bool)(bVar11 & bVar4)) && (iVar6 = FUN_1419ef5f0(param_1), 1 < iVar6)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141ae0f10 FUN_141ae0f10 body=465 status=ok
// SIG undefined FUN_141ae0f10(void)

undefined8 FUN_141ae0f10(undefined4 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int *piVar8;
  
  lVar7 = 0;
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar8 < DAT_1469fed10) && (_Init_thread_header(&DAT_1469fed10), DAT_1469fed10 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar6 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAtmosphericFog");
    lVar5 = lVar7;
    if (plVar6 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar6 + 0x38))(plVar6);
    }
    DAT_1469fed08 = lVar5;
    _Init_thread_footer(&DAT_1469fed10);
  }
  if ((*piVar8 < DAT_1469fed20) && (_Init_thread_header(&DAT_1469fed20), DAT_1469fed20 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar6 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    if (plVar6 != (longlong *)0x0) {
      lVar7 = (**(code **)(*plVar6 + 0x38))(plVar6);
    }
    DAT_1469fed18 = lVar7;
    _Init_thread_footer(&DAT_1469fed20);
  }
  if (((DAT_1469fed18 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  if (((DAT_1469fed08 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (((iVar2 == 0) || (uVar3 = (**(code **)(*param_2 + 0x1e8))(param_2), uVar3 < 2)) ||
     ((iVar2 = FUN_1419ef5f0(param_1), iVar2 < 2 ||
      (cVar1 = (**(code **)(*param_2 + 0x170))(param_2), cVar1 == '\0')))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 141ae10f0 FUN_141ae10f0 body=543 status=ok
// SIG undefined FUN_141ae10f0(void)

undefined8 FUN_141ae10f0(undefined4 param_1,longlong *param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  DWORD DVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  byte bVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_1469fec30) && (_Init_thread_header(&DAT_1469fec30), DAT_1469fec30 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAtmosphericFog");
    lVar9 = 0;
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar8 + 0x38))(plVar8);
    }
    DAT_1469fec28 = lVar9;
    _Init_thread_footer(&DAT_1469fec30);
  }
  if ((*piVar11 < DAT_1469fec40) && (_Init_thread_header(&DAT_1469fec40), DAT_1469fec40 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    lVar9 = 0;
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar8 + 0x38))(plVar8);
    }
    DAT_1469fec38 = lVar9;
    _Init_thread_footer(&DAT_1469fec40);
  }
  lVar9 = DAT_1469fec38;
  lVar12 = 4;
  if (DAT_1469fec38 == 0) {
LAB_141ae1195:
    bVar1 = false;
  }
  else {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
      lVar7 = 4;
    }
    else {
      lVar7 = 0;
    }
    if (*(int *)(lVar7 + lVar9) == 0) goto LAB_141ae1195;
    bVar1 = true;
  }
  lVar9 = DAT_1469fec28;
  if (DAT_1469fec28 != 0) {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)) {
      lVar12 = 0;
    }
    if ((*(int *)(lVar12 + lVar9) == 0) && (!bVar1)) {
      bVar1 = false;
      goto LAB_141ae11e2;
    }
  }
  bVar1 = true;
LAB_141ae11e2:
  bVar3 = FUN_141ae1bd0(param_1,param_2,param_3);
  if ((bVar1) && (uVar5 = (**(code **)(*param_2 + 0x1e8))(), 1 < uVar5)) {
    bVar10 = 1;
  }
  else {
    bVar10 = 0;
  }
  if (((bVar3 & bVar10) != 0) && (iVar6 = FUN_1419ef5f0(param_1), 1 < iVar6)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141ae1310 FUN_141ae1310 body=448 status=ok
// SIG undefined FUN_141ae1310(void)

undefined8 FUN_141ae1310(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int *piVar8;
  
  lVar7 = 0;
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar8 < DAT_1469fec50) && (_Init_thread_header(&DAT_1469fec50), DAT_1469fec50 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar6 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAtmosphericFog");
    lVar5 = lVar7;
    if (plVar6 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar6 + 0x38))(plVar6);
    }
    DAT_1469fec48 = lVar5;
    _Init_thread_footer(&DAT_1469fec50);
  }
  if ((*piVar8 < DAT_1469fec60) && (_Init_thread_header(&DAT_1469fec60), DAT_1469fec60 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar6 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    if (plVar6 != (longlong *)0x0) {
      lVar7 = (**(code **)(*plVar6 + 0x38))(plVar6);
    }
    DAT_1469fec58 = lVar7;
    _Init_thread_footer(&DAT_1469fec60);
  }
  if (((DAT_1469fec58 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  if (((DAT_1469fec48 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  uVar3 = FUN_141ae1bd0(param_1,param_2,param_3);
  if (((uVar3 & 1) == 0) || (iVar2 = FUN_1419ef5f0(param_1), iVar2 < 2)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 141ae14d0 FUN_141ae14d0 body=51 status=ok
// SIG undefined FUN_141ae14d0(void)

ulonglong FUN_141ae14d0(uint *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_1419ef5f0(uVar1);
  if (((2 < (int)uVar2) && (uVar1 < 0x20)) &&
     (uVar2 = 0xda151015, (0xda151015U >> (uVar1 & 0x1f) & 1) != 0)) {
    return 0xda151001;
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141ae1510 FUN_141ae1510 body=669 status=ok
// SIG undefined FUN_141ae1510(void)

undefined8 FUN_141ae1510(undefined8 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  DWORD DVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar8 < DAT_1469fed60) {
    _Init_thread_header(&DAT_1469fed60);
    if (DAT_1469fed60 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar6 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AllowStaticLighting");
      lVar7 = 0;
      if (plVar6 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar6 + 0x38))(plVar6);
      }
      DAT_1469fed58 = lVar7;
      _Init_thread_footer(&DAT_1469fed60);
    }
  }
  if (*piVar8 < DAT_1469fed70) {
    _Init_thread_header(&DAT_1469fed70);
    if (DAT_1469fed70 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar6 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportLowQualityLightmaps");
      lVar7 = 0;
      if (plVar6 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar6 + 0x38))(plVar6);
      }
      DAT_1469fed68 = lVar7;
      _Init_thread_footer(&DAT_1469fed70);
    }
  }
  if (*piVar8 < DAT_1469fed80) {
    _Init_thread_header(&DAT_1469fed80);
    if (DAT_1469fed80 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar6 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations")
      ;
      lVar7 = 0;
      if (plVar6 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar6 + 0x38))(plVar6);
      }
      DAT_1469fed78 = lVar7;
      _Init_thread_footer(&DAT_1469fed80);
    }
  }
  lVar7 = DAT_1469fed78;
  lVar9 = 4;
  if (DAT_1469fed78 == 0) {
LAB_141ae15b7:
    if (DAT_1469fed68 != 0) {
      cVar1 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
        GetCurrentThreadId();
      }
    }
  }
  else {
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar2 = GetCurrentThreadId();
      if (DVar2 == DAT_1468c21c0) goto LAB_141ae15af;
      lVar4 = 4;
    }
    else {
LAB_141ae15af:
      lVar4 = 0;
    }
    if (*(int *)(lVar4 + lVar7) == 0) goto LAB_141ae15b7;
  }
  iVar3 = (**(code **)(*param_2 + 0x1f8))(param_2);
  lVar7 = DAT_1469fed58;
  if ((iVar3 == 0) || ((*(uint *)(param_3 + 0x28) >> 1 & 1) == 0)) {
LAB_141ae165b:
    uVar5 = 0;
  }
  else {
    if (DAT_1469fed58 != 0) {
      cVar1 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
        DVar2 = GetCurrentThreadId();
        if (DVar2 == DAT_1468c21c0) goto LAB_141ae162f;
      }
      else {
LAB_141ae162f:
        lVar9 = 0;
      }
      if (*(int *)(lVar9 + lVar7) == 0) goto LAB_141ae165b;
    }
    cVar1 = (**(code **)(*param_2 + 0x120))(param_2);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*param_2 + 200))(param_2);
      if (cVar1 == '\0') goto LAB_141ae165b;
    }
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 141ae17b0 FUN_141ae17b0 body=710 status=ok
// SIG undefined FUN_141ae17b0(void)

undefined8 FUN_141ae17b0(undefined8 param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  
  piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar9 < DAT_1469fed30) {
    _Init_thread_header(&DAT_1469fed30);
    if (DAT_1469fed30 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar7 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AllowStaticLighting");
      lVar8 = 0;
      if (plVar7 != (longlong *)0x0) {
        lVar8 = (**(code **)(*plVar7 + 0x38))(plVar7);
      }
      DAT_1469fed28 = lVar8;
      _Init_thread_footer(&DAT_1469fed30);
    }
  }
  if (*piVar9 < DAT_1469fed40) {
    _Init_thread_header(&DAT_1469fed40);
    if (DAT_1469fed40 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar7 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportLowQualityLightmaps");
      lVar8 = 0;
      if (plVar7 != (longlong *)0x0) {
        lVar8 = (**(code **)(*plVar7 + 0x38))(plVar7);
      }
      DAT_1469fed38 = lVar8;
      _Init_thread_footer(&DAT_1469fed40);
    }
  }
  if (*piVar9 < DAT_1469fed50) {
    _Init_thread_header(&DAT_1469fed50);
    if (DAT_1469fed50 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar7 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations")
      ;
      lVar8 = 0;
      if (plVar7 != (longlong *)0x0) {
        lVar8 = (**(code **)(*plVar7 + 0x38))(plVar7);
      }
      DAT_1469fed48 = lVar8;
      _Init_thread_footer(&DAT_1469fed50);
    }
  }
  lVar8 = DAT_1469fed48;
  lVar10 = 4;
  if (DAT_1469fed48 == 0) {
LAB_141ae1857:
    lVar8 = DAT_1469fed38;
    if (DAT_1469fed38 == 0) goto LAB_141ae18a0;
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar3 = GetCurrentThreadId();
      if (DVar3 == DAT_1468c21c0) goto LAB_141ae1893;
      lVar5 = 4;
    }
    else {
LAB_141ae1893:
      lVar5 = 0;
    }
    if (*(int *)(lVar5 + lVar8) != 0) goto LAB_141ae18a0;
    bVar1 = false;
  }
  else {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar3 = GetCurrentThreadId();
      if (DVar3 == DAT_1468c21c0) goto LAB_141ae184f;
      lVar5 = 4;
    }
    else {
LAB_141ae184f:
      lVar5 = 0;
    }
    if (*(int *)(lVar5 + lVar8) == 0) goto LAB_141ae1857;
LAB_141ae18a0:
    bVar1 = true;
  }
  iVar4 = (**(code **)(*param_2 + 0x1f8))(param_2);
  lVar8 = DAT_1469fed28;
  if (((iVar4 == 0) || (!bVar1)) || ((*(uint *)(param_3 + 0x28) >> 1 & 1) == 0)) {
LAB_141ae1924:
    uVar6 = 0;
  }
  else {
    if (DAT_1469fed28 != 0) {
      cVar2 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
        DVar3 = GetCurrentThreadId();
        if (DVar3 == DAT_1468c21c0) goto LAB_141ae18f8;
      }
      else {
LAB_141ae18f8:
        lVar10 = 0;
      }
      if (*(int *)(lVar10 + lVar8) == 0) goto LAB_141ae1924;
    }
    cVar2 = (**(code **)(*param_2 + 0x120))(param_2);
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*param_2 + 200))(param_2);
      if (cVar2 == '\0') goto LAB_141ae1924;
    }
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 141ae1aa0 FUN_141ae1aa0 body=268 status=ok
// SIG undefined FUN_141ae1aa0(void)

undefined8 FUN_141ae1aa0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469fe648) && (_Init_thread_header(&DAT_1469fe648), DAT_1469fe648 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AllowStaticLighting");
    lVar5 = lVar6;
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_1469fe640 = lVar5;
    _Init_thread_footer(&DAT_1469fe648);
  }
  iVar2 = (**(code **)(*param_2 + 0x1f8))(param_2);
  lVar5 = DAT_1469fe640;
  if (iVar2 == 0) {
    return 0;
  }
  if (DAT_1469fe640 != 0) {
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar1 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
      lVar6 = 4;
    }
    if (*(int *)(lVar6 + lVar5) == 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 141ae1bd0 FUN_141ae1bd0 body=287 status=ok
// SIG undefined FUN_141ae1bd0(void)

undefined8 FUN_141ae1bd0(undefined4 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469fe7e0) && (_Init_thread_header(&DAT_1469fe7e0), DAT_1469fe7e0 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_1469fe7d8 =
         (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AllowStaticLighting");
    _Init_thread_footer(&DAT_1469fe7e0);
  }
  iVar2 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if ((iVar2 != 0) && (uVar3 = (**(code **)(*param_2 + 0x1e8))(param_2), 1 < uVar3)) {
    if ((DAT_1469fe7d8 != (longlong *)0x0) &&
       (iVar2 = (**(code **)(*DAT_1469fe7d8 + 0x68))(), iVar2 == 0)) {
      return 0;
    }
    iVar2 = (**(code **)(*param_2 + 0x1f8))(param_2);
    if ((((iVar2 != 0) && (uVar3 = (**(code **)(*param_2 + 0x1e8))(param_2), 1 < uVar3)) &&
        (iVar2 = FUN_1419ef5f0(param_1), 1 < iVar2)) &&
       (cVar1 = (**(code **)(*param_2 + 0x170))(param_2), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141ae1cf0 FUN_141ae1cf0 body=50 status=ok
// SIG undefined FUN_141ae1cf0(void)

undefined8 FUN_141ae1cf0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_141ee4e30();
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*param_2 + 0x1f8))(param_2);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141ae1d30 FUN_141ae1d30 body=303 status=ok
// SIG undefined FUN_141ae1d30(void)

undefined8 FUN_141ae1d30(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  DWORD DVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469fe658) && (_Init_thread_header(&DAT_1469fe658), DAT_1469fe658 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AllowStaticLighting");
    lVar5 = lVar6;
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_1469fe650 = lVar5;
    _Init_thread_footer(&DAT_1469fe658);
  }
  lVar5 = DAT_1469fe650;
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 != DAT_1468c21c0) {
      lVar6 = 4;
    }
  }
  if (((*(int *)(lVar6 + lVar5) == 0) || (cVar1 = FUN_141ee4e30(param_1), cVar1 == '\0')) ||
     (cVar1 = FUN_141ae1510(param_1,param_2,param_3), cVar1 == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 141ae1e60 FUN_141ae1e60 body=303 status=ok
// SIG undefined FUN_141ae1e60(void)

undefined8 FUN_141ae1e60(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  DWORD DVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469fe668) && (_Init_thread_header(&DAT_1469fe668), DAT_1469fe668 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AllowStaticLighting");
    lVar5 = lVar6;
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_1469fe660 = lVar5;
    _Init_thread_footer(&DAT_1469fe668);
  }
  lVar5 = DAT_1469fe660;
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 != DAT_1468c21c0) {
      lVar6 = 4;
    }
  }
  if (((*(int *)(lVar6 + lVar5) == 0) || (cVar1 = FUN_141ee4e30(param_1), cVar1 == '\0')) ||
     (cVar1 = FUN_141ae1510(param_1,param_2,param_3), cVar1 == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 141ae1f90 FUN_141ae1f90 body=245 status=ok
// SIG undefined FUN_141ae1f90(void)

ulonglong FUN_141ae1f90(undefined4 param_1)

{
  DWORD DVar1;
  ulonglong uVar2;
  undefined4 extraout_var;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469fe678) && (_Init_thread_header(&DAT_1469fe678), DAT_1469fe678 == -1))
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
    DAT_1469fe670 = lVar4;
    _Init_thread_footer(&DAT_1469fe678);
  }
  lVar4 = DAT_1469fe670;
  uVar2 = FUN_1415ad720(&DAT_1468e2448);
  if (((char)uVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar1 = GetCurrentThreadId();
    uVar2 = CONCAT71((int7)(CONCAT44(extraout_var,DVar1) >> 8),DVar1 == DAT_1468c21c0);
    if (DVar1 != DAT_1468c21c0) {
      lVar5 = 4;
    }
  }
  if (*(int *)(lVar5 + lVar4) != 0) {
    uVar2 = FUN_141ee4e30(param_1);
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141ae2090 FUN_141ae2090 body=303 status=ok
// SIG undefined FUN_141ae2090(void)

undefined8 FUN_141ae2090(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  DWORD DVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469fe688) && (_Init_thread_header(&DAT_1469fe688), DAT_1469fe688 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AllowStaticLighting");
    lVar5 = lVar6;
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_1469fe680 = lVar5;
    _Init_thread_footer(&DAT_1469fe688);
  }
  lVar5 = DAT_1469fe680;
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 != DAT_1468c21c0) {
      lVar6 = 4;
    }
  }
  if (((*(int *)(lVar6 + lVar5) == 0) || (cVar1 = FUN_141ee4e30(param_1), cVar1 == '\0')) ||
     (cVar1 = FUN_141ae1aa0(param_1,param_2,param_3), cVar1 == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 141ae21c0 FUN_141ae21c0 body=410 status=ok
// SIG undefined FUN_141ae21c0(void)

ulonglong FUN_141ae21c0(longlong param_1)

{
  uint *puVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong local_48;
  ulonglong local_40;
  
  uVar11 = 0;
  bVar5 = false;
  bVar4 = false;
  puVar7 = (undefined1 *)register0x00000020;
  uVar13 = uVar11;
  if (0 < *(int *)(param_1 + 200)) {
    do {
      uVar10 = 0;
      puVar2 = *(undefined1 **)(param_1 + 0xc0);
      puVar7 = puVar2;
      uVar14 = uVar10;
      if (0 < *(int *)(puVar2 + uVar13 + 0x30b0)) {
        do {
          uVar9 = 0;
          local_48 = 0;
          local_40 = 0;
          puVar7 = (undefined1 *)
                   FUN_141d34970(*(undefined8 *)(uVar14 + *(longlong *)(puVar2 + uVar13 + 0x30a8)),
                                 &local_48);
          uVar8 = local_40 & 0xffffffff;
          if (0 < (int)local_40) {
            uVar12 = uVar9;
            do {
              plVar3 = *(longlong **)(*(longlong *)(uVar12 + local_48) + 8);
              uVar6 = *(uint *)((longlong)plVar3 + 0x1c) >> 2;
              puVar7 = (undefined1 *)(ulonglong)uVar6;
              if ((uVar6 & 1) != 0) {
                puVar7 = (undefined1 *)(**(code **)(*plVar3 + 0x110))();
                uVar8 = local_40 & 0xffffffff;
                bVar4 = bVar5;
                if ((char)puVar7 != '\0') {
                  bVar5 = true;
                  bVar4 = true;
                }
              }
              uVar6 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar6;
              uVar12 = uVar12 + 8;
            } while ((int)uVar6 < (int)uVar8);
          }
          uVar6 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar6;
          uVar14 = uVar14 + 8;
        } while ((int)uVar6 < *(int *)(puVar2 + uVar13 + 0x30b0));
      }
      uVar6 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar6;
      uVar13 = uVar13 + 0x30d0;
    } while ((int)uVar6 < *(int *)(param_1 + 200));
    if (bVar4) {
      puVar7 = (undefined1 *)(longlong)*(int *)(param_1 + 0x2a0);
      puVar1 = &DAT_1464c9c48 + (longlong)puVar7;
      if ((((DAT_1464c1664 != 0) && (DAT_1464c165c != 0)) && (2 < *(int *)(param_1 + 0x2a0))) &&
         (((*puVar1 < 0x20 &&
           (puVar7 = (undefined1 *)0xda151015, (0xda151015U >> (*puVar1 & 0x1f) & 1) != 0)) &&
          ((*(uint *)(param_1 + 0x38) & 0x40000000) != 0)))) {
        return 0xda151001;
      }
    }
  }
  return (ulonglong)puVar7 & 0xffffffffffffff00;
}



// FUNCTION 141ae2360 FUN_141ae2360 body=333 status=ok
// SIG undefined FUN_141ae2360(void)

undefined8 FUN_141ae2360(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uStack_14;
  
  uVar8 = 0;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    plVar5 = (longlong *)*param_1;
    uVar9 = (ulonglong)*(uint *)(param_1 + 1);
    uVar6 = uVar8;
    do {
      lVar2 = *plVar5;
      plVar5 = plVar5 + 1;
      uVar7 = (uint)uVar6 + 1;
      if (*(char *)(lVar2 + 0x1a98) == '\0') {
        uVar7 = (uint)uVar6;
      }
      uVar6 = (ulonglong)uVar7;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    if (0 < (int)uVar7) {
      uVar1 = param_1[5];
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146a00298) &&
         (_Init_thread_header(&DAT_146a00298), DAT_146a00298 == -1)) {
        if (DAT_1468b1f88 == (longlong *)0x0) {
          IConsoleManager::SetupSingleton();
        }
        plVar5 = (longlong *)
                 (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAtmosphericFog");
        uVar6 = uVar8;
        if (plVar5 != (longlong *)0x0) {
          uVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
        }
        DAT_146a00290 = uVar6;
        _Init_thread_footer(&DAT_146a00298);
      }
      uVar6 = DAT_146a00290;
      if (DAT_1464c9c1a != '\0') {
        uStack_14 = (uint)((ulonglong)uVar1 >> 0x20);
        if (((uStack_14 >> 0x15 & 1) != 0) && ((uStack_14 >> 0x10 & 1) != 0)) {
          cVar3 = FUN_1415ad720(&DAT_1468e2448);
          if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
            DVar4 = GetCurrentThreadId();
            if (DVar4 != DAT_1468c21c0) {
              uVar8 = 4;
            }
          }
          if (*(int *)(uVar8 + uVar6) != 0) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 141ae24b0 FUN_141ae24b0 body=323 status=ok
// SIG undefined FUN_141ae24b0(void)

undefined8 FUN_141ae24b0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  
  cVar2 = FUN_141ac2900();
  if (cVar2 != '\0') {
    return 1;
  }
  if (*(float *)(param_1 + 0x1660) <= 0.0) {
    return 0;
  }
  if (1.0 < *(float *)(param_1 + 0x3cc) || *(float *)(param_1 + 0x3cc) == 1.0) {
    return 0;
  }
  if ((*(uint *)(*(longlong *)(param_1 + 0x10) + 0x2c) & 0x1000) == 0) {
    return 0;
  }
  if (*(float *)(param_1 + 0x1668) <= 0.1 && *(float *)(param_1 + 0x1668) != 0.1) {
    return 0;
  }
  cVar2 = FUN_141ac27d0(param_1);
  if ((cVar2 == '\0') && (cVar2 = FUN_141ac2740(param_1), cVar2 == '\0')) {
    lVar5 = *(longlong *)(param_1 + 0x10);
    if (((*(int *)(*(longlong *)(lVar5 + 0x20) + 8) == 3) &&
        ((*(uint *)(lVar5 + 0x28) >> 0x19 & 1) != 0)) &&
       ((0 < *(int *)(*(longlong *)(lVar5 + 0x20) + 0x1218) ||
        ((*(uint *)(lVar5 + 0x28) >> 0x1b & 1) != 0)))) {
      uVar3 = FUN_14274f980(param_1);
      if (((DAT_146ac3ac0 == 0) || (iVar4 = FUN_1419ef5f0(uVar3), iVar4 < 3)) &&
         (cVar2 = FUN_141ee4480(uVar3), cVar2 == '\0')) goto LAB_141ae25be;
      lVar5 = *(longlong *)(param_1 + 0x10);
    }
    lVar1 = *(longlong *)(*(longlong *)(lVar5 + 0x20) + 0x1150);
    if (lVar1 == 0) {
      return 0;
    }
    if ((*(longlong *)(lVar1 + 8) == 0) && (*(char *)(lVar1 + 0x24) == '\0')) {
      return 0;
    }
    if ((*(uint *)(lVar5 + 0x2c) & 0x8000000) == 0) {
      return 0;
    }
  }
LAB_141ae25be:
  uVar3 = FUN_14274f980(param_1);
  cVar2 = IsAnyForwardShadingEnabled(uVar3);
  if (cVar2 != '\0') {
    return 0;
  }
  return 1;
}



// FUNCTION 141ae2600 FUN_141ae2600 body=186 status=ok
// SIG undefined FUN_141ae2600(void)

undefined8 FUN_141ae2600(longlong param_1,uint param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x1150);
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0x29) != '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (1 < param_2) {
    if ((bVar2) &&
       ((*(char *)(*(longlong *)(param_1 + 0x5ff8) + 1) != '\0' || (*(char *)(lVar1 + 0x28) == '\0')
        ))) {
      return 1;
    }
    return 0;
  }
  if (!bVar2) {
    return 0;
  }
  if ((*(char *)(*(longlong *)(param_1 + 0x5ff8) + 1) == '\0') || (*(char *)(lVar1 + 0x28) == '\0'))
  {
    if (*(char *)(lVar1 + 0x28) != '\0') {
      return 0;
    }
    cVar3 = IsAnyForwardShadingEnabled((&DAT_1464c9c48)[*(int *)(param_1 + 8)]);
    if (cVar3 == '\0') {
      if (0x1d < (uint)(&DAT_1464c9c48)[*(int *)(param_1 + 8)]) {
        return 0;
      }
      if ((0x25e2cf88U >> ((&DAT_1464c9c48)[*(int *)(param_1 + 8)] & 0x1f) & 1) == 0) {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 141ae26c0 FUN_141ae26c0 body=87 status=ok
// SIG undefined FUN_141ae26c0(void)

undefined8 FUN_141ae26c0(longlong param_1)

{
  if (((*(byte *)(param_1 + 0x28cc) & 8) == 0) && (*(char *)(param_1 + 0x1a98) != '\0')) {
    if (*(char *)(param_1 + 0x1209) == '\0') {
      if (*(char *)(param_1 + 0x120b) == '\0') {
        return 1;
      }
    }
    else {
      if (*(int *)(param_1 + 0xf60) != 2) {
        return 1;
      }
      if (*(char *)(param_1 + 0x120b) == '\0') {
        return 0;
      }
    }
    if (((*(int *)(param_1 + 0xf60) != 2) && (*(longlong *)(param_1 + 0x10) != 0)) &&
       (1 < *(int *)(*(longlong *)(param_1 + 0x10) + 8))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141ae2720 FUN_141ae2720 body=123 status=ok
// SIG undefined FUN_141ae2720(void)

void FUN_141ae2720(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(int *)(param_1 + 0x2e0) == 0) {
    lVar1 = 0;
    lVar2 = 3;
    do {
      local_18 = *param_2;
      local_10 = *(undefined4 *)(param_2 + 1);
      FUN_141ae2840(*(longlong *)(param_1 + 8) + 0x238 + lVar1,&local_18);
      lVar1 = lVar1 + 0x98;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 141ae27a0 FUN_141ae27a0 body=147 status=ok
// SIG undefined FUN_141ae27a0(void)

void FUN_141ae27a0(longlong param_1,undefined8 *param_2)

{
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(int *)(param_1 + 0x2e0) == 3) {
    local_18 = *param_2;
    local_10 = *(undefined4 *)(param_2 + 1);
    FUN_141ae2dd0(*(longlong *)(param_1 + 8) + 0x70,&local_18);
    local_18 = *param_2;
    local_10 = *(undefined4 *)(param_2 + 1);
    FUN_141ae2840(*(longlong *)(param_1 + 8) + 0x108,&local_18);
    local_18 = *param_2;
    local_10 = *(undefined4 *)(param_2 + 1);
    FUN_141ae2840(*(longlong *)(param_1 + 8) + 0x1a0,&local_18);
  }
  return;
}



// FUNCTION 141ae2840 FUN_141ae2840 body=1409 status=ok
// SIG undefined FUN_141ae2840(void)

void FUN_141ae2840(longlong param_1,undefined8 *param_2)

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
      if (bVar8) goto LAB_141ae2912;
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
LAB_141ae2912:
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
      lVar13 = (longlong)iStack_dc * 0xf0;
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
      puVar2 = (undefined4 *)(lVar13 + 0xc4 + lVar10);
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



// FUNCTION 141ae2dd0 FUN_141ae2dd0 body=1409 status=ok
// SIG undefined FUN_141ae2dd0(void)

void FUN_141ae2dd0(longlong param_1,undefined8 *param_2)

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
      if (bVar8) goto LAB_141ae2ea2;
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
LAB_141ae2ea2:
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
      lVar13 = (longlong)iStack_dc * 200;
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
      puVar2 = (undefined4 *)(lVar13 + 0x9c + lVar10);
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



// FUNCTION 141ae3360 FUN_141ae3360 body=355 status=ok
// SIG undefined FUN_141ae3360(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141ae3360(longlong param_1,uint param_2,longlong *param_3,longlong param_4,byte param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_98 [32];
  longlong local_78 [10];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  iVar6 = 0;
  if (param_2 != 0) {
    plVar8 = local_78;
    uVar5 = (ulonglong)param_2;
    do {
      if (*param_3 != 0) {
        iVar6 = iVar6 + 1;
        *plVar8 = *param_3;
        plVar8 = plVar8 + 1;
      }
      param_3 = param_3 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if ((param_4 != 0) && ((param_5 & 0xf) == 2)) {
    lVar2 = (longlong)iVar6;
    iVar6 = iVar6 + 1;
    local_78[lVar2] = param_4;
  }
  iVar1 = iVar6 * 8;
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar5 = (longlong)iVar1 + (longlong)puVar7;
  if (*(ulonglong *)(param_1 + 0x38) < uVar5) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,iVar1 + 8);
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar5 = (longlong)iVar1 + (longlong)puVar7;
  }
  *(ulonglong *)(param_1 + 0x30) = uVar5;
  lVar2 = (longlong)iVar6;
  if (0 < iVar6) {
    puVar3 = puVar7;
    do {
      *puVar3 = *(undefined8 *)(((longlong)local_78 - (longlong)puVar7) + (longlong)puVar3);
      puVar3 = puVar3 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar4 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar3;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar4;
  *(undefined8 **)(param_1 + 8) = puVar4 + 1;
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_143f59470;
  *(int *)(puVar4 + 2) = iVar6;
  puVar4[3] = puVar7;
  *(undefined4 *)(puVar4 + 4) = 1;
  *(undefined1 *)((longlong)puVar4 + 0x24) = 0;
  return;
}



// FUNCTION 141ae34d0 FUN_141ae34d0 body=329 status=ok
// SIG undefined FUN_141ae34d0(void)

void FUN_141ae34d0(longlong param_1,longlong param_2,longlong param_3,byte param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  bool bVar7;
  longlong local_18 [2];
  
  if (param_2 != 0) {
    local_18[0] = param_2;
  }
  bVar7 = param_2 != 0;
  uVar6 = (uint)bVar7;
  if ((param_3 != 0) && ((param_4 & 0xf) == 2)) {
    uVar6 = bVar7 + 1;
    local_18[bVar7] = param_3;
  }
  uVar3 = uVar6 * 8;
  puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar4 = (ulonglong)uVar3 + (longlong)puVar5;
  if (*(ulonglong *)(param_1 + 0x38) < uVar4) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,uVar3 + 8);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar4 = (ulonglong)uVar3 + (longlong)puVar5;
  }
  *(ulonglong *)(param_1 + 0x30) = uVar4;
  uVar4 = (ulonglong)uVar6;
  if (uVar6 != 0) {
    puVar1 = puVar5;
    do {
      *puVar1 = *(undefined8 *)(((longlong)local_18 - (longlong)puVar5) + (longlong)puVar1);
      puVar1 = puVar1 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar1 = puVar2 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar1) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar1 = puVar2 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar1;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar2;
  *(undefined8 **)(param_1 + 8) = puVar2 + 1;
  puVar2[1] = 0;
  *(uint *)(puVar2 + 2) = uVar6;
  puVar2[3] = puVar5;
  *puVar2 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar2 + 4) = 1;
  *(undefined1 *)((longlong)puVar2 + 0x24) = 0;
  return;
}



// FUNCTION 141ae3620 UnsetParameters body=435 status=ok
// SIG undefined UnsetParameters(void)

void TCapsuleShadowingBaseCS<2>::UnsetParameters
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 local_28 [2];
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FRWShaderParameter::UnsetUAV<FRHICommandList>
            (param_1 + 0xc0,param_2,*(undefined8 *)(lVar2 + 0x60));
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FRWShaderParameter::UnsetUAV<FRHICommandList>
            (param_1 + 0xd6,param_2,*(undefined8 *)(lVar2 + 0x60));
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FRWShaderParameter::UnsetUAV<FRHICommandList>(param_1 + 200,param_2,*(undefined8 *)(lVar2 + 0x60))
  ;
  local_28[0] = *(undefined8 *)(param_3 + 0x10);
  if (param_4 != 0) {
    local_28[1] = *(undefined8 *)(param_4 + 8);
  }
  uVar7 = (param_4 != 0) + 1;
  puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar1 = uVar7 * 8;
  uVar5 = (ulonglong)uVar1 + (longlong)puVar6;
  if (*(ulonglong *)(param_2 + 0x38) < uVar5) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar1 + 8);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar5 = (ulonglong)uVar1 + (longlong)puVar6;
  }
  *(ulonglong *)(param_2 + 0x30) = uVar5;
  uVar5 = (ulonglong)uVar7;
  puVar3 = puVar6;
  do {
    *puVar3 = *(undefined8 *)(((longlong)local_28 - (longlong)puVar6) + (longlong)puVar3);
    puVar3 = puVar3 + 1;
    uVar5 = uVar5 - 1;
  } while (uVar5 != 0);
  puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar4 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
    puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar3;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar4;
  *(undefined8 **)(param_2 + 8) = puVar4 + 1;
  puVar4[1] = 0;
  puVar4[3] = puVar6;
  *puVar4 = &PTR_LAB_144d91e60;
  *(uint *)(puVar4 + 2) = uVar7;
  *(undefined4 *)(puVar4 + 4) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x24) = 3;
  puVar4[5] = 0;
  return;
}



// FUNCTION 141ae37e0 FUN_141ae37e0 body=89 status=ok
// SIG undefined FUN_141ae37e0(void)

bool FUN_141ae37e0(void)

{
  int *piVar1;
  char cVar2;
  DWORD DVar3;
  
  piVar1 = DAT_1469fd5c8;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return piVar1[1] == 1;
    }
  }
  return *piVar1 == 1;
}



// FUNCTION 141ae3840 ValidateCompiledResult body=182 status=ok
// SIG undefined ValidateCompiledResult(void)

undefined8
TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicyShaderParametersType>::
ValidateCompiledResult(void)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 in_R9;
  longlong *in_stack_00000028;
  undefined8 local_18;
  undefined8 local_10;
  
  cVar3 = FShaderParameterMap::ContainsParameterAllocation(in_R9,DAT_146a632c0);
  if (cVar3 != '\0') {
    local_18 = 0;
    local_10 = 0x3c;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    uVar2 = local_18;
    FGenericPlatformString::Memcpy
              (local_18,L"Base pass shaders cannot read from the SceneTexturesStruct.",0x78);
    iVar1 = (int)in_stack_00000028[1];
    *(int *)(in_stack_00000028 + 1) = iVar1 + 1;
    if (*(int *)((longlong)in_stack_00000028 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(in_stack_00000028,iVar1);
    }
    puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *in_stack_00000028);
    *puVar4 = uVar2;
    *(undefined4 *)(puVar4 + 1) = (undefined4)local_10;
    *(undefined4 *)((longlong)puVar4 + 0xc) = local_10._4_4_;
    return 0;
  }
  return 1;
}



// FUNCTION 141ae3900 FUN_141ae3900 body=514 status=ok
// SIG undefined FUN_141ae3900(void)

longlong * FUN_141ae3900(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_141ae3f30(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"ResolvedSceneDepthTexture";
  puVar1[1] = L"Texture2D";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x640;
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
  *puVar1 = L"DBufferATexture";
  puVar1[1] = L"Texture2D";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x648;
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
  *puVar1 = L"DBufferATextureSampler";
  puVar1[1] = L"SamplerState";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x650;
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
  *puVar1 = L"DBufferBTexture";
  puVar1[1] = L"Texture2D";
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x900000658;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141ae3b10 FUN_141ae3b10 body=524 status=ok
// SIG undefined FUN_141ae3b10(void)

longlong * FUN_141ae3b10(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_141ae3900(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"DBufferBTextureSampler";
  puVar1[1] = L"SamplerState";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x660;
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
  *puVar1 = L"DBufferCTexture";
  puVar1[1] = L"Texture2D";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x668;
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
  *puVar1 = L"DBufferCTextureSampler";
  puVar1[1] = L"SamplerState";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x670;
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
  *puVar1 = L"DBufferDTexture";
  puVar1[1] = L"Texture2D";
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x900000678;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141ae3d20 FUN_141ae3d20 body=521 status=ok
// SIG undefined FUN_141ae3d20(void)

longlong * FUN_141ae3d20(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_141ae3b10(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"DBufferDTextureSampler";
  puVar1[1] = L"SamplerState";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x680;
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
  *puVar1 = L"DBufferArrayTexture";
  puVar1[1] = L"Texture2DArray";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x688;
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
  *puVar1 = L"DBufferArrayTextureSampler";
  puVar1[1] = L"SamplerState";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x690;
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
  *puVar1 = L"DBufferStencilTexture";
  puVar1[1] = L"Texture2D<uint>";
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x900000698;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141ae3f30 FUN_141ae3f30 body=620 status=ok
// SIG undefined FUN_141ae3f30(void)

longlong * FUN_141ae3f30(longlong *param_1)

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
  *puVar3 = L"Shared";
  puVar3[1] = L"FSharedBasePassUniformParameters";
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = 5;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 1;
  *(undefined4 *)(puVar3 + 4) = 1;
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
  *(undefined4 *)(puVar3 + 5) = 0x469fd8d0;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = 1;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"ForwardScreenSpaceShadowMaskTexture";
  puVar3[1] = L"Texture2D";
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x620;
  puVar1[1] = 9;
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
  *puVar3 = L"ForwardScreenSpaceShadowMaskTextureSampler";
  puVar3[1] = L"SamplerState";
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x628;
  puVar1[1] = 8;
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
  *puVar3 = L"IndirectOcclusionTexture";
  puVar3[1] = L"Texture2D";
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x630;
  puVar1[1] = 9;
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
  *puVar3 = L"IndirectOcclusionTextureSampler";
  puVar3[1] = L"SamplerState";
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar3 = 0x800000638;
  puVar3[1] = 0x100000000;
  puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar3 = 1;
  puVar3[1] = 0;
  return param_1;
}



// FUNCTION 141ae41a0 FUN_141ae41a0 body=642 status=ok
// SIG undefined FUN_141ae41a0(void)

longlong * FUN_141ae41a0(longlong *param_1)

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
  *puVar3 = L"Forward";
  puVar3[1] = L"FForwardLightData";
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = 5;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 1;
  *(undefined4 *)(puVar3 + 4) = 1;
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
  *(undefined4 *)(puVar3 + 5) = 0x46a1ea50;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = 1;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"ForwardISR";
  puVar3[1] = L"FForwardLightData";
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x280;
  puVar1[1] = 5;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[2] = 0x46a1ea50;
  puVar1[3] = 1;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"Reflection";
  puVar3[1] = L"FReflectionUniformParameters";
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x500;
  puVar1[1] = 5;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[2] = 0x46a81840;
  puVar1[3] = 1;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = &DAT_144dc72e0;
  puVar3[1] = L"FFogUniformParameters";
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x570;
  puVar1[1] = 5;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[2] = 0x46a177d0;
  puVar1[3] = 1;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"SSProfilesTexture";
  puVar3[1] = L"Texture2D";
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar3 = 0x900000610;
  puVar3[1] = 0x100000000;
  puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar3 = 1;
  puVar3[1] = 0;
  return param_1;
}



// FUNCTION 141ae4430 FUN_141ae4430 body=626 status=ok
// SIG undefined FUN_141ae4430(void)

longlong * FUN_141ae4430(longlong *param_1)

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
  *puVar3 = L"Shared";
  puVar3[1] = L"FSharedBasePassUniformParameters";
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = 5;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 1;
  *(undefined4 *)(puVar3 + 4) = 1;
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
  *(undefined4 *)(puVar3 + 5) = 0x469fd8d0;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = 1;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"SceneTextures";
  puVar3[1] = L"FSceneTexturesUniformParameters";
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x620;
  puVar1[1] = 5;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[2] = 0x46a632b0;
  puVar1[3] = 1;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"HZBUvFactorAndInvFactor";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x750;
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
  *puVar3 = L"PrevScreenPositionScaleBias";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x760;
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
  *puVar3 = L"PrevSceneColorPreExposureInv";
  puVar3[1] = &DAT_143f3eda8;
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar3 = 0x400000770;
  puVar3[1] = 0x100000000;
  puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar3 = 1;
  puVar3[1] = 0;
  return param_1;
}



// FUNCTION 141ae46b0 FUN_141ae46b0 body=524 status=ok
// SIG undefined FUN_141ae46b0(void)

longlong * FUN_141ae46b0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_141ae4430(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"HZBTexture";
  puVar1[1] = L"Texture2D";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x778;
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
  *puVar1 = L"HZBSampler";
  puVar1[1] = L"SamplerState";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x780;
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
  *puVar1 = L"PrevSceneColor";
  puVar1[1] = L"Texture2D";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x788;
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
  *puVar1 = L"PrevSceneColorSampler";
  puVar1[1] = L"SamplerState";
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x800000790;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141ae48c0 FUN_141ae48c0 body=524 status=ok
// SIG undefined FUN_141ae48c0(void)

longlong * FUN_141ae48c0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_141ae46b0(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"TranslucencyLightingVolumeAmbientInner";
  puVar1[1] = L"Texture3D";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x798;
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
  *puVar1 = L"TranslucencyLightingVolumeAmbientInnerSampler";
  puVar1[1] = L"SamplerState";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x7a0;
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
  *puVar1 = L"TranslucencyLightingVolumeAmbientOuter";
  puVar1[1] = L"Texture3D";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x7a8;
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
  *puVar1 = L"TranslucencyLightingVolumeAmbientOuterSampler";
  puVar1[1] = L"SamplerState";
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x8000007b0;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141ae4ad0 FUN_141ae4ad0 body=524 status=ok
// SIG undefined FUN_141ae4ad0(void)

longlong * FUN_141ae4ad0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_141ae48c0(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"TranslucencyLightingVolumeDirectionalInner";
  puVar1[1] = L"Texture3D";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x7b8;
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
  *puVar1 = L"TranslucencyLightingVolumeDirectionalInnerSampler";
  puVar1[1] = L"SamplerState";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x7c0;
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
  *puVar1 = L"TranslucencyLightingVolumeDirectionalOuter";
  puVar1[1] = L"Texture3D";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x7c8;
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
  *puVar1 = L"TranslucencyLightingVolumeDirectionalOuterSampler";
  puVar1[1] = L"SamplerState";
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x8000007d0;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141ae4ce0 Serialize body=187 status=ok
// SIG undefined Serialize(void)

undefined1 FPostProcessLpvIndirectPS::Serialize(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  ::operator<<(param_2,param_1 + 0xc0);
  lVar1 = param_1 + 0x1bc;
  lVar2 = 7;
  do {
    FUN_1419e0b60(param_2,lVar1);
    lVar1 = lVar1 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_1419e0b60(param_2,param_1 + 0x1d8);
  FUN_141ad3f10(param_1 + 0x1e0,param_2);
  FUN_141ad3f10(param_1 + 0x1e8,param_2);
  FUN_1419e0b60(param_2,param_1 + 0x1f0);
  FUN_1419e0b60(param_2,param_1 + 500);
  FUN_1419e0b60(param_2,param_1 + 0x1dc);
  return 0;
}



// FUNCTION 141ae4da0 `scalar_deleting_destructor' body=52 status=ok
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



// FUNCTION 141ae4de0 `scalar_deleting_destructor' body=70 status=ok
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
  *(undefined ***)this = &PTR__scalar_deleting_destructor__144dd4538;
  FRenderResource::ReleaseResource();
  FUN_141afbc90(this);
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0x100);
  }
  return this;
}



// FUNCTION 141ae4e40 Serialize body=29 status=ok
// SIG undefined Serialize(void)

ulonglong FPostProcessPassThroughPS::Serialize(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = ::operator<<(param_2,param_1 + 0xc0);
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 141ae4e60 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessPassThroughPS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1c0);
  }
  return param_1;
}



// FUNCTION 141ae4ea0 Serialize body=114 status=ok
// SIG undefined Serialize(void)

undefined1 FPostProcessLpvDirectionalOcclusionPS::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_1419e0b60(param_2,param_1 + 0x1bc);
  FUN_141ad3f10(param_1 + 0x1c4,param_2);
  FUN_141ad3f10(param_1 + 0x1cc,param_2);
  FUN_1419e0b60(param_2,param_1 + 0x1c0);
  ::operator<<(param_2,param_1 + 0xc0);
  return 0;
}



// FUNCTION 141ae4f20 Serialize body=53 status=ok
// SIG undefined Serialize(void)

undefined1 FMobileCopySceneAlphaPS::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_141ad3f10(param_1 + 0xc0);
  FUN_141ad3f10(param_1 + 200,param_2);
  return 0;
}



// FUNCTION 141ae4f60 Serialize body=141 status=ok
// SIG undefined Serialize(void)

undefined1 FComputeDistanceFieldNormalPS::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_141ad3f10(param_1 + 0xc0);
  FUN_141ad3f10(param_1 + 200,param_2);
  FUN_1419e0a40(param_2,param_1 + 0xd0);
  FUN_1419e0a40(param_2,param_1 + 0xd6);
  FUN_1419e0a40(param_2,param_1 + 0xdc);
  FUN_1419e0a40(param_2,param_1 + 0xe2);
  FUN_1419e0a40(param_2,param_1 + 0xe8);
  return 0;
}



// FUNCTION 141ae4ff0 Serialize body=174 status=ok
// SIG undefined Serialize(void)

undefined1 FComputeDistanceFieldNormalCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0b60(uVar1,param_1 + 0xc4);
  FUN_141ad3f10(param_1 + 200,param_2);
  FUN_141ad3f10(param_1 + 0xd0,param_2);
  FUN_1419e0a40(param_2,param_1 + 0xd8);
  FUN_1419e0a40(param_2,param_1 + 0xde);
  FUN_1419e0a40(param_2,param_1 + 0xe4);
  FUN_1419e0a40(param_2,param_1 + 0xea);
  FUN_1419e0a40(param_2,param_1 + 0xf0);
  return 0;
}



// FUNCTION 141ae50a0 FUN_141ae50a0 body=121 status=ok
// SIG undefined FUN_141ae50a0(void)

undefined1 FUN_141ae50a0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_141ad3f10(param_1 + 0xc0);
  FUN_141ad3f10(param_1 + 200,param_2);
  uVar1 = FUN_1419e0a40(param_2,param_1 + 0xd0);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xd6);
  FUN_1419e0b60(uVar1,param_1 + 0xda);
  return 0;
}



// FUNCTION 141ae5120 FUN_141ae5120 body=132 status=ok
// SIG undefined FUN_141ae5120(void)

undefined1 FUN_141ae5120(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_141ae50a0();
  uVar2 = FUN_1419e0a40(param_2,param_1 + 0xe0);
  uVar2 = FUN_1419e0a40(uVar2,param_1 + 0xe6);
  uVar2 = FUN_1419e0a40(uVar2,param_1 + 0xec);
  FUN_1419e0a40(uVar2,param_1 + 0xe6);
  return uVar1;
}



// FUNCTION 141ae51c0 FUN_141ae51c0 body=206 status=ok
// SIG undefined FUN_141ae51c0(void)

undefined1 FUN_141ae51c0(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_141d7c120();
  uVar2 = FUN_1419e0b60(param_2,param_1 + 0x110);
  uVar2 = FUN_1419e0b60(uVar2,param_1 + 0x114);
  uVar2 = FUN_1419e0b60(uVar2,param_1 + 0x118);
  uVar2 = FUN_1419e0b60(uVar2,param_1 + 0x11c);
  uVar2 = FUN_1419e0b60(uVar2,param_1 + 0x120);
  FUN_1419e0b60(uVar2,param_1 + 0x124);
  FUN_1419e0a40(param_2,param_1 + 0x128);
  FUN_1419e0a40(param_2,param_1 + 0x12e);
  FUN_1419e0a40(param_2,param_1 + 0x134);
  return uVar1;
}



// FUNCTION 141ae5290 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UPhysicsSettings::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  FShader::~FShader(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 141ae52f0 FUN_141ae52f0 body=78 status=ok
// SIG undefined FUN_141ae52f0(void)

undefined1 FUN_141ae52f0(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_141d7c390();
  FUN_1419e0a40(param_2,param_1 + 0x150);
  FUN_1419e0a40(param_2,param_1 + 0x156);
  return uVar1;
}



// FUNCTION 141ae5340 FUN_141ae5340 body=95 status=ok
// SIG undefined FUN_141ae5340(void)

longlong FUN_141ae5340(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x118);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  FShader::~FShader(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x160);
  }
  return param_1;
}



// FUNCTION 141ae53b0 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FMissingShaderPS::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0xc0) = &PTR_FUN_143fca6f8;
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 141ae5400 Serialize body=129 status=ok
// SIG undefined Serialize(void)

undefined1 FDownsampleSceneDepthPS::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 0xc0);
  FUN_1419e0a40(param_2,param_1 + 0xc6);
  FUN_1419e0a40(param_2,param_1 + 0xcc);
  FUN_141ad3f10(param_1 + 0xd4,param_2);
  FUN_141ad3f10(param_1 + 0xdc,param_2);
  FUN_1419e0a40(param_2,param_1 + 0xe4);
  return 0;
}



// FUNCTION 141ae54a0 FUN_141ae54a0 body=124 status=ok
// SIG undefined FUN_141ae54a0(void)

undefined1 FUN_141ae54a0(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined4 local_res8;
  undefined2 local_resc;
  
  uVar1 = FUN_141d7c390();
  FUN_1419e0a40(param_2,param_1 + 0x150);
  FUN_1419e0a40(param_2,param_1 + 0x156);
  FUN_1419e0a40(param_2,param_1 + 0x15c);
  if (*(int *)(param_2 + 0x44) == 2) {
    local_res8 = 0;
    local_resc = 0;
    FUN_1419e0a40(param_2,&local_res8);
  }
  return uVar1;
}



// FUNCTION 141ae5520 FUN_141ae5520 body=95 status=ok
// SIG undefined FUN_141ae5520(void)

longlong FUN_141ae5520(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x118);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  FShader::~FShader(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x168);
  }
  return param_1;
}



// FUNCTION 141ae5580 FUN_141ae5580 body=202 status=ok
// SIG undefined FUN_141ae5580(void)

undefined1 FUN_141ae5580(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_141d7c120();
  uVar2 = FUN_1419e0a40(param_2,param_1 + 0x110);
  uVar2 = FUN_1419e0a40(uVar2,param_1 + 0x116);
  uVar2 = FUN_1419e0a40(uVar2,param_1 + 0x11c);
  uVar2 = FUN_1419e0a40(uVar2,param_1 + 0x122);
  uVar2 = FUN_1419e0a40(uVar2,param_1 + 0x128);
  uVar2 = FUN_1419e0a40(uVar2,param_1 + 0x12e);
  FUN_1419e0b60(uVar2,param_1 + 0x134);
  FUN_1419e0b60(param_2,param_1 + 0x138);
  return uVar1;
}



// FUNCTION 141ae5660 FUN_141ae5660 body=133 status=ok
// SIG undefined FUN_141ae5660(void)

ulonglong FUN_141ae5660(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xcc);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xc4);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xd0);
  uVar2 = FUN_1419e0b60(uVar1,param_1 + 200);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141ae5700 FUN_141ae5700 body=63 status=ok
// SIG undefined FUN_141ae5700(void)

undefined1 FUN_141ae5700(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_141d7c390();
  FUN_1419e0a40(param_2,param_1 + 0x150);
  return uVar1;
}



// FUNCTION 141ae5740 FUN_141ae5740 body=95 status=ok
// SIG undefined FUN_141ae5740(void)

longlong FUN_141ae5740(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x118);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  FShader::~FShader(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x158);
  }
  return param_1;
}



// FUNCTION 141ae57a0 FUN_141ae57a0 body=244 status=ok
// SIG undefined FUN_141ae57a0(void)

void FUN_141ae57a0(longlong param_1)

{
  if (0 < *(int *)(param_1 + 0x30)) {
    FUN_141ac25e0(param_1 + 0x38,4,*(int *)(param_1 + 0x30) * 9,0xd,1,0,0);
    FUN_141ac25e0(param_1 + 0x60,4,*(int *)(param_1 + 0x30) * 0x5a,0xd,1,0,0);
    FUN_141ac25e0(param_1 + 0x88,0x10,*(int *)(param_1 + 0x30) * 10,1,1,0,0);
    FUN_141ac25e0(param_1 + 0xb0,8,*(undefined4 *)(param_1 + 0x30),10,1,0,0);
    FUN_141ac25e0(param_1 + 0xd8,8,*(undefined4 *)(param_1 + 0x30),10,1,0,0);
  }
  return;
}



// FUNCTION 141ae58a0 FUN_141ae58a0 body=68 status=ok
// SIG undefined FUN_141ae58a0(void)

void FUN_141ae58a0(longlong param_1)

{
  FUN_141ace450(param_1 + 0x38);
  FUN_141ace450(param_1 + 0x60);
  FUN_141ace450(param_1 + 0x88);
  FUN_141ace450(param_1 + 0xb0);
  FUN_141ace450(param_1 + 0xd8);
  return;
}



// FUNCTION 141ae58f0 FUN_141ae58f0 body=405 status=ok
// SIG undefined FUN_141ae58f0(void)

void FUN_141ae58f0(longlong *param_1,float param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  float fVar4;
  
  lVar1 = *param_1;
  fVar4 = (param_2 + param_2) - 0.5;
  if (DAT_1464c17cc == 0) {
    iVar3 = (int)ROUND(fVar4) >> 1;
    if (((*(int *)(lVar1 + 0x1a10) == 2) && (DAT_1464c17c4 != 0)) && (param_4 != 0)) {
      lVar2 = param_1[8];
      if (iVar3 == 1) {
        FUN_141ae8c20(lVar2,lVar1);
        return;
      }
      if (iVar3 != 2) {
        if (iVar3 == 3) {
          FUN_141aec820(lVar2,lVar1);
          return;
        }
        if (iVar3 == 4) {
          FUN_141aee620(lVar2,lVar1);
          return;
        }
        if (iVar3 == 5) {
          FUN_141af0420();
          return;
        }
      }
      FUN_141aeaa20(lVar2,lVar1);
      return;
    }
    lVar2 = param_1[8];
    if (iVar3 == 1) {
      FUN_141ae9b20(lVar2,lVar1);
      return;
    }
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        FUN_141aed720(lVar2,lVar1);
        return;
      }
      if (iVar3 == 4) {
        FUN_141aef520(lVar2,lVar1);
        return;
      }
      if (iVar3 == 5) {
        FUN_141af1320(lVar2,lVar1);
        return;
      }
      FUN_141aeb920(lVar2,lVar1,param_3,0);
      return;
    }
    FUN_141aeb920(lVar2,lVar1);
    return;
  }
  iVar3 = (int)ROUND(fVar4) >> 1;
  if (((*(int *)(lVar1 + 0x1a10) == 2) && (DAT_1464c17c4 != 0)) && (param_4 != 0)) {
    lVar2 = param_1[8];
    if (iVar3 == 1) {
      FUN_141ae84a0(lVar2,lVar1,param_3);
      return;
    }
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        FUN_141aec0a0(lVar2,lVar1,param_3);
        return;
      }
      if (iVar3 == 4) {
        FUN_141aedea0(lVar2,lVar1,param_3);
        return;
      }
      if (iVar3 == 5) {
        FUN_141aefca0();
        return;
      }
    }
    FUN_141aea2a0(lVar2,lVar1,param_3);
    return;
  }
  lVar2 = param_1[8];
  if (iVar3 == 1) {
    FUN_141ae93a0(lVar2,lVar1,param_3);
    return;
  }
  if (iVar3 != 2) {
    if (iVar3 == 3) {
      FUN_141aecfa0(lVar2,lVar1,param_3);
      return;
    }
    if (iVar3 == 4) {
      FUN_141aeeda0(lVar2,lVar1,param_3);
      return;
    }
    if (iVar3 == 5) {
      FUN_141af0ba0(lVar2,lVar1,param_3);
      return;
    }
    FUN_141aeb1a0(lVar2,lVar1,param_3,0);
    return;
  }
  FUN_141aeb1a0(lVar2,lVar1,param_3);
  return;
}



// FUNCTION 141ae5a90 FUN_141ae5a90 body=394 status=ok
// SIG undefined FUN_141ae5a90(void)

void FUN_141ae5a90(longlong *param_1,float param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  float fVar4;
  
  lVar1 = *param_1;
  fVar4 = (param_2 + param_2) - 0.5;
  if (DAT_1464c17cc == 0) {
    iVar3 = (int)ROUND(fVar4) >> 1;
    if (((*(int *)(lVar1 + 0x1a10) != 2) || (DAT_1464c17c4 == 0)) || (param_4 == 0)) {
      lVar2 = param_1[8];
      if (iVar3 == 1) goto LAB_141ae5b83;
      if (iVar3 == 2) goto LAB_141ae5b78;
      if (iVar3 == 3) goto LAB_141ae5b6d;
      if (iVar3 == 4) goto LAB_141ae5b62;
      if (iVar3 != 5) {
        FUN_141af3210(lVar2,lVar1,param_3,0);
        return;
      }
      goto LAB_141ae5c15;
    }
    lVar2 = param_1[8];
    if (iVar3 == 1) goto LAB_141ae5b23;
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        FUN_141af39e0(lVar2,lVar1);
        return;
      }
      if (iVar3 == 4) {
        FUN_141af4980(lVar2,lVar1);
        return;
      }
      if (iVar3 != 5) {
        FUN_141af2a40(lVar2,lVar1);
        return;
      }
LAB_141ae5b00:
      FUN_141af5920();
      return;
    }
  }
  else {
    iVar3 = (int)ROUND(fVar4) >> 1;
    if (((*(int *)(lVar1 + 0x1a10) != 2) || (DAT_1464c17c4 == 0)) || (param_4 == 0)) {
      lVar2 = param_1[8];
      if (iVar3 == 1) {
LAB_141ae5b83:
        FUN_141af2270(lVar2,lVar1,param_3);
        return;
      }
      if (iVar3 == 2) {
LAB_141ae5b78:
        FUN_141af3210(fVar4,lVar1,param_3);
        return;
      }
      if (iVar3 == 3) {
LAB_141ae5b6d:
        FUN_141af41b0(fVar4,lVar1,param_3);
        return;
      }
      if (iVar3 == 4) {
LAB_141ae5b62:
        FUN_141af5150(fVar4,lVar1,param_3);
        return;
      }
      if (iVar3 != 5) {
        FUN_141af3210(lVar2,lVar1,param_3,0);
        return;
      }
LAB_141ae5c15:
      FUN_141af60f0(fVar4,lVar1,param_3);
      return;
    }
    lVar2 = param_1[8];
    if (iVar3 == 1) {
LAB_141ae5b23:
      FUN_141af1aa0(lVar2,lVar1,param_3);
      return;
    }
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        FUN_141af39e0(lVar2,lVar1,param_3);
        return;
      }
      if (iVar3 == 4) {
        FUN_141af4980(lVar2,lVar1,param_3);
        return;
      }
      if (iVar3 == 5) goto LAB_141ae5b00;
    }
  }
  FUN_141af2a40(fVar4,lVar1,param_3);
  return;
}



// FUNCTION 141ae5c20 FUN_141ae5c20 body=503 status=ok
// SIG undefined FUN_141ae5c20(void)

void FUN_141ae5c20(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong *param_8,
                  undefined8 param_9)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  FRHIComputeShader::UpdateStats(uVar3);
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar8 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 3;
  }
  plVar4 = param_8;
  *(undefined8 **)(param_2 + 0x30) = puVar7;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar8;
  *(undefined8 **)(param_2 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_144d91e50;
  puVar8[2] = uVar3;
  param_8 = (longlong *)*param_8;
  if (param_8 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)param_8 + 8) = *(int *)((longlong)param_8 + 8) + 1;
    UNLOCK();
  }
  FUN_141af6d30(param_1,param_2,param_3,param_4,param_5,param_6,param_7,&param_8,param_9);
  auVar1 = *(undefined1 (*) [16])(param_3 + 0x1aa0);
  iVar5 = (auVar1._8_4_ - auVar1._0_4_) + 7;
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  iVar6 = (auVar1._12_4_ - auVar1._4_4_) + 7;
  puVar7 = puVar8 + 4;
  if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x28);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 4;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar7;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar8;
  *(undefined8 **)(param_2 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_144d8df50;
  *(int *)(puVar8 + 2) = (int)((iVar5 >> 0x1f & 7U) + iVar5) >> 3;
  *(int *)((longlong)puVar8 + 0x14) = (int)((iVar6 >> 0x1f & 7U) + iVar6) >> 3;
  *(undefined4 *)(puVar8 + 3) = 1;
  FUN_141af9c20(param_1,param_2);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(plVar4);
  return;
}



// FUNCTION 141ae5e20 FUN_141ae5e20 body=738 status=ok
// SIG undefined FUN_141ae5e20(void)

void FUN_141ae5e20(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong *param_8)

{
  undefined1 auVar1 [16];
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong local_res8;
  
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  FRHIComputeShader::UpdateStats(uVar4);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar10 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 3;
  }
  plVar6 = param_8;
  *(undefined8 **)(param_2 + 0x30) = puVar9;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144d91e50;
  puVar10[2] = uVar4;
  lVar3 = *param_8;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  lVar5 = *(longlong *)(param_1 + 0x48);
  local_res8 = lVar3;
  if (*(char *)(lVar5 + 0x28) == '\0') {
    FUN_1419f3850(lVar5);
  }
  uVar4 = *(undefined8 *)(lVar5 + 0x60);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_8 = (longlong *)lVar3;
  FUN_141af75e0(param_1,param_2,param_3,param_4,uVar4,param_7,&param_8);
  uVar2 = *(ushort *)(param_1 + 0xe2);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar10 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar9;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144d91e40;
  puVar10[4] = param_5;
  puVar10[2] = uVar4;
  *(uint *)(puVar10 + 3) = (uint)uVar2;
  uVar2 = *(ushort *)(param_1 + 0xe8);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar10 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar9;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144d91e40;
  puVar10[4] = param_6;
  puVar10[2] = uVar4;
  *(uint *)(puVar10 + 3) = (uint)uVar2;
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  auVar1 = *(undefined1 (*) [16])(param_3 + 0x1aa0);
  iVar7 = (auVar1._8_4_ - auVar1._0_4_) + 7;
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  iVar8 = (auVar1._12_4_ - auVar1._4_4_) + 7;
  puVar9 = puVar10 + 4;
  if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x28);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 4;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar9;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_144d8df50;
  *(int *)(puVar10 + 2) = (int)((iVar7 >> 0x1f & 7U) + iVar7) >> 3;
  *(int *)((longlong)puVar10 + 0x14) = (int)((iVar8 >> 0x1f & 7U) + iVar8) >> 3;
  *(undefined4 *)(puVar10 + 3) = 1;
  FUN_141af9c20(param_1,param_2);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(plVar6);
  return;
}



// FUNCTION 141ae6110 FUN_141ae6110 body=601 status=ok
// SIG undefined FUN_141ae6110(void)

uint FUN_141ae6110(undefined8 param_1,longlong param_2,longlong param_3,undefined2 param_4,
                  longlong param_5,longlong param_6,ulonglong param_7,longlong param_8,char *param_9
                  )

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  uint uVar11;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [48];
  
  iVar2 = *(int *)(param_5 + 0x28);
  lVar1 = param_8 + 0x20;
  lVar4 = *(longlong *)(param_5 + 8);
  FUN_141afd470(param_5,param_3,*(undefined8 *)(param_6 + 8),*(undefined1 *)(param_3 + 0x3099),
                *(char *)(param_8 + 0x54) == '\0',*(undefined1 *)(param_8 + 0x55));
  if (lVar4 == *(longlong *)(param_5 + 8)) {
    cVar5 = *param_9;
  }
  else {
    *param_9 = '\0';
    cVar5 = '\0';
  }
  iVar3 = *(int *)(param_5 + 0x28);
  uVar8 = 0;
  uVar9 = uVar8;
  if (cVar5 == '\0') {
    if (*(longlong *)(param_8 + 0x98) == 0) {
      puVar6 = (undefined8 *)FUN_141b08340(lVar1,local_58,*(undefined4 *)(param_3 + 0x1a38));
      local_88 = *puVar6;
      uStack_80 = puVar6[1];
      local_78 = *(undefined4 *)(puVar6 + 2);
      uStack_74 = *(undefined4 *)((longlong)puVar6 + 0x14);
      uStack_70 = *(undefined4 *)(puVar6 + 3);
      uStack_6c = *(undefined4 *)((longlong)puVar6 + 0x1c);
      local_68 = *(undefined4 *)(puVar6 + 4);
      uStack_64 = *(undefined4 *)((longlong)puVar6 + 0x24);
      uStack_60 = *(undefined4 *)(puVar6 + 5);
      uStack_5c = *(undefined4 *)((longlong)puVar6 + 0x2c);
    }
    else {
      local_88 = *(undefined8 *)(param_8 + 0x90);
      uStack_80 = *(undefined8 *)(param_8 + 0x98);
      local_78 = *(undefined4 *)(param_8 + 0xa0);
      uStack_74 = *(undefined4 *)(param_8 + 0xa4);
      uStack_70 = *(undefined4 *)(param_8 + 0xa8);
      uStack_6c = *(undefined4 *)(param_8 + 0xac);
      local_68 = *(undefined4 *)(param_8 + 0xb0);
      uStack_64 = *(undefined4 *)(param_8 + 0xb4);
      uStack_60 = *(undefined4 *)(param_8 + 0xb8);
      uStack_5c = *(undefined4 *)(param_8 + 0xbc);
    }
    FUN_141a9adc0(param_2,lVar1,param_5,&local_88);
    FUN_141b18390(lVar1,param_2,param_5,param_3,param_4,0);
    *param_9 = '\x01';
  }
  else if (iVar2 != iVar3) {
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f489c0;
    *(int *)(puVar7 + 2) = iVar3;
  }
  do {
    if ((param_7 & 1) != 0) {
      uVar9 = uVar9 + 1;
      uVar11 = uVar8;
      FUN_141b15a40(lVar1,param_2,param_3,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(param_6 + 8) + 0xc0) + 8),
                    *(longlong *)(param_6 + 8),uVar8,param_5,param_6,param_4);
      FUN_141b315b0(lVar1,param_2,param_3,*(undefined8 *)(param_6 + 8),uVar8,uVar11 & 0xffffff00);
    }
    uVar8 = uVar8 + 1;
    bVar10 = 1 < param_7;
    param_7 = param_7 >> 1;
  } while (bVar10);
  return uVar9;
}



// FUNCTION 141ae6370 FUN_141ae6370 body=592 status=ok
// SIG undefined FUN_141ae6370(void)

uint FUN_141ae6370(undefined8 param_1,longlong param_2,longlong param_3,undefined2 param_4,
                  longlong param_5,longlong param_6,ulonglong param_7,longlong param_8,char *param_9
                  )

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  uint uVar11;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [48];
  
  iVar2 = *(int *)(param_5 + 0x28);
  lVar1 = param_8 + 0x20;
  lVar4 = *(longlong *)(param_5 + 8);
  FUN_141afd470(param_5,param_3,*(undefined8 *)(param_6 + 8),*(undefined1 *)(param_3 + 0x3099),
                *(char *)(param_8 + 0x54) == '\0',*(undefined1 *)(param_8 + 0x55));
  if (lVar4 == *(longlong *)(param_5 + 8)) {
    cVar5 = *param_9;
  }
  else {
    *param_9 = '\0';
    cVar5 = '\0';
  }
  iVar3 = *(int *)(param_5 + 0x28);
  uVar8 = 0;
  uVar9 = uVar8;
  if (cVar5 == '\0') {
    if (*(longlong *)(param_8 + 0x70) == 0) {
      puVar6 = (undefined8 *)FUN_141b08470(lVar1,local_58,*(undefined4 *)(param_3 + 0x1a38));
      local_88 = *puVar6;
      uStack_80 = puVar6[1];
      local_78 = *(undefined4 *)(puVar6 + 2);
      uStack_74 = *(undefined4 *)((longlong)puVar6 + 0x14);
      uStack_70 = *(undefined4 *)(puVar6 + 3);
      uStack_6c = *(undefined4 *)((longlong)puVar6 + 0x1c);
      local_68 = *(undefined4 *)(puVar6 + 4);
      uStack_64 = *(undefined4 *)((longlong)puVar6 + 0x24);
      uStack_60 = *(undefined4 *)(puVar6 + 5);
      uStack_5c = *(undefined4 *)((longlong)puVar6 + 0x2c);
    }
    else {
      local_88 = *(undefined8 *)(param_8 + 0x68);
      uStack_80 = *(undefined8 *)(param_8 + 0x70);
      local_78 = *(undefined4 *)(param_8 + 0x78);
      uStack_74 = *(undefined4 *)(param_8 + 0x7c);
      uStack_70 = *(undefined4 *)(param_8 + 0x80);
      uStack_6c = *(undefined4 *)(param_8 + 0x84);
      local_68 = *(undefined4 *)(param_8 + 0x88);
      uStack_64 = *(undefined4 *)(param_8 + 0x8c);
      uStack_60 = *(undefined4 *)(param_8 + 0x90);
      uStack_5c = *(undefined4 *)(param_8 + 0x94);
    }
    FUN_141a9adc0(param_2,lVar1,param_5,&local_88);
    FUN_141b184b0(lVar1,param_2,param_5,param_3,param_4,0);
    *param_9 = '\x01';
  }
  else if (iVar2 != iVar3) {
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f489c0;
    *(int *)(puVar7 + 2) = iVar3;
  }
  do {
    if ((param_7 & 1) != 0) {
      uVar9 = uVar9 + 1;
      uVar11 = uVar8;
      FUN_141b15b80(lVar1,param_2,param_3,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(param_6 + 8) + 0xc0) + 8),
                    *(longlong *)(param_6 + 8),uVar8,param_5,param_6,param_4);
      FUN_141b315b0(lVar1,param_2,param_3,*(undefined8 *)(param_6 + 8),uVar8,uVar11 & 0xffffff00);
    }
    uVar8 = uVar8 + 1;
    bVar10 = 1 < param_7;
    param_7 = param_7 >> 1;
  } while (bVar10);
  return uVar9;
}



// FUNCTION 141ae65c0 FUN_141ae65c0 body=825 status=ok
// SIG undefined FUN_141ae65c0(void)

int FUN_141ae65c0(undefined8 param_1,longlong param_2,longlong param_3,undefined2 param_4,
                 longlong param_5,longlong param_6,ulonglong param_7,longlong param_8,
                 undefined8 param_9)

{
  longlong lVar1;
  undefined8 uVar2;
  char *pcVar3;
  char cVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined8 in_stack_ffffffffffffff28;
  ulonglong uVar13;
  undefined8 uVar14;
  longlong local_a0;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [48];
  
  lVar1 = *(longlong *)(param_5 + 8);
  iVar10 = *(int *)(param_5 + 0x28);
  uVar13 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff28 >> 8),
                    *(char *)(param_8 + 0x54) == '\0');
  FUN_141afd470(param_5,param_3,*(undefined8 *)(param_6 + 8),*(undefined1 *)(param_3 + 0x3099),
                uVar13,*(undefined1 *)(param_8 + 0x55));
  pcVar3 = (char *)CONCAT44(param_9._4_4_,(uint)param_9);
  if (lVar1 == *(longlong *)(param_5 + 8)) {
    cVar4 = *pcVar3;
  }
  else {
    *pcVar3 = '\0';
    cVar4 = '\0';
  }
  iVar11 = *(int *)(param_5 + 0x28);
  if (cVar4 == '\0') {
    lVar1 = param_8 + 0x20;
    if (*(longlong *)(param_8 + 0x98) == 0) {
      puVar6 = (undefined8 *)FUN_141b08340(lVar1,local_58,*(undefined4 *)(param_3 + 0x1a38));
      local_88 = *puVar6;
      uStack_80 = puVar6[1];
      local_78 = *(undefined4 *)(puVar6 + 2);
      uStack_74 = *(undefined4 *)((longlong)puVar6 + 0x14);
      uStack_70 = *(undefined4 *)(puVar6 + 3);
      uStack_6c = *(undefined4 *)((longlong)puVar6 + 0x1c);
      local_68 = *(undefined4 *)(puVar6 + 4);
      uStack_64 = *(undefined4 *)((longlong)puVar6 + 0x24);
      uStack_60 = *(undefined4 *)(puVar6 + 5);
      uStack_5c = *(undefined4 *)((longlong)puVar6 + 0x2c);
    }
    else {
      local_88 = *(undefined8 *)(param_8 + 0x90);
      uStack_80 = *(undefined8 *)(param_8 + 0x98);
      local_78 = *(undefined4 *)(param_8 + 0xa0);
      uStack_74 = *(undefined4 *)(param_8 + 0xa4);
      uStack_70 = *(undefined4 *)(param_8 + 0xa8);
      uStack_6c = *(undefined4 *)(param_8 + 0xac);
      local_68 = *(undefined4 *)(param_8 + 0xb0);
      uStack_64 = *(undefined4 *)(param_8 + 0xb4);
      uStack_60 = *(undefined4 *)(param_8 + 0xb8);
      uStack_5c = *(undefined4 *)(param_8 + 0xbc);
    }
    FUN_141a9adc0(param_2,lVar1,param_5,&local_88);
    uVar13 = CONCAT62((int6)(uVar13 >> 0x10),param_4);
    FUN_141b18390(lVar1,param_2,param_5,param_3,uVar13,0);
    *pcVar3 = '\x01';
  }
  else if (iVar10 != iVar11) {
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f489c0;
    *(int *)(puVar7 + 2) = iVar11;
  }
  iVar10 = 0;
  iVar11 = 0;
  local_a0 = 0;
  do {
    if ((param_7 & 1) != 0) {
      lVar1 = *(longlong *)(param_6 + 8);
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0xc0) + 8);
      lVar8 = *(longlong *)(lVar1 + 0x78);
      if (*(longlong *)(lVar1 + 0x78) == 0) {
        lVar8 = lVar1;
      }
      uVar9 = 0;
      uVar5 = (*(char *)(lVar8 + 0x67 + local_a0) != '\0') + 1;
      iVar10 = iVar10 + uVar5;
      do {
        lVar1 = *(longlong *)(param_8 + 0x78);
        param_9._0_4_ = uVar9;
        if (*(short *)(lVar1 + 0x154) != 0) {
          lVar8 = *(longlong *)(lVar1 + 0x48);
          if (*(char *)(lVar8 + 0x28) == '\0') {
            FUN_1419f3850(lVar8);
          }
          FUN_1404986d0(param_2,*(undefined8 *)(lVar8 + 0x38),lVar1 + 0x150,&param_9,
                        uVar13 & 0xffffffff00000000);
        }
        uVar14 = *(undefined8 *)(param_6 + 8);
        FUN_141b15a40(param_8 + 0x20,param_2,param_3,uVar2,uVar14,iVar11,param_5,param_6,param_4);
        uVar13 = CONCAT44((int)((ulonglong)uVar14 >> 0x20),iVar11);
        FUN_141b315b0(param_8 + 0x20,param_2,param_3,*(undefined8 *)(param_6 + 8),uVar13,1);
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar5);
    }
    local_a0 = local_a0 + 0x78;
    iVar11 = iVar11 + 1;
    bVar12 = 1 < param_7;
    param_7 = param_7 >> 1;
  } while (bVar12);
  return iVar10;
}



// FUNCTION 141ae6900 FUN_141ae6900 body=809 status=ok
// SIG undefined FUN_141ae6900(void)

int FUN_141ae6900(undefined8 param_1,longlong param_2,longlong param_3,undefined2 param_4,
                 longlong param_5,longlong param_6,ulonglong param_7,longlong param_8,
                 undefined8 param_9)

{
  longlong lVar1;
  undefined8 uVar2;
  char *pcVar3;
  char cVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined8 in_stack_ffffffffffffff28;
  ulonglong uVar13;
  undefined8 uVar14;
  longlong local_a0;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [48];
  
  lVar1 = *(longlong *)(param_5 + 8);
  iVar10 = *(int *)(param_5 + 0x28);
  uVar13 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff28 >> 8),
                    *(char *)(param_8 + 0x54) == '\0');
  FUN_141afd470(param_5,param_3,*(undefined8 *)(param_6 + 8),*(undefined1 *)(param_3 + 0x3099),
                uVar13,*(undefined1 *)(param_8 + 0x55));
  pcVar3 = (char *)CONCAT44(param_9._4_4_,(uint)param_9);
  if (lVar1 == *(longlong *)(param_5 + 8)) {
    cVar4 = *pcVar3;
  }
  else {
    *pcVar3 = '\0';
    cVar4 = '\0';
  }
  iVar11 = *(int *)(param_5 + 0x28);
  if (cVar4 == '\0') {
    lVar1 = param_8 + 0x20;
    if (*(longlong *)(param_8 + 0x70) == 0) {
      puVar6 = (undefined8 *)FUN_141b08470(lVar1,local_58,*(undefined4 *)(param_3 + 0x1a38));
      local_88 = *puVar6;
      uStack_80 = puVar6[1];
      local_78 = *(undefined4 *)(puVar6 + 2);
      uStack_74 = *(undefined4 *)((longlong)puVar6 + 0x14);
      uStack_70 = *(undefined4 *)(puVar6 + 3);
      uStack_6c = *(undefined4 *)((longlong)puVar6 + 0x1c);
      local_68 = *(undefined4 *)(puVar6 + 4);
      uStack_64 = *(undefined4 *)((longlong)puVar6 + 0x24);
      uStack_60 = *(undefined4 *)(puVar6 + 5);
      uStack_5c = *(undefined4 *)((longlong)puVar6 + 0x2c);
    }
    else {
      local_88 = *(undefined8 *)(param_8 + 0x68);
      uStack_80 = *(undefined8 *)(param_8 + 0x70);
      local_78 = *(undefined4 *)(param_8 + 0x78);
      uStack_74 = *(undefined4 *)(param_8 + 0x7c);
      uStack_70 = *(undefined4 *)(param_8 + 0x80);
      uStack_6c = *(undefined4 *)(param_8 + 0x84);
      local_68 = *(undefined4 *)(param_8 + 0x88);
      uStack_64 = *(undefined4 *)(param_8 + 0x8c);
      uStack_60 = *(undefined4 *)(param_8 + 0x90);
      uStack_5c = *(undefined4 *)(param_8 + 0x94);
    }
    FUN_141a9adc0(param_2,lVar1,param_5,&local_88);
    uVar13 = CONCAT62((int6)(uVar13 >> 0x10),param_4);
    FUN_141b184b0(lVar1,param_2,param_5,param_3,uVar13,0);
    *pcVar3 = '\x01';
  }
  else if (iVar10 != iVar11) {
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f489c0;
    *(int *)(puVar7 + 2) = iVar11;
  }
  iVar10 = 0;
  iVar11 = 0;
  local_a0 = 0;
  do {
    if ((param_7 & 1) != 0) {
      lVar1 = *(longlong *)(param_6 + 8);
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0xc0) + 8);
      lVar8 = *(longlong *)(lVar1 + 0x78);
      if (*(longlong *)(lVar1 + 0x78) == 0) {
        lVar8 = lVar1;
      }
      uVar9 = 0;
      uVar5 = (*(char *)(lVar8 + 0x67 + local_a0) != '\0') + 1;
      iVar10 = iVar10 + uVar5;
      do {
        lVar1 = *(longlong *)(param_8 + 0x60);
        param_9._0_4_ = uVar9;
        if (*(short *)(lVar1 + 0x154) != 0) {
          lVar8 = *(longlong *)(lVar1 + 0x48);
          if (*(char *)(lVar8 + 0x28) == '\0') {
            FUN_1419f3850(lVar8);
          }
          FUN_1404986d0(param_2,*(undefined8 *)(lVar8 + 0x38),lVar1 + 0x150,&param_9,
                        uVar13 & 0xffffffff00000000);
        }
        uVar14 = *(undefined8 *)(param_6 + 8);
        FUN_141b15b80(param_8 + 0x20,param_2,param_3,uVar2,uVar14,iVar11,param_5,param_6,param_4);
        uVar13 = CONCAT44((int)((ulonglong)uVar14 >> 0x20),iVar11);
        FUN_141b315b0(param_8 + 0x20,param_2,param_3,*(undefined8 *)(param_6 + 8),uVar13,1);
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar5);
    }
    local_a0 = local_a0 + 0x78;
    iVar11 = iVar11 + 1;
    bVar12 = 1 < param_7;
    param_7 = param_7 >> 1;
  } while (bVar12);
  return iVar10;
}



// FUNCTION 141ae6c30 FUN_141ae6c30 body=579 status=ok
// SIG undefined FUN_141ae6c30(void)

char FUN_141ae6c30(longlong param_1,undefined *param_2,undefined8 param_3,undefined2 param_4,
                  undefined8 param_5,longlong param_6,longlong *param_7,undefined8 param_8,
                  uint param_9,int param_10,char param_11)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  char cVar7;
  uint *puVar8;
  undefined8 *puVar9;
  char local_48;
  uint local_44;
  
  cVar7 = '\0';
  local_44 = 0;
  local_48 = '\0';
  lVar5 = (longlong)param_10;
  lVar3 = (longlong)(int)param_9;
  if (lVar3 <= lVar5) {
    do {
      param_9 = param_9 & 0xffffff00;
      puVar9 = (undefined8 *)
               ((longlong)*(int *)(*(longlong *)(param_1 + 0x30) + lVar3 * 4) * 0xf0 +
               *(longlong *)(param_1 + 0x40));
      puVar8 = (uint *)*puVar9;
      lVar4 = (longlong)*(int *)(puVar9 + 3);
      iVar6 = 0;
      if (0 < lVar4) {
        lVar5 = 0;
        do {
          lVar2 = *(longlong *)(param_6 + 0x10);
          if (*(longlong *)(param_6 + 0x10) == 0) {
            lVar2 = param_6;
          }
          if ((*(uint *)(lVar2 + ((longlong)(int)*puVar8 >> 5) * 4) >> (*puVar8 & 0x1f) & 1) != 0) {
            lVar2 = *(longlong *)(puVar9[2] + lVar5 + 8);
            if ((*(uint *)(lVar2 + 0x8c) & 0x2000000) == 0) {
              lVar2 = (1L << ((byte)*(undefined4 *)(lVar2 + 0x80) & 0x3f)) + -1;
            }
            else {
              lVar2 = *(longlong *)(*param_7 + (longlong)*(int *)(lVar2 + 0xcc) * 8);
            }
            iVar1 = FUN_141ae6110(param_1,param_2,param_3,param_4,param_5,puVar9[2] + lVar5,lVar2,
                                  puVar9,&param_9);
            iVar6 = iVar6 + iVar1;
            local_44 = local_44 + 1;
            if (((((local_44 & 0xf) == 0) && (param_2 == &DAT_146ab6e78)) && (DAT_146ab6e8c != 0))
               && ((DAT_146ab62e7 != '\0' && (DAT_146ab6383 != '\0')))) {
              FRHICommandListBase::MaybeDispatchToRHIThreadInner(&DAT_146ab6e78);
            }
          }
          lVar5 = lVar5 + 0x38;
          puVar8 = puVar8 + 1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        lVar5 = (longlong)param_10;
      }
      if ((local_48 != '\0') || (cVar7 = local_48, iVar6 != 0)) {
        cVar7 = '\x01';
      }
      if (param_11 != '\0') {
        *(int *)(puVar9 + 0x1c) = iVar6;
      }
      lVar3 = lVar3 + 1;
      local_48 = cVar7;
    } while (lVar3 <= lVar5);
  }
  return cVar7;
}



// FUNCTION 141ae6e80 FUN_141ae6e80 body=579 status=ok
// SIG undefined FUN_141ae6e80(void)

char FUN_141ae6e80(longlong param_1,undefined *param_2,undefined8 param_3,undefined2 param_4,
                  undefined8 param_5,longlong param_6,longlong *param_7,undefined8 param_8,
                  uint param_9,int param_10,char param_11)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  char cVar7;
  uint *puVar8;
  undefined8 *puVar9;
  char local_48;
  uint local_44;
  
  cVar7 = '\0';
  local_44 = 0;
  local_48 = '\0';
  lVar5 = (longlong)param_10;
  lVar3 = (longlong)(int)param_9;
  if (lVar3 <= lVar5) {
    do {
      param_9 = param_9 & 0xffffff00;
      puVar9 = (undefined8 *)
               ((longlong)*(int *)(*(longlong *)(param_1 + 0x30) + lVar3 * 4) * 200 +
               *(longlong *)(param_1 + 0x40));
      puVar8 = (uint *)*puVar9;
      lVar4 = (longlong)*(int *)(puVar9 + 3);
      iVar6 = 0;
      if (0 < lVar4) {
        lVar5 = 0;
        do {
          lVar2 = *(longlong *)(param_6 + 0x10);
          if (*(longlong *)(param_6 + 0x10) == 0) {
            lVar2 = param_6;
          }
          if ((*(uint *)(lVar2 + ((longlong)(int)*puVar8 >> 5) * 4) >> (*puVar8 & 0x1f) & 1) != 0) {
            lVar2 = *(longlong *)(puVar9[2] + lVar5 + 8);
            if ((*(uint *)(lVar2 + 0x8c) & 0x2000000) == 0) {
              lVar2 = (1L << ((byte)*(undefined4 *)(lVar2 + 0x80) & 0x3f)) + -1;
            }
            else {
              lVar2 = *(longlong *)(*param_7 + (longlong)*(int *)(lVar2 + 0xcc) * 8);
            }
            iVar1 = FUN_141ae6370(param_1,param_2,param_3,param_4,param_5,puVar9[2] + lVar5,lVar2,
                                  puVar9,&param_9);
            iVar6 = iVar6 + iVar1;
            local_44 = local_44 + 1;
            if (((((local_44 & 0xf) == 0) && (param_2 == &DAT_146ab6e78)) && (DAT_146ab6e8c != 0))
               && ((DAT_146ab62e7 != '\0' && (DAT_146ab6383 != '\0')))) {
              FRHICommandListBase::MaybeDispatchToRHIThreadInner(&DAT_146ab6e78);
            }
          }
          lVar5 = lVar5 + 0x38;
          puVar8 = puVar8 + 1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        lVar5 = (longlong)param_10;
      }
      if ((local_48 != '\0') || (cVar7 = local_48, iVar6 != 0)) {
        cVar7 = '\x01';
      }
      if (param_11 != '\0') {
        *(int *)(puVar9 + 0x17) = iVar6;
      }
      lVar3 = lVar3 + 1;
      local_48 = cVar7;
    } while (lVar3 <= lVar5);
  }
  return cVar7;
}



// FUNCTION 141ae70d0 FUN_141ae70d0 body=612 status=ok
// SIG undefined FUN_141ae70d0(void)

char FUN_141ae70d0(longlong param_1,undefined *param_2,undefined8 param_3,undefined2 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong param_8,
                  uint param_9,int param_10,char param_11)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int *piVar11;
  undefined8 *puVar12;
  char local_48;
  uint local_44;
  
  cVar6 = '\0';
  local_44 = 0;
  local_48 = '\0';
  lVar8 = (longlong)param_10;
  lVar4 = (longlong)(int)param_9;
  if (lVar4 <= lVar8) {
    do {
      param_9 = param_9 & 0xffffff00;
      puVar12 = (undefined8 *)
                ((longlong)*(int *)(*(longlong *)(param_1 + 0x30) + lVar4 * 4) * 0xf0 +
                *(longlong *)(param_1 + 0x40));
      piVar11 = (int *)*puVar12;
      lVar9 = (longlong)*(int *)(puVar12 + 3);
      iVar10 = 0;
      if (0 < lVar9) {
        lVar8 = 0;
        do {
          uVar7 = 1 << ((byte)*piVar11 & 0x1f);
          lVar3 = ((longlong)*piVar11 >> 5) * 4;
          lVar2 = *(longlong *)(*(longlong *)(param_8 + 0x10) + 0x10);
          if (lVar2 == 0) {
            lVar2 = *(longlong *)(param_8 + 0x10);
          }
          if ((*(uint *)(lVar2 + lVar3) & uVar7) == 0) {
            lVar2 = *(longlong *)(*(longlong *)(param_8 + 0x18) + 0x10);
            if (lVar2 == 0) {
              lVar2 = *(longlong *)(param_8 + 0x18);
            }
            if ((*(uint *)(lVar2 + lVar3) & uVar7) != 0) {
              plVar5 = *(longlong **)(param_8 + 0x28);
              goto LAB_141ae71e2;
            }
          }
          else {
            plVar5 = *(longlong **)(param_8 + 0x20);
LAB_141ae71e2:
            if (plVar5 != (longlong *)0x0) {
              lVar3 = *(longlong *)(puVar12[2] + lVar8 + 8);
              if ((*(uint *)(lVar3 + 0x8c) & 0x2000000) == 0) {
                lVar3 = (1L << ((byte)*(undefined4 *)(lVar3 + 0x80) & 0x3f)) + -1;
              }
              else {
                lVar3 = *(longlong *)(*plVar5 + (longlong)*(int *)(lVar3 + 0xcc) * 8);
              }
              iVar1 = FUN_141ae65c0(param_1,param_2,param_3,param_4,param_5,puVar12[2] + lVar8,lVar3
                                    ,puVar12,&param_9);
              iVar10 = iVar10 + iVar1;
              local_44 = local_44 + 1;
              if (((((local_44 & 0xf) == 0) && (param_2 == &DAT_146ab6e78)) && (DAT_146ab6e8c != 0))
                 && ((DAT_146ab62e7 != '\0' && (DAT_146ab6383 != '\0')))) {
                FRHICommandListBase::MaybeDispatchToRHIThreadInner(&DAT_146ab6e78);
              }
            }
          }
          lVar8 = lVar8 + 0x38;
          piVar11 = piVar11 + 1;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        lVar8 = (longlong)param_10;
      }
      if ((local_48 != '\0') || (cVar6 = local_48, iVar10 != 0)) {
        cVar6 = '\x01';
      }
      if (param_11 != '\0') {
        *(int *)(puVar12 + 0x1c) = iVar10;
      }
      lVar4 = lVar4 + 1;
      local_48 = cVar6;
    } while (lVar4 <= lVar8);
  }
  return cVar6;
}



// FUNCTION 141ae7340 FUN_141ae7340 body=612 status=ok
// SIG undefined FUN_141ae7340(void)

char FUN_141ae7340(longlong param_1,undefined *param_2,undefined8 param_3,undefined2 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong param_8,
                  uint param_9,int param_10,char param_11)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int *piVar11;
  undefined8 *puVar12;
  char local_48;
  uint local_44;
  
  cVar6 = '\0';
  local_44 = 0;
  local_48 = '\0';
  lVar8 = (longlong)param_10;
  lVar4 = (longlong)(int)param_9;
  if (lVar4 <= lVar8) {
    do {
      param_9 = param_9 & 0xffffff00;
      puVar12 = (undefined8 *)
                ((longlong)*(int *)(*(longlong *)(param_1 + 0x30) + lVar4 * 4) * 200 +
                *(longlong *)(param_1 + 0x40));
      piVar11 = (int *)*puVar12;
      lVar9 = (longlong)*(int *)(puVar12 + 3);
      iVar10 = 0;
      if (0 < lVar9) {
        lVar8 = 0;
        do {
          uVar7 = 1 << ((byte)*piVar11 & 0x1f);
          lVar3 = ((longlong)*piVar11 >> 5) * 4;
          lVar2 = *(longlong *)(*(longlong *)(param_8 + 0x10) + 0x10);
          if (lVar2 == 0) {
            lVar2 = *(longlong *)(param_8 + 0x10);
          }
          if ((*(uint *)(lVar2 + lVar3) & uVar7) == 0) {
            lVar2 = *(longlong *)(*(longlong *)(param_8 + 0x18) + 0x10);
            if (lVar2 == 0) {
              lVar2 = *(longlong *)(param_8 + 0x18);
            }
            if ((*(uint *)(lVar2 + lVar3) & uVar7) != 0) {
              plVar5 = *(longlong **)(param_8 + 0x28);
              goto LAB_141ae7452;
            }
          }
          else {
            plVar5 = *(longlong **)(param_8 + 0x20);
LAB_141ae7452:
            if (plVar5 != (longlong *)0x0) {
              lVar3 = *(longlong *)(puVar12[2] + lVar8 + 8);
              if ((*(uint *)(lVar3 + 0x8c) & 0x2000000) == 0) {
                lVar3 = (1L << ((byte)*(undefined4 *)(lVar3 + 0x80) & 0x3f)) + -1;
              }
              else {
                lVar3 = *(longlong *)(*plVar5 + (longlong)*(int *)(lVar3 + 0xcc) * 8);
              }
              iVar1 = FUN_141ae6900(param_1,param_2,param_3,param_4,param_5,puVar12[2] + lVar8,lVar3
                                    ,puVar12,&param_9);
              iVar10 = iVar10 + iVar1;
              local_44 = local_44 + 1;
              if (((((local_44 & 0xf) == 0) && (param_2 == &DAT_146ab6e78)) && (DAT_146ab6e8c != 0))
                 && ((DAT_146ab62e7 != '\0' && (DAT_146ab6383 != '\0')))) {
                FRHICommandListBase::MaybeDispatchToRHIThreadInner(&DAT_146ab6e78);
              }
            }
          }
          lVar8 = lVar8 + 0x38;
          piVar11 = piVar11 + 1;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        lVar8 = (longlong)param_10;
      }
      if ((local_48 != '\0') || (cVar6 = local_48, iVar10 != 0)) {
        cVar6 = '\x01';
      }
      if (param_11 != '\0') {
        *(int *)(puVar12 + 0x17) = iVar10;
      }
      lVar4 = lVar4 + 1;
      local_48 = cVar6;
    } while (lVar4 <= lVar8);
  }
  return cVar6;
}



// FUNCTION 141ae75b0 FUN_141ae75b0 body=595 status=ok
// SIG undefined FUN_141ae75b0(void)

uint * FUN_141ae75b0(longlong *param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  void *_Src;
  longlong *plVar9;
  bool bVar10;
  uint local_res8 [2];
  
  iVar7 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar6 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar6 + 1)) {
      TArray<FSlateRenderBatch,FDefaultAllocator>::ResizeGrow(param_1,uVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar6 = *(uint *)(param_1 + 6);
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar4 = *(int *)((longlong)(int)uVar6 * 0xf0 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)((longlong)iVar4 * 0xf0 + *param_1) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = uVar6;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar9 +
                   (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar6 & 0x1f);
  _Src = (void *)((longlong)(int)uVar6 * 0xf0 + *param_1);
  TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FDrawingPolicyLink::
  FDrawingPolicyLink(_Src,param_3);
  *(undefined4 *)((longlong)_Src + 0xe8) = 0xffffffff;
  uVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (uVar6 != 1) {
    TSet<TStaticMeshDrawList<FDepthDrawingPolicy>::FDrawingPolicyLink,TStaticMeshDrawList<FDepthDrawingPolicy>::FDrawingPolicyKeyFuncs,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,(longlong)_Src + 0x20);
    uVar3 = local_res8[0];
    lVar5 = (longlong)(int)local_res8[0];
    bVar10 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar10);
    if (bVar10) {
      plVar9 = (longlong *)(lVar5 * 0xf0 + *param_1);
      TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
      ::
      ~TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
                (plVar9 + 2);
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar9,_Src,0xe8);
      TSparseArray<TSetElement<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FDrawingPolicyLink>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = uVar3;
      goto LAB_141ae77d5;
    }
  }
  if (3 < uVar6) {
    uVar3 = (uVar6 >> 1) + 8;
    iVar7 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    iVar4 = 0x20;
    cVar8 = '\0';
    if (uVar3 != 0) {
      iVar4 = 0x1f - iVar7;
    }
    uVar3 = (uVar6 >> 1) + 7;
    iVar7 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar3 != 0) {
      cVar8 = '\x1f' - (char)iVar7;
    }
    iVar7 = 1 << (~(byte)((iVar4 << 0x1a) >> 0x1f) & 0x20U - cVar8 & 0x1f);
  }
  if (((int)uVar6 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    uVar6 = FMeshDrawingPolicy::GetTypeHash((longlong)_Src + 0x20);
    uVar6 = uVar6 & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0xec) = uVar6;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0xe8) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(uint *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    TSet<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FDrawingPolicyLink,TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FDrawingPolicyKeyFuncs,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141ae77d5:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 141ae7810 FUN_141ae7810 body=595 status=ok
// SIG undefined FUN_141ae7810(void)

uint * FUN_141ae7810(longlong *param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  void *_Src;
  longlong *plVar9;
  bool bVar10;
  uint local_res8 [2];
  
  iVar7 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar6 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar6 + 1)) {
      FUN_140ae1ad0(param_1,uVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar6 = *(uint *)(param_1 + 6);
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar4 = *(int *)((longlong)(int)uVar6 * 200 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)((longlong)iVar4 * 200 + *param_1) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = uVar6;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar9 +
                   (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar6 & 0x1f);
  _Src = (void *)((longlong)(int)uVar6 * 200 + *param_1);
  FUN_141afa880(_Src,param_3);
  *(undefined4 *)((longlong)_Src + 0xc0) = 0xffffffff;
  uVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (uVar6 != 1) {
    TSet<TStaticMeshDrawList<FPositionOnlyDepthDrawingPolicy>::FDrawingPolicyLink,TStaticMeshDrawList<FPositionOnlyDepthDrawingPolicy>::FDrawingPolicyKeyFuncs,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,(longlong)_Src + 0x20);
    uVar3 = local_res8[0];
    lVar5 = (longlong)(int)local_res8[0];
    bVar10 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar10);
    if (bVar10) {
      plVar9 = (longlong *)(lVar5 * 200 + *param_1);
      TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
      ::
      ~TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
                (plVar9 + 2);
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar9,_Src,0xc0);
      TSparseArray<TSetElement<TStaticMeshDrawList<FPositionOnlyDepthDrawingPolicy>::FDrawingPolicyLink>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = uVar3;
      goto LAB_141ae7a35;
    }
  }
  if (3 < uVar6) {
    uVar3 = (uVar6 >> 1) + 8;
    iVar7 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    iVar4 = 0x20;
    cVar8 = '\0';
    if (uVar3 != 0) {
      iVar4 = 0x1f - iVar7;
    }
    uVar3 = (uVar6 >> 1) + 7;
    iVar7 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar3 != 0) {
      cVar8 = '\x1f' - (char)iVar7;
    }
    iVar7 = 1 << (~(byte)((iVar4 << 0x1a) >> 0x1f) & 0x20U - cVar8 & 0x1f);
  }
  if (((int)uVar6 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    uVar6 = FMeshDrawingPolicy::GetTypeHash((longlong)_Src + 0x20);
    uVar6 = uVar6 & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0xc4) = uVar6;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0xc0) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(uint *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    TSet<TStaticMeshDrawList<FPositionOnlyDepthDrawingPolicy>::FDrawingPolicyLink,TStaticMeshDrawList<FPositionOnlyDepthDrawingPolicy>::FDrawingPolicyKeyFuncs,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141ae7a35:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 141ae7a70 FUN_141ae7a70 body=530 status=ok
// SIG undefined FUN_141ae7a70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141ae7a70(longlong *param_1)

{
  longlong lVar1;
  undefined *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = 0;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x38) < DAT_14685f078) &&
     (_Init_thread_header(&DAT_14685f078), DAT_14685f078 == -1)) {
    FName::FName(&DAT_14685f070,L"FLightPropagationVolumeSettings",1);
    _Init_thread_footer(&DAT_14685f078);
  }
  do {
    lVar3 = *param_1;
    if (lVar4 != 0) {
      lVar3 = (ulonglong)*(uint *)(lVar4 + 0x14) + 0x18 + lVar4 + (ulonglong)*(uint *)(lVar4 + 0x10)
      ;
    }
    lVar4 = 0;
    if (lVar3 != (longlong)(int)param_1[1] + *param_1) {
      lVar4 = lVar3;
    }
    if (lVar4 == 0) goto LAB_141ae7b02;
  } while (*(longlong *)(lVar4 + 8) != DAT_14685f070);
  puVar2 = (undefined *)((ulonglong)*(uint *)(lVar4 + 0x14) + 0x18 + lVar4);
  if (puVar2 == (undefined *)0x0) {
LAB_141ae7b02:
    if ((*(int *)(lVar1 + 0x38) < DAT_146a0e860) &&
       (_Init_thread_header(&DAT_146a0e860), DAT_146a0e860 == -1)) {
      _DAT_146a0e850 = 0x3f8000003f800000;
      _DAT_146a0e858 = 0;
      _DAT_146a0e820 = 0x3f80000000000000;
      DAT_146a0e82c = 0x45a60000;
      DAT_146a0e830 = 0;
      DAT_146a0e834 = 0;
      DAT_146a0e828 = 0x3f23d70a;
      _DAT_146a0e838 = 0x3f8000003ec49ba6;
      _DAT_146a0e840 = 0x4100000000000000;
      _DAT_146a0e848 = 0x40e000003f800000;
      _Init_thread_footer(&DAT_146a0e860);
    }
    puVar2 = &DAT_146a0e820;
    _DAT_146a0e820 = 0x3f80000000000000;
    DAT_146a0e830 = 0;
    DAT_146a0e834 = 0;
    _DAT_146a0e838 = 0x3f8000003ec49ba6;
    DAT_146a0e828 = 0x3f23d70a;
    DAT_146a0e82c = 0x45a60000;
    _DAT_146a0e850 = 0x3f8000003f800000;
    _DAT_146a0e858 = 0;
    _DAT_146a0e840 = 0x4100000000000000;
    _DAT_146a0e848 = 0x40e000003f800000;
  }
  return puVar2;
}



// FUNCTION 141ae7c90 FUN_141ae7c90 body=891 status=ok
// SIG undefined FUN_141ae7c90(void)

void FUN_141ae7c90(undefined8 *param_1,int param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  int iVar23;
  int iVar24;
  undefined8 *puVar25;
  bool bVar26;
  bool bVar27;
  
  iVar20 = (param_2 + -2) / 2;
  if (-1 < iVar20) {
    iVar21 = iVar20 * 2 + 1;
    iVar8 = iVar21;
    iVar24 = iVar20;
joined_r0x000141ae7cc6:
    do {
      if (iVar21 < param_2) {
        iVar21 = iVar20 * 2;
        iVar23 = iVar21 + 1;
        if (iVar21 + 2 < param_2) {
          puVar1 = param_1 + ((longlong)iVar21 + 2) * 5;
          lVar22 = (longlong)iVar23;
          iVar6 = *(int *)(param_1[((longlong)iVar21 + 2) * 5 + 2] + 0x3b4);
          iVar7 = *(int *)(param_1[lVar22 * 5 + 2] + 0x3b4);
          if (iVar7 == iVar6) {
            bVar5 = *(byte *)((longlong)param_1 + lVar22 * 0x28 + 0x24);
            bVar26 = bVar5 < *(byte *)((longlong)puVar1 + 0x24);
            if (bVar5 == *(byte *)((longlong)puVar1 + 0x24)) {
              iVar7 = *(int *)(param_1 + lVar22 * 5 + 4);
              iVar6 = (int)puVar1[4];
              bVar27 = SBORROW4(iVar7,iVar6);
              bVar26 = iVar7 - iVar6 < 0;
              if (iVar7 == iVar6) {
                bVar26 = (ulonglong)param_1[lVar22 * 5] < *puVar1;
                if (param_1[lVar22 * 5] != *puVar1) goto LAB_141ae7d55;
                lVar9 = *(longlong *)(param_1[((longlong)iVar21 + 2) * 5 + 2] + 0x3a0);
                lVar22 = *(longlong *)(param_1[lVar22 * 5 + 2] + 0x3a0);
                bVar27 = SBORROW8(lVar22,lVar9);
                bVar26 = lVar22 - lVar9 < 0;
              }
              bVar26 = bVar27 != bVar26;
            }
          }
          else {
            bVar26 = iVar6 <= iVar7;
          }
LAB_141ae7d55:
          if (bVar26) {
            iVar23 = iVar21;
          }
          iVar23 = iVar23 + 1;
        }
        puVar1 = param_1 + (longlong)iVar20 * 5;
        puVar2 = param_1 + (longlong)iVar23 * 5;
        iVar21 = *(int *)(param_1[(longlong)iVar20 * 5 + 2] + 0x3b4);
        iVar6 = *(int *)(param_1[(longlong)iVar23 * 5 + 2] + 0x3b4);
        if (iVar6 == iVar21) {
          bVar26 = *(byte *)((longlong)puVar2 + 0x24) < *(byte *)((longlong)puVar1 + 0x24);
          if (*(byte *)((longlong)puVar2 + 0x24) == *(byte *)((longlong)puVar1 + 0x24)) {
            iVar6 = (int)puVar2[4];
            iVar21 = (int)puVar1[4];
            bVar27 = SBORROW4(iVar6,iVar21);
            bVar26 = iVar6 - iVar21 < 0;
            if (iVar6 == iVar21) {
              bVar26 = *puVar2 < *puVar1;
              if (*puVar2 != *puVar1) goto LAB_141ae7dcf;
              lVar22 = *(longlong *)(param_1[(longlong)iVar20 * 5 + 2] + 0x3a0);
              lVar9 = *(longlong *)(param_1[(longlong)iVar23 * 5 + 2] + 0x3a0);
              bVar27 = SBORROW8(lVar9,lVar22);
              bVar26 = lVar9 - lVar22 < 0;
            }
            bVar26 = bVar27 != bVar26;
          }
        }
        else {
          bVar26 = iVar21 <= iVar6;
        }
LAB_141ae7dcf:
        if (bVar26) {
          if (puVar1 != puVar2) {
            uVar10 = puVar2[1];
            uVar11 = *puVar1;
            uVar12 = puVar1[1];
            uVar13 = puVar1[2];
            uVar14 = puVar1[3];
            uVar3 = puVar1[4];
            *puVar1 = *puVar2;
            puVar1[1] = uVar10;
            uVar10 = puVar2[3];
            puVar1[2] = puVar2[2];
            puVar1[3] = uVar10;
            puVar1[4] = puVar2[4];
            *puVar2 = uVar11;
            puVar2[1] = uVar12;
            puVar2[2] = uVar13;
            puVar2[3] = uVar14;
            puVar2[4] = uVar3;
          }
          iVar21 = iVar23 * 2 + 1;
          iVar20 = iVar23;
          goto joined_r0x000141ae7cc6;
        }
      }
      iVar21 = iVar8 + -2;
      iVar20 = iVar24 + -1;
      iVar8 = iVar21;
      iVar24 = iVar20;
    } while (-1 < iVar20);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar25 = param_1 + (longlong)param_2 * 5;
    do {
      if (param_1 != puVar25) {
        uVar15 = puVar25[1];
        uVar16 = *param_1;
        uVar17 = param_1[1];
        uVar18 = param_1[2];
        uVar19 = param_1[3];
        uVar4 = param_1[4];
        *param_1 = *puVar25;
        param_1[1] = uVar15;
        uVar15 = puVar25[3];
        param_1[2] = puVar25[2];
        param_1[3] = uVar15;
        param_1[4] = puVar25[4];
        *puVar25 = uVar16;
        puVar25[1] = uVar17;
        puVar25[2] = uVar18;
        puVar25[3] = uVar19;
        puVar25[4] = uVar4;
      }
      iVar20 = 0;
      if (1 < param_2) {
        do {
          iVar8 = iVar20 * 2;
          iVar21 = iVar8 + 1;
          if (iVar8 + 2 < param_2) {
            puVar1 = param_1 + ((longlong)iVar8 + 2) * 5;
            lVar22 = (longlong)iVar21;
            iVar24 = *(int *)(param_1[((longlong)iVar8 + 2) * 5 + 2] + 0x3b4);
            iVar23 = *(int *)(param_1[lVar22 * 5 + 2] + 0x3b4);
            if (iVar23 == iVar24) {
              bVar5 = *(byte *)((longlong)param_1 + lVar22 * 0x28 + 0x24);
              bVar26 = bVar5 < *(byte *)((longlong)puVar1 + 0x24);
              if (bVar5 == *(byte *)((longlong)puVar1 + 0x24)) {
                iVar23 = *(int *)(param_1 + lVar22 * 5 + 4);
                iVar24 = (int)puVar1[4];
                bVar27 = SBORROW4(iVar23,iVar24);
                bVar26 = iVar23 - iVar24 < 0;
                if (iVar23 == iVar24) {
                  bVar26 = (ulonglong)param_1[lVar22 * 5] < *puVar1;
                  if (param_1[lVar22 * 5] != *puVar1) goto LAB_141ae7f25;
                  lVar9 = *(longlong *)(param_1[((longlong)iVar8 + 2) * 5 + 2] + 0x3a0);
                  lVar22 = *(longlong *)(param_1[lVar22 * 5 + 2] + 0x3a0);
                  bVar27 = SBORROW8(lVar22,lVar9);
                  bVar26 = lVar22 - lVar9 < 0;
                }
                bVar26 = bVar27 != bVar26;
              }
            }
            else {
              bVar26 = iVar24 <= iVar23;
            }
LAB_141ae7f25:
            if (bVar26) {
              iVar21 = iVar8;
            }
            iVar21 = iVar21 + 1;
          }
          puVar1 = param_1 + (longlong)iVar20 * 5;
          puVar2 = param_1 + (longlong)iVar21 * 5;
          iVar8 = *(int *)(param_1[(longlong)iVar20 * 5 + 2] + 0x3b4);
          iVar24 = *(int *)(param_1[(longlong)iVar21 * 5 + 2] + 0x3b4);
          if (iVar24 == iVar8) {
            bVar26 = *(byte *)((longlong)puVar2 + 0x24) < *(byte *)((longlong)puVar1 + 0x24);
            if (*(byte *)((longlong)puVar2 + 0x24) == *(byte *)((longlong)puVar1 + 0x24)) {
              iVar24 = (int)puVar2[4];
              iVar8 = (int)puVar1[4];
              bVar27 = SBORROW4(iVar24,iVar8);
              bVar26 = iVar24 - iVar8 < 0;
              if (iVar24 == iVar8) {
                bVar26 = *puVar2 < *puVar1;
                if (*puVar2 != *puVar1) goto LAB_141ae7f9f;
                lVar22 = *(longlong *)(param_1[(longlong)iVar20 * 5 + 2] + 0x3a0);
                lVar9 = *(longlong *)(param_1[(longlong)iVar21 * 5 + 2] + 0x3a0);
                bVar27 = SBORROW8(lVar9,lVar22);
                bVar26 = lVar9 - lVar22 < 0;
              }
              bVar26 = bVar27 != bVar26;
            }
          }
          else {
            bVar26 = iVar8 <= iVar24;
          }
LAB_141ae7f9f:
          if (!bVar26) break;
          if (puVar1 != puVar2) {
            uVar10 = puVar2[1];
            uVar11 = *puVar1;
            uVar12 = puVar1[1];
            uVar13 = puVar1[2];
            uVar14 = puVar1[3];
            uVar3 = puVar1[4];
            *puVar1 = *puVar2;
            puVar1[1] = uVar10;
            uVar10 = puVar2[3];
            puVar1[2] = puVar2[2];
            puVar1[3] = uVar10;
            puVar1[4] = puVar2[4];
            *puVar2 = uVar11;
            puVar2[1] = uVar12;
            puVar2[2] = uVar13;
            puVar2[3] = uVar14;
            puVar2[4] = uVar3;
          }
          iVar20 = iVar21;
        } while (iVar21 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar25 = puVar25 + -5;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 141ae8010 FUN_141ae8010 body=1164 status=ok
// SIG undefined FUN_141ae8010(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_141ae8010(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  longlong *plVar18;
  bool bVar19;
  bool bVar20;
  float fVar21;
  undefined1 auStack_378 [48];
  longlong local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (param_2 < 2) {
    return;
  }
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_378;
  lStack_330 = param_1 + param_2 * 0x28 + -0x28;
  fVar21 = (float)(longlong)param_2;
  if ((longlong)param_2 < 0) {
    fVar21 = fVar21 + 1.8446744e+19;
  }
  local_338 = param_1;
  fVar21 = _guard_xfg_dispatch_icall_nop(fVar21);
  local_328 = (undefined4)(longlong)(fVar21 + fVar21);
  _guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
  plVar18 = &local_338;
LAB_141ae80b0:
  puVar13 = (ulonglong *)plVar18[1];
  local_348 = plVar18[2];
  lVar10 = (longlong)puVar13 - *plVar18;
  puVar9 = (ulonglong *)*plVar18;
  iVar12 = (int)local_348;
  while( true ) {
    lVar11 = lVar10 / 0x28 + 1;
    if (iVar12 == 0) break;
    if (lVar11 < 9) goto joined_r0x000141ae83c5;
    if (lVar11 < 0) {
      lVar11 = lVar10 / 0x28 + 2;
    }
    puVar14 = puVar9 + (lVar11 >> 1) * 5;
    if (puVar14 != puVar9) {
      uVar4 = puVar9[1];
      uVar5 = *puVar14;
      uVar6 = puVar14[1];
      uVar7 = puVar14[2];
      uVar8 = puVar14[3];
      uVar1 = puVar14[4];
      *puVar14 = *puVar9;
      puVar14[1] = uVar4;
      uVar4 = puVar9[3];
      puVar14[2] = puVar9[2];
      puVar14[3] = uVar4;
      puVar14[4] = puVar9[4];
      *puVar9 = uVar5;
      puVar9[1] = uVar6;
      puVar9[2] = uVar7;
      puVar9[3] = uVar8;
      puVar9[4] = uVar1;
    }
    puVar14 = puVar13 + 5;
    puVar16 = puVar9;
LAB_141ae8160:
    do {
      puVar17 = puVar16;
      puVar16 = puVar17 + 5;
      if (puVar13 < puVar16) break;
      iVar2 = *(int *)(puVar17[7] + 0x3b4);
      iVar3 = *(int *)(puVar9[2] + 0x3b4);
      if (iVar2 == iVar3) {
        bVar19 = *(byte *)((longlong)puVar17 + 0x4c) < *(byte *)((longlong)puVar9 + 0x24);
        if (*(byte *)((longlong)puVar17 + 0x4c) == *(byte *)((longlong)puVar9 + 0x24)) {
          iVar3 = (int)puVar17[9];
          iVar2 = (int)puVar9[4];
          bVar20 = SBORROW4(iVar3,iVar2);
          bVar19 = iVar3 - iVar2 < 0;
          if (iVar3 == iVar2) {
            bVar19 = *puVar16 < *puVar9;
            if (*puVar16 != *puVar9) goto LAB_141ae81c2;
            lVar10 = *(longlong *)(puVar9[2] + 0x3a0);
            lVar11 = *(longlong *)(puVar17[7] + 0x3a0);
            bVar20 = SBORROW8(lVar11,lVar10);
            bVar19 = lVar11 - lVar10 < 0;
          }
          bVar19 = bVar20 != bVar19;
        }
      }
      else {
        bVar19 = iVar3 <= iVar2;
      }
LAB_141ae81c2:
    } while (!bVar19);
    do {
      puVar15 = puVar14;
      puVar14 = puVar15 + -5;
      if (puVar14 <= puVar9) break;
      iVar2 = *(int *)(puVar15[-3] + 0x3b4);
      iVar3 = *(int *)(puVar9[2] + 0x3b4);
      if (iVar3 == iVar2) {
        bVar19 = *(byte *)((longlong)puVar9 + 0x24) < *(byte *)((longlong)puVar15 + -4);
        if (*(byte *)((longlong)puVar9 + 0x24) == *(byte *)((longlong)puVar15 + -4)) {
          iVar3 = (int)puVar9[4];
          iVar2 = (int)puVar15[-1];
          bVar20 = SBORROW4(iVar3,iVar2);
          bVar19 = iVar3 - iVar2 < 0;
          if (iVar3 == iVar2) {
            bVar19 = *puVar9 < *puVar14;
            if (*puVar9 != *puVar14) goto LAB_141ae8228;
            lVar10 = *(longlong *)(puVar15[-3] + 0x3a0);
            lVar11 = *(longlong *)(puVar9[2] + 0x3a0);
            bVar20 = SBORROW8(lVar11,lVar10);
            bVar19 = lVar11 - lVar10 < 0;
          }
          bVar19 = bVar20 != bVar19;
        }
      }
      else {
        bVar19 = iVar2 <= iVar3;
      }
LAB_141ae8228:
    } while (!bVar19);
    if (puVar16 <= puVar14) {
      if (puVar16 != puVar14) {
        uVar4 = puVar15[-4];
        uVar5 = *puVar16;
        uVar6 = puVar17[6];
        uVar7 = puVar17[7];
        uVar8 = puVar17[8];
        uVar1 = puVar17[9];
        *puVar16 = *puVar14;
        puVar17[6] = uVar4;
        uVar4 = puVar15[-2];
        puVar17[7] = puVar15[-3];
        puVar17[8] = uVar4;
        puVar17[9] = puVar15[-1];
        *puVar14 = uVar5;
        puVar15[-4] = uVar6;
        puVar15[-3] = uVar7;
        puVar15[-2] = uVar8;
        puVar15[-1] = uVar1;
      }
      goto LAB_141ae8160;
    }
    if (puVar9 != puVar14) {
      uVar4 = puVar15[-4];
      uVar5 = *puVar9;
      uVar6 = puVar9[1];
      uVar7 = puVar9[2];
      uVar8 = puVar9[3];
      uVar1 = puVar9[4];
      *puVar9 = *puVar14;
      puVar9[1] = uVar4;
      uVar4 = puVar15[-2];
      puVar9[2] = puVar15[-3];
      puVar9[3] = uVar4;
      puVar9[4] = puVar15[-1];
      *puVar14 = uVar5;
      puVar15[-4] = uVar6;
      puVar15[-3] = uVar7;
      puVar15[-2] = uVar8;
      puVar15[-1] = uVar1;
    }
    iVar12 = iVar12 + -1;
    if (((longlong)puVar14 + (-0x28 - (longlong)puVar9)) / 0x28 <
        ((longlong)puVar13 - (longlong)puVar16) / 0x28) {
      if (puVar16 < puVar13) {
        *plVar18 = (longlong)puVar16;
        plVar18[1] = (longlong)puVar13;
        *(int *)(plVar18 + 2) = iVar12;
        plVar18 = plVar18 + 3;
      }
      if (puVar14 <= puVar9 + 5) goto LAB_141ae8376;
      puVar13 = puVar15 + -10;
      puVar16 = puVar9;
    }
    else {
      if (puVar9 + 5 < puVar14) {
        *plVar18 = (longlong)puVar9;
        plVar18[1] = (longlong)(puVar15 + -10);
        *(int *)(plVar18 + 2) = iVar12;
        plVar18 = plVar18 + 3;
      }
      if (puVar13 <= puVar16) goto LAB_141ae8376;
    }
    lVar10 = (longlong)puVar13 - (longlong)puVar16;
    puVar9 = puVar16;
  }
  FUN_141ae7c90(puVar9,lVar11,param_3,param_4);
  goto LAB_141ae8376;
joined_r0x000141ae83c5:
  for (; puVar14 = puVar9, puVar16 = puVar9, puVar9 < puVar13; puVar13 = puVar13 + -5) {
    while (puVar17 = puVar14, puVar14 = puVar16 + 5, puVar14 <= puVar13) {
      iVar12 = *(int *)(puVar14[2] + 0x3b4);
      iVar2 = *(int *)(puVar17[2] + 0x3b4);
      if (iVar12 == iVar2) {
        bVar19 = *(byte *)((longlong)puVar16 + 0x4c) < *(byte *)((longlong)puVar17 + 0x24);
        if (*(byte *)((longlong)puVar16 + 0x4c) == *(byte *)((longlong)puVar17 + 0x24)) {
          iVar12 = (int)puVar17[4];
          iVar2 = (int)puVar14[4];
          bVar20 = SBORROW4(iVar2,iVar12);
          bVar19 = iVar2 - iVar12 < 0;
          if (iVar2 == iVar12) {
            bVar19 = *puVar14 < *puVar17;
            if (*puVar14 != *puVar17) goto LAB_141ae843f;
            lVar10 = *(longlong *)(puVar17[2] + 0x3a0);
            lVar11 = *(longlong *)(puVar14[2] + 0x3a0);
            bVar20 = SBORROW8(lVar11,lVar10);
            bVar19 = lVar11 - lVar10 < 0;
          }
          bVar19 = bVar20 != bVar19;
        }
      }
      else {
        bVar19 = iVar2 <= iVar12;
      }
LAB_141ae843f:
      puVar16 = puVar14;
      if (!bVar19) {
        puVar14 = puVar17;
      }
    }
    if (puVar17 != puVar13) {
      uVar4 = puVar13[1];
      uVar5 = *puVar17;
      uVar6 = puVar17[1];
      uVar7 = puVar17[2];
      uVar8 = puVar17[3];
      uVar1 = puVar17[4];
      *puVar17 = *puVar13;
      puVar17[1] = uVar4;
      uVar4 = puVar13[3];
      puVar17[2] = puVar13[2];
      puVar17[3] = uVar4;
      puVar17[4] = puVar13[4];
      *puVar13 = uVar5;
      puVar13[1] = uVar6;
      puVar13[2] = uVar7;
      puVar13[3] = uVar8;
      puVar13[4] = uVar1;
    }
  }
LAB_141ae8376:
  plVar18 = plVar18 + -3;
  if (plVar18 < &local_338) {
    return;
  }
  goto LAB_141ae80b0;
}



// FUNCTION 141ae84a0 FUN_141ae84a0 body=1906 status=ok
// SIG undefined FUN_141ae84a0(void)

void FUN_141ae84a0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  int local_res8 [2];
  longlong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined *local_58;
  undefined4 local_50;
  
  local_res10 = param_2;
  local_res18 = param_3;
  lVar9 = FSceneRenderTargets::Get();
  lVar2 = *(longlong *)(lVar9 + 0x2e0);
  lVar3 = *(longlong *)(lVar9 + 0x2e8);
  lVar10 = 0;
  local_res20 = 0;
  if (param_4 != 0) {
    TRefCountPtr<FRHITexture>::operator=(&local_res20,*(undefined8 *)(param_4 + 0x10));
    lVar10 = FUN_141ce4a10(lVar9,param_1);
    lVar10 = *(longlong *)(lVar10 + 0x18);
  }
  lVar8 = local_res20;
  uVar4 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[4] = 2;
  puVar13[5] = 0;
  uVar4 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  puVar13[4] = 2;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = lVar10;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    puVar18[4] = 2;
    puVar18[5] = 0;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x26;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x26;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  iVar17 = 0;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar18;
  *(undefined8 **)(param_1 + 8) = puVar18 + 1;
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_143f59440;
  *(undefined4 *)(puVar18 + 2) = 0;
  puVar18[3] = 0;
  *(undefined4 *)(puVar18 + 4) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x24) = 0xffffffff;
  *(undefined2 *)(puVar18 + 5) = 0;
  puVar18[6] = 0;
  *(undefined4 *)(puVar18 + 7) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x3c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 8) = 0;
  puVar18[9] = 0;
  *(undefined4 *)(puVar18 + 10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x54) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xb) = 0;
  puVar18[0xc] = 0;
  *(undefined4 *)(puVar18 + 0xd) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x6c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xe) = 0;
  puVar18[0xf] = 0;
  *(undefined4 *)(puVar18 + 0x10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x84) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x11) = 0;
  puVar18[0x12] = 0;
  *(undefined4 *)(puVar18 + 0x13) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x9c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x14) = 0;
  puVar18[0x15] = 0;
  *(undefined4 *)(puVar18 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xb4) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x17) = 0;
  puVar18[0x18] = 0;
  *(undefined4 *)(puVar18 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xcc) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x1a) = 0;
  puVar18[0x1b] = 0;
  *(undefined4 *)(puVar18 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar18 + 0xe4) = 0;
  uVar16 = 0;
  if (*(int *)(puVar18 + 2) != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar1 = (undefined4 *)(uVar16 * 0x18);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar12 = puVar18 + uVar16 * 3 + 3;
      *(undefined4 *)puVar12 = *puVar1;
      *(undefined4 *)((longlong)puVar12 + 4) = uVar5;
      *(undefined4 *)(puVar12 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar12 + 0xc) = uVar7;
      puVar18[uVar16 * 3 + 5] = *(undefined8 *)(uVar16 * 0x18 + 0x10);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 2));
    iVar17 = *(int *)(puVar18 + 0x1d);
  }
  uVar16 = 0;
  if (iVar17 != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar18[uVar16 + 0x1e] = *(undefined8 *)(uVar16 * 8);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 0x1d));
  }
  local_58 = &DAT_146a116d0;
  local_50 = 0;
  lVar14 = *(longlong *)(local_res10 + 0x3090);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar14 + 0x38,local_res8);
  if (local_res8[0] == -1) {
    lVar14 = 0;
  }
  else {
    lVar14 = (longlong)local_res8[0] * 0x20 + *(longlong *)(lVar14 + 0x38);
  }
  puVar12 = (undefined8 *)(lVar14 + 0x10);
  if (lVar14 == 0) {
    puVar12 = (undefined8 *)0x0;
  }
  uVar4 = *puVar12;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  local_78 = lVar8;
  FUN_141ae5c20(uVar4,param_1,local_res10,local_res18,*(undefined8 *)(lVar2 + 0x18),
                *(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar9 + 0x78),&local_78,lVar10);
  local_70 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_70;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  puVar13[1] = 0;
  local_68 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_68;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    local_60 = lVar10;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = local_60;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    *(undefined4 *)(puVar18 + 4) = 0;
    *(undefined4 *)((longlong)puVar18 + 0x24) = 1;
    puVar18[5] = 0;
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res20);
  return;
}



// FUNCTION 141ae8c20 FUN_141ae8c20 body=1906 status=ok
// SIG undefined FUN_141ae8c20(void)

void FUN_141ae8c20(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  int local_res8 [2];
  longlong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined *local_58;
  undefined4 local_50;
  
  local_res10 = param_2;
  local_res18 = param_3;
  lVar9 = FSceneRenderTargets::Get();
  lVar2 = *(longlong *)(lVar9 + 0x2e0);
  lVar3 = *(longlong *)(lVar9 + 0x2e8);
  lVar10 = 0;
  local_res20 = 0;
  if (param_4 != 0) {
    TRefCountPtr<FRHITexture>::operator=(&local_res20,*(undefined8 *)(param_4 + 0x10));
    lVar10 = FUN_141ce4a10(lVar9,param_1);
    lVar10 = *(longlong *)(lVar10 + 0x18);
  }
  lVar8 = local_res20;
  uVar4 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[4] = 2;
  puVar13[5] = 0;
  uVar4 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  puVar13[4] = 2;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = lVar10;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    puVar18[4] = 2;
    puVar18[5] = 0;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x26;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x26;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  iVar17 = 0;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar18;
  *(undefined8 **)(param_1 + 8) = puVar18 + 1;
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_143f59440;
  *(undefined4 *)(puVar18 + 2) = 0;
  puVar18[3] = 0;
  *(undefined4 *)(puVar18 + 4) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x24) = 0xffffffff;
  *(undefined2 *)(puVar18 + 5) = 0;
  puVar18[6] = 0;
  *(undefined4 *)(puVar18 + 7) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x3c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 8) = 0;
  puVar18[9] = 0;
  *(undefined4 *)(puVar18 + 10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x54) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xb) = 0;
  puVar18[0xc] = 0;
  *(undefined4 *)(puVar18 + 0xd) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x6c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xe) = 0;
  puVar18[0xf] = 0;
  *(undefined4 *)(puVar18 + 0x10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x84) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x11) = 0;
  puVar18[0x12] = 0;
  *(undefined4 *)(puVar18 + 0x13) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x9c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x14) = 0;
  puVar18[0x15] = 0;
  *(undefined4 *)(puVar18 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xb4) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x17) = 0;
  puVar18[0x18] = 0;
  *(undefined4 *)(puVar18 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xcc) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x1a) = 0;
  puVar18[0x1b] = 0;
  *(undefined4 *)(puVar18 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar18 + 0xe4) = 0;
  uVar16 = 0;
  if (*(int *)(puVar18 + 2) != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar1 = (undefined4 *)(uVar16 * 0x18);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar12 = puVar18 + uVar16 * 3 + 3;
      *(undefined4 *)puVar12 = *puVar1;
      *(undefined4 *)((longlong)puVar12 + 4) = uVar5;
      *(undefined4 *)(puVar12 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar12 + 0xc) = uVar7;
      puVar18[uVar16 * 3 + 5] = *(undefined8 *)(uVar16 * 0x18 + 0x10);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 2));
    iVar17 = *(int *)(puVar18 + 0x1d);
  }
  uVar16 = 0;
  if (iVar17 != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar18[uVar16 + 0x1e] = *(undefined8 *)(uVar16 * 8);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 0x1d));
  }
  local_58 = &DAT_146a11820;
  local_50 = 0;
  lVar14 = *(longlong *)(local_res10 + 0x3090);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar14 + 0x38,local_res8);
  if (local_res8[0] == -1) {
    lVar14 = 0;
  }
  else {
    lVar14 = (longlong)local_res8[0] * 0x20 + *(longlong *)(lVar14 + 0x38);
  }
  puVar12 = (undefined8 *)(lVar14 + 0x10);
  if (lVar14 == 0) {
    puVar12 = (undefined8 *)0x0;
  }
  uVar4 = *puVar12;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  local_78 = lVar8;
  FUN_141ae5c20(uVar4,param_1,local_res10,local_res18,*(undefined8 *)(lVar2 + 0x18),
                *(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar9 + 0x78),&local_78,lVar10);
  local_70 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_70;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  puVar13[1] = 0;
  local_68 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_68;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    local_60 = lVar10;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = local_60;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    *(undefined4 *)(puVar18 + 4) = 0;
    *(undefined4 *)((longlong)puVar18 + 0x24) = 1;
    puVar18[5] = 0;
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res20);
  return;
}



// FUNCTION 141ae93a0 FUN_141ae93a0 body=1906 status=ok
// SIG undefined FUN_141ae93a0(void)

void FUN_141ae93a0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  int local_res8 [2];
  longlong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined *local_58;
  undefined4 local_50;
  
  local_res10 = param_2;
  local_res18 = param_3;
  lVar9 = FSceneRenderTargets::Get();
  lVar2 = *(longlong *)(lVar9 + 0x2e0);
  lVar3 = *(longlong *)(lVar9 + 0x2e8);
  lVar10 = 0;
  local_res20 = 0;
  if (param_4 != 0) {
    TRefCountPtr<FRHITexture>::operator=(&local_res20,*(undefined8 *)(param_4 + 0x10));
    lVar10 = FUN_141ce4a10(lVar9,param_1);
    lVar10 = *(longlong *)(lVar10 + 0x18);
  }
  lVar8 = local_res20;
  uVar4 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[4] = 2;
  puVar13[5] = 0;
  uVar4 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  puVar13[4] = 2;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = lVar10;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    puVar18[4] = 2;
    puVar18[5] = 0;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x26;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x26;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  iVar17 = 0;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar18;
  *(undefined8 **)(param_1 + 8) = puVar18 + 1;
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_143f59440;
  *(undefined4 *)(puVar18 + 2) = 0;
  puVar18[3] = 0;
  *(undefined4 *)(puVar18 + 4) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x24) = 0xffffffff;
  *(undefined2 *)(puVar18 + 5) = 0;
  puVar18[6] = 0;
  *(undefined4 *)(puVar18 + 7) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x3c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 8) = 0;
  puVar18[9] = 0;
  *(undefined4 *)(puVar18 + 10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x54) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xb) = 0;
  puVar18[0xc] = 0;
  *(undefined4 *)(puVar18 + 0xd) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x6c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xe) = 0;
  puVar18[0xf] = 0;
  *(undefined4 *)(puVar18 + 0x10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x84) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x11) = 0;
  puVar18[0x12] = 0;
  *(undefined4 *)(puVar18 + 0x13) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x9c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x14) = 0;
  puVar18[0x15] = 0;
  *(undefined4 *)(puVar18 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xb4) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x17) = 0;
  puVar18[0x18] = 0;
  *(undefined4 *)(puVar18 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xcc) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x1a) = 0;
  puVar18[0x1b] = 0;
  *(undefined4 *)(puVar18 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar18 + 0xe4) = 0;
  uVar16 = 0;
  if (*(int *)(puVar18 + 2) != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar1 = (undefined4 *)(uVar16 * 0x18);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar12 = puVar18 + uVar16 * 3 + 3;
      *(undefined4 *)puVar12 = *puVar1;
      *(undefined4 *)((longlong)puVar12 + 4) = uVar5;
      *(undefined4 *)(puVar12 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar12 + 0xc) = uVar7;
      puVar18[uVar16 * 3 + 5] = *(undefined8 *)(uVar16 * 0x18 + 0x10);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 2));
    iVar17 = *(int *)(puVar18 + 0x1d);
  }
  uVar16 = 0;
  if (iVar17 != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar18[uVar16 + 0x1e] = *(undefined8 *)(uVar16 * 8);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 0x1d));
  }
  local_58 = &DAT_146a11430;
  local_50 = 0;
  lVar14 = *(longlong *)(local_res10 + 0x3090);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar14 + 0x38,local_res8);
  if (local_res8[0] == -1) {
    lVar14 = 0;
  }
  else {
    lVar14 = (longlong)local_res8[0] * 0x20 + *(longlong *)(lVar14 + 0x38);
  }
  puVar12 = (undefined8 *)(lVar14 + 0x10);
  if (lVar14 == 0) {
    puVar12 = (undefined8 *)0x0;
  }
  uVar4 = *puVar12;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  local_78 = lVar8;
  FUN_141ae5e20(uVar4,param_1,local_res10,local_res18,*(undefined8 *)(lVar2 + 0x18),
                *(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar9 + 0x78),&local_78,lVar10);
  local_70 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_70;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  puVar13[1] = 0;
  local_68 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_68;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    local_60 = lVar10;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = local_60;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    *(undefined4 *)(puVar18 + 4) = 0;
    *(undefined4 *)((longlong)puVar18 + 0x24) = 1;
    puVar18[5] = 0;
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res20);
  return;
}



// FUNCTION 141ae9b20 FUN_141ae9b20 body=1906 status=ok
// SIG undefined FUN_141ae9b20(void)

void FUN_141ae9b20(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  int local_res8 [2];
  longlong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined *local_58;
  undefined4 local_50;
  
  local_res10 = param_2;
  local_res18 = param_3;
  lVar9 = FSceneRenderTargets::Get();
  lVar2 = *(longlong *)(lVar9 + 0x2e0);
  lVar3 = *(longlong *)(lVar9 + 0x2e8);
  lVar10 = 0;
  local_res20 = 0;
  if (param_4 != 0) {
    TRefCountPtr<FRHITexture>::operator=(&local_res20,*(undefined8 *)(param_4 + 0x10));
    lVar10 = FUN_141ce4a10(lVar9,param_1);
    lVar10 = *(longlong *)(lVar10 + 0x18);
  }
  lVar8 = local_res20;
  uVar4 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[4] = 2;
  puVar13[5] = 0;
  uVar4 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  puVar13[4] = 2;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = lVar10;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    puVar18[4] = 2;
    puVar18[5] = 0;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x26;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x26;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  iVar17 = 0;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar18;
  *(undefined8 **)(param_1 + 8) = puVar18 + 1;
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_143f59440;
  *(undefined4 *)(puVar18 + 2) = 0;
  puVar18[3] = 0;
  *(undefined4 *)(puVar18 + 4) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x24) = 0xffffffff;
  *(undefined2 *)(puVar18 + 5) = 0;
  puVar18[6] = 0;
  *(undefined4 *)(puVar18 + 7) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x3c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 8) = 0;
  puVar18[9] = 0;
  *(undefined4 *)(puVar18 + 10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x54) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xb) = 0;
  puVar18[0xc] = 0;
  *(undefined4 *)(puVar18 + 0xd) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x6c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xe) = 0;
  puVar18[0xf] = 0;
  *(undefined4 *)(puVar18 + 0x10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x84) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x11) = 0;
  puVar18[0x12] = 0;
  *(undefined4 *)(puVar18 + 0x13) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x9c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x14) = 0;
  puVar18[0x15] = 0;
  *(undefined4 *)(puVar18 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xb4) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x17) = 0;
  puVar18[0x18] = 0;
  *(undefined4 *)(puVar18 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xcc) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x1a) = 0;
  puVar18[0x1b] = 0;
  *(undefined4 *)(puVar18 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar18 + 0xe4) = 0;
  uVar16 = 0;
  if (*(int *)(puVar18 + 2) != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar1 = (undefined4 *)(uVar16 * 0x18);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar12 = puVar18 + uVar16 * 3 + 3;
      *(undefined4 *)puVar12 = *puVar1;
      *(undefined4 *)((longlong)puVar12 + 4) = uVar5;
      *(undefined4 *)(puVar12 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar12 + 0xc) = uVar7;
      puVar18[uVar16 * 3 + 5] = *(undefined8 *)(uVar16 * 0x18 + 0x10);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 2));
    iVar17 = *(int *)(puVar18 + 0x1d);
  }
  uVar16 = 0;
  if (iVar17 != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar18[uVar16 + 0x1e] = *(undefined8 *)(uVar16 * 8);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 0x1d));
  }
  local_58 = &DAT_146a11580;
  local_50 = 0;
  lVar14 = *(longlong *)(local_res10 + 0x3090);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar14 + 0x38,local_res8);
  if (local_res8[0] == -1) {
    lVar14 = 0;
  }
  else {
    lVar14 = (longlong)local_res8[0] * 0x20 + *(longlong *)(lVar14 + 0x38);
  }
  puVar12 = (undefined8 *)(lVar14 + 0x10);
  if (lVar14 == 0) {
    puVar12 = (undefined8 *)0x0;
  }
  uVar4 = *puVar12;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  local_78 = lVar8;
  FUN_141ae5e20(uVar4,param_1,local_res10,local_res18,*(undefined8 *)(lVar2 + 0x18),
                *(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar9 + 0x78),&local_78,lVar10);
  local_70 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_70;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  puVar13[1] = 0;
  local_68 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_68;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    local_60 = lVar10;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = local_60;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    *(undefined4 *)(puVar18 + 4) = 0;
    *(undefined4 *)((longlong)puVar18 + 0x24) = 1;
    puVar18[5] = 0;
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res20);
  return;
}



// FUNCTION 141aea2a0 FUN_141aea2a0 body=1906 status=ok
// SIG undefined FUN_141aea2a0(void)

void FUN_141aea2a0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  int local_res8 [2];
  longlong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined *local_58;
  undefined4 local_50;
  
  local_res10 = param_2;
  local_res18 = param_3;
  lVar9 = FSceneRenderTargets::Get();
  lVar2 = *(longlong *)(lVar9 + 0x2e0);
  lVar3 = *(longlong *)(lVar9 + 0x2e8);
  lVar10 = 0;
  local_res20 = 0;
  if (param_4 != 0) {
    TRefCountPtr<FRHITexture>::operator=(&local_res20,*(undefined8 *)(param_4 + 0x10));
    lVar10 = FUN_141ce4a10(lVar9,param_1);
    lVar10 = *(longlong *)(lVar10 + 0x18);
  }
  lVar8 = local_res20;
  uVar4 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[4] = 2;
  puVar13[5] = 0;
  uVar4 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  puVar13[4] = 2;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = lVar10;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    puVar18[4] = 2;
    puVar18[5] = 0;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x26;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x26;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  iVar17 = 0;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar18;
  *(undefined8 **)(param_1 + 8) = puVar18 + 1;
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_143f59440;
  *(undefined4 *)(puVar18 + 2) = 0;
  puVar18[3] = 0;
  *(undefined4 *)(puVar18 + 4) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x24) = 0xffffffff;
  *(undefined2 *)(puVar18 + 5) = 0;
  puVar18[6] = 0;
  *(undefined4 *)(puVar18 + 7) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x3c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 8) = 0;
  puVar18[9] = 0;
  *(undefined4 *)(puVar18 + 10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x54) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xb) = 0;
  puVar18[0xc] = 0;
  *(undefined4 *)(puVar18 + 0xd) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x6c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xe) = 0;
  puVar18[0xf] = 0;
  *(undefined4 *)(puVar18 + 0x10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x84) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x11) = 0;
  puVar18[0x12] = 0;
  *(undefined4 *)(puVar18 + 0x13) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x9c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x14) = 0;
  puVar18[0x15] = 0;
  *(undefined4 *)(puVar18 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xb4) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x17) = 0;
  puVar18[0x18] = 0;
  *(undefined4 *)(puVar18 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xcc) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x1a) = 0;
  puVar18[0x1b] = 0;
  *(undefined4 *)(puVar18 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar18 + 0xe4) = 0;
  uVar16 = 0;
  if (*(int *)(puVar18 + 2) != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar1 = (undefined4 *)(uVar16 * 0x18);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar12 = puVar18 + uVar16 * 3 + 3;
      *(undefined4 *)puVar12 = *puVar1;
      *(undefined4 *)((longlong)puVar12 + 4) = uVar5;
      *(undefined4 *)(puVar12 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar12 + 0xc) = uVar7;
      puVar18[uVar16 * 3 + 5] = *(undefined8 *)(uVar16 * 0x18 + 0x10);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 2));
    iVar17 = *(int *)(puVar18 + 0x1d);
  }
  uVar16 = 0;
  if (iVar17 != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar18[uVar16 + 0x1e] = *(undefined8 *)(uVar16 * 8);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 0x1d));
  }
  local_58 = &DAT_146a11c10;
  local_50 = 0;
  lVar14 = *(longlong *)(local_res10 + 0x3090);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar14 + 0x38,local_res8);
  if (local_res8[0] == -1) {
    lVar14 = 0;
  }
  else {
    lVar14 = (longlong)local_res8[0] * 0x20 + *(longlong *)(lVar14 + 0x38);
  }
  puVar12 = (undefined8 *)(lVar14 + 0x10);
  if (lVar14 == 0) {
    puVar12 = (undefined8 *)0x0;
  }
  uVar4 = *puVar12;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  local_78 = lVar8;
  FUN_141ae5c20(uVar4,param_1,local_res10,local_res18,*(undefined8 *)(lVar2 + 0x18),
                *(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar9 + 0x78),&local_78,lVar10);
  local_70 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_70;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  puVar13[1] = 0;
  local_68 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_68;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    local_60 = lVar10;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = local_60;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    *(undefined4 *)(puVar18 + 4) = 0;
    *(undefined4 *)((longlong)puVar18 + 0x24) = 1;
    puVar18[5] = 0;
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res20);
  return;
}



// FUNCTION 141aeaa20 FUN_141aeaa20 body=1906 status=ok
// SIG undefined FUN_141aeaa20(void)

void FUN_141aeaa20(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  int local_res8 [2];
  longlong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined *local_58;
  undefined4 local_50;
  
  local_res10 = param_2;
  local_res18 = param_3;
  lVar9 = FSceneRenderTargets::Get();
  lVar2 = *(longlong *)(lVar9 + 0x2e0);
  lVar3 = *(longlong *)(lVar9 + 0x2e8);
  lVar10 = 0;
  local_res20 = 0;
  if (param_4 != 0) {
    TRefCountPtr<FRHITexture>::operator=(&local_res20,*(undefined8 *)(param_4 + 0x10));
    lVar10 = FUN_141ce4a10(lVar9,param_1);
    lVar10 = *(longlong *)(lVar10 + 0x18);
  }
  lVar8 = local_res20;
  uVar4 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[4] = 2;
  puVar13[5] = 0;
  uVar4 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  puVar13[4] = 2;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = lVar10;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    puVar18[4] = 2;
    puVar18[5] = 0;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x26;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x26;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  iVar17 = 0;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar18;
  *(undefined8 **)(param_1 + 8) = puVar18 + 1;
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_143f59440;
  *(undefined4 *)(puVar18 + 2) = 0;
  puVar18[3] = 0;
  *(undefined4 *)(puVar18 + 4) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x24) = 0xffffffff;
  *(undefined2 *)(puVar18 + 5) = 0;
  puVar18[6] = 0;
  *(undefined4 *)(puVar18 + 7) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x3c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 8) = 0;
  puVar18[9] = 0;
  *(undefined4 *)(puVar18 + 10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x54) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xb) = 0;
  puVar18[0xc] = 0;
  *(undefined4 *)(puVar18 + 0xd) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x6c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xe) = 0;
  puVar18[0xf] = 0;
  *(undefined4 *)(puVar18 + 0x10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x84) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x11) = 0;
  puVar18[0x12] = 0;
  *(undefined4 *)(puVar18 + 0x13) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x9c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x14) = 0;
  puVar18[0x15] = 0;
  *(undefined4 *)(puVar18 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xb4) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x17) = 0;
  puVar18[0x18] = 0;
  *(undefined4 *)(puVar18 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xcc) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x1a) = 0;
  puVar18[0x1b] = 0;
  *(undefined4 *)(puVar18 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar18 + 0xe4) = 0;
  uVar16 = 0;
  if (*(int *)(puVar18 + 2) != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar1 = (undefined4 *)(uVar16 * 0x18);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar12 = puVar18 + uVar16 * 3 + 3;
      *(undefined4 *)puVar12 = *puVar1;
      *(undefined4 *)((longlong)puVar12 + 4) = uVar5;
      *(undefined4 *)(puVar12 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar12 + 0xc) = uVar7;
      puVar18[uVar16 * 3 + 5] = *(undefined8 *)(uVar16 * 0x18 + 0x10);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 2));
    iVar17 = *(int *)(puVar18 + 0x1d);
  }
  uVar16 = 0;
  if (iVar17 != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar18[uVar16 + 0x1e] = *(undefined8 *)(uVar16 * 8);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 0x1d));
  }
  local_58 = &DAT_146a11d60;
  local_50 = 0;
  lVar14 = *(longlong *)(local_res10 + 0x3090);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar14 + 0x38,local_res8);
  if (local_res8[0] == -1) {
    lVar14 = 0;
  }
  else {
    lVar14 = (longlong)local_res8[0] * 0x20 + *(longlong *)(lVar14 + 0x38);
  }
  puVar12 = (undefined8 *)(lVar14 + 0x10);
  if (lVar14 == 0) {
    puVar12 = (undefined8 *)0x0;
  }
  uVar4 = *puVar12;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  local_78 = lVar8;
  FUN_141ae5c20(uVar4,param_1,local_res10,local_res18,*(undefined8 *)(lVar2 + 0x18),
                *(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar9 + 0x78),&local_78,lVar10);
  local_70 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_70;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  puVar13[1] = 0;
  local_68 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_68;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    local_60 = lVar10;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = local_60;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    *(undefined4 *)(puVar18 + 4) = 0;
    *(undefined4 *)((longlong)puVar18 + 0x24) = 1;
    puVar18[5] = 0;
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res20);
  return;
}



// FUNCTION 141aeb1a0 FUN_141aeb1a0 body=1906 status=ok
// SIG undefined FUN_141aeb1a0(void)

void FUN_141aeb1a0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  int local_res8 [2];
  longlong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined *local_58;
  undefined4 local_50;
  
  local_res10 = param_2;
  local_res18 = param_3;
  lVar9 = FSceneRenderTargets::Get();
  lVar2 = *(longlong *)(lVar9 + 0x2e0);
  lVar3 = *(longlong *)(lVar9 + 0x2e8);
  lVar10 = 0;
  local_res20 = 0;
  if (param_4 != 0) {
    TRefCountPtr<FRHITexture>::operator=(&local_res20,*(undefined8 *)(param_4 + 0x10));
    lVar10 = FUN_141ce4a10(lVar9,param_1);
    lVar10 = *(longlong *)(lVar10 + 0x18);
  }
  lVar8 = local_res20;
  uVar4 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[4] = 2;
  puVar13[5] = 0;
  uVar4 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  puVar13[4] = 2;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = lVar10;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    puVar18[4] = 2;
    puVar18[5] = 0;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x26;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x26;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  iVar17 = 0;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar18;
  *(undefined8 **)(param_1 + 8) = puVar18 + 1;
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_143f59440;
  *(undefined4 *)(puVar18 + 2) = 0;
  puVar18[3] = 0;
  *(undefined4 *)(puVar18 + 4) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x24) = 0xffffffff;
  *(undefined2 *)(puVar18 + 5) = 0;
  puVar18[6] = 0;
  *(undefined4 *)(puVar18 + 7) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x3c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 8) = 0;
  puVar18[9] = 0;
  *(undefined4 *)(puVar18 + 10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x54) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xb) = 0;
  puVar18[0xc] = 0;
  *(undefined4 *)(puVar18 + 0xd) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x6c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xe) = 0;
  puVar18[0xf] = 0;
  *(undefined4 *)(puVar18 + 0x10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x84) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x11) = 0;
  puVar18[0x12] = 0;
  *(undefined4 *)(puVar18 + 0x13) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x9c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x14) = 0;
  puVar18[0x15] = 0;
  *(undefined4 *)(puVar18 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xb4) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x17) = 0;
  puVar18[0x18] = 0;
  *(undefined4 *)(puVar18 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xcc) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x1a) = 0;
  puVar18[0x1b] = 0;
  *(undefined4 *)(puVar18 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar18 + 0xe4) = 0;
  uVar16 = 0;
  if (*(int *)(puVar18 + 2) != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar1 = (undefined4 *)(uVar16 * 0x18);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar12 = puVar18 + uVar16 * 3 + 3;
      *(undefined4 *)puVar12 = *puVar1;
      *(undefined4 *)((longlong)puVar12 + 4) = uVar5;
      *(undefined4 *)(puVar12 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar12 + 0xc) = uVar7;
      puVar18[uVar16 * 3 + 5] = *(undefined8 *)(uVar16 * 0x18 + 0x10);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 2));
    iVar17 = *(int *)(puVar18 + 0x1d);
  }
  uVar16 = 0;
  if (iVar17 != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar18[uVar16 + 0x1e] = *(undefined8 *)(uVar16 * 8);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 0x1d));
  }
  local_58 = &DAT_146a11970;
  local_50 = 0;
  lVar14 = *(longlong *)(local_res10 + 0x3090);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar14 + 0x38,local_res8);
  if (local_res8[0] == -1) {
    lVar14 = 0;
  }
  else {
    lVar14 = (longlong)local_res8[0] * 0x20 + *(longlong *)(lVar14 + 0x38);
  }
  puVar12 = (undefined8 *)(lVar14 + 0x10);
  if (lVar14 == 0) {
    puVar12 = (undefined8 *)0x0;
  }
  uVar4 = *puVar12;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  local_78 = lVar8;
  FUN_141ae5e20(uVar4,param_1,local_res10,local_res18,*(undefined8 *)(lVar2 + 0x18),
                *(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar9 + 0x78),&local_78,lVar10);
  local_70 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_70;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  puVar13[1] = 0;
  local_68 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_68;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    local_60 = lVar10;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = local_60;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    *(undefined4 *)(puVar18 + 4) = 0;
    *(undefined4 *)((longlong)puVar18 + 0x24) = 1;
    puVar18[5] = 0;
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res20);
  return;
}



// FUNCTION 141aeb920 FUN_141aeb920 body=1906 status=ok
// SIG undefined FUN_141aeb920(void)

void FUN_141aeb920(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  int local_res8 [2];
  longlong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined *local_58;
  undefined4 local_50;
  
  local_res10 = param_2;
  local_res18 = param_3;
  lVar9 = FSceneRenderTargets::Get();
  lVar2 = *(longlong *)(lVar9 + 0x2e0);
  lVar3 = *(longlong *)(lVar9 + 0x2e8);
  lVar10 = 0;
  local_res20 = 0;
  if (param_4 != 0) {
    TRefCountPtr<FRHITexture>::operator=(&local_res20,*(undefined8 *)(param_4 + 0x10));
    lVar10 = FUN_141ce4a10(lVar9,param_1);
    lVar10 = *(longlong *)(lVar10 + 0x18);
  }
  lVar8 = local_res20;
  uVar4 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[4] = 2;
  puVar13[5] = 0;
  uVar4 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  puVar13[4] = 2;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = lVar10;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    puVar18[4] = 2;
    puVar18[5] = 0;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x26;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x26;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  iVar17 = 0;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar18;
  *(undefined8 **)(param_1 + 8) = puVar18 + 1;
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_143f59440;
  *(undefined4 *)(puVar18 + 2) = 0;
  puVar18[3] = 0;
  *(undefined4 *)(puVar18 + 4) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x24) = 0xffffffff;
  *(undefined2 *)(puVar18 + 5) = 0;
  puVar18[6] = 0;
  *(undefined4 *)(puVar18 + 7) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x3c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 8) = 0;
  puVar18[9] = 0;
  *(undefined4 *)(puVar18 + 10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x54) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xb) = 0;
  puVar18[0xc] = 0;
  *(undefined4 *)(puVar18 + 0xd) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x6c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xe) = 0;
  puVar18[0xf] = 0;
  *(undefined4 *)(puVar18 + 0x10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x84) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x11) = 0;
  puVar18[0x12] = 0;
  *(undefined4 *)(puVar18 + 0x13) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x9c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x14) = 0;
  puVar18[0x15] = 0;
  *(undefined4 *)(puVar18 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xb4) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x17) = 0;
  puVar18[0x18] = 0;
  *(undefined4 *)(puVar18 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xcc) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x1a) = 0;
  puVar18[0x1b] = 0;
  *(undefined4 *)(puVar18 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar18 + 0xe4) = 0;
  uVar16 = 0;
  if (*(int *)(puVar18 + 2) != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar1 = (undefined4 *)(uVar16 * 0x18);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar12 = puVar18 + uVar16 * 3 + 3;
      *(undefined4 *)puVar12 = *puVar1;
      *(undefined4 *)((longlong)puVar12 + 4) = uVar5;
      *(undefined4 *)(puVar12 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar12 + 0xc) = uVar7;
      puVar18[uVar16 * 3 + 5] = *(undefined8 *)(uVar16 * 0x18 + 0x10);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 2));
    iVar17 = *(int *)(puVar18 + 0x1d);
  }
  uVar16 = 0;
  if (iVar17 != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar18[uVar16 + 0x1e] = *(undefined8 *)(uVar16 * 8);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 0x1d));
  }
  local_58 = &DAT_146a11ac0;
  local_50 = 0;
  lVar14 = *(longlong *)(local_res10 + 0x3090);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar14 + 0x38,local_res8);
  if (local_res8[0] == -1) {
    lVar14 = 0;
  }
  else {
    lVar14 = (longlong)local_res8[0] * 0x20 + *(longlong *)(lVar14 + 0x38);
  }
  puVar12 = (undefined8 *)(lVar14 + 0x10);
  if (lVar14 == 0) {
    puVar12 = (undefined8 *)0x0;
  }
  uVar4 = *puVar12;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  local_78 = lVar8;
  FUN_141ae5e20(uVar4,param_1,local_res10,local_res18,*(undefined8 *)(lVar2 + 0x18),
                *(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar9 + 0x78),&local_78,lVar10);
  local_70 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_70;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  puVar13[1] = 0;
  local_68 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_68;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    local_60 = lVar10;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = local_60;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    *(undefined4 *)(puVar18 + 4) = 0;
    *(undefined4 *)((longlong)puVar18 + 0x24) = 1;
    puVar18[5] = 0;
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res20);
  return;
}



// FUNCTION 141aec0a0 FUN_141aec0a0 body=1906 status=ok
// SIG undefined FUN_141aec0a0(void)

void FUN_141aec0a0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  int local_res8 [2];
  longlong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined *local_58;
  undefined4 local_50;
  
  local_res10 = param_2;
  local_res18 = param_3;
  lVar9 = FSceneRenderTargets::Get();
  lVar2 = *(longlong *)(lVar9 + 0x2e0);
  lVar3 = *(longlong *)(lVar9 + 0x2e8);
  lVar10 = 0;
  local_res20 = 0;
  if (param_4 != 0) {
    TRefCountPtr<FRHITexture>::operator=(&local_res20,*(undefined8 *)(param_4 + 0x10));
    lVar10 = FUN_141ce4a10(lVar9,param_1);
    lVar10 = *(longlong *)(lVar10 + 0x18);
  }
  lVar8 = local_res20;
  uVar4 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[4] = 2;
  puVar13[5] = 0;
  uVar4 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  puVar13[4] = 2;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = lVar10;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    puVar18[4] = 2;
    puVar18[5] = 0;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x26;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x26;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  iVar17 = 0;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar18;
  *(undefined8 **)(param_1 + 8) = puVar18 + 1;
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_143f59440;
  *(undefined4 *)(puVar18 + 2) = 0;
  puVar18[3] = 0;
  *(undefined4 *)(puVar18 + 4) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x24) = 0xffffffff;
  *(undefined2 *)(puVar18 + 5) = 0;
  puVar18[6] = 0;
  *(undefined4 *)(puVar18 + 7) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x3c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 8) = 0;
  puVar18[9] = 0;
  *(undefined4 *)(puVar18 + 10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x54) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xb) = 0;
  puVar18[0xc] = 0;
  *(undefined4 *)(puVar18 + 0xd) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x6c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xe) = 0;
  puVar18[0xf] = 0;
  *(undefined4 *)(puVar18 + 0x10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x84) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x11) = 0;
  puVar18[0x12] = 0;
  *(undefined4 *)(puVar18 + 0x13) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x9c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x14) = 0;
  puVar18[0x15] = 0;
  *(undefined4 *)(puVar18 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xb4) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x17) = 0;
  puVar18[0x18] = 0;
  *(undefined4 *)(puVar18 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xcc) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x1a) = 0;
  puVar18[0x1b] = 0;
  *(undefined4 *)(puVar18 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar18 + 0xe4) = 0;
  uVar16 = 0;
  if (*(int *)(puVar18 + 2) != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar1 = (undefined4 *)(uVar16 * 0x18);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar12 = puVar18 + uVar16 * 3 + 3;
      *(undefined4 *)puVar12 = *puVar1;
      *(undefined4 *)((longlong)puVar12 + 4) = uVar5;
      *(undefined4 *)(puVar12 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar12 + 0xc) = uVar7;
      puVar18[uVar16 * 3 + 5] = *(undefined8 *)(uVar16 * 0x18 + 0x10);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 2));
    iVar17 = *(int *)(puVar18 + 0x1d);
  }
  uVar16 = 0;
  if (iVar17 != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar18[uVar16 + 0x1e] = *(undefined8 *)(uVar16 * 8);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 0x1d));
  }
  local_58 = &DAT_146a12150;
  local_50 = 0;
  lVar14 = *(longlong *)(local_res10 + 0x3090);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar14 + 0x38,local_res8);
  if (local_res8[0] == -1) {
    lVar14 = 0;
  }
  else {
    lVar14 = (longlong)local_res8[0] * 0x20 + *(longlong *)(lVar14 + 0x38);
  }
  puVar12 = (undefined8 *)(lVar14 + 0x10);
  if (lVar14 == 0) {
    puVar12 = (undefined8 *)0x0;
  }
  uVar4 = *puVar12;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  local_78 = lVar8;
  FUN_141ae5c20(uVar4,param_1,local_res10,local_res18,*(undefined8 *)(lVar2 + 0x18),
                *(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar9 + 0x78),&local_78,lVar10);
  local_70 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_70;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  puVar13[1] = 0;
  local_68 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_68;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    local_60 = lVar10;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = local_60;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    *(undefined4 *)(puVar18 + 4) = 0;
    *(undefined4 *)((longlong)puVar18 + 0x24) = 1;
    puVar18[5] = 0;
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res20);
  return;
}



// FUNCTION 141aec820 FUN_141aec820 body=1906 status=ok
// SIG undefined FUN_141aec820(void)

void FUN_141aec820(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  int local_res8 [2];
  longlong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined *local_58;
  undefined4 local_50;
  
  local_res10 = param_2;
  local_res18 = param_3;
  lVar9 = FSceneRenderTargets::Get();
  lVar2 = *(longlong *)(lVar9 + 0x2e0);
  lVar3 = *(longlong *)(lVar9 + 0x2e8);
  lVar10 = 0;
  local_res20 = 0;
  if (param_4 != 0) {
    TRefCountPtr<FRHITexture>::operator=(&local_res20,*(undefined8 *)(param_4 + 0x10));
    lVar10 = FUN_141ce4a10(lVar9,param_1);
    lVar10 = *(longlong *)(lVar10 + 0x18);
  }
  lVar8 = local_res20;
  uVar4 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[4] = 2;
  puVar13[5] = 0;
  uVar4 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  puVar13[4] = 2;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = lVar10;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    puVar18[4] = 2;
    puVar18[5] = 0;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x26;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x26;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  iVar17 = 0;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar18;
  *(undefined8 **)(param_1 + 8) = puVar18 + 1;
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_143f59440;
  *(undefined4 *)(puVar18 + 2) = 0;
  puVar18[3] = 0;
  *(undefined4 *)(puVar18 + 4) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x24) = 0xffffffff;
  *(undefined2 *)(puVar18 + 5) = 0;
  puVar18[6] = 0;
  *(undefined4 *)(puVar18 + 7) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x3c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 8) = 0;
  puVar18[9] = 0;
  *(undefined4 *)(puVar18 + 10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x54) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xb) = 0;
  puVar18[0xc] = 0;
  *(undefined4 *)(puVar18 + 0xd) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x6c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xe) = 0;
  puVar18[0xf] = 0;
  *(undefined4 *)(puVar18 + 0x10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x84) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x11) = 0;
  puVar18[0x12] = 0;
  *(undefined4 *)(puVar18 + 0x13) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x9c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x14) = 0;
  puVar18[0x15] = 0;
  *(undefined4 *)(puVar18 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xb4) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x17) = 0;
  puVar18[0x18] = 0;
  *(undefined4 *)(puVar18 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xcc) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x1a) = 0;
  puVar18[0x1b] = 0;
  *(undefined4 *)(puVar18 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar18 + 0xe4) = 0;
  uVar16 = 0;
  if (*(int *)(puVar18 + 2) != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar1 = (undefined4 *)(uVar16 * 0x18);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar12 = puVar18 + uVar16 * 3 + 3;
      *(undefined4 *)puVar12 = *puVar1;
      *(undefined4 *)((longlong)puVar12 + 4) = uVar5;
      *(undefined4 *)(puVar12 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar12 + 0xc) = uVar7;
      puVar18[uVar16 * 3 + 5] = *(undefined8 *)(uVar16 * 0x18 + 0x10);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 2));
    iVar17 = *(int *)(puVar18 + 0x1d);
  }
  uVar16 = 0;
  if (iVar17 != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar18[uVar16 + 0x1e] = *(undefined8 *)(uVar16 * 8);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 0x1d));
  }
  local_58 = &DAT_146a122a0;
  local_50 = 0;
  lVar14 = *(longlong *)(local_res10 + 0x3090);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar14 + 0x38,local_res8);
  if (local_res8[0] == -1) {
    lVar14 = 0;
  }
  else {
    lVar14 = (longlong)local_res8[0] * 0x20 + *(longlong *)(lVar14 + 0x38);
  }
  puVar12 = (undefined8 *)(lVar14 + 0x10);
  if (lVar14 == 0) {
    puVar12 = (undefined8 *)0x0;
  }
  uVar4 = *puVar12;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  local_78 = lVar8;
  FUN_141ae5c20(uVar4,param_1,local_res10,local_res18,*(undefined8 *)(lVar2 + 0x18),
                *(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar9 + 0x78),&local_78,lVar10);
  local_70 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_70;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  puVar13[1] = 0;
  local_68 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_68;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    local_60 = lVar10;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = local_60;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    *(undefined4 *)(puVar18 + 4) = 0;
    *(undefined4 *)((longlong)puVar18 + 0x24) = 1;
    puVar18[5] = 0;
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res20);
  return;
}



// FUNCTION 141aecfa0 FUN_141aecfa0 body=1906 status=ok
// SIG undefined FUN_141aecfa0(void)

void FUN_141aecfa0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  int local_res8 [2];
  longlong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined *local_58;
  undefined4 local_50;
  
  local_res10 = param_2;
  local_res18 = param_3;
  lVar9 = FSceneRenderTargets::Get();
  lVar2 = *(longlong *)(lVar9 + 0x2e0);
  lVar3 = *(longlong *)(lVar9 + 0x2e8);
  lVar10 = 0;
  local_res20 = 0;
  if (param_4 != 0) {
    TRefCountPtr<FRHITexture>::operator=(&local_res20,*(undefined8 *)(param_4 + 0x10));
    lVar10 = FUN_141ce4a10(lVar9,param_1);
    lVar10 = *(longlong *)(lVar10 + 0x18);
  }
  lVar8 = local_res20;
  uVar4 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[4] = 2;
  puVar13[5] = 0;
  uVar4 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  puVar13[4] = 2;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = lVar10;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    puVar18[4] = 2;
    puVar18[5] = 0;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x26;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x26;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  iVar17 = 0;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar18;
  *(undefined8 **)(param_1 + 8) = puVar18 + 1;
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_143f59440;
  *(undefined4 *)(puVar18 + 2) = 0;
  puVar18[3] = 0;
  *(undefined4 *)(puVar18 + 4) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x24) = 0xffffffff;
  *(undefined2 *)(puVar18 + 5) = 0;
  puVar18[6] = 0;
  *(undefined4 *)(puVar18 + 7) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x3c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 8) = 0;
  puVar18[9] = 0;
  *(undefined4 *)(puVar18 + 10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x54) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xb) = 0;
  puVar18[0xc] = 0;
  *(undefined4 *)(puVar18 + 0xd) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x6c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xe) = 0;
  puVar18[0xf] = 0;
  *(undefined4 *)(puVar18 + 0x10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x84) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x11) = 0;
  puVar18[0x12] = 0;
  *(undefined4 *)(puVar18 + 0x13) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x9c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x14) = 0;
  puVar18[0x15] = 0;
  *(undefined4 *)(puVar18 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xb4) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x17) = 0;
  puVar18[0x18] = 0;
  *(undefined4 *)(puVar18 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xcc) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x1a) = 0;
  puVar18[0x1b] = 0;
  *(undefined4 *)(puVar18 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar18 + 0xe4) = 0;
  uVar16 = 0;
  if (*(int *)(puVar18 + 2) != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar1 = (undefined4 *)(uVar16 * 0x18);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar12 = puVar18 + uVar16 * 3 + 3;
      *(undefined4 *)puVar12 = *puVar1;
      *(undefined4 *)((longlong)puVar12 + 4) = uVar5;
      *(undefined4 *)(puVar12 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar12 + 0xc) = uVar7;
      puVar18[uVar16 * 3 + 5] = *(undefined8 *)(uVar16 * 0x18 + 0x10);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 2));
    iVar17 = *(int *)(puVar18 + 0x1d);
  }
  uVar16 = 0;
  if (iVar17 != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar18[uVar16 + 0x1e] = *(undefined8 *)(uVar16 * 8);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 0x1d));
  }
  local_58 = &DAT_146a11eb0;
  local_50 = 0;
  lVar14 = *(longlong *)(local_res10 + 0x3090);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar14 + 0x38,local_res8);
  if (local_res8[0] == -1) {
    lVar14 = 0;
  }
  else {
    lVar14 = (longlong)local_res8[0] * 0x20 + *(longlong *)(lVar14 + 0x38);
  }
  puVar12 = (undefined8 *)(lVar14 + 0x10);
  if (lVar14 == 0) {
    puVar12 = (undefined8 *)0x0;
  }
  uVar4 = *puVar12;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  local_78 = lVar8;
  FUN_141ae5e20(uVar4,param_1,local_res10,local_res18,*(undefined8 *)(lVar2 + 0x18),
                *(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar9 + 0x78),&local_78,lVar10);
  local_70 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_70;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  puVar13[1] = 0;
  local_68 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_68;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    local_60 = lVar10;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = local_60;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    *(undefined4 *)(puVar18 + 4) = 0;
    *(undefined4 *)((longlong)puVar18 + 0x24) = 1;
    puVar18[5] = 0;
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res20);
  return;
}



// FUNCTION 141aed720 FUN_141aed720 body=1906 status=ok
// SIG undefined FUN_141aed720(void)

void FUN_141aed720(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  int local_res8 [2];
  longlong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined *local_58;
  undefined4 local_50;
  
  local_res10 = param_2;
  local_res18 = param_3;
  lVar9 = FSceneRenderTargets::Get();
  lVar2 = *(longlong *)(lVar9 + 0x2e0);
  lVar3 = *(longlong *)(lVar9 + 0x2e8);
  lVar10 = 0;
  local_res20 = 0;
  if (param_4 != 0) {
    TRefCountPtr<FRHITexture>::operator=(&local_res20,*(undefined8 *)(param_4 + 0x10));
    lVar10 = FUN_141ce4a10(lVar9,param_1);
    lVar10 = *(longlong *)(lVar10 + 0x18);
  }
  lVar8 = local_res20;
  uVar4 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[4] = 2;
  puVar13[5] = 0;
  uVar4 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  puVar13[4] = 2;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = lVar10;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    puVar18[4] = 2;
    puVar18[5] = 0;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x26;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x26;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  iVar17 = 0;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar18;
  *(undefined8 **)(param_1 + 8) = puVar18 + 1;
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_143f59440;
  *(undefined4 *)(puVar18 + 2) = 0;
  puVar18[3] = 0;
  *(undefined4 *)(puVar18 + 4) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x24) = 0xffffffff;
  *(undefined2 *)(puVar18 + 5) = 0;
  puVar18[6] = 0;
  *(undefined4 *)(puVar18 + 7) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x3c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 8) = 0;
  puVar18[9] = 0;
  *(undefined4 *)(puVar18 + 10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x54) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xb) = 0;
  puVar18[0xc] = 0;
  *(undefined4 *)(puVar18 + 0xd) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x6c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xe) = 0;
  puVar18[0xf] = 0;
  *(undefined4 *)(puVar18 + 0x10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x84) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x11) = 0;
  puVar18[0x12] = 0;
  *(undefined4 *)(puVar18 + 0x13) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x9c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x14) = 0;
  puVar18[0x15] = 0;
  *(undefined4 *)(puVar18 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xb4) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x17) = 0;
  puVar18[0x18] = 0;
  *(undefined4 *)(puVar18 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xcc) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x1a) = 0;
  puVar18[0x1b] = 0;
  *(undefined4 *)(puVar18 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar18 + 0xe4) = 0;
  uVar16 = 0;
  if (*(int *)(puVar18 + 2) != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar1 = (undefined4 *)(uVar16 * 0x18);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar12 = puVar18 + uVar16 * 3 + 3;
      *(undefined4 *)puVar12 = *puVar1;
      *(undefined4 *)((longlong)puVar12 + 4) = uVar5;
      *(undefined4 *)(puVar12 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar12 + 0xc) = uVar7;
      puVar18[uVar16 * 3 + 5] = *(undefined8 *)(uVar16 * 0x18 + 0x10);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 2));
    iVar17 = *(int *)(puVar18 + 0x1d);
  }
  uVar16 = 0;
  if (iVar17 != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar18[uVar16 + 0x1e] = *(undefined8 *)(uVar16 * 8);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 0x1d));
  }
  local_58 = &DAT_146a12000;
  local_50 = 0;
  lVar14 = *(longlong *)(local_res10 + 0x3090);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar14 + 0x38,local_res8);
  if (local_res8[0] == -1) {
    lVar14 = 0;
  }
  else {
    lVar14 = (longlong)local_res8[0] * 0x20 + *(longlong *)(lVar14 + 0x38);
  }
  puVar12 = (undefined8 *)(lVar14 + 0x10);
  if (lVar14 == 0) {
    puVar12 = (undefined8 *)0x0;
  }
  uVar4 = *puVar12;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  local_78 = lVar8;
  FUN_141ae5e20(uVar4,param_1,local_res10,local_res18,*(undefined8 *)(lVar2 + 0x18),
                *(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar9 + 0x78),&local_78,lVar10);
  local_70 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_70;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  puVar13[1] = 0;
  local_68 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_68;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    local_60 = lVar10;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = local_60;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    *(undefined4 *)(puVar18 + 4) = 0;
    *(undefined4 *)((longlong)puVar18 + 0x24) = 1;
    puVar18[5] = 0;
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res20);
  return;
}



// FUNCTION 141aedea0 FUN_141aedea0 body=1906 status=ok
// SIG undefined FUN_141aedea0(void)

void FUN_141aedea0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  int local_res8 [2];
  longlong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined *local_58;
  undefined4 local_50;
  
  local_res10 = param_2;
  local_res18 = param_3;
  lVar9 = FSceneRenderTargets::Get();
  lVar2 = *(longlong *)(lVar9 + 0x2e0);
  lVar3 = *(longlong *)(lVar9 + 0x2e8);
  lVar10 = 0;
  local_res20 = 0;
  if (param_4 != 0) {
    TRefCountPtr<FRHITexture>::operator=(&local_res20,*(undefined8 *)(param_4 + 0x10));
    lVar10 = FUN_141ce4a10(lVar9,param_1);
    lVar10 = *(longlong *)(lVar10 + 0x18);
  }
  lVar8 = local_res20;
  uVar4 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[4] = 2;
  puVar13[5] = 0;
  uVar4 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  puVar13[4] = 2;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = lVar10;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    puVar18[4] = 2;
    puVar18[5] = 0;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x26;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x26;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  iVar17 = 0;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar18;
  *(undefined8 **)(param_1 + 8) = puVar18 + 1;
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_143f59440;
  *(undefined4 *)(puVar18 + 2) = 0;
  puVar18[3] = 0;
  *(undefined4 *)(puVar18 + 4) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x24) = 0xffffffff;
  *(undefined2 *)(puVar18 + 5) = 0;
  puVar18[6] = 0;
  *(undefined4 *)(puVar18 + 7) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x3c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 8) = 0;
  puVar18[9] = 0;
  *(undefined4 *)(puVar18 + 10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x54) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xb) = 0;
  puVar18[0xc] = 0;
  *(undefined4 *)(puVar18 + 0xd) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x6c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xe) = 0;
  puVar18[0xf] = 0;
  *(undefined4 *)(puVar18 + 0x10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x84) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x11) = 0;
  puVar18[0x12] = 0;
  *(undefined4 *)(puVar18 + 0x13) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x9c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x14) = 0;
  puVar18[0x15] = 0;
  *(undefined4 *)(puVar18 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xb4) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x17) = 0;
  puVar18[0x18] = 0;
  *(undefined4 *)(puVar18 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xcc) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x1a) = 0;
  puVar18[0x1b] = 0;
  *(undefined4 *)(puVar18 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar18 + 0xe4) = 0;
  uVar16 = 0;
  if (*(int *)(puVar18 + 2) != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar1 = (undefined4 *)(uVar16 * 0x18);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar12 = puVar18 + uVar16 * 3 + 3;
      *(undefined4 *)puVar12 = *puVar1;
      *(undefined4 *)((longlong)puVar12 + 4) = uVar5;
      *(undefined4 *)(puVar12 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar12 + 0xc) = uVar7;
      puVar18[uVar16 * 3 + 5] = *(undefined8 *)(uVar16 * 0x18 + 0x10);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 2));
    iVar17 = *(int *)(puVar18 + 0x1d);
  }
  uVar16 = 0;
  if (iVar17 != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar18[uVar16 + 0x1e] = *(undefined8 *)(uVar16 * 8);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 0x1d));
  }
  local_58 = &DAT_146a12690;
  local_50 = 0;
  lVar14 = *(longlong *)(local_res10 + 0x3090);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar14 + 0x38,local_res8);
  if (local_res8[0] == -1) {
    lVar14 = 0;
  }
  else {
    lVar14 = (longlong)local_res8[0] * 0x20 + *(longlong *)(lVar14 + 0x38);
  }
  puVar12 = (undefined8 *)(lVar14 + 0x10);
  if (lVar14 == 0) {
    puVar12 = (undefined8 *)0x0;
  }
  uVar4 = *puVar12;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  local_78 = lVar8;
  FUN_141ae5c20(uVar4,param_1,local_res10,local_res18,*(undefined8 *)(lVar2 + 0x18),
                *(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar9 + 0x78),&local_78,lVar10);
  local_70 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_70;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  puVar13[1] = 0;
  local_68 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_68;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    local_60 = lVar10;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = local_60;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    *(undefined4 *)(puVar18 + 4) = 0;
    *(undefined4 *)((longlong)puVar18 + 0x24) = 1;
    puVar18[5] = 0;
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res20);
  return;
}



// FUNCTION 141aee620 FUN_141aee620 body=1906 status=ok
// SIG undefined FUN_141aee620(void)

void FUN_141aee620(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  int local_res8 [2];
  longlong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined *local_58;
  undefined4 local_50;
  
  local_res10 = param_2;
  local_res18 = param_3;
  lVar9 = FSceneRenderTargets::Get();
  lVar2 = *(longlong *)(lVar9 + 0x2e0);
  lVar3 = *(longlong *)(lVar9 + 0x2e8);
  lVar10 = 0;
  local_res20 = 0;
  if (param_4 != 0) {
    TRefCountPtr<FRHITexture>::operator=(&local_res20,*(undefined8 *)(param_4 + 0x10));
    lVar10 = FUN_141ce4a10(lVar9,param_1);
    lVar10 = *(longlong *)(lVar10 + 0x18);
  }
  lVar8 = local_res20;
  uVar4 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[4] = 2;
  puVar13[5] = 0;
  uVar4 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  puVar13[4] = 2;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = lVar10;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    puVar18[4] = 2;
    puVar18[5] = 0;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x26;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x26;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  iVar17 = 0;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar18;
  *(undefined8 **)(param_1 + 8) = puVar18 + 1;
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_143f59440;
  *(undefined4 *)(puVar18 + 2) = 0;
  puVar18[3] = 0;
  *(undefined4 *)(puVar18 + 4) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x24) = 0xffffffff;
  *(undefined2 *)(puVar18 + 5) = 0;
  puVar18[6] = 0;
  *(undefined4 *)(puVar18 + 7) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x3c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 8) = 0;
  puVar18[9] = 0;
  *(undefined4 *)(puVar18 + 10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x54) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xb) = 0;
  puVar18[0xc] = 0;
  *(undefined4 *)(puVar18 + 0xd) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x6c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xe) = 0;
  puVar18[0xf] = 0;
  *(undefined4 *)(puVar18 + 0x10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x84) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x11) = 0;
  puVar18[0x12] = 0;
  *(undefined4 *)(puVar18 + 0x13) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x9c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x14) = 0;
  puVar18[0x15] = 0;
  *(undefined4 *)(puVar18 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xb4) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x17) = 0;
  puVar18[0x18] = 0;
  *(undefined4 *)(puVar18 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xcc) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x1a) = 0;
  puVar18[0x1b] = 0;
  *(undefined4 *)(puVar18 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar18 + 0xe4) = 0;
  uVar16 = 0;
  if (*(int *)(puVar18 + 2) != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar1 = (undefined4 *)(uVar16 * 0x18);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar12 = puVar18 + uVar16 * 3 + 3;
      *(undefined4 *)puVar12 = *puVar1;
      *(undefined4 *)((longlong)puVar12 + 4) = uVar5;
      *(undefined4 *)(puVar12 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar12 + 0xc) = uVar7;
      puVar18[uVar16 * 3 + 5] = *(undefined8 *)(uVar16 * 0x18 + 0x10);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 2));
    iVar17 = *(int *)(puVar18 + 0x1d);
  }
  uVar16 = 0;
  if (iVar17 != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar18[uVar16 + 0x1e] = *(undefined8 *)(uVar16 * 8);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 0x1d));
  }
  local_58 = &DAT_146a127e0;
  local_50 = 0;
  lVar14 = *(longlong *)(local_res10 + 0x3090);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar14 + 0x38,local_res8);
  if (local_res8[0] == -1) {
    lVar14 = 0;
  }
  else {
    lVar14 = (longlong)local_res8[0] * 0x20 + *(longlong *)(lVar14 + 0x38);
  }
  puVar12 = (undefined8 *)(lVar14 + 0x10);
  if (lVar14 == 0) {
    puVar12 = (undefined8 *)0x0;
  }
  uVar4 = *puVar12;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  local_78 = lVar8;
  FUN_141ae5c20(uVar4,param_1,local_res10,local_res18,*(undefined8 *)(lVar2 + 0x18),
                *(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar9 + 0x78),&local_78,lVar10);
  local_70 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_70;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  puVar13[1] = 0;
  local_68 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_68;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    local_60 = lVar10;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = local_60;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    *(undefined4 *)(puVar18 + 4) = 0;
    *(undefined4 *)((longlong)puVar18 + 0x24) = 1;
    puVar18[5] = 0;
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res20);
  return;
}



// FUNCTION 141aeeda0 FUN_141aeeda0 body=1906 status=ok
// SIG undefined FUN_141aeeda0(void)

void FUN_141aeeda0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  int local_res8 [2];
  longlong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined *local_58;
  undefined4 local_50;
  
  local_res10 = param_2;
  local_res18 = param_3;
  lVar9 = FSceneRenderTargets::Get();
  lVar2 = *(longlong *)(lVar9 + 0x2e0);
  lVar3 = *(longlong *)(lVar9 + 0x2e8);
  lVar10 = 0;
  local_res20 = 0;
  if (param_4 != 0) {
    TRefCountPtr<FRHITexture>::operator=(&local_res20,*(undefined8 *)(param_4 + 0x10));
    lVar10 = FUN_141ce4a10(lVar9,param_1);
    lVar10 = *(longlong *)(lVar10 + 0x18);
  }
  lVar8 = local_res20;
  uVar4 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[4] = 2;
  puVar13[5] = 0;
  uVar4 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  puVar13[4] = 2;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = lVar10;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    puVar18[4] = 2;
    puVar18[5] = 0;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x26;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x26;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  iVar17 = 0;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar18;
  *(undefined8 **)(param_1 + 8) = puVar18 + 1;
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_143f59440;
  *(undefined4 *)(puVar18 + 2) = 0;
  puVar18[3] = 0;
  *(undefined4 *)(puVar18 + 4) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x24) = 0xffffffff;
  *(undefined2 *)(puVar18 + 5) = 0;
  puVar18[6] = 0;
  *(undefined4 *)(puVar18 + 7) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x3c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 8) = 0;
  puVar18[9] = 0;
  *(undefined4 *)(puVar18 + 10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x54) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xb) = 0;
  puVar18[0xc] = 0;
  *(undefined4 *)(puVar18 + 0xd) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x6c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xe) = 0;
  puVar18[0xf] = 0;
  *(undefined4 *)(puVar18 + 0x10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x84) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x11) = 0;
  puVar18[0x12] = 0;
  *(undefined4 *)(puVar18 + 0x13) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x9c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x14) = 0;
  puVar18[0x15] = 0;
  *(undefined4 *)(puVar18 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xb4) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x17) = 0;
  puVar18[0x18] = 0;
  *(undefined4 *)(puVar18 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xcc) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x1a) = 0;
  puVar18[0x1b] = 0;
  *(undefined4 *)(puVar18 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar18 + 0xe4) = 0;
  uVar16 = 0;
  if (*(int *)(puVar18 + 2) != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar1 = (undefined4 *)(uVar16 * 0x18);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar12 = puVar18 + uVar16 * 3 + 3;
      *(undefined4 *)puVar12 = *puVar1;
      *(undefined4 *)((longlong)puVar12 + 4) = uVar5;
      *(undefined4 *)(puVar12 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar12 + 0xc) = uVar7;
      puVar18[uVar16 * 3 + 5] = *(undefined8 *)(uVar16 * 0x18 + 0x10);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 2));
    iVar17 = *(int *)(puVar18 + 0x1d);
  }
  uVar16 = 0;
  if (iVar17 != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar18[uVar16 + 0x1e] = *(undefined8 *)(uVar16 * 8);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 0x1d));
  }
  local_58 = &DAT_146a123f0;
  local_50 = 0;
  lVar14 = *(longlong *)(local_res10 + 0x3090);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar14 + 0x38,local_res8);
  if (local_res8[0] == -1) {
    lVar14 = 0;
  }
  else {
    lVar14 = (longlong)local_res8[0] * 0x20 + *(longlong *)(lVar14 + 0x38);
  }
  puVar12 = (undefined8 *)(lVar14 + 0x10);
  if (lVar14 == 0) {
    puVar12 = (undefined8 *)0x0;
  }
  uVar4 = *puVar12;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  local_78 = lVar8;
  FUN_141ae5e20(uVar4,param_1,local_res10,local_res18,*(undefined8 *)(lVar2 + 0x18),
                *(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar9 + 0x78),&local_78,lVar10);
  local_70 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_70;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  puVar13[1] = 0;
  local_68 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_68;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    local_60 = lVar10;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = local_60;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    *(undefined4 *)(puVar18 + 4) = 0;
    *(undefined4 *)((longlong)puVar18 + 0x24) = 1;
    puVar18[5] = 0;
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res20);
  return;
}



// FUNCTION 141aef520 FUN_141aef520 body=1906 status=ok
// SIG undefined FUN_141aef520(void)

void FUN_141aef520(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  int local_res8 [2];
  longlong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined *local_58;
  undefined4 local_50;
  
  local_res10 = param_2;
  local_res18 = param_3;
  lVar9 = FSceneRenderTargets::Get();
  lVar2 = *(longlong *)(lVar9 + 0x2e0);
  lVar3 = *(longlong *)(lVar9 + 0x2e8);
  lVar10 = 0;
  local_res20 = 0;
  if (param_4 != 0) {
    TRefCountPtr<FRHITexture>::operator=(&local_res20,*(undefined8 *)(param_4 + 0x10));
    lVar10 = FUN_141ce4a10(lVar9,param_1);
    lVar10 = *(longlong *)(lVar10 + 0x18);
  }
  lVar8 = local_res20;
  uVar4 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[4] = 2;
  puVar13[5] = 0;
  uVar4 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  puVar13[4] = 2;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = lVar10;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    puVar18[4] = 2;
    puVar18[5] = 0;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x26;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x26;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  iVar17 = 0;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar18;
  *(undefined8 **)(param_1 + 8) = puVar18 + 1;
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_143f59440;
  *(undefined4 *)(puVar18 + 2) = 0;
  puVar18[3] = 0;
  *(undefined4 *)(puVar18 + 4) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x24) = 0xffffffff;
  *(undefined2 *)(puVar18 + 5) = 0;
  puVar18[6] = 0;
  *(undefined4 *)(puVar18 + 7) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x3c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 8) = 0;
  puVar18[9] = 0;
  *(undefined4 *)(puVar18 + 10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x54) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xb) = 0;
  puVar18[0xc] = 0;
  *(undefined4 *)(puVar18 + 0xd) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x6c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xe) = 0;
  puVar18[0xf] = 0;
  *(undefined4 *)(puVar18 + 0x10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x84) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x11) = 0;
  puVar18[0x12] = 0;
  *(undefined4 *)(puVar18 + 0x13) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x9c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x14) = 0;
  puVar18[0x15] = 0;
  *(undefined4 *)(puVar18 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xb4) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x17) = 0;
  puVar18[0x18] = 0;
  *(undefined4 *)(puVar18 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xcc) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x1a) = 0;
  puVar18[0x1b] = 0;
  *(undefined4 *)(puVar18 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar18 + 0xe4) = 0;
  uVar16 = 0;
  if (*(int *)(puVar18 + 2) != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar1 = (undefined4 *)(uVar16 * 0x18);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar12 = puVar18 + uVar16 * 3 + 3;
      *(undefined4 *)puVar12 = *puVar1;
      *(undefined4 *)((longlong)puVar12 + 4) = uVar5;
      *(undefined4 *)(puVar12 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar12 + 0xc) = uVar7;
      puVar18[uVar16 * 3 + 5] = *(undefined8 *)(uVar16 * 0x18 + 0x10);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 2));
    iVar17 = *(int *)(puVar18 + 0x1d);
  }
  uVar16 = 0;
  if (iVar17 != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar18[uVar16 + 0x1e] = *(undefined8 *)(uVar16 * 8);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 0x1d));
  }
  local_58 = &DAT_146a12540;
  local_50 = 0;
  lVar14 = *(longlong *)(local_res10 + 0x3090);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar14 + 0x38,local_res8);
  if (local_res8[0] == -1) {
    lVar14 = 0;
  }
  else {
    lVar14 = (longlong)local_res8[0] * 0x20 + *(longlong *)(lVar14 + 0x38);
  }
  puVar12 = (undefined8 *)(lVar14 + 0x10);
  if (lVar14 == 0) {
    puVar12 = (undefined8 *)0x0;
  }
  uVar4 = *puVar12;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  local_78 = lVar8;
  FUN_141ae5e20(uVar4,param_1,local_res10,local_res18,*(undefined8 *)(lVar2 + 0x18),
                *(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar9 + 0x78),&local_78,lVar10);
  local_70 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_70;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  puVar13[1] = 0;
  local_68 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_68;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    local_60 = lVar10;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = local_60;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    *(undefined4 *)(puVar18 + 4) = 0;
    *(undefined4 *)((longlong)puVar18 + 0x24) = 1;
    puVar18[5] = 0;
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res20);
  return;
}



// FUNCTION 141aefca0 FUN_141aefca0 body=1906 status=ok
// SIG undefined FUN_141aefca0(void)

void FUN_141aefca0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  int local_res8 [2];
  longlong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined *local_58;
  undefined4 local_50;
  
  local_res10 = param_2;
  local_res18 = param_3;
  lVar9 = FSceneRenderTargets::Get();
  lVar2 = *(longlong *)(lVar9 + 0x2e0);
  lVar3 = *(longlong *)(lVar9 + 0x2e8);
  lVar10 = 0;
  local_res20 = 0;
  if (param_4 != 0) {
    TRefCountPtr<FRHITexture>::operator=(&local_res20,*(undefined8 *)(param_4 + 0x10));
    lVar10 = FUN_141ce4a10(lVar9,param_1);
    lVar10 = *(longlong *)(lVar10 + 0x18);
  }
  lVar8 = local_res20;
  uVar4 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[4] = 2;
  puVar13[5] = 0;
  uVar4 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  puVar13[4] = 2;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = lVar10;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    puVar18[4] = 2;
    puVar18[5] = 0;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x26;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x26;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  iVar17 = 0;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar18;
  *(undefined8 **)(param_1 + 8) = puVar18 + 1;
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_143f59440;
  *(undefined4 *)(puVar18 + 2) = 0;
  puVar18[3] = 0;
  *(undefined4 *)(puVar18 + 4) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x24) = 0xffffffff;
  *(undefined2 *)(puVar18 + 5) = 0;
  puVar18[6] = 0;
  *(undefined4 *)(puVar18 + 7) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x3c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 8) = 0;
  puVar18[9] = 0;
  *(undefined4 *)(puVar18 + 10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x54) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xb) = 0;
  puVar18[0xc] = 0;
  *(undefined4 *)(puVar18 + 0xd) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x6c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xe) = 0;
  puVar18[0xf] = 0;
  *(undefined4 *)(puVar18 + 0x10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x84) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x11) = 0;
  puVar18[0x12] = 0;
  *(undefined4 *)(puVar18 + 0x13) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x9c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x14) = 0;
  puVar18[0x15] = 0;
  *(undefined4 *)(puVar18 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xb4) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x17) = 0;
  puVar18[0x18] = 0;
  *(undefined4 *)(puVar18 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xcc) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x1a) = 0;
  puVar18[0x1b] = 0;
  *(undefined4 *)(puVar18 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar18 + 0xe4) = 0;
  uVar16 = 0;
  if (*(int *)(puVar18 + 2) != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar1 = (undefined4 *)(uVar16 * 0x18);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar12 = puVar18 + uVar16 * 3 + 3;
      *(undefined4 *)puVar12 = *puVar1;
      *(undefined4 *)((longlong)puVar12 + 4) = uVar5;
      *(undefined4 *)(puVar12 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar12 + 0xc) = uVar7;
      puVar18[uVar16 * 3 + 5] = *(undefined8 *)(uVar16 * 0x18 + 0x10);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 2));
    iVar17 = *(int *)(puVar18 + 0x1d);
  }
  uVar16 = 0;
  if (iVar17 != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar18[uVar16 + 0x1e] = *(undefined8 *)(uVar16 * 8);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 0x1d));
  }
  local_58 = &DAT_146a12bd0;
  local_50 = 0;
  lVar14 = *(longlong *)(local_res10 + 0x3090);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar14 + 0x38,local_res8);
  if (local_res8[0] == -1) {
    lVar14 = 0;
  }
  else {
    lVar14 = (longlong)local_res8[0] * 0x20 + *(longlong *)(lVar14 + 0x38);
  }
  puVar12 = (undefined8 *)(lVar14 + 0x10);
  if (lVar14 == 0) {
    puVar12 = (undefined8 *)0x0;
  }
  uVar4 = *puVar12;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  local_78 = lVar8;
  FUN_141ae5c20(uVar4,param_1,local_res10,local_res18,*(undefined8 *)(lVar2 + 0x18),
                *(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar9 + 0x78),&local_78,lVar10);
  local_70 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_70;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  puVar13[1] = 0;
  local_68 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_68;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    local_60 = lVar10;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = local_60;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    *(undefined4 *)(puVar18 + 4) = 0;
    *(undefined4 *)((longlong)puVar18 + 0x24) = 1;
    puVar18[5] = 0;
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res20);
  return;
}



// FUNCTION 141af0420 FUN_141af0420 body=1906 status=ok
// SIG undefined FUN_141af0420(void)

void FUN_141af0420(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  int local_res8 [2];
  longlong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined *local_58;
  undefined4 local_50;
  
  local_res10 = param_2;
  local_res18 = param_3;
  lVar9 = FSceneRenderTargets::Get();
  lVar2 = *(longlong *)(lVar9 + 0x2e0);
  lVar3 = *(longlong *)(lVar9 + 0x2e8);
  lVar10 = 0;
  local_res20 = 0;
  if (param_4 != 0) {
    TRefCountPtr<FRHITexture>::operator=(&local_res20,*(undefined8 *)(param_4 + 0x10));
    lVar10 = FUN_141ce4a10(lVar9,param_1);
    lVar10 = *(longlong *)(lVar10 + 0x18);
  }
  lVar8 = local_res20;
  uVar4 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[4] = 2;
  puVar13[5] = 0;
  uVar4 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  puVar13[4] = 2;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = lVar10;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    puVar18[4] = 2;
    puVar18[5] = 0;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x26;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x26;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  iVar17 = 0;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar18;
  *(undefined8 **)(param_1 + 8) = puVar18 + 1;
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_143f59440;
  *(undefined4 *)(puVar18 + 2) = 0;
  puVar18[3] = 0;
  *(undefined4 *)(puVar18 + 4) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x24) = 0xffffffff;
  *(undefined2 *)(puVar18 + 5) = 0;
  puVar18[6] = 0;
  *(undefined4 *)(puVar18 + 7) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x3c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 8) = 0;
  puVar18[9] = 0;
  *(undefined4 *)(puVar18 + 10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x54) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xb) = 0;
  puVar18[0xc] = 0;
  *(undefined4 *)(puVar18 + 0xd) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x6c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xe) = 0;
  puVar18[0xf] = 0;
  *(undefined4 *)(puVar18 + 0x10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x84) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x11) = 0;
  puVar18[0x12] = 0;
  *(undefined4 *)(puVar18 + 0x13) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x9c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x14) = 0;
  puVar18[0x15] = 0;
  *(undefined4 *)(puVar18 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xb4) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x17) = 0;
  puVar18[0x18] = 0;
  *(undefined4 *)(puVar18 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xcc) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x1a) = 0;
  puVar18[0x1b] = 0;
  *(undefined4 *)(puVar18 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar18 + 0xe4) = 0;
  uVar16 = 0;
  if (*(int *)(puVar18 + 2) != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar1 = (undefined4 *)(uVar16 * 0x18);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar12 = puVar18 + uVar16 * 3 + 3;
      *(undefined4 *)puVar12 = *puVar1;
      *(undefined4 *)((longlong)puVar12 + 4) = uVar5;
      *(undefined4 *)(puVar12 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar12 + 0xc) = uVar7;
      puVar18[uVar16 * 3 + 5] = *(undefined8 *)(uVar16 * 0x18 + 0x10);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 2));
    iVar17 = *(int *)(puVar18 + 0x1d);
  }
  uVar16 = 0;
  if (iVar17 != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar18[uVar16 + 0x1e] = *(undefined8 *)(uVar16 * 8);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 0x1d));
  }
  local_58 = &DAT_146a12d20;
  local_50 = 0;
  lVar14 = *(longlong *)(local_res10 + 0x3090);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar14 + 0x38,local_res8);
  if (local_res8[0] == -1) {
    lVar14 = 0;
  }
  else {
    lVar14 = (longlong)local_res8[0] * 0x20 + *(longlong *)(lVar14 + 0x38);
  }
  puVar12 = (undefined8 *)(lVar14 + 0x10);
  if (lVar14 == 0) {
    puVar12 = (undefined8 *)0x0;
  }
  uVar4 = *puVar12;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  local_78 = lVar8;
  FUN_141ae5c20(uVar4,param_1,local_res10,local_res18,*(undefined8 *)(lVar2 + 0x18),
                *(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar9 + 0x78),&local_78,lVar10);
  local_70 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_70;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  puVar13[1] = 0;
  local_68 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_68;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    local_60 = lVar10;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = local_60;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    *(undefined4 *)(puVar18 + 4) = 0;
    *(undefined4 *)((longlong)puVar18 + 0x24) = 1;
    puVar18[5] = 0;
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res20);
  return;
}



// FUNCTION 141af0ba0 FUN_141af0ba0 body=1906 status=ok
// SIG undefined FUN_141af0ba0(void)

void FUN_141af0ba0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  int local_res8 [2];
  longlong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined *local_58;
  undefined4 local_50;
  
  local_res10 = param_2;
  local_res18 = param_3;
  lVar9 = FSceneRenderTargets::Get();
  lVar2 = *(longlong *)(lVar9 + 0x2e0);
  lVar3 = *(longlong *)(lVar9 + 0x2e8);
  lVar10 = 0;
  local_res20 = 0;
  if (param_4 != 0) {
    TRefCountPtr<FRHITexture>::operator=(&local_res20,*(undefined8 *)(param_4 + 0x10));
    lVar10 = FUN_141ce4a10(lVar9,param_1);
    lVar10 = *(longlong *)(lVar10 + 0x18);
  }
  lVar8 = local_res20;
  uVar4 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[4] = 2;
  puVar13[5] = 0;
  uVar4 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  puVar13[4] = 2;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = lVar10;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    puVar18[4] = 2;
    puVar18[5] = 0;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x26;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x26;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  iVar17 = 0;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar18;
  *(undefined8 **)(param_1 + 8) = puVar18 + 1;
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_143f59440;
  *(undefined4 *)(puVar18 + 2) = 0;
  puVar18[3] = 0;
  *(undefined4 *)(puVar18 + 4) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x24) = 0xffffffff;
  *(undefined2 *)(puVar18 + 5) = 0;
  puVar18[6] = 0;
  *(undefined4 *)(puVar18 + 7) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x3c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 8) = 0;
  puVar18[9] = 0;
  *(undefined4 *)(puVar18 + 10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x54) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xb) = 0;
  puVar18[0xc] = 0;
  *(undefined4 *)(puVar18 + 0xd) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x6c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xe) = 0;
  puVar18[0xf] = 0;
  *(undefined4 *)(puVar18 + 0x10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x84) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x11) = 0;
  puVar18[0x12] = 0;
  *(undefined4 *)(puVar18 + 0x13) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x9c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x14) = 0;
  puVar18[0x15] = 0;
  *(undefined4 *)(puVar18 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xb4) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x17) = 0;
  puVar18[0x18] = 0;
  *(undefined4 *)(puVar18 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xcc) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x1a) = 0;
  puVar18[0x1b] = 0;
  *(undefined4 *)(puVar18 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar18 + 0xe4) = 0;
  uVar16 = 0;
  if (*(int *)(puVar18 + 2) != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar1 = (undefined4 *)(uVar16 * 0x18);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar12 = puVar18 + uVar16 * 3 + 3;
      *(undefined4 *)puVar12 = *puVar1;
      *(undefined4 *)((longlong)puVar12 + 4) = uVar5;
      *(undefined4 *)(puVar12 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar12 + 0xc) = uVar7;
      puVar18[uVar16 * 3 + 5] = *(undefined8 *)(uVar16 * 0x18 + 0x10);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 2));
    iVar17 = *(int *)(puVar18 + 0x1d);
  }
  uVar16 = 0;
  if (iVar17 != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar18[uVar16 + 0x1e] = *(undefined8 *)(uVar16 * 8);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 0x1d));
  }
  local_58 = &DAT_146a12930;
  local_50 = 0;
  lVar14 = *(longlong *)(local_res10 + 0x3090);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar14 + 0x38,local_res8);
  if (local_res8[0] == -1) {
    lVar14 = 0;
  }
  else {
    lVar14 = (longlong)local_res8[0] * 0x20 + *(longlong *)(lVar14 + 0x38);
  }
  puVar12 = (undefined8 *)(lVar14 + 0x10);
  if (lVar14 == 0) {
    puVar12 = (undefined8 *)0x0;
  }
  uVar4 = *puVar12;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  local_78 = lVar8;
  FUN_141ae5e20(uVar4,param_1,local_res10,local_res18,*(undefined8 *)(lVar2 + 0x18),
                *(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar9 + 0x78),&local_78,lVar10);
  local_70 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_70;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  puVar13[1] = 0;
  local_68 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_68;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    local_60 = lVar10;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = local_60;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    *(undefined4 *)(puVar18 + 4) = 0;
    *(undefined4 *)((longlong)puVar18 + 0x24) = 1;
    puVar18[5] = 0;
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res20);
  return;
}



// FUNCTION 141af1320 FUN_141af1320 body=1906 status=ok
// SIG undefined FUN_141af1320(void)

void FUN_141af1320(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  int local_res8 [2];
  longlong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined *local_58;
  undefined4 local_50;
  
  local_res10 = param_2;
  local_res18 = param_3;
  lVar9 = FSceneRenderTargets::Get();
  lVar2 = *(longlong *)(lVar9 + 0x2e0);
  lVar3 = *(longlong *)(lVar9 + 0x2e8);
  lVar10 = 0;
  local_res20 = 0;
  if (param_4 != 0) {
    TRefCountPtr<FRHITexture>::operator=(&local_res20,*(undefined8 *)(param_4 + 0x10));
    lVar10 = FUN_141ce4a10(lVar9,param_1);
    lVar10 = *(longlong *)(lVar10 + 0x18);
  }
  lVar8 = local_res20;
  uVar4 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[4] = 2;
  puVar13[5] = 0;
  uVar4 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = uVar4;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  puVar13[4] = 2;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = lVar10;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    puVar18[4] = 2;
    puVar18[5] = 0;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x26;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x26;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  iVar17 = 0;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar18;
  *(undefined8 **)(param_1 + 8) = puVar18 + 1;
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_143f59440;
  *(undefined4 *)(puVar18 + 2) = 0;
  puVar18[3] = 0;
  *(undefined4 *)(puVar18 + 4) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x24) = 0xffffffff;
  *(undefined2 *)(puVar18 + 5) = 0;
  puVar18[6] = 0;
  *(undefined4 *)(puVar18 + 7) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x3c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 8) = 0;
  puVar18[9] = 0;
  *(undefined4 *)(puVar18 + 10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x54) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xb) = 0;
  puVar18[0xc] = 0;
  *(undefined4 *)(puVar18 + 0xd) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x6c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0xe) = 0;
  puVar18[0xf] = 0;
  *(undefined4 *)(puVar18 + 0x10) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x84) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x11) = 0;
  puVar18[0x12] = 0;
  *(undefined4 *)(puVar18 + 0x13) = 0;
  *(undefined4 *)((longlong)puVar18 + 0x9c) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x14) = 0;
  puVar18[0x15] = 0;
  *(undefined4 *)(puVar18 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xb4) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x17) = 0;
  puVar18[0x18] = 0;
  *(undefined4 *)(puVar18 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar18 + 0xcc) = 0xffffffff;
  *(undefined2 *)(puVar18 + 0x1a) = 0;
  puVar18[0x1b] = 0;
  *(undefined4 *)(puVar18 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar18 + 0xe4) = 0;
  uVar16 = 0;
  if (*(int *)(puVar18 + 2) != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar1 = (undefined4 *)(uVar16 * 0x18);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar12 = puVar18 + uVar16 * 3 + 3;
      *(undefined4 *)puVar12 = *puVar1;
      *(undefined4 *)((longlong)puVar12 + 4) = uVar5;
      *(undefined4 *)(puVar12 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar12 + 0xc) = uVar7;
      puVar18[uVar16 * 3 + 5] = *(undefined8 *)(uVar16 * 0x18 + 0x10);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 2));
    iVar17 = *(int *)(puVar18 + 0x1d);
  }
  uVar16 = 0;
  if (iVar17 != 0) {
    do {
      uVar15 = (int)uVar16 + 1;
      puVar18[uVar16 + 0x1e] = *(undefined8 *)(uVar16 * 8);
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(puVar18 + 0x1d));
  }
  local_58 = &DAT_146a12a80;
  local_50 = 0;
  lVar14 = *(longlong *)(local_res10 + 0x3090);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar14 + 0x38,local_res8);
  if (local_res8[0] == -1) {
    lVar14 = 0;
  }
  else {
    lVar14 = (longlong)local_res8[0] * 0x20 + *(longlong *)(lVar14 + 0x38);
  }
  puVar12 = (undefined8 *)(lVar14 + 0x10);
  if (lVar14 == 0) {
    puVar12 = (undefined8 *)0x0;
  }
  uVar4 = *puVar12;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  local_78 = lVar8;
  FUN_141ae5e20(uVar4,param_1,local_res10,local_res18,*(undefined8 *)(lVar2 + 0x18),
                *(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar9 + 0x78),&local_78,lVar10);
  local_70 = *(undefined8 *)(lVar2 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_70;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[3] = puVar18;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  puVar13[1] = 0;
  local_68 = *(undefined8 *)(lVar3 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar18 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *puVar18 = local_68;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar13 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar13 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar13 + 2) = 1;
  puVar13[3] = puVar18;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 1;
  puVar13[5] = 0;
  if (lVar10 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar11 = plVar19 + 1;
    local_60 = lVar10;
    if (*(longlong **)(param_1 + 0x38) < plVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar11 = plVar19 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar11;
    *plVar19 = local_60;
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar18 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar18 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar18;
    *(undefined8 **)(param_1 + 8) = puVar18 + 1;
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar18 + 2) = 1;
    puVar18[3] = plVar19;
    *(undefined4 *)(puVar18 + 4) = 0;
    *(undefined4 *)((longlong)puVar18 + 0x24) = 1;
    puVar18[5] = 0;
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res20);
  return;
}



// FUNCTION 141af1aa0 FUN_141af1aa0 body=1987 status=ok
// SIG undefined FUN_141af1aa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141af1aa0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined *puVar9;
  bool bVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  int iVar15;
  undefined8 *puVar16;
  uint uVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined4 uVar20;
  longlong *plVar21;
  longlong *plVar22;
  undefined1 auStack_278 [32];
  undefined8 local_258;
  undefined8 local_250;
  longlong *local_248;
  float local_240;
  float local_238;
  undefined8 local_230;
  undefined8 local_228;
  longlong local_220;
  undefined4 local_218;
  undefined1 local_210;
  undefined4 local_208;
  int local_1f8 [2];
  longlong local_1f0;
  undefined *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined2 local_1d8;
  undefined6 uStack_1d6;
  int local_1d0 [2];
  undefined8 local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  longlong local_190;
  longlong local_188;
  undefined *local_180;
  undefined4 local_178;
  undefined8 local_168;
  longlong *plStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  longlong *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  ulonglong local_11c;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined *local_a8 [4];
  undefined8 uStack_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  plVar14 = (longlong *)0x0;
  local_1d0[0] = 0;
  local_1f0 = param_2;
  local_1c8 = param_3;
  local_1c0 = param_4;
  local_190 = FSceneRenderTargets::Get();
  uVar20 = 2;
  lVar4 = *(longlong *)(local_190 + 0x2e0);
  local_78 = (undefined *)0x0;
  uStack_70 = 0xffffffff00000000;
  local_68 = local_68 & 0xffffffffffff0000;
  local_a8[2] = (undefined *)CONCAT62(uStack_1d6,0x101);
  local_1d8 = 0x101;
  uStack_1e0 = 0;
  uStack_1dc = 0xffffffff;
  local_a8[0] = *(undefined **)(lVar4 + 8);
  local_a8[1] = (undefined *)0xffffffff00000000;
  local_1e8 = *(undefined **)(*(longlong *)(local_190 + 0x2e8) + 8);
  local_80 = CONCAT62(uStack_1d6,0x101);
  local_a8[3] = local_1e8;
  uStack_88 = 0xffffffff00000000;
  local_1b8 = *(undefined8 *)(*(longlong *)(local_190 + 0x60) + 0x10);
  uStack_1b0 = 0x10001;
  uStack_1ac = 0x11;
  if (param_4 != 0) {
    uVar20 = 3;
    lVar12 = FUN_141ce4a10(local_190,param_1);
    local_1e8 = *(undefined **)(lVar12 + 8);
    local_68 = CONCAT62(uStack_1d6,0x101);
    local_78 = local_1e8;
    uStack_70 = 0xffffffff00000000;
  }
  uStack_70 = 0xffffffff00000000;
  local_1d8 = 0x101;
  uStack_1dc = 0xffffffff;
  uStack_1e0 = 0;
  *(undefined4 *)(param_1 + 0x98) = uVar20;
  iVar15 = 0;
  plVar22 = plVar14;
  do {
    uVar17 = (int)plVar22 + 1;
    puVar9 = local_a8[(longlong)plVar22 * 3 + 1];
    puVar1 = local_a8[(longlong)plVar22 * 3 + 2];
    puVar13 = (undefined8 *)(param_1 + 0xa0 + (longlong)plVar22 * 0x18);
    *puVar13 = local_a8[(longlong)plVar22 * 3];
    puVar13[1] = puVar9;
    *(undefined **)(param_1 + 0xb0 + (longlong)plVar22 * 0x18) = puVar1;
    plVar22 = (longlong *)(ulonglong)uVar17;
  } while (uVar17 < *(uint *)(param_1 + 0x98));
  *(undefined8 *)(param_1 + 0x160) = local_1b8;
  *(ulonglong *)(param_1 + 0x168) = CONCAT44(uStack_1ac,uStack_1b0);
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar19 + 0x26;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
    puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar19 + 0x26;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar19;
  *(undefined8 **)(param_1 + 8) = puVar19 + 1;
  puVar19[1] = 0;
  *puVar19 = &PTR_LAB_143f59440;
  *(undefined4 *)(puVar19 + 2) = uVar20;
  puVar19[3] = 0;
  *(undefined4 *)(puVar19 + 4) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x24) = 0xffffffff;
  *(undefined2 *)(puVar19 + 5) = 0;
  puVar19[6] = 0;
  *(undefined4 *)(puVar19 + 7) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x3c) = 0xffffffff;
  *(undefined2 *)(puVar19 + 8) = 0;
  puVar19[9] = 0;
  *(undefined4 *)(puVar19 + 10) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x54) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0xb) = 0;
  puVar19[0xc] = 0;
  *(undefined4 *)(puVar19 + 0xd) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x6c) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0xe) = 0;
  puVar19[0xf] = 0;
  *(undefined4 *)(puVar19 + 0x10) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x84) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x11) = 0;
  puVar19[0x12] = 0;
  *(undefined4 *)(puVar19 + 0x13) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x9c) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x14) = 0;
  puVar19[0x15] = 0;
  *(undefined4 *)(puVar19 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar19 + 0xb4) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x17) = 0;
  puVar19[0x18] = 0;
  *(undefined4 *)(puVar19 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar19 + 0xcc) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x1a) = 0;
  puVar19[0x1b] = 0;
  *(undefined4 *)(puVar19 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar19 + 0xe4) = 0;
  plVar22 = plVar14;
  if (*(int *)(puVar19 + 2) != 0) {
    do {
      uVar17 = (int)plVar22 + 1;
      puVar1 = local_a8[(longlong)plVar22 * 3 + 1];
      puVar19[(longlong)plVar22 * 3 + 3] = local_a8[(longlong)plVar22 * 3];
      (puVar19 + (longlong)plVar22 * 3 + 3)[1] = puVar1;
      puVar19[(longlong)plVar22 * 3 + 5] = local_a8[(longlong)plVar22 * 3 + 2];
      plVar22 = (longlong *)(ulonglong)uVar17;
    } while (uVar17 < *(uint *)(puVar19 + 2));
    iVar15 = *(int *)(puVar19 + 0x1d);
  }
  plVar22 = plVar14;
  if (iVar15 != 0) {
    do {
      uVar17 = (int)plVar22 + 1;
      puVar19[(longlong)plVar22 + 0x1e] = *(undefined8 *)((longlong)plVar22 * 8);
      plVar22 = (longlong *)(ulonglong)uVar17;
    } while (uVar17 < *(uint *)(puVar19 + 0x1d));
  }
  puVar19[0x1b] = local_1b8;
  puVar19[0x1c] = CONCAT44(uStack_1ac,uStack_1b0);
  local_1a8 = *(undefined8 *)(lVar4 + 8);
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar19 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar19 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *puVar19 = local_1a8;
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar16 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar16;
  *(undefined8 **)(param_1 + 8) = puVar16 + 1;
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar16 + 2) = 1;
  puVar16[3] = puVar19;
  *(undefined4 *)(puVar16 + 4) = 1;
  *(undefined1 *)((longlong)puVar16 + 0x24) = 0;
  local_1f8[0] = *(int *)(local_1f0 + 0x1aa0);
  uVar20 = *(undefined4 *)(param_2 + 0x1aac);
  uVar2 = *(undefined4 *)(param_2 + 0x1aa8);
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar3 = *(undefined4 *)(param_2 + 0x1aa4);
  puVar13 = puVar19 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar19 + 5;
  }
  lVar12 = local_1f0;
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  local_178 = 0;
  **(undefined8 **)(param_1 + 8) = puVar19;
  *(undefined8 **)(param_1 + 8) = puVar19 + 1;
  puVar19[1] = 0;
  *puVar19 = &PTR_LAB_143f59420;
  *(undefined4 *)((longlong)puVar19 + 0x14) = uVar3;
  *(int *)(puVar19 + 2) = local_1f8[0];
  *(undefined4 *)(puVar19 + 3) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x1c) = uVar2;
  *(undefined4 *)(puVar19 + 4) = uVar20;
  *(undefined4 *)((longlong)puVar19 + 0x24) = 0x3f800000;
  lVar4 = *(longlong *)(local_1f0 + 0x3090);
  local_180 = &DAT_146a0e980;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x38,local_1f8,&local_180);
  plVar22 = plVar14;
  if (local_1f8[0] != -1) {
    plVar22 = (longlong *)((longlong)local_1f8[0] * 0x20 + *(longlong *)(lVar4 + 0x38));
  }
  uStack_1e0 = 0;
  plVar21 = plVar22 + 2;
  if (plVar22 == (longlong *)0x0) {
    plVar21 = plVar14;
  }
  local_1e8 = &DAT_146a13110;
  lVar5 = *plVar21;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x38,local_1d0,&local_1e8);
  plVar22 = plVar14;
  if (local_1d0[0] != -1) {
    plVar22 = (longlong *)((longlong)local_1d0[0] * 0x20 + *(longlong *)(lVar4 + 0x38));
  }
  plVar21 = plVar22 + 2;
  if (plVar22 == (longlong *)0x0) {
    plVar21 = plVar14;
  }
  lVar4 = *plVar21;
  local_168 = 0;
  plStack_160 = (longlong *)0x0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = (longlong *)0x0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_11c = 0x26;
  local_114 = 0;
  local_10c = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_bc = 0;
  local_b4 = 0;
  FUN_14049afe0(param_1,&local_168);
  uStack_130 = FUN_140985530();
  local_138 = FUN_1404a0ce0();
  local_128 = FUN_141b097d0();
  local_168 = DAT_1464c2720;
  if (lVar5 == 0) {
    local_1a0 = 0;
    plVar22 = (longlong *)0x1;
    plStack_160 = plVar14;
  }
  else {
    lVar6 = *(longlong *)(lVar5 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plStack_160 = *(longlong **)(lVar6 + 0x38);
    plVar22 = plVar14;
  }
  if (plVar22 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
  }
  bVar10 = false;
  if (lVar4 == 0) {
    bVar10 = true;
    local_198 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar4 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar14 = *(longlong **)(lVar6 + 0x40);
  }
  local_148 = plVar14;
  if (bVar10) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_198);
  }
  local_11c = local_11c & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_168,2,1);
  local_1f0 = 0;
  if (local_1c0 != 0) {
    TRefCountPtr<FRHITexture>::operator=(&local_1f0,*(undefined8 *)(local_1c0 + 0x10));
  }
  lVar6 = local_1f0;
  FUN_141b17870(lVar5,param_1,local_1c8);
  lVar11 = local_190;
  local_1c0 = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
    local_1c0 = local_1f0;
  }
  uVar7 = *(undefined8 *)(local_190 + 0x78);
  if (local_1c0 != 0) {
    LOCK();
    *(int *)(local_1c0 + 8) = *(int *)(local_1c0 + 8) + 1;
    UNLOCK();
  }
  lVar8 = *(longlong *)(lVar4 + 0x48);
  local_188 = lVar6;
  if (*(char *)(lVar8 + 0x28) == '\0') {
    FUN_1419f3850(lVar8);
  }
  local_248 = &local_1c0;
  local_258 = *(undefined8 *)(lVar8 + 0x40);
  local_250 = uVar7;
  FUN_141af7980(lVar4,param_1,lVar12,local_1c8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_188);
  iVar15 = *(int *)(lVar12 + 0x1aac) - *(int *)(lVar12 + 0x1aa4);
  local_228 = *(undefined8 *)(lVar11 + 0x378);
  iVar18 = *(int *)(lVar12 + 0x1aa8) - *(int *)(lVar12 + 0x1aa0);
  local_208 = 1;
  local_210 = 0;
  local_238 = (float)iVar15;
  local_1c8 = CONCAT44(iVar15,iVar18);
  local_218 = *(undefined4 *)(lVar12 + 0xf60);
  local_230 = local_1c8;
  local_240 = (float)iVar18;
  local_248 = (longlong *)CONCAT44(local_248._4_4_,(float)*(int *)(lVar12 + 0x1aa4));
  local_250 = CONCAT44(local_250._4_4_,(float)*(int *)(lVar12 + 0x1aa0));
  local_258 = CONCAT44(local_258._4_4_,local_238);
  local_220 = lVar5;
  FUN_141ce13a0(param_1);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_1f0);
  return;
}



// FUNCTION 141af2270 FUN_141af2270 body=1987 status=ok
// SIG undefined FUN_141af2270(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141af2270(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined *puVar9;
  bool bVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  int iVar15;
  undefined8 *puVar16;
  uint uVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined4 uVar20;
  longlong *plVar21;
  longlong *plVar22;
  undefined1 auStack_278 [32];
  undefined8 local_258;
  undefined8 local_250;
  longlong *local_248;
  float local_240;
  float local_238;
  undefined8 local_230;
  undefined8 local_228;
  longlong local_220;
  undefined4 local_218;
  undefined1 local_210;
  undefined4 local_208;
  int local_1f8 [2];
  longlong local_1f0;
  undefined *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined2 local_1d8;
  undefined6 uStack_1d6;
  int local_1d0 [2];
  undefined8 local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  longlong local_190;
  longlong local_188;
  undefined *local_180;
  undefined4 local_178;
  undefined8 local_168;
  longlong *plStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  longlong *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  ulonglong local_11c;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined *local_a8 [4];
  undefined8 uStack_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  plVar14 = (longlong *)0x0;
  local_1d0[0] = 0;
  local_1f0 = param_2;
  local_1c8 = param_3;
  local_1c0 = param_4;
  local_190 = FSceneRenderTargets::Get();
  uVar20 = 2;
  lVar4 = *(longlong *)(local_190 + 0x2e0);
  local_78 = (undefined *)0x0;
  uStack_70 = 0xffffffff00000000;
  local_68 = local_68 & 0xffffffffffff0000;
  local_a8[2] = (undefined *)CONCAT62(uStack_1d6,0x101);
  local_1d8 = 0x101;
  uStack_1e0 = 0;
  uStack_1dc = 0xffffffff;
  local_a8[0] = *(undefined **)(lVar4 + 8);
  local_a8[1] = (undefined *)0xffffffff00000000;
  local_1e8 = *(undefined **)(*(longlong *)(local_190 + 0x2e8) + 8);
  local_80 = CONCAT62(uStack_1d6,0x101);
  local_a8[3] = local_1e8;
  uStack_88 = 0xffffffff00000000;
  local_1b8 = *(undefined8 *)(*(longlong *)(local_190 + 0x60) + 0x10);
  uStack_1b0 = 0x10001;
  uStack_1ac = 0x11;
  if (param_4 != 0) {
    uVar20 = 3;
    lVar12 = FUN_141ce4a10(local_190,param_1);
    local_1e8 = *(undefined **)(lVar12 + 8);
    local_68 = CONCAT62(uStack_1d6,0x101);
    local_78 = local_1e8;
    uStack_70 = 0xffffffff00000000;
  }
  uStack_70 = 0xffffffff00000000;
  local_1d8 = 0x101;
  uStack_1dc = 0xffffffff;
  uStack_1e0 = 0;
  *(undefined4 *)(param_1 + 0x98) = uVar20;
  iVar15 = 0;
  plVar22 = plVar14;
  do {
    uVar17 = (int)plVar22 + 1;
    puVar9 = local_a8[(longlong)plVar22 * 3 + 1];
    puVar1 = local_a8[(longlong)plVar22 * 3 + 2];
    puVar13 = (undefined8 *)(param_1 + 0xa0 + (longlong)plVar22 * 0x18);
    *puVar13 = local_a8[(longlong)plVar22 * 3];
    puVar13[1] = puVar9;
    *(undefined **)(param_1 + 0xb0 + (longlong)plVar22 * 0x18) = puVar1;
    plVar22 = (longlong *)(ulonglong)uVar17;
  } while (uVar17 < *(uint *)(param_1 + 0x98));
  *(undefined8 *)(param_1 + 0x160) = local_1b8;
  *(ulonglong *)(param_1 + 0x168) = CONCAT44(uStack_1ac,uStack_1b0);
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar19 + 0x26;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
    puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar19 + 0x26;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar19;
  *(undefined8 **)(param_1 + 8) = puVar19 + 1;
  puVar19[1] = 0;
  *puVar19 = &PTR_LAB_143f59440;
  *(undefined4 *)(puVar19 + 2) = uVar20;
  puVar19[3] = 0;
  *(undefined4 *)(puVar19 + 4) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x24) = 0xffffffff;
  *(undefined2 *)(puVar19 + 5) = 0;
  puVar19[6] = 0;
  *(undefined4 *)(puVar19 + 7) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x3c) = 0xffffffff;
  *(undefined2 *)(puVar19 + 8) = 0;
  puVar19[9] = 0;
  *(undefined4 *)(puVar19 + 10) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x54) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0xb) = 0;
  puVar19[0xc] = 0;
  *(undefined4 *)(puVar19 + 0xd) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x6c) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0xe) = 0;
  puVar19[0xf] = 0;
  *(undefined4 *)(puVar19 + 0x10) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x84) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x11) = 0;
  puVar19[0x12] = 0;
  *(undefined4 *)(puVar19 + 0x13) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x9c) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x14) = 0;
  puVar19[0x15] = 0;
  *(undefined4 *)(puVar19 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar19 + 0xb4) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x17) = 0;
  puVar19[0x18] = 0;
  *(undefined4 *)(puVar19 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar19 + 0xcc) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x1a) = 0;
  puVar19[0x1b] = 0;
  *(undefined4 *)(puVar19 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar19 + 0xe4) = 0;
  plVar22 = plVar14;
  if (*(int *)(puVar19 + 2) != 0) {
    do {
      uVar17 = (int)plVar22 + 1;
      puVar1 = local_a8[(longlong)plVar22 * 3 + 1];
      puVar19[(longlong)plVar22 * 3 + 3] = local_a8[(longlong)plVar22 * 3];
      (puVar19 + (longlong)plVar22 * 3 + 3)[1] = puVar1;
      puVar19[(longlong)plVar22 * 3 + 5] = local_a8[(longlong)plVar22 * 3 + 2];
      plVar22 = (longlong *)(ulonglong)uVar17;
    } while (uVar17 < *(uint *)(puVar19 + 2));
    iVar15 = *(int *)(puVar19 + 0x1d);
  }
  plVar22 = plVar14;
  if (iVar15 != 0) {
    do {
      uVar17 = (int)plVar22 + 1;
      puVar19[(longlong)plVar22 + 0x1e] = *(undefined8 *)((longlong)plVar22 * 8);
      plVar22 = (longlong *)(ulonglong)uVar17;
    } while (uVar17 < *(uint *)(puVar19 + 0x1d));
  }
  puVar19[0x1b] = local_1b8;
  puVar19[0x1c] = CONCAT44(uStack_1ac,uStack_1b0);
  local_1a8 = *(undefined8 *)(lVar4 + 8);
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar19 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar19 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *puVar19 = local_1a8;
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar16 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar16;
  *(undefined8 **)(param_1 + 8) = puVar16 + 1;
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar16 + 2) = 1;
  puVar16[3] = puVar19;
  *(undefined4 *)(puVar16 + 4) = 1;
  *(undefined1 *)((longlong)puVar16 + 0x24) = 0;
  local_1f8[0] = *(int *)(local_1f0 + 0x1aa0);
  uVar20 = *(undefined4 *)(param_2 + 0x1aac);
  uVar2 = *(undefined4 *)(param_2 + 0x1aa8);
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar3 = *(undefined4 *)(param_2 + 0x1aa4);
  puVar13 = puVar19 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar19 + 5;
  }
  lVar12 = local_1f0;
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  local_178 = 0;
  **(undefined8 **)(param_1 + 8) = puVar19;
  *(undefined8 **)(param_1 + 8) = puVar19 + 1;
  puVar19[1] = 0;
  *puVar19 = &PTR_LAB_143f59420;
  *(undefined4 *)((longlong)puVar19 + 0x14) = uVar3;
  *(int *)(puVar19 + 2) = local_1f8[0];
  *(undefined4 *)(puVar19 + 3) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x1c) = uVar2;
  *(undefined4 *)(puVar19 + 4) = uVar20;
  *(undefined4 *)((longlong)puVar19 + 0x24) = 0x3f800000;
  lVar4 = *(longlong *)(local_1f0 + 0x3090);
  local_180 = &DAT_146a0e980;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x38,local_1f8,&local_180);
  plVar22 = plVar14;
  if (local_1f8[0] != -1) {
    plVar22 = (longlong *)((longlong)local_1f8[0] * 0x20 + *(longlong *)(lVar4 + 0x38));
  }
  uStack_1e0 = 0;
  plVar21 = plVar22 + 2;
  if (plVar22 == (longlong *)0x0) {
    plVar21 = plVar14;
  }
  local_1e8 = &DAT_146a12e70;
  lVar5 = *plVar21;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x38,local_1d0,&local_1e8);
  plVar22 = plVar14;
  if (local_1d0[0] != -1) {
    plVar22 = (longlong *)((longlong)local_1d0[0] * 0x20 + *(longlong *)(lVar4 + 0x38));
  }
  plVar21 = plVar22 + 2;
  if (plVar22 == (longlong *)0x0) {
    plVar21 = plVar14;
  }
  lVar4 = *plVar21;
  local_168 = 0;
  plStack_160 = (longlong *)0x0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = (longlong *)0x0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_11c = 0x26;
  local_114 = 0;
  local_10c = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_bc = 0;
  local_b4 = 0;
  FUN_14049afe0(param_1,&local_168);
  uStack_130 = FUN_140985530();
  local_138 = FUN_1404a0ce0();
  local_128 = FUN_141b097d0();
  local_168 = DAT_1464c2720;
  if (lVar5 == 0) {
    local_1a0 = 0;
    plVar22 = (longlong *)0x1;
    plStack_160 = plVar14;
  }
  else {
    lVar6 = *(longlong *)(lVar5 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plStack_160 = *(longlong **)(lVar6 + 0x38);
    plVar22 = plVar14;
  }
  if (plVar22 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
  }
  bVar10 = false;
  if (lVar4 == 0) {
    bVar10 = true;
    local_198 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar4 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar14 = *(longlong **)(lVar6 + 0x40);
  }
  local_148 = plVar14;
  if (bVar10) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_198);
  }
  local_11c = local_11c & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_168,2,1);
  local_1f0 = 0;
  if (local_1c0 != 0) {
    TRefCountPtr<FRHITexture>::operator=(&local_1f0,*(undefined8 *)(local_1c0 + 0x10));
  }
  lVar6 = local_1f0;
  FUN_141b17870(lVar5,param_1,local_1c8);
  lVar11 = local_190;
  local_1c0 = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
    local_1c0 = local_1f0;
  }
  uVar7 = *(undefined8 *)(local_190 + 0x78);
  if (local_1c0 != 0) {
    LOCK();
    *(int *)(local_1c0 + 8) = *(int *)(local_1c0 + 8) + 1;
    UNLOCK();
  }
  lVar8 = *(longlong *)(lVar4 + 0x48);
  local_188 = lVar6;
  if (*(char *)(lVar8 + 0x28) == '\0') {
    FUN_1419f3850(lVar8);
  }
  local_248 = &local_1c0;
  local_258 = *(undefined8 *)(lVar8 + 0x40);
  local_250 = uVar7;
  FUN_141af7980(lVar4,param_1,lVar12,local_1c8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_188);
  iVar15 = *(int *)(lVar12 + 0x1aac) - *(int *)(lVar12 + 0x1aa4);
  local_228 = *(undefined8 *)(lVar11 + 0x378);
  iVar18 = *(int *)(lVar12 + 0x1aa8) - *(int *)(lVar12 + 0x1aa0);
  local_208 = 1;
  local_210 = 0;
  local_238 = (float)iVar15;
  local_1c8 = CONCAT44(iVar15,iVar18);
  local_218 = *(undefined4 *)(lVar12 + 0xf60);
  local_230 = local_1c8;
  local_240 = (float)iVar18;
  local_248 = (longlong *)CONCAT44(local_248._4_4_,(float)*(int *)(lVar12 + 0x1aa4));
  local_250 = CONCAT44(local_250._4_4_,(float)*(int *)(lVar12 + 0x1aa0));
  local_258 = CONCAT44(local_258._4_4_,local_238);
  local_220 = lVar5;
  FUN_141ce13a0(param_1);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_1f0);
  return;
}



// FUNCTION 141af2a40 FUN_141af2a40 body=1987 status=ok
// SIG undefined FUN_141af2a40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141af2a40(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined *puVar9;
  bool bVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  int iVar15;
  undefined8 *puVar16;
  uint uVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined4 uVar20;
  longlong *plVar21;
  longlong *plVar22;
  undefined1 auStack_278 [32];
  undefined8 local_258;
  undefined8 local_250;
  longlong *local_248;
  float local_240;
  float local_238;
  undefined8 local_230;
  undefined8 local_228;
  longlong local_220;
  undefined4 local_218;
  undefined1 local_210;
  undefined4 local_208;
  int local_1f8 [2];
  longlong local_1f0;
  undefined *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined2 local_1d8;
  undefined6 uStack_1d6;
  int local_1d0 [2];
  undefined8 local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  longlong local_190;
  longlong local_188;
  undefined *local_180;
  undefined4 local_178;
  undefined8 local_168;
  longlong *plStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  longlong *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  ulonglong local_11c;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined *local_a8 [4];
  undefined8 uStack_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  plVar14 = (longlong *)0x0;
  local_1d0[0] = 0;
  local_1f0 = param_2;
  local_1c8 = param_3;
  local_1c0 = param_4;
  local_190 = FSceneRenderTargets::Get();
  uVar20 = 2;
  lVar4 = *(longlong *)(local_190 + 0x2e0);
  local_78 = (undefined *)0x0;
  uStack_70 = 0xffffffff00000000;
  local_68 = local_68 & 0xffffffffffff0000;
  local_a8[2] = (undefined *)CONCAT62(uStack_1d6,0x101);
  local_1d8 = 0x101;
  uStack_1e0 = 0;
  uStack_1dc = 0xffffffff;
  local_a8[0] = *(undefined **)(lVar4 + 8);
  local_a8[1] = (undefined *)0xffffffff00000000;
  local_1e8 = *(undefined **)(*(longlong *)(local_190 + 0x2e8) + 8);
  local_80 = CONCAT62(uStack_1d6,0x101);
  local_a8[3] = local_1e8;
  uStack_88 = 0xffffffff00000000;
  local_1b8 = *(undefined8 *)(*(longlong *)(local_190 + 0x60) + 0x10);
  uStack_1b0 = 0x10001;
  uStack_1ac = 0x11;
  if (param_4 != 0) {
    uVar20 = 3;
    lVar12 = FUN_141ce4a10(local_190,param_1);
    local_1e8 = *(undefined **)(lVar12 + 8);
    local_68 = CONCAT62(uStack_1d6,0x101);
    local_78 = local_1e8;
    uStack_70 = 0xffffffff00000000;
  }
  uStack_70 = 0xffffffff00000000;
  local_1d8 = 0x101;
  uStack_1dc = 0xffffffff;
  uStack_1e0 = 0;
  *(undefined4 *)(param_1 + 0x98) = uVar20;
  iVar15 = 0;
  plVar22 = plVar14;
  do {
    uVar17 = (int)plVar22 + 1;
    puVar9 = local_a8[(longlong)plVar22 * 3 + 1];
    puVar1 = local_a8[(longlong)plVar22 * 3 + 2];
    puVar13 = (undefined8 *)(param_1 + 0xa0 + (longlong)plVar22 * 0x18);
    *puVar13 = local_a8[(longlong)plVar22 * 3];
    puVar13[1] = puVar9;
    *(undefined **)(param_1 + 0xb0 + (longlong)plVar22 * 0x18) = puVar1;
    plVar22 = (longlong *)(ulonglong)uVar17;
  } while (uVar17 < *(uint *)(param_1 + 0x98));
  *(undefined8 *)(param_1 + 0x160) = local_1b8;
  *(ulonglong *)(param_1 + 0x168) = CONCAT44(uStack_1ac,uStack_1b0);
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar19 + 0x26;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
    puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar19 + 0x26;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar19;
  *(undefined8 **)(param_1 + 8) = puVar19 + 1;
  puVar19[1] = 0;
  *puVar19 = &PTR_LAB_143f59440;
  *(undefined4 *)(puVar19 + 2) = uVar20;
  puVar19[3] = 0;
  *(undefined4 *)(puVar19 + 4) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x24) = 0xffffffff;
  *(undefined2 *)(puVar19 + 5) = 0;
  puVar19[6] = 0;
  *(undefined4 *)(puVar19 + 7) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x3c) = 0xffffffff;
  *(undefined2 *)(puVar19 + 8) = 0;
  puVar19[9] = 0;
  *(undefined4 *)(puVar19 + 10) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x54) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0xb) = 0;
  puVar19[0xc] = 0;
  *(undefined4 *)(puVar19 + 0xd) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x6c) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0xe) = 0;
  puVar19[0xf] = 0;
  *(undefined4 *)(puVar19 + 0x10) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x84) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x11) = 0;
  puVar19[0x12] = 0;
  *(undefined4 *)(puVar19 + 0x13) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x9c) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x14) = 0;
  puVar19[0x15] = 0;
  *(undefined4 *)(puVar19 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar19 + 0xb4) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x17) = 0;
  puVar19[0x18] = 0;
  *(undefined4 *)(puVar19 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar19 + 0xcc) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x1a) = 0;
  puVar19[0x1b] = 0;
  *(undefined4 *)(puVar19 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar19 + 0xe4) = 0;
  plVar22 = plVar14;
  if (*(int *)(puVar19 + 2) != 0) {
    do {
      uVar17 = (int)plVar22 + 1;
      puVar1 = local_a8[(longlong)plVar22 * 3 + 1];
      puVar19[(longlong)plVar22 * 3 + 3] = local_a8[(longlong)plVar22 * 3];
      (puVar19 + (longlong)plVar22 * 3 + 3)[1] = puVar1;
      puVar19[(longlong)plVar22 * 3 + 5] = local_a8[(longlong)plVar22 * 3 + 2];
      plVar22 = (longlong *)(ulonglong)uVar17;
    } while (uVar17 < *(uint *)(puVar19 + 2));
    iVar15 = *(int *)(puVar19 + 0x1d);
  }
  plVar22 = plVar14;
  if (iVar15 != 0) {
    do {
      uVar17 = (int)plVar22 + 1;
      puVar19[(longlong)plVar22 + 0x1e] = *(undefined8 *)((longlong)plVar22 * 8);
      plVar22 = (longlong *)(ulonglong)uVar17;
    } while (uVar17 < *(uint *)(puVar19 + 0x1d));
  }
  puVar19[0x1b] = local_1b8;
  puVar19[0x1c] = CONCAT44(uStack_1ac,uStack_1b0);
  local_1a8 = *(undefined8 *)(lVar4 + 8);
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar19 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar19 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *puVar19 = local_1a8;
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar16 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar16;
  *(undefined8 **)(param_1 + 8) = puVar16 + 1;
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar16 + 2) = 1;
  puVar16[3] = puVar19;
  *(undefined4 *)(puVar16 + 4) = 1;
  *(undefined1 *)((longlong)puVar16 + 0x24) = 0;
  local_1f8[0] = *(int *)(local_1f0 + 0x1aa0);
  uVar20 = *(undefined4 *)(param_2 + 0x1aac);
  uVar2 = *(undefined4 *)(param_2 + 0x1aa8);
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar3 = *(undefined4 *)(param_2 + 0x1aa4);
  puVar13 = puVar19 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar19 + 5;
  }
  lVar12 = local_1f0;
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  local_178 = 0;
  **(undefined8 **)(param_1 + 8) = puVar19;
  *(undefined8 **)(param_1 + 8) = puVar19 + 1;
  puVar19[1] = 0;
  *puVar19 = &PTR_LAB_143f59420;
  *(undefined4 *)((longlong)puVar19 + 0x14) = uVar3;
  *(int *)(puVar19 + 2) = local_1f8[0];
  *(undefined4 *)(puVar19 + 3) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x1c) = uVar2;
  *(undefined4 *)(puVar19 + 4) = uVar20;
  *(undefined4 *)((longlong)puVar19 + 0x24) = 0x3f800000;
  lVar4 = *(longlong *)(local_1f0 + 0x3090);
  local_180 = &DAT_146a0e980;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x38,local_1f8,&local_180);
  plVar22 = plVar14;
  if (local_1f8[0] != -1) {
    plVar22 = (longlong *)((longlong)local_1f8[0] * 0x20 + *(longlong *)(lVar4 + 0x38));
  }
  uStack_1e0 = 0;
  plVar21 = plVar22 + 2;
  if (plVar22 == (longlong *)0x0) {
    plVar21 = plVar14;
  }
  local_1e8 = &DAT_146a13650;
  lVar5 = *plVar21;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x38,local_1d0,&local_1e8);
  plVar22 = plVar14;
  if (local_1d0[0] != -1) {
    plVar22 = (longlong *)((longlong)local_1d0[0] * 0x20 + *(longlong *)(lVar4 + 0x38));
  }
  plVar21 = plVar22 + 2;
  if (plVar22 == (longlong *)0x0) {
    plVar21 = plVar14;
  }
  lVar4 = *plVar21;
  local_168 = 0;
  plStack_160 = (longlong *)0x0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = (longlong *)0x0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_11c = 0x26;
  local_114 = 0;
  local_10c = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_bc = 0;
  local_b4 = 0;
  FUN_14049afe0(param_1,&local_168);
  uStack_130 = FUN_140985530();
  local_138 = FUN_1404a0ce0();
  local_128 = FUN_141b097d0();
  local_168 = DAT_1464c2720;
  if (lVar5 == 0) {
    local_1a0 = 0;
    plVar22 = (longlong *)0x1;
    plStack_160 = plVar14;
  }
  else {
    lVar6 = *(longlong *)(lVar5 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plStack_160 = *(longlong **)(lVar6 + 0x38);
    plVar22 = plVar14;
  }
  if (plVar22 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
  }
  bVar10 = false;
  if (lVar4 == 0) {
    bVar10 = true;
    local_198 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar4 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar14 = *(longlong **)(lVar6 + 0x40);
  }
  local_148 = plVar14;
  if (bVar10) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_198);
  }
  local_11c = local_11c & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_168,2,1);
  local_1f0 = 0;
  if (local_1c0 != 0) {
    TRefCountPtr<FRHITexture>::operator=(&local_1f0,*(undefined8 *)(local_1c0 + 0x10));
  }
  lVar6 = local_1f0;
  FUN_141b17870(lVar5,param_1,local_1c8);
  lVar11 = local_190;
  local_1c0 = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
    local_1c0 = local_1f0;
  }
  uVar7 = *(undefined8 *)(local_190 + 0x78);
  if (local_1c0 != 0) {
    LOCK();
    *(int *)(local_1c0 + 8) = *(int *)(local_1c0 + 8) + 1;
    UNLOCK();
  }
  lVar8 = *(longlong *)(lVar4 + 0x48);
  local_188 = lVar6;
  if (*(char *)(lVar8 + 0x28) == '\0') {
    FUN_1419f3850(lVar8);
  }
  local_248 = &local_1c0;
  local_258 = *(undefined8 *)(lVar8 + 0x40);
  local_250 = uVar7;
  FUN_141af7980(lVar4,param_1,lVar12,local_1c8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_188);
  iVar15 = *(int *)(lVar12 + 0x1aac) - *(int *)(lVar12 + 0x1aa4);
  local_228 = *(undefined8 *)(lVar11 + 0x378);
  iVar18 = *(int *)(lVar12 + 0x1aa8) - *(int *)(lVar12 + 0x1aa0);
  local_208 = 1;
  local_210 = 0;
  local_238 = (float)iVar15;
  local_1c8 = CONCAT44(iVar15,iVar18);
  local_218 = *(undefined4 *)(lVar12 + 0xf60);
  local_230 = local_1c8;
  local_240 = (float)iVar18;
  local_248 = (longlong *)CONCAT44(local_248._4_4_,(float)*(int *)(lVar12 + 0x1aa4));
  local_250 = CONCAT44(local_250._4_4_,(float)*(int *)(lVar12 + 0x1aa0));
  local_258 = CONCAT44(local_258._4_4_,local_238);
  local_220 = lVar5;
  FUN_141ce13a0(param_1);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_1f0);
  return;
}



// FUNCTION 141af3210 FUN_141af3210 body=1987 status=ok
// SIG undefined FUN_141af3210(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141af3210(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined *puVar9;
  bool bVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  int iVar15;
  undefined8 *puVar16;
  uint uVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined4 uVar20;
  longlong *plVar21;
  longlong *plVar22;
  undefined1 auStack_278 [32];
  undefined8 local_258;
  undefined8 local_250;
  longlong *local_248;
  float local_240;
  float local_238;
  undefined8 local_230;
  undefined8 local_228;
  longlong local_220;
  undefined4 local_218;
  undefined1 local_210;
  undefined4 local_208;
  int local_1f8 [2];
  longlong local_1f0;
  undefined *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined2 local_1d8;
  undefined6 uStack_1d6;
  int local_1d0 [2];
  undefined8 local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  longlong local_190;
  longlong local_188;
  undefined *local_180;
  undefined4 local_178;
  undefined8 local_168;
  longlong *plStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  longlong *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  ulonglong local_11c;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined *local_a8 [4];
  undefined8 uStack_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  plVar14 = (longlong *)0x0;
  local_1d0[0] = 0;
  local_1f0 = param_2;
  local_1c8 = param_3;
  local_1c0 = param_4;
  local_190 = FSceneRenderTargets::Get();
  uVar20 = 2;
  lVar4 = *(longlong *)(local_190 + 0x2e0);
  local_78 = (undefined *)0x0;
  uStack_70 = 0xffffffff00000000;
  local_68 = local_68 & 0xffffffffffff0000;
  local_a8[2] = (undefined *)CONCAT62(uStack_1d6,0x101);
  local_1d8 = 0x101;
  uStack_1e0 = 0;
  uStack_1dc = 0xffffffff;
  local_a8[0] = *(undefined **)(lVar4 + 8);
  local_a8[1] = (undefined *)0xffffffff00000000;
  local_1e8 = *(undefined **)(*(longlong *)(local_190 + 0x2e8) + 8);
  local_80 = CONCAT62(uStack_1d6,0x101);
  local_a8[3] = local_1e8;
  uStack_88 = 0xffffffff00000000;
  local_1b8 = *(undefined8 *)(*(longlong *)(local_190 + 0x60) + 0x10);
  uStack_1b0 = 0x10001;
  uStack_1ac = 0x11;
  if (param_4 != 0) {
    uVar20 = 3;
    lVar12 = FUN_141ce4a10(local_190,param_1);
    local_1e8 = *(undefined **)(lVar12 + 8);
    local_68 = CONCAT62(uStack_1d6,0x101);
    local_78 = local_1e8;
    uStack_70 = 0xffffffff00000000;
  }
  uStack_70 = 0xffffffff00000000;
  local_1d8 = 0x101;
  uStack_1dc = 0xffffffff;
  uStack_1e0 = 0;
  *(undefined4 *)(param_1 + 0x98) = uVar20;
  iVar15 = 0;
  plVar22 = plVar14;
  do {
    uVar17 = (int)plVar22 + 1;
    puVar9 = local_a8[(longlong)plVar22 * 3 + 1];
    puVar1 = local_a8[(longlong)plVar22 * 3 + 2];
    puVar13 = (undefined8 *)(param_1 + 0xa0 + (longlong)plVar22 * 0x18);
    *puVar13 = local_a8[(longlong)plVar22 * 3];
    puVar13[1] = puVar9;
    *(undefined **)(param_1 + 0xb0 + (longlong)plVar22 * 0x18) = puVar1;
    plVar22 = (longlong *)(ulonglong)uVar17;
  } while (uVar17 < *(uint *)(param_1 + 0x98));
  *(undefined8 *)(param_1 + 0x160) = local_1b8;
  *(ulonglong *)(param_1 + 0x168) = CONCAT44(uStack_1ac,uStack_1b0);
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar19 + 0x26;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
    puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar19 + 0x26;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar19;
  *(undefined8 **)(param_1 + 8) = puVar19 + 1;
  puVar19[1] = 0;
  *puVar19 = &PTR_LAB_143f59440;
  *(undefined4 *)(puVar19 + 2) = uVar20;
  puVar19[3] = 0;
  *(undefined4 *)(puVar19 + 4) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x24) = 0xffffffff;
  *(undefined2 *)(puVar19 + 5) = 0;
  puVar19[6] = 0;
  *(undefined4 *)(puVar19 + 7) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x3c) = 0xffffffff;
  *(undefined2 *)(puVar19 + 8) = 0;
  puVar19[9] = 0;
  *(undefined4 *)(puVar19 + 10) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x54) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0xb) = 0;
  puVar19[0xc] = 0;
  *(undefined4 *)(puVar19 + 0xd) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x6c) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0xe) = 0;
  puVar19[0xf] = 0;
  *(undefined4 *)(puVar19 + 0x10) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x84) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x11) = 0;
  puVar19[0x12] = 0;
  *(undefined4 *)(puVar19 + 0x13) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x9c) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x14) = 0;
  puVar19[0x15] = 0;
  *(undefined4 *)(puVar19 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar19 + 0xb4) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x17) = 0;
  puVar19[0x18] = 0;
  *(undefined4 *)(puVar19 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar19 + 0xcc) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x1a) = 0;
  puVar19[0x1b] = 0;
  *(undefined4 *)(puVar19 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar19 + 0xe4) = 0;
  plVar22 = plVar14;
  if (*(int *)(puVar19 + 2) != 0) {
    do {
      uVar17 = (int)plVar22 + 1;
      puVar1 = local_a8[(longlong)plVar22 * 3 + 1];
      puVar19[(longlong)plVar22 * 3 + 3] = local_a8[(longlong)plVar22 * 3];
      (puVar19 + (longlong)plVar22 * 3 + 3)[1] = puVar1;
      puVar19[(longlong)plVar22 * 3 + 5] = local_a8[(longlong)plVar22 * 3 + 2];
      plVar22 = (longlong *)(ulonglong)uVar17;
    } while (uVar17 < *(uint *)(puVar19 + 2));
    iVar15 = *(int *)(puVar19 + 0x1d);
  }
  plVar22 = plVar14;
  if (iVar15 != 0) {
    do {
      uVar17 = (int)plVar22 + 1;
      puVar19[(longlong)plVar22 + 0x1e] = *(undefined8 *)((longlong)plVar22 * 8);
      plVar22 = (longlong *)(ulonglong)uVar17;
    } while (uVar17 < *(uint *)(puVar19 + 0x1d));
  }
  puVar19[0x1b] = local_1b8;
  puVar19[0x1c] = CONCAT44(uStack_1ac,uStack_1b0);
  local_1a8 = *(undefined8 *)(lVar4 + 8);
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar19 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar19 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *puVar19 = local_1a8;
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar16 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar16;
  *(undefined8 **)(param_1 + 8) = puVar16 + 1;
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar16 + 2) = 1;
  puVar16[3] = puVar19;
  *(undefined4 *)(puVar16 + 4) = 1;
  *(undefined1 *)((longlong)puVar16 + 0x24) = 0;
  local_1f8[0] = *(int *)(local_1f0 + 0x1aa0);
  uVar20 = *(undefined4 *)(param_2 + 0x1aac);
  uVar2 = *(undefined4 *)(param_2 + 0x1aa8);
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar3 = *(undefined4 *)(param_2 + 0x1aa4);
  puVar13 = puVar19 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar19 + 5;
  }
  lVar12 = local_1f0;
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  local_178 = 0;
  **(undefined8 **)(param_1 + 8) = puVar19;
  *(undefined8 **)(param_1 + 8) = puVar19 + 1;
  puVar19[1] = 0;
  *puVar19 = &PTR_LAB_143f59420;
  *(undefined4 *)((longlong)puVar19 + 0x14) = uVar3;
  *(int *)(puVar19 + 2) = local_1f8[0];
  *(undefined4 *)(puVar19 + 3) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x1c) = uVar2;
  *(undefined4 *)(puVar19 + 4) = uVar20;
  *(undefined4 *)((longlong)puVar19 + 0x24) = 0x3f800000;
  lVar4 = *(longlong *)(local_1f0 + 0x3090);
  local_180 = &DAT_146a0e980;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x38,local_1f8,&local_180);
  plVar22 = plVar14;
  if (local_1f8[0] != -1) {
    plVar22 = (longlong *)((longlong)local_1f8[0] * 0x20 + *(longlong *)(lVar4 + 0x38));
  }
  uStack_1e0 = 0;
  plVar21 = plVar22 + 2;
  if (plVar22 == (longlong *)0x0) {
    plVar21 = plVar14;
  }
  local_1e8 = &DAT_146a133b0;
  lVar5 = *plVar21;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x38,local_1d0,&local_1e8);
  plVar22 = plVar14;
  if (local_1d0[0] != -1) {
    plVar22 = (longlong *)((longlong)local_1d0[0] * 0x20 + *(longlong *)(lVar4 + 0x38));
  }
  plVar21 = plVar22 + 2;
  if (plVar22 == (longlong *)0x0) {
    plVar21 = plVar14;
  }
  lVar4 = *plVar21;
  local_168 = 0;
  plStack_160 = (longlong *)0x0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = (longlong *)0x0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_11c = 0x26;
  local_114 = 0;
  local_10c = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_bc = 0;
  local_b4 = 0;
  FUN_14049afe0(param_1,&local_168);
  uStack_130 = FUN_140985530();
  local_138 = FUN_1404a0ce0();
  local_128 = FUN_141b097d0();
  local_168 = DAT_1464c2720;
  if (lVar5 == 0) {
    local_1a0 = 0;
    plVar22 = (longlong *)0x1;
    plStack_160 = plVar14;
  }
  else {
    lVar6 = *(longlong *)(lVar5 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plStack_160 = *(longlong **)(lVar6 + 0x38);
    plVar22 = plVar14;
  }
  if (plVar22 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
  }
  bVar10 = false;
  if (lVar4 == 0) {
    bVar10 = true;
    local_198 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar4 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar14 = *(longlong **)(lVar6 + 0x40);
  }
  local_148 = plVar14;
  if (bVar10) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_198);
  }
  local_11c = local_11c & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_168,2,1);
  local_1f0 = 0;
  if (local_1c0 != 0) {
    TRefCountPtr<FRHITexture>::operator=(&local_1f0,*(undefined8 *)(local_1c0 + 0x10));
  }
  lVar6 = local_1f0;
  FUN_141b17870(lVar5,param_1,local_1c8);
  lVar11 = local_190;
  local_1c0 = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
    local_1c0 = local_1f0;
  }
  uVar7 = *(undefined8 *)(local_190 + 0x78);
  if (local_1c0 != 0) {
    LOCK();
    *(int *)(local_1c0 + 8) = *(int *)(local_1c0 + 8) + 1;
    UNLOCK();
  }
  lVar8 = *(longlong *)(lVar4 + 0x48);
  local_188 = lVar6;
  if (*(char *)(lVar8 + 0x28) == '\0') {
    FUN_1419f3850(lVar8);
  }
  local_248 = &local_1c0;
  local_258 = *(undefined8 *)(lVar8 + 0x40);
  local_250 = uVar7;
  FUN_141af7980(lVar4,param_1,lVar12,local_1c8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_188);
  iVar15 = *(int *)(lVar12 + 0x1aac) - *(int *)(lVar12 + 0x1aa4);
  local_228 = *(undefined8 *)(lVar11 + 0x378);
  iVar18 = *(int *)(lVar12 + 0x1aa8) - *(int *)(lVar12 + 0x1aa0);
  local_208 = 1;
  local_210 = 0;
  local_238 = (float)iVar15;
  local_1c8 = CONCAT44(iVar15,iVar18);
  local_218 = *(undefined4 *)(lVar12 + 0xf60);
  local_230 = local_1c8;
  local_240 = (float)iVar18;
  local_248 = (longlong *)CONCAT44(local_248._4_4_,(float)*(int *)(lVar12 + 0x1aa4));
  local_250 = CONCAT44(local_250._4_4_,(float)*(int *)(lVar12 + 0x1aa0));
  local_258 = CONCAT44(local_258._4_4_,local_238);
  local_220 = lVar5;
  FUN_141ce13a0(param_1);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_1f0);
  return;
}



// FUNCTION 141af39e0 FUN_141af39e0 body=1987 status=ok
// SIG undefined FUN_141af39e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141af39e0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined *puVar9;
  bool bVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  int iVar15;
  undefined8 *puVar16;
  uint uVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined4 uVar20;
  longlong *plVar21;
  longlong *plVar22;
  undefined1 auStack_278 [32];
  undefined8 local_258;
  undefined8 local_250;
  longlong *local_248;
  float local_240;
  float local_238;
  undefined8 local_230;
  undefined8 local_228;
  longlong local_220;
  undefined4 local_218;
  undefined1 local_210;
  undefined4 local_208;
  int local_1f8 [2];
  longlong local_1f0;
  undefined *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined2 local_1d8;
  undefined6 uStack_1d6;
  int local_1d0 [2];
  undefined8 local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  longlong local_190;
  longlong local_188;
  undefined *local_180;
  undefined4 local_178;
  undefined8 local_168;
  longlong *plStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  longlong *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  ulonglong local_11c;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined *local_a8 [4];
  undefined8 uStack_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  plVar14 = (longlong *)0x0;
  local_1d0[0] = 0;
  local_1f0 = param_2;
  local_1c8 = param_3;
  local_1c0 = param_4;
  local_190 = FSceneRenderTargets::Get();
  uVar20 = 2;
  lVar4 = *(longlong *)(local_190 + 0x2e0);
  local_78 = (undefined *)0x0;
  uStack_70 = 0xffffffff00000000;
  local_68 = local_68 & 0xffffffffffff0000;
  local_a8[2] = (undefined *)CONCAT62(uStack_1d6,0x101);
  local_1d8 = 0x101;
  uStack_1e0 = 0;
  uStack_1dc = 0xffffffff;
  local_a8[0] = *(undefined **)(lVar4 + 8);
  local_a8[1] = (undefined *)0xffffffff00000000;
  local_1e8 = *(undefined **)(*(longlong *)(local_190 + 0x2e8) + 8);
  local_80 = CONCAT62(uStack_1d6,0x101);
  local_a8[3] = local_1e8;
  uStack_88 = 0xffffffff00000000;
  local_1b8 = *(undefined8 *)(*(longlong *)(local_190 + 0x60) + 0x10);
  uStack_1b0 = 0x10001;
  uStack_1ac = 0x11;
  if (param_4 != 0) {
    uVar20 = 3;
    lVar12 = FUN_141ce4a10(local_190,param_1);
    local_1e8 = *(undefined **)(lVar12 + 8);
    local_68 = CONCAT62(uStack_1d6,0x101);
    local_78 = local_1e8;
    uStack_70 = 0xffffffff00000000;
  }
  uStack_70 = 0xffffffff00000000;
  local_1d8 = 0x101;
  uStack_1dc = 0xffffffff;
  uStack_1e0 = 0;
  *(undefined4 *)(param_1 + 0x98) = uVar20;
  iVar15 = 0;
  plVar22 = plVar14;
  do {
    uVar17 = (int)plVar22 + 1;
    puVar9 = local_a8[(longlong)plVar22 * 3 + 1];
    puVar1 = local_a8[(longlong)plVar22 * 3 + 2];
    puVar13 = (undefined8 *)(param_1 + 0xa0 + (longlong)plVar22 * 0x18);
    *puVar13 = local_a8[(longlong)plVar22 * 3];
    puVar13[1] = puVar9;
    *(undefined **)(param_1 + 0xb0 + (longlong)plVar22 * 0x18) = puVar1;
    plVar22 = (longlong *)(ulonglong)uVar17;
  } while (uVar17 < *(uint *)(param_1 + 0x98));
  *(undefined8 *)(param_1 + 0x160) = local_1b8;
  *(ulonglong *)(param_1 + 0x168) = CONCAT44(uStack_1ac,uStack_1b0);
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar19 + 0x26;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
    puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar19 + 0x26;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar19;
  *(undefined8 **)(param_1 + 8) = puVar19 + 1;
  puVar19[1] = 0;
  *puVar19 = &PTR_LAB_143f59440;
  *(undefined4 *)(puVar19 + 2) = uVar20;
  puVar19[3] = 0;
  *(undefined4 *)(puVar19 + 4) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x24) = 0xffffffff;
  *(undefined2 *)(puVar19 + 5) = 0;
  puVar19[6] = 0;
  *(undefined4 *)(puVar19 + 7) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x3c) = 0xffffffff;
  *(undefined2 *)(puVar19 + 8) = 0;
  puVar19[9] = 0;
  *(undefined4 *)(puVar19 + 10) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x54) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0xb) = 0;
  puVar19[0xc] = 0;
  *(undefined4 *)(puVar19 + 0xd) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x6c) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0xe) = 0;
  puVar19[0xf] = 0;
  *(undefined4 *)(puVar19 + 0x10) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x84) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x11) = 0;
  puVar19[0x12] = 0;
  *(undefined4 *)(puVar19 + 0x13) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x9c) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x14) = 0;
  puVar19[0x15] = 0;
  *(undefined4 *)(puVar19 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar19 + 0xb4) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x17) = 0;
  puVar19[0x18] = 0;
  *(undefined4 *)(puVar19 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar19 + 0xcc) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x1a) = 0;
  puVar19[0x1b] = 0;
  *(undefined4 *)(puVar19 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar19 + 0xe4) = 0;
  plVar22 = plVar14;
  if (*(int *)(puVar19 + 2) != 0) {
    do {
      uVar17 = (int)plVar22 + 1;
      puVar1 = local_a8[(longlong)plVar22 * 3 + 1];
      puVar19[(longlong)plVar22 * 3 + 3] = local_a8[(longlong)plVar22 * 3];
      (puVar19 + (longlong)plVar22 * 3 + 3)[1] = puVar1;
      puVar19[(longlong)plVar22 * 3 + 5] = local_a8[(longlong)plVar22 * 3 + 2];
      plVar22 = (longlong *)(ulonglong)uVar17;
    } while (uVar17 < *(uint *)(puVar19 + 2));
    iVar15 = *(int *)(puVar19 + 0x1d);
  }
  plVar22 = plVar14;
  if (iVar15 != 0) {
    do {
      uVar17 = (int)plVar22 + 1;
      puVar19[(longlong)plVar22 + 0x1e] = *(undefined8 *)((longlong)plVar22 * 8);
      plVar22 = (longlong *)(ulonglong)uVar17;
    } while (uVar17 < *(uint *)(puVar19 + 0x1d));
  }
  puVar19[0x1b] = local_1b8;
  puVar19[0x1c] = CONCAT44(uStack_1ac,uStack_1b0);
  local_1a8 = *(undefined8 *)(lVar4 + 8);
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar19 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar19 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *puVar19 = local_1a8;
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar16 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar16;
  *(undefined8 **)(param_1 + 8) = puVar16 + 1;
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar16 + 2) = 1;
  puVar16[3] = puVar19;
  *(undefined4 *)(puVar16 + 4) = 1;
  *(undefined1 *)((longlong)puVar16 + 0x24) = 0;
  local_1f8[0] = *(int *)(local_1f0 + 0x1aa0);
  uVar20 = *(undefined4 *)(param_2 + 0x1aac);
  uVar2 = *(undefined4 *)(param_2 + 0x1aa8);
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar3 = *(undefined4 *)(param_2 + 0x1aa4);
  puVar13 = puVar19 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar19 + 5;
  }
  lVar12 = local_1f0;
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  local_178 = 0;
  **(undefined8 **)(param_1 + 8) = puVar19;
  *(undefined8 **)(param_1 + 8) = puVar19 + 1;
  puVar19[1] = 0;
  *puVar19 = &PTR_LAB_143f59420;
  *(undefined4 *)((longlong)puVar19 + 0x14) = uVar3;
  *(int *)(puVar19 + 2) = local_1f8[0];
  *(undefined4 *)(puVar19 + 3) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x1c) = uVar2;
  *(undefined4 *)(puVar19 + 4) = uVar20;
  *(undefined4 *)((longlong)puVar19 + 0x24) = 0x3f800000;
  lVar4 = *(longlong *)(local_1f0 + 0x3090);
  local_180 = &DAT_146a0e980;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x38,local_1f8,&local_180);
  plVar22 = plVar14;
  if (local_1f8[0] != -1) {
    plVar22 = (longlong *)((longlong)local_1f8[0] * 0x20 + *(longlong *)(lVar4 + 0x38));
  }
  uStack_1e0 = 0;
  plVar21 = plVar22 + 2;
  if (plVar22 == (longlong *)0x0) {
    plVar21 = plVar14;
  }
  local_1e8 = &DAT_146a13b90;
  lVar5 = *plVar21;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x38,local_1d0,&local_1e8);
  plVar22 = plVar14;
  if (local_1d0[0] != -1) {
    plVar22 = (longlong *)((longlong)local_1d0[0] * 0x20 + *(longlong *)(lVar4 + 0x38));
  }
  plVar21 = plVar22 + 2;
  if (plVar22 == (longlong *)0x0) {
    plVar21 = plVar14;
  }
  lVar4 = *plVar21;
  local_168 = 0;
  plStack_160 = (longlong *)0x0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = (longlong *)0x0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_11c = 0x26;
  local_114 = 0;
  local_10c = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_bc = 0;
  local_b4 = 0;
  FUN_14049afe0(param_1,&local_168);
  uStack_130 = FUN_140985530();
  local_138 = FUN_1404a0ce0();
  local_128 = FUN_141b097d0();
  local_168 = DAT_1464c2720;
  if (lVar5 == 0) {
    local_1a0 = 0;
    plVar22 = (longlong *)0x1;
    plStack_160 = plVar14;
  }
  else {
    lVar6 = *(longlong *)(lVar5 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plStack_160 = *(longlong **)(lVar6 + 0x38);
    plVar22 = plVar14;
  }
  if (plVar22 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
  }
  bVar10 = false;
  if (lVar4 == 0) {
    bVar10 = true;
    local_198 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar4 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar14 = *(longlong **)(lVar6 + 0x40);
  }
  local_148 = plVar14;
  if (bVar10) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_198);
  }
  local_11c = local_11c & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_168,2,1);
  local_1f0 = 0;
  if (local_1c0 != 0) {
    TRefCountPtr<FRHITexture>::operator=(&local_1f0,*(undefined8 *)(local_1c0 + 0x10));
  }
  lVar6 = local_1f0;
  FUN_141b17870(lVar5,param_1,local_1c8);
  lVar11 = local_190;
  local_1c0 = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
    local_1c0 = local_1f0;
  }
  uVar7 = *(undefined8 *)(local_190 + 0x78);
  if (local_1c0 != 0) {
    LOCK();
    *(int *)(local_1c0 + 8) = *(int *)(local_1c0 + 8) + 1;
    UNLOCK();
  }
  lVar8 = *(longlong *)(lVar4 + 0x48);
  local_188 = lVar6;
  if (*(char *)(lVar8 + 0x28) == '\0') {
    FUN_1419f3850(lVar8);
  }
  local_248 = &local_1c0;
  local_258 = *(undefined8 *)(lVar8 + 0x40);
  local_250 = uVar7;
  FUN_141af7980(lVar4,param_1,lVar12,local_1c8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_188);
  iVar15 = *(int *)(lVar12 + 0x1aac) - *(int *)(lVar12 + 0x1aa4);
  local_228 = *(undefined8 *)(lVar11 + 0x378);
  iVar18 = *(int *)(lVar12 + 0x1aa8) - *(int *)(lVar12 + 0x1aa0);
  local_208 = 1;
  local_210 = 0;
  local_238 = (float)iVar15;
  local_1c8 = CONCAT44(iVar15,iVar18);
  local_218 = *(undefined4 *)(lVar12 + 0xf60);
  local_230 = local_1c8;
  local_240 = (float)iVar18;
  local_248 = (longlong *)CONCAT44(local_248._4_4_,(float)*(int *)(lVar12 + 0x1aa4));
  local_250 = CONCAT44(local_250._4_4_,(float)*(int *)(lVar12 + 0x1aa0));
  local_258 = CONCAT44(local_258._4_4_,local_238);
  local_220 = lVar5;
  FUN_141ce13a0(param_1);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_1f0);
  return;
}



// FUNCTION 141af41b0 FUN_141af41b0 body=1987 status=ok
// SIG undefined FUN_141af41b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141af41b0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined *puVar9;
  bool bVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  int iVar15;
  undefined8 *puVar16;
  uint uVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined4 uVar20;
  longlong *plVar21;
  longlong *plVar22;
  undefined1 auStack_278 [32];
  undefined8 local_258;
  undefined8 local_250;
  longlong *local_248;
  float local_240;
  float local_238;
  undefined8 local_230;
  undefined8 local_228;
  longlong local_220;
  undefined4 local_218;
  undefined1 local_210;
  undefined4 local_208;
  int local_1f8 [2];
  longlong local_1f0;
  undefined *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined2 local_1d8;
  undefined6 uStack_1d6;
  int local_1d0 [2];
  undefined8 local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  longlong local_190;
  longlong local_188;
  undefined *local_180;
  undefined4 local_178;
  undefined8 local_168;
  longlong *plStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  longlong *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  ulonglong local_11c;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined *local_a8 [4];
  undefined8 uStack_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  plVar14 = (longlong *)0x0;
  local_1d0[0] = 0;
  local_1f0 = param_2;
  local_1c8 = param_3;
  local_1c0 = param_4;
  local_190 = FSceneRenderTargets::Get();
  uVar20 = 2;
  lVar4 = *(longlong *)(local_190 + 0x2e0);
  local_78 = (undefined *)0x0;
  uStack_70 = 0xffffffff00000000;
  local_68 = local_68 & 0xffffffffffff0000;
  local_a8[2] = (undefined *)CONCAT62(uStack_1d6,0x101);
  local_1d8 = 0x101;
  uStack_1e0 = 0;
  uStack_1dc = 0xffffffff;
  local_a8[0] = *(undefined **)(lVar4 + 8);
  local_a8[1] = (undefined *)0xffffffff00000000;
  local_1e8 = *(undefined **)(*(longlong *)(local_190 + 0x2e8) + 8);
  local_80 = CONCAT62(uStack_1d6,0x101);
  local_a8[3] = local_1e8;
  uStack_88 = 0xffffffff00000000;
  local_1b8 = *(undefined8 *)(*(longlong *)(local_190 + 0x60) + 0x10);
  uStack_1b0 = 0x10001;
  uStack_1ac = 0x11;
  if (param_4 != 0) {
    uVar20 = 3;
    lVar12 = FUN_141ce4a10(local_190,param_1);
    local_1e8 = *(undefined **)(lVar12 + 8);
    local_68 = CONCAT62(uStack_1d6,0x101);
    local_78 = local_1e8;
    uStack_70 = 0xffffffff00000000;
  }
  uStack_70 = 0xffffffff00000000;
  local_1d8 = 0x101;
  uStack_1dc = 0xffffffff;
  uStack_1e0 = 0;
  *(undefined4 *)(param_1 + 0x98) = uVar20;
  iVar15 = 0;
  plVar22 = plVar14;
  do {
    uVar17 = (int)plVar22 + 1;
    puVar9 = local_a8[(longlong)plVar22 * 3 + 1];
    puVar1 = local_a8[(longlong)plVar22 * 3 + 2];
    puVar13 = (undefined8 *)(param_1 + 0xa0 + (longlong)plVar22 * 0x18);
    *puVar13 = local_a8[(longlong)plVar22 * 3];
    puVar13[1] = puVar9;
    *(undefined **)(param_1 + 0xb0 + (longlong)plVar22 * 0x18) = puVar1;
    plVar22 = (longlong *)(ulonglong)uVar17;
  } while (uVar17 < *(uint *)(param_1 + 0x98));
  *(undefined8 *)(param_1 + 0x160) = local_1b8;
  *(ulonglong *)(param_1 + 0x168) = CONCAT44(uStack_1ac,uStack_1b0);
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar19 + 0x26;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
    puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar19 + 0x26;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar19;
  *(undefined8 **)(param_1 + 8) = puVar19 + 1;
  puVar19[1] = 0;
  *puVar19 = &PTR_LAB_143f59440;
  *(undefined4 *)(puVar19 + 2) = uVar20;
  puVar19[3] = 0;
  *(undefined4 *)(puVar19 + 4) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x24) = 0xffffffff;
  *(undefined2 *)(puVar19 + 5) = 0;
  puVar19[6] = 0;
  *(undefined4 *)(puVar19 + 7) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x3c) = 0xffffffff;
  *(undefined2 *)(puVar19 + 8) = 0;
  puVar19[9] = 0;
  *(undefined4 *)(puVar19 + 10) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x54) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0xb) = 0;
  puVar19[0xc] = 0;
  *(undefined4 *)(puVar19 + 0xd) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x6c) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0xe) = 0;
  puVar19[0xf] = 0;
  *(undefined4 *)(puVar19 + 0x10) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x84) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x11) = 0;
  puVar19[0x12] = 0;
  *(undefined4 *)(puVar19 + 0x13) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x9c) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x14) = 0;
  puVar19[0x15] = 0;
  *(undefined4 *)(puVar19 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar19 + 0xb4) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x17) = 0;
  puVar19[0x18] = 0;
  *(undefined4 *)(puVar19 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar19 + 0xcc) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x1a) = 0;
  puVar19[0x1b] = 0;
  *(undefined4 *)(puVar19 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar19 + 0xe4) = 0;
  plVar22 = plVar14;
  if (*(int *)(puVar19 + 2) != 0) {
    do {
      uVar17 = (int)plVar22 + 1;
      puVar1 = local_a8[(longlong)plVar22 * 3 + 1];
      puVar19[(longlong)plVar22 * 3 + 3] = local_a8[(longlong)plVar22 * 3];
      (puVar19 + (longlong)plVar22 * 3 + 3)[1] = puVar1;
      puVar19[(longlong)plVar22 * 3 + 5] = local_a8[(longlong)plVar22 * 3 + 2];
      plVar22 = (longlong *)(ulonglong)uVar17;
    } while (uVar17 < *(uint *)(puVar19 + 2));
    iVar15 = *(int *)(puVar19 + 0x1d);
  }
  plVar22 = plVar14;
  if (iVar15 != 0) {
    do {
      uVar17 = (int)plVar22 + 1;
      puVar19[(longlong)plVar22 + 0x1e] = *(undefined8 *)((longlong)plVar22 * 8);
      plVar22 = (longlong *)(ulonglong)uVar17;
    } while (uVar17 < *(uint *)(puVar19 + 0x1d));
  }
  puVar19[0x1b] = local_1b8;
  puVar19[0x1c] = CONCAT44(uStack_1ac,uStack_1b0);
  local_1a8 = *(undefined8 *)(lVar4 + 8);
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar19 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar19 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *puVar19 = local_1a8;
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar16 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar16;
  *(undefined8 **)(param_1 + 8) = puVar16 + 1;
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar16 + 2) = 1;
  puVar16[3] = puVar19;
  *(undefined4 *)(puVar16 + 4) = 1;
  *(undefined1 *)((longlong)puVar16 + 0x24) = 0;
  local_1f8[0] = *(int *)(local_1f0 + 0x1aa0);
  uVar20 = *(undefined4 *)(param_2 + 0x1aac);
  uVar2 = *(undefined4 *)(param_2 + 0x1aa8);
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar3 = *(undefined4 *)(param_2 + 0x1aa4);
  puVar13 = puVar19 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar19 + 5;
  }
  lVar12 = local_1f0;
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  local_178 = 0;
  **(undefined8 **)(param_1 + 8) = puVar19;
  *(undefined8 **)(param_1 + 8) = puVar19 + 1;
  puVar19[1] = 0;
  *puVar19 = &PTR_LAB_143f59420;
  *(undefined4 *)((longlong)puVar19 + 0x14) = uVar3;
  *(int *)(puVar19 + 2) = local_1f8[0];
  *(undefined4 *)(puVar19 + 3) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x1c) = uVar2;
  *(undefined4 *)(puVar19 + 4) = uVar20;
  *(undefined4 *)((longlong)puVar19 + 0x24) = 0x3f800000;
  lVar4 = *(longlong *)(local_1f0 + 0x3090);
  local_180 = &DAT_146a0e980;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x38,local_1f8,&local_180);
  plVar22 = plVar14;
  if (local_1f8[0] != -1) {
    plVar22 = (longlong *)((longlong)local_1f8[0] * 0x20 + *(longlong *)(lVar4 + 0x38));
  }
  uStack_1e0 = 0;
  plVar21 = plVar22 + 2;
  if (plVar22 == (longlong *)0x0) {
    plVar21 = plVar14;
  }
  local_1e8 = &DAT_146a138f0;
  lVar5 = *plVar21;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x38,local_1d0,&local_1e8);
  plVar22 = plVar14;
  if (local_1d0[0] != -1) {
    plVar22 = (longlong *)((longlong)local_1d0[0] * 0x20 + *(longlong *)(lVar4 + 0x38));
  }
  plVar21 = plVar22 + 2;
  if (plVar22 == (longlong *)0x0) {
    plVar21 = plVar14;
  }
  lVar4 = *plVar21;
  local_168 = 0;
  plStack_160 = (longlong *)0x0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = (longlong *)0x0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_11c = 0x26;
  local_114 = 0;
  local_10c = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_bc = 0;
  local_b4 = 0;
  FUN_14049afe0(param_1,&local_168);
  uStack_130 = FUN_140985530();
  local_138 = FUN_1404a0ce0();
  local_128 = FUN_141b097d0();
  local_168 = DAT_1464c2720;
  if (lVar5 == 0) {
    local_1a0 = 0;
    plVar22 = (longlong *)0x1;
    plStack_160 = plVar14;
  }
  else {
    lVar6 = *(longlong *)(lVar5 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plStack_160 = *(longlong **)(lVar6 + 0x38);
    plVar22 = plVar14;
  }
  if (plVar22 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
  }
  bVar10 = false;
  if (lVar4 == 0) {
    bVar10 = true;
    local_198 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar4 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar14 = *(longlong **)(lVar6 + 0x40);
  }
  local_148 = plVar14;
  if (bVar10) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_198);
  }
  local_11c = local_11c & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_168,2,1);
  local_1f0 = 0;
  if (local_1c0 != 0) {
    TRefCountPtr<FRHITexture>::operator=(&local_1f0,*(undefined8 *)(local_1c0 + 0x10));
  }
  lVar6 = local_1f0;
  FUN_141b17870(lVar5,param_1,local_1c8);
  lVar11 = local_190;
  local_1c0 = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
    local_1c0 = local_1f0;
  }
  uVar7 = *(undefined8 *)(local_190 + 0x78);
  if (local_1c0 != 0) {
    LOCK();
    *(int *)(local_1c0 + 8) = *(int *)(local_1c0 + 8) + 1;
    UNLOCK();
  }
  lVar8 = *(longlong *)(lVar4 + 0x48);
  local_188 = lVar6;
  if (*(char *)(lVar8 + 0x28) == '\0') {
    FUN_1419f3850(lVar8);
  }
  local_248 = &local_1c0;
  local_258 = *(undefined8 *)(lVar8 + 0x40);
  local_250 = uVar7;
  FUN_141af7980(lVar4,param_1,lVar12,local_1c8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_188);
  iVar15 = *(int *)(lVar12 + 0x1aac) - *(int *)(lVar12 + 0x1aa4);
  local_228 = *(undefined8 *)(lVar11 + 0x378);
  iVar18 = *(int *)(lVar12 + 0x1aa8) - *(int *)(lVar12 + 0x1aa0);
  local_208 = 1;
  local_210 = 0;
  local_238 = (float)iVar15;
  local_1c8 = CONCAT44(iVar15,iVar18);
  local_218 = *(undefined4 *)(lVar12 + 0xf60);
  local_230 = local_1c8;
  local_240 = (float)iVar18;
  local_248 = (longlong *)CONCAT44(local_248._4_4_,(float)*(int *)(lVar12 + 0x1aa4));
  local_250 = CONCAT44(local_250._4_4_,(float)*(int *)(lVar12 + 0x1aa0));
  local_258 = CONCAT44(local_258._4_4_,local_238);
  local_220 = lVar5;
  FUN_141ce13a0(param_1);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_1f0);
  return;
}



// FUNCTION 141af4980 FUN_141af4980 body=1987 status=ok
// SIG undefined FUN_141af4980(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141af4980(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined *puVar9;
  bool bVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  int iVar15;
  undefined8 *puVar16;
  uint uVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined4 uVar20;
  longlong *plVar21;
  longlong *plVar22;
  undefined1 auStack_278 [32];
  undefined8 local_258;
  undefined8 local_250;
  longlong *local_248;
  float local_240;
  float local_238;
  undefined8 local_230;
  undefined8 local_228;
  longlong local_220;
  undefined4 local_218;
  undefined1 local_210;
  undefined4 local_208;
  int local_1f8 [2];
  longlong local_1f0;
  undefined *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined2 local_1d8;
  undefined6 uStack_1d6;
  int local_1d0 [2];
  undefined8 local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  longlong local_190;
  longlong local_188;
  undefined *local_180;
  undefined4 local_178;
  undefined8 local_168;
  longlong *plStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  longlong *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  ulonglong local_11c;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined *local_a8 [4];
  undefined8 uStack_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  plVar14 = (longlong *)0x0;
  local_1d0[0] = 0;
  local_1f0 = param_2;
  local_1c8 = param_3;
  local_1c0 = param_4;
  local_190 = FSceneRenderTargets::Get();
  uVar20 = 2;
  lVar4 = *(longlong *)(local_190 + 0x2e0);
  local_78 = (undefined *)0x0;
  uStack_70 = 0xffffffff00000000;
  local_68 = local_68 & 0xffffffffffff0000;
  local_a8[2] = (undefined *)CONCAT62(uStack_1d6,0x101);
  local_1d8 = 0x101;
  uStack_1e0 = 0;
  uStack_1dc = 0xffffffff;
  local_a8[0] = *(undefined **)(lVar4 + 8);
  local_a8[1] = (undefined *)0xffffffff00000000;
  local_1e8 = *(undefined **)(*(longlong *)(local_190 + 0x2e8) + 8);
  local_80 = CONCAT62(uStack_1d6,0x101);
  local_a8[3] = local_1e8;
  uStack_88 = 0xffffffff00000000;
  local_1b8 = *(undefined8 *)(*(longlong *)(local_190 + 0x60) + 0x10);
  uStack_1b0 = 0x10001;
  uStack_1ac = 0x11;
  if (param_4 != 0) {
    uVar20 = 3;
    lVar12 = FUN_141ce4a10(local_190,param_1);
    local_1e8 = *(undefined **)(lVar12 + 8);
    local_68 = CONCAT62(uStack_1d6,0x101);
    local_78 = local_1e8;
    uStack_70 = 0xffffffff00000000;
  }
  uStack_70 = 0xffffffff00000000;
  local_1d8 = 0x101;
  uStack_1dc = 0xffffffff;
  uStack_1e0 = 0;
  *(undefined4 *)(param_1 + 0x98) = uVar20;
  iVar15 = 0;
  plVar22 = plVar14;
  do {
    uVar17 = (int)plVar22 + 1;
    puVar9 = local_a8[(longlong)plVar22 * 3 + 1];
    puVar1 = local_a8[(longlong)plVar22 * 3 + 2];
    puVar13 = (undefined8 *)(param_1 + 0xa0 + (longlong)plVar22 * 0x18);
    *puVar13 = local_a8[(longlong)plVar22 * 3];
    puVar13[1] = puVar9;
    *(undefined **)(param_1 + 0xb0 + (longlong)plVar22 * 0x18) = puVar1;
    plVar22 = (longlong *)(ulonglong)uVar17;
  } while (uVar17 < *(uint *)(param_1 + 0x98));
  *(undefined8 *)(param_1 + 0x160) = local_1b8;
  *(ulonglong *)(param_1 + 0x168) = CONCAT44(uStack_1ac,uStack_1b0);
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar19 + 0x26;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
    puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar19 + 0x26;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar19;
  *(undefined8 **)(param_1 + 8) = puVar19 + 1;
  puVar19[1] = 0;
  *puVar19 = &PTR_LAB_143f59440;
  *(undefined4 *)(puVar19 + 2) = uVar20;
  puVar19[3] = 0;
  *(undefined4 *)(puVar19 + 4) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x24) = 0xffffffff;
  *(undefined2 *)(puVar19 + 5) = 0;
  puVar19[6] = 0;
  *(undefined4 *)(puVar19 + 7) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x3c) = 0xffffffff;
  *(undefined2 *)(puVar19 + 8) = 0;
  puVar19[9] = 0;
  *(undefined4 *)(puVar19 + 10) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x54) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0xb) = 0;
  puVar19[0xc] = 0;
  *(undefined4 *)(puVar19 + 0xd) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x6c) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0xe) = 0;
  puVar19[0xf] = 0;
  *(undefined4 *)(puVar19 + 0x10) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x84) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x11) = 0;
  puVar19[0x12] = 0;
  *(undefined4 *)(puVar19 + 0x13) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x9c) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x14) = 0;
  puVar19[0x15] = 0;
  *(undefined4 *)(puVar19 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar19 + 0xb4) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x17) = 0;
  puVar19[0x18] = 0;
  *(undefined4 *)(puVar19 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar19 + 0xcc) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x1a) = 0;
  puVar19[0x1b] = 0;
  *(undefined4 *)(puVar19 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar19 + 0xe4) = 0;
  plVar22 = plVar14;
  if (*(int *)(puVar19 + 2) != 0) {
    do {
      uVar17 = (int)plVar22 + 1;
      puVar1 = local_a8[(longlong)plVar22 * 3 + 1];
      puVar19[(longlong)plVar22 * 3 + 3] = local_a8[(longlong)plVar22 * 3];
      (puVar19 + (longlong)plVar22 * 3 + 3)[1] = puVar1;
      puVar19[(longlong)plVar22 * 3 + 5] = local_a8[(longlong)plVar22 * 3 + 2];
      plVar22 = (longlong *)(ulonglong)uVar17;
    } while (uVar17 < *(uint *)(puVar19 + 2));
    iVar15 = *(int *)(puVar19 + 0x1d);
  }
  plVar22 = plVar14;
  if (iVar15 != 0) {
    do {
      uVar17 = (int)plVar22 + 1;
      puVar19[(longlong)plVar22 + 0x1e] = *(undefined8 *)((longlong)plVar22 * 8);
      plVar22 = (longlong *)(ulonglong)uVar17;
    } while (uVar17 < *(uint *)(puVar19 + 0x1d));
  }
  puVar19[0x1b] = local_1b8;
  puVar19[0x1c] = CONCAT44(uStack_1ac,uStack_1b0);
  local_1a8 = *(undefined8 *)(lVar4 + 8);
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar19 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar19 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *puVar19 = local_1a8;
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar16 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar16;
  *(undefined8 **)(param_1 + 8) = puVar16 + 1;
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar16 + 2) = 1;
  puVar16[3] = puVar19;
  *(undefined4 *)(puVar16 + 4) = 1;
  *(undefined1 *)((longlong)puVar16 + 0x24) = 0;
  local_1f8[0] = *(int *)(local_1f0 + 0x1aa0);
  uVar20 = *(undefined4 *)(param_2 + 0x1aac);
  uVar2 = *(undefined4 *)(param_2 + 0x1aa8);
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar3 = *(undefined4 *)(param_2 + 0x1aa4);
  puVar13 = puVar19 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar19 + 5;
  }
  lVar12 = local_1f0;
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  local_178 = 0;
  **(undefined8 **)(param_1 + 8) = puVar19;
  *(undefined8 **)(param_1 + 8) = puVar19 + 1;
  puVar19[1] = 0;
  *puVar19 = &PTR_LAB_143f59420;
  *(undefined4 *)((longlong)puVar19 + 0x14) = uVar3;
  *(int *)(puVar19 + 2) = local_1f8[0];
  *(undefined4 *)(puVar19 + 3) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x1c) = uVar2;
  *(undefined4 *)(puVar19 + 4) = uVar20;
  *(undefined4 *)((longlong)puVar19 + 0x24) = 0x3f800000;
  lVar4 = *(longlong *)(local_1f0 + 0x3090);
  local_180 = &DAT_146a0e980;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x38,local_1f8,&local_180);
  plVar22 = plVar14;
  if (local_1f8[0] != -1) {
    plVar22 = (longlong *)((longlong)local_1f8[0] * 0x20 + *(longlong *)(lVar4 + 0x38));
  }
  uStack_1e0 = 0;
  plVar21 = plVar22 + 2;
  if (plVar22 == (longlong *)0x0) {
    plVar21 = plVar14;
  }
  local_1e8 = &DAT_146a140d0;
  lVar5 = *plVar21;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x38,local_1d0,&local_1e8);
  plVar22 = plVar14;
  if (local_1d0[0] != -1) {
    plVar22 = (longlong *)((longlong)local_1d0[0] * 0x20 + *(longlong *)(lVar4 + 0x38));
  }
  plVar21 = plVar22 + 2;
  if (plVar22 == (longlong *)0x0) {
    plVar21 = plVar14;
  }
  lVar4 = *plVar21;
  local_168 = 0;
  plStack_160 = (longlong *)0x0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = (longlong *)0x0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_11c = 0x26;
  local_114 = 0;
  local_10c = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_bc = 0;
  local_b4 = 0;
  FUN_14049afe0(param_1,&local_168);
  uStack_130 = FUN_140985530();
  local_138 = FUN_1404a0ce0();
  local_128 = FUN_141b097d0();
  local_168 = DAT_1464c2720;
  if (lVar5 == 0) {
    local_1a0 = 0;
    plVar22 = (longlong *)0x1;
    plStack_160 = plVar14;
  }
  else {
    lVar6 = *(longlong *)(lVar5 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plStack_160 = *(longlong **)(lVar6 + 0x38);
    plVar22 = plVar14;
  }
  if (plVar22 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
  }
  bVar10 = false;
  if (lVar4 == 0) {
    bVar10 = true;
    local_198 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar4 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar14 = *(longlong **)(lVar6 + 0x40);
  }
  local_148 = plVar14;
  if (bVar10) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_198);
  }
  local_11c = local_11c & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_168,2,1);
  local_1f0 = 0;
  if (local_1c0 != 0) {
    TRefCountPtr<FRHITexture>::operator=(&local_1f0,*(undefined8 *)(local_1c0 + 0x10));
  }
  lVar6 = local_1f0;
  FUN_141b17870(lVar5,param_1,local_1c8);
  lVar11 = local_190;
  local_1c0 = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
    local_1c0 = local_1f0;
  }
  uVar7 = *(undefined8 *)(local_190 + 0x78);
  if (local_1c0 != 0) {
    LOCK();
    *(int *)(local_1c0 + 8) = *(int *)(local_1c0 + 8) + 1;
    UNLOCK();
  }
  lVar8 = *(longlong *)(lVar4 + 0x48);
  local_188 = lVar6;
  if (*(char *)(lVar8 + 0x28) == '\0') {
    FUN_1419f3850(lVar8);
  }
  local_248 = &local_1c0;
  local_258 = *(undefined8 *)(lVar8 + 0x40);
  local_250 = uVar7;
  FUN_141af7980(lVar4,param_1,lVar12,local_1c8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_188);
  iVar15 = *(int *)(lVar12 + 0x1aac) - *(int *)(lVar12 + 0x1aa4);
  local_228 = *(undefined8 *)(lVar11 + 0x378);
  iVar18 = *(int *)(lVar12 + 0x1aa8) - *(int *)(lVar12 + 0x1aa0);
  local_208 = 1;
  local_210 = 0;
  local_238 = (float)iVar15;
  local_1c8 = CONCAT44(iVar15,iVar18);
  local_218 = *(undefined4 *)(lVar12 + 0xf60);
  local_230 = local_1c8;
  local_240 = (float)iVar18;
  local_248 = (longlong *)CONCAT44(local_248._4_4_,(float)*(int *)(lVar12 + 0x1aa4));
  local_250 = CONCAT44(local_250._4_4_,(float)*(int *)(lVar12 + 0x1aa0));
  local_258 = CONCAT44(local_258._4_4_,local_238);
  local_220 = lVar5;
  FUN_141ce13a0(param_1);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_1f0);
  return;
}



// FUNCTION 141af5150 FUN_141af5150 body=1987 status=ok
// SIG undefined FUN_141af5150(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141af5150(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined *puVar9;
  bool bVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  int iVar15;
  undefined8 *puVar16;
  uint uVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined4 uVar20;
  longlong *plVar21;
  longlong *plVar22;
  undefined1 auStack_278 [32];
  undefined8 local_258;
  undefined8 local_250;
  longlong *local_248;
  float local_240;
  float local_238;
  undefined8 local_230;
  undefined8 local_228;
  longlong local_220;
  undefined4 local_218;
  undefined1 local_210;
  undefined4 local_208;
  int local_1f8 [2];
  longlong local_1f0;
  undefined *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined2 local_1d8;
  undefined6 uStack_1d6;
  int local_1d0 [2];
  undefined8 local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  longlong local_190;
  longlong local_188;
  undefined *local_180;
  undefined4 local_178;
  undefined8 local_168;
  longlong *plStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  longlong *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  ulonglong local_11c;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined *local_a8 [4];
  undefined8 uStack_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  plVar14 = (longlong *)0x0;
  local_1d0[0] = 0;
  local_1f0 = param_2;
  local_1c8 = param_3;
  local_1c0 = param_4;
  local_190 = FSceneRenderTargets::Get();
  uVar20 = 2;
  lVar4 = *(longlong *)(local_190 + 0x2e0);
  local_78 = (undefined *)0x0;
  uStack_70 = 0xffffffff00000000;
  local_68 = local_68 & 0xffffffffffff0000;
  local_a8[2] = (undefined *)CONCAT62(uStack_1d6,0x101);
  local_1d8 = 0x101;
  uStack_1e0 = 0;
  uStack_1dc = 0xffffffff;
  local_a8[0] = *(undefined **)(lVar4 + 8);
  local_a8[1] = (undefined *)0xffffffff00000000;
  local_1e8 = *(undefined **)(*(longlong *)(local_190 + 0x2e8) + 8);
  local_80 = CONCAT62(uStack_1d6,0x101);
  local_a8[3] = local_1e8;
  uStack_88 = 0xffffffff00000000;
  local_1b8 = *(undefined8 *)(*(longlong *)(local_190 + 0x60) + 0x10);
  uStack_1b0 = 0x10001;
  uStack_1ac = 0x11;
  if (param_4 != 0) {
    uVar20 = 3;
    lVar12 = FUN_141ce4a10(local_190,param_1);
    local_1e8 = *(undefined **)(lVar12 + 8);
    local_68 = CONCAT62(uStack_1d6,0x101);
    local_78 = local_1e8;
    uStack_70 = 0xffffffff00000000;
  }
  uStack_70 = 0xffffffff00000000;
  local_1d8 = 0x101;
  uStack_1dc = 0xffffffff;
  uStack_1e0 = 0;
  *(undefined4 *)(param_1 + 0x98) = uVar20;
  iVar15 = 0;
  plVar22 = plVar14;
  do {
    uVar17 = (int)plVar22 + 1;
    puVar9 = local_a8[(longlong)plVar22 * 3 + 1];
    puVar1 = local_a8[(longlong)plVar22 * 3 + 2];
    puVar13 = (undefined8 *)(param_1 + 0xa0 + (longlong)plVar22 * 0x18);
    *puVar13 = local_a8[(longlong)plVar22 * 3];
    puVar13[1] = puVar9;
    *(undefined **)(param_1 + 0xb0 + (longlong)plVar22 * 0x18) = puVar1;
    plVar22 = (longlong *)(ulonglong)uVar17;
  } while (uVar17 < *(uint *)(param_1 + 0x98));
  *(undefined8 *)(param_1 + 0x160) = local_1b8;
  *(ulonglong *)(param_1 + 0x168) = CONCAT44(uStack_1ac,uStack_1b0);
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar19 + 0x26;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
    puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar19 + 0x26;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar19;
  *(undefined8 **)(param_1 + 8) = puVar19 + 1;
  puVar19[1] = 0;
  *puVar19 = &PTR_LAB_143f59440;
  *(undefined4 *)(puVar19 + 2) = uVar20;
  puVar19[3] = 0;
  *(undefined4 *)(puVar19 + 4) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x24) = 0xffffffff;
  *(undefined2 *)(puVar19 + 5) = 0;
  puVar19[6] = 0;
  *(undefined4 *)(puVar19 + 7) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x3c) = 0xffffffff;
  *(undefined2 *)(puVar19 + 8) = 0;
  puVar19[9] = 0;
  *(undefined4 *)(puVar19 + 10) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x54) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0xb) = 0;
  puVar19[0xc] = 0;
  *(undefined4 *)(puVar19 + 0xd) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x6c) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0xe) = 0;
  puVar19[0xf] = 0;
  *(undefined4 *)(puVar19 + 0x10) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x84) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x11) = 0;
  puVar19[0x12] = 0;
  *(undefined4 *)(puVar19 + 0x13) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x9c) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x14) = 0;
  puVar19[0x15] = 0;
  *(undefined4 *)(puVar19 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar19 + 0xb4) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x17) = 0;
  puVar19[0x18] = 0;
  *(undefined4 *)(puVar19 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar19 + 0xcc) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x1a) = 0;
  puVar19[0x1b] = 0;
  *(undefined4 *)(puVar19 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar19 + 0xe4) = 0;
  plVar22 = plVar14;
  if (*(int *)(puVar19 + 2) != 0) {
    do {
      uVar17 = (int)plVar22 + 1;
      puVar1 = local_a8[(longlong)plVar22 * 3 + 1];
      puVar19[(longlong)plVar22 * 3 + 3] = local_a8[(longlong)plVar22 * 3];
      (puVar19 + (longlong)plVar22 * 3 + 3)[1] = puVar1;
      puVar19[(longlong)plVar22 * 3 + 5] = local_a8[(longlong)plVar22 * 3 + 2];
      plVar22 = (longlong *)(ulonglong)uVar17;
    } while (uVar17 < *(uint *)(puVar19 + 2));
    iVar15 = *(int *)(puVar19 + 0x1d);
  }
  plVar22 = plVar14;
  if (iVar15 != 0) {
    do {
      uVar17 = (int)plVar22 + 1;
      puVar19[(longlong)plVar22 + 0x1e] = *(undefined8 *)((longlong)plVar22 * 8);
      plVar22 = (longlong *)(ulonglong)uVar17;
    } while (uVar17 < *(uint *)(puVar19 + 0x1d));
  }
  puVar19[0x1b] = local_1b8;
  puVar19[0x1c] = CONCAT44(uStack_1ac,uStack_1b0);
  local_1a8 = *(undefined8 *)(lVar4 + 8);
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar19 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar19 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *puVar19 = local_1a8;
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar16 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar16;
  *(undefined8 **)(param_1 + 8) = puVar16 + 1;
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar16 + 2) = 1;
  puVar16[3] = puVar19;
  *(undefined4 *)(puVar16 + 4) = 1;
  *(undefined1 *)((longlong)puVar16 + 0x24) = 0;
  local_1f8[0] = *(int *)(local_1f0 + 0x1aa0);
  uVar20 = *(undefined4 *)(param_2 + 0x1aac);
  uVar2 = *(undefined4 *)(param_2 + 0x1aa8);
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar3 = *(undefined4 *)(param_2 + 0x1aa4);
  puVar13 = puVar19 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar19 + 5;
  }
  lVar12 = local_1f0;
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  local_178 = 0;
  **(undefined8 **)(param_1 + 8) = puVar19;
  *(undefined8 **)(param_1 + 8) = puVar19 + 1;
  puVar19[1] = 0;
  *puVar19 = &PTR_LAB_143f59420;
  *(undefined4 *)((longlong)puVar19 + 0x14) = uVar3;
  *(int *)(puVar19 + 2) = local_1f8[0];
  *(undefined4 *)(puVar19 + 3) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x1c) = uVar2;
  *(undefined4 *)(puVar19 + 4) = uVar20;
  *(undefined4 *)((longlong)puVar19 + 0x24) = 0x3f800000;
  lVar4 = *(longlong *)(local_1f0 + 0x3090);
  local_180 = &DAT_146a0e980;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x38,local_1f8,&local_180);
  plVar22 = plVar14;
  if (local_1f8[0] != -1) {
    plVar22 = (longlong *)((longlong)local_1f8[0] * 0x20 + *(longlong *)(lVar4 + 0x38));
  }
  uStack_1e0 = 0;
  plVar21 = plVar22 + 2;
  if (plVar22 == (longlong *)0x0) {
    plVar21 = plVar14;
  }
  local_1e8 = &DAT_146a13e30;
  lVar5 = *plVar21;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x38,local_1d0,&local_1e8);
  plVar22 = plVar14;
  if (local_1d0[0] != -1) {
    plVar22 = (longlong *)((longlong)local_1d0[0] * 0x20 + *(longlong *)(lVar4 + 0x38));
  }
  plVar21 = plVar22 + 2;
  if (plVar22 == (longlong *)0x0) {
    plVar21 = plVar14;
  }
  lVar4 = *plVar21;
  local_168 = 0;
  plStack_160 = (longlong *)0x0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = (longlong *)0x0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_11c = 0x26;
  local_114 = 0;
  local_10c = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_bc = 0;
  local_b4 = 0;
  FUN_14049afe0(param_1,&local_168);
  uStack_130 = FUN_140985530();
  local_138 = FUN_1404a0ce0();
  local_128 = FUN_141b097d0();
  local_168 = DAT_1464c2720;
  if (lVar5 == 0) {
    local_1a0 = 0;
    plVar22 = (longlong *)0x1;
    plStack_160 = plVar14;
  }
  else {
    lVar6 = *(longlong *)(lVar5 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plStack_160 = *(longlong **)(lVar6 + 0x38);
    plVar22 = plVar14;
  }
  if (plVar22 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
  }
  bVar10 = false;
  if (lVar4 == 0) {
    bVar10 = true;
    local_198 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar4 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar14 = *(longlong **)(lVar6 + 0x40);
  }
  local_148 = plVar14;
  if (bVar10) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_198);
  }
  local_11c = local_11c & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_168,2,1);
  local_1f0 = 0;
  if (local_1c0 != 0) {
    TRefCountPtr<FRHITexture>::operator=(&local_1f0,*(undefined8 *)(local_1c0 + 0x10));
  }
  lVar6 = local_1f0;
  FUN_141b17870(lVar5,param_1,local_1c8);
  lVar11 = local_190;
  local_1c0 = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
    local_1c0 = local_1f0;
  }
  uVar7 = *(undefined8 *)(local_190 + 0x78);
  if (local_1c0 != 0) {
    LOCK();
    *(int *)(local_1c0 + 8) = *(int *)(local_1c0 + 8) + 1;
    UNLOCK();
  }
  lVar8 = *(longlong *)(lVar4 + 0x48);
  local_188 = lVar6;
  if (*(char *)(lVar8 + 0x28) == '\0') {
    FUN_1419f3850(lVar8);
  }
  local_248 = &local_1c0;
  local_258 = *(undefined8 *)(lVar8 + 0x40);
  local_250 = uVar7;
  FUN_141af7980(lVar4,param_1,lVar12,local_1c8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_188);
  iVar15 = *(int *)(lVar12 + 0x1aac) - *(int *)(lVar12 + 0x1aa4);
  local_228 = *(undefined8 *)(lVar11 + 0x378);
  iVar18 = *(int *)(lVar12 + 0x1aa8) - *(int *)(lVar12 + 0x1aa0);
  local_208 = 1;
  local_210 = 0;
  local_238 = (float)iVar15;
  local_1c8 = CONCAT44(iVar15,iVar18);
  local_218 = *(undefined4 *)(lVar12 + 0xf60);
  local_230 = local_1c8;
  local_240 = (float)iVar18;
  local_248 = (longlong *)CONCAT44(local_248._4_4_,(float)*(int *)(lVar12 + 0x1aa4));
  local_250 = CONCAT44(local_250._4_4_,(float)*(int *)(lVar12 + 0x1aa0));
  local_258 = CONCAT44(local_258._4_4_,local_238);
  local_220 = lVar5;
  FUN_141ce13a0(param_1);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_1f0);
  return;
}



// FUNCTION 141af5920 FUN_141af5920 body=1987 status=ok
// SIG undefined FUN_141af5920(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141af5920(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined *puVar9;
  bool bVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  int iVar15;
  undefined8 *puVar16;
  uint uVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined4 uVar20;
  longlong *plVar21;
  longlong *plVar22;
  undefined1 auStack_278 [32];
  undefined8 local_258;
  undefined8 local_250;
  longlong *local_248;
  float local_240;
  float local_238;
  undefined8 local_230;
  undefined8 local_228;
  longlong local_220;
  undefined4 local_218;
  undefined1 local_210;
  undefined4 local_208;
  int local_1f8 [2];
  longlong local_1f0;
  undefined *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined2 local_1d8;
  undefined6 uStack_1d6;
  int local_1d0 [2];
  undefined8 local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  longlong local_190;
  longlong local_188;
  undefined *local_180;
  undefined4 local_178;
  undefined8 local_168;
  longlong *plStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  longlong *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  ulonglong local_11c;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined *local_a8 [4];
  undefined8 uStack_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  plVar14 = (longlong *)0x0;
  local_1d0[0] = 0;
  local_1f0 = param_2;
  local_1c8 = param_3;
  local_1c0 = param_4;
  local_190 = FSceneRenderTargets::Get();
  uVar20 = 2;
  lVar4 = *(longlong *)(local_190 + 0x2e0);
  local_78 = (undefined *)0x0;
  uStack_70 = 0xffffffff00000000;
  local_68 = local_68 & 0xffffffffffff0000;
  local_a8[2] = (undefined *)CONCAT62(uStack_1d6,0x101);
  local_1d8 = 0x101;
  uStack_1e0 = 0;
  uStack_1dc = 0xffffffff;
  local_a8[0] = *(undefined **)(lVar4 + 8);
  local_a8[1] = (undefined *)0xffffffff00000000;
  local_1e8 = *(undefined **)(*(longlong *)(local_190 + 0x2e8) + 8);
  local_80 = CONCAT62(uStack_1d6,0x101);
  local_a8[3] = local_1e8;
  uStack_88 = 0xffffffff00000000;
  local_1b8 = *(undefined8 *)(*(longlong *)(local_190 + 0x60) + 0x10);
  uStack_1b0 = 0x10001;
  uStack_1ac = 0x11;
  if (param_4 != 0) {
    uVar20 = 3;
    lVar12 = FUN_141ce4a10(local_190,param_1);
    local_1e8 = *(undefined **)(lVar12 + 8);
    local_68 = CONCAT62(uStack_1d6,0x101);
    local_78 = local_1e8;
    uStack_70 = 0xffffffff00000000;
  }
  uStack_70 = 0xffffffff00000000;
  local_1d8 = 0x101;
  uStack_1dc = 0xffffffff;
  uStack_1e0 = 0;
  *(undefined4 *)(param_1 + 0x98) = uVar20;
  iVar15 = 0;
  plVar22 = plVar14;
  do {
    uVar17 = (int)plVar22 + 1;
    puVar9 = local_a8[(longlong)plVar22 * 3 + 1];
    puVar1 = local_a8[(longlong)plVar22 * 3 + 2];
    puVar13 = (undefined8 *)(param_1 + 0xa0 + (longlong)plVar22 * 0x18);
    *puVar13 = local_a8[(longlong)plVar22 * 3];
    puVar13[1] = puVar9;
    *(undefined **)(param_1 + 0xb0 + (longlong)plVar22 * 0x18) = puVar1;
    plVar22 = (longlong *)(ulonglong)uVar17;
  } while (uVar17 < *(uint *)(param_1 + 0x98));
  *(undefined8 *)(param_1 + 0x160) = local_1b8;
  *(ulonglong *)(param_1 + 0x168) = CONCAT44(uStack_1ac,uStack_1b0);
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar19 + 0x26;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
    puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar19 + 0x26;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar19;
  *(undefined8 **)(param_1 + 8) = puVar19 + 1;
  puVar19[1] = 0;
  *puVar19 = &PTR_LAB_143f59440;
  *(undefined4 *)(puVar19 + 2) = uVar20;
  puVar19[3] = 0;
  *(undefined4 *)(puVar19 + 4) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x24) = 0xffffffff;
  *(undefined2 *)(puVar19 + 5) = 0;
  puVar19[6] = 0;
  *(undefined4 *)(puVar19 + 7) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x3c) = 0xffffffff;
  *(undefined2 *)(puVar19 + 8) = 0;
  puVar19[9] = 0;
  *(undefined4 *)(puVar19 + 10) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x54) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0xb) = 0;
  puVar19[0xc] = 0;
  *(undefined4 *)(puVar19 + 0xd) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x6c) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0xe) = 0;
  puVar19[0xf] = 0;
  *(undefined4 *)(puVar19 + 0x10) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x84) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x11) = 0;
  puVar19[0x12] = 0;
  *(undefined4 *)(puVar19 + 0x13) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x9c) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x14) = 0;
  puVar19[0x15] = 0;
  *(undefined4 *)(puVar19 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar19 + 0xb4) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x17) = 0;
  puVar19[0x18] = 0;
  *(undefined4 *)(puVar19 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar19 + 0xcc) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x1a) = 0;
  puVar19[0x1b] = 0;
  *(undefined4 *)(puVar19 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar19 + 0xe4) = 0;
  plVar22 = plVar14;
  if (*(int *)(puVar19 + 2) != 0) {
    do {
      uVar17 = (int)plVar22 + 1;
      puVar1 = local_a8[(longlong)plVar22 * 3 + 1];
      puVar19[(longlong)plVar22 * 3 + 3] = local_a8[(longlong)plVar22 * 3];
      (puVar19 + (longlong)plVar22 * 3 + 3)[1] = puVar1;
      puVar19[(longlong)plVar22 * 3 + 5] = local_a8[(longlong)plVar22 * 3 + 2];
      plVar22 = (longlong *)(ulonglong)uVar17;
    } while (uVar17 < *(uint *)(puVar19 + 2));
    iVar15 = *(int *)(puVar19 + 0x1d);
  }
  plVar22 = plVar14;
  if (iVar15 != 0) {
    do {
      uVar17 = (int)plVar22 + 1;
      puVar19[(longlong)plVar22 + 0x1e] = *(undefined8 *)((longlong)plVar22 * 8);
      plVar22 = (longlong *)(ulonglong)uVar17;
    } while (uVar17 < *(uint *)(puVar19 + 0x1d));
  }
  puVar19[0x1b] = local_1b8;
  puVar19[0x1c] = CONCAT44(uStack_1ac,uStack_1b0);
  local_1a8 = *(undefined8 *)(lVar4 + 8);
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar19 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar19 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *puVar19 = local_1a8;
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar16 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar16;
  *(undefined8 **)(param_1 + 8) = puVar16 + 1;
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar16 + 2) = 1;
  puVar16[3] = puVar19;
  *(undefined4 *)(puVar16 + 4) = 1;
  *(undefined1 *)((longlong)puVar16 + 0x24) = 0;
  local_1f8[0] = *(int *)(local_1f0 + 0x1aa0);
  uVar20 = *(undefined4 *)(param_2 + 0x1aac);
  uVar2 = *(undefined4 *)(param_2 + 0x1aa8);
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar3 = *(undefined4 *)(param_2 + 0x1aa4);
  puVar13 = puVar19 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar19 + 5;
  }
  lVar12 = local_1f0;
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  local_178 = 0;
  **(undefined8 **)(param_1 + 8) = puVar19;
  *(undefined8 **)(param_1 + 8) = puVar19 + 1;
  puVar19[1] = 0;
  *puVar19 = &PTR_LAB_143f59420;
  *(undefined4 *)((longlong)puVar19 + 0x14) = uVar3;
  *(int *)(puVar19 + 2) = local_1f8[0];
  *(undefined4 *)(puVar19 + 3) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x1c) = uVar2;
  *(undefined4 *)(puVar19 + 4) = uVar20;
  *(undefined4 *)((longlong)puVar19 + 0x24) = 0x3f800000;
  lVar4 = *(longlong *)(local_1f0 + 0x3090);
  local_180 = &DAT_146a0e980;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x38,local_1f8,&local_180);
  plVar22 = plVar14;
  if (local_1f8[0] != -1) {
    plVar22 = (longlong *)((longlong)local_1f8[0] * 0x20 + *(longlong *)(lVar4 + 0x38));
  }
  uStack_1e0 = 0;
  plVar21 = plVar22 + 2;
  if (plVar22 == (longlong *)0x0) {
    plVar21 = plVar14;
  }
  local_1e8 = &DAT_146a14610;
  lVar5 = *plVar21;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x38,local_1d0,&local_1e8);
  plVar22 = plVar14;
  if (local_1d0[0] != -1) {
    plVar22 = (longlong *)((longlong)local_1d0[0] * 0x20 + *(longlong *)(lVar4 + 0x38));
  }
  plVar21 = plVar22 + 2;
  if (plVar22 == (longlong *)0x0) {
    plVar21 = plVar14;
  }
  lVar4 = *plVar21;
  local_168 = 0;
  plStack_160 = (longlong *)0x0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = (longlong *)0x0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_11c = 0x26;
  local_114 = 0;
  local_10c = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_bc = 0;
  local_b4 = 0;
  FUN_14049afe0(param_1,&local_168);
  uStack_130 = FUN_140985530();
  local_138 = FUN_1404a0ce0();
  local_128 = FUN_141b097d0();
  local_168 = DAT_1464c2720;
  if (lVar5 == 0) {
    local_1a0 = 0;
    plVar22 = (longlong *)0x1;
    plStack_160 = plVar14;
  }
  else {
    lVar6 = *(longlong *)(lVar5 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plStack_160 = *(longlong **)(lVar6 + 0x38);
    plVar22 = plVar14;
  }
  if (plVar22 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
  }
  bVar10 = false;
  if (lVar4 == 0) {
    bVar10 = true;
    local_198 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar4 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar14 = *(longlong **)(lVar6 + 0x40);
  }
  local_148 = plVar14;
  if (bVar10) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_198);
  }
  local_11c = local_11c & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_168,2,1);
  local_1f0 = 0;
  if (local_1c0 != 0) {
    TRefCountPtr<FRHITexture>::operator=(&local_1f0,*(undefined8 *)(local_1c0 + 0x10));
  }
  lVar6 = local_1f0;
  FUN_141b17870(lVar5,param_1,local_1c8);
  lVar11 = local_190;
  local_1c0 = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
    local_1c0 = local_1f0;
  }
  uVar7 = *(undefined8 *)(local_190 + 0x78);
  if (local_1c0 != 0) {
    LOCK();
    *(int *)(local_1c0 + 8) = *(int *)(local_1c0 + 8) + 1;
    UNLOCK();
  }
  lVar8 = *(longlong *)(lVar4 + 0x48);
  local_188 = lVar6;
  if (*(char *)(lVar8 + 0x28) == '\0') {
    FUN_1419f3850(lVar8);
  }
  local_248 = &local_1c0;
  local_258 = *(undefined8 *)(lVar8 + 0x40);
  local_250 = uVar7;
  FUN_141af7980(lVar4,param_1,lVar12,local_1c8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_188);
  iVar15 = *(int *)(lVar12 + 0x1aac) - *(int *)(lVar12 + 0x1aa4);
  local_228 = *(undefined8 *)(lVar11 + 0x378);
  iVar18 = *(int *)(lVar12 + 0x1aa8) - *(int *)(lVar12 + 0x1aa0);
  local_208 = 1;
  local_210 = 0;
  local_238 = (float)iVar15;
  local_1c8 = CONCAT44(iVar15,iVar18);
  local_218 = *(undefined4 *)(lVar12 + 0xf60);
  local_230 = local_1c8;
  local_240 = (float)iVar18;
  local_248 = (longlong *)CONCAT44(local_248._4_4_,(float)*(int *)(lVar12 + 0x1aa4));
  local_250 = CONCAT44(local_250._4_4_,(float)*(int *)(lVar12 + 0x1aa0));
  local_258 = CONCAT44(local_258._4_4_,local_238);
  local_220 = lVar5;
  FUN_141ce13a0(param_1);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_1f0);
  return;
}



// FUNCTION 141af60f0 FUN_141af60f0 body=1987 status=ok
// SIG undefined FUN_141af60f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141af60f0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined *puVar9;
  bool bVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  int iVar15;
  undefined8 *puVar16;
  uint uVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined4 uVar20;
  longlong *plVar21;
  longlong *plVar22;
  undefined1 auStack_278 [32];
  undefined8 local_258;
  undefined8 local_250;
  longlong *local_248;
  float local_240;
  float local_238;
  undefined8 local_230;
  undefined8 local_228;
  longlong local_220;
  undefined4 local_218;
  undefined1 local_210;
  undefined4 local_208;
  int local_1f8 [2];
  longlong local_1f0;
  undefined *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined2 local_1d8;
  undefined6 uStack_1d6;
  int local_1d0 [2];
  undefined8 local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  longlong local_190;
  longlong local_188;
  undefined *local_180;
  undefined4 local_178;
  undefined8 local_168;
  longlong *plStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  longlong *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  ulonglong local_11c;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined *local_a8 [4];
  undefined8 uStack_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  plVar14 = (longlong *)0x0;
  local_1d0[0] = 0;
  local_1f0 = param_2;
  local_1c8 = param_3;
  local_1c0 = param_4;
  local_190 = FSceneRenderTargets::Get();
  uVar20 = 2;
  lVar4 = *(longlong *)(local_190 + 0x2e0);
  local_78 = (undefined *)0x0;
  uStack_70 = 0xffffffff00000000;
  local_68 = local_68 & 0xffffffffffff0000;
  local_a8[2] = (undefined *)CONCAT62(uStack_1d6,0x101);
  local_1d8 = 0x101;
  uStack_1e0 = 0;
  uStack_1dc = 0xffffffff;
  local_a8[0] = *(undefined **)(lVar4 + 8);
  local_a8[1] = (undefined *)0xffffffff00000000;
  local_1e8 = *(undefined **)(*(longlong *)(local_190 + 0x2e8) + 8);
  local_80 = CONCAT62(uStack_1d6,0x101);
  local_a8[3] = local_1e8;
  uStack_88 = 0xffffffff00000000;
  local_1b8 = *(undefined8 *)(*(longlong *)(local_190 + 0x60) + 0x10);
  uStack_1b0 = 0x10001;
  uStack_1ac = 0x11;
  if (param_4 != 0) {
    uVar20 = 3;
    lVar12 = FUN_141ce4a10(local_190,param_1);
    local_1e8 = *(undefined **)(lVar12 + 8);
    local_68 = CONCAT62(uStack_1d6,0x101);
    local_78 = local_1e8;
    uStack_70 = 0xffffffff00000000;
  }
  uStack_70 = 0xffffffff00000000;
  local_1d8 = 0x101;
  uStack_1dc = 0xffffffff;
  uStack_1e0 = 0;
  *(undefined4 *)(param_1 + 0x98) = uVar20;
  iVar15 = 0;
  plVar22 = plVar14;
  do {
    uVar17 = (int)plVar22 + 1;
    puVar9 = local_a8[(longlong)plVar22 * 3 + 1];
    puVar1 = local_a8[(longlong)plVar22 * 3 + 2];
    puVar13 = (undefined8 *)(param_1 + 0xa0 + (longlong)plVar22 * 0x18);
    *puVar13 = local_a8[(longlong)plVar22 * 3];
    puVar13[1] = puVar9;
    *(undefined **)(param_1 + 0xb0 + (longlong)plVar22 * 0x18) = puVar1;
    plVar22 = (longlong *)(ulonglong)uVar17;
  } while (uVar17 < *(uint *)(param_1 + 0x98));
  *(undefined8 *)(param_1 + 0x160) = local_1b8;
  *(ulonglong *)(param_1 + 0x168) = CONCAT44(uStack_1ac,uStack_1b0);
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar19 + 0x26;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x138);
    puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar19 + 0x26;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar19;
  *(undefined8 **)(param_1 + 8) = puVar19 + 1;
  puVar19[1] = 0;
  *puVar19 = &PTR_LAB_143f59440;
  *(undefined4 *)(puVar19 + 2) = uVar20;
  puVar19[3] = 0;
  *(undefined4 *)(puVar19 + 4) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x24) = 0xffffffff;
  *(undefined2 *)(puVar19 + 5) = 0;
  puVar19[6] = 0;
  *(undefined4 *)(puVar19 + 7) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x3c) = 0xffffffff;
  *(undefined2 *)(puVar19 + 8) = 0;
  puVar19[9] = 0;
  *(undefined4 *)(puVar19 + 10) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x54) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0xb) = 0;
  puVar19[0xc] = 0;
  *(undefined4 *)(puVar19 + 0xd) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x6c) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0xe) = 0;
  puVar19[0xf] = 0;
  *(undefined4 *)(puVar19 + 0x10) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x84) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x11) = 0;
  puVar19[0x12] = 0;
  *(undefined4 *)(puVar19 + 0x13) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x9c) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x14) = 0;
  puVar19[0x15] = 0;
  *(undefined4 *)(puVar19 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar19 + 0xb4) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x17) = 0;
  puVar19[0x18] = 0;
  *(undefined4 *)(puVar19 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar19 + 0xcc) = 0xffffffff;
  *(undefined2 *)(puVar19 + 0x1a) = 0;
  puVar19[0x1b] = 0;
  *(undefined4 *)(puVar19 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar19 + 0xe4) = 0;
  plVar22 = plVar14;
  if (*(int *)(puVar19 + 2) != 0) {
    do {
      uVar17 = (int)plVar22 + 1;
      puVar1 = local_a8[(longlong)plVar22 * 3 + 1];
      puVar19[(longlong)plVar22 * 3 + 3] = local_a8[(longlong)plVar22 * 3];
      (puVar19 + (longlong)plVar22 * 3 + 3)[1] = puVar1;
      puVar19[(longlong)plVar22 * 3 + 5] = local_a8[(longlong)plVar22 * 3 + 2];
      plVar22 = (longlong *)(ulonglong)uVar17;
    } while (uVar17 < *(uint *)(puVar19 + 2));
    iVar15 = *(int *)(puVar19 + 0x1d);
  }
  plVar22 = plVar14;
  if (iVar15 != 0) {
    do {
      uVar17 = (int)plVar22 + 1;
      puVar19[(longlong)plVar22 + 0x1e] = *(undefined8 *)((longlong)plVar22 * 8);
      plVar22 = (longlong *)(ulonglong)uVar17;
    } while (uVar17 < *(uint *)(puVar19 + 0x1d));
  }
  puVar19[0x1b] = local_1b8;
  puVar19[0x1c] = CONCAT44(uStack_1ac,uStack_1b0);
  local_1a8 = *(undefined8 *)(lVar4 + 8);
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar19 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar19 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *puVar19 = local_1a8;
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar16 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar16;
  *(undefined8 **)(param_1 + 8) = puVar16 + 1;
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar16 + 2) = 1;
  puVar16[3] = puVar19;
  *(undefined4 *)(puVar16 + 4) = 1;
  *(undefined1 *)((longlong)puVar16 + 0x24) = 0;
  local_1f8[0] = *(int *)(local_1f0 + 0x1aa0);
  uVar20 = *(undefined4 *)(param_2 + 0x1aac);
  uVar2 = *(undefined4 *)(param_2 + 0x1aa8);
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar3 = *(undefined4 *)(param_2 + 0x1aa4);
  puVar13 = puVar19 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar19 + 5;
  }
  lVar12 = local_1f0;
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  local_178 = 0;
  **(undefined8 **)(param_1 + 8) = puVar19;
  *(undefined8 **)(param_1 + 8) = puVar19 + 1;
  puVar19[1] = 0;
  *puVar19 = &PTR_LAB_143f59420;
  *(undefined4 *)((longlong)puVar19 + 0x14) = uVar3;
  *(int *)(puVar19 + 2) = local_1f8[0];
  *(undefined4 *)(puVar19 + 3) = 0;
  *(undefined4 *)((longlong)puVar19 + 0x1c) = uVar2;
  *(undefined4 *)(puVar19 + 4) = uVar20;
  *(undefined4 *)((longlong)puVar19 + 0x24) = 0x3f800000;
  lVar4 = *(longlong *)(local_1f0 + 0x3090);
  local_180 = &DAT_146a0e980;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x38,local_1f8,&local_180);
  plVar22 = plVar14;
  if (local_1f8[0] != -1) {
    plVar22 = (longlong *)((longlong)local_1f8[0] * 0x20 + *(longlong *)(lVar4 + 0x38));
  }
  uStack_1e0 = 0;
  plVar21 = plVar22 + 2;
  if (plVar22 == (longlong *)0x0) {
    plVar21 = plVar14;
  }
  local_1e8 = &DAT_146a14370;
  lVar5 = *plVar21;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x38,local_1d0,&local_1e8);
  plVar22 = plVar14;
  if (local_1d0[0] != -1) {
    plVar22 = (longlong *)((longlong)local_1d0[0] * 0x20 + *(longlong *)(lVar4 + 0x38));
  }
  plVar21 = plVar22 + 2;
  if (plVar22 == (longlong *)0x0) {
    plVar21 = plVar14;
  }
  lVar4 = *plVar21;
  local_168 = 0;
  plStack_160 = (longlong *)0x0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = (longlong *)0x0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_11c = 0x26;
  local_114 = 0;
  local_10c = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_bc = 0;
  local_b4 = 0;
  FUN_14049afe0(param_1,&local_168);
  uStack_130 = FUN_140985530();
  local_138 = FUN_1404a0ce0();
  local_128 = FUN_141b097d0();
  local_168 = DAT_1464c2720;
  if (lVar5 == 0) {
    local_1a0 = 0;
    plVar22 = (longlong *)0x1;
    plStack_160 = plVar14;
  }
  else {
    lVar6 = *(longlong *)(lVar5 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plStack_160 = *(longlong **)(lVar6 + 0x38);
    plVar22 = plVar14;
  }
  if (plVar22 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
  }
  bVar10 = false;
  if (lVar4 == 0) {
    bVar10 = true;
    local_198 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar4 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar14 = *(longlong **)(lVar6 + 0x40);
  }
  local_148 = plVar14;
  if (bVar10) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_198);
  }
  local_11c = local_11c & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_168,2,1);
  local_1f0 = 0;
  if (local_1c0 != 0) {
    TRefCountPtr<FRHITexture>::operator=(&local_1f0,*(undefined8 *)(local_1c0 + 0x10));
  }
  lVar6 = local_1f0;
  FUN_141b17870(lVar5,param_1,local_1c8);
  lVar11 = local_190;
  local_1c0 = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
    local_1c0 = local_1f0;
  }
  uVar7 = *(undefined8 *)(local_190 + 0x78);
  if (local_1c0 != 0) {
    LOCK();
    *(int *)(local_1c0 + 8) = *(int *)(local_1c0 + 8) + 1;
    UNLOCK();
  }
  lVar8 = *(longlong *)(lVar4 + 0x48);
  local_188 = lVar6;
  if (*(char *)(lVar8 + 0x28) == '\0') {
    FUN_1419f3850(lVar8);
  }
  local_248 = &local_1c0;
  local_258 = *(undefined8 *)(lVar8 + 0x40);
  local_250 = uVar7;
  FUN_141af7980(lVar4,param_1,lVar12,local_1c8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_188);
  iVar15 = *(int *)(lVar12 + 0x1aac) - *(int *)(lVar12 + 0x1aa4);
  local_228 = *(undefined8 *)(lVar11 + 0x378);
  iVar18 = *(int *)(lVar12 + 0x1aa8) - *(int *)(lVar12 + 0x1aa0);
  local_208 = 1;
  local_210 = 0;
  local_238 = (float)iVar15;
  local_1c8 = CONCAT44(iVar15,iVar18);
  local_218 = *(undefined4 *)(lVar12 + 0xf60);
  local_230 = local_1c8;
  local_240 = (float)iVar18;
  local_248 = (longlong *)CONCAT44(local_248._4_4_,(float)*(int *)(lVar12 + 0x1aa4));
  local_250 = CONCAT44(local_250._4_4_,(float)*(int *)(lVar12 + 0x1aa0));
  local_258 = CONCAT44(local_258._4_4_,local_238);
  local_220 = lVar5;
  FUN_141ce13a0(param_1);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_1f0);
  return;
}



// FUNCTION 141af68c0 FUN_141af68c0 body=1131 status=ok
// SIG undefined FUN_141af68c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141af68c0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6,undefined8 param_7,undefined8 param_8)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  
  SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
            (param_2,param_3,param_1 + 0x110,param_8);
  uVar3 = 0;
  uVar11 = (ulonglong)_tls_index;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar9 = uVar3;
    do {
      iVar8 = (int)uVar9;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar3 * 8) == &DAT_146b096e0) {
        if (iVar8 != -1) {
          puVar10 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar8 * 8);
          *puVar10 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141af6958;
        }
        break;
      }
      uVar9 = (ulonglong)(iVar8 + 1);
      uVar3 = uVar3 + 1;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x10));
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x38) <
       DAT_146a0e8b8) && (_Init_thread_header(&DAT_146a0e8b8), DAT_146a0e8b8 == -1)) {
    _DAT_146a0e8b0 = 0;
    DAT_146a0e8b4 = 0;
    DAT_146a0e8b6 = 0;
    _Init_thread_footer(&DAT_146a0e8b8);
  }
  puVar10 = (undefined4 *)&DAT_146a0e8b0;
LAB_141af6958:
  FUN_141af8a80(param_2,param_3,puVar10,param_7);
  lVar2 = param_6;
  if (*(short *)(param_1 + 0xd2) != 0) {
    puVar4 = (undefined8 *)FUN_141d9d800(param_1,&param_6,param_2,param_6);
    uVar1 = *(ushort *)(param_1 + 0xd0);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar6 = *puVar4;
    puVar4 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d8e630;
    puVar7[2] = param_3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar6;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&param_6);
  }
  if (*(short *)(param_1 + 0xd6) != 0) {
    uVar6 = *(undefined8 *)(lVar2 + 0x60);
    uVar1 = *(ushort *)(param_1 + 0xd4);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d8e630;
    puVar7[2] = param_3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar6;
    uVar6 = *(undefined8 *)(lVar2 + 0x70);
    uVar1 = *(ushort *)(param_1 + 0xd8);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d8e630;
    puVar7[2] = param_3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar6;
  }
  if ((*(char *)(lVar2 + 0x120d) != '\0') && (0 < *(int *)(*(longlong *)(lVar2 + 0x10) + 8))) {
    lVar5 = FSceneViewFamily::GetStereoEyeView
                      (*(longlong *)(lVar2 + 0x10),-(*(int *)(lVar2 + 0xf60) != 0) & 2);
    uVar3 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      uVar9 = uVar3;
      do {
        iVar8 = (int)uVar9;
        if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar3 * 8) == &DAT_146b09780) {
          if (iVar8 != -1) {
            puVar10 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar8 * 8);
            *puVar10 = *(undefined4 *)(param_1 + 0xb8);
            SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
                      (param_2,param_3,puVar10,*(undefined8 *)(lVar5 + 0x20));
            goto LAB_141af6bf8;
          }
          break;
        }
        uVar9 = (ulonglong)(iVar8 + 1);
        uVar3 = uVar3 + 1;
      } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x10));
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x38) <
         DAT_146a0e8c8) && (_Init_thread_header(&DAT_146a0e8c8), DAT_146a0e8c8 == -1)) {
      _DAT_146a0e8c0 = 0;
      _DAT_146a0e8c4 = 0;
      DAT_146a0e8c6 = 0;
      _Init_thread_footer(&DAT_146a0e8c8);
    }
    SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
              (param_2,param_3,&DAT_146a0e8c0,*(undefined8 *)(lVar5 + 0x20));
  }
LAB_141af6bf8:
  FUN_141d86e00(param_1,param_2,param_3,param_4,param_5,lVar2);
  uVar6 = FUN_141a156e0();
  if (*(short *)(param_1 + 0x148) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x146);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d8e610;
    puVar7[2] = param_3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar6;
  }
  return;
}



// FUNCTION 141af6d30 FUN_141af6d30 body=509 status=ok
// SIG undefined FUN_141af6d30(void)

void FUN_141af6d30(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong *param_8,
                  undefined8 param_9)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  plVar4 = param_8;
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  param_8 = (longlong *)*param_8;
  if (param_8 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)param_8 + 8) = *(int *)((longlong)param_8 + 8) + 1;
    UNLOCK();
  }
  FUN_141af75e0(param_1,param_2,param_3,param_4,uVar3,param_7,&param_8);
  uVar1 = *(ushort *)(param_1 + 0xe2);
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
  puVar6[4] = param_5;
  *puVar6 = &PTR_LAB_144d91e40;
  puVar6[2] = uVar3;
  *(uint *)(puVar6 + 3) = (uint)uVar1;
  uVar1 = *(ushort *)(param_1 + 0xe8);
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
  puVar6[4] = param_6;
  *puVar6 = &PTR_LAB_144d91e40;
  puVar6[2] = uVar3;
  *(uint *)(puVar6 + 3) = (uint)uVar1;
  uVar1 = *(ushort *)(param_1 + 0xee);
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
  puVar6[4] = param_9;
  *puVar6 = &PTR_LAB_144d91e40;
  puVar6[2] = uVar3;
  *(uint *)(puVar6 + 3) = (uint)uVar1;
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(plVar4);
  return;
}



// FUNCTION 141af6f30 FUN_141af6f30 body=1559 status=ok
// SIG undefined FUN_141af6f30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141af6f30(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong *param_6)

{
  int *piVar1;
  ushort uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  ushort *puVar18;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  undefined1 local_60 [8];
  undefined8 *local_58;
  undefined1 local_50 [24];
  
  lVar9 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar9 + 0x28) == '\0') {
    FUN_1419f3850(lVar9);
  }
  local_78 = *(undefined8 *)(lVar9 + 0x40);
  uVar8 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar16 = uVar8;
    do {
      iVar15 = (int)uVar16;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar8 * 8) == &DAT_146a0ead0) {
        if (iVar15 != -1) {
          puVar17 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar15 * 8);
          *puVar17 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141af6fd6;
        }
        break;
      }
      uVar16 = (ulonglong)(iVar15 + 1);
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 < (longlong)*(int *)(param_1 + 0x10));
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a15248) && (_Init_thread_header(&DAT_146a15248), DAT_146a15248 == -1))
  {
    _DAT_146a15240 = 0;
    _DAT_146a15244 = 0;
    DAT_146a15246 = 0;
    _Init_thread_footer(&DAT_146a15248);
  }
  puVar17 = (undefined4 *)&DAT_146a15240;
LAB_141af6fd6:
  FUN_141aad5c0(param_2,local_78,puVar17,param_5);
  puVar18 = (ushort *)(param_1 + 0x1bc);
  local_70 = 0;
  do {
    uVar11 = local_78;
    if (puVar18[1] != 0) {
      local_58 = (undefined8 *)(param_3 + local_70 * 8);
      uVar3 = *local_58;
      uVar2 = *puVar18;
      puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar14 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar13) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar13 = puVar14 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar13;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar14;
      *(undefined8 **)(param_2 + 8) = puVar14 + 1;
      puVar14[1] = 0;
      *puVar14 = &PTR_LAB_143f59c80;
      puVar14[2] = uVar11;
      *(uint *)(puVar14 + 3) = (uint)uVar2;
      puVar14[4] = uVar3;
      if (DAT_146a15360 == 0) {
        if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
          cVar7 = IsInRenderingThread();
          if (cVar7 == '\0') {
            FScopedEvent::FScopedEvent(local_60);
            plVar10 = (longlong *)FUN_14049e3d0(local_50,0,0xff);
            lVar9 = *plVar10;
            *(undefined1 **)(lVar9 + 0x10) = &LAB_141b09b40;
            *(undefined1 **)(lVar9 + 0x18) = local_60;
            lVar9 = *plVar10;
            lVar6 = plVar10[2];
            lVar4 = plVar10[1];
            lVar5 = *(longlong *)(lVar9 + 0x28);
            piVar1 = (int *)(lVar5 + 0x48);
            if (lVar5 != 0) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            local_68 = lVar5;
            FUN_1404a4fe0(lVar9,lVar4,(int)lVar6,1);
            if (lVar5 != 0) {
              LOCK();
              iVar15 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar15 == 1) {
                FGraphEvent::Recycle(local_68);
              }
            }
            FScopedEvent::~FScopedEvent(local_60);
          }
          else {
            lVar9 = operator_new(0x38);
            if (lVar9 == 0) {
              DAT_146a15360 = 0;
            }
            else {
              DAT_146a15360 =
                   TStaticStateRHI<TStaticSamplerState<1,3,3,3,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                   ::FStaticStateResource::FStaticStateResource(lVar9);
            }
          }
        }
        else {
          lVar9 = operator_new(0x38);
          if (lVar9 == 0) {
            LOCK();
            if (DAT_146a15360 == 0) {
              DAT_146a15360 = 0;
            }
            UNLOCK();
          }
          else {
            lVar9 = TStaticStateRHI<TStaticSamplerState<1,3,3,3,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                    ::FStaticStateResource::FStaticStateResource(lVar9);
            LOCK();
            if (DAT_146a15360 != 0) {
              lVar9 = DAT_146a15360;
            }
            DAT_146a15360 = lVar9;
            UNLOCK();
          }
        }
      }
      uVar12 = local_78;
      uVar11 = *(undefined8 *)(DAT_146a15360 + 0x30);
      uVar3 = *local_58;
      if (puVar18[1] != 0) {
        uVar2 = *puVar18;
        puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar13 = puVar14 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar13) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30);
          puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar13 = puVar14 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar13;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar14;
        *(undefined8 **)(param_2 + 8) = puVar14 + 1;
        puVar14[1] = 0;
        *puVar14 = &PTR_LAB_143f59c80;
        puVar14[2] = uVar12;
        *(uint *)(puVar14 + 3) = (uint)uVar2;
        puVar14[4] = uVar3;
      }
      if (*(short *)(param_1 + 0x1da) != 0) {
        uVar2 = *(ushort *)(param_1 + 0x1d8);
        puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar13 = puVar14 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar13) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30);
          puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar13 = puVar14 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar13;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar14;
        *(undefined8 **)(param_2 + 8) = puVar14 + 1;
        puVar14[1] = 0;
        *puVar14 = &PTR_LAB_143f59c70;
        puVar14[2] = uVar12;
        *(uint *)(puVar14 + 3) = (uint)uVar2;
        puVar14[4] = uVar11;
      }
    }
    uVar11 = local_78;
    local_70 = local_70 + 1;
    puVar18 = puVar18 + 2;
  } while (local_70 < 7);
  if (*(short *)(param_1 + 0x1de) != 0) {
    uVar2 = *(ushort *)(param_1 + 0x1dc);
    puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar14 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar13) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar14 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar13;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar14;
    *(undefined8 **)(param_2 + 8) = puVar14 + 1;
    puVar14[1] = 0;
    *puVar14 = &PTR_LAB_143f59c80;
    puVar14[4] = param_4;
    puVar14[2] = uVar11;
    *(uint *)(puVar14 + 3) = (uint)uVar2;
  }
  FUN_141aa9690(param_1,param_2,local_78,*(undefined8 *)(*param_6 + 0x20));
  uVar11 = FUN_141a156e0();
  thunk_FUN_141ca99a0(param_1 + 0xc0,param_2,&local_78,param_6,uVar11,0,0);
  FUN_141aa6fa0(param_1 + 0x1e0,param_2,&local_78,*(undefined4 *)(*param_6 + 0x1a38),0xf);
  uVar11 = *(undefined8 *)(DAT_1464c3348 + 0x10);
  uVar12 = FUN_141a156e0();
  uVar3 = local_78;
  if (*(short *)(param_1 + 0x1f2) != 0) {
    uVar2 = *(ushort *)(param_1 + 0x1f0);
    puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar14 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar13) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar14 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar13;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar14;
    *(undefined8 **)(param_2 + 8) = puVar14 + 1;
    puVar14[1] = 0;
    *puVar14 = &PTR_LAB_143f59c80;
    puVar14[2] = uVar3;
    *(uint *)(puVar14 + 3) = (uint)uVar2;
    puVar14[4] = uVar11;
  }
  if (*(short *)(param_1 + 0x1f6) != 0) {
    uVar2 = *(ushort *)(param_1 + 500);
    puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar14 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar13) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar14 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar13;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar14;
    *(undefined8 **)(param_2 + 8) = puVar14 + 1;
    puVar14[1] = 0;
    *puVar14 = &PTR_LAB_143f59c70;
    puVar14[2] = uVar3;
    *(uint *)(puVar14 + 3) = (uint)uVar2;
    puVar14[4] = uVar12;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_5);
  return;
}



// FUNCTION 141af7550 FUN_141af7550 body=139 status=ok
// SIG undefined FUN_141af7550(void)

void FUN_141af7550(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  local_res8 = *(undefined8 *)(lVar1 + 0x40);
  FUN_141aa9690(param_1,param_2,local_res8,*(undefined8 *)(*param_3 + 0x20));
  uVar2 = FUN_1404a0e20();
  thunk_FUN_141ca99a0(param_1 + 0xc0,param_2,&local_res8,param_3,uVar2,0,0);
  return;
}



// FUNCTION 141af75e0 FUN_141af75e0 body=915 status=ok
// SIG undefined FUN_141af75e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141af75e0(longlong param_1,longlong param_2,longlong param_3,void *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  void *_Dst;
  undefined8 uVar12;
  
  uVar12 = param_5;
  uVar5 = 0;
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar6 = uVar5;
    do {
      iVar10 = (int)uVar6;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar5 * 8) == &DAT_146b096e0) {
        if (iVar10 != -1) {
          puVar11 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar10 * 8);
          *puVar11 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141af7672;
        }
        break;
      }
      uVar6 = (ulonglong)(iVar10 + 1);
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a0e8b8) {
    _Init_thread_header(&DAT_146a0e8b8);
    if (DAT_146a0e8b8 == -1) {
      _DAT_146a0e8b0 = 0;
      DAT_146a0e8b4 = 0;
      DAT_146a0e8b6 = 0;
      _Init_thread_footer(&DAT_146a0e8b8);
    }
  }
  puVar11 = (undefined4 *)&DAT_146a0e8b0;
LAB_141af7672:
  if (*(char *)((longlong)puVar11 + 6) != '\0') {
    uVar1 = *(ushort *)(puVar11 + 1);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144dcb3c8;
    puVar8[2] = uVar12;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar3;
  }
  uVar4 = (uint)*(ushort *)(param_1 + 0xd4);
  if (0xaf < *(ushort *)(param_1 + 0xd4)) {
    uVar4 = 0xb0;
  }
  uVar5 = (ulonglong)uVar4;
  if (uVar4 != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd2);
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar2 = *(ushort *)(param_1 + 0xd0);
    uVar6 = (longlong)_Dst + uVar5;
    if (*(ulonglong *)(param_2 + 0x38) < uVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar4 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar6 = (longlong)_Dst + uVar5;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar6;
    _guard_xfg_dispatch_icall_nop(_Dst,param_4,uVar5);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *(uint *)(puVar8 + 4) = (uint)uVar2;
    *(uint *)((longlong)puVar8 + 0x24) = (uint)uVar1;
    *puVar8 = &PTR_LAB_144d92080;
    puVar8[2] = param_5;
    puVar8[3] = _Dst;
    *(uint *)(puVar8 + 5) = uVar4;
    uVar12 = param_5;
  }
  FUN_141aa6060(param_1 + 0xc0,param_2,&param_5,*(undefined4 *)(param_3 + 0x1a38),0xf);
  if (*(short *)(param_1 + 0xd8) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd6);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144dcb360;
    puVar8[4] = param_6;
    puVar8[2] = uVar12;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
  }
  puVar7 = param_7;
  uVar3 = *param_7;
  if (*(short *)(param_1 + 0xdc) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xda);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_144d92090;
    puVar9[2] = uVar12;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar3;
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(puVar7);
  return;
}



// FUNCTION 141af7980 FUN_141af7980 body=608 status=ok
// SIG undefined FUN_141af7980(void)

void FUN_141af7980(longlong param_1,longlong param_2,longlong param_3,void *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  void *_Dst;
  
  uVar5 = param_5;
  FUN_141aa9690(param_1,param_2,param_5,*(undefined8 *)(param_3 + 0x20));
  uVar4 = (uint)*(ushort *)(param_1 + 0xd4);
  if (0xaf < *(ushort *)(param_1 + 0xd4)) {
    uVar4 = 0xb0;
  }
  if (uVar4 != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd2);
    uVar2 = *(ushort *)(param_1 + 0xd0);
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar6 = (longlong)_Dst + (ulonglong)uVar4;
    if (*(ulonglong *)(param_2 + 0x38) < uVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar4 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar6 = (longlong)_Dst + (ulonglong)uVar4;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar6;
    _guard_xfg_dispatch_icall_nop(_Dst,param_4,(ulonglong)uVar4);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f594b0;
    *(uint *)(puVar8 + 4) = (uint)uVar2;
    *(uint *)((longlong)puVar8 + 0x24) = (uint)uVar1;
    puVar8[2] = uVar5;
    puVar8[3] = _Dst;
    *(uint *)(puVar8 + 5) = uVar4;
  }
  FUN_141aa6fa0(param_1 + 0xc0,param_2,&param_5,*(undefined4 *)(param_3 + 0x1a38),0xf);
  if (*(short *)(param_1 + 0xd8) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd6);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144d8e600;
    puVar8[4] = param_6;
    puVar8[2] = uVar5;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
  }
  puVar7 = param_7;
  uVar3 = *param_7;
  if (*(short *)(param_1 + 0xdc) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xda);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c80;
    puVar9[2] = uVar5;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar3;
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(puVar7);
  return;
}



// FUNCTION 141af7be0 FUN_141af7be0 body=1532 status=ok
// SIG undefined FUN_141af7be0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141af7be0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined *puVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  undefined8 uVar14;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  float local_1e0;
  float local_1d8;
  float local_1d0;
  float local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a0;
  undefined4 local_198;
  int local_188;
  int iStack_184;
  undefined *local_178;
  ulonglong uStack_170;
  undefined2 local_168;
  undefined6 uStack_166;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  undefined *local_128 [4];
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  ulonglong local_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  plVar13 = (longlong *)0x0;
  iVar12 = 0;
  local_188 = 0;
  lVar1 = *param_1;
  local_130 = lVar1;
  lVar6 = FSceneRenderTargets::Get(param_1[8]);
  plVar7 = (longlong *)FUN_141ce54b0(lVar6);
  local_138 = *(longlong *)(lVar6 + 0x2e0);
  local_140 = *(longlong *)(lVar6 + 0x2e8);
  local_178 = *(undefined **)(param_2 + 8);
  lVar2 = param_1[8];
  local_128[0] = *(undefined **)(*plVar7 + 8);
  local_128[1] = (undefined *)0xffffffff00000000;
  local_128[2] = (undefined *)CONCAT62(uStack_166,0x101);
  uStack_170 = 0xffffffff00000000;
  local_168 = 0x101;
  local_128[3] = local_178;
  uStack_108 = 0xffffffff00000000;
  local_100 = CONCAT62(uStack_166,0x101);
  local_150 = *(undefined8 *)(*(longlong *)(lVar6 + 0x60) + 0x10);
  uStack_148 = 0x10001;
  uStack_144 = 2;
  *(undefined4 *)(lVar2 + 0x98) = 2;
  plVar7 = plVar13;
  do {
    uVar9 = (int)plVar7 + 1;
    puVar4 = local_128[(longlong)plVar7 * 3 + 1];
    puVar8 = (undefined8 *)(lVar2 + 0xa0 + (longlong)plVar7 * 0x18);
    *puVar8 = local_128[(longlong)plVar7 * 3];
    puVar8[1] = puVar4;
    *(undefined **)(lVar2 + 0xb0 + (longlong)plVar7 * 0x18) = local_128[(longlong)plVar7 * 3 + 2];
    plVar7 = (longlong *)(ulonglong)uVar9;
  } while (uVar9 < *(uint *)(lVar2 + 0x98));
  *(undefined8 *)(lVar2 + 0x160) = local_150;
  *(undefined8 *)(lVar2 + 0x168) = 0x200010001;
  puVar10 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar10 + 0x26;
  if (*(undefined8 **)(lVar2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x138);
    puVar10 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 0x26;
  }
  *(undefined8 **)(lVar2 + 0x30) = puVar8;
  *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
  **(undefined8 **)(lVar2 + 8) = puVar10;
  *(undefined8 **)(lVar2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_143f59440;
  *(undefined4 *)(puVar10 + 2) = 2;
  puVar10[3] = 0;
  *(undefined4 *)(puVar10 + 4) = 0;
  *(undefined4 *)((longlong)puVar10 + 0x24) = 0xffffffff;
  *(undefined2 *)(puVar10 + 5) = 0;
  puVar10[6] = 0;
  *(undefined4 *)(puVar10 + 7) = 0;
  *(undefined4 *)((longlong)puVar10 + 0x3c) = 0xffffffff;
  *(undefined2 *)(puVar10 + 8) = 0;
  puVar10[9] = 0;
  *(undefined4 *)(puVar10 + 10) = 0;
  *(undefined4 *)((longlong)puVar10 + 0x54) = 0xffffffff;
  *(undefined2 *)(puVar10 + 0xb) = 0;
  puVar10[0xc] = 0;
  *(undefined4 *)(puVar10 + 0xd) = 0;
  *(undefined4 *)((longlong)puVar10 + 0x6c) = 0xffffffff;
  *(undefined2 *)(puVar10 + 0xe) = 0;
  puVar10[0xf] = 0;
  *(undefined4 *)(puVar10 + 0x10) = 0;
  *(undefined4 *)((longlong)puVar10 + 0x84) = 0xffffffff;
  *(undefined2 *)(puVar10 + 0x11) = 0;
  puVar10[0x12] = 0;
  *(undefined4 *)(puVar10 + 0x13) = 0;
  *(undefined4 *)((longlong)puVar10 + 0x9c) = 0xffffffff;
  *(undefined2 *)(puVar10 + 0x14) = 0;
  puVar10[0x15] = 0;
  *(undefined4 *)(puVar10 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar10 + 0xb4) = 0xffffffff;
  *(undefined2 *)(puVar10 + 0x17) = 0;
  puVar10[0x18] = 0;
  *(undefined4 *)(puVar10 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar10 + 0xcc) = 0xffffffff;
  *(undefined2 *)(puVar10 + 0x1a) = 0;
  puVar10[0x1b] = 0;
  *(undefined4 *)(puVar10 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar10 + 0xe4) = 0;
  plVar7 = plVar13;
  if (*(int *)(puVar10 + 2) != 0) {
    do {
      uVar9 = (int)plVar7 + 1;
      puVar4 = local_128[(longlong)plVar7 * 3 + 1];
      puVar10[(longlong)plVar7 * 3 + 3] = local_128[(longlong)plVar7 * 3];
      (puVar10 + (longlong)plVar7 * 3 + 3)[1] = puVar4;
      puVar10[(longlong)plVar7 * 3 + 5] = local_128[(longlong)plVar7 * 3 + 2];
      plVar7 = (longlong *)(ulonglong)uVar9;
    } while (uVar9 < *(uint *)(puVar10 + 2));
    iVar12 = *(int *)(puVar10 + 0x1d);
  }
  plVar7 = plVar13;
  if (iVar12 != 0) {
    do {
      uVar9 = (int)plVar7 + 1;
      puVar10[(longlong)plVar7 + 0x1e] = *(undefined8 *)((longlong)plVar7 * 8);
      plVar7 = (longlong *)(ulonglong)uVar9;
    } while (uVar9 < *(uint *)(puVar10 + 0x1d));
  }
  puVar10[0x1b] = local_150;
  puVar10[0x1c] = CONCAT44(uStack_144,uStack_148);
  local_178 = *(undefined **)(lVar1 + 0x1aa0);
  uStack_170 = *(ulonglong *)(lVar1 + 0x1aa8);
  FRenderingCompositePassContext::SetViewportAndCallRHI(param_1,&local_178);
  lVar1 = param_1[0xc];
  uStack_170 = uStack_170 & 0xffffffff00000000;
  uVar14 = *(undefined8 *)(*(longlong *)(lVar6 + 0x2f0) + 0x10);
  local_178 = &DAT_146a51f90;
  local_158 = uVar14;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_188,&local_178);
  plVar7 = plVar13;
  if (local_188 != -1) {
    plVar7 = (longlong *)((longlong)local_188 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  uStack_170 = uStack_170 & 0xffffffff00000000;
  plVar11 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar11 = plVar13;
  }
  local_178 = &DAT_146a14a00;
  lVar2 = *plVar11;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_188,&local_178);
  plVar7 = plVar13;
  if (local_188 != -1) {
    plVar7 = (longlong *)((longlong)local_188 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar11 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar11 = plVar13;
  }
  lVar1 = *plVar11;
  local_f8 = 0;
  plStack_f0 = (longlong *)0x0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = (longlong *)0x0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 0x26;
  local_a4 = 0;
  local_9c = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_54 = 0;
  local_4c = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  uStack_c0 = FUN_140985530();
  local_c8 = FUN_141b08650();
  local_b8 = FUN_141a15460();
  local_f8 = DAT_1464c2720;
  local_ac = local_ac & 0xffffffff00000000;
  if (lVar2 == 0) {
    local_158 = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar13;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plStack_f0 = *(longlong **)(lVar3 + 0x38);
    plVar7 = plVar13;
    uVar14 = local_158;
  }
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
  }
  bVar5 = false;
  if (lVar1 == 0) {
    bVar5 = true;
    local_158 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    plVar13 = *(longlong **)(lVar3 + 0x40);
  }
  local_d8 = plVar13;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
  }
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  FUN_141ad70c0(lVar2,param_1);
  local_1e8 = uVar14;
  FUN_141b15c50(lVar1,param_1,*(undefined8 *)(local_138 + 0x10),*(undefined8 *)(local_140 + 0x10));
  local_1b8 = *(undefined8 *)(lVar6 + 0x378);
  local_198 = 1;
  iStack_184 = *(int *)(local_130 + 0x1aac) - *(int *)(local_130 + 0x1aa4);
  local_188 = *(int *)(local_130 + 0x1aa8) - *(int *)(local_130 + 0x1aa0);
  local_1a0 = *(undefined1 *)((longlong)param_1 + 0x69);
  local_1a8 = *(undefined4 *)(local_130 + 0xf60);
  local_1c8 = (float)iStack_184;
  local_1c0 = CONCAT44(iStack_184,local_188);
  local_1d0 = (float)local_188;
  local_1e0 = (float)*(int *)(local_130 + 0x1aa0);
  local_1d8 = (float)*(int *)(local_130 + 0x1aa4);
  local_1e8 = CONCAT44(local_1e8._4_4_,local_1c8);
  local_1b0 = lVar2;
  FUN_141ce13a0(param_1[8],0);
  return;
}



// FUNCTION 141af81e0 FUN_141af81e0 body=889 status=ok
// SIG undefined FUN_141af81e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141af81e0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  float local_180;
  float local_178;
  float local_170;
  float local_168;
  undefined8 local_160;
  undefined8 local_158;
  longlong local_150;
  undefined4 local_148;
  undefined1 local_140;
  undefined4 local_138;
  undefined8 local_128;
  undefined *local_118;
  ulonglong uStack_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  ulonglong local_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  plVar12 = (longlong *)0x0;
  local_128 = local_128 & 0xffffffff00000000;
  lVar1 = *param_1;
  lVar6 = FSceneRenderTargets::Get(param_1[8]);
  plVar7 = (longlong *)FUN_141ce54b0(lVar6);
  local_100 = *(longlong *)(lVar6 + 0x2e0);
  local_108 = *(longlong *)(lVar6 + 0x2e8);
  local_180 = (float)((uint)local_180 & 0xffffff00);
  local_188 = CONCAT44(local_188._4_4_,0x22);
  FUN_141ad74f0(param_1[8],*(undefined8 *)(*plVar7 + 8),
                *(undefined8 *)(*(longlong *)(lVar6 + 0x60) + 0x10),0);
  local_118 = *(undefined **)(lVar1 + 0x1aa0);
  uStack_110 = *(ulonglong *)(lVar1 + 0x1aa8);
  FRenderingCompositePassContext::SetViewportAndCallRHI(param_1,&local_118);
  lVar2 = param_1[0xc];
  local_118 = &DAT_146a51f90;
  uStack_110 = uStack_110 & 0xffffffff00000000;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_128,&local_118);
  plVar7 = plVar12;
  if ((int)local_128 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  uStack_110 = uStack_110 & 0xffffffff00000000;
  plVar11 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar11 = plVar12;
  }
  local_118 = &DAT_146a148b0;
  lVar3 = *plVar11;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,&local_128,&local_118);
  plVar7 = plVar12;
  if ((int)local_128 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_128 * 0x20 + *(longlong *)(lVar2 + 0x38));
  }
  plVar11 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar11 = plVar12;
  }
  lVar2 = *plVar11;
  local_f8 = 0;
  plStack_f0 = (longlong *)0x0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 0x26;
  local_a4 = 0;
  local_9c = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_54 = 0;
  local_4c = 0;
  local_44 = 0;
  FUN_14049afe0(param_1[8],&local_f8);
  uStack_c0 = FUN_140985530();
  local_c8 = FUN_141b08650();
  local_b8 = FUN_141a15460();
  local_f8 = DAT_1464c2720;
  local_ac = local_ac & 0xffffffff00000000;
  if (lVar3 == 0) {
    local_128 = 0;
    plVar7 = (longlong *)0x1;
    plStack_f0 = plVar12;
  }
  else {
    lVar4 = *(longlong *)(lVar3 + 0x48);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    plStack_f0 = *(longlong **)(lVar4 + 0x38);
    plVar7 = plVar12;
  }
  uVar8 = 0;
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  bVar5 = false;
  if (lVar2 == 0) {
    bVar5 = true;
    local_128 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    uVar8 = *(undefined8 *)(lVar4 + 0x40);
  }
  local_d8 = uVar8;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  FUN_141ed6ac0(param_1[8],&local_f8,2,1);
  FUN_141ad70c0(lVar3,param_1);
  local_188 = 0;
  FUN_141b15c50(lVar2,param_1,*(undefined8 *)(local_100 + 0x10),*(undefined8 *)(local_108 + 0x10));
  iVar9 = *(int *)(lVar1 + 0x1aac) - *(int *)(lVar1 + 0x1aa4);
  local_158 = *(undefined8 *)(lVar6 + 0x378);
  iVar10 = *(int *)(lVar1 + 0x1aa8) - *(int *)(lVar1 + 0x1aa0);
  local_138 = 1;
  local_140 = *(undefined1 *)((longlong)param_1 + 0x69);
  local_148 = *(undefined4 *)(lVar1 + 0xf60);
  local_168 = (float)iVar9;
  local_128 = CONCAT44(iVar9,iVar10);
  local_160 = local_128;
  local_170 = (float)iVar10;
  local_180 = (float)*(int *)(lVar1 + 0x1aa0);
  local_178 = (float)*(int *)(lVar1 + 0x1aa4);
  local_188 = CONCAT44(local_188._4_4_,local_168);
  local_150 = lVar3;
  FUN_141ce13a0(param_1[8],0);
  return;
}



// FUNCTION 141af8560 SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList> body=308 status=ok
// SIG undefined SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>(void)

void SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
               (longlong param_1,undefined8 param_2,ushort *param_3,void *param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *_Dst;
  uint uVar6;
  
  uVar6 = (uint)param_3[2] + param_5 * -0x40;
  if (0x3f < (int)uVar6) {
    uVar6 = 0x40;
  }
  if (0 < (int)uVar6) {
    _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = (longlong)(int)uVar6 + (longlong)_Dst;
    if (*(ulonglong *)(param_1 + 0x38) < uVar3) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,uVar6 + 0x10);
      _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar3 = (longlong)(int)uVar6 + (longlong)_Dst;
    }
    *(ulonglong *)(param_1 + 0x30) = uVar3;
    _guard_xfg_dispatch_icall_nop(_Dst,param_4,(ulonglong)uVar6);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar4;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar5;
    *(undefined8 **)(param_1 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144d92080;
    puVar5[3] = _Dst;
    *(uint *)(puVar5 + 4) = (uint)uVar1;
    *(uint *)((longlong)puVar5 + 0x24) = (uint)uVar2 + param_5 * 0x40;
    puVar5[2] = param_2;
    *(uint *)(puVar5 + 5) = uVar6;
  }
  return;
}



// FUNCTION 141af86a0 SetShaderValue<FRHIPixelShader_*> body=309 status=ok
// SIG undefined SetShaderValue<FRHIPixelShader_*>(void)

void SetShaderValue<FRHIPixelShader_*>
               (longlong param_1,undefined8 param_2,ushort *param_3,byte *param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *_Dst;
  uint uVar6;
  uint local_res18 [2];
  
  local_res18[0] = (uint)*param_4;
  uVar6 = (uint)param_3[2] + param_5 * -0x10;
  if (3 < (int)uVar6) {
    uVar6 = 4;
  }
  if (0 < (int)uVar6) {
    _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = (longlong)(int)uVar6 + (longlong)_Dst;
    if (*(ulonglong *)(param_1 + 0x38) < uVar3) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,uVar6 + 0x10);
      _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar3 = (longlong)(int)uVar6 + (longlong)_Dst;
    }
    *(ulonglong *)(param_1 + 0x30) = uVar3;
    _guard_xfg_dispatch_icall_nop(_Dst,local_res18,(ulonglong)uVar6);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar4;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar5;
    *(undefined8 **)(param_1 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    puVar5[3] = _Dst;
    *(uint *)(puVar5 + 4) = (uint)uVar1;
    *(uint *)((longlong)puVar5 + 0x24) = (uint)uVar2 + param_5 * 0x10;
    *puVar5 = &PTR_LAB_143f594b0;
    puVar5[2] = param_2;
    *(uint *)(puVar5 + 5) = uVar6;
  }
  return;
}



// FUNCTION 141af87e0 SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList> body=308 status=ok
// SIG undefined SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>(void)

void SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
               (longlong param_1,undefined8 param_2,ushort *param_3,void *param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *_Dst;
  uint uVar6;
  
  uVar6 = (uint)param_3[2] + param_5 * -0x10;
  if (7 < (int)uVar6) {
    uVar6 = 8;
  }
  if (0 < (int)uVar6) {
    _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = (longlong)(int)uVar6 + (longlong)_Dst;
    if (*(ulonglong *)(param_1 + 0x38) < uVar3) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,uVar6 + 0x10);
      _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar3 = (longlong)(int)uVar6 + (longlong)_Dst;
    }
    *(ulonglong *)(param_1 + 0x30) = uVar3;
    _guard_xfg_dispatch_icall_nop(_Dst,param_4,(ulonglong)uVar6);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar4;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar5;
    *(undefined8 **)(param_1 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_143f594b0;
    puVar5[3] = _Dst;
    *(uint *)(puVar5 + 4) = (uint)uVar1;
    *(uint *)((longlong)puVar5 + 0x24) = (uint)uVar2 + param_5 * 0x10;
    puVar5[2] = param_2;
    *(uint *)(puVar5 + 5) = uVar6;
  }
  return;
}



// FUNCTION 141af8920 SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList> body=174 status=ok
// SIG undefined SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>(void)

void SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
               (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_3 + 6) != '\0') {
    uVar1 = *(ushort *)(param_3 + 4);
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30);
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar2;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar3;
    *(undefined8 **)(param_1 + 8) = puVar3 + 1;
    puVar3[1] = 0;
    *(uint *)(puVar3 + 3) = (uint)uVar1;
    *puVar3 = &PTR_LAB_144dcb3c8;
    puVar3[2] = param_2;
    puVar3[4] = param_4;
  }
  return;
}



// FUNCTION 141af89d0 SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList> body=174 status=ok
// SIG undefined SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>(void)

void SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
               (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_3 + 6) != '\0') {
    uVar1 = *(ushort *)(param_3 + 4);
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30);
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar2;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar3;
    *(undefined8 **)(param_1 + 8) = puVar3 + 1;
    puVar3[1] = 0;
    *(uint *)(puVar3 + 3) = (uint)uVar1;
    *puVar3 = &PTR_LAB_144dd59c8;
    puVar3[2] = param_2;
    puVar3[4] = param_4;
  }
  return;
}



// FUNCTION 141af8a80 FUN_141af8a80 body=178 status=ok
// SIG undefined FUN_141af8a80(void)

void FUN_141af8a80(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*(char *)(param_3 + 6) != '\0') {
    uVar2 = *param_4;
    uVar1 = *(ushort *)(param_3 + 4);
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30);
      puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar4 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar3;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar4;
    *(undefined8 **)(param_1 + 8) = puVar4 + 1;
    puVar4[1] = 0;
    *(uint *)(puVar4 + 3) = (uint)uVar1;
    puVar4[4] = uVar2;
    *puVar4 = &PTR_LAB_144dd59c8;
    puVar4[2] = param_2;
  }
  return;
}



// FUNCTION 141af8b40 FUN_141af8b40 body=2113 status=ok
// SIG undefined FUN_141af8b40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_141af8b40(undefined8 param_1,longlong param_2,undefined8 *param_3,char param_4,
                  longlong *param_5)

{
  undefined4 uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  byte local_1a8;
  undefined8 local_1a0;
  uint local_198;
  int local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  longlong local_170;
  undefined8 local_168;
  uint local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined1 local_154;
  longlong *local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  uint local_100;
  undefined8 local_f8;
  uint local_f0;
  undefined8 local_e8;
  uint local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 local_80;
  uint local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined1 local_68 [48];
  
  local_1a8 = 0;
  bVar5 = false;
  if (((int)param_5[1] != 0) && (local_190 = 0, 0 < (int)param_5[1])) {
    local_140 = 0;
    do {
      uVar13 = (ulonglong)_tls_index;
      plVar3 = *(longlong **)(local_140 + *param_5);
      lVar16 = plVar3[0x28];
      local_148 = lVar16;
      local_120 = plVar3;
      cVar6 = (**(code **)(*plVar3 + 0x18))(plVar3);
      if (cVar6 == '\0') {
        uVar2 = *(uint *)(lVar16 + 0xe8);
        lVar14 = (longlong)(int)uVar2;
        lVar12 = *(longlong *)(param_2 + 0x1ad0);
        if (*(longlong *)(param_2 + 0x1ad0) == 0) {
          lVar12 = param_2 + 0x1ac0;
        }
        uVar9 = uVar2;
        if ((int)uVar2 < 0) {
          uVar9 = uVar2 + 0x1f;
        }
        if ((*(uint *)(lVar12 + (longlong)((int)uVar9 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0) {
          local_188 = *param_3;
          local_170 = param_3[3];
          lVar12 = *(longlong *)(param_2 + 0x1b30);
          local_180 = param_3[1];
          local_178 = *(undefined4 *)(param_3 + 2);
          local_1a0 = 3;
          local_198 = local_198 & 0xffff0000;
          if (local_170 != 0) {
            LOCK();
            *(int *)(local_170 + 8) = *(int *)(local_170 + 8) + 1;
            UNLOCK();
          }
          local_168 = param_3[4];
          local_158 = *(undefined4 *)(param_3 + 6);
          local_160 = *(uint *)(param_3 + 5);
          local_15c = *(undefined4 *)((longlong)param_3 + 0x2c);
          local_154 = 0;
          local_130 = lVar12;
          local_128 = lVar14;
          if (param_4 != '\0') {
            bVar8 = *(byte *)((longlong)plVar3 + 0x24);
            if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar13 * 8) + 0x38) <
                 DAT_146a15310) && (_Init_thread_header(&DAT_146a15310), DAT_146a15310 == -1)) {
              _DAT_146a152c0 = FUN_141b09410();
              _DAT_146a152c8 = FUN_141b092d0();
              _DAT_146a152d0 = FUN_141b088d0();
              _DAT_146a152d8 = FUN_141b08a10();
              _DAT_146a152e0 = FUN_141b08b50();
              _DAT_146a152e8 = FUN_141b08c90();
              _DAT_146a152f0 = FUN_141b08dd0();
              _DAT_146a152f8 = FUN_141b08f10();
              _DAT_146a15300 = FUN_141b09050();
              _DAT_146a15308 = FUN_141b09190();
              _Init_thread_footer(&DAT_146a15310);
            }
            local_160 = (uint)bVar8;
            local_180 = *(undefined8 *)(&DAT_146a152c0 + (longlong)(int)plVar3[5] * 8);
            if (*(int *)(param_2 + 0x1a38) < 2) {
              local_1a0 = CONCAT44((float)bVar8 * 0.003921569,3);
            }
          }
          iVar17 = *(int *)(lVar16 + 0xe8);
          if (iVar17 == 0) {
            iVar11 = 0;
          }
          else {
            iVar11 = *(int *)(*(longlong *)(param_2 + 0x2290) + -4 + (longlong)iVar17 * 4);
          }
          iVar17 = *(int *)(*(longlong *)(param_2 + 0x2290) + (longlong)iVar17 * 4);
          if (iVar11 < iVar17) {
            lVar14 = (longlong)iVar11 * 0x18;
            uVar13 = (ulonglong)(uint)(iVar17 - iVar11);
            do {
              lVar16 = *(longlong *)(param_2 + 0x2280);
              lVar12 = *(longlong *)(lVar14 + lVar16);
              uVar7 = FUN_141ac28e0(param_2);
              iVar17 = 1;
              if (*(int *)(lVar12 + 0x80) != 1) {
                iVar17 = (1 << ((byte)*(int *)(lVar12 + 0x80) & 0x1f)) + -1;
              }
              local_138 = (longlong)iVar17;
              local_108 = local_1a0;
              local_100 = local_198;
              FUN_141b04230(param_1,param_2,&local_108,lVar12,&local_138,&local_188,1,
                            *(undefined8 *)(lVar14 + 8 + lVar16),*(undefined4 *)(lVar12 + 0xb0),
                            *(uint *)(lVar12 + 0x8c) >> 9 & 1,uVar7,0);
              lVar14 = lVar14 + 0x18;
              uVar13 = uVar13 - 1;
              lVar16 = local_148;
              lVar12 = local_130;
            } while (uVar13 != 0);
          }
          plVar3 = local_120;
          if (((*(uint *)(lVar12 + 4 + local_128 * 8) & 0x100) != 0) &&
             (iVar17 = 0, 0 < *(int *)(lVar16 + 0x38))) {
            lVar14 = 0;
            lVar12 = local_170;
            do {
              lVar4 = *(longlong *)(lVar14 + *(longlong *)(lVar16 + 0x30));
              uVar2 = *(uint *)(lVar4 + 200);
              lVar15 = *(longlong *)(param_2 + 0x1b50);
              if (*(longlong *)(param_2 + 0x1b50) == 0) {
                lVar15 = param_2 + 0x1b40;
              }
              uVar9 = uVar2;
              if ((int)uVar2 < 0) {
                uVar9 = uVar2 + 0x1f;
              }
              if ((*(uint *)(lVar15 + (longlong)((int)uVar9 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0)
              {
                local_a0 = local_188;
                local_98 = local_180;
                local_90 = local_178;
                if (lVar12 != 0) {
                  LOCK();
                  *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
                  UNLOCK();
                }
                local_80 = local_168;
                local_78 = local_160;
                local_74 = local_15c;
                local_70 = local_158;
                local_6c = 0;
                local_88 = lVar12;
                FUN_141b36960(&local_a0,param_2,lVar4,0);
                if ((*(uint *)(lVar4 + 0x8c) & 0x2000000) == 0) {
                  local_118 = (1L << ((byte)*(undefined4 *)(lVar4 + 0x80) & 0x3f)) + -1;
                }
                else {
                  local_118 = *(longlong *)
                               (*(longlong *)(param_2 + 0x1c50) +
                               (longlong)*(int *)(lVar4 + 0xcc) * 8);
                }
                uVar7 = FUN_141ac28e0(param_2);
                uVar1 = *(undefined4 *)(lVar4 + 0xb0);
                local_150 = (longlong *)0x0;
                (**(code **)(**(longlong **)(lVar4 + 0xa8) + 0x40))
                          (*(longlong **)(lVar4 + 0xa8),*(undefined4 *)(param_2 + 0x1a38),local_68,
                           &local_150);
                (**(code **)(*local_150 + 0x1f8))();
                local_f0 = local_198;
                local_f8 = local_1a0;
                bVar8 = FUN_141b04230(param_1,param_2,&local_f8,lVar4,&local_118,&local_a0,1,plVar3,
                                      uVar1,0,uVar7,0);
                local_1a8 = local_1a8 | bVar8;
                TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_88);
                lVar12 = local_170;
                lVar16 = local_148;
              }
              iVar17 = iVar17 + 1;
              lVar14 = lVar14 + 8;
            } while (iVar17 < *(int *)(lVar16 + 0x38));
          }
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_170);
        }
      }
      else {
        bVar5 = true;
      }
      local_190 = local_190 + 1;
      local_140 = local_140 + 8;
    } while (local_190 < (int)param_5[1]);
    if (bVar5) {
      if ((*(char *)(param_2 + 0x1209) == '\0') || (*(int *)(param_2 + 0xf60) != 1)) {
        uVar7 = 1;
      }
      else {
        uVar7 = 0;
      }
      FUN_141ada980(param_1,param_2,0x3f600000,0x3f800000,uVar7);
      iVar17 = 0;
      if (0 < (int)param_5[1]) {
        lVar16 = 0;
        do {
          lVar12 = (*(longlong **)(lVar16 + *param_5))[0x28];
          cVar6 = (**(code **)(**(longlong **)(lVar16 + *param_5) + 0x18))();
          if (cVar6 != '\0') {
            uVar2 = *(uint *)(lVar12 + 0xe8);
            lVar14 = *(longlong *)(param_2 + 0x1ad0);
            if (*(longlong *)(param_2 + 0x1ad0) == 0) {
              lVar14 = param_2 + 0x1ac0;
            }
            uVar9 = uVar2;
            if ((int)uVar2 < 0) {
              uVar9 = uVar2 + 0x1f;
            }
            if ((*(uint *)(lVar14 + (longlong)((int)uVar9 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0) {
              local_d8 = *param_3;
              local_d0 = param_3[1];
              local_c8 = *(undefined4 *)(param_3 + 2);
              local_c0 = param_3[3];
              local_198 = local_198 & 0xffff0000;
              if (local_c0 != 0) {
                LOCK();
                *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
                UNLOCK();
              }
              local_b8 = param_3[4];
              local_a8 = *(undefined4 *)(param_3 + 6);
              local_b0 = *(undefined4 *)(param_3 + 5);
              local_ac = *(undefined4 *)((longlong)param_3 + 0x2c);
              local_a4 = 0;
              if (param_4 != '\0') {
                local_d0 = FUN_141b09410();
                local_b0 = 0;
              }
              iVar11 = *(int *)(lVar12 + 0xe8);
              if (iVar11 == 0) {
                iVar10 = 0;
              }
              else {
                iVar10 = *(int *)(*(longlong *)(param_2 + 0x22b0) + -4 + (longlong)iVar11 * 4);
              }
              iVar11 = *(int *)(*(longlong *)(param_2 + 0x22b0) + (longlong)iVar11 * 4);
              if (iVar10 < iVar11) {
                lVar12 = (longlong)iVar10 * 0x18;
                uVar13 = (ulonglong)(uint)(iVar11 - iVar10);
                do {
                  iVar11 = 1;
                  lVar14 = *(longlong *)(lVar12 + *(longlong *)(param_2 + 0x22a0));
                  if (*(int *)(lVar14 + 0x80) != 1) {
                    iVar11 = (1 << ((byte)*(int *)(lVar14 + 0x80) & 0x1f)) + -1;
                  }
                  local_110 = (longlong)iVar11;
                  local_e8 = 3;
                  local_e0 = local_198;
                  FUN_141b04230(param_1,param_2,&local_e8,lVar14,&local_110,&local_d8,1,
                                *(undefined8 *)(lVar12 + 8 + *(longlong *)(param_2 + 0x22a0)),
                                *(undefined4 *)(lVar14 + 0xb0),0,0,0);
                  lVar12 = lVar12 + 0x18;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_c0);
            }
          }
          iVar17 = iVar17 + 1;
          lVar16 = lVar16 + 8;
        } while (iVar17 < (int)param_5[1]);
      }
      if ((*(char *)(param_2 + 0x1209) == '\0') || (*(int *)(param_2 + 0xf60) != 1)) {
        uVar7 = 1;
      }
      else {
        uVar7 = 0;
      }
      FUN_141ada980(param_1,param_2,0,0x3f800000,uVar7);
    }
    return local_1a8;
  }
  return 0;
}



// FUNCTION 141af9390 FUN_141af9390 body=2181 status=ok
// SIG undefined FUN_141af9390(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_141af9390(undefined8 param_1,longlong param_2,undefined8 *param_3,char param_4,
                  longlong *param_5)

{
  undefined4 uVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  undefined4 uVar18;
  byte local_1d8;
  undefined8 local_1d0;
  uint local_1c8;
  uint local_1c0;
  undefined4 local_1bc;
  int local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  longlong local_198;
  undefined8 local_190;
  uint local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined1 local_17c;
  longlong local_178;
  undefined8 local_170;
  longlong *local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong *local_138;
  longlong local_130;
  longlong local_128 [2];
  undefined8 local_118;
  uint local_110;
  undefined8 local_108;
  uint local_100;
  undefined8 local_f8;
  uint local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined8 local_90;
  uint local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_7c;
  undefined1 local_78 [64];
  
  local_1d8 = 0;
  bVar4 = false;
  if ((int)param_5[1] == 0) {
    return 0;
  }
  local_1b8 = 0;
  if ((int)param_5[1] < 1) {
    local_1d8 = 0;
  }
  else {
    local_158 = 0;
    do {
      plVar3 = *(longlong **)(local_158 + *param_5);
      lVar15 = plVar3[0x28];
      local_160 = lVar15;
      local_138 = plVar3;
      cVar5 = (**(code **)(*plVar3 + 0x18))(plVar3);
      if (cVar5 == '\0') {
        uVar2 = *(uint *)(lVar15 + 0xe8);
        lVar14 = (longlong)(int)uVar2;
        lVar12 = *(longlong *)(param_2 + 0x1ad0);
        if (*(longlong *)(param_2 + 0x1ad0) == 0) {
          lVar12 = param_2 + 0x1ac0;
        }
        uVar8 = uVar2;
        if ((int)uVar2 < 0) {
          uVar8 = uVar2 + 0x1f;
        }
        if ((*(uint *)(lVar12 + (longlong)((int)uVar8 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0) {
          lVar12 = param_3[3];
          local_1b0 = *param_3;
          lVar11 = *(longlong *)(param_2 + 0x1b30);
          local_1a8 = param_3[1];
          local_1a0 = *(undefined4 *)(param_3 + 2);
          local_1d0 = 3;
          local_1c8 = local_1c8 & 0xffff0000;
          if (lVar12 != 0) {
            LOCK();
            *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
            UNLOCK();
          }
          local_190 = param_3[4];
          local_188 = *(uint *)(param_3 + 5);
          uVar18 = *(undefined4 *)(param_3 + 6);
          local_1bc = *(undefined4 *)((longlong)param_3 + 0x2c);
          local_17c = 0;
          local_198 = lVar12;
          local_184 = local_1bc;
          local_180 = uVar18;
          local_178 = lVar12;
          local_170 = local_190;
          local_148 = lVar11;
          local_140 = lVar14;
          if (param_4 != '\0') {
            bVar7 = *(byte *)((longlong)plVar3 + 0x24);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38)
                 < DAT_146a152b0) && (_Init_thread_header(&DAT_146a152b0), DAT_146a152b0 == -1)) {
              _DAT_146a15260 = FUN_141b09410();
              _DAT_146a15268 = FUN_141b092d0();
              _DAT_146a15270 = FUN_141b088d0();
              _DAT_146a15278 = FUN_141b08a10();
              _DAT_146a15280 = FUN_141b08b50();
              _DAT_146a15288 = FUN_141b08c90();
              _DAT_146a15290 = FUN_141b08dd0();
              _DAT_146a15298 = FUN_141b08f10();
              _DAT_146a152a0 = FUN_141b09050();
              _DAT_146a152a8 = FUN_141b09190();
              _Init_thread_footer(&DAT_146a152b0);
            }
            local_1a8 = *(undefined8 *)(&DAT_146a15260 + (longlong)(int)plVar3[5] * 8);
            local_188 = (uint)bVar7;
            if (*(int *)(param_2 + 0x1a38) < 2) {
              local_1d0 = CONCAT44((float)bVar7 * 0.003921569,3);
            }
          }
          local_1c0 = local_188;
          iVar16 = *(int *)(lVar15 + 0xe8);
          if (iVar16 == 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = *(int *)(*(longlong *)(param_2 + 0x2290) + -4 + (longlong)iVar16 * 4);
          }
          iVar16 = *(int *)(*(longlong *)(param_2 + 0x2290) + (longlong)iVar16 * 4);
          if (iVar10 < iVar16) {
            lVar14 = (longlong)iVar10 * 0x18;
            uVar13 = (ulonglong)(uint)(iVar16 - iVar10);
            do {
              lVar15 = *(longlong *)(param_2 + 0x2280);
              lVar12 = *(longlong *)(lVar14 + lVar15);
              uVar6 = FUN_141ac28e0(param_2);
              iVar16 = 1;
              if (*(int *)(lVar12 + 0x80) != 1) {
                iVar16 = (1 << ((byte)*(int *)(lVar12 + 0x80) & 0x1f)) + -1;
              }
              local_150 = (longlong)iVar16;
              local_118 = local_1d0;
              local_110 = local_1c8;
              FUN_141b05620(param_1,param_2,&local_118,lVar12,&local_150,&local_1b0,1,
                            *(undefined8 *)(lVar14 + 8 + lVar15),*(undefined4 *)(lVar12 + 0xb0),
                            *(uint *)(lVar12 + 0x8c) >> 9 & 1,uVar6,0);
              lVar14 = lVar14 + 0x18;
              uVar13 = uVar13 - 1;
              lVar11 = local_148;
              lVar15 = local_160;
              lVar12 = local_178;
            } while (uVar13 != 0);
          }
          if (((*(uint *)(lVar11 + 4 + local_140 * 8) & 0x100) != 0) &&
             (iVar16 = 0, 0 < *(int *)(lVar15 + 0x38))) {
            lVar14 = 0;
            do {
              lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0x30) + lVar14);
              uVar2 = *(uint *)(lVar15 + 200);
              lVar11 = *(longlong *)(param_2 + 0x1b50);
              if (*(longlong *)(param_2 + 0x1b50) == 0) {
                lVar11 = param_2 + 0x1b40;
              }
              uVar8 = uVar2;
              if ((int)uVar2 < 0) {
                uVar8 = uVar2 + 0x1f;
              }
              lVar17 = lVar12;
              if ((*(uint *)(lVar11 + (longlong)((int)uVar8 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0)
              {
                local_b0 = local_1b0;
                local_a8 = local_1a8;
                local_a0 = local_1a0;
                if (lVar12 != 0) {
                  LOCK();
                  *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
                  UNLOCK();
                  local_1bc = local_184;
                  local_1c0 = local_188;
                  local_170 = local_190;
                  lVar17 = local_198;
                  uVar18 = local_180;
                }
                local_84 = local_1bc;
                local_7c = 0;
                local_98 = lVar12;
                local_90 = local_170;
                local_88 = local_1c0;
                local_80 = uVar18;
                FUN_141b36960(&local_b0,param_2,lVar15,0);
                if ((*(uint *)(lVar15 + 0x8c) & 0x2000000) == 0) {
                  local_130 = (1L << ((byte)*(undefined4 *)(lVar15 + 0x80) & 0x3f)) + -1;
                }
                else {
                  local_130 = *(longlong *)
                               (*(longlong *)(param_2 + 0x1c50) +
                               (longlong)*(int *)(lVar15 + 0xcc) * 8);
                }
                uVar6 = FUN_141ac28e0(param_2);
                uVar1 = *(undefined4 *)(lVar15 + 0xb0);
                local_168 = (longlong *)0x0;
                (**(code **)(**(longlong **)(lVar15 + 0xa8) + 0x40))
                          (*(longlong **)(lVar15 + 0xa8),*(undefined4 *)(param_2 + 0x1a38),local_78,
                           &local_168);
                (**(code **)(*local_168 + 0x1f8))();
                local_100 = local_1c8;
                local_108 = local_1d0;
                bVar7 = FUN_141b05620(param_1,param_2,&local_108,lVar15,&local_130,&local_b0,1,
                                      local_138,uVar1,0,uVar6,0);
                local_1d8 = local_1d8 | bVar7;
                TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_98);
              }
              iVar16 = iVar16 + 1;
              lVar14 = lVar14 + 8;
              lVar15 = local_160;
              lVar12 = lVar17;
            } while (iVar16 < *(int *)(local_160 + 0x38));
          }
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_198);
        }
      }
      else {
        bVar4 = true;
      }
      local_1b8 = local_1b8 + 1;
      local_158 = local_158 + 8;
    } while (local_1b8 < (int)param_5[1]);
    if (bVar4) {
      if ((*(char *)(param_2 + 0x1209) == '\0') || (*(int *)(param_2 + 0xf60) != 1)) {
        uVar6 = 1;
      }
      else {
        uVar6 = 0;
      }
      FUN_141ada980(param_1,param_2,0x3f600000,0x3f800000,uVar6);
      iVar16 = 0;
      if (0 < (int)param_5[1]) {
        lVar15 = 0;
        do {
          lVar12 = (*(longlong **)(lVar15 + *param_5))[0x28];
          cVar5 = (**(code **)(**(longlong **)(lVar15 + *param_5) + 0x18))();
          if (cVar5 != '\0') {
            uVar2 = *(uint *)(lVar12 + 0xe8);
            lVar14 = *(longlong *)(param_2 + 0x1ad0);
            if (*(longlong *)(param_2 + 0x1ad0) == 0) {
              lVar14 = param_2 + 0x1ac0;
            }
            uVar8 = uVar2;
            if ((int)uVar2 < 0) {
              uVar8 = uVar2 + 0x1f;
            }
            if ((*(uint *)(lVar14 + (longlong)((int)uVar8 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0) {
              local_e8 = *param_3;
              local_e0 = param_3[1];
              local_d8 = *(undefined4 *)(param_3 + 2);
              local_d0 = param_3[3];
              local_1c8 = local_1c8 & 0xffff0000;
              if (local_d0 != 0) {
                LOCK();
                *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
                UNLOCK();
              }
              local_c8 = param_3[4];
              local_b8 = *(undefined4 *)(param_3 + 6);
              local_c0 = *(undefined4 *)(param_3 + 5);
              local_bc = *(undefined4 *)((longlong)param_3 + 0x2c);
              local_b4 = 0;
              if (param_4 != '\0') {
                local_e0 = FUN_141b09410();
                local_c0 = 0;
              }
              iVar10 = *(int *)(lVar12 + 0xe8);
              if (iVar10 == 0) {
                iVar9 = 0;
              }
              else {
                iVar9 = *(int *)(*(longlong *)(param_2 + 0x22b0) + -4 + (longlong)iVar10 * 4);
              }
              iVar10 = *(int *)(*(longlong *)(param_2 + 0x22b0) + (longlong)iVar10 * 4);
              if (iVar9 < iVar10) {
                lVar12 = (longlong)iVar9 * 0x18;
                uVar13 = (ulonglong)(uint)(iVar10 - iVar9);
                do {
                  iVar10 = 1;
                  lVar14 = *(longlong *)(lVar12 + *(longlong *)(param_2 + 0x22a0));
                  if (*(int *)(lVar14 + 0x80) != 1) {
                    iVar10 = (1 << ((byte)*(int *)(lVar14 + 0x80) & 0x1f)) + -1;
                  }
                  local_128[0] = (longlong)iVar10;
                  local_f8 = 3;
                  local_f0 = local_1c8;
                  FUN_141b05620(param_1,param_2,&local_f8,lVar14,local_128,&local_e8,1,
                                *(undefined8 *)(lVar12 + 8 + *(longlong *)(param_2 + 0x22a0)),
                                *(undefined4 *)(lVar14 + 0xb0),0,0,0);
                  lVar12 = lVar12 + 0x18;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_d0);
            }
          }
          iVar16 = iVar16 + 1;
          lVar15 = lVar15 + 8;
        } while (iVar16 < (int)param_5[1]);
      }
      if ((*(char *)(param_2 + 0x1209) == '\0') || (*(int *)(param_2 + 0xf60) != 1)) {
        uVar6 = 1;
      }
      else {
        uVar6 = 0;
      }
      FUN_141ada980(param_1,param_2,0,0x3f800000,uVar6);
    }
  }
  return local_1d8;
}



// FUNCTION 141af9c20 FUN_141af9c20 body=439 status=ok
// SIG undefined FUN_141af9c20(void)

void FUN_141af9c20(longlong param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  uVar1 = *(ushort *)(param_1 + 0xe2);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar5 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar4;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar5;
  *(undefined8 **)(param_2 + 8) = puVar5 + 1;
  puVar5[1] = 0;
  *puVar5 = &PTR_LAB_144d91e40;
  puVar5[2] = uVar3;
  *(uint *)(puVar5 + 3) = (uint)uVar1;
  puVar5[4] = 0;
  lVar2 = *(longlong *)(param_1 + 0x48);
  uVar1 = *(ushort *)(param_1 + 0xe8);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar5 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar4;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar5;
  *(undefined8 **)(param_2 + 8) = puVar5 + 1;
  puVar5[1] = 0;
  *puVar5 = &PTR_LAB_144d91e40;
  puVar5[2] = uVar3;
  *(uint *)(puVar5 + 3) = (uint)uVar1;
  puVar5[4] = 0;
  uVar1 = *(ushort *)(param_1 + 0xee);
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar5 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar4;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar5;
  *(undefined8 **)(param_2 + 8) = puVar5 + 1;
  puVar5[2] = uVar3;
  *(uint *)(puVar5 + 3) = (uint)uVar1;
  puVar5[1] = 0;
  *puVar5 = &PTR_LAB_144d91e40;
  puVar5[4] = 0;
  return;
}



// FUNCTION 141af9de0 FUN_141af9de0 body=235 status=ok
// SIG undefined FUN_141af9de0(void)

undefined8 *
FUN_141af9de0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined2 *param_6,undefined8 param_7,undefined8 param_8,
             undefined8 *param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = *param_5;
  param_1[4] = param_5[1];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_5 + 2);
  lVar2 = param_5[3];
  param_1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[7] = param_5[4];
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_5 + 5);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_5 + 0x2c);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_5 + 6);
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  uVar1 = *param_6;
  param_1[0xb] = param_7;
  param_1[0xc] = param_8;
  *(undefined4 *)(param_1 + 0xd) = param_10;
  *(undefined4 *)((longlong)param_1 + 0x6c) = param_11;
  param_1[0xe] = param_12;
  *(undefined2 *)(param_1 + 10) = uVar1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  if (param_9 != (undefined8 *)0x0) {
    uVar3 = param_9[1];
    param_1[0xf] = *param_9;
    param_1[0x10] = uVar3;
    uVar3 = param_9[3];
    param_1[0x11] = param_9[2];
    param_1[0x12] = uVar3;
    uVar3 = param_9[5];
    param_1[0x13] = param_9[4];
    param_1[0x14] = uVar3;
  }
  return param_1;
}



// FUNCTION 141af9ed0 FUN_141af9ed0 body=481 status=ok
// SIG undefined FUN_141af9ed0(void)

undefined8 *
FUN_141af9ed0(undefined8 *param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
             undefined8 param_5,int param_6)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int local_res8 [2];
  undefined *local_28;
  undefined4 local_20;
  
  FUN_141b279e0();
  cVar1 = FUN_141b196e0(param_4,0);
  if (cVar1 == '\0') {
LAB_141af9f26:
    cVar1 = '\x01';
  }
  else {
    cVar2 = (**(code **)(*param_4 + 0x38))(param_4);
    cVar1 = '\0';
    if (cVar2 != '\0') goto LAB_141af9f26;
  }
  *(char *)(param_1 + 7) = cVar1;
  if (cVar1 == '\0') {
    local_20 = 0;
    local_28 = &DAT_1469f8530;
    lVar4 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar4 + 0x38,local_res8,&local_28);
    puVar7 = (undefined8 *)0x0;
    if (local_res8[0] != -1) {
      puVar7 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(lVar4 + 0x38));
    }
    puVar5 = puVar7 + 2;
    if (puVar7 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    param_1[0xb] = *puVar5;
  }
  iVar3 = (**(code **)(*param_4 + 0x178))(param_4);
  cVar1 = FUN_141ed13a0((&DAT_1464c9c48)[param_6]);
  if (cVar1 != '\0') {
    lVar4 = (**(code **)(*param_2 + 0x40))(param_2);
    cVar1 = (**(code **)(lVar4 + 0x48))();
    if ((cVar1 != '\0') && (iVar3 != 0)) {
      uVar6 = (**(code **)(*(longlong *)param_1[1] + 0x40))();
      uVar6 = FUN_1425939a0(param_4,&DAT_146a14f50,uVar6,1);
      param_1[10] = uVar6;
      uVar6 = (**(code **)(*(longlong *)param_1[1] + 0x40))();
      uVar6 = FUN_1425939a0(param_4,&DAT_146a10730,uVar6,1);
      param_1[8] = uVar6;
      uVar6 = (**(code **)(*(longlong *)param_1[1] + 0x40))();
      uVar6 = FUN_1425939a0(param_4,&DAT_146a10880,uVar6,1);
      param_1[9] = uVar6;
      goto LAB_141afa066;
    }
  }
  param_1[8] = 0;
  param_1[9] = 0;
  uVar6 = (**(code **)(*(longlong *)param_1[1] + 0x40))();
  uVar6 = FUN_1425939a0(param_4,&DAT_146a14f50,uVar6,1);
  param_1[10] = uVar6;
LAB_141afa066:
  if (*(char *)(param_1 + 7) != '\0') {
    uVar6 = (**(code **)(*param_2 + 0x40))(param_2);
    uVar6 = FUN_1425939a0(param_4,&DAT_146a10dd0,uVar6,1);
    param_1[0xb] = uVar6;
  }
  *param_1 = param_1[10];
  return param_1;
}



// FUNCTION 141afa0c0 FUN_141afa0c0 body=345 status=ok
// SIG undefined FUN_141afa0c0(void)

undefined8 * FUN_141afa0c0(undefined8 *param_1,longlong param_2)

{
  FUN_141d89a50();
  *param_1 = &PTR__scalar_deleting_destructor__144dd4ce8;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined2 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x116) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x126) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x136) = 0;
  *(undefined2 *)((longlong)param_1 + 0x13a) = 0;
  FShaderParameter::Bind(param_1 + 0x22,*(undefined8 *)(param_2 + 0x18),L"SvPositionToDecal",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x116,*(undefined8 *)(param_2 + 0x18),L"DecalToWorld",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x11c,*(undefined8 *)(param_2 + 0x18),L"WorldToDecal",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x122,*(undefined8 *)(param_2 + 0x18),L"DecalOrientation",0);
  FShaderParameter::Bind(param_1 + 0x25,*(undefined8 *)(param_2 + 0x18),L"DecalParams",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x12e,*(undefined8 *)(param_2 + 0x18),L"DecalIsSecondaryChannel",0)
  ;
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x134,*(undefined8 *)(param_2 + 0x18),L"StencilTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x27,*(undefined8 *)(param_2 + 0x18),L"EyeAdaptation",0);
  return param_1;
}



// FUNCTION 141afa220 FUN_141afa220 body=541 status=ok
// SIG undefined FUN_141afa220(void)

undefined8 * FUN_141afa220(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  char cVar4;
  DWORD DVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  FUN_141d59fc0();
  uVar10 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_144dd5498;
  pvVar3 = ThreadLocalStoragePointer;
  lVar7 = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  if ((*(int *)(*(longlong *)((longlong)pvVar3 + uVar10 * 8) + 0x38) < DAT_146a14e28) &&
     (_Init_thread_header(&DAT_146a14e28), DAT_146a14e28 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.StencilForLODDither");
    lVar9 = lVar7;
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar8 + 0x38))(plVar8);
    }
    DAT_146a14e20 = lVar9;
    _Init_thread_footer(&DAT_146a14e28);
  }
  lVar9 = DAT_146a14e20;
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    lVar6 = 4;
    if (DVar5 != DAT_1468c21c0) goto LAB_141afa2c6;
  }
  lVar6 = lVar7;
LAB_141afa2c6:
  plVar8 = (longlong *)param_1[1];
  uVar1 = *(undefined4 *)(param_1 + 0x54);
  *(bool *)((longlong)param_1 + 0x2e5) = *(int *)(lVar6 + lVar9) != 0;
  *(undefined4 *)(param_1 + 0x5c) = 1;
  *(undefined1 *)((longlong)param_1 + 0x2e4) = 0;
  lVar9 = DAT_146a10000;
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar4 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar5 = GetCurrentThreadId(), lVar6 = 4, DVar5 == DAT_1468c21c0)) {
    lVar6 = lVar7;
  }
  iVar2 = *(int *)(lVar6 + lVar9);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  else if (iVar2 == 1) {
    *(undefined4 *)(param_1 + 0x5c) = 1;
  }
  else if (iVar2 == 2) {
    *(undefined4 *)(param_1 + 0x5c) = 2;
  }
  cVar4 = FUN_141b18ec0(uVar1,plVar8);
  if (cVar4 != '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 3;
    *(undefined1 *)((longlong)param_1 + 0x2e4) = 1;
  }
  if (((plVar8 != (longlong *)0x0) && (lVar7 = (**(code **)(*plVar8 + 0xe0))(plVar8), lVar7 != 0))
     && (lVar7 = (**(code **)(*plVar8 + 0xe0))(plVar8), *(char *)(lVar7 + 0xce) != '\0')) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined1 *)((longlong)param_1 + 0x2e4) = 0;
  }
  return param_1;
}



// FUNCTION 141afa440 FUN_141afa440 body=965 status=ok
// SIG undefined FUN_141afa440(void)

undefined8 *
FUN_141afa440(undefined8 *param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
             undefined8 param_5,int param_6,float param_7)

{
  bool bVar1;
  void *pvVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  DWORD DVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined *puVar13;
  
  lVar10 = 0;
  FUN_141b279e0(param_1,param_2,param_3,param_4,param_5,0);
  *(float *)(param_1 + 0xd) = param_7;
  if (((param_7 == 0.0) && (cVar3 = FUN_141b196e0(param_4,0), cVar3 != '\0')) &&
     (cVar3 = FUN_14259cbf0(param_4), cVar3 == '\0')) {
    cVar4 = (**(code **)(*param_4 + 0x38))(param_4);
    cVar3 = '\0';
    if (cVar4 != '\0') goto LAB_141afa4be;
  }
  else {
LAB_141afa4be:
    cVar3 = '\x01';
  }
  *(char *)(param_1 + 7) = cVar3;
  if (cVar3 == '\0') {
    param_1[0xc] = 0;
  }
  iVar5 = (**(code **)(*param_4 + 0x178))(param_4);
  cVar3 = FUN_141ed13a0((&DAT_1464c9c48)[param_6]);
  if (cVar3 == '\0') {
LAB_141afa57b:
    pvVar2 = ThreadLocalStoragePointer;
    uVar12 = (ulonglong)_tls_index;
    param_1[8] = 0;
    param_1[9] = 0;
    if ((*(int *)(*(longlong *)((longlong)pvVar2 + uVar12 * 8) + 0x38) < DAT_146a151f8) &&
       (_Init_thread_header(&DAT_146a151f8), DAT_146a151f8 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar11 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ShaderPipelines")
      ;
      lVar7 = lVar10;
      if (plVar11 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar11 + 0x38))(plVar11);
      }
      DAT_146a151f0 = lVar7;
      _Init_thread_footer(&DAT_146a151f8);
    }
    lVar7 = DAT_146a151f0;
    if (DAT_146a151f0 == 0) {
LAB_141afa5f4:
      bVar1 = false;
    }
    else {
      cVar3 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
        DVar6 = GetCurrentThreadId();
        lVar9 = 4;
        if (DVar6 == DAT_1468c21c0) goto LAB_141afa5e7;
      }
      else {
LAB_141afa5e7:
        lVar9 = lVar10;
      }
      if (*(int *)(lVar9 + lVar7) == 0) goto LAB_141afa5f4;
      bVar1 = true;
    }
    if (*(char *)(param_1 + 7) == '\0') {
      if (bVar1) {
        uVar8 = (**(code **)(*param_2 + 0x40))(param_2);
        puVar13 = &DAT_146a10b20;
        goto LAB_141afa626;
      }
    }
    else if (bVar1) {
      uVar8 = (**(code **)(*param_2 + 0x40))(param_2);
      puVar13 = &DAT_146a10c00;
LAB_141afa626:
      lVar10 = FUN_142594690(param_4,puVar13,uVar8,0);
    }
    param_1[10] = lVar10;
    if (lVar10 == 0) {
      uVar8 = (**(code **)(*(longlong *)param_1[1] + 0x40))();
      uVar8 = FUN_1425939a0(param_4,&DAT_146a14f50,uVar8,1);
      param_1[0xb] = uVar8;
      goto LAB_141afa74c;
    }
    lVar7 = *(longlong *)(lVar10 + 0x28);
    if (((((lVar7 == 0) || (*(undefined **)(lVar7 + 0x90) != &DAT_146a14f50)) &&
         ((lVar7 = *(longlong *)(lVar10 + 8), lVar7 == 0 ||
          (*(undefined **)(lVar7 + 0x90) != &DAT_146a14f50)))) &&
        ((lVar7 = *(longlong *)(lVar10 + 0x20), lVar7 == 0 ||
         (*(undefined **)(lVar7 + 0x90) != &DAT_146a14f50)))) &&
       ((lVar7 = *(longlong *)(lVar10 + 0x10), lVar7 == 0 ||
        ((*(undefined **)(lVar7 + 0x90) != &DAT_146a14f50 &&
         ((lVar7 = *(longlong *)(lVar10 + 0x18), lVar7 == 0 ||
          (*(undefined **)(lVar7 + 0x90) != &DAT_146a14f50)))))))) {
      lVar7 = 0;
    }
    param_1[0xb] = lVar7;
    if (*(char *)(param_1 + 7) == '\0') goto LAB_141afa774;
    lVar7 = *(longlong *)(lVar10 + 0x28);
    if ((((lVar7 == 0) || (*(undefined **)(lVar7 + 0x90) != &DAT_146a109d0)) &&
        ((lVar7 = *(longlong *)(lVar10 + 8), lVar7 == 0 ||
         (*(undefined **)(lVar7 + 0x90) != &DAT_146a109d0)))) &&
       (((lVar7 = *(longlong *)(lVar10 + 0x20), lVar7 == 0 ||
         (*(undefined **)(lVar7 + 0x90) != &DAT_146a109d0)) &&
        ((lVar7 = *(longlong *)(lVar10 + 0x10), lVar7 == 0 ||
         ((*(undefined **)(lVar7 + 0x90) != &DAT_146a109d0 &&
          ((lVar7 = *(longlong *)(lVar10 + 0x18), lVar7 == 0 ||
           (*(undefined **)(lVar7 + 0x90) != &DAT_146a109d0)))))))))) {
      lVar7 = 0;
    }
  }
  else {
    lVar7 = (**(code **)(*param_2 + 0x40))(param_2);
    cVar3 = (**(code **)(lVar7 + 0x48))();
    if ((cVar3 == '\0') || (iVar5 == 0)) goto LAB_141afa57b;
    param_1[10] = 0;
    uVar8 = (**(code **)(*(longlong *)param_1[1] + 0x40))();
    uVar8 = FUN_1425939a0(param_4,&DAT_146a14f50,uVar8,1);
    param_1[0xb] = uVar8;
    uVar8 = (**(code **)(*(longlong *)param_1[1] + 0x40))();
    uVar8 = FUN_1425939a0(param_4,&DAT_146a10730,uVar8,1);
    param_1[8] = uVar8;
    uVar8 = (**(code **)(*(longlong *)param_1[1] + 0x40))();
    uVar8 = FUN_1425939a0(param_4,&DAT_146a10880,uVar8,1);
    param_1[9] = uVar8;
LAB_141afa74c:
    if (*(char *)(param_1 + 7) == '\0') goto LAB_141afa774;
    uVar8 = (**(code **)(*param_2 + 0x40))(param_2);
    lVar7 = FUN_1425939a0(param_4,&DAT_146a109d0,uVar8,1);
  }
  param_1[0xc] = lVar7;
LAB_141afa774:
  *param_1 = param_1[0xb];
  return param_1;
}



// FUNCTION 141afa810 FDistanceFieldAOParameters body=111 status=ok
// SIG undefined FDistanceFieldAOParameters(void)

float * FDistanceFieldAOParameters::FDistanceFieldAOParameters
                  (float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar2 = 0.01;
  if ((0.01 <= param_3) && (fVar2 = param_3, 2.0 <= param_3)) {
    fVar2 = 2.0;
  }
  param_1[2] = fVar2;
  fVar2 = 2.0;
  if ((2.0 <= param_2) && (fVar2 = param_2, 3000.0 <= param_2)) {
    fVar2 = 3000.0;
  }
  if (DAT_1464c1c88 == 0) {
    param_1[1] = fVar2;
    *param_1 = 0.0;
    return param_1;
  }
  fVar1 = DAT_1464c1c68;
  if (fVar2 <= DAT_1464c1c68) {
    fVar1 = fVar2;
  }
  param_1[1] = fVar1;
  if (fVar2 < DAT_1464c1c68) {
    fVar2 = 0.0;
  }
  *param_1 = fVar2;
  return param_1;
}



// FUNCTION 141afa880 FUN_141afa880 body=203 status=ok
// SIG undefined FUN_141afa880(void)

undefined8 * FUN_141afa880(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  uVar1 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  param_1[0xc] = param_2[0xc];
  uVar1 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar1;
  uVar1 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = uVar1;
  uVar1 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = uVar1;
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  uVar1 = *(undefined8 *)((longlong)param_2 + 0xa4);
  *(undefined8 *)((longlong)param_1 + 0x9c) = *(undefined8 *)((longlong)param_2 + 0x9c);
  *(undefined8 *)((longlong)param_1 + 0xa4) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)((longlong)param_2 + 0xac);
  param_1[0x16] = param_2[0x16];
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  return param_1;
}



// FUNCTION 141afa950 FUN_141afa950 body=135 status=ok
// SIG undefined FUN_141afa950(void)

undefined8 * FUN_141afa950(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__143f47aa8;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xce) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe2) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined2 *)(param_1 + 0x21) = 0;
  return param_1;
}



// FUNCTION 141afa9e0 FUN_141afa9e0 body=481 status=ok
// SIG undefined FUN_141afa9e0(void)

longlong * FUN_141afa9e0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  DWORD DVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  FUN_141b279e0();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a151f8) {
    _Init_thread_header();
    if (DAT_146a151f8 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar6 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ShaderPipelines");
      lVar5 = 0;
      if (plVar6 != (longlong *)0x0) {
        lVar5 = (**(code **)(*plVar6 + 0x38))(plVar6);
      }
      DAT_146a151f0 = lVar5;
      _Init_thread_footer();
    }
  }
  lVar5 = DAT_146a151f0;
  if (DAT_146a151f0 != 0) {
    cVar1 = FUN_1415ad720();
    if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar2 = GetCurrentThreadId();
      if (DVar2 == DAT_1468c21c0) goto LAB_141afaa7a;
      lVar3 = 4;
    }
    else {
LAB_141afaa7a:
      lVar3 = 0;
    }
    if (*(int *)(lVar3 + lVar5) != 0) {
      uVar4 = (**(code **)(*(longlong *)param_1[1] + 0x40))();
      lVar5 = FUN_142594690(param_4,&DAT_146a10b90,uVar4,1);
      goto LAB_141afaaa8;
    }
  }
  lVar5 = 0;
LAB_141afaaa8:
  param_1[7] = lVar5;
  if (lVar5 == 0) {
    uVar4 = (**(code **)(*param_2 + 0x40))(param_2);
    lVar3 = FUN_1425939a0(param_4,&DAT_146a150a0,uVar4,1);
  }
  else {
    lVar3 = *(longlong *)(lVar5 + 0x28);
    if (((((lVar3 == 0) || (*(undefined **)(lVar3 + 0x90) != &DAT_146a150a0)) &&
         ((lVar3 = *(longlong *)(lVar5 + 8), lVar3 == 0 ||
          (*(undefined **)(lVar3 + 0x90) != &DAT_146a150a0)))) &&
        ((lVar3 = *(longlong *)(lVar5 + 0x20), lVar3 == 0 ||
         (*(undefined **)(lVar3 + 0x90) != &DAT_146a150a0)))) &&
       ((lVar3 = *(longlong *)(lVar5 + 0x10), lVar3 == 0 ||
        ((*(undefined **)(lVar3 + 0x90) != &DAT_146a150a0 &&
         ((lVar3 = *(longlong *)(lVar5 + 0x18), lVar3 == 0 ||
          (*(undefined **)(lVar3 + 0x90) != &DAT_146a150a0)))))))) {
      lVar3 = 0;
    }
  }
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 2;
  param_1[8] = lVar3;
  *param_1 = lVar3;
  return param_1;
}



// FUNCTION 141afabd0 FUN_141afabd0 body=219 status=ok
// SIG undefined FUN_141afabd0(void)

undefined8 * FUN_141afabd0(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144dd4860;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xce) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined2 *)((longlong)param_1 + 0xdc) = 0;
  FUN_141cdf500(param_2);
  FShaderParameter::Bind
            (param_1 + 0x1a,*(undefined8 *)(param_2 + 0x18),L"EdgeDetectionShaderBuffer",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xd6,*(undefined8 *)(param_2 + 0x18),L"SceneStencilTexture",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xda,*(undefined8 *)(param_2 + 0x18),L"VelocityTexture",0);
  return param_1;
}



// FUNCTION 141afacb0 FPostProcessLpvIndirectPS body=344 status=ok
// SIG undefined FPostProcessLpvIndirectPS(void)

undefined8 *
FPostProcessLpvIndirectPS::FPostProcessLpvIndirectPS(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined **ppuVar3;
  
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144dd4508;
  FPostProcessPassParameters::FPostProcessPassParameters();
  puVar1 = (undefined8 *)((longlong)param_1 + 0x1bc);
  *puVar1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1e6) = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1ec) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1ee) = 0;
  param_1[0x3e] = 0;
  FPostProcessPassParameters::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18));
  FUN_141cdf500(param_2,param_1 + 0x3c,param_1 + 0x3d);
  ppuVar3 = &PTR_u_gLpv3DTexture0_1464c17d8;
  lVar2 = 7;
  do {
    FShaderResourceParameter::Bind(puVar1,*(undefined8 *)(param_2 + 0x18),*ppuVar3,0);
    puVar1 = (undefined8 *)((longlong)puVar1 + 4);
    ppuVar3 = ppuVar3 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FShaderResourceParameter::Bind
            (param_1 + 0x3b,*(undefined8 *)(param_2 + 0x18),L"gLpv3DTextureSampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x1dc,*(undefined8 *)(param_2 + 0x18),L"gAOVolumeTexture",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x3e,*(undefined8 *)(param_2 + 0x18),L"PreIntegratedGF",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 500,*(undefined8 *)(param_2 + 0x18),L"PreIntegratedGFSampler",0);
  return param_1;
}



// FUNCTION 141afae10 FPostProcessLpvIndirectPS body=121 status=ok
// SIG undefined FPostProcessLpvIndirectPS(void)

undefined8 * FPostProcessLpvIndirectPS::FPostProcessLpvIndirectPS(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144dd4508;
  FPostProcessPassParameters::FPostProcessPassParameters(param_1 + 0x18);
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1e6) = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1ec) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1ee) = 0;
  param_1[0x3e] = 0;
  return param_1;
}



// FUNCTION 141afae90 FUN_141afae90 body=140 status=ok
// SIG undefined FUN_141afae90(void)

undefined8 * FUN_141afae90(undefined8 *param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 1;
  *(undefined2 *)(param_1 + 9) = 1;
  param_1[0xc] = L"UnknownTexture";
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined2 *)(param_1 + 0xd) = 1;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dd5388;
  param_1[0x15] = param_2;
  return param_1;
}



// FUNCTION 141afaf20 FUN_141afaf20 body=140 status=ok
// SIG undefined FUN_141afaf20(void)

undefined8 * FUN_141afaf20(undefined8 *param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 1;
  *(undefined2 *)(param_1 + 9) = 1;
  param_1[0xc] = L"UnknownTexture";
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined2 *)(param_1 + 0xd) = 1;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dd5410;
  param_1[0x15] = param_2;
  return param_1;
}



// FUNCTION 141afafb0 FRCPassPostProcessPassThrough body=227 status=ok
// SIG undefined FRCPassPostProcessPassThrough(void)

undefined8 *
FRCPassPostProcessPassThrough::FRCPassPostProcessPassThrough
          (undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 1;
  *(undefined2 *)(param_1 + 9) = 1;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = L"UnknownTexture";
  *(undefined2 *)(param_1 + 0xd) = 1;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dd5508;
  param_1[0x15] = param_2;
  *(undefined1 *)(param_1 + 0x16) = param_3;
  param_1[0x17] = 1;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 1;
  *(undefined2 *)(param_1 + 0x1c) = 1;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = L"UnknownTexture";
  *(undefined2 *)(param_1 + 0x20) = 1;
  return param_1;
}



// FUNCTION 141afb0a0 FUN_141afb0a0 body=131 status=ok
// SIG undefined FUN_141afb0a0(void)

undefined8 * FUN_141afb0a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dd5988;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = FUN_141b02d10(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141afb130 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dd5678;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141afb1c0 FStaticStateResource body=177 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,2,2,0,7,0,0,0,255,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dd58c8;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x7010301;
    local_14 = 0x20200;
    local_10 = 7;
    local_c = 0x1ff;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141afb280 FStaticStateResource body=177 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,2,2,0,7,0,0,0,255,2>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dd5888;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x7010301;
    local_14 = 0x20200;
    local_10 = 7;
    local_c = 0x2ff;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141afb340 FStaticStateResource body=177 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,2,2,0,7,0,0,0,255,4>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dd5848;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x7010301;
    local_14 = 0x20200;
    local_10 = 7;
    local_c = 0x4ff;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141afb400 FStaticStateResource body=177 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,2,2,0,7,0,0,0,255,8>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dd5808;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x7010301;
    local_14 = 0x20200;
    local_10 = 7;
    local_c = 0x8ff;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141afb4c0 FStaticStateResource body=177 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,2,2,0,7,0,0,0,255,16>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dd57c8;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x7010301;
    local_14 = 0x20200;
    local_10 = 7;
    local_c = 0x10ff;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141afb580 FStaticStateResource body=177 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,2,2,0,7,0,0,0,255,32>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dd5788;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x7010301;
    local_14 = 0x20200;
    local_10 = 7;
    local_c = 0x20ff;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141afb640 FStaticStateResource body=177 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,2,2,0,7,0,0,0,255,64>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dd5748;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x7010301;
    local_14 = 0x20200;
    local_10 = 7;
    local_c = 0x40ff;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141afb700 FStaticStateResource body=177 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,2,2,0,7,0,0,0,255,128>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dd5708;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x7010301;
    local_14 = 0x20200;
    local_10 = 7;
    local_c = 0x80ff;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141afb7c0 FStaticStateResource body=177 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,2,2,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dd5908;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x7010301;
    local_14 = 0x20200;
    local_10 = 7;
    local_c = 0xffff;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141afb880 FStaticStateResource body=177 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,0,2,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dd55f8;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x7010301;
    local_14 = 0x20000;
    local_10 = 7;
    local_c = 0xffff;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141afb940 FUN_141afb940 body=177 status=ok
// SIG undefined FUN_141afb940(void)

undefined8 * FUN_141afb940(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dd5638;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x7010700;
    local_14 = 0x20202;
    local_10 = 0x2020207;
    local_c = 0x101;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141afba00 FStaticStateResource body=177 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<0,7,1,7,0,0,2,0,7,0,0,0,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dd55b8;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x7010700;
    local_14 = 0x20000;
    local_10 = 7;
    local_c = 0x101;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141afbac0 FUN_141afbac0 body=170 status=ok
// SIG undefined FUN_141afbac0(void)

undefined8 * FUN_141afbac0(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dd59d8;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x7000700;
    local_10 = 7;
    local_c = 0xff02;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141afbb70 FStaticStateResource body=186 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticSamplerState<1,3,3,3,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dd5948;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_24 = 0;
    local_10 = 0;
    local_1c = 0x7f7fffff;
    local_28 = 0x3030301;
    local_18 = 1;
    (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141afbc30 ~FPrePassParallelCommandListSet body=96 status=ok
// SIG undefined ~FPrePassParallelCommandListSet(void)

void FPrePassParallelCommandListSet::~FPrePassParallelCommandListSet(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[10];
  *param_1 = &PTR__scalar_deleting_destructor__144dd5598;
  uVar2 = FSceneRenderTargets::Get(uVar1);
  FUN_141cde700(uVar2,uVar1,0);
  FUN_141b18780(uVar1,param_1[1],param_1[2],0);
  FUN_141d662d0(param_1,1);
  FParallelCommandListSet::~FParallelCommandListSet(param_1);
  return;
}



// FUNCTION 141afbc90 FUN_141afbc90 body=247 status=ok
// SIG undefined FUN_141afbc90(void)

void FUN_141afbc90(longlong param_1)

{
  FUN_141ace450(param_1 + 0xd8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xe8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xe0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xd8);
  FUN_141ace450(param_1 + 0xb0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xc0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xb8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xb0);
  FUN_141ace450(param_1 + 0x88);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x98);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x90);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x88);
  FUN_141ace450(param_1 + 0x60);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x70);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x60);
  FUN_141ace450(param_1 + 0x38);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x48);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x40);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x38);
  FUN_141edd2d0(param_1);
  return;
}



// FUNCTION 141afbd90 FUN_141afbd90 body=246 status=ok
// SIG undefined FUN_141afbd90(void)

void FUN_141afbd90(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 local_res8;
  
  if (*(char *)*param_1 == '\0') {
    *(char *)*param_1 = '\x01';
    if (*(char *)(param_1 + 1) != '\0') {
      FUN_141d9ed20(param_1[2],param_1[3],param_1[4],param_1[5],param_1[6]);
      FUN_141da2540(param_1[2],param_1[6]);
      TBaseMulticastDelegate<void>::Broadcast(DAT_146b17150 + 0x9b8);
      uVar1 = FUN_141ee2d40();
      FUN_141edffd0(uVar1);
      uVar1 = FUN_141ee2ba0();
      FUN_141edfcb0(uVar1);
      uVar1 = FUN_141ee2c80();
      FUN_141edfd60(uVar1);
      plVar2 = (longlong *)FTaskGraphInterface::Get();
      (**(code **)(*plVar2 + 0x30))(plVar2,DAT_1464a8214);
    }
    if ((*(char *)(param_1 + 7) != '\0') && (*(char *)((longlong)param_1 + 0x39) != '\0')) {
      FRHICommandListImmediate::SetCurrentStat(param_1[3],local_res8);
      plVar2 = *(longlong **)(*(longlong *)(param_1[2] + 8) + 0x18);
      (**(code **)(*plVar2 + 0x40))(plVar2,param_1[3],*(longlong *)(param_1[2] + 0xc0) + 0x1cc0);
      plVar2 = (longlong *)FTaskGraphInterface::Get();
                    /* WARNING: Could not recover jumptable at 0x000141afbe7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x30))(plVar2,DAT_1464a8214);
      return;
    }
  }
  return;
}



// FUNCTION 141afbe90 FUN_141afbe90 body=642 status=ok
// SIG undefined FUN_141afbe90(void)

void FUN_141afbe90(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined2 uVar6;
  ulonglong uVar7;
  uint *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  
  iVar11 = 0;
  puVar9 = (undefined8 *)
           ((longlong)*(int *)(*(longlong *)(*param_1 + 0x30) + (longlong)param_2 * 4) * 200 +
           *(longlong *)(*param_1 + 0x40));
  puVar8 = (uint *)*puVar9;
  lVar14 = (longlong)*(int *)(puVar9 + 1);
  lVar2 = param_1[4];
  if (0 < lVar14) {
    lVar10 = 0;
    do {
      uVar5 = *puVar8;
      if (lVar2 == 0) {
        lVar13 = *(longlong *)(*(longlong *)param_1[2] + 0x10);
        if (lVar13 == 0) {
          lVar13 = *(longlong *)param_1[2];
        }
        if ((*(uint *)(lVar13 + ((longlong)(int)uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0)
        goto LAB_141afbfa0;
      }
      else {
        uVar12 = 1 << ((byte)uVar5 & 0x1f);
        lVar13 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x10);
        if (lVar13 == 0) {
          lVar13 = *(longlong *)(lVar2 + 0x10);
        }
        lVar1 = ((longlong)(int)uVar5 >> 5) * 4;
        if ((*(uint *)(lVar13 + lVar1) & uVar12) == 0) {
          lVar13 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x10);
          if (lVar13 == 0) {
            lVar13 = *(longlong *)(lVar2 + 0x18);
          }
          if ((*(uint *)(lVar13 + lVar1) & uVar12) == 0) goto LAB_141afc0b4;
        }
LAB_141afbfa0:
        lVar13 = *(longlong *)(lVar10 + 8 + puVar9[2]);
        if ((*(uint *)(lVar13 + 0x8c) & 0x2000000) == 0) {
          iVar11 = iVar11 + *(int *)(lVar13 + 0x80);
        }
        else {
          lVar13 = (longlong)*(int *)(lVar13 + 0xcc);
          if (lVar2 == 0) {
            uVar7 = *(ulonglong *)(**(longlong **)param_1[3] + lVar13 * 8);
            uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
            uVar7 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333);
            iVar11 = iVar11 + (uint)(byte)(((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) *
                                           0x101010101010101 >> 0x38);
          }
          else {
            uVar7 = *(ulonglong *)(**(longlong **)(lVar2 + 0x20) + lVar13 * 8);
            uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
            uVar4 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333);
            uVar7 = *(ulonglong *)(**(longlong **)(lVar2 + 0x28) + lVar13 * 8);
            uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
            uVar7 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333);
            uVar5 = (uint)(byte)(((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                0x38);
            bVar3 = (byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
            if (uVar5 < bVar3) {
              uVar5 = (uint)bVar3;
            }
            iVar11 = iVar11 + uVar5;
          }
        }
      }
LAB_141afc0b4:
      lVar10 = lVar10 + 0x38;
      puVar8 = puVar8 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    if (iVar11 != 0) {
      uVar6 = 0xffff;
      if (iVar11 < 0x10000) {
        uVar6 = (short)iVar11;
      }
      *(undefined2 *)(*(longlong *)param_1[1] + (longlong)param_2 * 2) = uVar6;
    }
  }
  *(int *)(puVar9 + 0x17) = iVar11;
  return;
}



// FUNCTION 141afc120 `scalar_deleting_destructor' body=100 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGraphTask<`FScene::AddExponentialHeightFog'::`2'::EURCMacro_FAddFogCommand>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__144dd56f8;
  if (param_1[0x18] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x18] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 141afc190 `scalar_deleting_destructor' body=100 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGraphTask<`FScene::AddExponentialHeightFog'::`2'::EURCMacro_FAddFogCommand>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__144dd56d0;
  if (param_1[0x18] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x18] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 141afc200 FUN_141afc200 body=97 status=ok
// SIG undefined FUN_141afc200(void)

undefined8 * FUN_141afc200(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144dd55a8;
  if (param_1[0xd] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xd] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 141afc270 FUN_141afc270 body=91 status=ok
// SIG undefined FUN_141afc270(void)

longlong FUN_141afc270(longlong param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x2f8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x2f0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x2e8);
  FUN_141d5b7a0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x300);
  }
  return param_1;
}



// FUNCTION 141afc2d0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPrePassParallelCommandListSet::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FPrePassParallelCommandListSet();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 141afc310 `scalar_deleting_destructor' body=117 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FRCPassPostProcessPassThrough::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144dca250;
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  if ((longlong *)param_1[0xe] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xe] + 0x30))();
  }
  *param_1 = &PTR_FUN_144dc9f20;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 141afc390 FUN_141afc390 body=66 status=ok
// SIG undefined FUN_141afc390(void)

undefined8 * FUN_141afc390(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144dd5318;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 141afc3e0 `scalar_deleting_destructor' body=75 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FRenderTargetTemp::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 2);
  *param_1 = &PTR_FUN_144dd5318;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141afc430 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dd5988;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141afc480 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dd5678;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141afc4d0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dd58c8;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141afc520 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dd5888;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141afc570 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dd5848;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141afc5c0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dd5808;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141afc610 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dd57c8;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141afc660 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dd5788;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141afc6b0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dd5748;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141afc700 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dd5708;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141afc750 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dd5908;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141afc7a0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dd55f8;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141afc7f0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dd5638;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141afc840 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dd55b8;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141afc890 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dd59d8;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141afc8e0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dd5948;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141afc930 FUN_141afc930 body=953 status=ok
// SIG undefined FUN_141afc930(void)

void FUN_141afc930(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  void *_Src;
  undefined4 *puVar2;
  float fVar3;
  byte bVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  int local_158 [2];
  longlong local_150 [5];
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined1 local_68 [48];
  
  TSet<TStaticMeshDrawList<FDepthDrawingPolicy>::FDrawingPolicyLink,TStaticMeshDrawList<FDepthDrawingPolicy>::FDrawingPolicyKeyFuncs,FDefaultSetAllocator>
  ::FindId(param_1 + 0x40,local_158,param_4);
  iVar10 = 0;
  if ((local_158[0] == -1) ||
     (plVar13 = (longlong *)((longlong)local_158[0] * 0xf0 + *(longlong *)(param_1 + 0x40)),
     plVar13 == (longlong *)0x0)) {
    local_150[4] = *param_4;
    uStack_128 = param_4[1];
    local_120 = param_4[2];
    uStack_118 = param_4[3];
    local_150[0] = 0;
    local_150[1] = 0;
    local_110 = param_4[4];
    uStack_108 = param_4[5];
    local_150[2] = 0;
    local_150[3] = 0;
    local_100 = param_4[6];
    uStack_f8 = param_4[7];
    local_90 = param_5;
    local_7c = 0xffffffff;
    local_f0 = param_4[8];
    uStack_e8 = param_4[9];
    local_70 = 0;
    local_e0 = param_4[10];
    uStack_d8 = param_4[0xb];
    local_d0 = param_4[0xc];
    uStack_c8 = param_4[0xd];
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_78 = param_1;
    puVar11 = (undefined8 *)FUN_141b08340(local_150 + 4,local_68);
    local_c0 = *puVar11;
    uStack_b8 = puVar11[1];
    local_b0 = puVar11[2];
    uStack_a8 = puVar11[3];
    local_a0 = puVar11[4];
    uStack_98 = puVar11[5];
    FUN_141ae75b0(param_1 + 0x40,local_158,local_150,0);
    TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
    ::
    ~TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
              (local_150 + 2);
    if (local_150[0] != 0) {
      FMemory::Free();
    }
    plVar13 = (longlong *)((longlong)local_158[0] * 0xf0 + *(longlong *)(param_1 + 0x40));
    *(int *)((longlong)plVar13 + 0xd4) = local_158[0];
    DAT_146a81050 =
         (ulonglong)(uint)(*(int *)((longlong)plVar13 + 0x1c) * 0x38) + 0xe8 +
         (ulonglong)(uint)(*(int *)((longlong)plVar13 + 0xc) << 2) + DAT_146a81050;
    iVar15 = *(int *)(param_1 + 0x38) + -1;
    if (0 < iVar15) {
      lVar14 = *(longlong *)(param_1 + 0x40);
      iVar16 = 0;
      do {
        iVar10 = (iVar15 + iVar16) / 2;
        lVar12 = (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar10 * 4) * 0xf0;
        uVar6 = *(ulonglong *)(lVar12 + 0x78 + lVar14);
        if (uVar6 < (ulonglong)plVar13[0xf]) {
LAB_141afcb4a:
          iVar9 = iVar15;
          iVar16 = iVar10 + 1;
        }
        else {
          iVar9 = iVar10;
          if (uVar6 == plVar13[0xf]) {
            uVar6 = *(ulonglong *)(lVar12 + 0x60 + lVar14);
            if (uVar6 < (ulonglong)plVar13[0xc]) goto LAB_141afcb4a;
            if (uVar6 == plVar13[0xc]) {
              uVar6 = *(ulonglong *)(lVar12 + 0x68 + lVar14);
              if (uVar6 < (ulonglong)plVar13[0xd]) goto LAB_141afcb4a;
              if (uVar6 == plVar13[0xd]) {
                bVar4 = *(byte *)(lVar12 + 0x58 + lVar14);
                if (bVar4 < *(byte *)(plVar13 + 0xb)) goto LAB_141afcb4a;
                if (bVar4 == *(byte *)(plVar13 + 0xb)) {
                  uVar6 = *(ulonglong *)(lVar12 + 0x80 + lVar14);
                  if (uVar6 < (ulonglong)plVar13[0x10]) goto LAB_141afcb4a;
                  if (uVar6 == plVar13[0x10]) {
                    uVar6 = *(ulonglong *)(lVar12 + 0x28 + lVar14);
                    if (uVar6 < (ulonglong)plVar13[5]) goto LAB_141afcb4a;
                    if (uVar6 == plVar13[5]) {
                      uVar6 = *(ulonglong *)(lVar12 + 0x30 + lVar14);
                      if (uVar6 < (ulonglong)plVar13[6]) goto LAB_141afcb4a;
                      if (uVar6 == plVar13[6]) {
                        fVar3 = *(float *)(lVar12 + 0x88 + lVar14);
                        if (fVar3 < *(float *)(plVar13 + 0x11)) goto LAB_141afcb4a;
                        if (fVar3 == *(float *)(plVar13 + 0x11)) break;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        iVar10 = iVar16;
        iVar15 = iVar9;
        iVar16 = iVar10;
      } while (iVar10 < iVar15);
    }
    plVar1 = (longlong *)(param_1 + 0x30);
    iVar15 = *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0x38) = iVar15 + 1;
    if (*(int *)(param_1 + 0x3c) < iVar15 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar15);
    }
    _Src = (void *)(*plVar1 + (longlong)iVar10 * 4);
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)_Src + 4),_Src,(longlong)(iVar15 - iVar10) << 2);
    *(int *)(*plVar1 + (longlong)iVar10 * 4) = local_158[0];
  }
  iVar10 = (int)plVar13[3];
  iVar15 = *(int *)((longlong)plVar13 + 0xc);
  iVar16 = *(int *)((longlong)plVar13 + 0x1c);
  *(int *)(plVar13 + 3) = iVar10 + 1;
  if (*(int *)((longlong)plVar13 + 0x1c) < iVar10 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar13 + 2,iVar10);
  }
  lVar14 = (longlong)iVar10 * 0x38 + plVar13[2];
  if (lVar14 == 0) {
    lVar14 = 0;
  }
  else {
    uVar5 = *(undefined4 *)((longlong)plVar13 + 0xd4);
    *(longlong *)(lVar14 + 8) = param_2;
    puVar11 = (undefined8 *)operator_new(0x20);
    if (puVar11 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar11 + 1) = 0;
      *puVar11 = &PTR_FUN_144dd56e0;
      puVar11[2] = param_1;
      *(undefined4 *)(puVar11 + 3) = uVar5;
      *(int *)((longlong)puVar11 + 0x1c) = iVar10;
    }
    *(undefined8 **)(lVar14 + 0x30) = puVar11;
    if (puVar11 != (undefined8 *)0x0) {
      *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
    }
    lVar12 = *(longlong *)(*(longlong *)(*(longlong *)(lVar14 + 8) + 0xc0) + 8);
    uVar5 = *(undefined4 *)(lVar12 + 0xc4);
    uVar7 = *(undefined4 *)(lVar12 + 200);
    uVar8 = *(undefined4 *)(lVar12 + 0xcc);
    *(undefined4 *)(lVar14 + 0x10) = *(undefined4 *)(lVar12 + 0xc0);
    *(undefined4 *)(lVar14 + 0x14) = uVar5;
    *(undefined4 *)(lVar14 + 0x18) = uVar7;
    *(undefined4 *)(lVar14 + 0x1c) = uVar8;
    *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)(lVar12 + 0xd0);
    *(undefined4 *)(lVar14 + 0x28) = *(undefined4 *)(lVar12 + 0xd8);
    *(byte *)(lVar14 + 0x2c) =
         (byte)((uint)*(undefined4 *)
                       (*(longlong *)(*(longlong *)(*(longlong *)(lVar14 + 8) + 0xc0) + 8) + 0x18)
               >> 0x1b) & 1;
  }
  iVar10 = (int)plVar13[1];
  *(int *)(plVar13 + 1) = iVar10 + 1;
  if (*(int *)((longlong)plVar13 + 0xc) < iVar10 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar13,iVar10);
  }
  puVar2 = (undefined4 *)(*plVar13 + (longlong)iVar10 * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *(undefined4 *)(param_2 + 200);
  }
  DAT_146a81050 =
       DAT_146a81050 +
       ((((ulonglong)(uint)(*(int *)((longlong)plVar13 + 0x1c) * 0x38) +
         (ulonglong)(uint)(*(int *)((longlong)plVar13 + 0xc) << 2)) - (ulonglong)(uint)(iVar15 << 2)
        ) - (ulonglong)(uint)(iVar16 * 0x38));
  FUN_141d6b230(param_2,*(undefined8 *)(lVar14 + 0x30));
  return;
}



// FUNCTION 141afccf0 FUN_141afccf0 body=989 status=ok
// SIG undefined FUN_141afccf0(void)

void FUN_141afccf0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  void *_Src;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  undefined8 local_res8;
  longlong local_res10;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  longlong local_150 [5];
  longlong lStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  longlong local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 local_a4;
  longlong local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  local_res10 = param_2;
  TSet<TStaticMeshDrawList<FPositionOnlyDepthDrawingPolicy>::FDrawingPolicyLink,TStaticMeshDrawList<FPositionOnlyDepthDrawingPolicy>::FDrawingPolicyKeyFuncs,FDefaultSetAllocator>
  ::FindId(param_1 + 0x40,&local_res8,param_4);
  iVar9 = 0;
  if (((int)local_res8 == -1) ||
     (plVar12 = (longlong *)((longlong)(int)local_res8 * 200 + *(longlong *)(param_1 + 0x40)),
     plVar12 == (longlong *)0x0)) {
    local_150[4] = *param_4;
    lStack_128 = param_4[1];
    local_110 = param_4[4];
    uStack_108 = param_4[5];
    local_b8 = param_5;
    local_120 = param_4[2];
    uStack_118 = param_4[3];
    local_150[0] = 0;
    local_150[1] = 0;
    local_150[2] = 0;
    local_f0 = param_4[8];
    uVar4 = *(undefined8 *)(lStack_128 + 0x650);
    local_150[3] = 0;
    local_100 = *(undefined4 *)(param_4 + 6);
    uStack_fc = *(undefined4 *)((longlong)param_4 + 0x34);
    uStack_f8 = *(undefined4 *)(param_4 + 7);
    uStack_f4 = *(undefined4 *)((longlong)param_4 + 0x3c);
    lVar13 = *(longlong *)(local_f0 + 0x48);
    local_a4 = 0xffffffff;
    local_98 = 0;
    local_158 = 0;
    local_160 = 0;
    local_168 = 0;
    local_res8 = 0;
    local_a0 = param_1;
    if (*(char *)(lVar13 + 0x28) == '\0') {
      FUN_1419f3850(lVar13);
    }
    uStack_88 = *(undefined8 *)(lVar13 + 0x38);
    local_90 = uVar4;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_168);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_160);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
    local_e8 = (undefined4)local_90;
    uStack_e4 = local_90._4_4_;
    uStack_e0 = (undefined4)uStack_88;
    uStack_dc = uStack_88._4_4_;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    FUN_141ae7810(param_1 + 0x40,&local_res8,local_150,0);
    TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
    ::
    ~TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
              (local_150 + 2);
    if (local_150[0] != 0) {
      FMemory::Free();
    }
    iVar2 = (int)local_res8;
    plVar12 = (longlong *)((longlong)(int)local_res8 * 200 + *(longlong *)(param_1 + 0x40));
    *(int *)((longlong)plVar12 + 0xac) = (int)local_res8;
    DAT_146a81050 =
         (ulonglong)(uint)(*(int *)((longlong)plVar12 + 0x1c) * 0x38) + 0xc0 +
         (ulonglong)(uint)(*(int *)((longlong)plVar12 + 0xc) << 2) + DAT_146a81050;
    iVar14 = *(int *)(param_1 + 0x38) + -1;
    if (0 < iVar14) {
      lVar13 = *(longlong *)(param_1 + 0x40);
      iVar15 = 0;
      do {
        iVar9 = (iVar14 + iVar15) / 2;
        lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar9 * 4) * 200;
        uVar5 = *(ulonglong *)(lVar11 + 0x60 + lVar13);
        if (uVar5 < (ulonglong)plVar12[0xc]) {
LAB_141afcf1f:
          iVar8 = iVar14;
          iVar15 = iVar9 + 1;
        }
        else {
          iVar8 = iVar9;
          if (uVar5 == plVar12[0xc]) {
            uVar5 = *(ulonglong *)(lVar11 + 0x28 + lVar13);
            if (uVar5 < (ulonglong)plVar12[5]) goto LAB_141afcf1f;
            if (uVar5 == plVar12[5]) {
              uVar5 = *(ulonglong *)(lVar11 + 0x30 + lVar13);
              if (uVar5 < (ulonglong)plVar12[6]) goto LAB_141afcf1f;
              if (uVar5 <= (ulonglong)plVar12[6]) break;
            }
          }
        }
        iVar9 = iVar15;
        iVar14 = iVar8;
        iVar15 = iVar9;
      } while (iVar9 < iVar14);
    }
    iVar14 = *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0x38) = iVar14 + 1;
    if (*(int *)(param_1 + 0x3c) < iVar14 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x30,iVar14);
    }
    _Src = (void *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar9 * 4);
    _guard_xfg_dispatch_icall_nop((void *)((longlong)_Src + 4),_Src,(longlong)(iVar14 - iVar9) << 2)
    ;
    *(int *)((longlong)iVar9 * 4 + *(longlong *)(param_1 + 0x30)) = iVar2;
  }
  iVar9 = (int)plVar12[3];
  iVar2 = *(int *)((longlong)plVar12 + 0xc);
  iVar14 = *(int *)((longlong)plVar12 + 0x1c);
  *(int *)(plVar12 + 3) = iVar9 + 1;
  if (*(int *)((longlong)plVar12 + 0x1c) < iVar9 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar12 + 2,iVar9);
  }
  lVar13 = (longlong)iVar9 * 0x38 + plVar12[2];
  if (lVar13 == 0) {
    lVar13 = 0;
  }
  else {
    uVar3 = *(undefined4 *)((longlong)plVar12 + 0xac);
    *(longlong *)(lVar13 + 8) = local_res10;
    puVar10 = (undefined8 *)operator_new(0x20);
    if (puVar10 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar10 + 1) = 0;
      *puVar10 = &PTR_FUN_144dd56b8;
      puVar10[2] = param_1;
      *(undefined4 *)(puVar10 + 3) = uVar3;
      *(int *)((longlong)puVar10 + 0x1c) = iVar9;
    }
    *(undefined8 **)(lVar13 + 0x30) = puVar10;
    if (puVar10 != (undefined8 *)0x0) {
      *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
    }
    lVar11 = *(longlong *)(*(longlong *)(*(longlong *)(lVar13 + 8) + 0xc0) + 8);
    uVar3 = *(undefined4 *)(lVar11 + 0xc4);
    uVar6 = *(undefined4 *)(lVar11 + 200);
    uVar7 = *(undefined4 *)(lVar11 + 0xcc);
    *(undefined4 *)(lVar13 + 0x10) = *(undefined4 *)(lVar11 + 0xc0);
    *(undefined4 *)(lVar13 + 0x14) = uVar3;
    *(undefined4 *)(lVar13 + 0x18) = uVar6;
    *(undefined4 *)(lVar13 + 0x1c) = uVar7;
    *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)(lVar11 + 0xd0);
    *(undefined4 *)(lVar13 + 0x28) = *(undefined4 *)(lVar11 + 0xd8);
    *(byte *)(lVar13 + 0x2c) =
         (byte)((uint)*(undefined4 *)
                       (*(longlong *)(*(longlong *)(*(longlong *)(lVar13 + 8) + 0xc0) + 8) + 0x18)
               >> 0x1b) & 1;
  }
  iVar9 = (int)plVar12[1];
  *(int *)(plVar12 + 1) = iVar9 + 1;
  if (*(int *)((longlong)plVar12 + 0xc) < iVar9 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar12,iVar9);
  }
  puVar1 = (undefined4 *)(*plVar12 + (longlong)iVar9 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)(local_res10 + 200);
  }
  DAT_146a81050 =
       DAT_146a81050 +
       ((((ulonglong)(uint)(*(int *)((longlong)plVar12 + 0xc) << 2) +
         (ulonglong)(uint)(*(int *)((longlong)plVar12 + 0x1c) * 0x38)) -
        (ulonglong)(uint)(iVar2 << 2)) - (ulonglong)(uint)(iVar14 * 0x38));
  FUN_141d6b230(local_res10,*(undefined8 *)(lVar13 + 0x30));
  return;
}



// FUNCTION 141afd0d0 FUN_141afd0d0 body=707 status=ok
// SIG undefined FUN_141afd0d0(void)

void FUN_141afd0d0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *local_res8;
  uint local_res10;
  uint uStackX_14;
  undefined1 local_res18 [8];
  undefined4 uVar7;
  uint *puVar6;
  undefined1 local_98 [112];
  
  plVar5 = *(longlong **)(param_2 + 0xa8);
  local_res8 = (longlong *)0x0;
  (**(code **)(*plVar5 + 0x40))(plVar5,*(undefined4 *)(param_1 + 8),local_res18,&local_res8);
  plVar2 = local_res8;
  (**(code **)(*local_res8 + 0x1e8))(local_res8);
  uVar1 = *(undefined4 *)(param_1 + 8);
  cVar3 = (**(code **)(*plVar2 + 0x310))(plVar2);
  if (cVar3 != '\0') {
    return;
  }
  uVar4 = *(uint *)(param_2 + 0x8c);
  uStackX_14 = uVar4 >> 0xc & 0x3f;
  local_res10 = ((uVar4 >> 0x13 & 0x80 | uVar4 & 0x100) >> 2 | uVar4 & 0x10) >> 4 | uVar4 & 8;
  cVar3 = (**(code **)(*plVar2 + 0x28))(plVar2);
  _local_res10 = CONCAT44(uStackX_14,local_res10 | cVar3 != '\0');
  cVar3 = (**(code **)(*plVar2 + 0x88))(plVar2);
  if (((cVar3 == '\0') || (uVar4 = (**(code **)(*plVar2 + 0x1e8))(plVar2), 1 < uVar4)) ||
     (cVar3 = (**(code **)(*plVar2 + 200))(plVar2), cVar3 != '\0')) {
    uVar4 = 0x10;
  }
  else {
    uVar4 = 0;
  }
  local_res10 = local_res10 | uVar4;
  cVar3 = (**(code **)(*plVar2 + 0x90))();
  local_res10 = local_res10 | -(uint)(cVar3 != '\0') & 0x20;
  cVar3 = FUN_141b196e0(plVar2,0);
  if ((cVar3 == '\0') || (cVar3 = FUN_14259cbf0(plVar2), cVar3 != '\0')) {
    puVar6 = &local_res10;
    FUN_141afa440(local_98,*(undefined8 *)(param_2 + 0xa0),plVar5,plVar2,puVar6,uVar1,0);
    uVar7 = (undefined4)((ulonglong)puVar6 >> 0x20);
    param_1 = param_1 + 0x1a0;
  }
  else {
    cVar3 = (**(code **)(**(longlong **)(param_2 + 0xa0) + 0x50))();
    if ((cVar3 != '\0') && (cVar3 = FUN_14259cbc0(plVar2), cVar3 == '\0')) {
      cVar3 = (**(code **)(*plVar2 + 0xb8))();
      _local_res10 = CONCAT44(uStackX_14,local_res10 | -(uint)(cVar3 != '\0') & 4);
      plVar5 = (longlong *)UMaterial::GetDefaultMaterial(0);
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x2a8))(plVar5,0,0);
      local_res8 = (longlong *)0x0;
      (**(code **)(*plVar5 + 0x40))(plVar5,*(undefined4 *)(param_1 + 8),local_res18,&local_res8);
      FUN_141afa9e0(local_98,*(undefined8 *)(param_2 + 0xa0),plVar5,local_res8,&local_res10);
      FUN_141afccf0(param_1 + 0x70,param_2,&local_res8,local_98,uVar1);
      return;
    }
    cVar3 = FUN_14259cbc0(plVar2);
    if (cVar3 == '\0') {
      plVar5 = (longlong *)UMaterial::GetDefaultMaterial(0);
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x2a8))(plVar5,0,0);
    }
    local_res8 = (longlong *)0x0;
    (**(code **)(*plVar5 + 0x40))(plVar5,*(undefined4 *)(param_1 + 8),local_res18,&local_res8);
    puVar6 = &local_res10;
    FUN_141afa440(local_98,*(undefined8 *)(param_2 + 0xa0),plVar5,local_res8,puVar6,uVar1,0);
    uVar7 = (undefined4)((ulonglong)puVar6 >> 0x20);
    param_1 = param_1 + 0x108;
  }
  FUN_141afc930(param_1,param_2,&local_res8,local_98,CONCAT44(uVar7,uVar1));
  return;
}



// FUNCTION 141afd3a0 FUN_141afd3a0 body=199 status=ok
// SIG undefined FUN_141afd3a0(void)

void FUN_141afd3a0(longlong param_1,undefined8 param_2,longlong *param_3,byte param_4,byte param_5)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  char cVar6;
  
  uVar5 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (param_3 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_3 + 4) >> 6;
  }
  if (param_3 != (longlong *)0x0) {
    uVar2 = (**(code **)(*param_3 + 0x28))(param_3);
    if ((uVar2 & 2) != 0) {
      uVar5 = 8;
    }
    if (param_3 != (longlong *)0x0) {
      bVar4 = ~*(byte *)((longlong)param_3 + 0x2c) & 1 | *(byte *)((longlong)param_3 + 0x2c) & 6;
      goto LAB_141afd41e;
    }
  }
  bVar4 = 0;
LAB_141afd41e:
  cVar6 = '\0';
  if (param_3 != (longlong *)0x0) {
    cVar6 = (char)(*(uint *)(param_3 + 3) >> 4);
  }
  uVar3 = FUN_141b09410();
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(uint *)(param_1 + 0x28) =
       (uint)(byte)(cVar6 << 7 | bVar4 << 4 | (param_4 ^ 1) * '\x02' | param_5) | (uVar1 & 1) * 4 |
       uVar5;
  return;
}



// FUNCTION 141afd470 FUN_141afd470 body=204 status=ok
// SIG undefined FUN_141afd470(void)

void FUN_141afd470(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  float fVar5;
  
  FUN_141afd3a0(param_1,param_2,*(undefined8 *)(*(longlong *)(param_3 + 0xc0) + 8),param_5,param_6);
  if ((*(uint *)(param_3 + 0x8c) & 0x4000000) != 0) {
    iVar1 = *(int *)(param_3 + 200);
    uVar3 = 1 << ((byte)iVar1 & 0x1f);
    lVar4 = (longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5);
    lVar2 = *(longlong *)(param_2 + 0x1bd0);
    if (*(longlong *)(param_2 + 0x1bd0) == 0) {
      lVar2 = param_2 + 0x1bc0;
    }
    if ((*(uint *)(lVar2 + lVar4 * 4) & uVar3) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x1bf0);
      if (*(longlong *)(param_2 + 0x1bf0) == 0) {
        lVar2 = param_2 + 0x1be0;
      }
      if ((*(uint *)(lVar2 + lVar4 * 4) & uVar3) == 0) {
        return;
      }
      fVar5 = (float)FUN_14274fcb0(param_2);
      fVar5 = fVar5 - 1.0;
    }
    else {
      fVar5 = (float)FUN_14274fcb0(param_2);
    }
    *(float *)(param_1 + 0x30) = fVar5;
  }
  return;
}



// FUNCTION 141afd540 Bind body=129 status=ok
// SIG undefined Bind(void)

void FAOParameters::Bind(longlong param_1,undefined8 param_2)

{
  FShaderParameter::Bind(param_1,param_2,L"AOObjectMaxDistance",0);
  FShaderParameter::Bind(param_1 + 6,param_2,L"AOStepScale",0);
  FShaderParameter::Bind(param_1 + 0xc,param_2,L"AOStepExponentScale",0);
  FShaderParameter::Bind(param_1 + 0x12,param_2,L"AOMaxViewDistance",0);
  FShaderParameter::Bind(param_1 + 0x18,param_2,L"AOGlobalMaxOcclusionDistance",0);
  return;
}



// FUNCTION 141afd5d0 FUN_141afd5d0 body=1213 status=ok
// SIG undefined FUN_141afd5d0(void)

undefined8 FUN_141afd5d0(longlong param_1,longlong param_2,int param_3,longlong *param_4)

{
  undefined8 *puVar1;
  float fVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  char local_res10 [8];
  int local_res18;
  longlong *local_res20;
  longlong *local_158;
  longlong *local_150;
  longlong *plStack_148;
  longlong local_140;
  float fStack_138;
  float fStack_134;
  uint local_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [168];
  
  local_res18 = param_3;
  if ((param_4 != (longlong *)0x0) &&
     (iVar6 = *(int *)(param_2 + 0x1dc0), *(undefined4 *)(param_4 + 1) = 0,
     *(int *)((longlong)param_4 + 0xc) != iVar6)) {
    FUN_141b15710(param_4);
  }
  fVar2 = *(float *)(DAT_146a0fd00 + 4);
  uVar5 = FUN_14274f980(param_2);
  plVar10 = *(longlong **)(param_2 + 0x1db8);
  plVar7 = plVar10 + *(int *)(param_2 + 0x1dc0);
  local_res10[0] = *(float *)(param_2 + 0x3cc) <= 1.0 && *(float *)(param_2 + 0x3cc) != 1.0;
  local_res20 = plVar7;
  if (plVar10 != plVar7) {
    do {
      lVar9 = *plVar10;
      if ((*(longlong *)(lVar9 + 0x3a8) != 0) &&
         (cVar4 = FUN_1417904d0(*(longlong *)(lVar9 + 0x3a8),1), plVar7 = local_res20, cVar4 != '\0'
         )) {
        cVar4 = FUN_142486ab0(lVar9,param_2);
        uVar8 = *(undefined8 *)(lVar9 + 0x80);
        uStack_120 = *(undefined8 *)(lVar9 + 0x88);
        local_118 = *(undefined8 *)(lVar9 + 0x90);
        uStack_110 = *(undefined8 *)(lVar9 + 0x98);
        local_108 = *(float *)(lVar9 + 0xa0);
        fStack_104 = *(float *)(lVar9 + 0xa4);
        fStack_100 = *(float *)(lVar9 + 0xa8);
        uStack_fc = *(undefined4 *)(lVar9 + 0xac);
        local_f8 = *(undefined8 *)(lVar9 + 0xb0);
        uStack_f0 = *(undefined8 *)(lVar9 + 0xb8);
        plVar7 = local_res20;
        local_128 = uVar8;
        if (cVar4 != '\0') {
          fVar14 = 1.0;
          local_128._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
          local_118._4_4_ = (float)((ulonglong)local_118 >> 0x20);
          fStack_138 = 1.0;
          local_128._0_4_ = (float)uVar8;
          fVar16 = local_118._4_4_ * local_118._4_4_ + (float)local_118 * (float)local_118 +
                   (float)uStack_110 * (float)uStack_110;
          fVar17 = local_128._4_4_ * local_128._4_4_ + (float)local_128 * (float)local_128 +
                   (float)uStack_120 * (float)uStack_120;
          fVar15 = fStack_104 * fStack_104 + local_108 * local_108 + fStack_100 * fStack_100;
          fStack_134 = SQRT(fVar17 + fVar16 + fVar15);
          local_140 = lVar9;
          local_150 = (longlong *)
                      (**(code **)(**(longlong **)(lVar9 + 0x3a8) + 0x2a8))
                                (*(longlong **)(lVar9 + 0x3a8),*(undefined1 *)(lVar9 + 0x3b2),0);
          local_158 = (longlong *)0x0;
          (**(code **)(*local_150 + 0x40))
                    (local_150,*(undefined4 *)(param_1 + 8),local_e8,&local_158);
          plVar7 = local_158;
          plStack_148 = local_158;
          cVar4 = (**(code **)(*local_158 + 0x2c8))(local_158);
          uStack_12c = CONCAT31(uStack_12c._1_3_,cVar4);
          local_130 = (**(code **)(*plVar7 + 0x2b8))(plVar7);
          if (cVar4 == '\0') {
            if (local_130 == 4) {
              local_130 = 7;
            }
            else if (local_130 == 9) {
              local_130 = 10;
            }
          }
          if (((0x1d < uVar5) || ((0x25e2cf88U >> (uVar5 & 0x1f) & 1) == 0)) ||
             ((plVar7 = local_res20, local_130 < 0xe && ((0x200bU >> (local_130 & 0x1f) & 1) != 0)))
             ) {
            if ((local_res10[0] != '\0') &&
               (fVar13 = *(float *)(*(longlong *)(lVar9 + 0x3a0) + 0x6fc), fVar13 != 0.0)) {
              if (fVar15 <= fVar16) {
                fVar15 = fVar16;
              }
              fVar16 = *(float *)(param_2 + 0x8dc) - (float)local_f8;
              fVar11 = *(float *)(param_2 + 0x8e0) - local_f8._4_4_;
              fVar12 = 1.0 / *(float *)(param_2 + 0x390);
              if (fVar15 <= fVar17) {
                fVar15 = fVar17;
              }
              fVar17 = *(float *)(param_2 + 0x8e4) - (float)uStack_f0;
              fVar13 = ((fVar12 + fVar12) /
                       (float)(*(int *)(param_2 + 0x1aa8) - *(int *)(param_2 + 0x1aa0))) * 600.0 *
                       fVar13;
              fVar15 = ((fVar2 / SQRT(fVar11 * fVar11 + fVar16 * fVar16 + fVar17 * fVar17)) *
                        SQRT(fVar15) - fVar13) * (2.0 / fVar13);
              if (fVar15 <= 1.0) {
                fVar14 = fVar15;
                fStack_138 = fVar15;
              }
            }
            iVar6 = FUN_141aff430(uVar5);
            plVar7 = local_res20;
            if ((local_res18 == iVar6) && (0.0 < fVar14)) {
              if (param_4 == (longlong *)0x0) goto LAB_141afda1e;
              iVar6 = (int)param_4[1];
              lVar9 = (longlong)iVar6;
              *(int *)(param_4 + 1) = iVar6 + 1;
              if (*(int *)((longlong)param_4 + 0xc) < iVar6 + 1) {
                TArray<FTransientDecalRenderData,TMemStackAllocator<0>_>::ResizeGrow(param_4,iVar6);
              }
              lVar3 = *param_4;
              puVar1 = (undefined8 *)(lVar3 + lVar9 * 0x28);
              *puVar1 = local_150;
              puVar1[1] = plStack_148;
              plVar7 = (longlong *)(lVar3 + 0x10 + lVar9 * 0x28);
              *plVar7 = local_140;
              plVar7[1] = CONCAT44(fStack_134,fStack_138);
              *(ulonglong *)(lVar3 + 0x20 + lVar9 * 0x28) = CONCAT44(uStack_12c,local_130);
              plVar7 = local_res20;
            }
          }
        }
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar7);
  }
  if ((param_4 == (longlong *)0x0) || ((int)param_4[1] < 1)) {
    uVar8 = 0;
  }
  else {
    FUN_141ae8010(*param_4,(longlong)(int)param_4[1],local_res10[0],local_res10);
LAB_141afda1e:
    uVar8 = 1;
  }
  return uVar8;
}



// FUNCTION 141afdab0 FUN_141afdab0 body=1490 status=ok
// SIG undefined FUN_141afdab0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141afdab0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined1 auStack_1e8 [32];
  ulonglong local_1c8;
  undefined8 *local_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  int local_1b0;
  longlong *local_1a8;
  int *local_1a0;
  longlong local_198;
  undefined8 local_188;
  longlong *plStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  longlong *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined8 local_134;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  lVar8 = *(longlong *)(param_1 + 0xc0);
  plVar13 = (longlong *)0x0;
  local_1b0 = 0;
  local_c8 = *(undefined4 *)(lVar8 + 0xf30);
  uStack_c4 = *(undefined4 *)(lVar8 + 0xf34);
  uStack_c0 = *(undefined4 *)(lVar8 + 0xf38);
  local_1c0 = *(undefined8 **)(lVar8 + 0xf30);
  uStack_1b8 = *(undefined4 *)(lVar8 + 0xf38);
  local_b8 = 0x3f0000003f000000;
  uStack_b0 = 0x3f000000;
  local_a8 = 0;
  uStack_a0 = 0x3f80000000000000;
  local_88 = 0x3f80000000000000;
  uStack_80 = 0x3f8000003f800000;
  local_98 = 0;
  uStack_90 = 0;
  local_68 = _DAT_1468b5d78;
  uStack_64 = uRam00000001468b5d7c;
  uStack_60 = uRam00000001468b5d80;
  uStack_5c = uRam00000001468b5d84;
  local_58 = _DAT_1468b5d78;
  uStack_54 = uRam00000001468b5d7c;
  uStack_50 = uRam00000001468b5d80;
  uStack_4c = uRam00000001468b5d84;
  uStack_1b4 = 0x3f800000;
  uStack_bc = 0x3f800000;
  local_78 = 0x3f800000;
  uStack_74 = 0x3f800000;
  uStack_70 = 0x3f800000;
  uStack_6c = 0x3f800000;
  local_198 = param_1;
  uVar7 = FSceneRenderTargets::Get(param_2);
  iVar6 = FUN_141ce4f80(uVar7);
  local_1b0 = iVar6;
  lVar8 = FUN_1419ef210((&DAT_1464c9c48)[*(int *)(param_1 + 0x2a0)]);
  uStack_1b8 = 0;
  local_1c0 = (undefined8 *)&DAT_1469f93a0;
  plVar9 = (longlong *)(lVar8 + 0x38);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar9,&local_1c8,&local_1c0);
  plVar15 = plVar13;
  if ((int)local_1c8 != -1) {
    plVar15 = (longlong *)((longlong)(int)local_1c8 * 0x20 + *plVar9);
  }
  uStack_1b8 = 0;
  plVar12 = plVar15 + 2;
  if (plVar15 == (longlong *)0x0) {
    plVar12 = plVar13;
  }
  lVar8 = *plVar12;
  if (iVar6 == 5) {
    local_1c0 = (undefined8 *)&DAT_1469f9a30;
  }
  else if (iVar6 == 6) {
    local_1c0 = (undefined8 *)&DAT_1469f9b80;
  }
  else {
    local_1c0 = (undefined8 *)&DAT_1469f94f0;
  }
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar9,&local_1c8,&local_1c0);
  plVar15 = plVar13;
  if ((int)local_1c8 != -1) {
    plVar15 = (longlong *)((longlong)(int)local_1c8 * 0x20 + *plVar9);
  }
  plVar9 = plVar15 + 2;
  if (plVar15 == (longlong *)0x0) {
    plVar9 = plVar13;
  }
  plVar9 = (longlong *)*plVar9;
  local_188 = 0;
  plStack_180 = (longlong *)0x0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = (longlong *)0x0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_13c = 0x26;
  local_134 = 0;
  local_12c = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e4 = 0;
  local_dc = 0;
  local_d4 = 0;
  local_1a8 = plVar9;
  FUN_14049afe0(param_2,&local_188);
  uStack_150 = FUN_140985530();
  local_158 = FUN_1404a0ce0();
  local_148 = FUN_141abfb70();
  puVar10 = (undefined8 *)FUN_141ee3620();
  local_188 = *puVar10;
  if (lVar8 == 0) {
    local_1c8 = 0;
    plVar15 = (longlong *)0x1;
    plStack_180 = plVar13;
  }
  else {
    lVar8 = *(longlong *)(lVar8 + 0x48);
    if (*(char *)(lVar8 + 0x28) == '\0') {
      FUN_1419f3850(lVar8);
    }
    plStack_180 = *(longlong **)(lVar8 + 0x38);
    plVar15 = plVar13;
  }
  if (plVar15 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1c8);
  }
  bVar5 = false;
  if (plVar9 == (longlong *)0x0) {
    bVar5 = true;
    local_1c8 = 0;
    local_168 = plVar13;
  }
  else {
    lVar8 = plVar9[9];
    if (*(char *)(lVar8 + 0x28) == '\0') {
      FUN_1419f3850(lVar8);
    }
    local_168 = *(longlong **)(lVar8 + 0x40);
  }
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1c8);
  }
  local_13c = CONCAT44(local_13c._4_4_,1);
  FUN_141ed6ac0(param_2,&local_188,2,1);
  local_1c8 = local_1c8 & 0xffffffff00000000;
  if (0 < *(int *)(param_1 + 200)) {
    local_1a0 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38);
    do {
      lVar8 = *(longlong *)(param_1 + 0xc0);
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      uVar1 = *(undefined4 *)(lVar8 + 0x1aac + (longlong)plVar13);
      uVar2 = *(undefined4 *)(lVar8 + 0x1aa8 + (longlong)plVar13);
      uVar3 = *(undefined4 *)(lVar8 + 0x1aa4 + (longlong)plVar13);
      uVar4 = *(undefined4 *)(lVar8 + 0x1aa0 + (longlong)plVar13);
      puVar10 = puVar11 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar10 = puVar11 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar10;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar11;
      *(undefined8 **)(param_2 + 8) = puVar11 + 1;
      *(undefined4 *)((longlong)puVar11 + 0x14) = uVar3;
      puVar11[1] = 0;
      *puVar11 = &PTR_LAB_143f59420;
      *(undefined4 *)(puVar11 + 3) = 0;
      *(undefined4 *)(puVar11 + 2) = uVar4;
      *(undefined4 *)((longlong)puVar11 + 0x1c) = uVar2;
      *(undefined4 *)(puVar11 + 4) = uVar1;
      *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
      (**(code **)(*local_1a8 + 0x30))(local_1a8,param_2,&local_c8,local_1b0);
      if ((*local_1a0 < DAT_146a14e70) && (_Init_thread_header(&DAT_146a14e70), DAT_146a14e70 == -1)
         ) {
        _DAT_146a14e30 = 0x3f800000bf800000;
        uRam0000000146a14e38 = 0x3f80000000000000;
        _DAT_146a14e40 = 0x3f8000003f800000;
        uRam0000000146a14e48 = 0x3f80000000000000;
        _DAT_146a14e50 = 0xbf800000;
        uRam0000000146a14e54 = 0xbf800000;
        uRam0000000146a14e58 = 0;
        uRam0000000146a14e5c = 0x3f800000;
        _DAT_146a14e60 = 0x3f800000;
        uRam0000000146a14e64 = 0xbf800000;
        uRam0000000146a14e68 = 0;
        uRam0000000146a14e6c = 0x3f800000;
        _Init_thread_footer(&DAT_146a14e70);
      }
      local_1c0 = (undefined8 *)0x0;
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      puVar10 = puVar11 + 8;
      if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x50);
        puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
        puVar10 = puVar11 + 8;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar10;
      *(undefined8 **)(param_2 + 0x180) = puVar11;
      *(undefined4 *)(param_2 + 0x170) = 1;
      *(undefined4 *)(param_2 + 0x174) = 2;
      *(undefined4 *)(param_2 + 0x178) = 4;
      *(undefined4 *)(param_2 + 0x17c) = 0x10;
      uVar7 = uRam0000000146a14e38;
      *puVar11 = _DAT_146a14e30;
      puVar11[1] = uVar7;
      uVar7 = uRam0000000146a14e48;
      puVar11[2] = _DAT_146a14e40;
      puVar11[3] = uVar7;
      uVar3 = uRam0000000146a14e5c;
      uVar2 = uRam0000000146a14e58;
      uVar1 = uRam0000000146a14e54;
      *(undefined4 *)(puVar11 + 4) = _DAT_146a14e50;
      *(undefined4 *)((longlong)puVar11 + 0x24) = uVar1;
      *(undefined4 *)(puVar11 + 5) = uVar2;
      *(undefined4 *)((longlong)puVar11 + 0x2c) = uVar3;
      uVar3 = uRam0000000146a14e6c;
      uVar2 = uRam0000000146a14e68;
      uVar1 = uRam0000000146a14e64;
      *(undefined4 *)(puVar11 + 6) = _DAT_146a14e60;
      *(undefined4 *)((longlong)puVar11 + 0x34) = uVar1;
      *(undefined4 *)(puVar11 + 7) = uVar2;
      *(undefined4 *)((longlong)puVar11 + 0x3c) = uVar3;
      puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar14 + 5;
      local_1c0 = puVar11;
      if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar10 = puVar14 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar10;
      plVar13 = plVar13 + 0x61a;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar14;
      uVar7 = *(undefined8 *)(param_2 + 0x180);
      uVar1 = *(undefined4 *)(param_2 + 0x178);
      uVar2 = *(undefined4 *)(param_2 + 0x17c);
      uVar3 = *(undefined4 *)(param_2 + 0x174);
      uVar4 = *(undefined4 *)(param_2 + 0x170);
      *(undefined8 **)(param_2 + 8) = puVar14 + 1;
      puVar14[1] = 0;
      *puVar14 = &PTR_LAB_144d91e10;
      *(undefined4 *)(puVar14 + 2) = uVar4;
      iVar6 = (int)local_1c8 + 1;
      *(undefined4 *)((longlong)puVar14 + 0x14) = uVar3;
      *(undefined4 *)(puVar14 + 3) = uVar1;
      *(undefined4 *)((longlong)puVar14 + 0x1c) = uVar2;
      puVar14[4] = uVar7;
      *(undefined8 *)(param_2 + 0x180) = 0;
      *(undefined4 *)(param_2 + 0x178) = 0;
      local_1c8 = CONCAT44(local_1c8._4_4_,iVar6);
      param_1 = local_198;
    } while (iVar6 < *(int *)(local_198 + 200));
  }
  return;
}



// FUNCTION 141afe090 FUN_141afe090 body=1003 status=ok
// SIG undefined FUN_141afe090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141afe090(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong *puVar8;
  undefined8 *puVar9;
  ulonglong *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined1 local_160;
  ulonglong local_158;
  undefined *local_150;
  undefined4 local_148;
  undefined8 local_138;
  longlong *plStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_78;
  undefined8 uStack_70;
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
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  plVar7 = (longlong *)0x0;
  local_158 = local_158 & 0xffffffff00000000;
  lVar2 = FSceneRenderTargets::Get(param_2);
  puVar10 = (ulonglong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  local_158 = *(ulonglong *)(*(longlong *)(lVar2 + 0x60) + 0x10);
  puVar8 = puVar10 + 1;
  if (*(ulonglong **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    puVar10 = (ulonglong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 1;
  }
  *(ulonglong **)(param_2 + 0x30) = puVar8;
  *puVar10 = local_158;
  puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar9 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar9 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar6;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  local_160 = 0;
  local_168 = 0x20;
  **(undefined8 **)(param_2 + 8) = puVar9;
  *(undefined8 **)(param_2 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar9 + 2) = 1;
  puVar9[3] = puVar10;
  *(undefined4 *)(puVar9 + 4) = 1;
  *(undefined1 *)((longlong)puVar9 + 0x24) = 0;
  FUN_141ad74f0(param_2,0,*(undefined8 *)(*(longlong *)(lVar2 + 0x60) + 8),0);
  uVar3 = FUN_141a151e0();
  uVar4 = FUN_141b09550();
  local_f8 = 0;
  local_138 = 0;
  plStack_130 = (longlong *)0x0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = (longlong *)0x0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_f0 = 0;
  local_ec = 0x26;
  local_e4 = 0;
  local_dc = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_94 = 0;
  local_8c = 0;
  local_84 = 0;
  FUN_14049afe0(param_2,&local_138);
  uStack_100 = FUN_140985530();
  local_108 = uVar3;
  local_f8 = uVar4;
  lVar2 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
  local_148 = 0;
  local_150 = &DAT_1469f93a0;
  plVar5 = (longlong *)(lVar2 + 0x38);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar5,&local_158,&local_150);
  plVar12 = plVar7;
  if ((int)local_158 != -1) {
    plVar12 = (longlong *)((longlong)(int)local_158 * 0x20 + *plVar5);
  }
  local_148 = 0;
  plVar11 = plVar12 + 2;
  if (plVar12 == (longlong *)0x0) {
    plVar11 = plVar7;
  }
  local_150 = &DAT_1469f94f0;
  lVar2 = *plVar11;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar5,&local_158,&local_150);
  plVar12 = plVar7;
  if ((int)local_158 != -1) {
    plVar12 = (longlong *)((longlong)(int)local_158 * 0x20 + *plVar5);
  }
  plVar5 = plVar12 + 2;
  if (plVar12 == (longlong *)0x0) {
    plVar5 = plVar7;
  }
  plVar5 = (longlong *)*plVar5;
  puVar6 = (undefined8 *)FUN_141ee3620();
  local_138 = *puVar6;
  if (lVar2 == 0) {
    local_158 = 0;
    plVar12 = (longlong *)0x1;
    plStack_130 = plVar7;
  }
  else {
    lVar2 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plStack_130 = *(longlong **)(lVar2 + 0x38);
    plVar12 = plVar7;
  }
  if (plVar12 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
  }
  bVar1 = false;
  if (plVar5 == (longlong *)0x0) {
    bVar1 = true;
    local_158 = 0;
  }
  else {
    lVar2 = plVar5[9];
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    plVar7 = *(longlong **)(lVar2 + 0x40);
  }
  local_118 = plVar7;
  if (bVar1) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
  }
  local_ec = CONCAT44(local_ec._4_4_,1);
  FUN_141ed6ac0(param_2,&local_138,2,1);
  puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar9 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar9 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar6;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar9;
  *(undefined8 **)(param_2 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_143f489c0;
  *(undefined4 *)(puVar9 + 2) = 0;
  (**(code **)(*plVar5 + 0x30))(plVar5,param_2,0,0);
  local_78 = 0x3f800000bf800000;
  uStack_70 = 0x3f80000000000000;
  local_68 = 0x3f8000003f800000;
  uStack_60 = 0x3f80000000000000;
  local_58 = 0xbf800000;
  uStack_54 = 0xbf800000;
  uStack_50 = 0;
  uStack_4c = 0x3f800000;
  local_48 = 0x3f800000;
  uStack_44 = 0xbf800000;
  uStack_40 = 0;
  uStack_3c = 0x3f800000;
  local_168 = 0x10;
  FUN_141a14d80(param_2,1,2,&local_78);
  return;
}



// FUNCTION 141afe480 FUN_141afe480 body=471 status=ok
// SIG undefined FUN_141afe480(void)

float * FUN_141afe480(float *param_1,longlong param_2,undefined8 *param_3)

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
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  
  fVar20 = *(float *)(param_2 + 0x8d4) + *(float *)((longlong)param_3 + 0x34);
  local_b8 = (float)*param_3;
  fStack_b4 = (float)((ulonglong)*param_3 >> 0x20);
  fStack_b0 = (float)param_3[1];
  fStack_ac = (float)((ulonglong)param_3[1] >> 0x20);
  fVar21 = *(float *)(param_2 + 0x8d8) + *(float *)(param_3 + 7);
  uVar18 = param_3[4];
  uVar19 = param_3[5];
  fVar1 = *(float *)((longlong)param_3 + 0x3c);
  fVar2 = *(float *)(param_2 + 0x7e0);
  fVar3 = *(float *)(param_2 + 0x7e4);
  fVar4 = *(float *)(param_2 + 0x7e8);
  fVar5 = *(float *)(param_2 + 0x7ec);
  fVar6 = *(float *)(param_2 + 2000);
  fVar7 = *(float *)(param_2 + 0x7d4);
  fVar8 = *(float *)(param_2 + 0x7d8);
  fVar9 = *(float *)(param_2 + 0x7dc);
  fVar10 = *(float *)(param_2 + 0x7f0);
  fVar11 = *(float *)(param_2 + 0x7f4);
  fVar12 = *(float *)(param_2 + 0x7f8);
  fVar13 = *(float *)(param_2 + 0x7fc);
  fVar14 = *(float *)(param_2 + 0x800);
  fVar15 = *(float *)(param_2 + 0x804);
  fVar16 = *(float *)(param_2 + 0x808);
  fVar17 = *(float *)(param_2 + 0x80c);
  fVar22 = *(float *)(param_3 + 6) + *(float *)(param_2 + 0x8d0);
  local_a8 = (float)param_3[2];
  fStack_a4 = (float)((ulonglong)param_3[2] >> 0x20);
  fStack_a0 = (float)param_3[3];
  fStack_9c = (float)((ulonglong)param_3[3] >> 0x20);
  *param_1 = fStack_b4 * fVar2 + local_b8 * fVar6 + fStack_b0 * fVar10 + fStack_ac * fVar14;
  param_1[1] = fStack_b4 * fVar3 + local_b8 * fVar7 + fStack_b0 * fVar11 + fStack_ac * fVar15;
  param_1[2] = fStack_b4 * fVar4 + local_b8 * fVar8 + fStack_b0 * fVar12 + fStack_ac * fVar16;
  param_1[3] = fStack_b4 * fVar5 + local_b8 * fVar9 + fStack_b0 * fVar13 + fStack_ac * fVar17;
  local_98 = (float)uVar18;
  fStack_94 = (float)((ulonglong)uVar18 >> 0x20);
  fStack_90 = (float)uVar19;
  fStack_8c = (float)((ulonglong)uVar19 >> 0x20);
  param_1[4] = local_a8 * fVar6 + fStack_a4 * fVar2 + fStack_a0 * fVar10 + fStack_9c * fVar14;
  param_1[5] = local_a8 * fVar7 + fStack_a4 * fVar3 + fStack_a0 * fVar11 + fStack_9c * fVar15;
  param_1[6] = local_a8 * fVar8 + fStack_a4 * fVar4 + fStack_a0 * fVar12 + fStack_9c * fVar16;
  param_1[7] = local_a8 * fVar9 + fStack_a4 * fVar5 + fStack_a0 * fVar13 + fStack_9c * fVar17;
  param_1[8] = local_98 * fVar6 + fStack_94 * fVar2 + fStack_90 * fVar10 + fStack_8c * fVar14;
  param_1[9] = local_98 * fVar7 + fStack_94 * fVar3 + fStack_90 * fVar11 + fStack_8c * fVar15;
  param_1[10] = local_98 * fVar8 + fStack_94 * fVar4 + fStack_90 * fVar12 + fStack_8c * fVar16;
  param_1[0xb] = local_98 * fVar9 + fStack_94 * fVar5 + fStack_90 * fVar13 + fStack_8c * fVar17;
  param_1[0xc] = fVar20 * fVar2 + fVar22 * fVar6 + fVar21 * fVar10 + fVar1 * fVar14;
  param_1[0xd] = fVar20 * fVar3 + fVar22 * fVar7 + fVar21 * fVar11 + fVar1 * fVar15;
  param_1[0xe] = fVar20 * fVar4 + fVar22 * fVar8 + fVar21 * fVar12 + fVar1 * fVar16;
  param_1[0xf] = fVar20 * fVar5 + fVar22 * fVar9 + fVar21 * fVar13 + fVar1 * fVar17;
  return param_1;
}



// FUNCTION 141afe660 FUN_141afe660 body=2736 status=ok
// SIG undefined FUN_141afe660(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141afe660(longlong param_1,longlong *param_2,undefined8 *param_3,undefined4 *param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_2a8 [32];
  undefined4 *local_288;
  undefined4 local_280;
  undefined4 local_278;
  float local_270;
  float local_268;
  undefined8 local_260;
  undefined8 local_258;
  longlong local_250;
  undefined4 local_248;
  undefined4 local_240;
  uint local_238;
  int local_234;
  int local_230;
  int local_22c;
  undefined4 local_228 [2];
  longlong local_220;
  int local_218;
  int local_214;
  int local_210;
  float local_20c;
  float local_208 [2];
  undefined8 *local_200;
  float *local_1f8;
  undefined4 *local_1f0;
  longlong local_1e8;
  int local_1e0;
  int iStack_1dc;
  longlong *local_1d8;
  undefined8 *local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined *local_1b0;
  undefined4 local_1a8;
  undefined *local_1a0;
  undefined4 local_198;
  undefined *local_190;
  undefined4 local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 local_130;
  ulonglong local_12c;
  undefined8 local_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined4 local_c4;
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  local_228[0] = 0;
  local_238 = 0;
  local_1f0 = param_4;
  local_1d8 = param_2;
  local_1d0 = param_3;
  if (DAT_146a0e8d4 == 0) {
    local_280 = CONCAT31(local_280._1_3_,1);
    local_288 = (undefined4 *)((ulonglong)local_288 & 0xffffffff00000000);
    local_1c8 = 0;
    FUN_141ad74f0(param_1,*param_3,0,4);
    local_138 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = (undefined8 *)0x0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_130 = 0;
    local_12c = 0x26;
    local_124 = 0;
    local_11c = 0;
    local_108 = 0;
    local_100 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_d4 = 0;
    local_cc = 0;
    local_c4 = 0;
    FUN_14049afe0(param_1);
    uStack_140 = FUN_140985530();
    local_138 = FUN_1409853f0();
    local_148 = FUN_1404a0ce0();
    local_12c = local_12c & 0xffffffff00000000;
    local_234 = 0;
    if (0 < (int)param_2[1]) {
      local_1f8 = (float *)(param_4 + 1);
      local_220 = 0;
      puVar12 = local_200;
      puVar8 = local_200;
      uVar17 = 0;
      do {
        lVar13 = local_220;
        lVar16 = *param_2;
        puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        local_22c = (*(int *)(local_220 + 0x1aac + lVar16) - *(int *)(local_220 + 0x1aa4 + lVar16))
                    / 2;
        puVar9 = puVar10 + 5;
        local_230 = (*(int *)(local_220 + 0x1aa8 + lVar16) - *(int *)(local_220 + 0x1aa0 + lVar16))
                    / 2;
        local_1e8 = lVar16;
        if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
          FMemStackBase::AllocateNewChunk((longlong *)(param_1 + 0x30),0x30);
          puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar9 = puVar10 + 5;
        }
        *(undefined8 **)(param_1 + 0x30) = puVar9;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        local_198 = 0;
        **(undefined8 **)(param_1 + 8) = puVar10;
        *(undefined8 **)(param_1 + 8) = puVar10 + 1;
        puVar10[1] = 0;
        *puVar10 = &PTR_LAB_143f59420;
        *(int *)((longlong)puVar10 + 0x1c) = local_230;
        *(int *)(puVar10 + 4) = local_22c;
        puVar10[2] = 0;
        *(undefined4 *)(puVar10 + 3) = 0;
        *(undefined4 *)((longlong)puVar10 + 0x24) = 0x3f800000;
        lVar16 = *(longlong *)(lVar13 + 0x3090 + lVar16);
        local_1a0 = &DAT_146a51f90;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(lVar16 + 0x38,&local_214,&local_1a0);
        if (local_214 == -1) {
          lVar13 = 0;
        }
        else {
          lVar13 = (longlong)local_214 * 0x20 + *(longlong *)(lVar16 + 0x38);
        }
        local_188 = 0;
        plVar14 = (longlong *)(lVar13 + 0x10);
        if (lVar13 == 0) {
          plVar14 = (longlong *)0x0;
        }
        local_190 = &DAT_146a110f0;
        lVar13 = *plVar14;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(lVar16 + 0x38,&local_210);
        if (local_210 == -1) {
          lVar16 = 0;
        }
        else {
          lVar16 = (longlong)local_210 * 0x20 + *(longlong *)(lVar16 + 0x38);
        }
        plVar14 = (longlong *)(lVar16 + 0x10);
        if (lVar16 == 0) {
          plVar14 = (longlong *)0x0;
        }
        lVar16 = *plVar14;
        local_178 = DAT_1464c2720;
        if (lVar13 == 0) {
          local_238 = uVar17 | 1;
          puVar12 = (undefined8 *)0x0;
          uStack_170 = 0;
          uVar17 = local_238;
        }
        else {
          lVar7 = *(longlong *)(lVar13 + 0x48);
          if (*(char *)(lVar7 + 0x28) == '\0') {
            FUN_1419f3850(lVar7);
          }
          uStack_170 = *(undefined8 *)(lVar7 + 0x38);
        }
        if (((uVar17 & 1) != 0) &&
           (uVar17 = uVar17 & 0xfffffffe, local_238 = uVar17, puVar12 != (undefined8 *)0x0)) {
          LOCK();
          piVar1 = (int *)(puVar12 + 1);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            if ((*(char *)(puVar12 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
              LOCK();
              bVar18 = *(int *)((longlong)puVar12 + 0xc) == 0;
              if (bVar18) {
                *(int *)((longlong)puVar12 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar18) {
                uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar6 == 0) {
                  lVar7 = 0;
                }
                else {
                  lVar7 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar7 + 8) = puVar12;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar12)(puVar12,1);
            }
          }
        }
        if (lVar16 == 0) {
          local_238 = uVar17 | 2;
          local_158 = (undefined8 *)0x0;
          puVar8 = local_158;
          uVar17 = local_238;
        }
        else {
          lVar7 = *(longlong *)(lVar16 + 0x48);
          if (*(char *)(lVar7 + 0x28) == '\0') {
            FUN_1419f3850(lVar7);
          }
          local_158 = *(undefined8 **)(lVar7 + 0x40);
        }
        lVar7 = 0;
        if (((uVar17 & 2) != 0) && (local_238 = uVar17 & 0xfffffffd, puVar8 != (undefined8 *)0x0)) {
          LOCK();
          piVar1 = (int *)(puVar8 + 1);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            if ((*(char *)(puVar8 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
              LOCK();
              bVar18 = *(int *)((longlong)puVar8 + 0xc) == 0;
              if (bVar18) {
                *(int *)((longlong)puVar8 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar18) {
                uVar17 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar17 != 0) {
                  lVar7 = (&DAT_1468a81f8)[uVar17 >> 0xe] + (ulonglong)(uVar17 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar7 + 8) = puVar8;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar8)(puVar8,1);
            }
          }
        }
        FUN_141ed6ac0(param_1,&local_178,2,1);
        lVar7 = *(longlong *)(lVar16 + 0x48);
        if (*(char *)(lVar7 + 0x28) == '\0') {
          FUN_1419f3850(lVar7);
        }
        uVar3 = *(undefined8 *)(lVar7 + 0x40);
        local_1b8 = uVar3;
        FUN_141aa9590(lVar16,param_1,uVar3,*(undefined8 *)(local_220 + 0x20 + local_1e8));
        local_288 = (undefined4 *)((ulonglong)local_288 & 0xffffffff00000000);
        SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
                  (param_1,uVar3,lVar16 + 0xd0,local_1f8);
        fVar19 = _guard_xfg_dispatch_icall_nop(2.0,-((float)(DAT_1464c17b8 - 1) * _DAT_1464c17a8));
        fVar20 = _guard_xfg_dispatch_icall_nop(DAT_1464c197c);
        local_288 = (undefined4 *)((ulonglong)local_288 & 0xffffffff00000000);
        local_20c = fVar19 * (*local_1f8 / (fVar20 + 1.0));
        SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
                  (param_1,uVar3,lVar16 + 0xd6,&local_20c);
        local_288 = (undefined4 *)((ulonglong)local_288 & 0xffffffff00000000);
        SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
                  (param_1,uVar3,lVar16 + 0xdc,&DAT_1464c17a8);
        local_208[0] = DAT_1464c17ac;
        if (65000.0 <= DAT_1464c17ac) {
          local_208[0] = 65000.0;
        }
        local_288 = (undefined4 *)((ulonglong)local_288 & 0xffffffff00000000);
        SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
                  (param_1,uVar3,lVar16 + 0xe2,local_208);
        local_228[0] = *local_1f0;
        local_288 = (undefined4 *)((ulonglong)local_288 & 0xffffffff00000000);
        SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
                  (param_1,uVar3,lVar16 + 0xe8,local_228);
        lVar2 = local_1e8;
        lVar7 = local_220;
        local_288._0_4_ = 0xf;
        FUN_141aa6800(lVar16 + 0xc0,param_1,&local_1b8,
                      *(undefined4 *)(local_220 + 0x1a38 + local_1e8));
        lVar16 = FSceneRenderTargets::Get(param_1);
        iVar15 = *(int *)(lVar7 + 0x1aa8 + lVar2) - *(int *)(lVar7 + 0x1aa0 + lVar2);
        local_258 = *(undefined8 *)(lVar16 + 0x378);
        iVar5 = *(int *)(lVar7 + 0x1aac + lVar2) - *(int *)(lVar7 + 0x1aa4 + lVar2);
        local_1e0 = iVar15 / 2;
        local_240 = 1;
        iStack_1dc = iVar5 / 2;
        local_270 = (float)iVar15;
        local_248 = 0;
        local_260 = CONCAT44(iStack_1dc,local_1e0);
        local_268 = (float)iVar5;
        local_278 = 0;
        local_280 = 0;
        local_288 = (undefined4 *)CONCAT44(local_288._4_4_,(float)iStack_1dc);
        local_250 = lVar13;
        DrawRectangle(param_1);
        local_220 = lVar7 + 0x30d0;
        local_234 = local_234 + 1;
        param_2 = local_1d8;
        param_3 = local_1d0;
        uVar17 = local_238;
      } while (local_234 < (int)local_1d8[1]);
    }
    local_200 = (undefined8 *)*param_3;
    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar8 + 1;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar8 + 1;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *puVar8 = local_200;
    puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar9 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar9 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar12;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar9;
    *(undefined8 **)(param_1 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar9 + 2) = 1;
    puVar9[3] = puVar8;
    *(undefined4 *)(puVar9 + 4) = 0;
    *(undefined1 *)((longlong)puVar9 + 0x24) = 0;
  }
  else {
    FUN_141a19150(param_1,0,0,0);
    local_238 = 0;
    if (0 < (int)param_2[1]) {
      lVar16 = 0;
      do {
        lVar13 = *param_2 + lVar16;
        iVar5 = *(int *)(lVar13 + 0x1aa8) - *(int *)(lVar13 + 0x1aa0);
        if (iVar5 < 0) {
          iVar5 = iVar5 + 1;
        }
        local_230 = ((iVar5 >> 1) + -1 + DAT_1464c1790) / DAT_1464c1790;
        iVar5 = *(int *)(lVar13 + 0x1aac) - *(int *)(lVar13 + 0x1aa4);
        if (iVar5 < 0) {
          iVar5 = iVar5 + 1;
        }
        lVar7 = *(longlong *)(lVar13 + 0x3090);
        local_1b0 = &DAT_146a11240;
        local_1a8 = 0;
        local_234 = (DAT_1464c1794 + -1 + (iVar5 >> 1)) / DAT_1464c1794;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(lVar7 + 0x38,&local_218);
        plVar14 = (longlong *)0x0;
        if (local_218 != -1) {
          plVar14 = (longlong *)((longlong)local_218 * 0x20 + *(longlong *)(lVar7 + 0x38));
        }
        plVar11 = plVar14 + 2;
        if (plVar14 == (longlong *)0x0) {
          plVar11 = (longlong *)0x0;
        }
        lVar7 = *plVar11;
        lVar2 = *(longlong *)(lVar7 + 0x48);
        if (*(char *)(lVar2 + 0x28) == '\0') {
          FUN_1419f3850(lVar2);
        }
        uVar3 = *(undefined8 *)(lVar2 + 0x60);
        FRHIComputeShader::UpdateStats(uVar3);
        puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar8 + 3;
        if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
          FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
          puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar12 = puVar8 + 3;
        }
        puVar9 = local_1d0;
        *(undefined8 **)(param_1 + 0x30) = puVar12;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar8;
        *(undefined8 **)(param_1 + 8) = puVar8 + 1;
        puVar8[1] = 0;
        puVar8[2] = uVar3;
        *puVar8 = &PTR_LAB_144d91e50;
        local_288 = local_1f0;
        FUN_141b16090(lVar7,param_1,lVar13,local_1d0);
        local_288 = (undefined4 *)CONCAT44(local_288._4_4_,1);
        DispatchComputeShader(param_1,lVar7,local_230,local_234);
        lVar13 = *(longlong *)(lVar7 + 0x48);
        if (*(char *)(lVar13 + 0x28) == '\0') {
          FUN_1419f3850(lVar13);
        }
        FRWShaderParameter::UnsetUAV<FRHICommandList>
                  (lVar7 + 0xc0,param_1,*(undefined8 *)(lVar13 + 0x60));
        local_1c0 = puVar9[2];
        puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar8 + 1;
        if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
          FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
          puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar12 = puVar8 + 1;
        }
        *(undefined8 **)(param_1 + 0x30) = puVar12;
        *puVar8 = local_1c0;
        puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar9 + 6;
        if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
          FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
          puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar12 = puVar9 + 6;
        }
        *(undefined8 **)(param_1 + 0x30) = puVar12;
        lVar16 = lVar16 + 0x30d0;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar9;
        *(undefined8 **)(param_1 + 8) = puVar9 + 1;
        *(undefined4 *)(puVar9 + 2) = 1;
        puVar9[3] = puVar8;
        *(undefined4 *)(puVar9 + 4) = 0;
        *(undefined4 *)((longlong)puVar9 + 0x24) = 3;
        puVar9[5] = 0;
        puVar9[1] = 0;
        *puVar9 = &PTR_LAB_144d91e60;
        local_238 = local_238 + 1;
        param_2 = local_1d8;
      } while ((int)local_238 < (int)local_1d8[1]);
    }
  }
  return;
}



// FUNCTION 141aff1d0 ComputeOutputDesc body=602 status=ok
// SIG undefined ComputeOutputDesc(void)

longlong * FRCPassPostProcessPassThrough::ComputeOutputDesc(longlong *param_1,longlong *param_2)

{
  short sVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  
  *param_2 = 1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 1;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  uVar5 = 0;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  *(undefined1 *)(param_2 + 7) = 0;
  param_2[8] = (longlong)L"UnknownTexture";
  *(undefined2 *)(param_2 + 9) = 1;
  if (param_1[0x15] == 0) {
    uVar3 = (**(code **)(*param_1 + 8))(param_1,0);
    plVar4 = (longlong *)FRenderingCompositeOutputRef::GetOutput(uVar3);
    lVar2 = plVar4[1];
    *param_2 = *plVar4;
    param_2[1] = lVar2;
    *(int *)(param_2 + 2) = (int)plVar4[2];
    *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)((longlong)plVar4 + 0x14);
    *(int *)(param_2 + 3) = (int)plVar4[3];
    *(undefined4 *)((longlong)param_2 + 0x1c) = *(undefined4 *)((longlong)plVar4 + 0x1c);
    *(int *)(param_2 + 4) = (int)plVar4[4];
    *(undefined1 *)((longlong)param_2 + 0x24) = *(undefined1 *)((longlong)plVar4 + 0x24);
    *(undefined1 *)((longlong)param_2 + 0x25) = *(undefined1 *)((longlong)plVar4 + 0x25);
    *(undefined2 *)((longlong)param_2 + 0x26) = *(undefined2 *)((longlong)plVar4 + 0x26);
    *(short *)(param_2 + 5) = (short)plVar4[5];
    *(undefined4 *)((longlong)param_2 + 0x2c) = *(undefined4 *)((longlong)plVar4 + 0x2c);
    *(int *)(param_2 + 6) = (int)plVar4[6];
    uVar5 = *(uint *)((longlong)plVar4 + 0x34);
    *(uint *)((longlong)param_2 + 0x34) = uVar5;
    *(char *)(param_2 + 7) = (char)plVar4[7];
    param_2[8] = plVar4[8];
    *(char *)(param_2 + 9) = (char)plVar4[9];
    *(undefined1 *)((longlong)param_2 + 0x49) = *(undefined1 *)((longlong)plVar4 + 0x49);
    sVar1 = (short)param_1[0x1c];
    if (((sVar1 == 1) ||
        (((((ushort)(sVar1 - 1U) < 8 && (*(int *)((longlong)param_1 + 0xcc) != 0)) &&
          ((int)param_1[0x1a] != 0)) &&
         ((*(int *)((longlong)param_1 + 0xd4) == 0 && (*(char *)((longlong)param_1 + 0xdd) == '\0'))
         )))) && ((*(int *)((longlong)param_1 + 0xcc) != 0 &&
                  (((*(short *)((longlong)param_1 + 0xde) != 0 && ((ushort)(sVar1 - 1U) < 0x10)) &&
                   ((*(int *)((longlong)param_1 + 0xe4) != 0 &&
                    (((*(uint *)((longlong)param_1 + 0xec) & 0x10000) == 0 || (DAT_1464c9c14 == 3)))
                    ))))))) {
      lVar2 = param_1[0x18];
      *param_2 = param_1[0x17];
      param_2[1] = lVar2;
      *(int *)(param_2 + 2) = (int)param_1[0x19];
      *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)((longlong)param_1 + 0xcc);
      *(int *)(param_2 + 3) = (int)param_1[0x1a];
      *(undefined4 *)((longlong)param_2 + 0x1c) = *(undefined4 *)((longlong)param_1 + 0xd4);
      *(int *)(param_2 + 4) = (int)param_1[0x1b];
      *(undefined1 *)((longlong)param_2 + 0x24) = *(undefined1 *)((longlong)param_1 + 0xdc);
      *(undefined1 *)((longlong)param_2 + 0x25) = *(undefined1 *)((longlong)param_1 + 0xdd);
      *(undefined2 *)((longlong)param_2 + 0x26) = *(undefined2 *)((longlong)param_1 + 0xde);
      *(short *)(param_2 + 5) = (short)param_1[0x1c];
      *(undefined4 *)((longlong)param_2 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0xe4);
      *(int *)(param_2 + 6) = (int)param_1[0x1d];
      uVar5 = *(uint *)((longlong)param_1 + 0xec);
      *(uint *)((longlong)param_2 + 0x34) = uVar5;
      *(char *)(param_2 + 7) = (char)param_1[0x1e];
      param_2[8] = param_1[0x1f];
      *(char *)(param_2 + 9) = (char)param_1[0x20];
      *(undefined1 *)((longlong)param_2 + 0x49) = *(undefined1 *)((longlong)param_1 + 0x101);
    }
  }
  *(undefined2 *)(param_2 + 5) = 1;
  param_2[8] = (longlong)L"PassThrough";
  *(undefined1 *)(param_2 + 9) = 1;
  *(uint *)((longlong)param_2 + 0x34) = uVar5 & 0xfffeffff | 1;
  *(undefined1 *)(param_2 + 7) = 0;
  return param_2;
}



// FUNCTION 141aff430 FUN_141aff430 body=69 status=ok
// SIG undefined FUN_141aff430(void)

undefined8 FUN_141aff430(uint param_1,undefined4 param_2)

{
  if ((param_1 < 0x1e) && ((0x25e2cf88U >> (param_1 & 0x1f) & 1) != 0)) {
    return 3;
  }
  switch(param_2) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 0xd:
    return 2;
  default:
    return 0;
  case 0xc:
    return 1;
  case 0xe:
    return 4;
  }
}



// FUNCTION 141aff4c0 FUN_141aff4c0 body=117 status=ok
// SIG undefined FUN_141aff4c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_141aff4c0(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined1 auStack_338 [32];
  undefined1 local_318 [21];
  byte local_303 [747];
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  iVar3 = 0;
  local_18 = 0;
  FUN_141b09de0(local_318);
  if (0 < (int)local_18) {
    pbVar2 = local_303;
    local_18 = local_18 & 0xffffffff;
    iVar3 = 0;
    do {
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 0x18;
      iVar3 = iVar3 + (uint)bVar1;
      local_18 = local_18 - 1;
    } while (local_18 != 0);
  }
  return iVar3 + 3 + (iVar3 + 3 >> 0x1f & 3U) & 0xfffffffc;
}



// FUNCTION 141aff540 FUN_141aff540 body=269 status=ok
// SIG undefined FUN_141aff540(void)

undefined8 * FUN_141aff540(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dd4ed8;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xd4) = 0;
    FShaderResourceParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"EdgeTexture",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),L"EdgeDepthTexture",0);
    FShaderResourceParameter::Bind
              (puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"EdgeVelocityTexture",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"EdgeTextureSampler",0);
    FShaderParameter::Bind(puVar1 + 0x1a,*(undefined8 *)(param_1 + 0x18),L"EdgeApplyParameters",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141aff650 FUN_141aff650 body=77 status=ok
// SIG undefined FUN_141aff650(void)

undefined8 * FUN_141aff650(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141afabd0(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dd4c38;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141aff6a0 FUN_141aff6a0 body=218 status=ok
// SIG undefined FUN_141aff6a0(void)

undefined8 * FUN_141aff6a0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x168);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf710(puVar1,param_1);
    *puVar1 = &PTR_FUN_144dd4c08;
    *(undefined4 *)(puVar1 + 0x2a) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x154) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x156) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x15e) = 0;
    FShaderParameter::Bind(puVar1 + 0x2a,*(undefined8 *)(param_1 + 0x18),L"InstancedEyeIndex",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x156,*(undefined8 *)(param_1 + 0x18),L"bIsInstancedStereo",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x15c,*(undefined8 *)(param_1 + 0x18),
               L"bIsInstancedStereoEmulated",0);
    FUN_141cdf500(param_1,puVar1 + 0x22,puVar1 + 0x22);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141aff780 FUN_141aff780 body=226 status=ok
// SIG undefined FUN_141aff780(void)

undefined8 * FUN_141aff780(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf8);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141afabd0(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dd4900;
    *(undefined4 *)(puVar1 + 0x1c) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xe4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xe6) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xee) = 0;
    FShaderParameter::Bind(puVar1 + 0x1c,*(undefined8 *)(param_1 + 0x18),L"OutEdges",0);
    FShaderParameter::Bind((longlong)puVar1 + 0xe6,*(undefined8 *)(param_1 + 0x18),L"OutDepth",0);
    FShaderParameter::Bind((longlong)puVar1 + 0xec,*(undefined8 *)(param_1 + 0x18),L"OutVelocity",0)
    ;
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xda,*(undefined8 *)(param_1 + 0x18),L"VelocityTexture",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141aff870 ConstructCompiledInstance body=77 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * TPostProcessLpvIndirectPS<1>::ConstructCompiledInstance(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1f8);
  if (puVar1 != (undefined8 *)0x0) {
    FPostProcessLpvIndirectPS::FPostProcessLpvIndirectPS(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dd4508;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141aff8c0 ConstructCompiledInstance body=220 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FComputeDistanceFieldNormalCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dd4790;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xce) = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xd4) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xd6) = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    *(undefined4 *)(puVar1 + 0x1e) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xf4) = 0;
    FRWShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"DistanceFieldNormal");
    FUN_141cdf500(param_1,puVar1 + 0x19,puVar1 + 0x1a);
    FAOParameters::Bind(puVar1 + 0x1b,*(undefined8 *)(param_1 + 0x18));
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141aff9a0 ConstructCompiledInstance body=166 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FComputeDistanceFieldNormalPS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dd4760;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xce) = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    *(undefined4 *)(puVar1 + 0x1d) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xec) = 0;
    FUN_141cdf500(param_1);
    FAOParameters::Bind(puVar1 + 0x1a,*(undefined8 *)(param_1 + 0x18));
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141affa50 FUN_141affa50 body=103 status=ok
// SIG undefined FUN_141affa50(void)

undefined8 * FUN_141affa50(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x150);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf710(puVar1,param_1);
    *puVar1 = &PTR_FUN_144dc7018;
    FShaderUniformBufferParameter::Bind
              (puVar1 + 0x22,*(undefined8 *)(param_1 + 0x18),DAT_146a632c0,0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141affac0 ConstructCompiledInstance body=119 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FMobileCopySceneAlphaPS::ConstructCompiledInstance(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dd46e8;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xce) = 0;
    FUN_141cdf500(param_1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141affb40 ConstructCompiledInstance body=107 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FCopyStencilToLightingChannelsPS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d913d8;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    FShaderResourceParameter::Bind
              (puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"SceneStencilTexture",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141affbb0 FUN_141affbb0 body=137 status=ok
// SIG undefined FUN_141affbb0(void)

undefined8 * FUN_141affbb0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x158);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf710(puVar1,param_1);
    *puVar1 = &PTR_FUN_144dd4f08;
    *(undefined4 *)(puVar1 + 0x2a) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x154) = 0;
    FShaderParameter::Bind(puVar1 + 0x2a,*(undefined8 *)(param_1 + 0x18),L"CustomColor",0);
    FShaderUniformBufferParameter::Bind
              (puVar1 + 0x22,*(undefined8 *)(param_1 + 0x18),DAT_146a632c0,0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141affc40 FUN_141affc40 body=113 status=ok
// SIG undefined FUN_141affc40(void)

undefined8 * FUN_141affc40(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x150);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf710(puVar1,param_1);
    *puVar1 = &PTR_FUN_144dc7018;
    FShaderUniformBufferParameter::Bind
              (puVar1 + 0x22,*(undefined8 *)(param_1 + 0x18),DAT_146a632c0,0);
    *puVar1 = &PTR_FUN_144dc7018;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141affcc0 FUN_141affcc0 body=180 status=ok
// SIG undefined FUN_141affcc0(void)

undefined8 * FUN_141affcc0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x160);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf710(puVar1,param_1);
    *puVar1 = &PTR_FUN_144dd4a38;
    *(undefined4 *)(puVar1 + 0x2a) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x154) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x156) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x15a) = 0;
    FShaderParameter::Bind(puVar1 + 0x2a,*(undefined8 *)(param_1 + 0x18),L"bIsInstancedStereo",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x156,*(undefined8 *)(param_1 + 0x18),L"InstancedEyeIndex",0);
    BindBasePassUniformBuffer(*(undefined8 *)(param_1 + 0x18),puVar1 + 0x22);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141affd80 FUN_141affd80 body=46 status=ok
// SIG undefined FUN_141affd80(void)

void FUN_141affd80(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x140);
  if (lVar1 != 0) {
    FUN_141afa0c0(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141affdb0 ConstructCompiledInstance body=111 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FDeferredDecalVS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91120;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    FShaderParameter::Bind
              (puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"FrustumComponentToClip",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141affe20 FUN_141affe20 body=182 status=ok
// SIG undefined FUN_141affe20(void)

undefined8 * FUN_141affe20(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x160);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf710(puVar1,param_1);
    *puVar1 = &PTR_FUN_144dd4a38;
    *(undefined4 *)(puVar1 + 0x2a) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x154) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x156) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x15a) = 0;
    FShaderParameter::Bind(puVar1 + 0x2a,*(undefined8 *)(param_1 + 0x18),L"bApplyDepthOffset",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x156,*(undefined8 *)(param_1 + 0x18),L"MobileColorValue",0);
    FUN_141cdf500(param_1,puVar1 + 0x22,puVar1 + 0x22);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141affee0 ConstructCompiledInstance body=111 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FDitheredTransitionStencilPS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91120;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    FShaderParameter::Bind
              (puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"DitheredTransitionFactor",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141afff50 ConstructCompiledInstance body=296 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FDownsampleSceneDepthPS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dd4b38;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined2 *)(puVar1 + 0x1a) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xd4) = 0;
    *(undefined2 *)(puVar1 + 0x1b) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xda) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xdc) = 0;
    *(undefined2 *)(puVar1 + 0x1c) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xe2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xe4) = 0;
    *(undefined2 *)(puVar1 + 0x1d) = 0;
    FUN_141cdf500(param_1);
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"ProjectionScaleBias",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),L"SourceTexelOffsets01",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"SourceTexelOffsets23",0);
    FShaderParameter::Bind((longlong)puVar1 + 0xe4,*(undefined8 *)(param_1 + 0x18),L"UseMaxDepth",0)
    ;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b00080 FUN_141b00080 body=325 status=ok
// SIG undefined FUN_141b00080(void)

undefined8 * FUN_141b00080(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x140);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_141d89a50(puVar2,param_1);
    *puVar2 = &PTR__scalar_deleting_destructor__144dd4930;
    puVar2[0x22] = 0;
    puVar2[0x23] = 0;
    puVar2[0x24] = 0;
    puVar2[0x25] = 0;
    puVar2[0x26] = 0;
    *(undefined2 *)(puVar2 + 0x27) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    FRWShaderParameter::Bind(puVar2 + 0x22,uVar1,L"InterpolatedVertexData");
    FRWShaderParameter::Bind(puVar2 + 0x23,uVar1,L"SurfelData");
    FRWShaderParameter::Bind(puVar2 + 0x24,uVar1,L"VPLFlux");
    FShaderParameter::Bind(puVar2 + 0x25,*(undefined8 *)(param_1 + 0x18),L"SurfelStartIndex",0);
    FShaderParameter::Bind
              ((longlong)puVar2 + 0x12e,*(undefined8 *)(param_1 + 0x18),L"NumSurfelsToGenerate",0);
    FShaderParameter::Bind
              ((longlong)puVar2 + 0x134,*(undefined8 *)(param_1 + 0x18),L"Instance0InverseTransform"
               ,0);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b001d0 FUN_141b001d0 body=149 status=ok
// SIG undefined FUN_141b001d0(void)

undefined8 * FUN_141b001d0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x150);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf710(puVar1,param_1);
    *puVar1 = &PTR_FUN_144dc7018;
    FShaderUniformBufferParameter::Bind
              (puVar1 + 0x22,*(undefined8 *)(param_1 + 0x18),DAT_146a632c0,0);
    *puVar1 = &PTR_FUN_144dc7018;
    FShaderUniformBufferParameter::Bind
              (puVar1 + 0x22,*(undefined8 *)(param_1 + 0x18),DAT_146a632c0,0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b00270 FUN_141b00270 body=103 status=ok
// SIG undefined FUN_141b00270(void)

undefined8 * FUN_141b00270(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x150);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf710(puVar1,param_1);
    *puVar1 = &PTR_FUN_144dc7048;
    FShaderUniformBufferParameter::Bind
              (puVar1 + 0x22,*(undefined8 *)(param_1 + 0x18),DAT_146a632c0,0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b002e0 ConstructCompiledInstance body=91 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FMissingShaderPS::ConstructCompiledInstance(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dd4a68;
    puVar1[0x18] = &PTR_LAB_144dd4a98;
    return puVar1;
  }
  return (undefined8 *)0x0;
}


