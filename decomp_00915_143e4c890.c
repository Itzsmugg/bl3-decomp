// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143e4c890 FUN_143e4c890 body=66 status=ok
// SIG undefined FUN_143e4c890(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e4c890(void)

{
  _DAT_146869fc8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e4c8cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146869fd0,1);
  return;
}



// FUNCTION 143e4c8e0 FUN_143e4c8e0 body=66 status=ok
// SIG undefined FUN_143e4c8e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e4c8e0(void)

{
  _DAT_146869fb8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e4c91b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146869fc0,1);
  return;
}



// FUNCTION 143e4c970 FUN_143e4c970 body=66 status=ok
// SIG undefined FUN_143e4c970(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e4c970(void)

{
  _DAT_146869ff8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e4c9ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_14686a000,1);
  return;
}



// FUNCTION 143e4cc40 FUN_143e4cc40 body=80 status=ok
// SIG undefined FUN_143e4cc40(void)

void FUN_143e4cc40(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686a508;
  if (DAT_14686a508 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686a508 + 1;
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



// FUNCTION 143e4cc90 FUN_143e4cc90 body=80 status=ok
// SIG undefined FUN_143e4cc90(void)

void FUN_143e4cc90(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686a4c0;
  if (DAT_14686a4c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686a4c0 + 1;
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



// FUNCTION 143e4cd00 FUN_143e4cd00 body=66 status=ok
// SIG undefined FUN_143e4cd00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e4cd00(void)

{
  _DAT_14686a600 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e4cd3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_14686a608,1);
  return;
}



// FUNCTION 143e4cd50 FUN_143e4cd50 body=66 status=ok
// SIG undefined FUN_143e4cd50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e4cd50(void)

{
  _DAT_14686a640 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e4cd8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_14686a648,1);
  return;
}



// FUNCTION 143e4cda0 FUN_143e4cda0 body=66 status=ok
// SIG undefined FUN_143e4cda0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e4cda0(void)

{
  _DAT_14686a5e8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e4cddb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_14686a5f0,1);
  return;
}



// FUNCTION 143e4cdf0 FUN_143e4cdf0 body=66 status=ok
// SIG undefined FUN_143e4cdf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e4cdf0(void)

{
  _DAT_14686a5b8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e4ce2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_14686a5c0,1);
  return;
}



// FUNCTION 143e4ce40 FUN_143e4ce40 body=66 status=ok
// SIG undefined FUN_143e4ce40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e4ce40(void)

{
  _DAT_14686a5d0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e4ce7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_14686a5d8,1);
  return;
}



// FUNCTION 143e4ce90 FUN_143e4ce90 body=66 status=ok
// SIG undefined FUN_143e4ce90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e4ce90(void)

{
  _DAT_14686a660 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e4cecb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_14686a668,1);
  return;
}



// FUNCTION 143e4cfa0 FUN_143e4cfa0 body=80 status=ok
// SIG undefined FUN_143e4cfa0(void)

void FUN_143e4cfa0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686a550;
  if (DAT_14686a550 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686a550 + 1;
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



// FUNCTION 143e4d030 FUN_143e4d030 body=101 status=ok
// SIG undefined FUN_143e4d030(void)

void FUN_143e4d030(void)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = DAT_14686a610;
  iVar2 = DAT_14686a618;
  if (DAT_14686a620 != 0) {
    FMemory::Free();
    plVar1 = DAT_14686a610;
    iVar2 = DAT_14686a618;
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 5;
  }
  if (DAT_14686a610 != (longlong *)0x0) {
    FMemory::Free(DAT_14686a610);
  }
  return;
}



// FUNCTION 143e4d160 FUN_143e4d160 body=80 status=ok
// SIG undefined FUN_143e4d160(void)

