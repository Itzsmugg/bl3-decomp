// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14370d800 FUN_14370d800 body=105 status=ok
// SIG undefined FUN_14370d800(void)

void FUN_14370d800(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = *(longlong **)(param_1 + 8);
  uVar2 = (longlong)plVar1 + 0x17U & 0xfffffffffffffff8;
  if ((uVar2 <= *(ulonglong *)(param_1 + 0x10)) &&
     (*(ulonglong *)(param_1 + 8) = uVar2, plVar1 != (longlong *)0x0)) {
    *plVar1 = param_2;
    hkMonitorStream::TimerCommand::setTime();
  }
  if (DAT_146b819a0 != (code *)0x0) {
    (*DAT_146b819a0)(DAT_146b819a8);
  }
  if (DAT_146b81998 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014370d860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_146b81998)(param_2 + 2,DAT_146b819a8);
    return;
  }
  return;
}



// FUNCTION 14370d870 FUN_14370d870 body=61 status=ok
// SIG undefined FUN_14370d870(void)

LPCRITICAL_SECTION FUN_14370d870(LPCRITICAL_SECTION param_1,DWORD param_2)

{
  if (param_2 == 0) {
    if (DAT_1467effcc == -1) {
      DAT_1467effcc = FUN_1437643a0(0);
    }
    param_2 = DAT_1467effcc * 1000;
  }
  InitializeCriticalSectionAndSpinCount(param_1,param_2);
  return param_1;
}



// FUNCTION 14370d8b0 ~FWindowsCriticalSection body=7 status=ok
// SIG void ~FWindowsCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

void __stdcall
FWindowsCriticalSection::~FWindowsCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x00014370d8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 14370d8c0 FUN_14370d8c0 body=11 status=ok
// SIG undefined FUN_14370d8c0(void)

void FUN_14370d8c0(undefined8 *param_1)

{
  *param_1 = hkMemorySystem::vftable;
  return;
}



// FUNCTION 14370d8d0 FUN_14370d8d0 body=55 status=ok
// SIG undefined FUN_14370d8d0(void)

undefined8 FUN_14370d8d0(undefined8 param_1,byte param_2)

{
  FUN_14370d8c0();
  if ((param_2 & 5) == 5) {
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,8);
  }
  return param_1;
}



// FUNCTION 14370d910 FUN_14370d910 body=59 status=ok
// SIG undefined FUN_14370d910(void)

