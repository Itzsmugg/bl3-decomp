// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143e85930 `dynamic_atexit_destructor_for_'SafeUniformBufferPools'' body=114 status=ok
// SIG undefined `dynamic_atexit_destructor_for_'SafeUniformBufferPools''(void)

void _dynamic_atexit_destructor_for__SafeUniformBufferPools__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  
  lVar2 = 0x33;
  puVar3 = (undefined8 *)&DAT_1469fcb90;
  do {
    iVar4 = *(int *)(puVar3 + -1);
    puVar3 = puVar3 + -2;
    plVar1 = (longlong *)*puVar3;
    lVar2 = lVar2 + -1;
    if (iVar4 != 0) {
      do {
        if ((longlong *)*plVar1 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar1 + 0x10))();
        }
        plVar1 = plVar1 + 2;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      plVar1 = (longlong *)*puVar3;
    }
    if (plVar1 != (longlong *)0x0) {
      FMemory::Free(plVar1);
    }
  } while (lVar2 != 0);
  return;
}



// FUNCTION 143e859b0 `dynamic_atexit_destructor_for_'UniformBufferPool'' body=114 status=ok
// SIG undefined `dynamic_atexit_destructor_for_'UniformBufferPool''(void)

void _dynamic_atexit_destructor_for__UniformBufferPool__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  
  lVar2 = 0x11;
  puVar3 = &DAT_1469fc860;
  do {
    iVar4 = *(int *)(puVar3 + -1);
    puVar3 = puVar3 + -2;
    plVar1 = (longlong *)*puVar3;
    lVar2 = lVar2 + -1;
    if (iVar4 != 0) {
      do {
        if ((longlong *)*plVar1 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar1 + 0x10))();
        }
        plVar1 = plVar1 + 2;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      plVar1 = (longlong *)*puVar3;
    }
    if (plVar1 != (longlong *)0x0) {
      FMemory::Free(plVar1);
    }
  } while (lVar2 != 0);
  return;
}



// FUNCTION 143e85a30 FUN_143e85a30 body=66 status=ok
// SIG undefined FUN_143e85a30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e85a30(void)

{
  _DAT_1469fcf10 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e85a6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fcf18,1);
  return;
}



// FUNCTION 143e85a80 FUN_143e85a80 body=66 status=ok
// SIG undefined FUN_143e85a80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e85a80(void)

{
  _DAT_1469fcf50 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e85abb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fcf58,1);
  return;
}



// FUNCTION 143e85ad0 FUN_143e85ad0 body=66 status=ok
// SIG undefined FUN_143e85ad0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e85ad0(void)

{
  _DAT_1469fcf78 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e85b0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fcf80,1);
  return;
}



// FUNCTION 143e85b20 FUN_143e85b20 body=66 status=ok
// SIG undefined FUN_143e85b20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e85b20(void)

{
  _DAT_1469fcfa8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e85b5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fcfb0,1);
  return;
}



// FUNCTION 143e85b70 FUN_143e85b70 body=66 status=ok
// SIG undefined FUN_143e85b70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e85b70(void)

{
  _DAT_1469fcf90 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e85bab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fcf98,1);
  return;
}



// FUNCTION 143e85bc0 FUN_143e85bc0 body=66 status=ok
// SIG undefined FUN_143e85bc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e85bc0(void)

{
  _DAT_1469fcee0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e85bfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fcee8,1);
  return;
}



// FUNCTION 143e85c10 FUN_143e85c10 body=66 status=ok
// SIG undefined FUN_143e85c10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e85c10(void)

{
  _DAT_1469fcef8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e85c4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fcf00,1);
  return;
}



// FUNCTION 143e85c60 FUN_143e85c60 body=66 status=ok
// SIG undefined FUN_143e85c60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e85c60(void)

{
  _DAT_1469fcf60 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e85c9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fcf68,1);
  return;
}



// FUNCTION 143e85cb0 FUN_143e85cb0 body=66 status=ok
// SIG undefined FUN_143e85cb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e85cb0(void)

{
  _DAT_1469fcf30 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e85ceb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fcf38,1);
  return;
}



// FUNCTION 143e85d00 FUN_143e85d00 body=66 status=ok
// SIG undefined FUN_143e85d00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e85d00(void)

{
  _DAT_1469fcf20 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e85d3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fcf28,1);
  return;
}



// FUNCTION 143e85d50 FUN_143e85d50 body=66 status=ok
// SIG undefined FUN_143e85d50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e85d50(void)

{
  _DAT_1469fcf40 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e85d8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fcf48,1);
  return;
}



// FUNCTION 143e85da0 FUN_143e85da0 body=66 status=ok
// SIG undefined FUN_143e85da0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e85da0(void)

{
  _DAT_1469fd130 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e85ddb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fd138,1);
  return;
}



// FUNCTION 143e85df0 FUN_143e85df0 body=66 status=ok
// SIG undefined FUN_143e85df0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e85df0(void)

{
  _DAT_1469fd148 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e85e2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fd150,1);
  return;
}



// FUNCTION 143e85e40 FUN_143e85e40 body=66 status=ok
// SIG undefined FUN_143e85e40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e85e40(void)

{
  _DAT_1469fd118 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e85e7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fd120,1);
  return;
}



// FUNCTION 143e85e90 FUN_143e85e90 body=66 status=ok
// SIG undefined FUN_143e85e90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e85e90(void)

{
  _DAT_1469fd0f8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e85ecb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fd100,1);
  return;
}



// FUNCTION 143e85ee0 FUN_143e85ee0 body=66 status=ok
// SIG undefined FUN_143e85ee0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e85ee0(void)

{
  _DAT_1469fd198 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e85f1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fd1a0,1);
  return;
}



// FUNCTION 143e85f30 FUN_143e85f30 body=66 status=ok
// SIG undefined FUN_143e85f30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e85f30(void)

{
  _DAT_1469fd188 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e85f6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fd190,1);
  return;
}



// FUNCTION 143e85f80 FUN_143e85f80 body=66 status=ok
// SIG undefined FUN_143e85f80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e85f80(void)

{
  _DAT_1469fd0b0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e85fbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fd0b8,1);
  return;
}



// FUNCTION 143e85fd0 FUN_143e85fd0 body=66 status=ok
// SIG undefined FUN_143e85fd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e85fd0(void)

{
  _DAT_1469fd098 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8600b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fd0a0,1);
  return;
}



// FUNCTION 143e86020 FUN_143e86020 body=66 status=ok
// SIG undefined FUN_143e86020(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e86020(void)

{
  _DAT_1469fd0e8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8605b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fd0f0,1);
  return;
}



// FUNCTION 143e86070 FUN_143e86070 body=66 status=ok
// SIG undefined FUN_143e86070(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e86070(void)

{
  _DAT_1469fd0c8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e860ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fd0d0,1);
  return;
}



// FUNCTION 143e860c0 FUN_143e860c0 body=66 status=ok
// SIG undefined FUN_143e860c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e860c0(void)

{
  _DAT_1469fd0d8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e860fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fd0e0,1);
  return;
}



// FUNCTION 143e86120 FUN_143e86120 body=3 status=ok
// SIG undefined FUN_143e86120(void)

void FUN_143e86120(void)

{
  return;
}



// FUNCTION 143e86150 FUN_143e86150 body=66 status=ok
// SIG undefined FUN_143e86150(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e86150(void)

{
  _DAT_1469fd230 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8618b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fd238,1);
  return;
}



// FUNCTION 143e861a0 FUN_143e861a0 body=66 status=ok
// SIG undefined FUN_143e861a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e861a0(void)

{
  _DAT_1469fd328 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e861db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fd330,1);
  return;
}



// FUNCTION 143e861f0 FUN_143e861f0 body=66 status=ok
// SIG undefined FUN_143e861f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e861f0(void)

{
  _DAT_1469fd388 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8622b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fd390,1);
  return;
}



// FUNCTION 143e86240 FUN_143e86240 body=66 status=ok
// SIG undefined FUN_143e86240(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e86240(void)

{
  _DAT_1469fd348 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8627b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fd350,1);
  return;
}



// FUNCTION 143e86290 FUN_143e86290 body=66 status=ok
// SIG undefined FUN_143e86290(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e86290(void)

{
  _DAT_1469fd368 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e862cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fd370,1);
  return;
}



// FUNCTION 143e862e0 FUN_143e862e0 body=66 status=ok
// SIG undefined FUN_143e862e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e862e0(void)