void FUN_143e4d160(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686a538;
  if (DAT_14686a538 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686a538 + 1;
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



// FUNCTION 143e4d2f0 FUN_143e4d2f0 body=80 status=ok
// SIG undefined FUN_143e4d2f0(void)

void FUN_143e4d2f0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686a520;
  if (DAT_14686a520 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686a520 + 1;
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



// FUNCTION 143e4d990 FUN_143e4d990 body=80 status=ok
// SIG undefined FUN_143e4d990(void)

void FUN_143e4d990(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686a4f0;
  if (DAT_14686a4f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686a4f0 + 1;
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



// FUNCTION 143e4d9e0 FUN_143e4d9e0 body=80 status=ok
// SIG undefined FUN_143e4d9e0(void)

void FUN_143e4d9e0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686a4d8;
  if (DAT_14686a4d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686a4d8 + 1;
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



// FUNCTION 143e4e010 FUN_143e4e010 body=80 status=ok
// SIG undefined FUN_143e4e010(void)

void FUN_143e4e010(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686ad40;
  if (DAT_14686ad40 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686ad40 + 1;
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



// FUNCTION 143e4e080 FUN_143e4e080 body=66 status=ok
// SIG undefined FUN_143e4e080(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e4e080(void)

{
  _DAT_14686ae50 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e4e0bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_14686ae58,1);
  return;
}



// FUNCTION 143e4e210 FUN_143e4e210 body=12 status=ok
// SIG undefined FUN_143e4e210(void)

void FUN_143e4e210(void)

{
  FUN_140bfeeb0(&DAT_14686ae38);
  return;
}



// FUNCTION 143e4e260 FUN_143e4e260 body=17 status=ok
// SIG undefined FUN_143e4e260(void)

void FUN_143e4e260(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14686ada8;
  if (DAT_14686ada8 == 0) {
    return;
  }
  if (DAT_14686ada8 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  return;
}



// FUNCTION 143e4e360 FUN_143e4e360 body=93 status=ok
// SIG undefined FUN_143e4e360(void)

void FUN_143e4e360(void)

{
  longlong *plVar1;
  undefined8 local_res8 [4];
  
  PTR_PTR_146298ad0 = (undefined *)&PTR_FUN_144332cb8;
  plVar1 = (longlong *)FUN_141593110();
  FName::FName(local_res8,L"GbxPerfAnalyticsProvider",1);
  (**(code **)(*plVar1 + 0x20))(plVar1,local_res8[0],&DAT_146298ad8);
  PTR_PTR_146298ad0 = (undefined *)&PTR_FUN_143f4c8e0;
  return;
}



// FUNCTION 143e4e7b0 FUN_143e4e7b0 body=17 status=ok
// SIG undefined FUN_143e4e7b0(void)

void FUN_143e4e7b0(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14686b3d8;
  if (DAT_14686b3d8 == 0) {
    return;
  }
  if (DAT_14686b3d8 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  return;
}



// FUNCTION 143e4eb10 FUN_143e4eb10 body=186 status=ok
// SIG undefined FUN_143e4eb10(void)

void FUN_143e4eb10(void)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if (DAT_14686b3c8 != 0) {
    plVar2 = (longlong *)(DAT_14686b3c0 + 0x58);
    iVar3 = DAT_14686b3c8;
    do {
      *plVar2 = (longlong)&PTR_FUN_144336f68;
      lVar1 = plVar2[1];
      while (lVar1 != 0) {
        lVar1 = *(longlong *)(plVar2[1] + 0x20);
        FMemory::operator_delete(plVar2[1],0x30);
        plVar2[1] = lVar1;
      }
      plVar2[2] = 0;
      plVar2[1] = 0;
      (**(code **)(*plVar2 + 8))(plVar2,0);
      plVar2 = plVar2 + 0xf;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (DAT_14686b3c0 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 143e4ec70 FUN_143e4ec70 body=12 status=ok
// SIG undefined FUN_143e4ec70(void)

void FUN_143e4ec70(void)

{
  FUN_140bfeeb0(&DAT_14686ae28);
  return;
}



// FUNCTION 143e4ecc0 FUN_143e4ecc0 body=17 status=ok
// SIG undefined FUN_143e4ecc0(void)

void FUN_143e4ecc0(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14686b3a8;
  if (DAT_14686b3a8 == 0) {
    return;
  }
  if (DAT_14686b3a8 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  return;
}



// FUNCTION 143e4f060 FUN_143e4f060 body=80 status=ok
// SIG undefined FUN_143e4f060(void)

void FUN_143e4f060(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686c240;
  if (DAT_14686c240 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686c240 + 1;
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



// FUNCTION 143e4f0d0 FUN_143e4f0d0 body=66 status=ok
// SIG undefined FUN_143e4f0d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e4f0d0(void)

{
  _DAT_14686c1d8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e4f10b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_14686c1e0,1);
  return;
}



// FUNCTION 143e4f1e0 FUN_143e4f1e0 body=80 status=ok
// SIG undefined FUN_143e4f1e0(void)

void FUN_143e4f1e0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686c288;
  if (DAT_14686c288 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686c288 + 1;
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



// FUNCTION 143e4f310 FUN_143e4f310 body=80 status=ok
// SIG undefined FUN_143e4f310(void)

void FUN_143e4f310(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686c270;
  if (DAT_14686c270 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686c270 + 1;
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



// FUNCTION 143e4f480 FUN_143e4f480 body=80 status=ok
// SIG undefined FUN_143e4f480(void)

void FUN_143e4f480(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686c258;
  if (DAT_14686c258 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686c258 + 1;
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



// FUNCTION 143e4fae0 FUN_143e4fae0 body=80 status=ok
// SIG undefined FUN_143e4fae0(void)

void FUN_143e4fae0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686c228;
  if (DAT_14686c228 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686c228 + 1;
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



// FUNCTION 143e4fb30 FUN_143e4fb30 body=80 status=ok
// SIG undefined FUN_143e4fb30(void)

void FUN_143e4fb30(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686c210;
  if (DAT_14686c210 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686c210 + 1;
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



// FUNCTION 143e4ffc0 FUN_143e4ffc0 body=80 status=ok
// SIG undefined FUN_143e4ffc0(void)

void FUN_143e4ffc0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686caa8;
  if (DAT_14686caa8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686caa8 + 1;
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



// FUNCTION 143e500d0 FUN_143e500d0 body=80 status=ok
// SIG undefined FUN_143e500d0(void)

void FUN_143e500d0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686c998;
  if (DAT_14686c998 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686c998 + 1;
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



// FUNCTION 143e50140 FUN_143e50140 body=66 status=ok
// SIG undefined FUN_143e50140(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e50140(void)

{
  _DAT_14686cb30 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e5017b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_14686cb38,1);
  return;
}



// FUNCTION 143e50190 FUN_143e50190 body=66 status=ok
// SIG undefined FUN_143e50190(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e50190(void)

{
  _DAT_14686cb60 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e501cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_14686cb68,1);
  return;
}



// FUNCTION 143e501e0 FUN_143e501e0 body=66 status=ok
// SIG undefined FUN_143e501e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e501e0(void)

{
  _DAT_14686cb50 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e5021b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_14686cb58,1);
  return;
}



// FUNCTION 143e50230 FUN_143e50230 body=66 status=ok
// SIG undefined FUN_143e50230(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e50230(void)

{
  _DAT_14686cb20 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e5026b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_14686cb28,1);
  return;
}



// FUNCTION 143e50280 FUN_143e50280 body=66 status=ok
// SIG undefined FUN_143e50280(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e50280(void)

{
  _DAT_14686cb40 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e502bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_14686cb48,1);
  return;
}



// FUNCTION 143e502d0 FUN_143e502d0 body=66 status=ok
// SIG undefined FUN_143e502d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e502d0(void)

{
  _DAT_14686cb10 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e5030b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_14686cb18,1);
  return;
}



// FUNCTION 143e50320 FUN_143e50320 body=66 status=ok
// SIG undefined FUN_143e50320(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e50320(void)

{
  _DAT_14686c9a8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e5035b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_14686c9b0,1);
  return;
}



// FUNCTION 143e50370 FUN_143e50370 body=66 status=ok
// SIG undefined FUN_143e50370(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e50370(void)

{
  _DAT_14686ca18 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e503ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_14686ca20,1);
  return;
}



// FUNCTION 143e503c0 FUN_143e503c0 body=66 status=ok
// SIG undefined FUN_143e503c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e503c0(void)

{
  _DAT_14686ca78 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e503fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_14686ca80,1);
  return;
}



// FUNCTION 143e50410 FUN_143e50410 body=66 status=ok
// SIG undefined FUN_143e50410(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e50410(void)

{
  _DAT_14686ca60 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e5044b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_14686ca68,1);
  return;
}



// FUNCTION 143e50460 FUN_143e50460 body=66 status=ok
// SIG undefined FUN_143e50460(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e50460(void)

{
  _DAT_14686ca48 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e5049b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_14686ca50,1);
  return;
}



// FUNCTION 143e504b0 FUN_143e504b0 body=66 status=ok
// SIG undefined FUN_143e504b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e504b0(void)

{
  _DAT_14686ca30 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e504eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_14686ca38,1);
  return;
}



// FUNCTION 143e50880 FUN_143e50880 body=80 status=ok
// SIG undefined FUN_143e50880(void)

void FUN_143e50880(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686ca98;
  if (DAT_14686ca98 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686ca98 + 1;
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



// FUNCTION 143e51050 FUN_143e51050 body=17 status=ok
// SIG undefined FUN_143e51050(void)

void FUN_143e51050(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14686c930;
  if (DAT_14686c930 == 0) {
    return;
  }
  if (DAT_14686c930 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  return;
}



// FUNCTION 143e512a0 FUN_143e512a0 body=80 status=ok
// SIG undefined FUN_143e512a0(void)

void FUN_143e512a0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686ded0;
  if (DAT_14686ded0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686ded0 + 1;
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



// FUNCTION 143e512f0 FUN_143e512f0 body=80 status=ok
// SIG undefined FUN_143e512f0(void)

void FUN_143e512f0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686df30;
  if (DAT_14686df30 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686df30 + 1;
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



// FUNCTION 143e51360 FUN_143e51360 body=66 status=ok
// SIG undefined FUN_143e51360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e51360(void)

{
  _DAT_14686dfe8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e5139b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_14686dff0,1);
  return;
}



// FUNCTION 143e513b0 FUN_143e513b0 body=66 status=ok
// SIG undefined FUN_143e513b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e513b0(void)

{
  _DAT_14686dff8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e513eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_14686e000,1);
  return;
}



// FUNCTION 143e514c0 FUN_143e514c0 body=80 status=ok
// SIG undefined FUN_143e514c0(void)

void FUN_143e514c0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686df18;
  if (DAT_14686df18 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686df18 + 1;
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



// FUNCTION 143e51610 FUN_143e51610 body=80 status=ok
// SIG undefined FUN_143e51610(void)

void FUN_143e51610(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686df00;
  if (DAT_14686df00 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686df00 + 1;
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



// FUNCTION 143e516a0 FUN_143e516a0 body=80 status=ok
// SIG undefined FUN_143e516a0(void)

void FUN_143e516a0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686e158;
  if (DAT_14686e158 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686e158 + 1;
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



// FUNCTION 143e517d0 FUN_143e517d0 body=80 status=ok
// SIG undefined FUN_143e517d0(void)

void FUN_143e517d0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686dee8;
  if (DAT_14686dee8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686dee8 + 1;
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



// FUNCTION 143e51940 FUN_143e51940 body=80 status=ok
// SIG undefined FUN_143e51940(void)

void FUN_143e51940(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686e228;
  if (DAT_14686e228 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686e228 + 1;
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



// FUNCTION 143e51d70 FUN_143e51d70 body=80 status=ok
// SIG undefined FUN_143e51d70(void)

void FUN_143e51d70(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686e208;
  if (DAT_14686e208 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686e208 + 1;
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



// FUNCTION 143e51ec0 FUN_143e51ec0 body=80 status=ok
// SIG undefined FUN_143e51ec0(void)

void FUN_143e51ec0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686deb8;
  if (DAT_14686deb8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686deb8 + 1;
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



// FUNCTION 143e51f10 FUN_143e51f10 body=80 status=ok
// SIG undefined FUN_143e51f10(void)

void FUN_143e51f10(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686dea0;
  if (DAT_14686dea0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686dea0 + 1;
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



// FUNCTION 143e52080 FUN_143e52080 body=69 status=ok
// SIG undefined FUN_143e52080(void)

void FUN_143e52080(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = 2;
  puVar3 = &DAT_14686e0e8;
  do {
    plVar1 = puVar3 + -5;
    puVar3 = puVar3 + -5;
    lVar2 = lVar2 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar2 != 0);
  return;
}



// FUNCTION 143e52150 FUN_143e52150 body=69 status=ok
// SIG undefined FUN_143e52150(void)

void FUN_143e52150(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = 2;
  puVar3 = &DAT_14686e138;
  do {
    plVar1 = puVar3 + -5;
    puVar3 = puVar3 + -5;
    lVar2 = lVar2 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar2 != 0);
  return;
}



// FUNCTION 143e52d20 FUN_143e52d20 body=80 status=ok
// SIG undefined FUN_143e52d20(void)

void FUN_143e52d20(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686ed78;
  if (DAT_14686ed78 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686ed78 + 1;
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



// FUNCTION 143e52d70 FUN_143e52d70 body=80 status=ok
// SIG undefined FUN_143e52d70(void)

void FUN_143e52d70(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686ecb0;
  if (DAT_14686ecb0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686ecb0 + 1;
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



// FUNCTION 143e52ea0 FUN_143e52ea0 body=80 status=ok
// SIG undefined FUN_143e52ea0(void)

void FUN_143e52ea0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686edc0;
  if (DAT_14686edc0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686edc0 + 1;
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



// FUNCTION 143e52fd0 FUN_143e52fd0 body=80 status=ok
// SIG undefined FUN_143e52fd0(void)

void FUN_143e52fd0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686eda8;
  if (DAT_14686eda8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686eda8 + 1;
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



// FUNCTION 143e53140 FUN_143e53140 body=80 status=ok
// SIG undefined FUN_143e53140(void)

void FUN_143e53140(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686ed90;
  if (DAT_14686ed90 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686ed90 + 1;
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



// FUNCTION 143e53760 FUN_143e53760 body=80 status=ok
// SIG undefined FUN_143e53760(void)

void FUN_143e53760(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686ed60;
  if (DAT_14686ed60 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686ed60 + 1;
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



// FUNCTION 143e537b0 FUN_143e537b0 body=80 status=ok
// SIG undefined FUN_143e537b0(void)

void FUN_143e537b0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686ed48;
  if (DAT_14686ed48 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686ed48 + 1;
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



// FUNCTION 143e53c60 FUN_143e53c60 body=17 status=ok
// SIG undefined FUN_143e53c60(void)

void FUN_143e53c60(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14686f2b0;
  if (DAT_14686f2b0 == 0) {
    return;
  }
  if (DAT_14686f2b0 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  return;
}



// FUNCTION 143e53ca0 FUN_143e53ca0 body=12 status=ok
// SIG undefined FUN_143e53ca0(void)

void FUN_143e53ca0(void)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&DAT_14629b2c8);
  return;
}



// FUNCTION 143e53cb0 FUN_143e53cb0 body=17 status=ok
// SIG undefined FUN_143e53cb0(void)

void FUN_143e53cb0(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14686f4b8;
  if (DAT_14686f4b8 == 0) {
    return;
  }
  if (DAT_14686f4b8 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  return;
}



// FUNCTION 143e53cd0 FUN_143e53cd0 body=12 status=ok
// SIG undefined FUN_143e53cd0(void)

void FUN_143e53cd0(void)

{
  FUN_140b9c710(&DAT_14686f3a8);
  return;
}



// FUNCTION 143e53ce0 FUN_143e53ce0 body=17 status=ok
// SIG undefined FUN_143e53ce0(void)

void FUN_143e53ce0(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14686f4a8;
  if (DAT_14686f4a8 == 0) {
    return;
  }
  if (DAT_14686f4a8 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  return;
}



// FUNCTION 143e53d60 FUN_143e53d60 body=80 status=ok
// SIG undefined FUN_143e53d60(void)

void FUN_143e53d60(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686f2a0;
  if (DAT_14686f2a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686f2a0 + 1;
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



// FUNCTION 143e54290 FUN_143e54290 body=80 status=ok
// SIG undefined FUN_143e54290(void)

void FUN_143e54290(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686f620;
  if (DAT_14686f620 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686f620 + 1;
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



// FUNCTION 143e542e0 FUN_143e542e0 body=80 status=ok
// SIG undefined FUN_143e542e0(void)

void FUN_143e542e0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686f608;
  if (DAT_14686f608 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686f608 + 1;
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



// FUNCTION 143e54330 FUN_143e54330 body=80 status=ok
// SIG undefined FUN_143e54330(void)

void FUN_143e54330(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686f500;
  if (DAT_14686f500 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686f500 + 1;
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



// FUNCTION 143e54380 FUN_143e54380 body=80 status=ok
// SIG undefined FUN_143e54380(void)

void FUN_143e54380(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686f4e8;
  if (DAT_14686f4e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686f4e8 + 1;
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



// FUNCTION 143e543d0 FUN_143e543d0 body=80 status=ok
// SIG undefined FUN_143e543d0(void)

void FUN_143e543d0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686f4d0;
  if (DAT_14686f4d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686f4d0 + 1;
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



// FUNCTION 143e54420 FUN_143e54420 body=80 status=ok
// SIG undefined FUN_143e54420(void)

void FUN_143e54420(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686f638;
  if (DAT_14686f638 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686f638 + 1;
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



// FUNCTION 143e54470 FUN_143e54470 body=80 status=ok
// SIG undefined FUN_143e54470(void)

void FUN_143e54470(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686f5c0;
  if (DAT_14686f5c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686f5c0 + 1;
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



// FUNCTION 143e544c0 FUN_143e544c0 body=80 status=ok
// SIG undefined FUN_143e544c0(void)

void FUN_143e544c0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686f5a8;
  if (DAT_14686f5a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686f5a8 + 1;
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



// FUNCTION 143e54510 FUN_143e54510 body=80 status=ok
// SIG undefined FUN_143e54510(void)

void FUN_143e54510(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686f5f0;
  if (DAT_14686f5f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686f5f0 + 1;
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



// FUNCTION 143e54560 FUN_143e54560 body=80 status=ok
// SIG undefined FUN_143e54560(void)

void FUN_143e54560(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686f5d8;
  if (DAT_14686f5d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686f5d8 + 1;
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



// FUNCTION 143e545b0 FUN_143e545b0 body=80 status=ok
// SIG undefined FUN_143e545b0(void)

void FUN_143e545b0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686f650;
  if (DAT_14686f650 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686f650 + 1;
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



// FUNCTION 143e54600 FUN_143e54600 body=80 status=ok
// SIG undefined FUN_143e54600(void)

void FUN_143e54600(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686f560;
  if (DAT_14686f560 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686f560 + 1;
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



// FUNCTION 143e54650 FUN_143e54650 body=80 status=ok
// SIG undefined FUN_143e54650(void)

void FUN_143e54650(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686f578;
  if (DAT_14686f578 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686f578 + 1;
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



// FUNCTION 143e546a0 FUN_143e546a0 body=80 status=ok
// SIG undefined FUN_143e546a0(void)

void FUN_143e546a0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686f590;
  if (DAT_14686f590 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686f590 + 1;
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



// FUNCTION 143e546f0 FUN_143e546f0 body=80 status=ok
// SIG undefined FUN_143e546f0(void)

void FUN_143e546f0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686f518;
  if (DAT_14686f518 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686f518 + 1;
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



// FUNCTION 143e54740 FUN_143e54740 body=80 status=ok
// SIG undefined FUN_143e54740(void)

void FUN_143e54740(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686f548;
  if (DAT_14686f548 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686f548 + 1;
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



// FUNCTION 143e54790 FUN_143e54790 body=80 status=ok
// SIG undefined FUN_143e54790(void)

void FUN_143e54790(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686f530;
  if (DAT_14686f530 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686f530 + 1;
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



// FUNCTION 143e54b80 FUN_143e54b80 body=80 status=ok
// SIG undefined FUN_143e54b80(void)

void FUN_143e54b80(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686fc40;
  if (DAT_14686fc40 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686fc40 + 1;
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



// FUNCTION 143e54bd0 FUN_143e54bd0 body=80 status=ok
// SIG undefined FUN_143e54bd0(void)

void FUN_143e54bd0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686fbf8;
  if (DAT_14686fbf8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686fbf8 + 1;
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



// FUNCTION 143e54c40 FUN_143e54c40 body=66 status=ok
// SIG undefined FUN_143e54c40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e54c40(void)

{
  _DAT_14686fb18 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e54c7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_14686fb20,1);
  return;
}



// FUNCTION 143e54c90 FUN_143e54c90 body=66 status=ok
// SIG undefined FUN_143e54c90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e54c90(void)

{
  _DAT_14686fb08 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e54ccb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_14686fb10,1);
  return;
}



// FUNCTION 143e54ce0 FUN_143e54ce0 body=66 status=ok
// SIG undefined FUN_143e54ce0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e54ce0(void)

{
  _DAT_14686fad8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e54d1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_14686fae0,1);
  return;
}



// FUNCTION 143e54d30 FUN_143e54d30 body=66 status=ok
// SIG undefined FUN_143e54d30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e54d30(void)

{
  _DAT_14686fab8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e54d6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_14686fac0,1);
  return;
}



// FUNCTION 143e54d80 FUN_143e54d80 body=66 status=ok
// SIG undefined FUN_143e54d80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e54d80(void)

{
  _DAT_14686fac8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e54dbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_14686fad0,1);
  return;
}



// FUNCTION 143e54dd0 FUN_143e54dd0 body=66 status=ok
// SIG undefined FUN_143e54dd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e54dd0(void)

{
  _DAT_14686fae8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e54e0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_14686faf0,1);
  return;
}



// FUNCTION 143e54e20 FUN_143e54e20 body=66 status=ok
// SIG undefined FUN_143e54e20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e54e20(void)

{
  _DAT_14686faf8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e54e5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_14686fb00,1);
  return;
}



// FUNCTION 143e54e90 FUN_143e54e90 body=66 status=ok
// SIG undefined FUN_143e54e90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e54e90(void)

{
  _DAT_14686fb38 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e54ecb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_14686fb40,1);
  return;
}



// FUNCTION 143e54ee0 FUN_143e54ee0 body=80 status=ok
// SIG undefined FUN_143e54ee0(void)

void FUN_143e54ee0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686fc88;
  if (DAT_14686fc88 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686fc88 + 1;
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



// FUNCTION 143e55010 FUN_143e55010 body=80 status=ok
// SIG undefined FUN_143e55010(void)

void FUN_143e55010(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686fc70;
  if (DAT_14686fc70 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686fc70 + 1;
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



// FUNCTION 143e550e0 FUN_143e550e0 body=80 status=ok
// SIG undefined FUN_143e550e0(void)

void FUN_143e550e0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686fc58;
  if (DAT_14686fc58 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686fc58 + 1;
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



// FUNCTION 143e55490 FUN_143e55490 body=80 status=ok
// SIG undefined FUN_143e55490(void)

void FUN_143e55490(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686fc28;
  if (DAT_14686fc28 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686fc28 + 1;
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



// FUNCTION 143e554e0 FUN_143e554e0 body=80 status=ok
// SIG undefined FUN_143e554e0(void)

void FUN_143e554e0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_14686fc10;
  if (DAT_14686fc10 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14686fc10 + 1;
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



// FUNCTION 143e555b0 FUN_143e555b0 body=66 status=ok
// SIG undefined FUN_143e555b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e555b0(void)

{
  _DAT_14686fb28 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e555eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_14686fb30,1);
  return;
}



// FUNCTION 143e559a0 FUN_143e559a0 body=66 status=ok
// SIG undefined FUN_143e559a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e559a0(void)

{
  _DAT_1468701e0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e559db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1468701e8,1);
  return;
}



// FUNCTION 143e559f0 FUN_143e559f0 body=66 status=ok
// SIG undefined FUN_143e559f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e559f0(void)

{
  _DAT_1468701f8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e55a2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146870200,1);
  return;
}



// FUNCTION 143e55c40 FUN_143e55c40 body=80 status=ok
// SIG undefined FUN_143e55c40(void)

void FUN_143e55c40(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146870248;
  if (DAT_146870248 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146870248 + 1;
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



// FUNCTION 143e567f0 FUN_143e567f0 body=80 status=ok
// SIG undefined FUN_143e567f0(void)

void FUN_143e567f0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146870900;
  if (DAT_146870900 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146870900 + 1;
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



// FUNCTION 143e56860 FUN_143e56860 body=66 status=ok
// SIG undefined FUN_143e56860(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e56860(void)

{
  _DAT_146870958 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e5689b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146870960,1);
  return;
}



// FUNCTION 143e56970 FUN_143e56970 body=80 status=ok
// SIG undefined FUN_143e56970(void)

void FUN_143e56970(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146870948;
  if (DAT_146870948 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146870948 + 1;
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



// FUNCTION 143e56aa0 FUN_143e56aa0 body=80 status=ok
// SIG undefined FUN_143e56aa0(void)

void FUN_143e56aa0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146870930;
  if (DAT_146870930 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146870930 + 1;
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



// FUNCTION 143e56c10 FUN_143e56c10 body=80 status=ok
// SIG undefined FUN_143e56c10(void)

void FUN_143e56c10(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146870918;
  if (DAT_146870918 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146870918 + 1;
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



// FUNCTION 143e57240 FUN_143e57240 body=80 status=ok
// SIG undefined FUN_143e57240(void)

void FUN_143e57240(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1468708e8;
  if (DAT_1468708e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1468708e8 + 1;
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



// FUNCTION 143e57290 FUN_143e57290 body=80 status=ok
// SIG undefined FUN_143e57290(void)

void FUN_143e57290(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1468708d0;
  if (DAT_1468708d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1468708d0 + 1;
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



// FUNCTION 143e574a0 FUN_143e574a0 body=66 status=ok
// SIG undefined FUN_143e574a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e574a0(void)

{
  _DAT_1468708a0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e574db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1468708a8,1);
  return;
}



// FUNCTION 143e574f0 FUN_143e574f0 body=66 status=ok
// SIG undefined FUN_143e574f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e574f0(void)

{
  _DAT_146870890 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e5752b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146870898,1);
  return;
}



// FUNCTION 143e57540 FUN_143e57540 body=66 status=ok
// SIG undefined FUN_143e57540(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e57540(void)

{
  _DAT_1468708b0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e5757b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1468708b8,1);
  return;
}



// FUNCTION 143e57670 FUN_143e57670 body=66 status=ok
// SIG undefined FUN_143e57670(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e57670(void)

{
  _DAT_146870880 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e576ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146870888,1);
  return;
}



// FUNCTION 143e57860 FUN_143e57860 body=92 status=ok
// SIG undefined FUN_143e57860(void)

void FUN_143e57860(void)

{
  longlong lVar1;
  
  lVar1 = DAT_146871270;
  if (DAT_146871280 != 0) {
    if (DAT_146871270 == 0) {
      *DAT_146871278 = 0;
      DAT_146871278 = (longlong *)lVar1;
      DAT_146871280 = lVar1;
      return;
    }
    *DAT_146871278 = DAT_146871270;
    *(longlong **)(DAT_146871270 + 8) = DAT_146871278;
    DAT_146871270 = 0;
    DAT_146871278 = (longlong *)0x0;
    DAT_146871280 = 0;
  }
  return;
}



// FUNCTION 143e578c0 FUN_143e578c0 body=17 status=ok
// SIG undefined FUN_143e578c0(void)

void FUN_143e578c0(void)

{
  longlong lVar1;
  
  lVar1 = DAT_146871258;
  if (DAT_146871258 == 0) {
    return;
  }
  if (DAT_146871258 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  return;
}



// FUNCTION 143e578e0 `dynamic_atexit_destructor_for_'Factories'' body=90 status=ok
// SIG undefined `dynamic_atexit_destructor_for_'Factories''(void)

void `anonymous_namespace'::_dynamic_atexit_destructor_for__Factories__(void)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  
  plVar2 = DAT_146871248;
  for (iVar3 = DAT_146871250; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar1 = (undefined8 *)*plVar2;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    plVar2 = plVar2 + 1;
  }
  if (DAT_146871248 != (longlong *)0x0) {
    FMemory::Free(DAT_146871248);
  }
  return;
}



// FUNCTION 143e579a0 FUN_143e579a0 body=80 status=ok
// SIG undefined FUN_143e579a0(void)

void FUN_143e579a0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146871300;
  if (DAT_146871300 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146871300 + 1;
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



// FUNCTION 143e57a30 FUN_143e57a30 body=80 status=ok
// SIG undefined FUN_143e57a30(void)

void FUN_143e57a30(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146871348;
  if (DAT_146871348 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146871348 + 1;
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



// FUNCTION 143e57b60 FUN_143e57b60 body=80 status=ok
// SIG undefined FUN_143e57b60(void)

void FUN_143e57b60(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146871330;
  if (DAT_146871330 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146871330 + 1;
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



// FUNCTION 143e57c30 FUN_143e57c30 body=80 status=ok
// SIG undefined FUN_143e57c30(void)

void FUN_143e57c30(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146871318;
  if (DAT_146871318 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146871318 + 1;
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



// FUNCTION 143e58060 FUN_143e58060 body=80 status=ok
// SIG undefined FUN_143e58060(void)

void FUN_143e58060(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1468712e8;
  if (DAT_1468712e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1468712e8 + 1;
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



// FUNCTION 143e580b0 FUN_143e580b0 body=80 status=ok
// SIG undefined FUN_143e580b0(void)

void FUN_143e580b0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1468712d0;
  if (DAT_1468712d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1468712d0 + 1;
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



// FUNCTION 143e58420 FUN_143e58420 body=92 status=ok
// SIG undefined FUN_143e58420(void)

void FUN_143e58420(void)

{
  longlong lVar1;
  
  lVar1 = DAT_146871b70;
  if (DAT_146871b80 != 0) {
    if (DAT_146871b70 == 0) {
      *DAT_146871b78 = 0;
      DAT_146871b78 = (longlong *)lVar1;
      DAT_146871b80 = lVar1;
      return;
    }
    *DAT_146871b78 = DAT_146871b70;
    *(longlong **)(DAT_146871b70 + 8) = DAT_146871b78;
    DAT_146871b70 = 0;
    DAT_146871b78 = (longlong *)0x0;
    DAT_146871b80 = 0;
  }
  return;
}



// FUNCTION 143e58500 FUN_143e58500 body=80 status=ok
// SIG undefined FUN_143e58500(void)

void FUN_143e58500(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146871b60;
  if (DAT_146871b60 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146871b60 + 1;
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



// FUNCTION 143e58570 FUN_143e58570 body=66 status=ok
// SIG undefined FUN_143e58570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e58570(void)

{
  _DAT_146871b98 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e585ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146871ba0,1);
  return;
}



// FUNCTION 143e585c0 FUN_143e585c0 body=66 status=ok
// SIG undefined FUN_143e585c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e585c0(void)

{
  _DAT_146871b88 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e585fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146871b90,1);
  return;
}



// FUNCTION 143e58610 FUN_143e58610 body=66 status=ok
// SIG undefined FUN_143e58610(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e58610(void)

{
  _DAT_146871bb8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e5864b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146871bc0,1);
  return;
}



// FUNCTION 143e58660 FUN_143e58660 body=66 status=ok
// SIG undefined FUN_143e58660(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e58660(void)

{
  _DAT_146871ba8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e5869b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146871bb0,1);
  return;
}



// FUNCTION 143e58cd0 FUN_143e58cd0 body=80 status=ok
// SIG undefined FUN_143e58cd0(void)

void FUN_143e58cd0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146871bf0;
  if (DAT_146871bf0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146871bf0 + 1;
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



// FUNCTION 143e58d20 FUN_143e58d20 body=80 status=ok
// SIG undefined FUN_143e58d20(void)

void FUN_143e58d20(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146871bd8;
  if (DAT_146871bd8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146871bd8 + 1;
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



// FUNCTION 143e58d70 FUN_143e58d70 body=80 status=ok
// SIG undefined FUN_143e58d70(void)

void FUN_143e58d70(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146871c08;
  if (DAT_146871c08 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146871c08 + 1;
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



// FUNCTION 143e58fc0 FUN_143e58fc0 body=66 status=ok
// SIG undefined FUN_143e58fc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e58fc0(void)

{
  _DAT_146872268 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e58ffb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146872270,1);
  return;
}



// FUNCTION 143e59010 FUN_143e59010 body=66 status=ok
// SIG undefined FUN_143e59010(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e59010(void)

{
  _DAT_1468722b0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e5904b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1468722b8,1);
  return;
}



// FUNCTION 143e59060 FUN_143e59060 body=66 status=ok
// SIG undefined FUN_143e59060(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e59060(void)

{
  _DAT_1468722e0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e5909b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1468722e8,1);
  return;
}



// FUNCTION 143e596b0 FUN_143e596b0 body=80 status=ok
// SIG undefined FUN_143e596b0(void)

void FUN_143e596b0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146872288;
  if (DAT_146872288 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146872288 + 1;
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



// FUNCTION 143e59700 FUN_143e59700 body=80 status=ok
// SIG undefined FUN_143e59700(void)

void FUN_143e59700(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1468722a0;
  if (DAT_1468722a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1468722a0 + 1;
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



// FUNCTION 143e59950 FUN_143e59950 body=66 status=ok
// SIG undefined FUN_143e59950(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e59950(void)

{
  _DAT_146872828 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e5998b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146872830,1);
  return;
}



// FUNCTION 143e599a0 FUN_143e599a0 body=66 status=ok
// SIG undefined FUN_143e599a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e599a0(void)

{
  _DAT_146872900 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e599db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146872908,1);
  return;
}



// FUNCTION 143e599f0 FUN_143e599f0 body=66 status=ok
// SIG undefined FUN_143e599f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e599f0(void)

{
  _DAT_146872918 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e59a2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146872920,1);
  return;
}



// FUNCTION 143e59a40 FUN_143e59a40 body=66 status=ok
// SIG undefined FUN_143e59a40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e59a40(void)

{
  _DAT_1468728e8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e59a7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1468728f0,1);
  return;
}



// FUNCTION 143e59a90 FUN_143e59a90 body=66 status=ok
// SIG undefined FUN_143e59a90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e59a90(void)

{
  _DAT_146872850 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e59acb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146872858,1);
  return;
}



// FUNCTION 143e59ae0 FUN_143e59ae0 body=66 status=ok
// SIG undefined FUN_143e59ae0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e59ae0(void)

{
  _DAT_146872840 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e59b1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146872848,1);
  return;
}



// FUNCTION 143e59e30 FUN_143e59e30 body=80 status=ok
// SIG undefined FUN_143e59e30(void)

void FUN_143e59e30(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1468729c8;
  if (DAT_1468729c8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1468729c8 + 1;
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



// FUNCTION 143e5a360 FUN_143e5a360 body=66 status=ok
// SIG undefined FUN_143e5a360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e5a360(void)

{
  _DAT_146872e20 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e5a39b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146872e28,1);
  return;
}



// FUNCTION 143e5a3b0 FUN_143e5a3b0 body=66 status=ok
// SIG undefined FUN_143e5a3b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e5a3b0(void)

{
  _DAT_146872e08 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e5a3eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146872e10,1);
  return;
}



// FUNCTION 143e5a400 FUN_143e5a400 body=66 status=ok
// SIG undefined FUN_143e5a400(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e5a400(void)

{
  _DAT_146872e68 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e5a43b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146872e70,1);
  return;
}



// FUNCTION 143e5a450 FUN_143e5a450 body=66 status=ok
// SIG undefined FUN_143e5a450(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e5a450(void)

{
  _DAT_146872e80 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e5a48b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146872e88,1);
  return;
}



// FUNCTION 143e5acc0 FUN_143e5acc0 body=80 status=ok
// SIG undefined FUN_143e5acc0(void)

void FUN_143e5acc0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1468733b8;
  if (DAT_1468733b8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1468733b8 + 1;
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



// FUNCTION 143e5ad30 FUN_143e5ad30 body=66 status=ok
// SIG undefined FUN_143e5ad30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e5ad30(void)

{
  _DAT_146873450 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e5ad6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146873458,1);
  return;
}



// FUNCTION 143e5ada0 FUN_143e5ada0 body=80 status=ok
// SIG undefined FUN_143e5ada0(void)

void FUN_143e5ada0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146873400;
  if (DAT_146873400 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146873400 + 1;
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



// FUNCTION 143e5aed0 FUN_143e5aed0 body=80 status=ok
// SIG undefined FUN_143e5aed0(void)

void FUN_143e5aed0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1468733e8;
  if (DAT_1468733e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1468733e8 + 1;
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



// FUNCTION 143e5afa0 FUN_143e5afa0 body=80 status=ok
// SIG undefined FUN_143e5afa0(void)

void FUN_143e5afa0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1468733d0;
  if (DAT_1468733d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1468733d0 + 1;
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



// FUNCTION 143e5b450 FUN_143e5b450 body=80 status=ok
// SIG undefined FUN_143e5b450(void)

void FUN_143e5b450(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1468733a0;
  if (DAT_1468733a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1468733a0 + 1;
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



// FUNCTION 143e5b4a0 FUN_143e5b4a0 body=80 status=ok
// SIG undefined FUN_143e5b4a0(void)

void FUN_143e5b4a0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146873388;
  if (DAT_146873388 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146873388 + 1;
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



// FUNCTION 143e5baf0 FUN_143e5baf0 body=47 status=ok
// SIG undefined FUN_143e5baf0(void)

void FUN_143e5baf0(void)

{
  if (DAT_14629f778 != 0) {
    FMemory::Free();
  }
  if (DAT_14629f768 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 143e5bf60 FUN_143e5bf60 body=80 status=ok
// SIG undefined FUN_143e5bf60(void)

void FUN_143e5bf60(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146873968;
  if (DAT_146873968 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146873968 + 1;
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



// FUNCTION 143e5c290 FUN_143e5c290 body=80 status=ok
// SIG undefined FUN_143e5c290(void)

void FUN_143e5c290(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1468744d8;
  if (DAT_1468744d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1468744d8 + 1;
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



// FUNCTION 143e5c340 FUN_143e5c340 body=80 status=ok
// SIG undefined FUN_143e5c340(void)

void FUN_143e5c340(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146873dd0;
  if (DAT_146873dd0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146873dd0 + 1;
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



// FUNCTION 143e5c3b0 FUN_143e5c3b0 body=66 status=ok
// SIG undefined FUN_143e5c3b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e5c3b0(void)

{
  _DAT_146873eb8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e5c3eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146873ec0,1);
  return;
}



// FUNCTION 143e5c400 FUN_143e5c400 body=66 status=ok
// SIG undefined FUN_143e5c400(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e5c400(void)

{
  _DAT_146873ea0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e5c43b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146873ea8,1);
  return;
}



// FUNCTION 143e5c450 FUN_143e5c450 body=66 status=ok
// SIG undefined FUN_143e5c450(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e5c450(void)

{
  _DAT_146873e88 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e5c48b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146873e90,1);
  return;
}



// FUNCTION 143e5c4a0 FUN_143e5c4a0 body=66 status=ok
// SIG undefined FUN_143e5c4a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e5c4a0(void)

{
  _DAT_146873e70 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e5c4db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146873e78,1);
  return;
}



// FUNCTION 143e5c5b0 FUN_143e5c5b0 body=80 status=ok
// SIG undefined FUN_143e5c5b0(void)

void FUN_143e5c5b0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1468743c0;
  if (DAT_1468743c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1468743c0 + 1;
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



// FUNCTION 143e5c620 FUN_143e5c620 body=80 status=ok
// SIG undefined FUN_143e5c620(void)

void FUN_143e5c620(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1468744f8;
  if (DAT_1468744f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1468744f8 + 1;
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



// FUNCTION 143e5c690 FUN_143e5c690 body=80 status=ok
// SIG undefined FUN_143e5c690(void)

void FUN_143e5c690(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146874478;
  if (DAT_146874478 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146874478 + 1;
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



// FUNCTION 143e5c6e0 FUN_143e5c6e0 body=80 status=ok
// SIG undefined FUN_143e5c6e0(void)

void FUN_143e5c6e0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146874498;
  if (DAT_146874498 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146874498 + 1;
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



// FUNCTION 143e5c730 FUN_143e5c730 body=80 status=ok
// SIG undefined FUN_143e5c730(void)

void FUN_143e5c730(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1468740d8;
  if (DAT_1468740d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1468740d8 + 1;
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



// FUNCTION 143e5c780 FUN_143e5c780 body=80 status=ok
// SIG undefined FUN_143e5c780(void)

void FUN_143e5c780(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1468740b8;
  if (DAT_1468740b8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1468740b8 + 1;
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



// FUNCTION 143e5c7d0 FUN_143e5c7d0 body=80 status=ok
// SIG undefined FUN_143e5c7d0(void)

void FUN_143e5c7d0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146874178;
  if (DAT_146874178 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146874178 + 1;
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



// FUNCTION 143e5c820 FUN_143e5c820 body=80 status=ok
// SIG undefined FUN_143e5c820(void)

void FUN_143e5c820(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1468742f8;
  if (DAT_1468742f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1468742f8 + 1;
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



// FUNCTION 143e5c870 FUN_143e5c870 body=80 status=ok
// SIG undefined FUN_143e5c870(void)

void FUN_143e5c870(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146874318;
  if (DAT_146874318 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146874318 + 1;
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



// FUNCTION 143e5c8c0 FUN_143e5c8c0 body=80 status=ok
// SIG undefined FUN_143e5c8c0(void)

void FUN_143e5c8c0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146874218;
  if (DAT_146874218 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146874218 + 1;
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



// FUNCTION 143e5c910 FUN_143e5c910 body=80 status=ok
// SIG undefined FUN_143e5c910(void)

void FUN_143e5c910(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146874018;
  if (DAT_146874018 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146874018 + 1;
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



// FUNCTION 143e5c960 FUN_143e5c960 body=80 status=ok
// SIG undefined FUN_143e5c960(void)

void FUN_143e5c960(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146874058;
  if (DAT_146874058 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146874058 + 1;
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



// FUNCTION 143e5c9b0 FUN_143e5c9b0 body=80 status=ok
// SIG undefined FUN_143e5c9b0(void)

void FUN_143e5c9b0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146874258;
  if (DAT_146874258 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146874258 + 1;
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



// FUNCTION 143e5ca00 FUN_143e5ca00 body=80 status=ok
// SIG undefined FUN_143e5ca00(void)

void FUN_143e5ca00(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146874438;
  if (DAT_146874438 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146874438 + 1;
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



// FUNCTION 143e5ca50 FUN_143e5ca50 body=80 status=ok
// SIG undefined FUN_143e5ca50(void)

void FUN_143e5ca50(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146873f28;
  if (DAT_146873f28 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146873f28 + 1;
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



// FUNCTION 143e5caa0 FUN_143e5caa0 body=80 status=ok
// SIG undefined FUN_143e5caa0(void)

void FUN_143e5caa0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146873fb8;
  if (DAT_146873fb8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146873fb8 + 1;
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



// FUNCTION 143e5caf0 FUN_143e5caf0 body=80 status=ok
// SIG undefined FUN_143e5caf0(void)

void FUN_143e5caf0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1468741d8;
  if (DAT_1468741d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1468741d8 + 1;
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



// FUNCTION 143e5cb40 FUN_143e5cb40 body=80 status=ok
// SIG undefined FUN_143e5cb40(void)

void FUN_143e5cb40(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1468743f8;
  if (DAT_1468743f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1468743f8 + 1;
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



// FUNCTION 143e5cb90 FUN_143e5cb90 body=80 status=ok
// SIG undefined FUN_143e5cb90(void)

void FUN_143e5cb90(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146873f68;
  if (DAT_146873f68 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146873f68 + 1;
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



// FUNCTION 143e5cbe0 FUN_143e5cbe0 body=80 status=ok
// SIG undefined FUN_143e5cbe0(void)

void FUN_143e5cbe0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146874038;
  if (DAT_146874038 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146874038 + 1;
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



// FUNCTION 143e5cc30 FUN_143e5cc30 body=80 status=ok
// SIG undefined FUN_143e5cc30(void)

void FUN_143e5cc30(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146873f48;
  if (DAT_146873f48 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146873f48 + 1;
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



// FUNCTION 143e5cc80 FUN_143e5cc80 body=80 status=ok
// SIG undefined FUN_143e5cc80(void)

void FUN_143e5cc80(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146874078;
  if (DAT_146874078 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146874078 + 1;
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



// FUNCTION 143e5ccd0 FUN_143e5ccd0 body=80 status=ok
// SIG undefined FUN_143e5ccd0(void)

void FUN_143e5ccd0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146874338;
  if (DAT_146874338 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146874338 + 1;
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



// FUNCTION 143e5cd20 FUN_143e5cd20 body=80 status=ok
// SIG undefined FUN_143e5cd20(void)

void FUN_143e5cd20(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1468740f8;
  if (DAT_1468740f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1468740f8 + 1;
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



// FUNCTION 143e5cd70 FUN_143e5cd70 body=80 status=ok
// SIG undefined FUN_143e5cd70(void)

void FUN_143e5cd70(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146874278;
  if (DAT_146874278 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146874278 + 1;
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



// FUNCTION 143e5cdc0 FUN_143e5cdc0 body=80 status=ok
// SIG undefined FUN_143e5cdc0(void)

void FUN_143e5cdc0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146874158;
  if (DAT_146874158 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146874158 + 1;
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



// FUNCTION 143e5ce10 FUN_143e5ce10 body=80 status=ok
// SIG undefined FUN_143e5ce10(void)

void FUN_143e5ce10(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1468742d8;
  if (DAT_1468742d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1468742d8 + 1;
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



// FUNCTION 143e5ce60 FUN_143e5ce60 body=80 status=ok
// SIG undefined FUN_143e5ce60(void)

void FUN_143e5ce60(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146874138;
  if (DAT_146874138 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146874138 + 1;
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



// FUNCTION 143e5ceb0 FUN_143e5ceb0 body=80 status=ok
// SIG undefined FUN_143e5ceb0(void)

void FUN_143e5ceb0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1468742b8;
  if (DAT_1468742b8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1468742b8 + 1;
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



// FUNCTION 143e5cf00 FUN_143e5cf00 body=80 status=ok
// SIG undefined FUN_143e5cf00(void)

void FUN_143e5cf00(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146874118;
  if (DAT_146874118 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146874118 + 1;
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



// FUNCTION 143e5cf50 FUN_143e5cf50 body=80 status=ok
// SIG undefined FUN_143e5cf50(void)

void FUN_143e5cf50(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146874298;
  if (DAT_146874298 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146874298 + 1;
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



// FUNCTION 143e5cfa0 FUN_143e5cfa0 body=80 status=ok
// SIG undefined FUN_143e5cfa0(void)

void FUN_143e5cfa0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146874238;
  if (DAT_146874238 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146874238 + 1;
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



// FUNCTION 143e5cff0 FUN_143e5cff0 body=80 status=ok
// SIG undefined FUN_143e5cff0(void)

void FUN_143e5cff0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146873ff8;
  if (DAT_146873ff8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146873ff8 + 1;
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



// FUNCTION 143e5d040 FUN_143e5d040 body=80 status=ok
// SIG undefined FUN_143e5d040(void)

void FUN_143e5d040(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146874098;
  if (DAT_146874098 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146874098 + 1;
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



// FUNCTION 143e5d090 FUN_143e5d090 body=80 status=ok
// SIG undefined FUN_143e5d090(void)

void FUN_143e5d090(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146874358;
  if (DAT_146874358 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146874358 + 1;
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



// FUNCTION 143e5d0e0 FUN_143e5d0e0 body=80 status=ok
// SIG undefined FUN_143e5d0e0(void)

void FUN_143e5d0e0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146873fd8;
  if (DAT_146873fd8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146873fd8 + 1;
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



// FUNCTION 143e5d130 FUN_143e5d130 body=80 status=ok
// SIG undefined FUN_143e5d130(void)

void FUN_143e5d130(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1468741f8;
  if (DAT_1468741f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1468741f8 + 1;
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



// FUNCTION 143e5d180 FUN_143e5d180 body=80 status=ok
// SIG undefined FUN_143e5d180(void)

void FUN_143e5d180(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146874418;
  if (DAT_146874418 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146874418 + 1;
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



// FUNCTION 143e5d690 FUN_143e5d690 body=80 status=ok
// SIG undefined FUN_143e5d690(void)

void FUN_143e5d690(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1468744b8;
  if (DAT_1468744b8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1468744b8 + 1;
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



// FUNCTION 143e5d820 FUN_143e5d820 body=80 status=ok
// SIG undefined FUN_143e5d820(void)

void FUN_143e5d820(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146874198;
  if (DAT_146874198 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146874198 + 1;
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



// FUNCTION 143e5d870 FUN_143e5d870 body=80 status=ok
// SIG undefined FUN_143e5d870(void)

void FUN_143e5d870(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146874378;
  if (DAT_146874378 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146874378 + 1;
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



// FUNCTION 143e5d8c0 FUN_143e5d8c0 body=80 status=ok
// SIG undefined FUN_143e5d8c0(void)

void FUN_143e5d8c0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1468741b8;
  if (DAT_1468741b8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1468741b8 + 1;
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



// FUNCTION 143e5d910 FUN_143e5d910 body=80 status=ok
// SIG undefined FUN_143e5d910(void)

void FUN_143e5d910(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146874398;
  if (DAT_146874398 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146874398 + 1;
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



// FUNCTION 143e5d980 FUN_143e5d980 body=80 status=ok
// SIG undefined FUN_143e5d980(void)

void FUN_143e5d980(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1468743d8;
  if (DAT_1468743d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1468743d8 + 1;
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



// FUNCTION 143e5db50 FUN_143e5db50 body=80 status=ok
// SIG undefined FUN_143e5db50(void)

void FUN_143e5db50(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146874968;
  if (DAT_146874968 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146874968 + 1;
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



// FUNCTION 143e5dc40 FUN_143e5dc40 body=80 status=ok
// SIG undefined FUN_143e5dc40(void)

void FUN_143e5dc40(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1468749d0;
  if (DAT_1468749d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1468749d0 + 1;
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



// FUNCTION 143e5dcb0 FUN_143e5dcb0 body=66 status=ok
// SIG undefined FUN_143e5dcb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e5dcb0(void)

{
  _DAT_146874978 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e5dceb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146874980,1);
  return;
}



// FUNCTION 143e5dd20 FUN_143e5dd20 body=80 status=ok
// SIG undefined FUN_143e5dd20(void)

void FUN_143e5dd20(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146874a18;
  if (DAT_146874a18 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146874a18 + 1;
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



// FUNCTION 143e5de70 FUN_143e5de70 body=80 status=ok
// SIG undefined FUN_143e5de70(void)

void FUN_143e5de70(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146874a00;
  if (DAT_146874a00 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146874a00 + 1;
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



// FUNCTION 143e5df40 FUN_143e5df40 body=80 status=ok
// SIG undefined FUN_143e5df40(void)

void FUN_143e5df40(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1468749e8;
  if (DAT_1468749e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1468749e8 + 1;
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



// FUNCTION 143e5e1f0 FUN_143e5e1f0 body=80 status=ok
// SIG undefined FUN_143e5e1f0(void)

void FUN_143e5e1f0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146874a60;
  if (DAT_146874a60 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146874a60 + 1;
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



// FUNCTION 143e5e400 FUN_143e5e400 body=80 status=ok
// SIG undefined FUN_143e5e400(void)

void FUN_143e5e400(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1468749b8;
  if (DAT_1468749b8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1468749b8 + 1;
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



// FUNCTION 143e5e450 FUN_143e5e450 body=80 status=ok
// SIG undefined FUN_143e5e450(void)

void FUN_143e5e450(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1468749a0;
  if (DAT_1468749a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1468749a0 + 1;
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



// FUNCTION 143e5e8a0 FUN_143e5e8a0 body=80 status=ok
// SIG undefined FUN_143e5e8a0(void)

void FUN_143e5e8a0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146874f18;
  if (DAT_146874f18 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146874f18 + 1;
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



// FUNCTION 143e5e910 FUN_143e5e910 body=66 status=ok
// SIG undefined FUN_143e5e910(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e5e910(void)

{
  _DAT_146874fc0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e5e94b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146874fc8,1);
  return;
}



// FUNCTION 143e5e980 FUN_143e5e980 body=80 status=ok
// SIG undefined FUN_143e5e980(void)

void FUN_143e5e980(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146874f60;
  if (DAT_146874f60 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146874f60 + 1;
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



// FUNCTION 143e5eab0 FUN_143e5eab0 body=80 status=ok
// SIG undefined FUN_143e5eab0(void)

void FUN_143e5eab0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146874f48;
  if (DAT_146874f48 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146874f48 + 1;
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



// FUNCTION 143e5eb80 FUN_143e5eb80 body=80 status=ok
// SIG undefined FUN_143e5eb80(void)

void FUN_143e5eb80(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146874f30;
  if (DAT_146874f30 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146874f30 + 1;
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



// FUNCTION 143e5ef10 FUN_143e5ef10 body=80 status=ok
// SIG undefined FUN_143e5ef10(void)

void FUN_143e5ef10(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146874f00;
  if (DAT_146874f00 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146874f00 + 1;
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



// FUNCTION 143e5ef60 FUN_143e5ef60 body=80 status=ok
// SIG undefined FUN_143e5ef60(void)

void FUN_143e5ef60(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146874ee8;
  if (DAT_146874ee8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146874ee8 + 1;
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



// FUNCTION 143e5f150 FUN_143e5f150 body=80 status=ok
// SIG undefined FUN_143e5f150(void)

void FUN_143e5f150(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146875040;
  if (DAT_146875040 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146875040 + 1;
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



// FUNCTION 143e5f380 FUN_143e5f380 body=80 status=ok
// SIG undefined FUN_143e5f380(void)

void FUN_143e5f380(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146875510;
  if (DAT_146875510 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146875510 + 1;
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



// FUNCTION 143e5f3f0 FUN_143e5f3f0 body=66 status=ok
// SIG undefined FUN_143e5f3f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e5f3f0(void)

{
  _DAT_146875618 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e5f42b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146875620,1);
  return;
}



// FUNCTION 143e5f440 FUN_143e5f440 body=66 status=ok
// SIG undefined FUN_143e5f440(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e5f440(void)

{
  _DAT_146875600 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e5f47b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146875608,1);
  return;
}



// FUNCTION 143e5f490 FUN_143e5f490 body=66 status=ok
// SIG undefined FUN_143e5f490(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e5f490(void)

{
  _DAT_146875630 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e5f4cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146875638,1);
  return;
}



// FUNCTION 143e5f500 FUN_143e5f500 body=80 status=ok
// SIG undefined FUN_143e5f500(void)

void FUN_143e5f500(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146875558;
  if (DAT_146875558 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146875558 + 1;
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



// FUNCTION 143e5f630 FUN_143e5f630 body=80 status=ok
// SIG undefined FUN_143e5f630(void)

void FUN_143e5f630(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146875540;
  if (DAT_146875540 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146875540 + 1;
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



// FUNCTION 143e5f700 FUN_143e5f700 body=80 status=ok
// SIG undefined FUN_143e5f700(void)

void FUN_143e5f700(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146875528;
  if (DAT_146875528 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146875528 + 1;
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



// FUNCTION 143e5f830 FUN_143e5f830 body=80 status=ok
// SIG undefined FUN_143e5f830(void)

void FUN_143e5f830(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1468755d0;
  if (DAT_1468755d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1468755d0 + 1;
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



// FUNCTION 143e5f880 FUN_143e5f880 body=80 status=ok
// SIG undefined FUN_143e5f880(void)

void FUN_143e5f880(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1468755e8;
  if (DAT_1468755e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1468755e8 + 1;
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



// FUNCTION 143e5fb50 FUN_143e5fb50 body=80 status=ok
// SIG undefined FUN_143e5fb50(void)

void FUN_143e5fb50(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1468754f8;
  if (DAT_1468754f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1468754f8 + 1;
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



// FUNCTION 143e5fba0 FUN_143e5fba0 body=80 status=ok
// SIG undefined FUN_143e5fba0(void)

void FUN_143e5fba0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1468754e0;
  if (DAT_1468754e0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1468754e0 + 1;
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



// FUNCTION 143e5fd70 FUN_143e5fd70 body=80 status=ok
// SIG undefined FUN_143e5fd70(void)

void FUN_143e5fd70(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146875588;
  if (DAT_146875588 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146875588 + 1;
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



// FUNCTION 143e5fde0 FUN_143e5fde0 body=80 status=ok
// SIG undefined FUN_143e5fde0(void)

void FUN_143e5fde0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1468755a0;
  if (DAT_1468755a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1468755a0 + 1;
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



// FUNCTION 143e5fe30 FUN_143e5fe30 body=80 status=ok
// SIG undefined FUN_143e5fe30(void)

void FUN_143e5fe30(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_1468755b8;
  if (DAT_1468755b8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_1468755b8 + 1;
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



// FUNCTION 143e600c0 FUN_143e600c0 body=80 status=ok
// SIG undefined FUN_143e600c0(void)

void FUN_143e600c0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146875b50;
  if (DAT_146875b50 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146875b50 + 1;
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



// FUNCTION 143e60130 FUN_143e60130 body=66 status=ok
// SIG undefined FUN_143e60130(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e60130(void)

{
  _DAT_146875bb0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e6016b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146875bb8,1);
  return;
}



// FUNCTION 143e60240 FUN_143e60240 body=80 status=ok
// SIG undefined FUN_143e60240(void)

void FUN_143e60240(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = DAT_146875b98;
  if (DAT_146875b98 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_146875b98 + 1;
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