void FUN_14370d910(longlong *param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  (**(code **)(*param_1 + 0x60))(param_1,pvVar1);
                    /* WARNING: Could not recover jumptable at 0x00014370d947. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1);
  return;
}



// FUNCTION 14370d950 FUN_14370d950 body=8 status=ok
// SIG undefined FUN_14370d950(void)

undefined8 FUN_14370d950(void)

{
  return DAT_146b819b0;
}



// FUNCTION 14370d960 FUN_14370d960 body=8 status=ok
// SIG undefined FUN_14370d960(void)

void FUN_14370d960(undefined8 param_1)

{
  DAT_146b819b0 = param_1;
  return;
}



// FUNCTION 14370d970 FUN_14370d970 body=96 status=ok
// SIG undefined FUN_14370d970(void)

void FUN_14370d970(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1437644c0(&DAT_146b819c0);
  DAT_146b81ed0 = plVar1;
  FUN_1437648b0(plVar1,param_1);
  FUN_14370d960(plVar1);
                    /* WARNING: Could not recover jumptable at 0x00014370d9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 8))(plVar1,param_2,3);
  return;
}



// FUNCTION 14370d9d0 FUN_14370d9d0 body=112 status=ok
// SIG undefined FUN_14370d9d0(void)

ulonglong FUN_14370d9d0(void)

{
  uint *puVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 local_res8 [32];
  
  uVar3 = 0;
  if (DAT_146b81ed0 != (longlong *)0x0) {
    puVar1 = (uint *)(**(code **)(*DAT_146b81ed0 + 0x10))(DAT_146b81ed0,local_res8,3);
    uVar3 = *puVar1;
    (**(code **)*DAT_146b81ed0)(DAT_146b81ed0,0);
    DAT_146b81ed0 = (longlong *)0x0;
    FUN_14370d960(0);
  }
  if ((DAT_146b81ed8 != (code *)0x0) && (-1 < (int)uVar3)) {
    uVar2 = (*DAT_146b81ed8)();
    DAT_146b81ed8 = (code *)0x0;
    return uVar2;
  }
  return (ulonglong)uVar3;
}



// FUNCTION 14370da40 FUN_14370da40 body=67 status=ok
// SIG undefined FUN_14370da40(void)

undefined8 * FUN_14370da40(undefined8 *param_1)

{
  *param_1 = 0;
  FHeapAllocator::ForAnyElementType::ForAnyElementType(param_1 + 1);
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  Semaphore::Semaphore(param_1 + 6,0,1);
  return param_1;
}



// FUNCTION 14370da90 FUN_14370da90 body=182 status=ok
// SIG undefined FUN_14370da90(void)

undefined8 * FUN_14370da90(undefined8 *param_1,longlong param_2,int param_3)

{
  param_1[1] = 0;
  *param_1 = hkCpuThreadPool::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = param_1 + 5;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000020;
  Semaphore::Semaphore(param_1 + 0x29,0,1000,0);
  *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined2 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2b] = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x18);
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  if (param_3 == 0) {
    FUN_14370e3f0(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14370db50 FUN_14370db50 body=45 status=ok
// SIG undefined FUN_14370db50(void)

undefined1 * FUN_14370db50(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(char **)(param_1 + 0x20) = "HavokWorkerThread";
  return param_1;
}



// FUNCTION 14370db80 FUN_14370db80 body=305 status=ok
// SIG undefined FUN_14370db80(void)

void FUN_14370db80(undefined8 *param_1)

{
  longlong lVar1;
  LPVOID pvVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = hkCpuThreadPool::vftable;
  FUN_14370e740();
  lVar4 = (longlong)*(int *)(param_1 + 4);
  lVar5 = 0;
  if (0 < lVar4) {
    do {
      lVar1 = *(longlong *)(param_1[3] + lVar5 * 8);
      *(undefined1 *)(lVar1 + 0x28) = 1;
      hkSemaphore::release(lVar1 + 0x30,1);
      lVar5 = lVar5 + 1;
    } while (lVar5 < lVar4);
  }
  lVar5 = 0;
  if (0 < lVar4) {
    do {
      lVar1 = *(longlong *)(param_1[3] + lVar5 * 8);
      FUN_143765cf0(lVar1 + 8);
      if (lVar1 != 0) {
        hkSemaphore::~hkSemaphore(lVar1 + 0x30);
        thunk_FUN_143765cf0(lVar1 + 8);
        pvVar2 = TlsGetValue(DAT_146b7bf70);
        if (pvVar2 == (LPVOID)0x0) {
          pvVar2 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar2 + 0x58),lVar1,0x48);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < lVar4);
  }
  hkSemaphore::~hkSemaphore(param_1 + 0x29);
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_1 + 4) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    FUN_143702e10(uVar3,param_1[3],8,*(uint *)((longlong)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = hkThreadPool::vftable;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14370dcc0 FUN_14370dcc0 body=139 status=ok
// SIG undefined FUN_14370dcc0(void)

longlong FUN_14370dcc0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14370db80();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x168;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x168);
    }
  }
  return param_1;
}



// FUNCTION 14370dd50 FUN_14370dd50 body=144 status=ok
// SIG undefined FUN_14370dd50(void)

undefined8 * FUN_14370dd50(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  *param_1 = hkThreadPool::vftable;
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      sVar2 = 0x18;
      if (*(short *)(param_1 + 2) != -1) {
        sVar2 = *(short *)(param_1 + 2);
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14370dde0 FUN_14370dde0 body=264 status=ok
// SIG undefined FUN_14370dde0(void)

void FUN_14370dde0(longlong param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  LPVOID pvVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 local_res10 [8];
  
  pvVar2 = TlsGetValue(DAT_146b7bf70);
  if (pvVar2 == (LPVOID)0x0) {
    pvVar2 = DAT_146b7bf68;
  }
  lVar3 = (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar2 + 0x58),0x48);
  if (lVar3 == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = (longlong *)FUN_14370da40(lVar3);
  }
  uVar5 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x20) == (*(uint *)(param_1 + 0x24) & 0x3fffffff)) {
    FUN_14370c460(uVar5,param_1 + 0x18,8);
  }
  *(longlong **)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0x20) * 8) = plVar4;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  *plVar4 = param_1;
  iVar1 = *(int *)(param_1 + 0x20);
  *(int *)(plVar4 + 3) = iVar1;
  *(undefined2 *)(plVar4 + 5) = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  if (param_2 == 0) {
    *(undefined1 *)(plVar4 + 4) = 1;
    *(int *)((longlong)plVar4 + 0x1c) = iVar1 % *(int *)(DAT_146b83e88 + 0x18);
  }
  else {
    *(char *)(plVar4 + 4) = (char)param_2;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = param_3;
  }
  FUN_143765d50(plVar4 + 1,local_res10,FUN_14370e620,plVar4,*(undefined8 *)(param_1 + 0x158),
                *(undefined4 *)(param_1 + 0x160));
  return;
}



// FUNCTION 14370def0 FUN_14370def0 body=503 status=ok
// SIG undefined FUN_14370def0(void)

void FUN_14370def0(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined1 *local_240;
  int local_238;
  uint local_234;
  undefined1 local_230 [520];
  
  uVar8 = 0;
  if (*(longlong *)(param_1 + 0x140) != 0) {
    local_240 = local_230;
    local_238 = 0;
    local_234 = 0x80000020;
    FUN_143712a70(*(longlong *)(param_1 + 0x140),&local_240);
    local_258 = 0;
    local_250 = 0;
    local_24c = 0xffffffff;
    uVar7 = uVar8;
    uVar11 = uVar8;
    if (0 < local_238) {
      do {
        local_res8 = *(undefined8 *)(local_240 + uVar7 + 8);
        local_res10 = *(undefined8 *)(local_240 + uVar7);
        uVar4 = FUN_143703a50();
        FUN_14372d6e0(&local_258,uVar4,&local_res10,&local_res8);
        uVar10 = (int)uVar11 + 1;
        uVar7 = uVar7 + 0x10;
        uVar11 = (ulonglong)uVar10;
      } while ((int)uVar10 < local_238);
    }
    uVar7 = uVar8;
    uVar11 = uVar8;
    if (0 < *(int *)(param_1 + 0x20)) {
      do {
        local_res10 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + uVar7) + 0x38);
        piVar5 = (int *)FUN_14372adb0(&local_258,&local_res8,&local_res10,&local_res18);
        if (-1 < *piVar5) {
          *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + uVar7) + 0x40) = local_res18
          ;
        }
        uVar10 = (int)uVar11 + 1;
        uVar7 = uVar7 + 8;
        uVar11 = (ulonglong)uVar10;
      } while ((int)uVar10 < *(int *)(param_1 + 0x20));
    }
    uVar4 = FUN_143703a50();
    FUN_143700a90(&local_258,uVar4);
    AK::MemoryMgr::StartProfileThreadUsage((long)&local_258);
    uVar4 = FUN_143703a50();
    local_238 = 0;
    if (-1 < (int)local_234) {
      FUN_143702e10(uVar4,local_240,0x10,local_234 & 0x3fffffff);
    }
  }
  iVar1 = *(int *)(param_1 + 0x20);
  uVar4 = FUN_143703a50();
  lVar3 = param_2[1];
  uVar10 = *(uint *)((longlong)param_2 + 0xc) & 0x3fffffff;
  iVar9 = (int)lVar3 + iVar1;
  if ((int)uVar10 < iVar9) {
    iVar2 = uVar10 * 2;
    if (iVar9 < iVar2) {
      iVar9 = iVar2;
    }
    FUN_14370c310(uVar4,param_2,iVar9,0x10);
  }
  *(int *)(param_2 + 1) = (int)param_2[1] + iVar1;
  puVar6 = (undefined8 *)((longlong)(int)lVar3 * 0x10 + *param_2);
  uVar7 = uVar8;
  if (0 < *(int *)(param_1 + 0x20)) {
    do {
      uVar10 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar10;
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + -8 + uVar7 + 8);
      uVar4 = *(undefined8 *)(lVar3 + 0x40);
      *puVar6 = *(undefined8 *)(lVar3 + 0x38);
      puVar6[1] = uVar4;
      puVar6 = puVar6 + 2;
      uVar7 = uVar7 + 8;
    } while ((int)uVar10 < *(int *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 14370e0f0 FUN_14370e0f0 body=97 status=ok
// SIG undefined FUN_14370e0f0(void)

void FUN_14370e0f0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_1437123f0();
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar2 = 0;
    do {
      iVar3 = iVar3 + 1;
      lVar1 = *(longlong *)(lVar2 + *(longlong *)(param_1 + 0x18));
      *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(lVar1 + 0x38);
      *(undefined1 *)(*(longlong *)(lVar2 + *(longlong *)(param_1 + 0x18)) + 0x29) = 1;
      lVar2 = lVar2 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 14370e160 FUN_14370e160 body=8 status=ok
// SIG undefined FUN_14370e160(void)

void FUN_14370e160(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x154) = 1;
  return;
}



// FUNCTION 14370e170 FUN_14370e170 body=40 status=ok
// SIG undefined FUN_14370e170(void)

longlong FUN_14370e170(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 != '\0') {
    return param_1[0x27];
  }
  return 0;
}



// FUNCTION 14370e1a0 FUN_14370e1a0 body=40 status=ok
// SIG undefined FUN_14370e1a0(void)

longlong FUN_14370e1a0(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 != '\0') {
    return param_1[0x28];
  }
  return 0;
}



// FUNCTION 14370e1d0 FUN_14370e1d0 body=11 status=ok
// SIG undefined FUN_14370e1d0(void)

bool FUN_14370e1d0(longlong param_1)

{
  return *(char *)(param_1 + 0x155) != '\0';
}



// FUNCTION 14370e1e0 FUN_14370e1e0 body=48 status=ok
// SIG undefined FUN_14370e1e0(void)

undefined8 FUN_14370e1e0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x38))();
  if (lVar1 == 0) {
    lVar1 = (**(code **)(*param_1 + 0x30))(param_1);
    if (lVar1 == 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 14370e220 FUN_14370e220 body=22 status=ok
// SIG undefined FUN_14370e220(void)

void FUN_14370e220(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x138) = param_2;
  FUN_14370e260(param_1,&LAB_14370e210,param_2);
  return;
}



// FUNCTION 14370e240 FUN_14370e240 body=31 status=ok
// SIG undefined FUN_14370e240(void)

void FUN_14370e240(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0x140) = param_2;
  *(undefined4 *)(param_2 + 0x380) = *(undefined4 *)(param_1 + 0x20);
  FUN_14370e260(param_1,&LAB_14370e560,param_2);
  return;
}



// FUNCTION 14370e260 FUN_14370e260 body=87 status=ok
// SIG undefined FUN_14370e260(void)

void FUN_14370e260(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  *(undefined1 *)(param_1 + 0x155) = 1;
  iVar1 = *(int *)(param_1 + 0x20) + -1;
  *(undefined8 *)(param_1 + 0x128) = param_2;
  lVar2 = (longlong)iVar1;
  *(undefined8 *)(param_1 + 0x130) = param_3;
  if (-1 < iVar1) {
    do {
      hkSemaphore::release(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar2 * 8) + 0x30,1);
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  return;
}



// FUNCTION 14370e2c0 FUN_14370e2c0 body=150 status=ok
// SIG undefined FUN_14370e2c0(void)

void FUN_14370e2c0(longlong param_1)

{
  longlong lVar1;
  LPVOID pvVar2;
  
  lVar1 = *(longlong *)
           (*(longlong *)(param_1 + 0x18) + (longlong)(*(int *)(param_1 + 0x20) + -1) * 8);
  *(undefined1 *)(lVar1 + 0x28) = 1;
  hkSemaphore::release(lVar1 + 0x30,1);
  FUN_143765cf0(lVar1 + 8);
  hkSemaphore::~hkSemaphore(lVar1 + 0x30);
  thunk_FUN_143765cf0(lVar1 + 8);
  pvVar2 = TlsGetValue(DAT_146b7bf70);
  if (pvVar2 == (LPVOID)0x0) {
    pvVar2 = DAT_146b7bf68;
  }
  (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
            (*(longlong **)((longlong)pvVar2 + 0x58),lVar1,0x48);
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  return;
}



// FUNCTION 14370e360 FUN_14370e360 body=138 status=ok
// SIG undefined FUN_14370e360(void)

void FUN_14370e360(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = param_1[0x28];
  if (lVar1 != 0) {
    FUN_143712420(lVar1);
    (**(code **)(*param_1 + 0x40))(param_1);
  }
  iVar3 = (int)param_1[4];
  iVar2 = iVar3 - param_2;
  while (iVar3 < param_2) {
    FUN_14370dde0(param_1,0,0);
    iVar3 = (int)param_1[4];
    iVar2 = iVar3 - param_2;
  }
  if (iVar3 != param_2 && SBORROW4(iVar3,param_2) == iVar2 < 0) {
    do {
      FUN_14370e2c0(param_1);
    } while (param_2 < (int)param_1[4]);
  }
  if (lVar1 != 0) {
    FUN_143712ff0(lVar1);
    (**(code **)(*param_1 + 0x20))(param_1,lVar1);
  }
  return;
}



// FUNCTION 14370e3f0 FUN_14370e3f0 body=366 status=ok
// SIG undefined FUN_14370e3f0(void)

void FUN_14370e3f0(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  LPVOID pvVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  
  if (*(int *)(param_1 + 0x20) == 0) {
    if (*(longlong *)(param_1 + 0x140) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x380) = *(undefined4 *)(param_2 + 4);
    }
    iVar8 = *(int *)(param_2 + 4);
    uVar3 = FUN_143703a50();
    uVar7 = *(uint *)(param_1 + 0x24) & 0x3fffffff;
    if ((int)uVar7 < iVar8) {
      iVar2 = uVar7 * 2;
      iVar1 = iVar8;
      if (iVar8 < iVar2) {
        iVar1 = iVar2;
      }
      FUN_14370c310(uVar3,param_1 + 0x18,iVar1);
    }
    *(int *)(param_1 + 0x20) = iVar8;
    if (0 < *(int *)(param_2 + 4)) {
      lVar10 = 0;
      lVar9 = 0;
      iVar8 = 0;
      do {
        iVar8 = iVar8 + 1;
        pvVar4 = TlsGetValue(DAT_146b7bf70);
        if (pvVar4 == (LPVOID)0x0) {
          pvVar4 = DAT_146b7bf68;
        }
        lVar5 = (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                          (*(longlong **)((longlong)pvVar4 + 0x58),0x48);
        if (lVar5 == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = (longlong *)FUN_14370da40(lVar5);
        }
        *(longlong **)(lVar9 + *(longlong *)(param_1 + 0x18)) = plVar6;
        *plVar6 = param_1;
        *(undefined2 *)(plVar6 + 5) = 0;
        *(int *)(plVar6 + 3) = iVar8;
        if (*(int *)(param_2 + 0x10) < 1) {
          *(undefined1 *)(plVar6 + 4) = 1;
          *(int *)((longlong)plVar6 + 0x1c) = iVar8 % *(int *)(DAT_146b83e88 + 0x18);
        }
        else {
          *(undefined1 *)(plVar6 + 4) = *param_2;
          *(undefined4 *)((longlong)plVar6 + 0x1c) =
               *(undefined4 *)(lVar10 + *(longlong *)(param_2 + 8));
        }
        FUN_143765d50(plVar6 + 1,local_res8,FUN_14370e620,plVar6,*(undefined8 *)(param_1 + 0x158),
                      *(undefined4 *)(param_1 + 0x160));
        lVar9 = lVar9 + 8;
        lVar10 = lVar10 + 4;
      } while (iVar8 < *(int *)(param_2 + 4));
    }
  }
  return;
}



// FUNCTION 14370e570 FUN_14370e570 body=174 status=ok
// SIG undefined FUN_14370e570(void)

void FUN_14370e570(longlong param_1,longlong param_2)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  undefined1 local_88 [128];
  
  FUN_143765ee0(local_88,*(undefined4 *)(param_2 + 0x18));
  if (0 < *(int *)(param_1 + 0x150)) {
    pvVar1 = TlsGetValue(DAT_146b8198c);
    FUN_14370d4e0(pvVar1,*(undefined4 *)(param_1 + 0x150));
  }
  puVar2 = TlsGetValue(DAT_146b8198c);
  *(undefined8 *)(param_2 + 0x38) = *puVar2;
  pvVar1 = TlsGetValue(DAT_146b8198c);
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)((longlong)pvVar1 + 8);
  if (*(char *)(param_2 + 0x20) == '\x02') {
    FUN_143765d40();
  }
  else {
    FUN_143765d20(param_2 + 8,*(undefined4 *)(param_2 + 0x1c));
  }
  FUN_14370e640(param_1,param_2,local_88);
  FUN_143765f50(local_88);
  return;
}



// FUNCTION 14370e620 FUN_14370e620 body=23 status=ok
// SIG undefined FUN_14370e620(void)

undefined8 FUN_14370e620(undefined8 *param_1)

{
  (**(code **)(*(longlong *)*param_1 + 0x70))((longlong *)*param_1,param_1);
  return 0;
}



// FUNCTION 14370e640 FUN_14370e640 body=247 status=ok
// SIG undefined FUN_14370e640(void)

void FUN_14370e640(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  LPVOID pvVar2;
  longlong *plVar3;
  long lVar4;
  ulonglong uVar5;
  
  FWindowsPlatformProcess::WaitForProc(param_2 + 0x30);
  cVar1 = *(char *)(param_2 + 0x28);
  while (cVar1 == '\0') {
    uVar5 = (ulonglong)DAT_146b8198c;
    pvVar2 = TlsGetValue(DAT_146b8198c);
    if (*(char *)(param_2 + 0x29) != '\0') {
      FUN_14370d450(pvVar2);
      pvVar2 = TlsGetValue(DAT_146b8198c);
      uVar5 = *(ulonglong *)((longlong)pvVar2 + 8);
      *(ulonglong *)(param_2 + 0x40) = uVar5;
      *(undefined1 *)(param_2 + 0x29) = 0;
    }
    AK::MemoryMgr::StartProfileThreadUsage((long)uVar5);
    lVar4 = (long)*(undefined8 *)(param_1 + 0x130);
    (**(code **)(param_1 + 0x128))();
    AK::MemoryMgr::StartProfileThreadUsage(lVar4);
    pvVar2 = TlsGetValue(DAT_146b8198c);
    *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)((longlong)pvVar2 + 8);
    if (*(char *)(param_1 + 0x154) != '\0') {
      plVar3 = (longlong *)FUN_14370d950();
      (**(code **)(*plVar3 + 0x60))(plVar3,param_3);
    }
    hkSemaphore::release(param_1 + 0x148,1);
    FWindowsPlatformProcess::WaitForProc(param_2 + 0x30);
    cVar1 = *(char *)(param_2 + 0x28);
  }
  return;
}



// FUNCTION 14370e740 FUN_14370e740 body=123 status=ok
// SIG undefined FUN_14370e740(void)

void FUN_14370e740(longlong param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x155) != '\0') {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x20)) {
      do {
        FWindowsPlatformProcess::WaitForProc(param_1 + 0x148);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x20));
    }
    *(undefined2 *)(param_1 + 0x154) = 0;
  }
  *(undefined8 *)(param_1 + 0x138) = 0;
  if (*(longlong *)(param_1 + 0x140) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x380) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  return;
}



// FUNCTION 14370e7c0 FUN_14370e7c0 body=43 status=ok
// SIG undefined FUN_14370e7c0(void)

void FUN_14370e7c0(undefined8 param_1)

{
  char *pcVar1;
  undefined1 local_res10 [24];
  
  pcVar1 = (char *)hkBaseSystem::isInitialized(local_res10);
  if (*pcVar1 != '\0') {
    FUN_14370e7f0(param_1);
    return;
  }
  return;
}



// FUNCTION 14370e7f0 FUN_14370e7f0 body=116 status=ok
// SIG undefined FUN_14370e7f0(void)

void FUN_14370e7f0(ulonglong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)(*param_1 & 0xfffffffffffffffc);
  if (puVar1 != (undefined8 *)0x0) {
    if ((*param_1 & 3) == 0) {
      puVar2 = (undefined8 *)(puVar1[1] & 0xfffffffffffffffc);
      if (puVar1 == (undefined8 *)0x0) goto LAB_14370e827;
      while( true ) {
        (**(code **)*puVar1)(puVar1,1);
LAB_14370e827:
        puVar1 = puVar2;
        if (puVar1 == (undefined8 *)0x0) break;
        puVar2 = (undefined8 *)(puVar1[1] & 0xfffffffffffffffc);
      }
      *param_1 = 0;
      return;
    }
    do {
      puVar1[1] = puVar1[1] & 0xfffffffffffffffd;
      puVar1[1] = puVar1[1] | 1;
      puVar1 = (undefined8 *)(puVar1[1] & 0xfffffffffffffffc);
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}



// FUNCTION 14370e870 FUN_14370e870 body=129 status=ok
// SIG undefined FUN_14370e870(void)

void FUN_14370e870(ulonglong *param_1,longlong param_2)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)(*param_1 & 0xfffffffffffffffc);
  puVar1 = param_1;
joined_r0x00014370e88f:
  do {
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    puVar3 = (undefined8 *)(puVar2[1] & 0xfffffffffffffffc);
    if (puVar2[2] == param_2) {
      if ((*param_1 & 3) == 0) {
        *puVar1 = *puVar1 & 3;
        *puVar1 = *puVar1 | (ulonglong)puVar3;
        (**(code **)*puVar2)(puVar2,1);
        puVar2 = puVar3;
        goto joined_r0x00014370e88f;
      }
      puVar2[1] = puVar2[1] & 0xfffffffffffffffd;
      puVar2[1] = puVar2[1] | 1;
    }
    puVar1 = puVar2 + 1;
    puVar2 = puVar3;
  } while( true );
}



// FUNCTION 14370e900 FUN_14370e900 body=194 status=ok
// SIG undefined FUN_14370e900(void)

undefined1 *
FUN_14370e900(ulonglong *param_1,undefined1 *param_2,longlong param_3,undefined8 param_4,
             undefined4 param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  int iVar4;
  
  uVar2 = *param_1;
  puVar1 = param_1;
  while( true ) {
    plVar3 = (longlong *)(uVar2 & 0xfffffffffffffffc);
    if (plVar3 == (longlong *)0x0) {
      *param_2 = 0;
      return param_2;
    }
    if ((plVar3[2] == param_3) &&
       (iVar4 = (**(code **)(*plVar3 + 8))(plVar3,param_4,param_5), iVar4 != 0)) break;
    puVar1 = (ulonglong *)(plVar3 + 1);
    uVar2 = plVar3[1];
  }
  if ((*param_1 & 3) != 0) {
    plVar3[1] = plVar3[1] & 0xfffffffffffffffd;
    plVar3[1] = plVar3[1] | 1;
    *param_2 = 1;
    return param_2;
  }
  *puVar1 = (ulonglong)((*(uint *)(plVar3 + 1) ^ (uint)*puVar1) & 3) ^ plVar3[1];
  (**(code **)*plVar3)(plVar3,1);
  *param_2 = 1;
  return param_2;
}



// FUNCTION 14370e9d0 FUN_14370e9d0 body=105 status=ok
// SIG undefined FUN_14370e9d0(void)

undefined8 * FUN_14370e9d0(undefined8 *param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  
  param_1[1] = 0;
  *param_1 = hkDefaultError::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  puVar1 = &LAB_14370cb60;
  if (param_2 != (undefined1 *)0x0) {
    puVar1 = param_2;
  }
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xffffffff;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[7] = puVar1;
  param_1[8] = param_3;
  FUN_14370d870(param_1 + 10,0);
  return param_1;
}



// FUNCTION 14370ea40 FUN_14370ea40 body=139 status=ok
// SIG undefined FUN_14370ea40(void)

longlong FUN_14370ea40(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1424b66a0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x78;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x78);
    }
  }
  return param_1;
}



// FUNCTION 14370ead0 FUN_14370ead0 body=60 status=ok
// SIG undefined FUN_14370ead0(void)

void FUN_14370ead0(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x48) = 0;
  hkMapBase<unsigned___int64,unsigned___int64,hkMapOperations<unsigned___int64>_>::clear
            (param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014370eb05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  return;
}



// FUNCTION 14370eb10 formMessage body=198 status=ok
// SIG undefined formMessage(void)

void hkDefaultError::formMessage
               (longlong *param_1,undefined8 param_2,int param_3,undefined8 param_4,longlong param_5
               ,uint param_6,char *param_7)

{
  undefined1 *local_res8;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar1;
  
  uVar1 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  local_res8 = &DAT_145af3922;
  (**(code **)(*param_1 + 0x68))(param_1,param_2,&local_res8);
  if (param_3 == 0) {
    if (param_5 == 0) {
      hkStringBuf::printf(param_7,&DAT_145afa01c,param_4);
      return;
    }
  }
  else if (param_3 != -1) {
    hkStringBuf::printf(param_7,"%s(%d): [0x%08X] %s: %s\n",param_5,(ulonglong)param_6,
                        CONCAT44(uVar1,param_3),local_res8,param_4);
    return;
  }
  hkStringBuf::printf(param_7,"%s(%d): %s: %s\n",param_5,(ulonglong)param_6,local_res8,param_4);
  return;
}



// FUNCTION 14370ebe0 FUN_14370ebe0 body=80 status=ok
// SIG undefined FUN_14370ebe0(void)

void FUN_14370ebe0(undefined8 param_1,int param_2,undefined8 *param_3)

{
  code *pcVar1;
  
  if (param_2 == 0) {
    *param_3 = "Report";
    return;
  }
  if (param_2 == 1) {
    *param_3 = "Warning";
    return;
  }
  if (param_2 == 2) {
    *param_3 = "Assert";
    return;
  }
  if (param_2 != 3) {
    if (param_2 != 4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *param_3 = "Fatal Error";
    return;
  }
  *param_3 = "Error";
  return;
}



// FUNCTION 14370ec40 isEnabled body=101 status=ok
// SIG undefined isEnabled(void)

undefined8 hkDefaultError::isEnabled(longlong param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  undefined8 local_res8;
  longlong local_res10;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  local_res8 = 0;
  local_res10 = (longlong)param_3;
  piVar1 = (int *)FUN_14372d420(param_1 + 0x18,&local_res10,&local_res8);
  *(bool *)param_2 = *piVar1 == 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  return param_2;
}



// FUNCTION 14370ecb0 FUN_14370ecb0 body=184 status=ok
// SIG undefined FUN_14370ecb0(void)

bool FUN_14370ecb0(longlong *param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
                  undefined4 param_6)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  undefined1 local_res10 [8];
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  if ((param_3 == -1) && ((int)param_1[6] != 0)) {
    param_3 = *(int *)(param_1[5] + (longlong)((int)param_1[6] + -1) * 4);
  }
  iVar1 = (**(code **)(*param_1 + 0x38))(param_1);
  if (iVar1 <= param_2) {
    pcVar2 = (char *)(**(code **)(*param_1 + 0x28))(param_1,local_res10,param_3);
    if (*pcVar2 != '\0') {
      (**(code **)(*param_1 + 0x58))(param_1,param_2,param_3,param_4,param_5,param_6);
      bVar3 = param_2 - 2U < 2;
      goto LAB_14370ed4a;
    }
  }
  bVar3 = false;
LAB_14370ed4a:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  return bVar3;
}



// FUNCTION 14370ed70 FUN_14370ed70 body=110 status=ok
// SIG undefined FUN_14370ed70(void)

void FUN_14370ed70(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  uVar1 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x30) == (*(uint *)(param_1 + 0x34) & 0x3fffffff)) {
    FUN_14370c460(uVar1,param_1 + 0x28,4);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x30) * 4) = param_2;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
                    /* WARNING: Could not recover jumptable at 0x00014370edd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  return;
}



// FUNCTION 14370ede0 sectionEnd body=47 status=ok
// SIG undefined sectionEnd(void)

void hkDefaultError::sectionEnd(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
                    /* WARNING: Could not recover jumptable at 0x00014370ee08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  return;
}



// FUNCTION 14370ee10 FUN_14370ee10 body=124 status=ok
// SIG undefined FUN_14370ee10(void)

void FUN_14370ee10(longlong param_1,int param_2,char param_3)

{
  undefined8 uVar1;
  undefined8 local_res8 [2];
  char local_res18;
  longlong local_res20;
  
  local_res18 = param_3;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  if (local_res18 == '\0') {
    if (param_2 != 0) {
      local_res8[0] = 1;
      local_res20 = (longlong)param_2;
      uVar1 = FUN_143703a50();
      FUN_14372d6e0(param_1 + 0x18,uVar1,&local_res20,local_res8);
    }
  }
  else {
    local_res20 = (longlong)param_2;
    FUN_14376e340(param_1 + 0x18,local_res8,&local_res20);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  return;
}



// FUNCTION 14370ee90 FUN_14370ee90 body=10 status=ok
// SIG undefined FUN_14370ee90(void)

undefined4 FUN_14370ee90(undefined8 param_1,int param_2)

{
  return CONCAT31((int3)(param_2 - 2U >> 8),param_2 - 2U < 2);
}



// FUNCTION 14370eea0 FUN_14370eea0 body=324 status=ok
// SIG undefined FUN_14370eea0(void)

void FUN_14370eea0(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  undefined1 local_res8 [8];
  undefined1 **ppuVar3;
  undefined1 *local_498;
  undefined4 local_490;
  uint local_48c;
  undefined1 local_488 [128];
  undefined1 local_408 [16];
  undefined1 local_3f8 [1008];
  
  local_498 = local_488;
  ppuVar3 = &local_498;
  local_48c = 0x80000080;
  local_490 = 1;
  local_488[0] = 0;
  (**(code **)(*param_1 + 0x60))();
  (*(code *)param_1[7])(local_498,param_1[8]);
  cVar1 = (**(code **)(*param_1 + 0x70))(param_1,param_2);
  if (cVar1 != '\0') {
    FUN_1437649c0(local_res8);
    param_5 = 0;
    iVar2 = FUN_143764e00(local_res8,local_408,0x80,0,0,param_6,ppuVar3);
    if (2 < iVar2) {
      (*(code *)param_1[7])("Stack trace is:\n",param_1[8]);
      param_5 = param_1[8];
      FUN_143764a60(local_res8,local_3f8,iVar2 + -2,param_1[7],param_5);
      (*(code *)param_1[7])("Stack trace end\n",param_1[8]);
    }
    FUN_1437649d0(local_res8);
  }
  local_490 = 0;
  if (-1 < (int)local_48c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_498,1,local_48c & 0x3fffffff,param_5);
  }
  return;
}



// FUNCTION 14370f020 FUN_14370f020 body=80 status=ok
// SIG undefined FUN_14370f020(void)

undefined4 * FUN_14370f020(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0x29) = 1;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    uVar1 = (**(code **)(param_1 + 0x10))();
    *param_2 = uVar1;
    return param_2;
  }
  if (*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x20);
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14370f070 FUN_14370f070 body=2140 status=ok
// SIG undefined FUN_14370f070(void)

undefined1 FUN_14370f070(longlong param_1,longlong param_2)

{
  short *psVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  LPVOID pvVar8;
  LPVOID pvVar9;
  LPVOID lpTlsValue;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  LPVOID pvVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined1 local_res18;
  undefined **local_330;
  longlong local_328;
  longlong local_320;
  undefined8 local_318;
  undefined ***pppuStack_310;
  uint local_308;
  undefined4 local_300 [2];
  undefined4 *local_2f8;
  undefined1 *local_2f0;
  uint local_2e8;
  uint local_2e4;
  undefined1 local_2e0 [128];
  undefined1 *local_260;
  int local_258;
  uint local_254;
  undefined1 local_250 [528];
  
  pvVar8 = TlsGetValue(DAT_146b7bf70);
  if (pvVar8 == (LPVOID)0x0) {
    pvVar8 = DAT_146b7bf68;
  }
  FUN_143703aa0(pvVar8);
  pvVar9 = TlsGetValue(DAT_146b8198c);
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  lpTlsValue = TlsGetValue(DAT_146b81f60);
  if ((lpTlsValue == (LPVOID)0x0) || (*(longlong *)((longlong)lpTlsValue + 0x140) != param_1)) {
    FUN_140520750(uVar11,pvVar9);
    iVar15 = *(int *)(*(longlong *)(param_1 + 0x250) + (longlong)(*(int *)(param_1 + 600) + -1) * 4)
    ;
    iVar6 = iVar15 + 1;
    iVar5 = *(int *)(param_1 + 0x4c);
    if (*(int *)(param_1 + 0x4c) < iVar6) {
      iVar5 = iVar6;
    }
    uVar10 = 0;
    *(int *)(param_1 + 0x4c) = iVar5;
    *(int *)(param_1 + 600) = *(int *)(param_1 + 600) + -1;
    lpTlsValue = *(LPVOID *)(param_1 + 0x50 + (longlong)iVar15 * 8);
    *(LPVOID *)((longlong)lpTlsValue + 0x18) = pvVar9;
    if (pvVar9 != (LPVOID)0x0) {
      uVar10 = *(undefined8 *)((longlong)pvVar9 + 8);
    }
    *(undefined8 *)((longlong)lpTlsValue + 0x20) = uVar10;
    *(undefined4 *)((longlong)lpTlsValue + 0xc) = 1;
    TlsSetValue(DAT_146b81f60,lpTlsValue);
    if (*(int *)(param_1 + 900) == 2) {
      uVar7 = FUN_1437195f0();
      *(undefined4 *)((longlong)lpTlsValue + 0x160) = uVar7;
    }
    FOutputDevice::Serialize(uVar11,pvVar9);
  }
  else {
    uVar10 = 0;
    if (*(LPVOID *)((longlong)lpTlsValue + 0x18) != pvVar9) {
      FUN_140520750(uVar11,pvVar9);
      *(LPVOID *)((longlong)lpTlsValue + 0x18) = pvVar9;
      if (pvVar9 != (LPVOID)0x0) {
        uVar10 = *(undefined8 *)((longlong)pvVar9 + 8);
      }
      *(undefined8 *)((longlong)lpTlsValue + 0x20) = uVar10;
      FOutputDevice::Serialize(uVar11,pvVar9);
    }
    *(int *)((longlong)lpTlsValue + 0xc) = *(int *)((longlong)lpTlsValue + 0xc) + 1;
  }
  lVar18 = 0;
  local_330 = hkDefaultTaskQueueEx::ExecutionContext::vftable;
  local_320 = param_1 + 0x18;
  local_308 = 0;
  local_318 = *(undefined8 *)((longlong)lpTlsValue + 0x18);
  pppuStack_310 = &local_330;
  local_260 = local_250;
  local_res18 = 0;
  local_258 = 0;
  local_254 = 0x80000040;
  do {
    uVar11 = 0;
    FUN_143719ca0(*(undefined8 *)((longlong)lpTlsValue + 0x158),0x8db8cde);
    if (pvVar9 != (LPVOID)0x0) {
      uVar11 = *(undefined8 *)((longlong)pvVar9 + 8);
    }
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    FUN_140520750(uVar10,pvVar9);
    lVar2 = *(longlong *)((longlong)lpTlsValue + 0x148);
    *(undefined8 *)((longlong)lpTlsValue + 0x20) = uVar11;
    if ((param_2 != 0) && (lVar18 == 0)) {
      uVar11 = FUN_143703a50();
      if (*(uint *)(param_2 + 0x48) == (*(uint *)(param_2 + 0x4c) & 0x3fffffff)) {
        FUN_14370c460(uVar11,param_2 + 0x40,8);
      }
      *(longlong *)(*(longlong *)(param_2 + 0x40) + (longlong)*(int *)(param_2 + 0x48) * 8) = lVar2;
      *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + 1;
    }
    if (pvVar9 != (LPVOID)0x0) {
      FUN_14370d620(pvVar9,"LtGetNextTask","StFinishPrevious");
    }
    uVar19 = 0;
    uVar20 = uVar19;
    if (lVar18 != 0) {
      if ((*(char *)(lVar18 + 10) != '\0') && (*(short *)(lVar18 + 6) != 0)) {
        *(undefined2 *)(lVar18 + 6) = 0;
        if (0 < *(int *)(param_1 + 0x40)) {
          plVar12 = (longlong *)(*(longlong *)(param_1 + 0x38) + 8);
          do {
            if (lVar18 == *plVar12) {
              FUN_143712fa0(param_1 + 0x38);
              break;
            }
            uVar16 = (int)uVar20 + 1;
            uVar20 = (ulonglong)uVar16;
            plVar12 = plVar12 + 2;
          } while ((int)uVar16 < *(int *)(param_1 + 0x40));
        }
      }
      *(short *)(lVar18 + 8) = *(short *)(lVar18 + 8) + -1;
      uVar20 = 0;
      if ((uint)*(ushort *)(lVar18 + 6) + (uint)*(ushort *)(lVar18 + 8) == 0) {
        iVar15 = *(int *)(lVar18 + 0x28);
        local_2f0 = local_2e0;
        local_2e8 = 0;
        local_2e4 = 0x80000010;
        if (0 < (longlong)iVar15) {
          do {
            lVar21 = *(longlong *)(*(longlong *)(lVar18 + 0x20) + uVar19 * 8);
            psVar1 = (short *)(lVar21 + 4);
            *psVar1 = *psVar1 + -1;
            if (*psVar1 == 0) {
              if (local_2e8 == (local_2e4 & 0x3fffffff)) {
                FUN_14370c460(&PTR_vftable_1467f0638,&local_2f0,8);
              }
              *(longlong *)(local_2f0 + (longlong)(int)local_2e8 * 8) = lVar21;
              local_2e8 = local_2e8 + 1;
            }
            uVar19 = uVar19 + 1;
          } while ((longlong)uVar19 < (longlong)iVar15);
        }
        *(undefined4 *)(lVar18 + 0x28) = 0;
        if (*(longlong *)(lVar18 + 0x18) != 0) {
          lVar21 = 0;
          for (uVar20 = *(ulonglong *)(lVar18 + 0x18); uVar20 != 0; uVar20 = uVar20 >> 1) {
            if (((uVar20 & 1) != 0) &&
               (*(char *)(*(longlong *)(param_1 + 0x50 + lVar21 * 8) + 0x10) != '\0')) {
              *(undefined1 *)(*(longlong *)(param_1 + 0x50 + lVar21 * 8) + 0x10) = 0;
              lVar3 = *(longlong *)(param_1 + 0x50 + lVar21 * 8);
              FUN_143718bb0(lVar3 + 0x150,*(undefined8 *)(lVar3 + 0x158),
                            *(undefined4 *)(lVar3 + 0x160));
            }
            lVar21 = lVar21 + 1;
          }
          *(undefined8 *)(lVar18 + 0x18) = 0;
        }
        uVar19 = 0;
        uVar20 = uVar19;
        uVar13 = uVar19;
        if (0 < (int)local_2e8) {
          do {
            local_2f8 = *(undefined4 **)(local_2f0 + uVar19);
            uVar20 = (ulonglong)((int)uVar20 + (uint)*(ushort *)((longlong)local_2f8 + 6));
            local_300[0] = *local_2f8;
            FUN_1437120f0(param_1 + 0x38,local_300);
            uVar16 = (int)uVar13 + 1;
            uVar19 = uVar19 + 8;
            uVar13 = (ulonglong)uVar16;
          } while ((int)uVar16 < (int)local_2e8);
        }
        *(undefined2 *)(lVar18 + 4) = 0xffff;
        local_2e8 = 0;
        if (-1 < (int)local_2e4) {
          FUN_143702e10(&PTR_vftable_1467f0638,local_2f0,8,local_2e4 & 0x3fffffff);
        }
        local_2f0 = (undefined1 *)0x0;
        local_2e4 = 0x80000000;
      }
    }
    lVar18 = 0;
    if (pvVar9 != (LPVOID)0x0) {
      FUN_14370d800(pvVar9,"StGetNext");
    }
    lVar21 = *(longlong *)(param_1 + 0x20);
    while( true ) {
      if ((param_2 != 0) && (*(short *)(param_2 + 4) == -1)) goto LAB_14370f5a4;
      if (*(int *)(param_1 + 0x40) != 0) break;
      if (*(char *)(param_1 + 0x360) == '\0') {
        if (param_2 != 0) goto LAB_14370f4ec;
      }
      else {
        if (param_2 == 0) goto LAB_14370f5a4;
LAB_14370f4ec:
        lVar3 = (ulonglong)(*(uint *)((longlong)lpTlsValue + 8) >> 6) * 8;
        *(ulonglong *)(lVar3 + 0x18 + param_2) =
             *(ulonglong *)(lVar3 + 0x18 + param_2) |
             1L << (*(uint *)((longlong)lpTlsValue + 8) & 0x3f);
      }
      *(undefined1 *)((longlong)lpTlsValue + 0x10) = 1;
      FUN_143718b00(lVar21 + 8);
      FUN_143718960((longlong)lpTlsValue + 0x150,*(undefined8 *)((longlong)lpTlsValue + 0x158),
                    *(undefined4 *)((longlong)lpTlsValue + 0x160));
      FUN_143718980(lVar21 + 8);
      if (param_2 != 0) {
        lVar3 = (ulonglong)(*(uint *)((longlong)lpTlsValue + 8) >> 6) * 8;
        *(ulonglong *)(lVar3 + 0x18 + param_2) =
             *(ulonglong *)(lVar3 + 0x18 + param_2) &
             ~(1L << (*(uint *)((longlong)lpTlsValue + 8) & 0x3f));
      }
    }
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 8);
    *(short *)(lVar18 + 6) = *(short *)(lVar18 + 6) + -1;
    *(short *)(lVar18 + 8) = *(short *)(lVar18 + 8) + 1;
    local_308 = (uint)*(ushort *)(lVar18 + 6);
    if (local_308 == 0) {
      FUN_143712fa0((longlong *)(param_1 + 0x38),0);
    }
LAB_14370f5a4:
    if (pvVar9 != (LPVOID)0x0) {
      FUN_14370d7a0(pvVar9,&DAT_145b8dd34);
    }
    uVar19 = 0;
    if ((param_2 != 0) && (lVar18 == 0)) {
      if (0 < *(int *)(param_2 + 0x48)) {
        plVar12 = *(longlong **)(param_2 + 0x40);
        uVar13 = uVar19;
        uVar17 = uVar19;
        do {
          iVar15 = (int)uVar13;
          if (*plVar12 == lVar2) goto LAB_14370f5fa;
          uVar13 = (ulonglong)(iVar15 + 1);
          uVar17 = uVar17 + 1;
          plVar12 = plVar12 + 1;
        } while ((longlong)uVar17 < (longlong)*(int *)(param_2 + 0x48));
      }
      iVar15 = -1;
      uVar17 = 0xffffffffffffffff;
LAB_14370f5fa:
      *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + -1;
      if (*(int *)(param_2 + 0x48) != iVar15) {
        *(undefined8 *)(*(longlong *)(param_2 + 0x40) + uVar17 * 8) =
             *(undefined8 *)(*(longlong *)(param_2 + 0x40) + (longlong)*(int *)(param_2 + 0x48) * 8)
        ;
      }
    }
    if (*(char *)((longlong)lpTlsValue + 0x28) != '\0') {
      if (pvVar9 != (LPVOID)0x0) {
        FUN_14370d450(pvVar9);
      }
      *(undefined1 *)((longlong)lpTlsValue + 0x28) = 0;
    }
    uVar13 = uVar19;
    if (pvVar9 != (LPVOID)0x0) {
      uVar13 = *(ulonglong *)((longlong)pvVar9 + 8);
    }
    *(ulonglong *)((longlong)lpTlsValue + 0x20) = uVar13;
    if (0 < (int)uVar20) {
      if (lVar18 != 0) {
        uVar20 = (ulonglong)((int)uVar20 - 1);
      }
      if (0 < *(int *)(param_1 + 0x4c)) {
        plVar12 = (longlong *)(param_1 + 0x50);
        uVar13 = uVar19;
        do {
          if ((int)uVar20 < 1) break;
          lVar21 = *plVar12;
          if (*(char *)(lVar21 + 0x10) != '\0') {
            *(undefined1 *)(lVar21 + 0x10) = 0;
            *(longlong *)(local_260 + (longlong)local_258 * 8) = lVar21;
            local_258 = local_258 + 1;
            uVar20 = (ulonglong)((int)uVar20 - 1);
          }
          uVar16 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar16;
          plVar12 = plVar12 + 1;
        } while ((int)uVar16 < *(int *)(param_1 + 0x4c));
      }
    }
    FOutputDevice::Serialize(uVar10,pvVar9);
    FUN_143719ca0(*(undefined8 *)((longlong)lpTlsValue + 0x158),0xb011ac3e);
    if (local_258 != 0) {
      uVar20 = uVar19;
      if (0 < local_258) {
        do {
          lVar21 = *(longlong *)(local_260 + uVar19);
          FUN_143718bb0(lVar21 + 0x150,*(undefined8 *)(lVar21 + 0x158),
                        *(undefined4 *)(lVar21 + 0x160));
          uVar16 = (int)uVar20 + 1;
          uVar20 = (ulonglong)uVar16;
          uVar19 = uVar19 + 8;
        } while ((int)uVar16 < local_258);
      }
      local_258 = 0;
    }
    FUN_143719ca0(*(undefined8 *)((longlong)lpTlsValue + 0x158),0xf0e3c62c);
    if (lVar18 == 0) {
      FUN_143719ca0(*(undefined8 *)((longlong)lpTlsValue + 0x158),0x77bbddcf);
      *(int *)((longlong)lpTlsValue + 0xc) = *(int *)((longlong)lpTlsValue + 0xc) + -1;
      if (*(int *)((longlong)lpTlsValue + 0xc) < 1) {
        FUN_140520750(*(undefined8 *)(param_1 + 0x20),0);
        *(undefined8 *)((longlong)lpTlsValue + 0x18) = 0;
        *(undefined8 *)((longlong)lpTlsValue + 0x20) = 0;
        *(undefined1 *)((longlong)lpTlsValue + 0x28) = 0;
        *(undefined4 *)(*(longlong *)(param_1 + 0x250) + (longlong)*(int *)(param_1 + 600) * 4) =
             *(undefined4 *)((longlong)lpTlsValue + 8);
        *(int *)(param_1 + 600) = *(int *)(param_1 + 600) + 1;
        TlsSetValue(DAT_146b81f60,(LPVOID)0x0);
        FOutputDevice::Serialize(*(undefined8 *)(param_1 + 0x20),0);
      }
      FUN_143719ca0(*(undefined8 *)((longlong)lpTlsValue + 0x158),0x51ba5d33);
      uVar11 = FUN_143703a50();
      local_258 = 0;
      if (-1 < (int)local_254) {
        FUN_143702e10(uVar11,local_260,8,local_254 & 0x3fffffff);
      }
      local_330 = hkTask::ExecutionContext::vftable;
      local_260 = (undefined1 *)0x0;
      local_254 = 0x80000000;
      FUN_143703a60(pvVar8);
      return local_res18;
    }
    if ((pvVar9 != (LPVOID)0x0) &&
       (puVar4 = *(undefined8 **)((longlong)pvVar9 + 8),
       puVar4 < *(undefined8 **)((longlong)pvVar9 + 0x18))) {
      *(undefined8 **)((longlong)pvVar9 + 8) = puVar4 + 2;
      *puVar4 = &DAT_145b40b70;
      *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(lVar18 + 0xc);
    }
    *(longlong *)((longlong)lpTlsValue + 0x148) = lVar18;
    if (*(code **)(param_1 + 0x390) != (code *)0x0) {
      (**(code **)(param_1 + 0x390))();
    }
    local_328 = lVar18 + 0x10;
    (**(code **)(**(longlong **)(lVar18 + 0x58) + 0x10))(*(longlong **)(lVar18 + 0x58),&local_320);
    if (*(code **)(param_1 + 0x398) != (code *)0x0) {
      (**(code **)(param_1 + 0x398))();
    }
    *(longlong *)((longlong)lpTlsValue + 0x148) = lVar2;
    if ((pvVar9 != (LPVOID)0x0) &&
       (puVar4 = *(undefined8 **)((longlong)pvVar9 + 8),
       puVar4 < *(undefined8 **)((longlong)pvVar9 + 0x18))) {
      *(undefined8 **)((longlong)pvVar9 + 8) = puVar4 + 2;
      *puVar4 = &DAT_145b40b70;
      *(undefined4 *)(puVar4 + 1) = 0;
    }
    local_res18 = 1;
    pvVar14 = TlsGetValue(DAT_146b7bf70);
    if (pvVar14 == (LPVOID)0x0) {
      pvVar14 = DAT_146b7bf68;
    }
    FUN_143703840(pvVar14);
    FUN_143719ca0(*(undefined8 *)((longlong)lpTlsValue + 0x158),0xe52d5b60);
  } while( true );
}



// FUNCTION 14370f8d0 FUN_14370f8d0 body=2033 status=ok
// SIG undefined FUN_14370f8d0(void)

undefined1 FUN_14370f8d0(longlong param_1,longlong param_2)

{
  short *psVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  LPVOID pvVar7;
  LPVOID pvVar8;
  LPVOID lpTlsValue;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  LPVOID pvVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined1 local_res18;
  undefined **local_330;
  longlong local_328;
  longlong local_320;
  undefined8 local_318;
  undefined ***pppuStack_310;
  uint local_308;
  undefined4 local_300 [2];
  undefined4 *local_2f8;
  undefined1 *local_2f0;
  uint local_2e8;
  uint local_2e4;
  undefined1 local_2e0 [128];
  undefined1 *local_260;
  int local_258;
  uint local_254;
  undefined1 local_250 [528];
  
  pvVar7 = TlsGetValue(DAT_146b7bf70);
  if (pvVar7 == (LPVOID)0x0) {
    pvVar7 = DAT_146b7bf68;
  }
  FUN_143703aa0(pvVar7);
  pvVar8 = TlsGetValue(DAT_146b8198c);
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  lpTlsValue = TlsGetValue(DAT_146b81f60);
  if ((lpTlsValue == (LPVOID)0x0) || (*(longlong *)((longlong)lpTlsValue + 0x140) != param_1)) {
    FUN_140520750(uVar10,pvVar8);
    iVar14 = *(int *)(*(longlong *)(param_1 + 0x250) + (longlong)(*(int *)(param_1 + 600) + -1) * 4)
    ;
    iVar5 = iVar14 + 1;
    iVar4 = *(int *)(param_1 + 0x4c);
    if (*(int *)(param_1 + 0x4c) < iVar5) {
      iVar4 = iVar5;
    }
    uVar9 = 0;
    *(int *)(param_1 + 0x4c) = iVar4;
    *(int *)(param_1 + 600) = *(int *)(param_1 + 600) + -1;
    lpTlsValue = *(LPVOID *)(param_1 + 0x50 + (longlong)iVar14 * 8);
    *(LPVOID *)((longlong)lpTlsValue + 0x18) = pvVar8;
    if (pvVar8 != (LPVOID)0x0) {
      uVar9 = *(undefined8 *)((longlong)pvVar8 + 8);
    }
    *(undefined8 *)((longlong)lpTlsValue + 0x20) = uVar9;
    *(undefined4 *)((longlong)lpTlsValue + 0xc) = 1;
    TlsSetValue(DAT_146b81f60,lpTlsValue);
    if (*(int *)(param_1 + 900) == 2) {
      uVar6 = FUN_1437195f0();
      *(undefined4 *)((longlong)lpTlsValue + 0x160) = uVar6;
    }
    FOutputDevice::Serialize(uVar10,pvVar8);
  }
  else {
    uVar9 = 0;
    if (*(LPVOID *)((longlong)lpTlsValue + 0x18) != pvVar8) {
      FUN_140520750(uVar10,pvVar8);
      *(LPVOID *)((longlong)lpTlsValue + 0x18) = pvVar8;
      if (pvVar8 != (LPVOID)0x0) {
        uVar9 = *(undefined8 *)((longlong)pvVar8 + 8);
      }
      *(undefined8 *)((longlong)lpTlsValue + 0x20) = uVar9;
      FOutputDevice::Serialize(uVar10,pvVar8);
    }
    *(int *)((longlong)lpTlsValue + 0xc) = *(int *)((longlong)lpTlsValue + 0xc) + 1;
  }
  lVar17 = 0;
  local_330 = hkDefaultTaskQueueEx::ExecutionContext::vftable;
  local_320 = param_1 + 0x18;
  local_308 = 0;
  local_318 = *(undefined8 *)((longlong)lpTlsValue + 0x18);
  pppuStack_310 = &local_330;
  local_260 = local_250;
  local_res18 = 0;
  local_258 = 0;
  local_254 = 0x80000040;
  do {
    uVar10 = 0;
    if (pvVar8 != (LPVOID)0x0) {
      uVar10 = *(undefined8 *)((longlong)pvVar8 + 8);
    }
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    FUN_140520750(uVar9,pvVar8);
    lVar2 = *(longlong *)((longlong)lpTlsValue + 0x148);
    *(undefined8 *)((longlong)lpTlsValue + 0x20) = uVar10;
    if ((param_2 != 0) && (lVar17 == 0)) {
      uVar10 = FUN_143703a50();
      if (*(uint *)(param_2 + 0x48) == (*(uint *)(param_2 + 0x4c) & 0x3fffffff)) {
        FUN_14370c460(uVar10,param_2 + 0x40,8);
      }
      *(longlong *)(*(longlong *)(param_2 + 0x40) + (longlong)*(int *)(param_2 + 0x48) * 8) = lVar2;
      *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + 1;
    }
    if (pvVar8 != (LPVOID)0x0) {
      FUN_14370d620(pvVar8,"LtGetNextTask","StFinishPrevious");
    }
    uVar18 = 0;
    uVar19 = uVar18;
    if (lVar17 != 0) {
      if ((*(char *)(lVar17 + 10) != '\0') && (*(short *)(lVar17 + 6) != 0)) {
        *(undefined2 *)(lVar17 + 6) = 0;
        if (0 < *(int *)(param_1 + 0x40)) {
          plVar11 = (longlong *)(*(longlong *)(param_1 + 0x38) + 8);
          do {
            if (lVar17 == *plVar11) {
              FUN_143712fa0(param_1 + 0x38);
              break;
            }
            uVar15 = (int)uVar19 + 1;
            uVar19 = (ulonglong)uVar15;
            plVar11 = plVar11 + 2;
          } while ((int)uVar15 < *(int *)(param_1 + 0x40));
        }
      }
      *(short *)(lVar17 + 8) = *(short *)(lVar17 + 8) + -1;
      uVar19 = 0;
      if ((uint)*(ushort *)(lVar17 + 6) + (uint)*(ushort *)(lVar17 + 8) == 0) {
        iVar14 = *(int *)(lVar17 + 0x28);
        local_2f0 = local_2e0;
        local_2e8 = 0;
        local_2e4 = 0x80000010;
        if (0 < (longlong)iVar14) {
          do {
            lVar20 = *(longlong *)(*(longlong *)(lVar17 + 0x20) + uVar18 * 8);
            psVar1 = (short *)(lVar20 + 4);
            *psVar1 = *psVar1 + -1;
            if (*psVar1 == 0) {
              if (local_2e8 == (local_2e4 & 0x3fffffff)) {
                FUN_14370c460(&PTR_vftable_1467f0638,&local_2f0,8);
              }
              *(longlong *)(local_2f0 + (longlong)(int)local_2e8 * 8) = lVar20;
              local_2e8 = local_2e8 + 1;
            }
            uVar18 = uVar18 + 1;
          } while ((longlong)uVar18 < (longlong)iVar14);
        }
        *(undefined4 *)(lVar17 + 0x28) = 0;
        if (*(longlong *)(lVar17 + 0x18) != 0) {
          lVar20 = 0;
          for (uVar19 = *(ulonglong *)(lVar17 + 0x18); uVar19 != 0; uVar19 = uVar19 >> 1) {
            if (((uVar19 & 1) != 0) &&
               (*(char *)(*(longlong *)(param_1 + 0x50 + lVar20 * 8) + 0x10) != '\0')) {
              *(undefined1 *)(*(longlong *)(param_1 + 0x50 + lVar20 * 8) + 0x10) = 0;
              hkSemaphore::release(*(longlong *)(param_1 + 0x50 + lVar20 * 8) + 0x150,1);
            }
            lVar20 = lVar20 + 1;
          }
          *(undefined8 *)(lVar17 + 0x18) = 0;
        }
        uVar18 = 0;
        uVar19 = uVar18;
        uVar12 = uVar18;
        if (0 < (int)local_2e8) {
          do {
            local_2f8 = *(undefined4 **)(local_2f0 + uVar18);
            uVar19 = (ulonglong)((int)uVar19 + (uint)*(ushort *)((longlong)local_2f8 + 6));
            local_300[0] = *local_2f8;
            FUN_1437120f0(param_1 + 0x38,local_300);
            uVar15 = (int)uVar12 + 1;
            uVar18 = uVar18 + 8;
            uVar12 = (ulonglong)uVar15;
          } while ((int)uVar15 < (int)local_2e8);
        }
        *(undefined2 *)(lVar17 + 4) = 0xffff;
        local_2e8 = 0;
        if (-1 < (int)local_2e4) {
          FUN_143702e10(&PTR_vftable_1467f0638,local_2f0,8,local_2e4 & 0x3fffffff);
        }
        local_2f0 = (undefined1 *)0x0;
        local_2e4 = 0x80000000;
      }
    }
    lVar17 = 0;
    if (pvVar8 != (LPVOID)0x0) {
      FUN_14370d800(pvVar8,"StGetNext");
    }
    lVar20 = *(longlong *)(param_1 + 0x20);
    while( true ) {
      if ((param_2 != 0) && (*(short *)(param_2 + 4) == -1)) goto LAB_14370fdf2;
      if (*(int *)(param_1 + 0x40) != 0) break;
      if (*(char *)(param_1 + 0x360) == '\0') {
        if (param_2 != 0) goto LAB_14370fd4c;
      }
      else {
        if (param_2 == 0) goto LAB_14370fdf2;
LAB_14370fd4c:
        uVar18 = (ulonglong)(*(uint *)((longlong)lpTlsValue + 8) >> 6);
        *(ulonglong *)(param_2 + uVar18 * 8 + 0x18) =
             *(ulonglong *)(param_2 + 0x18 + uVar18 * 8) |
             1L << (*(uint *)((longlong)lpTlsValue + 8) & 0x3f);
      }
      *(undefined1 *)((longlong)lpTlsValue + 0x10) = 1;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar20 + 8));
      FWindowsPlatformProcess::WaitForProc((longlong)lpTlsValue + 0x150);
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar20 + 8));
      if (param_2 != 0) {
        uVar18 = (ulonglong)(*(uint *)((longlong)lpTlsValue + 8) >> 6);
        *(ulonglong *)(param_2 + uVar18 * 8 + 0x18) =
             *(ulonglong *)(param_2 + 0x18 + uVar18 * 8) &
             ~(1L << (*(uint *)((longlong)lpTlsValue + 8) & 0x3f));
      }
    }
    lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 8);
    *(short *)(lVar17 + 6) = *(short *)(lVar17 + 6) + -1;
    *(short *)(lVar17 + 8) = *(short *)(lVar17 + 8) + 1;
    local_308 = (uint)*(ushort *)(lVar17 + 6);
    if (local_308 == 0) {
      FUN_143712fa0((longlong *)(param_1 + 0x38),0);
    }
LAB_14370fdf2:
    if (pvVar8 != (LPVOID)0x0) {
      FUN_14370d7a0(pvVar8,&DAT_145b8dd34);
    }
    uVar18 = 0;
    if ((param_2 != 0) && (lVar17 == 0)) {
      if (0 < *(int *)(param_2 + 0x48)) {
        plVar11 = *(longlong **)(param_2 + 0x40);
        uVar12 = uVar18;
        uVar16 = uVar18;
        do {
          iVar14 = (int)uVar12;
          if (*plVar11 == lVar2) goto LAB_14370fe4a;
          uVar12 = (ulonglong)(iVar14 + 1);
          uVar16 = uVar16 + 1;
          plVar11 = plVar11 + 1;
        } while ((longlong)uVar16 < (longlong)*(int *)(param_2 + 0x48));
      }
      iVar14 = -1;
      uVar16 = 0xffffffffffffffff;
LAB_14370fe4a:
      *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + -1;
      if (*(int *)(param_2 + 0x48) != iVar14) {
        *(undefined8 *)(*(longlong *)(param_2 + 0x40) + uVar16 * 8) =
             *(undefined8 *)(*(longlong *)(param_2 + 0x40) + (longlong)*(int *)(param_2 + 0x48) * 8)
        ;
      }
    }
    if (*(char *)((longlong)lpTlsValue + 0x28) != '\0') {
      if (pvVar8 != (LPVOID)0x0) {
        FUN_14370d450(pvVar8);
      }
      *(undefined1 *)((longlong)lpTlsValue + 0x28) = 0;
    }
    uVar12 = uVar18;
    if (pvVar8 != (LPVOID)0x0) {
      uVar12 = *(ulonglong *)((longlong)pvVar8 + 8);
    }
    *(ulonglong *)((longlong)lpTlsValue + 0x20) = uVar12;
    if (0 < (int)uVar19) {
      if (lVar17 != 0) {
        uVar19 = (ulonglong)((int)uVar19 - 1);
      }
      if (0 < *(int *)(param_1 + 0x4c)) {
        plVar11 = (longlong *)(param_1 + 0x50);
        uVar12 = uVar18;
        do {
          if ((int)uVar19 < 1) break;
          lVar20 = *plVar11;
          if (*(char *)(lVar20 + 0x10) != '\0') {
            *(undefined1 *)(lVar20 + 0x10) = 0;
            *(longlong *)(local_260 + (longlong)local_258 * 8) = lVar20;
            local_258 = local_258 + 1;
            uVar19 = (ulonglong)((int)uVar19 - 1);
          }
          uVar15 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar15;
          plVar11 = plVar11 + 1;
        } while ((int)uVar15 < *(int *)(param_1 + 0x4c));
      }
    }
    FOutputDevice::Serialize(uVar9,pvVar8);
    if (local_258 != 0) {
      uVar19 = uVar18;
      if (0 < local_258) {
        do {
          hkSemaphore::release(*(longlong *)(local_260 + uVar18) + 0x150,1);
          uVar15 = (int)uVar19 + 1;
          uVar19 = (ulonglong)uVar15;
          uVar18 = uVar18 + 8;
        } while ((int)uVar15 < local_258);
      }
      local_258 = 0;
    }
    if (lVar17 == 0) {
      *(int *)((longlong)lpTlsValue + 0xc) = *(int *)((longlong)lpTlsValue + 0xc) + -1;
      if (*(int *)((longlong)lpTlsValue + 0xc) < 1) {
        FUN_140520750(*(undefined8 *)(param_1 + 0x20),0);
        *(undefined8 *)((longlong)lpTlsValue + 0x18) = 0;
        *(undefined8 *)((longlong)lpTlsValue + 0x20) = 0;
        *(undefined1 *)((longlong)lpTlsValue + 0x28) = 0;
        *(undefined4 *)(*(longlong *)(param_1 + 0x250) + (longlong)*(int *)(param_1 + 600) * 4) =
             *(undefined4 *)((longlong)lpTlsValue + 8);
        *(int *)(param_1 + 600) = *(int *)(param_1 + 600) + 1;
        TlsSetValue(DAT_146b81f60,(LPVOID)0x0);
        FOutputDevice::Serialize(*(undefined8 *)(param_1 + 0x20),0);
      }
      uVar10 = FUN_143703a50();
      local_258 = 0;
      if (-1 < (int)local_254) {
        FUN_143702e10(uVar10,local_260,8,local_254 & 0x3fffffff);
      }
      local_330 = hkTask::ExecutionContext::vftable;
      local_260 = (undefined1 *)0x0;
      local_254 = 0x80000000;
      FUN_143703a60(pvVar7);
      return local_res18;
    }
    if ((pvVar8 != (LPVOID)0x0) &&
       (puVar3 = *(undefined8 **)((longlong)pvVar8 + 8),
       puVar3 < *(undefined8 **)((longlong)pvVar8 + 0x18))) {
      *(undefined8 **)((longlong)pvVar8 + 8) = puVar3 + 2;
      *puVar3 = &DAT_145b40b70;
      *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(lVar17 + 0xc);
    }
    *(longlong *)((longlong)lpTlsValue + 0x148) = lVar17;
    if (*(code **)(param_1 + 0x390) != (code *)0x0) {
      (**(code **)(param_1 + 0x390))();
    }
    local_328 = lVar17 + 0x10;
    (**(code **)(**(longlong **)(lVar17 + 0x58) + 0x10))(*(longlong **)(lVar17 + 0x58),&local_320);
    if (*(code **)(param_1 + 0x398) != (code *)0x0) {
      (**(code **)(param_1 + 0x398))();
    }
    *(longlong *)((longlong)lpTlsValue + 0x148) = lVar2;
    if ((pvVar8 != (LPVOID)0x0) &&
       (puVar3 = *(undefined8 **)((longlong)pvVar8 + 8),
       puVar3 < *(undefined8 **)((longlong)pvVar8 + 0x18))) {
      *(undefined8 **)((longlong)pvVar8 + 8) = puVar3 + 2;
      *puVar3 = &DAT_145b40b70;
      *(undefined4 *)(puVar3 + 1) = 0;
    }
    local_res18 = 1;
    pvVar13 = TlsGetValue(DAT_146b7bf70);
    if (pvVar13 == (LPVOID)0x0) {
      pvVar13 = DAT_146b7bf68;
    }
    FUN_143703840(pvVar13);
  } while( true );
}



// FUNCTION 1437100d0 FUN_1437100d0 body=2116 status=ok
// SIG undefined FUN_1437100d0(void)

undefined1 FUN_1437100d0(longlong param_1,longlong param_2)

{
  short *psVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  LPVOID pvVar10;
  LPVOID pvVar11;
  LPVOID lpTlsValue;
  undefined8 uVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  longlong *plVar15;
  LPVOID pvVar16;
  undefined8 uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  bool bVar24;
  undefined1 local_res18;
  undefined **local_328;
  longlong local_320;
  longlong local_318;
  undefined8 local_310;
  undefined ***pppuStack_308;
  uint local_300;
  undefined4 local_2f8 [2];
  undefined4 *local_2f0;
  undefined1 *local_2e8;
  uint local_2e0;
  uint local_2dc;
  undefined1 local_2d8 [128];
  undefined1 *local_258;
  int local_250;
  uint local_24c;
  undefined1 local_248 [520];
  
  pvVar10 = TlsGetValue(DAT_146b7bf70);
  if (pvVar10 == (LPVOID)0x0) {
    pvVar10 = DAT_146b7bf68;
  }
  FUN_143703aa0(pvVar10);
  pvVar11 = TlsGetValue(DAT_146b8198c);
  uVar17 = *(undefined8 *)(param_1 + 0x20);
  lpTlsValue = TlsGetValue(DAT_146b81f60);
  if ((lpTlsValue == (LPVOID)0x0) || (*(longlong *)((longlong)lpTlsValue + 0x140) != param_1)) {
    FUN_140520750(uVar17,pvVar11);
    iVar9 = *(int *)(*(longlong *)(param_1 + 0x250) + (longlong)(*(int *)(param_1 + 600) + -1) * 4);
    iVar7 = iVar9 + 1;
    iVar6 = *(int *)(param_1 + 0x4c);
    if (*(int *)(param_1 + 0x4c) < iVar7) {
      iVar6 = iVar7;
    }
    uVar12 = 0;
    *(int *)(param_1 + 0x4c) = iVar6;
    *(int *)(param_1 + 600) = *(int *)(param_1 + 600) + -1;
    lpTlsValue = *(LPVOID *)(param_1 + 0x50 + (longlong)iVar9 * 8);
    *(LPVOID *)((longlong)lpTlsValue + 0x18) = pvVar11;
    if (pvVar11 != (LPVOID)0x0) {
      uVar12 = *(undefined8 *)((longlong)pvVar11 + 8);
    }
    *(undefined8 *)((longlong)lpTlsValue + 0x20) = uVar12;
    *(undefined4 *)((longlong)lpTlsValue + 0xc) = 1;
    TlsSetValue(DAT_146b81f60,lpTlsValue);
    if (*(int *)(param_1 + 900) == 2) {
      uVar8 = FUN_1437195f0();
      *(undefined4 *)((longlong)lpTlsValue + 0x160) = uVar8;
    }
    FOutputDevice::Serialize(uVar17,pvVar11);
  }
  else {
    uVar12 = 0;
    if (*(LPVOID *)((longlong)lpTlsValue + 0x18) != pvVar11) {
      FUN_140520750(uVar17,pvVar11);
      *(LPVOID *)((longlong)lpTlsValue + 0x18) = pvVar11;
      if (pvVar11 != (LPVOID)0x0) {
        uVar12 = *(undefined8 *)((longlong)pvVar11 + 8);
      }
      *(undefined8 *)((longlong)lpTlsValue + 0x20) = uVar12;
      FOutputDevice::Serialize(uVar17,pvVar11);
    }
    *(int *)((longlong)lpTlsValue + 0xc) = *(int *)((longlong)lpTlsValue + 0xc) + 1;
  }
  uVar23 = 0;
  local_300 = 0;
  local_328 = hkDefaultTaskQueueEx::ExecutionContext::vftable;
  local_318 = param_1 + 0x18;
  local_310 = *(undefined8 *)((longlong)lpTlsValue + 0x18);
  pppuStack_308 = &local_328;
  local_258 = local_248;
  local_res18 = 0;
  local_250 = 0;
  local_24c = 0x80000040;
  uVar14 = uVar23;
  do {
    uVar21 = uVar23;
    if (pvVar11 != (LPVOID)0x0) {
      uVar21 = *(ulonglong *)((longlong)pvVar11 + 8);
    }
    uVar17 = *(undefined8 *)(param_1 + 0x20);
    FUN_140520750(uVar17,pvVar11);
    lVar3 = *(longlong *)((longlong)lpTlsValue + 0x148);
    *(ulonglong *)((longlong)lpTlsValue + 0x20) = uVar21;
    if ((param_2 != 0) && (uVar14 == 0)) {
      uVar12 = FUN_143703a50();
      if (*(uint *)(param_2 + 0x48) == (*(uint *)(param_2 + 0x4c) & 0x3fffffff)) {
        FUN_14370c460(uVar12,param_2 + 0x40,8);
      }
      *(longlong *)(*(longlong *)(param_2 + 0x40) + (longlong)*(int *)(param_2 + 0x48) * 8) = lVar3;
      *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + 1;
    }
    if (pvVar11 != (LPVOID)0x0) {
      FUN_14370d620(pvVar11,"LtGetNextTask","StFinishPrevious");
    }
    uVar21 = uVar23;
    if (uVar14 != 0) {
      if ((*(char *)(uVar14 + 10) != '\0') && (*(short *)(uVar14 + 6) != 0)) {
        *(undefined2 *)(uVar14 + 6) = 0;
        if (0 < *(int *)(param_1 + 0x40)) {
          puVar13 = (ulonglong *)(*(longlong *)(param_1 + 0x38) + 8);
          do {
            if (uVar14 == *puVar13) {
              FUN_143712fa0(param_1 + 0x38);
              break;
            }
            uVar19 = (int)uVar21 + 1;
            uVar21 = (ulonglong)uVar19;
            puVar13 = puVar13 + 2;
          } while ((int)uVar19 < *(int *)(param_1 + 0x40));
        }
      }
      *(short *)(uVar14 + 8) = *(short *)(uVar14 + 8) + -1;
      uVar21 = 0;
      if ((uint)*(ushort *)(uVar14 + 6) + (uint)*(ushort *)(uVar14 + 8) == 0) {
        iVar9 = *(int *)(uVar14 + 0x28);
        local_2e8 = local_2d8;
        local_2e0 = 0;
        local_2dc = 0x80000010;
        uVar21 = uVar23;
        if (0 < (longlong)iVar9) {
          do {
            lVar4 = *(longlong *)(*(longlong *)(uVar14 + 0x20) + uVar21 * 8);
            psVar1 = (short *)(lVar4 + 4);
            *psVar1 = *psVar1 + -1;
            if (*psVar1 == 0) {
              if (local_2e0 == (local_2dc & 0x3fffffff)) {
                FUN_14370c460(&PTR_vftable_1467f0638,&local_2e8,8);
              }
              *(longlong *)(local_2e8 + (longlong)(int)local_2e0 * 8) = lVar4;
              local_2e0 = local_2e0 + 1;
            }
            uVar21 = uVar21 + 1;
          } while ((longlong)uVar21 < (longlong)iVar9);
        }
        *(undefined4 *)(uVar14 + 0x28) = 0;
        if (*(longlong *)(uVar14 + 0x18) != 0) {
          uVar22 = uVar23;
          for (uVar21 = *(ulonglong *)(uVar14 + 0x18); uVar21 != 0; uVar21 = uVar21 >> 1) {
            if (((uVar21 & 1) != 0) &&
               (*(char *)(*(longlong *)(param_1 + 0x50 + uVar22 * 8) + 0x10) != '\0')) {
              *(undefined1 *)(*(longlong *)(param_1 + 0x50 + uVar22 * 8) + 0x10) = 0;
              piVar2 = (int *)(*(longlong *)(param_1 + 0x50 + uVar22 * 8) + 0x180);
              LOCK();
              if (*piVar2 == 0) {
                *piVar2 = 1;
              }
              UNLOCK();
            }
            uVar22 = uVar22 + 1;
          }
          *(undefined8 *)(uVar14 + 0x18) = 0;
        }
        uVar22 = uVar23;
        uVar21 = uVar23;
        uVar20 = uVar23;
        if (0 < (int)local_2e0) {
          do {
            local_2f0 = *(undefined4 **)(local_2e8 + uVar22);
            uVar21 = (ulonglong)((int)uVar21 + (uint)*(ushort *)((longlong)local_2f0 + 6));
            local_2f8[0] = *local_2f0;
            FUN_1437120f0(param_1 + 0x38,local_2f8);
            uVar19 = (int)uVar20 + 1;
            uVar22 = uVar22 + 8;
            uVar20 = (ulonglong)uVar19;
          } while ((int)uVar19 < (int)local_2e0);
        }
        *(undefined2 *)(uVar14 + 4) = 0xffff;
        local_2e0 = 0;
        if (-1 < (int)local_2dc) {
          FUN_143702e10(&PTR_vftable_1467f0638,local_2e8,8,local_2dc & 0x3fffffff);
        }
        local_2e8 = (undefined1 *)0x0;
        local_2dc = 0x80000000;
      }
    }
    if (pvVar11 != (LPVOID)0x0) {
      FUN_14370d800(pvVar11,"StGetNext");
    }
    lVar4 = *(longlong *)(param_1 + 0x20);
    while( true ) {
      if ((param_2 != 0) && (uVar14 = uVar23, *(short *)(param_2 + 4) == -1)) goto LAB_143710656;
      if (*(int *)(param_1 + 0x40) != 0) break;
      if (*(char *)(param_1 + 0x360) == '\0') {
        if (param_2 != 0) goto LAB_143710561;
      }
      else {
        uVar14 = uVar23;
        if (param_2 == 0) goto LAB_143710656;
LAB_143710561:
        uVar14 = (ulonglong)(*(uint *)((longlong)lpTlsValue + 8) >> 6);
        *(ulonglong *)(param_2 + uVar14 * 8 + 0x18) =
             *(ulonglong *)(param_2 + 0x18 + uVar14 * 8) |
             1L << (*(uint *)((longlong)lpTlsValue + 8) & 0x3f);
      }
      *(undefined1 *)((longlong)lpTlsValue + 0x10) = 1;
      LOCK();
      if (*(int *)(lVar4 + 8) == 1) {
        *(int *)(lVar4 + 8) = 0;
      }
      UNLOCK();
      LOCK();
      bVar24 = *(int *)((longlong)lpTlsValue + 0x180) == 1;
      if (bVar24) {
        *(int *)((longlong)lpTlsValue + 0x180) = 0;
      }
      UNLOCK();
      uVar14 = uVar23;
      while (!bVar24) {
        for (iVar9 = 1 << ((byte)uVar14 & 0x1f); 0 < iVar9; iVar9 = iVar9 + -1) {
        }
        uVar18 = (uint)uVar14;
        uVar19 = uVar18 + 1;
        if (7 < uVar18) {
          uVar19 = uVar18;
        }
        uVar14 = (ulonglong)uVar19;
        LOCK();
        bVar24 = *(int *)((longlong)lpTlsValue + 0x180) == 1;
        if (bVar24) {
          *(int *)((longlong)lpTlsValue + 0x180) = 0;
        }
        UNLOCK();
      }
      LOCK();
      bVar24 = *(int *)(lVar4 + 8) == 0;
      if (bVar24) {
        *(int *)(lVar4 + 8) = 1;
      }
      UNLOCK();
      uVar14 = uVar23;
      while (!bVar24) {
        for (iVar9 = 1 << ((byte)uVar14 & 0x1f); 0 < iVar9; iVar9 = iVar9 + -1) {
        }
        uVar18 = (uint)uVar14;
        uVar19 = uVar18 + 1;
        if (7 < uVar18) {
          uVar19 = uVar18;
        }
        uVar14 = (ulonglong)uVar19;
        LOCK();
        bVar24 = *(int *)(lVar4 + 8) == 0;
        if (bVar24) {
          *(int *)(lVar4 + 8) = 1;
        }
        UNLOCK();
      }
      if (param_2 != 0) {
        uVar14 = (ulonglong)(*(uint *)((longlong)lpTlsValue + 8) >> 6);
        *(ulonglong *)(param_2 + uVar14 * 8 + 0x18) =
             *(ulonglong *)(param_2 + 0x18 + uVar14 * 8) &
             ~(1L << (*(uint *)((longlong)lpTlsValue + 8) & 0x3f));
      }
    }
    uVar14 = *(ulonglong *)(*(longlong *)(param_1 + 0x38) + 8);
    *(short *)(uVar14 + 6) = *(short *)(uVar14 + 6) + -1;
    *(short *)(uVar14 + 8) = *(short *)(uVar14 + 8) + 1;
    local_300 = (uint)*(ushort *)(uVar14 + 6);
    if (local_300 == 0) {
      FUN_143712fa0((longlong *)(param_1 + 0x38),0);
    }
LAB_143710656:
    if (pvVar11 != (LPVOID)0x0) {
      FUN_14370d7a0(pvVar11,&DAT_145b8dd34);
    }
    if ((param_2 != 0) && (uVar14 == 0)) {
      if (0 < *(int *)(param_2 + 0x48)) {
        plVar15 = *(longlong **)(param_2 + 0x40);
        uVar22 = uVar23;
        uVar20 = uVar23;
        do {
          iVar9 = (int)uVar22;
          if (*plVar15 == lVar3) goto LAB_1437106ac;
          uVar22 = (ulonglong)(iVar9 + 1);
          uVar20 = uVar20 + 1;
          plVar15 = plVar15 + 1;
        } while ((longlong)uVar20 < (longlong)*(int *)(param_2 + 0x48));
      }
      iVar9 = -1;
      uVar20 = 0xffffffffffffffff;
LAB_1437106ac:
      *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + -1;
      if (*(int *)(param_2 + 0x48) != iVar9) {
        *(undefined8 *)(*(longlong *)(param_2 + 0x40) + uVar20 * 8) =
             *(undefined8 *)(*(longlong *)(param_2 + 0x40) + (longlong)*(int *)(param_2 + 0x48) * 8)
        ;
      }
    }
    if (*(char *)((longlong)lpTlsValue + 0x28) != '\0') {
      if (pvVar11 != (LPVOID)0x0) {
        FUN_14370d450(pvVar11);
      }
      *(undefined1 *)((longlong)lpTlsValue + 0x28) = 0;
    }
    uVar22 = uVar23;
    if (pvVar11 != (LPVOID)0x0) {
      uVar22 = *(ulonglong *)((longlong)pvVar11 + 8);
    }
    *(ulonglong *)((longlong)lpTlsValue + 0x20) = uVar22;
    if (0 < (int)uVar21) {
      if (uVar14 != 0) {
        uVar21 = (ulonglong)((int)uVar21 - 1);
      }
      if (0 < *(int *)(param_1 + 0x4c)) {
        plVar15 = (longlong *)(param_1 + 0x50);
        uVar22 = uVar23;
        do {
          if ((int)uVar21 < 1) break;
          lVar4 = *plVar15;
          if (*(char *)(lVar4 + 0x10) != '\0') {
            *(undefined1 *)(lVar4 + 0x10) = 0;
            *(longlong *)(local_258 + (longlong)local_250 * 8) = lVar4;
            local_250 = local_250 + 1;
            uVar21 = (ulonglong)((int)uVar21 - 1);
          }
          uVar19 = (int)uVar22 + 1;
          uVar22 = (ulonglong)uVar19;
          plVar15 = plVar15 + 1;
        } while ((int)uVar19 < *(int *)(param_1 + 0x4c));
      }
    }
    FOutputDevice::Serialize(uVar17,pvVar11);
    if (local_250 != 0) {
      uVar21 = uVar23;
      uVar22 = uVar23;
      if (0 < local_250) {
        do {
          LOCK();
          if (*(int *)(*(longlong *)(local_258 + uVar21) + 0x180) == 0) {
            *(int *)(*(longlong *)(local_258 + uVar21) + 0x180) = 1;
          }
          UNLOCK();
          uVar19 = (int)uVar22 + 1;
          uVar21 = uVar21 + 8;
          uVar22 = (ulonglong)uVar19;
        } while ((int)uVar19 < local_250);
      }
      local_250 = 0;
    }
    if (uVar14 == 0) {
      *(int *)((longlong)lpTlsValue + 0xc) = *(int *)((longlong)lpTlsValue + 0xc) + -1;
      if (*(int *)((longlong)lpTlsValue + 0xc) < 1) {
        FUN_140520750(*(undefined8 *)(param_1 + 0x20),0);
        *(undefined8 *)((longlong)lpTlsValue + 0x18) = 0;
        *(undefined8 *)((longlong)lpTlsValue + 0x20) = 0;
        *(undefined1 *)((longlong)lpTlsValue + 0x28) = 0;
        *(undefined4 *)(*(longlong *)(param_1 + 0x250) + (longlong)*(int *)(param_1 + 600) * 4) =
             *(undefined4 *)((longlong)lpTlsValue + 8);
        *(int *)(param_1 + 600) = *(int *)(param_1 + 600) + 1;
        TlsSetValue(DAT_146b81f60,(LPVOID)0x0);
        FOutputDevice::Serialize(*(undefined8 *)(param_1 + 0x20),0);
      }
      uVar17 = FUN_143703a50();
      local_250 = 0;
      if (-1 < (int)local_24c) {
        FUN_143702e10(uVar17,local_258,8,local_24c & 0x3fffffff);
      }
      local_328 = hkTask::ExecutionContext::vftable;
      local_258 = (undefined1 *)0x0;
      local_24c = 0x80000000;
      FUN_143703a60(pvVar10);
      return local_res18;
    }
    if ((pvVar11 != (LPVOID)0x0) &&
       (puVar5 = *(undefined8 **)((longlong)pvVar11 + 8),
       puVar5 < *(undefined8 **)((longlong)pvVar11 + 0x18))) {
      *(undefined8 **)((longlong)pvVar11 + 8) = puVar5 + 2;
      *puVar5 = &DAT_145b40b70;
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(uVar14 + 0xc);
    }
    *(ulonglong *)((longlong)lpTlsValue + 0x148) = uVar14;
    if (*(code **)(param_1 + 0x390) != (code *)0x0) {
      (**(code **)(param_1 + 0x390))();
    }
    local_320 = uVar14 + 0x10;
    (**(code **)(**(longlong **)(uVar14 + 0x58) + 0x10))(*(longlong **)(uVar14 + 0x58),&local_318);
    if (*(code **)(param_1 + 0x398) != (code *)0x0) {
      (**(code **)(param_1 + 0x398))();
    }
    *(longlong *)((longlong)lpTlsValue + 0x148) = lVar3;
    if ((pvVar11 != (LPVOID)0x0) &&
       (puVar5 = *(undefined8 **)((longlong)pvVar11 + 8),
       puVar5 < *(undefined8 **)((longlong)pvVar11 + 0x18))) {
      *(undefined8 **)((longlong)pvVar11 + 8) = puVar5 + 2;
      *puVar5 = &DAT_145b40b70;
      *(undefined4 *)(puVar5 + 1) = 0;
    }
    local_res18 = 1;
    pvVar16 = TlsGetValue(DAT_146b7bf70);
    if (pvVar16 == (LPVOID)0x0) {
      pvVar16 = DAT_146b7bf68;
    }
    FUN_143703840(pvVar16);
  } while( true );
}



// FUNCTION 143710920 FUN_143710920 body=19 status=ok
// SIG undefined FUN_143710920(void)

undefined8 * FUN_143710920(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 143710940 FUN_143710940 body=132 status=ok
// SIG undefined FUN_143710940(void)

longlong FUN_143710940(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = 0x2a;
  puVar2 = (undefined4 *)(param_1 + 0x28);
  lVar4 = 0x2a;
  do {
    *puVar2 = 0;
    *(undefined4 **)(puVar2 + -2) = puVar2 + 2;
    puVar2[1] = 0x80000002;
    *(undefined4 **)(puVar2 + 6) = puVar2 + 10;
    puVar2[8] = 0;
    puVar2[9] = 0x80000001;
    puVar2 = puVar2 + 0x18;
    lVar4 = lVar4 + -1;
    lVar1 = param_1;
  } while (lVar4 != 0);
  do {
    *(undefined2 *)(lVar1 + 4) = 0xfffe;
    *(longlong *)(lVar1 + 0x58) = lVar1 + 0x60;
    lVar3 = lVar3 + -1;
    lVar1 = lVar1 + 0x60;
  } while (lVar3 != 0);
  *(undefined8 *)(param_1 + 0xfb8) = 0;
  *(undefined8 *)(param_1 + 0xfc0) = 0;
  return param_1;
}



// FUNCTION 1437109d0 FUN_1437109d0 body=147 status=ok
// SIG undefined FUN_1437109d0(void)

longlong * FUN_1437109d0(longlong *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_14370d870(param_1 + 2);
  param_1[1] = 0;
  lVar4 = 7;
  *param_1 = 0;
  do {
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar1 + 0x58),0xfc8);
    lVar3 = 0;
    if (lVar2 != 0) {
      lVar3 = FUN_143710940(lVar2);
    }
    *(longlong *)(lVar3 + 0xfc0) = *param_1;
    *param_1 = lVar3;
    *(longlong *)(lVar3 + 0xfb8) = param_1[1];
    param_1[1] = lVar3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return param_1;
}



// FUNCTION 143710a70 FUN_143710a70 body=362 status=ok
// SIG undefined FUN_143710a70(void)

longlong * FUN_143710a70(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int local_res8 [2];
  undefined1 local_res10 [8];
  
  *(undefined8 *)((longlong)param_1 + 0xc) = 0xffffffff80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0xffffffff80000000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
  lVar4 = *param_2;
  iVar3 = 0;
  while ((lVar4 != 0 && (iVar3 < 0x2a))) {
    lVar5 = (longlong)iVar3 * 0x60 + lVar4;
    if (*(short *)(lVar5 + 4) == -2) {
      *(undefined4 *)(lVar5 + 0x14) = 0xffffffff;
    }
    else {
      FUN_143712160(param_1,local_res8);
      *(longlong *)(*param_1 + (longlong)local_res8[0] * 0x18) = lVar5;
      *(int *)(lVar5 + 0x14) = local_res8[0];
    }
    iVar3 = iVar3 + 1;
    if (iVar3 == 0x2a) {
      lVar4 = *(longlong *)(lVar4 + 0xfc0);
      iVar3 = 0;
    }
  }
  for (iVar3 = *(int *)((longlong)param_1 + 0x14); iVar3 != -1;
      iVar3 = *(int *)((longlong)iVar3 * 0x18 + 0x10 + *param_1)) {
    lVar4 = *(longlong *)((longlong)iVar3 * 0x18 + *param_1);
    iVar2 = *(int *)(lVar4 + 0x28) + -1;
    lVar5 = (longlong)iVar2;
    if (-1 < iVar2) {
      do {
        FUN_143712030(param_1,local_res8,iVar3,
                      *(undefined4 *)(*(longlong *)(*(longlong *)(lVar4 + 0x20) + lVar5 * 8) + 0x14)
                     );
        lVar5 = lVar5 + -1;
      } while (-1 < lVar5);
    }
    iVar2 = *(int *)(lVar4 + 0x48) + -1;
    lVar5 = (longlong)iVar2;
    if (-1 < iVar2) {
      do {
        lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x40) + lVar5 * 8);
        if (lVar1 != 0) {
          FUN_143712030(param_1,local_res10,iVar3,*(undefined4 *)(lVar1 + 0x14));
        }
        lVar5 = lVar5 + -1;
      } while (-1 < lVar5);
    }
  }
  return param_1;
}



// FUNCTION 143710be0 FUN_143710be0 body=1208 status=ok
// SIG undefined FUN_143710be0(void)

undefined8 * FUN_143710be0(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  LPVOID pvVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  uint uVar12;
  
  puVar11 = (undefined8 *)0x0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0xffff;
  *(undefined2 *)((longlong)param_1 + 0x12) = 1;
  *param_1 = hkDefaultTaskQueue::vftable;
  *(undefined4 *)(param_1 + 6) = 1;
  param_1[3] = hkDefaultTaskQueue::vftable;
  FUN_143710920(param_1 + 7);
  uVar1 = 0x40;
  if ((int)param_2[2] < 0x40) {
    uVar1 = param_2[2];
  }
  *(undefined4 *)(param_1 + 9) = uVar1;
  param_1[0x4a] = param_1 + 0x4c;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0x80000040;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  param_1[0x6e] = hkDefaultTaskQueue::EmptyTask::vftable;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 900) = *param_2;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  puVar5 = puVar11;
  if (*(int *)((longlong)param_1 + 900) == 0) {
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
    puVar3 = (undefined8 *)
             (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar2 + 0x58),0x30);
    if (puVar3 != (undefined8 *)0x0) {
      uVar1 = param_2[1];
      *puVar3 = _anon_9C5B0A96::BlockingCriticalSection::vftable;
      FUN_14370d870(puVar3 + 1,uVar1);
      puVar5 = puVar3;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 900) == 1) {
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      puVar5 = (undefined8 *)
               (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                         (*(longlong **)((longlong)pvVar2 + 0x58),0x40);
      if (puVar5 == (undefined8 *)0x0) {
        param_1[4] = 0;
      }
      else {
        *(undefined4 *)(puVar5 + 1) = 0;
        *puVar5 = _anon_9C5B0A96::SpinningCriticalSection::vftable;
        param_1[4] = puVar5;
      }
      goto LAB_143710daa;
    }
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
    puVar3 = (undefined8 *)
             (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar2 + 0x58),0x48);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[8] = 0;
      *puVar3 = _anon_9C5B0A96::AsyncThreadPoolCriticalSection::vftable;
      FUN_143718910(puVar3 + 1);
      puVar5 = puVar3;
    }
  }
  param_1[4] = puVar5;
LAB_143710daa:
  pvVar2 = TlsGetValue(DAT_146b7bf70);
  if (pvVar2 == (LPVOID)0x0) {
    pvVar2 = DAT_146b7bf68;
  }
  lVar4 = (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar2 + 0x58),0x38);
  puVar5 = puVar11;
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)FUN_1437109d0(lVar4,param_2[1]);
  }
  param_1[5] = puVar5;
  uVar6 = FUN_143703a50();
  uVar8 = *(uint *)((longlong)param_1 + 0x44) & 0x3fffffff;
  if (uVar8 < 0x100) {
    uVar8 = uVar8 * 2;
    uVar12 = 0x100;
    if (0x100 < uVar8) {
      uVar12 = uVar8;
    }
    FUN_14370c310(uVar6,param_1 + 7,uVar12,0x10);
  }
  if (0 < *(int *)(param_1 + 9)) {
    puVar5 = param_1 + 10;
    puVar3 = puVar11;
    do {
      iVar10 = (int)puVar3;
      if (*(int *)((longlong)param_1 + 900) == 0) {
        pvVar2 = TlsGetValue(DAT_146b7bf70);
        if (pvVar2 == (LPVOID)0x0) {
          pvVar2 = DAT_146b7bf68;
        }
        puVar7 = (undefined8 *)
                 (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                           (*(longlong **)((longlong)pvVar2 + 0x58),0x158);
        puVar3 = puVar11;
        if (puVar7 != (undefined8 *)0x0) {
          uVar1 = param_2[1];
          *puVar7 = hkDefaultTaskQueue::ThreadContext::vftable;
          *(int *)(puVar7 + 1) = iVar10;
          *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
          *(undefined1 *)(puVar7 + 2) = 0;
          puVar7[3] = 0;
          puVar7[4] = 0;
          *(undefined1 *)(puVar7 + 5) = 0;
          puVar7[6] = puVar7 + 8;
          *(undefined4 *)(puVar7 + 7) = 0;
          *(undefined4 *)((longlong)puVar7 + 0x3c) = 0x80000020;
          puVar7[0x28] = 0;
          puVar7[0x29] = 0;
          *puVar7 = hkDefaultTaskQueueDetail::BlockingThreadContext::vftable;
          Semaphore::Semaphore(puVar7 + 0x2a,0,1,uVar1);
          puVar3 = puVar7;
        }
        *puVar5 = puVar3;
      }
      else if (*(int *)((longlong)param_1 + 900) == 1) {
        pvVar2 = TlsGetValue(DAT_146b7bf70);
        if (pvVar2 == (LPVOID)0x0) {
          pvVar2 = DAT_146b7bf68;
        }
        puVar3 = (undefined8 *)
                 (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                           (*(longlong **)((longlong)pvVar2 + 0x58),0x1c0);
        if (puVar3 == (undefined8 *)0x0) {
          *puVar5 = 0;
          puVar3 = puVar11;
        }
        else {
          *puVar3 = hkDefaultTaskQueue::ThreadContext::vftable;
          *(int *)(puVar3 + 1) = iVar10;
          *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
          *(undefined1 *)(puVar3 + 2) = 0;
          puVar3[3] = 0;
          puVar3[4] = 0;
          *(undefined1 *)(puVar3 + 5) = 0;
          puVar3[6] = puVar3 + 8;
          *(undefined4 *)(puVar3 + 7) = 0;
          *(undefined4 *)((longlong)puVar3 + 0x3c) = 0x80000020;
          puVar3[0x28] = 0;
          puVar3[0x29] = 0;
          *puVar3 = hkDefaultTaskQueueDetail::SpinningThreadContext::vftable;
          *(undefined4 *)(puVar3 + 0x30) = 0;
          *puVar5 = puVar3;
        }
      }
      else {
        pvVar2 = TlsGetValue(DAT_146b7bf70);
        if (pvVar2 == (LPVOID)0x0) {
          pvVar2 = DAT_146b7bf68;
        }
        puVar3 = (undefined8 *)
                 (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                           (*(longlong **)((longlong)pvVar2 + 0x58),0x168);
        if (puVar3 == (undefined8 *)0x0) {
          *puVar5 = 0;
          puVar3 = puVar11;
        }
        else {
          uVar6 = *(undefined8 *)(param_2 + 4);
          *puVar3 = hkDefaultTaskQueue::ThreadContext::vftable;
          *(int *)(puVar3 + 1) = iVar10;
          *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
          *(undefined1 *)(puVar3 + 2) = 0;
          puVar3[3] = 0;
          puVar3[4] = 0;
          *(undefined1 *)(puVar3 + 5) = 0;
          puVar3[6] = puVar3 + 8;
          *(undefined4 *)(puVar3 + 7) = 0;
          *(undefined4 *)((longlong)puVar3 + 0x3c) = 0x80000020;
          puVar3[0x28] = 0;
          puVar3[0x29] = 0;
          *puVar3 = hkDefaultTaskQueueDetail::AsyncThreadPoolContext::vftable;
          *(undefined4 *)(puVar3 + 0x2a) = 0;
          puVar3[0x2b] = uVar6;
          *(undefined4 *)(puVar3 + 0x2c) = 0xffffffff;
          *puVar5 = puVar3;
        }
      }
      puVar3[0x28] = param_1;
      puVar5 = puVar5 + 1;
      puVar3 = (undefined8 *)(ulonglong)(iVar10 + 1U);
      *(int *)(param_1[0x4a] + (longlong)*(int *)(param_1 + 0x4b) * 4) =
           (*(int *)(param_1 + 9) - iVar10) + -1;
      *(int *)(param_1 + 0x4b) = *(int *)(param_1 + 0x4b) + 1;
    } while ((int)(iVar10 + 1U) < *(int *)(param_1 + 9));
  }
  lVar4 = (longlong)*(int *)(param_1 + 9);
  if (lVar4 < 0x40) {
    puVar11 = param_1 + lVar4 + 10;
    for (lVar9 = 0x40 - lVar4; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  return param_1;
}



// FUNCTION 1437110a0 FUN_1437110a0 body=164 status=ok
// SIG undefined FUN_1437110a0(void)

void FUN_1437110a0(longlong param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  uint *puVar3;
  longlong lVar4;
  
  lVar4 = 0x2a;
  puVar3 = (uint *)(param_1 + 0x100c);
  do {
    lVar4 = lVar4 + -1;
    puVar1 = puVar3 + -0x18;
    uVar2 = FUN_143703a50();
    puVar3[-0x19] = 0;
    if (-1 < (int)*puVar1) {
      FUN_143702e10(uVar2,*(undefined8 *)(puVar3 + -0x1b),8,*puVar1 & 0x3fffffff);
    }
    puVar3[-0x1b] = 0;
    puVar3[-0x1a] = 0;
    *puVar1 = 0x80000000;
    uVar2 = FUN_143703a50();
    puVar3[-0x21] = 0;
    if (-1 < (int)puVar3[-0x20]) {
      FUN_143702e10(uVar2,*(undefined8 *)(puVar3 + -0x23),8,puVar3[-0x20] & 0x3fffffff);
    }
    puVar3[-0x23] = 0;
    puVar3[-0x22] = 0;
    puVar3[-0x20] = 0x80000000;
    puVar3 = puVar1;
  } while (lVar4 != 0);
  return;
}



// FUNCTION 143711150 FUN_143711150 body=132 status=ok
// SIG undefined FUN_143711150(void)

void FUN_143711150(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  LPVOID pvVar3;
  
  lVar1 = *param_1;
  while (lVar1 != 0) {
    lVar2 = *param_1;
    lVar1 = *(longlong *)(lVar2 + 0xfc0);
    if (lVar2 != 0) {
      FUN_1437110a0(lVar2);
      pvVar3 = TlsGetValue(DAT_146b7bf70);
      if (pvVar3 == (LPVOID)0x0) {
        pvVar3 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar3 + 0x58),lVar2,0xfc8);
    }
    *param_1 = lVar1;
  }
  FWindowsCriticalSection::~FWindowsCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  return;
}



// FUNCTION 1437111e0 FUN_1437111e0 body=352 status=ok
// SIG undefined FUN_1437111e0(void)

void FUN_1437111e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  LPVOID pvVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  
  *param_1 = hkDefaultTaskQueue::vftable;
  param_1[3] = hkDefaultTaskQueue::vftable;
  FUN_143712420();
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 9)) {
    plVar6 = param_1 + 10;
    do {
      puVar1 = (undefined8 *)*plVar6;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      *plVar6 = 0;
      iVar5 = iVar5 + 1;
      plVar6 = plVar6 + 1;
    } while (iVar5 < *(int *)(param_1 + 9));
  }
  lVar2 = param_1[5];
  if (lVar2 != 0) {
    FUN_143711150(lVar2);
    pvVar3 = TlsGetValue(DAT_146b7bf70);
    if (pvVar3 == (LPVOID)0x0) {
      pvVar3 = DAT_146b7bf68;
    }
    (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 0x10))
              (*(longlong **)((longlong)pvVar3 + 0x58),lVar2,0x38);
  }
  puVar1 = (undefined8 *)param_1[4];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[4] = 0;
  param_1[0x6e] = hkTask::vftable;
  uVar4 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x4b) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x25c)) {
    FUN_143702e10(uVar4,param_1[0x4a],4,*(uint *)((longlong)param_1 + 0x25c) & 0x3fffffff);
  }
  param_1[0x4a] = 0;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0x80000000;
  uVar4 = FUN_143703a50();
  *(undefined4 *)(param_1 + 8) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x44)) {
    FUN_143702e10(uVar4,param_1[7],0x10,*(uint *)((longlong)param_1 + 0x44) & 0x3fffffff);
  }
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  param_1[3] = hkTaskQueue::vftable;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 143711340 FUN_143711340 body=9 status=ok
// SIG undefined FUN_143711340(void)

void FUN_143711340(longlong param_1)

{
  FUN_1437119b0(param_1 + -0x18);
  return;
}



// FUNCTION 143711350 FUN_143711350 body=181 status=ok
// SIG undefined FUN_143711350(void)

undefined8 * FUN_143711350(undefined8 *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  
  *param_1 = hkDefaultTaskQueue::ThreadContext::vftable;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 7) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x3c)) {
    FUN_143702e10(uVar1,param_1[6],8,*(uint *)((longlong)param_1 + 0x3c) & 0x3fffffff);
  }
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar2 + 0x58),param_1,0x168);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x168);
  }
  return param_1;
}



// FUNCTION 143711410 FUN_143711410 body=129 status=ok
// SIG undefined FUN_143711410(void)

undefined8 * FUN_143711410(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_143718950(param_1 + 1);
  *param_1 = hkDefaultTaskQueue::CriticalSection::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x48);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1437114a0 FUN_1437114a0 body=129 status=ok
// SIG undefined FUN_1437114a0(void)

undefined8 * FUN_1437114a0(undefined8 *param_1,uint param_2)

{
  LPVOID pvVar1;
  
  FWindowsCriticalSection::~FWindowsCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  *param_1 = hkDefaultTaskQueue::CriticalSection::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x30);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 143711530 FUN_143711530 body=193 status=ok
// SIG undefined FUN_143711530(void)

undefined8 * FUN_143711530(undefined8 *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  
  hkSemaphore::~hkSemaphore(param_1 + 0x2a);
  *param_1 = hkDefaultTaskQueue::ThreadContext::vftable;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 7) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x3c)) {
    FUN_143702e10(uVar1,param_1[6],8,*(uint *)((longlong)param_1 + 0x3c) & 0x3fffffff);
  }
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar2 + 0x58),param_1,0x158);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x158);
  }
  return param_1;
}



// FUNCTION 143711600 FUN_143711600 body=99 status=ok
// SIG undefined FUN_143711600(void)

undefined8 * FUN_143711600(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkDefaultTaskQueue::CriticalSection::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,8);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,8);
  }
  return param_1;
}



// FUNCTION 143711670 FUN_143711670 body=99 status=ok
// SIG undefined FUN_143711670(void)

undefined8 * FUN_143711670(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkTask::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x10);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1437116e0 FUN_1437116e0 body=99 status=ok
// SIG undefined FUN_1437116e0(void)

undefined8 * FUN_1437116e0(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkTask::ExecutionContext::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x10);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 143711750 FUN_143711750 body=99 status=ok
// SIG undefined FUN_143711750(void)

undefined8 * FUN_143711750(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkTask::ExecutionContext::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,8);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,8);
  }
  return param_1;
}



// FUNCTION 1437117c0 FUN_1437117c0 body=99 status=ok
// SIG undefined FUN_1437117c0(void)

undefined8 * FUN_1437117c0(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkDefaultTaskQueue::CriticalSection::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x40);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 143711830 FUN_143711830 body=181 status=ok
// SIG undefined FUN_143711830(void)

undefined8 * FUN_143711830(undefined8 *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  
  *param_1 = hkDefaultTaskQueue::ThreadContext::vftable;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 7) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x3c)) {
    FUN_143702e10(uVar1,param_1[6],8,*(uint *)((longlong)param_1 + 0x3c) & 0x3fffffff);
  }
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar2 + 0x58),param_1,0x1c0);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x1c0);
  }
  return param_1;
}



// FUNCTION 1437118f0 FUN_1437118f0 body=181 status=ok
// SIG undefined FUN_1437118f0(void)

undefined8 * FUN_1437118f0(undefined8 *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  
  *param_1 = hkDefaultTaskQueue::ThreadContext::vftable;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 7) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x3c)) {
    FUN_143702e10(uVar1,param_1[6],8,*(uint *)((longlong)param_1 + 0x3c) & 0x3fffffff);
  }
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar2 + 0x58),param_1,0x150);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 1437119b0 FUN_1437119b0 body=139 status=ok
// SIG undefined FUN_1437119b0(void)

longlong FUN_1437119b0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437111e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x3a0;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x3a0);
    }
  }
  return param_1;
}



// FUNCTION 143711a40 FUN_143711a40 body=47 status=ok
// SIG undefined FUN_143711a40(void)

int FUN_143711a40(longlong *param_1,int param_2)

{
  int iVar1;
  
  param_2 = param_2 * 2;
  iVar1 = param_2 + 1;
  if (param_2 + 2 < (int)param_1[1]) {
    iVar1 = (2 - (uint)(*(uint *)(*param_1 + (longlong)(param_2 + 2) * 0x10) <
                       *(uint *)(*param_1 + (longlong)iVar1 * 0x10))) + param_2;
  }
  return iVar1;
}



// FUNCTION 143711a70 FUN_143711a70 body=766 status=ok
// SIG undefined FUN_143711a70(void)

void FUN_143711a70(longlong *param_1,longlong *param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong local_28;
  uint local_20;
  uint local_1c;
  
  local_28 = 0;
  local_20 = 0;
  local_1c = 0x80000000;
  uVar9 = local_20;
  uVar8 = local_1c;
  if (0 < param_3 * 2) {
    iVar7 = param_3;
    if (param_3 * 2 < 0) {
      iVar7 = 0;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_28,iVar7 * 2,4);
    uVar9 = local_20;
    uVar8 = local_1c;
  }
  while (param_3 = param_3 + -1, -1 < param_3) {
    iVar7 = *(int *)(*param_2 + 0x14);
    if (iVar7 != -1) {
      if (uVar9 == (uVar8 & 0x3fffffff)) {
        FUN_14370c460(&PTR_vftable_1467f0638,&local_28,4);
        uVar9 = local_20;
      }
      *(int *)(local_28 + (longlong)(int)uVar9 * 4) = iVar7;
      uVar9 = local_20 + 1;
      uVar8 = local_1c;
      local_20 = uVar9;
    }
    param_2 = (longlong *)((longlong)param_2 + (longlong)param_4);
  }
  do {
    do {
      if (uVar9 == 0) {
        local_20 = 0;
        if (-1 < (int)uVar8) {
          FUN_143702e10(&PTR_vftable_1467f0638,local_28,4,uVar8 & 0x3fffffff);
        }
        return;
      }
      local_20 = uVar9 - 1;
      lVar1 = (longlong)*(int *)(local_28 + (longlong)(int)local_20 * 4) * 0x18;
      plVar10 = (longlong *)(*param_1 + lVar1);
      LOCK();
      UNLOCK();
      LOCK();
      UNLOCK();
      uVar8 = local_1c;
      uVar9 = local_20;
    } while (*(int *)(*plVar10 + 0x10) != 0);
    LOCK();
    UNLOCK();
    *(undefined4 *)(*(longlong *)(lVar1 + *param_1) + 0x10) = 1;
    LOCK();
    UNLOCK();
    for (iVar7 = (int)plVar10[1]; iVar7 != -1;
        iVar7 = *(int *)(lVar1 + (longlong)iVar7 * 0x14 + 0xc)) {
      lVar1 = param_1[3];
      uVar3 = *(undefined4 *)(lVar1 + 4 + (longlong)iVar7 * 0x14);
      if (local_20 == (local_1c & 0x3fffffff)) {
        FUN_14370c460(&PTR_vftable_1467f0638,&local_28,4);
      }
      *(undefined4 *)(local_28 + (longlong)(int)local_20 * 4) = uVar3;
      local_20 = local_20 + 1;
    }
    uVar9 = local_20;
    for (iVar7 = *(int *)((longlong)plVar10 + 0xc); uVar8 = local_1c, iVar7 != -1;
        iVar7 = *(int *)(lVar1 + (longlong)iVar7 * 0x14 + 8)) {
      lVar1 = param_1[3];
      iVar4 = *(int *)(lVar1 + (longlong)iVar7 * 0x14);
      if (iVar4 != -1) {
        lVar2 = (longlong)iVar4 * 0x18;
        LOCK();
        UNLOCK();
        LOCK();
        UNLOCK();
        uVar9 = local_20;
        if ((*(int *)(*(longlong *)(lVar2 + *param_1) + 0x10) == 0) &&
           (cVar6 = (**(code **)(**(longlong **)(*(longlong *)(lVar2 + *param_1) + 0x58) + 0x28))(),
           uVar9 = local_20, cVar6 != '\0')) {
          for (iVar5 = *(int *)(lVar2 + 8 + *param_1); iVar5 != -1;
              iVar5 = *(int *)(param_1[3] + 0xc + (longlong)iVar5 * 0x14)) {
            LOCK();
            UNLOCK();
            LOCK();
            UNLOCK();
            if (*(int *)(*(longlong *)
                          (*param_1 +
                          (longlong)*(int *)(param_1[3] + 4 + (longlong)iVar5 * 0x14) * 0x18) + 0x10
                        ) == 0) goto LAB_143711d09;
          }
          if (local_20 == (local_1c & 0x3fffffff)) {
            FUN_14370c460(&PTR_vftable_1467f0638,&local_28,4);
          }
          *(int *)(local_28 + (longlong)(int)local_20 * 4) = iVar4;
          local_20 = local_20 + 1;
          uVar9 = local_20;
        }
      }
LAB_143711d09:
    }
  } while( true );
}



// FUNCTION 143711d70 FUN_143711d70 body=220 status=ok
// SIG undefined FUN_143711d70(void)

void FUN_143711d70(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 local_38;
  undefined4 local_30;
  uint local_2c;
  undefined8 local_20;
  undefined4 local_18;
  uint local_14;
  
  if (param_3 != 0) {
    FUN_140520750(*(undefined8 *)(param_1 + 8),0);
    FUN_143710a70(&local_38,*(undefined8 *)(param_1 + 0x10));
    FUN_143711a70(&local_38,param_2,param_3,param_4);
    uVar1 = FUN_143703a50();
    local_18 = 0;
    if (-1 < (int)local_14) {
      FUN_143702e10(uVar1,local_20,0x14,local_14 & 0x3fffffff);
    }
    local_20 = 0;
    local_14 = 0x80000000;
    uVar1 = FUN_143703a50();
    local_30 = 0;
    if (-1 < (int)local_2c) {
      FUN_143702e10(uVar1,local_38,0x18,local_2c & 0x3fffffff);
    }
    FOutputDevice::Serialize(*(undefined8 *)(param_1 + 8),0);
  }
  return;
}



// FUNCTION 143711e50 FUN_143711e50 body=157 status=ok
// SIG undefined FUN_143711e50(void)

undefined8
FUN_143711e50(longlong *param_1,undefined8 param_2,int param_3,undefined4 param_4,undefined4 param_5
             )

{
  undefined8 local_res8;
  
  (**(code **)(*param_1 + 8))(param_1,&local_res8,1);
  (**(code **)(*param_1 + 0x18))(param_1,local_res8,param_2,param_5);
  if (param_3 != 1) {
    (**(code **)(*param_1 + 0x20))(param_1,local_res8,param_3,param_4);
  }
  (**(code **)(*param_1 + 0x38))(param_1,&local_res8,1,1,8);
  return local_res8;
}



// FUNCTION 143711ef0 FUN_143711ef0 body=178 status=ok
// SIG undefined FUN_143711ef0(void)

void FUN_143711ef0(longlong param_1,longlong *param_2,int param_3)

{
  short *psVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_3;
  FUN_140520750(*(undefined8 *)(param_1 + 8),0);
  if (0 < param_3) {
    do {
      lVar2 = *param_2;
      lVar3 = param_2[1];
      if (*(short *)(lVar2 + 4) != -1) {
        uVar4 = FUN_143703a50();
        if (*(uint *)(lVar2 + 0x28) == (*(uint *)(lVar2 + 0x2c) & 0x3fffffff)) {
          FUN_14370c460(uVar4,lVar2 + 0x20,8);
        }
        *(longlong *)(*(longlong *)(lVar2 + 0x20) + (longlong)*(int *)(lVar2 + 0x28) * 8) = lVar3;
        *(int *)(lVar2 + 0x28) = *(int *)(lVar2 + 0x28) + 1;
        psVar1 = (short *)(lVar3 + 4);
        *psVar1 = *psVar1 + 1;
      }
      param_2 = param_2 + 2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  FOutputDevice::Serialize(*(undefined8 *)(param_1 + 8),0);
  return;
}



// FUNCTION 143711fb0 FUN_143711fb0 body=128 status=ok
// SIG undefined FUN_143711fb0(void)

void FUN_143711fb0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  FUN_140520750(*(undefined8 *)(param_1 + 8),0);
  if (*(short *)(param_2 + 4) != -1) {
    uVar1 = FUN_143703a50();
    if (*(uint *)(param_2 + 0x28) == (*(uint *)(param_2 + 0x2c) & 0x3fffffff)) {
      FUN_14370c460(uVar1,param_2 + 0x20,8);
    }
    *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)*(int *)(param_2 + 0x28) * 8) = param_3;
    *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + 1;
    *(short *)(param_3 + 4) = *(short *)(param_3 + 4) + 1;
  }
  FOutputDevice::Serialize(*(undefined8 *)(param_1 + 8),0);
  return;
}



// FUNCTION 143712030 FUN_143712030 body=187 status=ok
// SIG undefined FUN_143712030(void)

int * FUN_143712030(longlong *param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  if ((int)param_1[5] == -1) {
    FUN_143712b80(param_1 + 3);
  }
  iVar2 = (int)param_1[5];
  lVar3 = param_1[3];
  *param_2 = iVar2;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x14);
  *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x14 + 0x10) = *(undefined4 *)((longlong)param_1 + 0x2c)
  ;
  *(int *)((longlong)param_1 + 0x2c) = iVar2;
  piVar1 = (int *)(param_1[3] + (longlong)iVar2 * 0x14);
  *piVar1 = param_3;
  piVar1[1] = param_4;
  lVar3 = *param_1;
  piVar1[3] = *(int *)(lVar3 + 8 + (longlong)param_3 * 0x18);
  *(int *)(lVar3 + (longlong)param_3 * 0x18 + 8) = iVar2;
  lVar3 = *param_1;
  piVar1[2] = *(int *)(lVar3 + 0xc + (longlong)param_4 * 0x18);
  *(int *)(lVar3 + (longlong)param_4 * 0x18 + 0xc) = iVar2;
  return param_2;
}



// FUNCTION 1437120f0 FUN_1437120f0 body=108 status=ok
// SIG undefined FUN_1437120f0(void)

void FUN_1437120f0(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  
  lVar4 = param_1[1];
  uVar5 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar5,param_1,0x10);
  }
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  puVar6 = (undefined4 *)((longlong)(int)param_1[1] * 0x10 + *param_1);
  *puVar6 = *param_2;
  puVar6[1] = uVar1;
  puVar6[2] = uVar2;
  puVar6[3] = uVar3;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  FUN_1437133d0(param_1,(int)lVar4);
  return;
}



// FUNCTION 143712160 FUN_143712160 body=95 status=ok
// SIG undefined FUN_143712160(void)

int * FUN_143712160(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  
  if ((int)param_1[2] == -1) {
    FUN_143712c60();
  }
  iVar1 = (int)param_1[2];
  lVar2 = *param_1;
  *param_2 = iVar1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar2 + 0x10 + (longlong)iVar1 * 0x18);
  *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18 + 0x10) = *(undefined4 *)((longlong)param_1 + 0x14)
  ;
  *(int *)((longlong)param_1 + 0x14) = iVar1;
  *(undefined8 *)(*param_1 + 8 + (longlong)iVar1 * 0x18) = 0xffffffffffffffff;
  return param_2;
}



// FUNCTION 1437121c0 FUN_1437121c0 body=275 status=ok
// SIG undefined FUN_1437121c0(void)

void FUN_1437121c0(longlong *param_1,undefined8 *param_2,uint param_3,int param_4)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (0 < (int)param_3) {
    uVar5 = (ulonglong)param_3;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
    if (0 < (int)param_3) {
      do {
        if (param_1[1] == 0) {
          pvVar2 = TlsGetValue(DAT_146b7bf70);
          if (pvVar2 == (LPVOID)0x0) {
            pvVar2 = DAT_146b7bf68;
          }
          lVar3 = (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                            (*(longlong **)((longlong)pvVar2 + 0x58),0xfc8);
          lVar4 = 0;
          if (lVar3 != 0) {
            lVar4 = FUN_143710940(lVar3);
          }
          *(longlong *)(lVar4 + 0xfc0) = *param_1;
          *param_1 = lVar4;
          *(longlong *)(lVar4 + 0xfb8) = param_1[1];
          param_1[1] = lVar4;
        }
        puVar1 = (undefined4 *)param_1[1];
        param_1[1] = *(longlong *)(puVar1 + 0x16);
        puVar1[1] = 0x10001;
        puVar1[2] = 0x40000000;
        *(undefined8 *)(puVar1 + 6) = 0;
        *puVar1 = 0;
        *(undefined8 *)(puVar1 + 0x16) = 0;
        puVar1[10] = 0;
        puVar1[0x12] = 0;
        LOCK();
        UNLOCK();
        puVar1[4] = 0;
        LOCK();
        UNLOCK();
        *param_2 = puVar1;
        param_2 = (undefined8 *)((longlong)param_2 + (longlong)param_4);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  }
  return;
}



// FUNCTION 1437122e0 FUN_1437122e0 body=266 status=ok
// SIG undefined FUN_1437122e0(void)

void FUN_1437122e0(longlong param_1,undefined8 *param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  int iVar3;
  
  if (((param_3 < 0x10) && (pvVar2 = TlsGetValue(DAT_146b81f60), pvVar2 != (LPVOID)0x0)) &&
     (*(longlong *)((longlong)pvVar2 + 0x140) == param_1 + -0x18)) {
    iVar3 = *(int *)((longlong)pvVar2 + 0x38);
    if (iVar3 < param_3) {
      FUN_1437121c0(*(undefined8 *)(param_1 + 0x10),
                    *(longlong *)((longlong)pvVar2 + 0x30) + (longlong)iVar3 * 8,0x10);
      *(int *)((longlong)pvVar2 + 0x38) = iVar3 + 0x10;
    }
    iVar3 = 0;
    if (0 < param_3) {
      do {
        puVar1 = *(undefined4 **)
                  (*(longlong *)((longlong)pvVar2 + 0x30) +
                  (longlong)((*(int *)((longlong)pvVar2 + 0x38) - iVar3) + -1) * 8);
        puVar1[1] = 0x10001;
        puVar1[2] = 0x40000000;
        *(undefined8 *)(puVar1 + 6) = 0;
        *puVar1 = 0;
        *(undefined8 *)(puVar1 + 0x16) = 0;
        puVar1[10] = 0;
        puVar1[0x12] = 0;
        LOCK();
        UNLOCK();
        puVar1[4] = 0;
        LOCK();
        UNLOCK();
        *param_2 = puVar1;
        iVar3 = iVar3 + 1;
        param_2 = (undefined8 *)((longlong)param_2 + (longlong)param_4);
      } while (iVar3 < param_3);
    }
    *(int *)((longlong)pvVar2 + 0x38) = *(int *)((longlong)pvVar2 + 0x38) - param_3;
    return;
  }
  FUN_1437121c0(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4);
  return;
}



// FUNCTION 1437123f0 FUN_1437123f0 body=43 status=ok
// SIG undefined FUN_1437123f0(void)

void FUN_1437123f0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    plVar2 = (longlong *)(param_1 + 0x50);
    do {
      if (*(longlong *)(*plVar2 + 0x18) != 0) {
        *(undefined1 *)(*plVar2 + 0x28) = 1;
      }
      iVar1 = iVar1 + 1;
      plVar2 = plVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x4c));
  }
  return;
}



// FUNCTION 143712420 FUN_143712420 body=295 status=ok
// SIG undefined FUN_143712420(void)

void FUN_143712420(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  FUN_140520750(*(undefined8 *)(param_1 + 0x20),0);
  if (*(char *)(param_1 + 0x360) == '\0') {
    iVar3 = 0;
    *(undefined1 *)(param_1 + 0x360) = 1;
    if (*(int *)(param_1 + 900) == 0) {
      if (0 < *(int *)(param_1 + 0x4c)) {
        plVar2 = (longlong *)(param_1 + 0x50);
        do {
          lVar1 = *plVar2;
          if (*(char *)(lVar1 + 0x10) != '\0') {
            *(undefined1 *)(lVar1 + 0x10) = 0;
            hkSemaphore::release(lVar1 + 0x150,1);
          }
          iVar3 = iVar3 + 1;
          plVar2 = plVar2 + 1;
        } while (iVar3 < *(int *)(param_1 + 0x4c));
      }
    }
    else if (*(int *)(param_1 + 900) == 1) {
      if (0 < *(int *)(param_1 + 0x4c)) {
        plVar2 = (longlong *)(param_1 + 0x50);
        do {
          lVar1 = *plVar2;
          if (*(char *)(lVar1 + 0x10) != '\0') {
            *(undefined1 *)(lVar1 + 0x10) = 0;
            LOCK();
            if (*(int *)(lVar1 + 0x180) == 0) {
              *(int *)(lVar1 + 0x180) = 1;
            }
            UNLOCK();
          }
          iVar3 = iVar3 + 1;
          plVar2 = plVar2 + 1;
        } while (iVar3 < *(int *)(param_1 + 0x4c));
      }
    }
    else if (0 < *(int *)(param_1 + 0x4c)) {
      plVar2 = (longlong *)(param_1 + 0x50);
      do {
        lVar1 = *plVar2;
        if (*(char *)(lVar1 + 0x10) != '\0') {
          *(undefined1 *)(lVar1 + 0x10) = 0;
          FUN_143718bb0(lVar1 + 0x150,*(undefined8 *)(lVar1 + 0x158),*(undefined4 *)(lVar1 + 0x160))
          ;
        }
        iVar3 = iVar3 + 1;
        plVar2 = plVar2 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x4c));
    }
  }
  FOutputDevice::Serialize(*(undefined8 *)(param_1 + 0x20),0);
  return;
}



// FUNCTION 143712550 FUN_143712550 body=129 status=ok
// SIG undefined FUN_143712550(void)

int FUN_143712550(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  
  lVar12 = param_1[1];
  iVar13 = FUN_143711a40();
  while( true ) {
    iVar11 = iVar13;
    if ((int)lVar12 <= iVar11) {
      return param_2;
    }
    lVar3 = *param_1;
    lVar15 = (longlong)param_2;
    lVar14 = (longlong)iVar11;
    if (*(uint *)(lVar3 + lVar14 * 0x10) <= *(uint *)(lVar3 + lVar15 * 0x10)) break;
    puVar1 = (undefined4 *)(lVar3 + lVar14 * 0x10);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (undefined4 *)(lVar3 + lVar15 * 0x10);
    uVar7 = *puVar2;
    uVar8 = puVar2[1];
    uVar9 = puVar2[2];
    uVar10 = puVar2[3];
    puVar2 = (undefined4 *)(lVar3 + lVar15 * 0x10);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    puVar1 = (undefined4 *)(lVar3 + lVar14 * 0x10);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    iVar13 = FUN_143711a40(param_1,iVar11);
    param_2 = iVar11;
  }
  return param_2;
}



// FUNCTION 1437125e0 FUN_1437125e0 body=9 status=ok
// SIG undefined FUN_1437125e0(void)

void FUN_1437125e0(longlong param_1)

{
  FUN_143718980(param_1 + 8);
  return;
}



// FUNCTION 1437125f0 FUN_1437125f0 body=11 status=ok
// SIG undefined FUN_1437125f0(void)

void FUN_1437125f0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001437125f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 143712600 FUN_143712600 body=62 status=ok
// SIG undefined FUN_143712600(void)

int FUN_143712600(longlong param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  LOCK();
  iVar2 = *(int *)(param_1 + 8);
  bVar4 = iVar2 == 0;
  if (bVar4) {
    *(int *)(param_1 + 8) = 1;
    iVar2 = 0;
  }
  UNLOCK();
  uVar1 = 0;
  while (!bVar4) {
    for (iVar2 = 1 << ((byte)uVar1 & 0x1f); 0 < iVar2; iVar2 = iVar2 + -1) {
    }
    uVar3 = uVar1 + 1;
    if (7 < uVar1) {
      uVar3 = uVar1;
    }
    LOCK();
    iVar2 = *(int *)(param_1 + 8);
    bVar4 = iVar2 == 0;
    if (bVar4) {
      *(int *)(param_1 + 8) = 1;
      iVar2 = 0;
    }
    UNLOCK();
    uVar1 = uVar3;
  }
  return iVar2;
}



// FUNCTION 143712640 FUN_143712640 body=430 status=ok
// SIG undefined FUN_143712640(void)

void FUN_143712640(longlong param_1,longlong *param_2,uint param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if (0 < (int)param_3) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    lVar6 = 0;
    if (0 < (int)param_3) {
      uVar5 = (ulonglong)param_3;
      lVar1 = lVar6;
      plVar7 = param_2;
      do {
        lVar6 = *plVar7;
        *(longlong *)(lVar6 + 0x58) = lVar1;
        *(undefined2 *)(lVar6 + 4) = 0xfffe;
        if ((*(longlong *)(lVar6 + 0x20) != lVar6 + 0x30) && (-1 < (int)*(uint *)(lVar6 + 0x2c))) {
          uVar3 = *(int *)(lVar6 + 0x28) - 1;
          uVar3 = uVar3 | uVar3 >> 0x10;
          uVar3 = uVar3 | uVar3 >> 8;
          uVar3 = uVar3 | uVar3 >> 4;
          uVar3 = uVar3 | uVar3 >> 2;
          iVar4 = (uVar3 >> 1 | uVar3) + 1;
          if (iVar4 < 2) {
            uVar2 = FUN_143703a50();
            lVar1 = lVar6 + 0x30;
            iVar4 = 2;
          }
          else {
            if ((int)(*(uint *)(lVar6 + 0x2c) & 0x3fffffff) <= iVar4) goto LAB_143712726;
            uVar2 = FUN_143703a50();
            lVar1 = 0;
          }
          FUN_14370c210(uVar2,lVar6 + 0x20,8,lVar1,iVar4);
        }
LAB_143712726:
        if ((*(longlong *)(lVar6 + 0x40) != lVar6 + 0x50) && (-1 < (int)*(uint *)(lVar6 + 0x4c))) {
          uVar3 = *(int *)(lVar6 + 0x48) - 1;
          uVar3 = uVar3 | uVar3 >> 0x10;
          uVar3 = uVar3 | uVar3 >> 8;
          uVar3 = uVar3 | uVar3 >> 4;
          uVar3 = uVar3 | uVar3 >> 2;
          iVar4 = (uVar3 >> 1 | uVar3) + 1;
          if (iVar4 < 1) {
            uVar2 = FUN_143703a50();
            lVar1 = lVar6 + 0x50;
            iVar4 = 1;
          }
          else {
            if ((int)(*(uint *)(lVar6 + 0x4c) & 0x3fffffff) <= iVar4) goto LAB_1437127a0;
            uVar2 = FUN_143703a50();
            lVar1 = 0;
          }
          FUN_14370c210(uVar2,lVar6 + 0x40,8,lVar1,iVar4);
        }
LAB_1437127a0:
        plVar7 = (longlong *)((longlong)plVar7 + (longlong)param_4);
        uVar5 = uVar5 - 1;
        lVar1 = lVar6;
      } while (uVar5 != 0);
    }
    *(undefined8 *)(*param_2 + 0x58) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar6;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  return;
}



// FUNCTION 1437127f0 FUN_1437127f0 body=384 status=ok
// SIG undefined FUN_1437127f0(void)

void FUN_1437127f0(longlong *param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  uint *puVar5;
  longlong lVar6;
  longlong lVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  lVar6 = *param_1;
  param_1[1] = lVar6;
  if (lVar6 != 0) {
    while( true ) {
      puVar5 = (uint *)(lVar6 + 0x2c);
      lVar7 = 0x2a;
      do {
        uVar1 = FUN_143703a50();
        puVar5[-1] = 0;
        if (-1 < (int)*puVar5) {
          FUN_143702e10(uVar1,*(undefined8 *)(puVar5 + -3),8,*puVar5 & 0x3fffffff);
        }
        puVar5[-3] = 0;
        puVar5[-2] = 0;
        *puVar5 = 0x80000000;
        uVar1 = FUN_143703a50();
        puVar5[7] = 0;
        if (-1 < (int)puVar5[8]) {
          FUN_143702e10(uVar1,*(undefined8 *)(puVar5 + 5),8,puVar5[8] & 0x3fffffff);
        }
        puVar5[5] = 0;
        puVar5[6] = 0;
        puVar5[8] = 0x80000000;
        puVar5 = puVar5 + 0x18;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      lVar7 = *(longlong *)(lVar6 + 0xfc0);
      lVar4 = 0x2a;
      puVar2 = (undefined4 *)(lVar6 + 0x28);
      do {
        *puVar2 = 0;
        *(undefined4 **)(puVar2 + -2) = puVar2 + 2;
        puVar2[1] = 0x80000002;
        *(undefined4 **)(puVar2 + 6) = puVar2 + 10;
        puVar2[8] = 0;
        puVar2[9] = 0x80000001;
        puVar2 = puVar2 + 0x18;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      lVar3 = 0x2a;
      lVar4 = lVar6;
      do {
        *(undefined2 *)(lVar4 + 4) = 0xfffe;
        *(longlong *)(lVar4 + 0x58) = lVar4 + 0x60;
        lVar3 = lVar3 + -1;
        lVar4 = lVar4 + 0x60;
      } while (lVar3 != 0);
      *(undefined8 *)(lVar6 + 0xfb8) = 0;
      *(undefined8 *)(lVar6 + 0xfc0) = 0;
      if (lVar7 == 0) break;
      *(longlong *)(lVar6 + 0xfc0) = lVar7;
      *(longlong *)(lVar6 + 0xfb8) = lVar7;
      lVar6 = lVar7;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143712969. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  return;
}



// FUNCTION 143712970 FUN_143712970 body=202 status=ok
// SIG undefined FUN_143712970(void)

void FUN_143712970(longlong param_1,undefined8 *param_2,uint param_3,int param_4)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_3;
  if ((((int)param_3 < 0x10) && (pvVar2 = TlsGetValue(DAT_146b81f60), pvVar2 != (LPVOID)0x0)) &&
     (*(longlong *)((longlong)pvVar2 + 0x140) == param_1 + -0x18)) {
    if (0x1f < (int)(*(int *)((longlong)pvVar2 + 0x38) + param_3)) {
      FUN_143712640(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)((longlong)pvVar2 + 0x30),
                    *(int *)((longlong)pvVar2 + 0x38),8);
      *(undefined4 *)((longlong)pvVar2 + 0x38) = 0;
    }
    if (0 < (int)param_3) {
      do {
        uVar1 = *param_2;
        param_2 = (undefined8 *)((longlong)param_2 + (longlong)param_4);
        *(undefined8 *)
         (*(longlong *)((longlong)pvVar2 + 0x30) + (longlong)*(int *)((longlong)pvVar2 + 0x38) * 8)
             = uVar1;
        *(int *)((longlong)pvVar2 + 0x38) = *(int *)((longlong)pvVar2 + 0x38) + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  else {
    FUN_143712640(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 143712a40 FUN_143712a40 body=11 status=ok
// SIG undefined FUN_143712a40(void)

void FUN_143712a40(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x90) = 1;
  return;
}



// FUNCTION 143712a50 FUN_143712a50 body=8 status=ok
// SIG undefined FUN_143712a50(void)

char * FUN_143712a50(void)

{
  return "EmptyTask";
}



// FUNCTION 143712a60 FUN_143712a60 body=7 status=ok
// SIG undefined FUN_143712a60(void)

undefined4 FUN_143712a60(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x368);
}



// FUNCTION 143712a70 FUN_143712a70 body=259 status=ok
// SIG undefined FUN_143712a70(void)

void FUN_143712a70(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong *plVar7;
  
  FUN_140520750(*(undefined8 *)(param_1 + 0x20),0);
  iVar6 = *(int *)(param_1 + 0x4c) + (int)param_2[1];
  uVar3 = FUN_143703a50();
  uVar4 = *(uint *)((longlong)param_2 + 0xc) & 0x3fffffff;
  if ((int)uVar4 < iVar6) {
    iVar2 = uVar4 * 2;
    if (iVar6 < iVar2) {
      iVar6 = iVar2;
    }
    FUN_14370c310(uVar3,param_2,iVar6,0x10);
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    plVar7 = (longlong *)(param_1 + 0x50);
    do {
      lVar1 = *plVar7;
      if (*(longlong *)(lVar1 + 0x18) != 0) {
        uVar3 = FUN_143703a50();
        if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
          FUN_14370c460(uVar3,param_2,0x10);
        }
        puVar5 = (undefined8 *)((longlong)(int)param_2[1] * 0x10 + *param_2);
        *(int *)(param_2 + 1) = (int)param_2[1] + 1;
        *puVar5 = **(undefined8 **)(lVar1 + 0x18);
        if (*(char *)(lVar1 + 0x28) == '\0') {
          uVar3 = *(undefined8 *)(lVar1 + 0x20);
        }
        else {
          uVar3 = **(undefined8 **)(lVar1 + 0x18);
        }
        puVar5[1] = uVar3;
      }
      iVar6 = iVar6 + 1;
      plVar7 = plVar7 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x4c));
  }
  FOutputDevice::Serialize(*(undefined8 *)(param_1 + 0x20),0);
  return;
}



// FUNCTION 143712b80 FUN_143712b80 body=219 status=ok
// SIG undefined FUN_143712b80(void)

void FUN_143712b80(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  
  iVar1 = (int)param_1[1];
  lVar6 = (longlong)iVar1;
  uVar4 = FUN_143703a50();
  iVar8 = (int)param_1[1] + 1;
  uVar5 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  if ((int)uVar5 < iVar8) {
    iVar3 = uVar5 * 2;
    if (iVar8 < iVar3) {
      iVar8 = iVar3;
    }
    FUN_14370c310(uVar4,param_1,iVar8,0x14);
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  uVar7 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  uVar4 = FUN_143703a50();
  uVar5 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  if (uVar5 < uVar7) {
    uVar5 = uVar5 * 2;
    uVar2 = uVar7;
    if (uVar7 < uVar5) {
      uVar2 = uVar5;
    }
    FUN_14370c310(uVar4,param_1,uVar2,0x14);
  }
  *(uint *)(param_1 + 1) = uVar7;
  if (lVar6 < (longlong)(ulonglong)uVar7) {
    lVar9 = (ulonglong)uVar7 - lVar6;
    lVar6 = lVar6 * 0x14;
    iVar8 = iVar1;
    do {
      iVar8 = iVar8 + 1;
      *(int *)(lVar6 + 0x10 + *param_1) = iVar8;
      lVar9 = lVar9 + -1;
      lVar6 = lVar6 + 0x14;
    } while (lVar9 != 0);
  }
  *(undefined4 *)(*param_1 + 0x10 + (longlong)(int)(uVar7 - 1) * 0x14) = 0xffffffff;
  *(int *)(param_1 + 2) = iVar1;
  return;
}



// FUNCTION 143712c60 FUN_143712c60 body=219 status=ok
// SIG undefined FUN_143712c60(void)

void FUN_143712c60(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  
  iVar1 = (int)param_1[1];
  lVar6 = (longlong)iVar1;
  uVar4 = FUN_143703a50();
  iVar8 = (int)param_1[1] + 1;
  uVar5 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  if ((int)uVar5 < iVar8) {
    iVar3 = uVar5 * 2;
    if (iVar8 < iVar3) {
      iVar8 = iVar3;
    }
    FUN_14370c310(uVar4,param_1,iVar8,0x18);
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  uVar7 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  uVar4 = FUN_143703a50();
  uVar5 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  if (uVar5 < uVar7) {
    uVar5 = uVar5 * 2;
    uVar2 = uVar7;
    if (uVar7 < uVar5) {
      uVar2 = uVar5;
    }
    FUN_14370c310(uVar4,param_1,uVar2,0x18);
  }
  *(uint *)(param_1 + 1) = uVar7;
  if (lVar6 < (longlong)(ulonglong)uVar7) {
    lVar9 = (ulonglong)uVar7 - lVar6;
    lVar6 = lVar6 * 0x18;
    iVar8 = iVar1;
    do {
      iVar8 = iVar8 + 1;
      *(int *)(lVar6 + 0x10 + *param_1) = iVar8;
      lVar9 = lVar9 + -1;
      lVar6 = lVar6 + 0x18;
    } while (lVar9 != 0);
  }
  *(undefined4 *)(*param_1 + 0x10 + (longlong)(int)(uVar7 - 1) * 0x18) = 0xffffffff;
  *(int *)(param_1 + 2) = iVar1;
  return;
}



// FUNCTION 143712d40 FUN_143712d40 body=38 status=ok
// SIG undefined FUN_143712d40(void)

void FUN_143712d40(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  if (param_3 == 0) {
    param_3 = param_1 + 0x358;
  }
  *(longlong *)(param_2 + 0x58) = param_3;
  *(undefined1 *)(param_2 + 0xb) = param_4;
  LOCK();
  UNLOCK();
  *(undefined4 *)(param_2 + 0x10) = 0;
  LOCK();
  UNLOCK();
  return;
}



// FUNCTION 143712d70 FUN_143712d70 body=28 status=ok
// SIG undefined FUN_143712d70(void)

undefined4 FUN_143712d70(longlong param_1)

{
  int iVar1;
  
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    LOCK();
    UNLOCK();
    iVar1 = **(int **)(param_1 + 8);
    LOCK();
    UNLOCK();
    return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != 0);
  }
  return 0;
}



// FUNCTION 143712d90 GetState body=8 status=ok
// SIG undefined GetState(void)

undefined1 UTTLBaseBossWyveAnimationInstance::GetState(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x360);
}



// FUNCTION 143712da0 FUN_143712da0 body=21 status=ok
// SIG undefined FUN_143712da0(void)

undefined8 FUN_143712da0(undefined8 param_1,longlong param_2)

{
  return CONCAT71(0xff,*(short *)(param_2 + 4) == -1);
}



// FUNCTION 143712dc0 FUN_143712dc0 body=9 status=ok
// SIG undefined FUN_143712dc0(void)

void FUN_143712dc0(longlong param_1)

{
  FUN_143718b00(param_1 + 8);
  return;
}



// FUNCTION 143712dd0 FUN_143712dd0 body=11 status=ok
// SIG undefined FUN_143712dd0(void)

void FUN_143712dd0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143712dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 143712de0 FUN_143712de0 body=13 status=ok
// SIG undefined FUN_143712de0(void)

int FUN_143712de0(longlong param_1)

{
  int iVar1;
  
  LOCK();
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 1) {
    *(int *)(param_1 + 8) = 0;
    iVar1 = 1;
  }
  UNLOCK();
  return iVar1;
}



// FUNCTION 143712df0 FUN_143712df0 body=36 status=ok
// SIG undefined FUN_143712df0(void)

void FUN_143712df0(longlong param_1)

{
  if (*(int *)(param_1 + 900) == 0) {
    FUN_14370f8d0(param_1,0);
    return;
  }
  if (*(int *)(param_1 + 900) != 1) {
    FUN_14370f070(param_1,0);
    return;
  }
  FUN_1437100d0(param_1,0);
  return;
}



// FUNCTION 143712e20 FUN_143712e20 body=49 status=ok
// SIG undefined FUN_143712e20(void)

void FUN_143712e20(longlong *param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  (**(code **)(*param_1 + 0x50))();
  (**(code **)(*param_1 + 0x10))(param_1,local_res10,1);
  return;
}



// FUNCTION 143712e60 FUN_143712e60 body=251 status=ok
// SIG undefined FUN_143712e60(void)

void FUN_143712e60(undefined8 param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined1 *local_98;
  int local_90;
  uint local_8c;
  undefined1 local_88 [128];
  
  uVar5 = (ulonglong)param_3;
  local_8c = 0x80000010;
  local_90 = 0;
  local_98 = local_88;
  if (0x10 < (int)param_3) {
    uVar3 = uVar5;
    if ((int)param_3 < 0x20) {
      uVar3 = 0x20;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_98,uVar3,8);
  }
  plVar4 = param_2;
  iVar2 = local_90;
  if (0 < (int)param_3) {
    do {
      if (((param_2 != (longlong *)0x0) && (lVar1 = *plVar4, lVar1 != 0)) &&
         (*(short *)(lVar1 + 4) != -1)) {
        *(longlong *)(local_98 + (longlong)iVar2 * 8) = lVar1;
        local_90 = local_90 + 1;
        iVar2 = local_90;
      }
      uVar5 = uVar5 - 1;
      plVar4 = plVar4 + 1;
    } while (uVar5 != 0);
  }
  FUN_143718760(param_1);
  local_90 = 0;
  if (-1 < (int)local_8c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_98,8,local_8c & 0x3fffffff);
  }
  return;
}



// FUNCTION 143712f60 FUN_143712f60 body=51 status=ok
// SIG undefined FUN_143712f60(void)

ulonglong FUN_143712f60(longlong param_1,longlong param_2)

{
  short *psVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  LPVOID pvVar8;
  LPVOID pvVar9;
  LPVOID lpTlsValue;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  LPVOID pvVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  byte bStackX_18;
  undefined **ppuStack_330;
  longlong lStack_328;
  longlong lStack_320;
  undefined8 uStack_318;
  undefined ***pppuStack_310;
  uint uStack_308;
  undefined4 auStack_300 [2];
  undefined4 *puStack_2f8;
  undefined1 *puStack_2f0;
  uint uStack_2e8;
  uint uStack_2e4;
  undefined1 auStack_2e0 [128];
  undefined1 *puStack_260;
  int iStack_258;
  uint uStack_254;
  undefined1 auStack_250 [528];
  
  if (*(short *)(param_2 + 4) == -1) {
    return 0xffff;
  }
  if (*(int *)(param_1 + 0x36c) == 0) {
    uVar15 = FUN_14370f8d0();
    return uVar15;
  }
  if (*(int *)(param_1 + 0x36c) == 1) {
    uVar15 = FUN_1437100d0();
    return uVar15;
  }
  pvVar8 = TlsGetValue(DAT_146b7bf70);
  if (pvVar8 == (LPVOID)0x0) {
    pvVar8 = DAT_146b7bf68;
  }
  FUN_143703aa0(pvVar8);
  pvVar9 = TlsGetValue(DAT_146b8198c);
  uVar11 = *(undefined8 *)(param_1 + 8);
  lpTlsValue = TlsGetValue(DAT_146b81f60);
  if ((lpTlsValue == (LPVOID)0x0) ||
     (*(longlong *)((longlong)lpTlsValue + 0x140) != param_1 + -0x18)) {
    FUN_140520750(uVar11,pvVar9);
    iVar16 = *(int *)(*(longlong *)(param_1 + 0x238) +
                     (longlong)(*(int *)(param_1 + 0x240) + -1) * 4);
    iVar6 = iVar16 + 1;
    iVar5 = *(int *)(param_1 + 0x34);
    if (*(int *)(param_1 + 0x34) < iVar6) {
      iVar5 = iVar6;
    }
    uVar10 = 0;
    *(int *)(param_1 + 0x34) = iVar5;
    *(int *)(param_1 + 0x240) = *(int *)(param_1 + 0x240) + -1;
    lpTlsValue = *(LPVOID *)(param_1 + 0x38 + (longlong)iVar16 * 8);
    *(LPVOID *)((longlong)lpTlsValue + 0x18) = pvVar9;
    if (pvVar9 != (LPVOID)0x0) {
      uVar10 = *(undefined8 *)((longlong)pvVar9 + 8);
    }
    *(undefined8 *)((longlong)lpTlsValue + 0x20) = uVar10;
    *(undefined4 *)((longlong)lpTlsValue + 0xc) = 1;
    TlsSetValue(DAT_146b81f60,lpTlsValue);
    if (*(int *)(param_1 + 0x36c) == 2) {
      uVar7 = FUN_1437195f0();
      *(undefined4 *)((longlong)lpTlsValue + 0x160) = uVar7;
    }
    FOutputDevice::Serialize(uVar11,pvVar9);
  }
  else {
    uVar10 = 0;
    if (*(LPVOID *)((longlong)lpTlsValue + 0x18) != pvVar9) {
      FUN_140520750(uVar11,pvVar9);
      *(LPVOID *)((longlong)lpTlsValue + 0x18) = pvVar9;
      if (pvVar9 != (LPVOID)0x0) {
        uVar10 = *(undefined8 *)((longlong)pvVar9 + 8);
      }
      *(undefined8 *)((longlong)lpTlsValue + 0x20) = uVar10;
      FOutputDevice::Serialize(uVar11,pvVar9);
    }
    *(int *)((longlong)lpTlsValue + 0xc) = *(int *)((longlong)lpTlsValue + 0xc) + 1;
  }
  lVar19 = 0;
  ppuStack_330 = hkDefaultTaskQueueEx::ExecutionContext::vftable;
  uStack_308 = 0;
  uStack_318 = *(undefined8 *)((longlong)lpTlsValue + 0x18);
  pppuStack_310 = &ppuStack_330;
  puStack_260 = auStack_250;
  bStackX_18 = 0;
  iStack_258 = 0;
  uStack_254 = 0x80000040;
  lStack_320 = param_1;
  do {
    uVar11 = 0;
    FUN_143719ca0(*(undefined8 *)((longlong)lpTlsValue + 0x158),0x8db8cde);
    if (pvVar9 != (LPVOID)0x0) {
      uVar11 = *(undefined8 *)((longlong)pvVar9 + 8);
    }
    uVar10 = *(undefined8 *)(param_1 + 8);
    FUN_140520750(uVar10,pvVar9);
    lVar2 = *(longlong *)((longlong)lpTlsValue + 0x148);
    *(undefined8 *)((longlong)lpTlsValue + 0x20) = uVar11;
    if ((param_2 != 0) && (lVar19 == 0)) {
      uVar11 = FUN_143703a50();
      if (*(uint *)(param_2 + 0x48) == (*(uint *)(param_2 + 0x4c) & 0x3fffffff)) {
        FUN_14370c460(uVar11,param_2 + 0x40,8);
      }
      *(longlong *)(*(longlong *)(param_2 + 0x40) + (longlong)*(int *)(param_2 + 0x48) * 8) = lVar2;
      *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + 1;
    }
    if (pvVar9 != (LPVOID)0x0) {
      FUN_14370d620(pvVar9,"LtGetNextTask","StFinishPrevious");
    }
    uVar20 = 0;
    uVar15 = uVar20;
    if (lVar19 != 0) {
      if ((*(char *)(lVar19 + 10) != '\0') && (*(short *)(lVar19 + 6) != 0)) {
        *(undefined2 *)(lVar19 + 6) = 0;
        if (0 < *(int *)(param_1 + 0x28)) {
          plVar12 = (longlong *)(*(longlong *)(param_1 + 0x20) + 8);
          do {
            if (lVar19 == *plVar12) {
              FUN_143712fa0(param_1 + 0x20);
              break;
            }
            uVar17 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar17;
            plVar12 = plVar12 + 2;
          } while ((int)uVar17 < *(int *)(param_1 + 0x28));
        }
      }
      *(short *)(lVar19 + 8) = *(short *)(lVar19 + 8) + -1;
      uVar15 = 0;
      if ((uint)*(ushort *)(lVar19 + 6) + (uint)*(ushort *)(lVar19 + 8) == 0) {
        iVar16 = *(int *)(lVar19 + 0x28);
        puStack_2f0 = auStack_2e0;
        uStack_2e8 = 0;
        uStack_2e4 = 0x80000010;
        if (0 < (longlong)iVar16) {
          do {
            lVar21 = *(longlong *)(*(longlong *)(lVar19 + 0x20) + uVar20 * 8);
            psVar1 = (short *)(lVar21 + 4);
            *psVar1 = *psVar1 + -1;
            if (*psVar1 == 0) {
              if (uStack_2e8 == (uStack_2e4 & 0x3fffffff)) {
                FUN_14370c460(&PTR_vftable_1467f0638,&puStack_2f0,8);
              }
              *(longlong *)(puStack_2f0 + (longlong)(int)uStack_2e8 * 8) = lVar21;
              uStack_2e8 = uStack_2e8 + 1;
            }
            uVar20 = uVar20 + 1;
          } while ((longlong)uVar20 < (longlong)iVar16);
        }
        *(undefined4 *)(lVar19 + 0x28) = 0;
        if (*(longlong *)(lVar19 + 0x18) != 0) {
          lVar21 = 0;
          for (uVar15 = *(ulonglong *)(lVar19 + 0x18); uVar15 != 0; uVar15 = uVar15 >> 1) {
            if (((uVar15 & 1) != 0) &&
               (*(char *)(*(longlong *)(param_1 + 0x38 + lVar21 * 8) + 0x10) != '\0')) {
              *(undefined1 *)(*(longlong *)(param_1 + 0x38 + lVar21 * 8) + 0x10) = 0;
              lVar3 = *(longlong *)(param_1 + 0x38 + lVar21 * 8);
              FUN_143718bb0(lVar3 + 0x150,*(undefined8 *)(lVar3 + 0x158),
                            *(undefined4 *)(lVar3 + 0x160));
            }
            lVar21 = lVar21 + 1;
          }
          *(undefined8 *)(lVar19 + 0x18) = 0;
        }
        uVar20 = 0;
        uVar15 = uVar20;
        uVar13 = uVar20;
        if (0 < (int)uStack_2e8) {
          do {
            puStack_2f8 = *(undefined4 **)(puStack_2f0 + uVar20);
            uVar15 = (ulonglong)((int)uVar15 + (uint)*(ushort *)((longlong)puStack_2f8 + 6));
            auStack_300[0] = *puStack_2f8;
            FUN_1437120f0(param_1 + 0x20,auStack_300);
            uVar17 = (int)uVar13 + 1;
            uVar20 = uVar20 + 8;
            uVar13 = (ulonglong)uVar17;
          } while ((int)uVar17 < (int)uStack_2e8);
        }
        *(undefined2 *)(lVar19 + 4) = 0xffff;
        uStack_2e8 = 0;
        if (-1 < (int)uStack_2e4) {
          FUN_143702e10(&PTR_vftable_1467f0638,puStack_2f0,8,uStack_2e4 & 0x3fffffff);
        }
        puStack_2f0 = (undefined1 *)0x0;
        uStack_2e4 = 0x80000000;
      }
    }
    lVar19 = 0;
    if (pvVar9 != (LPVOID)0x0) {
      FUN_14370d800(pvVar9,"StGetNext");
    }
    lVar21 = *(longlong *)(param_1 + 8);
    while( true ) {
      if ((param_2 != 0) && (*(short *)(param_2 + 4) == -1)) goto LAB_14370f5a4;
      if (*(int *)(param_1 + 0x28) != 0) break;
      if (*(char *)(param_1 + 0x348) == '\0') {
        if (param_2 != 0) goto LAB_14370f4ec;
      }
      else {
        if (param_2 == 0) goto LAB_14370f5a4;
LAB_14370f4ec:
        lVar3 = (ulonglong)(*(uint *)((longlong)lpTlsValue + 8) >> 6) * 8;
        *(ulonglong *)(lVar3 + 0x18 + param_2) =
             *(ulonglong *)(lVar3 + 0x18 + param_2) |
             1L << (*(uint *)((longlong)lpTlsValue + 8) & 0x3f);
      }
      *(undefined1 *)((longlong)lpTlsValue + 0x10) = 1;
      FUN_143718b00(lVar21 + 8);
      FUN_143718960((longlong)lpTlsValue + 0x150,*(undefined8 *)((longlong)lpTlsValue + 0x158),
                    *(undefined4 *)((longlong)lpTlsValue + 0x160));
      FUN_143718980(lVar21 + 8);
      if (param_2 != 0) {
        lVar3 = (ulonglong)(*(uint *)((longlong)lpTlsValue + 8) >> 6) * 8;
        *(ulonglong *)(lVar3 + 0x18 + param_2) =
             *(ulonglong *)(lVar3 + 0x18 + param_2) &
             ~(1L << (*(uint *)((longlong)lpTlsValue + 8) & 0x3f));
      }
    }
    lVar19 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8);
    *(short *)(lVar19 + 6) = *(short *)(lVar19 + 6) + -1;
    *(short *)(lVar19 + 8) = *(short *)(lVar19 + 8) + 1;
    uStack_308 = (uint)*(ushort *)(lVar19 + 6);
    if (uStack_308 == 0) {
      FUN_143712fa0((longlong *)(param_1 + 0x20),0);
    }
LAB_14370f5a4:
    if (pvVar9 != (LPVOID)0x0) {
      FUN_14370d7a0(pvVar9,&DAT_145b8dd34);
    }
    uVar20 = 0;
    if ((param_2 != 0) && (lVar19 == 0)) {
      if (0 < *(int *)(param_2 + 0x48)) {
        plVar12 = *(longlong **)(param_2 + 0x40);
        uVar13 = uVar20;
        uVar18 = uVar20;
        do {
          iVar16 = (int)uVar13;
          if (*plVar12 == lVar2) goto LAB_14370f5fa;
          uVar13 = (ulonglong)(iVar16 + 1);
          uVar18 = uVar18 + 1;
          plVar12 = plVar12 + 1;
        } while ((longlong)uVar18 < (longlong)*(int *)(param_2 + 0x48));
      }
      iVar16 = -1;
      uVar18 = 0xffffffffffffffff;
LAB_14370f5fa:
      *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + -1;
      if (*(int *)(param_2 + 0x48) != iVar16) {
        *(undefined8 *)(*(longlong *)(param_2 + 0x40) + uVar18 * 8) =
             *(undefined8 *)(*(longlong *)(param_2 + 0x40) + (longlong)*(int *)(param_2 + 0x48) * 8)
        ;
      }
    }
    if (*(char *)((longlong)lpTlsValue + 0x28) != '\0') {
      if (pvVar9 != (LPVOID)0x0) {
        FUN_14370d450(pvVar9);
      }
      *(undefined1 *)((longlong)lpTlsValue + 0x28) = 0;
    }
    uVar13 = uVar20;
    if (pvVar9 != (LPVOID)0x0) {
      uVar13 = *(ulonglong *)((longlong)pvVar9 + 8);
    }
    *(ulonglong *)((longlong)lpTlsValue + 0x20) = uVar13;
    if (0 < (int)uVar15) {
      if (lVar19 != 0) {
        uVar15 = (ulonglong)((int)uVar15 - 1);
      }
      if (0 < *(int *)(param_1 + 0x34)) {
        plVar12 = (longlong *)(param_1 + 0x38);
        uVar13 = uVar20;
        do {
          if ((int)uVar15 < 1) break;
          lVar21 = *plVar12;
          if (*(char *)(lVar21 + 0x10) != '\0') {
            *(undefined1 *)(lVar21 + 0x10) = 0;
            *(longlong *)(puStack_260 + (longlong)iStack_258 * 8) = lVar21;
            iStack_258 = iStack_258 + 1;
            uVar15 = (ulonglong)((int)uVar15 - 1);
          }
          uVar17 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar17;
          plVar12 = plVar12 + 1;
        } while ((int)uVar17 < *(int *)(param_1 + 0x34));
      }
    }
    FOutputDevice::Serialize(uVar10,pvVar9);
    FUN_143719ca0(*(undefined8 *)((longlong)lpTlsValue + 0x158),0xb011ac3e);
    if (iStack_258 != 0) {
      uVar15 = uVar20;
      if (0 < iStack_258) {
        do {
          lVar21 = *(longlong *)(puStack_260 + uVar20);
          FUN_143718bb0(lVar21 + 0x150,*(undefined8 *)(lVar21 + 0x158),
                        *(undefined4 *)(lVar21 + 0x160));
          uVar17 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar17;
          uVar20 = uVar20 + 8;
        } while ((int)uVar17 < iStack_258);
      }
      iStack_258 = 0;
    }
    FUN_143719ca0(*(undefined8 *)((longlong)lpTlsValue + 0x158),0xf0e3c62c);
    if (lVar19 == 0) {
      FUN_143719ca0(*(undefined8 *)((longlong)lpTlsValue + 0x158),0x77bbddcf);
      *(int *)((longlong)lpTlsValue + 0xc) = *(int *)((longlong)lpTlsValue + 0xc) + -1;
      if (*(int *)((longlong)lpTlsValue + 0xc) < 1) {
        FUN_140520750(*(undefined8 *)(param_1 + 8),0);
        *(undefined8 *)((longlong)lpTlsValue + 0x18) = 0;
        *(undefined8 *)((longlong)lpTlsValue + 0x20) = 0;
        *(undefined1 *)((longlong)lpTlsValue + 0x28) = 0;
        *(undefined4 *)(*(longlong *)(param_1 + 0x238) + (longlong)*(int *)(param_1 + 0x240) * 4) =
             *(undefined4 *)((longlong)lpTlsValue + 8);
        *(int *)(param_1 + 0x240) = *(int *)(param_1 + 0x240) + 1;
        TlsSetValue(DAT_146b81f60,(LPVOID)0x0);
        FOutputDevice::Serialize(*(undefined8 *)(param_1 + 8),0);
      }
      FUN_143719ca0(*(undefined8 *)((longlong)lpTlsValue + 0x158),0x51ba5d33);
      uVar11 = FUN_143703a50();
      iStack_258 = 0;
      if (-1 < (int)uStack_254) {
        FUN_143702e10(uVar11,puStack_260,8,uStack_254 & 0x3fffffff);
      }
      ppuStack_330 = hkTask::ExecutionContext::vftable;
      puStack_260 = (undefined1 *)0x0;
      uStack_254 = 0x80000000;
      FUN_143703a60(pvVar8);
      return (ulonglong)bStackX_18;
    }
    if ((pvVar9 != (LPVOID)0x0) &&
       (puVar4 = *(undefined8 **)((longlong)pvVar9 + 8),
       puVar4 < *(undefined8 **)((longlong)pvVar9 + 0x18))) {
      *(undefined8 **)((longlong)pvVar9 + 8) = puVar4 + 2;
      *puVar4 = &DAT_145b40b70;
      *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(lVar19 + 0xc);
    }
    *(longlong *)((longlong)lpTlsValue + 0x148) = lVar19;
    if (*(code **)(param_1 + 0x378) != (code *)0x0) {
      (**(code **)(param_1 + 0x378))();
    }
    lStack_328 = lVar19 + 0x10;
    (**(code **)(**(longlong **)(lVar19 + 0x58) + 0x10))(*(longlong **)(lVar19 + 0x58),&lStack_320);
    if (*(code **)(param_1 + 0x380) != (code *)0x0) {
      (**(code **)(param_1 + 0x380))();
    }
    *(longlong *)((longlong)lpTlsValue + 0x148) = lVar2;
    if ((pvVar9 != (LPVOID)0x0) &&
       (puVar4 = *(undefined8 **)((longlong)pvVar9 + 8),
       puVar4 < *(undefined8 **)((longlong)pvVar9 + 0x18))) {
      *(undefined8 **)((longlong)pvVar9 + 8) = puVar4 + 2;
      *puVar4 = &DAT_145b40b70;
      *(undefined4 *)(puVar4 + 1) = 0;
    }
    bStackX_18 = 1;
    pvVar14 = TlsGetValue(DAT_146b7bf70);
    if (pvVar14 == (LPVOID)0x0) {
      pvVar14 = DAT_146b7bf68;
    }
    FUN_143703840(pvVar14);
    FUN_143719ca0(*(undefined8 *)((longlong)lpTlsValue + 0x158),0xe52d5b60);
  } while( true );
}



// FUNCTION 143712fa0 FUN_143712fa0 body=75 status=ok
// SIG undefined FUN_143712fa0(void)

ulonglong FUN_143712fa0(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint *puVar14;
  uint *puVar15;
  longlong lVar16;
  
  uVar11 = (int)param_1[1] - 1;
  if (param_2 == uVar11) {
    *(uint *)(param_1 + 1) = uVar11;
    return (ulonglong)uVar11;
  }
  puVar14 = (uint *)((longlong)(int)param_2 * 0x10 + *param_1);
  puVar15 = (uint *)((longlong)(int)uVar11 * 0x10 + *param_1);
  uVar11 = *puVar14;
  uVar3 = *puVar15;
  uVar5 = puVar15[1];
  uVar6 = puVar15[2];
  uVar7 = puVar15[3];
  *puVar14 = *puVar15;
  puVar14[1] = uVar5;
  puVar14[2] = uVar6;
  puVar14[3] = uVar7;
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  if (uVar11 < uVar3) {
    while( true ) {
      uVar11 = (int)(param_2 - 1) >> 1;
      if ((int)uVar11 < 0) {
        return (ulonglong)param_2;
      }
      lVar4 = *param_1;
      lVar13 = (longlong)(int)param_2;
      lVar16 = (longlong)(int)uVar11;
      if (*(uint *)(lVar4 + lVar13 * 0x10) < *(uint *)(lVar4 + lVar16 * 0x10)) break;
      puVar1 = (undefined8 *)(lVar4 + lVar16 * 0x10);
      uVar8 = puVar1[1];
      puVar2 = (undefined8 *)(lVar4 + lVar13 * 0x10);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + lVar13 * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar8;
      puVar1 = (undefined8 *)(lVar4 + lVar16 * 0x10);
      *puVar1 = uVar9;
      puVar1[1] = uVar10;
      param_2 = uVar11;
    }
    return (ulonglong)param_2;
  }
  uVar12 = FUN_143712550();
  return uVar12;
}



// FUNCTION 143712ff0 FUN_143712ff0 body=204 status=ok
// SIG undefined FUN_143712ff0(void)

void FUN_143712ff0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar6;
  ulonglong uVar5;
  
  uVar3 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    plVar6 = (longlong *)(param_1 + 0x50);
    uVar5 = uVar3;
    do {
      lVar1 = *plVar6;
      if (*(int *)(lVar1 + 0x38) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x18) + 0x10))
                  (param_1 + 0x18,*(undefined8 *)(lVar1 + 0x30),*(int *)(lVar1 + 0x38),8);
        *(undefined4 *)(lVar1 + 0x38) = 0;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      *(undefined8 *)(lVar1 + 0x18) = 0;
      plVar6 = plVar6 + 1;
      *(undefined8 *)(lVar1 + 0x20) = 0;
    } while ((int)uVar4 < *(int *)(param_1 + 0x4c));
  }
  uVar5 = uVar3;
  if (0 < *(int *)(param_1 + 600)) {
    do {
      iVar2 = (int)uVar3;
      uVar4 = iVar2 + 1;
      uVar3 = (ulonglong)uVar4;
      *(int *)(uVar5 + *(longlong *)(param_1 + 0x250)) = (*(int *)(param_1 + 600) - iVar2) + -1;
      uVar5 = uVar5 + 4;
    } while ((int)uVar4 < *(int *)(param_1 + 600));
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  FUN_1437127f0(*(undefined8 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x30) = 1;
  *(undefined1 *)(param_1 + 0x360) = 0;
  return;
}



// FUNCTION 1437130c0 FUN_1437130c0 body=16 status=ok
// SIG undefined FUN_1437130c0(void)

void FUN_1437130c0(undefined8 param_1,longlong param_2,undefined2 param_3,int param_4)

{
  *(undefined2 *)(param_2 + 6) = param_3;
  *(bool *)(param_2 + 10) = param_4 == 1;
  return;
}



// FUNCTION 1437130d0 FUN_1437130d0 body=759 status=ok
// SIG undefined FUN_1437130d0(void)

void FUN_1437130d0(longlong param_1,longlong *param_2,uint param_3,int param_4,int param_5)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  LPVOID pvVar7;
  LPVOID pvVar8;
  undefined8 uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  uint local_260 [2];
  uint *local_258;
  undefined1 *local_250;
  int local_248;
  uint local_244;
  undefined1 local_240 [520];
  
  if (param_3 != 0) {
    uVar15 = (ulonglong)param_3;
    pvVar7 = TlsGetValue(DAT_146b8198c);
    if ((((*(int *)(param_1 + 0x36c) == 2) &&
         ((pvVar8 = TlsGetValue(DAT_146b81f60), pvVar8 == (LPVOID)0x0 ||
          (*(longlong *)((longlong)pvVar8 + 0x140) != param_1 + -0x18)))) || (pvVar7 == (LPVOID)0x0)
        ) || (*(ulonglong *)((longlong)pvVar7 + 0x18) <= *(ulonglong *)((longlong)pvVar7 + 8))) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_14370d140(pvVar7);
    }
    plVar10 = param_2;
    uVar11 = uVar15;
    if (0 < (int)param_3) {
      do {
        *(undefined4 *)(*plVar10 + 0xc) = uVar5;
        uVar11 = uVar11 - 1;
        plVar10 = (longlong *)((longlong)plVar10 + (longlong)param_5);
      } while (uVar11 != 0);
    }
    local_250 = local_240;
    local_248 = 0;
    local_244 = 0x80000040;
    FUN_140520750(*(undefined8 *)(param_1 + 8));
    iVar13 = *(int *)(param_1 + 0x18);
    uVar6 = iVar13 + param_3;
    if (0x7fffff < uVar6) {
      iVar13 = 1;
      uVar6 = param_3 + 1;
    }
    iVar14 = 0;
    *(uint *)(param_1 + 0x18) = uVar6;
    if (0 < (int)param_3) {
      do {
        puVar2 = (uint *)*param_2;
        param_2 = (longlong *)((longlong)param_2 + (longlong)param_5);
        iVar4 = iVar13;
        if (param_4 == 0) {
          iVar4 = -iVar13;
        }
        uVar6 = iVar4 + 0x800000U | (uint)*(byte *)((longlong)puVar2 + 0xb) << 0x18;
        puVar1 = puVar2 + 1;
        *(short *)puVar1 = (short)*puVar1 + -1;
        *puVar2 = uVar6;
        if ((short)*puVar1 == 0) {
          local_260[0] = uVar6;
          local_258 = puVar2;
          FUN_1437120f0(param_1 + 0x20,local_260);
          iVar14 = iVar14 + (uint)*(ushort *)((longlong)puVar2 + 6);
        }
        iVar13 = iVar13 + 1;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    iVar13 = 0;
    if (0 < *(int *)(param_1 + 0x34)) {
      plVar10 = (longlong *)(param_1 + 0x38);
      do {
        if (iVar14 < 1) break;
        lVar12 = *plVar10;
        if (*(char *)(lVar12 + 0x10) != '\0') {
          *(undefined1 *)(lVar12 + 0x10) = 0;
          *(longlong *)(local_250 + (longlong)local_248 * 8) = lVar12;
          local_248 = local_248 + 1;
          iVar14 = iVar14 + -1;
        }
        iVar13 = iVar13 + 1;
        plVar10 = plVar10 + 1;
      } while (iVar13 < *(int *)(param_1 + 0x34));
    }
    FOutputDevice::Serialize(*(undefined8 *)(param_1 + 8));
    if (*(int *)(param_1 + 0x36c) == 0) {
      if ((local_248 != 0) && (iVar13 = 0, 0 < local_248)) {
        lVar12 = 0;
        do {
          hkSemaphore::release(*(longlong *)(local_250 + lVar12) + 0x150,1);
          iVar13 = iVar13 + 1;
          lVar12 = lVar12 + 8;
        } while (iVar13 < local_248);
      }
    }
    else if (*(int *)(param_1 + 0x36c) == 1) {
      if ((local_248 != 0) && (iVar13 = 0, 0 < local_248)) {
        lVar12 = 0;
        do {
          LOCK();
          if (*(int *)(*(longlong *)(local_250 + lVar12) + 0x180) == 0) {
            *(int *)(*(longlong *)(local_250 + lVar12) + 0x180) = 1;
          }
          UNLOCK();
          iVar13 = iVar13 + 1;
          lVar12 = lVar12 + 8;
        } while (iVar13 < local_248);
      }
    }
    else if ((local_248 != 0) && (iVar13 = 0, 0 < local_248)) {
      lVar12 = 0;
      do {
        lVar3 = *(longlong *)(local_250 + lVar12);
        FUN_143718bb0(lVar3 + 0x150,*(undefined8 *)(lVar3 + 0x158),*(undefined4 *)(lVar3 + 0x160));
        iVar13 = iVar13 + 1;
        lVar12 = lVar12 + 8;
      } while (iVar13 < local_248);
    }
    uVar9 = FUN_143703a50();
    local_248 = 0;
    if (-1 < (int)local_244) {
      FUN_143702e10(uVar9,local_250,8,local_244 & 0x3fffffff);
    }
  }
  return;
}



// FUNCTION 1437133d0 FUN_1437133d0 body=74 status=ok
// SIG undefined FUN_1437133d0(void)

int FUN_1437133d0(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  while( true ) {
    iVar7 = param_2 + -1 >> 1;
    if (iVar7 < 0) {
      return param_2;
    }
    lVar3 = *param_1;
    lVar8 = (longlong)param_2;
    lVar9 = (longlong)iVar7;
    if (*(uint *)(lVar3 + lVar8 * 0x10) < *(uint *)(lVar3 + lVar9 * 0x10)) break;
    puVar1 = (undefined8 *)(lVar3 + lVar9 * 0x10);
    uVar4 = puVar1[1];
    puVar2 = (undefined8 *)(lVar3 + lVar8 * 0x10);
    uVar5 = *puVar2;
    uVar6 = puVar2[1];
    puVar2 = (undefined8 *)(lVar3 + lVar8 * 0x10);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar1 = (undefined8 *)(lVar3 + lVar9 * 0x10);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    param_2 = iVar7;
  }
  return param_2;
}



// FUNCTION 143713420 FUN_143713420 body=125 status=ok
// SIG undefined FUN_143713420(void)

undefined8 FUN_143713420(longlong *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  
  if (*param_1 == 0) {
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar1 + 0x58),0x78);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_14370e9d0(lVar2,0,0);
    }
    if (lVar2 != *param_1) {
      if (*param_1 != 0) {
        FUN_14370c150();
      }
      *param_1 = lVar2;
    }
    return 0;
  }
  return 0;
}



// FUNCTION 1437134a0 FUN_1437134a0 body=114 status=ok
// SIG undefined FUN_1437134a0(void)

undefined8 * FUN_1437134a0(undefined8 *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  FUN_1437159a0(param_1,0);
  *param_1 = hkErrStream::vftable;
  lVar1 = param_2 + -0x40 + (longlong)param_3;
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_14376e8f0(lVar1,param_2,param_3 + -0x40,1);
  }
  if (lVar1 != param_1[3]) {
    if (param_1[3] != 0) {
      FUN_14370c150();
    }
    param_1[3] = lVar1;
  }
  return param_1;
}



// FUNCTION 143713520 FUN_143713520 body=23 status=ok
// SIG undefined FUN_143713520(void)

void FUN_143713520(undefined8 *param_1)

{
  param_1[3] = 0;
  *param_1 = hkErrStream::vftable;
  FUN_143715a60();
  return;
}



// FUNCTION 143713540 FUN_143713540 body=136 status=ok
// SIG undefined FUN_143713540(void)

longlong FUN_143713540(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143713520();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x20;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1437135d0 FUN_1437135d0 body=77 status=ok
// SIG undefined FUN_1437135d0(void)

void FUN_1437135d0(undefined8 param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((*param_2 >> 0x17 & 1) != 0) {
    puVar1 = (undefined8 *)FUN_1437143d0(param_2,0x800000);
    if (puVar1 != (undefined8 *)0x0) {
      uVar2 = *puVar1;
      goto LAB_143713602;
    }
  }
  uVar2 = 0;
LAB_143713602:
  puVar1 = (undefined8 *)FUN_1437143d0(param_1,0x800000);
  *puVar1 = uVar2;
  return;
}



// FUNCTION 143713620 FUN_143713620 body=43 status=ok
// SIG undefined FUN_143713620(void)

void FUN_143713620(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_2[5];
  fVar5 = param_2[6];
  fVar6 = param_2[7];
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = param_2[3];
  fVar10 = param_2[9];
  fVar11 = param_2[10];
  fVar12 = param_2[0xb];
  *param_1 = fVar2 * param_2[4] + fVar1 * *param_2 + fVar3 * param_2[8];
  param_1[1] = fVar2 * fVar4 + fVar1 * fVar7 + fVar3 * fVar10;
  param_1[2] = fVar2 * fVar5 + fVar1 * fVar8 + fVar3 * fVar11;
  param_1[3] = fVar2 * fVar6 + fVar1 * fVar9 + fVar3 * fVar12;
  return;
}



// FUNCTION 143713650 FUN_143713650 body=122 status=ok
// SIG undefined FUN_143713650(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143713650(float *param_1,float *param_2,float *param_3)

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
  
  fVar12 = *param_2;
  fVar13 = param_2[1];
  fVar1 = param_2[2];
  fVar2 = param_2[3];
  fVar3 = *param_3;
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  fVar7 = fVar12 * fVar3;
  fVar8 = fVar13 * fVar4;
  fVar9 = fVar1 * fVar5;
  fVar10 = (fVar8 + fVar7 + fVar9) * fVar12 + (fVar2 * fVar2 - _DAT_1467f07e0) * fVar3 +
           (fVar5 * fVar13 - fVar1 * fVar4) * fVar2;
  fVar11 = (fVar8 + fVar7 + fVar9) * fVar13 + (fVar2 * fVar2 - fRam00000001467f07e4) * fVar4 +
           (fVar3 * fVar1 - fVar12 * fVar5) * fVar2;
  fVar12 = (fVar8 + fVar7 + fVar9) * fVar1 + (fVar2 * fVar2 - fRam00000001467f07e8) * fVar5 +
           (fVar4 * fVar12 - fVar13 * fVar3) * fVar2;
  fVar13 = (fVar8 + fVar7 + fVar9) * fVar2 + (fVar2 * fVar2 - fRam00000001467f07ec) * fVar6 +
           (fVar6 * fVar2 - fVar2 * fVar6) * fVar2;
  *param_1 = fVar10 + fVar10;
  param_1[1] = fVar11 + fVar11;
  param_1[2] = fVar12 + fVar12;
  param_1[3] = fVar13 + fVar13;
  return;
}



// FUNCTION 1437136d0 FUN_1437136d0 body=95 status=ok
// SIG undefined FUN_1437136d0(void)

void FUN_1437136d0(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_2[8];
  fVar5 = param_2[9];
  fVar6 = param_2[10];
  fVar7 = param_2[0xb];
  fVar8 = param_2[4];
  fVar9 = param_2[5];
  fVar10 = param_2[6];
  *param_1 = param_2[1] * fVar2 + fVar1 * *param_2 + fVar3 * param_2[2];
  param_1[1] = fVar9 * fVar2 + fVar1 * fVar8 + fVar3 * fVar10;
  param_1[2] = fVar5 * fVar2 + fVar1 * fVar4 + fVar3 * fVar6;
  param_1[3] = fVar7 * fVar2 + fVar1 * fVar5 + fVar3 * fVar7;
  return;
}



// FUNCTION 143713730 FUN_143713730 body=99 status=ok
// SIG undefined FUN_143713730(void)

void FUN_143713730(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = param_2[8];
  fVar2 = param_2[9];
  fVar3 = param_2[10];
  fVar4 = param_2[0xb];
  fVar5 = param_2[4];
  fVar6 = param_2[5];
  fVar7 = param_2[6];
  fVar8 = *param_3 - param_2[0xc];
  fVar9 = param_3[1] - param_2[0xd];
  fVar10 = param_3[2] - param_2[0xe];
  *param_1 = param_2[1] * fVar9 + fVar8 * *param_2 + param_2[2] * fVar10;
  param_1[1] = fVar6 * fVar9 + fVar8 * fVar5 + fVar7 * fVar10;
  param_1[2] = fVar2 * fVar9 + fVar8 * fVar1 + fVar3 * fVar10;
  param_1[3] = fVar4 * fVar9 + fVar8 * fVar2 + fVar4 * fVar10;
  return;
}



// FUNCTION 1437137a0 FUN_1437137a0 body=130 status=ok
// SIG undefined FUN_1437137a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437137a0(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = param_2[4];
  fVar2 = param_2[5];
  fVar3 = param_2[6];
  fVar9 = param_2[7];
  fVar10 = *param_3 * param_2[8];
  fVar11 = param_3[1] * param_2[9];
  fVar12 = param_3[2] * param_2[10];
  fVar13 = param_3[3] * param_2[0xb];
  fVar4 = fVar1 * fVar10;
  fVar5 = fVar2 * fVar11;
  fVar6 = fVar3 * fVar12;
  fVar7 = (fVar5 + fVar4 + fVar6) * fVar1 + (fVar9 * fVar9 - _DAT_1467f07e0) * fVar10 +
          (fVar12 * fVar2 - fVar3 * fVar11) * fVar9;
  fVar8 = (fVar5 + fVar4 + fVar6) * fVar2 + (fVar9 * fVar9 - fRam00000001467f07e4) * fVar11 +
          (fVar10 * fVar3 - fVar1 * fVar12) * fVar9;
  fVar10 = (fVar5 + fVar4 + fVar6) * fVar3 + (fVar9 * fVar9 - fRam00000001467f07e8) * fVar12 +
           (fVar11 * fVar1 - fVar2 * fVar10) * fVar9;
  fVar9 = (fVar5 + fVar4 + fVar6) * fVar9 + (fVar9 * fVar9 - fRam00000001467f07ec) * fVar13 +
          (fVar13 * fVar9 - fVar9 * fVar13) * fVar9;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *param_1 = fVar7 + fVar7 + *param_2;
  param_1[1] = fVar8 + fVar8 + fVar1;
  param_1[2] = fVar10 + fVar10 + fVar2;
  param_1[3] = fVar9 + fVar9 + fVar3;
  return;
}



// FUNCTION 143713830 FUN_143713830 body=47 status=ok
// SIG undefined FUN_143713830(void)

void FUN_143713830(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_2[5];
  fVar5 = param_2[6];
  fVar6 = param_2[7];
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = param_2[3];
  fVar10 = param_2[9];
  fVar11 = param_2[10];
  fVar12 = param_2[0xb];
  fVar13 = param_2[0xd];
  fVar14 = param_2[0xe];
  fVar15 = param_2[0xf];
  *param_1 = fVar2 * param_2[4] + fVar1 * *param_2 + fVar3 * param_2[8] + param_2[0xc];
  param_1[1] = fVar2 * fVar4 + fVar1 * fVar7 + fVar3 * fVar10 + fVar13;
  param_1[2] = fVar2 * fVar5 + fVar1 * fVar8 + fVar3 * fVar11 + fVar14;
  param_1[3] = fVar2 * fVar6 + fVar1 * fVar9 + fVar3 * fVar12 + fVar15;
  return;
}



// FUNCTION 143713860 CAkRTPCSubscriberNode body=22 status=ok
// SIG undefined CAkRTPCSubscriberNode(void)

undefined8 * CAkRTPCSubscriberNode::CAkRTPCSubscriberNode(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkLifoAllocator::vftable;
  return param_1;
}



// FUNCTION 143713880 FUN_143713880 body=55 status=ok
// SIG undefined FUN_143713880(void)

undefined8 FUN_143713880(undefined8 param_1,byte param_2)

{
  FUN_143702b50();
  if ((param_2 & 5) == 5) {
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1437138c0 FUN_1437138c0 body=301 status=ok
// SIG undefined FUN_1437138c0(void)

longlong FUN_1437138c0(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 < param_2) {
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x20);
    *piVar1 = *piVar1 + 1;
                    /* WARNING: Could not recover jumptable at 0x0001437138f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar5 = (**(code **)(**(longlong **)(param_1 + 0x40) + 8))
                      (*(longlong **)(param_1 + 0x40),param_2);
    return lVar5;
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  if (lVar5 == 0) {
    if (*(int *)(*(longlong *)(param_1 + 8) + 0x18) < 2) {
      plVar6 = *(longlong **)(param_1 + 0x48);
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x20);
      *piVar1 = *piVar1 + 1;
      plVar6 = *(longlong **)(param_1 + 0x38);
      iVar3 = *(int *)(param_1 + 0x10);
    }
    lVar5 = (**(code **)(*plVar6 + 8))(plVar6,iVar3);
  }
  else {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  plVar6 = *(longlong **)(param_1 + 8);
  if ((int)plVar6[3] != 0) {
    if (*(uint *)(plVar6 + 1) == (*(uint *)((longlong)plVar6 + 0xc) & 0x3fffffff)) {
      FUN_14370c460(*(undefined8 *)(param_1 + 0x48),plVar6,0x18);
    }
    puVar2 = (undefined8 *)(*plVar6 + (longlong)(int)plVar6[1] * 0x18);
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    puVar2[1] = lVar5;
    *puVar2 = *(undefined8 *)(param_1 + 0x18);
    *(int *)(puVar2 + 2) = *(int *)(*(longlong *)(param_1 + 8) + 0x18) + -1;
    *(longlong *)(param_1 + 0x28) = lVar5;
  }
  lVar4 = *(longlong *)(param_1 + 8);
  *(longlong *)(param_1 + 0x20) = *(int *)(param_1 + 0x10) + lVar5;
  *(longlong *)(param_1 + 0x18) = lVar5 + param_2;
  if (*(uint *)(lVar4 + 0x18) == (*(uint *)(lVar4 + 0x1c) & 0x3fffffff)) {
    FUN_14370c460(*(undefined8 *)(param_1 + 0x48),lVar4 + 0x10,8);
  }
  *(longlong *)(*(longlong *)(lVar4 + 0x10) + (longlong)*(int *)(lVar4 + 0x18) * 8) = lVar5;
  *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
  return lVar5;
}



// FUNCTION 1437139f0 FUN_1437139f0 body=43 status=ok
// SIG undefined FUN_1437139f0(void)

void FUN_1437139f0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  
  uVar2 = param_2 + 0xfU & 0xfffffff0;
  uVar1 = (longlong)(int)uVar2 + *(longlong *)(param_1 + 0x18);
  if (((int)uVar2 <= *(int *)(param_1 + 0x10)) && (uVar1 <= *(ulonglong *)(param_1 + 0x20))) {
    *(ulonglong *)(param_1 + 0x18) = uVar1;
    return;
  }
  FUN_1437138c0(param_1,uVar2);
  return;
}



// FUNCTION 143713a20 FUN_143713a20 body=45 status=ok
// SIG undefined FUN_143713a20(void)

void FUN_143713a20(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_3 + 0xfU & 0xfffffff0;
  if (((param_3 <= *(int *)(param_1 + 0x10)) &&
      ((int)uVar1 + param_2 == *(longlong *)(param_1 + 0x18))) &&
     (*(longlong *)(param_1 + 0x28) != param_2)) {
    *(longlong *)(param_1 + 0x18) = param_2;
    return;
  }
  FUN_143713ff0(param_1,param_2,uVar1);
  return;
}



// FUNCTION 143713a50 FUN_143713a50 body=52 status=ok
// SIG undefined FUN_143713a50(void)

longlong FUN_143713a50(longlong param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = *param_2 + 0xf & 0xfffffff0;
  *param_2 = uVar1;
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar3 = (int)uVar1 + lVar2;
  if (((int)uVar1 <= *(int *)(param_1 + 0x10)) && (uVar3 <= *(ulonglong *)(param_1 + 0x20))) {
    *(ulonglong *)(param_1 + 0x18) = uVar3;
    return lVar2;
  }
  lVar2 = FUN_1437138c0(param_1,uVar1);
  return lVar2;
}



// FUNCTION 143713a90 FUN_143713a90 body=167 status=ok
// SIG undefined FUN_143713a90(void)

longlong FUN_143713a90(longlong *param_1,longlong param_2,int param_3,uint *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_3 + 0xfU & 0xfffffff0;
  uVar3 = *param_4 + 0xf & 0xfffffff0;
  *param_4 = uVar3;
  if (((int)uVar4 + param_2 == param_1[3]) &&
     (uVar2 = (int)uVar3 + param_2, uVar2 <= (ulonglong)param_1[4])) {
    param_1[3] = uVar2;
    lVar1 = param_2;
  }
  else {
    lVar1 = (**(code **)(*param_1 + 8))(param_1);
    uVar3 = *param_4;
    if ((int)uVar4 < (int)*param_4) {
      uVar3 = uVar4;
    }
    FGenericPlatformString::Memcpy(lVar1,param_2,(longlong)(int)uVar3);
    (**(code **)(*param_1 + 0x10))(param_1,param_2,uVar4);
  }
  return lVar1;
}



// FUNCTION 143713b40 FUN_143713b40 body=155 status=ok
// SIG undefined FUN_143713b40(void)

void FUN_143713b40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_143702b60(param_4,0x28,1);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x80000000;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0x80000000;
    *(undefined4 *)(puVar1 + 4) = 0;
    puVar2 = puVar1;
  }
  *(undefined8 **)(param_1 + 8) = puVar2;
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined8 *)(param_1 + 0x40) = param_3;
  *(undefined4 *)(param_1 + 0x10) = param_5;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = param_4;
  return;
}



// FUNCTION 143713be0 FUN_143713be0 body=437 status=ok
// SIG undefined FUN_143713be0(void)

void FUN_143713be0(longlong param_1,ulonglong param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  
  plVar2 = *(longlong **)(param_1 + 8);
  iVar11 = (int)plVar2[3] + -1;
  iVar8 = -1;
  if (-1 < iVar11) {
    lVar10 = (longlong)iVar11;
    plVar5 = (longlong *)(plVar2[2] + lVar10 * 8);
    do {
      iVar8 = iVar11;
      if (param_2 - *plVar5 < (ulonglong)(longlong)*(int *)(param_1 + 0x10)) break;
      iVar11 = iVar11 + -1;
      plVar5 = plVar5 + -1;
      lVar10 = lVar10 + -1;
      iVar8 = -1;
    } while (-1 < lVar10);
  }
  iVar11 = 0;
  uVar7 = (longlong)param_3 + param_2;
  iVar9 = (int)plVar2[1] + -1;
  if (-1 < iVar9) {
    lVar10 = (longlong)iVar9;
    puVar6 = (ulonglong *)(*plVar2 + lVar10 * 0x18);
    do {
      if ((int)puVar6[2] == iVar8) {
        if (param_2 == puVar6[1]) {
          puVar6[1] = uVar7;
          goto LAB_143713d1e;
        }
        if (uVar7 == *puVar6) {
          *puVar6 = param_2;
          goto LAB_143713d1e;
        }
        if (*puVar6 < param_2) goto LAB_143713c8c;
      }
      else if ((int)puVar6[2] < iVar8) {
LAB_143713c8c:
        iVar11 = iVar9 + 1;
        break;
      }
      iVar9 = iVar9 + -1;
      puVar6 = puVar6 + -3;
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
  }
  uVar4 = *(uint *)((longlong)plVar2 + 0xc) & 0x3fffffff;
  lVar10 = plVar2[1];
  iVar9 = (int)lVar10 + 1;
  if (((int)uVar4 < iVar9) && ((int)uVar4 < iVar9)) {
    iVar3 = iVar9;
    if (iVar9 < (int)(uVar4 * 2)) {
      iVar3 = uVar4 * 2;
    }
    FUN_14370c310(*(undefined8 *)(param_1 + 0x48),plVar2,iVar3,0x18);
  }
  lVar1 = (longlong)iVar11 * 0x18;
  FUN_143732890(*plVar2 + lVar1 + 0x18,*plVar2 + lVar1,(longlong)((int)lVar10 - iVar11) * 0x18);
  lVar10 = *plVar2;
  *(int *)(plVar2 + 1) = iVar9;
  *(ulonglong *)(lVar1 + lVar10) = param_2;
  *(ulonglong *)(lVar1 + 8 + lVar10) = uVar7;
  *(int *)(lVar1 + 0x10 + lVar10) = iVar8;
LAB_143713d1e:
  plVar2 = *(longlong **)(param_1 + 8);
  if ((int)plVar2[1] == 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0x28) =
       *(undefined8 *)(*plVar2 + 8 + (longlong)((int)plVar2[1] + -1) * 0x18);
  return;
}



// FUNCTION 143713da0 FUN_143713da0 body=315 status=ok
// SIG undefined FUN_143713da0(void)

void FUN_143713da0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = *(longlong *)(param_1 + 0x18);
  iVar4 = *(int *)(*(longlong *)(param_1 + 8) + 8) + -1;
  lVar5 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar6 = lVar5 * 0x18;
    do {
      lVar2 = **(longlong **)(param_1 + 8);
      if (*(longlong *)(lVar6 + 8 + lVar2) != lVar7) break;
      lVar7 = *(longlong *)(lVar6 + lVar2);
      lVar6 = lVar6 + -0x18;
      plVar3 = *(longlong **)(param_1 + 8) + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  iVar4 = *(int *)(*(longlong *)(param_1 + 8) + 0x18);
  while ((1 < iVar4 &&
         ((lVar5 = *(longlong *)(param_1 + 8),
          lVar7 == *(longlong *)
                    (*(longlong *)(lVar5 + 0x10) + (longlong)(*(int *)(lVar5 + 0x18) + -1) * 8) ||
          ((ulonglong)(longlong)*(int *)(param_1 + 0x10) <
           (ulonglong)
           (lVar7 - *(longlong *)
                     (*(longlong *)(lVar5 + 0x10) + (longlong)(*(int *)(lVar5 + 0x18) + -1) * 8)))))
         )) {
    if (*(longlong *)(param_1 + 0x30) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
      piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x20);
      *piVar1 = *piVar1 + -1;
    }
    lVar5 = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x30) =
         *(undefined8 *)(*(longlong *)(lVar5 + 0x10) + (longlong)(*(int *)(lVar5 + 0x18) + -1) * 8);
    *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + -1;
    iVar4 = *(int *)(*(longlong *)(param_1 + 8) + 0x18);
  }
  plVar3 = *(longlong **)(param_1 + 8);
  *(longlong *)(param_1 + 0x18) = lVar7;
  if ((int)plVar3[3] == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = (longlong)*(int *)(param_1 + 0x10) +
            *(longlong *)(plVar3[2] + (longlong)((int)plVar3[3] + -1) * 8);
  }
  *(longlong *)(param_1 + 0x20) = lVar7;
  if ((int)plVar3[1] == 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0x28) =
       *(undefined8 *)(*plVar3 + 8 + (longlong)((int)plVar3[1] + -1) * 0x18);
  return;
}



// FUNCTION 143713ee0 FUN_143713ee0 body=262 status=ok
// SIG undefined FUN_143713ee0(void)

void FUN_143713ee0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))
              (*(longlong **)(param_1 + 0x48),**(undefined8 **)(*(longlong *)(param_1 + 8) + 0x10),
               *(undefined4 *)(param_1 + 0x10));
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))
              (*(longlong **)(param_1 + 0x48),*(longlong *)(param_1 + 0x30),
               *(undefined4 *)(param_1 + 0x10));
  }
  lVar1 = *(longlong *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined4 *)(lVar1 + 0x18) = 0;
  if (-1 < (int)*(uint *)(lVar1 + 0x1c)) {
    FUN_143702e10(uVar2,*(undefined8 *)(lVar1 + 0x10),8,*(uint *)(lVar1 + 0x1c) & 0x3fffffff);
  }
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined4 *)(lVar1 + 0x1c) = 0x80000000;
  puVar3 = *(undefined8 **)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined4 *)(puVar3 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)puVar3 + 0xc)) {
    FUN_143702e10(uVar2,*puVar3,0x18,*(uint *)((longlong)puVar3 + 0xc) & 0x3fffffff);
  }
  *puVar3 = 0;
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0x80000000;
  FUN_143702c60(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 8),0x28);
  *(undefined8 *)(param_1 + 8) = 0;
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x38);
    param_2[1] = *(undefined8 *)(param_1 + 0x40);
    param_2[2] = *(undefined8 *)(param_1 + 0x48);
  }
  return;
}



// FUNCTION 143713ff0 FUN_143713ff0 body=64 status=ok
// SIG undefined FUN_143713ff0(void)

void FUN_143713ff0(longlong param_1,longlong param_2,int param_3)

{
  int *piVar1;
  
  if (param_2 == 0) {
    return;
  }
  if (param_3 <= *(int *)(param_1 + 0x10)) {
    if ((int)(param_3 + 0xfU & 0xfffffff0) + param_2 == *(longlong *)(param_1 + 0x18)) {
      *(longlong *)(param_1 + 0x18) = param_2;
      FUN_143713da0();
      return;
    }
    FUN_143713be0();
    return;
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x20);
  *piVar1 = *piVar1 + -1;
                    /* WARNING: Could not recover jumptable at 0x00014371402b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))();
  return;
}



// FUNCTION 143714030 FUN_143714030 body=12 status=ok
// SIG undefined FUN_143714030(void)

void FUN_143714030(undefined8 param_1,undefined8 param_2)

{
  FUN_142b7ebc0(param_1,param_2,&DAT_1467e8420);
  return;
}



// FUNCTION 143714040 FUN_143714040 body=30 status=ok
// SIG undefined FUN_143714040(void)

undefined8 * FUN_143714040(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_143715450();
  return param_1;
}



// FUNCTION 143714060 FUN_143714060 body=30 status=ok
// SIG undefined FUN_143714060(void)

undefined8 * FUN_143714060(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_1437154b0();
  return param_1;
}



// FUNCTION 143714080 DeclIterAll body=21 status=ok
// SIG undefined DeclIterAll(void)

undefined8 *
hkReflect::DeclIterAll::DeclIterAll(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[2] = param_3;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = param_2;
  return param_1;
}



// FUNCTION 1437140a0 FUN_1437140a0 body=30 status=ok
// SIG undefined FUN_1437140a0(void)

undefined8 * FUN_1437140a0(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_1437154d0();
  return param_1;
}



// FUNCTION 1437140c0 FUN_1437140c0 body=30 status=ok
// SIG undefined FUN_1437140c0(void)

undefined8 * FUN_1437140c0(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_143715530();
  return param_1;
}



// FUNCTION 1437140e0 FUN_1437140e0 body=89 status=ok
// SIG undefined FUN_1437140e0(void)

undefined8 * FUN_1437140e0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1437151f0(param_2);
  }
  *param_1 = uVar1;
  if (param_2 != 0) {
    uVar1 = FUN_143715320(param_2);
    param_1[1] = uVar1;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 143714140 FUN_143714140 body=171 status=ok
// SIG undefined FUN_143714140(void)

ulonglong FUN_143714140(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar1 = *param_1;
  if ((1 < uVar1) && (uVar6 = *param_2, 1 < uVar6)) {
    iVar3 = FUN_143715270(param_2);
    iVar4 = FUN_143715270(param_1);
    uVar7 = 0;
    if (iVar4 == iVar3) {
      uVar5 = uVar7;
      if (uVar6 != 0) {
        uVar5 = FUN_143714de0(uVar6);
      }
      uVar6 = uVar7;
      if (uVar1 != 0) {
        uVar6 = FUN_143714de0(uVar1);
      }
      cVar2 = FUN_143714870(uVar6,uVar5);
      if (cVar2 != '\0') {
        uVar7 = 1;
      }
    }
    return uVar7;
  }
  return (ulonglong)(uVar1 == *param_2);
}



// FUNCTION 1437141f0 FUN_1437141f0 body=204 status=ok
// SIG undefined FUN_1437141f0(void)

ulonglong FUN_1437141f0(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  
  uVar1 = *param_1;
  if ((1 < uVar1) && (1 < *param_2)) {
    uVar8 = 0;
    uVar4 = uVar8;
    if (*param_2 != 0) {
      uVar4 = FUN_143714de0();
    }
    uVar5 = uVar8;
    if (uVar1 != 0) {
      uVar5 = FUN_143714de0(uVar1);
    }
    cVar2 = FUN_143714870(uVar5,uVar4);
    if (cVar2 != '\0') {
      uVar6 = FUN_1437151c0(param_2);
      uVar7 = FUN_1437151c0(param_1);
      iVar3 = hkString::strCmp(uVar7,uVar6);
      if (iVar3 == 0) {
        uVar8 = 1;
      }
    }
    return uVar8;
  }
  return (ulonglong)(uVar1 == *param_2);
}



// FUNCTION 1437142c0 FUN_1437142c0 body=267 status=ok
// SIG undefined FUN_1437142c0(void)

void FUN_1437142c0(longlong *param_1,char *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  longlong lVar6;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [16];
  
  pcVar4 = (char *)*param_1;
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "unnamed";
  }
  FUN_143745710(param_2,pcVar4,0xffffffff);
  puVar1 = (undefined8 *)param_1[1];
  if ((puVar1 != (undefined8 *)0x0) && (*(short *)(puVar1 + 1) != 0)) {
    FUN_143745710(param_2,&DAT_145b8e138,0xffffffff);
    iVar5 = 0;
    if (*(short *)(puVar1 + 1) != 0) {
      lVar6 = 0;
      puVar2 = puVar1;
      do {
        if (0 < lVar6) {
          FUN_143745710(param_2,&DAT_145b036e8,0xffffffff);
        }
        if (*(char *)puVar2[3] == 't') {
          puVar3 = (undefined4 *)FUN_1437140e0(local_18,puVar2[2]);
          local_28 = *puVar3;
          uStack_24 = puVar3[1];
          uStack_20 = puVar3[2];
          uStack_1c = puVar3[3];
          FUN_1437142c0(&local_28,param_2);
        }
        else {
          hkStringBuf::printf(param_2,&DAT_145af3910);
        }
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + 1;
        puVar2 = puVar2 + 2;
      } while (iVar5 < (int)(uint)*(ushort *)(puVar1 + 1));
    }
    FUN_143745710(param_2,&DAT_145b8e144,0xffffffff);
  }
  return;
}



// FUNCTION 1437143d0 FUN_1437143d0 body=73 status=ok
// SIG undefined FUN_1437143d0(void)

uint * FUN_1437143d0(uint *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_2 - 1U & *param_1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x55555555);
  uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
  return param_1 + ((ulonglong)(((uVar1 >> 4) + uVar1 & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2) * 2;
}



// FUNCTION 143714420 FUN_143714420 body=100 status=ok
// SIG undefined FUN_143714420(void)

ulonglong * FUN_143714420(ulonglong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  
  do {
    uVar1 = *param_1;
    if (((longlong)param_2 & uVar1) != 0) {
      uVar2 = param_2 - 1U & (uint)uVar1;
      uVar2 = uVar2 - (uVar2 >> 1 & 0x55555555);
      uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
      return param_1 + (ulonglong)(((uVar2 >> 4) + uVar2 & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2;
    }
  } while (((uVar1 & 1) == 0) && (param_1 = (ulonglong *)param_1[1], param_1 != (ulonglong *)0x0));
  return (ulonglong *)0x0;
}



// FUNCTION 143714490 FUN_143714490 body=93 status=ok
// SIG undefined FUN_143714490(void)

ulonglong * FUN_143714490(ulonglong *param_1,int param_2)

{
  uint uVar1;
  
  do {
    if ((*param_1 & (longlong)param_2) != 0) {
      uVar1 = param_2 - 1U & (uint)*param_1;
      uVar1 = uVar1 - (uVar1 >> 1 & 0x55555555);
      uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
      return param_1 + (ulonglong)(((uVar1 >> 4) + uVar1 & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2;
    }
    param_1 = (ulonglong *)param_1[1];
  } while (param_1 != (ulonglong *)0x0);
  return (ulonglong *)0x0;
}



// FUNCTION 1437144f0 FUN_1437144f0 body=198 status=ok
// SIG undefined FUN_1437144f0(void)

ulonglong FUN_1437144f0(longlong *param_1)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  undefined8 *in_RAX;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  
  puVar4 = (uint *)param_1[3];
  puVar5 = (uint *)0x0;
  puVar1 = (uint *)param_1[2];
  puVar6 = puVar5;
  if (puVar4 != puVar1) {
    do {
      in_RAX = (undefined8 *)(ulonglong)*puVar4;
      if (((((*puVar4 >> 0x1a & 1) != 0) &&
           (in_RAX = (undefined8 *)FUN_1437143d0(puVar4,0x4000000), in_RAX != (undefined8 *)0x0)) &&
          (puVar2 = (uint *)*in_RAX, puVar2 != (uint *)0x0)) &&
         (in_RAX = (undefined8 *)
                   (longlong)((int)(short)*puVar2 + (int)*(short *)((longlong)puVar2 + 2)),
         (int)((longlong)in_RAX * 8 >> 3) != 0)) {
        puVar5 = puVar2;
        puVar6 = puVar4;
      }
      puVar4 = *(uint **)(puVar4 + 2);
    } while (puVar4 != puVar1);
    if (puVar6 != (uint *)0x0) {
      iVar3 = (int)(short)*puVar5 + (int)*(short *)((longlong)puVar5 + 2);
      param_1[2] = (longlong)puVar6;
      *param_1 = (longlong)(puVar5 + 2);
      param_1[1] = (longlong)(puVar5 + 2 + (longlong)iVar3 * 2);
      return CONCAT71((int7)(int3)((uint)iVar3 >> 8),1);
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1437145c0 FUN_1437145c0 body=43 status=ok
// SIG undefined FUN_1437145c0(void)

undefined8 FUN_1437145c0(void)

{
  undefined1 local_38 [32];
  byte local_18;
  
  FUN_143764090(local_38);
  DAT_146b81fa0 = (local_18 & 6) != 0;
  FUN_14370c000(local_38);
  return 0;
}



// FUNCTION 1437145f0 FUN_1437145f0 body=298 status=ok
// SIG undefined FUN_1437145f0(void)

ulonglong FUN_1437145f0(longlong *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar3 = *param_2;
  if (*param_1 == 0) {
    if (lVar3 != 0) {
      return 0xffffffff;
    }
LAB_143714650:
    uVar4 = 0;
  }
  else {
    if (lVar3 != 0) {
      if ((*param_1 != lVar3) && (uVar4 = hkString::strCmp(), (int)uVar4 != 0)) {
        return uVar4;
      }
      lVar3 = param_1[1];
      lVar9 = param_2[1];
      if (lVar3 == lVar9) goto LAB_143714650;
      if (lVar3 == 0) {
        return (ulonglong)-(uint)(lVar9 != 0);
      }
      if (lVar9 != 0) {
        uVar5 = *(uint *)(lVar3 + 8) & 0xffff;
        uVar6 = *(uint *)(lVar9 + 8) & 0xffff;
        if (uVar5 < uVar6) {
          return 0xffffffff;
        }
        if (uVar5 <= uVar6) {
          lVar10 = 0;
          if (uVar5 != 0) {
            puVar8 = (undefined8 *)(lVar3 + 0x18);
            lVar9 = lVar9 - lVar3;
            do {
              puVar1 = puVar8 + -1;
              if (puVar1 == (ulonglong *)0x0) {
                if (lVar9 + -8 + (longlong)puVar8 != 0) {
                  return 0xffffffff;
                }
              }
              else {
                puVar7 = (ulonglong *)(lVar9 + -8 + (longlong)puVar8);
                if (puVar7 == (ulonglong *)0x0) goto LAB_143714627;
                cVar2 = *(char *)*puVar8;
                if (cVar2 < **(char **)(lVar9 + (longlong)puVar8)) {
                  return 0xffffffff;
                }
                if (**(char **)(lVar9 + (longlong)puVar8) < cVar2) goto LAB_143714627;
                if (cVar2 == 't') {
                  uVar4 = hkReflect::Type::compareName(*puVar1,*puVar7);
                  if ((int)uVar4 != 0) {
                    return uVar4;
                  }
                }
                else if (cVar2 == 'v') {
                  if (*puVar1 < *puVar7) {
                    return 0xffffffff;
                  }
                  if (*puVar1 != *puVar7) goto LAB_143714627;
                }
              }
              lVar10 = lVar10 + 1;
              puVar8 = puVar8 + 2;
              if ((longlong)(ulonglong)uVar5 <= lVar10) {
                return 0;
              }
            } while( true );
          }
          goto LAB_143714650;
        }
      }
    }
LAB_143714627:
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 143714720 compareName body=88 status=ok
// SIG undefined compareName(void)

undefined8 hkReflect::Type::compareName(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_1 == param_2) {
    return 0;
  }
  puVar1 = (undefined4 *)FUN_143714f80(param_2,local_28);
  local_48 = *puVar1;
  uStack_44 = puVar1[1];
  uStack_40 = puVar1[2];
  uStack_3c = puVar1[3];
  puVar1 = (undefined4 *)FUN_143714f80(param_1,local_18);
  local_38 = *puVar1;
  uStack_34 = puVar1[1];
  uStack_30 = puVar1[2];
  uStack_2c = puVar1[3];
  uVar2 = FUN_1437145f0(&local_38,&local_48);
  return uVar2;
}



// FUNCTION 143714780 FUN_143714780 body=129 status=ok
// SIG undefined FUN_143714780(void)

short * FUN_143714780(longlong param_1,int param_2,int param_3,longlong *param_4)

{
  short *psVar1;
  int iVar2;
  
  iVar2 = (param_2 + param_3) * 8;
  psVar1 = (short *)(**(code **)(*param_4 + 8))(param_4,iVar2 + 8);
  psVar1[1] = (short)param_3;
  *psVar1 = (short)param_2;
  psVar1[2] = (short)param_3 + (short)param_2;
  if (param_1 == 0) {
    FUN_14370c720(psVar1 + 4,0,(longlong)iVar2);
  }
  else {
    FGenericPlatformString::Memcpy(psVar1 + 4,param_1);
  }
  return psVar1;
}



// FUNCTION 143714810 FUN_143714810 body=89 status=ok
// SIG undefined FUN_143714810(void)

undefined8 * FUN_143714810(int param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = FUN_1437152e0(param_1);
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,iVar1);
  FUN_14370c720(puVar2,0,(longlong)iVar1);
  *puVar2 = 0;
  puVar2[1] = (longlong)param_1;
  return puVar2;
}



// FUNCTION 143714870 FUN_143714870 body=154 status=ok
// SIG undefined FUN_143714870(void)

bool FUN_143714870(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1 == param_2) {
    return true;
  }
  plVar1 = (longlong *)FUN_14374a2a0();
  plVar4 = (longlong *)FUN_14374a2a0(param_2);
  if (plVar1 == (longlong *)0x0) {
    if (plVar4 == (longlong *)0x0) {
      lVar2 = hkReflect::TypeDetail::skipDecorators(param_1);
      lVar3 = hkReflect::TypeDetail::skipDecorators(param_2);
      return lVar2 == lVar3;
    }
  }
  else if (plVar4 != (longlong *)0x0) {
    return *plVar1 == *plVar4;
  }
  return false;
}



// FUNCTION 143714910 FUN_143714910 body=194 status=ok
// SIG undefined FUN_143714910(void)

undefined8 FUN_143714910(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  ushort *puVar2;
  longlong lVar3;
  int iVar4;
  
  if (param_1 == param_2) {
    return 1;
  }
  puVar1 = (undefined8 *)FUN_14374a2a0();
  puVar2 = (ushort *)FUN_14374a2a0(param_2);
  if ((puVar1 != (undefined8 *)0x0) && (puVar2 != (ushort *)0x0)) {
    iVar4 = (int)((ulonglong)*puVar1 >> 0x10);
    if (((int)((ulonglong)*(undefined8 *)puVar2 >> 0x10) <= iVar4) && (iVar4 <= (int)(uint)*puVar2))
    {
      return 1;
    }
    return 0;
  }
  lVar3 = hkReflect::TypeDetail::skipDecorators(param_2);
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if (param_1 == lVar3) break;
    param_1 = *(longlong *)(param_1 + 8);
  }
  return 1;
}



// FUNCTION 1437149e0 FUN_1437149e0 body=169 status=ok
// SIG undefined FUN_1437149e0(void)

/* WARNING: Removing unreachable block (ram,0x000143714a47) */

longlong * FUN_1437149e0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  do {
    FUN_14374a4c0(&local_28,param_1,param_3);
    if (local_28 != 0) {
      *param_2 = local_28;
      param_2[1] = local_20;
      param_2[2] = local_18;
      return param_2;
    }
    if ((local_18 & 1) != 0) {
      FUN_143733a60(local_18 & 0xfffffffffffffffe);
    }
    param_1 = *(longlong *)(param_1 + 8);
  } while (param_1 != 0);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 143714a90 FUN_143714a90 body=231 status=ok
// SIG undefined FUN_143714a90(void)

undefined8 * FUN_143714a90(byte *param_1,undefined8 *param_2,longlong param_3,char param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 local_res18 [2];
  
  if (param_3 != 0) {
    for (; param_1 != (byte *)0x0; param_1 = *(byte **)(param_1 + 8)) {
      bVar2 = *param_1;
      while ((~bVar2 & 1) != 0) {
        param_1 = *(byte **)(param_1 + 8);
        bVar2 = *param_1;
      }
      plVar5 = (longlong *)FUN_143714420(param_1,0x4000000);
      if ((plVar5 != (longlong *)0x0) && (lVar6 = *plVar5, lVar6 != 0)) {
        puVar7 = (undefined8 *)(lVar6 + 8);
        puVar1 = puVar7 + *(short *)(lVar6 + 4);
        for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
          uVar3 = *puVar7;
          local_res18[0] = uVar3;
          lVar6 = FUN_1437151c0(local_res18);
          if ((lVar6 != 0) && (iVar4 = hkString::strCmp(param_3,lVar6), iVar4 == 0)) {
            *param_2 = uVar3;
            return param_2;
          }
        }
      }
      if (param_4 == '\0') break;
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 143714b80 FUN_143714b80 body=218 status=ok
// SIG undefined FUN_143714b80(void)

undefined8 * FUN_143714b80(longlong param_1,undefined8 *param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong local_38;
  longlong local_30;
  
  if (param_3 != 0) {
    for (; param_1 != 0;
        param_1 = hkReflect::TypeDetail::skipDecorators(*(undefined8 *)(param_1 + 8))) {
      FUN_143714ed0(param_1,&local_38);
      lVar1 = local_38;
      iVar4 = 0;
      iVar5 = (int)(local_30 - local_38 >> 3);
      if (0 < iVar5) {
        do {
          lVar3 = FUN_1437151c0((longlong)iVar4 * 8 + lVar1);
          if ((lVar3 != 0) && (iVar2 = hkString::strCmp(param_3,lVar3), iVar2 == 0)) {
            FUN_143714060(param_2,*(undefined8 *)((longlong)iVar4 * 8 + lVar1));
            return param_2;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar5);
      }
      if (param_4 == '\0') break;
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 143714c60 FUN_143714c60 body=218 status=ok
// SIG undefined FUN_143714c60(void)

undefined8 * FUN_143714c60(longlong param_1,undefined8 *param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong local_38;
  longlong local_30;
  
  if (param_3 != 0) {
    for (; param_1 != 0;
        param_1 = hkReflect::TypeDetail::skipDecorators(*(undefined8 *)(param_1 + 8))) {
      FUN_143714ed0(param_1,&local_38);
      lVar1 = local_38;
      iVar4 = 0;
      iVar5 = (int)(local_30 - local_38 >> 3);
      if (0 < iVar5) {
        do {
          lVar3 = FUN_1437151c0((longlong)iVar4 * 8 + lVar1);
          if ((lVar3 != 0) && (iVar2 = FUN_14370c7b0(param_3,lVar3), iVar2 == 0)) {
            FUN_143714060(param_2,*(undefined8 *)((longlong)iVar4 * 8 + lVar1));
            return param_2;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar5);
      }
      if (param_4 == '\0') break;
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 143714d40 FUN_143714d40 body=54 status=ok
// SIG undefined FUN_143714d40(void)

uint FUN_143714d40(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_143714420(param_1,0x800000);
  if (puVar1 != (undefined8 *)0x0) {
    return (uint)((ulonglong)*puVar1 >> 0x10) & 0xfff;
  }
  return 0;
}



// FUNCTION 143714d80 FUN_143714d80 body=89 status=ok
// SIG undefined FUN_143714d80(void)

longlong * FUN_143714d80(undefined8 param_1,longlong *param_2)

{
  short sVar1;
  short *psVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_143714420(param_1,0x4000000);
  if ((puVar3 != (undefined8 *)0x0) && (psVar2 = (short *)*puVar3, psVar2 != (short *)0x0)) {
    sVar1 = *psVar2;
    *param_2 = (longlong)(psVar2 + 4);
    param_2[1] = (longlong)(psVar2 + 4 + (longlong)sVar1 * 4);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 143714de0 FUN_143714de0 body=32 status=ok
// SIG undefined FUN_143714de0(void)

undefined8 FUN_143714de0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_143714420(param_1,0x200000);
  if (puVar1 != (undefined8 *)0x0) {
    return *puVar1;
  }
  return 0;
}



// FUNCTION 143714e00 FUN_143714e00 body=135 status=ok
// SIG undefined FUN_143714e00(void)

/* WARNING: Removing unreachable block (ram,0x000143714e72) */

longlong * FUN_143714e00(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = (longlong *)FUN_143714420(param_1,0x4000);
  if ((plVar1 == (longlong *)0x0) || (*plVar1 == 0)) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    *param_2 = *plVar1;
    param_2[1] = param_1;
    if (param_1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_1437151a0(param_1);
    }
    param_2[2] = uVar2;
    if ((uVar2 & 1) != 0) {
      FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 143714e90 FUN_143714e90 body=55 status=ok
// SIG undefined FUN_143714e90(void)

undefined8 FUN_143714e90(undefined8 param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  undefined1 local_18 [16];
  
  plVar1 = (longlong *)FUN_143714ed0(param_1,local_18);
  FUN_143714060(param_2,*(undefined8 *)(*plVar1 + (longlong)param_3 * 8));
  return param_2;
}



// FUNCTION 143714ed0 FUN_143714ed0 body=96 status=ok
// SIG undefined FUN_143714ed0(void)

longlong * FUN_143714ed0(undefined8 param_1,longlong *param_2)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_143714420(param_1,0x4000000);
  if ((puVar4 != (undefined8 *)0x0) && (psVar3 = (short *)*puVar4, psVar3 != (short *)0x0)) {
    sVar1 = psVar3[1];
    sVar2 = *psVar3;
    *param_2 = (longlong)(psVar3 + 4);
    param_2[1] = (longlong)(psVar3 + 4 + (longlong)((int)sVar2 + (int)sVar1) * 4);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 143714f30 FUN_143714f30 body=69 status=ok
// SIG undefined FUN_143714f30(void)

uint * FUN_143714f30(undefined8 *param_1,uint *param_2)

{
  undefined8 *puVar1;
  
  if ((*(uint *)*param_1 >> 0x14 & 1) != 0) {
    puVar1 = (undefined8 *)FUN_1437143d0((uint *)*param_1,0x100000);
    if (puVar1 != (undefined8 *)0x0) {
      *param_2 = (uint)((ulonglong)*puVar1 >> 0x10) & 0xffff;
      return param_2;
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 143714f80 FUN_143714f80 body=63 status=ok
// SIG undefined FUN_143714f80(void)

undefined8 * FUN_143714f80(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_143715320();
  uVar2 = FUN_1437151f0(param_1);
  *param_2 = uVar2;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 143714fc0 FUN_143714fc0 body=480 status=ok
// SIG undefined FUN_143714fc0(void)

undefined8 FUN_143714fc0(undefined8 param_1,char *param_2,code *param_3,code *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 *local_a8;
  undefined4 local_a0;
  int local_9c;
  undefined1 local_98 [128];
  
  if (param_3 == (code *)0x0) {
    uVar4 = FUN_1437151f0();
    FUN_1437455a0(param_2,uVar4);
    if (*(int *)(param_2 + 8) == 1) {
      FUN_1437455a0(param_2,"unnamed");
    }
  }
  else {
    (*param_3)();
  }
  plVar3 = (longlong *)FUN_143715320(param_1);
  if ((plVar3 != (longlong *)0x0) && ((short)plVar3[1] != 0)) {
    FUN_143745710(param_2,&DAT_145b8e138,0xffffffff);
    iVar5 = 0;
    if ((short)plVar3[1] != 0) {
      lVar6 = 0;
      plVar2 = plVar3;
      do {
        if (0 < lVar6) {
          FUN_143745710(param_2,&DAT_145b036e8,0xffffffff);
        }
        if (*(char *)plVar2[3] == 't') {
          lVar1 = plVar2[2];
          if (param_4 == (code *)0x0) {
            if (lVar1 == 0) {
              FUN_143745710(param_2,"(null)",0xffffffff);
            }
            else {
              local_a8 = local_98;
              local_9c = -0x7fffff80;
              local_a0 = 1;
              local_98[0] = 0;
              uVar4 = FUN_143714fc0(lVar1,&local_a8,param_3,0);
              FUN_143745710(param_2,uVar4,0xffffffff);
              local_a0 = 0;
              if (-1 < local_9c) {
                FUN_143702e10(&PTR_vftable_1467f0638,local_a8);
              }
            }
          }
          else {
            (*param_4)(lVar1,param_2);
          }
        }
        else {
          hkStringBuf::printf(param_2,&DAT_145af3910);
        }
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + 1;
        plVar2 = plVar2 + 2;
      } while (iVar5 < (int)(uint)*(ushort *)(plVar3 + 1));
    }
    FUN_143745710(param_2,&DAT_145b8e144,0xffffffff);
  }
  return *(undefined8 *)param_2;
}



// FUNCTION 1437151a0 FUN_1437151a0 body=32 status=ok
// SIG undefined FUN_1437151a0(void)

undefined8 FUN_1437151a0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_143714490(param_1,4);
  if (puVar1 != (undefined8 *)0x0) {
    return *puVar1;
  }
  return 0;
}



// FUNCTION 1437151c0 FUN_1437151c0 body=42 status=ok
// SIG undefined FUN_1437151c0(void)

undefined8 FUN_1437151c0(longlong *param_1)

{
  undefined8 *puVar1;
  
  if (*param_1 != 0) {
    puVar1 = (undefined8 *)FUN_143714420(*param_1,0x80000);
    if (puVar1 != (undefined8 *)0x0) {
      return *puVar1;
    }
  }
  return 0;
}



// FUNCTION 1437151f0 FUN_1437151f0 body=32 status=ok
// SIG undefined FUN_1437151f0(void)

undefined8 FUN_1437151f0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_143714420(param_1,8);
  if (puVar1 != (undefined8 *)0x0) {
    return *puVar1;
  }
  return 0;
}



// FUNCTION 143715210 FUN_143715210 body=42 status=ok
// SIG undefined FUN_143715210(void)

int FUN_143715210(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_143714420(param_1,0x4000000);
  if ((puVar1 != (undefined8 *)0x0) && ((short *)*puVar1 != (short *)0x0)) {
    return (int)*(short *)*puVar1;
  }
  return 0;
}



// FUNCTION 143715240 FUN_143715240 body=48 status=ok
// SIG undefined FUN_143715240(void)

int FUN_143715240(undefined8 param_1)

{
  short *psVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_143714420(param_1,0x4000000);
  if ((puVar2 != (undefined8 *)0x0) && (psVar1 = (short *)*puVar2, psVar1 != (short *)0x0)) {
    return (int)psVar1[1] + (int)*psVar1;
  }
  return 0;
}



// FUNCTION 143715270 FUN_143715270 body=49 status=ok
// SIG undefined FUN_143715270(void)

undefined2 FUN_143715270(undefined8 *param_1)

{
  undefined2 *puVar1;
  
  if ((*(uint *)*param_1 >> 0x14 & 1) != 0) {
    puVar1 = (undefined2 *)FUN_1437143d0((uint *)*param_1,0x100000);
    if (puVar1 != (undefined2 *)0x0) {
      return *puVar1;
    }
  }
  return 0;
}



// FUNCTION 1437152b0 getParentRecord body=34 status=ok
// SIG undefined getParentRecord(void)

undefined8 hkReflect::RecordType::getParentRecord(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  while ((~bVar1 & 1) != 0) {
    param_1 = *(byte **)(param_1 + 8);
    bVar1 = *param_1;
  }
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 1437152e0 FUN_1437152e0 body=7 status=ok
// SIG undefined FUN_1437152e0(void)

int FUN_1437152e0(int param_1)

{
  return (param_1 + 1) * 0x10;
}



// FUNCTION 1437152f0 FUN_1437152f0 body=42 status=ok
// SIG undefined FUN_1437152f0(void)

ulonglong FUN_1437152f0(undefined8 param_1)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_143714420(param_1,0x800000);
  if (puVar1 != (ulonglong *)0x0) {
    return *puVar1 & 0xffff;
  }
  return 0;
}



// FUNCTION 143715320 FUN_143715320 body=101 status=ok
// SIG undefined FUN_143715320(void)

ulonglong FUN_143715320(ulonglong *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  
  do {
    uVar1 = *param_1;
    if ((uVar1 >> 0x12 & 1) != 0) {
      uVar2 = (uint)uVar1 & 0x3ffff;
      uVar2 = uVar2 - (uVar2 >> 1 & 0x55555555);
      uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
      return param_1[(ulonglong)(((uVar2 >> 4) + uVar2 & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
    }
  } while (((uVar1 & 9) == 0) && (param_1 = (ulonglong *)param_1[1], param_1 != (ulonglong *)0x0));
  return 0;
}



// FUNCTION 143715390 FUN_143715390 body=116 status=ok
// SIG undefined FUN_143715390(void)

uint * FUN_143715390(ulonglong *param_1,uint *param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  do {
    uVar1 = *param_1;
    if ((uVar1 >> 0x18 & 1) == 0) {
LAB_1437153d1:
      uVar3 = 0;
    }
    else {
      puVar2 = (ulonglong *)FUN_1437143d0(param_1,0x1000000);
      if (puVar2 == (ulonglong *)0x0) goto LAB_1437153d1;
      uVar3 = *puVar2;
    }
    uVar4 = uVar4 | uVar3;
    if (((uVar1 & 1) != 0) || (param_1 = (ulonglong *)param_1[1], param_1 == (ulonglong *)0x0)) {
      *param_2 = (uint)uVar4 & 0xffff;
      return param_2;
    }
  } while( true );
}



// FUNCTION 143715410 FUN_143715410 body=32 status=ok
// SIG undefined FUN_143715410(void)

undefined8 FUN_143715410(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_143714420(param_1,0x20000000);
  if (puVar1 != (undefined8 *)0x0) {
    return *puVar1;
  }
  return 0;
}



// FUNCTION 143715430 FUN_143715430 body=31 status=ok
// SIG undefined FUN_143715430(void)

undefined4 FUN_143715430(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_143714420(param_1,0x10);
  if (puVar1 != (undefined4 *)0x0) {
    return *puVar1;
  }
  return 0;
}



// FUNCTION 143715450 FUN_143715450 body=92 status=ok
// SIG undefined FUN_143715450(void)

void FUN_143715450(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  
  if ((uint *)0x1 < param_2) {
    if (((*param_2 >> 0x14 & 1) == 0) ||
       (puVar2 = (undefined8 *)FUN_1437143d0(param_2,0x100000), puVar2 == (undefined8 *)0x0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*puVar2;
    }
    puVar3 = (uint *)0x0;
    if ((uVar1 >> 0x10 & 0x20) != 0) {
      puVar3 = param_2;
    }
    *param_1 = puVar3;
    return;
  }
  return;
}



// FUNCTION 1437154b0 FUN_1437154b0 body=28 status=ok
// SIG undefined FUN_1437154b0(void)

void FUN_1437154b0(undefined8 *param_1,uint *param_2)

{
  if (((uint *)0x1 < param_2) && ((*param_2 >> 0x14 & 1) != 0)) {
    *param_1 = param_2;
    return;
  }
  *param_1 = 0;
  return;
}



// FUNCTION 1437154d0 FUN_1437154d0 body=92 status=ok
// SIG undefined FUN_1437154d0(void)

void FUN_1437154d0(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  
  if ((uint *)0x1 < param_2) {
    if (((*param_2 >> 0x14 & 1) == 0) ||
       (puVar2 = (undefined8 *)FUN_1437143d0(param_2,0x100000), puVar2 == (undefined8 *)0x0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*puVar2;
    }
    puVar3 = (uint *)0x0;
    if ((uVar1 >> 0x10 & 0x30) != 0) {
      puVar3 = param_2;
    }
    *param_1 = puVar3;
    return;
  }
  return;
}



// FUNCTION 143715530 FUN_143715530 body=92 status=ok
// SIG undefined FUN_143715530(void)

void FUN_143715530(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  
  if ((uint *)0x1 < param_2) {
    if (((*param_2 >> 0x14 & 1) == 0) ||
       (puVar2 = (undefined8 *)FUN_1437143d0(param_2,0x100000), puVar2 == (undefined8 *)0x0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*puVar2;
    }
    puVar3 = (uint *)0x0;
    if ((uVar1 >> 0x10 & 0x10) != 0) {
      puVar3 = param_2;
    }
    *param_1 = puVar3;
    return;
  }
  return;
}



// FUNCTION 143715590 FUN_143715590 body=44 status=ok
// SIG undefined FUN_143715590(void)

uint FUN_143715590(undefined8 param_1)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_143714420(param_1,1);
  if (puVar1 != (ulonglong *)0x0) {
    return (uint)(*puVar1 >> 9) & 1;
  }
  return 0;
}



// FUNCTION 1437155c0 FUN_1437155c0 body=149 status=ok
// SIG undefined FUN_1437155c0(void)

/* WARNING: Removing unreachable block (ram,0x00014371563b) */

undefined8 * FUN_1437155c0(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  pcVar1 = (code *)FUN_14374a260();
  if (pcVar1 == (code *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return param_2;
  }
  FUN_1437490a0(&local_28,param_1);
  (*pcVar1)(local_28,param_1,1);
  *param_2 = local_28;
  param_2[1] = local_20;
  param_2[2] = local_18;
  return param_2;
}



// FUNCTION 143715660 reset body=9 status=ok
// SIG undefined reset(void)

void hkReflect::Detail::DeclsArray::reset(undefined2 *param_1,undefined2 param_2,undefined2 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



// FUNCTION 143715670 FUN_143715670 body=167 status=ok
// SIG undefined FUN_143715670(void)

void FUN_143715670(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res8;
  undefined8 local_res20;
  undefined8 **local_38;
  undefined1 *local_30;
  undefined8 *local_28;
  undefined *local_20;
  undefined8 *local_18;
  undefined *local_10;
  
  lVar1 = *(longlong *)*param_1;
  if (lVar1 != 0) {
    local_res20 = FUN_1437151c0();
    local_res8 = FUN_143714de0(lVar1);
    local_28 = &local_res8;
    local_20 = &DAT_1467dcf10;
    local_18 = &local_res20;
    local_10 = &DAT_1467f04a0;
    local_38 = &local_28;
    local_30 = &stack0xfffffffffffffff8;
    ATTLCharacterCommon::MulticastPlayOuterEmote_Implementation(param_2,"{}::{}",&local_38);
    return;
  }
  FUN_1437455a0(param_2,"(null Decl)");
  return;
}



// FUNCTION 143715720 toString body=59 status=ok
// SIG undefined toString(void)

undefined8 hkReflect::TypeName::toString(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_143745f20(param_2);
  local_18 = *param_1;
  uStack_14 = param_1[1];
  uStack_10 = param_1[2];
  uStack_c = param_1[3];
  FUN_1437142c0(&local_18,param_2);
  return *param_2;
}



// FUNCTION 143715760 FUN_143715760 body=62 status=ok
// SIG undefined FUN_143715760(void)

void FUN_143715760(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_143714030(*param_1,param_1[1]);
  if (lVar1 != 0) {
    hkReflect::TypeName::toString(lVar1,param_2);
    return;
  }
  FUN_1437455a0(param_2,"<No Type Name>");
  return;
}



// FUNCTION 1437157a0 FUN_1437157a0 body=102 status=ok
// SIG undefined FUN_1437157a0(void)

undefined * FUN_1437157a0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return &DAT_1467e2850;
  case 1:
    return &DAT_1467de268;
  case 2:
    return &DAT_1467dfe28;
  case 3:
    return &DAT_1467dd308;
  case 4:
    return &DAT_1467e0698;
  case 5:
    return &DAT_1467e0728;
  case 6:
    return &DAT_1467dd5c8;
  case 7:
    return &DAT_1467dde68;
  case 8:
    return &DAT_1467dddc8;
  default:
    return (undefined *)0x0;
  }
}



// FUNCTION 143715830 FUN_143715830 body=188 status=ok
// SIG undefined FUN_143715830(void)

undefined8 *
FUN_143715830(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  
  param_1[1] = 0;
  *param_1 = hkArrayStreamWriter::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = param_2;
  uVar4 = FUN_143703a50();
  lVar1 = param_1[3];
  param_1[4] = uVar4;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 8);
  param_1[6] = param_4;
  *(undefined4 *)(param_1 + 7) = param_3;
  iVar5 = *(int *)(lVar1 + 8) + 1;
  uVar3 = *(uint *)(lVar1 + 0xc) & 0x3fffffff;
  if ((int)uVar3 < iVar5) {
    iVar2 = uVar3 * 2;
    if (iVar5 < iVar2) {
      iVar5 = iVar2;
    }
    FUN_14370c310(uVar4,lVar1,iVar5,1);
  }
  *(undefined1 *)((longlong)(int)((longlong *)param_1[3])[1] + *(longlong *)param_1[3]) = 0;
  return param_1;
}



// FUNCTION 1437158f0 FUN_1437158f0 body=164 status=ok
// SIG undefined FUN_1437158f0(void)

undefined8 * FUN_1437158f0(undefined8 *param_1,undefined8 param_2)

{
  LPVOID pvVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkOstream::vftable;
  param_1[3] = 0;
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x40);
  if (lVar2 != 0) {
    lVar3 = FUN_143715830(lVar2,param_2,1,0);
  }
  if (lVar3 != param_1[3]) {
    if (param_1[3] != 0) {
      FUN_14370c150();
    }
    param_1[3] = lVar3;
  }
  return param_1;
}



// FUNCTION 1437159a0 FUN_1437159a0 body=60 status=ok
// SIG undefined FUN_1437159a0(void)

undefined8 * FUN_1437159a0(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  *param_1 = hkOstream::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = param_2;
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  return param_1;
}



// FUNCTION 1437159e0 FUN_1437159e0 body=117 status=ok
// SIG undefined FUN_1437159e0(void)

undefined8 * FUN_1437159e0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  param_1[1] = 0;
  *param_1 = hkOstream::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  puVar2 = (undefined8 *)FUN_143763b10(DAT_146b83e50,local_res8,param_2,3);
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  uVar1 = *puVar2;
  *puVar2 = 0;
  param_1[3] = uVar1;
  return param_1;
}



// FUNCTION 143715a60 FUN_143715a60 body=46 status=ok
// SIG undefined FUN_143715a60(void)

void FUN_143715a60(undefined8 *param_1)

{
  *param_1 = hkOstream::vftable;
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 143715a90 FUN_143715a90 body=120 status=ok
// SIG undefined FUN_143715a90(void)

longlong FUN_143715a90(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  uVar1 = *param_2;
  if ((uVar1 & 0xfffffffffffffffe) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x18);
    lVar3 = *plVar2;
    uVar4 = FUN_143716800(param_2);
    (**(code **)(lVar3 + 0x20))(plVar2,uVar1 & 0xfffffffffffffffe,uVar4);
    return param_1;
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))(*(longlong **)(param_1 + 0x18),"(null)",6);
  return param_1;
}



// FUNCTION 143715b10 FUN_143715b10 body=73 status=ok
// SIG undefined FUN_143715b10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_143715b10(longlong param_1,undefined4 param_2)

{
  undefined1 local_2738 [10024];
  undefined8 uStack_10;
  
  uStack_10 = 0x143715b1c;
  FDebug::AssertFailed(local_2738,0x2728,0x2728,&DAT_145b756e4,param_2);
  FUN_143715d70(*(undefined8 *)(param_1 + 0x18),local_2738);
  return param_1;
}



// FUNCTION 143715b60 FUN_143715b60 body=73 status=ok
// SIG undefined FUN_143715b60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_143715b60(longlong param_1,undefined4 param_2)

{
  undefined1 local_2738 [10024];
  undefined8 uStack_10;
  
  uStack_10 = 0x143715b6c;
  FDebug::AssertFailed(local_2738,0x2728,0x2728,&DAT_145af3910,param_2);
  FUN_143715d70(*(undefined8 *)(param_1 + 0x18),local_2738);
  return param_1;
}



// FUNCTION 143715bb0 URL body=27 status=ok
// SIG undefined URL(void)

longlong Electra::FHTTPResourceRequest::URL(longlong param_1)

{
  FUN_143715d70(*(undefined8 *)(param_1 + 0x18));
  return param_1;
}



// FUNCTION 143715bd0 FUN_143715bd0 body=136 status=ok
// SIG undefined FUN_143715bd0(void)

longlong FUN_143715bd0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14376eda0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x40;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 143715c60 FUN_143715c60 body=136 status=ok
// SIG undefined FUN_143715c60(void)

longlong FUN_143715c60(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143715a60();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x20;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 143715cf0 FUN_143715cf0 body=7 status=ok
// SIG undefined FUN_143715cf0(void)

undefined1 * FUN_143715cf0(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 1;
  return param_2;
}



// FUNCTION 143715d00 FUN_143715d00 body=89 status=ok
// SIG undefined FUN_143715d00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143715d00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 local_2738 [10024];
  undefined8 uStack_10;
  
  uStack_10 = 0x143715d1a;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_14370ca10(local_2738,0x2728,0x2728,param_2,&local_res18);
  FUN_143715d70(*(undefined8 *)(param_1 + 0x18),local_2738);
  return;
}



// FUNCTION 143715d60 FUN_143715d60 body=7 status=ok
// SIG undefined FUN_143715d60(void)

int FUN_143715d60(longlong param_1)

{
  return *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x28);
}



// FUNCTION 143715d70 FUN_143715d70 body=98 status=ok
// SIG undefined FUN_143715d70(void)

void FUN_143715d70(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    lVar1 = *param_1;
    uVar2 = FUN_14370c910(param_2);
                    /* WARNING: Could not recover jumptable at 0x000143715db1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x20))(param_1,param_2,uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143715dce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,"(null)",6);
  return;
}



// FUNCTION 143715de0 FUN_143715de0 body=248 status=ok
// SIG undefined FUN_143715de0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143715de0(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar2 [16];
  
  auVar2._0_8_ = *param_1 & 0x7fffffff7fffffff;
  auVar2._8_4_ = (uint)param_1[1] & 0x7fffffff;
  auVar2._12_4_ = *(uint *)((longlong)param_1 + 0xc) & 0x7fffffff;
  auVar2 = minps(_DAT_145b8e280,auVar2);
  auVar1._4_4_ = (DAT_145b8e280._4_4_ - auVar2._4_4_) * 0.5;
  auVar1._0_4_ = ((float)DAT_145b8e280 - auVar2._0_4_) * 0.5;
  auVar1._8_4_ = (DAT_145b8e280._8_4_ - auVar2._8_4_) * 0.5;
  auVar1._12_4_ = (DAT_145b8e280._12_4_ - auVar2._12_4_) * 0.5;
  sqrtps(in_XMM4,auVar1);
  return;
}



// FUNCTION 143715ee0 FUN_143715ee0 body=134 status=ok
// SIG undefined FUN_143715ee0(void)

void FUN_143715ee0(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 local_38 [3] [16];
  
  local_38[0] = divps(*param_1,*param_2);
  FUN_143715f70(local_38);
  return;
}



// FUNCTION 143715f70 FUN_143715f70 body=201 status=ok
// SIG undefined FUN_143715f70(void)

undefined8 FUN_143715f70(undefined1 (*param_1) [16])

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  undefined1 in_XMM1 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  auVar5 = *param_1;
  fVar1 = auVar5._0_4_;
  fVar2 = auVar5._4_4_;
  uVar3 = -(uint)(1.0 < ABS(fVar1));
  uVar4 = -(uint)(1.0 < ABS(fVar2));
  auVar5 = rcpps(in_XMM1,auVar5);
  fVar8 = (float)((uint)-((2.0 - auVar5._0_4_ * fVar1) * auVar5._0_4_) & uVar3 |
                 ~uVar3 & (uint)fVar1);
  fVar9 = (float)((uint)-((2.0 - auVar5._4_4_ * fVar2) * auVar5._4_4_) & uVar4 |
                 ~uVar4 & (uint)fVar2);
  fVar6 = fVar8 * fVar8;
  fVar7 = fVar9 * fVar9;
  return CONCAT44(fVar7 * fVar9 * (fVar7 * 0.0028662258 + -0.007186844) *
                  ((fVar7 + 1.7041799) * fVar7 + 2.2365003) *
                  ((fVar7 + -1.0048817) * fVar7 + 3.768408) *
                  ((fVar7 + -3.8319519) * fVar7 + 5.503148) +
                  (float)(((uint)fVar2 & 0x80000000 | 0x3fc90fdb) & uVar4) + fVar9,
                  fVar6 * fVar8 * (fVar6 * 0.0028662258 + -0.007186844) *
                  ((fVar6 + 1.7041799) * fVar6 + 2.2365003) *
                  ((fVar6 + -1.0048817) * fVar6 + 3.768408) *
                  ((fVar6 + -3.8319519) * fVar6 + 5.503148) +
                  (float)(((uint)fVar1 & 0x80000000 | 0x3fc90fdb) & uVar3) + fVar8);
}



// FUNCTION 143716040 FUN_143716040 body=270 status=ok
// SIG undefined FUN_143716040(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143716040(float *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar11 = (int)(ABS(*param_1) * 1.2732395) + 1U & 0xfffffffe;
  uVar12 = (int)(ABS(param_1[1]) * 1.2732395) + 1U & 0xfffffffe;
  uVar13 = (int)(ABS(param_1[2]) * 1.2732395) + 1U & 0xfffffffe;
  uVar14 = (int)(ABS(param_1[3]) * 1.2732395) + 1U & 0xfffffffe;
  fVar3 = (float)(int)uVar11;
  fVar4 = (float)(int)uVar12;
  fVar5 = (float)(int)uVar13;
  fVar6 = (float)(int)uVar14;
  uVar11 = -(uint)((uVar11 - 2 & 2) == 0);
  uVar12 = -(uint)((uVar12 - 2 & 2) == 0);
  uVar13 = -(uint)((uVar13 - 2 & 2) == 0);
  uVar14 = -(uint)((uVar14 - 2 & 2) == 0);
  fVar7 = fVar3 * -0.78515625 + ABS(*param_1) + fVar3 * -0.00024187565 + fVar3 * -3.774895e-08;
  fVar8 = fVar4 * -0.78515625 + ABS(param_1[1]) + fVar4 * -0.00024187565 + fVar4 * -3.774895e-08;
  fVar9 = fVar5 * -0.78515625 + ABS(param_1[2]) + fVar5 * -0.00024187565 + fVar5 * -3.774895e-08;
  fVar10 = fVar6 * -0.78515625 + ABS(param_1[3]) + fVar6 * -0.00024187565 + fVar6 * -3.774895e-08;
  fVar3 = fVar7 * fVar7;
  fVar4 = fVar8 * fVar8;
  fVar5 = fVar9 * fVar9;
  fVar6 = fVar10 * fVar10;
  auVar2._0_4_ = ~uVar11 & (uint)((((fVar3 * 2.4433157e-05 + -0.0013887316) * fVar3 + 0.041666646) *
                                   fVar3 * fVar3 - fVar3 * 0.5) + 1.0);
  auVar2._4_4_ = ~uVar12 & (uint)((((fVar4 * 2.4433157e-05 + -0.0013887316) * fVar4 + 0.041666646) *
                                   fVar4 * fVar4 - fVar4 * 0.5) + 1.0);
  auVar2._8_4_ = ~uVar13 & (uint)((((fVar5 * 2.4433157e-05 + -0.0013887316) * fVar5 + 0.041666646) *
                                   fVar5 * fVar5 - fVar5 * 0.5) + 1.0);
  auVar2._12_4_ =
       ~uVar14 & (uint)((((fVar6 * 2.4433157e-05 + -0.0013887316) * fVar6 + 0.041666646) * fVar6 *
                         fVar6 - fVar6 * 0.5) + 1.0);
  auVar1._4_4_ = (uint)(((fVar4 * -0.00019515296 + 0.008332161) * fVar4 + -0.16666655) * fVar4 *
                        fVar8 + fVar8) & uVar12;
  auVar1._0_4_ = (uint)(((fVar3 * -0.00019515296 + 0.008332161) * fVar3 + -0.16666655) * fVar3 *
                        fVar7 + fVar7) & uVar11;
  auVar1._8_4_ = (uint)(((fVar5 * -0.00019515296 + 0.008332161) * fVar5 + -0.16666655) * fVar5 *
                        fVar9 + fVar9) & uVar13;
  auVar1._12_4_ =
       (uint)(((fVar6 * -0.00019515296 + 0.008332161) * fVar6 + -0.16666655) * fVar6 * fVar10 +
             fVar10) & uVar14;
  minps(auVar2 | auVar1,_DAT_145b8e280);
  return;
}



// FUNCTION 143716150 FUN_143716150 body=304 status=ok
// SIG undefined FUN_143716150(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143716150(float *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar3 = (int)(ABS(*param_1) * 1.2732395) + 1;
  uVar4 = (int)(ABS(param_1[1]) * 1.2732395) + 1;
  uVar5 = (int)(ABS(param_1[2]) * 1.2732395) + 1;
  uVar6 = (int)(ABS(param_1[3]) * 1.2732395) + 1;
  fVar7 = (float)(int)(uVar3 & 0xfffffffe);
  fVar8 = (float)(int)(uVar4 & 0xfffffffe);
  fVar9 = (float)(int)(uVar5 & 0xfffffffe);
  fVar10 = (float)(int)(uVar6 & 0xfffffffe);
  uVar3 = -(uint)((uVar3 & 2) == 0);
  uVar4 = -(uint)((uVar4 & 2) == 0);
  uVar5 = -(uint)((uVar5 & 2) == 0);
  uVar6 = -(uint)((uVar6 & 2) == 0);
  fVar11 = fVar7 * -0.78515625 + ABS(*param_1) + fVar7 * -0.00024187565 + fVar7 * -3.774895e-08;
  fVar12 = fVar8 * -0.78515625 + ABS(param_1[1]) + fVar8 * -0.00024187565 + fVar8 * -3.774895e-08;
  fVar13 = fVar9 * -0.78515625 + ABS(param_1[2]) + fVar9 * -0.00024187565 + fVar9 * -3.774895e-08;
  fVar14 = fVar10 * -0.78515625 + ABS(param_1[3]) + fVar10 * -0.00024187565 + fVar10 * -3.774895e-08
  ;
  fVar7 = fVar11 * fVar11;
  fVar8 = fVar12 * fVar12;
  fVar9 = fVar13 * fVar13;
  fVar10 = fVar14 * fVar14;
  auVar2._0_4_ = ~uVar3 & (uint)((((fVar7 * 2.4433157e-05 + -0.0013887316) * fVar7 + 0.041666646) *
                                  fVar7 * fVar7 - fVar7 * 0.5) + 1.0);
  auVar2._4_4_ = ~uVar4 & (uint)((((fVar8 * 2.4433157e-05 + -0.0013887316) * fVar8 + 0.041666646) *
                                  fVar8 * fVar8 - fVar8 * 0.5) + 1.0);
  auVar2._8_4_ = ~uVar5 & (uint)((((fVar9 * 2.4433157e-05 + -0.0013887316) * fVar9 + 0.041666646) *
                                  fVar9 * fVar9 - fVar9 * 0.5) + 1.0);
  auVar2._12_4_ =
       ~uVar6 & (uint)((((fVar10 * 2.4433157e-05 + -0.0013887316) * fVar10 + 0.041666646) * fVar10 *
                        fVar10 - fVar10 * 0.5) + 1.0);
  auVar1._4_4_ = (uint)(((fVar8 * -0.00019515296 + 0.008332161) * fVar8 + -0.16666655) * fVar8 *
                        fVar12 + fVar12) & uVar4;
  auVar1._0_4_ = (uint)(((fVar7 * -0.00019515296 + 0.008332161) * fVar7 + -0.16666655) * fVar7 *
                        fVar11 + fVar11) & uVar3;
  auVar1._8_4_ = (uint)(((fVar9 * -0.00019515296 + 0.008332161) * fVar9 + -0.16666655) * fVar9 *
                        fVar13 + fVar13) & uVar5;
  auVar1._12_4_ =
       (uint)(((fVar10 * -0.00019515296 + 0.008332161) * fVar10 + -0.16666655) * fVar10 * fVar14 +
             fVar14) & uVar6;
  minps(auVar2 | auVar1,_DAT_145b8e280);
  return;
}



// FUNCTION 143716280 FUN_143716280 body=383 status=ok
// SIG undefined FUN_143716280(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143716280(float *param_1,uint *param_2,uint *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar9 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  uint uVar24;
  float fVar25;
  uint uVar26;
  float fVar27;
  uint uVar28;
  float fVar29;
  undefined1 auVar23 [16];
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar13 = ABS(*param_1);
  fVar14 = ABS(fVar1);
  fVar15 = ABS(fVar2);
  fVar16 = ABS(fVar3);
  uVar4 = (int)(fVar13 * 1.2732395) + 1;
  uVar5 = (int)(fVar14 * 1.2732395) + 1;
  uVar6 = (int)(fVar15 * 1.2732395) + 1;
  uVar7 = (int)(fVar16 * 1.2732395) + 1;
  fVar8 = (float)(int)(uVar4 & 0xfffffffe);
  fVar10 = (float)(int)(uVar5 & 0xfffffffe);
  fVar11 = (float)(int)(uVar6 & 0xfffffffe);
  fVar12 = (float)(int)(uVar7 & 0xfffffffe);
  fVar17 = fVar8 * -0.78515625 + fVar13 + fVar8 * -0.00024187565 + fVar8 * -3.774895e-08;
  fVar18 = fVar10 * -0.78515625 + fVar14 + fVar10 * -0.00024187565 + fVar10 * -3.774895e-08;
  fVar19 = fVar11 * -0.78515625 + fVar15 + fVar11 * -0.00024187565 + fVar11 * -3.774895e-08;
  fVar20 = fVar12 * -0.78515625 + fVar16 + fVar12 * -0.00024187565 + fVar12 * -3.774895e-08;
  fVar13 = fVar17 * fVar17;
  fVar14 = fVar18 * fVar18;
  fVar15 = fVar19 * fVar19;
  fVar16 = fVar20 * fVar20;
  fVar17 = ((fVar13 * -0.00019515296 + 0.008332161) * fVar13 + -0.16666655) * fVar13 * fVar17 +
           fVar17;
  fVar18 = ((fVar14 * -0.00019515296 + 0.008332161) * fVar14 + -0.16666655) * fVar14 * fVar18 +
           fVar18;
  fVar19 = ((fVar15 * -0.00019515296 + 0.008332161) * fVar15 + -0.16666655) * fVar15 * fVar19 +
           fVar19;
  fVar20 = ((fVar16 * -0.00019515296 + 0.008332161) * fVar16 + -0.16666655) * fVar16 * fVar20 +
           fVar20;
  uVar21 = -(uint)((uVar4 & 2) == 0);
  uVar24 = -(uint)((uVar5 & 2) == 0);
  uVar26 = -(uint)((uVar6 & 2) == 0);
  uVar28 = -(uint)((uVar7 & 2) == 0);
  fVar8 = (float)(uVar21 & (uint)fVar17);
  fVar10 = (float)(uVar24 & (uint)fVar18);
  fVar11 = (float)(uVar26 & (uint)fVar19);
  fVar12 = (float)(uVar28 & (uint)fVar20);
  fVar13 = (((fVar13 * 2.4433157e-05 + -0.0013887316) * fVar13 + 0.041666646) * fVar13 * fVar13 -
           fVar13 * 0.5) + (float)DAT_145b8e280;
  fVar14 = (((fVar14 * 2.4433157e-05 + -0.0013887316) * fVar14 + 0.041666646) * fVar14 * fVar14 -
           fVar14 * 0.5) + DAT_145b8e280._4_4_;
  fVar15 = (((fVar15 * 2.4433157e-05 + -0.0013887316) * fVar15 + 0.041666646) * fVar15 * fVar15 -
           fVar15 * 0.5) + DAT_145b8e280._8_4_;
  fVar16 = (((fVar16 * 2.4433157e-05 + -0.0013887316) * fVar16 + 0.041666646) * fVar16 * fVar16 -
           fVar16 * 0.5) + DAT_145b8e280._12_4_;
  fVar22 = (float)(~uVar21 & (uint)fVar13);
  fVar25 = (float)(~uVar24 & (uint)fVar14);
  fVar27 = (float)(~uVar26 & (uint)fVar15);
  fVar29 = (float)(~uVar28 & (uint)fVar16);
  auVar23._0_4_ = fVar22 + fVar8;
  auVar23._4_4_ = fVar25 + fVar10;
  auVar23._8_4_ = fVar27 + fVar11;
  auVar23._12_4_ = fVar29 + fVar12;
  auVar9._0_4_ = (fVar17 - fVar8) + (fVar13 - fVar22);
  auVar9._4_4_ = (fVar18 - fVar10) + (fVar14 - fVar25);
  auVar9._8_4_ = (fVar19 - fVar11) + (fVar15 - fVar27);
  auVar9._12_4_ = (fVar20 - fVar12) + (fVar16 - fVar29);
  auVar23 = minps(auVar23,_DAT_145b8e280);
  auVar9 = minps(auVar9,_DAT_145b8e280);
  *param_2 = auVar23._0_4_ ^ (uint)*param_1 & 0x80000000 ^ (uVar4 & 4) << 0x1d;
  param_2[1] = auVar23._4_4_ ^ (uint)fVar1 & 0x80000000 ^ (uVar5 & 4) << 0x1d;
  param_2[2] = auVar23._8_4_ ^ (uint)fVar2 & 0x80000000 ^ (uVar6 & 4) << 0x1d;
  param_2[3] = auVar23._12_4_ ^ (uint)fVar3 & 0x80000000 ^ (uVar7 & 4) << 0x1d;
  *param_3 = auVar9._0_4_ ^ (~((uVar4 & 0xfffffffe) - 2) & 4) << 0x1d;
  param_3[1] = auVar9._4_4_ ^ (~((uVar5 & 0xfffffffe) - 2) & 4) << 0x1d;
  param_3[2] = auVar9._8_4_ ^ (~((uVar6 & 0xfffffffe) - 2) & 4) << 0x1d;
  param_3[3] = auVar9._12_4_ ^ (~((uVar7 & 0xfffffffe) - 2) & 4) << 0x1d;
  return;
}



// FUNCTION 143716400 FUN_143716400 body=41 status=ok
// SIG undefined FUN_143716400(void)

void FUN_143716400(undefined8 param_1)

{
  undefined1 local_18 [16];
  
  FUN_14375e700(local_18,param_1);
  FUN_143716430(param_1,local_18);
  return;
}



// FUNCTION 143716430 FUN_143716430 body=145 status=ok
// SIG undefined FUN_143716430(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143716430(float *param_1,float *param_2)

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
  
  fVar4 = fRam00000001467f0898;
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar5 = param_2[2];
  fVar3 = param_2[3];
  fVar7 = fVar2 + fVar2;
  fVar8 = fVar5 + fVar5;
  fVar9 = fVar1 * (fVar1 + fVar1);
  fVar10 = _DAT_1467f0890 - fVar9;
  fVar12 = -(fVar3 * (fVar1 + fVar1));
  fVar11 = -(fVar5 * fVar8) + _DAT_1467f0890;
  fVar6 = fVar12 - -(fVar8 * fVar2);
  *param_1 = fVar11 - fVar7 * fVar2;
  param_1[1] = fVar3 * fVar8 - -(fVar7 * fVar1);
  param_1[2] = -(fVar3 * fVar7) - -(fVar8 * fVar1);
  param_1[3] = fVar6;
  fVar5 = --(fVar3 * fVar7) - -(fVar8 * fVar1);
  param_1[8] = fVar5;
  param_1[9] = fVar6;
  param_1[10] = fVar10 - fVar7 * fVar2;
  param_1[0xb] = fVar4;
  param_1[4] = -(fVar3 * fVar8) - -(fVar7 * fVar1);
  param_1[5] = fVar11 - fVar9;
  param_1[6] = -fVar12 - -(fVar8 * fVar2);
  param_1[7] = fVar5;
  return;
}



// FUNCTION 1437164d0 FUN_1437164d0 body=38 status=ok
// SIG undefined FUN_1437164d0(void)

void FUN_1437164d0(undefined8 param_1)

{
  undefined1 local_18 [16];
  
  FUN_14375e930(local_18);
  FUN_143716430(param_1,local_18);
  return;
}



// FUNCTION 143716500 FUN_143716500 body=47 status=ok
// SIG undefined FUN_143716500(void)

undefined8 FUN_143716500(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 local_18 [24];
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = (**(code **)*puVar1)(puVar1,local_18);
    return *(undefined8 *)(lVar2 + 8);
  }
  return 0;
}



// FUNCTION 143716530 FUN_143716530 body=56 status=ok
// SIG undefined FUN_143716530(void)

void FUN_143716530(longlong *param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  if (*param_1 != 0) {
    FUN_14370c150();
  }
  *param_1 = param_2;
  return;
}



// FUNCTION 143716570 FUN_143716570 body=37 status=ok
// SIG undefined FUN_143716570(void)

undefined4 *
FUN_143716570(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  FUN_1437166c0(param_3,param_5);
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1437165a0 FUN_1437165a0 body=25 status=ok
// SIG undefined FUN_1437165a0(void)

undefined4 *
FUN_1437165a0(undefined8 param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  ulonglong uVar1;
  
  uVar1 = *param_3;
  *param_2 = 0;
  *param_5 = uVar1 & 0xfffffffffffffffe;
  return param_2;
}



// FUNCTION 1437165c0 FUN_1437165c0 body=18 status=ok
// SIG undefined FUN_1437165c0(void)

undefined4 *
FUN_1437165c0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  *param_3 = param_5;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1437165e0 FUN_1437165e0 body=8 status=ok
// SIG undefined FUN_1437165e0(void)

void FUN_1437165e0(undefined8 param_1,undefined8 param_2)

{
  FUN_143716650(param_2);
  return;
}



// FUNCTION 1437165f0 FUN_1437165f0 body=41 status=ok
// SIG undefined FUN_1437165f0(void)

undefined8 * FUN_1437165f0(undefined8 *param_1,ulonglong *param_2)

{
  *param_1 = 0;
  FUN_143716770(param_1,*param_2 & 0xfffffffffffffffe,0xffffffff);
  return param_1;
}



// FUNCTION 143716620 FUN_143716620 body=34 status=ok
// SIG undefined FUN_143716620(void)

undefined8 * FUN_143716620(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  FUN_143716770(param_1,param_2,0xffffffff);
  return param_1;
}



// FUNCTION 143716650 FUN_143716650 body=11 status=ok
// SIG undefined FUN_143716650(void)

void FUN_143716650(undefined8 param_1)

{
  FUN_143716770(param_1,0,0xffffffff);
  return;
}



// FUNCTION 143716660 FUN_143716660 body=34 status=ok
// SIG undefined FUN_143716660(void)

undefined8 FUN_143716660(undefined8 param_1,ulonglong *param_2)

{
  FUN_143716770(param_1,*param_2 & 0xfffffffffffffffe,0xffffffff);
  return param_1;
}



// FUNCTION 143716690 FUN_143716690 body=33 status=ok
// SIG undefined FUN_143716690(void)

undefined8 FUN_143716690(undefined8 param_1,undefined8 *param_2)

{
  FUN_143716770(param_1,*param_2,*(int *)(param_2 + 1) + -1);
  return param_1;
}



// FUNCTION 1437166c0 FUN_1437166c0 body=27 status=ok
// SIG undefined FUN_1437166c0(void)

undefined8 FUN_1437166c0(undefined8 param_1,undefined8 param_2)

{
  FUN_143716770(param_1,param_2,0xffffffff);
  return param_1;
}



// FUNCTION 1437166e0 FUN_1437166e0 body=130 status=ok
// SIG undefined FUN_1437166e0(void)

void FUN_1437166e0(undefined8 param_1,undefined8 param_2)

{
  LPVOID pvVar1;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  undefined4 local_c;
  
  TlsGetValue(DAT_146b7bf70);
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  local_20 = FUN_143703a40(*(undefined8 *)((longlong)pvVar1 + 0x58),param_2);
  local_28 = "buffer_easyAlloc";
  local_10 = (int)param_2 - (int)local_20;
  local_18 = 0;
  local_c = 0xffffffff;
  FUN_14376f920(param_1,&local_28,1);
  return;
}



// FUNCTION 143716770 FUN_143716770 body=140 status=ok
// SIG undefined FUN_143716770(void)

void FUN_143716770(ulonglong *param_1,ulonglong param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  LPVOID pvVar3;
  
  uVar1 = *param_1;
  if (((uVar1 & 0xfffffffffffffffe) != param_2) || (param_3 != -1)) {
    if (param_2 == 0) {
      *param_1 = 0;
    }
    else if (param_3 == -1) {
      lVar2 = FUN_14370c870();
      *param_1 = lVar2 + 1;
    }
    else {
      lVar2 = FUN_14370c950(param_2,param_3);
      *param_1 = lVar2 + 1;
    }
    if ((uVar1 & 1) != 0) {
      pvVar3 = TlsGetValue(DAT_146b7bf70);
      if (pvVar3 == (LPVOID)0x0) {
        pvVar3 = DAT_146b7bf68;
      }
      FUN_1437039c0(*(undefined8 *)((longlong)pvVar3 + 0x58),uVar1 - 1);
    }
  }
  return;
}



// FUNCTION 143716800 FUN_143716800 body=16 status=ok
// SIG undefined FUN_143716800(void)

longlong FUN_143716800(ulonglong *param_1)

{
  longlong lVar1;
  
  if ((*param_1 & 0xfffffffffffffffe) == 0) {
    return 0;
  }
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)((*param_1 & 0xfffffffffffffffe) + lVar1) != '\0');
  return lVar1;
}



// FUNCTION 143716810 FUN_143716810 body=114 status=ok
// SIG undefined FUN_143716810(void)

void FUN_143716810(undefined8 *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  char *local_28;
  ulonglong local_20;
  undefined8 local_18;
  int local_10;
  undefined4 local_c;
  
  if ((*(ulonglong *)*param_1 & 1) != 0) {
    uVar1 = *(ulonglong *)*param_1 & 0xfffffffffffffffe;
    local_10 = FUN_14370c910(uVar1);
    local_28 = "buffer_hkStringPtr";
    local_10 = local_10 + 1;
    local_18 = 0;
    local_c = 0xffffffff;
    local_20 = uVar1;
    FUN_14376f920(param_2,&local_28,1);
    FUN_1437166e0(param_2,uVar1);
  }
  return;
}



// FUNCTION 143716890 FUN_143716890 body=139 status=ok
// SIG undefined FUN_143716890(void)

longlong FUN_143716890(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14376fbe0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x18;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
    }
  }
  return param_1;
}



// FUNCTION 143716920 FUN_143716920 body=8 status=ok
// SIG undefined FUN_143716920(void)

void FUN_143716920(undefined8 param_1,undefined8 param_2)

{
  FUN_14371d650(param_2);
  return;
}



// FUNCTION 143716930 FUN_143716930 body=8 status=ok
// SIG undefined FUN_143716930(void)

void FUN_143716930(undefined8 param_1,undefined8 param_2)

{
  FUN_14371d670(param_2);
  return;
}



// FUNCTION 143716940 FUN_143716940 body=70 status=ok
// SIG undefined FUN_143716940(void)

longlong * FUN_143716940(longlong *param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  
  *(uint *)(param_1 + 1) = param_2;
  if (param_3 != 0) {
    *param_1 = param_3;
    return param_1;
  }
  if ((param_2 & 8) != 0) {
    lVar1 = FUN_14371d640();
    *param_1 = lVar1;
    return param_1;
  }
  *param_1 = (longlong)PTR_PTR_1467f0618;
  return param_1;
}



// FUNCTION 143716990 FUN_143716990 body=143 status=ok
// SIG undefined FUN_143716990(void)

void FUN_143716990(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  
  uVar1 = FUN_143703a50();
  iVar3 = *(int *)(param_1 + 0x28) + -1;
  if (-1 < iVar3) {
    lVar2 = (longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x20);
    do {
      FUN_143716650(lVar2);
      lVar2 = lVar2 + -0x10;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x2c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x20),0x10,*(uint *)(param_1 + 0x2c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x80000000;
  FUN_14373aae0(param_1);
  return;
}



// FUNCTION 143716a20 FUN_143716a20 body=151 status=ok
// SIG undefined FUN_143716a20(void)

longlong FUN_143716a20(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14373ac50(param_1 + 0x38);
  FUN_143716990(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x48;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
    }
  }
  return param_1;
}



// FUNCTION 143716ac0 FUN_143716ac0 body=40 status=ok
// SIG undefined FUN_143716ac0(void)

undefined4 * FUN_143716ac0(undefined4 *param_1,byte param_2)

{
  if ((param_2 & 4) != 0) {
    *param_1 = 1;
    return param_1;
  }
  if ((param_2 & 1) != 0) {
    *param_1 = 2;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 143716af0 FUN_143716af0 body=669 status=ok
// SIG undefined FUN_143716af0(void)

longlong FUN_143716af0(longlong *param_1,int *param_2,undefined8 *param_3)

{
  longlong lVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  undefined8 *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined **local_148 [4];
  longlong local_128;
  int local_120;
  uint local_11c;
  undefined8 local_110 [3];
  undefined1 *local_f8;
  undefined4 local_f0;
  uint local_ec;
  undefined1 local_e8 [128];
  undefined1 local_68 [64];
  
  if (param_1 == (longlong *)0x0) {
    if ((param_2 != (int *)0x0) && (*param_2 == 0)) {
      *param_2 = 1;
      FUN_1437166c0(param_2 + 2,"Stream pointer is null");
    }
  }
  else {
    pcVar2 = (char *)(**(code **)(*param_1 + 0x18))(param_1,local_res8);
    if (*pcVar2 != '\0') {
      FUN_14373a910(local_148,2);
      local_148[0] = hkLog::Raii::CaptureOutput::vftable;
      local_110[0] = 0;
      FUN_14373b3c0(local_110,local_148);
      local_168 = (undefined8 *)0x0;
      puVar3 = (undefined8 *)thunk_FUN_1437344d0(param_1);
      if (local_168 != (undefined8 *)0x0) {
        (**(code **)*local_168)(local_168,1);
      }
      uVar6 = *param_3;
      local_160 = 0;
      uStack_158 = 0;
      local_168 = puVar3;
      puVar4 = (undefined4 *)FUN_143716ac0(local_res8,*(undefined4 *)(param_3 + 1));
      uVar5 = FUN_14371aeb0(local_68);
      uVar6 = SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(uVar5,uVar6);
      uVar6 = FUN_14371d550(uVar6,*puVar4,0);
      uVar6 = FUN_14371d4f0(uVar6,1);
      plVar7 = (longlong *)FUN_14371d280(uVar6,local_res20,&local_168);
      lVar1 = *plVar7;
      *plVar7 = 0;
      FUN_14371b0d0(local_68);
      if (local_168 != (undefined8 *)0x0) {
        (**(code **)*local_168)(local_168,1);
      }
      if (lVar1 == 0) {
        if (param_2 != (int *)0x0) {
          local_f8 = local_e8;
          local_ec = 0x80000080;
          local_f0 = 1;
          local_e8[0] = 0;
          FUN_14373b340(local_148,&local_f8);
          if (*param_2 == 0) {
            *param_2 = 6;
            FUN_1437166c0(param_2 + 2,local_f8);
          }
          local_f0 = 0;
          if (-1 < (int)local_ec) {
            FUN_143702e10(&PTR_vftable_1467f0638,local_f8,1,local_ec & 0x3fffffff);
          }
        }
      }
      else {
        FUN_14370c030(lVar1);
      }
      FUN_14373ac50(local_110);
      uVar6 = FUN_143703a50();
      local_120 = local_120 + -1;
      if (-1 < local_120) {
        lVar8 = (longlong)local_120 * 0x10 + local_128;
        do {
          FUN_143716650(lVar8);
          lVar8 = lVar8 + -0x10;
          local_120 = local_120 + -1;
        } while (-1 < local_120);
      }
      local_120 = 0;
      if (-1 < (int)local_11c) {
        FUN_143702e10(uVar6,local_128,0x10,local_11c & 0x3fffffff);
      }
      local_128 = 0;
      local_11c = 0x80000000;
      FUN_14373aae0(local_148);
      if (lVar1 != 0) {
        FUN_14370c150(lVar1);
      }
      return lVar1;
    }
    if ((param_2 != (int *)0x0) && (*param_2 == 0)) {
      *param_2 = 1;
      FUN_1437166c0(param_2 + 2,"Stream is not ok");
      return 0;
    }
  }
  return 0;
}



// FUNCTION 143716d90 FUN_143716d90 body=14 status=ok
// SIG undefined FUN_143716d90(void)

void FUN_143716d90(void)

{
  FUN_143716da0();
  return;
}



// FUNCTION 143716da0 FUN_143716da0 body=484 status=ok
// SIG undefined FUN_143716da0(void)

undefined4 FUN_143716da0(undefined8 param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined1 local_res18 [8];
  uint local_res20;
  undefined1 local_88 [16];
  undefined8 local_78;
  longlong local_70;
  ulonglong local_68;
  ulonglong local_60 [4];
  undefined1 local_40 [40];
  
  if (param_3 == 0) {
    return 0x80040200;
  }
  local_res20 = param_4;
  puVar1 = (undefined8 *)FUN_14371d5c0(local_88,param_1,param_2);
  uVar6 = 0;
  local_78 = *puVar1;
  local_70 = puVar1[1];
  local_68 = uVar6;
  if (local_70 != 0) {
    local_68 = FUN_1437151a0();
  }
  if ((local_68 & 1) != 0) {
    FUN_1437329e0(local_68 & 0xfffffffffffffffe);
  }
  if ((local_res20 & 1) == 0) {
    local_60[0] = 0;
    uVar6 = FUN_143747dd0(param_3);
    if (uVar6 != 0) {
      FUN_14370c030(uVar6);
    }
    if (local_60[0] != 0) {
      FUN_14370c150();
    }
    local_60[3] = 0;
    local_60[1] = 0;
    local_60[2] = 0;
    local_60[0] = uVar6;
    uVar4 = FUN_1424b51c0(local_40);
    uVar4 = FUN_14371d510(uVar4);
    puVar5 = (undefined4 *)FUN_14371c600(uVar4,local_res18,&local_78,local_60);
    uVar7 = *puVar5;
    FUN_14371b260(local_40);
    uVar6 = local_60[0];
    if (local_60[0] == 0) goto LAB_143716f6b;
  }
  else {
    if (DAT_146b825a0 != (code *)0x0) {
      puVar2 = (ulonglong *)(*DAT_146b825a0)(local_88);
      uVar6 = *puVar2;
      *puVar2 = 0;
    }
    if (uVar6 == 0) {
      if ((local_68 & 1) == 0) {
        return 0x80040200;
      }
      FUN_143733a60(local_68 & 0xfffffffffffffffe);
      return 0x80040200;
    }
    local_60[0] = 0;
    uVar3 = FUN_143747dd0(param_3);
    if (uVar3 != 0) {
      FUN_14370c030(uVar3);
    }
    if (local_60[0] != 0) {
      FUN_14370c150();
    }
    local_60[3] = 0;
    local_60[1] = 0;
    local_60[2] = 0;
    local_60[0] = uVar3;
    uVar4 = FUN_1424b51c0(local_40);
    uVar4 = FUN_14371d4b0(uVar4,uVar6);
    uVar4 = FUN_14371d510(uVar4);
    puVar5 = (undefined4 *)FUN_14371c600(uVar4,local_res18,&local_78,local_60);
    uVar7 = *puVar5;
    FUN_14371b260(local_40);
    if (local_60[0] != 0) {
      FUN_14370c150();
    }
  }
  FUN_14370c150(uVar6);
LAB_143716f6b:
  if ((local_68 & 1) != 0) {
    FUN_143733a60(local_68 & 0xfffffffffffffffe);
  }
  return uVar7;
}



// FUNCTION 143716f90 FUN_143716f90 body=258 status=ok
// SIG undefined FUN_143716f90(void)

undefined8 * FUN_143716f90(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = hkReferencedObject::vftable;
  FUN_143718270(param_1 + 1,param_2 + 8);
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkGeometry::vftable;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  iVar1 = *(int *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0x24) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar3,param_1 + 3,iVar1,0x10);
  }
  FUN_142ba3370(param_1[3],uVar2,iVar1);
  *(int *)(param_1 + 4) = iVar1;
  iVar1 = *(int *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0x34) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar3,param_1 + 5,iVar1,0x10);
  }
  FUN_1436ee950(param_1[5],uVar2,iVar1);
  *(int *)(param_1 + 6) = iVar1;
  return param_1;
}



// FUNCTION 1437170a0 FUN_1437170a0 body=625 status=ok
// SIG undefined FUN_1437170a0(void)

undefined4 * FUN_1437170a0(longlong param_1,undefined4 *param_2,longlong param_3,float *param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
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
  float fVar22;
  undefined8 uVar23;
  undefined4 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  uint uVar27;
  longlong lVar28;
  int iVar29;
  int iVar30;
  ulonglong uVar31;
  longlong lVar32;
  
  iVar5 = *(int *)(param_1 + 0x20);
  iVar6 = *(int *)(param_1 + 0x30);
  uVar31 = (ulonglong)iVar6;
  iVar30 = *(int *)(param_3 + 0x20) + iVar5;
  uVar23 = FUN_143703a50();
  uVar27 = *(uint *)(param_1 + 0x24) & 0x3fffffff;
  if ((int)uVar27 < iVar30) {
    iVar29 = uVar27 * 2;
    if (iVar30 < iVar29) {
      iVar30 = iVar29;
    }
    iVar30 = FUN_14370c310(uVar23,param_1 + 0x18,iVar30,0x10);
    if (iVar30 < 0) {
      *param_2 = 0x80040200;
      return param_2;
    }
  }
  iVar30 = *(int *)(param_3 + 0x30) + iVar6;
  uVar23 = FUN_143703a50();
  uVar27 = *(uint *)(param_1 + 0x34) & 0x3fffffff;
  if ((int)uVar27 < iVar30) {
    iVar29 = uVar27 * 2;
    if (iVar30 < iVar29) {
      iVar30 = iVar29;
    }
    iVar30 = FUN_14370c310(uVar23,param_1 + 0x28,iVar30,0x10);
    if (iVar30 < 0) {
      *param_2 = 0x80040200;
      return param_2;
    }
  }
  iVar30 = *(int *)(param_3 + 0x20);
  lVar32 = *(longlong *)(param_3 + 0x18);
  uVar23 = FUN_143703a50();
  iVar29 = iVar30 + *(int *)(param_1 + 0x20);
  uVar27 = *(uint *)(param_1 + 0x24) & 0x3fffffff;
  if (((int)uVar27 < iVar29) && ((int)uVar27 < iVar29)) {
    iVar7 = iVar29;
    if (iVar29 < (int)(uVar27 * 2)) {
      iVar7 = uVar27 * 2;
    }
    FUN_14370c310(uVar23,param_1 + 0x18,iVar7,0x10);
  }
  lVar28 = (longlong)iVar30;
  puVar24 = (undefined4 *)
            ((longlong)*(int *)(param_1 + 0x20) * 0x10 + *(longlong *)(param_1 + 0x18));
  if (0 < lVar28) {
    lVar32 = lVar32 - (longlong)puVar24;
    do {
      puVar1 = (undefined4 *)(lVar32 + (longlong)puVar24);
      uVar8 = puVar1[1];
      uVar9 = puVar1[2];
      uVar10 = puVar1[3];
      *puVar24 = *puVar1;
      puVar24[1] = uVar8;
      puVar24[2] = uVar9;
      puVar24[3] = uVar10;
      puVar24 = puVar24 + 4;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
  }
  *(int *)(param_1 + 0x20) = iVar29;
  iVar30 = *(int *)(param_3 + 0x30);
  lVar32 = *(longlong *)(param_3 + 0x28);
  uVar23 = FUN_143703a50();
  uVar27 = *(uint *)(param_1 + 0x34) & 0x3fffffff;
  iVar29 = iVar30 + *(int *)(param_1 + 0x30);
  if (((int)uVar27 < iVar29) && ((int)uVar27 < iVar29)) {
    iVar7 = iVar29;
    if (iVar29 < (int)(uVar27 * 2)) {
      iVar7 = uVar27 * 2;
    }
    FUN_14370c310(uVar23,param_1 + 0x28,iVar7,0x10);
  }
  lVar28 = (longlong)iVar30;
  puVar25 = (undefined8 *)
            ((longlong)*(int *)(param_1 + 0x30) * 0x10 + *(longlong *)(param_1 + 0x28));
  if (0 < lVar28) {
    puVar26 = puVar25;
    do {
      puVar2 = (undefined8 *)((lVar32 - (longlong)puVar25) + (longlong)puVar26);
      uVar23 = puVar2[1];
      *puVar26 = *puVar2;
      puVar26[1] = uVar23;
      lVar28 = lVar28 + -1;
      puVar26 = puVar26 + 2;
    } while (lVar28 != 0);
  }
  *(int *)(param_1 + 0x30) = iVar29;
  if ((param_4 != (float *)0x0) && (iVar5 < *(int *)(param_1 + 0x20))) {
    lVar32 = (longlong)iVar5 << 4;
    iVar30 = iVar5;
    do {
      lVar28 = *(longlong *)(param_1 + 0x18);
      iVar30 = iVar30 + 1;
      pfVar3 = (float *)(lVar32 + lVar28);
      fVar11 = *pfVar3;
      fVar12 = pfVar3[1];
      fVar13 = pfVar3[2];
      fVar14 = param_4[1];
      fVar15 = param_4[2];
      fVar16 = param_4[5];
      fVar17 = param_4[6];
      fVar18 = param_4[0xd];
      fVar19 = param_4[0xe];
      fVar20 = param_4[9];
      fVar21 = param_4[10];
      fVar22 = *(float *)(lVar32 + lVar28 + 0xc);
      pfVar3 = (float *)(lVar32 + lVar28);
      *pfVar3 = fVar11 * *param_4 + param_4[0xc] + fVar12 * param_4[4] + fVar13 * param_4[8];
      pfVar3[1] = fVar11 * fVar14 + fVar18 + fVar12 * fVar16 + fVar13 * fVar20;
      pfVar3[2] = fVar11 * fVar15 + fVar19 + fVar12 * fVar17 + fVar13 * fVar21;
      pfVar3[3] = fVar22;
      lVar32 = lVar32 + 0x10;
    } while (iVar30 < *(int *)(param_1 + 0x20));
  }
  if ((0 < iVar5) && (iVar6 < *(int *)(param_1 + 0x30))) {
    lVar32 = uVar31 << 4;
    do {
      uVar27 = (int)uVar31 + 1;
      uVar31 = (ulonglong)uVar27;
      piVar4 = (int *)(lVar32 + *(longlong *)(param_1 + 0x28));
      *piVar4 = *piVar4 + iVar5;
      piVar4 = (int *)(lVar32 + 4 + *(longlong *)(param_1 + 0x28));
      *piVar4 = *piVar4 + iVar5;
      piVar4 = (int *)(lVar32 + 8 + *(longlong *)(param_1 + 0x28));
      *piVar4 = *piVar4 + iVar5;
      lVar32 = lVar32 + 0x10;
    } while ((int)uVar27 < *(int *)(param_1 + 0x30));
  }
  *param_2 = 0;
  return param_2;
}