{
  _DAT_1469fd2f8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8631b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fd300,1);
  return;
}



// FUNCTION 143e86330 FUN_143e86330 body=66 status=ok
// SIG undefined FUN_143e86330(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e86330(void)

{
  _DAT_1469fd318 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8636b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fd320,1);
  return;
}



// FUNCTION 143e86380 FUN_143e86380 body=66 status=ok
// SIG undefined FUN_143e86380(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e86380(void)

{
  _DAT_1469fd338 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e863bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fd340,1);
  return;
}



// FUNCTION 143e863d0 FUN_143e863d0 body=66 status=ok
// SIG undefined FUN_143e863d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e863d0(void)

{
  _DAT_1469fd358 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8640b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fd360,1);
  return;
}



// FUNCTION 143e86420 FUN_143e86420 body=66 status=ok
// SIG undefined FUN_143e86420(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e86420(void)

{
  _DAT_1469fd308 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8645b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fd310,1);
  return;
}



// FUNCTION 143e86470 FUN_143e86470 body=66 status=ok
// SIG undefined FUN_143e86470(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e86470(void)

{
  _DAT_1469fd240 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e864ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fd248,1);
  return;
}



// FUNCTION 143e864c0 FUN_143e864c0 body=3 status=ok
// SIG undefined FUN_143e864c0(void)

void FUN_143e864c0(void)

{
  return;
}



// FUNCTION 143e864d0 FUN_143e864d0 body=61 status=ok
// SIG undefined FUN_143e864d0(void)

void FUN_143e864d0(void)

{
  DAT_1469fd2f0 = 0;
  if (DAT_1469fd2e8 != 0) {
    FMemory::Free();
  }
  FUN_141a24350(&DAT_1469fd2a8);
                    /* WARNING: Could not recover jumptable at 0x000143e86506. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_1469fd280);
  return;
}



// FUNCTION 143e86540 FUN_143e86540 body=66 status=ok
// SIG undefined FUN_143e86540(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e86540(void)

{
  _DAT_1469fd4a8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8657b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fd4b0,1);
  return;
}



// FUNCTION 143e86590 FUN_143e86590 body=66 status=ok
// SIG undefined FUN_143e86590(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e86590(void)

{
  _DAT_1469fd490 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e865cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fd498,1);
  return;
}



// FUNCTION 143e87260 FUN_143e87260 body=83 status=ok
// SIG undefined FUN_143e87260(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e87260(void)

{
  if (DAT_1469fd820 != 0) {
    FMemory::Free();
  }
  _DAT_1469fd810 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e872ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fd818,1);
  return;
}



// FUNCTION 143e872c0 FUN_143e872c0 body=66 status=ok
// SIG undefined FUN_143e872c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e872c0(void)

{
  _DAT_1469fe108 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e872fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fe110,1);
  return;
}



// FUNCTION 143e87310 FUN_143e87310 body=66 status=ok
// SIG undefined FUN_143e87310(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e87310(void)

{
  _DAT_1469fe2d0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8734b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fe2d8,1);
  return;
}



// FUNCTION 143e87360 FUN_143e87360 body=66 status=ok
// SIG undefined FUN_143e87360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e87360(void)

{
  _DAT_1469fe270 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8739b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fe278,1);
  return;
}



// FUNCTION 143e873b0 FUN_143e873b0 body=66 status=ok
// SIG undefined FUN_143e873b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e873b0(void)

{
  _DAT_1469fe2b8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e873eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fe2c0,1);
  return;
}



// FUNCTION 143e87400 FUN_143e87400 body=66 status=ok
// SIG undefined FUN_143e87400(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e87400(void)

{
  _DAT_1469fe288 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8743b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fe290,1);
  return;
}



// FUNCTION 143e87450 FUN_143e87450 body=66 status=ok
// SIG undefined FUN_143e87450(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e87450(void)

{
  _DAT_1469fe2a0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8748b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fe2a8,1);
  return;
}



// FUNCTION 143e874a0 FUN_143e874a0 body=66 status=ok
// SIG undefined FUN_143e874a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e874a0(void)

{
  _DAT_1469fdd80 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e874db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fdd88,1);
  return;
}



// FUNCTION 143e874f0 FUN_143e874f0 body=66 status=ok
// SIG undefined FUN_143e874f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e874f0(void)

{
  _DAT_1469fdde0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8752b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fdde8,1);
  return;
}



// FUNCTION 143e87540 FUN_143e87540 body=66 status=ok
// SIG undefined FUN_143e87540(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e87540(void)

{
  _DAT_1469fdd90 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8757b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fdd98,1);
  return;
}



// FUNCTION 143e87590 FUN_143e87590 body=66 status=ok
// SIG undefined FUN_143e87590(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e87590(void)

{
  _DAT_1469fddb0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e875cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fddb8,1);
  return;
}



// FUNCTION 143e875e0 FUN_143e875e0 body=66 status=ok
// SIG undefined FUN_143e875e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e875e0(void)

{
  _DAT_1469fddc0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8761b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fddc8,1);
  return;
}



// FUNCTION 143e87630 FUN_143e87630 body=66 status=ok
// SIG undefined FUN_143e87630(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e87630(void)

{
  _DAT_1469fde00 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8766b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fde08,1);
  return;
}



// FUNCTION 143e87680 FUN_143e87680 body=66 status=ok
// SIG undefined FUN_143e87680(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e87680(void)

{
  _DAT_1469fddd0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e876bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fddd8,1);
  return;
}



// FUNCTION 143e876d0 FUN_143e876d0 body=66 status=ok
// SIG undefined FUN_143e876d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e876d0(void)

{
  _DAT_1469fdd70 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8770b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fdd78,1);
  return;
}



// FUNCTION 143e87720 FUN_143e87720 body=66 status=ok
// SIG undefined FUN_143e87720(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e87720(void)

{
  _DAT_1469fdda0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8775b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fdda8,1);
  return;
}



// FUNCTION 143e87770 FUN_143e87770 body=66 status=ok
// SIG undefined FUN_143e87770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e87770(void)

{
  _DAT_1469fddf0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e877ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fddf8,1);
  return;
}



// FUNCTION 143e877c0 FUN_143e877c0 body=66 status=ok
// SIG undefined FUN_143e877c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e877c0(void)

{
  _DAT_1469fe0f0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e877fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fe0f8,1);
  return;
}



// FUNCTION 143e87810 FUN_143e87810 body=66 status=ok
// SIG undefined FUN_143e87810(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e87810(void)

{
  _DAT_1469fe450 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8784b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fe458,1);
  return;
}



// FUNCTION 143e87860 FUN_143e87860 body=66 status=ok
// SIG undefined FUN_143e87860(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e87860(void)

{
  _DAT_1469fe2e8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8789b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fe2f0,1);
  return;
}



// FUNCTION 143e878b0 FUN_143e878b0 body=66 status=ok
// SIG undefined FUN_143e878b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e878b0(void)

{
  _DAT_1469fd7b0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e878eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fd7b8,1);
  return;
}



// FUNCTION 143e87900 FUN_143e87900 body=66 status=ok
// SIG undefined FUN_143e87900(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e87900(void)

{
  _DAT_1469fd7e0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8793b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fd7e8,1);
  return;
}



// FUNCTION 143e87950 FUN_143e87950 body=66 status=ok
// SIG undefined FUN_143e87950(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e87950(void)

{
  _DAT_1469fd7f8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8798b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fd800,1);
  return;
}



// FUNCTION 143e879a0 FUN_143e879a0 body=66 status=ok
// SIG undefined FUN_143e879a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e879a0(void)

{
  _DAT_1469fd840 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e879db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fd848,1);
  return;
}



// FUNCTION 143e879f0 FUN_143e879f0 body=66 status=ok
// SIG undefined FUN_143e879f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e879f0(void)

{
  _DAT_1469fd9f8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e87a2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fda00,1);
  return;
}



// FUNCTION 143e87a40 FUN_143e87a40 body=66 status=ok
// SIG undefined FUN_143e87a40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e87a40(void)

{
  _DAT_1469fd958 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e87a7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fd960,1);
  return;
}



// FUNCTION 143e87a90 FUN_143e87a90 body=66 status=ok
// SIG undefined FUN_143e87a90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e87a90(void)

{
  _DAT_1469fd5b8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e87acb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fd5c0,1);
  return;
}



// FUNCTION 143e87ae0 FUN_143e87ae0 body=66 status=ok
// SIG undefined FUN_143e87ae0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e87ae0(void)

{
  _DAT_1469fe468 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e87b1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fe470,1);
  return;
}



// FUNCTION 143e87b30 FUN_143e87b30 body=66 status=ok
// SIG undefined FUN_143e87b30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e87b30(void)

{
  _DAT_1469fdaa8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e87b6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fdab0,1);
  return;
}



// FUNCTION 143e87b80 FUN_143e87b80 body=66 status=ok
// SIG undefined FUN_143e87b80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e87b80(void)

{
  _DAT_1469fd8b8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e87bbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fd8c0,1);
  return;
}



// FUNCTION 143e87bd0 FUN_143e87bd0 body=66 status=ok
// SIG undefined FUN_143e87bd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e87bd0(void)

{
  _DAT_1469fd888 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e87c0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fd890,1);
  return;
}



// FUNCTION 143e87c20 FUN_143e87c20 body=66 status=ok
// SIG undefined FUN_143e87c20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e87c20(void)

{
  _DAT_1469fd8a0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e87c5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fd8a8,1);
  return;
}



// FUNCTION 143e87c70 FUN_143e87c70 body=66 status=ok
// SIG undefined FUN_143e87c70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e87c70(void)

{
  _DAT_1469fd870 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e87cab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fd878,1);
  return;
}



// FUNCTION 143e87cc0 FUN_143e87cc0 body=66 status=ok
// SIG undefined FUN_143e87cc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e87cc0(void)

{
  _DAT_1469fd7c8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e87cfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fd7d0,1);
  return;
}



// FUNCTION 143e87d10 FUN_143e87d10 body=66 status=ok
// SIG undefined FUN_143e87d10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e87d10(void)

{
  _DAT_1469fd858 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e87d4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_1469fd860,1);
  return;
}



// FUNCTION 143e87de0 FUN_143e87de0 body=72 status=ok
// SIG undefined FUN_143e87de0(void)

void FUN_143e87de0(void)

{
  PTR_PTR_1464c1668 = (undefined *)&PTR_FUN_144dc8dc8;
  FRenderResource::ReleaseResource(&PTR_PTR_1464c1668);
  PTR_PTR_1464c1668 = (undefined *)&PTR_FUN_144dc8d88;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&DAT_1464c1698);
  FUN_141edd2d0(&PTR_PTR_1464c1668);
  return;
}



// FUNCTION 143e87e30 FUN_143e87e30 body=32 status=ok
// SIG undefined FUN_143e87e30(void)

void FUN_143e87e30(void)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&DAT_1464c1758);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&DAT_1464c1750);
  return;
}



// FUNCTION 143e87e50 FUN_143e87e50 body=84 status=ok
// SIG undefined FUN_143e87e50(void)

void FUN_143e87e50(void)

{
  PTR_PTR_1464c1710 = (undefined *)&PTR__scalar_deleting_destructor__144dc8d48;
  FRenderResource::ReleaseResource(&PTR_PTR_1464c1710);
  PTR_PTR_1464c1710 = (undefined *)&PTR__scalar_deleting_destructor__143f48b30;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&DAT_1464c1748);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&DAT_1464c1740);
  FUN_141edd2d0(&PTR_PTR_1464c1710);
  return;
}



// FUNCTION 143e87eb0 FUN_143e87eb0 body=72 status=ok
// SIG undefined FUN_143e87eb0(void)

void FUN_143e87eb0(void)

{
  PTR_PTR_1464c16a0 = (undefined *)&PTR_FUN_144dc8d08;
  FRenderResource::ReleaseResource(&PTR_PTR_1464c16a0);
  PTR_PTR_1464c16a0 = (undefined *)&PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&DAT_1464c16d0);
  FUN_141edd2d0(&PTR_PTR_1464c16a0);
  return;
}



// FUNCTION 143e87f00 FUN_143e87f00 body=72 status=ok
// SIG undefined FUN_143e87f00(void)

void FUN_143e87f00(void)

{
  PTR_PTR_1464c16d8 = (undefined *)&PTR_FUN_144dc8dc8;
  FRenderResource::ReleaseResource(&PTR_PTR_1464c16d8);
  PTR_PTR_1464c16d8 = (undefined *)&PTR_FUN_144dc8d88;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&DAT_1464c1708);
  FUN_141edd2d0(&PTR_PTR_1464c16d8);
  return;
}



// FUNCTION 143e88420 TranslucencyTimestampQuerySubmittedFence'' body=84 status=ok
// SIG undefined TranslucencyTimestampQuerySubmittedFence''(void)

void `dynamic_atexit_destructor_for_'FDeferredShadingSceneRenderer::
     TranslucencyTimestampQuerySubmittedFence__(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  
  lVar4 = 4;
  puVar5 = &DAT_146a10178;
  do {
    plVar1 = (longlong *)(puVar5 + -8);
    puVar5 = puVar5 + -8;
    lVar4 = lVar4 + -1;
    if (*plVar1 != 0) {
      LOCK();
      piVar2 = (int *)(*plVar1 + 0x48);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FGraphEvent::Recycle();
      }
    }
  } while (lVar4 != 0);
  return;
}



// FUNCTION 143e88480 FUN_143e88480 body=66 status=ok
// SIG undefined FUN_143e88480(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e88480(void)

{
  _DAT_146a10ff0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e884bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a10ff8,1);
  return;
}



// FUNCTION 143e884d0 FUN_143e884d0 body=66 status=ok
// SIG undefined FUN_143e884d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e884d0(void)

{
  _DAT_146a11020 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8850b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a11028,1);
  return;
}



// FUNCTION 143e88520 FUN_143e88520 body=66 status=ok
// SIG undefined FUN_143e88520(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e88520(void)

{
  _DAT_146a10fe0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8855b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a10fe8,1);
  return;
}



// FUNCTION 143e88570 FUN_143e88570 body=66 status=ok
// SIG undefined FUN_143e88570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e88570(void)

{
  _DAT_146a11030 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e885ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a11038,1);
  return;
}



// FUNCTION 143e885c0 FUN_143e885c0 body=66 status=ok
// SIG undefined FUN_143e885c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e885c0(void)

{
  _DAT_146a11010 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e885fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a11018,1);
  return;
}



// FUNCTION 143e88610 FUN_143e88610 body=66 status=ok
// SIG undefined FUN_143e88610(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e88610(void)

{
  _DAT_146a11000 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8864b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a11008,1);
  return;
}



// FUNCTION 143e88660 FUN_143e88660 body=66 status=ok
// SIG undefined FUN_143e88660(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e88660(void)

{
  _DAT_146a10fd0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8869b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a10fd8,1);
  return;
}



// FUNCTION 143e886b0 FUN_143e886b0 body=66 status=ok
// SIG undefined FUN_143e886b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e886b0(void)

{
  _DAT_146a0ffc0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e886eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a0ffc8,1);
  return;
}



// FUNCTION 143e88700 FUN_143e88700 body=66 status=ok
// SIG undefined FUN_143e88700(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e88700(void)

{
  _DAT_146a100f8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8873b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a10100,1);
  return;
}



// FUNCTION 143e88750 FUN_143e88750 body=66 status=ok
// SIG undefined FUN_143e88750(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e88750(void)

{
  _DAT_146a100e0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8878b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a100e8,1);
  return;
}



// FUNCTION 143e887a0 FUN_143e887a0 body=66 status=ok
// SIG undefined FUN_143e887a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e887a0(void)

{
  _DAT_146a10078 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e887db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a10080,1);
  return;
}



// FUNCTION 143e887f0 FUN_143e887f0 body=66 status=ok
// SIG undefined FUN_143e887f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e887f0(void)

{
  _DAT_146a10048 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8882b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a10050,1);
  return;
}



// FUNCTION 143e88840 FUN_143e88840 body=66 status=ok
// SIG undefined FUN_143e88840(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e88840(void)

{
  _DAT_146a0fd08 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8887b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a0fd10,1);
  return;
}



// FUNCTION 143e88890 FUN_143e88890 body=66 status=ok
// SIG undefined FUN_143e88890(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e88890(void)

{
  _DAT_146a0fcf0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e888cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a0fcf8,1);
  return;
}



// FUNCTION 143e888e0 FUN_143e888e0 body=66 status=ok
// SIG undefined FUN_143e888e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e888e0(void)

{
  _DAT_146a0e960 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8891b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a0e968,1);
  return;
}



// FUNCTION 143e88930 FUN_143e88930 body=66 status=ok
// SIG undefined FUN_143e88930(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e88930(void)

{
  _DAT_146a10f90 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8896b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a10f98,1);
  return;
}



// FUNCTION 143e88980 FUN_143e88980 body=66 status=ok
// SIG undefined FUN_143e88980(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e88980(void)

{
  _DAT_146a10fb0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e889bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a10fb8,1);
  return;
}



// FUNCTION 143e889d0 FUN_143e889d0 body=66 status=ok
// SIG undefined FUN_143e889d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e889d0(void)

{
  _DAT_146a10fa0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e88a0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a10fa8,1);
  return;
}



// FUNCTION 143e88a20 FUN_143e88a20 body=66 status=ok
// SIG undefined FUN_143e88a20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e88a20(void)

{
  _DAT_146a10fc0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e88a5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a10fc8,1);
  return;
}



// FUNCTION 143e88a70 FUN_143e88a70 body=66 status=ok
// SIG undefined FUN_143e88a70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e88a70(void)

{
  _DAT_146a100d0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e88aab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a100d8,1);
  return;
}



// FUNCTION 143e88ac0 FUN_143e88ac0 body=66 status=ok
// SIG undefined FUN_143e88ac0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e88ac0(void)

{
  _DAT_146a0fff0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e88afb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a0fff8,1);
  return;
}



// FUNCTION 143e88b10 FUN_143e88b10 body=66 status=ok
// SIG undefined FUN_143e88b10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e88b10(void)

{
  _DAT_146a10008 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e88b4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a10010,1);
  return;
}



// FUNCTION 143e88b60 FUN_143e88b60 body=66 status=ok
// SIG undefined FUN_143e88b60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e88b60(void)

{
  _DAT_146a10018 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e88b9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a10020,1);
  return;
}



// FUNCTION 143e88bb0 FUN_143e88bb0 body=66 status=ok
// SIG undefined FUN_143e88bb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e88bb0(void)

{
  _DAT_146a0e938 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e88beb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a0e940,1);
  return;
}



// FUNCTION 143e88c00 FUN_143e88c00 body=66 status=ok
// SIG undefined FUN_143e88c00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e88c00(void)

{
  _DAT_146a0e910 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e88c3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a0e918,1);
  return;
}



// FUNCTION 143e88c50 FUN_143e88c50 body=66 status=ok
// SIG undefined FUN_143e88c50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e88c50(void)

{
  _DAT_146a0e928 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e88c8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a0e930,1);
  return;
}



// FUNCTION 143e88ca0 FUN_143e88ca0 body=66 status=ok
// SIG undefined FUN_143e88ca0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e88ca0(void)

{
  _DAT_146a0e948 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e88cdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a0e950,1);
  return;
}



// FUNCTION 143e88cf0 FUN_143e88cf0 body=66 status=ok
// SIG undefined FUN_143e88cf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e88cf0(void)

{
  _DAT_146a100c0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e88d2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a100c8,1);
  return;
}



// FUNCTION 143e88d40 FUN_143e88d40 body=66 status=ok
// SIG undefined FUN_143e88d40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e88d40(void)

{
  _DAT_146a100a8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e88d7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a100b0,1);
  return;
}



// FUNCTION 143e88d90 FUN_143e88d90 body=66 status=ok
// SIG undefined FUN_143e88d90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e88d90(void)

{
  _DAT_146a10090 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e88dcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a10098,1);
  return;
}



// FUNCTION 143e88de0 FUN_143e88de0 body=66 status=ok
// SIG undefined FUN_143e88de0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e88de0(void)

{
  _DAT_146a0e970 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e88e1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a0e978,1);
  return;
}



// FUNCTION 143e88e30 FUN_143e88e30 body=66 status=ok
// SIG undefined FUN_143e88e30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e88e30(void)

{
  _DAT_146a0eb58 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e88e6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a0eb60,1);
  return;
}



// FUNCTION 143e88e80 FUN_143e88e80 body=66 status=ok
// SIG undefined FUN_143e88e80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e88e80(void)

{
  _DAT_146a106e8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e88ebb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a106f0,1);
  return;
}



// FUNCTION 143e88ed0 FUN_143e88ed0 body=66 status=ok
// SIG undefined FUN_143e88ed0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e88ed0(void)

{
  _DAT_146a10700 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e88f0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a10708,1);
  return;
}



// FUNCTION 143e88f20 FUN_143e88f20 body=66 status=ok
// SIG undefined FUN_143e88f20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e88f20(void)

{
  _DAT_146a106d0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e88f5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a106d8,1);
  return;
}



// FUNCTION 143e88f70 FUN_143e88f70 body=66 status=ok
// SIG undefined FUN_143e88f70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e88f70(void)

{
  _DAT_146a10110 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e88fab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a10118,1);
  return;
}



// FUNCTION 143e88fc0 FUN_143e88fc0 body=66 status=ok
// SIG undefined FUN_143e88fc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e88fc0(void)

{
  _DAT_146a0ffd8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e88ffb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a0ffe0,1);
  return;
}



// FUNCTION 143e89010 FUN_143e89010 body=66 status=ok
// SIG undefined FUN_143e89010(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e89010(void)

{
  _DAT_146a10060 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8904b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a10068,1);
  return;
}



// FUNCTION 143e89060 FUN_143e89060 body=66 status=ok
// SIG undefined FUN_143e89060(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e89060(void)

{
  _DAT_146a10178 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8909b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a10180,1);
  return;
}



// FUNCTION 143e890b0 FUN_143e890b0 body=66 status=ok
// SIG undefined FUN_143e890b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e890b0(void)

{
  _DAT_146a10c70 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e890eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a10c78,1);
  return;
}



// FUNCTION 143e89100 FUN_143e89100 body=66 status=ok
// SIG undefined FUN_143e89100(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e89100(void)

{
  _DAT_146a10030 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8913b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a10038,1);
  return;
}



// FUNCTION 143e89190 `dynamic_atexit_destructor_for_'GTileRendererVertexBuffer'' body=46 status=ok
// SIG undefined `dynamic_atexit_destructor_for_'GTileRendererVertexBuffer''(void)

void _dynamic_atexit_destructor_for__GTileRendererVertexBuffer__(void)

{
  PTR_PTR_1464c1810 = (undefined *)&PTR__scalar_deleting_destructor__144dd4538;
  FRenderResource::ReleaseResource(&PTR_PTR_1464c1810);
  FUN_141afbc90(&PTR_PTR_1464c1810);
  return;
}



// FUNCTION 143e891c0 `dynamic_atexit_destructor_for_'GUniformMeshTemporaryBuffers'' body=128 status=ok
// SIG undefined `dynamic_atexit_destructor_for_'GUniformMeshTemporaryBuffers''(void)

void _dynamic_atexit_destructor_for__GUniformMeshTemporaryBuffers__(void)

{
  FUN_141ace450(&DAT_146a0f630);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&DAT_146a0f640);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&DAT_146a0f638);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&DAT_146a0f630);
  FUN_141ace450(&DAT_146a0f608);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&DAT_146a0f618);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&DAT_146a0f610);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&DAT_146a0f608);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&DAT_146a0f600);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&DAT_146a0f5f8);
  return;
}



// FUNCTION 143e89240 FUN_143e89240 body=66 status=ok
// SIG undefined FUN_143e89240(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e89240(void)

{
  _DAT_146a110c8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8927b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a110d0,1);
  return;
}



// FUNCTION 143e89290 FUN_143e89290 body=66 status=ok
// SIG undefined FUN_143e89290(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e89290(void)

{
  _DAT_146a110d8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e892cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a110e0,1);
  return;
}



// FUNCTION 143e897d0 FUN_143e897d0 body=66 status=ok
// SIG undefined FUN_143e897d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e897d0(void)

{
  _DAT_146a18518 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8980b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a18520,1);
  return;
}



// FUNCTION 143e89820 FUN_143e89820 body=66 status=ok
// SIG undefined FUN_143e89820(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e89820(void)

{
  _DAT_146a160b0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8985b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a160b8,1);
  return;
}



// FUNCTION 143e89870 FUN_143e89870 body=66 status=ok
// SIG undefined FUN_143e89870(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e89870(void)

{
  _DAT_146a160e0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e898ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a160e8,1);
  return;
}



// FUNCTION 143e898c0 FUN_143e898c0 body=66 status=ok
// SIG undefined FUN_143e898c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e898c0(void)

{
  _DAT_146a160c0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e898fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a160c8,1);
  return;
}



// FUNCTION 143e89910 FUN_143e89910 body=66 status=ok
// SIG undefined FUN_143e89910(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e89910(void)

{
  _DAT_146a160d0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8994b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a160d8,1);
  return;
}



// FUNCTION 143e89960 FUN_143e89960 body=66 status=ok
// SIG undefined FUN_143e89960(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e89960(void)

{
  _DAT_146a16a10 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8999b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a16a18,1);
  return;
}



// FUNCTION 143e899b0 FUN_143e899b0 body=66 status=ok
// SIG undefined FUN_143e899b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e899b0(void)

{
  _DAT_146a16a00 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e899eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a16a08,1);
  return;
}



// FUNCTION 143e89a00 FUN_143e89a00 body=66 status=ok
// SIG undefined FUN_143e89a00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e89a00(void)

{
  _DAT_146a163a0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e89a3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a163a8,1);
  return;
}



// FUNCTION 143e89a50 FUN_143e89a50 body=66 status=ok
// SIG undefined FUN_143e89a50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e89a50(void)

{
  _DAT_146a15428 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e89a8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a15430,1);
  return;
}



// FUNCTION 143e89aa0 FUN_143e89aa0 body=66 status=ok
// SIG undefined FUN_143e89aa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e89aa0(void)

{
  _DAT_146a160a0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e89adb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a160a8,1);
  return;
}



// FUNCTION 143e89af0 FUN_143e89af0 body=66 status=ok
// SIG undefined FUN_143e89af0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e89af0(void)

{
  _DAT_146a16f60 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e89b2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a16f68,1);
  return;
}



// FUNCTION 143e89b40 FUN_143e89b40 body=66 status=ok
// SIG undefined FUN_143e89b40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e89b40(void)

{
  _DAT_146a160f0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e89b7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a160f8,1);
  return;
}



// FUNCTION 143e89b90 FUN_143e89b90 body=66 status=ok
// SIG undefined FUN_143e89b90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e89b90(void)

{
  _DAT_146a17120 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e89bcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a17128,1);
  return;
}



// FUNCTION 143e89be0 FUN_143e89be0 body=66 status=ok
// SIG undefined FUN_143e89be0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e89be0(void)

{
  _DAT_146a170d0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e89c1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a170d8,1);
  return;
}



// FUNCTION 143e89c30 FUN_143e89c30 body=66 status=ok
// SIG undefined FUN_143e89c30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e89c30(void)

{
  _DAT_146a17780 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e89c6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a17788,1);
  return;
}



// FUNCTION 143e89c80 FUN_143e89c80 body=66 status=ok
// SIG undefined FUN_143e89c80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e89c80(void)

{
  _DAT_146a153b8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e89cbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a153c0,1);
  return;
}



// FUNCTION 143e89cd0 FUN_143e89cd0 body=66 status=ok
// SIG undefined FUN_143e89cd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e89cd0(void)

{
  _DAT_146a170c0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e89d0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a170c8,1);
  return;
}



// FUNCTION 143e89d20 FUN_143e89d20 body=66 status=ok
// SIG undefined FUN_143e89d20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e89d20(void)

{
  _DAT_146a17798 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e89d5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a177a0,1);
  return;
}



// FUNCTION 143e89d70 FUN_143e89d70 body=66 status=ok
// SIG undefined FUN_143e89d70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e89d70(void)

{
  _DAT_146a177b8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e89dab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a177c0,1);
  return;
}



// FUNCTION 143e89dc0 FUN_143e89dc0 body=66 status=ok
// SIG undefined FUN_143e89dc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e89dc0(void)

{
  _DAT_146a170e0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e89dfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a170e8,1);
  return;
}



// FUNCTION 143e89e10 FUN_143e89e10 body=66 status=ok
// SIG undefined FUN_143e89e10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e89e10(void)

{
  _DAT_146a18380 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e89e4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a18388,1);
  return;
}



// FUNCTION 143e89e60 FUN_143e89e60 body=66 status=ok
// SIG undefined FUN_143e89e60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e89e60(void)

{
  _DAT_146a184b8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e89e9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a184c0,1);
  return;
}



// FUNCTION 143e89eb0 FUN_143e89eb0 body=66 status=ok
// SIG undefined FUN_143e89eb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e89eb0(void)

{
  _DAT_146a184a0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e89eeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a184a8,1);
  return;
}



// FUNCTION 143e89f00 FUN_143e89f00 body=66 status=ok
// SIG undefined FUN_143e89f00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e89f00(void)

{
  _DAT_146a18488 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e89f3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a18490,1);
  return;
}



// FUNCTION 143e89f50 FUN_143e89f50 body=66 status=ok
// SIG undefined FUN_143e89f50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e89f50(void)

{
  _DAT_146a18458 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e89f8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a18460,1);
  return;
}



// FUNCTION 143e89fa0 FUN_143e89fa0 body=66 status=ok
// SIG undefined FUN_143e89fa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e89fa0(void)

{
  _DAT_146a183f8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e89fdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a18400,1);
  return;
}



// FUNCTION 143e89ff0 FUN_143e89ff0 body=66 status=ok
// SIG undefined FUN_143e89ff0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e89ff0(void)

{
  _DAT_146a18410 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8a02b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a18418,1);
  return;
}



// FUNCTION 143e8a040 FUN_143e8a040 body=66 status=ok
// SIG undefined FUN_143e8a040(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8a040(void)

{
  _DAT_146a184e8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8a07b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a184f0,1);
  return;
}



// FUNCTION 143e8a090 FUN_143e8a090 body=66 status=ok
// SIG undefined FUN_143e8a090(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8a090(void)

{
  _DAT_146a18500 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8a0cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a18508,1);
  return;
}



// FUNCTION 143e8a0e0 FUN_143e8a0e0 body=66 status=ok
// SIG undefined FUN_143e8a0e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8a0e0(void)

{
  _DAT_146a184d0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8a11b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a184d8,1);
  return;
}



// FUNCTION 143e8a130 FUN_143e8a130 body=66 status=ok
// SIG undefined FUN_143e8a130(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8a130(void)

{
  _DAT_146a18368 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8a16b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a18370,1);
  return;
}



// FUNCTION 143e8a180 FUN_143e8a180 body=66 status=ok
// SIG undefined FUN_143e8a180(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8a180(void)

{
  _DAT_146a18428 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8a1bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a18430,1);
  return;
}



// FUNCTION 143e8a1d0 FUN_143e8a1d0 body=66 status=ok
// SIG undefined FUN_143e8a1d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8a1d0(void)

{
  _DAT_146a18350 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8a20b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a18358,1);
  return;
}



// FUNCTION 143e8a220 FUN_143e8a220 body=66 status=ok
// SIG undefined FUN_143e8a220(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8a220(void)

{
  _DAT_146a18470 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8a25b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a18478,1);
  return;
}



// FUNCTION 143e8a270 FUN_143e8a270 body=66 status=ok
// SIG undefined FUN_143e8a270(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8a270(void)

{
  _DAT_146a183e0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8a2ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a183e8,1);
  return;
}



// FUNCTION 143e8a2c0 FUN_143e8a2c0 body=66 status=ok
// SIG undefined FUN_143e8a2c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8a2c0(void)

{
  _DAT_146a18398 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8a2fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a183a0,1);
  return;
}



// FUNCTION 143e8a310 FUN_143e8a310 body=66 status=ok
// SIG undefined FUN_143e8a310(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8a310(void)

{
  _DAT_146a183b0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8a34b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a183b8,1);
  return;
}



// FUNCTION 143e8a360 FUN_143e8a360 body=66 status=ok
// SIG undefined FUN_143e8a360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8a360(void)

{
  _DAT_146a183c8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8a39b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a183d0,1);
  return;
}



// FUNCTION 143e8a3b0 FUN_143e8a3b0 body=66 status=ok
// SIG undefined FUN_143e8a3b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8a3b0(void)

{
  _DAT_146a18440 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8a3eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a18448,1);
  return;
}



// FUNCTION 143e8a400 FUN_143e8a400 body=66 status=ok
// SIG undefined FUN_143e8a400(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8a400(void)

{
  _DAT_146a163b0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8a43b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a163b8,1);
  return;
}



// FUNCTION 143e8a450 FUN_143e8a450 body=66 status=ok
// SIG undefined FUN_143e8a450(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8a450(void)

{
  _DAT_146a17100 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8a48b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a17108,1);
  return;
}



// FUNCTION 143e8a4a0 FUN_143e8a4a0 body=66 status=ok
// SIG undefined FUN_143e8a4a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8a4a0(void)

{
  _DAT_146a170f0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8a4db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a170f8,1);
  return;
}



// FUNCTION 143e8a4f0 FUN_143e8a4f0 body=66 status=ok
// SIG undefined FUN_143e8a4f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8a4f0(void)

{
  _DAT_146a17110 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8a52b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a17118,1);
  return;
}



// FUNCTION 143e8a540 FUN_143e8a540 body=66 status=ok
// SIG undefined FUN_143e8a540(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8a540(void)

{
  _DAT_146a153f8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8a57b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a15400,1);
  return;
}



// FUNCTION 143e8a590 FUN_143e8a590 body=66 status=ok
// SIG undefined FUN_143e8a590(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8a590(void)

{
  _DAT_146a153e8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8a5cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a153f0,1);
  return;
}



// FUNCTION 143e8a5e0 FUN_143e8a5e0 body=66 status=ok
// SIG undefined FUN_143e8a5e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8a5e0(void)

{
  _DAT_146a153c8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8a61b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a153d0,1);
  return;
}



// FUNCTION 143e8a630 FUN_143e8a630 body=66 status=ok
// SIG undefined FUN_143e8a630(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8a630(void)

{
  _DAT_146a15408 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8a66b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a15410,1);
  return;
}



// FUNCTION 143e8a680 FUN_143e8a680 body=66 status=ok
// SIG undefined FUN_143e8a680(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8a680(void)

{
  _DAT_146a15448 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8a6bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a15450,1);
  return;
}



// FUNCTION 143e8a6d0 FUN_143e8a6d0 body=66 status=ok
// SIG undefined FUN_143e8a6d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8a6d0(void)

{
  _DAT_146a15438 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8a70b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a15440,1);
  return;
}



// FUNCTION 143e8a720 FUN_143e8a720 body=66 status=ok
// SIG undefined FUN_143e8a720(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8a720(void)

{
  _DAT_146a153d8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8a75b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a153e0,1);
  return;
}



// FUNCTION 143e8a770 FUN_143e8a770 body=66 status=ok
// SIG undefined FUN_143e8a770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8a770(void)

{
  _DAT_146a15418 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8a7ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a15420,1);
  return;
}



// FUNCTION 143e8a7c0 FUN_143e8a7c0 body=58 status=ok
// SIG undefined FUN_143e8a7c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8a7c0(void)

{
  _DAT_146a163c0 = &PTR_FUN_144de0118;
  FRenderResource::ReleaseResource(&DAT_146a163c0);
  FUN_141b28a30(&DAT_146a163f0);
  FUN_141edd2d0(&DAT_146a163c0);
  return;
}



// FUNCTION 143e8a800 FUN_143e8a800 body=72 status=ok
// SIG undefined FUN_143e8a800(void)

void FUN_143e8a800(void)

{
  PTR_PTR_1464c1a70 = (undefined *)&PTR_FUN_144ddf528;
  FRenderResource::ReleaseResource(&PTR_PTR_1464c1a70);
  PTR_PTR_1464c1a70 = (undefined *)&PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&DAT_1464c1aa0);
  FUN_141edd2d0(&PTR_PTR_1464c1a70);
  return;
}



// FUNCTION 143e8a850 `dynamic_atexit_destructor_for_'GTileRendererVertexBuffer'' body=46 status=ok
// SIG undefined `dynamic_atexit_destructor_for_'GTileRendererVertexBuffer''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_atexit_destructor_for__GTileRendererVertexBuffer__(void)

{
  _DAT_146a15540 = &PTR__scalar_deleting_destructor__144ddff58;
  FRenderResource::ReleaseResource(&DAT_146a15540);
  FUN_141b28b20(&DAT_146a15540);
  return;
}



// FUNCTION 143e8a880 `dynamic_atexit_destructor_for_'TestPlayer'' body=70 status=ok
// SIG undefined `dynamic_atexit_destructor_for_'TestPlayer''(void)

void Impl::_dynamic_atexit_destructor_for__TestPlayer__(void)

{
  PTR_PTR_1464c1b50 = (undefined *)&PTR__scalar_deleting_destructor__144ddf900;
  FRenderResource::ReleaseResource(&PTR_PTR_1464c1b50);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&DAT_1464c1b98);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&DAT_1464c1b90);
  FUN_141edd2d0(&PTR_PTR_1464c1b50);
  return;
}



// FUNCTION 143e8a8d0 `dynamic_atexit_destructor_for_'TestPlayer'' body=70 status=ok
// SIG undefined `dynamic_atexit_destructor_for_'TestPlayer''(void)

void Impl::_dynamic_atexit_destructor_for__TestPlayer__(void)

{
  PTR_PTR_1464c1ab0 = (undefined *)&PTR__scalar_deleting_destructor__144ddf900;
  FRenderResource::ReleaseResource(&PTR_PTR_1464c1ab0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&DAT_1464c1af8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&DAT_1464c1af0);
  FUN_141edd2d0(&PTR_PTR_1464c1ab0);
  return;
}



// FUNCTION 143e8a920 `dynamic_atexit_destructor_for_'TestPlayer'' body=70 status=ok
// SIG undefined `dynamic_atexit_destructor_for_'TestPlayer''(void)

void Impl::_dynamic_atexit_destructor_for__TestPlayer__(void)

{
  PTR_PTR_1464c1b00 = (undefined *)&PTR__scalar_deleting_destructor__144ddf900;
  FRenderResource::ReleaseResource(&PTR_PTR_1464c1b00);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&DAT_1464c1b48);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&DAT_1464c1b40);
  FUN_141edd2d0(&PTR_PTR_1464c1b00);
  return;
}



// FUNCTION 143e8a970 FUN_143e8a970 body=72 status=ok
// SIG undefined FUN_143e8a970(void)

void FUN_143e8a970(void)

{
  PTR_PTR_1464c1bc0 = (undefined *)&PTR_FUN_144dc8dc8;
  FRenderResource::ReleaseResource(&PTR_PTR_1464c1bc0);
  PTR_PTR_1464c1bc0 = (undefined *)&PTR_FUN_144dc8d88;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&DAT_1464c1bf0);
  FUN_141edd2d0(&PTR_PTR_1464c1bc0);
  return;
}



// FUNCTION 143e8a9c0 FUN_143e8a9c0 body=58 status=ok
// SIG undefined FUN_143e8a9c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8a9c0(void)

{
  _DAT_146a17130 = &PTR_FUN_144de0118;
  FRenderResource::ReleaseResource(&DAT_146a17130);
  FUN_141b28a30(&DAT_146a17160);
  FUN_141edd2d0(&DAT_146a17130);
  return;
}



// FUNCTION 143e8aa00 FUN_143e8aa00 body=19 status=ok
// SIG undefined FUN_143e8aa00(void)

void FUN_143e8aa00(void)

{
  FUN_141b29040(&DAT_146a15458,DAT_146a15458);
  return;
}



// FUNCTION 143e8aa20 `dynamic_atexit_destructor_for_'GTileRendererVertexBuffer'' body=46 status=ok
// SIG undefined `dynamic_atexit_destructor_for_'GTileRendererVertexBuffer''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_atexit_destructor_for__GTileRendererVertexBuffer__(void)

{
  _DAT_146a15460 = &PTR__scalar_deleting_destructor__144ddff58;
  FRenderResource::ReleaseResource(&DAT_146a15460);
  FUN_141b28b20(&DAT_146a15460);
  return;
}



// FUNCTION 143e8b0b0 FUN_143e8b0b0 body=83 status=ok
// SIG undefined FUN_143e8b0b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8b0b0(void)

{
  if (DAT_146a1e740 != 0) {
    FMemory::Free();
  }
  _DAT_146a1e730 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8b0fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a1e738,1);
  return;
}



// FUNCTION 143e8b110 FUN_143e8b110 body=66 status=ok
// SIG undefined FUN_143e8b110(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8b110(void)

{
  _DAT_146a1c680 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8b14b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a1c688,1);
  return;
}



// FUNCTION 143e8b160 FUN_143e8b160 body=66 status=ok
// SIG undefined FUN_143e8b160(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8b160(void)

{
  _DAT_146a1c690 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8b19b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a1c698,1);
  return;
}



// FUNCTION 143e8b1b0 FUN_143e8b1b0 body=66 status=ok
// SIG undefined FUN_143e8b1b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8b1b0(void)

{
  _DAT_146a1c6a0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8b1eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a1c6a8,1);
  return;
}



// FUNCTION 143e8b200 FUN_143e8b200 body=66 status=ok
// SIG undefined FUN_143e8b200(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8b200(void)

{
  _DAT_146a1c620 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8b23b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a1c628,1);
  return;
}



// FUNCTION 143e8b250 FUN_143e8b250 body=66 status=ok
// SIG undefined FUN_143e8b250(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8b250(void)

{
  _DAT_146a1c640 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8b28b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a1c648,1);
  return;
}



// FUNCTION 143e8b2a0 FUN_143e8b2a0 body=66 status=ok
// SIG undefined FUN_143e8b2a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8b2a0(void)

{
  _DAT_146a1c650 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8b2db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a1c658,1);
  return;
}



// FUNCTION 143e8b2f0 FUN_143e8b2f0 body=66 status=ok
// SIG undefined FUN_143e8b2f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8b2f0(void)

{
  _DAT_146a1c6b0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8b32b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a1c6b8,1);
  return;
}



// FUNCTION 143e8b340 FUN_143e8b340 body=66 status=ok
// SIG undefined FUN_143e8b340(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8b340(void)

{
  _DAT_146a1c660 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8b37b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a1c668,1);
  return;
}



// FUNCTION 143e8b390 FUN_143e8b390 body=66 status=ok
// SIG undefined FUN_143e8b390(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8b390(void)

{
  _DAT_146a1dbc0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8b3cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a1dbc8,1);
  return;
}



// FUNCTION 143e8b3e0 FUN_143e8b3e0 body=66 status=ok
// SIG undefined FUN_143e8b3e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8b3e0(void)

{
  _DAT_146a1c670 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8b41b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a1c678,1);
  return;
}



// FUNCTION 143e8b430 FUN_143e8b430 body=66 status=ok
// SIG undefined FUN_143e8b430(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8b430(void)

{
  _DAT_146a1c630 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8b46b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a1c638,1);
  return;
}



// FUNCTION 143e8b480 FUN_143e8b480 body=66 status=ok
// SIG undefined FUN_143e8b480(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8b480(void)

{
  _DAT_146a1e6a0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8b4bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a1e6a8,1);
  return;
}



// FUNCTION 143e8b4d0 FUN_143e8b4d0 body=66 status=ok
// SIG undefined FUN_143e8b4d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8b4d0(void)

{
  _DAT_146a1e690 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8b50b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a1e698,1);
  return;
}



// FUNCTION 143e8b520 FUN_143e8b520 body=66 status=ok
// SIG undefined FUN_143e8b520(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8b520(void)

{
  _DAT_146a1e700 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8b55b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a1e708,1);
  return;
}



// FUNCTION 143e8b570 FUN_143e8b570 body=66 status=ok
// SIG undefined FUN_143e8b570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8b570(void)

{
  _DAT_146a1e6f0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8b5ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a1e6f8,1);
  return;
}



// FUNCTION 143e8b5c0 FUN_143e8b5c0 body=66 status=ok
// SIG undefined FUN_143e8b5c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8b5c0(void)

{
  _DAT_146a1e6d0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8b5fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a1e6d8,1);
  return;
}



// FUNCTION 143e8b610 FUN_143e8b610 body=66 status=ok
// SIG undefined FUN_143e8b610(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8b610(void)

{
  _DAT_146a1e6b0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8b64b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a1e6b8,1);
  return;
}



// FUNCTION 143e8b660 FUN_143e8b660 body=66 status=ok
// SIG undefined FUN_143e8b660(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8b660(void)

{
  _DAT_146a1dbd0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8b69b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a1dbd8,1);
  return;
}



// FUNCTION 143e8b6b0 FUN_143e8b6b0 body=66 status=ok
// SIG undefined FUN_143e8b6b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8b6b0(void)

{
  _DAT_146a1dbe0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8b6eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a1dbe8,1);
  return;
}



// FUNCTION 143e8b700 FUN_143e8b700 body=66 status=ok
// SIG undefined FUN_143e8b700(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8b700(void)

{
  _DAT_146a1dbf0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8b73b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a1dbf8,1);
  return;
}



// FUNCTION 143e8b750 FUN_143e8b750 body=66 status=ok
// SIG undefined FUN_143e8b750(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8b750(void)

{
  _DAT_146a1dc00 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8b78b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a1dc08,1);
  return;
}



// FUNCTION 143e8b7a0 FUN_143e8b7a0 body=66 status=ok
// SIG undefined FUN_143e8b7a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8b7a0(void)

{
  _DAT_146a1e6e0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8b7db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a1e6e8,1);
  return;
}



// FUNCTION 143e8b7f0 FUN_143e8b7f0 body=66 status=ok
// SIG undefined FUN_143e8b7f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8b7f0(void)

{
  _DAT_146a1ea40 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8b82b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a1ea48,1);
  return;
}



// FUNCTION 143e8b840 FUN_143e8b840 body=66 status=ok
// SIG undefined FUN_143e8b840(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8b840(void)

{
  _DAT_146a1ea00 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8b87b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a1ea08,1);
  return;
}



// FUNCTION 143e8b890 FUN_143e8b890 body=66 status=ok
// SIG undefined FUN_143e8b890(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8b890(void)

{
  _DAT_146a1ea10 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8b8cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a1ea18,1);
  return;
}



// FUNCTION 143e8b8e0 FUN_143e8b8e0 body=66 status=ok
// SIG undefined FUN_143e8b8e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8b8e0(void)

{
  _DAT_146a1ea30 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8b91b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a1ea38,1);
  return;
}



// FUNCTION 143e8b930 FUN_143e8b930 body=66 status=ok
// SIG undefined FUN_143e8b930(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8b930(void)

{
  _DAT_146a1e720 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8b96b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a1e728,1);
  return;
}



// FUNCTION 143e8b980 FUN_143e8b980 body=66 status=ok
// SIG undefined FUN_143e8b980(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8b980(void)

{
  _DAT_146a1e710 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8b9bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a1e718,1);
  return;
}



// FUNCTION 143e8b9d0 FUN_143e8b9d0 body=66 status=ok
// SIG undefined FUN_143e8b9d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8b9d0(void)

{
  _DAT_146a1ea20 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8ba0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a1ea28,1);
  return;
}



// FUNCTION 143e8ba20 FUN_143e8ba20 body=66 status=ok
// SIG undefined FUN_143e8ba20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8ba20(void)

{
  _DAT_146a1e6c0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8ba5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a1e6c8,1);
  return;
}



// FUNCTION 143e8ba70 FUN_143e8ba70 body=58 status=ok
// SIG undefined FUN_143e8ba70(void)

void FUN_143e8ba70(void)

{
  PTR_PTR_1464c1ce0 = (undefined *)&PTR_FUN_144de0118;
  FRenderResource::ReleaseResource(&PTR_PTR_1464c1ce0);
  FUN_141b28a30(&DAT_1464c1d10);
  FUN_141edd2d0(&PTR_PTR_1464c1ce0);
  return;
}



// FUNCTION 143e8bab0 `dynamic_atexit_destructor_for_'TestPlayer'' body=70 status=ok
// SIG undefined `dynamic_atexit_destructor_for_'TestPlayer''(void)

void Impl::_dynamic_atexit_destructor_for__TestPlayer__(void)

{
  PTR_PTR_1464c1f00 = (undefined *)&PTR__scalar_deleting_destructor__144ddf900;
  FRenderResource::ReleaseResource(&PTR_PTR_1464c1f00);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&DAT_1464c1f48);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&DAT_1464c1f40);
  FUN_141edd2d0(&PTR_PTR_1464c1f00);
  return;
}



// FUNCTION 143e8bb00 `dynamic_atexit_destructor_for_'GObjectGridBuffers'' body=94 status=ok
// SIG undefined `dynamic_atexit_destructor_for_'GObjectGridBuffers''(void)

void _dynamic_atexit_destructor_for__GObjectGridBuffers__(void)

{
  PTR_PTR_1464c1de0 = (undefined *)&PTR_FUN_144de9668;
  FRenderResource::ReleaseResource(&PTR_PTR_1464c1de0);
  FUN_141ace450(&DAT_1464c1e18);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&DAT_1464c1e28);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&DAT_1464c1e20);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&DAT_1464c1e18);
  FUN_141edd2d0(&PTR_PTR_1464c1de0);
  return;
}



// FUNCTION 143e8bb60 FUN_143e8bb60 body=72 status=ok
// SIG undefined FUN_143e8bb60(void)

void FUN_143e8bb60(void)

{
  PTR_PTR_1464c1e78 = (undefined *)&PTR_FUN_144deaba0;
  FRenderResource::ReleaseResource(&PTR_PTR_1464c1e78);
  PTR_PTR_1464c1e78 = (undefined *)&PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&DAT_1464c1ea8);
  FUN_141edd2d0(&PTR_PTR_1464c1e78);
  return;
}



// FUNCTION 143e8bbb0 `dynamic_atexit_destructor_for_'TestPlayer'' body=70 status=ok
// SIG undefined `dynamic_atexit_destructor_for_'TestPlayer''(void)

void Impl::_dynamic_atexit_destructor_for__TestPlayer__(void)

{
  PTR_PTR_1464c1eb0 = (undefined *)&PTR__scalar_deleting_destructor__144ddf900;
  FRenderResource::ReleaseResource(&PTR_PTR_1464c1eb0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&DAT_1464c1ef8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&DAT_1464c1ef0);
  FUN_141edd2d0(&PTR_PTR_1464c1eb0);
  return;
}



// FUNCTION 143e8bc00 FUN_143e8bc00 body=58 status=ok
// SIG undefined FUN_143e8bc00(void)

void FUN_143e8bc00(void)

{
  PTR_PTR_1464c1e40 = (undefined *)&PTR__scalar_deleting_destructor__144deb140;
  FRenderResource::ReleaseResource(&PTR_PTR_1464c1e40);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&DAT_1464c1e70);
  FUN_141edd2d0(&PTR_PTR_1464c1e40);
  return;
}



// FUNCTION 143e8bd00 `dynamic_atexit_destructor_for_'TimerQueries'' body=210 status=ok
// SIG undefined `dynamic_atexit_destructor_for_'TimerQueries''(void)

void `RendererGPUBenchmark'::`18'::_dynamic_atexit_destructor_for__TimerQueries__(void)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  bool bVar9;
  
  lVar8 = 0x1eb;
  puVar7 = &DAT_146a21fa8;
  do {
    puVar3 = *(undefined8 **)(puVar7 + -2);
    puVar7 = puVar7 + -2;
    lVar8 = lVar8 + -1;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if ((*(char *)(puVar3 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')
            ))) {
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
  } while (lVar8 != 0);
  return;
}



// FUNCTION 143e8d7a0 FUN_143e8d7a0 body=66 status=ok
// SIG undefined FUN_143e8d7a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8d7a0(void)

{
  _DAT_146a28788 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8d7db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a28790,1);
  return;
}



// FUNCTION 143e8d7f0 FUN_143e8d7f0 body=66 status=ok
// SIG undefined FUN_143e8d7f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8d7f0(void)

{
  _DAT_146a28768 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8d82b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a28770,1);
  return;
}



// FUNCTION 143e8d840 FUN_143e8d840 body=66 status=ok
// SIG undefined FUN_143e8d840(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8d840(void)

{
  _DAT_146a28778 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8d87b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a28780,1);
  return;
}



// FUNCTION 143e8d890 FUN_143e8d890 body=66 status=ok
// SIG undefined FUN_143e8d890(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8d890(void)

{
  _DAT_146a28930 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8d8cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a28938,1);
  return;
}



// FUNCTION 143e8d8e0 FUN_143e8d8e0 body=66 status=ok
// SIG undefined FUN_143e8d8e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8d8e0(void)

{
  _DAT_146a28910 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8d91b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a28918,1);
  return;
}



// FUNCTION 143e8d930 FUN_143e8d930 body=66 status=ok
// SIG undefined FUN_143e8d930(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8d930(void)

{
  _DAT_146a28940 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8d96b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a28948,1);
  return;
}



// FUNCTION 143e8d980 FUN_143e8d980 body=66 status=ok
// SIG undefined FUN_143e8d980(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8d980(void)

{
  _DAT_146a28950 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8d9bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a28958,1);
  return;
}



// FUNCTION 143e8d9d0 FUN_143e8d9d0 body=66 status=ok
// SIG undefined FUN_143e8d9d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8d9d0(void)

{
  _DAT_146a27698 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8da0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a276a0,1);
  return;
}



// FUNCTION 143e8da20 FUN_143e8da20 body=66 status=ok
// SIG undefined FUN_143e8da20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8da20(void)

{
  _DAT_146a27710 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8da5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a27718,1);
  return;
}



// FUNCTION 143e8da70 FUN_143e8da70 body=66 status=ok
// SIG undefined FUN_143e8da70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8da70(void)

{
  _DAT_146a27728 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8daab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a27730,1);
  return;
}



// FUNCTION 143e8dac0 FUN_143e8dac0 body=66 status=ok
// SIG undefined FUN_143e8dac0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8dac0(void)

{
  _DAT_146a276f8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8dafb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a27700,1);
  return;
}



// FUNCTION 143e8db10 FUN_143e8db10 body=66 status=ok
// SIG undefined FUN_143e8db10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8db10(void)

{
  _DAT_146a276b0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8db4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a276b8,1);
  return;
}



// FUNCTION 143e8db60 FUN_143e8db60 body=66 status=ok
// SIG undefined FUN_143e8db60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8db60(void)

{
  _DAT_146a276e0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8db9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a276e8,1);
  return;
}



// FUNCTION 143e8dbb0 FUN_143e8dbb0 body=66 status=ok
// SIG undefined FUN_143e8dbb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8dbb0(void)

{
  _DAT_146a27680 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8dbeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a27688,1);
  return;
}



// FUNCTION 143e8dc00 FUN_143e8dc00 body=66 status=ok
// SIG undefined FUN_143e8dc00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8dc00(void)

{
  _DAT_146a27668 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8dc3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a27670,1);
  return;
}



// FUNCTION 143e8dc50 FUN_143e8dc50 body=66 status=ok
// SIG undefined FUN_143e8dc50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8dc50(void)

{
  _DAT_146a28900 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8dc8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a28908,1);
  return;
}



// FUNCTION 143e8dca0 FUN_143e8dca0 body=66 status=ok
// SIG undefined FUN_143e8dca0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8dca0(void)

{
  _DAT_146a293d0 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8dcdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a293d8,1);
  return;
}



// FUNCTION 143e8dcf0 FUN_143e8dcf0 body=66 status=ok
// SIG undefined FUN_143e8dcf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8dcf0(void)

{
  _DAT_146a29140 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8dd2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a29148,1);
  return;
}



// FUNCTION 143e8dd40 FUN_143e8dd40 body=66 status=ok
// SIG undefined FUN_143e8dd40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8dd40(void)

{
  _DAT_146a293e8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8dd7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a293f0,1);
  return;
}



// FUNCTION 143e8dd90 FUN_143e8dd90 body=66 status=ok
// SIG undefined FUN_143e8dd90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8dd90(void)

{
  _DAT_146a29400 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8ddcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a29408,1);
  return;
}



// FUNCTION 143e8dde0 FUN_143e8dde0 body=66 status=ok
// SIG undefined FUN_143e8dde0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8dde0(void)

{
  _DAT_146a29218 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8de1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a29220,1);
  return;
}



// FUNCTION 143e8de30 FUN_143e8de30 body=66 status=ok
// SIG undefined FUN_143e8de30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8de30(void)

{
  _DAT_146a29170 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8de6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a29178,1);
  return;
}



// FUNCTION 143e8de80 FUN_143e8de80 body=66 status=ok
// SIG undefined FUN_143e8de80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8de80(void)

{
  _DAT_146a29260 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8debb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a29268,1);
  return;
}



// FUNCTION 143e8ded0 FUN_143e8ded0 body=66 status=ok
// SIG undefined FUN_143e8ded0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8ded0(void)

{
  _DAT_146a29158 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8df0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a29160,1);
  return;
}



// FUNCTION 143e8df20 FUN_143e8df20 body=66 status=ok
// SIG undefined FUN_143e8df20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e8df20(void)

{
  _DAT_146a276c8 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e8df5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,DAT_146a276d0,1);
  return;
}


