// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143152380 Remove body=130 status=ok
// SIG undefined Remove(void)

void CAkPlayingMgr::Remove(longlong *param_1,uint param_2)

{
  longlong lVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar1 = *(longlong *)
                  (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x68)) {
      if (*(uint *)(lVar1 + 0x4c) == param_2) {
        if (lVar1 != 0) {
          *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + -1;
          FUN_143150f90(param_1,(ulonglong)param_2);
          return;
        }
        break;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001431523d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 143152410 RemoveItemActiveCount body=130 status=ok
// SIG undefined RemoveItemActiveCount(void)

void CAkPlayingMgr::RemoveItemActiveCount(longlong *param_1,uint param_2)

{
  longlong lVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar1 = *(longlong *)
                  (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x68)) {
      if (*(uint *)(lVar1 + 0x4c) == param_2) {
        if (lVar1 != 0) {
          *(int *)(lVar1 + 0x24) = *(int *)(lVar1 + 0x24) + -1;
          FUN_143150f90(param_1,(ulonglong)param_2);
          return;
        }
        break;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143152469. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 1431524a0 FUN_1431524a0 body=328 status=ok
// SIG undefined FUN_1431524a0(void)

uint * FUN_1431524a0(longlong *param_1,uint param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  uint *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  
  iVar10 = 0;
  iVar11 = (int)param_1[1] + -1;
  if (-1 < iVar11) {
    do {
      iVar5 = (iVar11 - iVar10) / 2 + iVar10;
      uVar2 = *(uint *)((longlong)iVar5 * 4 + *param_1);
      if (param_2 < uVar2) {
        iVar11 = iVar5 + -1;
      }
      else {
        if (param_2 <= uVar2) {
          *param_3 = 1;
          return (uint *)(*param_1 + (longlong)iVar5 * 4);
        }
        iVar10 = iVar5 + 1;
      }
    } while (iVar10 <= iVar11);
  }
  *param_3 = 0;
  lVar3 = *param_1;
  if (lVar3 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = lVar3 + (longlong)iVar10 * 4;
  }
  uVar2 = *(uint *)(param_1 + 1);
  if (lVar8 == 0) {
    if ((*(uint *)((longlong)param_1 + 0xc) <= uVar2) &&
       (cVar4 = FUN_143151530(param_1,1), cVar4 == '\0')) {
      return (uint *)0x0;
    }
    if (*(uint *)((longlong)param_1 + 0xc) <= uVar2) {
      return (uint *)0x0;
    }
    uVar2 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar2 + 1;
    puVar6 = (uint *)(*param_1 + (ulonglong)uVar2 * 4);
  }
  else {
    if (((*(uint *)((longlong)param_1 + 0xc) <= uVar2) &&
        (cVar4 = FUN_143151530(param_1,1), cVar4 == '\0')) ||
       (*(uint *)((longlong)param_1 + 0xc) <= uVar2)) {
      return (uint *)0x0;
    }
    uVar2 = *(uint *)(param_1 + 1);
    lVar9 = *param_1;
    *(uint *)(param_1 + 1) = uVar2 + 1;
    puVar7 = (undefined4 *)(lVar9 + (ulonglong)uVar2 * 4);
    lVar3 = (lVar8 - lVar3 >> 2 & 0xffffffffU) * 4;
    if ((undefined4 *)(lVar3 + lVar9) < puVar7) {
      do {
        puVar1 = puVar7 + -1;
        *puVar7 = puVar7[-1];
        lVar9 = *param_1;
        puVar7 = puVar1;
      } while ((undefined4 *)(lVar9 + lVar3) < puVar1);
    }
    puVar6 = (uint *)(lVar3 + lVar9);
  }
  if (puVar6 != (uint *)0x0) {
    *puVar6 = param_2;
  }
  return puVar6;
}



// FUNCTION 1431525f0 SetPBI body=158 status=ok
// SIG undefined SetPBI(void)

undefined8
CAkPlayingMgr::SetPBI(longlong *param_1,uint param_2,longlong param_3,undefined4 *param_4)

{
  longlong lVar1;
  
  if (param_3 == 0) {
    return 2;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar1 = *(longlong *)
                  (*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x68)) {
      if (*(uint *)(lVar1 + 0x4c) == param_2) {
        if (lVar1 != 0) {
          *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + 1;
          *param_4 = *(undefined4 *)(lVar1 + 0x60);
        }
        break;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return 1;
}



// FUNCTION 143152690 Term body=55 status=ok
// SIG undefined Term(void)

void CAkPlayingMgr::Term(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*param_1);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 1431526d0 AddPathToList body=147 status=ok
// SIG undefined AddPathToList(void)

void * CAkPathManager::AddPathToList(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  
  if ((*(uint *)(param_1 + 1) < *(uint *)(param_1 + 2)) &&
     (pvVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x98), pvVar4 != (void *)0x0)) {
    pvVar4 = (void *)CAkPath::CAkPath(pvVar4);
    if (pvVar4 == (void *)0x0) {
      return (void *)0x0;
    }
    uVar2 = *(uint *)(param_1 + 1);
    if (uVar2 < *(uint *)((longlong)param_1 + 0xc)) {
      *(uint *)(param_1 + 1) = uVar2 + 1;
      puVar1 = (undefined8 *)(*param_1 + (ulonglong)uVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = pvVar4;
        return pvVar4;
      }
    }
    lVar3 = g_DefaultPoolId;
    FUN_1431ae820(pvVar4);
    AK::MemoryMgr::Free(lVar3,pvVar4);
    return (void *)0x0;
  }
  return (void *)0x0;
}



// FUNCTION 143152770 FUN_143152770 body=426 status=ok
// SIG undefined FUN_143152770(void)

undefined8 FUN_143152770(longlong *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong *plVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  void *pvVar8;
  longlong *plVar9;
  void *pvVar10;
  longlong *plVar11;
  
  plVar7 = (longlong *)*param_1;
  plVar2 = plVar7 + *(uint *)(param_1 + 1);
  for (; (plVar7 != plVar2 && (*plVar7 != param_2)); plVar7 = plVar7 + 1) {
  }
  plVar11 = (longlong *)0x0;
  plVar9 = plVar11;
  if (plVar7 != plVar2) {
    plVar9 = plVar7;
  }
  if (plVar9 == (longlong *)0x0) {
    return 2;
  }
  plVar7 = *(longlong **)(param_2 + 0x30);
  uVar4 = *(uint *)(param_2 + 0x38);
  plVar2 = plVar7 + uVar4;
  for (; (plVar7 != plVar2 && (*plVar7 != param_3)); plVar7 = plVar7 + 1) {
  }
  plVar9 = plVar11;
  if (plVar7 != plVar2) {
    plVar9 = plVar7;
  }
  if (plVar9 != (longlong *)0x0) {
    return 0x28;
  }
  if (*(uint *)(param_2 + 0x3c) <= uVar4) {
    uVar1 = *(uint *)(param_2 + 0x3c) + 4;
    pvVar8 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 3);
    if (pvVar8 == (void *)0x0) {
      return 2;
    }
    pvVar10 = *(void **)(param_2 + 0x30);
    if ((pvVar10 != (void *)0x0) && (pvVar10 != pvVar8)) {
      uVar5 = *(uint *)(param_2 + 0x38);
      if ((longlong *)(ulonglong)uVar5 != (longlong *)0x0) {
        do {
          *(undefined8 *)((longlong)pvVar8 + (longlong)plVar11 * 8) =
               *(undefined8 *)(*(longlong *)(param_2 + 0x30) + (longlong)plVar11 * 8);
          plVar11 = (longlong *)((longlong)plVar11 + 1);
        } while (plVar11 < (longlong *)(ulonglong)uVar5);
        pvVar10 = *(void **)(param_2 + 0x30);
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,pvVar10);
    }
    *(void **)(param_2 + 0x30) = pvVar8;
    *(uint *)(param_2 + 0x3c) = uVar1;
    if (uVar1 <= uVar4) {
      return 2;
    }
  }
  uVar4 = *(uint *)(param_2 + 0x38);
  *(uint *)(param_2 + 0x38) = uVar4 + 1;
  plVar2 = (longlong *)(*(longlong *)(param_2 + 0x30) + (ulonglong)uVar4 * 8);
  if (plVar2 == (longlong *)0x0) {
    return 2;
  }
  *plVar2 = param_3;
  *(char *)(param_2 + 0x41) = *(char *)(param_2 + 0x41) + '\x01';
  if (*(char *)(param_2 + 0x2c) != '\0') {
    lVar6 = *(longlong *)(param_3 + 0x168);
    fVar3 = *(float *)(param_2 + 0x7c);
    *(ulonglong *)(lVar6 + 0xc) =
         CONCAT44(*(float *)(lVar6 + 0x10) + *(float *)(param_2 + 0x78),
                  *(float *)(lVar6 + 0xc) + *(float *)(param_2 + 0x74));
    *(float *)(lVar6 + 0x14) = *(float *)(lVar6 + 0x14) + fVar3;
    FUN_1431af650(param_2,*(int *)(DAT_146b50b78 + 0x78) + 1);
    return 1;
  }
  return 1;
}



// FUNCTION 143152920 AddPotentialUser body=51 status=ok
// SIG undefined AddPotentialUser(void)

void CAkPathManager::AddPotentialUser(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = (longlong *)*param_1;
  plVar1 = plVar2 + *(uint *)(param_1 + 1);
  for (; (plVar2 != plVar1 && (*plVar2 != param_2)); plVar2 = plVar2 + 1) {
  }
  plVar3 = (longlong *)0x0;
  if (plVar2 != plVar1) {
    plVar3 = plVar2;
  }
  if (plVar3 != (longlong *)0x0) {
    *(char *)(param_2 + 0x40) = *(char *)(param_2 + 0x40) + '\x01';
  }
  return;
}



// FUNCTION 143152960 Init body=90 status=ok
// SIG undefined Init(void)

undefined8 CAkPathManager::Init(undefined8 *param_1,uint param_2)

{
  void *pvVar1;
  uint uVar2;
  
  uVar2 = 0xff;
  if (param_2 != 0) {
    uVar2 = param_2;
  }
  *(uint *)(param_1 + 2) = uVar2;
  if (uVar2 != 0) {
    pvVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar2 << 3);
    *param_1 = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return 0x34;
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar2;
  }
  return 1;
}



// FUNCTION 1431529c0 Pause body=50 status=ok
// SIG undefined Pause(void)

undefined8 CAkPathManager::Pause(undefined8 param_1,int *param_2)

{
  if (*param_2 == 1) {
    CAkPath::Pause(param_2,*(undefined4 *)(DAT_146b50b78 + 0x78));
    return 1;
  }
  return 0x26;
}



// FUNCTION 143152a00 ProcessPathsList body=85 status=ok
// SIG undefined ProcessPathsList(void)

void CAkPathManager::ProcessPathsList(longlong *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != puVar1 + *(uint *)(param_1 + 1)) {
    do {
      if (*(int *)*puVar1 == 1) {
        FUN_1431af650((int *)*puVar1,param_2);
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 8));
  }
  return;
}



// FUNCTION 143152a60 Release body=91 status=ok
// SIG undefined Release(void)

void AkSharedPathState::Release(undefined8 *param_1)

{
  if (*(short *)(param_1 + 2) == 1) {
    if ((void *)*param_1 != (void *)0x0) {
      *(undefined4 *)(param_1 + 1) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*param_1);
      *param_1 = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    AK::MemoryMgr::Free(g_DefaultPoolId,param_1);
    return;
  }
  *(short *)(param_1 + 2) = *(short *)(param_1 + 2) + -1;
  return;
}



// FUNCTION 143152ac0 RemovePathFromList body=147 status=ok
// SIG undefined RemovePathFromList(void)

undefined8 CAkPathManager::RemovePathFromList(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  void *pvVar2;
  long lVar3;
  longlong *plVar4;
  uint uVar5;
  
  plVar4 = (longlong *)*param_1;
  uVar5 = *(uint *)(param_1 + 1);
  plVar1 = plVar4 + uVar5;
  if (plVar4 != plVar1) {
    do {
      if (*plVar4 == param_2) break;
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1);
    if (plVar4 != plVar1) {
      pvVar2 = (void *)*plVar4;
      if (1 < uVar5) {
        *plVar4 = plVar1[-1];
        uVar5 = *(uint *)(param_1 + 1);
      }
      *(uint *)(param_1 + 1) = uVar5 - 1;
      CAkPath::Term(pvVar2);
      lVar3 = g_DefaultPoolId;
      if (pvVar2 != (void *)0x0) {
        FUN_1431ae820(pvVar2);
        AK::MemoryMgr::Free(lVar3,pvVar2);
      }
      return 1;
    }
  }
  return 0x24;
}



// FUNCTION 143152b60 RemovePathUser body=194 status=ok
// SIG undefined RemovePathUser(void)

undefined8 CAkPathManager::RemovePathUser(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint uVar6;
  
  plVar3 = (longlong *)*param_1;
  plVar1 = plVar3 + *(uint *)(param_1 + 1);
  for (; (plVar3 != plVar1 && (*plVar3 != param_2)); plVar3 = plVar3 + 1) {
  }
  plVar4 = (longlong *)0x0;
  if (plVar3 != plVar1) {
    plVar4 = plVar3;
  }
  if (plVar4 == (longlong *)0x0) {
    return 1;
  }
  plVar3 = *(longlong **)(param_2 + 0x30);
  uVar5 = 0x29;
  uVar6 = *(uint *)(param_2 + 0x38);
  plVar1 = plVar3 + uVar6;
  if (plVar3 != plVar1) {
    do {
      if (*plVar3 == param_3) break;
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
    if (plVar3 != plVar1) {
      if (1 < uVar6) {
        *plVar3 = plVar1[-1];
        uVar6 = *(uint *)(param_2 + 0x38);
      }
      *(uint *)(param_2 + 0x38) = uVar6 - 1;
      cVar2 = *(char *)(param_2 + 0x41) + -1;
      *(char *)(param_2 + 0x41) = cVar2;
      if ((*(char *)(param_2 + 0x40) == '\0') && (cVar2 == '\0')) {
        uVar5 = RemovePathFromList(param_1,param_2);
        return uVar5;
      }
      uVar5 = 1;
    }
  }
  return uVar5;
}



// FUNCTION 143152c30 RemovePotentialUser body=84 status=ok
// SIG undefined RemovePotentialUser(void)

undefined8 CAkPathManager::RemovePotentialUser(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  plVar3 = (longlong *)*param_1;
  plVar1 = plVar3 + *(uint *)(param_1 + 1);
  for (; (plVar3 != plVar1 && (*plVar3 != param_2)); plVar3 = plVar3 + 1) {
  }
  plVar5 = (longlong *)0x0;
  if (plVar3 != plVar1) {
    plVar5 = plVar3;
  }
  if ((plVar5 != (longlong *)0x0) &&
     (((*(char *)(param_2 + 0x40) == '\0' ||
       (cVar2 = *(char *)(param_2 + 0x40) + -1, *(char *)(param_2 + 0x40) = cVar2, cVar2 == '\0'))
      && (*(char *)(param_2 + 0x41) == '\0')))) {
    uVar4 = RemovePathFromList(param_1);
    return uVar4;
  }
  return 1;
}



// FUNCTION 143152c90 Resume body=50 status=ok
// SIG undefined Resume(void)

undefined8 CAkPathManager::Resume(undefined8 param_1,int *param_2)

{
  if (*param_2 == 2) {
    CAkPath::Resume(param_2,*(undefined4 *)(DAT_146b50b78 + 0x78));
    return 1;
  }
  return 0x27;
}



// FUNCTION 143152cd0 SetPathsList body=56 status=ok
// SIG undefined SetPathsList(void)

void CAkPathManager::SetPathsList
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined1 param_6,undefined8 param_7)

{
  FUN_1431af1b0(param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 143152d10 FUN_143152d10 body=212 status=ok
// SIG undefined FUN_143152d10(void)

ulonglong FUN_143152d10(undefined8 param_1,int *param_2,uint *param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (*param_2 == 0) {
    if ((char)param_2[0xb] == '\0') {
      lVar1 = *(longlong *)(param_3 + 2);
      if (lVar1 != 0) {
        if (*(longlong *)(param_2 + 4) != 0) {
          AkSharedPathState::Release();
        }
        *(longlong *)(param_2 + 4) = lVar1;
        if (lVar1 != 0) {
          *(short *)(lVar1 + 0x10) = *(short *)(lVar1 + 0x10) + 1;
        }
        uVar2 = *param_3;
        *(ushort *)(param_2 + 8) = (ushort)uVar2;
        *(ulonglong *)(param_2 + 6) = *(longlong *)(param_2 + 2) + (ulonglong)(ushort)uVar2 * 0x18;
      }
      uVar3 = FUN_1431af3a0(param_2,*(undefined4 *)(DAT_146b50b78 + 0x78));
      uVar4 = uVar3;
      if ((*(byte *)(param_2 + 10) & 2) == 0) {
        CAkPath::GetNextPathList(param_2);
        *param_3 = (uint)*(ushort *)(param_2 + 8);
        lVar1 = *(longlong *)(param_2 + 4);
        if (*(longlong *)(param_3 + 2) != 0) {
          AkSharedPathState::Release();
        }
        *(longlong *)(param_3 + 2) = lVar1;
        uVar4 = uVar3 & 0xffffffff;
        if (lVar1 != 0) {
          *(short *)(lVar1 + 0x10) = *(short *)(lVar1 + 0x10) + 1;
        }
      }
      return uVar4;
    }
    FUN_1431af760(param_2);
  }
  return 2;
}



// FUNCTION 143152df0 Term body=169 status=ok
// SIG undefined Term(void)

void CAkPathManager::Term(longlong *param_1)

{
  void *pvVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)*param_1;
  puVar3 = puVar4;
  if (puVar4 != puVar4 + *(uint *)(param_1 + 1)) {
    do {
      pvVar1 = (void *)*puVar3;
      CAkPath::Term(pvVar1);
      lVar2 = g_DefaultPoolId;
      if (pvVar1 != (void *)0x0) {
        FUN_1431ae820(pvVar1);
        AK::MemoryMgr::Free(lVar2,pvVar1);
      }
      puVar3 = puVar3 + 1;
      puVar4 = (undefined8 *)*param_1;
    } while (puVar3 != puVar4 + *(uint *)(param_1 + 1));
  }
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,puVar4);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 143152ea0 AddMarkerData body=576 status=ok
// SIG undefined AddMarkerData(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int AkCaptureFile::AddMarkerData(longlong param_1)

{
  char *pcVar1;
  uint uVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
  ulonglong uVar15;
  uint uVar16;
  uint *puVar17;
  uint local_res8 [2];
  undefined4 local_res10;
  int local_res14;
  undefined8 auStack_70 [5];
  uint local_48 [8];
  
  local_res8[0] = *(uint *)(param_1 + 0x50);
  uVar11 = (ulonglong)local_res8[0] * 4 + 0xf;
  if (uVar11 <= (ulonglong)local_res8[0] * 4) {
    uVar11 = 0xffffffffffffff0;
  }
  auStack_70[0] = 0x143152ee5;
  lVar6 = -(uVar11 & 0xfffffffffffffff0);
  local_res10 = 0x20657563;
  plVar3 = *(longlong **)(param_1 + 0x60);
  local_res14 = local_res8[0] * 0x18 + 4;
  puVar17 = (uint *)((longlong)local_48 + lVar6);
  pcVar4 = *(code **)(*plVar3 + 0x18);
  *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x143152f18;
  (*pcVar4)(plVar3,&local_res10,8);
  plVar3 = *(longlong **)(param_1 + 0x60);
  pcVar4 = *(code **)(*plVar3 + 0x18);
  *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x143152f2c;
  (*pcVar4)(plVar3,local_res8,4);
  uVar2 = *(uint *)(param_1 + 0x50);
  uVar11 = 0;
  uVar10 = 0;
  uVar7 = 0;
  uVar16 = uVar10;
  if (uVar2 != 0) {
    uVar16 = uVar2 * 0x18;
    uVar12 = (ulonglong)uVar2;
    uVar13 = uVar11;
    do {
      lVar9 = *(longlong *)(param_1 + 0x48);
      local_48[0] = *(uint *)(lVar9 + uVar13);
      local_48[1] = *(undefined4 *)(lVar9 + 4 + uVar13);
      local_48[2] = 0x61746164;
      local_48[3] = 0;
      local_48[4] = 0;
      local_48[5] = *(undefined4 *)(lVar9 + 4 + uVar13);
      plVar3 = *(longlong **)(param_1 + 0x60);
      pcVar4 = *(code **)(*plVar3 + 0x18);
      *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x143152f8a;
      (*pcVar4)(plVar3,local_48,0x18);
      uVar13 = uVar13 + 0x10;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    uVar7 = *(uint *)(param_1 + 0x50);
  }
  iVar8 = 0;
  if (uVar7 != 0) {
    uVar15 = (ulonglong)uVar7;
    uVar13 = uVar11;
    uVar12 = uVar11;
    puVar14 = puVar17;
    do {
      lVar9 = -1;
      do {
        pcVar1 = (char *)(*(longlong *)(uVar12 + 8 + *(longlong *)(param_1 + 0x48)) + 1 + lVar9);
        lVar9 = lVar9 + 1;
      } while (*pcVar1 != '\0');
      uVar10 = (int)lVar9 + 1;
      *puVar14 = uVar10;
      iVar8 = (int)uVar13 + 1;
      if ((uVar10 & 1) == 0) {
        iVar8 = (int)uVar13;
      }
      uVar12 = uVar12 + 0x10;
      puVar14 = puVar14 + 1;
      uVar10 = uVar10 + iVar8;
      uVar13 = (ulonglong)uVar10;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
    iVar8 = *(int *)(param_1 + 0x50);
  }
  local_res10 = 0x5453494c;
  local_res14 = uVar10 + (iVar8 * 3 + 1) * 4;
  plVar3 = *(longlong **)(param_1 + 0x60);
  pcVar4 = *(code **)(*plVar3 + 0x18);
  *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x143153014;
  (*pcVar4)(plVar3,&local_res10,8);
  plVar3 = *(longlong **)(param_1 + 0x60);
  local_res8[0] = 0x6c746461;
  pcVar4 = *(code **)(*plVar3 + 0x18);
  *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x14315302f;
  (*pcVar4)(plVar3,local_res8,4);
  if (*(uint *)(param_1 + 0x50) == 0) {
    iVar8 = uVar16 + 0x18;
  }
  else {
    uVar12 = (ulonglong)*(uint *)(param_1 + 0x50);
    uVar13 = uVar11;
    do {
      local_48[1] = *puVar17 + 4;
      local_48[0] = 0x6c62616c;
      local_48[2] = *(undefined4 *)(*(longlong *)(param_1 + 0x48) + uVar13);
      uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 8 + uVar13);
      plVar3 = *(longlong **)(param_1 + 0x60);
      local_48[3] = (uint)uVar5;
      local_48[4] = (uint)((ulonglong)uVar5 >> 0x20);
      pcVar4 = *(code **)(*plVar3 + 0x18);
      *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x143153077;
      (*pcVar4)(plVar3,local_48,0xc);
      plVar3 = *(longlong **)(param_1 + 0x60);
      uVar10 = *puVar17;
      uVar5 = CONCAT44(local_48[4],local_48[3]);
      pcVar4 = *(code **)(*plVar3 + 0x18);
      *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x143153088;
      (*pcVar4)(plVar3,uVar5,uVar10);
      uVar10 = (int)uVar11 + 0xc + *puVar17;
      if ((*puVar17 & 1) != 0) {
        plVar3 = *(longlong **)(param_1 + 0x60);
        local_res8[0] = local_res8[0] & 0xffffff00;
        pcVar4 = *(code **)(*plVar3 + 0x18);
        *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x1431530ac;
        (*pcVar4)(plVar3,local_res8,1);
        uVar10 = uVar10 + 1;
      }
      uVar11 = (ulonglong)uVar10;
      uVar13 = uVar13 + 0x10;
      puVar17 = puVar17 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    iVar8 = uVar16 + 0x18 + uVar10;
  }
  return iVar8;
}



// FUNCTION 1431530e0 FUN_1431530e0 body=569 status=ok
// SIG undefined FUN_1431530e0(void)

undefined8 FUN_1431530e0(longlong param_1,void *param_2)

{
  uint uVar1;
  char *pcVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  void *pvVar10;
  void *pvVar11;
  undefined8 *puVar12;
  longlong lVar13;
  void *pvVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar9;
  
  if (*(longlong *)(param_1 + 0x60) == 0) {
    return 2;
  }
  uVar6 = *(uint *)(param_1 + 0x5c) / (uint)*(ushort *)(param_1 + 0x20);
  if ((*(int *)(param_1 + 0x50) != 0) &&
     (lVar16 = (ulonglong)*(uint *)(param_1 + 0x50) * 0x10 + *(longlong *)(param_1 + 0x48),
     uVar6 == *(uint *)(lVar16 + -0xc))) {
    lVar13 = -1;
    do {
      lVar13 = lVar13 + 1;
      lVar8 = -1;
    } while (*(char *)(*(longlong *)(lVar16 + -8) + lVar13) != '\0');
    do {
      lVar9 = lVar8;
      lVar8 = lVar9 + 1;
    } while (*(char *)((longlong)param_2 + lVar8) != '\0');
    uVar6 = (int)lVar9 + 2 + (int)lVar13;
    pvVar10 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar6);
    if (pvVar10 == (void *)0x0) {
      return 0x34;
    }
    _guard_xfg_dispatch_icall_nop(pvVar10,*(void **)(lVar16 + -8),(ulonglong)uVar6);
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(lVar16 + -8));
    lVar13 = (longlong)pvVar10 + -1;
    do {
      pcVar2 = (char *)(lVar13 + 1);
      lVar13 = lVar13 + 1;
    } while (*pcVar2 != '\0');
    lVar8 = 0;
    do {
      cVar3 = *(char *)((longlong)param_2 + lVar8);
      *(char *)(lVar13 + lVar8) = cVar3;
      lVar8 = lVar8 + 1;
    } while (cVar3 != '\0');
    *(void **)(lVar16 + -8) = pvVar10;
    return 1;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  uVar4 = *(undefined4 *)(param_1 + 0x58);
  lVar16 = -1;
  do {
    lVar16 = lVar16 + 1;
  } while (*(char *)((longlong)param_2 + lVar16) != '\0');
  uVar7 = (int)lVar16 + 1;
  pvVar10 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar7);
  if (pvVar10 == (void *)0x0) {
    return 0x34;
  }
  _guard_xfg_dispatch_icall_nop(pvVar10,param_2,(ulonglong)uVar7);
  uVar7 = *(uint *)(param_1 + 0x50);
  if (*(uint *)(param_1 + 0x54) <= uVar7) {
    uVar1 = *(uint *)(param_1 + 0x54) + 1;
    pvVar11 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 4);
    if (pvVar11 == (void *)0x0) goto LAB_1431532eb;
    pvVar14 = *(void **)(param_1 + 0x48);
    if ((pvVar14 != (void *)0x0) && (pvVar14 != pvVar11)) {
      uVar15 = (ulonglong)*(uint *)(param_1 + 0x50);
      if (uVar15 != 0) {
        lVar16 = 0;
        do {
          puVar12 = (undefined8 *)(lVar16 + *(longlong *)(param_1 + 0x48));
          uVar5 = puVar12[1];
          *(undefined8 *)(lVar16 + (longlong)pvVar11) = *puVar12;
          ((undefined8 *)(lVar16 + (longlong)pvVar11))[1] = uVar5;
          uVar15 = uVar15 - 1;
          lVar16 = lVar16 + 0x10;
        } while (uVar15 != 0);
        pvVar14 = *(void **)(param_1 + 0x48);
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,pvVar14);
    }
    *(void **)(param_1 + 0x48) = pvVar11;
    *(uint *)(param_1 + 0x54) = uVar1;
    if (uVar1 <= uVar7) goto LAB_1431532eb;
  }
  uVar7 = *(uint *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = uVar7 + 1;
  puVar12 = (undefined8 *)((ulonglong)uVar7 * 0x10 + *(longlong *)(param_1 + 0x48));
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = CONCAT44(uVar6,uVar4);
    puVar12[1] = pvVar10;
    return 1;
  }
LAB_1431532eb:
  AK::MemoryMgr::Free(g_DefaultPoolId,pvVar10);
  return 0x34;
}



// FUNCTION 143153320 FillHeader body=447 status=ok
// SIG undefined FillHeader(void)

undefined8
AkFileParser::FillHeader(int param_1,int param_2,int param_3,uint param_4,undefined4 *param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  int iVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  bool bVar12;
  
  iVar9 = 4;
  if (param_2 == 1) {
    iVar9 = 2;
  }
  *param_5 = 0x46464952;
  *(short *)((longlong)param_5 + 0x16) = (short)(param_4 & 0xff);
  iVar4 = iVar9 * (param_4 & 0xff);
  *(short *)(param_5 + 8) = (short)iVar4;
  *(short *)((longlong)param_5 + 0x22) = (short)iVar9 << 3;
  param_5[1] = 0xffffffff;
  param_5[2] = 0x45564157;
  param_5[3] = 0x20746d66;
  *(undefined2 *)(param_5 + 5) = 0xfffe;
  param_5[6] = param_1;
  *(undefined2 *)((longlong)param_5 + 0x26) = 0;
  param_5[7] = iVar4 * param_1;
  if (param_3 != 0) {
    param_5[4] = 0x18;
    *(undefined2 *)(param_5 + 9) = 0;
    param_5[10] = param_4;
    *(undefined8 *)(param_5 + 0xb) = 0x61746164;
    return 0x34;
  }
  *(undefined2 *)(param_5 + 9) = 0x16;
  param_5[4] = 0x28;
  param_5[10] = param_4 >> 0xc;
  bVar12 = (param_4 & 0xf00) != 0x200;
  param_5[0xb] = 1;
  uVar11 = 0;
  if (bVar12) {
    uVar11 = 0x38;
  }
  uVar6 = 0xca;
  if (bVar12) {
    uVar6 = 0;
  }
  uVar1 = 0;
  if (bVar12) {
    uVar1 = 0x71;
  }
  uVar3 = 0x721;
  uVar2 = 0;
  if (bVar12) {
    uVar3 = 0;
    uVar2 = 0x9b;
  }
  *(undefined2 *)(param_5 + 0xc) = uVar3;
  uVar5 = 0xc1;
  if (bVar12) {
    uVar5 = 0xaa;
  }
  uVar7 = 0x86;
  if (bVar12) {
    uVar7 = 0x80;
  }
  uVar8 = 0x44;
  if (bVar12) {
    uVar8 = 0;
  }
  uVar10 = 200;
  if (bVar12) {
    uVar10 = 0;
  }
  uVar3 = 0x11d3;
  if (bVar12) {
    uVar3 = 0x10;
  }
  *(undefined2 *)((longlong)param_5 + 0x32) = uVar3;
  *(undefined1 *)(param_5 + 0xd) = uVar7;
  *(undefined1 *)((longlong)param_5 + 0x35) = uVar8;
  *(undefined1 *)((longlong)param_5 + 0x36) = uVar10;
  *(undefined1 *)((longlong)param_5 + 0x37) = uVar5;
  *(undefined1 *)(param_5 + 0xe) = uVar6;
  *(undefined1 *)((longlong)param_5 + 0x39) = uVar11;
  *(undefined1 *)((longlong)param_5 + 0x3a) = uVar2;
  *(undefined1 *)((longlong)param_5 + 0x3b) = uVar1;
  *(undefined8 *)(param_5 + 0xf) = 0x61746164;
  return 0x44;
}



// FUNCTION 1431534e0 FUN_1431534e0 body=98 status=ok
// SIG undefined FUN_1431534e0(void)

undefined ** FUN_1431534e0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b50f10) {
    _Init_thread_header(&DAT_146b50f10);
    if (DAT_146b50f10 == -1) {
      atexit((_func_5014 *)&LAB_143ec4350);
      _Init_thread_footer(&DAT_146b50f10);
    }
  }
  return &PTR_PTR_1467bdd10;
}



// FUNCTION 143153550 PassSampleData body=64 status=ok
// SIG undefined PassSampleData(void)

undefined8 AkCaptureFile::PassSampleData(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x60) == (longlong *)0x0) {
    return 2;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))();
  if ((int)uVar1 == 1) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + param_3;
  }
  return uVar1;
}



// FUNCTION 143153590 StartCapture body=354 status=ok
// SIG undefined StartCapture(void)

undefined8 *
AkCaptureMgr::StartCapture
          (longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
          undefined4 param_5,undefined4 param_6)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  
  puVar4 = *(undefined8 **)(param_1 + 8);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)FileCaptureWriterFactory::Instance();
    *(undefined8 **)(param_1 + 8) = puVar4;
  }
  plVar5 = (longlong *)(**(code **)*puVar4)();
  if (plVar5 != (longlong *)0x0) {
    puVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x68);
    if (puVar4 != (undefined8 *)0x0) {
      uVar7 = 0;
      puVar4[9] = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      puVar4[0xc] = plVar5;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      *(undefined4 *)(puVar4 + 8) = 0;
      uVar2 = AkFileParser::FillHeader(param_3,param_5,0,param_6,puVar4);
      iVar3 = (*(code *)**(undefined8 **)puVar4[0xc])
                        ((undefined8 *)puVar4[0xc],param_2,puVar4,uVar2);
      lVar1 = g_DefaultPoolId;
      if (iVar3 == 1) {
        return puVar4;
      }
      if (*(int *)(puVar4 + 10) != 0) {
        do {
          AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(puVar4[9] + 8 + uVar7 * 0x10));
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
        } while (uVar6 < *(uint *)(puVar4 + 10));
      }
      if ((void *)puVar4[9] != (void *)0x0) {
        *(undefined4 *)(puVar4 + 10) = 0;
        AK::MemoryMgr::Free(g_DefaultPoolId,(void *)puVar4[9]);
        puVar4[9] = 0;
        *(undefined4 *)((longlong)puVar4 + 0x54) = 0;
      }
      AK::MemoryMgr::Free(lVar1,puVar4);
      (**(code **)(*plVar5 + 0x20))(plVar5);
      return (undefined8 *)0x0;
    }
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143153700 StopCapture body=248 status=ok
// SIG undefined StopCapture(void)

undefined4 AkCaptureFile::StopCapture(void *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  
  plVar4 = *(longlong **)((longlong)param_1 + 0x60);
  if (plVar4 != (longlong *)0x0) {
    uVar6 = 0;
    iVar2 = 0;
    if (*(int *)((longlong)param_1 + 0x50) != 0) {
      iVar2 = AddMarkerData(param_1);
      plVar4 = *(longlong **)((longlong)param_1 + 0x60);
    }
    *(int *)((longlong)param_1 + 0x40) = *(int *)((longlong)param_1 + 0x5c);
    *(int *)((longlong)param_1 + 4) = iVar2 + 0x3c + *(int *)((longlong)param_1 + 0x5c);
    uVar3 = (**(code **)(*plVar4 + 8))(plVar4,param_1,0x44);
    (**(code **)(**(longlong **)((longlong)param_1 + 0x60) + 0x20))();
    *(undefined8 *)((longlong)param_1 + 0x60) = 0;
    lVar1 = g_DefaultPoolId;
    if (*(int *)((longlong)param_1 + 0x50) != 0) {
      do {
        AK::MemoryMgr::Free(g_DefaultPoolId,
                            *(void **)(*(longlong *)((longlong)param_1 + 0x48) + 8 + uVar6 * 0x10));
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)((longlong)param_1 + 0x50));
    }
    if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
      *(undefined4 *)((longlong)param_1 + 0x50) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)((longlong)param_1 + 0x48));
      *(undefined8 *)((longlong)param_1 + 0x48) = 0;
      *(undefined4 *)((longlong)param_1 + 0x54) = 0;
    }
    AK::MemoryMgr::Free(lVar1,param_1);
    return uVar3;
  }
  return 1;
}



// FUNCTION 143153800 CAkBankReader body=35 status=ok
// SIG undefined CAkBankReader(void)

undefined8 * CAkBankReader::CAkBankReader(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)((longlong)param_1 + 0x3d) = 0;
  return param_1;
}



// FUNCTION 143153830 CloseFile body=58 status=ok
// SIG undefined CloseFile(void)

undefined8 CAkBankReader::CloseFile(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 8))();
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return 1;
}



// FUNCTION 143153870 FillData body=431 status=ok
// SIG undefined FillData(void)

int CAkBankReader::FillData(undefined8 *param_1,void *param_2,uint param_3,uint *param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  uint7 uVar6;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  
  *param_4 = 0;
  if (param_1[6] == 0) {
    uVar5 = *(uint *)(param_1 + 2);
    if (param_3 < *(uint *)(param_1 + 2)) {
      uVar5 = param_3;
    }
    *param_4 = uVar5;
    *(uint *)(param_1 + 2) = *(int *)(param_1 + 2) - uVar5;
    ::_guard_xfg_dispatch_icall_nop(param_2,(void *)param_1[5],(ulonglong)*param_4);
    param_1[5] = param_1[5] + (ulonglong)*param_4;
  }
  else if (param_3 != 0) {
    puVar1 = (uint *)(param_1 + 2);
    do {
      uVar5 = *puVar1;
      if (uVar5 == 0) {
        plVar3 = (longlong *)param_1[6];
        uVar5 = *(uint *)((longlong)param_1 + 0x14);
        uVar2 = *(uint *)(param_1 + 3);
        uVar6 = (uint7)(uint3)(uVar2 >> 8);
        if (param_3 < uVar5) {
          uVar5 = uVar5 - uVar5 % uVar2;
          iVar4 = (**(code **)(*plVar3 + 0x30))
                            (plVar3,*param_1,uVar5,CONCAT71(uVar6,1),
                             *(undefined1 *)((longlong)param_1 + 0x3c),
                             (float)uVar5 / *(float *)(param_1 + 7),puVar1);
          if (iVar4 != 1) {
            return iVar4;
          }
          iVar4 = (**(code **)(*(longlong *)param_1[6] + 0x60))();
          if (iVar4 != 1) {
            return 1;
          }
          param_1[1] = *param_1;
          if (*puVar1 == 0) {
            return 1;
          }
        }
        else {
          uVar5 = param_3 - param_3 % uVar2;
          iVar4 = (**(code **)(*plVar3 + 0x30))
                            (plVar3,param_2,uVar5,CONCAT71(uVar6,1),
                             *(undefined1 *)((longlong)param_1 + 0x3c),
                             (float)uVar5 / *(float *)(param_1 + 7),local_res10);
          if (iVar4 != 1) {
            return iVar4;
          }
          iVar4 = (**(code **)(*(longlong *)param_1[6] + 0x60))();
          if (iVar4 != 1) {
            return 1;
          }
          *param_4 = *param_4 + local_res10[0];
          param_2 = (void *)((longlong)param_2 + (ulonglong)local_res10[0]);
          param_3 = param_3 - local_res10[0];
          if (*(uint *)((longlong)param_1 + 0x14) <= param_3) {
            (**(code **)(*(longlong *)param_1[6] + 0x40))((longlong *)param_1[6],local_res8);
            return 2;
          }
        }
      }
      else {
        if (param_3 <= uVar5) {
          uVar5 = param_3;
        }
        ::_guard_xfg_dispatch_icall_nop(param_2,(void *)param_1[1],(ulonglong)uVar5);
        param_1[1] = param_1[1] + (ulonglong)uVar5;
        param_2 = (void *)((longlong)param_2 + (ulonglong)uVar5);
        *param_4 = *param_4 + uVar5;
        *puVar1 = *puVar1 - uVar5;
        param_3 = param_3 - uVar5;
      }
    } while (param_3 != 0);
  }
  return 1;
}



// FUNCTION 143153a20 FillDataEx body=50 status=ok
// SIG undefined FillDataEx(void)

ulonglong CAkBankReader::FillDataEx(undefined8 param_1,undefined8 param_2,int param_3)

{
  ulonglong uVar1;
  
  uVar1 = FillData();
  if (((int)uVar1 == 1) && (uVar1 = uVar1 & 0xffffffff, param_3 != 0)) {
    uVar1 = 0x38;
  }
  return uVar1;
}



// FUNCTION 143153a60 GetData body=244 status=ok
// SIG undefined GetData(void)

void * CAkBankReader::GetData(longlong param_1,uint param_2)

{
  int iVar1;
  void *pvVar2;
  ulonglong uVar3;
  void *pvVar4;
  ulonglong uVar5;
  uint uVar6;
  uint local_res8 [2];
  
  uVar6 = *(uint *)(param_1 + 0x10);
  uVar5 = (ulonglong)param_2;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    pvVar4 = *(void **)(param_1 + 0x28);
    uVar3 = (ulonglong)uVar6;
    if (param_2 < uVar6) {
      uVar3 = uVar5;
    }
    *(uint *)(param_1 + 0x10) = uVar6 - (int)uVar3;
    *(ulonglong *)(param_1 + 0x28) = uVar3 + (longlong)pvVar4;
    return pvVar4;
  }
  if (uVar6 < param_2) {
    uVar6 = uVar6 & 0x1f;
    uVar3 = (ulonglong)(param_2 + 0x1f);
    if (uVar6 == 0) {
      uVar3 = uVar5;
    }
    pvVar4 = (void *)(ulonglong)(0x20 - uVar6);
    if (uVar6 == 0) {
      pvVar4 = (void *)0x0;
    }
    pvVar2 = AK::MemoryMgr::Malign(g_DefaultPoolId,uVar3,0x20);
    *(void **)(param_1 + 0x20) = pvVar2;
    if (pvVar2 != (void *)0x0) {
      pvVar2 = (void *)((longlong)pvVar4 + (longlong)pvVar2);
      iVar1 = FillData(param_1,pvVar2,uVar5,local_res8);
      if ((iVar1 != 1) || (local_res8[0] != param_2)) {
        AK::MemoryMgr::Falign(g_DefaultPoolId,*(void **)(param_1 + 0x20));
        *(undefined8 *)(param_1 + 0x20) = 0;
        pvVar2 = (void *)0x0;
      }
    }
    return pvVar2;
  }
  pvVar4 = *(void **)(param_1 + 8);
  *(uint *)(param_1 + 0x10) = uVar6 - param_2;
  *(ulonglong *)(param_1 + 8) = (longlong)pvVar4 + uVar5;
  return pvVar4;
}



// FUNCTION 143153b60 FUN_143153b60 body=44 status=ok
// SIG undefined FUN_143153b60(void)

undefined8 FUN_143153b60(undefined8 *param_1)

{
  if (*(char *)((longlong)param_1 + 0x3d) != '\0') {
    return 2;
  }
  *(undefined2 *)((longlong)param_1 + 0x3c) = 0x132;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 7) = 0x4483126f;
  return 1;
}



// FUNCTION 143153b90 ReleaseData body=43 status=ok
// SIG undefined ReleaseData(void)

void CAkBankReader::ReleaseData(longlong param_1)

{
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    AK::MemoryMgr::Falign(g_DefaultPoolId,*(void **)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 143153bc0 Reset body=17 status=ok
// SIG undefined Reset(void)

void CAkBankReader::Reset(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[1] = *param_1;
  param_1[5] = 0;
  return;
}



// FUNCTION 143153be0 FUN_143153be0 body=35 status=ok
// SIG undefined FUN_143153be0(void)

undefined8 FUN_143153be0(longlong param_1,float param_2,byte param_3)

{
  if ((0.0 <= param_2) && (param_3 < 0x65)) {
    *(float *)(param_1 + 0x38) = param_2;
    *(byte *)(param_1 + 0x3c) = param_3;
    return 1;
  }
  return 0x1f;
}



// FUNCTION 143153c10 FUN_143153c10 body=398 status=ok
// SIG undefined FUN_143153c10(void)

int FUN_143153c10(longlong *param_1,ulonglong param_2,int param_3,undefined4 param_4,
                 undefined8 param_5,int param_6)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_38;
  char local_30;
  undefined4 local_2c;
  
  cVar2 = (char)param_6;
  local_30 = (char)param_6;
  local_2c = 0xffffffff;
  plVar1 = param_1 + 6;
  local_48 = 0;
  local_38 = param_5;
  local_40 = 0;
  local_44 = param_4;
  iVar3 = (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x18))
                    (AK::IAkStreamMgr::m_pStreamMgr,param_2,&local_48,0,plVar1,1);
  if (iVar3 != 1) {
    if (cVar2 != '\0') {
      local_30 = '\0';
      iVar3 = (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x18))
                        (AK::IAkStreamMgr::m_pStreamMgr,param_2 & 0xffffffff,&local_48,0,plVar1,1);
    }
    if (iVar3 != 1) {
      return iVar3;
    }
  }
  iVar3 = 1;
  uVar4 = (**(code **)(*(longlong *)*plVar1 + 0x28))();
  *(uint *)(param_1 + 3) = uVar4;
  if (uVar4 == 0) {
    iVar3 = 2;
  }
  else {
    if (*(uint *)((longlong)param_1 + 0x14) < uVar4) {
      if ((void *)*param_1 != (void *)0x0) {
        AK::MemoryMgr::Falign(g_DefaultPoolId,(void *)*param_1);
        uVar4 = *(uint *)(param_1 + 3);
      }
      uVar5 = 0x8000;
      if (0x8000 < uVar4) {
        uVar5 = uVar4;
      }
      *(uint *)((longlong)param_1 + 0x14) = uVar5;
      pvVar6 = AK::MemoryMgr::Malign(g_DefaultPoolId,(ulonglong)uVar5,0x20);
      *param_1 = (longlong)pvVar6;
    }
    if (*param_1 == 0) {
      iVar3 = 0x34;
    }
    else if (param_3 != 0) {
      param_5 = 0;
      iVar3 = (**(code **)(*(longlong *)*plVar1 + 0x48))((longlong *)*plVar1,param_3,0,&param_5);
      if (iVar3 == 1) {
        param_3 = param_3 - (int)param_5;
        iVar3 = CAkBankReader::Skip(param_1,param_3,&param_6);
        if (param_6 != param_3) {
          iVar3 = 2;
        }
      }
    }
  }
  return iVar3;
}



// FUNCTION 143153da0 FUN_143153da0 body=451 status=ok
// SIG undefined FUN_143153da0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_143153da0(longlong *param_1,LPCSTR param_2,int param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  void *pvVar9;
  ulonglong uVar10;
  int local_res8 [2];
  undefined8 local_res20;
  undefined8 auStack_90 [5];
  longlong local_68;
  int aiStack_60 [2];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined4 local_3c;
  
  lVar7 = -1;
  local_58 = 0;
  local_50 = 0;
  local_3c = 0xffffffff;
  local_40 = 1;
  local_48 = param_4;
  do {
    lVar3 = lVar7 + 1;
    lVar7 = lVar7 + 1;
  } while (param_2[lVar3] != '\0');
  uVar10 = lVar7 * 2 + 0x11;
  if (uVar10 <= lVar7 * 2 + 2U) {
    uVar10 = 0xffffffffffffff0;
  }
  auStack_90[0] = 0x143153e13;
  lVar3 = -(uVar10 & 0xfffffffffffffff0);
  lVar8 = -1;
  lVar7 = (longlong)&local_58 + lVar3;
  do {
    lVar8 = lVar8 + 1;
  } while (param_2[lVar8] != '\0');
  *(int *)((longlong)aiStack_60 + lVar3) = (int)lVar8 + 1;
  *(longlong *)((longlong)&local_68 + lVar3) = lVar7;
  *(undefined8 *)((longlong)auStack_90 + lVar3) = 0x143153e4c;
  MultiByteToWideChar(0xfde9,0,param_2,-1,*(LPWSTR *)((longlong)&local_68 + lVar3),
                      *(int *)((longlong)aiStack_60 + lVar3));
  plVar2 = param_1 + 6;
  *(undefined1 *)((longlong)aiStack_60 + lVar3) = 1;
  *(longlong **)((longlong)&local_68 + lVar3) = plVar2;
  pcVar1 = *(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x20);
  *(undefined8 *)((longlong)auStack_90 + lVar3) = 0x143153e71;
  iVar4 = (*pcVar1)(AK::IAkStreamMgr::m_pStreamMgr,lVar7,&local_58,0);
  if (iVar4 != 1) {
    local_40 = 0;
    *(undefined1 *)((longlong)aiStack_60 + lVar3) = 1;
    *(longlong **)((longlong)&local_68 + lVar3) = plVar2;
    pcVar1 = *(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x20);
    *(undefined8 *)((longlong)auStack_90 + lVar3) = 0x143153e9d;
    iVar4 = (*pcVar1)(AK::IAkStreamMgr::m_pStreamMgr,lVar7,&local_58,0);
    if (iVar4 != 1) {
      return iVar4;
    }
  }
  iVar4 = 1;
  pcVar1 = *(code **)(*(longlong *)*plVar2 + 0x28);
  *(undefined8 *)((longlong)auStack_90 + lVar3) = 0x143153eb1;
  uVar5 = (*pcVar1)();
  *(uint *)(param_1 + 3) = uVar5;
  if (uVar5 == 0) {
    iVar4 = 2;
  }
  else {
    if (*(uint *)((longlong)param_1 + 0x14) < uVar5) {
      pvVar9 = (void *)*param_1;
      if (pvVar9 != (void *)0x0) {
        *(undefined8 *)((longlong)auStack_90 + lVar3) = 0x143153eda;
        AK::MemoryMgr::Falign(g_DefaultPoolId,pvVar9);
        uVar5 = *(uint *)(param_1 + 3);
      }
      uVar6 = 0x8000;
      if (0x8000 < uVar5) {
        uVar6 = uVar5;
      }
      *(uint *)((longlong)param_1 + 0x14) = uVar6;
      *(undefined8 *)((longlong)auStack_90 + lVar3) = 0x143153efd;
      pvVar9 = AK::MemoryMgr::Malign(g_DefaultPoolId,(ulonglong)uVar6,0x20);
      *param_1 = (longlong)pvVar9;
    }
    if (*param_1 == 0) {
      iVar4 = 0x34;
    }
    else if (param_3 != 0) {
      plVar2 = (longlong *)*plVar2;
      local_res20 = 0;
      pcVar1 = *(code **)(*plVar2 + 0x48);
      *(undefined8 *)((longlong)auStack_90 + lVar3) = 0x143153f27;
      iVar4 = (*pcVar1)(plVar2,param_3,0,&local_res20);
      if (iVar4 == 1) {
        param_3 = param_3 - (int)local_res20;
        *(undefined8 *)((longlong)auStack_90 + lVar3) = 0x143153f3f;
        iVar4 = CAkBankReader::Skip(param_1,param_3,local_res8);
        if (local_res8[0] != param_3) {
          iVar4 = 2;
        }
      }
    }
  }
  return iVar4;
}



// FUNCTION 143153f70 SetFile body=14 status=ok
// SIG undefined SetFile(void)

undefined8 CAkBankReader::SetFile(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return 1;
}



// FUNCTION 143153f80 Skip body=320 status=ok
// SIG undefined Skip(void)

int CAkBankReader::Skip(longlong *param_1,uint param_2,uint *param_3)

{
  uint *puVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  char local_res8;
  undefined7 uStackX_9;
  
  *param_3 = 0;
  if (param_1[6] == 0) {
    uVar6 = *(uint *)(param_1 + 2);
    if (param_2 < *(uint *)(param_1 + 2)) {
      uVar6 = param_2;
    }
    *param_3 = uVar6;
    *(uint *)(param_1 + 2) = (int)param_1[2] - uVar6;
    param_1[5] = param_1[5] + (ulonglong)*param_3;
  }
  else if (param_2 != 0) {
    puVar1 = (uint *)(param_1 + 2);
    do {
      uVar5 = (ulonglong)param_2;
      uVar6 = *puVar1;
      if (uVar6 == 0) {
        uVar6 = *(uint *)((longlong)param_1 + 0x14);
        plVar2 = (longlong *)param_1[6];
        if (param_2 <= uVar6) {
          uVar6 = uVar6 - uVar6 % *(uint *)(param_1 + 3);
          iVar3 = (**(code **)(*plVar2 + 0x30))
                            (plVar2,*param_1,uVar6,1,*(undefined1 *)((longlong)param_1 + 0x3c),
                             (float)uVar6 / *(float *)(param_1 + 7),puVar1);
          if (iVar3 != 1) {
            return iVar3;
          }
          iVar3 = (**(code **)(*(longlong *)param_1[6] + 0x60))();
          if (iVar3 != 1) {
            return 1;
          }
          (**(code **)(*(longlong *)param_1[6] + 0x40))((longlong *)param_1[6],&local_res8);
          if ((local_res8 != '\0') && (*puVar1 < param_2)) {
            return 2;
          }
          param_1[1] = uVar5 + *param_1;
          *param_3 = *param_3 + param_2;
          *puVar1 = *puVar1 - param_2;
          return 1;
        }
        iVar3 = (**(code **)(*plVar2 + 0x48))(plVar2,uVar5,1,&local_res8);
        if (iVar3 != 1) {
          return iVar3;
        }
        iVar3 = (int)CONCAT71(uStackX_9,local_res8);
        *param_3 = *param_3 + iVar3;
      }
      else {
        uVar4 = (ulonglong)uVar6;
        if (param_2 <= uVar6) {
          uVar4 = uVar5;
        }
        param_1[1] = param_1[1] + uVar4;
        iVar3 = (int)uVar4;
        *param_3 = *param_3 + iVar3;
        *puVar1 = *puVar1 - iVar3;
      }
      param_2 = param_2 - iVar3;
    } while (param_2 != 0);
  }
  return 1;
}



// FUNCTION 1431540c0 Term body=65 status=ok
// SIG undefined Term(void)

undefined8 CAkBankReader::Term(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    AK::MemoryMgr::Falign(g_DefaultPoolId,(void *)*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    return 1;
  }
  param_1[1] = 0;
  return 1;
}



// FUNCTION 143154110 CAkBankMgr body=145 status=ok
// SIG undefined CAkBankMgr(void)

undefined8 * CAkBankMgr::CAkBankMgr(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ac7b68;
  CAkBankReader::CAkBankReader(param_1 + 1);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 1;
  CAkBankCallbackMgr::CAkBankCallbackMgr(param_1 + 0x1a);
  return param_1;
}



// FUNCTION 1431541b0 ~CAkBankMgr body=138 status=ok
// SIG undefined ~CAkBankMgr(void)

void CAkBankMgr::~CAkBankMgr(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ac7b68;
  CAkBankCallbackMgr::~CAkBankCallbackMgr(param_1 + 0x1a);
  if ((void *)param_1[0x14] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x15) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[0x14]);
    param_1[0x14] = 0;
    *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  }
  if ((void *)param_1[0xe] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0xf) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[0xe]);
    param_1[0xe] = 0;
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  AK::MemoryMgr::StartProfileThreadUsage((int)param_1 + 8);
  return;
}



// FUNCTION 143154240 `scalar_deleting_destructor' body=173 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkBankMgr::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ac7b68;
  CAkBankCallbackMgr::~CAkBankCallbackMgr(param_1 + 0x1a);
  if ((void *)param_1[0x14] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x15) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[0x14]);
    param_1[0x14] = 0;
    *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  }
  if ((void *)param_1[0xe] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0xf) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[0xe]);
    param_1[0xe] = 0;
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  AK::MemoryMgr::StartProfileThreadUsage((int)param_1 + 8);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 1431542f0 AddLoadedItem body=31 status=ok
// SIG undefined AddLoadedItem(void)

void CAkBankMgr::AddLoadedItem(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_2 + 0x68);
  if (uVar2 < *(uint *)(param_2 + 0x6c)) {
    *(uint *)(param_2 + 0x68) = uVar2 + 1;
    puVar1 = (undefined8 *)(*(longlong *)(param_2 + 0x60) + (ulonglong)uVar2 * 8);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = param_3;
    }
  }
  return;
}



// FUNCTION 143154310 FUN_143154310 body=564 status=ok
// SIG undefined FUN_143154310(void)

int FUN_143154310(longlong param_1,uint *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 local_38;
  uint local_30;
  
  iVar1 = 1;
  iVar2 = 1;
  if (param_3 != 0) {
    if (param_2 == (uint *)0x0) {
      return 2;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
    uVar7 = 0;
    puVar6 = param_2;
    if (param_3 != 0) {
      do {
        if ((*(longlong *)(puVar6 + 2) == 0) || (puVar6[4] == 0)) {
LAB_143154480:
          iVar1 = 2;
          goto LAB_143154485;
        }
        if (*(uint *)(param_1 + 0x78) == 0) {
LAB_1431543d8:
          puVar3 = (undefined8 *)
                   AkHashList<unsigned_long,AkMediaEntry,AkArrayAllocatorNoAlign<0>_>::Set
                             (param_1 + 0x70);
          if (puVar3 == (undefined8 *)0x0) goto LAB_143154480;
          *(uint *)((longlong)puVar3 + 0x24) = *puVar6;
        }
        else {
          for (puVar3 = *(undefined8 **)
                         (*(longlong *)(param_1 + 0x70) +
                         ((ulonglong)*puVar6 % (ulonglong)*(uint *)(param_1 + 0x78)) * 8);
              puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3) {
            if (*(uint *)(puVar3 + 1) == *puVar6) {
              puVar3 = puVar3 + 2;
              goto LAB_1431543c8;
            }
          }
          puVar3 = (undefined8 *)0x0;
LAB_1431543c8:
          if (puVar3 == (undefined8 *)0x0) goto LAB_1431543d8;
          *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + 1;
        }
        puVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x10);
        if (puVar4 == (undefined8 *)0x0) goto LAB_143154480;
        *(byte *)(puVar4 + 1) = *(byte *)(puVar4 + 1) & 0xfc;
        *puVar4 = &PTR_StartProfileThreadUsage_144fae690;
        local_38 = *(undefined8 *)(puVar6 + 2);
        local_30 = puVar6[4];
        lVar5 = FUN_14315a610(puVar3 + 2,puVar4,&local_38);
        iVar1 = 0x34;
        if (lVar5 == 0) {
          AK::MemoryMgr::Free(g_DefaultPoolId,puVar4);
          break;
        }
        iVar1 = 1;
        uVar7 = uVar7 + 1;
        puVar6 = puVar6 + 6;
      } while (uVar7 < param_3);
      if (iVar1 != 1) {
LAB_143154485:
        uVar8 = (ulonglong)(uVar7 + 1);
        do {
          if (*(uint *)(param_1 + 0x78) != 0) {
            for (puVar3 = *(undefined8 **)
                           (*(longlong *)(param_1 + 0x70) +
                           ((ulonglong)*param_2 % (ulonglong)*(uint *)(param_1 + 0x78)) * 8);
                puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3) {
              if (*(uint *)(puVar3 + 1) == *param_2) {
                puVar4 = puVar3 + 2;
                if (puVar4 != (undefined8 *)0x0) {
                  FUN_143159f40(puVar4);
                  iVar2 = *(int *)(puVar3 + 6) + -1;
                  *(int *)(puVar3 + 6) = iVar2;
                  if ((iVar2 == 0) && ((void *)*puVar4 != (void *)0x0)) {
                    AK::MemoryMgr::Falign(DAT_146b50bc8,(void *)*puVar4);
                    iVar2 = *(int *)(puVar3 + 6);
                    *puVar4 = 0;
                    *(undefined4 *)(puVar3 + 3) = 0;
                  }
                  if (iVar2 == 0) {
                    AkHashList<unsigned_long,AkMediaEntry,AkArrayAllocatorNoAlign<_ArrayPoolDefault>_>
                    ::Unset((longlong *)(param_1 + 0x70));
                  }
                }
                break;
              }
            }
          }
          param_2 = param_2 + 6;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
    iVar2 = iVar1;
  }
  return iVar2;
}



// FUNCTION 143154550 FUN_143154550 body=353 status=ok
// SIG undefined FUN_143154550(void)

longlong FUN_143154550(longlong *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  
  uVar1 = *(uint *)(param_1 + 1);
  iVar11 = 0;
  uVar3 = *param_2;
  iVar13 = uVar1 - 1;
  if (-1 < iVar13) {
    lVar14 = *param_1;
    do {
      iVar8 = (iVar13 - iVar11) / 2 + iVar11;
      lVar10 = (longlong)iVar8 * 0x20 + lVar14;
      if ((uint)param_2[1] < *(uint *)(lVar10 + 4)) {
        iVar13 = iVar8 + -1;
      }
      else {
        if ((uint)param_2[1] <= *(uint *)(lVar10 + 4)) goto LAB_1431545c9;
        iVar11 = iVar8 + 1;
      }
    } while (iVar11 <= iVar13);
  }
  lVar14 = *param_1;
  if (lVar14 == 0) {
    lVar10 = 0;
    lVar14 = 0;
  }
  else {
    lVar10 = (longlong)iVar11 * 0x20 + lVar14;
  }
LAB_1431545c9:
  if (lVar10 == 0) {
    if (((uVar1 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar7 = FUN_143155cd0(uVar3,8,iVar11,iVar13,uVar3,param_2[2]), cVar7 != '\0')) &&
       (uVar1 < *(uint *)((longlong)param_1 + 0xc))) {
      uVar1 = *(uint *)(param_1 + 1);
      *(uint *)(param_1 + 1) = uVar1 + 1;
      return (ulonglong)uVar1 * 0x20 + *param_1;
    }
  }
  else if (((uVar1 < *(uint *)((longlong)param_1 + 0xc)) ||
           (cVar7 = FUN_143155cd0(uVar3,8,iVar11,iVar13,uVar3,param_2[2]), cVar7 != '\0')) &&
          (uVar1 < *(uint *)((longlong)param_1 + 0xc))) {
    lVar12 = *param_1;
    puVar9 = (undefined8 *)((ulonglong)*(uint *)(param_1 + 1) * 0x20 + lVar12);
    lVar14 = (lVar10 - lVar14 >> 5 & 0xffffffffU) * 0x20;
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
    puVar2 = puVar9;
    if ((undefined8 *)(lVar14 + lVar12) < puVar9) {
      do {
        uVar4 = puVar2[-3];
        uVar5 = puVar2[-2];
        uVar6 = puVar2[-1];
        *puVar9 = puVar2[-4];
        puVar9[1] = uVar4;
        puVar9[2] = uVar5;
        puVar9[3] = uVar6;
        lVar12 = *param_1;
        puVar9 = puVar9 + -4;
        puVar2 = puVar2 + -4;
      } while ((undefined8 *)(lVar12 + lVar14) < puVar9);
    }
    return lVar14 + lVar12;
  }
  return 0;
}



// FUNCTION 1431546c0 CheckBankDataAlignment body=17 status=ok
// SIG undefined CheckBankDataAlignment(void)

undefined8 CAkBankMgr::CheckBankDataAlignment(ulonglong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if ((param_1 & 0xf) != 0) {
    uVar1 = 0x59;
  }
  return uVar1;
}



// FUNCTION 1431546e0 FUN_1431546e0 body=358 status=ok
// SIG undefined FUN_1431546e0(void)

bool FUN_1431546e0(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char cVar7;
  uint uVar8;
  uint *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar10 = (ulonglong)uVar1;
  if ((uVar1 == 0) || (0.9 < (float)*(uint *)(param_1 + 2) / (float)uVar10)) {
    puVar9 = &DAT_145ac7af0;
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
                puVar6 = (undefined8 *)*puVar12;
                while (puVar6 != (undefined8 *)0x0) {
                  uVar1 = *(uint *)(param_1 + 1);
                  puVar5 = (undefined8 *)*puVar6;
                  *puVar6 = *(undefined8 *)
                             (*param_1 + ((ulonglong)*(uint *)(puVar6 + 1) % (ulonglong)uVar1) * 8);
                  *(undefined8 **)
                   (*param_1 + ((ulonglong)*(uint *)(puVar6 + 1) % (ulonglong)uVar1) * 8) = puVar6;
                  puVar6 = puVar5;
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



// FUNCTION 143154850 FUN_143154850 body=512 status=ok
// SIG undefined FUN_143154850(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_143154850(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  undefined1 auStack_88 [32];
  longlong *local_68;
  uint uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  longlong lStack_30;
  
  iVar11 = 0;
  plVar10 = (longlong *)0x0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b51fe0);
  plVar1 = (longlong *)(param_1 + 0x88);
  puVar7 = auStack_88;
  iVar12 = iVar11;
  if (*(uint *)(param_1 + 0x98) != 0) {
    uVar2 = (ulonglong)*(uint *)(param_1 + 0x98) * 8;
    uVar3 = uVar2 + 0xf;
    if (uVar3 <= uVar2) {
      uVar3 = 0xffffffffffffff0;
    }
    lVar6 = -(uVar3 & 0xfffffffffffffff0);
    plVar10 = (longlong *)((longlong)&local_68 + lVar6);
    puVar7 = auStack_88 + lVar6;
    iVar12 = 0;
    if (*(uint *)(param_1 + 0x90) != 0) {
      uVar3 = 0;
      lVar9 = 0;
      lVar4 = *(longlong *)*plVar1;
      while (plVar13 = plVar10, lVar4 == 0) {
        uVar8 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar8;
        puVar7 = auStack_88 + lVar6;
        if (*(uint *)(param_1 + 0x90) <= uVar8) goto LAB_1431549ad;
        lVar4 = ((longlong *)*plVar1)[uVar3];
      }
LAB_143154910:
      do {
        if ((*(byte *)(lVar4 + 0x78) & 1) == 0) {
          lVar5 = *(longlong *)(lVar4 + 0x20);
          lVar9 = lVar4;
          if (lVar5 == 0) {
            do {
              uVar8 = (int)uVar3 + 1;
              uVar3 = (ulonglong)uVar8;
              if (*(uint *)(param_1 + 0x90) <= uVar8) goto LAB_1431549a0;
              lVar9 = 0;
              lVar5 = *(longlong *)(*plVar1 + uVar3 * 8);
              lVar4 = lVar5;
            } while (lVar5 == 0);
            goto LAB_143154910;
          }
        }
        else {
          *plVar13 = lVar4;
          iVar11 = iVar11 + 1;
          lVar4 = *(longlong *)(lVar4 + 0x20);
          plVar13 = plVar13 + 1;
          uStack_60 = (uint)uVar3;
          local_58 = lVar4;
          lStack_50 = lVar9;
          if (lVar4 == 0) {
            uVar2 = uVar3;
            do {
              uStack_60 = (int)uVar2 + 1;
              uVar2 = (ulonglong)uStack_60;
              if (*(uint *)(param_1 + 0x90) <= uStack_60) break;
              lStack_50 = 0;
              local_58 = *(longlong *)(*plVar1 + uVar2 * 8);
            } while (local_58 == 0);
          }
          if (lVar9 == 0) {
            *(longlong *)(*plVar1 + uVar3 * 8) = lVar4;
          }
          else {
            *(longlong *)(lVar9 + 0x20) = lVar4;
          }
          *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + -1;
          uStack_40 = uStack_60;
          uStack_3c = uStack_5c;
          uVar3 = (ulonglong)uStack_60;
          local_38 = local_58;
          lStack_30 = lStack_50;
          lVar5 = local_58;
          lVar9 = lStack_50;
          local_68 = plVar1;
          local_48 = plVar1;
        }
LAB_1431549a0:
        lVar4 = lVar5;
        puVar7 = auStack_88 + lVar6;
        iVar12 = iVar11;
      } while (lVar5 != 0);
    }
  }
LAB_1431549ad:
  *(undefined8 *)(puVar7 + -8) = 0x1431549ba;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b51fe0);
  lVar6 = (longlong)(iVar12 + -1);
  if (-1 < iVar12 + -1) {
    do {
      lVar4 = plVar10[lVar6];
      *(undefined8 *)(puVar7 + -8) = 0x1431549dc;
      FUN_143155e50(param_1,lVar4);
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  *(undefined8 *)(puVar7 + -8) = 0x1431549f3;
  FUN_143156cd0(param_1,param_2,1);
  return 1;
}



// FUNCTION 143154a50 FUN_143154a50 body=320 status=ok
// SIG undefined FUN_143154a50(void)

void FUN_143154a50(undefined8 param_1)

{
  longlong lVar1;
  uint uVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar3;
  
  lVar1 = DAT_146b50af8;
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0xc0);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  EnterCriticalSection(lpCriticalSection);
  if (*(uint *)(lVar1 + 0xf0) != 0) {
    uVar3 = 0;
    plVar5 = (longlong *)**(undefined8 **)(lVar1 + 0xe8);
    while (plVar5 == (longlong *)0x0) {
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      if (*(uint *)(lVar1 + 0xf0) <= uVar2) goto LAB_143154b4c;
      plVar5 = (longlong *)(*(undefined8 **)(lVar1 + 0xe8))[uVar3];
    }
LAB_143154ad0:
    do {
      if ((int)plVar5[5] == 0) {
        plVar5 = (longlong *)plVar5[1];
        if (plVar5 == (longlong *)0x0) {
          do {
            uVar2 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar2;
            if (*(uint *)(lVar1 + 0xf0) <= uVar2) goto LAB_143154b33;
            plVar5 = *(longlong **)(*(longlong *)(lVar1 + 0xe8) + uVar3 * 8);
          } while (plVar5 == (longlong *)0x0);
          goto LAB_143154ad0;
        }
      }
      else {
        (**(code **)(*plVar5 + 8))(plVar5);
        if ((int)plVar5[5] != 0) {
          *(undefined4 *)(plVar5 + 5) = 0;
          FUN_14315afb0(param_1,1,plVar5);
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
        plVar4 = (longlong *)plVar5[1];
        if (plVar4 == (longlong *)0x0) {
          do {
            uVar2 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar2;
            if (*(uint *)(lVar1 + 0xf0) <= uVar2) break;
            plVar4 = *(longlong **)(*(longlong *)(lVar1 + 0xe8) + uVar3 * 8);
          } while (plVar4 == (longlong *)0x0);
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
        plVar5 = plVar4;
      }
LAB_143154b33:
    } while (plVar5 != (longlong *)0x0);
  }
LAB_143154b4c:
  LeaveCriticalSection(lpCriticalSection);
                    /* WARNING: Could not recover jumptable at 0x000143154b62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  return;
}



// FUNCTION 143154b90 Copy body=340 status=ok
// SIG undefined Copy(void)

undefined8 AkFileNameString::Copy(undefined8 *param_1,void *param_2,void *param_3)

{
  bool bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *_Dst;
  undefined8 uVar4;
  char *pcVar5;
  ulonglong uVar6;
  longlong lVar8;
  ulonglong uVar9;
  __uint64 _Var10;
  ulonglong uVar7;
  
  if (*(char *)(param_1 + 1) != '\0') {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*param_1);
  }
  uVar9 = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  if (param_2 == (void *)0x0) {
    return 1;
  }
  uVar2 = 0xffffffffffffffff;
  uVar6 = 0xffffffffffffffff;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (*(char *)(uVar6 + (longlong)param_2) != '\0');
  uVar3 = uVar9;
  if (param_3 != (void *)0x0) {
    do {
      uVar2 = uVar2 + 1;
      uVar3 = uVar2;
    } while (*(char *)((longlong)param_3 + uVar2) != '\0');
  }
  uVar2 = uVar3 & 0xffffffff;
  bVar1 = true;
  uVar6 = uVar6 & 0xffffffff;
  if (uVar2 < uVar6) {
    bVar1 = false;
    pcVar5 = (char *)((uVar6 - uVar2) + (longlong)param_2);
    if ((int)uVar3 != 0) {
      lVar8 = (longlong)param_3 - (longlong)pcVar5;
      uVar3 = uVar9;
      do {
        if (*pcVar5 != pcVar5[lVar8]) {
          bVar1 = true;
          goto LAB_143154c53;
        }
        uVar3 = (ulonglong)((int)uVar3 + 1);
        pcVar5 = pcVar5 + 1;
      } while (uVar3 < uVar2);
      bVar1 = false;
    }
  }
LAB_143154c53:
  uVar3 = uVar2;
  if (!bVar1) {
    uVar3 = uVar9;
  }
  _Var10 = uVar3 + ((int)uVar7 + 2);
  _Dst = AK::MemoryMgr::Malloc(g_DefaultPoolId,_Var10);
  if (_Dst == (void *)0x0) {
    uVar4 = 0x34;
  }
  else {
    ::_guard_xfg_dispatch_icall_nop(_Dst,param_2,uVar6);
    if (bVar1) {
      ::_guard_xfg_dispatch_icall_nop((void *)((longlong)_Dst + uVar6),param_3,uVar2);
    }
    *(undefined1 *)((longlong)_Dst + (_Var10 - 1)) = 0;
    uVar4 = 1;
    *param_1 = _Dst;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return uVar4;
}



// FUNCTION 143154cf0 Copy body=324 status=ok
// SIG undefined Copy(void)

undefined8 AkFileNameString::Copy(undefined8 *param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  short *psVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar12;
  ulonglong uVar7;
  ulonglong uVar11;
  
  if (*(char *)(param_1 + 1) != '\0') {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*param_1);
  }
  uVar9 = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  if (param_2 == 0) {
    return 1;
  }
  uVar6 = 0xffffffffffffffff;
  uVar10 = 0xffffffffffffffff;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(short *)(param_2 + uVar10 * 2) != 0);
  uVar7 = uVar9;
  if (param_3 != 0) {
    do {
      uVar6 = uVar6 + 1;
      uVar7 = uVar6;
    } while (*(short *)(param_3 + uVar6 * 2) != 0);
  }
  uVar5 = (uint)uVar7;
  uVar7 = uVar7 & 0xffffffff;
  bVar1 = true;
  if (uVar7 < (uVar10 & 0xffffffff)) {
    psVar8 = (short *)(param_2 + ((uVar10 & 0xffffffff) - uVar7) * 2);
    if (uVar5 != 0) {
      lVar12 = param_3 - (longlong)psVar8;
      uVar10 = uVar9;
      do {
        if (*psVar8 != *(short *)(lVar12 + (longlong)psVar8)) {
          bVar1 = true;
          goto LAB_143154da2;
        }
        uVar10 = (ulonglong)((int)uVar10 + 1);
        psVar8 = psVar8 + 1;
      } while (uVar10 < uVar7);
    }
    bVar1 = false;
    uVar5 = 0;
  }
LAB_143154da2:
  uVar10 = (ulonglong)uVar5;
  if (!bVar1) {
    uVar10 = uVar9;
  }
  uVar10 = uVar10 + ((int)uVar11 + 2);
  pvVar3 = AK::MemoryMgr::Malloc(g_DefaultPoolId,uVar10);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0x34;
  }
  else {
    iVar2 = AKPLATFORM::AkWideCharToChar(param_2,uVar10 & 0xffffffff,pvVar3);
    if (bVar1) {
      AKPLATFORM::AkWideCharToChar(param_3,(int)uVar10 - iVar2,(longlong)iVar2 + (longlong)pvVar3);
    }
    *(undefined1 *)((longlong)pvVar3 + (uVar10 - 1)) = 0;
    uVar4 = 1;
    *param_1 = pvVar3;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return uVar4;
}



// FUNCTION 143154e40 CreateEntry body=145 status=ok
// SIG undefined CreateEntry(void)

void AkHashList<unsigned_long,AkMediaEntry,AkArrayAllocatorNoAlign<_ArrayPoolDefault>_>::CreateEntry
               (longlong *param_1,undefined4 param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x38);
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  lVar1 = (param_3 & 0xffffffff) * 8;
  *puVar2 = *(undefined8 *)(lVar1 + *param_1);
  *(undefined4 *)(puVar2 + 1) = param_2;
  if (puVar2 + 2 != (undefined8 *)0x0) {
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 1;
    puVar2[2] = 0;
    *(undefined4 *)(puVar2 + 3) = 0;
  }
  *(undefined8 **)(lVar1 + *param_1) = puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}



// FUNCTION 143154ee0 FUN_143154ee0 body=982 status=ok
// SIG undefined FUN_143154ee0(void)

undefined4
FUN_143154ee0(void *param_1,void *param_2,undefined4 param_3,ulonglong param_4,uint param_5,
             undefined2 param_6,longlong param_7)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  float *pfVar7;
  longlong lVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined2 *puVar15;
  float fVar16;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  ushort local_78;
  ushort local_76;
  undefined2 local_70;
  undefined8 local_68;
  int local_50;
  
  if (**(short **)(param_7 + 8) == -1) {
    iVar5 = 4;
  }
  else {
    iVar5 = 0;
    if (**(short **)(param_7 + 8) == 0x3040) {
      iVar5 = 0x13;
    }
  }
  plVar6 = (longlong *)CAkVPLSrcNode::Create(3,iVar5 * 0x10000 + 1);
  if (plVar6 == (longlong *)0x0) {
    uVar4 = 2;
  }
  else {
    _guard_xfg_dispatch_icall_nop(param_1,param_2,(ulonglong)param_5);
    puVar1 = (undefined2 *)((longlong)param_1 + (param_4 & 0xffffffff));
    *puVar1 = 0xfffe;
    puVar15 = (undefined2 *)((longlong)param_1 + (ulonglong)param_5);
    puVar1[7] = 0x10;
    puVar1[6] = param_6;
    if ((param_5 & 3) != 0) {
      uVar2 = *(undefined8 *)(puVar15 + -4);
      uVar12 = 4 - (param_5 & 3);
      *(undefined4 *)(puVar15 + -4) = 0x4b4e554a;
      *(uint *)(puVar15 + -2) = uVar12;
      _guard_xfg_dispatch_icall_nop(puVar15 + 4,0,(ulonglong)uVar12);
      puVar15 = (undefined2 *)
                ((ulonglong)(*(int *)(puVar15 + -2) + 8 + param_5) + (longlong)param_1);
      *(undefined8 *)(puVar15 + -4) = uVar2;
    }
    uVar4 = 2;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
    iVar5 = CAkVPLSrcNode::FetchStreamedData(plVar6,param_2,param_3);
    puVar9 = puVar15;
    if (iVar5 == 1) {
      do {
        uVar11 = 0;
        local_88 = 0;
        local_78 = DAT_1467bdcb8;
        local_76 = 0;
        local_7c = 0x2b;
        local_70 = 0;
        local_68 = 0;
        local_50 = 0x2b;
        local_80 = *(undefined4 *)(*(longlong *)(param_7 + 8) + 0x14);
        (**(code **)(*plVar6 + 0x58))(plVar6,&local_88);
        if ((local_50 == 0x2d) || (local_50 == 0x11)) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
          uVar10 = (ulonglong)(ushort)puVar1[1];
          if ((ulonglong)local_76 != 0) {
            do {
              uVar13 = 0;
              if (3 < uVar10) {
                uVar14 = (ulonglong)local_78;
                lVar8 = (uVar10 - 4 >> 2) + 1;
                pfVar7 = (float *)(local_88 + (uVar11 + uVar14 * 2) * 4);
                uVar13 = lVar8 * 4;
                do {
                  fVar16 = pfVar7[uVar14 * -2] * 32767.0;
                  if (32767.0 <= fVar16) {
                    fVar16 = 32767.0;
                  }
                  if (fVar16 <= -32768.0) {
                    fVar16 = -32768.0;
                  }
                  *puVar9 = (short)(int)fVar16;
                  fVar16 = pfVar7[-(ulonglong)(uint)local_78] * 32767.0;
                  if (32767.0 <= fVar16) {
                    fVar16 = 32767.0;
                  }
                  if (fVar16 <= -32768.0) {
                    fVar16 = -32768.0;
                  }
                  puVar9[1] = (short)(int)fVar16;
                  fVar16 = *pfVar7 * 32767.0;
                  if (32767.0 <= fVar16) {
                    fVar16 = 32767.0;
                  }
                  if (fVar16 <= -32768.0) {
                    fVar16 = -32768.0;
                  }
                  puVar9[2] = (short)(int)fVar16;
                  fVar16 = pfVar7[uVar14] * 32767.0;
                  if (32767.0 <= fVar16) {
                    fVar16 = 32767.0;
                  }
                  if (fVar16 <= -32768.0) {
                    fVar16 = -32768.0;
                  }
                  pfVar7 = pfVar7 + (ulonglong)(uint)local_78 * 4;
                  puVar9[3] = (short)(int)fVar16;
                  puVar9 = puVar9 + 4;
                  lVar8 = lVar8 + -1;
                } while (lVar8 != 0);
              }
              if (uVar13 < uVar10) {
                lVar8 = uVar10 - uVar13;
                pfVar7 = (float *)(local_88 + (local_78 * uVar13 + uVar11) * 4);
                do {
                  fVar16 = *pfVar7 * 32767.0;
                  if (32767.0 <= fVar16) {
                    fVar16 = 32767.0;
                  }
                  if (fVar16 <= -32768.0) {
                    fVar16 = -32768.0;
                  }
                  pfVar7 = pfVar7 + local_78;
                  *puVar9 = (short)(int)fVar16;
                  puVar9 = puVar9 + 1;
                  lVar8 = lVar8 + -1;
                } while (lVar8 != 0);
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < local_76);
          }
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
        }
        (**(code **)(*plVar6 + 0x10))(plVar6);
      } while (local_50 == 0x2d);
      uVar4 = 2;
      if (local_50 == 0x11) {
        uVar4 = 1;
      }
      *(int *)(puVar15 + -2) = (int)puVar9 - (int)puVar15;
    }
    (**(code **)(*plVar6 + 0x50))(plVar6);
    lVar3 = g_LEngineDefaultPoolId;
    (**(code **)*plVar6)(plVar6,0);
    AK::MemoryMgr::Free(lVar3,plVar6);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  }
  return uVar4;
}



// FUNCTION 1431552c0 FUN_1431552c0 body=83 status=ok
// SIG undefined FUN_1431552c0(void)

void FUN_1431552c0(longlong param_1)

{
  AkMemPoolAttributes AVar1;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    AVar1 = AK::MemoryMgr::GetPoolAttributes(*(long *)(param_1 + 0x40));
    if ((AVar1 & 8) == 0) {
      AK::MemoryMgr::Free(*(long *)(param_1 + 0x40),*(void **)(param_1 + 0x28));
    }
    else {
      AK::MemoryMgr::ReleaseBlock(*(long *)(param_1 + 0x40),*(void **)(param_1 + 0x28));
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (*(char *)(param_1 + 0x44) != '\0') {
      AK::MemoryMgr::DestroyPool(*(long *)(param_1 + 0x40));
      *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
    }
  }
  return;
}



// FUNCTION 143155320 Erase body=211 status=ok
// SIG undefined Erase(void)

undefined8 *
AkHashList<unsigned_long,AkMediaEntry,AkArrayAllocatorNoAlign<_ArrayPoolDefault>_>::Erase
          (longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  
  plVar3 = (longlong *)param_3[2];
  plVar4 = (longlong *)*param_3;
  uVar1 = *(uint *)(param_3 + 1);
  plVar5 = (longlong *)param_3[3];
  lVar6 = *plVar3;
  *param_2 = plVar4;
  *(uint *)(param_2 + 1) = uVar1;
  param_2[2] = lVar6;
  param_2[3] = plVar5;
  if (lVar6 == 0) {
    uVar2 = *(uint *)(param_1 + 1);
    uVar8 = (ulonglong)uVar1;
    do {
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      *(uint *)(param_2 + 1) = uVar7;
      if (uVar2 <= uVar7) break;
      lVar6 = *plVar4;
      param_2[3] = 0;
      lVar6 = *(longlong *)(lVar6 + uVar8 * 8);
      param_2[2] = lVar6;
    } while (lVar6 == 0);
  }
  if (plVar5 == (longlong *)0x0) {
    *(longlong *)(*param_1 + (ulonglong)uVar1 * 8) = *plVar3;
  }
  else {
    *plVar5 = *plVar3;
  }
  if ((void *)plVar3[4] != (void *)0x0) {
    *(undefined4 *)(plVar3 + 5) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)plVar3[4]);
    plVar3[4] = 0;
    *(undefined4 *)((longlong)plVar3 + 0x2c) = 0;
  }
  AK::MemoryMgr::Free(g_DefaultPoolId,plVar3);
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return param_2;
}



// FUNCTION 143155400 FUN_143155400 body=1655 status=ok
// SIG undefined FUN_143155400(void)

int FUN_143155400(longlong *param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 auVar5 [2];
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  void *pvVar11;
  void *pvVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  void *pvVar15;
  longlong local_res10;
  undefined4 in_stack_fffffffffffffed8;
  uint3 uVar16;
  uint in_stack_fffffffffffffee0;
  undefined4 local_108 [2];
  ulonglong uStack_100;
  ulonglong local_f8;
  ulonglong uStack_f0;
  ulonglong local_e8;
  ulonglong uStack_e0;
  ulonglong local_d8;
  ulonglong uStack_d0;
  undefined1 local_c8 [16];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulonglong local_a8;
  ulonglong uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  undefined1 local_78 [16];
  ulonglong local_68;
  ulonglong uStack_60;
  
  iVar7 = 1;
  uVar16 = (uint3)((uint)in_stack_fffffffffffffed8 >> 8);
  switch((int)*param_2) {
  case 0:
    local_f8 = *param_2;
    uStack_f0 = param_2[1];
    uVar13 = 0;
    local_e8 = param_2[2];
    uStack_e0 = param_2[3];
    local_d8 = param_2[4];
    uStack_d0 = param_2[5];
    local_res10 = 0;
    local_c8 = *(undefined1 (*) [16])(param_2 + 6);
    local_b8 = (undefined4)param_2[8];
    uStack_b4 = *(undefined4 *)((longlong)param_2 + 0x44);
    uStack_b0 = (undefined4)param_2[9];
    uStack_ac = *(undefined4 *)((longlong)param_2 + 0x4c);
    iVar7 = FUN_143155f30(local_b8,&local_f8,&local_res10,0,(uint)uVar16 << 8,
                          in_stack_fffffffffffffee0 & 0xffffff00);
    lVar9 = local_res10;
    iVar8 = iVar7;
    if (iVar7 == 0x45) {
      iVar7 = 1;
    }
    else if (iVar7 == 1) {
      *(byte *)(local_res10 + 0x78) = *(byte *)(local_res10 + 0x78) | 1;
      if ((int)param_2[5] == 2) {
        uVar13 = param_2[7];
      }
      local_108[0] = *(undefined4 *)((longlong)param_2 + 4);
      uStack_100 = uVar13;
      FUN_1431b0d70(param_1 + 0x11,local_108);
      iVar8 = 1;
    }
    else if (local_res10 != 0) {
      FUN_143159ff0(local_res10);
      FUN_143159990(lVar9,1);
    }
    FUN_143156cd0(param_1,param_2,iVar8);
    break;
  case 1:
    local_e8 = param_2[2];
    uStack_e0 = param_2[3];
    uVar13 = param_2[7];
    local_c8 = *(undefined1 (*) [16])(param_2 + 6);
    local_d8 = param_2[4];
    uVar4 = param_2[5];
    uStack_d0 = param_2[5];
    local_b8 = (undefined4)param_2[8];
    uStack_b4 = *(undefined4 *)((longlong)param_2 + 0x44);
    uStack_b0 = (undefined4)param_2[9];
    uStack_ac = *(undefined4 *)((longlong)param_2 + 0x4c);
    uVar2 = *(undefined4 *)((longlong)param_2 + 4);
    local_f8 = *param_2;
    uStack_f0 = param_2[1];
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b51fe0);
    local_108[0] = uVar2;
    auVar5 = local_108;
    uVar14 = 0;
    if ((int)uVar4 == 2) {
      uVar14 = uVar13;
    }
    uStack_100 = uVar14;
    lVar9 = CAkBankList::Get(param_1 + 0x11,local_108);
    if (lVar9 == 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b51fe0);
      iVar7 = 0x36;
      FUN_143156cd0(param_1,&local_f8,0x36);
    }
    else if ((*(byte *)(lVar9 + 0x78) & 1) == 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b51fe0);
      iVar7 = 2;
      FUN_143156cd0(param_1,&local_f8,2);
    }
    else {
      local_108 = auVar5;
      uStack_100 = uVar14;
      FUN_1431b0cc0(param_1 + 0x11,local_108);
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b51fe0);
      iVar7 = (**(code **)(*param_1 + 0x40))(param_1,lVar9,uStack_e0,local_d8);
    }
    break;
  case 2:
    local_f8 = *param_2;
    uStack_f0 = param_2[1];
    local_e8 = param_2[2];
    uStack_e0 = param_2[3];
    local_d8 = param_2[4];
    uStack_d0 = param_2[5];
    local_c8 = *(undefined1 (*) [16])(param_2 + 6);
    local_b8 = (undefined4)param_2[8];
    uStack_b4 = *(undefined4 *)((longlong)param_2 + 0x44);
    uStack_b0 = (undefined4)param_2[9];
    uStack_ac = *(undefined4 *)((longlong)param_2 + 0x4c);
    iVar7 = FUN_1431572b0(local_b8,&local_f8);
    break;
  case 3:
    local_e8 = param_2[2];
    uStack_e0 = param_2[3];
    pvVar15 = (void *)0x0;
    local_f8 = *param_2;
    uStack_f0 = param_2[1];
    uVar3 = *(uint *)*(undefined1 (*) [16])(param_2 + 6);
    local_c8 = *(undefined1 (*) [16])(param_2 + 6);
    local_d8 = param_2[4];
    uStack_d0 = param_2[5];
    uVar6 = local_c8[4];
    pvVar12 = (void *)local_c8._8_8_;
    if (uVar3 == 1) {
      iVar7 = FUN_14315af20((int)param_2[4],local_c8[4],local_c8._8_8_ & 0xffffffff);
    }
    else {
      pvVar11 = pvVar15;
      if (uVar3 != 0) {
        do {
          iVar7 = FUN_14315af20(param_1,uVar6,
                                *(undefined4 *)((longlong)pvVar12 + (longlong)pvVar11 * 4));
          if (iVar7 != 1) break;
          uVar10 = (int)pvVar11 + 1;
          pvVar11 = (void *)(ulonglong)uVar10;
        } while (uVar10 < uVar3);
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,pvVar12);
      pvVar12 = pvVar15;
    }
    uVar10 = 0xffffffff;
    uVar13 = 0;
    switch((undefined4)local_f8) {
    case 0:
    case 1:
      uVar10 = uVar3;
    case 6:
    case 7:
      uVar13 = local_f8 >> 0x20;
      if ((int)uStack_d0 == 2) {
        pvVar15 = pvVar12;
      }
      break;
    case 2:
    case 3:
      uVar13 = 0;
      if (uVar3 == 1) {
        uVar13 = (ulonglong)pvVar12 & 0xffffffff;
      }
    default:
      if ((int)uStack_d0 == 2) {
        pvVar15 = pvVar12;
      }
    }
    goto LAB_14315582e;
  case 4:
    local_f8 = *param_2;
    uStack_f0 = param_2[1];
    local_e8 = param_2[2];
    uStack_e0 = param_2[3];
    local_d8 = param_2[4];
    uStack_d0 = param_2[5];
    local_c8 = *(undefined1 (*) [16])(param_2 + 6);
    local_b8 = (undefined4)param_2[8];
    uStack_b4 = *(undefined4 *)((longlong)param_2 + 0x44);
    uStack_b0 = (undefined4)param_2[9];
    uStack_ac = *(undefined4 *)((longlong)param_2 + 0x4c);
    iVar7 = FUN_143157570(local_b8,&local_f8);
    break;
  case 5:
    local_e8 = param_2[2];
    uStack_e0 = param_2[3];
    uVar4 = *param_2;
    local_f8 = *param_2;
    uStack_f0 = param_2[1];
    local_d8 = param_2[4];
    uStack_d0 = param_2[5];
    local_c8 = *(undefined1 (*) [16])(param_2 + 6);
    FUN_143154a50();
    uVar10 = 0xffffffff;
    uVar13 = 0;
    switch((int)uVar4) {
    case 0:
    case 1:
      uVar10 = local_c8._0_4_;
    case 6:
    case 7:
      uVar13 = local_f8 >> 0x20;
      break;
    case 2:
    case 3:
      uVar13 = 0;
      if (local_c8._0_4_ == 1) {
        uVar13 = local_c8._8_8_ & 0xffffffff;
      }
    }
    pvVar15 = (void *)0x0;
    if ((int)uStack_d0 == 2) {
      pvVar15 = (void *)local_c8._8_8_;
    }
LAB_14315582e:
    *(int *)((longlong)param_1 + 0xcc) = iVar7;
    CAkBankCallbackMgr::DoCallback(param_1 + 0x1a,uStack_e0,uVar13,pvVar15,iVar7,uVar10,local_d8);
    break;
  case 6:
    local_c8 = *(undefined1 (*) [16])(param_2 + 6);
    local_a8 = *param_2;
    uStack_a0 = param_2[1];
    local_98 = param_2[2];
    uStack_90 = param_2[3];
    local_88 = param_2[4];
    uStack_80 = param_2[5];
    local_f8 = *param_2;
    uStack_f0 = param_2[1];
    local_68 = param_2[8];
    uStack_60 = param_2[9];
    local_d8 = param_2[4];
    uStack_d0 = param_2[5];
    local_e8 = param_2[2];
    uStack_e0 = param_2[3];
    local_b8 = (undefined4)param_2[8];
    uStack_b4 = *(undefined4 *)((longlong)param_2 + 0x44);
    uStack_b0 = (undefined4)param_2[9];
    uStack_ac = *(undefined4 *)((longlong)param_2 + 0x4c);
    local_78 = local_c8;
    iVar7 = FUN_143156d80((int)param_2[2],&local_f8,(local_c8._0_4_ != 1) + '\x01',1,
                          CONCAT31(uVar16,local_c8[4]));
    FUN_143156cd0(param_1,&local_a8,iVar7);
    break;
  case 7:
    local_98 = param_2[2];
    uStack_90 = param_2[3];
    local_a8 = *param_2;
    uStack_a0 = param_2[1];
    local_88 = param_2[4];
    uStack_80 = param_2[5];
    local_78 = *(undefined1 (*) [16])(param_2 + 6);
    local_68 = param_2[8];
    uStack_60 = param_2[9];
    local_108[0] = *(undefined4 *)((longlong)param_2 + 4);
    uStack_100 = 0;
    lVar9 = CAkBankList::Get(param_1 + 0x11,local_108);
    if (lVar9 != 0) {
      if (*(int *)(lVar9 + 0x7c) != 0) {
        *(int *)(lVar9 + 0x7c) = *(int *)(lVar9 + 0x7c) + -1;
      }
      FUN_143159c10(lVar9,0);
    }
    FUN_143156cd0(param_1,&local_a8,1);
    break;
  case 8:
    local_f8 = *param_2;
    uStack_f0 = param_2[1];
    local_e8 = param_2[2];
    uStack_e0 = param_2[3];
    local_d8 = param_2[4];
    uStack_d0 = param_2[5];
    local_c8 = *(undefined1 (*) [16])(param_2 + 6);
    local_b8 = (undefined4)param_2[8];
    uStack_b4 = *(undefined4 *)((longlong)param_2 + 0x44);
    uStack_b0 = (undefined4)param_2[9];
    uStack_ac = *(undefined4 *)((longlong)param_2 + 0x4c);
    iVar7 = FUN_143154850(local_b8,&local_f8);
    break;
  case 9:
  case 0xb:
    break;
  case 10:
    local_f8 = *param_2;
    uStack_f0 = param_2[1];
    local_e8 = param_2[2];
    uStack_e0 = param_2[3];
    local_d8 = param_2[4];
    uStack_d0 = param_2[5];
    local_c8 = *(undefined1 (*) [16])(param_2 + 6);
    local_b8 = (undefined4)param_2[8];
    uStack_b4 = *(undefined4 *)((longlong)param_2 + 0x44);
    uStack_b0 = (undefined4)param_2[9];
    uStack_ac = *(undefined4 *)((longlong)param_2 + 0x4c);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
    if (*(uint *)(param_1 + 0xf) != 0) {
      for (puVar1 = *(undefined8 **)
                     (param_1[0xe] +
                     ((ulonglong)(uint)local_c8._0_4_ % (ulonglong)*(uint *)(param_1 + 0xf)) * 8);
          puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
        if (*(uint *)(puVar1 + 1) == local_c8._0_4_) {
          if (puVar1 != (undefined8 *)0xfffffffffffffff0) {
            iVar8 = FUN_143159bb0(param_1);
            iVar7 = 1;
            if (iVar8 != 0) {
              iVar7 = 2;
            }
          }
          break;
        }
      }
    }
    FUN_143156cd0(param_1,&local_f8,iVar7);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
    break;
  default:
    goto switchD_14315544c_default;
  }
switchD_14315544c_default:
  return iVar7;
}



// FUNCTION 143155af0 GetBankIDFromInMemorySpace body=12 status=ok
// SIG undefined GetBankIDFromInMemorySpace(void)

undefined4 CAkBankMgr::GetBankIDFromInMemorySpace(longlong param_1,uint param_2)

{
  if (0x1b < param_2) {
    return *(undefined4 *)(param_1 + 0xc);
  }
  return 0;
}



// FUNCTION 143155b00 GetBufferSizeForDecodedMedia body=61 status=ok
// SIG undefined GetBufferSizeForDecodedMedia(void)

int CAkBankMgr::GetBufferSizeForDecodedMedia(longlong param_1,undefined8 param_2,uint param_3)

{
  short *psVar1;
  
  if ((param_3 & 3) != 0) {
    param_3 = param_3 + (0xc - (param_3 & 3));
  }
  psVar1 = *(short **)(param_1 + 8);
  if ((*psVar1 != -1) && (*psVar1 != 0x3040)) {
    return 0;
  }
  return param_3 + (uint)(ushort)psVar1[1] * *(int *)(psVar1 + 0xc) * 2;
}



// FUNCTION 143155b40 GetDeviceShareset body=44 status=ok
// SIG undefined GetDeviceShareset(void)

int CAkBus::GetDeviceShareset(longlong param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x170);
  if (*piVar1 == -1) {
    do {
      param_1 = *(longlong *)(param_1 + 0x88);
      if (param_1 == 0) goto LAB_143155b69;
    } while (*(int *)(param_1 + 0x170) == -1);
    *piVar1 = *(int *)(param_1 + 0x170);
  }
LAB_143155b69:
  return *piVar1;
}



// FUNCTION 143155b70 FUN_143155b70 body=340 status=ok
// SIG undefined FUN_143155b70(void)

longlong * FUN_143155b70(longlong param_1,longlong *param_2,uint param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar9;
  int iVar10;
  ulonglong uVar8;
  
  uVar8 = 0;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b51fe0);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  if (*(uint *)(param_1 + 0x78) != 0) {
    for (puVar4 = *(undefined8 **)
                   (*(longlong *)(param_1 + 0x70) +
                   ((ulonglong)param_3 % (ulonglong)*(uint *)(param_1 + 0x78)) * 8);
        puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)*puVar4) {
      if (*(uint *)(puVar4 + 1) == param_3) {
        plVar1 = puVar4 + 2;
        if (plVar1 != (longlong *)0x0) {
          *(int *)(puVar4 + 6) = *(int *)(puVar4 + 6) + 1;
          if (*plVar1 == 0) {
            bVar6 = false;
            iVar10 = -1;
            if (*(int *)(puVar4 + 5) != 0) {
              lVar9 = puVar4[4];
              do {
                lVar5 = *(longlong *)(lVar9 + uVar8 * 0x18);
                if (((*(byte *)(lVar5 + 8) & 1) == 0) &&
                   (iVar10 < *(int *)(lVar9 + 0x10 + uVar8 * 0x18))) {
                  *param_4 = lVar5;
                  bVar6 = true;
                  lVar9 = puVar4[4];
                  plVar3 = (longlong *)(lVar9 + 8 + uVar8 * 0x18);
                  lVar5 = plVar3[1];
                  iVar10 = *(int *)(lVar9 + 0x10 + uVar8 * 0x18);
                  *param_2 = *plVar3;
                  param_2[1] = lVar5;
                }
                uVar7 = (int)uVar8 + 1;
                uVar8 = (ulonglong)uVar7;
              } while (uVar7 < *(uint *)(puVar4 + 5));
              if (bVar6) {
                if ((*(byte *)(*param_4 + 8) & 2) != 0) {
                  LOCK();
                  piVar2 = (int *)(*param_4 + 0x70);
                  *piVar2 = *piVar2 + 1;
                  UNLOCK();
                }
                break;
              }
            }
            piVar2 = (int *)(puVar4 + 6);
            *piVar2 = *piVar2 + -1;
            iVar10 = *piVar2;
            *param_2 = 0;
            *(undefined4 *)(param_2 + 1) = 0;
            if ((iVar10 == 0) && ((void *)*plVar1 != (void *)0x0)) {
              AK::MemoryMgr::Falign(DAT_146b50bc8,(void *)*plVar1);
              *plVar1 = 0;
              *(undefined4 *)(puVar4 + 3) = 0;
            }
          }
          else {
            lVar9 = puVar4[3];
            *param_2 = *plVar1;
            param_2[1] = lVar9;
          }
        }
        break;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b51fe0);
  return param_2;
}



// FUNCTION 143155cd0 FUN_143155cd0 body=170 status=ok
// SIG undefined FUN_143155cd0(void)

undefined8 FUN_143155cd0(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  AKRESULT AVar5;
  void *pvVar6;
  undefined4 extraout_var;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  void *pvVar7;
  
  uVar10 = *(int *)((longlong)param_1 + 0xc) + param_2;
  pvVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar10 << 5);
  if (pvVar6 == (void *)0x0) {
    return 0;
  }
  pvVar7 = (void *)*param_1;
  if ((pvVar7 != (void *)0x0) && (pvVar7 != pvVar6)) {
    uVar9 = (ulonglong)*(uint *)(param_1 + 1);
    if (uVar9 != 0) {
      lVar8 = 0;
      do {
        lVar3 = *param_1;
        puVar1 = (undefined8 *)(lVar8 + lVar3);
        uVar4 = puVar1[1];
        *(undefined8 *)(lVar8 + (longlong)pvVar6) = *puVar1;
        ((undefined8 *)(lVar8 + (longlong)pvVar6))[1] = uVar4;
        puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar3);
        uVar4 = puVar1[1];
        puVar2 = (undefined8 *)(lVar8 + 0x10 + (longlong)pvVar6);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        uVar9 = uVar9 - 1;
        lVar8 = lVar8 + 0x20;
      } while (uVar9 != 0);
      pvVar7 = (void *)*param_1;
    }
    AVar5 = AK::MemoryMgr::Free(g_DefaultPoolId,pvVar7);
    pvVar7 = (void *)CONCAT44(extraout_var,AVar5);
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar10;
  *param_1 = (longlong)pvVar6;
  return CONCAT71((int7)((ulonglong)pvVar7 >> 8),1);
}



// FUNCTION 143155d80 Init body=50 status=ok
// SIG undefined Init(void)

undefined8 CAkBankMgr::Init(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1431b0c50(param_1 + 0x88);
  if (cVar1 == '\0') {
    return 0x34;
  }
  uVar2 = FUN_143153b60(param_1 + 8);
  return uVar2;
}



// FUNCTION 143155dd0 KillSlotAsync body=117 status=ok
// SIG undefined KillSlotAsync(void)

void CAkBankMgr::KillSlotAsync
               (undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined2 uVar1;
  longlong lVar2;
  
  FUN_143159ff0(param_2);
  *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 1;
  *(undefined8 *)(param_2 + 0x50) = param_3;
  *(undefined8 *)(param_2 + 0x58) = param_4;
  uVar1 = CCallbackImpl<12>::GetCallbackSizeBytes();
  lVar2 = FUN_1431400f0(DAT_146b50b78,0x1a,uVar1);
  *(longlong *)(lVar2 + 4) = param_2;
  LOCK();
  *(int *)(DAT_146b50b78 + 0x9c) = *(int *)(DAT_146b50b78 + 0x9c) + -1;
  UNLOCK();
  FUN_14313ff60(DAT_146b50b78,0);
  return;
}



// FUNCTION 143155e50 FUN_143155e50 body=222 status=ok
// SIG undefined FUN_143155e50(void)

int FUN_143155e50(longlong param_1,longlong param_2)

{
  undefined2 uVar1;
  int iVar2;
  longlong lVar3;
  int local_28 [2];
  HANDLE local_20;
  
  local_20 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  FUN_1431b0540(param_1 + 0xd0,local_28);
  FUN_143159ff0(param_2);
  *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 1;
  *(undefined1 **)(param_2 + 0x50) = &LAB_143119230;
  *(int **)(param_2 + 0x58) = local_28;
  uVar1 = CCallbackImpl<12>::GetCallbackSizeBytes();
  lVar3 = FUN_1431400f0(DAT_146b50b78,0x1a,uVar1);
  *(longlong *)(lVar3 + 4) = param_2;
  LOCK();
  *(int *)(DAT_146b50b78 + 0x9c) = *(int *)(DAT_146b50b78 + 0x9c) + -1;
  UNLOCK();
  iVar2 = FUN_14313ff60(DAT_146b50b78,0);
  if (iVar2 != 1) {
    if (local_20 != (HANDLE)0x0) {
      CloseHandle(local_20);
    }
    return iVar2;
  }
  WaitForSingleObject(local_20,0xffffffff);
  if (local_20 != (HANDLE)0x0) {
    CloseHandle(local_20);
  }
  return local_28[0];
}



// FUNCTION 143155f30 FUN_143155f30 body=2063 status=ok
// SIG undefined FUN_143155f30(void)

AKRESULT FUN_143155f30(longlong param_1,longlong param_2,longlong *param_3,int param_4,char param_5,
                      undefined1 param_6)

{
  undefined4 uVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined8 uVar4;
  AKRESULT AVar5;
  int iVar6;
  int iVar7;
  AkMemPoolAttributes AVar8;
  ulong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  void *pvVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined4 uVar21;
  uint local_98;
  char local_94;
  char local_93;
  undefined1 local_92 [2];
  ushort local_90 [4];
  uint local_88;
  uint uStack_84;
  undefined8 uStack_80;
  int local_78;
  uint local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  uint local_58;
  undefined1 local_54 [20];
  
  uVar14 = *(uint *)(param_2 + 4);
  local_58 = uVar14;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b51fe0);
  local_78 = *(int *)(param_2 + 0x28);
  if (local_78 == 2) {
    uStack_80 = *(undefined8 *)(param_2 + 0x38);
  }
  else {
    uStack_80 = 0;
  }
  local_88 = uVar14;
  lVar10 = CAkBankList::Get(param_1 + 0x88,&local_88);
  if ((lVar10 != 0) && ((*(byte *)(lVar10 + 0x78) & 1) != 0)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b51fe0);
    return 0x45;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b51fe0);
  if (lVar10 == 0) {
    uVar15 = 0;
    iVar6 = 0;
    iVar7 = 0;
    if (param_4 == 0) {
      uVar15 = 1;
      uVar21 = *(undefined4 *)(param_2 + 0x30);
      iVar6 = 0;
    }
    else {
      uVar21 = DAT_146b50bc8;
      if (param_5 == '\0') {
        iVar6 = 1;
      }
      else {
        iVar7 = 1;
      }
    }
    puVar11 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x80);
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      if (*(int *)(param_2 + 0x28) == 2) {
        uVar12 = *(undefined8 *)(param_2 + 0x38);
      }
      else {
        uVar12 = 0;
      }
      *(byte *)(puVar11 + 1) = *(byte *)(puVar11 + 1) & 0xfe;
      *(byte *)(puVar11 + 1) = *(byte *)(puVar11 + 1) | 2;
      *puVar11 = &PTR_FUN_145ac7b60;
      uVar1 = *(undefined4 *)(param_2 + 4);
      puVar11[3] = uVar12;
      *(undefined4 *)(puVar11 + 2) = uVar1;
      puVar11[5] = 0;
      puVar11[6] = 0;
      puVar11[7] = 0;
      *(undefined1 *)((longlong)puVar11 + 0x44) = 0;
      puVar11[9] = 0;
      puVar11[10] = 0;
      puVar11[0xb] = 0;
      *(undefined4 *)(puVar11 + 8) = uVar21;
      puVar11[0xc] = 0;
      puVar11[0xd] = 0;
      *(int *)((longlong)puVar11 + 0x74) = iVar7 + iVar6;
      *(undefined4 *)(puVar11 + 0xe) = uVar15;
      *(int *)((longlong)puVar11 + 0x7c) = iVar7;
      *(byte *)(puVar11 + 0xf) = *(byte *)(puVar11 + 0xf) & 0xf8 | (byte)uVar15;
    }
    *param_3 = (longlong)puVar11;
    AVar5 = 0x34;
    if (puVar11 != (undefined8 *)0x0) {
      AVar5 = 1;
    }
  }
  else {
    *param_3 = lVar10;
    AVar5 = 1;
    if (param_5 != '\0') {
      *(int *)(lVar10 + 0x7c) = *(int *)(lVar10 + 0x7c) + 1;
    }
  }
  lVar10 = param_1 + 8;
  CAkBankReader::Reset(lVar10);
  iVar7 = *(int *)(param_2 + 0x28);
  local_94 = iVar7 - 2U < 2;
  if (AVar5 == 1) {
    if (param_4 == 0) {
      if (iVar7 != 1) {
        if ((bool)local_94) {
          AVar5 = CAkBankReader::SetFile
                            (lVar10,*(undefined8 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x40))
          ;
          goto LAB_14315611d;
        }
        goto LAB_1431561c2;
      }
      uVar12 = *(undefined8 *)(param_2 + 0x20);
    }
    else {
LAB_1431561c2:
      uVar12 = *(undefined8 *)(param_2 + 0x20);
      if (*(longlong *)(param_2 + 8) != 0) {
        AVar5 = FUN_143153da0(lVar10,*(longlong *)(param_2 + 8),0,uVar12);
        goto LAB_14315611d;
      }
    }
    AVar5 = FUN_143153c10(lVar10,*(undefined4 *)(param_2 + 4),0,0,uVar12,1);
  }
LAB_14315611d:
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  if (AVar5 != 1) goto LAB_14315671b;
  bVar3 = false;
  iVar6 = CAkBankReader::FillDataEx(lVar10,&local_88,8);
  if ((iVar6 != 1) || (local_88 != 0x44484b42)) {
    AVar5 = 7;
    goto LAB_143156253;
  }
  AVar5 = CAkBankReader::FillDataEx(lVar10,&local_70,0x14);
  uVar12 = local_68;
  uVar14 = (uint)local_70;
  if ((AVar5 == 1) && (DAT_146b50f18 != 0)) {
    uVar14 = (uint)local_70 ^ DAT_146b50f18;
    local_68 = CONCAT44(local_68._4_4_,(uint)local_68 ^ DAT_146b50f20);
    uVar4 = local_68;
    local_68._6_2_ = SUB82(uVar12,6);
    local_68 = CONCAT26(local_68._6_2_ ^ DAT_146b50f26,(int6)uVar4);
    local_70 = CONCAT44(local_70._4_4_ ^ DAT_146b50f1c,uVar14);
  }
  uVar18 = uStack_84 - 0x14;
  if (AVar5 != 1) goto LAB_14315671b;
  if (uVar18 == 0) {
LAB_143156225:
    if (uVar14 < 0x84) {
      if (uVar14 < 0x76) {
LAB_14315623a:
        LogWrongBankVersion();
        AVar5 = 0x40;
      }
      else {
        bVar3 = true;
      }
    }
    else if (0x84 < uVar14) goto LAB_14315623a;
  }
  else {
    local_98 = 0;
    AVar5 = CAkBankReader::Skip(lVar10,uVar18,&local_98);
    if (AVar5 == 1) {
      if (local_98 == uVar18) {
        uVar14 = (uint)local_70;
        goto LAB_143156225;
      }
      AVar5 = 0x38;
    }
  }
LAB_143156253:
  do {
    if (AVar5 != 1) goto LAB_14315671b;
    local_98 = 0;
    AVar5 = CAkBankReader::FillData(lVar10,&local_88,8,&local_98);
    uVar14 = uStack_84;
    if (AVar5 != 1) goto LAB_14315671b;
    if (local_98 != 8) {
      if (local_98 == 0) goto LAB_14315671b;
      break;
    }
    if (((bVar3) && (local_88 != 0x41544144)) && (local_88 != 0x58444944)) {
      LogWrongBankVersion(local_70 & 0xffffffff);
      AVar5 = 0x40;
      goto LAB_14315671b;
    }
    if (local_88 < 0x53564e46) {
      if (local_88 == 0x53564e45) {
        if (DAT_146b50ae8 == 0) {
          AVar5 = 2;
        }
        else if (uStack_84 == 0) {
          AVar5 = 2;
          iVar7 = local_78;
        }
        else {
          iVar6 = 0;
          lVar19 = 0;
          do {
            iVar16 = 0;
            lVar20 = 0;
            do {
              AVar5 = CAkBankReader::FillDataEx(lVar10,&local_93,1);
              iVar7 = local_78;
              if (AVar5 != 1) goto LAB_143156253;
              *(bool *)(lVar20 + lVar19 + DAT_146b50b68) = local_93 != '\0';
              AVar5 = CAkBankReader::FillDataEx(lVar10,local_92,1);
              iVar7 = local_78;
              if ((AVar5 != 1) ||
                 (AVar5 = CAkBankReader::FillDataEx(lVar10,local_90,2), iVar7 = local_78, AVar5 != 1
                 )) goto LAB_143156253;
              pvVar13 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)local_90[0] * 0xc);
              if (pvVar13 == (void *)0x0) {
                AVar5 = 0x34;
                iVar7 = local_78;
                goto LAB_143156253;
              }
              AVar5 = CAkBankReader::FillDataEx
                                (lVar10,pvVar13,((uint)local_90[0] + (uint)local_90[0] * 2) * 4);
              if (AVar5 == 1) {
                FUN_143161ed0(DAT_146b50b68,iVar6,iVar16,local_90[0],pvVar13,local_92[0]);
              }
              AK::MemoryMgr::Free(g_DefaultPoolId,pvVar13);
              iVar7 = local_78;
              if (AVar5 != 1) goto LAB_143156253;
              iVar16 = iVar16 + 1;
              lVar20 = lVar20 + 1;
            } while (iVar16 < 3);
            iVar6 = iVar6 + 1;
            lVar19 = lVar19 + 3;
          } while (iVar6 < 2);
        }
        goto LAB_143156253;
      }
      if (local_88 != 0x41544144) {
        if (local_88 == 0x43524948) {
          AVar5 = FUN_143158430(param_1,*param_3,local_58);
        }
        else if (local_88 == 0x44495453) {
          AVar5 = FUN_1431592c0(param_1,uStack_84,*param_3);
        }
        else {
          if (local_88 != 0x474d5453) goto LAB_14315634d;
          AVar5 = CAkBankMgr::ProcessGlobalSettingsChunk(param_1,uStack_84);
        }
        goto LAB_143156253;
      }
      if (param_4 != 0) {
        if (param_4 != 1) {
          if (param_4 == 2) goto LAB_14315634d;
          if (param_4 != 3) goto LAB_143156253;
        }
        AVar5 = FUN_143157770(param_1,*param_3,uStack_84,param_6);
        goto LAB_143156253;
      }
      if ((local_94 == '\0') || (iVar7 != 2)) {
        uVar17 = (ulonglong)uStack_84;
        lVar19 = *param_3;
        if (uStack_84 == 0) {
          AVar5 = 1;
        }
        else {
          iVar7 = *(int *)(lVar19 + 0x40);
          if (iVar7 == -1) {
            iVar7 = AK::MemoryMgr::CreatePool((void *)0x0,uStack_84,uStack_84,9,0x10);
            if (iVar7 != -1) {
              *(int *)(lVar19 + 0x40) = iVar7;
              *(undefined1 *)(lVar19 + 0x44) = 1;
              goto LAB_1431563e0;
            }
LAB_143156426:
            AVar5 = 0x34;
          }
          else {
LAB_1431563e0:
            AVar5 = AK::MemoryMgr::CheckPoolId(iVar7);
            if (AVar5 == 1) {
              AVar8 = AK::MemoryMgr::GetPoolAttributes(*(long *)(lVar19 + 0x40));
              if ((AVar8 & 8) == 0) {
                pvVar13 = AK::MemoryMgr::Malloc(*(long *)(lVar19 + 0x40),uVar17);
LAB_143156419:
                *(void **)(lVar19 + 0x28) = pvVar13;
              }
              else {
                uVar9 = AK::MemoryMgr::GetBlockSize(*(long *)(lVar19 + 0x40));
                if (uVar14 <= uVar9) {
                  pvVar13 = AK::MemoryMgr::GetBlock(*(long *)(lVar19 + 0x40));
                  goto LAB_143156419;
                }
              }
              uVar2 = *(ulonglong *)(lVar19 + 0x28);
              if (uVar2 == 0) goto LAB_143156426;
              if ((uVar2 & 0xf) == 0) {
                *(uint *)(lVar19 + 0x38) = uVar14;
                local_74 = 0;
                AVar5 = CAkBankReader::FillData(lVar10,uVar2,uVar17,&local_74);
                if ((AVar5 == 1) && (local_74 != uVar14)) {
                  AVar5 = 7;
                }
              }
              else {
                AVar5 = 0x59;
                FUN_1431552c0(lVar19);
              }
            }
          }
          lVar19 = *param_3;
        }
        uVar12 = *(undefined8 *)(lVar19 + 0x28);
        iVar7 = local_78;
        if (AVar5 != 1) goto LAB_143156253;
      }
      else {
        uVar12 = CAkBankReader::GetData(lVar10,uStack_84);
        *(uint *)(*param_3 + 0x38) = uStack_84;
        CAkBankReader::ReleaseData(lVar10);
        lVar19 = *param_3;
      }
      AVar5 = FUN_143156740(param_1,uVar12,lVar19);
      iVar7 = local_78;
      goto LAB_143156253;
    }
    if (local_88 == 0x54414c50) {
      AVar5 = CAkBankMgr::ProcessCustomPlatformChunk(param_1,uStack_84);
      goto LAB_143156253;
    }
    if (local_88 == 0x54494e49) {
      AVar5 = FUN_143159100(param_1,uStack_84);
      goto LAB_143156253;
    }
    if (local_88 == 0x58444944) {
      if ((param_4 != 0) && (param_4 != 1)) {
        if (param_4 == 2) goto LAB_14315634d;
        if (param_4 != 3) goto LAB_143156253;
      }
      lVar19 = *param_3;
      AVar5 = 1;
      if (*(int *)(lVar19 + 0x48) == 0) {
        uVar14 = uStack_84 / 0xc;
        uVar18 = uVar14 * 0xc;
        if (local_78 == 2) {
          uVar12 = CAkBankReader::GetData(lVar10,uVar18);
          if (*(longlong *)(lVar19 + 0x30) == 0) {
            *(undefined8 *)(lVar19 + 0x30) = uVar12;
          }
          CAkBankReader::ReleaseData(lVar10);
        }
        else {
          pvVar13 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar18);
          *(void **)(lVar19 + 0x30) = pvVar13;
          if (pvVar13 == (void *)0x0) {
            AVar5 = 0x34;
          }
          else {
            *(byte *)(lVar19 + 0x78) = *(byte *)(lVar19 + 0x78) | 2;
            CAkBankReader::FillDataEx(lVar10,pvVar13,uVar18);
          }
        }
        iVar7 = local_78;
        if (*(longlong *)(lVar19 + 0x30) != 0) {
          *(uint *)(lVar19 + 0x4c) = uVar14;
        }
      }
      else {
        CAkBankReader::Skip(lVar10,uStack_84,local_54);
        iVar7 = local_78;
      }
      goto LAB_143156253;
    }
LAB_14315634d:
    CAkBankReader::Skip(lVar10,uStack_84,&local_98);
  } while (local_98 == uStack_84);
  AVar5 = 7;
LAB_14315671b:
  CAkBankReader::CloseFile(lVar10);
  return AVar5;
}



// FUNCTION 143156740 FUN_143156740 body=508 status=ok
// SIG undefined FUN_143156740(void)

int FUN_143156740(longlong param_1,longlong param_2,longlong param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  uint *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  bool bVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  int local_res18;
  longlong local_48;
  uint local_40;
  
  if ((*(int *)(param_3 + 0x48) != 0) || (*(int *)(param_3 + 0x4c) == 0)) {
    return 1;
  }
  local_res18 = 0x34;
  iVar9 = 0x34;
  if (*(longlong *)(param_3 + 0x30) != 0) {
    uVar11 = 0;
    iVar9 = 0;
    if (*(int *)(param_3 + 0x4c) != 0) {
      do {
        puVar2 = (uint *)(*(longlong *)(param_3 + 0x30) + uVar11 * 0xc);
        if (*(int *)(*(longlong *)(param_3 + 0x30) + uVar11 * 0xc) != 0) {
          lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x48);
          EnterCriticalSection(lpCriticalSection);
          uVar10 = *puVar2;
          plVar1 = (longlong *)(param_1 + 0x70);
          cVar6 = FUN_1431546e0(plVar1);
          if (cVar6 != '\0') {
            uVar4 = (ulonglong)uVar10 % (ulonglong)*(uint *)(param_1 + 0x78);
            for (puVar3 = *(undefined8 **)(*plVar1 + uVar4 * 8); puVar3 != (undefined8 *)0x0;
                puVar3 = (undefined8 *)*puVar3) {
              if (*(uint *)(puVar3 + 1) == uVar10) {
                plVar7 = puVar3 + 2;
                if (plVar7 != (longlong *)0x0) {
                  bVar5 = true;
                  if (*plVar7 == 0) goto LAB_143156824;
                  goto LAB_14315687b;
                }
                break;
              }
            }
            bVar5 = false;
            plVar7 = (longlong *)
                     AkHashList<unsigned_long,AkMediaEntry,AkArrayAllocatorNoAlign<_ArrayPoolDefault>_>
                     ::CreateEntry(plVar1,uVar10,uVar4);
LAB_143156824:
            if (plVar7 != (longlong *)0x0) {
              *(uint *)((longlong)plVar7 + 0x24) = *puVar2;
              local_48 = (ulonglong)puVar2[1] + param_2;
              local_40 = puVar2[2];
              lVar8 = FUN_14315a610(plVar7 + 2,param_3,&local_48);
              local_res18 = 0x34;
              if (lVar8 != 0) {
                local_res18 = 1;
                if (bVar5) {
LAB_14315687b:
                  *(int *)(plVar7 + 4) = (int)plVar7[4] + 1;
                }
                LeaveCriticalSection(lpCriticalSection);
                goto LAB_14315688c;
              }
              AkHashList<unsigned_long,AkMediaEntry,AkArrayAllocatorNoAlign<_ArrayPoolDefault>_>::
              Unset(plVar1,*puVar2);
            }
          }
          LeaveCriticalSection(lpCriticalSection);
          break;
        }
LAB_14315688c:
        *(int *)(param_3 + 0x48) = *(int *)(param_3 + 0x48) + 1;
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
      } while (uVar10 < *(uint *)(param_3 + 0x4c));
      iVar9 = (int)uVar11;
    }
    if (*(int *)(param_3 + 0x4c) == iVar9) {
      return 1;
    }
    iVar9 = local_res18;
    if (local_res18 == 1) {
      return 1;
    }
  }
  FUN_14315ad60(param_1,param_3);
  return iVar9;
}



// FUNCTION 143156940 FUN_143156940 body=541 status=ok
// SIG undefined FUN_143156940(void)

int FUN_143156940(longlong param_1,uint *param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  undefined8 *puVar5;
  void *pvVar6;
  int iVar7;
  short sVar8;
  uint local_res10 [2];
  
  uVar2 = param_2[2];
  if (uVar2 == 0) {
    return 1;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  uVar3 = *param_2;
  if (*(uint *)(param_1 + 0x78) != 0) {
    for (puVar5 = *(undefined8 **)
                   (*(longlong *)(param_1 + 0x70) +
                   ((ulonglong)uVar3 % (ulonglong)*(uint *)(param_1 + 0x78)) * 8);
        puVar5 != (undefined8 *)0x0; puVar5 = (undefined8 *)*puVar5) {
      if (*(uint *)(puVar5 + 1) == uVar3) {
        if (puVar5 != (undefined8 *)0xfffffffffffffff0) {
          *(int *)(puVar5 + 6) = *(int *)(puVar5 + 6) + 1;
          iVar7 = 1;
          goto LAB_143156b3b;
        }
        break;
      }
    }
  }
  puVar5 = (undefined8 *)
           AkHashList<unsigned_long,AkMediaEntry,AkArrayAllocatorNoAlign<0>_>::Set
                     (param_1 + 0x70,uVar3);
  if (puVar5 == (undefined8 *)0x0) {
    iVar7 = 2;
    goto LAB_143156b3b;
  }
  *(uint *)((longlong)puVar5 + 0x24) = uVar3;
  if (*(int *)(puVar5 + 3) == 0) {
    if ((DAT_146b50bc8 == -1) ||
       (pvVar6 = AK::MemoryMgr::Malign(DAT_146b50bc8,(ulonglong)uVar2,0x10), pvVar6 == (void *)0x0))
    goto LAB_143156b26;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
    CAkBankReader::Reset();
    sVar1 = *(short *)((longlong)param_2 + 0x1a);
    if (sVar1 == 0) {
      bVar4 = 1;
    }
    else {
      bVar4 = (byte)param_2[3] & 1;
    }
    sVar8 = 0;
    if (sVar1 != 0) {
      sVar8 = sVar1;
    }
    iVar7 = FUN_143153c10(param_1 + 8,param_2[1],0,sVar8,0,bVar4);
    local_res10[0] = 0;
    if (iVar7 == 1) {
      iVar7 = CAkBankReader::FillData(param_1 + 8,pvVar6,param_2[2],local_res10);
    }
    if ((iVar7 == 1) && (param_2[2] != local_res10[0])) {
      iVar7 = 2;
    }
    CAkBankReader::CloseFile(param_1 + 8);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
    if (iVar7 == 1) {
      *(uint *)(puVar5 + 1) = uVar2;
      *puVar5 = pvVar6;
      goto LAB_143156b3b;
    }
    AK::MemoryMgr::Falign(DAT_146b50bc8,pvVar6);
  }
  else {
    uVar2 = *(uint *)(puVar5[2] + 0x10);
    if ((DAT_146b50bc8 != -1) &&
       (pvVar6 = AK::MemoryMgr::Malign(DAT_146b50bc8,(ulonglong)uVar2,0x10), pvVar6 != (void *)0x0))
    {
      _guard_xfg_dispatch_icall_nop(pvVar6,*(void **)(puVar5[2] + 8),(ulonglong)uVar2);
      iVar7 = 1;
      *(uint *)(puVar5 + 1) = uVar2;
      *puVar5 = pvVar6;
      goto LAB_143156b3b;
    }
LAB_143156b26:
    iVar7 = 0x34;
  }
  FUN_143159bb0(param_1,puVar5);
LAB_143156b3b:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  return iVar7;
}



// FUNCTION 143156b60 LoadSource body=279 status=ok
// SIG undefined LoadSource(void)

undefined8 CAkBankMgr::LoadSource(longlong *param_1,int *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  uVar2 = *(undefined4 *)*param_1;
  *param_1 = (longlong)((undefined4 *)*param_1 + 1);
  *(undefined4 *)((longlong)param_3 + 4) = uVar2;
  pcVar3 = (char *)*param_1;
  cVar1 = *pcVar3;
  *param_1 = (longlong)(pcVar3 + 1);
  uVar2 = *(undefined4 *)(pcVar3 + 1);
  *param_1 = (longlong)(pcVar3 + 5);
  *(undefined4 *)(param_3 + 1) = uVar2;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar2;
  uVar2 = *(undefined4 *)*param_1;
  *param_1 = (longlong)((undefined4 *)*param_1 + 1);
  *(undefined4 *)(param_3 + 2) = uVar2;
  uVar4 = (uint)*(byte *)*param_1;
  *param_1 = (longlong)((byte *)*param_1 + 1);
  *(uint *)((longlong)param_3 + 0x14) = *(uint *)((longlong)param_3 + 0x14) & 0xfffffbfc;
  uVar5 = 0;
  if (cVar1 == '\x01') {
    uVar5 = 2;
  }
  *(uint *)((longlong)param_3 + 0x14) =
       *(uint *)((longlong)param_3 + 0x14) | (uVar4 & 8) << 7 | uVar5 | uVar4 & 1;
  uVar5 = *(uint *)((longlong)param_3 + 4) & 0xf;
  if (uVar5 == 1) {
    if (cVar1 == '\0') {
      *(uint *)((longlong)param_3 + 0x14) = *(uint *)((longlong)param_3 + 0x14) & 0xffffff8f | 0xc;
      return 1;
    }
    if ((cVar1 != '\x02') && (cVar1 != '\x01')) {
      return 2;
    }
    *(uint *)((longlong)param_3 + 0x14) = *(uint *)((longlong)param_3 + 0x14) & 0xffffff87 | 4;
  }
  else {
    if (uVar5 == 2) {
      uVar5 = *(uint *)*param_1;
      *param_1 = (longlong)((uint *)*param_1 + 1);
      *(uint *)(param_3 + 4) = uVar5;
      param_3[3] = *param_1;
      *param_1 = *param_1 + (ulonglong)uVar5;
      *param_2 = *param_2 - *(int *)(param_3 + 4);
      return 1;
    }
    if (uVar5 != 0) {
      return 2;
    }
  }
  return 1;
}



// FUNCTION 143156c80 LogWrongBankVersion body=71 status=ok
// SIG undefined LogWrongBankVersion(void)

void LogWrongBankVersion(uint param_1)

{
  undefined *puVar1;
  wchar_t local_218 [268];
  
  puVar1 = PTR_u_an_older_1467bdd28;
  if (0x83 < param_1) {
    puVar1 = PTR_u_a_newer_1467bdd30;
  }
  swprintf_s(local_218,0x104,(wchar_t *)PTR_u_Load_bank_failed___incompatible_b_1467bdd20,puVar1,
             param_1,0x84);
  return;
}



// FUNCTION 143156cd0 FUN_143156cd0 body=139 status=ok
// SIG undefined FUN_143156cd0(void)

void FUN_143156cd0(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  uVar4 = 0;
  uVar5 = 0xffffffff;
  uVar3 = 0;
  switch(*param_2) {
  case 0:
  case 1:
    uVar5 = param_2[0xc];
  case 6:
  case 7:
    uVar3 = param_2[1];
    break;
  case 2:
  case 3:
    if (param_2[0xc] == 1) {
      uVar3 = param_2[0xe];
    }
  }
  if (param_2[10] == 2) {
    uVar4 = *(undefined8 *)(param_2 + 0xe);
  }
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 6);
  *(undefined4 *)(param_1 + 0xcc) = param_3;
  CAkBankCallbackMgr::DoCallback(param_1 + 0xd0,uVar2,uVar3,uVar4,param_3,uVar5,uVar1);
  return;
}



// FUNCTION 143156d80 FUN_143156d80 body=396 status=ok
// SIG undefined FUN_143156d80(void)

int FUN_143156d80(longlong param_1,undefined8 *param_2,int param_3,undefined1 param_4,
                 undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong local_res8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
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
  
  local_a8 = CONCAT44(local_a8._4_4_,*(undefined4 *)((longlong)param_2 + 4));
  uStack_a0 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b51fe0);
  uVar2 = uStack_a0;
  uVar1 = local_a8;
  lVar4 = CAkBankList::Get(param_1 + 0x88,&local_a8);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0x74) = *(int *)(lVar4 + 0x74) + 1;
    UNLOCK();
    *(int *)(lVar4 + 0x7c) = *(int *)(lVar4 + 0x7c) + 1;
    if ((param_3 == 2) || ((*(byte *)(lVar4 + 0x78) & 4) != 0)) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b51fe0);
      return 1;
    }
    param_3 = 3;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b51fe0);
  local_78 = *param_2;
  uStack_70 = param_2[1];
  local_68 = param_2[2];
  uStack_60 = param_2[3];
  local_58 = param_2[4];
  uStack_50 = param_2[5];
  local_res8 = 0;
  local_48 = *(undefined4 *)(param_2 + 6);
  uStack_44 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_40 = *(undefined4 *)(param_2 + 7);
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0x3c);
  local_38 = *(undefined4 *)(param_2 + 8);
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0x44);
  uStack_30 = *(undefined4 *)(param_2 + 9);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x4c);
  iVar3 = FUN_143155f30(param_1,&local_78,&local_res8,param_3,param_4,param_5);
  lVar4 = local_res8;
  if (iVar3 == 1) {
    local_98 = uVar1;
    uStack_90 = uVar2;
    FUN_1431b0d70(param_1 + 0x88,&local_98,local_res8);
  }
  else if ((iVar3 != 0x45) && (local_res8 != 0)) {
    local_88 = uVar1;
    uStack_80 = uVar2;
    FUN_1431b0cc0(param_1 + 0x88,&local_88);
    FUN_143159c10(lVar4,0);
  }
  return iVar3;
}



// FUNCTION 143156f10 FUN_143156f10 body=925 status=ok
// SIG undefined FUN_143156f10(void)

int FUN_143156f10(longlong param_1,undefined8 *param_2,longlong param_3)

{
  LPCRITICAL_SECTION p_Var1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  int local_res20;
  undefined8 local_88;
  undefined8 uStack_80;
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
  
  lVar9 = *(longlong *)(param_3 + 0x20);
  iVar10 = 1;
  local_res20 = 1;
  if (lVar9 == 0) {
    return 1;
  }
  do {
    lVar5 = DAT_146b50af8;
    if (*(short *)(lVar9 + 0x34) == 0x403) {
      uVar2 = *(uint *)(lVar9 + 0x38);
      *(uint *)((longlong)param_2 + 4) = uVar2;
      if (*(uint *)(param_1 + 0xa8) != 0) {
        for (puVar4 = *(undefined8 **)
                       (*(longlong *)(param_1 + 0xa0) +
                       ((ulonglong)uVar2 % (ulonglong)*(uint *)(param_1 + 0xa8)) * 8);
            puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)*puVar4) {
          if (*(uint *)(puVar4 + 1) == uVar2) {
            if (puVar4 + 2 != (undefined8 *)0x0) {
              AkFileNameString::Set(param_2 + 1,puVar4[2],&DAT_145ac679c);
            }
            break;
          }
        }
      }
      local_88 = *param_2;
      uStack_80 = param_2[1];
      local_78 = param_2[2];
      uStack_70 = param_2[3];
      local_68 = param_2[4];
      uStack_60 = param_2[5];
      local_58 = *(undefined4 *)(param_2 + 6);
      uStack_54 = *(undefined4 *)((longlong)param_2 + 0x34);
      uStack_50 = *(undefined4 *)(param_2 + 7);
      uStack_4c = *(undefined4 *)((longlong)param_2 + 0x3c);
      local_48 = *(undefined4 *)(param_2 + 8);
      uStack_44 = *(undefined4 *)((longlong)param_2 + 0x44);
      uStack_40 = *(undefined4 *)(param_2 + 9);
      uStack_3c = *(undefined4 *)((longlong)param_2 + 0x4c);
      local_res20 = FUN_143156d80(param_1,&local_88,2,0,0);
      iVar10 = local_res20;
      if (local_res20 != 1) goto LAB_143157105;
      if (*(char *)((longlong)param_2 + 0x34) == '\0') {
        uVar7 = *(undefined4 *)(param_3 + 0x10);
      }
      else {
        uVar7 = 0;
      }
      local_res20 = FUN_143176fa0(*(undefined4 *)(lVar9 + 0x30),uVar7);
      iVar10 = local_res20;
      if (local_res20 != 1) {
        lVar5 = CAkBankList::Get(param_1 + 0x88);
        if (lVar5 != 0) {
          FUN_143159c10(lVar5);
        }
        goto LAB_14315716a;
      }
    }
    else {
      if (*(short *)(lVar9 + 0x34) == 0x2103) {
        uVar2 = *(uint *)(lVar9 + 0x30);
        p_Var1 = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0xc0);
        EnterCriticalSection(p_Var1);
        uVar3 = *(uint *)(lVar5 + 0xf0);
        if ((uVar3 != 0) &&
           (plVar8 = *(longlong **)
                      (*(longlong *)(lVar5 + 0xe8) + ((ulonglong)uVar2 % (ulonglong)uVar3) * 8),
           plVar8 != (longlong *)0x0)) {
          while (*(uint *)(plVar8 + 2) != uVar2) {
            plVar8 = (longlong *)plVar8[1];
            if (plVar8 == (longlong *)0x0) goto LAB_1431570ee;
          }
          if (plVar8 != (longlong *)0x0) {
            *(int *)((longlong)plVar8 + 0x14) = *(int *)((longlong)plVar8 + 0x14) + 1;
            LeaveCriticalSection(p_Var1);
            local_res20 = FUN_143156f10(param_1,param_2,plVar8);
            (**(code **)(*plVar8 + 0x10))(plVar8);
            iVar10 = local_res20;
            goto LAB_14315716a;
          }
        }
LAB_1431570ee:
        LeaveCriticalSection(p_Var1);
        iVar10 = 2;
        local_res20 = 2;
LAB_143157105:
        lVar5 = *(longlong *)(param_3 + 0x20);
        lVar6 = DAT_146b50af8;
        do {
          if (lVar5 == lVar9) {
            DAT_146b50af8 = lVar6;
            return iVar10;
          }
          DAT_146b50af8 = lVar6;
          if (*(short *)(lVar5 + 0x34) == 0x403) {
            if (*(char *)((longlong)param_2 + 0x34) == '\0') {
              uVar7 = *(undefined4 *)(param_3 + 0x10);
            }
            else {
              uVar7 = 0;
            }
            FUN_143179790(*(undefined4 *)(lVar5 + 0x30),uVar7);
            lVar6 = CAkBankList::Get(param_1 + 0x88);
            if (lVar6 != 0) {
              FUN_143159c10(lVar6);
            }
          }
          else if (*(short *)(lVar5 + 0x34) == 0x2103) {
            uVar2 = *(uint *)(lVar5 + 0x30);
            p_Var1 = (LPCRITICAL_SECTION)(lVar6 + 0xc0);
            EnterCriticalSection(p_Var1);
            if (*(uint *)(lVar6 + 0xf0) != 0) {
              for (plVar8 = *(longlong **)
                             (*(longlong *)(lVar6 + 0xe8) +
                             ((ulonglong)uVar2 % (ulonglong)*(uint *)(lVar6 + 0xf0)) * 8);
                  plVar8 != (longlong *)0x0; plVar8 = (longlong *)plVar8[1]) {
                if (*(uint *)(plVar8 + 2) == uVar2) {
                  if (plVar8 != (longlong *)0x0) {
                    *(int *)((longlong)plVar8 + 0x14) = *(int *)((longlong)plVar8 + 0x14) + 1;
                    LeaveCriticalSection(p_Var1);
                    FUN_14315afb0(param_1,*(undefined1 *)((longlong)param_2 + 0x34),plVar8);
                    (**(code **)(*plVar8 + 0x10))(plVar8);
                    goto LAB_143157254;
                  }
                  break;
                }
              }
            }
            LeaveCriticalSection(p_Var1);
          }
LAB_143157254:
          lVar5 = *(longlong *)(lVar5 + 0x18);
          lVar6 = DAT_146b50af8;
          iVar10 = local_res20;
        } while( true );
      }
LAB_14315716a:
      if (iVar10 != 1) goto LAB_143157105;
    }
    lVar9 = *(longlong *)(lVar9 + 0x18);
    if (lVar9 == 0) {
      return iVar10;
    }
  } while( true );
}



// FUNCTION 1431572b0 FUN_1431572b0 body=703 status=ok
// SIG undefined FUN_1431572b0(void)

int FUN_1431572b0(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
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
  
  uVar9 = *(uint *)(param_2 + 6);
  uVar11 = (ulonglong)uVar9;
  *(undefined1 *)(param_1 + 200) = 1;
  if (uVar9 != 1) {
    uVar10 = 0;
    if (uVar9 != 0) {
      lVar6 = param_2[7];
      do {
        local_78 = *param_2;
        uStack_70 = param_2[1];
        puVar7 = (undefined4 *)(lVar6 + uVar10 * 4);
        local_68 = param_2[2];
        uStack_60 = param_2[3];
        iVar3 = 1;
        local_58 = param_2[4];
        uStack_50 = param_2[5];
        local_48 = *(undefined4 *)(param_2 + 6);
        uStack_44 = *(undefined4 *)((longlong)param_2 + 0x34);
        uStack_40 = *(undefined4 *)(param_2 + 7);
        uStack_3c = *(undefined4 *)((longlong)param_2 + 0x3c);
        local_38 = *(undefined4 *)(param_2 + 8);
        uStack_34 = *(undefined4 *)((longlong)param_2 + 0x44);
        uStack_30 = *(undefined4 *)(param_2 + 9);
        uStack_2c = *(undefined4 *)((longlong)param_2 + 0x4c);
        plVar5 = (longlong *)
                 CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef
                           (DAT_146b50af8 + 0xc0,*puVar7);
        if (plVar5 == (longlong *)0x0) {
          iVar3 = 0xf;
        }
        else {
          iVar4 = (int)plVar5[5];
          if (iVar4 == 0) {
            iVar3 = FUN_143156f10(param_1,&local_78,plVar5);
            if (iVar3 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5);
              iVar4 = (int)plVar5[5];
              goto LAB_143157441;
            }
          }
          else {
LAB_143157441:
            *(int *)(plVar5 + 5) = iVar4 + 1;
          }
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
        if (iVar3 != 1) {
          if ((int)uVar10 != 0) {
            uVar1 = *(undefined1 *)((longlong)param_2 + 0x34);
            do {
              puVar7 = puVar7 + -1;
              uVar9 = (int)uVar10 - 1;
              uVar10 = (ulonglong)uVar9;
              plVar5 = (longlong *)
                       CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef
                                 (DAT_146b50af8 + 0xc0,*puVar7);
              if (plVar5 != (longlong *)0x0) {
                if (((int)plVar5[5] != 0) &&
                   (iVar4 = (int)plVar5[5] + -1, *(int *)(plVar5 + 5) = iVar4, iVar4 == 0)) {
                  FUN_14315afb0(param_1,uVar1,plVar5);
                  (**(code **)(*plVar5 + 0x10))(plVar5);
                }
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            } while (uVar9 != 0);
          }
          goto LAB_1431574a9;
        }
        lVar6 = param_2[7];
        uVar8 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar8;
      } while (uVar8 < uVar9);
    }
    iVar3 = CAkBankMgr::ProcessAccumulated(param_1);
    if ((iVar3 != 1) && (uVar9 != 0)) {
      uVar1 = *(undefined1 *)((longlong)param_2 + 0x34);
      puVar7 = (undefined4 *)param_2[7];
      do {
        FUN_14315af20(param_1,uVar1,*puVar7);
        puVar7 = puVar7 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
LAB_1431574a9:
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_2[7]);
    param_2[7] = 0;
    goto LAB_1431574c8;
  }
  local_78 = *param_2;
  uStack_70 = param_2[1];
  local_68 = param_2[2];
  uStack_60 = param_2[3];
  uVar2 = *(undefined4 *)(param_2 + 7);
  local_58 = param_2[4];
  uStack_50 = param_2[5];
  local_48 = *(undefined4 *)(param_2 + 6);
  uStack_44 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_40 = *(undefined4 *)(param_2 + 7);
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0x3c);
  local_38 = *(undefined4 *)(param_2 + 8);
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0x44);
  uStack_30 = *(undefined4 *)(param_2 + 9);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x4c);
  plVar5 = (longlong *)
           CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(DAT_146b50af8 + 0xc0,uVar2);
  if (plVar5 == (longlong *)0x0) {
    iVar3 = 0xf;
  }
  else {
    iVar4 = (int)plVar5[5];
    iVar3 = 1;
    if (iVar4 == 0) {
      iVar3 = FUN_143156f10(param_1,&local_78,plVar5);
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
        iVar4 = (int)plVar5[5];
        goto LAB_143157357;
      }
    }
    else {
LAB_143157357:
      *(int *)(plVar5 + 5) = iVar4 + 1;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((iVar3 == 1) && (iVar3 = CAkBankMgr::ProcessAccumulated(param_1), iVar3 != 1)) {
    FUN_14315af20(param_1,*(undefined1 *)((longlong)param_2 + 0x34),uVar2);
  }
LAB_1431574c8:
  *(undefined1 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  FUN_143156cd0(param_1,param_2,iVar3);
  return iVar3;
}



// FUNCTION 143157570 FUN_143157570 body=501 status=ok
// SIG undefined FUN_143157570(void)

int FUN_143157570(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  
  cVar8 = *(char *)(param_2 + 0x3c);
  iVar6 = 1;
  if (cVar8 != '\0') {
    *(undefined1 *)(param_1 + 200) = 1;
  }
  uVar1 = *(uint *)(param_2 + 0x40);
  uVar12 = (ulonglong)uVar1;
  if (uVar1 == 1) {
    uVar2 = *(undefined4 *)(param_2 + 0x38);
    uVar3 = *(undefined4 *)(param_2 + 0x48);
    uVar4 = *(undefined4 *)(param_2 + 0x34);
    uVar5 = *(undefined4 *)(param_2 + 0x30);
    iVar6 = FUN_14312d9a0(DAT_146b50ae8,uVar5,uVar4,uVar3,cVar8,uVar2);
    if (((cVar8 != '\0') && (iVar6 == 1)) &&
       (iVar6 = CAkBankMgr::ProcessAccumulated(param_1), iVar6 != 1)) {
      FUN_14312d9a0(DAT_146b50ae8,uVar5,uVar4,uVar3,0,uVar2);
    }
  }
  else {
    uVar10 = 0;
    if (uVar1 != 0) {
      uVar2 = *(undefined4 *)(param_2 + 0x38);
      uVar7 = *(undefined1 *)(param_2 + 0x3c);
      puVar11 = *(undefined4 **)(param_2 + 0x48);
      uVar3 = *(undefined4 *)(param_2 + 0x34);
      do {
        iVar6 = FUN_14312d9a0(DAT_146b50ae8,*(undefined4 *)(param_2 + 0x30),uVar3,puVar11[uVar10],
                              uVar7,uVar2);
        if (iVar6 != 1) {
          if ((int)uVar10 != 0) {
            do {
              FUN_14312d9a0(DAT_146b50ae8,*(undefined4 *)(param_2 + 0x30),uVar3,*puVar11,0,uVar2);
              puVar11 = puVar11 + 1;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          break;
        }
        uVar7 = *(undefined1 *)(param_2 + 0x3c);
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
      } while (uVar9 < uVar1);
    }
    cVar8 = *(char *)(param_2 + 0x3c);
    if ((((cVar8 != '\0') && (iVar6 == 1)) &&
        (iVar6 = CAkBankMgr::ProcessAccumulated(param_1), iVar6 != 1)) && (uVar1 != 0)) {
      uVar2 = *(undefined4 *)(param_2 + 0x38);
      uVar3 = *(undefined4 *)(param_2 + 0x34);
      uVar4 = *(undefined4 *)(param_2 + 0x30);
      puVar11 = *(undefined4 **)(param_2 + 0x48);
      do {
        FUN_14312d9a0(DAT_146b50ae8,uVar4,uVar3,*puVar11,0,uVar2);
        puVar11 = puVar11 + 1;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      cVar8 = *(char *)(param_2 + 0x3c);
    }
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_2 + 0x48));
  }
  if (cVar8 != '\0') {
    *(undefined1 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  FUN_143156cd0(param_1,param_2,iVar6);
  return iVar6;
}



// FUNCTION 143157770 FUN_143157770 body=1275 status=ok
// SIG undefined FUN_143157770(void)

int FUN_143157770(longlong param_1,longlong param_2,int param_3,char param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  short sVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  void *_Dst;
  void *pvVar7;
  uint uVar8;
  longlong lVar9;
  __uint64 _Var10;
  longlong lVar11;
  uint *puVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  int local_res18 [2];
  char local_res20;
  int local_78;
  uint local_74;
  int local_70;
  uint local_6c;
  uint local_68;
  int local_64;
  int local_60 [2];
  longlong local_58;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined1 local_48 [8];
  short *local_40;
  
  if (param_3 != 0) {
    uVar13 = *(uint *)(param_2 + 0x48);
    local_74 = 0;
    iVar5 = 0;
    iVar15 = 0;
    local_78 = 0;
    local_res20 = param_4;
    if (uVar13 < *(uint *)(param_2 + 0x4c)) {
      local_58 = 0;
      local_res18[0] = param_3;
      uVar8 = local_74;
      do {
        puVar12 = (uint *)(*(longlong *)(param_2 + 0x30) + local_58);
        local_74 = puVar12[1];
        uVar2 = *puVar12;
        iVar15 = iVar15 + (local_74 - uVar8);
        local_64 = iVar15;
        if (uVar2 != 0) {
          uVar13 = puVar12[2];
          uVar14 = (ulonglong)uVar13;
          lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x48);
          EnterCriticalSection(lpCriticalSection);
          if (*(uint *)(param_1 + 0x78) == 0) {
LAB_143157875:
            plVar6 = (longlong *)
                     AkHashList<unsigned_long,AkMediaEntry,AkArrayAllocatorNoAlign<0>_>::Set
                               (param_1 + 0x70,uVar2);
            if (plVar6 == (longlong *)0x0) {
              iVar4 = 2;
              LeaveCriticalSection(lpCriticalSection);
              goto LAB_143157b97;
            }
            *(uint *)((longlong)plVar6 + 0x24) = uVar2;
          }
          else {
            for (puVar3 = *(undefined8 **)
                           (*(longlong *)(param_1 + 0x70) +
                           ((ulonglong)uVar2 % (ulonglong)*(uint *)(param_1 + 0x78)) * 8);
                puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3) {
              if (*(uint *)(puVar3 + 1) == uVar2) {
                plVar6 = puVar3 + 2;
                goto LAB_14315784f;
              }
            }
            plVar6 = (longlong *)0x0;
LAB_14315784f:
            if (plVar6 == (longlong *)0x0) goto LAB_143157875;
            *(int *)(plVar6 + 4) = (int)plVar6[4] + 1;
            if (*plVar6 != 0) {
              *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + 1;
              LeaveCriticalSection(lpCriticalSection);
              goto LAB_143157b27;
            }
          }
          if ((int)plVar6[3] == 0) {
            if ((DAT_146b50bc8 == -1) ||
               (_Dst = AK::MemoryMgr::Malign(DAT_146b50bc8,uVar14,0x10), _Dst == (void *)0x0))
            goto LAB_143157bd9;
            LeaveCriticalSection(lpCriticalSection);
            if (iVar15 == 0) {
LAB_14315795f:
              _Var10 = 0;
              local_6c = 0;
              iVar4 = CAkBankReader::FillData(param_1 + 8,_Dst,uVar14,&local_6c);
              if ((iVar4 == 1) && (uVar13 != local_6c)) {
                iVar4 = 2;
              }
              else {
                local_74 = local_74 + local_6c;
                if (((local_res20 != '\0') &&
                    ((iVar5 = AkFileParser::Parse(_Dst,uVar14,local_48,0,local_4c,local_50,local_60,
                                                  &local_68,0,0,1), iVar5 == 1 &&
                     (local_60[0] + local_68 <= uVar13)))) &&
                   ((sVar1 = *local_40, sVar1 == 0x3040 || (sVar1 == -1)))) {
                  uVar8 = local_68;
                  if ((local_68 & 3) != 0) {
                    uVar8 = (local_68 - (local_68 & 3)) + 0xc;
                  }
                  if (sVar1 == -1) {
                    _Var10 = (__uint64)
                             (uVar8 + (uint)(ushort)local_40[1] * *(int *)(local_40 + 0xc) * 2);
                  }
                  else if (sVar1 == 0x3040) {
                    _Var10 = (__uint64)
                             (uVar8 + (uint)(ushort)local_40[1] * *(int *)(local_40 + 0xc) * 2);
                  }
                  pvVar7 = AK::MemoryMgr::Malign(DAT_146b50bc8,_Var10,4);
                  if (pvVar7 != (void *)0x0) {
                    iVar5 = FUN_143154ee0(pvVar7,_Dst,uVar13,(int)local_40 - (int)_Dst,local_68,
                                          (uint)(ushort)local_40[1] * 2,local_48);
                    if (iVar5 == 1) {
                      AK::MemoryMgr::Falign(DAT_146b50bc8,_Dst);
                      _Dst = pvVar7;
                      uVar13 = (uint)_Var10;
                    }
                    else {
                      AK::MemoryMgr::Falign(DAT_146b50bc8,pvVar7);
                    }
                  }
                }
              }
            }
            else {
              local_70 = 0;
              iVar4 = CAkBankReader::Skip(param_1 + 8,iVar15,&local_70);
              if (iVar15 == local_70) {
                local_64 = 0;
                if (iVar4 == 1) goto LAB_14315795f;
              }
              else {
                iVar4 = 2;
              }
            }
            EnterCriticalSection(lpCriticalSection);
            iVar15 = local_64;
            if (iVar4 == 1) goto LAB_143157b06;
            if (_Dst != (void *)0x0) {
              AK::MemoryMgr::Falign(DAT_146b50bc8,_Dst);
            }
          }
          else {
            uVar13 = *(uint *)(plVar6[2] + 0x10);
            if ((DAT_146b50bc8 != -1) &&
               (_Dst = AK::MemoryMgr::Malign(DAT_146b50bc8,(ulonglong)uVar13,0x10),
               _Dst != (void *)0x0)) {
              _guard_xfg_dispatch_icall_nop(_Dst,*(void **)(plVar6[2] + 8),(ulonglong)uVar13);
LAB_143157b06:
              *(uint *)(plVar6 + 1) = uVar13;
              *plVar6 = (longlong)_Dst;
              *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + 1;
              LeaveCriticalSection(lpCriticalSection);
              goto LAB_143157b27;
            }
LAB_143157bd9:
            iVar4 = 0x34;
          }
          FUN_143159bb0(param_1,plVar6);
          LeaveCriticalSection(lpCriticalSection);
          goto LAB_143157b97;
        }
        *(uint *)(param_2 + 0x48) = uVar13 + 1;
LAB_143157b27:
        iVar5 = local_78 + 1;
        local_58 = local_58 + 0xc;
        uVar13 = *(uint *)(param_2 + 0x48);
        param_3 = local_res18[0];
        local_78 = iVar5;
        uVar8 = local_74;
      } while (uVar13 < *(uint *)(param_2 + 0x4c));
    }
    iVar15 = iVar15 + (param_3 - local_74);
    if (iVar15 != 0) {
      local_res18[0] = 0;
      CAkBankReader::Skip(param_1 + 8,iVar15,local_res18);
      if (iVar15 != local_res18[0]) {
        iVar4 = 2;
        local_78 = iVar5;
LAB_143157b97:
        lVar9 = (longlong)local_78;
        if (lVar9 < 1) {
          return iVar4;
        }
        lVar11 = lVar9 * 0xc;
        do {
          lVar11 = lVar11 + -0xc;
          lVar9 = lVar9 + -1;
          if (*(int *)(lVar11 + *(longlong *)(param_2 + 0x30)) != 0) {
            FUN_143159e50(param_1);
          }
        } while (0 < lVar9);
        return iVar4;
      }
    }
    *(byte *)(param_2 + 0x78) = *(byte *)(param_2 + 0x78) | 4;
  }
  return 1;
}



// FUNCTION 143157c70 PrepareSingleMedia body=94 status=ok
// SIG undefined PrepareSingleMedia(void)

undefined8 CAkBankMgr::PrepareSingleMedia(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(char *)(param_1 + 200) == '\0') {
    uVar2 = FUN_143156940();
    return uVar2;
  }
  local_18 = *(undefined4 *)param_2;
  uStack_14 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_10 = *(undefined4 *)(param_2 + 1);
  uStack_c = *(undefined4 *)((longlong)param_2 + 0xc);
  puVar1 = (undefined8 *)FUN_143154550(param_1 + 0xb8,&local_18);
  if (puVar1 == (undefined8 *)0x0) {
    return 0x34;
  }
  uVar2 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  uVar2 = param_2[3];
  puVar1[2] = param_2[2];
  puVar1[3] = uVar2;
  return 1;
}



// FUNCTION 143157cd0 ProcessAccumulated body=186 status=ok
// SIG undefined ProcessAccumulated(void)

ulonglong CAkBankMgr::ProcessAccumulated(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = *(undefined4 **)(param_1 + 0xb8);
  if (puVar3 == puVar3 + (ulonglong)*(uint *)(param_1 + 0xc0) * 8) {
    return 1;
  }
  do {
    uVar2 = FUN_143156940(param_1,puVar3);
    if ((int)uVar2 != 1) {
      uVar1 = uVar2;
      for (puVar4 = *(undefined4 **)(param_1 + 0xb8); puVar4 != puVar3; puVar4 = puVar4 + 8) {
        FUN_143159e50(param_1,*puVar4);
        uVar1 = uVar2 & 0xffffffff;
      }
      return uVar1;
    }
    puVar3 = puVar3 + 8;
  } while (puVar3 != (undefined4 *)
                     ((ulonglong)*(uint *)(param_1 + 0xc0) * 0x20 + *(longlong *)(param_1 + 0xb8)));
  return uVar2 & 0xffffffff;
}



// FUNCTION 143157d90 ProcessCustomPlatformChunk body=154 status=ok
// SIG undefined ProcessCustomPlatformChunk(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 CAkBankMgr::ProcessCustomPlatformChunk(longlong param_1,int param_2)

{
  char *_Dest;
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  uint *puVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined8 uStack_30;
  undefined1 auStack_28 [32];
  
  puVar6 = auStack_28;
  uVar3 = 1;
  if (param_2 != 0) {
    uStack_30 = 0x143157dbc;
    puVar4 = (uint *)CAkBankReader::GetData(param_1 + 8);
    uVar1 = *puVar4;
    if (uVar1 != 0) {
      uVar5 = (ulonglong)(uVar1 + 1) + 0xf;
      if (uVar5 <= uVar1 + 1) {
        uVar5 = 0xffffffffffffff0;
      }
      uStack_30 = 0x143157de6;
      lVar2 = -(uVar5 & 0xfffffffffffffff0);
      puVar6 = auStack_28 + lVar2;
      _Dest = &stack0xfffffffffffffff8 + lVar2;
      *(undefined8 *)(auStack_28 + lVar2 + -8) = 0x143157e01;
      strncpy(_Dest,(char *)(puVar4 + 1),(ulonglong)uVar1);
      _Dest[uVar1] = '\0';
      *(undefined8 *)(auStack_28 + lVar2 + -8) = 0x143157e0d;
      uVar3 = AK::SoundEngine::SetCustomPlatformName(_Dest);
    }
    *(undefined8 *)(puVar6 + -8) = 0x143157e17;
    CAkBankReader::ReleaseData(param_1 + 8);
  }
  return uVar3;
}



// FUNCTION 143157e30 ProcessGlobalSettingsChunk body=1531 status=ok
// SIG undefined ProcessGlobalSettingsChunk(void)

int CAkBankMgr::ProcessGlobalSettingsChunk(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  void *in_stack_ffffffffffffff78;
  undefined4 uVar6;
  uint in_stack_ffffffffffffff80;
  uint local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  uint local_64;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  uint local_3c;
  undefined4 local_38;
  
  if (param_2 == 0) {
    return 1;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  param_1 = param_1 + 8;
  iVar1 = CAkBankReader::FillDataEx(param_1,&local_5c,4);
  AK::SoundEngine::SetVolumeThresholdInternal(local_5c,2);
  if (iVar1 == 1) {
    iVar1 = CAkBankReader::FillDataEx(param_1,local_res10,2);
    AK::SoundEngine::SetMaxNumVoicesLimitInternal((undefined2)local_res10[0],2);
    if (iVar1 == 1) {
      iVar1 = CAkBankReader::FillDataEx(param_1,local_res10,2);
      AK::SoundEngine::SetMaxNumDangerousVirtVoicesLimitInternal((undefined2)local_res10[0],2);
    }
  }
  local_64 = 0;
  if ((iVar1 == 1) && (iVar1 = CAkBankReader::FillDataEx(param_1,&local_64,4), iVar1 == 1)) {
    uVar5 = 0;
    if (local_64 != 0) {
      while( true ) {
        local_res10[0] = 0;
        local_74 = 0;
        local_78 = 0;
        iVar1 = CAkBankReader::FillDataEx(param_1,local_res10,4);
        if ((iVar1 != 1) || (iVar1 = CAkBankReader::FillDataEx(param_1,&local_74,4), iVar1 != 1))
        break;
        iVar2 = FUN_14312d300(DAT_146b50ae8,local_res10[0]);
        iVar1 = 2 - (uint)(iVar2 != 0);
        if (iVar2 == 0) break;
        iVar1 = CAkStateMgr::SetdefaultTransitionTime(DAT_146b50ae8,local_res10[0],local_74);
        if ((iVar1 != 1) || (iVar1 = CAkBankReader::FillDataEx(param_1,&local_78,4), iVar1 != 1))
        break;
        uVar4 = 0;
        if (local_78 != 0) {
          do {
            iVar1 = CAkBankReader::FillDataEx(param_1,&local_6c,4);
            if (iVar1 != 1) goto LAB_143158055;
            iVar1 = CAkBankReader::FillDataEx(param_1,&local_70,4);
            if ((iVar1 != 1) || (iVar1 = CAkBankReader::FillDataEx(param_1,&local_68,4), iVar1 != 1)
               ) goto LAB_143158055;
            in_stack_ffffffffffffff80 = in_stack_ffffffffffffff80 & 0xffffff00;
            in_stack_ffffffffffffff78 =
                 (void *)CONCAT44((int)((ulonglong)in_stack_ffffffffffffff78 >> 0x20),local_68);
            iVar1 = CAkStateMgr::AddStateTransition
                              (DAT_146b50ae8,local_res10[0],local_6c,local_70,
                               in_stack_ffffffffffffff78,in_stack_ffffffffffffff80);
            if (iVar1 != 1) goto LAB_143158055;
            uVar4 = uVar4 + 1;
          } while (uVar4 < local_78);
        }
        uVar5 = uVar5 + 1;
        if (local_64 <= uVar5) break;
      }
    }
LAB_143158055:
    local_60 = 0;
    if (((iVar1 == 1) && (iVar1 = CAkBankReader::FillDataEx(param_1,&local_60,4), iVar1 == 1)) &&
       (uVar5 = 0, local_60 != 0)) {
      do {
        iVar1 = CAkBankReader::FillDataEx(param_1,&local_70,4);
        if ((iVar1 != 1) || (iVar1 = CAkBankReader::FillDataEx(param_1,&local_6c,4), iVar1 != 1))
        break;
        iVar1 = CAkBankReader::FillDataEx(param_1,local_res10,1);
        if ((iVar1 != 1) || (iVar1 = CAkBankReader::FillDataEx(param_1,&local_74,4), iVar1 != 1))
        break;
        if (local_74 != 0) {
          uVar4 = local_74 * 0xc;
          pvVar3 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar4);
          if (pvVar3 == (void *)0x0) {
            iVar1 = 0x34;
            break;
          }
          iVar1 = CAkBankReader::FillDataEx(param_1,pvVar3,uVar4);
          if (iVar1 == 1) {
            in_stack_ffffffffffffff78 = pvVar3;
            iVar1 = CAkSwitchMgr::AddSwitchRTPC
                              (g_pSwitchMgr,local_70,local_6c,(char)local_res10[0],pvVar3,local_74);
          }
          AK::MemoryMgr::Free(g_DefaultPoolId,pvVar3);
          if (iVar1 != 1) break;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < local_60);
    }
    local_res18[0] = 0;
    if ((iVar1 == 1) && (iVar1 = CAkBankReader::FillDataEx(param_1,local_res18,4), iVar1 == 1)) {
      for (; uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20), local_res18[0] != 0
          ; local_res18[0] = local_res18[0] + -1) {
        iVar1 = CAkBankReader::FillDataEx(param_1,&local_78,4);
        if ((iVar1 != 1) || (iVar1 = CAkBankReader::FillDataEx(param_1,&local_6c,4), iVar1 != 1))
        break;
        CAkRTPCMgr::SetDefaultParamValue(g_pRTPCMgr,local_78,local_6c);
        iVar1 = CAkBankReader::FillDataEx(param_1,&local_74,4);
        if (iVar1 != 1) break;
        iVar1 = CAkBankReader::FillDataEx(param_1,&local_68,4);
        if ((iVar1 != 1) || (iVar1 = CAkBankReader::FillDataEx(param_1,&local_70,4), iVar1 != 1))
        break;
        in_stack_ffffffffffffff78 = (void *)CONCAT44(uVar6,local_70);
        CAkRTPCMgr::SetRTPCRamping(g_pRTPCMgr,local_78,local_74,local_68,in_stack_ffffffffffffff78);
        iVar1 = CAkBankReader::FillDataEx(param_1,local_res10,1);
        if ((iVar1 != 0) && ((char)local_res10[0] != '\0')) {
          FUN_143132e20(g_pRTPCMgr,(char)local_res10[0],local_78);
        }
        if (iVar1 != 1) break;
      }
    }
    local_res20[0] = 0;
    if ((iVar1 == 1) && (iVar1 = CAkBankReader::FillDataEx(param_1,local_res20,4), iVar1 == 1)) {
      for (; local_res20[0] != 0; local_res20[0] = local_res20[0] + -1) {
        iVar1 = CAkBankReader::FillDataEx(param_1,local_res10,4);
        if (iVar1 == 1) {
          iVar1 = CAkBankReader::FillDataEx(param_1,&local_6c,4);
          if (iVar1 == 1) {
            iVar1 = CAkBankReader::FillDataEx(param_1,&local_70,4);
            if (iVar1 == 1) {
              iVar1 = CAkBankReader::FillDataEx(param_1,&local_68,4);
              if (iVar1 == 1) {
                iVar1 = CAkBankReader::FillDataEx(param_1,&local_74,4);
                if (iVar1 == 1) {
                  iVar1 = CAkBankReader::FillDataEx(param_1,&local_78,4);
                  if (iVar1 == 1) {
                    iVar1 = CAkBankReader::FillDataEx(param_1,local_58,4);
                  }
                }
              }
            }
          }
        }
        if (iVar1 != 1) break;
        local_4c = local_6c;
        local_48 = local_70;
        local_44 = local_68;
        local_40 = local_74;
        local_3c = local_78;
        local_38 = local_58[0];
        local_50 = local_res10[0];
        iVar1 = FUN_14315f640(local_res10[0],&local_50);
        if (iVar1 != 1) break;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  return iVar1;
}



// FUNCTION 143158430 FUN_143158430 body=3180 status=ok
// SIG undefined FUN_143158430(void)

int FUN_143158430(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  longlong *plVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  LPCRITICAL_SECTION p_Var16;
  int local_res20;
  uint local_58;
  int local_54;
  uint local_50;
  char local_4c;
  int local_4b;
  
  lVar1 = param_1 + 8;
  local_58 = 0;
  iVar8 = CAkBankReader::FillDataEx(lVar1,&local_58,4);
  if ((iVar8 == 1) && (local_58 != 0)) {
    cVar7 = FUN_143134440(param_2 + 0x60,local_58);
    iVar8 = 2 - (uint)(cVar7 != '\0');
  }
  local_res20 = 0;
  local_50 = 0;
  iVar15 = local_res20;
  if (local_58 != 0) {
    do {
      iVar13 = 1;
      iVar14 = 1;
      if (iVar8 != 1) {
        return iVar8;
      }
      iVar8 = CAkBankReader::FillDataEx(lVar1,&local_4c,5);
      lVar6 = DAT_146b50af8;
      if (iVar8 == 1) {
        switch(local_4c) {
        case '\x01':
          puVar12 = (uint *)CAkBankReader::GetData(lVar1);
          lVar6 = DAT_146b50af8;
          if (puVar12 == (uint *)0x0) {
            iVar8 = 2;
          }
          else {
            uVar3 = *puVar12;
            p_Var16 = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0x80);
            EnterCriticalSection(p_Var16);
            uVar4 = *(uint *)(lVar6 + 0xb0);
            if (uVar4 != 0) {
              for (plVar11 = *(longlong **)
                              (*(longlong *)(lVar6 + 0xa8) +
                              ((ulonglong)uVar3 % (ulonglong)uVar4) * 8); plVar11 != (longlong *)0x0
                  ; plVar11 = (longlong *)plVar11[1]) {
                if (*(uint *)(plVar11 + 2) == uVar3) {
                  if (plVar11 != (longlong *)0x0) {
                    *(int *)((longlong)plVar11 + 0x14) = *(int *)((longlong)plVar11 + 0x14) + 1;
                    LeaveCriticalSection(p_Var16);
                    goto LAB_143158a3c;
                  }
                  break;
                }
              }
            }
            LeaveCriticalSection(p_Var16);
            EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
            plVar11 = (longlong *)CAkState::Create(uVar3);
            if (plVar11 == (longlong *)0x0) {
              iVar13 = 2;
            }
            else {
              iVar13 = CAkState::SetInitialValues(plVar11,puVar12,local_4b);
              if (iVar13 != 1) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
            if (iVar13 == 1) {
LAB_143158a3c:
              uVar3 = *(uint *)(param_2 + 0x68);
              if (uVar3 < *(uint *)(param_2 + 0x6c)) {
                *(uint *)(param_2 + 0x68) = uVar3 + 1;
                puVar2 = (undefined8 *)(*(longlong *)(param_2 + 0x60) + (ulonglong)uVar3 * 8);
                if (puVar2 != (undefined8 *)0x0) {
                  *puVar2 = plVar11;
                }
              }
            }
            CAkBankReader::ReleaseData(lVar1);
            iVar8 = iVar13;
            iVar15 = local_res20;
          }
          break;
        case '\x02':
          puVar10 = (undefined4 *)CAkBankReader::GetData(lVar1,local_4b);
          if (puVar10 == (undefined4 *)0x0) {
            iVar8 = 2;
          }
          else {
            uVar5 = *puVar10;
            plVar11 = (longlong *)CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,uVar5,0);
            if (plVar11 == (longlong *)0x0) {
              EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
              plVar11 = (longlong *)FUN_1431a46e0(uVar5);
              if (plVar11 == (longlong *)0x0) {
                iVar8 = 2;
              }
              else {
                iVar8 = CAkSound::SetInitialValues(plVar11,puVar10,local_4b,param_2,0);
                if (iVar8 != 1) {
                  (**(code **)(*plVar11 + 0x10))(plVar11);
                }
              }
LAB_14315859a:
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
              if (iVar8 != 1) goto LAB_1431585cd;
            }
            else if (((*(uint *)((longlong)plVar11 + 0xd4) & 0x7c) == 0) ||
                    (iVar8 = iVar13, (*(uint *)((longlong)plVar11 + 0xd4) >> 7 & 1) == 0)) {
              EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
              iVar8 = CAkSound::SetInitialValues(plVar11,puVar10,local_4b,param_2,1);
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
              if (iVar8 != 1) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
                CAkBankReader::ReleaseData(lVar1);
                iVar15 = local_res20;
                if (iVar8 == 0x5b) {
                  iVar8 = iVar13;
                }
                break;
              }
            }
LAB_1431585ac:
            uVar3 = *(uint *)(param_2 + 0x68);
            if (uVar3 < *(uint *)(param_2 + 0x6c)) {
              *(uint *)(param_2 + 0x68) = uVar3 + 1;
              puVar2 = (undefined8 *)(*(longlong *)(param_2 + 0x60) + (ulonglong)uVar3 * 8);
              if (puVar2 != (undefined8 *)0x0) {
                *puVar2 = plVar11;
              }
            }
LAB_1431585cd:
            CAkBankReader::ReleaseData(lVar1);
            iVar15 = local_res20;
          }
          break;
        case '\x03':
          iVar8 = FUN_143159530(param_1,&local_4c,param_2);
          break;
        case '\x04':
          puVar10 = (undefined4 *)CAkBankReader::GetData(lVar1,local_4b);
          if (puVar10 != (undefined4 *)0x0) {
            uVar5 = *puVar10;
            plVar11 = (longlong *)
                      CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef
                                (DAT_146b50af8 + 0xc0,uVar5);
            iVar8 = iVar13;
            if (plVar11 != (longlong *)0x0) goto LAB_1431585ac;
            plVar11 = (longlong *)CAkEvent::CreateNoIndex(uVar5);
            if (plVar11 != (longlong *)0x0) {
              EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
              iVar8 = FUN_14317a860(plVar11,puVar10,local_4b);
              if (iVar8 == 1) {
                CAkEvent::AddToIndex(plVar11);
              }
              else {
                (**(code **)(*plVar11 + 0x10))();
              }
              goto LAB_14315859a;
            }
            iVar8 = 2;
            goto LAB_1431585cd;
          }
          iVar8 = 2;
          break;
        case '\x05':
          uVar9 = CAkAudioLibIndex::GetNodeIndex(DAT_146b50af8,0);
          puVar10 = (undefined4 *)CAkBankReader::GetData(lVar1,local_4b);
          if (puVar10 == (undefined4 *)0x0) {
            iVar8 = 2;
            iVar15 = local_res20;
          }
          else {
            uVar5 = *puVar10;
            plVar11 = (longlong *)
                      CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(uVar9,uVar5);
            if (plVar11 == (longlong *)0x0) {
              EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
              plVar11 = (longlong *)CAkRanSeqCntr::Create(uVar5,1);
              if (plVar11 == (longlong *)0x0) {
                iVar14 = 2;
              }
              else {
                iVar14 = CAkRanSeqCntr::SetInitialValues(plVar11,puVar10,local_4b);
LAB_14315876e:
                if (iVar14 != 1) {
                  (**(code **)(*plVar11 + 0x10))(plVar11);
                }
              }
LAB_14315877e:
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
              if (iVar14 == 1) goto LAB_143158790;
            }
            else {
LAB_143158790:
              uVar3 = *(uint *)(param_2 + 0x68);
              if (uVar3 < *(uint *)(param_2 + 0x6c)) {
                *(uint *)(param_2 + 0x68) = uVar3 + 1;
                puVar2 = (undefined8 *)(*(longlong *)(param_2 + 0x60) + (ulonglong)uVar3 * 8);
                if (puVar2 != (undefined8 *)0x0) {
                  *puVar2 = plVar11;
                }
              }
            }
            CAkBankReader::ReleaseData(lVar1);
LAB_1431587b9:
            iVar8 = iVar14;
            iVar15 = local_res20;
            if (iVar14 == 0x5b) {
              iVar8 = 1;
            }
          }
          break;
        case '\x06':
          uVar9 = CAkAudioLibIndex::GetNodeIndex(DAT_146b50af8,0);
          puVar10 = (undefined4 *)CAkBankReader::GetData(lVar1,local_4b);
          if (puVar10 != (undefined4 *)0x0) {
            uVar5 = *puVar10;
            plVar11 = (longlong *)
                      CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(uVar9,uVar5);
            if (plVar11 == (longlong *)0x0) {
              EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
              plVar11 = (longlong *)FUN_1431b1b80(uVar5);
              if (plVar11 != (longlong *)0x0) {
                iVar14 = FUN_1431b3910(plVar11,puVar10,local_4b);
                goto LAB_14315876e;
              }
              iVar14 = 2;
              goto LAB_14315877e;
            }
            goto LAB_143158790;
          }
          iVar8 = 2;
          iVar15 = local_res20;
          break;
        case '\a':
          uVar9 = CAkAudioLibIndex::GetNodeIndex(DAT_146b50af8,0);
          puVar10 = (undefined4 *)CAkBankReader::GetData(lVar1,local_4b);
          if (puVar10 != (undefined4 *)0x0) {
            uVar5 = *puVar10;
            plVar11 = (longlong *)
                      CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(uVar9,uVar5);
            if (plVar11 == (longlong *)0x0) {
              EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
              plVar11 = (longlong *)CAkActorMixer::Create(uVar5);
              if (plVar11 != (longlong *)0x0) {
                iVar14 = CAkActorMixer::SetInitialValues(plVar11,puVar10,local_4b);
                goto LAB_14315876e;
              }
              iVar14 = 2;
              goto LAB_14315877e;
            }
            goto LAB_143158790;
          }
          iVar8 = 2;
          iVar15 = local_res20;
          break;
        case '\b':
          iVar8 = FUN_1431596d0(param_1,&local_4c,param_2);
          break;
        case '\t':
          uVar9 = CAkAudioLibIndex::GetNodeIndex(DAT_146b50af8,0);
          puVar10 = (undefined4 *)CAkBankReader::GetData(lVar1,local_4b);
          if (puVar10 != (undefined4 *)0x0) {
            uVar5 = *puVar10;
            plVar11 = (longlong *)
                      CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(uVar9,uVar5);
            if (plVar11 == (longlong *)0x0) {
              EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
              plVar11 = (longlong *)CAkLayerCntr::Create(uVar5);
              if (plVar11 != (longlong *)0x0) {
                iVar14 = FUN_1431b5dc0(plVar11,puVar10,local_4b);
                goto LAB_14315876e;
              }
              iVar14 = 2;
              goto LAB_14315877e;
            }
            goto LAB_143158790;
          }
          iVar8 = 2;
          iVar15 = local_res20;
          break;
        default:
          if (DAT_146b50b30 == (code *)0x0) {
            if (((char)iVar15 == '\0') && (local_res20 = iVar15, (byte)(local_4c - 10U) < 4)) {
              local_res20 = iVar13;
              iVar15 = iVar13;
            }
          }
          else {
            iVar8 = (*DAT_146b50b30)(&local_4c,param_2,param_3);
            if (iVar8 != 3) break;
          }
          local_54 = 0;
          CAkBankReader::Skip(lVar1,local_4b,&local_54);
          if (local_54 != local_4b) {
            iVar8 = 7;
          }
          break;
        case '\x0e':
          puVar10 = (undefined4 *)CAkBankReader::GetData(lVar1,local_4b);
          if (puVar10 != (undefined4 *)0x0) {
            uVar5 = *puVar10;
            plVar11 = (longlong *)
                      CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(lVar6 + 0x180,uVar5);
            if (plVar11 == (longlong *)0x0) {
              EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
              plVar11 = (longlong *)FUN_1431afc10(uVar5);
              if (plVar11 != (longlong *)0x0) {
                iVar14 = FUN_1431afee0(plVar11,puVar10,local_4b);
                goto LAB_14315876e;
              }
              iVar14 = 2;
              goto LAB_14315877e;
            }
            goto LAB_143158790;
          }
          iVar8 = 2;
          iVar15 = local_res20;
          break;
        case '\x0f':
          p_Var16 = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0x240);
          puVar12 = (uint *)CAkBankReader::GetData(lVar1);
          if (puVar12 != (uint *)0x0) {
            uVar3 = *puVar12;
            EnterCriticalSection(p_Var16);
            if (*(uint *)(lVar6 + 0x270) != 0) {
              for (plVar11 = *(longlong **)
                              (*(longlong *)(lVar6 + 0x268) +
                              ((ulonglong)uVar3 % (ulonglong)*(uint *)(lVar6 + 0x270)) * 8);
                  plVar11 != (longlong *)0x0; plVar11 = (longlong *)plVar11[1]) {
                if (*(uint *)(plVar11 + 2) == uVar3) {
                  if (plVar11 != (longlong *)0x0) {
                    *(int *)((longlong)plVar11 + 0x14) = *(int *)((longlong)plVar11 + 0x14) + 1;
                    LeaveCriticalSection(p_Var16);
                    goto LAB_143158de0;
                  }
                  break;
                }
              }
            }
            LeaveCriticalSection(p_Var16);
            EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
            plVar11 = (longlong *)CAkDialogueEvent::Create(uVar3);
            if (plVar11 == (longlong *)0x0) {
              iVar14 = 2;
            }
            else {
              iVar14 = CAkDialogueEvent::SetInitialValues(plVar11,puVar12,local_4b);
LAB_143158dbe:
              if (iVar14 != 1) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
LAB_143158dce:
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
            if (iVar14 == 1) {
LAB_143158de0:
              uVar3 = *(uint *)(param_2 + 0x68);
              if (uVar3 < *(uint *)(param_2 + 0x6c)) {
                *(uint *)(param_2 + 0x68) = uVar3 + 1;
                puVar2 = (undefined8 *)(*(longlong *)(param_2 + 0x60) + (ulonglong)uVar3 * 8);
                if (puVar2 != (undefined8 *)0x0) {
                  *puVar2 = plVar11;
                }
              }
            }
            CAkBankReader::ReleaseData(lVar1);
            goto LAB_1431587b9;
          }
          iVar8 = 2;
          break;
        case '\x10':
          p_Var16 = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0x280);
          puVar12 = (uint *)CAkBankReader::GetData(lVar1);
          if (puVar12 != (uint *)0x0) {
            uVar3 = *puVar12;
            EnterCriticalSection(p_Var16);
            if (*(uint *)(lVar6 + 0x2b0) != 0) {
              for (plVar11 = *(longlong **)
                              (*(longlong *)(lVar6 + 0x2a8) +
                              ((ulonglong)uVar3 % (ulonglong)*(uint *)(lVar6 + 0x2b0)) * 8);
                  plVar11 != (longlong *)0x0; plVar11 = (longlong *)plVar11[1]) {
                if (*(uint *)(plVar11 + 2) == uVar3) {
                  if (plVar11 != (longlong *)0x0) {
                    *(int *)((longlong)plVar11 + 0x14) = *(int *)((longlong)plVar11 + 0x14) + 1;
                    LeaveCriticalSection(p_Var16);
                    iVar14 = iVar13;
                    goto LAB_143158de0;
                  }
                  break;
                }
              }
            }
            LeaveCriticalSection(p_Var16);
            EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
            plVar11 = (longlong *)CAkFxShareSet::Create(uVar3);
LAB_143158e9b:
            if (plVar11 != (longlong *)0x0) {
              iVar14 = FUN_14318c1d0(plVar11,puVar12,local_4b);
              goto LAB_143158dbe;
            }
            iVar14 = 2;
            goto LAB_143158dce;
          }
          iVar8 = 2;
          break;
        case '\x11':
          p_Var16 = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0x2c0);
          puVar12 = (uint *)CAkBankReader::GetData(lVar1);
          if (puVar12 != (uint *)0x0) {
            uVar3 = *puVar12;
            EnterCriticalSection(p_Var16);
            if (*(uint *)(lVar6 + 0x2f0) != 0) {
              for (plVar11 = *(longlong **)
                              (*(longlong *)(lVar6 + 0x2e8) +
                              ((ulonglong)uVar3 % (ulonglong)*(uint *)(lVar6 + 0x2f0)) * 8);
                  plVar11 != (longlong *)0x0; plVar11 = (longlong *)plVar11[1]) {
                if (*(uint *)(plVar11 + 2) == uVar3) {
                  if (plVar11 != (longlong *)0x0) {
                    *(int *)((longlong)plVar11 + 0x14) = *(int *)((longlong)plVar11 + 0x14) + 1;
                    LeaveCriticalSection(p_Var16);
                    iVar14 = iVar13;
                    goto LAB_143158de0;
                  }
                  break;
                }
              }
            }
            LeaveCriticalSection(p_Var16);
            EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
            plVar11 = (longlong *)CAkFxCustom::Create(uVar3);
            goto LAB_143158e9b;
          }
          iVar8 = 2;
          break;
        case '\x12':
          uVar9 = CAkAudioLibIndex::GetNodeIndex(DAT_146b50af8,1);
          puVar10 = (undefined4 *)CAkBankReader::GetData(lVar1,local_4b);
          if (puVar10 != (undefined4 *)0x0) {
            uVar5 = *puVar10;
            plVar11 = (longlong *)
                      CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(uVar9,uVar5);
            if (plVar11 == (longlong *)0x0) {
              EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
              plVar11 = (longlong *)CAkAuxBus::Create(uVar5);
              if (plVar11 != (longlong *)0x0) {
                iVar14 = (**(code **)(*plVar11 + 0x248))(plVar11,puVar10,local_4b);
                goto LAB_14315876e;
              }
              iVar14 = 2;
              goto LAB_14315877e;
            }
            goto LAB_143158790;
          }
          iVar8 = 2;
          iVar15 = local_res20;
          break;
        case '\x13':
          puVar10 = (undefined4 *)CAkBankReader::GetData(lVar1,local_4b);
          if (puVar10 != (undefined4 *)0x0) {
            uVar5 = *puVar10;
            plVar11 = (longlong *)
                      CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(lVar6 + 0x1c0,uVar5);
            iVar14 = iVar13;
            if (plVar11 == (longlong *)0x0) {
              EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
              plVar11 = (longlong *)CAkModulator::Create(uVar5,0);
              if (plVar11 != (longlong *)0x0) {
LAB_143158c0f:
                iVar14 = (**(code **)(*plVar11 + 0x20))(plVar11,puVar10,local_4b);
                goto LAB_14315876e;
              }
              iVar14 = 2;
              goto LAB_14315877e;
            }
            goto LAB_143158790;
          }
          iVar8 = 2;
          iVar15 = local_res20;
          break;
        case '\x14':
          puVar10 = (undefined4 *)CAkBankReader::GetData(lVar1,local_4b);
          if (puVar10 != (undefined4 *)0x0) {
            uVar5 = *puVar10;
            plVar11 = (longlong *)
                      CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(lVar6 + 0x1c0,uVar5);
            iVar14 = iVar13;
            if (plVar11 == (longlong *)0x0) {
              EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
              plVar11 = (longlong *)CAkModulator::Create(uVar5,1);
              if (plVar11 != (longlong *)0x0) goto LAB_143158c0f;
              iVar14 = 2;
              goto LAB_14315877e;
            }
            goto LAB_143158790;
          }
          iVar8 = 2;
          iVar15 = local_res20;
          break;
        case '\x15':
          p_Var16 = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0x300);
          puVar12 = (uint *)CAkBankReader::GetData(lVar1);
          if (puVar12 != (uint *)0x0) {
            uVar3 = *puVar12;
            EnterCriticalSection(p_Var16);
            if (*(uint *)(lVar6 + 0x330) != 0) {
              for (plVar11 = *(longlong **)
                              (*(longlong *)(lVar6 + 0x328) +
                              ((ulonglong)uVar3 % (ulonglong)*(uint *)(lVar6 + 0x330)) * 8);
                  plVar11 != (longlong *)0x0; plVar11 = (longlong *)plVar11[1]) {
                if (*(uint *)(plVar11 + 2) == uVar3) {
                  if (plVar11 != (longlong *)0x0) {
                    *(int *)((longlong)plVar11 + 0x14) = *(int *)((longlong)plVar11 + 0x14) + 1;
                    LeaveCriticalSection(p_Var16);
                    iVar14 = iVar13;
                    goto LAB_143158de0;
                  }
                  break;
                }
              }
            }
            LeaveCriticalSection(p_Var16);
            EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
            plVar11 = (longlong *)CAkAudioDevice::Create(uVar3);
            goto LAB_143158e9b;
          }
          iVar8 = 2;
          break;
        case '\x16':
          puVar10 = (undefined4 *)CAkBankReader::GetData(lVar1,local_4b);
          if (puVar10 != (undefined4 *)0x0) {
            uVar5 = *puVar10;
            plVar11 = (longlong *)
                      CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(lVar6 + 0x1c0,uVar5);
            iVar14 = iVar13;
            if (plVar11 == (longlong *)0x0) {
              EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
              plVar11 = (longlong *)CAkModulator::Create(uVar5,2);
              if (plVar11 != (longlong *)0x0) goto LAB_143158c0f;
              iVar14 = 2;
              goto LAB_14315877e;
            }
            goto LAB_143158790;
          }
          iVar8 = 2;
          iVar15 = local_res20;
        }
      }
      local_50 = local_50 + 1;
    } while (local_50 < local_58);
  }
  return iVar8;
}



// FUNCTION 143159100 FUN_143159100 body=440 status=ok
// SIG undefined FUN_143159100(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_143159100(longlong param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  int *piVar9;
  int *lpMultiByteStr;
  undefined1 *puVar10;
  undefined1 *puVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  undefined1 auStack_48 [48];
  
  piVar4 = (int *)CAkBankReader::GetData(param_1 + 8);
  if (piVar4 == (int *)0x0) {
    uVar3 = 2;
  }
  else {
    iVar14 = *piVar4;
    piVar4 = piVar4 + 1;
    if (iVar14 != 0) {
      piVar15 = (int *)0x0;
      puVar10 = auStack_48;
      piVar12 = DAT_146b50e00;
      piVar13 = DAT_146b50df0;
      do {
        uVar1 = piVar4[1];
        iVar2 = *piVar4;
        lpMultiByteStr = piVar4 + 2;
        piVar4 = lpMultiByteStr;
        if (uVar1 != 0) {
          piVar4 = (int *)((longlong)lpMultiByteStr + (ulonglong)uVar1);
        }
        if (uVar1 == 0) {
          lpMultiByteStr = piVar15;
        }
        for (piVar5 = piVar13;
            (piVar5 != piVar13 + (ulonglong)DAT_146b50df8 * 6 && (*piVar5 != iVar2));
            piVar5 = piVar5 + 6) {
        }
        piVar9 = piVar5 + 2;
        if (piVar5 == piVar13 + (ulonglong)DAT_146b50df8 * 6) {
          piVar9 = piVar15;
        }
        puVar11 = puVar10;
        if (piVar9 == (int *)0x0) {
          for (piVar5 = piVar12;
              (piVar5 != piVar12 + (ulonglong)DAT_146b50e08 * 6 && (*piVar5 != iVar2));
              piVar5 = piVar5 + 6) {
          }
          piVar9 = piVar5 + 2;
          if (piVar5 == piVar12 + (ulonglong)DAT_146b50e08 * 6) {
            piVar9 = piVar15;
          }
          if (piVar9 == (int *)0x0) {
            lVar6 = -1;
            do {
              lVar7 = lVar6 + 1;
              lVar6 = lVar6 + 1;
            } while (*(char *)((longlong)lpMultiByteStr + lVar7) != '\0');
            uVar8 = lVar6 * 2 + 0x11;
            if (uVar8 <= lVar6 * 2 + 2U) {
              uVar8 = 0xffffffffffffff0;
            }
            *(undefined8 *)(puVar10 + -8) = 0x14315923b;
            lVar6 = -(uVar8 & 0xfffffffffffffff0);
            puVar11 = puVar10 + lVar6;
            lVar7 = -1;
            do {
              lVar7 = lVar7 + 1;
            } while (*(char *)((longlong)lpMultiByteStr + lVar7) != '\0');
            *(int *)(puVar10 + lVar6 + 0x28) = (int)lVar7 + 1;
            *(undefined1 **)(puVar10 + lVar6 + 0x20) = puVar10 + lVar6 + 0x30;
            *(undefined8 *)(puVar10 + lVar6 + -8) = 0x14315927a;
            MultiByteToWideChar(0xfde9,0,(LPCSTR)lpMultiByteStr,-1,
                                *(LPWSTR *)(puVar10 + lVar6 + 0x20),*(int *)(puVar10 + lVar6 + 0x28)
                               );
            *(undefined8 *)(puVar10 + lVar6 + -8) = 0x143159282;
            AK::SoundEngine::RegisterPluginDLL((wchar_t *)(puVar10 + lVar6 + 0x30));
            piVar12 = DAT_146b50e00;
            piVar13 = DAT_146b50df0;
          }
        }
        iVar14 = iVar14 + -1;
        puVar10 = puVar11;
      } while (iVar14 != 0);
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1431592c0 FUN_1431592c0 body=508 status=ok
// SIG undefined FUN_1431592c0(void)

ulonglong FUN_1431592c0(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  byte local_res10 [8];
  uint local_res20 [2];
  undefined1 local_38 [8];
  undefined1 local_30 [4];
  uint local_2c;
  
  uVar1 = 1;
  if (param_2 == 0) {
    return 1;
  }
  do {
    if (uVar1 != 1) break;
    uVar2 = CAkBankReader::FillDataEx(param_1 + 8,local_30,8);
    if ((int)uVar2 != 1) {
      return uVar2;
    }
    iVar5 = param_2 + -8;
    uVar6 = 0;
    uVar1 = 1;
    param_2 = iVar5;
    if (local_2c != 0) {
      do {
        uVar1 = CAkBankReader::FillDataEx(param_1 + 8,local_res20,4);
        param_2 = iVar5;
        if (uVar1 != 1) break;
        param_2 = iVar5 + -4;
        uVar1 = CAkBankReader::FillDataEx(param_1 + 8,local_res10,1);
        if (uVar1 != 1) break;
        param_2 = iVar5 + -5;
        if (*(uint *)(param_1 + 0xa8) != 0) {
          for (puVar4 = *(undefined8 **)
                         (*(longlong *)(param_1 + 0xa0) +
                         ((ulonglong)local_res20[0] % (ulonglong)*(uint *)(param_1 + 0xa8)) * 8);
              puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)*puVar4) {
            if (*(uint *)(puVar4 + 1) == local_res20[0]) {
              if (puVar4 != (undefined8 *)0xfffffffffffffff0) {
                CAkBankReader::Skip(param_1 + 8,local_res10[0],local_38);
                param_2 = param_2 - (uint)local_res10[0];
                goto LAB_14315943a;
              }
              break;
            }
          }
        }
        pvVar3 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)(local_res10[0] + 5));
        if (pvVar3 == (void *)0x0) {
          uVar1 = 0x34;
          break;
        }
        *(undefined1 *)((ulonglong)local_res10[0] + (longlong)pvVar3) = 0x2e;
        *(undefined1 *)((ulonglong)local_res10[0] + 1 + (longlong)pvVar3) = 0x62;
        *(undefined1 *)((ulonglong)local_res10[0] + 2 + (longlong)pvVar3) = 0x6e;
        *(undefined1 *)((ulonglong)local_res10[0] + 3 + (longlong)pvVar3) = 0x6b;
        *(undefined1 *)((ulonglong)local_res10[0] + 4 + (longlong)pvVar3) = 0;
        uVar1 = CAkBankReader::FillDataEx(param_1 + 8,pvVar3,local_res10[0]);
        if (uVar1 != 1) {
LAB_143159475:
          AK::MemoryMgr::Free(g_DefaultPoolId,pvVar3);
          break;
        }
        param_2 = param_2 - (uint)local_res10[0];
        puVar4 = (undefined8 *)FUN_14315a1d0(param_1 + 0xa0,local_res20[0]);
        if (puVar4 == (undefined8 *)0x0) {
          uVar1 = 0x34;
          goto LAB_143159475;
        }
        *puVar4 = pvVar3;
LAB_14315943a:
        uVar6 = uVar6 + 1;
        iVar5 = param_2;
      } while (uVar6 < local_2c);
    }
  } while (param_2 != 0);
  return (ulonglong)uVar1;
}



// FUNCTION 1431594c0 QueueBankCommand body=99 status=ok
// SIG undefined QueueBankCommand(void)

undefined8 CAkBankMgr::QueueBankCommand(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1431b0540(param_1 + 0xd0,*(undefined8 *)(param_2 + 0x20));
  }
  FUN_143155400(param_1,param_2);
  if (*(char *)(param_2 + 0x10) != '\0') {
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_2 + 8));
  }
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined1 *)(param_2 + 0x10) = 0;
  return 1;
}



// FUNCTION 143159530 FUN_143159530 body=407 status=ok
// SIG undefined FUN_143159530(void)

int FUN_143159530(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint *puVar6;
  longlong *plVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar8;
  
  iVar8 = 1;
  puVar6 = (uint *)CAkBankReader::GetData(param_1 + 8);
  lVar5 = DAT_146b50af8;
  if (puVar6 == (uint *)0x0) {
    return 2;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0x100);
  uVar2 = *puVar6;
  uVar4 = puVar6[1];
  EnterCriticalSection(lpCriticalSection);
  uVar3 = *(uint *)(lVar5 + 0x130);
  if (uVar3 != 0) {
    for (plVar7 = *(longlong **)
                   (*(longlong *)(lVar5 + 0x128) + ((ulonglong)uVar2 % (ulonglong)uVar3) * 8);
        plVar7 != (longlong *)0x0; plVar7 = (longlong *)plVar7[1]) {
      if (*(uint *)(plVar7 + 2) == uVar2) {
        if (plVar7 != (longlong *)0x0) {
          *(int *)((longlong)plVar7 + 0x14) = *(int *)((longlong)plVar7 + 0x14) + 1;
          LeaveCriticalSection(lpCriticalSection);
          if (((short)uVar4 != 0x403) || ((*(byte *)((longlong)plVar7 + 0x36) & 0x20) != 0))
          goto LAB_14315967a;
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
          iVar8 = CAkAction::SetInitialValues(plVar7,puVar6,*(undefined4 *)(param_2 + 1));
          if (iVar8 != 1) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
          goto LAB_143159668;
        }
        break;
      }
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  plVar7 = (longlong *)CAkAction::Create((short)uVar4,uVar2);
  if (plVar7 == (longlong *)0x0) {
    iVar8 = 2;
  }
  else {
    iVar8 = CAkAction::SetInitialValues(plVar7,puVar6,*(undefined4 *)(param_2 + 1));
    if (iVar8 != 1) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
LAB_143159668:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  if (iVar8 == 1) {
LAB_14315967a:
    uVar2 = *(uint *)(param_3 + 0x68);
    if (uVar2 < *(uint *)(param_3 + 0x6c)) {
      *(uint *)(param_3 + 0x68) = uVar2 + 1;
      puVar1 = (undefined8 *)(*(longlong *)(param_3 + 0x60) + (ulonglong)uVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = plVar7;
      }
    }
  }
  CAkBankReader::ReleaseData(param_1 + 8);
  return iVar8;
}



// FUNCTION 1431596d0 FUN_1431596d0 body=691 status=ok
// SIG undefined FUN_1431596d0(void)

int FUN_1431596d0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  
  if (DAT_146b50ee0 == 0) {
    plVar14 = (longlong *)0x0;
  }
  else {
    plVar14 = (longlong *)*DAT_146b50ed8;
  }
  iVar12 = 1;
  uVar3 = CAkAudioLibIndex::GetNodeIndex(DAT_146b50af8,1);
  puVar4 = (undefined4 *)CAkBankReader::GetData(param_1 + 8,*(undefined4 *)(param_2 + 1));
  if (puVar4 == (undefined4 *)0x0) {
    return 2;
  }
  uVar1 = *puVar4;
  plVar5 = (longlong *)CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(uVar3);
  if (plVar5 == (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
    plVar5 = (longlong *)CAkBus::Create(uVar1);
    if (plVar5 == (longlong *)0x0) {
      iVar12 = 2;
    }
    else {
      iVar12 = (**(code **)(*plVar5 + 0x248))(plVar5,puVar4,*(undefined4 *)(param_2 + 1));
      if (iVar12 != 1) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
LAB_1431598c0:
        plVar5 = (longlong *)0x0;
      }
    }
LAB_1431598c2:
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
    if (iVar12 != 1) goto LAB_14315995a;
  }
  else if (plVar5[0x11] == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
    uVar13 = (ulonglong)DAT_146b50ee0;
    uVar15 = (ulonglong)DAT_146b50ee0;
    for (puVar6 = DAT_146b50ed8;
        (puVar6 != DAT_146b50ed8 + uVar13 && ((longlong *)*puVar6 != plVar5)); puVar6 = puVar6 + 1)
    {
    }
    puVar9 = (undefined8 *)0x0;
    if (puVar6 != DAT_146b50ed8 + uVar13) {
      puVar9 = puVar6;
    }
    iVar2 = 1;
    if (puVar9 == (undefined8 *)0x0) {
      uVar11 = (ulonglong)DAT_146b50ee4;
      puVar6 = DAT_146b50ed8;
      uVar10 = DAT_146b50ee4;
      if (uVar15 < uVar11) {
LAB_143159886:
        DAT_146b50ee4 = uVar10;
        DAT_146b50ed8 = puVar6;
        if (uVar15 < uVar11) {
          DAT_146b50ee0 = (int)uVar13 + 1;
          if (DAT_146b50ed8 + uVar13 != (undefined8 *)0x0) {
            DAT_146b50ed8[uVar13] = plVar5;
            goto LAB_1431598c2;
          }
        }
      }
      else {
        uVar10 = DAT_146b50ee4 + 1;
        uVar11 = (ulonglong)uVar10;
        puVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,uVar11 << 3);
        if (puVar6 != (undefined8 *)0x0) {
          uVar13 = (ulonglong)DAT_146b50ee0;
          if ((DAT_146b50ed8 != (undefined8 *)0x0) && (DAT_146b50ed8 != puVar6)) {
            uVar8 = 0;
            if (DAT_146b50ee0 != 0) {
              do {
                puVar6[uVar8] = DAT_146b50ed8[uVar8];
                uVar8 = uVar8 + 1;
              } while (uVar8 < uVar13);
            }
            AK::MemoryMgr::Free(g_DefaultPoolId,DAT_146b50ed8);
            uVar13 = (ulonglong)DAT_146b50ee0;
          }
          goto LAB_143159886;
        }
      }
      iVar2 = 0x34;
    }
    iVar12 = iVar2;
    if (iVar12 != 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      goto LAB_1431598c0;
    }
    goto LAB_1431598c2;
  }
  lVar7 = CAkOutputMgr::GetPrimaryDevice();
  if ((plVar14 == (longlong *)0x0) ||
     (((lVar7 != 0 && (*(int *)(lVar7 + 0x58) == 0)) && (plVar5 == plVar14)))) {
    if ((DAT_146b50be0 == 0) && (iVar2 = CAkBus::GetDeviceShareset(plVar5), iVar2 != 0)) {
      DAT_146b50be0 = CAkBus::GetDeviceShareset(plVar5);
    }
    else {
      CAkBus::SetBusDevice(plVar5,DAT_146b50be0);
    }
    CAkAudioMgr::InitSinkPlugin(DAT_146b50b78,&DAT_146b50be0);
  }
  uVar10 = *(uint *)(param_3 + 0x68);
  if (uVar10 < *(uint *)(param_3 + 0x6c)) {
    *(uint *)(param_3 + 0x68) = uVar10 + 1;
    puVar6 = (undefined8 *)(*(longlong *)(param_3 + 0x60) + (ulonglong)uVar10 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = plVar5;
    }
  }
LAB_14315995a:
  CAkBankReader::ReleaseData(param_1 + 8);
  return iVar12;
}



// FUNCTION 143159990 FUN_143159990 body=285 status=ok
// SIG undefined FUN_143159990(void)

void FUN_143159990(undefined8 *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  AkMemPoolAttributes AVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b51fe0);
  LOCK();
  piVar1 = (int *)(param_1 + 0xe);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 < 2) {
    if (param_1[5] != 0) {
      AVar4 = AK::MemoryMgr::GetPoolAttributes(*(long *)(param_1 + 8));
      if ((AVar4 & 8) == 0) {
        AK::MemoryMgr::Free(*(long *)(param_1 + 8),(void *)param_1[5]);
      }
      else {
        AK::MemoryMgr::ReleaseBlock(*(long *)(param_1 + 8),(void *)param_1[5]);
      }
      param_1[5] = 0;
      if (*(char *)((longlong)param_1 + 0x44) != '\0') {
        AK::MemoryMgr::DestroyPool(*(long *)(param_1 + 8));
        *(undefined4 *)(param_1 + 8) = 0xffffffff;
      }
    }
    FUN_14315ad60(DAT_146b50b18,param_1);
    if (*(int *)((longlong)param_1 + 0x74) < 1) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b51fe0);
      if (param_2 == '\0') {
        CAkUsageSlot::UnloadCompletionNotification(param_1);
      }
      lVar3 = g_DefaultPoolId;
      *param_1 = &PTR_FUN_145ac7b60;
      if ((*(byte *)(param_1 + 0xf) & 2) != 0) {
        AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[6]);
        *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 0xfd;
      }
      param_1[6] = 0;
      AK::MemoryMgr::Free(lVar3,param_1);
      return;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b51fe0);
    if (param_2 == '\0') {
      CAkUsageSlot::UnloadCompletionNotification(param_1);
      return;
    }
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b51fe0);
  }
  return;
}



// FUNCTION 143159ab0 FUN_143159ab0 body=255 status=ok
// SIG undefined FUN_143159ab0(void)

void FUN_143159ab0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *local_48;
  undefined4 local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined1 local_28 [32];
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b51fe0);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  plVar1 = (longlong *)(param_1 + 0x70);
  if (*(uint *)(param_1 + 0x78) != 0) {
    local_30 = (undefined8 *)0x0;
    uVar2 = (ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 0x78);
    local_40 = (undefined4)uVar2;
    puVar4 = *(undefined8 **)(*plVar1 + uVar2 * 8);
    while (puVar3 = puVar4, local_48 = plVar1, local_38 = puVar3, puVar3 != (undefined8 *)0x0) {
      if (*(uint *)(puVar3 + 1) == param_2) {
        iVar5 = *(int *)(puVar3 + 6) + -1;
        *(int *)(puVar3 + 6) = iVar5;
        if ((iVar5 == 0) && ((void *)puVar3[2] != (void *)0x0)) {
          AK::MemoryMgr::Falign(DAT_146b50bc8,(void *)puVar3[2]);
          iVar5 = *(int *)(puVar3 + 6);
          puVar3[2] = 0;
          *(undefined4 *)(puVar3 + 3) = 0;
        }
        if (iVar5 == 0) {
          AkHashList<unsigned_long,AkMediaEntry,AkArrayAllocatorNoAlign<_ArrayPoolDefault>_>::Erase
                    (plVar1,local_28,&local_48);
        }
        break;
      }
      local_30 = puVar3;
      puVar4 = (undefined8 *)*puVar3;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x000143159ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b51fe0);
  return;
}



// FUNCTION 143159bb0 FUN_143159bb0 body=96 status=ok
// SIG undefined FUN_143159bb0(void)

int FUN_143159bb0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 4) + -1;
  *(int *)(param_2 + 4) = iVar1;
  if ((iVar1 == 0) && ((void *)*param_2 != (void *)0x0)) {
    AK::MemoryMgr::Falign(DAT_146b50bc8,(void *)*param_2);
    iVar1 = *(int *)(param_2 + 4);
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
  }
  if (iVar1 == 0) {
    AkHashList<unsigned_long,AkMediaEntry,AkArrayAllocatorNoAlign<_ArrayPoolDefault>_>::Unset
              (param_1 + 0x70,*(undefined4 *)((longlong)param_2 + 0x24));
  }
  return iVar1;
}



// FUNCTION 143159c10 FUN_143159c10 body=572 status=ok
// SIG undefined FUN_143159c10(void)

void FUN_143159c10(undefined8 *param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  long lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 local_68 [2];
  undefined8 uStack_60;
  longlong *local_58;
  undefined4 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined1 local_38 [32];
  ulonglong uVar10;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b51fe0);
  uVar10 = 0;
  if (param_2 == '\0') {
    LOCK();
    piVar1 = (int *)((longlong)param_1 + 0x74);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (1 < iVar8) {
                    /* WARNING: Could not recover jumptable at 0x000143159e45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b51fe0);
      return;
    }
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  lVar6 = DAT_146b50b18;
  if (((*(byte *)(param_1 + 0xf) & 4) != 0) && (param_1[6] != 0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(DAT_146b50b18 + 0x48));
    if (*(int *)(param_1 + 9) != 0) {
      do {
        uVar9 = *(uint *)(param_1[6] + uVar10 * 0xc);
        if (uVar9 != 0) {
          plVar2 = (longlong *)(lVar6 + 0x70);
          if (*(uint *)(lVar6 + 0x78) != 0) {
            local_40 = (undefined8 *)0x0;
            uVar3 = (ulonglong)uVar9 % (ulonglong)*(uint *)(lVar6 + 0x78);
            local_50 = (undefined4)uVar3;
            puVar7 = *(undefined8 **)(*plVar2 + uVar3 * 8);
            while (puVar4 = puVar7, local_58 = plVar2, local_48 = puVar4,
                  puVar4 != (undefined8 *)0x0) {
              if (*(uint *)(puVar4 + 1) == uVar9) {
                iVar8 = *(int *)(puVar4 + 6) + -1;
                *(int *)(puVar4 + 6) = iVar8;
                if ((iVar8 == 0) && ((void *)puVar4[2] != (void *)0x0)) {
                  AK::MemoryMgr::Falign(DAT_146b50bc8,(void *)puVar4[2]);
                  iVar8 = *(int *)(puVar4 + 6);
                  puVar4[2] = 0;
                  *(undefined4 *)(puVar4 + 3) = 0;
                }
                if (iVar8 == 0) {
                  AkHashList<unsigned_long,AkMediaEntry,AkArrayAllocatorNoAlign<_ArrayPoolDefault>_>
                  ::Erase(plVar2,local_38,&local_58);
                }
                break;
              }
              local_40 = puVar4;
              puVar7 = (undefined8 *)*puVar4;
            }
          }
        }
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
      } while (uVar9 < *(uint *)(param_1 + 9));
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x48));
    *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 0xfb;
  }
  if (*(int *)(param_1 + 0xe) < 1) {
    local_68[0] = *(undefined4 *)(param_1 + 2);
    uStack_60 = 0;
    FUN_1431b0cc0(DAT_146b50b18 + 0x88,local_68);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b51fe0);
    FUN_143159ff0(param_1);
    FUN_1431552c0(param_1);
    lVar5 = g_DefaultPoolId;
    *param_1 = &PTR_FUN_145ac7b60;
    if ((*(byte *)(param_1 + 0xf) & 2) != 0) {
      AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[6]);
      *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 0xfd;
    }
    param_1[6] = 0;
    AK::MemoryMgr::Free(lVar5,param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143159e2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b51fe0);
  return;
}



// FUNCTION 143159e50 FUN_143159e50 body=226 status=ok
// SIG undefined FUN_143159e50(void)

void FUN_143159e50(longlong param_1,uint param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *local_48;
  undefined4 local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined1 local_28 [32];
  
  plVar1 = (longlong *)(param_1 + 0x70);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  if (*(uint *)(param_1 + 0x78) != 0) {
    local_30 = (undefined8 *)0x0;
    uVar2 = (ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 0x78);
    local_40 = (undefined4)uVar2;
    puVar4 = *(undefined8 **)(*plVar1 + uVar2 * 8);
    while (puVar3 = puVar4, local_48 = plVar1, local_38 = puVar3, puVar3 != (undefined8 *)0x0) {
      if (*(uint *)(puVar3 + 1) == param_2) {
        iVar5 = *(int *)(puVar3 + 6) + -1;
        *(int *)(puVar3 + 6) = iVar5;
        if ((iVar5 == 0) && ((void *)puVar3[2] != (void *)0x0)) {
          AK::MemoryMgr::Falign(DAT_146b50bc8,(void *)puVar3[2]);
          iVar5 = *(int *)(puVar3 + 6);
          puVar3[2] = 0;
          *(undefined4 *)(puVar3 + 3) = 0;
        }
        if (iVar5 == 0) {
          AkHashList<unsigned_long,AkMediaEntry,AkArrayAllocatorNoAlign<_ArrayPoolDefault>_>::Erase
                    (plVar1,local_28,&local_48);
        }
        break;
      }
      local_30 = puVar3;
      puVar4 = (undefined8 *)*puVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143159f2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  return;
}



// FUNCTION 143159f40 FUN_143159f40 body=170 status=ok
// SIG undefined FUN_143159f40(void)

void FUN_143159f40(longlong param_1,longlong param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  uVar5 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    do {
      puVar3 = *(undefined8 **)(param_1 + 0x10);
      if (puVar3[uVar5 * 3 + 1] == *(longlong *)(param_2 + 8)) {
        uVar4 = *(uint *)(param_1 + 0x18);
        pvVar1 = (void *)puVar3[uVar5 * 3];
        puVar6 = puVar3 + (ulonglong)uVar4 * 3;
        for (; (puVar3 != puVar6 && ((void *)*puVar3 != pvVar1)); puVar3 = puVar3 + 3) {
        }
        puVar6 = (undefined8 *)((ulonglong)uVar4 * 0x18 + *(longlong *)(param_1 + 0x10));
        if (puVar3 != puVar6) {
          if (1 < uVar4) {
            uVar2 = puVar6[-2];
            *puVar3 = puVar6[-3];
            puVar3[1] = uVar2;
            puVar3[2] = puVar6[-1];
          }
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
        }
        if (pvVar1 != (void *)0x0) {
          AK::MemoryMgr::Free(g_DefaultPoolId,pvVar1);
        }
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 143159ff0 FUN_143159ff0 body=209 status=ok
// SIG undefined FUN_143159ff0(void)

void FUN_143159ff0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  puVar1 = puVar2;
  if (puVar2 != puVar2 + *(uint *)(param_1 + 0x68)) {
    do {
      cVar3 = '\x01';
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
      if (puVar1 != (undefined8 *)
                    (*(longlong *)(param_1 + 0x60) + (ulonglong)*(uint *)(param_1 + 0x68) * 8)) {
        do {
          if (cVar3 == '\0') break;
          (**(code **)(*(longlong *)*puVar1 + 0x10))();
          puVar1 = puVar1 + 1;
          cVar3 = cVar3 + '\x01';
        } while (puVar1 != (undefined8 *)
                           (*(longlong *)(param_1 + 0x60) + (ulonglong)*(uint *)(param_1 + 0x68) * 8
                           ));
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
      puVar2 = *(undefined8 **)(param_1 + 0x60);
    } while (puVar1 != puVar2 + *(uint *)(param_1 + 0x68));
  }
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,puVar2);
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  return;
}



// FUNCTION 14315a0d0 FUN_14315a0d0 body=256 status=ok
// SIG undefined FUN_14315a0d0(void)

undefined4 FUN_14315a0d0(longlong param_1,uint *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_3;
  if (param_3 != 0) {
    if (param_2 == (uint *)0x0) {
      return 2;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
    if (param_3 != 0) {
      do {
        if (*(uint *)(param_1 + 0x78) != 0) {
          for (puVar2 = *(undefined8 **)
                         (*(longlong *)(param_1 + 0x70) +
                         ((ulonglong)*param_2 % (ulonglong)*(uint *)(param_1 + 0x78)) * 8);
              puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
            if (*(uint *)(puVar2 + 1) == *param_2) {
              puVar1 = puVar2 + 2;
              if (puVar1 != (undefined8 *)0x0) {
                FUN_143159f40(puVar1);
                iVar3 = *(int *)(puVar2 + 6) + -1;
                *(int *)(puVar2 + 6) = iVar3;
                if ((iVar3 == 0) && ((void *)*puVar1 != (void *)0x0)) {
                  AK::MemoryMgr::Falign(DAT_146b50bc8,(void *)*puVar1);
                  iVar3 = *(int *)(puVar2 + 6);
                  *puVar1 = 0;
                  *(undefined4 *)(puVar2 + 3) = 0;
                }
                if (iVar3 == 0) {
                  AkHashList<unsigned_long,AkMediaEntry,AkArrayAllocatorNoAlign<_ArrayPoolDefault>_>
                  ::Unset(param_1 + 0x70);
                }
              }
              break;
            }
          }
        }
        param_2 = param_2 + 6;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  }
  return 1;
}



// FUNCTION 14315a1d0 FUN_14315a1d0 body=478 status=ok
// SIG undefined FUN_14315a1d0(void)

undefined8 * FUN_14315a1d0(longlong *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  uint *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  
  puVar9 = (undefined8 *)0x0;
  uVar1 = *(uint *)(param_1 + 1);
  uVar10 = (ulonglong)uVar1;
  if ((uVar1 == 0) || (0.9 < (float)*(uint *)(param_1 + 2) / (float)uVar10)) {
    puVar6 = &DAT_145ac7af0;
    puVar7 = puVar9;
    do {
      uVar8 = *puVar6;
      uVar11 = (ulonglong)uVar8;
      if (uVar1 < uVar8) {
        if (uVar8 != 0) {
          puVar7 = (undefined8 *)*param_1;
          uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
          param_1[1] = 0;
          *param_1 = 0;
          cVar5 = FUN_143134440(param_1);
          if (cVar5 == '\0') {
            if ((void *)*param_1 != (void *)0x0) {
              *(undefined4 *)(param_1 + 1) = 0;
              AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*param_1);
            }
            *param_1 = (longlong)puVar7;
            *(uint *)(param_1 + 1) = uVar1;
            *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
          }
          else {
            if (uVar8 != 0) {
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
            puVar12 = puVar7;
            if (uVar1 != 0) {
              do {
                puVar4 = (undefined8 *)*puVar12;
                while (puVar4 != (undefined8 *)0x0) {
                  uVar1 = *(uint *)(param_1 + 1);
                  puVar3 = (undefined8 *)*puVar4;
                  *puVar4 = *(undefined8 *)
                             (*param_1 + ((ulonglong)*(uint *)(puVar4 + 1) % (ulonglong)uVar1) * 8);
                  *(undefined8 **)
                   (*param_1 + ((ulonglong)*(uint *)(puVar4 + 1) % (ulonglong)uVar1) * 8) = puVar4;
                  puVar4 = puVar3;
                }
                uVar10 = uVar10 - 1;
                puVar12 = puVar12 + 1;
              } while (uVar10 != 0);
            }
            if (puVar7 != (undefined8 *)0x0) {
              AK::MemoryMgr::Free(g_DefaultPoolId,puVar7);
            }
          }
        }
        break;
      }
      uVar8 = (int)puVar7 + 1;
      puVar7 = (undefined8 *)(ulonglong)uVar8;
      puVar6 = puVar6 + 1;
    } while (uVar8 < 0x1b);
  }
  if (*(uint *)(param_1 + 1) == 0) {
    return (undefined8 *)0x0;
  }
  uVar10 = (ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1);
  puVar7 = *(undefined8 **)(*param_1 + uVar10 * 8);
  do {
    if (puVar7 == (undefined8 *)0x0) {
LAB_14315a359:
      puVar7 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x18);
      if (puVar7 != (undefined8 *)0x0) {
        puVar9 = puVar7 + 2;
        *puVar7 = *(undefined8 *)(*param_1 + uVar10 * 8);
        *(uint *)(puVar7 + 1) = param_2;
        *(undefined8 **)(*param_1 + uVar10 * 8) = puVar7;
        *(int *)(param_1 + 2) = (int)param_1[2] + 1;
      }
      return puVar9;
    }
    if (*(uint *)(puVar7 + 1) == param_2) {
      if (puVar7 + 2 != (undefined8 *)0x0) {
        return puVar7 + 2;
      }
      goto LAB_14315a359;
    }
    puVar7 = (undefined8 *)*puVar7;
  } while( true );
}



// FUNCTION 14315a3b0 Set body=120 status=ok
// SIG undefined Set(void)

longlong *
AkHashList<unsigned_long,AkMediaEntry,AkArrayAllocatorNoAlign<0>_>::Set
          (longlong *param_1,uint param_2)

{
  ulonglong uVar1;
  char cVar2;
  longlong *plVar3;
  
  cVar2 = FUN_1431546e0();
  if (cVar2 == '\0') {
    return (longlong *)0x0;
  }
  uVar1 = (ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1);
  plVar3 = *(longlong **)(*param_1 + uVar1 * 8);
  if (plVar3 != (longlong *)0x0) {
    while (*(uint *)(plVar3 + 1) != param_2) {
      plVar3 = (longlong *)*plVar3;
      if (plVar3 == (longlong *)0x0) {
        plVar3 = (longlong *)
                 AkHashList<unsigned_long,AkMediaEntry,AkArrayAllocatorNoAlign<_ArrayPoolDefault>_>
                 ::CreateEntry(param_1,param_2,uVar1);
        return plVar3;
      }
    }
    if (plVar3 + 2 != (longlong *)0x0) {
      return plVar3 + 2;
    }
  }
  plVar3 = (longlong *)
           AkHashList<unsigned_long,AkMediaEntry,AkArrayAllocatorNoAlign<_ArrayPoolDefault>_>::
           CreateEntry(param_1,param_2,uVar1);
  return plVar3;
}



// FUNCTION 14315a430 Set body=473 status=ok
// SIG undefined Set(void)

undefined8 AkFileNameString::Set(undefined8 *param_1,void *param_2,void *param_3)

{
  bool bVar1;
  ulonglong uVar2;
  void *_Dst;
  ulonglong uVar3;
  char *pcVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  __uint64 _Var9;
  
  if (*(char *)(param_1 + 1) != '\0') {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*param_1);
  }
  uVar5 = 0;
  uVar7 = 0xffffffffffffffff;
  *param_1 = 0;
  uVar3 = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 1) = 0;
  do {
    uVar3 = uVar3 + 1;
  } while (*(char *)((longlong)param_3 + uVar3) != '\0');
  uVar2 = 0xffffffffffffffff;
  do {
    uVar2 = uVar2 + 1;
  } while (*(char *)((longlong)param_2 + uVar2) != '\0');
  bVar1 = false;
  if (uVar3 < uVar2) {
    pcVar4 = (char *)((uVar2 - uVar3) + (longlong)param_2);
    bVar1 = true;
    if (uVar3 != 0) {
      lVar8 = (longlong)param_3 - (longlong)pcVar4;
      uVar2 = uVar5;
      do {
        if (*pcVar4 != pcVar4[lVar8]) {
          bVar1 = false;
          break;
        }
        uVar2 = (ulonglong)((int)uVar2 + 1);
        pcVar4 = pcVar4 + 1;
        bVar1 = true;
      } while (uVar2 < uVar3);
    }
  }
  *(undefined1 *)(param_1 + 1) = 0;
  if (bVar1) {
    *param_1 = param_2;
  }
  else {
    *param_1 = 0;
    if (param_2 != (void *)0x0) {
      uVar3 = 0xffffffffffffffff;
      do {
        uVar2 = uVar3;
        uVar3 = uVar2 + 1;
      } while (*(char *)((longlong)param_2 + uVar3) != '\0');
      uVar6 = uVar5;
      if (param_3 != (void *)0x0) {
        do {
          uVar7 = uVar7 + 1;
          uVar6 = uVar7;
        } while (*(char *)((longlong)param_3 + uVar7) != '\0');
      }
      uVar6 = uVar6 & 0xffffffff;
      bVar1 = true;
      uVar3 = uVar3 & 0xffffffff;
      if (uVar6 < uVar3) {
        bVar1 = false;
        pcVar4 = (char *)((uVar3 - uVar6) + (longlong)param_2);
        if (uVar6 != 0) {
          lVar8 = (longlong)param_3 - (longlong)pcVar4;
          uVar7 = uVar5;
          do {
            if (*pcVar4 != pcVar4[lVar8]) {
              bVar1 = true;
              goto LAB_14315a55f;
            }
            uVar7 = (ulonglong)((int)uVar7 + 1);
            pcVar4 = pcVar4 + 1;
          } while (uVar7 < uVar6);
          bVar1 = false;
        }
      }
LAB_14315a55f:
      uVar7 = uVar6;
      if (!bVar1) {
        uVar7 = uVar5;
      }
      _Var9 = uVar7 + ((int)uVar2 + 2);
      _Dst = AK::MemoryMgr::Malloc(g_DefaultPoolId,_Var9);
      if (_Dst == (void *)0x0) {
        return 0x34;
      }
      ::_guard_xfg_dispatch_icall_nop(_Dst,param_2,uVar3);
      if (bVar1) {
        ::_guard_xfg_dispatch_icall_nop((void *)((longlong)_Dst + uVar3),param_3,uVar6);
      }
      *(undefined1 *)((_Var9 - 1) + (longlong)_Dst) = 0;
      *param_1 = _Dst;
      *(undefined1 *)(param_1 + 1) = 1;
      return 1;
    }
  }
  return 1;
}



// FUNCTION 14315a610 FUN_14315a610 body=384 status=ok
// SIG undefined FUN_14315a610(void)

longlong * FUN_14315a610(ulonglong *param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  void *pvVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  void *pvVar11;
  longlong *plVar12;
  ulonglong uVar13;
  
  plVar8 = (longlong *)*param_1;
  uVar3 = (uint)param_1[1];
  plVar10 = plVar8 + (ulonglong)uVar3 * 3;
  for (; (plVar8 != plVar10 && (*plVar8 != param_2)); plVar8 = plVar8 + 3) {
  }
  plVar12 = plVar8 + 1;
  if (plVar8 == plVar10) {
    plVar12 = (longlong *)0x0;
  }
  if (plVar12 != (longlong *)0x0) {
    lVar9 = param_3[1];
    *plVar12 = *param_3;
    plVar12[1] = lVar9;
    return plVar12;
  }
  if (*(uint *)((longlong)param_1 + 0xc) <= uVar3) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc) + 1;
    pvVar7 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 * 0x18);
    if (pvVar7 == (void *)0x0) {
      return (longlong *)0x0;
    }
    pvVar11 = (void *)*param_1;
    if ((pvVar11 != (void *)0x0) && (pvVar11 != pvVar7)) {
      uVar13 = (ulonglong)(uint)param_1[1];
      if (uVar13 != 0) {
        lVar9 = 0;
        do {
          uVar4 = *param_1;
          puVar2 = (undefined8 *)(lVar9 + uVar4);
          uVar5 = puVar2[1];
          *(undefined8 *)(lVar9 + (longlong)pvVar7) = *puVar2;
          ((undefined8 *)(lVar9 + (longlong)pvVar7))[1] = uVar5;
          *(undefined8 *)(lVar9 + 0x10 + (longlong)pvVar7) = *(undefined8 *)(lVar9 + 0x10 + uVar4);
          uVar13 = uVar13 - 1;
          lVar9 = lVar9 + 0x18;
        } while (uVar13 != 0);
        pvVar11 = (void *)*param_1;
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,pvVar11);
    }
    plVar10 = (longlong *)0x0;
    *param_1 = (ulonglong)pvVar7;
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
    if (uVar1 <= uVar3) goto LAB_14315a75c;
  }
  uVar13 = param_1[1];
  plVar10 = (longlong *)*param_1;
  *(uint *)(param_1 + 1) = (uint)uVar13 + 1;
  plVar8 = plVar10 + (ulonglong)(uint)uVar13 * 3;
  plVar12 = plVar8;
  if (plVar10 < plVar8) {
    do {
      lVar6 = plVar12[-2];
      lVar9 = plVar12[-1];
      *plVar8 = plVar12[-3];
      plVar8[1] = lVar6;
      plVar8[2] = lVar9;
      plVar8 = plVar8 + -3;
      plVar10 = (longlong *)*param_1;
      plVar12 = plVar12 + -3;
    } while (plVar10 < plVar8);
  }
LAB_14315a75c:
  plVar8 = (longlong *)0x0;
  if (plVar10 != (longlong *)0x0) {
    *plVar10 = param_2;
    plVar8 = plVar10 + 1;
    lVar9 = param_3[1];
    *plVar8 = *param_3;
    plVar10[2] = lVar9;
  }
  return plVar8;
}



// FUNCTION 14315a790 SignalLastBankUnloaded body=49 status=ok
// SIG undefined SignalLastBankUnloaded(void)

void CAkBankMgr::SignalLastBankUnloaded(void)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  CAkStateMgr::RemoveAllStateGroups(DAT_146b50ae8,1);
                    /* WARNING: Could not recover jumptable at 0x00014315a7ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  return;
}



// FUNCTION 14315a7d0 Term body=63 status=ok
// SIG undefined Term(void)

void AkFileNameString::Term(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*param_1);
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 14315a810 FUN_14315a810 body=800 status=ok
// SIG undefined FUN_14315a810(void)

/* WARNING: Removing unreachable block (ram,0x00014315a8cb) */

void FUN_14315a810(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uStack_50;
  
  FUN_143154a50();
  FUN_14315ab30(param_1);
  plVar5 = (longlong *)(param_1 + 0x88);
  uVar8 = 0;
  if (*(uint *)(param_1 + 0x90) == 0) {
LAB_14315a923:
    CAkPlayingMgr::Term(plVar5);
    uVar7 = uVar8;
    if (*(int *)(param_1 + 0x78) != 0) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x70);
        plVar5 = *(longlong **)(lVar2 + uVar7 * 8);
        if (plVar5 != (longlong *)0x0) {
          do {
            plVar1 = (longlong *)*plVar5;
            if ((void *)plVar5[4] != (void *)0x0) {
              *(undefined4 *)(plVar5 + 5) = 0;
              AK::MemoryMgr::Free(g_DefaultPoolId,(void *)plVar5[4]);
              plVar5[4] = 0;
              *(undefined4 *)((longlong)plVar5 + 0x2c) = 0;
            }
            AK::MemoryMgr::Free(g_DefaultPoolId,plVar5);
            plVar5 = plVar1;
          } while (plVar1 != (longlong *)0x0);
          lVar2 = *(longlong *)(param_1 + 0x70);
        }
        uVar9 = (int)uVar7 + 1;
        *(undefined8 *)(lVar2 + uVar7 * 8) = 0;
        uVar7 = (ulonglong)uVar9;
      } while (uVar9 < *(uint *)(param_1 + 0x78));
    }
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (*(void **)(param_1 + 0x70) != (void *)0x0) {
      *(undefined4 *)(param_1 + 0x78) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x70));
      *(undefined8 *)(param_1 + 0x70) = 0;
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    if (*(uint *)(param_1 + 0xa8) != 0) {
      plVar5 = (longlong *)**(undefined8 **)(param_1 + 0xa0);
      uVar7 = uVar8;
      while (plVar5 == (longlong *)0x0) {
        uVar9 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar9;
        if (*(uint *)(param_1 + 0xa8) <= uVar9) goto joined_r0x00014315aa07;
        plVar5 = (longlong *)(*(undefined8 **)(param_1 + 0xa0))[uVar7];
      }
      do {
        while( true ) {
          AK::MemoryMgr::Free(g_DefaultPoolId,(void *)plVar5[2]);
          plVar5 = (longlong *)*plVar5;
          if (plVar5 != (longlong *)0x0) break;
          do {
            uVar9 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar9;
            if (*(uint *)(param_1 + 0xa8) <= uVar9) goto joined_r0x00014315aa07;
            plVar5 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + uVar7 * 8);
          } while (plVar5 == (longlong *)0x0);
        }
joined_r0x00014315aa07:
      } while (plVar5 != (longlong *)0x0);
    }
    if (*(int *)(param_1 + 0xa8) != 0) {
      do {
        lVar2 = uVar8 * 8;
        lVar3 = *(longlong *)(param_1 + 0xa0);
        plVar5 = *(longlong **)(lVar3 + lVar2);
        if (plVar5 != (longlong *)0x0) {
          do {
            plVar1 = (longlong *)*plVar5;
            AK::MemoryMgr::Free(g_DefaultPoolId,plVar5);
            plVar5 = plVar1;
          } while (plVar1 != (longlong *)0x0);
          lVar3 = *(longlong *)(param_1 + 0xa0);
        }
        uVar9 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar9;
        *(undefined8 *)(lVar2 + lVar3) = 0;
      } while (uVar9 < *(uint *)(param_1 + 0xa8));
    }
    *(undefined4 *)(param_1 + 0xb0) = 0;
    if (*(void **)(param_1 + 0xa0) != (void *)0x0) {
      *(undefined4 *)(param_1 + 0xa8) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0xa0));
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined4 *)(param_1 + 0xac) = 0;
    }
    CAkBankReader::Term(param_1 + 8);
    if (*(void **)(param_1 + 0xb8) != (void *)0x0) {
      *(undefined4 *)(param_1 + 0xc0) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0xb8));
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xc4) = 0;
    }
    return;
  }
  lVar2 = *(longlong *)*plVar5;
  uVar7 = uVar8;
  while (lVar2 == 0) {
    uVar9 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar9;
    if (*(uint *)(param_1 + 0x90) <= uVar9) goto LAB_14315a923;
    lVar2 = ((longlong *)*plVar5)[uVar7];
  }
  do {
    lVar3 = *(longlong *)(lVar2 + 0x20);
    uStack_50 = (uint)uVar7;
    lVar6 = lVar3;
    if (lVar3 == 0) {
      uVar4 = uVar7;
      do {
        uStack_50 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uStack_50;
        if (*(uint *)(param_1 + 0x90) <= uStack_50) break;
        lVar6 = *(longlong *)(*plVar5 + uVar4 * 8);
      } while (lVar6 == 0);
    }
    *(longlong *)(*plVar5 + uVar7 * 8) = lVar3;
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + -1;
    FUN_143159ff0(lVar2);
    FUN_143159990(lVar2,1);
    if (lVar6 == 0) goto LAB_14315a923;
    uVar7 = (ulonglong)uStack_50;
    lVar2 = lVar6;
  } while( true );
}



// FUNCTION 14315ab30 FUN_14315ab30 body=449 status=ok
// SIG undefined FUN_14315ab30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14315ab30(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar11;
  undefined1 *puVar12;
  longlong *plVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined1 auStack_78 [32];
  undefined4 local_58 [2];
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 *puVar10;
  
  puVar15 = (undefined4 *)0x0;
  iVar14 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b51fe0);
  plVar13 = (longlong *)(param_1 + 0x88);
  puVar12 = auStack_78;
  puVar16 = puVar15;
  if (*(uint *)(param_1 + 0x98) != 0) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x98) * 0x10;
    uVar8 = uVar6 + 0xf;
    if (uVar8 <= uVar6) {
      uVar8 = 0xffffffffffffff0;
    }
    lVar11 = -(uVar8 & 0xfffffffffffffff0);
    puVar16 = (undefined4 *)((longlong)local_58 + lVar11);
    puVar12 = auStack_78 + lVar11;
    if (*(uint *)(param_1 + 0x90) != 0) {
      lVar7 = *(longlong *)*plVar13;
      puVar10 = puVar15;
      while (puVar17 = puVar16, lVar7 == 0) {
        uVar9 = (int)puVar10 + 1;
        puVar10 = (undefined4 *)(ulonglong)uVar9;
        puVar12 = auStack_78 + lVar11;
        if (*(uint *)(param_1 + 0x90) <= uVar9) goto LAB_14315ac1e;
        lVar7 = ((longlong *)*plVar13)[(longlong)puVar10];
      }
      do {
        while( true ) {
          if (*(int *)(lVar7 + 0x7c) != 0) {
            uVar1 = *(undefined4 *)(lVar7 + 0x14);
            uVar2 = *(undefined4 *)(lVar7 + 0x18);
            uVar3 = *(undefined4 *)(lVar7 + 0x1c);
            puVar15 = (undefined4 *)(ulonglong)((int)puVar15 + 1);
            *puVar17 = *(undefined4 *)(lVar7 + 0x10);
            puVar17[1] = uVar1;
            puVar17[2] = uVar2;
            puVar17[3] = uVar3;
            puVar17 = puVar17 + 4;
          }
          iVar14 = (int)puVar15;
          lVar7 = *(longlong *)(lVar7 + 0x20);
          if (lVar7 != 0) break;
          do {
            uVar9 = (int)puVar10 + 1;
            puVar10 = (undefined4 *)(ulonglong)uVar9;
            if (*(uint *)(param_1 + 0x90) <= uVar9) goto LAB_14315ac19;
            lVar7 = *(longlong *)(*plVar13 + (longlong)puVar10 * 8);
          } while (lVar7 == 0);
        }
LAB_14315ac19:
        puVar12 = auStack_78 + lVar11;
      } while (lVar7 != 0);
    }
  }
LAB_14315ac1e:
  *(undefined8 *)(puVar12 + -8) = 0x14315ac2b;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b51fe0);
  lVar11 = (longlong)iVar14;
  if (0 < iVar14) {
    puVar16 = puVar16 + lVar11 * 4;
    do {
      uVar4 = *(undefined8 *)(puVar16 + -4);
      uVar5 = *(undefined8 *)(puVar16 + -2);
      puVar16 = puVar16 + -4;
      lVar11 = lVar11 + -1;
      local_38 = uVar4;
      uStack_30 = uVar5;
      *(undefined8 *)(puVar12 + -8) = 0x14315ac5c;
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b51fe0);
      local_48 = uVar4;
      uStack_40 = uVar5;
      *(undefined8 *)(puVar12 + -8) = 0x14315ac6d;
      lVar7 = CAkBankList::Get(plVar13,&local_48);
      if ((lVar7 == 0) || (*(int *)(lVar7 + 0x7c) == 0)) {
        *(undefined8 *)(puVar12 + -8) = 0x14315acce;
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b51fe0);
      }
      else {
        *(undefined8 *)(puVar12 + -8) = 0x14315ac85;
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b51fe0);
        local_58[0] = (undefined4)local_38;
        uStack_50 = 0;
        local_38 = CONCAT44(local_58[1],(undefined4)local_38);
        uStack_30 = 0;
        *(undefined8 *)(puVar12 + -8) = 0x14315aca4;
        lVar7 = CAkBankList::Get(plVar13,&local_38);
        if (lVar7 != 0) {
          if (*(int *)(lVar7 + 0x7c) != 0) {
            *(int *)(lVar7 + 0x7c) = *(int *)(lVar7 + 0x7c) + -1;
          }
          *(undefined8 *)(puVar12 + -8) = 0x14315acbf;
          FUN_143159c10(lVar7,1);
        }
      }
    } while (0 < lVar11);
  }
  return;
}



// FUNCTION 14315ad00 UnloadCompletionNotification body=95 status=ok
// SIG undefined UnloadCompletionNotification(void)

void CAkUsageSlot::UnloadCompletionNotification(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar6 = DAT_146b50b18;
  lVar3 = *(longlong *)(param_1 + 0x50);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    uVar1 = *(undefined4 *)(param_1 + 0x40);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(DAT_146b50b18 + 0xcc) = 1;
    CAkBankCallbackMgr::DoCallback(lVar6 + 0xd0,lVar3,uVar2,uVar5,1,uVar1,uVar4);
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  return;
}



// FUNCTION 14315ad60 FUN_14315ad60 body=444 status=ok
// SIG undefined FUN_14315ad60(void)

void FUN_14315ad60(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  
  if (*(longlong *)(param_2 + 0x30) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
    iVar6 = *(int *)(param_2 + 0x48);
    if (iVar6 != 0) {
LAB_14315adb0:
      *(uint *)(param_2 + 0x48) = iVar6 - 1U;
      uVar8 = *(uint *)(*(longlong *)(param_2 + 0x30) + (ulonglong)(iVar6 - 1U) * 0xc);
      if ((uVar8 != 0) && (*(uint *)(param_1 + 0x78) != 0)) {
        uVar3 = (ulonglong)uVar8 % (ulonglong)*(uint *)(param_1 + 0x78);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x70) + uVar3 * 8);
        plVar5 = (longlong *)0x0;
        while (plVar4 = plVar1, plVar4 != (longlong *)0x0) {
          if (*(uint *)(plVar4 + 1) == uVar8) {
            plVar7 = (longlong *)plVar4[4];
            uVar8 = *(uint *)(plVar4 + 5);
            plVar1 = plVar7 + (ulonglong)uVar8 * 3;
            if (plVar7 != plVar1) goto LAB_14315ae20;
            goto LAB_14315ae52;
          }
          plVar5 = plVar4;
          plVar1 = (longlong *)*plVar4;
        }
      }
      goto LAB_14315aee7;
    }
LAB_14315af06:
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  }
  return;
  while (plVar7 = plVar7 + 3, plVar7 != plVar1) {
LAB_14315ae20:
    if (*plVar7 == param_2) break;
  }
  if (plVar7 != plVar1) {
    if (1 < uVar8) {
      lVar2 = plVar1[-2];
      *plVar7 = plVar1[-3];
      plVar7[1] = lVar2;
      plVar7[2] = plVar1[-1];
      uVar8 = *(uint *)(plVar4 + 5);
    }
    *(uint *)(plVar4 + 5) = uVar8 - 1;
  }
LAB_14315ae52:
  iVar6 = (int)plVar4[6] + -1;
  *(int *)(plVar4 + 6) = iVar6;
  if ((iVar6 == 0) && ((void *)plVar4[2] != (void *)0x0)) {
    AK::MemoryMgr::Falign(DAT_146b50bc8,(void *)plVar4[2]);
    iVar6 = (int)plVar4[6];
    plVar4[2] = 0;
    *(undefined4 *)(plVar4 + 3) = 0;
  }
  if (iVar6 == 0) {
    lVar2 = *plVar4;
    if (lVar2 == 0) {
      uVar9 = uVar3;
      do {
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        if (*(uint *)(param_1 + 0x78) <= uVar8) break;
      } while (*(longlong *)(*(longlong *)(param_1 + 0x70) + uVar9 * 8) == 0);
    }
    if (plVar5 == (longlong *)0x0) {
      *(longlong *)(*(longlong *)(param_1 + 0x70) + uVar3 * 8) = lVar2;
    }
    else {
      *plVar5 = lVar2;
    }
    if ((void *)plVar4[4] != (void *)0x0) {
      *(undefined4 *)(plVar4 + 5) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,(void *)plVar4[4]);
      plVar4[4] = 0;
      *(undefined4 *)((longlong)plVar4 + 0x2c) = 0;
    }
    AK::MemoryMgr::Free(g_DefaultPoolId,plVar4);
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
  }
LAB_14315aee7:
  iVar6 = *(int *)(param_2 + 0x48);
  if (iVar6 == 0) goto LAB_14315af06;
  goto LAB_14315adb0;
}



// FUNCTION 14315af20 FUN_14315af20 body=141 status=ok
// SIG undefined FUN_14315af20(void)

undefined8 FUN_14315af20(undefined8 param_1,undefined1 param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)
           CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(DAT_146b50af8 + 0xc0,param_3);
  if (plVar2 != (longlong *)0x0) {
    if (((int)plVar2[5] != 0) &&
       (iVar1 = (int)plVar2[5] + -1, *(int *)(plVar2 + 5) = iVar1, iVar1 == 0)) {
      FUN_14315afb0(param_1,param_2,plVar2);
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
    return 1;
  }
  return 0xf;
}



// FUNCTION 14315afb0 FUN_14315afb0 body=350 status=ok
// SIG undefined FUN_14315afb0(void)

void FUN_14315afb0(longlong param_1,char param_2,longlong param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 local_38 [2];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*(longlong *)(param_3 + 0x20) != 0) {
    lVar6 = *(longlong *)(param_3 + 0x20);
    do {
      lVar5 = DAT_146b50af8;
      lVar3 = *(longlong *)(lVar6 + 0x18);
      if (*(short *)(lVar6 + 0x34) == 0x403) {
        uVar7 = 0;
        if (param_2 == '\0') {
          uVar7 = *(undefined4 *)(param_3 + 0x10);
        }
        FUN_143179790(*(undefined4 *)(lVar6 + 0x30),uVar7);
        local_38[0] = *(undefined4 *)(lVar6 + 0x38);
        uStack_30 = 0;
        uStack_2c = 0;
        lVar6 = CAkBankList::Get(param_1 + 0x88,local_38);
        if (lVar6 != 0) {
          FUN_143159c10(lVar6,0);
        }
      }
      else if (*(short *)(lVar6 + 0x34) == 0x2103) {
        uVar1 = *(uint *)(lVar6 + 0x30);
        lpCriticalSection = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0xc0);
        EnterCriticalSection(lpCriticalSection);
        uVar2 = *(uint *)(lVar5 + 0xf0);
        if (uVar2 != 0) {
          for (plVar4 = *(longlong **)
                         (*(longlong *)(lVar5 + 0xe8) + ((ulonglong)uVar1 % (ulonglong)uVar2) * 8);
              plVar4 != (longlong *)0x0; plVar4 = (longlong *)plVar4[1]) {
            if (*(uint *)(plVar4 + 2) == uVar1) {
              if (plVar4 != (longlong *)0x0) {
                *(int *)((longlong)plVar4 + 0x14) = *(int *)((longlong)plVar4 + 0x14) + 1;
                LeaveCriticalSection(lpCriticalSection);
                FUN_14315afb0(param_1,param_2,plVar4);
                (**(code **)(*plVar4 + 0x10))(plVar4);
                goto LAB_14315b0b7;
              }
              break;
            }
          }
        }
        LeaveCriticalSection(lpCriticalSection);
      }
LAB_14315b0b7:
      lVar6 = lVar3;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 14315b110 FUN_14315b110 body=14 status=ok
// SIG undefined FUN_14315b110(void)

void FUN_14315b110(longlong param_1,uint param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plStack_48;
  undefined4 uStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  undefined1 auStack_28 [32];
  
  if (*(char *)(param_1 + 200) != '\0') {
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x70);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  if (*(uint *)(param_1 + 0x78) != 0) {
    puStack_30 = (undefined8 *)0x0;
    uVar2 = (ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 0x78);
    uStack_40 = (undefined4)uVar2;
    puVar4 = *(undefined8 **)(*plVar1 + uVar2 * 8);
    while (puVar3 = puVar4, plStack_48 = plVar1, puStack_38 = puVar3, puVar3 != (undefined8 *)0x0) {
      if (*(uint *)(puVar3 + 1) == param_2) {
        iVar5 = *(int *)(puVar3 + 6) + -1;
        *(int *)(puVar3 + 6) = iVar5;
        if ((iVar5 == 0) && ((void *)puVar3[2] != (void *)0x0)) {
          AK::MemoryMgr::Falign(DAT_146b50bc8,(void *)puVar3[2]);
          iVar5 = *(int *)(puVar3 + 6);
          puVar3[2] = 0;
          *(undefined4 *)(puVar3 + 3) = 0;
        }
        if (iVar5 == 0) {
          AkHashList<unsigned_long,AkMediaEntry,AkArrayAllocatorNoAlign<_ArrayPoolDefault>_>::Erase
                    (plVar1,auStack_28,&plStack_48);
        }
        break;
      }
      puStack_30 = puVar3;
      puVar4 = (undefined8 *)*puVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143159f2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  return;
}



// FUNCTION 14315b120 Unset body=167 status=ok
// SIG undefined Unset(void)

void AkHashList<unsigned_long,AkMediaEntry,AkArrayAllocatorNoAlign<_ArrayPoolDefault>_>::Unset
               (longlong *param_1,uint param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*(uint *)(param_1 + 1) != 0) {
    uVar2 = (ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1);
    plVar4 = *(longlong **)(*param_1 + uVar2 * 8);
    plVar3 = (longlong *)0x0;
    if (plVar4 != (longlong *)0x0) {
      while (plVar1 = (longlong *)*plVar4, *(uint *)(plVar4 + 1) != param_2) {
        plVar3 = plVar4;
        plVar4 = plVar1;
        if (plVar1 == (longlong *)0x0) {
          return;
        }
      }
      if (plVar3 == (longlong *)0x0) {
        *(longlong **)(*param_1 + uVar2 * 8) = plVar1;
      }
      else {
        *plVar3 = (longlong)plVar1;
      }
      if ((void *)plVar4[4] != (void *)0x0) {
        *(undefined4 *)(plVar4 + 5) = 0;
        AK::MemoryMgr::Free(g_DefaultPoolId,(void *)plVar4[4]);
        plVar4[4] = 0;
        *(undefined4 *)((longlong)plVar4 + 0x2c) = 0;
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,plVar4);
      *(int *)(param_1 + 2) = (int)param_1[2] + -1;
    }
  }
  return;
}



// FUNCTION 14315b1f0 swprintf_s body=88 status=ok
// SIG int swprintf_s(wchar_t * _Dst, size_t _SizeInWords, wchar_t * _Format, ...)

int __cdecl swprintf_s(wchar_t *_Dst,size_t _SizeInWords,wchar_t *_Format,...)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 in_R9;
  undefined8 local_res20;
  
  local_res20 = in_R9;
  puVar2 = (undefined8 *)__local_stdio_printf_options();
  iVar1 = __stdio_common_vswprintf_s(*puVar2,_Dst,_SizeInWords,_Format,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



// FUNCTION 14315b250 CAkThreadedBankMgr body=104 status=ok
// SIG undefined CAkThreadedBankMgr(void)

undefined8 * CAkThreadedBankMgr::CAkThreadedBankMgr(undefined8 *param_1)

{
  CAkBankMgr::CAkBankMgr();
  *(undefined1 *)(param_1 + 0x23) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145ac7d00;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x22] = 0;
  DAT_146b50f28 = 0;
  return param_1;
}



// FUNCTION 14315b2c0 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkThreadedBankMgr::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ac7d00;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  CAkBankMgr::~CAkBankMgr(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x170);
  }
  return param_1;
}



// FUNCTION 14315b310 FUN_14315b310 body=390 status=ok
// SIG undefined FUN_14315b310(void)

undefined8 FUN_14315b310(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  DAT_146b50f30 = GetCurrentThreadId();
  WaitForSingleObject(*(HANDLE *)(param_1 + 0x110),0xffffffff);
  cVar1 = *(char *)(param_1 + 0x118);
  while (cVar1 == '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
    iVar2 = *(int *)(param_1 + 0x16c);
    while (iVar2 != 0) {
      puVar3 = *(undefined8 **)(param_1 + 0x148);
      local_58 = puVar3[1];
      uStack_50 = puVar3[2];
      local_48 = puVar3[3];
      uStack_40 = puVar3[4];
      local_38 = puVar3[5];
      uStack_30 = puVar3[6];
      local_28 = puVar3[7];
      uStack_20 = puVar3[8];
      local_18 = *(undefined4 *)(puVar3 + 9);
      uStack_14 = *(undefined4 *)((longlong)puVar3 + 0x4c);
      uStack_10 = *(undefined4 *)(puVar3 + 10);
      uStack_c = *(undefined4 *)((longlong)puVar3 + 0x54);
      if (puVar3 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x148) = *puVar3;
        if (puVar3 == *(undefined8 **)(param_1 + 0x150)) {
          *(undefined8 *)(param_1 + 0x150) = 0;
        }
        if ((puVar3 < *(undefined8 **)(param_1 + 0x160)) ||
           (*(undefined8 **)(param_1 + 0x160) + (ulonglong)*(uint *)(param_1 + 0x168) * 0xb <=
            puVar3)) {
          AK::MemoryMgr::Free(g_DefaultPoolId,puVar3);
        }
        else {
          *puVar3 = *(undefined8 *)(param_1 + 0x158);
          *(undefined8 **)(param_1 + 0x158) = puVar3;
        }
        *(int *)(param_1 + 0x16c) = *(int *)(param_1 + 0x16c) + -1;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
      FUN_143155400(param_1,&local_58);
      AkFileNameString::Term(&uStack_50);
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
      iVar2 = *(int *)(param_1 + 0x16c);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x110),0xffffffff);
    cVar1 = *(char *)(param_1 + 0x118);
  }
  return 0;
}



// FUNCTION 14315b4b0 FUN_14315b4b0 body=420 status=ok
// SIG undefined FUN_14315b4b0(void)

undefined8 FUN_14315b4b0(LPVOID param_1)

{
  BOOL BVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  HANDLE pvVar4;
  DWORD_PTR DVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  DWORD local_res10 [6];
  
  uVar2 = CAkBankMgr::Init();
  if ((int)uVar2 != 1) {
    return uVar2;
  }
  puVar3 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x370);
  *(undefined8 **)((longlong)param_1 + 0x160) = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    return 0x34;
  }
  puVar6 = puVar3 + 5;
  uVar8 = 0;
  *(undefined4 *)((longlong)param_1 + 0x168) = 10;
  *(undefined8 **)((longlong)param_1 + 0x158) = puVar3;
  do {
    puVar7 = puVar3;
    if (puVar6 + -4 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar6 + -4) = 0xffffffff;
      *(undefined4 *)((longlong)puVar6 + -0x1c) = 0;
      puVar6[-3] = 0;
      *(undefined1 *)(puVar6 + -2) = 0;
      puVar6[-1] = 0;
      *puVar6 = 0;
    }
    uVar8 = uVar8 + 1;
    *puVar7 = puVar6 + 6;
    puVar6 = puVar6 + 0xb;
    puVar3 = puVar7 + 0xb;
  } while (uVar8 < *(uint *)((longlong)param_1 + 0x168));
  *puVar7 = 0;
  if (DAT_146b50f28 != (HANDLE)0x0) {
    return 2;
  }
  *(undefined1 *)((longlong)param_1 + 0x118) = 0;
  pvVar4 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  *(HANDLE *)((longlong)param_1 + 0x110) = pvVar4;
  if (pvVar4 == (HANDLE)0x0) {
    return 2;
  }
  DAT_146b50f28 =
       CreateThread((LPSECURITY_ATTRIBUTES)0x0,(ulonglong)DAT_146b50d48,FUN_14315b310,param_1,0,
                    local_res10);
  if (DAT_146b50f28 != (HANDLE)0x0) {
    AKPLATFORM::AkSetThreadName(local_res10[0],"AK::BankManager");
    BVar1 = SetThreadPriority(DAT_146b50f28,DAT_146b50d40);
    if (((BVar1 != 0) || (DAT_146b50d40 == 0x10000)) &&
       ((DAT_146b50d44 == 0 ||
        (DVar5 = SetThreadAffinityMask(DAT_146b50f28,(ulonglong)DAT_146b50d44), DVar5 != 0)))) {
      if (DAT_146b50f28 != (HANDLE)0x0) {
        return 1;
      }
      return 2;
    }
    CloseHandle(DAT_146b50f28);
    DAT_146b50f28 = (HANDLE)0x0;
    return 2;
  }
  DAT_146b50f28 = (HANDLE)0x0;
  return 2;
}



// FUNCTION 14315b660 InitSyncOp body=43 status=ok
// SIG undefined InitSyncOp(void)

int CAkThreadedBankMgr::InitSyncOp(undefined8 param_1,longlong param_2)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  *(HANDLE *)(param_2 + 8) = pvVar1;
  return 2 - (uint)(pvVar1 != (HANDLE)0x0);
}



// FUNCTION 14315b6a0 FUN_14315b6a0 body=399 status=ok
// SIG undefined FUN_14315b6a0(void)

int FUN_14315b6a0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
  if ((param_2[3] == 0) || (iVar6 = FUN_1431b0540(param_1 + 0xd0,param_2[4]), iVar6 == 1)) {
    puVar7 = *(undefined8 **)(param_1 + 0x158);
    puVar8 = (undefined8 *)0x0;
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x58);
      if (puVar7 != (undefined8 *)0x0) {
        if (puVar7 + 1 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar7 + 1) = 0xffffffff;
          *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
          puVar7[2] = 0;
          *(undefined1 *)(puVar7 + 3) = 0;
          puVar7[4] = 0;
          puVar7[5] = 0;
        }
        *puVar7 = *(undefined8 *)(param_1 + 0x158);
        *(undefined8 **)(param_1 + 0x158) = puVar7;
        goto LAB_14315b748;
      }
    }
    else {
LAB_14315b748:
      if (*(undefined8 **)(param_1 + 0x150) == (undefined8 *)0x0) {
        *(undefined8 **)(param_1 + 0x148) = puVar7;
      }
      else {
        **(undefined8 **)(param_1 + 0x150) = puVar7;
        puVar7 = *(undefined8 **)(param_1 + 0x158);
      }
      *(undefined8 **)(param_1 + 0x150) = puVar7;
      *(undefined8 *)(param_1 + 0x158) = *puVar7;
      *puVar7 = 0;
      *(int *)(param_1 + 0x16c) = *(int *)(param_1 + 0x16c) + 1;
      lVar1 = *(longlong *)(param_1 + 0x150);
      uVar5 = param_2[1];
      puVar8 = (undefined8 *)(lVar1 + 8);
      *puVar8 = *param_2;
      *(undefined8 *)(lVar1 + 0x10) = uVar5;
      uVar5 = param_2[3];
      *(undefined8 *)(lVar1 + 0x18) = param_2[2];
      *(undefined8 *)(lVar1 + 0x20) = uVar5;
      uVar5 = param_2[5];
      *(undefined8 *)(lVar1 + 0x28) = param_2[4];
      *(undefined8 *)(lVar1 + 0x30) = uVar5;
      uVar5 = param_2[7];
      *(undefined8 *)(lVar1 + 0x38) = param_2[6];
      *(undefined8 *)(lVar1 + 0x40) = uVar5;
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x44);
      uVar3 = *(undefined4 *)(param_2 + 9);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x4c);
      *(undefined4 *)(lVar1 + 0x48) = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)(lVar1 + 0x4c) = uVar2;
      *(undefined4 *)(lVar1 + 0x50) = uVar3;
      *(undefined4 *)(lVar1 + 0x54) = uVar4;
    }
    iVar6 = 2 - (uint)(puVar8 != (undefined8 *)0x0);
    if ((param_2[3] != 0) && (puVar8 == (undefined8 *)0x0)) {
      CAkBankCallbackMgr::RemoveOneCookie(param_1 + 0xd0,param_2[4]);
    }
    if (puVar8 != (undefined8 *)0x0) {
      AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
      SetEvent(*(HANDLE *)(param_1 + 0x110));
      goto LAB_14315b809;
    }
  }
  AkFileNameString::Term(param_2 + 1);
LAB_14315b809:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
  return iVar6;
}



// FUNCTION 14315b830 StopThread body=116 status=ok
// SIG undefined StopThread(void)

void CAkThreadedBankMgr::StopThread(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x118) = 1;
  if (DAT_146b50f28 != (HANDLE)0x0) {
    SetEvent(*(HANDLE *)(param_1 + 0x110));
    WaitForSingleObject(DAT_146b50f28,0xffffffff);
    CloseHandle(DAT_146b50f28);
    DAT_146b50f28 = (HANDLE)0x0;
  }
  if (*(HANDLE *)(param_1 + 0x110) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x110));
  }
  *(undefined8 *)(param_1 + 0x110) = 0;
  return;
}



// FUNCTION 14315b8b0 FUN_14315b8b0 body=490 status=ok
// SIG undefined FUN_14315b8b0(void)

void FUN_14315b8b0(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar1 = *(int *)(param_1 + 0x16c);
  while (iVar1 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x148);
    uStack_50 = puVar2[2];
    local_48 = puVar2[3];
    uStack_40 = puVar2[4];
    local_38 = puVar2[5];
    uStack_30 = puVar2[6];
    local_28 = puVar2[7];
    uStack_20 = puVar2[8];
    local_18 = *(undefined4 *)(puVar2 + 9);
    uStack_14 = *(undefined4 *)((longlong)puVar2 + 0x4c);
    uStack_10 = *(undefined4 *)(puVar2 + 10);
    uStack_c = *(undefined4 *)((longlong)puVar2 + 0x54);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x148) = *puVar2;
      if (puVar2 == *(undefined8 **)(param_1 + 0x150)) {
        *(undefined8 *)(param_1 + 0x150) = 0;
      }
      if ((puVar2 < *(undefined8 **)(param_1 + 0x160)) ||
         (*(undefined8 **)(param_1 + 0x160) + (ulonglong)*(uint *)(param_1 + 0x168) * 0xb <= puVar2)
         ) {
        AK::MemoryMgr::Free(g_DefaultPoolId,puVar2);
      }
      else {
        *puVar2 = *(undefined8 *)(param_1 + 0x158);
        *(undefined8 **)(param_1 + 0x158) = puVar2;
      }
      *(int *)(param_1 + 0x16c) = *(int *)(param_1 + 0x16c) + -1;
    }
    AkFileNameString::Term(&uStack_50);
    iVar1 = *(int *)(param_1 + 0x16c);
  }
  while (puVar2 = *(undefined8 **)(param_1 + 0x148), puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x148) = *puVar2;
    if (puVar2 == *(undefined8 **)(param_1 + 0x150)) {
      *(undefined8 *)(param_1 + 0x150) = 0;
    }
    if ((puVar2 < *(undefined8 **)(param_1 + 0x160)) ||
       (*(undefined8 **)(param_1 + 0x160) + (ulonglong)*(uint *)(param_1 + 0x168) * 0xb <= puVar2))
    {
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar2);
      *(int *)(param_1 + 0x16c) = *(int *)(param_1 + 0x16c) + -1;
    }
    else {
      *puVar2 = *(undefined8 *)(param_1 + 0x158);
      *(int *)(param_1 + 0x16c) = *(int *)(param_1 + 0x16c) + -1;
      *(undefined8 **)(param_1 + 0x158) = puVar2;
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x158);
  while (puVar3 = puVar2, puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar3;
    if ((puVar3 < *(undefined8 **)(param_1 + 0x160)) ||
       (*(undefined8 **)(param_1 + 0x160) + (ulonglong)*(uint *)(param_1 + 0x168) * 0xb <= puVar3))
    {
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar3);
    }
  }
  if (*(void **)(param_1 + 0x160) != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x160));
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  FUN_14315a810(param_1);
  return;
}



// FUNCTION 14315baa0 WaitForSyncOp body=109 status=ok
// SIG undefined WaitForSyncOp(void)

int CAkThreadedBankMgr::WaitForSyncOp(undefined8 param_1,int *param_2,int param_3)

{
  if (param_3 != 1) {
    if (*(HANDLE *)(param_2 + 2) != (HANDLE)0x0) {
      CloseHandle(*(HANDLE *)(param_2 + 2));
    }
    param_2[2] = 0;
    param_2[3] = 0;
    return param_3;
  }
  WaitForSingleObject(*(HANDLE *)(param_2 + 2),0xffffffff);
  if (*(HANDLE *)(param_2 + 2) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_2 + 2));
  }
  param_2[2] = 0;
  param_2[3] = 0;
  return *param_2;
}



// FUNCTION 14315bb10 FUN_14315bb10 body=402 status=ok
// SIG undefined FUN_14315bb10(void)

longlong * FUN_14315bb10(longlong param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  __uint64 _Var8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  
  if (*(uint *)(param_1 + 0x40) < 4) {
    uVar10 = *(uint *)(param_1 + 0x40);
    uVar7 = (ulonglong)uVar10;
    if (uVar10 < 5) {
      if (*(uint *)(param_1 + 0x44) < 4) {
        uVar10 = (*(uint *)(param_1 + 0x44) - uVar10) + 4;
        _Var8 = (ulonglong)uVar10 << 3;
        puVar3 = (undefined8 *)(param_1 + 0x28);
        if (0x10 < _Var8) {
          puVar3 = AK::MemoryMgr::Malign(g_DefaultPoolId,_Var8,8);
        }
        if (puVar3 == (undefined8 *)0x0) {
          return (longlong *)0x0;
        }
        puVar9 = *(undefined8 **)(param_1 + 0x38);
        if ((puVar9 != (undefined8 *)0x0) && (puVar9 != puVar3)) {
          uVar11 = (ulonglong)*(uint *)(param_1 + 0x40);
          puVar6 = puVar3;
          if (uVar11 != 0) {
            do {
              if (puVar6 != (undefined8 *)0x0) {
                *puVar6 = 0;
              }
              *puVar6 = *(undefined8 *)
                         ((*(longlong *)(param_1 + 0x38) - (longlong)puVar3) + (longlong)puVar6);
              uVar11 = uVar11 - 1;
              puVar6 = puVar6 + 1;
            } while (uVar11 != 0);
            puVar9 = *(undefined8 **)(param_1 + 0x38);
          }
          if ((undefined8 *)(param_1 + 0x28) != puVar9) {
            AK::MemoryMgr::Falign(g_DefaultPoolId,puVar9);
          }
        }
        *(undefined8 **)(param_1 + 0x38) = puVar3;
        *(uint *)(param_1 + 0x44) = uVar10;
      }
      for (; uVar7 < 4; uVar7 = uVar7 + 1) {
        puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x38) + uVar7 * 8);
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = 0;
        }
      }
    }
    *(undefined4 *)(param_1 + 0x40) = 4;
  }
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x18);
  if (((plVar5 == (longlong *)0x0) &&
      (pvVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x48), plVar5 = (longlong *)0x0,
      pvVar4 != (void *)0x0)) &&
     (plVar5 = (longlong *)CAkModifiedNodes::CAkModifiedNodes(pvVar4), plVar5 != (longlong *)0x0)) {
    *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x18) = plVar5;
    plVar5[1] = param_1;
    iVar2 = (**(code **)(*plVar5 + 8))(plVar5,*(undefined8 *)(param_1 + 0x48));
    lVar1 = g_DefaultPoolId;
    if (iVar2 != 1) {
      (**(code **)*plVar5)(plVar5,0);
      AK::MemoryMgr::Free(lVar1,plVar5);
      *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18) = 0;
      plVar5 = (longlong *)0x0;
    }
  }
  return plVar5;
}



// FUNCTION 14315bcb0 `scalar_deleting_destructor' body=205 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkRanSeqCntr::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  int iVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__145ac7d60;
  param_1[3] = &PTR_LAB_145ac7fc0;
  param_1[6] = &PTR_PushParamUpdate_145ac7228;
  if ((longlong *)param_1[0x1b] != (longlong *)0x0) {
    iVar1 = (**(code **)(*(longlong *)param_1[0x1b] + 0x18))();
    if (iVar1 != 0) {
      (**(code **)(*(longlong *)param_1[0x1b] + 0x38))();
      *(byte *)((longlong)param_1 + 0x10d) = *(byte *)((longlong)param_1 + 0x10d) & 0xf7;
      DestroySpecificInfo(param_1);
    }
    (**(code **)(*(longlong *)param_1[0x1b] + 0x10))();
  }
  if ((void *)param_1[0x1c] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x1d) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[0x1c]);
    param_1[0x1c] = 0;
    *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  }
  CAkContainerBase::~CAkContainerBase(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 14315bd80 AddChildInternal body=113 status=ok
// SIG undefined AddChildInternal(void)

int CAkParentNode<CAkParameterNode>::AddChildInternal(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = (**(code **)(*param_1 + 600))();
  if (iVar1 == 1) {
    puVar2 = (undefined8 *)FUN_1431440a0(param_1 + 0x19,(int)param_2[2]);
    if (puVar2 == (undefined8 *)0x0) {
      iVar1 = 2;
    }
    else {
      *puVar2 = param_2;
      (**(code **)(*param_2 + 0x30))(param_2,param_1);
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  (**(code **)(*param_2 + 0x10))(param_2);
  return iVar1;
}



// FUNCTION 14315be00 FUN_14315be00 body=198 status=ok
// SIG undefined FUN_14315be00(void)

undefined2 * FUN_14315be00(longlong *param_1,undefined2 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  undefined2 *puVar5;
  void *pvVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 < *(uint *)((longlong)param_1 + 0xc)) {
LAB_14315be90:
    uVar2 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar2 + 1;
    puVar5 = (undefined2 *)(*param_1 + (ulonglong)uVar2 * 2);
    if (puVar5 != (undefined2 *)0x0) {
      *puVar5 = param_2;
    }
  }
  else {
    uVar1 = *(uint *)((longlong)param_1 + 0xc) + 1;
    pvVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 * 2);
    if (pvVar4 != (void *)0x0) {
      pvVar6 = (void *)*param_1;
      if ((pvVar6 != (void *)0x0) && (pvVar6 != pvVar4)) {
        uVar3 = *(uint *)(param_1 + 1);
        uVar7 = 0;
        if ((ulonglong)uVar3 != 0) {
          do {
            *(undefined2 *)((longlong)pvVar4 + uVar7 * 2) = *(undefined2 *)(*param_1 + uVar7 * 2);
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar3);
          pvVar6 = (void *)*param_1;
        }
        AK::MemoryMgr::Free(g_DefaultPoolId,pvVar6);
      }
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = uVar1;
      if (uVar2 < uVar1) goto LAB_14315be90;
    }
    puVar5 = (undefined2 *)0x0;
  }
  return puVar5;
}



// FUNCTION 14315bed0 FUN_14315bed0 body=562 status=ok
// SIG undefined FUN_14315bed0(void)

longlong * FUN_14315bed0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  byte bVar3;
  uint uVar4;
  longlong *plVar5;
  byte bVar6;
  short sVar7;
  short sVar8;
  void *pvVar9;
  short sVar10;
  void *pvVar11;
  void *pvVar12;
  ulonglong uVar13;
  bool bVar14;
  
  plVar5 = *(longlong **)(*(longlong *)(param_2 + 0x88) + 0x18);
  uVar4 = *(uint *)(plVar5 + 1);
  if (uVar4 < *(uint *)((longlong)plVar5 + 0xc)) {
LAB_14315bfb3:
    plVar2 = (longlong *)(*plVar5 + (ulonglong)*(uint *)(plVar5 + 1) * 0x28);
    *(uint *)(plVar5 + 1) = *(uint *)(plVar5 + 1) + 1;
    if ((plVar2 != (longlong *)0x0) &&
       (CAkContinueListItem::CAkContinueListItem(plVar2), plVar2 != (longlong *)0x0)) {
      if (param_1 != (longlong *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
      }
      plVar5 = (longlong *)*plVar2;
      *plVar2 = (longlong)param_1;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      bVar14 = *(short *)((longlong)param_1 + 0x104) != 1;
      bVar3 = *(byte *)((longlong)plVar2 + 0x12);
      sVar8 = 0;
      *(byte *)((longlong)plVar2 + 0x12) = bVar14 | bVar3 & 0xfe;
      bVar6 = 0;
      if (*(short *)((longlong)param_1 + 0x104) == 0) {
        bVar6 = 2;
      }
      *(byte *)((longlong)plVar2 + 0x12) = bVar6 | bVar14 | bVar3 & 0xfc;
      *(undefined2 *)(plVar2 + 2) = 1;
      if ((bVar14) && (bVar6 == 0)) {
        sVar7 = *(short *)((longlong)param_1 + 0x106);
        sVar10 = (short)param_1[0x21] - sVar7;
        if (sVar10 != 0) {
          DAT_146b50b60 = DAT_146b50b60 * 0x5851f42d4c957f2d + 1;
          sVar8 = (short)(int)((double)(uint)((ulonglong)DAT_146b50b60 >> 0x21) *
                               4.656612875245797e-10 * (double)(int)sVar10 + 0.5);
          sVar7 = *(short *)((longlong)param_1 + 0x106);
        }
        sVar8 = sVar7 + sVar8 + *(short *)((longlong)param_1 + 0x104);
        if (sVar8 < 2) {
          sVar8 = 1;
        }
        *(short *)(plVar2 + 2) = sVar8;
      }
    }
    return plVar2;
  }
  uVar1 = *(uint *)((longlong)plVar5 + 0xc) + 2;
  pvVar9 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 * 0x28);
  if (pvVar9 != (void *)0x0) {
    pvVar11 = (void *)*plVar5;
    if ((pvVar11 != (void *)0x0) && (pvVar11 != pvVar9)) {
      uVar13 = (ulonglong)*(uint *)(plVar5 + 1);
      pvVar12 = pvVar9;
      if (uVar13 != 0) {
        do {
          if (pvVar12 != (void *)0x0) {
            CAkContinueListItem::CAkContinueListItem(pvVar12);
          }
          CAkContinueListItem::operator=(pvVar12,(longlong)pvVar12 + (*plVar5 - (longlong)pvVar9));
          CAkContinueListItem::~CAkContinueListItem
                    ((longlong)pvVar12 + (*plVar5 - (longlong)pvVar9));
          uVar13 = uVar13 - 1;
          pvVar12 = (void *)((longlong)pvVar12 + 0x28);
        } while (uVar13 != 0);
        pvVar11 = (void *)*plVar5;
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,pvVar11);
    }
    *plVar5 = (longlong)pvVar9;
    *(uint *)((longlong)plVar5 + 0xc) = uVar1;
    if (uVar4 < uVar1) goto LAB_14315bfb3;
  }
  return (longlong *)0x0;
}



// FUNCTION 14315c110 CanPlayPosition body=119 status=ok
// SIG undefined CanPlayPosition(void)

bool CAkRanSeqCntr::CanPlayPosition(longlong param_1,undefined8 param_2,undefined2 param_3)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 0x10c) & 0x30) == 0) {
    if (*(short *)(param_1 + 0x10a) == 0) {
      return true;
    }
    cVar1 = CAkRandomInfo::IsFlagBlocked(param_2,param_3);
    return cVar1 == '\0';
  }
  cVar1 = CAkRandomInfo::IsFlagSetPlayed(param_2,param_3);
  if ((cVar1 == '\0') && (cVar1 = CAkRandomInfo::IsFlagBlocked(param_2,param_3), cVar1 == '\0')) {
    return true;
  }
  return false;
}



// FUNCTION 14315c1a0 FUN_14315c1a0 body=113 status=ok
// SIG undefined FUN_14315c1a0(void)

void FUN_14315c1a0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 200), plVar2 != plVar2 + *(uint *)(param_1 + 0xd0))) {
    do {
      lVar1 = ((longlong *)*plVar2)[0xf];
      if ((lVar1 != 0) && (0 < *(short *)(lVar1 + 0x50))) {
        (**(code **)(*(longlong *)*plVar2 + 0xe8))();
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != (longlong *)
                       (*(longlong *)(param_1 + 200) + (ulonglong)*(uint *)(param_1 + 0xd0) * 8));
  }
  return;
}



// FUNCTION 14315c220 Create body=394 status=ok
// SIG undefined Create(void)

longlong * CAkRanSeqCntr::Create(undefined4 param_1,byte param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  void *pvVar4;
  longlong *plVar5;
  
  plVar3 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x110);
  if (plVar3 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  CAkContainerBase::CAkContainerBase(plVar3,param_1);
  plVar5 = (longlong *)0x0;
  *plVar3 = (longlong)&PTR__scalar_deleting_destructor__145ac7d60;
  plVar3[0x1b] = 0;
  plVar3[3] = (longlong)&PTR_LAB_145ac7fc0;
  plVar3[6] = (longlong)&PTR_PushParamUpdate_145ac7228;
  plVar3[0x1c] = 0;
  plVar3[0x1d] = 0;
  plVar3[0x1e] = 0;
  plVar3[0x1f] = 0;
  *(undefined4 *)(plVar3 + 0x20) = 0;
  *(undefined4 *)((longlong)plVar3 + 0x106) = 0;
  *(byte *)((longlong)plVar3 + 0x10e) = *(byte *)((longlong)plVar3 + 0x10e) & 0xfe;
  *(byte *)((longlong)plVar3 + 0x10c) = *(byte *)((longlong)plVar3 + 0x10c) & 0xc0;
  *(undefined2 *)((longlong)plVar3 + 0x104) = 1;
  *(byte *)((longlong)plVar3 + 0x10d) = param_2 & 7 | 0x90;
  *(undefined2 *)((longlong)plVar3 + 0x10a) = 0;
  iVar2 = (**(code **)(*plVar3 + 0x80))(plVar3);
  if ((iVar2 == 0) || (iVar2 == 10)) {
    bVar1 = 0x80;
  }
  else {
    bVar1 = 0;
  }
  *(byte *)(plVar3 + 0x15) = *(byte *)(plVar3 + 0x15) & 0x7f;
  *(byte *)(plVar3 + 0x15) = *(byte *)(plVar3 + 0x15) | bVar1;
  CAkParameterNodeBase::AddToIndex(plVar3);
  if ((*(byte *)((longlong)plVar3 + 0x10d) & 7) == 1) {
    pvVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x18);
    if (pvVar4 != (void *)0x0) {
      plVar5 = (longlong *)FReferenceCollector::FReferenceCollector(pvVar4);
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x18);
    if (pvVar4 != (void *)0x0) {
      plVar5 = (longlong *)FReferenceCollector::FReferenceCollector(pvVar4);
    }
  }
  plVar3[0x1b] = (longlong)plVar5;
  if ((plVar5 != (longlong *)0x0) && (iVar2 = (**(code **)(*plVar5 + 8))(plVar5), iVar2 == 1)) {
    return plVar3;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
  return (longlong *)0x0;
}



// FUNCTION 14315c3b0 FUN_14315c3b0 body=119 status=ok
// SIG undefined FUN_14315c3b0(void)

void FUN_14315c3b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  void *pvVar1;
  
  if (*param_4 != 1) {
    FUN_1431ac270();
    return;
  }
  pvVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x358);
  if (pvVar1 != (void *)0x0) {
    FUN_1431b70e0(pvVar1,param_4,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 14315c430 CreateRandomInfo body=140 status=ok
// SIG undefined CreateRandomInfo(void)

longlong * CAkRanSeqCntr::CreateRandomInfo(longlong param_1,undefined2 param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  longlong *plVar4;
  
  pvVar3 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x38);
  if (pvVar3 != (void *)0x0) {
    plVar4 = (longlong *)CAkRandomInfo::CAkRandomInfo(pvVar3,param_2);
    if (plVar4 != (longlong *)0x0) {
      iVar1 = CAkRandomInfo::Init(plVar4,*(undefined2 *)(param_1 + 0x10a));
      if (iVar1 == 1) {
        if ((*(byte *)(param_1 + 0x10d) & 8) != 0) {
          uVar2 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x60))();
          *(undefined4 *)((longlong)plVar4 + 0xc) = uVar2;
          *(undefined4 *)(plVar4 + 1) = uVar2;
        }
        return plVar4;
      }
      (**(code **)(*plVar4 + 8))(plVar4);
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 14315c4c0 CreateSequenceInfo body=42 status=ok
// SIG undefined CreateSequenceInfo(void)

void CAkRanSeqCntr::CreateSequenceInfo(void)

{
  void *pvVar1;
  
  pvVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x10);
  if (pvVar1 != (void *)0x0) {
    CAkSequenceInfo::CAkSequenceInfo(pvVar1);
    return;
  }
  return;
}



// FUNCTION 14315c4f0 DeserializeHistory body=555 status=ok
// SIG undefined DeserializeHistory(void)

undefined8 CAkRanSeqCntr::DeserializeHistory(longlong param_1,undefined8 *param_2)

{
  CAkRegisteredObj *pCVar1;
  long lVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  CAkRegisteredObj *pCVar7;
  longlong *plVar8;
  uint uVar9;
  byte local_res10 [8];
  uint local_res18 [2];
  undefined1 local_res20 [8];
  __uint64 local_48 [2];
  
  uVar9 = 0;
  local_res18[0] = 0;
  local_res10[0] = 0;
  cVar3 = (**(code **)*param_2)(param_2,local_res10,1,local_res20);
  if (((cVar3 == '\0') ||
      (cVar3 = (**(code **)*param_2)(param_2,local_res18,4,local_res20), cVar3 == '\0')) ||
     (local_res10[0] != (*(byte *)(param_1 + 0x10d) & 7))) {
    return 2;
  }
  if (*(longlong **)(param_1 + 0xd8) == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x18))();
  }
  if (local_res18[0] != 0) {
    do {
      pCVar7 = (CAkRegisteredObj *)0x0;
      local_48[0] = 0xffffffffffffffff;
      cVar3 = (**(code **)*param_2)(param_2,local_48,8,local_res20);
      if (cVar3 == '\0') {
        return 2;
      }
      if ((local_48[0] == 0xffffffffffffffff) ||
         (pCVar7 = CAkRegistryMgr::GetObjAndAddref(g_pRegistryMgr,local_48[0]),
         pCVar7 != (CAkRegisteredObj *)0x0)) {
        if ((*(byte *)(param_1 + 0x10d) & 7) == 1) {
          plVar8 = (longlong *)FUN_14315cd50(param_1,pCVar7);
        }
        else {
          uVar6 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x18))();
          plVar8 = (longlong *)FUN_14315cc70(param_1,uVar6,pCVar7);
        }
        if ((plVar8 == (longlong *)0x0) ||
           (iVar5 = (**(code **)(*plVar8 + 0x28))(plVar8,param_2,uVar4), iVar5 != 1))
        goto LAB_14315c645;
        if (pCVar7 != (CAkRegisteredObj *)0x0) {
          pCVar1 = pCVar7 + 0x50;
          *(int *)pCVar1 = *(int *)pCVar1 + -1;
          lVar2 = g_DefaultPoolId;
          if (*(int *)pCVar1 == 0) {
            (*(code *)**(undefined8 **)pCVar7)(pCVar7,0);
            AK::MemoryMgr::Free(lVar2,pCVar7);
          }
        }
      }
      else {
        if ((*(byte *)(param_1 + 0x10d) & 7) == 1) {
          plVar8 = (longlong *)CreateSequenceInfo();
        }
        else {
          plVar8 = (longlong *)CreateRandomInfo(param_1,uVar4);
        }
        if (plVar8 == (longlong *)0x0) {
LAB_14315c645:
          if (pCVar7 == (CAkRegisteredObj *)0x0) {
            return 2;
          }
          pCVar1 = pCVar7 + 0x50;
          *(int *)pCVar1 = *(int *)pCVar1 + -1;
          lVar2 = g_DefaultPoolId;
          if (*(int *)pCVar1 != 0) {
            return 2;
          }
          (*(code *)**(undefined8 **)pCVar7)(pCVar7,0);
          AK::MemoryMgr::Free(lVar2,pCVar7);
          return 2;
        }
        iVar5 = (**(code **)(*plVar8 + 0x28))(plVar8,param_2,uVar4);
        lVar2 = g_DefaultPoolId;
        (**(code **)*plVar8)(plVar8,0);
        AK::MemoryMgr::Free(lVar2,plVar8);
        if (iVar5 != 1) goto LAB_14315c645;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_res18[0]);
  }
  return 1;
}



// FUNCTION 14315c720 DestroySpecificInfo body=118 status=ok
// SIG undefined DestroySpecificInfo(void)

void CAkRanSeqCntr::DestroySpecificInfo(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xe0);
  if (lVar1 != (ulonglong)*(uint *)(param_1 + 0xe8) * 0x10 + lVar1) {
    do {
      (**(code **)(**(longlong **)(lVar1 + 8) + 8))();
      lVar1 = lVar1 + 0x10;
    } while (lVar1 != (ulonglong)*(uint *)(param_1 + 0xe8) * 0x10 + *(longlong *)(param_1 + 0xe0));
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong **)(param_1 + 0xf0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xf0) + 8))();
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 14315c7a0 Erase body=90 status=ok
// SIG undefined Erase(void)

void AkArray<unsigned_short,unsigned_short,AkArrayAllocatorNoAlign<0>,AkGrowByPolicy_Proportional,AkAssignmentMovePolicy<unsigned_short>_>
     ::Erase(longlong *param_1,uint param_2)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  puVar3 = (undefined2 *)(*param_1 + ((ulonglong)*(uint *)(param_1 + 1) - 1) * 2);
  puVar2 = (undefined2 *)(*param_1 + (ulonglong)param_2 * 2);
  if (puVar2 < puVar3) {
    lVar1 = ((ulonglong)((longlong)puVar3 + (-1 - (longlong)puVar2)) >> 1) + 1;
    puVar3 = puVar2;
    for (; puVar2 = puVar2 + 1, lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar3 = puVar3 + 1;
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
    return;
  }
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) - 1;
  return;
}



// FUNCTION 14315c800 FUN_14315c800 body=135 status=ok
// SIG undefined FUN_14315c800(void)

void FUN_14315c800(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x78);
  if ((lVar3 != 0) &&
     (((0 < *(short *)(lVar3 + 0x50) || (0 < *(short *)(lVar3 + 0x54))) &&
      (uVar2 = *(uint *)(param_1 + 0xd0), uVar2 != 0)))) {
    lVar3 = (ulonglong)uVar2 << 3;
    do {
      lVar3 = lVar3 + -8;
      uVar2 = uVar2 - 1;
      plVar1 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 200));
      if ((*(char *)(param_2 + 0x20) == '\0') || (plVar1[0x11] == 0)) {
        (**(code **)(*plVar1 + 0x90))(plVar1,param_2);
      }
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 14315c890 ExecuteActionExcept body=197 status=ok
// SIG undefined ExecuteActionExcept(void)

void CAkActiveParent<CAkParameterNode>::ExecuteActionExcept(longlong param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  if ((*(char *)((longlong)param_2 + 0x23) == '\0') || (*(char *)((longlong)param_2 + 0x21) == '\0')
     ) goto LAB_14315c8d0;
  iVar1 = *param_2;
  if (iVar1 == 0) {
LAB_14315c8c9:
    uVar4 = 0;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) goto LAB_14315c8d0;
      goto LAB_14315c8c9;
    }
    uVar4 = 1;
  }
  CAkStateAware::PauseTransitions(param_1 + 0x18,uVar4);
LAB_14315c8d0:
  uVar5 = *(uint *)(param_1 + 0xd0);
  if (uVar5 != 0) {
    lVar6 = (ulonglong)uVar5 << 3;
    do {
      lVar6 = lVar6 + -8;
      uVar5 = uVar5 - 1;
      plVar2 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 200));
      if ((((char)param_2[8] == '\0') || (plVar2[0x11] == 0)) &&
         (cVar3 = CAkParameterNodeBase::IsException(plVar2,*(undefined8 *)(param_2 + 0xc)),
         cVar3 == '\0')) {
        (**(code **)(*plVar2 + 0xa0))(plVar2,param_2);
      }
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 14315c960 FUN_14315c960 body=163 status=ok
// SIG undefined FUN_14315c960(void)

/* WARNING: Removing unreachable block (ram,0x00014315c9fb) */
/* WARNING: Removing unreachable block (ram,0x00014315c9c4) */

ulonglong * FUN_14315c960(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = (int)param_1[1] + -1;
  if (-1 < iVar5) {
    do {
      iVar2 = (iVar5 - iVar4) / 2 + iVar4;
      puVar3 = (ulonglong *)((longlong)iVar2 * 0x10 + *param_1);
      uVar1 = *puVar3;
      if (param_2 < uVar1) {
        iVar5 = iVar2 + -1;
      }
      else {
        if (param_2 <= uVar1) {
          return puVar3;
        }
        iVar4 = iVar2 + 1;
      }
    } while (iVar4 <= iVar5);
  }
  if (*param_1 == 0) {
    return (ulonglong *)0x0;
  }
  return (ulonglong *)0x0;
}



// FUNCTION 14315ca10 FUN_14315ca10 body=157 status=ok
// SIG undefined FUN_14315ca10(void)

void FUN_14315ca10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 200), plVar2 != plVar2 + *(uint *)(param_1 + 0xd0))) {
    do {
      plVar1 = (longlong *)*plVar2;
      if ((plVar1[0xf] != 0) && (0 < *(short *)(plVar1[0xf] + 0x50))) {
        (**(code **)(*plVar1 + 0xf0))(plVar1,param_2,param_3,param_4);
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != (longlong *)
                       (*(longlong *)(param_1 + 200) + (ulonglong)*(uint *)(param_1 + 0xd0) * 8));
  }
  return;
}



// FUNCTION 14315cab0 GatherSounds body=200 status=ok
// SIG undefined GatherSounds(void)

void CAkParentNode<CAkParameterNodeBase>::GatherSounds
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined1 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 200);
  if (puVar1 != puVar1 + *(uint *)(param_1 + 0xd0)) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x78))
                ((longlong *)*puVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined8 *)
                       (*(longlong *)(param_1 + 200) + (ulonglong)*(uint *)(param_1 + 0xd0) * 8));
  }
  return;
}



// FUNCTION 14315cb80 GetChildren body=230 status=ok
// SIG undefined GetChildren(void)

void CAkParentNode<CAkParameterNode>::GetChildren
               (longlong param_1,uint *param_2,longlong param_3,uint *param_4,int param_5)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  
  plVar2 = *(longlong **)(param_1 + 200);
  if (plVar2 != plVar2 + *(uint *)(param_1 + 0xd0)) {
    uVar1 = *param_4;
    uVar3 = *param_2;
    while( true ) {
      if (uVar1 < uVar3) {
        *(undefined4 *)(param_3 + (ulonglong)uVar1 * 0xc) = *(undefined4 *)(*plVar2 + 0x10);
        *(undefined4 *)(param_3 + 4 + (ulonglong)*param_4 * 0xc) =
             *(undefined4 *)(*(longlong *)(*plVar2 + 0x80) + 0x10);
        *(int *)(param_3 + 8 + (ulonglong)*param_4 * 0xc) = param_5;
        uVar1 = *param_4;
      }
      *param_4 = uVar1 + 1;
      if (uVar1 + 1 == *param_2) break;
      (**(code **)(*(longlong *)*plVar2 + 0x70))
                ((longlong *)*plVar2,param_2,param_3,param_4,param_5 + 1);
      uVar1 = *param_4;
      uVar3 = *param_2;
      if (uVar1 == uVar3) {
        return;
      }
      plVar2 = plVar2 + 1;
      if (plVar2 == (longlong *)
                    (*(longlong *)(param_1 + 200) + (ulonglong)*(uint *)(param_1 + 0xd0) * 8)) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 14315cc70 FUN_14315cc70 body=218 status=ok
// SIG undefined FUN_14315cc70(void)

longlong * FUN_14315cc70(longlong param_1,undefined2 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x10d) < '\0') {
    plVar2 = *(longlong **)(param_1 + 0xf0);
    if (plVar2 == (longlong *)0x0) {
      plVar2 = (longlong *)CAkRanSeqCntr::CreateRandomInfo();
      *(longlong **)(param_1 + 0xf0) = plVar2;
    }
  }
  else {
    lVar3 = FUN_14315c960(param_1 + 0xe0,param_3);
    if (lVar3 == 0) {
      plVar2 = (longlong *)CAkRanSeqCntr::CreateRandomInfo(param_1,param_2);
      if (plVar2 != (longlong *)0x0) {
        lVar3 = FUN_14315bb10(param_3);
        if (((lVar3 != 0) &&
            (iVar1 = CAkModifiedNodes::SetNodeAsModified(lVar3,param_1), iVar1 == 1)) &&
           (lVar3 = FUN_14315e5b0(param_1 + 0xe0,param_3), lVar3 != 0)) {
          *(longlong **)(lVar3 + 8) = plVar2;
          return plVar2;
        }
        (**(code **)(*plVar2 + 8))(plVar2);
      }
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)(lVar3 + 8);
    }
  }
  return plVar2;
}



// FUNCTION 14315cd50 FUN_14315cd50 body=252 status=ok
// SIG undefined FUN_14315cd50(void)

longlong * FUN_14315cd50(longlong param_1,undefined8 param_2)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x10d) < '\0') {
    plVar3 = *(longlong **)(param_1 + 0xf0);
    if (plVar3 == (longlong *)0x0) {
      pvVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x10);
      if (pvVar2 == (void *)0x0) {
        plVar3 = (longlong *)0x0;
        *(undefined8 *)(param_1 + 0xf0) = 0;
      }
      else {
        plVar3 = (longlong *)CAkSequenceInfo::CAkSequenceInfo(pvVar2);
        *(longlong **)(param_1 + 0xf0) = plVar3;
      }
    }
  }
  else {
    lVar4 = FUN_14315c960(param_1 + 0xe0);
    if (lVar4 == 0) {
      pvVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x10);
      if ((pvVar2 != (void *)0x0) &&
         (plVar3 = (longlong *)CAkSequenceInfo::CAkSequenceInfo(pvVar2), plVar3 != (longlong *)0x0))
      {
        lVar4 = FUN_14315bb10(param_2);
        if ((lVar4 != 0) &&
           ((iVar1 = CAkModifiedNodes::SetNodeAsModified(lVar4,param_1), iVar1 == 1 &&
            (lVar4 = FUN_14315e5b0(param_1 + 0xe0,param_2), lVar4 != 0)))) {
          *(longlong **)(lVar4 + 8) = plVar3;
          return plVar3;
        }
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)(lVar4 + 8);
    }
  }
  return plVar3;
}



// FUNCTION 14315ce50 GetNextToPlay body=613 status=ok
// SIG undefined GetNextToPlay(void)

longlong *
CAkRanSeqCntr::GetNextToPlay
          (longlong param_1,undefined8 param_2,ushort *param_3,undefined4 *param_4)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  ushort uVar10;
  uint uVar11;
  char local_res8 [8];
  longlong *local_48;
  longlong *plVar12;
  
  plVar9 = (longlong *)0x0;
  uVar10 = 0;
  *param_3 = 0;
  *param_4 = 0;
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x18))();
  if (uVar4 != 0) {
    if (uVar4 == 1) {
      uVar6 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x20))
                        (*(longlong **)(param_1 + 0xd8),0);
      *param_4 = uVar6;
      plVar9 = (longlong *)CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,uVar6,0);
    }
    else {
      local_48 = (longlong *)0x0;
      bVar1 = false;
      if ((*(byte *)(param_1 + 0x10d) & 7) == 1) {
        plVar7 = (longlong *)FUN_14315cd50(param_1,param_2);
        plVar8 = plVar7;
      }
      else {
        local_48 = (longlong *)FUN_14315cc70(param_1,uVar4 & 0xffff,param_2);
        plVar7 = plVar9;
        plVar8 = local_48;
      }
      plVar12 = plVar9;
      if (plVar8 == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        do {
          local_res8[0] = '\x01';
          if (bVar1) {
            uVar10 = uVar10 + 1;
            if (uVar4 <= uVar10) {
              uVar10 = 0;
            }
            cVar2 = CanPlayPosition(param_1,local_48,uVar10);
            if (cVar2 != '\0') {
              FUN_14315f050(param_1,local_48,uVar10);
LAB_14315cfd8:
              if (cVar2 != '\0') goto LAB_14315cfdd;
            }
            if (!bVar1) {
              return plVar9;
            }
          }
          else {
            if ((*(byte *)(param_1 + 0x10d) & 7) != 1) {
              uVar10 = FUN_14315e050(param_1,local_48,local_res8,0);
              cVar2 = local_res8[0];
              goto LAB_14315cfd8;
            }
            if ((char)plVar7[1] == '\0') {
              sVar3 = *(short *)((longlong)plVar7 + 10);
              if (sVar3 == 0) {
                *(undefined2 *)((longlong)plVar7 + 10) = 1;
                *(undefined1 *)(plVar7 + 1) = 1;
                uVar10 = 1;
              }
              else {
LAB_14315cf81:
                uVar10 = sVar3 - 1;
                *(ushort *)((longlong)plVar7 + 10) = uVar10;
              }
            }
            else {
              iVar5 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x18))();
              sVar3 = *(short *)((longlong)plVar7 + 10);
              if (sVar3 + 1 == iVar5) {
                if ((*(byte *)(param_1 + 0x10d) & 0x20) != 0) {
                  *(undefined1 *)(plVar7 + 1) = 0;
                  goto LAB_14315cf81;
                }
                *(undefined2 *)((longlong)plVar7 + 10) = 0;
                uVar10 = 0;
              }
              else {
                uVar10 = sVar3 + 1;
                *(ushort *)((longlong)plVar7 + 10) = uVar10;
              }
            }
LAB_14315cfdd:
            uVar6 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x20))
                              (*(longlong **)(param_1 + 0xd8),uVar10);
            *param_4 = uVar6;
            plVar9 = (longlong *)CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,uVar6,0);
            if (plVar9 != (longlong *)0x0) {
              cVar2 = (**(code **)(*plVar9 + 0x88))(plVar9);
              if (cVar2 != '\0') {
                *param_3 = uVar10;
                return plVar9;
              }
              (**(code **)(*plVar9 + 0x10))(plVar9);
              plVar9 = (longlong *)0x0;
            }
          }
          if ((((int)plVar12 == 0) && ((*(byte *)(param_1 + 0x10d) & 7) == 0)) &&
             ((*(byte *)(param_1 + 0x10c) & 0x30) != 0x10)) {
            bVar1 = true;
          }
          uVar11 = (int)plVar12 + 1;
          plVar12 = (longlong *)(ulonglong)uVar11;
        } while (uVar11 < uVar4);
      }
    }
  }
  return plVar9;
}



// FUNCTION 14315d0c0 GetNextToPlayContinuous body=615 status=ok
// SIG undefined GetNextToPlayContinuous(void)

undefined8
CAkRanSeqCntr::GetNextToPlayContinuous
          (longlong param_1,undefined8 param_2,undefined2 *param_3,undefined4 *param_4,
          longlong *param_5,short *param_6)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  short sVar10;
  char local_res8 [8];
  
  *param_4 = 0;
  *param_3 = 0;
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x18))();
  if (uVar4 == 0) {
    return 0;
  }
  if (uVar4 == 1) {
    if (*param_6 < 1) {
      return 0;
    }
    if ((*(byte *)(param_6 + 1) & 2) == 0) {
      *param_6 = *param_6 + -1;
    }
    uVar3 = 0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x10d);
    local_res8[0] = '\x01';
    if ((((bVar1 & 0x10) == 0) && (*param_5 == 0)) && ((bVar1 & 7) == 1)) {
      lVar7 = FUN_14315cd50(param_1,param_2);
      if ((lVar7 == 0) || (lVar8 = CreateSequenceInfo(param_1), lVar8 == 0)) {
        return 0;
      }
      *(undefined1 *)(lVar8 + 8) = *(undefined1 *)(lVar7 + 8);
      *(undefined2 *)(lVar8 + 10) = *(undefined2 *)(lVar7 + 10);
      uVar3 = SelectSequentially(param_1,lVar8,local_res8,param_6);
      *param_5 = lVar8;
    }
    else {
      lVar7 = *param_5;
      if ((bVar1 & 7) == 1) {
        if (lVar7 == 0) {
          lVar7 = CreateSequenceInfo(param_1);
          *param_5 = lVar7;
          if (lVar7 == 0) {
            return 0;
          }
          lVar8 = *(longlong *)(param_1 + 0xf0);
          if (lVar8 != 0) {
            *(undefined2 *)(lVar7 + 10) = *(undefined2 *)(lVar8 + 10);
            *(undefined2 *)(lVar8 + 10) = 0xffff;
            lVar7 = *param_5;
          }
        }
        uVar3 = SelectSequentially(param_1,lVar7,local_res8,param_6);
        if ((*(byte *)(param_1 + 0x10d) & 0x10) == 0) {
          if ((char)*(byte *)(param_1 + 0x10d) < '\0') {
            lVar8 = *(longlong *)(param_1 + 0xf0);
          }
          else {
            lVar8 = FUN_14315c960(param_1 + 0xe0,param_2);
            lVar8 = *(longlong *)(lVar8 + 8);
          }
          cVar2 = *(char *)(lVar7 + 8);
          *(char *)(lVar8 + 8) = cVar2;
          sVar10 = -1;
          if (cVar2 == '\0') {
            sVar10 = 1;
          }
          *(short *)(lVar8 + 10) = sVar10 + *(short *)(lVar7 + 10);
          sVar10 = *(short *)(lVar8 + 10);
          iVar5 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x18))();
          if ((sVar10 + 1 == iVar5) && ((*(byte *)(param_1 + 0x10d) & 0x20) == 0)) {
            *(undefined2 *)(lVar8 + 10) = 0xffff;
          }
          else if ((sVar10 == 0) && (*(char *)(lVar8 + 8) == '\0')) {
            *(undefined1 *)(lVar8 + 8) = 1;
          }
        }
      }
      else {
        if (lVar7 == 0) {
          lVar7 = CreateRandomInfo(param_1,uVar4 & 0xffff);
          if (lVar7 == 0) {
            return 0;
          }
          *param_5 = lVar7;
        }
        uVar3 = FUN_14315e050(param_1,lVar7,local_res8,param_6);
      }
    }
    if (local_res8[0] == '\0') {
      return 0;
    }
    *param_3 = uVar3;
  }
  uVar6 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x20))
                    (*(longlong **)(param_1 + 0xd8),uVar3);
  *param_4 = uVar6;
  uVar9 = CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,uVar6,0);
  return uVar9;
}



// FUNCTION 14315d330 GetPlaylistLength body=22 status=ok
// SIG undefined GetPlaylistLength(void)

undefined8 CAkRanSeqCntr::GetPlaylistLength(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0xd8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014315d33f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x18))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 14315d350 FUN_14315d350 body=160 status=ok
// SIG undefined FUN_14315d350(void)

undefined8 FUN_14315d350(longlong *param_1,int param_2)

{
  undefined8 uVar1;
  AKRESULT AVar2;
  void *pvVar3;
  undefined4 extraout_var;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  void *pvVar4;
  
  uVar7 = *(int *)((longlong)param_1 + 0xc) + param_2;
  pvVar3 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar7 << 4);
  if (pvVar3 == (void *)0x0) {
    return 0;
  }
  pvVar4 = (void *)*param_1;
  if ((pvVar4 != (void *)0x0) && (pvVar4 != pvVar3)) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 1);
    if (uVar6 != 0) {
      lVar5 = 0;
      do {
        uVar1 = ((undefined8 *)(lVar5 + *param_1))[1];
        *(undefined8 *)(lVar5 + (longlong)pvVar3) = *(undefined8 *)(lVar5 + *param_1);
        ((undefined8 *)(lVar5 + (longlong)pvVar3))[1] = uVar1;
        uVar6 = uVar6 - 1;
        lVar5 = lVar5 + 0x10;
      } while (uVar6 != 0);
      pvVar4 = (void *)*param_1;
    }
    AVar2 = AK::MemoryMgr::Free(g_DefaultPoolId,pvVar4);
    pvVar4 = (void *)CONCAT44(extraout_var,AVar2);
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar7;
  *param_1 = (longlong)pvVar3;
  return CONCAT71((int7)((ulonglong)pvVar4 >> 8),1);
}



// FUNCTION 14315d420 FUN_14315d420 body=175 status=ok
// SIG undefined FUN_14315d420(void)

void FUN_14315d420(longlong param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 200), plVar2 != plVar2 + *(uint *)(param_1 + 0xd0))) {
    do {
      if ((param_4 == '\0') || (*(longlong *)(*plVar2 + 0x88) == 0)) {
        plVar1 = (longlong *)*plVar2;
        if ((plVar1[0xf] != 0) && (0 < *(short *)(plVar1[0xf] + 0x50))) {
          (**(code **)(*plVar1 + 0xd0))(plVar1,param_2,param_3,param_4);
        }
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != (longlong *)
                       (*(longlong *)(param_1 + 200) + (ulonglong)*(uint *)(param_1 + 0xd0) * 8));
  }
  return;
}



// FUNCTION 14315d4d0 FUN_14315d4d0 body=180 status=ok
// SIG undefined FUN_14315d4d0(void)

void FUN_14315d4d0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 200), plVar2 != plVar2 + *(uint *)(param_1 + 0xd0))) {
    do {
      plVar1 = (longlong *)*plVar2;
      if ((plVar1[0xf] != 0) && (0 < *(short *)(plVar1[0xf] + 0x50))) {
        (**(code **)(*plVar1 + 200))(plVar1,param_2,param_3,param_4,param_5);
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != (longlong *)
                       (*(longlong *)(param_1 + 200) + (ulonglong)*(uint *)(param_1 + 0xd0) * 8));
  }
  return;
}



// FUNCTION 14315d590 FUN_14315d590 body=185 status=ok
// SIG undefined FUN_14315d590(void)

void FUN_14315d590(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 200), plVar2 != plVar2 + *(uint *)(param_1 + 0xd0))) {
    do {
      plVar1 = (longlong *)*plVar2;
      if ((plVar1[0xf] != 0) &&
         ((0 < *(short *)(plVar1[0xf] + 0x50) && ((*(uint *)(plVar1 + 0x14) & 0x1f000) == 0)))) {
        (**(code **)(*plVar1 + 0xf8))(plVar1,param_2,param_3,param_4,param_5);
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != (longlong *)
                       (*(longlong *)(param_1 + 200) + (ulonglong)*(uint *)(param_1 + 0xd0) * 8));
  }
  return;
}



// FUNCTION 14315d6e0 FUN_14315d6e0 body=160 status=ok
// SIG undefined FUN_14315d6e0(void)

void FUN_14315d6e0(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (plVar3 = *(longlong **)(param_1 + 200), plVar3 != plVar3 + *(uint *)(param_1 + 0xd0))) {
    do {
      if ((*(char *)(param_2 + 0xe) == '\0') || (*(longlong *)(*plVar3 + 0x88) == 0)) {
        plVar1 = (longlong *)*plVar3;
        if (((plVar1[0xf] != 0) && (0 < *(short *)(plVar1[0xf] + 0x50))) &&
           (cVar2 = (**(code **)(*plVar1 + 0x1e8))(plVar1,*param_2), cVar2 == '\0')) {
          (**(code **)(*(longlong *)*plVar3 + 0xb8))((longlong *)*plVar3,param_2);
        }
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != (longlong *)
                       (*(longlong *)(param_1 + 200) + (ulonglong)*(uint *)(param_1 + 0xd0) * 8));
  }
  return;
}



// FUNCTION 14315d810 FUN_14315d810 body=207 status=ok
// SIG undefined FUN_14315d810(void)

undefined8 FUN_14315d810(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  byte local_res10 [8];
  
  if ((*(char *)(param_2 + 0x98) == -0x70) && (*(char *)(param_2 + 0x9b) != '\0')) {
    local_res10[0] = *(byte *)(param_2 + 0x188) & 1;
    uVar1 = *(undefined4 *)(param_2 + 0x34);
    uVar2 = AkPBIParams::GetMidiTargetID(param_2);
    uVar3 = CAkParameterNode::FilterAndTransformMidiEvent
                      (param_1,param_2 + 0x98,uVar2,local_res10,*(undefined8 *)(param_2 + 0x10),
                       uVar1);
    if ((int)uVar3 != 1) {
      return uVar3;
    }
    *(byte *)(param_2 + 0x188) = *(byte *)(param_2 + 0x188) & 0xfe;
    *(byte *)(param_2 + 0x188) = *(byte *)(param_2 + 0x188) | local_res10[0] & 1;
  }
  uVar3 = FUN_1431a35f0(param_1,param_2);
  if ((int)uVar3 != 3) {
    if ((int)uVar3 == 1) {
      uVar3 = (**(code **)(*param_1 + 0x238))(param_1,param_2);
    }
    return uVar3;
  }
  return 1;
}



// FUNCTION 14315d8e0 FUN_14315d8e0 body=597 status=ok
// SIG undefined FUN_14315d8e0(void)

undefined4 FUN_14315d8e0(longlong param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined2 local_res8 [4];
  undefined1 local_res18 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  *(byte *)(param_1 + 0x10e) = *(byte *)(param_1 + 0x10e) | 1;
  if ((*(byte *)(param_1 + 0x10d) & 0x40) == 0) {
    plVar3 = (longlong *)
             CAkRanSeqCntr::GetNextToPlay
                       (param_1,*(undefined8 *)(param_2 + 4),local_res8,local_res18);
    if (plVar3 != (longlong *)0x0) {
      uVar1 = param_2[0xe];
      if (uVar1 < 0x20) {
        param_2[0x1f] = param_2[0x1f] & ~(uint)(1L << ((ulonglong)uVar1 & 0x3f));
        *(undefined2 *)((longlong)param_2 + (ulonglong)(uint)param_2[0xe] * 2 + 0x3c) =
             local_res8[0];
        param_2[0xe] = param_2[0xe] + 1;
      }
      else {
        param_2[0xe] = uVar1 + 1;
      }
      uVar2 = FUN_14315d810(plVar3,param_2);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      return uVar2;
    }
    if (*param_2 == 0) {
      return 2;
    }
    uVar2 = CAkParameterNode::PlayAndContinueAlternate(param_1,param_2);
    return uVar2;
  }
  local_38 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_30 = 0;
  local_48 = 0;
  lStack_40 = 0;
  local_28 = 0;
  if (*param_2 == 0) {
    *param_2 = 1;
    *(longlong *)(param_2 + 2) = param_1;
    lVar4 = CAkContinuationList::Create();
    bVar6 = lStack_40 != 0;
    lStack_40 = lVar4;
    if (bVar6) {
      CAkContinuationList::Release();
    }
    if (lStack_40 == 0) {
LAB_14315da45:
      uVar2 = 2;
      goto LAB_14315db09;
    }
    *(undefined8 **)(param_2 + 0x22) = &local_58;
  }
  else if ((*(longlong *)(param_2 + 0x22) != 0) &&
          (*(longlong *)(*(longlong *)(param_2 + 0x22) + 0x18) == 0)) {
    uVar5 = CAkContinuationList::Create();
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x22) + 0x18);
    *(undefined8 *)(*(longlong *)(param_2 + 0x22) + 0x18) = uVar5;
    if (lVar4 != 0) {
      CAkContinuationList::Release();
    }
    if (*(longlong *)(*(longlong *)(param_2 + 0x22) + 0x18) == 0) goto LAB_14315da45;
  }
  if ((*(byte *)(param_1 + 0x10c) & 0xf) == 5) {
    uVar2 = FUN_14315f140();
  }
  else {
    lVar4 = FUN_14315bed0(param_1,param_2);
    if (lVar4 != 0) {
      plVar3 = (longlong *)
               CAkRanSeqCntr::GetNextToPlayContinuous
                         (param_1,*(undefined8 *)(param_2 + 4),local_res8,local_res18,lVar4 + 8,
                          lVar4 + 0x10);
      if (plVar3 != (longlong *)0x0) {
        uVar1 = param_2[0xe];
        if (uVar1 < 0x20) {
          param_2[0x1f] = param_2[0x1f] | (uint)(1L << ((ulonglong)uVar1 & 0x3f));
          *(undefined2 *)((longlong)param_2 + (ulonglong)(uint)param_2[0xe] * 2 + 0x3c) =
               local_res8[0];
          param_2[0xe] = param_2[0xe] + 1;
        }
        else {
          param_2[0xe] = uVar1 + 1;
        }
        uVar2 = FUN_14315d810(plVar3,param_2);
        (**(code **)(*plVar3 + 0x10))(plVar3);
        goto LAB_14315db09;
      }
      plVar3 = *(longlong **)(*(longlong *)(param_2 + 0x22) + 0x18);
      CAkContinueListItem::~CAkContinueListItem
                (*plVar3 + ((ulonglong)*(uint *)(plVar3 + 1) * 5 + -5) * 8);
      *(int *)(plVar3 + 1) = (int)plVar3[1] + -1;
    }
    uVar2 = CAkParameterNode::PlayAndContinueAlternate(param_1,param_2);
  }
LAB_14315db09:
  CAkModCtxRefContainer::~CAkModCtxRefContainer(&local_30);
  if (lStack_40 != 0) {
    CAkContinuationList::Release();
  }
  return uVar2;
}



// FUNCTION 14315db40 PlayToEnd body=138 status=ok
// SIG undefined PlayToEnd(void)

void CAkActiveParent<CAkParameterNodeBase>::PlayToEnd
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 200);
  if (puVar1 != puVar1 + *(uint *)(param_1 + 0xd0)) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0xb0))((longlong *)*puVar1,param_2,param_3,param_4);
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined8 *)
                       (*(longlong *)(param_1 + 200) + (ulonglong)*(uint *)(param_1 + 0xd0) * 8));
  }
  return;
}



// FUNCTION 14315dbd0 FUN_14315dbd0 body=227 status=ok
// SIG undefined FUN_14315dbd0(void)

ulonglong FUN_14315dbd0(longlong param_1,undefined4 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  
  puVar3 = *(undefined8 **)(param_1 + 200);
  if (puVar3 == puVar3 + *(uint *)(param_1 + 0xd0)) {
    return 1;
  }
  do {
    uVar1 = (**(code **)(*(longlong *)*puVar3 + 0x138))((longlong *)*puVar3,param_2);
    if ((int)uVar1 != 1) {
      puVar5 = *(undefined8 **)(param_1 + 200);
      uVar4 = 0;
      uVar6 = (ulonglong)((longlong)puVar3 + (7 - (longlong)puVar5)) >> 3;
      if (puVar3 < puVar5) {
        uVar6 = uVar4;
      }
      uVar2 = uVar1;
      if (uVar6 != 0) {
        do {
          (**(code **)(*(longlong *)*puVar5 + 0x140))((longlong *)*puVar5,param_2);
          uVar4 = uVar4 + 1;
          puVar5 = puVar5 + 1;
          uVar2 = uVar1 & 0xffffffff;
        } while (uVar4 != uVar6);
      }
      return uVar2;
    }
    puVar3 = puVar3 + 1;
  } while (puVar3 != (undefined8 *)
                     (*(longlong *)(param_1 + 200) + (ulonglong)*(uint *)(param_1 + 0xd0) * 8));
  return uVar1 & 0xffffffff;
}



// FUNCTION 14315dcc0 FUN_14315dcc0 body=193 status=ok
// SIG undefined FUN_14315dcc0(void)

void FUN_14315dcc0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 200), plVar2 != plVar2 + *(uint *)(param_1 + 0xd0))) {
    do {
      plVar1 = (longlong *)*plVar2;
      if (((*(uint *)(plVar1 + 0x14) & 0xffe) == 0) &&
         ((plVar1[0xf] != 0 && (0 < *(short *)(plVar1[0xf] + 0x50))))) {
        (**(code **)(*plVar1 + 0xd8))(plVar1,param_2,param_3,param_4,param_5);
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != (longlong *)
                       (*(longlong *)(param_1 + 200) + (ulonglong)*(uint *)(param_1 + 0xd0) * 8));
  }
  return;
}



// FUNCTION 14315dd90 FUN_14315dd90 body=124 status=ok
// SIG undefined FUN_14315dd90(void)

void FUN_14315dd90(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 200), plVar2 != plVar2 + *(uint *)(param_1 + 0xd0))) {
    do {
      plVar1 = (longlong *)*plVar2;
      if ((plVar1[0xf] != 0) && (0 < *(short *)(plVar1[0xf] + 0x50))) {
        (**(code **)(*plVar1 + 400))(plVar1,param_2);
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != (longlong *)
                       (*(longlong *)(param_1 + 200) + (ulonglong)*(uint *)(param_1 + 0xd0) * 8));
  }
  return;
}



// FUNCTION 14315de10 FUN_14315de10 body=202 status=ok
// SIG undefined FUN_14315de10(void)

void FUN_14315de10(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  
  if ((longlong *)param_2[0x10] == param_1) {
    (**(code **)(*param_2 + 0x30))(param_2,0);
    uVar8 = *(uint *)(param_1 + 0x1a);
    iVar6 = 0;
    iVar4 = uVar8 - 1;
    if (-1 < iVar4) {
      lVar3 = param_1[0x19];
      do {
        iVar2 = (iVar4 - iVar6) / 2 + iVar6;
        puVar5 = (undefined8 *)(lVar3 + (longlong)iVar2 * 8);
        uVar1 = *(uint *)(*(longlong *)(lVar3 + (longlong)iVar2 * 8) + 0x10);
        if (uVar1 <= *(uint *)(param_2 + 2)) {
          if (uVar1 < *(uint *)(param_2 + 2)) {
            iVar6 = iVar2 + 1;
            goto LAB_14315de86;
          }
          puVar7 = (undefined8 *)(lVar3 + ((ulonglong)uVar8 - 1) * 8);
          if (puVar5 < puVar7) {
            lVar3 = ((ulonglong)((longlong)puVar7 + (-1 - (longlong)puVar5)) >> 3) + 1;
            puVar7 = puVar5;
            for (; puVar5 = puVar5 + 1, lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar7 = *puVar5;
              puVar7 = puVar7 + 1;
            }
            uVar8 = *(uint *)(param_1 + 0x1a);
          }
          *(uint *)(param_1 + 0x1a) = uVar8 - 1;
          break;
        }
        iVar4 = iVar2 + -1;
LAB_14315de86:
      } while (iVar6 <= iVar4);
    }
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  return;
}



// FUNCTION 14315dee0 FUN_14315dee0 body=167 status=ok
// SIG undefined FUN_14315dee0(void)

void FUN_14315dee0(longlong *param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  
  puVar4 = (undefined8 *)0x0;
  iVar6 = (int)param_1[0x1a] + -1;
  puVar5 = puVar4;
  if (-1 < iVar6) {
    do {
      iVar3 = (iVar6 - (int)puVar5) / 2 + (int)puVar5;
      uVar1 = *(uint *)(*(longlong *)(param_1[0x19] + (longlong)iVar3 * 8) + 0x10);
      if (param_2 < uVar1) {
        iVar6 = iVar3 + -1;
      }
      else {
        if (param_2 <= uVar1) {
          bVar2 = true;
          puVar7 = (undefined8 *)(param_1[0x19] + (longlong)iVar3 * 8);
          goto LAB_14315df60;
        }
        puVar5 = (undefined8 *)(ulonglong)(iVar3 + 1);
      }
    } while ((int)puVar5 <= iVar6);
  }
  bVar2 = false;
  puVar7 = puVar4;
  if (param_1[0x19] != 0) {
    puVar7 = (undefined8 *)(param_1[0x19] + (longlong)(int)puVar5 * 8);
  }
LAB_14315df60:
  if (bVar2) {
    puVar4 = puVar7;
  }
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)(*param_1 + 0x60))(param_1,*puVar4);
  }
  return;
}



// FUNCTION 14315df90 ResetSpecificInfo body=88 status=ok
// SIG undefined ResetSpecificInfo(void)

void CAkRanSeqCntr::ResetSpecificInfo(longlong param_1)

{
  DestroySpecificInfo();
  if ((*(byte *)(param_1 + 0x10e) & 1) != 0) {
    if (DAT_146b50b78 != 0) {
      FUN_14313fc30(DAT_146b50b78,param_1);
      FUN_14313fdc0(DAT_146b50b78,param_1);
    }
    CAkParameterNodeBase::Stop(param_1,0,0,0,4);
  }
  return;
}



// FUNCTION 14315dff0 FUN_14315dff0 body=96 status=ok
// SIG undefined FUN_14315dff0(void)

void FUN_14315dff0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0x10d) & 0x40) == 0) {
    if (param_2 == 0) {
      CAkRanSeqCntr::DestroySpecificInfo();
      return;
    }
    if (-1 < (char)*(byte *)(param_1 + 0x10d)) {
      lVar1 = FUN_14315c960(param_1 + 0xe0);
      if (lVar1 != 0) {
        (**(code **)(**(longlong **)(lVar1 + 8) + 8))();
        FUN_14315ef20(param_1 + 0xe0,param_2);
      }
    }
  }
  return;
}



// FUNCTION 14315e050 FUN_14315e050 body=760 status=ok
// SIG undefined FUN_14315e050(void)

short FUN_14315e050(longlong param_1,longlong param_2,undefined1 *param_3,short *param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined2 uVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ushort uVar9;
  longlong lVar10;
  short sVar11;
  int iVar12;
  bool bVar13;
  
  *param_3 = 1;
  plVar1 = *(longlong **)(param_1 + 0xd8);
  sVar11 = 0;
  iVar12 = -1;
  if (*(short *)(param_2 + 0x12) == 0) {
    if ((param_4 != (short *)0x0) &&
       (((*(byte *)(param_4 + 1) & 1) == 0 ||
        (((*(byte *)(param_4 + 1) & 2) == 0 && (*param_4 = *param_4 + -1, *param_4 == 0)))))) {
      *param_3 = 0;
      return 0;
    }
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x18))();
    *(undefined2 *)(param_2 + 0x12) = uVar3;
    (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x18))();
    CAkRandomInfo::ResetFlagsPlayed(param_2);
    if ((*(byte *)(param_1 + 0x10c) & 0x30) == 0x10) {
      lVar10 = *(longlong *)(param_2 + 0x18);
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_2 + 8);
      if (lVar10 != lVar10 + (ulonglong)*(uint *)(param_2 + 0x20) * 2) {
        do {
          iVar6 = (**(code **)(*plVar1 + 0x50))(plVar1);
          *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - iVar6;
          lVar10 = lVar10 + 2;
        } while (lVar10 != *(longlong *)(param_2 + 0x18) + (ulonglong)*(uint *)(param_2 + 0x20) * 2)
        ;
      }
    }
    *(short *)(param_2 + 0x10) = *(short *)(param_2 + 0x10) - *(short *)(param_2 + 0x20);
  }
  if ((*(byte *)(param_1 + 0x10d) & 8) == 0) {
    DAT_146b50b60 = DAT_146b50b60 * 0x5851f42d4c957f2d + 1;
    uVar9 = *(ushort *)(param_2 + 0x10);
    uVar8 = DAT_146b50b60 >> 0x21;
    do {
      if ((*(byte *)(param_1 + 0x10c) & 0x30) == 0) {
        if (*(short *)(param_1 + 0x10a) == 0) {
LAB_14315e215:
          bVar13 = true;
        }
        else {
          cVar2 = CAkRandomInfo::IsFlagBlocked(param_2,sVar11);
          bVar13 = cVar2 == '\0';
        }
      }
      else {
        cVar2 = CAkRandomInfo::IsFlagSetPlayed(param_2,sVar11);
        if ((cVar2 == '\0') && (cVar2 = CAkRandomInfo::IsFlagBlocked(param_2,sVar11), cVar2 == '\0')
           ) goto LAB_14315e215;
        bVar13 = false;
      }
      iVar6 = iVar12 + 1;
      if (!bVar13) {
        iVar6 = iVar12;
      }
      iVar12 = iVar6;
      sVar11 = sVar11 + 1;
    } while (iVar12 < (int)(uVar8 % (ulonglong)uVar9));
  }
  else {
    iVar6 = CAkRandomInfo::GetRandomValue(param_2);
    if (-1 < iVar6) {
      do {
        if ((*(byte *)(param_1 + 0x10c) & 0x30) == 0) {
          if (*(short *)(param_1 + 0x10a) != 0) {
LAB_14315e17d:
            cVar2 = CAkRandomInfo::IsFlagBlocked(param_2,sVar11);
            if (cVar2 != '\0') goto LAB_14315e198;
          }
          iVar7 = (**(code **)(*plVar1 + 0x50))(plVar1,sVar11);
          iVar12 = iVar12 + iVar7;
        }
        else {
          cVar2 = CAkRandomInfo::IsFlagSetPlayed(param_2,sVar11);
          if (cVar2 == '\0') goto LAB_14315e17d;
        }
LAB_14315e198:
        sVar11 = sVar11 + 1;
      } while (iVar12 < iVar6);
    }
  }
  sVar11 = sVar11 + -1;
  if ((*(byte *)(param_1 + 0x10c) & 0x30) == 0) {
    cVar2 = CAkRandomInfo::IsFlagSetPlayed(param_2);
    if (cVar2 == '\0') {
      CAkRandomInfo::FlagSetPlayed(param_2,sVar11);
      *(short *)(param_2 + 0x12) = *(short *)(param_2 + 0x12) + -1;
    }
    FUN_14315f050(param_1,param_2,sVar11);
  }
  else {
    uVar9 = 1;
    if (*(ushort *)(param_1 + 0x10a) != 0) {
      uVar9 = *(ushort *)(param_1 + 0x10a);
    }
    iVar12 = (**(code **)(*plVar1 + 0x50))(plVar1,sVar11);
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - iVar12;
    *(short *)(param_2 + 0x10) = *(short *)(param_2 + 0x10) + -1;
    *(short *)(param_2 + 0x12) = *(short *)(param_2 + 0x12) + -1;
    CAkRandomInfo::FlagSetPlayed(param_2,sVar11);
    lVar10 = FUN_14315be00(param_2 + 0x18,sVar11);
    if (lVar10 == 0) {
      *(undefined2 *)(param_2 + 0x12) = 0;
    }
    else {
      CAkRandomInfo::FlagAsBlocked(param_2,sVar11);
      sVar4 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x18))();
      uVar5 = sVar4 - 1U;
      if (uVar9 < (ushort)(sVar4 - 1U)) {
        uVar5 = uVar9;
      }
      if ((uint)uVar5 < *(uint *)(param_2 + 0x20)) {
        uVar3 = **(undefined2 **)(param_2 + 0x18);
        AkArray<unsigned_short,unsigned_short,AkArrayAllocatorNoAlign<0>,AkGrowByPolicy_Proportional,AkAssignmentMovePolicy<unsigned_short>_>
        ::Erase(param_2 + 0x18,0);
        CAkRandomInfo::FlagAsUnBlocked(param_2,uVar3);
        cVar2 = CAkRandomInfo::IsFlagSetPlayed(param_2,uVar3);
        if (cVar2 == '\0') {
          iVar12 = (**(code **)(*plVar1 + 0x50))(plVar1,uVar3);
          *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + iVar12;
          *(short *)(param_2 + 0x10) = *(short *)(param_2 + 0x10) + 1;
        }
      }
    }
  }
  return sVar11;
}



// FUNCTION 14315e350 SelectSequentially body=224 status=ok
// SIG undefined SelectSequentially(void)

undefined2
CAkRanSeqCntr::SelectSequentially
          (longlong param_1,longlong param_2,undefined1 *param_3,short *param_4)

{
  short sVar1;
  int iVar2;
  
  *param_3 = 1;
  if (*(char *)(param_2 + 8) == '\0') {
    if (*(short *)(param_2 + 10) != 0) {
      *(short *)(param_2 + 10) = *(short *)(param_2 + 10) + -1;
      goto LAB_14315e411;
    }
    *(undefined2 *)(param_2 + 10) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    if (param_4 == (short *)0x0) goto LAB_14315e411;
    if ((*(byte *)(param_4 + 1) & 1) == 0) goto LAB_14315e402;
    if ((*(byte *)(param_4 + 1) & 2) != 0) goto LAB_14315e411;
    *param_4 = *param_4 + -1;
    sVar1 = *param_4;
  }
  else {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x18))();
    sVar1 = *(short *)(param_2 + 10);
    if (sVar1 + 1 != iVar2) {
      *(short *)(param_2 + 10) = sVar1 + 1;
      goto LAB_14315e411;
    }
    if ((*(byte *)(param_1 + 0x10d) & 0x20) != 0) {
      *(undefined1 *)(param_2 + 8) = 0;
      *(short *)(param_2 + 10) = sVar1 + -1;
      goto LAB_14315e411;
    }
    *(undefined2 *)(param_2 + 10) = 0;
    if (param_4 == (short *)0x0) goto LAB_14315e411;
    if ((*(byte *)(param_4 + 1) & 1) == 0) goto LAB_14315e402;
    if ((*(byte *)(param_4 + 1) & 2) != 0) goto LAB_14315e411;
    *param_4 = *param_4 + -1;
    sVar1 = *param_4;
  }
  if (sVar1 == 0) {
LAB_14315e402:
    *param_3 = 0;
    return 0;
  }
LAB_14315e411:
  return *(undefined2 *)(param_2 + 10);
}



// FUNCTION 14315e430 SerializeHistory body=382 status=ok
// SIG undefined SerializeHistory(void)

undefined8 CAkRanSeqCntr::SerializeHistory(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  byte local_res8 [8];
  uint local_res10 [2];
  undefined8 local_res18;
  
  uVar2 = 0;
  if ((char)*(byte *)(param_1 + 0x10d) < '\0') {
    local_res10[0] = (uint)(*(longlong *)(param_1 + 0xf0) != 0);
  }
  else {
    local_res10[0] = *(uint *)(param_1 + 0xe8);
  }
  local_res8[0] = *(byte *)(param_1 + 0x10d) & 7;
  cVar1 = (**(code **)*param_2)(param_2,local_res8,1,&local_res18);
  if ((cVar1 == '\0') ||
     (cVar1 = (**(code **)*param_2)(param_2,local_res10,4,local_res8), cVar1 == '\0')) {
    return 2;
  }
  if (*(longlong **)(param_1 + 0xd8) != (longlong *)0x0) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x18))();
  }
  if (*(longlong *)(param_1 + 0xf0) == 0) {
    plVar4 = *(longlong **)(param_1 + 0xe0);
    if (plVar4 != plVar4 + (ulonglong)*(uint *)(param_1 + 0xe8) * 2) {
      do {
        local_res18 = *(undefined8 *)(*plVar4 + 0x48);
        cVar1 = (**(code **)*param_2)(param_2,&local_res18,8,local_res8);
        if (cVar1 == '\0') {
          return 2;
        }
        uVar3 = (**(code **)(*(longlong *)plVar4[1] + 0x20))((longlong *)plVar4[1],param_2,uVar2);
        if ((int)uVar3 != 1) {
          return uVar3;
        }
        plVar4 = plVar4 + 2;
      } while (plVar4 != (longlong *)
                         ((ulonglong)*(uint *)(param_1 + 0xe8) * 0x10 +
                         *(longlong *)(param_1 + 0xe0)));
    }
  }
  else {
    cVar1 = (**(code **)*param_2)(param_2,&DAT_145ac7d58,8,local_res8);
    if (cVar1 == '\0') {
      return 2;
    }
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x20))
                      (*(longlong **)(param_1 + 0xf0),param_2,uVar2);
    if ((int)uVar3 != 1) {
      return uVar3;
    }
  }
  return 1;
}



// FUNCTION 14315e5b0 FUN_14315e5b0 body=349 status=ok
// SIG undefined FUN_14315e5b0(void)

ulonglong * FUN_14315e5b0(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  
  uVar1 = *(uint *)(param_1 + 1);
  iVar10 = 0;
  iVar12 = uVar1 - 1;
  if (-1 < iVar12) {
    do {
      iVar6 = (iVar12 - iVar10) / 2 + iVar10;
      puVar7 = (ulonglong *)((longlong)iVar6 * 0x10 + *param_1);
      uVar13 = *puVar7;
      if (param_2 < uVar13) {
        iVar12 = iVar6 + -1;
      }
      else {
        if (param_2 <= uVar13) {
          return puVar7;
        }
        iVar10 = iVar6 + 1;
      }
    } while (iVar10 <= iVar12);
  }
  lVar2 = *param_1;
  if (lVar2 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = (longlong)iVar10 * 0x10 + lVar2;
  }
  if (lVar9 == 0) {
    if ((*(uint *)((longlong)param_1 + 0xc) <= uVar1) &&
       (cVar5 = FUN_14315d350(param_1,1), cVar5 == '\0')) {
      return (ulonglong *)0x0;
    }
    if (*(uint *)((longlong)param_1 + 0xc) <= uVar1) {
      return (ulonglong *)0x0;
    }
    uVar1 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar1 + 1;
    puVar7 = (ulonglong *)((ulonglong)uVar1 * 0x10 + *param_1);
  }
  else {
    if (((*(uint *)((longlong)param_1 + 0xc) <= uVar1) &&
        (cVar5 = FUN_14315d350(param_1,1), cVar5 == '\0')) ||
       (*(uint *)((longlong)param_1 + 0xc) <= uVar1)) {
      return (ulonglong *)0x0;
    }
    lVar11 = *param_1;
    uVar13 = lVar9 - lVar2 >> 4 & 0xffffffff;
    puVar8 = (undefined8 *)((ulonglong)*(uint *)(param_1 + 1) * 0x10 + lVar11);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
    puVar3 = puVar8;
    if ((undefined8 *)(lVar11 + uVar13 * 0x10) < puVar8) {
      do {
        uVar4 = puVar3[-1];
        *puVar8 = puVar3[-2];
        puVar8[1] = uVar4;
        lVar11 = *param_1;
        puVar8 = puVar8 + -2;
        puVar3 = puVar3 + -2;
      } while ((undefined8 *)(lVar11 + uVar13 * 0x10) < puVar8);
    }
    puVar7 = (ulonglong *)(lVar11 + uVar13 * 0x10);
  }
  if (puVar7 != (ulonglong *)0x0) {
    *puVar7 = param_2;
  }
  return puVar7;
}



// FUNCTION 14315e740 SetInitialValues body=1049 status=ok
// SIG undefined SetInitialValues(void)

int CAkRanSeqCntr::SetInitialValues(longlong *param_1,uint *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  byte *pbVar9;
  void *pvVar10;
  longlong *plVar11;
  byte bVar12;
  byte bVar13;
  short sVar14;
  short sVar15;
  uint uVar16;
  longlong *plVar17;
  short sVar18;
  uint uStackX_c;
  uint *local_res10;
  undefined4 local_res18 [2];
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  iVar8 = (**(code **)(*param_1 + 0x80))();
  if (iVar8 != 2) {
    (**(code **)(*param_1 + 0x80))();
    AK::MemoryMgr::StartProfileThreadUsage((long)DAT_146b50b18);
    return 0x5b;
  }
  local_res10 = local_res10 + 1;
  iVar8 = FUN_143178ad0(param_1,&local_res10,local_res18,0);
  if (iVar8 == 1) {
    plVar17 = (longlong *)0x0;
    sVar15 = (short)*local_res10;
    sVar18 = *(short *)((longlong)local_res10 + 2);
    sVar14 = (short)local_res10[1];
    if (sVar15 == 0) {
      sVar15 = 0;
      sVar18 = 0;
      sVar14 = sVar15;
    }
    *(short *)((longlong)param_1 + 0x104) = sVar15;
    iVar8 = 1;
    *(short *)((longlong)param_1 + 0x106) = sVar18;
    *(short *)(param_1 + 0x21) = sVar14;
    uVar1 = *(undefined4 *)((longlong)local_res10 + 6);
    bVar7 = *(byte *)((longlong)param_1 + 0x10d);
    uVar2 = *(undefined4 *)((longlong)local_res10 + 10);
    uVar3 = *(undefined4 *)((longlong)local_res10 + 0xe);
    sVar15 = *(short *)((longlong)local_res10 + 0x12);
    uVar5 = local_res10[5];
    bVar12 = *(byte *)((longlong)local_res10 + 0x15);
    pbVar9 = (byte *)((longlong)local_res10 + 0x16);
    bVar4 = *(byte *)((longlong)local_res10 + 0x17);
    local_res10 = local_res10 + 6;
    if (*pbVar9 != (bVar7 & 7)) {
      bVar7 = (bVar7 ^ *pbVar9) & 7 ^ bVar7;
      *(byte *)((longlong)param_1 + 0x10d) = bVar7;
      if ((longlong *)param_1[0x1b] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x1b] + 0x10))();
        bVar7 = *(byte *)((longlong)param_1 + 0x10d);
      }
      plVar11 = plVar17;
      if ((bVar7 & 7) == 1) {
        pvVar10 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x18);
        if (pvVar10 != (void *)0x0) {
          plVar11 = (longlong *)FReferenceCollector::FReferenceCollector(pvVar10);
        }
      }
      else {
        pvVar10 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x18);
        if (pvVar10 != (void *)0x0) {
          plVar11 = (longlong *)FReferenceCollector::FReferenceCollector(pvVar10);
        }
      }
      param_1[0x1b] = (longlong)plVar11;
      if (plVar11 == (longlong *)0x0) {
        iVar8 = 2;
      }
      else {
        iVar8 = (**(code **)(*plVar11 + 8))();
        if (iVar8 != 1) {
          (**(code **)(*(longlong *)param_1[0x1b] + 0x10))();
          param_1[0x1b] = 0;
        }
      }
      ResetSpecificInfo(param_1);
    }
    if (iVar8 == 1) {
      *(undefined4 *)(param_1 + 0x1f) = uVar1;
      *(undefined4 *)((longlong)param_1 + 0xfc) = uVar2;
      *(undefined4 *)(param_1 + 0x20) = uVar3;
      if (*(short *)((longlong)param_1 + 0x10a) != sVar15) {
        *(short *)((longlong)param_1 + 0x10a) = sVar15;
        ResetSpecificInfo(param_1);
      }
      bVar7 = *(byte *)((longlong)param_1 + 0x10c);
      if ((bVar7 & 0xf) != (byte)uVar5) {
        *(byte *)((longlong)param_1 + 0x10c) = (bVar7 ^ (byte)uVar5) & 0xf ^ bVar7;
        ResetSpecificInfo(param_1);
        bVar7 = *(byte *)((longlong)param_1 + 0x10c);
      }
      if ((bVar7 >> 4 & 3) != bVar12) {
        *(byte *)((longlong)param_1 + 0x10c) = (bVar12 << 4 ^ bVar7) & 0x30 ^ bVar7;
        ResetSpecificInfo(param_1);
      }
      bVar12 = *(byte *)((longlong)param_1 + 0x10d);
      bVar7 = bVar4 >> 1 & 1;
      if ((bVar12 >> 4 & 1) != bVar7) {
        *(byte *)((longlong)param_1 + 0x10d) = bVar12 & 0xef | bVar7 << 4;
        ResetSpecificInfo(param_1);
        bVar12 = *(byte *)((longlong)param_1 + 0x10d);
      }
      bVar7 = (bVar4 << 3 ^ bVar12) & 0x20 ^ bVar12;
      bVar13 = bVar4 >> 3 & 1;
      *(byte *)((longlong)param_1 + 0x10d) = bVar7;
      if ((bVar12 >> 6 & 1) != bVar13) {
        *(byte *)((longlong)param_1 + 0x10d) = bVar7 & 0xbf | bVar13 << 6;
        ResetSpecificInfo(param_1);
        bVar7 = *(byte *)((longlong)param_1 + 0x10d);
      }
      if (bVar7 >> 7 != (bVar4 >> 4 & 1)) {
        *(byte *)((longlong)param_1 + 0x10d) = bVar7 & 0x7f | (bVar4 >> 4) << 7;
        ResetSpecificInfo(param_1);
      }
      iVar8 = 1;
      uVar5 = *local_res10;
      local_res10 = local_res10 + 1;
      if (uVar5 != 0) {
        pvVar10 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar5 << 3);
        param_1[0x19] = (longlong)pvVar10;
        if (pvVar10 == (void *)0x0) {
          return 0x34;
        }
        *(uint *)((longlong)param_1 + 0xd4) = uVar5;
        if (uVar5 != 0) {
          do {
            uVar6 = uStackX_c;
            uStackX_c = uStackX_c & 0xffffff00;
            uVar16 = *local_res10;
            local_res10 = local_res10 + 1;
            iVar8 = (**(code **)(*param_1 + 0x50))
                              (param_1,CONCAT44(uVar6,uVar16) & 0xffffff00ffffffff);
            if ((iVar8 != 1) && (iVar8 != 0xf)) break;
            uVar16 = (int)plVar17 + 1;
            plVar17 = (longlong *)(ulonglong)uVar16;
          } while (uVar16 < uVar5);
        }
      }
      if (iVar8 == 1) {
        iVar8 = SetPlaylistWithoutCheck(param_1,&local_res10,local_res18);
      }
    }
  }
  return iVar8;
}



// FUNCTION 14315eb60 SetPlaylistWithoutCheck body=412 status=ok
// SIG undefined SetPlaylistWithoutCheck(void)

int CAkRanSeqCntr::SetPlaylistWithoutCheck(longlong param_1,undefined8 *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  uVar9 = 0;
  uVar1 = *(ushort *)*param_2;
  *param_2 = (ushort *)*param_2 + 1;
  uVar7 = (uint)uVar1;
  if (uVar7 != 0) {
    do {
      puVar3 = (undefined4 *)*param_2;
      uVar2 = *puVar3;
      *param_2 = puVar3 + 1;
      iVar6 = puVar3[1];
      *param_2 = puVar3 + 2;
      bVar4 = *(byte *)(param_1 + 0x10d);
      if (iVar6 != 50000) {
        bVar4 = bVar4 | 8;
        *(byte *)(param_1 + 0x10d) = bVar4;
      }
      if (((bVar4 & 7) == 1) ||
         (cVar5 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x40))
                            (*(longlong **)(param_1 + 0xd8),uVar2), cVar5 == '\0')) {
        iVar6 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))
                          (*(longlong **)(param_1 + 0xd8),uVar2,iVar6);
        if (iVar6 == 1) {
          lVar8 = *(longlong *)(param_1 + 0xe0);
          if (lVar8 != (ulonglong)*(uint *)(param_1 + 0xe8) * 0x10 + lVar8) {
            do {
              (**(code **)(**(longlong **)(lVar8 + 8) + 8))();
              lVar8 = lVar8 + 0x10;
            } while (lVar8 != (ulonglong)*(uint *)(param_1 + 0xe8) * 0x10 +
                              *(longlong *)(param_1 + 0xe0));
          }
          *(undefined4 *)(param_1 + 0xe8) = 0;
          if (*(longlong **)(param_1 + 0xf0) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0xf0) + 8))();
            *(undefined8 *)(param_1 + 0xf0) = 0;
          }
          if ((*(byte *)(param_1 + 0x10e) & 1) != 0) {
            if (DAT_146b50b78 != 0) {
              FUN_14313fc30(DAT_146b50b78,param_1);
              FUN_14313fdc0(DAT_146b50b78,param_1);
            }
            CAkParameterNodeBase::Stop(param_1,0,0,0,4);
          }
        }
      }
      else {
        iVar6 = 0x23;
      }
      if ((iVar6 != 0xf) && (iVar6 != 1)) {
        return iVar6;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar7);
  }
  return 1;
}



// FUNCTION 14315ed00 TransitionMode body=11 status=ok
// SIG undefined TransitionMode(void)

byte CAkRanSeqCntr::TransitionMode(longlong param_1)

{
  return *(byte *)(param_1 + 0x10c) & 0xf;
}



// FUNCTION 14315ed10 TransitionTime body=329 status=ok
// SIG undefined TransitionTime(void)

float CAkRanSeqCntr::TransitionTime(longlong param_1,undefined8 param_2)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *(float *)(param_1 + 0xfc);
  fVar4 = 0.0;
  fVar2 = *(float *)(param_1 + 0x100) - fVar3;
  if (fVar2 != 0.0) {
    DAT_146b50b60 = DAT_146b50b60 * 0x5851f42d4c957f2d + 1;
    fVar3 = *(float *)(param_1 + 0xfc);
    fVar4 = (float)(uint)((ulonglong)DAT_146b50b60 >> 0x21) * 4.656613e-10 * fVar2;
  }
  fVar3 = fVar3 + fVar4 + *(float *)(param_1 + 0xf8);
  if ((*(uint **)(param_1 + 0x38) == (uint *)0x0) || ((**(uint **)(param_1 + 0x38) >> 0xf & 1) == 0)
     ) {
    cVar1 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0xf);
    if (cVar1 == '\0') goto LAB_14315ee3b;
  }
  fVar4 = 0.0;
  cVar1 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0xf);
  if (cVar1 != '\0') {
    fVar4 = (float)FUN_1431437a0(param_1 + 0x18,0xf);
  }
  if ((*(uint **)(param_1 + 0x38) != (uint *)0x0) && ((**(uint **)(param_1 + 0x38) >> 0xf & 1) != 0)
     ) {
    fVar2 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0xf,param_2);
    fVar4 = fVar4 + fVar2;
  }
  fVar3 = fVar3 + fVar4 * 1000.0;
LAB_14315ee3b:
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  return fVar3;
}



// FUNCTION 14315ee60 FUN_14315ee60 body=104 status=ok
// SIG undefined FUN_14315ee60(void)

void FUN_14315ee60(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 200);
  if (puVar1 != puVar1 + *(uint *)(param_1 + 0xd0)) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x140))((longlong *)*puVar1,param_2);
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined8 *)
                       (*(longlong *)(param_1 + 200) + (ulonglong)*(uint *)(param_1 + 0xd0) * 8));
  }
  return;
}



// FUNCTION 14315eed0 Unregister body=77 status=ok
// SIG undefined Unregister(void)

void CAkRanSeqCntr::Unregister(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  CAkParameterNodeBase::Unregister();
  lVar1 = FUN_14315c960(param_1 + 0xe0,param_2);
  if (lVar1 != 0) {
    (**(code **)(**(longlong **)(lVar1 + 8) + 8))();
    FUN_14315ef20(param_1 + 0xe0,param_2);
  }
  return;
}



// FUNCTION 14315ef20 FUN_14315ef20 body=171 status=ok
// SIG undefined FUN_14315ef20(void)

ulonglong FUN_14315ef20(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  ulonglong in_RAX;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
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
      puVar4 = (ulonglong *)((longlong)(int)uVar1 * 0x10 + *param_1);
      if (param_2 < *puVar4) {
        iVar5 = uVar1 - 1;
      }
      else {
        if (param_2 <= *puVar4) {
          puVar2 = (ulonglong *)(*param_1 + -0x10 + uVar8 * 0x10);
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



// FUNCTION 14315efd0 FUN_14315efd0 body=121 status=ok
// SIG undefined FUN_14315efd0(void)

void FUN_14315efd0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 200), plVar2 != plVar2 + *(uint *)(param_1 + 0xd0))) {
    do {
      plVar1 = (longlong *)*plVar2;
      if ((plVar1[0xf] != 0) && (0 < *(short *)(plVar1[0xf] + 0x50))) {
        (**(code **)(*plVar1 + 0x110))(plVar1,param_2);
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != (longlong *)
                       (*(longlong *)(param_1 + 200) + (ulonglong)*(uint *)(param_1 + 0xd0) * 8));
  }
  return;
}



// FUNCTION 14315f050 FUN_14315f050 body=239 status=ok
// SIG undefined FUN_14315f050(void)

undefined8 FUN_14315f050(longlong param_1,longlong param_2,undefined2 param_3)

{
  undefined2 uVar1;
  longlong *plVar2;
  short sVar3;
  int iVar4;
  longlong lVar5;
  ushort uVar6;
  
  plVar2 = *(longlong **)(param_1 + 0xd8);
  if (*(short *)(param_1 + 0x10a) != 0) {
    *(short *)(param_2 + 0x10) = *(short *)(param_2 + 0x10) + -1;
    lVar5 = FUN_14315be00(param_2 + 0x18,param_3);
    if (lVar5 == 0) {
      *(undefined2 *)(param_2 + 0x12) = 0;
      return 2;
    }
    CAkRandomInfo::FlagAsBlocked(param_2,param_3);
    iVar4 = (**(code **)(*plVar2 + 0x50))(plVar2,param_3);
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - iVar4;
    sVar3 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x18))();
    uVar6 = *(ushort *)(param_1 + 0x10a);
    if ((ushort)(sVar3 - 1U) <= *(ushort *)(param_1 + 0x10a)) {
      uVar6 = sVar3 - 1U;
    }
    if ((uint)uVar6 < *(uint *)(param_2 + 0x20)) {
      uVar1 = **(undefined2 **)(param_2 + 0x18);
      CAkRandomInfo::FlagAsUnBlocked(param_2,uVar1);
      iVar4 = (**(code **)(*plVar2 + 0x50))(plVar2,uVar1);
      *(short *)(param_2 + 0x10) = *(short *)(param_2 + 0x10) + 1;
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + iVar4;
      AkArray<unsigned_short,unsigned_short,AkArrayAllocatorNoAlign<0>,AkGrowByPolicy_Proportional,AkAssignmentMovePolicy<unsigned_short>_>
      ::Erase(param_2 + 0x18,0);
    }
  }
  return 1;
}



// FUNCTION 14315f140 FUN_14315f140 body=1141 status=ok
// SIG undefined FUN_14315f140(void)

undefined4 FUN_14315f140(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  int iVar14;
  undefined4 uVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined2 local_res10 [4];
  undefined4 local_res18 [2];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 local_78;
  
  plVar18 = (longlong *)0x0;
  if (*(int *)(param_2 + 0x180) == 0) {
    lVar16 = FUN_14315bed0(param_1,param_2);
    if (lVar16 == 0) {
      return 2;
    }
    plVar17 = (longlong *)
              CAkRanSeqCntr::GetNextToPlayContinuous
                        (param_1,*(undefined8 *)(param_2 + 0x10),local_res10,local_res18,lVar16 + 8,
                         lVar16 + 0x10);
    if (plVar17 != (longlong *)0x0) {
      uVar1 = *(uint *)(param_2 + 0x38);
      if (uVar1 < 0x20) {
        *(uint *)(param_2 + 0x7c) =
             *(uint *)(param_2 + 0x7c) & ~(uint)(1L << ((ulonglong)uVar1 & 0x3f));
        *(undefined2 *)(param_2 + 0x3c + (ulonglong)*(uint *)(param_2 + 0x38) * 2) = local_res10[0];
        *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + 1;
      }
      else {
        *(uint *)(param_2 + 0x38) = uVar1 + 1;
      }
    }
  }
  else {
    plVar17 = *(longlong **)(*(longlong *)(param_2 + 0x88) + 0x18);
    lVar16 = *plVar17 + ((ulonglong)*(uint *)(plVar17 + 1) * 5 + -5) * 8;
    plVar17 = (longlong *)
              CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,*(int *)(param_2 + 0x180),0);
    *(undefined4 *)(param_2 + 0x180) = 0;
  }
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x88) + 0x18);
  if (lVar2 != 0) {
    CAkContinuationList::AddRef(lVar2);
  }
  if (plVar17 == (longlong *)0x0) {
    plVar4 = *(longlong **)(*(longlong *)(param_2 + 0x88) + 0x18);
    CAkContinueListItem::~CAkContinueListItem
              (*plVar4 + ((ulonglong)*(uint *)(plVar4 + 1) * 5 + -5) * 8);
    *(int *)(plVar4 + 1) = (int)plVar4[1] + -1;
    uVar15 = CAkParameterNode::PlayAndContinueAlternate(param_1,param_2);
  }
  else {
    plVar18 = (longlong *)
              CAkRanSeqCntr::GetNextToPlayContinuous
                        (param_1,*(undefined8 *)(param_2 + 0x10),local_res10,local_res18,lVar16 + 8,
                         lVar16 + 0x10);
    lVar16 = *(longlong *)(param_2 + 0x88);
    if (plVar18 == (longlong *)0x0) {
      plVar4 = *(longlong **)(lVar16 + 0x18);
      CAkContinueListItem::~CAkContinueListItem
                (*plVar4 + ((ulonglong)*(uint *)(plVar4 + 1) * 5 + -5) * 8);
      *(int *)(plVar4 + 1) = (int)plVar4[1] + -1;
      uVar15 = FUN_14315d810(plVar17,param_2);
    }
    else {
      lVar3 = *(longlong *)(lVar16 + 0x18);
      *(undefined8 *)(lVar16 + 0x18) = 0;
      if (lVar3 != 0) {
        CAkContinuationList::Release();
      }
      local_78 = *(undefined8 *)(param_2 + 0x78);
      uVar5 = *(undefined8 *)(param_2 + 0x38);
      uVar6 = *(undefined8 *)(param_2 + 0x40);
      uVar7 = *(undefined8 *)(param_2 + 0x48);
      uVar8 = *(undefined8 *)(param_2 + 0x50);
      uVar9 = *(undefined8 *)(param_2 + 0x58);
      uVar10 = *(undefined8 *)(param_2 + 0x60);
      uVar11 = *(undefined8 *)(param_2 + 0x68);
      uVar12 = *(undefined8 *)(param_2 + 0x70);
      iVar14 = FUN_14315d810(plVar17,param_2);
      if (iVar14 == 1) {
        *(byte *)(param_2 + 0x188) = *(byte *)(param_2 + 0x188) & 0xfd;
      }
      *(undefined8 *)(param_2 + 0x38) = uVar5;
      *(undefined8 *)(param_2 + 0x40) = uVar6;
      *(undefined8 *)(param_2 + 0x48) = uVar7;
      *(undefined8 *)(param_2 + 0x50) = uVar8;
      *(undefined8 *)(param_2 + 0x58) = uVar9;
      *(undefined8 *)(param_2 + 0x60) = uVar10;
      *(undefined8 *)(param_2 + 0x68) = uVar11;
      *(undefined8 *)(param_2 + 0x70) = uVar12;
      *(undefined4 *)(param_2 + 0x78) = (undefined4)local_78;
      *(undefined4 *)(param_2 + 0x7c) = local_78._4_4_;
      *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + -1;
      lVar16 = *(longlong *)(param_2 + 0x88);
      if (lVar2 != 0) {
        CAkContinuationList::AddRef(lVar2);
      }
      lVar3 = *(longlong *)(lVar16 + 0x18);
      *(longlong *)(lVar16 + 0x18) = lVar2;
      if (lVar3 != 0) {
        CAkContinuationList::Release();
      }
      *(undefined4 *)(param_2 + 0x180) = local_res18[0];
      uVar1 = *(uint *)(param_2 + 0x38);
      if (uVar1 < 0x20) {
        *(uint *)(param_2 + 0x7c) =
             *(uint *)(param_2 + 0x7c) & ~(uint)(1L << ((ulonglong)uVar1 & 0x3f));
        *(undefined2 *)(param_2 + 0x3c + (ulonglong)*(uint *)(param_2 + 0x38) * 2) = local_res10[0];
        *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + 1;
      }
      else {
        *(uint *)(param_2 + 0x38) = uVar1 + 1;
      }
      local_b8 = *(undefined8 *)(param_2 + 0x10);
      local_b0 = *(undefined4 *)(param_2 + 0x34);
      local_a8 = 0;
      local_a0 = 0xff;
      local_98 = 0xff;
      local_90 = 0;
      if (*(float *)(param_1 + 0x100) - *(float *)(param_1 + 0xfc) != 0.0) {
        DAT_146b50b60 = DAT_146b50b60 * 0x5851f42d4c957f2d + 1;
      }
      if (((*(uint **)(param_1 + 0x38) != (uint *)0x0) &&
          ((**(uint **)(param_1 + 0x38) >> 0xf & 1) != 0)) ||
         (cVar13 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0xf),
         cVar13 != '\0')) {
        cVar13 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0xf);
        if (cVar13 != '\0') {
          FUN_1431437a0(param_1 + 0x18,0xf);
        }
        if ((*(uint **)(param_1 + 0x38) != (uint *)0x0) &&
           ((**(uint **)(param_1 + 0x38) >> 0xf & 1) != 0)) {
          FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0xf,&local_b8);
        }
      }
      *(undefined8 *)(param_2 + 0x18) = 0;
      uVar15 = FUN_1431a1440(param_1);
    }
  }
  if (lVar2 != 0) {
    CAkContinuationList::Release(lVar2);
  }
  if (plVar18 != (longlong *)0x0) {
    (**(code **)(*plVar18 + 0x10))(plVar18);
  }
  if (plVar17 != (longlong *)0x0) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
  }
  return uVar15;
}



// FUNCTION 14315f5c0 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkAcousticTexture::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ac8040;
  CAkIndexable::~CAkIndexable();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14315f600 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
CAkVirtualAcoustics::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ac8040;
  CAkIndexable::~CAkIndexable();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14315f640 FUN_14315f640 body=294 status=ok
// SIG undefined FUN_14315f640(void)

undefined8 FUN_14315f640(undefined4 param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  LPCRITICAL_SECTION lpCriticalSection;
  
  uVar8 = 1;
  lVar6 = CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(DAT_146b50af8 + 0x340,param_1);
  if (lVar6 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
    puVar7 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x38);
    if (puVar7 == (undefined8 *)0x0) {
      uVar8 = 2;
    }
    else {
      CAkIndexable::CAkIndexable(puVar7);
      *puVar7 = &PTR__scalar_deleting_destructor__145ac8070;
      puVar7[3] = 0;
      puVar7[4] = 0;
      puVar7[5] = 0;
      *(undefined4 *)(puVar7 + 6) = 0;
      lVar6 = DAT_146b50af8;
      lpCriticalSection = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0x340);
      EnterCriticalSection(lpCriticalSection);
      cVar5 = FUN_14313b140(lVar6 + 0x368);
      if (cVar5 != '\0') {
        uVar1 = (ulonglong)*(uint *)(puVar7 + 2) % (ulonglong)*(uint *)(lVar6 + 0x370);
        puVar7[1] = *(undefined8 *)(*(longlong *)(lVar6 + 0x368) + uVar1 * 8);
        *(undefined8 **)(*(longlong *)(lVar6 + 0x368) + uVar1 * 8) = puVar7;
        *(int *)(lVar6 + 0x378) = *(int *)(lVar6 + 0x378) + 1;
      }
      LeaveCriticalSection(lpCriticalSection);
      uVar2 = param_2[1];
      uVar3 = param_2[2];
      uVar4 = param_2[3];
      *(undefined4 *)(puVar7 + 3) = *param_2;
      *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar2;
      *(undefined4 *)(puVar7 + 4) = uVar3;
      *(undefined4 *)((longlong)puVar7 + 0x24) = uVar4;
      puVar7[5] = *(undefined8 *)(param_2 + 4);
      *(undefined4 *)(puVar7 + 6) = param_2[6];
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  }
  return uVar8;
}



// FUNCTION 14315f770 AddRef body=77 status=ok
// SIG undefined AddRef(void)

int CAkVirtualAcoustics::AddRef(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = DAT_146b50af8;
  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_146b50af8 + 0x340));
  iVar2 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x340));
  return iVar2;
}



// FUNCTION 14315f7c0 FUN_14315f7c0 body=44 status=ok
// SIG undefined FUN_14315f7c0(void)

longlong FUN_14315f7c0(undefined4 param_1)

{
  longlong lVar1;
  
  lVar1 = CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(DAT_146b50af8 + 0x340,param_1);
  if (lVar1 != 0) {
    return lVar1 + 0x18;
  }
  return 0;
}



// FUNCTION 14315f7f0 Release body=239 status=ok
// SIG undefined Release(void)

undefined4 CAkVirtualAcoustics::Release(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  long lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lVar8 = DAT_146b50af8;
  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_146b50af8 + 0x340));
  piVar1 = (int *)((longlong)param_1 + 0x14);
  *piVar1 = *piVar1 + -1;
  lVar9 = DAT_146b50af8;
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x14);
  if (*piVar1 == 0) {
    uVar4 = *(uint *)(param_1 + 2);
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0x340);
    EnterCriticalSection(lpCriticalSection);
    if (*(uint *)(lVar9 + 0x370) != 0) {
      plVar2 = (longlong *)
               (*(longlong *)(lVar9 + 0x368) +
               ((ulonglong)uVar4 % (ulonglong)*(uint *)(lVar9 + 0x370)) * 8);
      lVar10 = *plVar2;
      lVar6 = 0;
      while (lVar5 = lVar10, lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x10) == uVar4) {
          if (lVar6 == 0) {
            *plVar2 = *(longlong *)(lVar5 + 8);
          }
          else {
            *(longlong *)(lVar6 + 8) = *(longlong *)(lVar5 + 8);
          }
          *(int *)(lVar9 + 0x378) = *(int *)(lVar9 + 0x378) + -1;
          break;
        }
        lVar6 = lVar5;
        lVar10 = *(longlong *)(lVar5 + 8);
      }
    }
    LeaveCriticalSection(lpCriticalSection);
    lVar7 = g_DefaultPoolId;
    (**(code **)*param_1)(param_1,0);
    AK::MemoryMgr::Free(lVar7,param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x340));
  return uVar3;
}



// FUNCTION 14315f940 AddLimiter body=39 status=ok
// SIG undefined AddLimiter(void)

void CAkURenderer::AddLimiter(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14315f970(&DAT_146b50fe0,*(undefined8 *)(param_1 + 0x20));
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = param_1;
  }
  return;
}



// FUNCTION 14315f970 FUN_14315f970 body=330 status=ok
// SIG undefined FUN_14315f970(void)

longlong FUN_14315f970(longlong *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  
  uVar2 = *(uint *)(param_1 + 1);
  iVar9 = 0;
  iVar10 = uVar2 - 1;
  if (-1 < iVar10) {
    lVar11 = *param_1;
    do {
      iVar5 = (iVar10 - iVar9) / 2 + iVar9;
      lVar7 = lVar11 + (longlong)iVar5 * 8;
      uVar3 = *(ulonglong *)(*(longlong *)(lVar11 + (longlong)iVar5 * 8) + 0x20);
      if (uVar3 < param_2) {
        iVar10 = iVar5 + -1;
      }
      else {
        if (uVar3 <= param_2) goto LAB_14315f9e6;
        iVar9 = iVar5 + 1;
      }
    } while (iVar9 <= iVar10);
  }
  lVar11 = *param_1;
  if (lVar11 == 0) {
    lVar7 = 0;
    lVar11 = 0;
  }
  else {
    lVar7 = lVar11 + (longlong)iVar9 * 8;
  }
LAB_14315f9e6:
  if (lVar7 == 0) {
    if ((*(uint *)((longlong)param_1 + 0xc) <= uVar2) &&
       (cVar4 = FUN_143134440(param_1,1), cVar4 == '\0')) {
      return 0;
    }
    if (uVar2 < *(uint *)((longlong)param_1 + 0xc)) {
      uVar2 = *(uint *)(param_1 + 1);
      *(uint *)(param_1 + 1) = uVar2 + 1;
      return *param_1 + (ulonglong)uVar2 * 8;
    }
  }
  else {
    if ((*(uint *)((longlong)param_1 + 0xc) <= uVar2) &&
       (cVar4 = FUN_143134440(param_1,1), cVar4 == '\0')) {
      return 0;
    }
    if (uVar2 < *(uint *)((longlong)param_1 + 0xc)) {
      uVar2 = *(uint *)(param_1 + 1);
      lVar8 = *param_1;
      *(uint *)(param_1 + 1) = uVar2 + 1;
      puVar6 = (undefined8 *)(lVar8 + (ulonglong)uVar2 * 8);
      lVar11 = (lVar7 - lVar11 >> 3 & 0xffffffffU) * 8;
      if ((undefined8 *)(lVar11 + lVar8) < puVar6) {
        do {
          puVar1 = puVar6 + -1;
          *puVar6 = puVar6[-1];
          lVar8 = *param_1;
          puVar6 = puVar1;
        } while ((undefined8 *)(lVar8 + lVar11) < puVar1);
      }
      return lVar11 + lVar8;
    }
  }
  return 0;
}



// FUNCTION 14315fac0 AddToActiveNodes body=101 status=ok
// SIG undefined AddToActiveNodes(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CAkURenderer::AddToActiveNodes(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_146b50f88;
  do {
    if (lVar1 == 0) {
LAB_14315fae5:
      *(undefined8 *)(param_1 + 0x40) = 0;
      if (DAT_146b50f88 != 0) {
        *(longlong *)(DAT_146b50f80 + 0x40) = param_1;
        _DAT_146b50f78 = _DAT_146b50f78 + 1;
        DAT_146b50f80 = param_1;
        return;
      }
      _DAT_146b50f78 = _DAT_146b50f78 + 1;
      DAT_146b50f88 = param_1;
      DAT_146b50f80 = param_1;
      return;
    }
    if (lVar1 == param_1) {
      if (lVar1 != 0) {
        return;
      }
      goto LAB_14315fae5;
    }
    lVar1 = *(longlong *)(lVar1 + 0x40);
  } while( true );
}



// FUNCTION 14315fb30 CheckOverRatio body=100 status=ok
// SIG undefined CheckOverRatio(void)

ulonglong CheckOverRatio(long param_1,float param_2)

{
  ulonglong in_RAX;
  ulonglong extraout_RAX;
  ulonglong local_res18 [2];
  
  if (param_2 < 1.0) {
    local_res18[0] = 0;
    AK::MemoryMgr::GetPoolMemoryUsed(param_1,(PoolMemInfo *)local_res18);
    in_RAX = extraout_RAX;
    if ((int)local_res18[0] != 0) {
      return (ulonglong)
             CONCAT31((int3)(local_res18[0] >> 8),
                      param_2 < (float)(local_res18[0] >> 0x20) /
                                (float)(local_res18[0] & 0xffffffff));
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14315fba0 FUN_14315fba0 body=142 status=ok
// SIG undefined FUN_14315fba0(void)

void FUN_14315fba0(longlong *param_1,longlong *param_2,char param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  if (param_2 != (longlong *)0x0) {
    if (param_3 == '\0') {
      *(byte *)((longlong)param_2 + 0x295) = *(byte *)((longlong)param_2 + 0x295) | 0x10;
    }
    (**(code **)(param_2[3] + 0x38))(param_2 + 3,1);
    lVar1 = g_DefaultPoolId;
    (**(code **)(*param_2 + 8))(param_2,0);
    AK::MemoryMgr::Free(lVar1,param_2);
    return;
  }
  if (param_3 != '\0') {
    local_18 = 0;
    local_28[0] = 0;
    local_10 = 1;
    local_c = 0x100;
    local_20 = param_4;
    (**(code **)(*param_1 + 0x120))(0,local_28);
  }
  return;
}



// FUNCTION 14315fc30 FUN_14315fc30 body=7 status=ok
// SIG undefined FUN_14315fc30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14315fc30(void)

{
  _DAT_146b50f58 = _DAT_146b50f58 + -1;
  return;
}



// FUNCTION 14315fc40 FUN_14315fc40 body=7 status=ok
// SIG undefined FUN_14315fc40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14315fc40(void)

{
  _DAT_146b50f54 = _DAT_146b50f54 + -1;
  return;
}



// FUNCTION 14315fc50 EnqueueContext body=70 status=ok
// SIG undefined EnqueueContext(void)

void CAkURenderer::EnqueueContext(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  if (DAT_146b50f70 == 0) {
    DAT_146b50f60 = DAT_146b50f60 + 1;
    DAT_146b50f70 = param_1;
    DAT_146b50f68 = param_1;
    return;
  }
  *(longlong *)(DAT_146b50f68 + 0x1b8) = param_1;
  DAT_146b50f60 = DAT_146b50f60 + 1;
  DAT_146b50f68 = param_1;
  return;
}



// FUNCTION 14315fca0 FUN_14315fca0 body=749 status=ok
// SIG undefined FUN_14315fca0(void)

void FUN_14315fca0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50fb8);
  puVar7 = (undefined8 *)0x0;
  if (DAT_146b50fa0 == (undefined8 *)0x0) {
    puVar5 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x20);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = DAT_146b50fa0;
      DAT_146b50fa0 = puVar5;
      goto LAB_14315fd02;
    }
  }
  else {
LAB_14315fd02:
    puVar5 = DAT_146b50fa0;
    if (DAT_146b50f98 != (undefined8 *)0x0) {
      *DAT_146b50f98 = DAT_146b50fa0;
      puVar5 = DAT_146b50f90;
    }
    DAT_146b50f90 = puVar5;
    DAT_146b50f98 = DAT_146b50fa0;
    puVar5 = (undefined8 *)*DAT_146b50fa0;
    *DAT_146b50fa0 = 0;
    DAT_146b50fa0 = puVar5;
    DAT_146b50fb4 = DAT_146b50fb4 + 1;
    puVar5 = DAT_146b50f98 + 1;
    if (DAT_146b50f98 + 1 != (undefined8 *)0x0) goto LAB_14315ff5e;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50fb8);
  puVar5 = DAT_146b50f90;
  while (DAT_146b50f90 = puVar5, DAT_146b50fb4 != 0) {
    FUN_14317e8d0(puVar5[1],*(undefined4 *)(puVar5 + 2),*(undefined4 *)((longlong)puVar5 + 0x14),
                  *(undefined4 *)(puVar5 + 3));
    if (*(int *)(puVar5 + 2) == 4) {
      puVar6 = puVar7;
      for (puVar2 = DAT_146b50f70; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)puVar2[0x37])
      {
        if (puVar2 == (undefined8 *)puVar5[1]) {
          if (puVar2 != (undefined8 *)0x0) {
            puVar4 = (undefined8 *)puVar2[0x37];
            if (puVar2 != DAT_146b50f70) {
              puVar6[0x37] = (undefined8 *)puVar2[0x37];
              puVar4 = DAT_146b50f70;
            }
            DAT_146b50f70 = puVar4;
            if (puVar2 == DAT_146b50f68) {
              DAT_146b50f68 = puVar6;
            }
            DAT_146b50f60 = DAT_146b50f60 + -1;
          }
          break;
        }
        puVar6 = puVar2;
      }
      plVar1 = (longlong *)puVar5[1];
      CAkLEngineCmds::DequeuePBI(plVar1);
      (**(code **)(plVar1[3] + 0x38))(plVar1 + 3,0);
      lVar3 = g_DefaultPoolId;
      (**(code **)(*plVar1 + 8))(plVar1,0);
      AK::MemoryMgr::Free(lVar3,plVar1);
    }
    puVar5 = DAT_146b50f90;
    if (DAT_146b50f90 != (undefined8 *)0x0) {
      if (DAT_146b50f90 == DAT_146b50f98) {
        DAT_146b50f98 = puVar7;
      }
      if ((DAT_146b50f90 < DAT_146b50fa8) ||
         (DAT_146b50fa8 + (ulonglong)DAT_146b50fb0 * 4 <= DAT_146b50f90)) {
        DAT_146b50f90 = (undefined8 *)*DAT_146b50f90;
        AK::MemoryMgr::Free(g_DefaultPoolId,puVar5);
      }
      else {
        puVar6 = (undefined8 *)*DAT_146b50f90;
        *DAT_146b50f90 = DAT_146b50fa0;
        DAT_146b50f90 = puVar6;
        DAT_146b50fa0 = puVar5;
      }
      DAT_146b50fb4 = DAT_146b50fb4 + -1;
      puVar5 = DAT_146b50f90;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50fb8);
  if (DAT_146b50fa0 == (undefined8 *)0x0) {
    puVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x20);
    puVar5 = puVar7;
    if (puVar6 == (undefined8 *)0x0) goto LAB_14315ff5e;
    *puVar6 = DAT_146b50fa0;
    DAT_146b50fa0 = puVar6;
  }
  puVar7 = DAT_146b50fa0;
  if (DAT_146b50f98 != (undefined8 *)0x0) {
    *DAT_146b50f98 = DAT_146b50fa0;
    puVar7 = DAT_146b50f90;
  }
  DAT_146b50f90 = puVar7;
  DAT_146b50f98 = DAT_146b50fa0;
  puVar7 = (undefined8 *)*DAT_146b50fa0;
  *DAT_146b50fa0 = 0;
  DAT_146b50fa0 = puVar7;
  DAT_146b50fb4 = DAT_146b50fb4 + 1;
  puVar5 = DAT_146b50f98 + 1;
LAB_14315ff5e:
  *(undefined4 *)(puVar5 + 2) = param_4;
  *puVar5 = param_1;
  *(undefined4 *)(puVar5 + 1) = param_2;
  *(undefined4 *)((longlong)puVar5 + 0xc) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00014315ff86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50fb8);
  return;
}



// FUNCTION 14315ff90 FUN_14315ff90 body=472 status=ok
// SIG undefined FUN_14315ff90(void)

void FUN_14315ff90(void)

{
  longlong lVar1;
  longlong in_stack_00000028;
  longlong local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined8 local_70;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x38) < DAT_146b51024) &&
     (_Init_thread_header(&DAT_146b51024), DAT_146b51024 == -1)) {
    DAT_146b51020 = AK::SoundEngine::GetIDFromString("FirstOrThirdPerson");
    _Init_thread_footer(&DAT_146b51024);
  }
  if ((*(int *)(lVar1 + 0x38) < DAT_146b5102c) &&
     (_Init_thread_header(&DAT_146b5102c), DAT_146b5102c == -1)) {
    DAT_146b51028 = AK::SoundEngine::GetIDFromString("FirstPerson");
    _Init_thread_footer(&DAT_146b5102c);
  }
  if ((g_pSwitchMgr != (CAkSwitchMgr *)0x0) && (in_stack_00000028 != 0)) {
    local_80 = 0xff;
    local_90 = 0;
    local_88 = 0;
    local_70 = 0;
    local_78 = 0xff;
    local_98 = in_stack_00000028;
    FUN_14314a760(g_pSwitchMgr,DAT_146b51020,&local_98);
  }
  return;
}



// FUNCTION 143160170 FUN_143160170 body=993 status=ok
// SIG undefined FUN_143160170(void)

undefined4 FUN_143160170(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  char cVar6;
  uint *puVar7;
  longlong *plVar8;
  void *pvVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  uint uVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined4 uVar19;
  float fVar20;
  longlong *local_58;
  undefined8 uStack_50;
  uint local_48;
  
  plVar14 = (longlong *)0x0;
  uVar10 = 0;
  local_48 = 0;
  plVar16 = plVar14;
  plVar18 = plVar14;
  for (lVar3 = DAT_146b50f70; uVar15 = (uint)plVar16, lVar3 != 0;
      lVar3 = *(longlong *)(lVar3 + 0x1b8)) {
    uVar10 = 0;
    uVar13 = *(ulonglong *)(*(longlong *)(lVar3 + 0x30) + 0x48);
    if (uVar15 == 0) {
LAB_143160223:
      puVar7 = &DAT_145ac8110;
      do {
        uVar1 = *puVar7;
        uVar12 = (ulonglong)uVar1;
        if (uVar15 < uVar1) {
          if (uVar1 != 0) {
            local_58 = (longlong *)0x0;
            uStack_50 = 0;
            cVar6 = FUN_143134440(&local_58);
            plVar8 = local_58;
            if (cVar6 == '\0') {
              plVar8 = plVar18;
              if (local_58 != (longlong *)0x0) {
                AK::MemoryMgr::Free(g_DefaultPoolId,local_58);
              }
            }
            else {
              plVar14 = (longlong *)(uStack_50 & 0xffffffff);
              if (uVar1 != 0) {
                do {
                  if ((uint)plVar14 < uStack_50._4_4_) {
                    plVar17 = local_58 + (longlong)plVar14;
                    plVar14 = (longlong *)(ulonglong)((uint)plVar14 + 1);
                    if (plVar17 != (longlong *)0x0) {
                      *plVar17 = 0;
                    }
                  }
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              plVar17 = plVar18;
              if (uVar15 != 0) {
                do {
                  plVar5 = (longlong *)*plVar17;
                  while (plVar5 != (longlong *)0x0) {
                    plVar2 = (longlong *)*plVar5;
                    *plVar5 = local_58[(ulonglong)*(uint *)(plVar5 + 1) % (ulonglong)plVar14];
                    local_58[(ulonglong)*(uint *)(plVar5 + 1) % (ulonglong)plVar14] =
                         (longlong)plVar5;
                    plVar5 = plVar2;
                  }
                  plVar16 = (longlong *)((longlong)plVar16 + -1);
                  plVar17 = plVar17 + 1;
                } while (plVar16 != (longlong *)0x0);
              }
              plVar16 = plVar14;
              if (plVar18 != (longlong *)0x0) {
                AK::MemoryMgr::Free(g_DefaultPoolId,plVar18);
              }
            }
            plVar14 = (longlong *)(ulonglong)local_48;
            plVar18 = plVar8;
          }
          break;
        }
        uVar10 = uVar10 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar10 < 0x1b);
    }
    else {
      for (puVar11 = (undefined8 *)plVar18[(uVar13 & 0xffffffff) % (ulonglong)plVar16];
          puVar11 != (undefined8 *)0x0; puVar11 = (undefined8 *)*puVar11) {
        if (puVar11[1] == uVar13) {
          fVar20 = *(float *)(lVar3 + 400);
          if (*(float *)(lVar3 + 400) <= *(float *)(puVar11 + 2)) {
            fVar20 = *(float *)(puVar11 + 2);
          }
          *(float *)(puVar11 + 2) = fVar20;
          goto LAB_14316039d;
        }
      }
      if ((uVar15 == 0) || (0.9 < (float)(longlong)plVar14 / (float)(longlong)plVar16))
      goto LAB_143160223;
    }
    if ((int)plVar16 == 0) {
LAB_143160404:
      uVar19 = 0x34;
      goto LAB_1431604cd;
    }
    uVar12 = (uVar13 & 0xffffffff) % (ulonglong)plVar16;
    for (puVar11 = (undefined8 *)plVar18[uVar12]; puVar11 != (undefined8 *)0x0;
        puVar11 = (undefined8 *)*puVar11) {
      if (puVar11[1] == uVar13) {
        plVar8 = puVar11 + 2;
        if (plVar8 != (longlong *)0x0) goto LAB_143160392;
        break;
      }
    }
    plVar8 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x18);
    if (plVar8 != (longlong *)0x0) {
      local_48 = (int)plVar14 + 1;
      plVar14 = (longlong *)(ulonglong)local_48;
      *plVar8 = plVar18[uVar12];
      plVar8[1] = uVar13;
      plVar18[uVar12] = (longlong)plVar8;
      plVar8 = plVar8 + 2;
    }
    if (plVar8 == (longlong *)0x0) goto LAB_143160404;
LAB_143160392:
    *(undefined4 *)plVar8 = *(undefined4 *)(lVar3 + 400);
LAB_14316039d:
    uVar10 = (uint)plVar14;
  }
  if ((void *)*param_1 != (void *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*param_1);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  if (uVar10 == 0) {
LAB_143160414:
    uVar13 = 0;
    uVar19 = 1;
    if (uVar15 == 0) goto LAB_143160506;
    plVar14 = (longlong *)*plVar18;
    while (plVar14 == (longlong *)0x0) {
      uVar10 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar10;
      if (uVar15 <= uVar10) goto LAB_1431604cd;
      plVar14 = (longlong *)plVar18[uVar13];
    }
    do {
      while( true ) {
        local_58 = (longlong *)plVar14[1];
        uVar10 = *(uint *)(param_1 + 1);
        uStack_50 = CONCAT44(uStack_50._4_4_,(int)plVar14[2]);
        if ((uVar10 < *(uint *)((longlong)param_1 + 0xc)) ||
           ((cVar6 = FUN_143160760(param_1,0x20), cVar6 != '\0' &&
            (uVar10 < *(uint *)((longlong)param_1 + 0xc))))) {
          uVar10 = *(uint *)(param_1 + 1);
          *(uint *)(param_1 + 1) = uVar10 + 1;
          puVar11 = (undefined8 *)((ulonglong)uVar10 * 0x10 + *param_1);
          if (puVar11 != (undefined8 *)0x0) {
            *puVar11 = local_58;
            puVar11[1] = uStack_50;
          }
        }
        plVar14 = (longlong *)*plVar14;
        if (plVar14 != (longlong *)0x0) break;
        do {
          uVar10 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar10;
          if (uVar15 <= uVar10) goto LAB_1431604c5;
          plVar14 = (longlong *)plVar18[uVar13];
        } while (plVar14 == (longlong *)0x0);
      }
LAB_1431604c5:
    } while (plVar14 != (longlong *)0x0);
  }
  else {
    pvVar9 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar10 << 4);
    *param_1 = (longlong)pvVar9;
    if (pvVar9 != (void *)0x0) {
      *(uint *)((longlong)param_1 + 0xc) = uVar10;
      goto LAB_143160414;
    }
    uVar19 = 0x34;
  }
LAB_1431604cd:
  plVar14 = plVar18;
  if ((int)plVar16 != 0) {
    do {
      puVar11 = (undefined8 *)*plVar14;
      while (puVar11 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)*puVar11;
        AK::MemoryMgr::Free(g_DefaultPoolId,puVar11);
        puVar11 = puVar4;
      }
      *plVar14 = 0;
      plVar16 = (longlong *)((longlong)plVar16 + -1);
      plVar14 = plVar14 + 1;
    } while (plVar16 != (longlong *)0x0);
  }
LAB_143160506:
  if (plVar18 != (longlong *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,plVar18);
  }
  return uVar19;
}



// FUNCTION 143160560 FUN_143160560 body=143 status=ok
// SIG undefined FUN_143160560(void)

float FUN_143160560(__uint64 param_1)

{
  CAkRegisteredObj *pCVar1;
  longlong lVar2;
  long lVar3;
  CAkRegisteredObj *pCVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = -1.0;
  pCVar4 = CAkRegistryMgr::GetObjAndAddref(g_pRegistryMgr,param_1);
  lVar2 = DAT_146b50f70;
  if (pCVar4 != (CAkRegisteredObj *)0x0) {
    for (; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x1b8)) {
      fVar6 = fVar5;
      if ((*(CAkRegisteredObj **)(lVar2 + 0x30) == pCVar4) &&
         (fVar6 = *(float *)(lVar2 + 400), *(float *)(lVar2 + 400) <= fVar5)) {
        fVar6 = fVar5;
      }
      fVar5 = fVar6;
    }
    pCVar1 = pCVar4 + 0x50;
    *(int *)pCVar1 = *(int *)pCVar1 + -1;
    lVar3 = g_DefaultPoolId;
    if (*(int *)pCVar1 == 0) {
      (*(code *)**(undefined8 **)pCVar4)(pCVar4,0);
      AK::MemoryMgr::Free(lVar3,pCVar4);
    }
  }
  return fVar5;
}



// FUNCTION 1431605f0 FUN_1431605f0 body=212 status=ok
// SIG undefined FUN_1431605f0(void)

undefined8 FUN_1431605f0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  
  puVar2 = *(undefined8 **)(param_2 + 8);
  fVar5 = 1e+10;
  uVar7 = 0;
  if (puVar2 != puVar2 + *(uint *)(param_2 + 0x10)) {
    do {
      lVar1 = CAkListener::GetListenerData(*puVar2);
      if ((lVar1 != 0) && (uVar3 = 0, fVar6 = fVar5, (short)param_1[3] != 0)) {
        do {
          uVar4 = AkMath::Distance(lVar1 + 0x78,*param_1 + 0x18 + (ulonglong)uVar3 * 0x30);
          uVar7 = (undefined4)((ulonglong)uVar4 >> 0x20);
          fVar5 = (float)uVar4 / *(float *)(lVar1 + 0x84);
          uVar3 = uVar3 + 1;
          if (fVar6 <= fVar5) {
            fVar5 = fVar6;
          }
          fVar6 = fVar5;
        } while (uVar3 < *(ushort *)(param_1 + 3));
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != (undefined8 *)
                       (*(longlong *)(param_2 + 8) + (ulonglong)*(uint *)(param_2 + 0x10) * 8));
  }
  return CONCAT44(uVar7,fVar5);
}



// FUNCTION 1431606d0 FUN_1431606d0 body=135 status=ok
// SIG undefined FUN_1431606d0(void)

undefined8 FUN_1431606d0(longlong *param_1,longlong param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  undefined1 local_res18 [16];
  
  iVar2 = CAkParameterNode::GetVirtualBehavior(param_1,local_res18);
  *param_3 = iVar2;
  if (iVar2 != 3) goto LAB_14316072d;
  if (param_2 == 0) {
LAB_143160724:
    iVar2 = 2;
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x18))(param_1);
    if (iVar2 == 9) goto LAB_143160724;
    cVar1 = FUN_143176c10(param_1,param_2);
    iVar2 = 1;
    if (cVar1 != '\0') goto LAB_143160724;
  }
  *param_3 = iVar2;
LAB_14316072d:
  if (iVar2 == 1) {
    return 0;
  }
  return 1;
}



// FUNCTION 143160760 FUN_143160760 body=427 status=ok
// SIG undefined FUN_143160760(void)

undefined8 FUN_143160760(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  void *pvVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar7 = *(int *)((longlong)param_1 + 0xc) + param_2;
  pvVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar7 << 4);
  if (pvVar4 == (void *)0x0) {
    return 0;
  }
  pvVar6 = (void *)*param_1;
  uVar8 = (ulonglong)*(uint *)(param_1 + 1);
  if ((pvVar6 != (void *)0x0) && (pvVar6 != pvVar4)) {
    uVar10 = 0;
    if (3 < uVar8) {
      lVar9 = (uVar8 - 4 >> 2) + 1;
      uVar10 = lVar9 * 4;
      puVar5 = (undefined8 *)((longlong)pvVar4 + 0x10);
      do {
        puVar2 = puVar5 + -2;
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = 0xffffffffffffffff;
          *(undefined4 *)(puVar5 + -1) = 0xbf800000;
        }
        puVar1 = (undefined8 *)((longlong)puVar5 + *param_1 + -(longlong)pvVar4 + -0x10);
        uVar3 = puVar1[1];
        *puVar2 = *puVar1;
        puVar5[-1] = uVar3;
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = 0xffffffffffffffff;
          *(undefined4 *)(puVar5 + 1) = 0xbf800000;
        }
        puVar1 = (undefined8 *)((longlong)puVar5 + *param_1 + -(longlong)pvVar4);
        uVar3 = puVar1[1];
        puVar2 = puVar5 + 2;
        *puVar5 = *puVar1;
        puVar5[1] = uVar3;
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = 0xffffffffffffffff;
          *(undefined4 *)(puVar5 + 3) = 0xbf800000;
        }
        puVar1 = (undefined8 *)((longlong)puVar5 + *param_1 + (0x10 - (longlong)pvVar4));
        uVar3 = puVar1[1];
        *puVar2 = *puVar1;
        puVar5[3] = uVar3;
        puVar2 = puVar5 + 4;
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = 0xffffffffffffffff;
          *(undefined4 *)(puVar5 + 5) = 0xbf800000;
        }
        puVar1 = (undefined8 *)((longlong)puVar5 + *param_1 + (0x20 - (longlong)pvVar4));
        uVar3 = puVar1[1];
        *puVar2 = *puVar1;
        puVar5[5] = uVar3;
        lVar9 = lVar9 + -1;
        puVar5 = puVar5 + 8;
      } while (lVar9 != 0);
      pvVar6 = (void *)*param_1;
    }
    if (uVar10 < uVar8) {
      puVar5 = (undefined8 *)(uVar10 * 0x10 + (longlong)pvVar4);
      lVar9 = uVar8 - uVar10;
      do {
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = 0xffffffffffffffff;
          *(undefined4 *)(puVar5 + 1) = 0xbf800000;
        }
        puVar2 = (undefined8 *)((*param_1 - (longlong)pvVar4) + (longlong)puVar5);
        uVar3 = puVar2[1];
        *puVar5 = *puVar2;
        puVar5[1] = uVar3;
        puVar5 = puVar5 + 2;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      pvVar6 = (void *)*param_1;
    }
    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar6);
  }
  *param_1 = (longlong)pvVar4;
  *(uint *)((longlong)param_1 + 0xc) = uVar7;
  return 1;
}



// FUNCTION 143160910 FUN_143160910 body=7 status=ok
// SIG undefined FUN_143160910(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143160910(void)

{
  _DAT_146b50f58 = _DAT_146b50f58 + 1;
  return;
}



// FUNCTION 143160920 FUN_143160920 body=197 status=ok
// SIG undefined FUN_143160920(void)

undefined8
FUN_143160920(longlong *param_1,undefined8 param_2,undefined4 param_3,int param_4,char param_5,
             undefined4 *param_6,longlong param_7,char param_8)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 local_28 [2];
  undefined8 local_20;
  longlong local_18;
  undefined4 local_10;
  undefined1 local_c;
  undefined1 local_b;
  
  local_18 = 0;
  local_10 = 1;
  local_c = 0;
  if (((*(byte *)(param_7 + 0x296) & 2) != 0) || (local_b = 1, param_8 == '\0')) {
    local_b = 0;
  }
  if ((*(byte *)(param_7 + 0x194) & 0x40) == 0) {
    local_18 = param_7 + 0x2d8;
  }
  local_28[0] = param_3;
  local_20 = param_2;
  iVar1 = (**(code **)(*param_1 + 0x118))(param_1,local_28,1,0);
  cVar3 = iVar1 != 2;
  if (((bool)cVar3) && ((iVar1 == 0x50 || (param_4 == 0x50)))) {
    *(byte *)(param_7 + 0x195) = *(byte *)(param_7 + 0x195) | 1;
    cVar3 = param_5;
  }
  if (cVar3 == '\0') {
    *param_6 = 0x20;
    return 3;
  }
  uVar2 = (**(code **)(*(longlong *)(param_7 + 0x18) + 0x30))(param_7 + 0x18);
  return uVar2;
}



// FUNCTION 1431609f0 Init body=132 status=ok
// SIG undefined Init(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 CAkURenderer::Init(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  _DAT_146b50f54 = 0;
  _DAT_146b50f58 = 0;
  _DAT_146b50f5c = 0;
  DAT_146b50fa8 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x800);
  if (DAT_146b50fa8 != (undefined8 *)0x0) {
    DAT_146b50fb0 = 0x40;
    puVar1 = DAT_146b50fa8;
    DAT_146b50fa0 = DAT_146b50fa8;
    do {
      puVar2 = puVar1;
      uVar4 = uVar4 + 1;
      *puVar2 = puVar2 + 4;
      puVar1 = puVar2 + 4;
    } while (uVar4 < DAT_146b50fb0);
    *puVar2 = 0;
    _DAT_146b51010 = 0;
    uVar3 = CAkLEngine::Init();
    return uVar3;
  }
  return 0x34;
}



// FUNCTION 143160a80 FUN_143160a80 body=517 status=ok
// SIG undefined FUN_143160a80(void)

undefined4
FUN_143160a80(ulonglong *param_1,ushort param_2,float param_3,longlong param_4,char param_5,
             char param_6,undefined8 *param_7,undefined4 param_8)

{
  float fVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ushort uVar9;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  undefined1 local_88 [16];
  ulonglong local_78;
  int local_70;
  longlong local_68;
  int local_60;
  ulonglong uVar10;
  
  if (param_1 != (ulonglong *)0x0) {
    fVar12 = 101.0;
    bVar3 = false;
    plVar8 = (longlong *)*param_1;
    uVar10 = 0;
    iVar6 = 0;
    local_68 = 0;
    local_60 = 2;
    bVar4 = false;
    uVar7 = (ulonglong)(uint)param_1[1];
    if (plVar8 + (uint)param_1[1] < plVar8) {
      uVar7 = uVar10;
    }
    uVar11 = uVar10;
    fVar13 = fVar12;
    local_78 = uVar7;
    if (uVar7 != 0) {
      do {
        lVar2 = *plVar8;
        fVar13 = fVar12;
        lVar5 = local_68;
        iVar6 = local_60;
        if ((((param_4 == 0) || (*(longlong *)(lVar2 + 0x30) == param_4)) &&
            ((*(byte *)(lVar2 + 0x295) & 1) == 0)) &&
           (((*(byte *)(lVar2 + 0x195) & 1) == 0 && ((*(byte *)(lVar2 + 0x296) & 6) == 0)))) {
          fVar1 = *(float *)(lVar2 + 0x2a0);
          uVar9 = (short)uVar10 + 1;
          uVar10 = (ulonglong)uVar9;
          if (((fVar1 <= param_3) &&
              ((fVar13 = fVar1, lVar5 = lVar2, iVar6 = 2, param_6 != '\0' &&
               (iVar6 = FUN_14317ddc0(lVar2,local_88), uVar7 = local_78, bVar3 = bVar4, iVar6 == 0))
              )) && (fVar13 = fVar12, lVar5 = local_68, iVar6 = local_60, uVar9 <= param_2)) {
            bVar4 = true;
            bVar3 = true;
          }
        }
        local_60 = iVar6;
        local_68 = lVar5;
        iVar6 = (int)uVar10;
        plVar8 = plVar8 + 1;
        uVar11 = uVar11 + 1;
        fVar12 = fVar13;
      } while (uVar11 != uVar7);
    }
    if ((uint)param_2 < iVar6 + 1U) {
      local_70 = local_60;
      local_78 = local_68;
      if ((param_3 < fVar13) || (((param_5 != '\0' && (param_3 == fVar13)) || (local_68 == 0)))) {
        if (!bVar3) {
          if (param_6 == '\0') {
            return 2;
          }
          return 0x50;
        }
      }
      else {
        *param_7 = *(undefined8 *)(local_68 + 0x188);
        if ((param_6 == '\0') || (local_60 == 1)) {
          CAkPBI::Kick(local_68,param_8);
        }
      }
      return 1;
    }
  }
  return 1;
}



// FUNCTION 143160c90 FUN_143160c90 body=427 status=ok
// SIG undefined FUN_143160c90(void)

void FUN_143160c90(void)

{
  longlong *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50fb8);
  if (DAT_146b50fb4 != 0) {
    do {
      puVar4 = DAT_146b50f90;
      FUN_14317e8d0(DAT_146b50f90[1],*(undefined4 *)(DAT_146b50f90 + 2),
                    *(undefined4 *)((longlong)DAT_146b50f90 + 0x14),
                    *(undefined4 *)(DAT_146b50f90 + 3));
      if (*(int *)(puVar4 + 2) == 4) {
        puVar6 = (undefined8 *)0x0;
        for (puVar2 = DAT_146b50f70; puVar2 != (undefined8 *)0x0;
            puVar2 = (undefined8 *)puVar2[0x37]) {
          if (puVar2 == (undefined8 *)puVar4[1]) {
            if (puVar2 != (undefined8 *)0x0) {
              puVar5 = (undefined8 *)puVar2[0x37];
              if (puVar2 != DAT_146b50f70) {
                puVar6[0x37] = (undefined8 *)puVar2[0x37];
                puVar5 = DAT_146b50f70;
              }
              DAT_146b50f70 = puVar5;
              if (puVar2 == DAT_146b50f68) {
                DAT_146b50f68 = puVar6;
              }
              DAT_146b50f60 = DAT_146b50f60 + -1;
            }
            break;
          }
          puVar6 = puVar2;
        }
        plVar1 = (longlong *)puVar4[1];
        CAkLEngineCmds::DequeuePBI(plVar1);
        (**(code **)(plVar1[3] + 0x38))(plVar1 + 3,0);
        lVar3 = g_DefaultPoolId;
        (**(code **)(*plVar1 + 8))(plVar1,0);
        AK::MemoryMgr::Free(lVar3,plVar1);
      }
      puVar4 = DAT_146b50f90;
      if (DAT_146b50f90 != (undefined8 *)0x0) {
        if (DAT_146b50f90 == DAT_146b50f98) {
          DAT_146b50f98 = (undefined8 *)0x0;
        }
        if ((DAT_146b50f90 < DAT_146b50fa8) ||
           (DAT_146b50fa8 + (ulonglong)DAT_146b50fb0 * 4 <= DAT_146b50f90)) {
          DAT_146b50f90 = (undefined8 *)*DAT_146b50f90;
          AK::MemoryMgr::Free(g_DefaultPoolId,puVar4);
        }
        else {
          puVar6 = (undefined8 *)*DAT_146b50f90;
          *DAT_146b50f90 = DAT_146b50fa0;
          DAT_146b50f90 = puVar6;
          DAT_146b50fa0 = puVar4;
        }
        DAT_146b50fb4 = DAT_146b50fb4 + -1;
      }
    } while (DAT_146b50fb4 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x000143160e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50fb8);
  return;
}



// FUNCTION 143160e40 FUN_143160e40 body=1396 status=ok
// SIG undefined FUN_143160e40(void)

int FUN_143160e40(longlong *param_1,undefined4 *param_2,int *param_3)

{
  bool bVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  int *piVar11;
  longlong lVar12;
  bool local_res18 [8];
  char local_res20 [8];
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar13;
  undefined8 uVar14;
  uint local_84;
  undefined4 local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  longlong *local_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined4 local_58 [8];
  longlong *plVar6;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  lVar8 = *(longlong *)(param_3 + 2);
  plVar6 = (longlong *)0x0;
  plVar9 = (longlong *)0x0;
  bVar1 = false;
  iVar4 = CAkParameterNode::GetVirtualBehavior(param_1,local_res18);
  if (iVar4 == 3) {
    if ((lVar8 == 0) || (iVar4 = (**(code **)(*param_1 + 0x18))(param_1), iVar4 == 9)) {
      iVar4 = 2;
    }
    else {
      cVar3 = FUN_143176c10(param_1,lVar8);
      iVar4 = (cVar3 != '\0') + 1;
    }
  }
  local_res18[0] = iVar4 != 1;
  FUN_143161b30(local_58,param_1,*(undefined8 *)(param_3 + 4),&local_80);
  local_7c = FUN_143161860(local_58[0],&local_84);
  if (local_7c == 2) {
    iVar10 = 3;
    plVar9 = plVar6;
  }
  else {
    if ((param_2[6] & 0xffff0000) == 0x80000) {
      lVar8 = *(longlong *)(param_3 + 8);
      if (lVar8 == 0) {
        iVar10 = 2;
      }
      else {
        param_2 = (undefined4 *)CAkSource::Clone();
        lVar2 = g_DefaultPoolId;
        if (param_2 == (undefined4 *)0x0) {
          iVar10 = 0x34;
        }
        else {
          piVar11 = (int *)(lVar8 + 8);
          if (*(uint *)(lVar8 + 4) != 0) {
            do {
              if (param_2[1] == *piVar11) {
                iVar10 = piVar11[1] * 0x10000 + 1;
                if (piVar11[7] == 0) {
                  lVar12 = *(longlong *)(piVar11 + 2);
                  if (lVar12 == 0) {
                    if ((piVar11[6] == 0) || (*(longlong *)(piVar11 + 4) == 0)) goto LAB_143160f84;
                    local_78 = *param_2;
                    uStack_74 = 0xffffffff;
                    uStack_70 = CONCAT44(uStack_70._4_4_,piVar11[6]) & 0xfffff98cffffffff |
                                0x18c00000000;
                    CAkSource::SetSource(param_2,iVar10,*(longlong *)(piVar11 + 4),&local_78);
                    iVar10 = 1;
                    goto LAB_14316102c;
                  }
                  uVar14 = 1;
                  uVar7 = CONCAT44(uVar13,0xffffffff);
                }
                else {
                  lVar12 = *(longlong *)(piVar11 + 2);
                  uVar14 = 0;
                  uVar7 = CONCAT44(uVar13,piVar11[7]);
                }
                CAkSource::SetSource(param_2,*param_2,iVar10,lVar12,uVar7,uVar14,1);
                iVar10 = 1;
                goto LAB_14316102c;
              }
LAB_143160f84:
              piVar11 = piVar11 + 8;
              uVar5 = (int)plVar6 + 1;
              plVar6 = (longlong *)(ulonglong)uVar5;
            } while (uVar5 < *(uint *)(lVar8 + 4));
          }
          CAkSource::~CAkSource(param_2);
          AK::MemoryMgr::Free(lVar2,param_2);
          iVar10 = 2;
        }
      }
    }
    else {
      iVar10 = 1;
    }
LAB_14316102c:
    local_res20[0] = '\0';
    if (iVar10 == 1) {
      plVar9 = (longlong *)
               (**(code **)(**(longlong **)(param_3 + 2) + 0x20))
                         (*(longlong **)(param_3 + 2),param_1,param_2,param_3,local_58);
      if (plVar9 == (longlong *)0x0) {
        iVar10 = 2;
      }
      else {
        if (*param_3 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined8 *)(*(longlong *)(param_3 + 0x22) + 0x10);
        }
        iVar10 = FUN_14317c550(plVar9 + 3,local_80,uVar7,local_res18[0],&local_84,param_3 + 0x2a,
                               local_res20);
        if (iVar10 == 1) {
          if ((local_res20[0] == '\0') || (iVar4 == 0)) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          uStack_70 = *(ulonglong *)(param_3 + 4);
          local_78 = local_58[0];
          local_60 = 1;
          if (((*(byte *)((longlong)plVar9 + 0x296) & 2) != 0) || (local_5c = 0x100, !bVar1)) {
            local_5c = 0;
          }
          if ((*(byte *)((longlong)plVar9 + 0x194) & 0x40) == 0) {
            local_68 = plVar9 + 0x5b;
          }
          else {
            local_68 = (longlong *)0x0;
          }
          iVar4 = (**(code **)(*param_1 + 0x118))(param_1,&local_78,1,0);
          cVar3 = iVar4 != 2;
          if (((bool)cVar3) && ((iVar4 == 0x50 || (local_7c == 0x50)))) {
            *(byte *)((longlong)plVar9 + 0x195) = *(byte *)((longlong)plVar9 + 0x195) | 1;
            cVar3 = local_res18[0];
          }
          if (cVar3 == '\0') {
            iVar4 = 3;
            local_84 = 0x20;
          }
          else {
            iVar4 = (**(code **)(plVar9[3] + 0x30))();
          }
          bVar1 = true;
          iVar10 = iVar4;
          if (iVar4 == 1) {
            if ((*(byte *)((longlong)plVar9 + 0x194) & 1) == 0) {
              (**(code **)(plVar9[3] + 0x48))(plVar9 + 3,param_3 + 0x2a);
            }
            else if ((*(byte *)((longlong)plVar9 + 0x194) & 0x10) != 0) {
              (**(code **)(plVar9[3] + 0x50))(plVar9 + 3);
            }
            FUN_14317f530(plVar9,param_3 + 0x56,1);
            lVar8 = *(longlong *)(param_3 + 0x22);
            if (lVar8 != 0) {
              if (plVar9[0xe] != 0) {
                FUN_1431ad660(plVar9[0xe],1,lVar8 + 0x28);
                lVar8 = *(longlong *)(param_3 + 0x22);
              }
              *(longlong **)(lVar8 + 0x10) = plVar9 + 0x24;
            }
            iVar10 = param_3[0x20];
            uVar7 = *(undefined8 *)(param_3 + 6);
            FUN_14317fbd0(plVar9);
            iVar10 = FUN_14317fe10(plVar9,uVar7,iVar10 == 1,0);
            if (iVar10 == 1) {
              plVar9[0x37] = 0;
              plVar6 = plVar9;
              if (DAT_146b50f70 != (longlong *)0x0) {
                DAT_146b50f68[0x37] = (longlong)plVar9;
                plVar6 = DAT_146b50f70;
              }
              DAT_146b50f70 = plVar6;
              DAT_146b50f60 = DAT_146b50f60 + 1;
              DAT_146b50f68 = plVar9;
            }
            if (*(longlong *)(param_3 + 0x22) != 0) {
              uVar7 = FUN_140eaf760(plVar9);
              *(undefined8 *)(*(longlong *)(param_3 + 0x22) + 8) = uVar7;
              uVar7 = UUGPhysicalScreenUserWidget::GetWidgetOwnerActor(plVar9);
              **(undefined8 **)(param_3 + 0x22) = uVar7;
            }
            if (iVar10 == 1) {
              return 1;
            }
          }
          if (iVar4 == 1) goto LAB_1431612b3;
        }
      }
    }
  }
  if ((param_3[0xd] != 0) && (plVar9 != (longlong *)0x0)) {
    CAkPlayingMgr::SetPBI(DAT_146b50b00,param_3[0xd],plVar9,local_res18);
  }
LAB_1431612b3:
  if (plVar9 == (longlong *)0x0) {
    if (bVar1) {
      local_68 = (longlong *)0x0;
      local_78 = 0;
      local_60 = 1;
      local_5c = 0x100;
      uStack_70 = *(ulonglong *)(param_3 + 4);
      (**(code **)(*param_1 + 0x120))(param_1,&local_78);
    }
  }
  else {
    if (!bVar1) {
      *(byte *)((longlong)plVar9 + 0x295) = *(byte *)((longlong)plVar9 + 0x295) | 0x10;
    }
    (**(code **)(plVar9[3] + 0x38))(plVar9 + 3,1);
    lVar2 = g_DefaultPoolId;
    (**(code **)(*plVar9 + 8))(plVar9,0);
    AK::MemoryMgr::Free(lVar2,plVar9);
  }
  if (iVar10 == 3) {
    if ((*(byte *)(param_3 + 0x62) & 2) == 0) {
      if (local_84 == 0x20) {
        local_84 = 0x23;
      }
      else if (local_84 == 0x21) {
        local_84 = 0x24;
      }
      else if (local_84 == 0x22) {
        local_84 = 0x25;
      }
    }
  }
  else {
    local_84 = ~(uint)(*(byte *)(param_3 + 0x62) >> 1) & 1 | 0x1e;
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return iVar10;
}



// FUNCTION 1431613c0 FUN_1431613c0 body=177 status=ok
// SIG undefined FUN_1431613c0(void)

void FUN_1431613c0(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  lVar1 = DAT_146b50f70;
  plVar2 = DAT_146b50fe0;
  if ((DAT_146b50f50 != '\0') && (DAT_146b50f51 == '\0')) {
    for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x1b8)) {
      FUN_14317f6a0(lVar1);
    }
    DAT_146b50f50 = '\0';
    lVar1 = DAT_146b50f70;
    plVar2 = DAT_146b50fe0;
  }
  for (; DAT_146b50fe0 = plVar2, lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x1b8)) {
    *(byte *)(lVar1 + 0x195) = *(byte *)(lVar1 + 0x195) & 0xfe;
    plVar2 = DAT_146b50fe0;
  }
  uVar4 = (ulonglong)DAT_146b50fe8;
  plVar3 = plVar2;
  if (plVar2 != plVar2 + uVar4) {
    do {
      if (*plVar3 != 0) {
        FUN_14317a0c0();
        uVar4 = (ulonglong)DAT_146b50fe8;
        plVar2 = DAT_146b50fe0;
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar2 + uVar4);
  }
  return;
}



// FUNCTION 143161480 RemoveFromActiveNodes body=90 status=ok
// SIG undefined RemoveFromActiveNodes(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CAkURenderer::RemoveFromActiveNodes(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = DAT_146b50f88;
  lVar3 = 0;
  if (DAT_146b50f88 != 0) {
    while (lVar2 = lVar1, lVar2 != param_1) {
      lVar1 = *(longlong *)(lVar2 + 0x40);
      lVar3 = lVar2;
      if (*(longlong *)(lVar2 + 0x40) == 0) {
        return;
      }
    }
    if (lVar2 != 0) {
      lVar1 = *(longlong *)(lVar2 + 0x40);
      if (lVar2 != DAT_146b50f88) {
        *(longlong *)(lVar3 + 0x40) = *(longlong *)(lVar2 + 0x40);
        lVar1 = DAT_146b50f88;
      }
      DAT_146b50f88 = lVar1;
      if (lVar2 == DAT_146b50f80) {
        DAT_146b50f80 = lVar3;
      }
      _DAT_146b50f78 = _DAT_146b50f78 + -1;
    }
  }
  return;
}



// FUNCTION 1431614e0 RemoveLimiter body=109 status=ok
// SIG undefined RemoveLimiter(void)

void CAkURenderer::RemoveLimiter(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = DAT_146b50fe0 + DAT_146b50fe8;
  for (plVar2 = DAT_146b50fe0; (plVar2 != DAT_146b50fe0 + DAT_146b50fe8 && (*plVar2 != param_1));
      plVar2 = plVar2 + 1) {
  }
  if (plVar2 != plVar3) {
    if (plVar2 < plVar3 + -1) {
      lVar1 = ((ulonglong)((longlong)(plVar3 + -1) + (-1 - (longlong)plVar2)) >> 3) + 1;
      plVar3 = plVar2;
      for (; plVar2 = plVar2 + 1, lVar1 != 0; lVar1 = lVar1 + -1) {
        *plVar3 = *plVar2;
        plVar3 = plVar3 + 1;
      }
    }
    DAT_146b50fe8 = DAT_146b50fe8 - 1;
  }
  return;
}



// FUNCTION 143161550 StopAll body=102 status=ok
// SIG undefined StopAll(void)

void CAkURenderer::StopAll(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  for (plVar1 = DAT_146b50f88; lVar2 = DAT_146b50f70, plVar1 != (longlong *)0x0;
      plVar1 = (longlong *)plVar1[8]) {
    (**(code **)(*plVar1 + 0x98))(plVar1,param_1);
  }
  for (; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x1b8)) {
    FUN_14317e5e0(lVar2,param_1);
  }
  return;
}



// FUNCTION 1431615c0 FUN_1431615c0 body=140 status=ok
// SIG undefined FUN_1431615c0(void)

void FUN_1431615c0(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  
  for (lVar1 = DAT_146b50f70; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x1b8)) {
    cVar2 = FUN_14317df60(lVar1,param_1);
    if (cVar2 != '\0') {
      local_18 = 0;
      local_14 = 4;
      local_10 = 0;
      FUN_143180140(lVar1,&local_18,1);
      FUN_143140ce0(DAT_146b50b78,*(undefined8 *)(lVar1 + 0x188),0,0);
    }
  }
  FUN_143128090(param_1);
  return;
}



// FUNCTION 143161650 FUN_143161650 body=524 status=ok
// SIG undefined FUN_143161650(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143161650(void)

{
  longlong *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  CAkLEngine::Term();
  plVar1 = DAT_146b50f70;
  while (plVar1 != (longlong *)0x0) {
    DAT_146b50f70 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      DAT_146b50f70 = (longlong *)plVar1[0x37];
      if (DAT_146b50f70 == (longlong *)0x0) {
        DAT_146b50f70 = (longlong *)0x0;
        DAT_146b50f68 = 0;
      }
      DAT_146b50f60 = DAT_146b50f60 + -1;
    }
    (**(code **)*plVar1)(plVar1,0,1);
    CAkLEngineCmds::DequeuePBI(plVar1);
    (**(code **)(plVar1[3] + 0x38))(plVar1 + 3,0);
    lVar3 = g_DefaultPoolId;
    (**(code **)(*plVar1 + 8))(plVar1,0);
    AK::MemoryMgr::Free(lVar3,plVar1);
    plVar1 = DAT_146b50f70;
  }
  DAT_146b50f70 = (longlong *)0x0;
  DAT_146b50f68 = 0;
  DAT_146b50f60 = 0;
  while (puVar5 = DAT_146b50f90, DAT_146b50f90 != (undefined8 *)0x0) {
    if (DAT_146b50f90 == DAT_146b50f98) {
      DAT_146b50f98 = (undefined8 *)0x0;
    }
    if ((DAT_146b50f90 < DAT_146b50fa8) ||
       (DAT_146b50fa8 + (ulonglong)DAT_146b50fb0 * 4 <= DAT_146b50f90)) {
      DAT_146b50f90 = (undefined8 *)*DAT_146b50f90;
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar5);
      DAT_146b50fb4 = DAT_146b50fb4 + -1;
    }
    else {
      puVar4 = (undefined8 *)*DAT_146b50f90;
      *DAT_146b50f90 = DAT_146b50fa0;
      DAT_146b50f90 = puVar4;
      DAT_146b50fb4 = DAT_146b50fb4 + -1;
      DAT_146b50fa0 = puVar5;
    }
  }
  DAT_146b50f90 = (undefined8 *)0x0;
  puVar5 = DAT_146b50fa0;
  puVar4 = DAT_146b50fa8;
  while (puVar2 = puVar5, puVar2 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*puVar2;
    if ((puVar2 < puVar4) || (puVar4 + (ulonglong)DAT_146b50fb0 * 4 <= puVar2)) {
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar2);
      puVar4 = DAT_146b50fa8;
    }
  }
  if (puVar4 != (undefined8 *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,puVar4);
    DAT_146b50fa8 = (undefined8 *)0x0;
  }
  DAT_146b50fb0 = 0;
  DAT_146b50fa0 = (undefined8 *)0x0;
  DAT_146b50f90 = (undefined8 *)0x0;
  DAT_146b50f98 = (undefined8 *)0x0;
  if (DAT_146b50ff0 != (void *)0x0) {
    DAT_146b50ff8 = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,DAT_146b50ff0);
    DAT_146b50ff0 = (void *)0x0;
    _DAT_146b50ffc = 0;
  }
  if (DAT_146b50fe0 != (void *)0x0) {
    DAT_146b50fe8 = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,DAT_146b50fe0);
    DAT_146b50fe0 = (void *)0x0;
    _DAT_146b50fec = 0;
  }
  return;
}



// FUNCTION 143161860 FUN_143161860 body=719 status=ok
// SIG undefined FUN_143161860(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_143161860(float param_1,undefined4 *param_2)

{
  float fVar1;
  longlong lVar2;
  bool bVar3;
  ushort uVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  ushort uVar10;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  ulonglong local_res18;
  undefined1 local_res20 [8];
  longlong local_78;
  int local_70;
  ulonglong uVar11;
  
  fVar16 = DAT_146b50bc0;
  uVar11 = 0;
  iVar8 = 0;
  uVar15 = 1;
  fVar17 = 101.0;
  if (1.0 <= DAT_146b50bc0) {
LAB_1431618e5:
    cVar6 = CheckOverRatio(g_LEngineDefaultPoolId,DAT_146b50d5c);
    if (cVar6 == '\0') goto LAB_1431619b0;
  }
  else {
    local_res18 = 0;
    AK::MemoryMgr::GetPoolMemoryUsed(g_DefaultPoolId,(PoolMemInfo *)&local_res18);
    if (((uint)local_res18 == 0) ||
       ((float)(local_res18 >> 0x20) / (float)(local_res18 & 0xffffffff) <= fVar16))
    goto LAB_1431618e5;
  }
  fVar16 = 101.0;
  local_78 = 0;
  for (lVar2 = DAT_146b50f70; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x1b8)) {
    if (((((*(byte *)(lVar2 + 0x295) & 1) == 0) && ((*(byte *)(lVar2 + 0x195) & 1) == 0)) &&
        ((*(byte *)(lVar2 + 0x296) & 6) == 0)) &&
       ((fVar1 = *(float *)(lVar2 + 0x2a0), fVar1 < fVar16 || (fVar1 == fVar16)))) {
      fVar16 = fVar1;
      local_78 = lVar2;
    }
  }
  if (((param_1 < fVar16) || (param_1 == fVar16)) || (local_78 == 0)) {
    iVar7 = 2;
  }
  else {
    CAkPBI::Kick(local_78,3);
    iVar7 = 1;
  }
  if (iVar7 != 1) {
    *param_2 = 0x22;
    return 2;
  }
LAB_1431619b0:
  *param_2 = 0x21;
  uVar4 = DAT_146b51000;
  uVar13 = (uint)DAT_146b51000;
  local_res18 = CONCAT44(local_res18._4_4_,uVar13);
  if (uVar13 < (DAT_146b50f60 - _DAT_146b50f54) + 1U) {
    bVar3 = false;
    local_78 = 0;
    local_70 = 2;
    uVar12 = (ulonglong)DAT_146b50ff8;
    if (DAT_146b50ff0 + DAT_146b50ff8 < DAT_146b50ff0) {
      uVar12 = uVar11;
    }
    plVar9 = DAT_146b50ff0;
    uVar14 = uVar11;
    fVar16 = fVar17;
    if (uVar12 != 0) {
      do {
        lVar2 = *plVar9;
        fVar16 = fVar17;
        lVar5 = local_78;
        iVar8 = local_70;
        if ((((*(byte *)(lVar2 + 0x295) & 1) == 0) && ((*(byte *)(lVar2 + 0x195) & 1) == 0)) &&
           ((*(byte *)(lVar2 + 0x296) & 6) == 0)) {
          fVar1 = *(float *)(lVar2 + 0x2a0);
          uVar10 = (short)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
          if (((fVar1 <= param_1) &&
              (iVar8 = FUN_14317ddc0(lVar2,local_res20), fVar16 = fVar1, lVar5 = lVar2, iVar8 == 0))
             && (fVar16 = fVar17, lVar5 = local_78, iVar8 = local_70, uVar10 <= uVar4)) {
            bVar3 = true;
          }
        }
        local_70 = iVar8;
        local_78 = lVar5;
        iVar8 = (int)uVar11;
        uVar14 = uVar14 + 1;
        plVar9 = plVar9 + 1;
        fVar17 = fVar16;
      } while (uVar14 != uVar12);
      uVar13 = (uint)local_res18;
    }
    if (uVar13 < iVar8 + 1U) {
      if (((param_1 < fVar16) || (param_1 == fVar16)) || (local_78 == 0)) {
        if (!bVar3) {
          uVar15 = 0x50;
        }
      }
      else if (local_70 == 1) {
        CAkPBI::Kick(local_78,2);
      }
    }
  }
  return uVar15;
}



// FUNCTION 143161b30 FUN_143161b30 body=898 status=ok
// SIG undefined FUN_143161b30(void)

float * FUN_143161b30(float *param_1,longlong *param_2,longlong param_3,float *param_4)

{
  float fVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  float *pfVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint uVar10;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 local_res8 [8];
  longlong local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined1 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  ulonglong uVar11;
  
  lVar9 = 0;
  *param_4 = 0.0;
  pfVar5 = (float *)FUN_1431758b0(param_2,local_res8);
  fVar13 = *pfVar5;
  fVar12 = pfVar5[1];
  *param_1 = 50.0;
  param_1[3] = fVar13;
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  param_1[4] = fVar12;
  if (100.0 < fVar13) {
    fVar13 = 100.0;
  }
  iVar3 = _finite((double)fVar13);
  if (iVar3 != 0) {
    *param_1 = fVar13;
  }
  cVar2 = (**(code **)(*param_2 + 0x100))(param_2,param_4);
  if (cVar2 == '\0') {
    return param_1;
  }
  if (*(int *)(param_3 + 0x40) != 0) {
    lVar9 = **(longlong **)(param_3 + 0x38);
  }
  *param_4 = *(float *)(lVar9 + 0x40) * *param_4;
  if (param_1[4] == 0.0) {
    return param_1;
  }
  lVar6 = CAkRegisteredObj::GetListeners(param_3);
  fVar13 = 1e+10;
  puVar8 = *(undefined8 **)(lVar6 + 8);
  if (puVar8 != puVar8 + *(uint *)(lVar6 + 0x10)) {
    do {
      uVar11 = 0;
      lVar7 = CAkListener::GetListenerData(*puVar8);
      if ((lVar7 != 0) && (*(short *)(lVar9 + 0x38) != 0)) {
        do {
          fVar12 = (float)AkMath::Distance(lVar7 + 0x78,
                                           *(longlong *)(lVar9 + 0x20) + uVar11 * 0x30 + 0x18);
          fVar12 = fVar12 / *(float *)(lVar7 + 0x84);
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
          if (fVar13 <= fVar12) {
            fVar12 = fVar13;
          }
          fVar13 = fVar12;
        } while (uVar10 < *(ushort *)(lVar9 + 0x38));
      }
      puVar8 = puVar8 + 1;
    } while (puVar8 != (undefined8 *)
                       (*(longlong *)(lVar6 + 8) + (ulonglong)*(uint *)(lVar6 + 0x10) * 8));
  }
  fVar14 = 0.0;
  fVar12 = param_1[3];
  fVar15 = param_1[4];
  fVar1 = *param_4;
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar9 + 0x38) < DAT_146b51024) &&
     (_Init_thread_header(&DAT_146b51024), DAT_146b51024 == -1)) {
    DAT_146b51020 = AK::SoundEngine::GetIDFromString("FirstOrThirdPerson");
    _Init_thread_footer(&DAT_146b51024);
  }
  if ((*(int *)(lVar9 + 0x38) < DAT_146b5102c) &&
     (_Init_thread_header(&DAT_146b5102c), DAT_146b5102c == -1)) {
    DAT_146b51028 = AK::SoundEngine::GetIDFromString("FirstPerson");
    _Init_thread_footer(&DAT_146b5102c);
  }
  if (g_pSwitchMgr != (CAkSwitchMgr *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_c0 = 0xff;
    local_b8 = 0xff;
    local_b0 = 0;
    local_d8 = param_3;
    uVar4 = FUN_14314a760(g_pSwitchMgr,DAT_146b51020,&local_d8);
    if (uVar4 == DAT_146b51028) {
      fVar14 = 1.0;
    }
  }
  fVar14 = fVar14 + 0.12;
  if ((fVar15 != 0.0) && (0.0 < fVar1)) {
    fVar13 = fVar13 / fVar1;
    if (fVar13 < 0.5) {
      if (fVar13 < 0.25) goto LAB_143161db6;
      fVar15 = fVar15 * 0.5;
    }
    fVar14 = fVar14 + fVar15;
  }
LAB_143161db6:
  fVar14 = fVar14 + fVar12;
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  fVar13 = 100.0;
  if (fVar14 <= 100.0) {
    fVar13 = fVar14;
  }
  iVar3 = _finite((double)fVar13);
  if (iVar3 != 0) {
    *param_1 = fVar13;
  }
  return param_1;
}



// FUNCTION 143161ec0 Init body=14 status=ok
// SIG undefined Init(void)

undefined8 CAkEnvironmentsMgr::Init(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  return 1;
}



// FUNCTION 143161ed0 FUN_143161ed0 body=298 status=ok
// SIG undefined FUN_143161ed0(void)

undefined8
FUN_143161ed0(longlong param_1,int param_2,int param_3,uint param_4,void *param_5,int param_6)

{
  longlong lVar1;
  void *pvVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  lVar6 = (longlong)param_2 * 3 + (longlong)param_3;
  pvVar2 = *(void **)(param_1 + 8 + lVar6 * 0x10);
  if (pvVar2 != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar2);
    *(undefined8 *)(param_1 + 8 + lVar6 * 0x10) = 0;
  }
  *(undefined8 *)(param_1 + 0x10 + lVar6 * 0x10) = 0;
  if ((param_5 == (void *)0x0) || (param_4 == 0)) {
    uVar3 = 0x1f;
  }
  else {
    pvVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)param_4 * 0xc);
    *(void **)(param_1 + 8 + lVar6 * 0x10) = pvVar2;
    if (pvVar2 == (void *)0x0) {
      *(undefined4 *)(param_1 + 0x10 + lVar6 * 0x10) = 0;
      uVar3 = 0x34;
    }
    else {
      _guard_xfg_dispatch_icall_nop(pvVar2,param_5,(ulonglong)(param_4 * 0xc));
      *(uint *)(param_1 + 0x10 + lVar6 * 0x10) = param_4;
      *(int *)(param_1 + 0x14 + lVar6 * 0x10) = param_6;
      if (param_3 == 0) {
        if (param_6 == 0) {
          *(undefined4 *)(param_1 + 0x14 + lVar6 * 0x10) = 4;
        }
        else if (param_6 == 2) {
          if (param_4 != 0) {
            do {
              uVar4 = (int)uVar5 + 1;
              lVar1 = *(longlong *)(param_1 + 8 + lVar6 * 0x10);
              *(float *)(lVar1 + 4 + uVar5 * 0xc) = *(float *)(lVar1 + 4 + uVar5 * 0xc) + 1.0;
              uVar5 = (ulonglong)uVar4;
            } while (uVar4 < *(uint *)(param_1 + 0x10 + lVar6 * 0x10));
          }
          *(undefined4 *)(param_1 + 0x14 + lVar6 * 0x10) = 0;
          return 1;
        }
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}



// FUNCTION 143162000 Term body=103 status=ok
// SIG undefined Term(void)

undefined4 CAkEnvironmentsMgr::Term(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  lVar2 = 2;
  do {
    lVar3 = 3;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*puVar1);
        *puVar1 = 0;
      }
      puVar1[1] = 0;
      puVar1 = puVar1 + 2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return 1;
}



// FUNCTION 143162070 FUN_143162070 body=233 status=ok
// SIG undefined FUN_143162070(void)

longlong FUN_143162070(longlong *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  void *pvVar7;
  longlong lVar8;
  void *pvVar9;
  ulonglong uVar10;
  
  uVar4 = *(uint *)(param_1 + 1);
  if (uVar4 < *(uint *)((longlong)param_1 + 0xc)) {
LAB_143162126:
    uVar4 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar4 + 1;
    lVar8 = *param_1 + (ulonglong)uVar4 * 0x28;
  }
  else {
    uVar1 = *(uint *)((longlong)param_1 + 0xc) + 1;
    pvVar7 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 * 0x28);
    if (pvVar7 != (void *)0x0) {
      pvVar9 = (void *)*param_1;
      if ((pvVar9 != (void *)0x0) && (pvVar9 != pvVar7)) {
        uVar10 = (ulonglong)*(uint *)(param_1 + 1);
        if (uVar10 != 0) {
          lVar8 = 0;
          do {
            lVar5 = *param_1;
            uVar6 = ((undefined8 *)(lVar8 + lVar5))[1];
            *(undefined8 *)(lVar8 + (longlong)pvVar7) = *(undefined8 *)(lVar8 + lVar5);
            ((undefined8 *)(lVar8 + (longlong)pvVar7))[1] = uVar6;
            puVar2 = (undefined8 *)(lVar8 + 0x10 + lVar5);
            uVar6 = puVar2[1];
            puVar3 = (undefined8 *)(lVar8 + 0x10 + (longlong)pvVar7);
            *puVar3 = *puVar2;
            puVar3[1] = uVar6;
            *(undefined8 *)(lVar8 + 0x20 + (longlong)pvVar7) = *(undefined8 *)(lVar8 + 0x20 + lVar5)
            ;
            uVar10 = uVar10 - 1;
            lVar8 = lVar8 + 0x28;
          } while (uVar10 != 0);
          pvVar9 = (void *)*param_1;
        }
        AK::MemoryMgr::Free(g_DefaultPoolId,pvVar9);
      }
      *param_1 = (longlong)pvVar7;
      *(uint *)((longlong)param_1 + 0xc) = uVar1;
      if (uVar4 < uVar1) goto LAB_143162126;
    }
    lVar8 = 0;
  }
  return lVar8;
}



// FUNCTION 143162160 FUN_143162160 body=160 status=ok
// SIG undefined FUN_143162160(void)

void FUN_143162160(undefined8 *param_1,int param_2,longlong param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  piVar1 = (int *)*param_1;
  piVar2 = piVar1 + (ulonglong)*(uint *)(param_1 + 1) * 10;
  for (; (piVar1 != piVar2 && ((*piVar1 != param_2 || (*(longlong *)(piVar1 + 2) != param_3))));
      piVar1 = piVar1 + 10) {
  }
  piVar3 = piVar1 + 4;
  if (piVar1 == piVar2) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 == (int *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
    piVar2 = (int *)FUN_143162070(param_1);
    if (piVar2 != (int *)0x0) {
      iStack_10 = (int)param_3;
      iStack_c = (int)((ulonglong)param_3 >> 0x20);
      *piVar2 = param_2;
      piVar2[1] = iStack_14;
      piVar2[2] = iStack_10;
      piVar2[3] = iStack_c;
      piVar2[6] = -1;
      piVar2[7] = 0x3f800000;
      piVar2[8] = -1;
      piVar2[9] = 1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  }
  return;
}



// FUNCTION 143162200 GetBuffering body=162 status=ok
// SIG undefined GetBuffering(void)

undefined4
CAkPositionRepository::GetBuffering(longlong param_1,int param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  piVar2 = *(int **)(param_1 + 0x10);
  piVar1 = piVar2 + (ulonglong)*(uint *)(param_1 + 0x18) * 6;
  for (; (piVar2 != piVar1 && (*piVar2 != param_2)); piVar2 = piVar2 + 6) {
  }
  piVar3 = piVar2 + 2;
  if (piVar2 == piVar1) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 == (int *)0x0) {
    uVar4 = 2;
  }
  else {
    uVar4 = 1;
    *param_3 = piVar3[2];
    *param_4 = piVar3[3];
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return uVar4;
}



// FUNCTION 1431622b0 GetCurrPositions body=501 status=ok
// SIG undefined GetCurrPositions(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int CAkPositionRepository::GetCurrPositions
              (longlong *param_1,int param_2,ulonglong param_3,uint *param_4,char param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  LARGE_INTEGER local_78;
  longlong local_70;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  uVar1 = *param_4;
  uVar2 = uVar1;
  if (uVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  uVar8 = 0;
  uVar7 = 0;
  uVar5 = uVar8;
  if (uVar1 != 0) {
    uVar5 = param_3;
  }
  piVar4 = (int *)*param_1;
  if (piVar4 != piVar4 + (ulonglong)*(uint *)(param_1 + 1) * 10) {
    puVar6 = (uint *)(piVar4 + 6);
    do {
      uVar7 = (uint)uVar8;
      if (uVar2 <= uVar7) break;
      if ((*piVar4 == param_2) && (puVar6[3] != 1)) {
        if (uVar5 != 0) {
          fVar9 = 1.0 / (float)puVar6[3];
          fVar10 = (float)*puVar6 * 1000.0 * fVar9;
          local_70 = (longlong)((float)puVar6[2] * 1000.0 * fVar9);
          if (param_5 != '\0') {
            QueryPerformanceCounter(&local_78);
            fVar10 = fVar10 + ((float)(local_78.QuadPart - *(longlong *)(puVar6 + -2)) /
                              _DAT_146b51f08) * (float)puVar6[1];
          }
          uVar3 = FUN_14317c030(*(longlong *)(*(longlong *)(puVar6 + -4) + 0x18) + 0x18);
          *(undefined4 *)(uVar5 + uVar8 * 0xc) = uVar3;
          *(undefined4 *)(uVar5 + 4 + uVar8 * 0xc) =
               **(undefined4 **)(*(longlong *)(*(longlong *)(puVar6 + -4) + 0x18) + 0x220);
          uVar1 = (uint)local_70;
          if ((uint)(longlong)fVar10 < (uint)local_70) {
            uVar1 = (uint)(longlong)fVar10;
          }
          *(uint *)(uVar5 + 8 + uVar8 * 0xc) = uVar1;
        }
        uVar8 = (ulonglong)(uVar7 + 1);
      }
      uVar7 = (uint)uVar8;
      piVar4 = piVar4 + 10;
      puVar6 = puVar6 + 10;
    } while (piVar4 != (int *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x28));
  }
  *param_4 = uVar7;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 2 - (uint)(uVar7 != 0);
}



// FUNCTION 1431624b0 Init body=62 status=ok
// SIG undefined Init(void)

undefined8 CAkPositionRepository::Init(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x140);
  *param_1 = pvVar1;
  if (pvVar1 == (void *)0x0) {
    return 0x34;
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 8;
  return 1;
}



// FUNCTION 1431624f0 RemovePlayingIDForBuffering body=167 status=ok
// SIG undefined RemovePlayingIDForBuffering(void)

void CAkPositionRepository::RemovePlayingIDForBuffering(longlong param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  piVar4 = *(int **)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x18);
  piVar3 = piVar4 + (ulonglong)uVar2 * 6;
  if (piVar4 != piVar3) {
    do {
      if (*piVar4 == param_2) break;
      piVar4 = piVar4 + 6;
    } while (piVar4 != piVar3);
    if (piVar4 != piVar3) {
      if (piVar4 < piVar3 + -6) {
        uVar1 = ((ulonglong)((longlong)(piVar3 + -6) + (-1 - (longlong)piVar4)) / 0x18 + 1) * 3 &
                0x1fffffffffffffff;
        piVar3 = piVar4 + 6;
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *(undefined8 *)piVar4 = *(undefined8 *)piVar3;
          piVar3 = piVar3 + 2;
          piVar4 = piVar4 + 2;
        }
        uVar2 = *(uint *)(param_1 + 0x18);
      }
      *(uint *)(param_1 + 0x18) = uVar2 - 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143162590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// FUNCTION 1431625a0 RemoveSource body=193 status=ok
// SIG undefined RemoveSource(void)

void CAkPositionRepository::RemoveSource(longlong *param_1,int param_2,longlong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  piVar3 = piVar4 + (ulonglong)*(uint *)(param_1 + 1) * 10;
  if (piVar4 != piVar3) {
    do {
      if ((*piVar4 == param_2) && (*(longlong *)(piVar4 + 2) == param_3)) break;
      piVar4 = piVar4 + 10;
    } while (piVar4 != piVar3);
    if (piVar4 != piVar3) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
      uVar2 = *(uint *)(param_1 + 1);
      piVar3 = (int *)(*param_1 + ((ulonglong)uVar2 - 1) * 0x28);
      if (piVar4 < piVar3) {
        uVar1 = ((ulonglong)((longlong)piVar3 + (-1 - (longlong)piVar4)) / 0x28 + 1) * 5 &
                0x1fffffffffffffff;
        piVar3 = piVar4 + 10;
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *(undefined8 *)piVar4 = *(undefined8 *)piVar3;
          piVar3 = piVar3 + 2;
          piVar4 = piVar4 + 2;
        }
        uVar2 = *(uint *)(param_1 + 1);
      }
      *(uint *)(param_1 + 1) = uVar2 - 1;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
    }
  }
  return;
}



// FUNCTION 143162670 SetRate body=143 status=ok
// SIG undefined SetRate(void)

void CAkPositionRepository::SetRate(undefined8 *param_1,int param_2,longlong param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)*param_1;
  piVar1 = piVar2 + (ulonglong)*(uint *)(param_1 + 1) * 10;
  for (; (piVar2 != piVar1 && ((*piVar2 != param_2 || (*(longlong *)(piVar2 + 2) != param_3))));
      piVar2 = piVar2 + 10) {
  }
  piVar3 = piVar2 + 4;
  if (piVar2 == piVar1) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 != (int *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
    *(undefined8 *)piVar3 = param_1[9];
    piVar3[3] = param_4;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  }
  return;
}



// FUNCTION 143162700 Term body=84 status=ok
// SIG undefined Term(void)

void CAkPositionRepository::Term(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*param_1);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  if ((void *)param_1[2] != (void *)0x0) {
    *(undefined4 *)(param_1 + 3) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[2]);
    param_1[2] = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  return;
}



// FUNCTION 143162760 FUN_143162760 body=468 status=ok
// SIG undefined FUN_143162760(void)

void FUN_143162760(longlong param_1,int param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int *piVar6;
  void *pvVar7;
  longlong lVar8;
  void *pvVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  
  piVar6 = *(int **)(param_1 + 0x10);
  piVar10 = piVar6 + (ulonglong)*(uint *)(param_1 + 0x18) * 6;
  for (; (piVar6 != piVar10 && (*piVar6 != param_2)); piVar6 = piVar6 + 6) {
  }
  plVar11 = (longlong *)(piVar6 + 2);
  if (piVar6 == piVar10) {
    plVar11 = (longlong *)0x0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (plVar11 == (longlong *)0x0) {
    piVar6 = *(int **)(param_1 + 0x10);
    uVar3 = *(uint *)(param_1 + 0x18);
    piVar10 = piVar6 + (ulonglong)uVar3 * 6;
    for (; (piVar6 != piVar10 && (*piVar6 != param_2)); piVar6 = piVar6 + 6) {
    }
    plVar11 = (longlong *)(piVar6 + 2);
    if (piVar6 == piVar10) {
      plVar11 = (longlong *)0x0;
    }
    if (plVar11 == (longlong *)0x0) {
      if (uVar3 < *(uint *)(param_1 + 0x1c)) {
LAB_1431628a3:
        uVar3 = *(uint *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x18) = uVar3 + 1;
        piVar10 = (int *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar3 * 0x18);
      }
      else {
        uVar1 = *(uint *)(param_1 + 0x1c) + 1;
        pvVar7 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 * 0x18);
        if (pvVar7 == (void *)0x0) goto LAB_1431628d1;
        pvVar9 = *(void **)(param_1 + 0x10);
        if ((pvVar9 != (void *)0x0) && (pvVar9 != pvVar7)) {
          uVar12 = (ulonglong)*(uint *)(param_1 + 0x18);
          if (uVar12 != 0) {
            lVar8 = 0;
            do {
              lVar4 = *(longlong *)(param_1 + 0x10);
              puVar2 = (undefined8 *)(lVar8 + lVar4);
              uVar5 = puVar2[1];
              *(undefined8 *)(lVar8 + (longlong)pvVar7) = *puVar2;
              ((undefined8 *)(lVar8 + (longlong)pvVar7))[1] = uVar5;
              *(undefined8 *)(lVar8 + 0x10 + (longlong)pvVar7) =
                   *(undefined8 *)(lVar8 + 0x10 + lVar4);
              uVar12 = uVar12 - 1;
              lVar8 = lVar8 + 0x18;
            } while (uVar12 != 0);
            pvVar9 = *(void **)(param_1 + 0x10);
          }
          AK::MemoryMgr::Free(g_DefaultPoolId,pvVar9);
        }
        piVar10 = (int *)0x0;
        *(void **)(param_1 + 0x10) = pvVar7;
        *(uint *)(param_1 + 0x1c) = uVar1;
        if (uVar3 < uVar1) goto LAB_1431628a3;
      }
      plVar11 = (longlong *)0x0;
      if (piVar10 != (int *)0x0) {
        *piVar10 = param_2;
        plVar11 = (longlong *)(piVar10 + 2);
      }
    }
LAB_1431628d1:
    if (plVar11 == (longlong *)0x0) goto LAB_143162917;
    plVar11[1] = *param_4;
  }
  else if (*plVar11 == param_3) {
    plVar11[1] = *param_4;
  }
  else if (*(int *)((longlong)param_4 + 4) != 2) {
    if ((int)*param_4 < (int)plVar11[1]) {
      *(int *)(plVar11 + 1) = (int)*param_4;
    }
    if (*(int *)((longlong)plVar11 + 0xc) != 1) {
      *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)param_4 + 4);
    }
  }
  *plVar11 = param_3;
LAB_143162917:
                    /* WARNING: Could not recover jumptable at 0x00014316292d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// FUNCTION 143162940 FUN_143162940 body=284 status=ok
// SIG undefined FUN_143162940(void)

void FUN_143162940(undefined8 *param_1,int param_2,int *param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  piVar4 = (int *)*param_1;
  piVar5 = piVar4 + (ulonglong)*(uint *)(param_1 + 1) * 10;
  for (; (piVar4 != piVar5 && ((*piVar4 != param_2 || (*(longlong *)(piVar4 + 2) != param_4))));
      piVar4 = piVar4 + 10) {
  }
  piVar6 = (int *)0x0;
  piVar7 = piVar4 + 4;
  if (piVar4 == piVar5) {
    piVar7 = piVar6;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (piVar7 == (int *)0x0) {
    piVar4 = (int *)*param_1;
    piVar5 = piVar4 + (ulonglong)*(uint *)(param_1 + 1) * 10;
    for (; (piVar4 != piVar5 && ((*piVar4 != param_2 || (*(longlong *)(piVar4 + 2) != param_4))));
        piVar4 = piVar4 + 10) {
    }
    piVar7 = piVar4 + 4;
    if (piVar4 == piVar5) {
      piVar7 = piVar6;
    }
    if (piVar7 == (int *)0x0) {
      piVar5 = (int *)FUN_143162070(param_1);
      if (piVar5 != (int *)0x0) {
        iStack_20 = (int)param_4;
        iStack_1c = (int)((ulonglong)param_4 >> 0x20);
        piVar6 = piVar5 + 4;
        *piVar5 = param_2;
        piVar5[1] = iStack_24;
        piVar5[2] = iStack_20;
        piVar5[3] = iStack_1c;
      }
      piVar7 = piVar6;
      if (piVar6 == (int *)0x0) goto LAB_143162a33;
    }
    if (*(int *)(param_1 + 1) != 0) {
      QueryPerformanceCounter((LARGE_INTEGER *)(param_1 + 9));
    }
  }
  iVar1 = param_3[1];
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  piVar7[2] = *param_3;
  piVar7[3] = iVar1;
  piVar7[4] = iVar2;
  piVar7[5] = iVar3;
  *(undefined8 *)piVar7 = param_1[9];
LAB_143162a33:
                    /* WARNING: Could not recover jumptable at 0x000143162a55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return;
}



// FUNCTION 143162a60 AddPowerVbap2d body=204 status=ok
// SIG undefined AddPowerVbap2d(void)

void AddPowerVbap2d(longlong param_1,undefined8 param_2,float *param_3,float param_4,
                   longlong param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar2 = 0;
  do {
    do {
      uVar1 = uVar2;
      uVar2 = (ulonglong)((int)uVar1 + 1);
      fVar5 = param_3[2] * *(float *)(param_1 + 4 + uVar1 * 0x10) +
              *param_3 * *(float *)(param_1 + uVar1 * 0x10);
    } while (fVar5 < 0.0);
    fVar4 = *param_3 * *(float *)(param_1 + 8 + uVar1 * 0x10) +
            param_3[2] * *(float *)(param_1 + 0xc + uVar1 * 0x10);
  } while (fVar4 < 0.0);
  uVar1 = (ulonglong)*(ushort *)(param_5 + 2 + uVar1 * 4);
  fVar3 = 1.0 / (fVar4 * fVar4 + fVar5 * fVar5);
  *(float *)(param_6 + uVar1 * 4) =
       fVar3 * fVar5 * fVar5 * param_4 + *(float *)(param_6 + uVar1 * 4);
  uVar2 = (ulonglong)*(ushort *)(param_5 + 2 + uVar2 * 4);
  *(float *)(param_6 + uVar2 * 4) =
       fVar3 * fVar4 * fVar4 * param_4 + *(float *)(param_6 + uVar2 * 4);
  return;
}



// FUNCTION 143162b30 BuildSphereTransformations body=1677 status=ok
// SIG undefined BuildSphereTransformations(void)

void BuildSphereTransformations
               (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
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
  float fVar21;
  
  fVar14 = param_1[6] - *param_3;
  fVar15 = param_1[7] - param_3[1];
  fVar18 = 0.0;
  fVar19 = param_1[8] - param_3[2];
  if (fVar15 * fVar15 + fVar14 * fVar14 + fVar19 * fVar19 <= 0.0) {
    *param_4 = 1.0;
    param_4[1] = 0.0;
    param_4[2] = 0.0;
    param_4[3] = 0.0;
    param_4[4] = 1.0;
    param_4[5] = 0.0;
    param_4[6] = 0.0;
    param_4[7] = 0.0;
    param_4[8] = 1.0;
  }
  else {
    fVar12 = fVar15 * param_2[1] + fVar14 * *param_2 + fVar19 * param_2[2];
    fVar10 = fVar15 * param_2[4] + fVar14 * param_2[3] + fVar19 * param_2[5];
    fVar14 = fVar15 * param_2[7] + fVar14 * param_2[6] + fVar19 * param_2[8];
    fVar19 = 1.0 / SQRT(fVar10 * fVar10 + fVar12 * fVar12 + fVar14 * fVar14);
    fVar12 = fVar19 * fVar12;
    fVar15 = -(fVar19 * fVar10);
    fVar19 = fVar19 * fVar14;
    fVar14 = fVar15 * fVar15 + fVar12 * fVar12;
    if (fVar14 <= 1.1920929e-07) {
      fVar10 = 0.0;
      fVar15 = 1.0;
      if (0.0 <= fVar19) {
        fVar19 = 1.0;
        fVar14 = 0.0;
        fVar12 = 1.0;
        fVar7 = 0.0;
        fVar13 = 0.0;
      }
      else {
        fVar14 = -0.0;
        fVar19 = -1.0;
        fVar12 = -1.0;
        fVar7 = -0.0;
        fVar13 = -0.0;
      }
    }
    else {
      fVar14 = SQRT(fVar14);
      fVar8 = 1.0 - fVar19;
      fVar12 = fVar12 * (1.0 / fVar14);
      fVar15 = fVar15 * (1.0 / fVar14);
      fVar10 = fVar15 * fVar14;
      fVar14 = fVar12 * fVar14;
      fVar13 = fVar12 * fVar15 * fVar8;
      fVar18 = -fVar10;
      fVar7 = -fVar14;
      fVar15 = fVar15 * fVar15 * fVar8 + fVar19;
      fVar12 = fVar12 * fVar12 * fVar8 + fVar19;
    }
    *param_4 = fVar15;
    param_4[1] = fVar13;
    param_4[2] = fVar7;
    param_4[3] = fVar13;
    param_4[4] = fVar12;
    param_4[5] = fVar10;
    param_4[6] = fVar14;
    param_4[7] = fVar18;
    param_4[8] = fVar19;
  }
  pfVar6 = param_4 + 1;
  fVar14 = param_1[3];
  fVar15 = param_1[1];
  fVar18 = *param_1;
  fVar19 = param_2[1];
  fVar10 = param_2[2];
  fVar12 = param_2[4];
  fVar7 = param_1[4];
  fVar13 = param_2[5];
  fVar8 = param_2[8];
  fVar1 = param_1[5];
  fVar11 = param_1[4] * param_1[2] - param_1[5] * fVar15;
  fVar9 = fVar14 * fVar15 - param_1[4] * fVar18;
  fVar20 = param_1[5] * fVar18 - fVar14 * param_1[2];
  fVar2 = *param_2;
  fVar16 = fVar11 * fVar2 + fVar20 * fVar19 + fVar9 * fVar10;
  fVar3 = param_2[3];
  fVar4 = param_2[6];
  fVar17 = fVar20 * fVar12 + fVar11 * fVar3 + fVar9 * fVar13;
  fVar5 = param_2[7];
  fVar21 = fVar20 * fVar5 + fVar11 * fVar4 + fVar8 * fVar9;
  fVar11 = fVar19 * fVar7 + fVar2 * fVar14 + fVar10 * fVar1;
  fVar20 = fVar12 * fVar7 + fVar3 * fVar14 + fVar13 * fVar1;
  fVar9 = param_1[2];
  fVar7 = fVar5 * fVar7 + fVar4 * fVar14 + fVar8 * fVar1;
  *param_5 = fVar17 * *pfVar6 + fVar16 * *param_4 + fVar21 * param_4[2];
  fVar10 = fVar2 * fVar18 + fVar19 * fVar15 + fVar10 * fVar9;
  fVar19 = fVar3 * fVar18 + fVar12 * fVar15 + fVar13 * fVar9;
  fVar14 = fVar4 * fVar18 + fVar5 * fVar15 + fVar8 * fVar9;
  param_5[1] = fVar16 * param_4[3] + fVar17 * param_4[4] + fVar21 * param_4[5];
  param_5[2] = fVar16 * param_4[6] + fVar17 * param_4[7] + fVar21 * param_4[8];
  param_5[3] = fVar20 * *pfVar6 + fVar11 * *param_4 + fVar7 * param_4[2];
  param_5[4] = fVar20 * param_4[4] + fVar11 * param_4[3] + fVar7 * param_4[5];
  param_5[5] = fVar20 * param_4[7] + fVar11 * param_4[6] + fVar7 * param_4[8];
  param_5[6] = fVar10 * *param_4 + fVar19 * *pfVar6 + fVar14 * param_4[2];
  param_5[7] = fVar19 * param_4[4] + fVar10 * param_4[3] + fVar14 * param_4[5];
  param_5[8] = fVar10 * param_4[6] + fVar19 * param_4[7] + fVar14 * param_4[8];
  return;
}



// FUNCTION 1431631c0 FUN_1431631c0 body=1616 status=ok
// SIG undefined FUN_1431631c0(void)

void FUN_1431631c0(uint param_1,ulonglong param_2,uint param_3,longlong param_4)

{
  void *_Dst;
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint local_res8;
  uint local_res10;
  
  uVar9 = 0;
  uVar6 = (ulonglong)param_3;
  uVar1 = (uint)(param_2 >> 0xc);
  uVar5 = uVar1 & 0xfffff;
  param_1 = param_1 >> 0xc;
  uVar1 = uVar1 & 0x737;
  uVar10 = 1;
  if (uVar1 < 0x604) {
    if (uVar1 == 0x603) {
      local_res10 = 0;
      uVar4 = 0;
      local_res8 = 0;
      uVar3 = 0;
      uVar1 = uVar10;
      if (param_1 != 0) {
        do {
          iVar8 = (int)uVar3;
          if ((param_1 & uVar1) != 0) {
            puVar7 = (undefined4 *)(param_4 + (ulonglong)((param_3 + 3 & 0xfffffffc) * uVar4) * 4);
            if (param_3 != 0) {
              _guard_xfg_dispatch_icall_nop(puVar7,0,uVar6 << 2);
              uVar3 = (ulonglong)local_res10;
              uVar4 = local_res8;
            }
            iVar8 = (int)uVar3;
            *puVar7 = (&DAT_145ac99e0)[uVar3 * 4];
            puVar7[1] = (&DAT_145ac99e4)[uVar3 * 4];
            puVar7[2] = (&DAT_145ac99e8)[uVar3 * 4];
            puVar7[3] = (&DAT_145ac99ec)[uVar3 * 4];
            if (4 < param_3) {
              puVar7 = puVar7 + 4;
              for (uVar3 = (ulonglong)(param_3 - 4); uVar3 != 0; uVar3 = uVar3 - 1) {
                *puVar7 = 0;
                puVar7 = puVar7 + 1;
              }
            }
            local_res8 = uVar4 + 1;
            uVar4 = local_res8;
          }
          local_res10 = iVar8 + 1;
          uVar3 = (ulonglong)local_res10;
          uVar1 = uVar1 * 2;
        } while (uVar1 <= param_1);
      }
    }
    else if (uVar1 == 3) {
      local_res10 = 0;
      uVar4 = 0;
      local_res8 = 0;
      uVar3 = 0;
      uVar1 = uVar10;
      if (param_1 != 0) {
        do {
          iVar8 = (int)uVar3;
          if ((param_1 & uVar1) != 0) {
            puVar7 = (undefined4 *)(param_4 + (ulonglong)((param_3 + 3 & 0xfffffffc) * uVar4) * 4);
            if (param_3 != 0) {
              _guard_xfg_dispatch_icall_nop(puVar7,0,uVar6 << 2);
              uVar3 = (ulonglong)local_res10;
              uVar4 = local_res8;
            }
            iVar8 = (int)uVar3;
            *puVar7 = (&DAT_145ac9870)[uVar3 * 2];
            puVar7[1] = (&DAT_145ac9874)[uVar3 * 2];
            if (2 < param_3) {
              puVar7 = puVar7 + 2;
              for (uVar3 = (ulonglong)(param_3 - 2); uVar3 != 0; uVar3 = uVar3 - 1) {
                *puVar7 = 0;
                puVar7 = puVar7 + 1;
              }
            }
            local_res8 = uVar4 + 1;
            uVar4 = local_res8;
          }
          local_res10 = iVar8 + 1;
          uVar3 = (ulonglong)local_res10;
          uVar1 = uVar1 * 2;
        } while (uVar1 <= param_1);
      }
    }
    else if (uVar1 == 4) {
      uVar4 = 0;
      uVar3 = 0;
      local_res10 = 0;
      local_res8 = 0;
      uVar1 = uVar10;
      if (param_1 != 0) {
        do {
          uVar2 = (uint)uVar3;
          if ((param_1 & uVar1) != 0) {
            puVar7 = (undefined4 *)(param_4 + (ulonglong)((param_3 + 3 & 0xfffffffc) * uVar4) * 4);
            if (param_3 != 0) {
              _guard_xfg_dispatch_icall_nop(puVar7,0,uVar6 << 2);
              uVar3 = (ulonglong)local_res8;
              uVar4 = local_res10;
            }
            *puVar7 = (&DAT_145ac9820)[uVar3];
            uVar2 = (uint)uVar3;
            if (1 < param_3) {
              for (uVar3 = (ulonglong)(param_3 - 1); puVar7 = puVar7 + 1, uVar2 = local_res8,
                  uVar3 != 0; uVar3 = uVar3 - 1) {
                *puVar7 = 0;
              }
            }
            local_res10 = uVar4 + 1;
            uVar4 = local_res10;
          }
          local_res8 = uVar2 + 1;
          uVar3 = (ulonglong)local_res8;
          uVar1 = uVar1 * 2;
        } while (uVar1 <= param_1);
      }
    }
    else if (uVar1 == 7) {
      local_res10 = 0;
      uVar4 = 0;
      local_res8 = 0;
      uVar3 = 0;
      uVar1 = uVar10;
      if (param_1 != 0) {
        do {
          iVar8 = (int)uVar3;
          if ((param_1 & uVar1) != 0) {
            puVar7 = (undefined4 *)(param_4 + (ulonglong)((param_3 + 3 & 0xfffffffc) * uVar4) * 4);
            if (param_3 != 0) {
              _guard_xfg_dispatch_icall_nop(puVar7,0,uVar6 << 2);
              uVar3 = (ulonglong)local_res10;
              uVar4 = local_res8;
            }
            iVar8 = (int)uVar3;
            *puVar7 = (&DAT_145ac9900)[uVar3 * 3];
            puVar7[1] = (&DAT_145ac9904)[uVar3 * 3];
            puVar7[2] = (&DAT_145ac9908)[uVar3 * 3];
            if (3 < param_3) {
              puVar7 = puVar7 + 3;
              for (uVar3 = (ulonglong)(param_3 - 3); uVar3 != 0; uVar3 = uVar3 - 1) {
                *puVar7 = 0;
                puVar7 = puVar7 + 1;
              }
            }
            local_res8 = uVar4 + 1;
            uVar4 = local_res8;
          }
          local_res10 = iVar8 + 1;
          uVar3 = (ulonglong)local_res10;
          uVar1 = uVar1 * 2;
        } while (uVar1 <= param_1);
      }
    }
  }
  else if (uVar1 == 0x607) {
    local_res10 = 0;
    uVar4 = 0;
    local_res8 = 0;
    uVar3 = 0;
    uVar1 = uVar10;
    if (param_1 != 0) {
      do {
        iVar8 = (int)uVar3;
        if ((param_1 & uVar1) != 0) {
          puVar7 = (undefined4 *)(param_4 + (ulonglong)((param_3 + 3 & 0xfffffffc) * uVar4) * 4);
          if (param_3 != 0) {
            _guard_xfg_dispatch_icall_nop(puVar7,0,uVar6 << 2);
            uVar3 = (ulonglong)local_res10;
            uVar4 = local_res8;
          }
          iVar8 = (int)uVar3;
          *puVar7 = (&DAT_145ac9b00)[uVar3 * 5];
          puVar7[1] = (&DAT_145ac9b04)[uVar3 * 5];
          puVar7[2] = (&DAT_145ac9b08)[uVar3 * 5];
          puVar7[3] = (&DAT_145ac9b0c)[uVar3 * 5];
          puVar7[4] = (&DAT_145ac9b10)[uVar3 * 5];
          if (5 < param_3) {
            puVar7 = puVar7 + 5;
            for (uVar3 = (ulonglong)(param_3 - 5); uVar3 != 0; uVar3 = uVar3 - 1) {
              *puVar7 = 0;
              puVar7 = puVar7 + 1;
            }
          }
          local_res8 = uVar4 + 1;
          uVar4 = local_res8;
        }
        local_res10 = iVar8 + 1;
        uVar3 = (ulonglong)local_res10;
        uVar1 = uVar1 * 2;
      } while (uVar1 <= param_1);
    }
  }
  else if (uVar1 == 0x633) {
    local_res10 = 0;
    uVar4 = 0;
    local_res8 = 0;
    uVar3 = 0;
    uVar1 = uVar10;
    if (param_1 != 0) {
      do {
        iVar8 = (int)uVar3;
        if ((param_1 & uVar1) != 0) {
          puVar7 = (undefined4 *)(param_4 + (ulonglong)((param_3 + 3 & 0xfffffffc) * uVar4) * 4);
          if (param_3 != 0) {
            _guard_xfg_dispatch_icall_nop(puVar7,0,uVar6 << 2);
            uVar3 = (ulonglong)local_res10;
            uVar4 = local_res8;
          }
          iVar8 = (int)uVar3;
          *puVar7 = (&DAT_145ac9c70)[uVar3 * 6];
          puVar7[1] = (&DAT_145ac9c74)[uVar3 * 6];
          puVar7[2] = (&DAT_145ac9c78)[uVar3 * 6];
          puVar7[3] = (&DAT_145ac9c7c)[uVar3 * 6];
          puVar7[4] = (&DAT_145ac9c80)[uVar3 * 6];
          puVar7[5] = (&DAT_145ac9c84)[uVar3 * 6];
          if (6 < param_3) {
            puVar7 = puVar7 + 6;
            for (uVar3 = (ulonglong)(param_3 - 6); uVar3 != 0; uVar3 = uVar3 - 1) {
              *puVar7 = 0;
              puVar7 = puVar7 + 1;
            }
          }
          local_res8 = uVar4 + 1;
          uVar4 = local_res8;
        }
        local_res10 = iVar8 + 1;
        uVar3 = (ulonglong)local_res10;
        uVar1 = uVar1 * 2;
      } while (uVar1 <= param_1);
    }
  }
  else if (uVar1 == 0x637) {
    local_res10 = 0;
    uVar4 = 0;
    local_res8 = 0;
    uVar3 = 0;
    uVar1 = uVar10;
    if (param_1 != 0) {
      do {
        iVar8 = (int)uVar3;
        if ((param_1 & uVar1) != 0) {
          puVar7 = (undefined4 *)(param_4 + (ulonglong)((param_3 + 3 & 0xfffffffc) * uVar4) * 4);
          if (param_3 != 0) {
            _guard_xfg_dispatch_icall_nop(puVar7,0,uVar6 << 2);
            uVar3 = (ulonglong)local_res10;
            uVar4 = local_res8;
          }
          iVar8 = (int)uVar3;
          *puVar7 = (&DAT_145ac9e20)[uVar3 * 7];
          puVar7[1] = (&DAT_145ac9e24)[uVar3 * 7];
          puVar7[2] = (&DAT_145ac9e28)[uVar3 * 7];
          puVar7[3] = (&DAT_145ac9e2c)[uVar3 * 7];
          puVar7[4] = (&DAT_145ac9e30)[uVar3 * 7];
          puVar7[5] = (&DAT_145ac9e34)[uVar3 * 7];
          puVar7[6] = (&DAT_145ac9e38)[uVar3 * 7];
          if (7 < param_3) {
            puVar7 = puVar7 + 7;
            for (uVar3 = (ulonglong)(param_3 - 7); uVar3 != 0; uVar3 = uVar3 - 1) {
              *puVar7 = 0;
              puVar7 = puVar7 + 1;
            }
          }
          local_res8 = uVar4 + 1;
          uVar4 = local_res8;
        }
        local_res10 = iVar8 + 1;
        uVar3 = (ulonglong)local_res10;
        uVar1 = uVar1 * 2;
      } while (uVar1 <= param_1);
    }
  }
  if (((param_2 >> 0xc & 0xff9c0) != 0) && ((param_1 & 0xff9c0) != 0)) {
    iVar8 = 0;
    for (uVar1 = param_1 & 0x63f; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      iVar8 = iVar8 + 1;
    }
    uVar1 = 0x800;
    if (0x7ff < param_1) {
      do {
        if ((uVar1 & param_1) != 0) {
          _Dst = (void *)(param_4 + (ulonglong)((param_3 + 3 & 0xfffffffc) * iVar8) * 4);
          if (param_3 != 0) {
            _guard_xfg_dispatch_icall_nop(_Dst,0,uVar6 << 2);
          }
          if ((uVar1 & uVar5) != 0) {
            for (; (uVar10 & uVar1) == 0; uVar10 = uVar10 * 2) {
              uVar4 = uVar9 + 1;
              if ((uVar10 & uVar5) == 0) {
                uVar4 = uVar9;
              }
              uVar9 = uVar4;
            }
            *(undefined4 *)((longlong)_Dst + (ulonglong)uVar9 * 4) = 0x3f800000;
          }
          iVar8 = iVar8 + 1;
        }
        uVar1 = uVar1 * 2;
      } while (uVar1 <= param_1);
    }
  }
  return;
}



// FUNCTION 143163810 ComputeNormalizedSphericalHarmonics body=139 status=ok
// SIG undefined ComputeNormalizedSphericalHarmonics(void)

void CAkSpeakerPan::ComputeNormalizedSphericalHarmonics
               (uint param_1,undefined4 param_2,undefined4 param_3,uint param_4,longlong param_5)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  float local_18 [4];
  
  iVar1 = 1;
  _ComputeSN3DphericalHarmonics(param_3,param_1 ^ 0x80000000,param_2,param_3,1,param_5);
  uVar3 = 0;
  local_18[0] = 1.0;
  local_18[1] = 1.7320508;
  local_18[2] = 2.236068;
  local_18[3] = 2.6457512;
  do {
    *(float *)(param_5 + uVar3 * 4) = local_18[iVar1 - 1] * *(float *)(param_5 + uVar3 * 4);
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar2;
    iVar1 = iVar1 + uVar2 / (uint)(iVar1 * iVar1);
  } while (uVar2 < param_4);
  return;
}



// FUNCTION 1431638a0 ComputePlanarVBAPGains body=624 status=ok
// SIG undefined ComputePlanarVBAPGains(void)

int CAkSpeakerPan::ComputePlanarVBAPGains
              (longlong param_1,float param_2,ulonglong param_3,undefined8 param_4,
              undefined1 (*param_5) [16])

{
  uint uVar1;
  longlong lVar2;
  undefined1 (*pauVar3) [16];
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar12 [16];
  float fVar13;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  uVar9 = (uint)param_3;
  uVar8 = param_3 & 0xffffffff;
  iVar7 = 1;
  if ((uVar9 & 0xf00) == 0x100) {
    uVar5 = (uint)(uVar8 >> 0xc);
    uVar4 = (uVar5 & 0xfffffff7) << 0xc;
    uVar1 = uVar9 - ((uint)(uVar8 >> 0xf) & 0x1ffe0001);
    uVar6 = uVar1 & 0xff | uVar4 | 0x100;
    if (1 < (byte)uVar1) {
      lVar2 = CAkKeyArray<AkChannelConfig,void_*,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkAssignmentMovePolicy<MapStruct<AkChannelConfig,void_*>_>_>
              ::Exists(param_1 + 0x78,uVar6);
      if (lVar2 == 0) {
        lVar2 = FUN_143129a00(param_1,uVar6);
        iVar7 = 2 - (uint)(lVar2 != 0);
      }
      if (((uVar4 & 0x4000) != 0) && (iVar7 == 1)) {
        uVar1 = (uVar4 & 0xffffb000) >> 0xc;
        uVar1 = uVar6 - ((uVar5 & 0xffff7) - uVar1 >> 2) & 0xff | 0x100 | uVar1 << 0xc;
        lVar2 = CAkKeyArray<AkChannelConfig,void_*,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkAssignmentMovePolicy<MapStruct<AkChannelConfig,void_*>_>_>
                ::Exists(param_1 + 0x78,uVar1);
        if (lVar2 == 0) {
          lVar2 = FUN_143129a00(param_1,uVar1);
          iVar7 = 2 - (uint)(lVar2 != 0);
        }
      }
      if (iVar7 != 1) {
        return iVar7;
      }
    }
  }
  uVar1 = (uint)(uVar8 >> 0xc);
  uVar5 = uVar1 & 0xffff7;
  uVar1 = uVar9 - (uVar1 - uVar5 >> 3) & 0xff;
  iVar7 = (int)(param_3 & 0xff);
  if (iVar7 != 0) {
    ::_guard_xfg_dispatch_icall_nop(param_5,0,(param_3 & 0xff) << 2);
  }
  if ((uVar5 == 3) && (*(int *)(param_1 + 0x54) == 1)) {
    fVar10 = ::_guard_xfg_dispatch_icall_nop(param_2);
    fVar13 = (fVar10 * 0.5 + 0.70710677) - fVar10 * 0.20710677 * fVar10;
    fVar13 = fVar13 * fVar13;
    fVar10 = (1.0 - fVar13) + *(float *)*param_5;
    auVar12 = ZEXT416((uint)fVar10);
    *(float *)(*param_5 + 4) = fVar13 + *(float *)(*param_5 + 4);
    *(float *)*param_5 = fVar10;
  }
  else {
    lVar2 = AkDevice::GetPanCache(param_1,uVar1 | uVar5 << 0xc | uVar9 & 0xf00);
    if (lVar2 == 0) {
      return 2;
    }
    uVar11 = __libm_sse2_sincosf_(param_2);
    local_38 = (undefined4)uVar11;
    local_30 = (undefined4)((ulonglong)uVar11 >> 0x20);
    local_34 = 0;
    uVar9 = uVar1 + 2;
    if (3 < uVar1) {
      uVar9 = uVar1;
    }
    auVar12._0_8_ =
         AddPowerVbap2d(lVar2,uVar9,&local_38,0x3f800000,
                        &DAT_1467bdd40 + (ulonglong)(uVar1 - 1) * 0x20,param_5);
    auVar12._8_8_ = extraout_XMM0_Qb;
  }
  pauVar3 = param_5 + (iVar7 + 3U >> 2);
  for (; param_5 < pauVar3; param_5 = param_5 + 1) {
    auVar12 = sqrtps(auVar12,*param_5);
    *param_5 = auVar12;
  }
  return 1;
}



// FUNCTION 143163b10 ConvertSpeakerAngles body=379 status=ok
// SIG undefined ConvertSpeakerAngles(void)

void CAkSpeakerPan::ConvertSpeakerAngles(ulonglong param_1,uint param_2,ulonglong param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  
  if (param_2 != 0) {
    uVar12 = 0;
    if ((0xf < param_2) &&
       ((param_1 + (ulonglong)(param_2 - 1) * 4 < param_3 ||
        (param_3 + (ulonglong)(param_2 - 1) * 4 < param_1)))) {
      uVar9 = 8;
      do {
        pfVar7 = (float *)(param_1 + uVar12 * 4);
        fVar2 = pfVar7[1];
        fVar3 = pfVar7[2];
        fVar4 = pfVar7[3];
        pfVar1 = (float *)(param_3 + uVar12 * 4);
        *pfVar1 = *pfVar7 * 360.0 * 0.15915494;
        pfVar1[1] = fVar2 * 360.0 * 0.15915494;
        pfVar1[2] = fVar3 * 360.0 * 0.15915494;
        pfVar1[3] = fVar4 * 360.0 * 0.15915494;
        uVar11 = (int)uVar12 + 0x10;
        uVar12 = (ulonglong)uVar11;
        pfVar7 = (float *)(param_1 + (ulonglong)(uVar9 - 4) * 4);
        fVar2 = pfVar7[1];
        fVar3 = pfVar7[2];
        fVar4 = pfVar7[3];
        pfVar1 = (float *)(param_3 + (ulonglong)(uVar9 - 4) * 4);
        *pfVar1 = *pfVar7 * 360.0 * 0.15915494;
        pfVar1[1] = fVar2 * 360.0 * 0.15915494;
        pfVar1[2] = fVar3 * 360.0 * 0.15915494;
        pfVar1[3] = fVar4 * 360.0 * 0.15915494;
        pfVar7 = (float *)(param_1 + (ulonglong)uVar9 * 4);
        fVar2 = pfVar7[1];
        fVar3 = pfVar7[2];
        fVar4 = pfVar7[3];
        pfVar1 = (float *)(param_3 + (ulonglong)uVar9 * 4);
        *pfVar1 = *pfVar7 * 360.0 * 0.15915494;
        pfVar1[1] = fVar2 * 360.0 * 0.15915494;
        pfVar1[2] = fVar3 * 360.0 * 0.15915494;
        pfVar1[3] = fVar4 * 360.0 * 0.15915494;
        uVar5 = uVar9 + 4;
        uVar9 = uVar9 + 0x10;
        pfVar7 = (float *)(param_1 + (ulonglong)uVar5 * 4);
        fVar2 = pfVar7[1];
        fVar3 = pfVar7[2];
        fVar4 = pfVar7[3];
        pfVar1 = (float *)(param_3 + (ulonglong)uVar5 * 4);
        *pfVar1 = *pfVar7 * 360.0 * 0.15915494;
        pfVar1[1] = fVar2 * 360.0 * 0.15915494;
        pfVar1[2] = fVar3 * 360.0 * 0.15915494;
        pfVar1[3] = fVar4 * 360.0 * 0.15915494;
      } while (uVar11 < (param_2 & 0xfffffff0));
    }
    uVar9 = (uint)uVar12;
    if (uVar9 < param_2) {
      if (3 < param_2 - uVar9) {
        lVar6 = uVar12 + 1;
        lVar8 = param_1 - param_3;
        uVar5 = ((param_2 - uVar9) - 4 >> 2) + 1;
        uVar10 = (ulonglong)uVar5;
        uVar12 = (ulonglong)(uVar9 + uVar5 * 4);
        pfVar7 = (float *)(param_3 + lVar6 * 4);
        do {
          pfVar1 = pfVar7 + 4;
          pfVar7[-1] = *(float *)((longlong)pfVar7 + lVar8 + -4) * 57.295776;
          *pfVar7 = *(float *)(lVar8 + -0x10 + (longlong)pfVar1) * 57.295776;
          pfVar7[1] = *(float *)(lVar8 + -0xc + (longlong)pfVar1) * 57.295776;
          pfVar7[2] = *(float *)(lVar8 + -8 + (longlong)pfVar1) * 57.295776;
          uVar10 = uVar10 - 1;
          pfVar7 = pfVar1;
        } while (uVar10 != 0);
      }
      if ((uint)uVar12 < param_2) {
        uVar10 = (ulonglong)(param_2 - (uint)uVar12);
        pfVar7 = (float *)(param_3 + uVar12 * 4);
        do {
          *pfVar7 = *(float *)((param_1 - param_3) + (longlong)pfVar7) * 57.295776;
          uVar10 = uVar10 - 1;
          pfVar7 = pfVar7 + 1;
        } while (uVar10 != 0);
      }
    }
  }
  return;
}



// FUNCTION 143163c90 CopyRotatedCopiesOntoChannels body=572 status=ok
// SIG undefined CopyRotatedCopiesOntoChannels(void)

void CopyRotatedCopiesOntoChannels(uint param_1,int param_2,longlong param_3,float *param_4)

{
  float *pfVar1;
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
  float *pfVar18;
  float *pfVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  uVar20 = (ulonglong)param_1;
  if (param_1 != 0) {
    pfVar19 = (float *)(&DAT_145aca068 + (ulonglong)(param_1 - 1) * 0x54);
    do {
      fVar2 = *pfVar19;
      fVar21 = -pfVar19[-2];
      fVar3 = pfVar19[-2];
      fVar4 = pfVar19[-1];
      fVar5 = *pfVar19;
      pfVar18 = (float *)(param_3 + 0x20);
      do {
        fVar6 = pfVar18[-4];
        fVar7 = pfVar18[-3];
        fVar8 = pfVar18[-2];
        fVar9 = pfVar18[4];
        fVar10 = pfVar18[5];
        fVar11 = pfVar18[6];
        fVar12 = pfVar18[-8];
        fVar13 = pfVar18[-7];
        fVar14 = pfVar18[-6];
        fVar15 = *pfVar18;
        fVar16 = pfVar18[1];
        fVar17 = pfVar18[2];
        pfVar1 = pfVar18 + 8;
        fVar22 = fVar13 * 0.0;
        fVar23 = fVar7 * 0.0;
        fVar24 = fVar16 * 0.0;
        fVar25 = fVar10 * 0.0;
        fVar26 = fVar12 * fVar21 + fVar22 + fVar14 * fVar5;
        fVar27 = fVar6 * fVar21 + fVar23 + fVar8 * fVar5;
        fVar28 = fVar15 * fVar21 + fVar24 + fVar17 * fVar5;
        fVar29 = fVar9 * fVar21 + fVar25 + fVar11 * fVar5;
        *param_4 = fVar12 * fVar2 + fVar22 + fVar14 * fVar3;
        param_4[1] = fVar13 * 1.0 + fVar12 * 0.0 + fVar14 * fVar4;
        param_4[2] = fVar26;
        param_4[3] = fVar26;
        param_4[4] = fVar6 * fVar2 + fVar23 + fVar8 * fVar3;
        param_4[5] = fVar7 * 1.0 + fVar6 * 0.0 + fVar8 * fVar4;
        param_4[6] = fVar27;
        param_4[7] = fVar27;
        param_4[8] = fVar15 * fVar2 + fVar24 + fVar17 * fVar3;
        param_4[9] = fVar16 * 1.0 + fVar15 * 0.0 + fVar17 * fVar4;
        param_4[10] = fVar28;
        param_4[0xb] = fVar28;
        param_4[0xc] = fVar9 * fVar2 + fVar25 + fVar11 * fVar3;
        param_4[0xd] = fVar10 * 1.0 + fVar9 * 0.0 + fVar11 * fVar4;
        param_4[0xe] = fVar29;
        param_4[0xf] = fVar29;
        param_4 = param_4 + 0x10;
        pfVar18 = pfVar18 + 0x10;
      } while (pfVar1 < (float *)(param_3 + (ulonglong)(uint)(param_2 * 4) * 4));
      pfVar19 = pfVar19 + 3;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  return;
}



// FUNCTION 143163ed0 CreatePanCache2D body=1870 status=ok
// SIG undefined CreatePanCache2D(void)

void CAkSpeakerPan::CreatePanCache2D(byte param_1,undefined4 *param_2,longlong *param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  float *pfVar9;
  float *pfVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  float fVar14;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float local_2d8 [4];
  undefined4 local_2c8;
  undefined4 local_2c4;
  uint local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  uint local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  float local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined8 local_29c;
  undefined8 local_294;
  undefined8 local_28c;
  undefined8 local_284;
  undefined4 local_27c;
  float local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined8 local_26c;
  undefined4 local_264;
  float local_260;
  undefined4 local_25c;
  undefined4 local_258;
  uint local_254;
  undefined4 local_250;
  undefined4 local_24c;
  uint local_248;
  undefined4 local_244;
  undefined4 local_240;
  float local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  uint local_218;
  undefined4 local_214;
  undefined4 local_210;
  float local_20c;
  undefined4 local_208;
  undefined4 local_204;
  float local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  uint local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  uint local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined8 local_1d4;
  undefined8 local_1cc;
  undefined8 local_1c4;
  undefined4 local_1bc;
  uint local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  float local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined4 local_198;
  float local_194;
  undefined4 local_190;
  undefined4 local_18c;
  uint local_188;
  undefined4 local_184;
  undefined4 local_180;
  uint local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  uint local_158;
  undefined4 local_154;
  undefined4 local_150;
  uint local_14c;
  undefined4 local_148;
  undefined4 local_144;
  float local_140;
  undefined4 local_13c;
  undefined4 local_138;
  float local_134;
  undefined4 local_130;
  undefined4 local_12c;
  uint local_128;
  undefined4 local_124;
  undefined4 local_120;
  uint local_11c;
  undefined4 local_118;
  undefined4 local_114;
  uint local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  uint local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  uint local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  float local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  float local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  uint local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  uint local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 uVar15;
  
  pvVar6 = (void *)*param_3;
  uVar4 = param_1 + 2;
  if (3 < param_1) {
    uVar4 = (uint)param_1;
  }
  if (pvVar6 == (void *)0x0) {
    pvVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar4 << 4);
    *param_3 = (longlong)pvVar6;
    if (pvVar6 == (void *)0x0) {
      return;
    }
  }
  uVar15 = __libm_sse2_sincosf_(*param_2);
  uVar16 = (undefined4)((ulonglong)uVar15 >> 0x20);
  fVar14 = (float)uVar15;
  fVar2 = (float)param_2[1];
  uVar15 = __libm_sse2_sincosf_(fVar2);
  uVar17 = (undefined4)((ulonglong)uVar15 >> 0x20);
  uVar5 = (uint)uVar15;
  fVar3 = (float)param_2[2];
  uVar15 = __libm_sse2_sincosf_((fVar3 - fVar2) * 0.5 + fVar2);
  uVar18 = (undefined4)((ulonglong)uVar15 >> 0x20);
  uVar13 = (uint)uVar15;
  uVar15 = __libm_sse2_sincosf_(fVar3);
  local_2b8 = (undefined4)((ulonglong)uVar15 >> 0x20);
  local_2c0 = (uint)uVar15;
  local_2d8[2] = (float)uVar16;
  local_2d8[0] = -fVar14;
  local_2b4 = local_2c0 ^ 0x80000000;
  local_2ac = local_2b8;
  local_2a8 = local_2d8[0];
  local_278 = local_2d8[0];
  local_24c = local_2b8;
  local_248 = local_2b4;
  local_240 = local_2b8;
  local_23c = local_2d8[0];
  local_2d8[3] = fVar14;
  local_2c4 = uVar16;
  local_2a0 = uVar16;
  local_270 = uVar16;
  local_260 = fVar14;
  local_258 = uVar16;
  local_254 = local_2c0;
  local_234 = uVar16;
  local_2d8[1] = 0.0;
  local_2c8 = 0;
  local_2bc = 0;
  local_2b0 = 0;
  local_2a4 = 0;
  local_29c = 0;
  local_294 = 0;
  local_28c = 0;
  local_284 = 0;
  local_27c = 0;
  local_274 = 0;
  local_26c = 0;
  local_264 = 0x3f800000;
  local_25c = 0;
  local_250 = 0;
  local_244 = 0;
  local_238 = 0;
  local_210 = uVar18;
  local_218 = uVar13 ^ 0x80000000;
  local_20c = local_2d8[0];
  local_1e8 = local_218;
  local_1b8 = local_218;
  local_17c = local_218;
  local_204 = uVar16;
  local_14c = uVar5 ^ 0x80000000;
  local_ec = uVar5 ^ 0x80000000;
  local_200 = fVar14;
  local_1f8 = uVar16;
  local_1f4 = uVar13;
  local_1ec = uVar18;
  local_1e0 = uVar18;
  local_1b0 = uVar18;
  local_1ac = local_2d8[0];
  local_1a4 = uVar16;
  local_194 = fVar14;
  local_18c = uVar16;
  local_188 = uVar13;
  local_180 = uVar18;
  local_174 = uVar18;
  local_158 = local_2b4;
  local_150 = local_2b8;
  local_144 = uVar17;
  local_140 = local_2d8[0];
  local_138 = uVar16;
  local_134 = fVar14;
  local_12c = uVar16;
  local_128 = uVar5;
  local_120 = uVar17;
  local_11c = local_2c0;
  local_114 = local_2b8;
  local_110 = local_2b4;
  local_108 = local_2b8;
  local_f8 = local_2b4;
  local_f0 = local_2b8;
  local_e4 = uVar17;
  local_e0 = local_2d8[0];
  local_d8 = uVar16;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_214 = 0;
  local_208 = 0;
  local_1fc = 0;
  local_1f0 = 0;
  local_1e4 = 0;
  local_1dc = 0;
  local_1d4 = 0;
  local_1cc = 0;
  local_1c4 = 0;
  local_1bc = 0;
  local_1b4 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0x3f800000;
  local_190 = 0;
  local_184 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_154 = 0;
  local_148 = 0;
  local_13c = 0;
  local_130 = 0;
  local_124 = 0;
  local_118 = 0;
  local_10c = 0;
  local_104 = 0;
  local_fc = 0;
  local_f4 = 0;
  local_e8 = 0;
  local_dc = 0;
  local_d4 = 0;
  local_cc = 0x3f800000;
  uVar11 = 0;
  local_c8 = fVar14;
  local_c0 = uVar16;
  local_bc = uVar5;
  local_b4 = uVar17;
  local_b0 = local_2c0;
  local_a8 = local_2b8;
  local_a4 = local_2b4;
  local_9c = local_2b8;
  local_c4 = 0;
  local_b8 = 0;
  local_ac = 0;
  local_a0 = 0;
  if (3 < uVar4) {
    lVar1 = (ulonglong)(param_1 - 2) * 8;
    pfVar10 = local_2d8 + (ulonglong)(param_1 - 2) * 0x18 + 5;
    uVar13 = 2;
    uVar5 = (uVar4 - 4 >> 2) + 1;
    pfVar9 = (float *)((longlong)pvVar6 + 8);
    uVar12 = (ulonglong)uVar5;
    uVar11 = (ulonglong)(uVar5 * 4);
    do {
      fVar2 = pfVar10[-5];
      lVar7 = (ulonglong)(uVar13 - 1) + lVar1;
      fVar3 = local_2d8[lVar7 * 3 + 2];
      fVar14 = local_2d8[lVar7 * 3];
      fVar19 = 1.0 / (fVar2 * fVar3 - pfVar10[-3] * fVar14);
      *pfVar9 = -(pfVar10[-3] * fVar19);
      fVar20 = *pfVar10;
      pfVar9[-1] = -(fVar14 * fVar19);
      fVar14 = local_2d8[((ulonglong)uVar13 + lVar1) * 3];
      pfVar9[1] = fVar2 * fVar19;
      fVar2 = pfVar10[-2];
      pfVar9[-2] = fVar3 * fVar19;
      fVar3 = local_2d8[((ulonglong)uVar13 + lVar1) * 3 + 2];
      lVar7 = (ulonglong)(uVar13 + 1) + lVar1;
      lVar8 = (ulonglong)(uVar13 + 2) + lVar1;
      fVar19 = 1.0 / (fVar2 * fVar3 - fVar20 * fVar14);
      pfVar9[4] = -(fVar20 * fVar19);
      fVar20 = pfVar10[3];
      pfVar9[3] = -(fVar14 * fVar19);
      fVar14 = local_2d8[lVar7 * 3];
      pfVar9[5] = fVar2 * fVar19;
      fVar2 = pfVar10[1];
      pfVar9[2] = fVar3 * fVar19;
      fVar3 = local_2d8[lVar7 * 3 + 2];
      fVar19 = 1.0 / (fVar2 * fVar3 - fVar20 * fVar14);
      pfVar9[9] = fVar2 * fVar19;
      fVar2 = pfVar10[4];
      pfVar9[6] = fVar3 * fVar19;
      fVar3 = local_2d8[lVar8 * 3 + 2];
      pfVar9[7] = -(fVar14 * fVar19);
      fVar14 = local_2d8[lVar8 * 3];
      pfVar9[8] = -(fVar20 * fVar19);
      fVar20 = pfVar10[6];
      pfVar10 = pfVar10 + 0xc;
      uVar13 = uVar13 + 4;
      fVar19 = 1.0 / (fVar2 * fVar3 - fVar20 * fVar14);
      pfVar9[0xb] = -(fVar14 * fVar19);
      pfVar9[0xc] = -(fVar20 * fVar19);
      pfVar9[10] = fVar3 * fVar19;
      pfVar9[0xd] = fVar2 * fVar19;
      pfVar9 = pfVar9 + 0x10;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  if ((uint)uVar11 < uVar4) {
    lVar1 = (ulonglong)(param_1 - 2) * 8;
    pfVar10 = (float *)(uVar11 * 0x10 + 8 + (longlong)pvVar6);
    pfVar9 = local_2d8 + (lVar1 + uVar11) * 3;
    do {
      fVar2 = *pfVar9;
      uVar5 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar5;
      fVar3 = pfVar9[2];
      lVar7 = uVar11 + lVar1;
      pfVar9 = pfVar9 + 3;
      fVar14 = local_2d8[lVar7 * 3 + 2];
      fVar20 = 1.0 / (fVar2 * fVar14 - fVar3 * local_2d8[lVar7 * 3]);
      pfVar10[-1] = -(local_2d8[lVar7 * 3] * fVar20);
      *pfVar10 = -(fVar3 * fVar20);
      pfVar10[-2] = fVar14 * fVar20;
      pfVar10[1] = fVar2 * fVar20;
      pfVar10 = pfVar10 + 4;
    } while (uVar5 < uVar4);
  }
  return;
}



// FUNCTION 143164620 CreatePanCache3D body=734 status=ok
// SIG undefined CreatePanCache3D(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CAkSpeakerPan::CreatePanCache3D
               (ulonglong param_1,uint *param_2,undefined4 param_3,longlong *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  void *_Dst;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  float fVar12;
  undefined8 auStack_40 [5];
  
  uVar11 = param_1 & 0xff;
  uVar7 = uVar11 * 0xc + 0xf;
  if (uVar7 <= uVar11 * 0xc) {
    uVar7 = 0xffffffffffffff0;
  }
  auStack_40[0] = 0x14316466f;
  uVar2 = *param_2;
  lVar5 = -(uVar7 & 0xfffffffffffffff0);
  param_1 = param_1 >> 0xc;
  uVar10 = (uint)param_1 & 0xfffff;
  uVar8 = 2;
  puVar1 = (undefined4 *)(&stack0xffffffffffffffe8 + lVar5);
  *(uint *)(&stack0xffffffffffffffec + lVar5) = uVar2;
  *(uint *)(&stack0xfffffffffffffff8 + lVar5) = uVar2 ^ 0x80000000;
  *(undefined4 *)(&stack0xfffffffffffffff0 + lVar5) = 0;
  *puVar1 = 0x3f800000;
  *(undefined4 *)(&stack0xfffffffffffffffc + lVar5) = 0;
  *(undefined4 *)(&stack0xfffffffffffffff4 + lVar5) = 0x3f800000;
  if ((param_1 & 4) != 0) {
    *(undefined8 *)(&stack0x00000004 + lVar5) = 0;
    uVar8 = 3;
    *(undefined4 *)(&stack0x00000000 + lVar5) = 0x3f800000;
  }
  if ((param_1 & 0x210) != 0) {
    fVar12 = (float)param_2[2];
    if (((uint)param_1 & 0x210) == 0x210) {
      uVar7 = (ulonglong)uVar8;
      uVar9 = (ulonglong)(uVar8 + 1);
      *(float *)(&stack0xffffffffffffffec + uVar7 * 0xc + lVar5) = fVar12;
      *(undefined4 *)(&stack0xfffffffffffffff0 + uVar7 * 0xc + lVar5) = 0;
      puVar1[uVar7 * 3] = 0x3f800000;
      *(float *)(&stack0xffffffffffffffec + uVar9 * 0xc + lVar5) = -fVar12;
      uVar8 = uVar8 + 2;
      *(undefined4 *)(&stack0xfffffffffffffff0 + uVar9 * 0xc + lVar5) = 0;
      puVar1[uVar9 * 3] = 0x3f800000;
      fVar12 = (float)param_2[1];
    }
    else {
      fVar12 = (fVar12 - (float)param_2[1]) * 0.5 + (float)param_2[1];
    }
    uVar7 = (ulonglong)uVar8;
    uVar9 = (ulonglong)(uVar8 + 1);
    *(float *)(&stack0xffffffffffffffec + uVar7 * 0xc + lVar5) = fVar12;
    *(undefined4 *)(&stack0xfffffffffffffff0 + uVar7 * 0xc + lVar5) = 0;
    puVar1[uVar7 * 3] = 0x3f800000;
    *(float *)(&stack0xffffffffffffffec + uVar9 * 0xc + lVar5) = -fVar12;
    uVar8 = uVar8 + 2;
    *(undefined4 *)(&stack0xfffffffffffffff0 + uVar9 * 0xc + lVar5) = 0;
    puVar1[uVar9 * 3] = 0x3f800000;
  }
  if ((uVar10 >> 0xb & 1) != 0) {
    uVar7 = (ulonglong)uVar8;
    uVar8 = uVar8 + 1;
    *(undefined4 *)(&stack0xffffffffffffffec + uVar7 * 0xc + lVar5) = 0;
    *(undefined4 *)(&stack0xfffffffffffffff0 + uVar7 * 0xc + lVar5) = 0x3fc90fdb;
    puVar1[uVar7 * 3] = 0x3f800000;
  }
  if ((uVar10 >> 0xc & 1) != 0) {
    uVar7 = (ulonglong)uVar8;
    uVar8 = uVar8 + 1;
    *(uint *)(&stack0xffffffffffffffec + uVar7 * 0xc + lVar5) = uVar2;
    *(undefined4 *)(&stack0xfffffffffffffff0 + uVar7 * 0xc + lVar5) = param_3;
    puVar1[uVar7 * 3] = 0x3f800000;
  }
  if ((uVar10 >> 0xd & 1) != 0) {
    uVar7 = (ulonglong)uVar8;
    uVar8 = uVar8 + 1;
    *(undefined4 *)(&stack0xfffffffffffffff0 + uVar7 * 0xc + lVar5) = param_3;
    *(undefined8 *)(puVar1 + uVar7 * 3) = 0x3f800000;
  }
  if ((uVar10 >> 0xe & 1) != 0) {
    uVar7 = (ulonglong)uVar8;
    uVar8 = uVar8 + 1;
    *(uint *)(&stack0xffffffffffffffec + uVar7 * 0xc + lVar5) = uVar2 ^ 0x80000000;
    *(undefined4 *)(&stack0xfffffffffffffff0 + uVar7 * 0xc + lVar5) = param_3;
    puVar1[uVar7 * 3] = 0x3f800000;
  }
  uVar2 = param_2[2];
  if ((uVar10 >> 0xf & 1) != 0) {
    uVar7 = (ulonglong)uVar8;
    uVar8 = uVar8 + 1;
    *(uint *)(&stack0xffffffffffffffec + uVar7 * 0xc + lVar5) = uVar2;
    *(undefined4 *)(&stack0xfffffffffffffff0 + uVar7 * 0xc + lVar5) = param_3;
    puVar1[uVar7 * 3] = 0x3f800000;
  }
  uVar7 = (ulonglong)uVar8;
  if ((uVar10 >> 0x10 & 1) != 0) {
    *(undefined4 *)(&stack0xfffffffffffffff0 + uVar7 * 0xc + lVar5) = param_3;
    *(undefined8 *)(puVar1 + uVar7 * 3) = 0x3f800000;
  }
  if ((uVar10 >> 0x11 & 1) != 0) {
    *(uint *)(&stack0xffffffffffffffec + uVar7 * 0xc + lVar5) = uVar2 ^ 0x80000000;
    *(undefined4 *)(&stack0xfffffffffffffff0 + uVar7 * 0xc + lVar5) = param_3;
    puVar1[uVar7 * 3] = 0x3f800000;
  }
  lVar3 = *param_4;
  *param_4 = 0;
  pcVar4 = *(code **)(PTR_PTR_1467be0f8 + 8);
  *(undefined8 *)((longlong)auStack_40 + lVar5) = 0x143164861;
  _Dst = (void *)(*pcVar4)(&PTR_PTR_1467be0f8);
  if (_Dst != (void *)0x0) {
    *(undefined8 *)((longlong)auStack_40 + lVar5) = 0x143164877;
    ::_guard_xfg_dispatch_icall_nop(_Dst,0,0x60);
    *(undefined8 *)((longlong)auStack_40 + lVar5) = 0x143164889;
    iVar6 = AkVBAPMap::Allocate(_Dst,&PTR_PTR_1467be0f8,uVar11);
    if (iVar6 == 1) {
      *(undefined8 *)((longlong)auStack_40 + lVar5) = 0x1431648b5;
      AkVBAPMap::PointsToVBAPMap(_Dst,puVar1,uVar11);
    }
    else {
      pcVar4 = *(code **)(PTR_PTR_1467be0f8 + 0x10);
      *(undefined8 *)((longlong)auStack_40 + lVar5) = 0x1431648a2;
      (*pcVar4)(&PTR_PTR_1467be0f8,_Dst);
      _Dst = (void *)0x0;
    }
  }
  *param_4 = (longlong)_Dst;
  if ((lVar3 != 0) && (_Dst != (void *)0x0)) {
    *(undefined8 *)((longlong)auStack_40 + lVar5) = 0x1431648d1;
    AkVBAPMap::Term(lVar3,&PTR_PTR_1467be0f8);
    pcVar4 = *(code **)(PTR_PTR_1467be0f8 + 0x10);
    *(undefined8 *)((longlong)auStack_40 + lVar5) = 0x1431648e5;
    (*pcVar4)(&PTR_PTR_1467be0f8,lVar3);
  }
  return;
}



// FUNCTION 143164900 CreatePanCache body=21 status=ok
// SIG undefined CreatePanCache(void)

void CAkSpeakerPan::CreatePanCache
               (uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((param_1 & 0xff9c0000) == 0) {
    CreatePanCache2D(param_1,param_2,param_4);
    return;
  }
  CreatePanCache3D();
  return;
}



// FUNCTION 143164920 CreateSpreadCache body=1108 status=ok
// SIG undefined CreateSpreadCache(void)

undefined8 CAkSpeakerPan::CreateSpreadCache(uint param_1,float param_2,longlong *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  float *pfVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar15 = (1.0 / (float)(param_1 & 0x7fffffff)) * 3.1415927;
  uVar5 = (ulonglong)(fVar15 * param_2 + 1.01);
  uVar4 = (uint)uVar5;
  if ((int)param_1 < 0) {
    uVar4 = uVar4 + (uVar4 & 1);
    cVar1 = FUN_143169880(param_3,uVar4 * 8);
    if (cVar1 != '\x01') {
      return 2;
    }
    pfVar3 = (float *)*param_3;
    fVar15 = ::_guard_xfg_dispatch_icall_nop(fVar15);
    fVar16 = (1.0 - fVar15) / (float)uVar4;
    fVar15 = fVar16 * 0.5 + fVar15;
    if (uVar4 != 0) {
      uVar6 = __libm_sse2_sincosf_(0);
      uVar7 = __libm_sse2_sincosf_(0x3f490fdb);
      uVar8 = __libm_sse2_sincosf_(0x3fc90fdb);
      uVar9 = __libm_sse2_sincosf_(0x4016cbe4);
      uVar10 = __libm_sse2_sincosf_(0x40490fdb);
      uVar11 = __libm_sse2_sincosf_(0x407b53d2);
      uVar12 = __libm_sse2_sincosf_(0x4096cbe4);
      uVar13 = __libm_sse2_sincosf_(0x40afede0);
      uVar5 = (ulonglong)uVar4;
      do {
        pfVar3[2] = fVar15;
        fVar14 = fVar15 * fVar15;
        pfVar3[3] = 0.0;
        pfVar3[6] = fVar15;
        pfVar3[10] = fVar15;
        pfVar3[0xe] = fVar15;
        pfVar3[0x12] = fVar15;
        pfVar3[0x16] = fVar15;
        pfVar3[0x1a] = fVar15;
        pfVar3[0x1e] = fVar15;
        fVar15 = fVar15 + fVar16;
        fVar14 = SQRT(1.0 - fVar14);
        pfVar3[7] = 0.0;
        pfVar3[0xb] = 0.0;
        pfVar3[0xf] = 0.0;
        pfVar3[0x13] = 0.0;
        pfVar3[0x17] = 0.0;
        pfVar3[0x1b] = 0.0;
        pfVar3[0x1f] = 0.0;
        *pfVar3 = (float)((ulonglong)uVar6 >> 0x20) * fVar14;
        pfVar3[1] = (float)uVar6 * fVar14;
        pfVar3[4] = (float)((ulonglong)uVar7 >> 0x20) * fVar14;
        pfVar3[5] = (float)uVar7 * fVar14;
        pfVar3[8] = (float)((ulonglong)uVar8 >> 0x20) * fVar14;
        pfVar3[9] = (float)uVar8 * fVar14;
        pfVar3[0xc] = (float)((ulonglong)uVar9 >> 0x20) * fVar14;
        pfVar3[0xd] = (float)uVar9 * fVar14;
        pfVar3[0x10] = (float)((ulonglong)uVar10 >> 0x20) * fVar14;
        pfVar3[0x11] = (float)uVar10 * fVar14;
        pfVar3[0x14] = (float)((ulonglong)uVar11 >> 0x20) * fVar14;
        pfVar3[0x15] = (float)uVar11 * fVar14;
        pfVar3[0x18] = (float)((ulonglong)uVar12 >> 0x20) * fVar14;
        pfVar3[0x19] = (float)uVar12 * fVar14;
        pfVar3[0x1c] = (float)((ulonglong)uVar13 >> 0x20) * fVar14;
        pfVar3[0x1d] = (float)uVar13 * fVar14;
        pfVar3 = pfVar3 + 0x20;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  else {
    if ((uVar5 & 3) != 0) {
      uVar5 = (ulonglong)(uVar4 + (4 - (uVar4 & 3)));
    }
    cVar1 = FUN_143169880(param_3,uVar5 & 0xffffffff);
    if (cVar1 != '\x01') {
      return 2;
    }
    puVar2 = (undefined4 *)*param_3;
    uVar4 = 0;
    fVar15 = fVar15 / (float)(uVar5 & 0xffffffff);
    fVar16 = (float)((uint)uVar5 - 1) * fVar15;
    do {
      uVar6 = __libm_sse2_sincosf_(-fVar16);
      *puVar2 = (int)uVar6;
      fVar16 = fVar16 - (fVar15 + fVar15);
      uVar4 = uVar4 + 1;
      puVar2[2] = (int)((ulonglong)uVar6 >> 0x20);
      puVar2[1] = 0;
      puVar2[3] = 0;
      puVar2 = puVar2 + 4;
    } while (uVar4 < (uint)uVar5);
  }
  return 1;
}



// FUNCTION 143164d80 FUN_143164d80 body=2977 status=ok
// SIG undefined FUN_143164d80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143164d80(uint param_1,uint param_2,undefined4 *param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *pvVar6;
  longlong lVar7;
  undefined8 uVar8;
  bool bVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  ulonglong *puVar13;
  undefined1 (*pauVar14) [16];
  void *pvVar15;
  uint *puVar16;
  uint *puVar17;
  ulonglong uVar18;
  float *pfVar19;
  uint *puVar20;
  ulonglong *puVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  undefined4 *puVar28;
  uint uVar29;
  undefined1 *puVar30;
  ulonglong uVar31;
  undefined8 *puVar32;
  longlong lVar33;
  undefined1 (*pauVar34) [16];
  int iVar35;
  uint uVar36;
  undefined *puVar37;
  uint uVar38;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  uint local_res10;
  undefined8 uStack_1f0;
  undefined1 auStack_1e8 [32];
  longlong alStack_1c8 [2];
  undefined8 local_1b8;
  float local_1b0 [2];
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  undefined8 local_190;
  undefined8 local_188;
  longlong *local_180;
  uint local_178;
  ulonglong local_170;
  void *local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
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
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  puVar30 = auStack_1e8;
  uVar36 = param_2 >> 0xc;
  uVar22 = uVar36 & 0xffff7;
  uVar11 = param_2 - (uVar36 - uVar22 >> 3);
  uVar38 = param_2 & 0xf00;
  uVar29 = uVar11 & 0xff;
  if (uVar29 == 1) {
    *param_3 = 0x3f800000;
    return;
  }
  if ((uVar22 - 3 & 0xfffffffb) == 0) {
    param_3[1] = 0x3f000000;
    *param_3 = 0x3f000000;
    param_1 = param_1 & 0xff;
    if (param_1 < 2) {
      return;
    }
    uVar29 = (param_2 & 0xff) + 3 >> 2;
    uVar18 = (ulonglong)(uVar29 * 4);
    param_3[uVar18] = 0x3f000000;
    param_3[uVar18 + 1] = 0xbf000000;
    if (param_1 < 3) {
      return;
    }
    uVar18 = (ulonglong)
             ((~(*(uint *)(&DAT_145aca020 + (ulonglong)(param_1 - 1) * 4) >> 2) & 1 | 2) * uVar29 *
             4);
    param_3[uVar18 + 1] = 0x3f000000;
    param_3[uVar18] = 0x3f000000;
    return;
  }
  if ((char)uVar11 == '\0') {
    return;
  }
  if (param_4 == 0) {
    return;
  }
  local_180 = (longlong *)(param_4 + 0x68);
  local_1b8 = (undefined *)CONCAT44(param_2,param_1);
  uStack_1f0 = 0x143164e4c;
  local_1a4 = param_1;
  local_1a0 = param_2;
  local_198 = uVar29;
  puVar13 = (ulonglong *)
            CAkKeyArray<CAkSpeakerPan::ConfigInOut,float_*,AkArrayAllocatorNoAlign<0>,AkGrowByPolicy_Proportional,AkAssignmentMovePolicy<MapStruct<CAkSpeakerPan::ConfigInOut,float_*>_>_>
            ::Exists(local_180,local_1b8);
  if (puVar13 == (ulonglong *)0x0) {
    if ((uVar38 == 0x100) && ((uVar36 & 0xff9c0) == 0)) {
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
    if (uVar38 == 0) {
      uVar36 = param_2 & 0xff;
LAB_143164e9a:
      uVar24 = param_1 & 0xff;
      if (!bVar9) goto LAB_143164ea5;
      if (uVar24 < 5) {
        local_1b0[0] = 5.60519e-45;
        puVar37 = &DAT_145ac9030;
      }
      else {
        if ((6 < uVar24) && (uVar24 != 9)) {
          if (0x10 < uVar24) {
            return;
          }
          local_1b0[0] = 2.24208e-44;
          puVar37 = &DAT_145ac92a0;
          goto LAB_143164f2c;
        }
        puVar37 = &DAT_145ac90f0;
LAB_143164f25:
        local_1b0[0] = 1.26117e-44;
      }
    }
    else {
      if (bVar9) {
        uVar36 = 0xc;
        goto LAB_143164e9a;
      }
      uVar36 = 0x20;
LAB_143164ea5:
      uVar24 = param_1 & 0xff;
      if (uVar24 < 5) {
        local_1b0[0] = 5.60519e-45;
        puVar37 = &DAT_145ac81b0;
      }
      else {
        if ((uVar24 < 7) || (uVar24 == 9)) {
          puVar37 = &DAT_145ac83b0;
          goto LAB_143164f25;
        }
        if (0x10 < uVar24) {
          return;
        }
        local_1b0[0] = 2.24208e-44;
        puVar37 = &DAT_145ac8830;
      }
    }
LAB_143164f2c:
    local_1b0[1] = (float)(param_1 & 0xff);
    local_1b8 = puVar37;
    if (uVar38 == 0x100) {
      uStack_1f0 = 0x143164f50;
      local_190 = AkDevice::GetPanCache(param_4,uVar29 | uVar22 << 0xc | uVar38);
      if (local_190 == 0) {
        return;
      }
      local_19c = uVar29 + 3;
      local_1a8 = uVar29 + 3 >> 2;
      iVar23 = local_1a8 * uVar36;
      uVar18 = (ulonglong)(uint)(iVar23 * 0x10) + 0xf;
      if (uVar18 <= (uint)(iVar23 * 0x10)) {
        uVar18 = 0xffffffffffffff0;
      }
      uStack_1f0 = 0x143164f9b;
      lVar7 = -(uVar18 & 0xfffffffffffffff0);
      pvVar6 = (void *)((longlong)&local_1b8 + lVar7);
      if (iVar23 != 0) {
        *(undefined8 *)(auStack_1e8 + lVar7 + -8) = 0x143164fbf;
        _guard_xfg_dispatch_icall_nop(pvVar6,0,(ulonglong)(uint)(iVar23 * 4) << 2);
      }
      lVar33 = local_190;
      uVar22 = local_1a8;
      uVar38 = uVar29 + 3;
      if (bVar9) {
        local_158 = 0;
        uStack_150 = 0xbf00e7e43f800000;
        uVar11 = uVar29 + 2;
        if (3 < uVar29) {
          uVar11 = uVar29;
        }
        local_138 = 0xbf8000003f00e7e4;
        uStack_130 = 0x248d313200000000;
        uVar24 = 0;
        local_148 = 0x3f5d2d5300000000;
        uStack_140 = 0xbf5d2d53;
        local_118 = 0xbf5d2d5300000000;
        uStack_110 = 0;
        local_128 = 0xbf5d2d53;
        uStack_120 = 0xbf00e7e4bf00e7e4;
        local_f8 = 0x3f5d2d53;
        uStack_f0 = 0x3f800000bf00e7e4;
        local_108 = 0x3f00e7e4bf800000;
        uStack_100 = 0xbf5d2d5300000000;
        local_d8 = 0x3f00e7e43f00e7e4;
        uStack_d0 = 0x3f5d2d5300000000;
        local_e8 = 0xa553c9ca00000000;
        uStack_e0 = 0x3f5d2d53;
        if (uVar36 != 0) {
          uVar12 = uVar29 - 1;
          puVar32 = &local_158;
          do {
            pauVar34 = (undefined1 (*) [16])
                       ((longlong)pvVar6 + (ulonglong)(uVar22 * uVar24 * 4) * 4);
            *(undefined1 (**) [16])((longlong)alStack_1c8 + lVar7 + 8) = pauVar34;
            *(undefined **)((longlong)alStack_1c8 + lVar7) =
                 &DAT_1467bdd40 + (ulonglong)uVar12 * 0x20;
            *(undefined8 *)(auStack_1e8 + lVar7 + -8) = 0x1431653e6;
            auVar41._0_8_ = AddPowerVbap2d(lVar33,uVar11,puVar32,1.0 / (float)uVar36);
            auVar41._8_8_ = extraout_XMM0_Qb_00;
            pauVar14 = pauVar34 + (uVar38 >> 2);
            uVar29 = local_198;
            for (; local_198 = uVar29, pauVar34 < pauVar14; pauVar34 = pauVar34 + 1) {
              auVar41 = sqrtps(auVar41,*pauVar34);
              *pauVar34 = auVar41;
              uVar29 = local_198;
            }
            uVar24 = uVar24 + 1;
            puVar32 = (undefined8 *)((longlong)puVar32 + 0xc);
            puVar37 = local_1b8;
            param_2 = local_1a0;
            param_1 = local_1a4;
          } while (uVar24 < uVar36);
        }
      }
      else {
        local_158 = 0x3f9a26813fc90fdb;
        uStack_150 = 0xbf9a26813fc90fdb;
        local_148 = 0x3f9a2681bfc90ff9;
        uStack_140 = 0xbf9a2681bfc90ff9;
        local_138 = 0x3ebba5e300000000;
        uStack_130 = 0xbebba5e300000000;
        local_128 = 0x3ebba5e340490fdb;
        uStack_120 = 0xbebba5e340490fdb;
        local_118 = 0x3f9a2681;
        uStack_110 = 0xbf9a2681;
        local_108 = 0x3ff7f972;
        uStack_100 = 0xbff7f972;
        local_f8 = 0x3f81930c00000000;
        uStack_f0 = 0xbf81930c00000000;
        local_e8 = 0x3f81930c40490fdb;
        uStack_e0 = 0xbf81930c40490fdb;
        local_d8 = 0x3f0ef9db;
        uStack_d0 = 0xbf0ef9db;
        local_c8 = 0x40255183;
        uStack_c0 = 0xc0255183;
        local_b8 = 0x3f0ef9db3fc90fdb;
        uStack_b0 = 0xbf0ef9db3fc90fdb;
        local_a8 = 0x3f0ef9dbbfc90fdb;
        uStack_a0 = 0xbf0ef9dbbfc90fdb;
        local_98 = 0x3f1c63f13f490ff9;
        uStack_90 = 0xbf1c63f13f490ff9;
        local_88 = 0x3f1c63f1bf490ff9;
        uStack_80 = 0xbf1c63f1bf490ff9;
        local_78 = 0x3f1c63f14016cbfb;
        uStack_70 = 0xbf1c63f14016cbfb;
        local_68 = 0x3f1c63f1c016cbfb;
        uStack_60 = 0xbf1c63f1c016cbfb;
        if (uVar36 != 0) {
          uVar38 = 0;
          puVar32 = &local_158;
          do {
            lVar33 = local_190;
            uVar4 = *(undefined4 *)((longlong)puVar32 + 4);
            uVar5 = *(undefined4 *)puVar32;
            pauVar34 = (undefined1 (*) [16])
                       ((longlong)pvVar6 + (ulonglong)(uVar22 * uVar38 * 4) * 4);
            *(undefined1 (**) [16])((longlong)alStack_1c8 + lVar7) = pauVar34;
            *(undefined8 *)(auStack_1e8 + lVar7 + -8) = 0x143165116;
            auVar40._0_8_ = AkVBAPMap::ComputeVBAPSquared(lVar33,uVar5,uVar4,uVar29);
            auVar40._8_8_ = extraout_XMM0_Qb;
            uVar18 = 0;
            fVar42 = 0.0;
            if (uVar29 != 0) {
              if (7 < uVar29) {
                fVar46 = 0.0;
                fVar47 = 0.0;
                fVar48 = 0.0;
                fVar49 = 0.0;
                fVar43 = 0.0;
                fVar42 = 0.0;
                fVar44 = 0.0;
                fVar45 = 0.0;
                do {
                  pfVar19 = (float *)((longlong)*pauVar34 + uVar18 * 4);
                  iVar23 = (int)uVar18;
                  uVar24 = iVar23 + 8;
                  uVar18 = (ulonglong)uVar24;
                  fVar46 = fVar46 + *pfVar19;
                  fVar47 = fVar47 + pfVar19[1];
                  fVar48 = fVar48 + pfVar19[2];
                  fVar49 = fVar49 + pfVar19[3];
                  pfVar19 = (float *)((longlong)*pauVar34 + (ulonglong)(iVar23 + 4) * 4);
                  fVar43 = fVar43 + *pfVar19;
                  fVar42 = fVar42 + pfVar19[1];
                  fVar44 = fVar44 + pfVar19[2];
                  fVar45 = fVar45 + pfVar19[3];
                } while (uVar24 < (uVar11 & 0xf8));
                fVar49 = fVar49 + fVar45;
                fVar42 = fVar49 + fVar47 + fVar42;
                auVar40._4_4_ = fVar42;
                auVar40._0_4_ = fVar42;
                auVar40._8_4_ = fVar49 + fVar49;
                auVar40._12_4_ = fVar49 + fVar49;
                fVar42 = fVar48 + fVar44 + fVar46 + fVar43 + fVar42;
              }
              uVar24 = (uint)uVar18;
              if (uVar24 < uVar29) {
                if (3 < uVar29 - uVar24) {
                  uVar12 = ((uVar29 - uVar24) - 4 >> 2) + 1;
                  pfVar19 = (float *)((longlong)*pauVar34 + uVar18 * 4 + 8);
                  uVar31 = (ulonglong)uVar12;
                  uVar18 = (ulonglong)(uVar24 + uVar12 * 4);
                  do {
                    fVar42 = fVar42 + pfVar19[-2] + pfVar19[-1] + *pfVar19 + pfVar19[1];
                    pfVar19 = pfVar19 + 4;
                    uVar31 = uVar31 - 1;
                  } while (uVar31 != 0);
                }
                if ((uint)uVar18 < uVar29) {
                  pfVar19 = (float *)((longlong)*pauVar34 + uVar18 * 4);
                  uVar18 = (ulonglong)(uVar29 - (uint)uVar18);
                  do {
                    fVar42 = fVar42 + *pfVar19;
                    pfVar19 = pfVar19 + 1;
                    uVar18 = uVar18 - 1;
                  } while (uVar18 != 0);
                }
              }
              if (0.0 < fVar42) {
                uVar18 = 0;
                fVar42 = (1.0 / (float)uVar36) / fVar42;
                if (uVar29 != 0) {
                  if (0xf < uVar29) {
                    uVar24 = 8;
                    do {
                      pfVar19 = (float *)((longlong)*pauVar34 + uVar18 * 4);
                      fVar43 = pfVar19[1];
                      fVar44 = pfVar19[2];
                      fVar45 = pfVar19[3];
                      pfVar3 = (float *)((longlong)*pauVar34 + uVar18 * 4);
                      *pfVar3 = fVar42 * *pfVar19;
                      pfVar3[1] = fVar42 * fVar43;
                      pfVar3[2] = fVar42 * fVar44;
                      pfVar3[3] = fVar42 * fVar45;
                      uVar25 = (int)uVar18 + 0x10;
                      uVar18 = (ulonglong)uVar25;
                      pfVar19 = (float *)((longlong)*pauVar34 + (ulonglong)(uVar24 - 4) * 4);
                      fVar43 = pfVar19[1];
                      fVar44 = pfVar19[2];
                      fVar45 = pfVar19[3];
                      pfVar3 = (float *)((longlong)*pauVar34 + (ulonglong)(uVar24 - 4) * 4);
                      *pfVar3 = *pfVar19 * fVar42;
                      pfVar3[1] = fVar43 * fVar42;
                      pfVar3[2] = fVar44 * fVar42;
                      pfVar3[3] = fVar45 * fVar42;
                      pfVar19 = (float *)((longlong)*pauVar34 + (ulonglong)uVar24 * 4);
                      fVar43 = pfVar19[1];
                      fVar44 = pfVar19[2];
                      fVar45 = pfVar19[3];
                      pfVar3 = (float *)((longlong)*pauVar34 + (ulonglong)uVar24 * 4);
                      *pfVar3 = *pfVar19 * fVar42;
                      pfVar3[1] = fVar43 * fVar42;
                      pfVar3[2] = fVar44 * fVar42;
                      pfVar3[3] = fVar45 * fVar42;
                      uVar12 = uVar24 + 4;
                      uVar24 = uVar24 + 0x10;
                      pfVar19 = (float *)((longlong)*pauVar34 + (ulonglong)uVar12 * 4);
                      auVar40._0_4_ = *pfVar19 * fVar42;
                      auVar40._4_4_ = pfVar19[1] * fVar42;
                      auVar40._8_4_ = pfVar19[2] * fVar42;
                      auVar40._12_4_ = pfVar19[3] * fVar42;
                      *(undefined1 (*) [16])((longlong)*pauVar34 + (ulonglong)uVar12 * 4) = auVar40;
                    } while (uVar25 < (uVar11 & 0xf0));
                  }
                  uVar24 = (uint)uVar18;
                  if (uVar24 < uVar29) {
                    if (3 < uVar29 - uVar24) {
                      uVar12 = ((uVar29 - uVar24) - 4 >> 2) + 1;
                      lVar33 = uVar18 * 4;
                      uVar31 = (ulonglong)uVar12;
                      uVar18 = (ulonglong)(uVar24 + uVar12 * 4);
                      pfVar19 = (float *)((longlong)*pauVar34 + lVar33 + 8);
                      do {
                        auVar40._0_4_ = pfVar19[-2] * fVar42;
                        auVar40._4_4_ = pfVar19[-1] * fVar42;
                        auVar40._8_4_ = *pfVar19 * fVar42;
                        auVar40._12_4_ = pfVar19[1] * fVar42;
                        *(undefined1 (*) [16])(pfVar19 + -2) = auVar40;
                        uVar31 = uVar31 - 1;
                        pfVar19 = pfVar19 + 4;
                      } while (uVar31 != 0);
                    }
                    if ((uint)uVar18 < uVar29) {
                      uVar31 = (ulonglong)(uVar29 - (uint)uVar18);
                      pfVar19 = (float *)((longlong)*pauVar34 + uVar18 * 4);
                      do {
                        auVar39._4_4_ = fVar42;
                        auVar39._0_4_ = fVar42;
                        auVar39._8_4_ = fVar42;
                        auVar39._12_4_ = fVar42;
                        auVar40._4_12_ = auVar39._4_12_;
                        auVar40._0_4_ = fVar42 * *pfVar19;
                        *pfVar19 = auVar40._0_4_;
                        uVar31 = uVar31 - 1;
                        pfVar19 = pfVar19 + 1;
                      } while (uVar31 != 0);
                    }
                  }
                }
                pauVar14 = pauVar34 + (uVar29 + 3 >> 2);
                for (; pauVar34 < pauVar14; pauVar34 = pauVar34 + 1) {
                  auVar40 = sqrtps(auVar40,*pauVar34);
                  *pauVar34 = auVar40;
                }
              }
            }
            uVar38 = uVar38 + 1;
            puVar32 = puVar32 + 1;
            puVar37 = local_1b8;
            param_2 = local_1a0;
            param_1 = local_1a4;
          } while (uVar38 < uVar36);
        }
      }
      local_190 = CONCAT44(local_190._4_4_,param_2) & 0xffffffff000000ff;
      local_178 = (param_2 & 0xff) + 3 >> 2;
      iVar23 = (int)local_1b0[1] * local_178;
      *(undefined8 *)(auStack_1e8 + lVar7 + -8) = 0x14316543f;
      pvVar15 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)(uint)(iVar23 * 0x10));
      local_1b8 = pvVar15;
      if (pvVar15 == (void *)0x0) {
        return;
      }
      uVar11 = 0;
      local_res10 = 0;
      local_1a8 = 0;
      local_170 = (ulonglong)((int)local_1b0[1] - 1);
      fVar42 = local_1b0[1];
      do {
        uVar22 = local_1a8;
        puVar30 = auStack_1e8 + lVar7;
        if ((uint)fVar42 <= uVar11) break;
        if ((*(uint *)(&DAT_145aca020 + local_170 * 4) >> (local_1a8 & 0x1f) & 1) == 0) {
          pvVar15 = (void *)((longlong)pvVar15 + (ulonglong)(uVar11 * local_178 * 4) * 4);
          local_168 = pvVar15;
          if ((int)local_190 != 0) {
            uVar18 = local_190 & 0xffffffff;
            *(undefined8 *)(auStack_1e8 + lVar7 + -8) = 0x1431654b9;
            _guard_xfg_dispatch_icall_nop(pvVar15,0,uVar18 << 2);
            uVar11 = local_res10;
          }
          if (uVar29 != 0) {
            local_188 = (ulonglong)uVar29;
            iVar23 = uVar22 * uVar36;
            lVar33 = 0;
            do {
              uVar29 = 0;
              fVar42 = 0.0;
              if (3 < uVar36) {
                iVar35 = 1;
                uVar11 = local_19c >> 2;
                do {
                  uVar22 = iVar35 + iVar23 + -1;
                  iVar26 = uVar11 * uVar29;
                  uVar29 = uVar29 + 4;
                  uVar38 = iVar23 + iVar35;
                  iVar27 = iVar35 * uVar11;
                  iVar1 = iVar35 + 1;
                  uVar24 = iVar35 + iVar23 + 1;
                  iVar2 = iVar35 + 2;
                  uVar12 = iVar23 + 2 + iVar35;
                  iVar35 = iVar35 + 4;
                  fVar42 = *(float *)((longlong)pvVar6 +
                                     ((ulonglong)(uint)(iVar26 * 4) + lVar33) * 4) *
                           *(float *)(puVar37 + (ulonglong)uVar22 * 4) + fVar42 +
                           *(float *)((longlong)pvVar6 +
                                     ((ulonglong)(uint)(iVar27 * 4) + lVar33) * 4) *
                           *(float *)(puVar37 + (ulonglong)uVar38 * 4) +
                           *(float *)((longlong)pvVar6 +
                                     ((ulonglong)(iVar1 * uVar11 * 4) + lVar33) * 4) *
                           *(float *)(puVar37 + (ulonglong)uVar24 * 4) +
                           *(float *)((longlong)pvVar6 +
                                     ((ulonglong)(iVar2 * uVar11 * 4) + lVar33) * 4) *
                           *(float *)(puVar37 + (ulonglong)uVar12 * 4);
                } while (uVar29 < uVar36 - 3);
              }
              if (uVar29 < uVar36) {
                do {
                  uVar11 = iVar23 + uVar29;
                  uVar22 = uVar29 * (local_19c & 0xfffffffc);
                  uVar29 = uVar29 + 1;
                  fVar42 = fVar42 + *(float *)((longlong)pvVar6 + ((ulonglong)uVar22 + lVar33) * 4)
                                    * *(float *)(puVar37 + (ulonglong)uVar11 * 4);
                } while (uVar29 < uVar36);
              }
              *(float *)((longlong)local_168 + lVar33 * 4) = fVar42;
              lVar33 = lVar33 + 1;
              local_188 = local_188 - 1;
              uVar29 = local_198;
              uVar11 = local_res10;
              uVar22 = local_1a8;
              param_2 = local_1a0;
              param_1 = local_1a4;
            } while (local_188 != 0);
          }
          local_1a8 = uVar22;
          uVar11 = uVar11 + 1;
          pvVar15 = local_1b8;
          fVar42 = local_1b0[1];
          local_res10 = uVar11;
        }
        local_1a8 = local_1a8 + 1;
        puVar30 = auStack_1e8 + lVar7;
      } while (local_1a8 < (uint)local_1b0[0]);
    }
    else {
      uVar11 = (param_2 & 0xff) + 3 >> 2;
      uStack_1f0 = 0x143165655;
      local_1b8 = AK::MemoryMgr::Malloc
                            (g_DefaultPoolId,(ulonglong)((int)local_1b0[1] * uVar11 * 0x10));
      if (local_1b8 == (void *)0x0) {
        return;
      }
      uVar22 = 0;
      puVar30 = auStack_1e8;
      if (local_1b0[1] != 0.0) {
        do {
          uVar18 = 0;
          iVar23 = uVar22 * uVar11;
          if (3 < uVar29) {
            uVar24 = uVar22 * uVar36 + 1;
            uVar38 = (uVar29 - 4 >> 2) + 1;
            uVar31 = (ulonglong)uVar38;
            uVar18 = (ulonglong)(uVar38 * 4);
            puVar28 = (undefined4 *)((longlong)local_1b8 + (ulonglong)(uint)(iVar23 * 4) * 4 + 8);
            do {
              puVar28[-2] = *(undefined4 *)(puVar37 + (ulonglong)(uVar24 - 1) * 4);
              puVar28[-1] = *(undefined4 *)(puVar37 + (ulonglong)uVar24 * 4);
              *puVar28 = *(undefined4 *)(puVar37 + (ulonglong)(uVar24 + 1) * 4);
              uVar38 = uVar24 + 2;
              uVar24 = uVar24 + 4;
              puVar28[1] = *(undefined4 *)(puVar37 + (ulonglong)uVar38 * 4);
              uVar31 = uVar31 - 1;
              puVar28 = puVar28 + 4;
            } while (uVar31 != 0);
          }
          if ((uint)uVar18 < uVar29) {
            puVar28 = (undefined4 *)
                      ((longlong)local_1b8 + uVar18 * 4 + (ulonglong)(uint)(iVar23 * 4) * 4);
            do {
              iVar23 = (int)uVar18;
              uVar38 = iVar23 + 1;
              uVar18 = (ulonglong)uVar38;
              *puVar28 = *(undefined4 *)(puVar37 + (ulonglong)(iVar23 + uVar22 * uVar36) * 4);
              puVar28 = puVar28 + 1;
            } while (uVar38 < uVar29);
          }
          uVar22 = uVar22 + 1;
          puVar30 = auStack_1e8;
          param_1 = local_1a4;
        } while (uVar22 < (uint)local_1b0[1]);
      }
    }
    plVar10 = local_180;
    local_188 = CONCAT44(param_2,param_1);
    uVar18 = local_188;
    *(undefined8 *)(puVar30 + -8) = 0x143165745;
    puVar13 = (ulonglong *)
              CAkKeyArray<CAkSpeakerPan::ConfigInOut,float_*,AkArrayAllocatorNoAlign<0>,AkGrowByPolicy_Proportional,AkAssignmentMovePolicy<MapStruct<CAkSpeakerPan::ConfigInOut,float_*>_>_>
              ::Exists(plVar10,uVar18);
    if (puVar13 == (ulonglong *)0x0) {
      local_170 = (ulonglong)*(uint *)(local_180 + 1);
      if (*(uint *)(local_180 + 1) < *(uint *)((longlong)local_180 + 0xc)) {
LAB_143165809:
        uVar29 = *(uint *)(local_180 + 1);
        *(uint *)(local_180 + 1) = uVar29 + 1;
        puVar21 = (ulonglong *)((ulonglong)uVar29 * 0x10 + *local_180);
        if (puVar21 != (ulonglong *)0x0) {
          *(undefined1 *)puVar21 = 0;
          puVar13 = puVar21 + 1;
          *(undefined1 *)((longlong)puVar21 + 4) = 0;
          *puVar21 = uVar18;
          *puVar13 = (ulonglong)local_1b8;
        }
        goto LAB_14316583a;
      }
      uVar29 = *(uint *)((longlong)local_180 + 0xc) + 1;
      *(undefined8 *)(puVar30 + -8) = 0x14316578b;
      puVar16 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar29 << 4);
      if (puVar16 != (uint *)0x0) {
        puVar17 = (uint *)*local_180;
        if ((puVar17 != (uint *)0x0) && (puVar17 != puVar16)) {
          uVar31 = (ulonglong)*(uint *)(local_180 + 1);
          puVar20 = puVar16;
          if (uVar31 != 0) {
            do {
              if (puVar20 != (uint *)0x0) {
                *(undefined1 *)puVar20 = 0;
                *puVar20 = *puVar20 & 0xff;
                *(undefined1 *)(puVar20 + 1) = 0;
                puVar20[1] = puVar20[1] & 0xff;
              }
              puVar32 = (undefined8 *)((*local_180 - (longlong)puVar16) + (longlong)puVar20);
              uVar8 = puVar32[1];
              *(undefined8 *)puVar20 = *puVar32;
              *(undefined8 *)(puVar20 + 2) = uVar8;
              uVar31 = uVar31 - 1;
              puVar20 = puVar20 + 4;
            } while (uVar31 != 0);
            puVar17 = (uint *)*local_180;
          }
          *(undefined8 *)(puVar30 + -8) = 0x1431657f5;
          AK::MemoryMgr::Free(g_DefaultPoolId,puVar17);
        }
        *local_180 = (longlong)puVar16;
        *(uint *)((longlong)local_180 + 0xc) = uVar29;
        if (uVar29 <= (uint)local_170) goto LAB_14316583a;
        goto LAB_143165809;
      }
    }
    else {
      *puVar13 = (ulonglong)local_1b8;
LAB_14316583a:
      if (puVar13 != (ulonglong *)0x0) goto LAB_14316583f;
    }
    pvVar6 = local_1b8;
    *(undefined8 *)(puVar30 + -8) = 0x143165882;
    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar6);
  }
  else {
LAB_14316583f:
    uVar29 = ((param_2 & 0xff) + 3 & 0xfffffffc) * (param_1 & 0xff);
    if (uVar29 != 0) {
      pvVar6 = (void *)*puVar13;
      *(undefined8 *)(puVar30 + -8) = 0x14316586e;
      _guard_xfg_dispatch_icall_nop(param_3,pvVar6,(ulonglong)uVar29 << 2);
    }
  }
  return;
}



// FUNCTION 143165930 DestroyPanCache body=77 status=ok
// SIG undefined DestroyPanCache(void)

void CAkSpeakerPan::DestroyPanCache(ulonglong param_1,undefined8 *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_2;
  if ((param_1 & 0xff9c0000) == 0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar1);
    return;
  }
  AkVBAPMap::Term(pvVar1,&PTR_PTR_1467be0f8);
  (**(code **)(PTR_PTR_1467be0f8 + 0x10))(&PTR_PTR_1467be0f8,pvVar1);
  return;
}



// FUNCTION 143165980 EncodeVector body=407 status=ok
// SIG undefined EncodeVector(void)

void CAkSpeakerPan::EncodeVector(float *param_1,uint param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  float *pfVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  puVar14 = (undefined *)0x0;
  iVar10 = 0;
  if (param_2 == 4) {
    iVar10 = 1;
    puVar13 = &DAT_146b51030;
  }
  else if (param_2 == 9) {
    iVar10 = 2;
    puVar13 = &DAT_146b51230;
  }
  else {
    puVar13 = puVar14;
    if (param_2 == 0x10) {
      iVar10 = 3;
      puVar13 = &DAT_146b516b0;
    }
  }
  if ((&DAT_146b51eb0)[iVar10 - 1U] == '\0') {
    puVar12 = &DAT_145ac9620;
    lVar17 = 0x20;
    puVar15 = puVar13;
    do {
      _ComputeSN3DphericalHarmonics
                (puVar12[2],*puVar12 ^ 0x80000000,puVar12[1],param_2,0x20,puVar15);
      puVar15 = puVar15 + 4;
      puVar12 = puVar12 + 4;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    (&DAT_146b51eb0)[iVar10 - 1U] = 1;
  }
  if (param_2 != 0) {
    do {
      fVar18 = 0.0;
      fVar19 = 0.0;
      fVar20 = 0.0;
      fVar21 = 0.0;
      fVar22 = 0.0;
      fVar23 = 0.0;
      fVar24 = 0.0;
      fVar25 = 0.0;
      uVar11 = (int)puVar14 * 0x20 + 4;
      lVar17 = 4;
      pfVar16 = param_1;
      do {
        fVar3 = *pfVar16;
        pfVar4 = pfVar16 + 1;
        pfVar5 = pfVar16 + 2;
        pfVar6 = pfVar16 + 3;
        pfVar2 = (float *)(puVar13 + (ulonglong)(uVar11 - 4) * 4);
        pfVar1 = pfVar16 + 4;
        pfVar7 = pfVar16 + 5;
        pfVar8 = pfVar16 + 6;
        pfVar9 = pfVar16 + 7;
        pfVar16 = pfVar16 + 8;
        fVar18 = fVar18 + *pfVar2 * fVar3;
        fVar19 = fVar19 + pfVar2[1] * *pfVar4;
        fVar20 = fVar20 + pfVar2[2] * *pfVar5;
        fVar21 = fVar21 + pfVar2[3] * *pfVar6;
        pfVar2 = (float *)(puVar13 + (ulonglong)uVar11 * 4);
        uVar11 = uVar11 + 8;
        fVar22 = fVar22 + *pfVar2 * *pfVar1;
        fVar23 = fVar23 + pfVar2[1] * *pfVar7;
        fVar24 = fVar24 + pfVar2[2] * *pfVar8;
        fVar25 = fVar25 + pfVar2[3] * *pfVar9;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      uVar11 = (int)puVar14 + 1;
      puVar14 = (undefined *)(ulonglong)uVar11;
      *param_3 = fVar20 + fVar24 + fVar18 + fVar22 + fVar21 + fVar25 + fVar19 + fVar23;
      param_3 = param_3 + 1;
    } while (uVar11 < param_2);
  }
  return;
}



// FUNCTION 143165b20 Exists body=91 status=ok
// SIG undefined Exists(void)

uint * CAkKeyArray<AkChannelConfig,void_*,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkAssignmentMovePolicy<MapStruct<AkChannelConfig,void_*>_>_>
       ::Exists(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar4 = (uint *)*param_1;
  puVar3 = puVar4 + (ulonglong)*(uint *)(param_1 + 1) * 4;
  if (puVar4 != puVar3) {
    do {
      uVar1 = *puVar4;
      if ((((uVar1 & 0xff) == (param_2 & 0xff)) && (((uVar1 ^ param_2) & 0xf00) == 0)) &&
         (((uVar1 ^ param_2) & 0xfffff000) == 0)) break;
      puVar4 = puVar4 + 4;
    } while (puVar4 != puVar3);
  }
  puVar2 = puVar4 + 2;
  if (puVar4 == puVar3) {
    puVar2 = (uint *)0x0;
  }
  return puVar2;
}



// FUNCTION 143165b80 Exists body=130 status=ok
// SIG undefined Exists(void)

uint * CAkKeyArray<CAkSpeakerPan::ConfigInOut,float_*,AkArrayAllocatorNoAlign<0>,AkGrowByPolicy_Proportional,AkAssignmentMovePolicy<MapStruct<CAkSpeakerPan::ConfigInOut,float_*>_>_>
       ::Exists(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uStackX_14;
  
  puVar5 = (uint *)*param_1;
  puVar3 = puVar5 + (ulonglong)*(uint *)(param_1 + 1) * 4;
  uVar4 = (uint)param_2;
  if (puVar5 != puVar3) {
    uStackX_14 = (uint)((ulonglong)param_2 >> 0x20);
    do {
      uVar1 = *puVar5;
      if (((((uVar1 & 0xff) == (uVar4 & 0xff)) && (((uVar1 ^ uVar4) & 0xf00) == 0)) &&
          (((uVar1 ^ uVar4) & 0xfffff000) == 0)) &&
         (((uVar1 = puVar5[1], (char)uVar1 == (char)((ulonglong)param_2 >> 0x20) &&
           (((uVar1 ^ uStackX_14) & 0xf00) == 0)) && (((uVar1 ^ uStackX_14) & 0xfffff000) == 0))))
      break;
      puVar5 = puVar5 + 4;
    } while (puVar5 != puVar3);
  }
  puVar2 = puVar5 + 2;
  if (puVar5 == puVar3) {
    puVar2 = (uint *)0x0;
  }
  return puVar2;
}



// FUNCTION 143165c10 GenPointsForZeroSpread body=182 status=ok
// SIG undefined GenPointsForZeroSpread(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void GenPointsForZeroSpread
               (uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined8 auStack_50 [5];
  undefined8 uStack_28;
  undefined4 auStack_20 [2];
  undefined8 local_18 [2];
  
  uVar4 = (ulonglong)param_1 * 0x10 + 0xf;
  if (uVar4 <= (ulonglong)param_1 * 0x10) {
    uVar4 = 0xffffffffffffff0;
  }
  auStack_50[0] = 0x143165c54;
  lVar2 = -(uVar4 & 0xfffffffffffffff0);
  puVar3 = (undefined4 *)(&stack0x00000000 + lVar2);
  do {
    *(undefined8 *)(puVar3 + -2) = 0;
    *puVar3 = 0x3f800000;
    puVar3[1] = 0x3f800000;
    puVar1 = puVar3 + 2;
    puVar3 = puVar3 + 4;
  } while (puVar1 < &stack0xfffffffffffffff8 + lVar2 + (ulonglong)(param_1 * 4) * 4);
  *(undefined8 *)((longlong)local_18 + lVar2) = param_5;
  *(undefined4 *)((longlong)auStack_20 + lVar2) = 0;
  *(undefined8 *)((longlong)&uStack_28 + lVar2) = param_4;
  *(undefined8 *)((longlong)auStack_50 + lVar2) = 0x143165cb5;
  TransformSampledSphere(&stack0xfffffffffffffff8 + lVar2,param_1,param_2,param_3);
  return;
}



// FUNCTION 143165cd0 GetDefaultSpeakerAngles body=28 status=ok
// SIG undefined GetDefaultSpeakerAngles(void)

void CAkSpeakerPan::GetDefaultSpeakerAngles
               (undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = 0x42340000;
  param_2[1] = 0x42b40000;
  param_2[2] = 0x43070000;
  *param_3 = 0x425acccd;
  return;
}



// FUNCTION 143165cf0 GetPanCache body=173 status=ok
// SIG undefined GetPanCache(void)

undefined8 AkDevice::GetPanCache(longlong param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 uVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  puVar3 = *(uint **)(param_1 + 0x78);
  puVar1 = puVar3 + (ulonglong)*(uint *)(param_1 + 0x80) * 4;
  if (puVar3 != puVar1) {
    do {
      uVar2 = *puVar3;
      if ((((uVar2 & 0xff) == (param_2 & 0xff)) && (((uVar2 ^ param_2) & 0xf00) == 0)) &&
         (((uVar2 ^ param_2) & 0xfffff000) == 0)) break;
      puVar3 = puVar3 + 4;
    } while (puVar3 != puVar1);
  }
  if (puVar3 == (uint *)(*(longlong *)(param_1 + 0x78) + (ulonglong)*(uint *)(param_1 + 0x80) * 0x10
                        )) {
    uVar4 = FUN_143129a00(param_1,param_2);
  }
  else {
    uVar4 = *(undefined8 *)(puVar3 + 2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  return uVar4;
}



// FUNCTION 143165da0 GetSampledHarmonics body=167 status=ok
// SIG undefined GetSampledHarmonics(void)

undefined *
CAkSpeakerPan::GetSampledHarmonics
          (uint param_1,undefined4 *param_2,undefined8 *param_3,char param_4)

{
  if (param_4 == '\0') {
    if (param_1 < 5) {
      *param_2 = 4;
      *param_3 = &DAT_145ac95a0;
      return &DAT_145ac81b0;
    }
    if ((param_1 < 7) || (param_1 == 9)) {
      *param_2 = 9;
      *param_3 = &DAT_145ac95b0;
      return &DAT_145ac83b0;
    }
    if (param_1 < 0x11) {
      *param_2 = 0x10;
      *param_3 = &DAT_145ac95e0;
      return &DAT_145ac8830;
    }
  }
  else {
    *param_3 = 0;
    if (param_1 < 5) {
      *param_2 = 4;
      return &DAT_145ac9030;
    }
    if ((param_1 < 7) || (param_1 == 9)) {
      *param_2 = 9;
      return &DAT_145ac90f0;
    }
    if (param_1 < 0x11) {
      *param_2 = 0x10;
      return &DAT_145ac92a0;
    }
  }
  *param_2 = 0;
  return (undefined *)0x0;
}



// FUNCTION 143165e50 FUN_143165e50 body=745 status=ok
// SIG undefined FUN_143165e50(void)

void FUN_143165e50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  uint param_5,uint param_6,undefined4 *param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  longlong lVar9;
  uint uVar10;
  float fVar11;
  undefined8 uVar12;
  
  uVar7 = param_6 & 0xff;
  uVar5 = uVar7 + 3 & 0xfffffffc;
  uVar1 = uVar5 * (param_5 & 0xff);
  if (uVar1 != 0) {
    _guard_xfg_dispatch_icall_nop(param_7,0,(ulonglong)uVar1 << 2);
  }
  uVar2 = param_5 >> 8 & 0xf;
  uVar1 = param_6 >> 8 & 0xf;
  if (uVar2 == uVar1) {
    if (uVar1 == 1) {
      GetSpeakerVolumes2DPanStd(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    }
    else {
      CAkSpeakerPan::GetSpeakerVolumesDirectNoMask(param_5,param_6,param_7);
    }
  }
  else {
    uVar1 = param_6 & 0xf00;
    if ((uVar2 == 2) && (uVar1 != 0x200)) {
      FUN_143164d80(param_5,param_6,param_7,param_8);
    }
    else {
      uVar2 = param_5 & 0xf00;
      if ((uVar2 == 0x100) && (uVar1 == 0x200)) {
        uVar1 = param_5 >> 0xc & 0xffff7;
        uVar2 = uVar1 << 0xc;
        if ((char)((char)param_5 - (char)((param_5 >> 0xc) - uVar1 >> 3)) == '\x01') {
          *param_7 = 0x3f800000;
        }
        else {
          bVar4 = 0;
          for (uVar1 = (uVar2 & 0x63f000) >> 0xc; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
            bVar4 = bVar4 + 1;
          }
          uVar1 = 0;
          uVar6 = (uint)bVar4;
          if (bVar4 != 0) {
            puVar8 = &DAT_1467bdf00 + (ulonglong)(uVar6 - 1) * 7;
            uVar10 = uVar1;
            do {
              uVar12 = __libm_sse2_sincosf_(*puVar8 ^ 0x80000000);
              CAkSpeakerPan::AddSphericalHarmonics
                        ((int)((ulonglong)uVar12 >> 0x20),(uint)uVar12 ^ 0x80000000,0,uVar7,
                         param_7 + uVar5 * uVar10);
              uVar10 = uVar10 + 1;
              puVar8 = puVar8 + 1;
            } while (uVar10 < uVar6);
          }
          bVar4 = 0;
          for (uVar2 = (uVar2 & 0xff9c0000) >> 0xc; uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
            bVar4 = bVar4 + 1;
          }
          if (bVar4 != 0) {
            lVar9 = (ulonglong)(bVar4 - 1) * 0x18;
            do {
              uVar12 = __libm_sse2_sincosf_(*(uint *)(&DAT_1467bdfd0 + lVar9) ^ 0x80000000);
              fVar11 = _guard_xfg_dispatch_icall_nop(*(float *)(&DAT_1467be060 + lVar9));
              CAkSpeakerPan::AddSphericalHarmonics
                        ((int)((ulonglong)uVar12 >> 0x20),(uint)uVar12 ^ 0x80000000,fVar11,uVar7,
                         param_7 + (uVar6 + uVar1) * uVar5);
              uVar1 = uVar1 + 1;
              lVar9 = lVar9 + 4;
            } while (uVar1 < bVar4);
          }
        }
      }
      else if (((uVar2 == 0) && (uVar1 == 0x100)) || ((uVar2 == 0x100 && (uVar1 == 0)))) {
        if (uVar7 <= (param_5 & 0xff)) {
          param_5 = param_6;
        }
        uVar1 = 0;
        if ((char)param_5 != '\0') {
          lVar9 = 0;
          do {
            uVar7 = uVar5 * uVar1;
            uVar1 = uVar1 + 1;
            lVar3 = (ulonglong)uVar7 + lVar9;
            lVar9 = lVar9 + 1;
            param_7[lVar3] = 0x3f800000;
          } while (uVar1 < (param_5 & 0xff));
        }
      }
    }
  }
  return;
}



// FUNCTION 143166140 GetSpeakerVolumes2DPanStd body=3545 status=ok
// SIG undefined GetSpeakerVolumes2DPanStd(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void GetSpeakerVolumes2DPanStd
               (float param_1,float param_2,float param_3,int param_4,uint param_5,uint param_6,
               float *param_7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 *puVar5;
  float *_Dst;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  float *pfVar14;
  byte bVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  char cVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  char cVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  uint local_res20;
  undefined8 auStack_d0 [5];
  undefined8 uStack_a8;
  float afStack_9c [3];
  undefined8 local_90;
  uint local_88;
  uint uStack_84;
  undefined4 *local_80;
  
  uVar10 = param_5 >> 0xc;
  uVar11 = param_5 - (uVar10 - (uVar10 & 0xffff7) >> 3);
  uVar17 = (uVar10 & 0xffff7) << 0xc;
  uStack_84 = param_6 >> 0xc;
  uVar18 = (uStack_84 & 0xffff7) << 0xc;
  uVar20 = param_6 - (uStack_84 - (uStack_84 & 0xffff7) >> 3) & 0xff;
  uVar21 = uVar20 | uVar18 | param_6 & 0xf00;
  cVar26 = (char)uVar11;
  cVar22 = (char)param_6;
  if ((param_4 == 0) || (uVar20 == 1)) {
    uVar24 = param_6 & 0xff;
    uVar12 = (ulonglong)uVar24;
    if (cVar26 == '\x01') {
      if (cVar22 != '\0') {
        auStack_d0[0] = 0x143166e0a;
        _guard_xfg_dispatch_icall_nop(param_7,0,uVar12 << 2);
      }
      if (uVar20 < 2) {
        *param_7 = 1.0;
        auStack_d0[0] = 0x143166e89;
        HandleLfe(param_5,param_6,param_7);
      }
      else if ((uVar18 & 0x7000) == 0x7000) {
        fVar32 = SQRT((1.0 - param_3) * 0.5);
        *param_7 = fVar32;
        param_7[1] = fVar32;
        param_7[2] = SQRT(param_3);
        auStack_d0[0] = 0x143166e58;
        HandleLfe(param_5,param_6,param_7);
      }
      else {
        *param_7 = 0.70710677;
        param_7[1] = 0.70710677;
        auStack_d0[0] = 0x143166e74;
        HandleLfe(param_5,param_6,param_7);
      }
    }
    else {
      auStack_d0[0] = 0x143166e9b;
      FUN_1431631c0(uVar11 & 0xff | uVar17 | param_5 & 0xf00,uVar21,uVar12,param_7);
    }
    if ((uVar10 & 8) == 0) {
      return;
    }
    if (cVar22 != '\0') {
      auStack_d0[0] = 0x143166ece;
      _guard_xfg_dispatch_icall_nop
                (param_7 + (uVar24 + 3 & 0xfffffffc) * ((param_5 & 0xff) - 1),0,uVar12 << 2);
    }
    if ((uStack_84 & 8) == 0) {
      return;
    }
    (param_7 + (uVar24 + 3 & 0xfffffffc) * ((param_5 & 0xff) - 1))[uVar24 - 1] = 1.0;
    return;
  }
  if (cVar26 == '\x01') {
    if (cVar22 != '\0') {
      auStack_d0[0] = 0x14316623c;
      _guard_xfg_dispatch_icall_nop(param_7,0,(ulonglong)(param_6 & 0xff) << 2);
    }
    if ((uVar18 & 0x63f000) == 0) {
      uVar10 = ((param_6 & 0xff) + 3 & 0xfffffffc) * (param_5 & 0xff);
      if (uVar10 != 0) {
        auStack_d0[0] = 0x143166266;
        _guard_xfg_dispatch_icall_nop(param_7,0,(ulonglong)uVar10 << 2);
      }
      auStack_d0[0] = 0x143166273;
      HandleLfe(param_5,param_6,param_7);
      return;
    }
    if ((uVar18 & 0x63f000) == 0x637000) {
      fVar32 = 1.0 - param_1;
      if (0.5 < param_1) {
        fVar30 = (param_1 - 1.0) * param_3 + param_1;
        fVar31 = fVar32;
      }
      else {
        fVar30 = (1.0 - param_3) * param_1;
        fVar31 = param_1;
      }
      fVar31 = fVar31 * (param_3 + param_3);
      fVar28 = (3.0 - param_2 * 4.0) * 0.33333334;
      fVar29 = (param_2 * 4.0 - 1.0) * 0.33333334;
      if (fVar28 <= 0.0) {
        fVar28 = 0.0;
      }
      if (fVar29 <= 0.0) {
        fVar29 = 0.0;
      }
      fVar27 = 1.0 - (fVar28 + fVar29);
      *param_7 = SQRT(((1.0 - fVar30) - fVar31) * fVar29);
      param_7[1] = SQRT(fVar29 * fVar30);
      param_7[2] = SQRT(fVar29 * fVar31);
      param_7[3] = SQRT(fVar28 * fVar32);
      param_7[4] = SQRT(fVar28 * param_1);
      param_7[5] = SQRT(fVar27 * fVar32);
      param_7[6] = SQRT(fVar27 * param_1);
      auStack_d0[0] = 0x1431663b9;
      HandleLfe(param_5,param_6,param_7);
      return;
    }
    if ((uVar18 & 0x63f000) == 0x633000) {
      auStack_d0[0] = 0x1431663e1;
      _GetSpeakerVolumes2DPan3(param_1,param_2,param_7,0x633);
      auStack_d0[0] = 0x1431663eb;
      HandleLfe(param_5,param_6);
      return;
    }
    if ((uVar18 & 0x63f000) == 0x607000) {
      if (0.5 < param_1) {
        fVar31 = (param_1 - 1.0) * param_3 + param_1;
        fVar32 = 1.0 - param_1;
      }
      else {
        fVar31 = (1.0 - param_3) * param_1;
        fVar32 = param_1;
      }
      fVar32 = fVar32 * (param_3 + param_3);
      *param_7 = SQRT(((1.0 - fVar31) - fVar32) * param_2);
      param_7[1] = SQRT(fVar31 * param_2);
      param_7[2] = SQRT(param_2 * fVar32);
      param_7[3] = SQRT((1.0 - param_2) * (1.0 - param_1));
      param_7[4] = SQRT((1.0 - param_2) * param_1);
      auStack_d0[0] = 0x1431664bc;
      HandleLfe(param_5,param_6,param_7);
      return;
    }
    if ((uVar18 & 0x63f000) == 0x603000) {
      auStack_d0[0] = 0x1431664e4;
      _GetSpeakerVolumes2DPan2(param_1,param_2,param_7,0x603);
      auStack_d0[0] = 0x1431664ee;
      HandleLfe(param_5,param_6);
      return;
    }
    if ((uVar18 & 0x63f000) == 0x7000) {
      if (0.5 < param_1) {
        fVar32 = 1.0 - param_1;
        fVar31 = (param_1 - 1.0) * param_3 + param_1;
      }
      else {
        fVar31 = (1.0 - param_3) * param_1;
        fVar32 = param_1;
      }
      fVar32 = fVar32 * (param_3 + param_3);
      param_7[1] = SQRT(fVar31);
      *param_7 = SQRT((1.0 - fVar31) - fVar32);
      param_7[2] = SQRT(fVar32);
      auStack_d0[0] = 0x143166580;
      HandleLfe(param_5,param_6,param_7);
      return;
    }
    param_7[1] = SQRT(param_1);
    *param_7 = SQRT(1.0 - param_1);
    auStack_d0[0] = 0x1431665b5;
    HandleLfe(param_5,param_6,param_7);
    return;
  }
  uVar10 = uVar17 & 0x63f000;
  uVar11 = uVar10 >> 0xc;
  if ((((byte)(uVar10 >> 0x15) ^ (byte)(uVar10 >> 0x10)) & 1) != 0) {
    uVar11 = (uVar17 & 0x60f000) >> 0xc | 0x600;
  }
  if (uVar11 == 0) {
    uVar10 = ((param_6 & 0xff) + 3 & 0xfffffffc) * (param_5 & 0xff);
    if (uVar10 != 0) {
      auStack_d0[0] = 0x14316661f;
      _guard_xfg_dispatch_icall_nop(param_7,0,(ulonglong)uVar10 << 2);
    }
    auStack_d0[0] = 0x14316662c;
    HandleLfe(param_5,param_6,param_7);
    return;
  }
  uVar17 = uVar11 | (uVar18 & 0x63f000) >> 0xc;
  local_90 = (undefined4 *)CONCAT44(local_90._4_4_,uVar17);
  bVar15 = 0;
  uVar10 = uVar11;
  do {
    bVar15 = bVar15 + 1;
    uVar10 = uVar10 & uVar10 - 1;
  } while (uVar10 != 0);
  bVar16 = 0;
  uVar18 = (uint)bVar15;
  for (uVar10 = uVar17; uVar10 != 0; uVar10 = uVar10 & uVar10 - 1) {
    bVar16 = bVar16 + 1;
  }
  uVar10 = (uint)bVar16;
  local_88 = uVar10;
  afStack_9c[1] = (float)(uVar10 + 3 >> 2);
  uStack_84 = uVar18;
  iVar19 = (int)afStack_9c[1] * uVar18;
  uVar12 = (ulonglong)(uint)(iVar19 * 0x10) + 0xf;
  if (uVar12 <= (uint)(iVar19 * 0x10)) {
    uVar12 = 0xffffffffffffff0;
  }
  auStack_d0[0] = 0x1431666c0;
  lVar7 = -(uVar12 & 0xfffffffffffffff0);
  puVar5 = (undefined4 *)((longlong)afStack_9c + lVar7 + 4);
  local_80 = puVar5;
  if (iVar19 != 0) {
    *(undefined8 *)((longlong)auStack_d0 + lVar7) = 0x1431666e5;
    _guard_xfg_dispatch_icall_nop(puVar5,0,(ulonglong)(uint)(iVar19 * 4) << 2);
  }
  fVar32 = afStack_9c[1];
  uVar20 = (int)afStack_9c[1] << 4;
  uVar12 = (ulonglong)uVar20 + 0xf;
  if (uVar12 <= uVar20) {
    uVar12 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_d0 + lVar7) = 0x143166712;
  lVar8 = -(uVar12 & 0xfffffffffffffff0);
  uVar24 = (uint)fVar32 & 0xfffffff;
  _Dst = (float *)((longlong)afStack_9c + lVar8 + lVar7 + 4);
  if (uVar24 != 0) {
    *(undefined8 *)((longlong)auStack_d0 + lVar8 + lVar7) = 0x143166735;
    _guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)(uVar24 << 2) << 2);
    fVar32 = afStack_9c[1];
  }
  puVar9 = local_80;
  puVar5 = local_90;
  uVar12 = (ulonglong)uVar20;
  uVar20 = (uint)local_90;
  uVar24 = (uint)local_90 >> 2 & 1;
  if (uVar11 < 0x608) {
    if (uVar11 == 0x607) {
      uVar25 = (ulonglong)(uint)((int)fVar32 * 0xc);
      *local_80 = 0x3f800000;
      puVar9[(ulonglong)(uint)((int)fVar32 * 4) + 1] = 0x3f800000;
      puVar9[(ulonglong)(uint)((int)fVar32 * 8) + 2] = 0x3f800000;
      puVar9[(uVar24 + 2) + uVar25] = 0x3f800000;
      lVar13 = (uVar24 + 3) + uVar12;
      puVar9[lVar13] = 0x3f800000;
      if ((uVar20 - 0x633 & 0xfffffffb) == 0) {
        puVar9[(uVar24 + 4) + uVar25] = 0x3f800000;
        puVar9[(uVar24 + 5) + uVar12] = 0x3f800000;
        *(undefined8 *)((longlong)auStack_d0 + lVar8 + lVar7) = 0x143166aca;
        _GetSpeakerVolumes2DPan3HasCenter(param_1,param_2,_Dst,(ulonglong)puVar5 & 0xffffffff);
      }
      else {
        *(undefined8 *)((longlong)auStack_d0 + lVar8 + lVar7) = 0x143166a9f;
        _GetSpeakerVolumes2DPan2HasCenter(lVar13,uVar25,_Dst,(ulonglong)puVar5 & 0xffffffff);
      }
      goto LAB_143166bf1;
    }
    if (uVar11 == 3) {
      uVar23 = (uint)local_90 - 0x633;
      *local_80 = 0x3f800000;
      puVar9[(ulonglong)(uint)((int)fVar32 * 4) + 1] = 0x3f800000;
      if ((uVar23 & 0xfffffffb) != 0) {
        if ((uVar20 - 0x603 & 0xfffffffb) == 0) {
          puVar9[uVar24 + 2] = 0x3f800000;
          puVar9[(ulonglong)(uint)((int)fVar32 * 4) + (ulonglong)(uVar24 + 3)] = 0x3f800000;
          *(undefined8 *)((longlong)auStack_d0 + lVar8 + lVar7) = 0x1431669f4;
          _GetSpeakerVolumes2DPan2(param_1,param_2,_Dst,(ulonglong)puVar5 & 0xffffffff);
        }
        else {
          *(float *)((longlong)afStack_9c + lVar8 + lVar7 + 8) = SQRT(param_1);
          *_Dst = SQRT(1.0 - param_1);
        }
        goto LAB_143166bf1;
      }
      puVar9[uVar24 + 2] = 0x3f800000;
      puVar9[uVar24 + 4] = 0x3f800000;
      puVar9[(ulonglong)(uint)((int)fVar32 * 4) + (ulonglong)(uVar24 + 3)] = 0x3f800000;
      puVar9[(ulonglong)(uint)((int)fVar32 * 4) + (ulonglong)(uVar24 + 5)] = 0x3f800000;
    }
    else {
      if (uVar11 == 7) {
        puVar1 = local_80 + (uint)((int)fVar32 * 4);
        local_80 = puVar1;
        puVar2 = puVar9 + (uint)((int)fVar32 * 8);
        *puVar9 = 0x3f800000;
        uVar23 = (uint)local_90 - 0x633;
        puVar1[1] = 0x3f800000;
        local_90 = puVar2;
        puVar2[2] = 0x3f800000;
        if ((uVar23 & 0xfffffffb) != 0) {
          if ((uVar20 - 0x603 & 0xfffffffb) == 0) {
            puVar9[uVar24 + 2] = 0x3f800000;
            puVar1[uVar24 + 3] = 0x3f800000;
            puVar2[uVar24 + 3] = 0x3f000000;
            puVar2[uVar24 + 2] = 0x3f000000;
            *(undefined8 *)((longlong)auStack_d0 + lVar8 + lVar7) = 0x1431668f2;
            _GetSpeakerVolumes2DPan2HasCenter(param_1,param_2,_Dst,(ulonglong)puVar5 & 0xffffffff);
          }
          else {
            *(undefined4 *)((longlong)&local_90 + lVar8 + lVar7) = 0x3f13cd3a;
            *_Dst = SQRT((2.0 - (param_1 + param_1)) * 0.33333334);
            *(float *)((longlong)afStack_9c + lVar8 + lVar7 + 8) =
                 SQRT((param_1 + param_1) * 0.33333334);
          }
          goto LAB_143166bf1;
        }
        puVar9[uVar24 + 2] = 0x3f800000;
        puVar9[uVar24 + 4] = 0x3f800000;
        local_80[uVar24 + 3] = 0x3f800000;
        local_80[uVar24 + 5] = 0x3f800000;
        puVar2[uVar24 + 2] = 0x3f000000;
        puVar2[uVar24 + 4] = 0x3f000000;
        puVar2[uVar24 + 3] = 0x3f000000;
        puVar2[uVar24 + 5] = 0x3f000000;
        goto LAB_143166951;
      }
      if (uVar11 != 0x603) goto LAB_143166bf1;
      *local_80 = 0x3f800000;
      puVar9[(ulonglong)(uint)((int)fVar32 * 4) + 1] = 0x3f800000;
      uVar12 = (ulonglong)(uint)((int)fVar32 * 8);
      puVar9[(uVar24 + 2) + uVar12] = 0x3f800000;
      lVar13 = (ulonglong)(uVar24 + 3) + (ulonglong)(uint)((int)fVar32 * 0xc);
      puVar9[lVar13] = 0x3f800000;
      if ((uVar20 - 0x633 & 0xfffffffb) != 0) {
        *(undefined8 *)((longlong)auStack_d0 + lVar8 + lVar7) = 0x1431667ee;
        _GetSpeakerVolumes2DPan2(lVar13,uVar12,_Dst,(ulonglong)puVar5 & 0xffffffff);
        goto LAB_143166bf1;
      }
      puVar9[(uVar24 + 4) + uVar12] = 0x3f800000;
      puVar9[(ulonglong)(uVar24 + 5) + (ulonglong)(uint)((int)fVar32 * 0xc)] = 0x3f800000;
    }
  }
  else {
    if (uVar11 != 0x633) {
      if (uVar11 != 0x637) goto LAB_143166bf1;
      *local_80 = 0x3f800000;
      puVar9[(ulonglong)(uint)((int)fVar32 * 4) + 1] = 0x3f800000;
      puVar9[(ulonglong)(uint)((int)fVar32 * 8) + 2] = 0x3f800000;
      puVar9[(ulonglong)(uint)((int)fVar32 * 0xc) + (ulonglong)(uVar24 + 2)] = 0x3f800000;
      puVar9[(uVar24 + 3) + uVar12] = 0x3f800000;
      puVar9[(ulonglong)(uint)((int)fVar32 * 0x14) + (ulonglong)(uVar24 + 4)] = 0x3f800000;
      puVar9[(ulonglong)(uint)((int)fVar32 * 0x18) + (ulonglong)(uVar24 + 5)] = 0x3f800000;
LAB_143166951:
      *(undefined8 *)((longlong)auStack_d0 + lVar8 + lVar7) = 0x143166963;
      _GetSpeakerVolumes2DPan3HasCenter(param_1,param_2,_Dst,(ulonglong)puVar5 & 0xffffffff);
      goto LAB_143166bf1;
    }
    *local_80 = 0x3f800000;
    puVar9[(ulonglong)(uint)((int)fVar32 * 4) + 1] = 0x3f800000;
    puVar9[(ulonglong)(uint)((int)fVar32 * 8) + (ulonglong)(uVar24 + 2)] = 0x3f800000;
    puVar9[(ulonglong)(uint)((int)fVar32 * 0xc) + (ulonglong)(uVar24 + 3)] = 0x3f800000;
    puVar9[(uVar24 + 4) + uVar12] = 0x3f800000;
    puVar9[(ulonglong)(uint)((int)fVar32 * 0x14) + (ulonglong)(uVar24 + 5)] = 0x3f800000;
  }
  *(undefined8 *)((longlong)auStack_d0 + lVar8 + lVar7) = 0x143166bf1;
  _GetSpeakerVolumes2DPan3(param_1,param_2,_Dst,(ulonglong)puVar5 & 0xffffffff);
LAB_143166bf1:
  local_res20 = 0;
  do {
    uVar12 = 0;
    pfVar3 = (float *)(puVar9 + (int)afStack_9c[1] * local_res20 * 4);
    if (local_88 != 0) {
      if ((0xf < local_88) && ((_Dst + (local_88 - 1) < pfVar3 || (pfVar3 + (local_88 - 1) < _Dst)))
         ) {
        uVar20 = 8;
        do {
          pfVar14 = pfVar3 + uVar12;
          fVar32 = pfVar14[1];
          fVar31 = pfVar14[2];
          fVar30 = pfVar14[3];
          uVar24 = uVar20 - 4;
          pfVar6 = _Dst + uVar12;
          fVar28 = pfVar6[1];
          fVar29 = pfVar6[2];
          fVar27 = pfVar6[3];
          pfVar4 = pfVar3 + uVar12;
          *pfVar4 = *pfVar6 * *pfVar14;
          pfVar4[1] = fVar28 * fVar32;
          pfVar4[2] = fVar29 * fVar31;
          pfVar4[3] = fVar27 * fVar30;
          uVar23 = (int)uVar12 + 0x10;
          uVar12 = (ulonglong)uVar23;
          pfVar14 = pfVar3 + uVar24;
          fVar32 = pfVar14[1];
          fVar31 = pfVar14[2];
          fVar30 = pfVar14[3];
          pfVar6 = _Dst + uVar24;
          fVar28 = pfVar6[1];
          fVar29 = pfVar6[2];
          fVar27 = pfVar6[3];
          pfVar4 = pfVar3 + uVar24;
          *pfVar4 = *pfVar6 * *pfVar14;
          pfVar4[1] = fVar28 * fVar32;
          pfVar4[2] = fVar29 * fVar31;
          pfVar4[3] = fVar27 * fVar30;
          pfVar14 = pfVar3 + uVar20;
          fVar32 = pfVar14[1];
          fVar31 = pfVar14[2];
          fVar30 = pfVar14[3];
          pfVar6 = _Dst + uVar20;
          fVar28 = pfVar6[1];
          fVar29 = pfVar6[2];
          fVar27 = pfVar6[3];
          pfVar4 = pfVar3 + uVar20;
          *pfVar4 = *pfVar6 * *pfVar14;
          pfVar4[1] = fVar28 * fVar32;
          pfVar4[2] = fVar29 * fVar31;
          pfVar4[3] = fVar27 * fVar30;
          uVar24 = uVar20 + 4;
          uVar20 = uVar20 + 0x10;
          pfVar14 = pfVar3 + uVar24;
          fVar32 = pfVar14[1];
          fVar31 = pfVar14[2];
          fVar30 = pfVar14[3];
          pfVar6 = _Dst + uVar24;
          fVar28 = pfVar6[1];
          fVar29 = pfVar6[2];
          fVar27 = pfVar6[3];
          pfVar4 = pfVar3 + uVar24;
          *pfVar4 = *pfVar6 * *pfVar14;
          pfVar4[1] = fVar28 * fVar32;
          pfVar4[2] = fVar29 * fVar31;
          pfVar4[3] = fVar27 * fVar30;
        } while (uVar23 < (local_88 & 0xfffffff0));
      }
      uVar20 = (uint)uVar12;
      if (uVar20 < local_88) {
        if (3 < local_88 - uVar20) {
          lVar13 = uVar12 + 1;
          uVar24 = ((local_88 - uVar20) - 4 >> 2) + 1;
          uVar25 = (ulonglong)uVar24;
          uVar12 = (ulonglong)(uVar20 + uVar24 * 4);
          pfVar14 = pfVar3 + lVar13;
          do {
            pfVar4 = pfVar14 + 4;
            pfVar14[-1] = *(float *)((longlong)_Dst + (-4 - (longlong)pfVar3) + (longlong)pfVar14) *
                          pfVar14[-1];
            *pfVar14 = *(float *)((longlong)_Dst + (-0x10 - (longlong)pfVar3) + (longlong)pfVar4) *
                       *pfVar14;
            pfVar14[1] = *(float *)((longlong)_Dst + (-0xc - (longlong)pfVar3) + (longlong)pfVar4) *
                         pfVar14[1];
            pfVar14[2] = *(float *)((longlong)_Dst + (-8 - (longlong)pfVar3) + (longlong)pfVar4) *
                         pfVar14[2];
            uVar25 = uVar25 - 1;
            pfVar14 = pfVar4;
          } while (uVar25 != 0);
        }
        if ((uint)uVar12 < local_88) {
          uVar25 = (ulonglong)(local_88 - (uint)uVar12);
          pfVar14 = pfVar3 + uVar12;
          do {
            *pfVar14 = *(float *)(((longlong)_Dst - (longlong)pfVar3) + (longlong)pfVar14) *
                       *pfVar14;
            uVar25 = uVar25 - 1;
            pfVar14 = pfVar14 + 1;
          } while (uVar25 != 0);
        }
      }
    }
    local_res20 = local_res20 + 1;
  } while (local_res20 < uStack_84);
  *(float **)(&stack0xffffffffffffff60 + lVar8 + lVar7) = param_7;
  *(undefined4 **)((longlong)&uStack_a8 + lVar8 + lVar7) = puVar9;
  *(undefined8 *)((longlong)auStack_d0 + lVar8 + lVar7) = 0x143166dc6;
  FUN_143169a20(uVar11 << 0xc | uVar18 | 0x100,uVar17 << 0xc | uVar10 | 0x100,uVar21,param_6 & 0xff)
  ;
  *(undefined8 *)((longlong)auStack_d0 + lVar8 + lVar7) = 0x143166dda;
  HandleLfe(param_5,param_6,param_7);
  return;
}



// FUNCTION 143166f20 GetSpeakerVolumes body=9978 status=ok
// SIG undefined GetSpeakerVolumes(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CAkSpeakerPan::GetSpeakerVolumes
               (undefined8 param_1,undefined8 param_2,float param_3,float param_4,
               undefined4 *param_5,float param_6,float param_7,float param_8,undefined8 param_9,
               undefined8 param_10,longlong param_11)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined1 auVar4 [16];
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  uint *puVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  undefined *puVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  float *pfVar36;
  longlong *plVar37;
  undefined1 (*pauVar38) [16];
  uint uVar39;
  longlong lVar40;
  byte bVar41;
  uint uVar42;
  float fVar43;
  undefined1 *puVar44;
  undefined1 *puVar45;
  undefined1 *puVar46;
  undefined1 *puVar47;
  char cVar48;
  uint uVar49;
  longlong lVar50;
  undefined *puVar51;
  float *pfVar52;
  uint uVar53;
  ulonglong uVar54;
  ulonglong uVar55;
  void *pvVar56;
  ulonglong uVar57;
  undefined1 (*pauVar58) [16];
  uint uVar59;
  ulonglong uVar60;
  int iVar61;
  uint uVar62;
  ulonglong uVar63;
  longlong lVar64;
  float fVar65;
  float *pfVar66;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar71 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar91;
  undefined1 in_XMM1 [16];
  float fVar92;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar110;
  float fVar111;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  undefined8 uStack_530;
  undefined1 auStack_528 [32];
  undefined8 local_508;
  float local_500 [2];
  float *local_4f8;
  float local_4e8 [32];
  float afStack_468 [78];
  undefined8 uStack_330;
  undefined1 local_328 [32];
  longlong lStack_308;
  float afStack_300 [2];
  longlong local_2f8 [2];
  float local_2e8 [2];
  undefined8 local_2e0;
  undefined8 local_2d8;
  void *pvStack_2d0;
  float *local_2c8;
  undefined8 uStack_2c0;
  float *local_2b8;
  undefined8 uStack_2b0;
  ulonglong local_2a8;
  float *pfStack_2a0;
  float local_298;
  uint *local_290;
  ulonglong local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  ulonglong local_278;
  ulonglong local_270;
  ulonglong local_268;
  ulonglong local_260;
  ulonglong local_258;
  ulonglong local_250;
  longlong local_248;
  ulonglong local_240;
  longlong local_238;
  ulonglong local_230;
  longlong local_228;
  ulonglong local_220;
  longlong local_218;
  ulonglong local_210;
  longlong local_208;
  ulonglong local_200;
  longlong local_1f8;
  ulonglong local_1f0;
  longlong local_1e8;
  ulonglong local_1e0;
  longlong local_1d8;
  ulonglong local_1d0;
  longlong local_1c8;
  ulonglong local_1c0;
  longlong local_1b8;
  ulonglong local_1b0;
  longlong local_1a8;
  ulonglong local_1a0;
  longlong local_198;
  ulonglong local_190;
  longlong local_188;
  ulonglong local_180;
  longlong local_178;
  ulonglong local_170;
  longlong local_168;
  ulonglong local_160;
  ulonglong local_158;
  ulonglong local_150;
  longlong local_148;
  ulonglong local_140;
  longlong local_138;
  ulonglong local_130;
  longlong local_128;
  ulonglong local_120;
  longlong local_118;
  ulonglong local_110;
  longlong local_108;
  ulonglong local_100;
  longlong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  
  fVar112 = param_8;
  uVar62 = (uint)param_8 & 0xf00;
  fVar95 = in_XMM1._0_4_;
  fVar43 = param_8;
  if (uVar62 == 0x100) {
    bVar41 = 0;
    uVar42 = (uint)param_8 >> 0xc & 0xffff7;
    for (uVar39 = uVar42; uVar39 != 0; uVar39 = uVar39 & uVar39 - 1) {
      bVar41 = bVar41 + 1;
    }
    fVar43 = (float)(uVar42 << 0xc | (uint)bVar41 | 0x100);
  }
  fVar65 = (float)((uint)fVar43 & 0xff);
  uVar39 = (uint)param_6 >> 0xc & (uint)param_7;
  uVar42 = (uint)param_6 & 0xff;
  uStack_2b0 = CONCAT44(uStack_2b0._4_4_,fVar43) & 0xffffffff000000ff;
  if ((uint)fVar65 < 2) {
    if (fVar65 == 1.4013e-45) {
      if (((uint)param_6 & 0xf00) == 0x200) {
        *param_5 = 0x3f800000;
      }
      else {
        uVar62 = 0;
        do {
          if ((*(uint *)(&DAT_1467bdd40 + ((ulonglong)uVar62 + (ulonglong)(uVar42 - 1) * 8) * 4) &
               (uint)param_7 & 0xffff) != 0) {
            param_5[(((uint)param_8 & 0xff) + 3 & 0xfffffffc) *
                    (*(uint *)(&DAT_1467bdd40 +
                              ((ulonglong)uVar62 + (ulonglong)(uVar42 - 1) * 8) * 4) >> 0x10)] =
                 0x3f800000;
          }
          uVar62 = uVar62 + 1;
        } while (uVar62 < uVar42);
      }
    }
  }
  else {
    local_2e8[0] = fVar43;
    if ((((uint)param_6 & 0xf00) == 0) || (uVar62 == 0)) {
      uStack_330 = 0x1431695a6;
      GetSpeakerVolumesDirectNoMask(param_6,param_8,param_5);
    }
    else {
      param_3 = param_3 * 0.01;
      cVar48 = SUB41(param_8,0);
      if (((uint)param_6 & 0xf00) == 0x200) {
        pfVar66 = local_4e8;
        local_508 = param_9;
        uStack_530 = 0x14316711f;
        local_500[0] = param_3;
        local_4f8 = pfVar66;
        TransformSampledSphereSIMD(&DAT_145ac9620,0x20,param_1,param_10);
        fVar112 = param_3 * 0.5 * param_3 + 0.5;
        if (uVar62 == 0x200) {
          uVar62 = (uint)param_8 & 0xff;
          if (uVar42 <= uVar62) {
            param_8 = param_6;
          }
          uVar39 = (uint)param_8 & 0xff;
          if (uVar39 < 5) {
            uVar39 = 4;
            pfVar66 = (float *)&DAT_145ac95a0;
            puVar51 = &DAT_145ac81b0;
          }
          else if ((uVar39 < 7) || (uVar39 == 9)) {
            uVar39 = 9;
            pfVar66 = (float *)&DAT_145ac95b0;
            puVar51 = &DAT_145ac83b0;
          }
          else {
            if (0x10 < uVar39) {
              return;
            }
            uVar39 = 0x10;
            pfVar66 = (float *)&DAT_145ac95e0;
            puVar51 = &DAT_145ac8830;
          }
          uVar63 = (ulonglong)(uVar39 << 7) + 0xf;
          if (uVar63 <= uVar39 << 7) {
            uVar63 = 0xffffffffffffff0;
          }
          uStack_530 = 0x1431671d8;
          lVar40 = -(uVar63 & 0xfffffffffffffff0);
          lVar64 = 0x20;
          lVar50 = (longlong)local_4e8 + lVar40;
          do {
            *(longlong *)((longlong)local_500 + lVar40) = lVar50;
            *(undefined4 *)((longlong)local_500 + lVar40 + -8) = 0x20;
            *(undefined8 *)(auStack_528 + lVar40 + -8) = 0x14316722c;
            _ComputeSN3DphericalHarmonics();
            lVar50 = lVar50 + 4;
            lVar64 = lVar64 + -1;
          } while (lVar64 != 0);
          iVar61 = 0;
          uVar49 = 0;
          uVar59 = 1;
          uVar42 = *(uint *)(&DAT_145aca020 + (ulonglong)(uVar42 - 1) * 4);
          puVar46 = auStack_528 + lVar40;
          do {
            puVar44 = puVar46;
            if ((uVar42 & uVar59) == 0) {
              puVar13 = puVar51 + (ulonglong)(uVar49 << 5) * 4;
              fVar43 = (0.07957747 / *pfVar66) * SQRT(fVar112);
              puVar44 = puVar46 + -0x80;
              puVar3 = puVar46 + -0x40;
              if ((puVar13 + 0x7c < puVar3) || (puVar46 + 0x3c < puVar13)) {
                lVar50 = (longlong)puVar13 - (longlong)puVar3;
                lVar64 = 2;
                pfVar10 = (float *)(puVar46 + -0x30);
                do {
                  pfVar52 = (float *)((longlong)pfVar10 + lVar50 + -0x10);
                  fVar95 = pfVar52[1];
                  fVar65 = pfVar52[2];
                  fVar101 = pfVar52[3];
                  pfVar36 = (float *)((longlong)pfVar10 + lVar50);
                  fVar91 = *pfVar36;
                  fVar92 = pfVar36[1];
                  fVar93 = pfVar36[2];
                  fVar96 = pfVar36[3];
                  pfVar10[-4] = *pfVar52 * fVar43;
                  pfVar10[-3] = fVar95 * fVar43;
                  pfVar10[-2] = fVar65 * fVar43;
                  pfVar10[-1] = fVar101 * fVar43;
                  pfVar36 = (float *)((longlong)pfVar10 + lVar50 + 0x10);
                  fVar95 = *pfVar36;
                  fVar65 = pfVar36[1];
                  fVar101 = pfVar36[2];
                  fVar99 = pfVar36[3];
                  *pfVar10 = fVar91 * fVar43;
                  pfVar10[1] = fVar92 * fVar43;
                  pfVar10[2] = fVar93 * fVar43;
                  pfVar10[3] = fVar96 * fVar43;
                  pfVar36 = (float *)((longlong)pfVar10 + lVar50 + 0x20);
                  fVar91 = *pfVar36;
                  fVar92 = pfVar36[1];
                  fVar93 = pfVar36[2];
                  fVar96 = pfVar36[3];
                  pfVar10[4] = fVar95 * fVar43;
                  pfVar10[5] = fVar65 * fVar43;
                  pfVar10[6] = fVar101 * fVar43;
                  pfVar10[7] = fVar99 * fVar43;
                  pfVar10[8] = fVar91 * fVar43;
                  pfVar10[9] = fVar92 * fVar43;
                  pfVar10[10] = fVar93 * fVar43;
                  pfVar10[0xb] = fVar96 * fVar43;
                  lVar64 = lVar64 + -1;
                  pfVar10 = pfVar10 + 0x10;
                } while (lVar64 != 0);
              }
              else {
                lVar50 = (longlong)puVar13 - (longlong)puVar3;
                lVar64 = 8;
                pfVar10 = (float *)(puVar46 + -0x3c);
                do {
                  pfVar36 = pfVar10 + 4;
                  pfVar10[-1] = fVar43 * *(float *)(lVar50 + -0x14 + (longlong)pfVar36);
                  *pfVar10 = fVar43 * *(float *)((longlong)pfVar10 + lVar50);
                  pfVar10[1] = fVar43 * *(float *)(lVar50 + -0xc + (longlong)pfVar36);
                  pfVar10[2] = fVar43 * *(float *)(lVar50 + -8 + (longlong)pfVar36);
                  lVar64 = lVar64 + -1;
                  pfVar10 = pfVar36;
                } while (lVar64 != 0);
              }
              uVar53 = 0;
              pfVar10 = (float *)(param_5 + (uVar62 + 3 & 0xfffffffc) * iVar61);
              do {
                fVar43 = 0.0;
                fVar95 = 0.0;
                fVar65 = 0.0;
                fVar101 = 0.0;
                pfVar52 = (float *)((longlong)local_4e8 + lVar40 + (ulonglong)(uVar53 << 5) * 4);
                lVar50 = (longlong)puVar3 - (longlong)pfVar52;
                pfVar36 = pfVar52 + 0x20;
                do {
                  fVar91 = *pfVar52;
                  pfVar6 = pfVar52 + 1;
                  pfVar7 = pfVar52 + 2;
                  pfVar8 = pfVar52 + 3;
                  pfVar1 = (float *)(lVar50 + (longlong)pfVar52);
                  pfVar52 = pfVar52 + 4;
                  fVar43 = fVar43 + *pfVar1 * fVar91;
                  fVar95 = fVar95 + pfVar1[1] * *pfVar6;
                  fVar65 = fVar65 + pfVar1[2] * *pfVar7;
                  fVar101 = fVar101 + pfVar1[3] * *pfVar8;
                } while (pfVar52 < pfVar36);
                uVar53 = uVar53 + 1;
                *pfVar10 = fVar95 + fVar101 + fVar43 + fVar65;
                pfVar10 = pfVar10 + 1;
              } while (uVar53 < uVar39);
              iVar61 = iVar61 + 1;
            }
            uVar49 = uVar49 + 1;
            uVar59 = uVar59 << 1 | (uint)((int)uVar59 < 0);
            pfVar66 = pfVar66 + 1;
            puVar46 = puVar44;
          } while (uVar49 < uVar39);
        }
        else {
          if (uVar42 < 5) {
            param_7 = 5.60519e-45;
            puVar51 = &DAT_145ac81b0;
          }
          else if ((uVar42 < 7) || (uVar42 == 9)) {
            param_7 = 1.26117e-44;
            puVar51 = &DAT_145ac83b0;
          }
          else {
            if (0x10 < uVar42) {
              return;
            }
            param_7 = 2.24208e-44;
            puVar51 = &DAT_145ac8830;
          }
          if (param_11 != 0) {
            uStack_530 = 0x14316745b;
            uStack_2c0 = puVar51;
            local_2c8 = (float *)AkDevice::GetPanCache(param_11,fVar43);
            if (local_2c8 != (float *)0x0) {
              uVar62 = (int)fVar65 + 3U >> 2;
              local_2e8[0] = (float)((uint)param_8 & 0xff9c0000);
              local_2d8 = CONCAT44(local_2d8._4_4_,uVar62);
              uVar63 = (ulonglong)(uVar62 << 9) + 0xf;
              if (uVar63 <= uVar62 << 9) {
                uVar63 = 0xffffffffffffff0;
              }
              uStack_530 = 0x1431674a5;
              lVar40 = -(uVar63 & 0xfffffffffffffff0);
              pvStack_2d0 = (void *)((longlong)local_4e8 + lVar40);
              if (uVar62 != 0) {
                *(undefined8 *)(auStack_528 + lVar40 + -8) = 0x1431674c9;
                ::_guard_xfg_dispatch_icall_nop
                          ((void *)((longlong)local_4e8 + lVar40),0,(ulonglong)(uVar62 << 7) << 2);
              }
              pfVar10 = local_2c8;
              fVar112 = fVar112 * 0.03125;
              iVar61 = (uint)local_2d8;
              if (local_2e8[0] == 0.0) {
                if ((((uint)fVar43 & 0xfffff000) == 0x3000) && (*(int *)(param_11 + 0x54) == 1)) {
                  uVar54 = 0;
                  uVar62 = (uint)param_8 & 0xff;
                  local_2e0 = 0;
                  uVar60 = (ulonglong)(uVar62 + 3 >> 2) << 4;
                  local_278 = uVar60;
                  uVar63 = uVar54;
                  do {
                    fVar43 = *pfVar66;
                    pauVar58 = (undefined1 (*) [16])
                               ((longlong)pvStack_2d0 +
                               (ulonglong)(uint)(iVar61 * (int)uVar63 * 4) * 4);
                    fVar95 = (fVar43 * 0.5 + 0.70710677) - fVar43 * 0.20710677 * fVar43;
                    fVar95 = fVar95 * fVar95;
                    fVar43 = (1.0 - fVar95) + *(float *)*pauVar58;
                    auVar70 = ZEXT416((uint)fVar43);
                    *(float *)((longlong)*pauVar58 + 4) =
                         fVar95 + *(float *)((longlong)*pauVar58 + 4);
                    *(float *)*pauVar58 = fVar43;
                    if (cVar48 != '\0') {
                      uVar55 = uVar54;
                      if (0xf < uVar62) {
                        uVar39 = 8;
                        do {
                          pfVar10 = (float *)((longlong)*pauVar58 + uVar55 * 4);
                          fVar43 = pfVar10[1];
                          fVar95 = pfVar10[2];
                          fVar101 = pfVar10[3];
                          pfVar36 = (float *)((longlong)*pauVar58 + uVar55 * 4);
                          *pfVar36 = fVar112 * *pfVar10;
                          pfVar36[1] = fVar112 * fVar43;
                          pfVar36[2] = fVar112 * fVar95;
                          pfVar36[3] = fVar112 * fVar101;
                          uVar59 = (int)uVar55 + 0x10;
                          uVar55 = (ulonglong)uVar59;
                          pfVar10 = (float *)((longlong)*pauVar58 + (ulonglong)(uVar39 - 4) * 4);
                          fVar43 = pfVar10[1];
                          fVar95 = pfVar10[2];
                          fVar101 = pfVar10[3];
                          pfVar36 = (float *)((longlong)*pauVar58 + (ulonglong)(uVar39 - 4) * 4);
                          *pfVar36 = fVar112 * *pfVar10;
                          pfVar36[1] = fVar112 * fVar43;
                          pfVar36[2] = fVar112 * fVar95;
                          pfVar36[3] = fVar112 * fVar101;
                          pfVar10 = (float *)((longlong)*pauVar58 + (ulonglong)uVar39 * 4);
                          fVar43 = pfVar10[1];
                          fVar95 = pfVar10[2];
                          fVar101 = pfVar10[3];
                          pfVar36 = (float *)((longlong)*pauVar58 + (ulonglong)uVar39 * 4);
                          *pfVar36 = *pfVar10 * fVar112;
                          pfVar36[1] = fVar43 * fVar112;
                          pfVar36[2] = fVar95 * fVar112;
                          pfVar36[3] = fVar101 * fVar112;
                          uVar49 = uVar39 + 4;
                          uVar39 = uVar39 + 0x10;
                          auVar70 = *(undefined1 (*) [16])
                                     ((longlong)*pauVar58 + (ulonglong)uVar49 * 4);
                          auVar82._0_4_ = fVar112 * auVar70._0_4_;
                          auVar82._4_4_ = fVar112 * auVar70._4_4_;
                          auVar82._8_4_ = fVar112 * auVar70._8_4_;
                          auVar82._12_4_ = fVar112 * auVar70._12_4_;
                          *(undefined1 (*) [16])((longlong)*pauVar58 + (ulonglong)uVar49 * 4) =
                               auVar82;
                          uVar60 = local_278;
                        } while (uVar59 < ((uint)param_8 & 0xf0));
                      }
                      uVar39 = (uint)uVar55;
                      if (uVar39 < uVar62) {
                        if (3 < uVar62 - uVar39) {
                          uVar49 = ((uVar62 - uVar39) - 4 >> 2) + 1;
                          uVar57 = (ulonglong)uVar49;
                          uVar39 = uVar39 + uVar49 * 4;
                          pfVar10 = (float *)((longlong)*pauVar58 + uVar55 * 4 + 8);
                          do {
                            auVar70._0_4_ = pfVar10[-2] * fVar112;
                            auVar70._4_4_ = pfVar10[-1] * fVar112;
                            auVar70._8_4_ = *pfVar10 * fVar112;
                            auVar70._12_4_ = pfVar10[1] * fVar112;
                            *(undefined1 (*) [16])(pfVar10 + -2) = auVar70;
                            uVar57 = uVar57 - 1;
                            pfVar10 = pfVar10 + 4;
                          } while (uVar57 != 0);
                        }
                        if (uVar39 < uVar62) {
                          uVar55 = (ulonglong)(uVar62 - uVar39);
                          pfVar10 = (float *)((longlong)*pauVar58 + (ulonglong)uVar39 * 4);
                          do {
                            auVar69._4_4_ = fVar112;
                            auVar69._0_4_ = fVar112;
                            auVar69._8_4_ = fVar112;
                            auVar69._12_4_ = fVar112;
                            auVar70._4_12_ = auVar69._4_12_;
                            auVar70._0_4_ = fVar112 * *pfVar10;
                            *pfVar10 = auVar70._0_4_;
                            uVar55 = uVar55 - 1;
                            pfVar10 = pfVar10 + 1;
                          } while (uVar55 != 0);
                        }
                      }
                    }
                    pvVar56 = *pauVar58;
                    for (; pauVar58 < (undefined1 (*) [16])((longlong)pvVar56 + uVar60);
                        pauVar58 = pauVar58 + 1) {
                      auVar70 = sqrtps(auVar70,*pauVar58);
                      *pauVar58 = auVar70;
                    }
                    uVar39 = (int)uVar63 + 1;
                    uVar63 = (ulonglong)uVar39;
                    pfVar66 = pfVar66 + 4;
                  } while (uVar39 < 0x20);
                }
                else {
                  fVar112 = (float)((int)fVar65 + 2);
                  if (3 < (uint)fVar65) {
                    fVar112 = fVar65;
                  }
                  uVar62 = 0;
                  local_2e0 = 0;
                  local_2e8[0] = fVar112;
                  do {
                    pauVar58 = (undefined1 (*) [16])
                               ((longlong)pvStack_2d0 + (ulonglong)(uVar62 * iVar61 * 4) * 4);
                    *(undefined1 (**) [16])((longlong)local_500 + lVar40) = pauVar58;
                    *(undefined **)((longlong)local_500 + lVar40 + -8) =
                         &DAT_1467bdd40 + (ulonglong)((int)fVar65 - 1) * 0x20;
                    *(undefined8 *)(auStack_528 + lVar40 + -8) = 0x1431679a9;
                    auVar71._0_8_ = AddPowerVbap2d(pfVar10,fVar112,pfVar66);
                    auVar71._8_8_ = extraout_XMM0_Qb_00;
                    pauVar38 = pauVar58 + ((int)fVar65 + 3U >> 2);
                    for (; pauVar58 < pauVar38; pauVar58 = pauVar58 + 1) {
                      auVar71 = sqrtps(auVar71,*pauVar58);
                      *pauVar58 = auVar71;
                    }
                    uVar62 = uVar62 + 1;
                    pfVar66 = pfVar66 + 4;
                  } while (uVar62 < 0x20);
                  puVar51 = uStack_2c0;
                  fVar65 = (float)uStack_2b0;
                }
              }
              else {
                uVar60 = 0;
                local_2e0 = 0;
                uVar63 = uVar60;
                do {
                  pauVar58 = (undefined1 (*) [16])
                             ((longlong)pvStack_2d0 +
                             (ulonglong)(uint)(iVar61 * (int)uVar63 * 4) * 4);
                  *(undefined1 (**) [16])((longlong)local_500 + lVar40) = pauVar58;
                  *(float *)((longlong)local_500 + lVar40 + -8) = fVar65;
                  *(undefined8 *)(auStack_528 + lVar40 + -8) = 0x143167547;
                  auVar68._0_8_ = AkVBAPMap::ComputeVBAPSquared(pfVar10);
                  auVar68._8_8_ = extraout_XMM0_Qb;
                  auVar80 = ZEXT816(0);
                  if (fVar65 != 0.0) {
                    uVar54 = uVar60;
                    if (7 < (uint)fVar65) {
                      fVar93 = 0.0;
                      fVar96 = 0.0;
                      fVar99 = 0.0;
                      fVar102 = 0.0;
                      fVar95 = 0.0;
                      fVar101 = 0.0;
                      fVar91 = 0.0;
                      fVar92 = 0.0;
                      do {
                        pfVar66 = (float *)((longlong)*pauVar58 + uVar54 * 4);
                        iVar5 = (int)uVar54;
                        uVar62 = iVar5 + 8;
                        uVar54 = (ulonglong)uVar62;
                        fVar93 = fVar93 + *pfVar66;
                        fVar96 = fVar96 + pfVar66[1];
                        fVar99 = fVar99 + pfVar66[2];
                        fVar102 = fVar102 + pfVar66[3];
                        pfVar66 = (float *)((longlong)*pauVar58 + (ulonglong)(iVar5 + 4) * 4);
                        fVar95 = fVar95 + *pfVar66;
                        fVar101 = fVar101 + pfVar66[1];
                        fVar91 = fVar91 + pfVar66[2];
                        fVar92 = fVar92 + pfVar66[3];
                      } while (uVar62 < ((uint)fVar43 & 0xf8));
                      fVar99 = fVar99 + fVar91;
                      fVar102 = fVar102 + fVar92;
                      auVar79._0_4_ = fVar99 + fVar93 + fVar95;
                      auVar79._4_4_ = fVar102 + fVar96 + fVar101;
                      auVar79._8_4_ = fVar99 + fVar99;
                      auVar79._12_4_ = fVar102 + fVar102;
                      auVar68._4_4_ = auVar79._4_4_;
                      auVar68._0_4_ = auVar79._4_4_;
                      auVar68._8_4_ = auVar79._12_4_;
                      auVar68._12_4_ = auVar79._12_4_;
                      auVar80._4_12_ = auVar79._4_12_;
                      auVar80._0_4_ = auVar79._0_4_ + auVar79._4_4_;
                    }
                    fVar95 = (float)uVar54;
                    if ((uint)fVar95 < (uint)fVar65) {
                      if (3 < (uint)((int)fVar65 - (int)fVar95)) {
                        uVar62 = (((int)fVar65 - (int)fVar95) - 4U >> 2) + 1;
                        pfVar66 = (float *)((longlong)*pauVar58 + uVar54 * 4 + 8);
                        uVar54 = (ulonglong)uVar62;
                        fVar95 = (float)((int)fVar95 + uVar62 * 4);
                        do {
                          auVar80._0_4_ =
                               auVar80._0_4_ + pfVar66[-2] + pfVar66[-1] + *pfVar66 + pfVar66[1];
                          pfVar66 = pfVar66 + 4;
                          uVar54 = uVar54 - 1;
                        } while (uVar54 != 0);
                      }
                      if ((uint)fVar95 < (uint)fVar65) {
                        pfVar66 = (float *)((longlong)*pauVar58 + (ulonglong)(uint)fVar95 * 4);
                        uVar54 = (ulonglong)(uint)((int)fVar65 - (int)fVar95);
                        do {
                          auVar80._0_4_ = auVar80._0_4_ + *pfVar66;
                          pfVar66 = pfVar66 + 1;
                          uVar54 = uVar54 - 1;
                        } while (uVar54 != 0);
                      }
                    }
                    if (0.0 < auVar80._0_4_) {
                      fVar95 = fVar112 / auVar80._0_4_;
                      if (fVar65 != 0.0) {
                        uVar54 = uVar60;
                        if (0xf < (uint)fVar65) {
                          uVar62 = 8;
                          do {
                            pfVar66 = (float *)((longlong)*pauVar58 + uVar54 * 4);
                            fVar101 = pfVar66[1];
                            fVar91 = pfVar66[2];
                            fVar92 = pfVar66[3];
                            pfVar36 = (float *)((longlong)*pauVar58 + uVar54 * 4);
                            *pfVar36 = *pfVar66 * fVar95;
                            pfVar36[1] = fVar101 * fVar95;
                            pfVar36[2] = fVar91 * fVar95;
                            pfVar36[3] = fVar92 * fVar95;
                            uVar49 = (int)uVar54 + 0x10;
                            uVar54 = (ulonglong)uVar49;
                            pfVar66 = (float *)((longlong)*pauVar58 + (ulonglong)(uVar62 - 4) * 4);
                            auVar81._0_4_ = fVar95 * *pfVar66;
                            auVar81._4_4_ = fVar95 * pfVar66[1];
                            auVar81._8_4_ = fVar95 * pfVar66[2];
                            auVar81._12_4_ = fVar95 * pfVar66[3];
                            *(undefined1 (*) [16])
                             ((longlong)*pauVar58 + (ulonglong)(uVar62 - 4) * 4) = auVar81;
                            pfVar66 = (float *)((longlong)*pauVar58 + (ulonglong)uVar62 * 4);
                            fVar101 = pfVar66[1];
                            fVar91 = pfVar66[2];
                            fVar92 = pfVar66[3];
                            pfVar36 = (float *)((longlong)*pauVar58 + (ulonglong)uVar62 * 4);
                            *pfVar36 = *pfVar66 * fVar95;
                            pfVar36[1] = fVar101 * fVar95;
                            pfVar36[2] = fVar91 * fVar95;
                            pfVar36[3] = fVar92 * fVar95;
                            uVar39 = uVar62 + 4;
                            uVar62 = uVar62 + 0x10;
                            pfVar66 = (float *)((longlong)*pauVar58 + (ulonglong)uVar39 * 4);
                            auVar68._0_4_ = *pfVar66 * fVar95;
                            auVar68._4_4_ = pfVar66[1] * fVar95;
                            auVar68._8_4_ = pfVar66[2] * fVar95;
                            auVar68._12_4_ = pfVar66[3] * fVar95;
                            *(undefined1 (*) [16])((longlong)*pauVar58 + (ulonglong)uVar39 * 4) =
                                 auVar68;
                          } while (uVar49 < ((uint)fVar43 & 0xf0));
                        }
                        fVar101 = (float)uVar54;
                        if ((uint)fVar101 < (uint)fVar65) {
                          if (3 < (uint)((int)fVar65 - (int)fVar101)) {
                            uVar62 = (((int)fVar65 - (int)fVar101) - 4U >> 2) + 1;
                            uVar55 = (ulonglong)uVar62;
                            fVar101 = (float)((int)fVar101 + uVar62 * 4);
                            pfVar66 = (float *)((longlong)*pauVar58 + uVar54 * 4 + 8);
                            do {
                              auVar68._0_4_ = pfVar66[-2] * fVar95;
                              auVar68._4_4_ = pfVar66[-1] * fVar95;
                              auVar68._8_4_ = *pfVar66 * fVar95;
                              auVar68._12_4_ = pfVar66[1] * fVar95;
                              *(undefined1 (*) [16])(pfVar66 + -2) = auVar68;
                              uVar55 = uVar55 - 1;
                              pfVar66 = pfVar66 + 4;
                            } while (uVar55 != 0);
                          }
                          if ((uint)fVar101 < (uint)fVar65) {
                            uVar54 = (ulonglong)(uint)((int)fVar65 - (int)fVar101);
                            pfVar66 = (float *)((longlong)*pauVar58 + (ulonglong)(uint)fVar101 * 4);
                            do {
                              auVar67._4_4_ = fVar95;
                              auVar67._0_4_ = fVar95;
                              auVar67._8_4_ = fVar95;
                              auVar67._12_4_ = fVar95;
                              auVar68._4_12_ = auVar67._4_12_;
                              auVar68._0_4_ = fVar95 * *pfVar66;
                              *pfVar66 = auVar68._0_4_;
                              uVar54 = uVar54 - 1;
                              pfVar66 = pfVar66 + 1;
                            } while (uVar54 != 0);
                          }
                        }
                      }
                      pauVar38 = pauVar58 + ((int)fVar65 + 3U >> 2);
                      for (; pauVar58 < pauVar38; pauVar58 = pauVar58 + 1) {
                        auVar68 = sqrtps(auVar68,*pauVar58);
                        *pauVar58 = auVar68;
                      }
                    }
                  }
                  uVar62 = (int)uVar63 + 1;
                  uVar63 = (ulonglong)uVar62;
                  puVar51 = uStack_2c0;
                } while (uVar62 < 0x20);
              }
              uVar63 = 0;
              local_2e8[0] = 0.0;
              pfVar66 = (float *)(ulonglong)(uVar42 - 1);
              local_2b8 = pfVar66;
              do {
                fVar112 = local_2e8[0];
                uVar62 = (uint)uVar63;
                if (uVar42 <= uVar62) {
                  return;
                }
                if ((*(uint *)(&DAT_145aca020 + (longlong)pfVar66 * 4) >>
                     ((uint)local_2e8[0] & 0x1f) & 1) == 0) {
                  if (cVar48 != '\0') {
                    *(undefined8 *)(auStack_528 + lVar40 + -8) = 0x143167a54;
                    ::_guard_xfg_dispatch_icall_nop
                              (param_5 + (((uint)param_8 & 0xff) + 3 & 0xfffffffc) * uVar62,0,
                               (ulonglong)((uint)param_8 & 0xff) << 2);
                  }
                  if (fVar65 != 0.0) {
                    uVar49 = (int)fVar112 * 0x20;
                    uVar59 = (int)fVar65 + 3U >> 2;
                    uVar39 = uVar59 * 8;
                    uVar60 = (ulonglong)uVar39;
                    pfVar66 = (float *)((ulonglong)uVar39 * 4 + (longlong)pvStack_2d0);
                    pfVar10 = (float *)(uVar59 * 0xc - uVar60);
                    lVar50 = (uVar59 << 4) - uVar60;
                    lVar64 = uVar59 * 0x14 - uVar60;
                    lVar11 = uVar59 * 0x18 - uVar60;
                    lVar12 = uVar59 * 0x1c - uVar60;
                    puVar13 = (undefined *)((uVar59 << 5) - uVar60);
                    lVar14 = uVar59 * 0x24 - uVar60;
                    lVar15 = uVar59 * 0x28 - uVar60;
                    uVar53 = (int)fVar65 + 3U & 0xfffffffc;
                    lVar16 = uVar59 * 0x2c - uVar60;
                    lVar17 = uVar53 * 0xc - uVar60;
                    lVar18 = uVar53 * 0xd - uVar60;
                    lVar19 = uVar53 * 0xe - uVar60;
                    lVar20 = uVar53 * 0xf - uVar60;
                    lVar21 = (uVar53 << 4) - uVar60;
                    lVar22 = uVar53 * 0x11 - uVar60;
                    lVar23 = uVar53 * 0x12 - uVar60;
                    lVar24 = uVar53 * 0x13 - uVar60;
                    lVar25 = uVar53 * 0x14 - uVar60;
                    lVar26 = uVar53 * 0x15 - uVar60;
                    lVar27 = uVar53 * 0x16 - uVar60;
                    lVar28 = uVar53 * 0x17 - uVar60;
                    lVar29 = uVar53 * 0x18 - uVar60;
                    lVar30 = uVar53 * 0x19 - uVar60;
                    lVar31 = uVar53 * 0x1a - uVar60;
                    lVar32 = uVar53 * 0x1b - uVar60;
                    lVar33 = uVar53 * 0x1c - uVar60;
                    lVar34 = uVar53 * 0x1d - uVar60;
                    lVar35 = uVar53 * 0x1e - uVar60;
                    pfVar36 = (float *)(uVar53 * 0x1f - uVar60);
                    uVar63 = (ulonglong)(uint)fVar65;
                    do {
                      *(float *)((longlong)
                                 (param_5 + (((uint)param_8 & 0xff) + 3 & 0xfffffffc) * uVar62) +
                                 ((ulonglong)uVar39 * -4 - (longlong)pvStack_2d0) +
                                (longlong)pfVar66) =
                           pfVar66[-uVar60] * *(float *)(puVar51 + (ulonglong)uVar49 * 4) +
                           pfVar66[uVar59 * 4 - uVar60] *
                           *(float *)(puVar51 + (ulonglong)(uVar49 + 1) * 4) +
                           *pfVar66 * *(float *)(puVar51 + (ulonglong)(uVar49 + 2) * 4) +
                           pfVar66[(longlong)pfVar10] *
                           *(float *)(puVar51 + (ulonglong)(uVar49 + 3) * 4) +
                           pfVar66[lVar50] * *(float *)(puVar51 + (ulonglong)(uVar49 + 4) * 4) +
                           pfVar66[lVar64] * *(float *)(puVar51 + (ulonglong)(uVar49 + 5) * 4) +
                           pfVar66[lVar11] * *(float *)(puVar51 + (ulonglong)(uVar49 + 6) * 4) +
                           pfVar66[lVar12] * *(float *)(puVar51 + (ulonglong)(uVar49 + 7) * 4) +
                           pfVar66[(longlong)puVar13] *
                           *(float *)(puVar51 + (ulonglong)(uVar49 + 8) * 4) +
                           pfVar66[lVar14] * *(float *)(puVar51 + (ulonglong)(uVar49 + 9) * 4) +
                           pfVar66[lVar15] * *(float *)(puVar51 + (ulonglong)(uVar49 + 10) * 4) +
                           pfVar66[lVar16] * *(float *)(puVar51 + (ulonglong)(uVar49 + 0xb) * 4) +
                           pfVar66[lVar17] * *(float *)(puVar51 + (ulonglong)(uVar49 + 0xc) * 4) +
                           pfVar66[lVar18] * *(float *)(puVar51 + (ulonglong)(uVar49 + 0xd) * 4) +
                           pfVar66[lVar19] * *(float *)(puVar51 + (ulonglong)(uVar49 + 0xe) * 4) +
                           pfVar66[lVar20] * *(float *)(puVar51 + (ulonglong)(uVar49 + 0xf) * 4) +
                           pfVar66[lVar21] * *(float *)(puVar51 + (ulonglong)(uVar49 + 0x10) * 4) +
                           pfVar66[lVar22] * *(float *)(puVar51 + (ulonglong)(uVar49 + 0x11) * 4) +
                           pfVar66[lVar23] * *(float *)(puVar51 + (ulonglong)(uVar49 + 0x12) * 4) +
                           pfVar66[lVar24] * *(float *)(puVar51 + (ulonglong)(uVar49 + 0x13) * 4) +
                           pfVar66[lVar25] * *(float *)(puVar51 + (ulonglong)(uVar49 + 0x14) * 4) +
                           pfVar66[lVar26] * *(float *)(puVar51 + (ulonglong)(uVar49 + 0x15) * 4) +
                           pfVar66[lVar27] * *(float *)(puVar51 + (ulonglong)(uVar49 + 0x16) * 4) +
                           pfVar66[lVar28] * *(float *)(puVar51 + (ulonglong)(uVar49 + 0x17) * 4) +
                           pfVar66[lVar29] * *(float *)(puVar51 + (ulonglong)(uVar49 + 0x18) * 4) +
                           pfVar66[lVar30] * *(float *)(puVar51 + (ulonglong)(uVar49 + 0x19) * 4) +
                           pfVar66[lVar31] * *(float *)(puVar51 + (ulonglong)(uVar49 + 0x1a) * 4) +
                           pfVar66[lVar32] * *(float *)(puVar51 + (ulonglong)(uVar49 + 0x1b) * 4) +
                           pfVar66[lVar33] * *(float *)(puVar51 + (ulonglong)(uVar49 + 0x1c) * 4) +
                           pfVar66[lVar34] * *(float *)(puVar51 + (ulonglong)(uVar49 + 0x1d) * 4) +
                           pfVar66[lVar35] * *(float *)(puVar51 + (ulonglong)(uVar49 + 0x1e) * 4) +
                           pfVar66[(longlong)pfVar36] *
                           *(float *)(puVar51 + (ulonglong)(uVar49 + 0x1f) * 4);
                      pfVar66 = pfVar66 + 1;
                      uVar63 = uVar63 - 1;
                    } while (uVar63 != 0);
                    uVar62 = (uint)local_2e0;
                    fVar65 = (float)uStack_2b0;
                    fVar112 = local_2e8[0];
                    local_2d8 = lVar12;
                    local_2c8 = pfVar10;
                    uStack_2c0 = puVar13;
                    local_2a8 = (ulonglong)(uVar49 + 1);
                    pfStack_2a0 = pfVar36;
                    local_290 = (uint *)lVar11;
                    local_288 = (ulonglong)(uVar49 + 0x1f);
                    local_278 = lVar50;
                    local_270 = lVar64;
                    local_268 = (ulonglong)(uVar49 + 0x1e);
                    local_260 = (ulonglong)(uVar49 + 6);
                    local_258 = (ulonglong)(uVar49 + 7);
                    local_250 = (ulonglong)(uVar49 + 8);
                    local_248 = lVar14;
                    local_240 = (ulonglong)(uVar49 + 9);
                    local_238 = lVar15;
                    local_230 = (ulonglong)(uVar49 + 10);
                    local_228 = lVar16;
                    local_220 = (ulonglong)(uVar49 + 0xb);
                    local_218 = lVar17;
                    local_210 = (ulonglong)(uVar49 + 0xc);
                    local_208 = lVar18;
                    local_200 = (ulonglong)(uVar49 + 0xd);
                    local_1f8 = lVar19;
                    local_1f0 = (ulonglong)(uVar49 + 0xe);
                    local_1e8 = lVar20;
                    local_1e0 = (ulonglong)(uVar49 + 0xf);
                    local_1d8 = lVar21;
                    local_1d0 = (ulonglong)(uVar49 + 0x10);
                    local_1c8 = lVar22;
                    local_1c0 = (ulonglong)(uVar49 + 0x11);
                    local_1b8 = lVar23;
                    local_1b0 = (ulonglong)(uVar49 + 0x12);
                    local_1a8 = lVar24;
                    local_1a0 = (ulonglong)(uVar49 + 0x13);
                    local_198 = lVar25;
                    local_190 = (ulonglong)(uVar49 + 0x14);
                    local_188 = lVar26;
                    local_180 = (ulonglong)(uVar49 + 0x15);
                    local_178 = lVar27;
                    local_170 = (ulonglong)(uVar49 + 0x16);
                    local_168 = lVar28;
                    local_160 = (ulonglong)(uVar49 + 0x17);
                    local_158 = (ulonglong)(uVar49 + 2);
                    local_150 = (ulonglong)(uVar49 + 0x18);
                    local_148 = lVar30;
                    local_140 = (ulonglong)(uVar49 + 0x19);
                    local_138 = lVar31;
                    local_130 = (ulonglong)(uVar49 + 0x1a);
                    local_128 = lVar32;
                    local_120 = (ulonglong)(uVar49 + 0x1b);
                    local_118 = lVar29;
                    local_110 = (ulonglong)(uVar49 + 0x1c);
                    local_108 = lVar34;
                    local_100 = (ulonglong)(uVar49 + 0x1d);
                    local_f8 = lVar35;
                    local_f0 = (ulonglong)(uVar49 + 3);
                    local_e8 = (ulonglong)(uVar49 + 4);
                    local_e0 = (ulonglong)(uVar49 + 5);
                    local_d8 = lVar33;
                  }
                  local_2e8[0] = fVar112;
                  uVar63 = (ulonglong)(uVar62 + 1);
                  pfVar66 = local_2b8;
                  local_2e0 = uVar63;
                }
                local_2e8[0] = (float)((int)local_2e8[0] + 1);
              } while ((uint)local_2e8[0] < (uint)param_7);
            }
          }
        }
      }
      else if (param_11 != 0) {
        fVar91 = (float)((uint)param_6 & 7);
        uVar42 = 0;
        uVar60 = 0;
        fVar101 = fVar91;
        uVar62 = uVar39;
        uVar63 = uVar60;
        if (uVar39 != (uint)param_6 >> 0xc) {
          for (; uVar62 != 0; uVar62 = uVar62 & uVar62 - 1) {
            uVar42 = (int)uVar63 + 1;
            uVar63 = (ulonglong)uVar42;
          }
          fVar101 = (float)(uVar42 & 7);
        }
        uVar63 = (ulonglong)(uint)fVar101;
        local_2d8 = CONCAT44(local_2d8._4_4_,fVar101);
        if (fVar101 != 0.0) {
          fVar101 = 1.0 / (float)uVar63;
          if (((uint)fVar43 & 0xf00) == 0x100) {
            local_2e0 = CONCAT44(local_2e0._4_4_,(uint)fVar43 >> 0xc);
            if (((uint)fVar43 >> 0xc & 0xff9c0) == 0) {
              if (param_3 == 0.0) {
                uVar62 = 1;
                local_2a8 = CONCAT44(local_2a8._4_4_,1);
                uVar54 = uVar63 * 0x10 + 0xf;
                if (uVar54 <= uVar63 * 0x10) {
                  uVar54 = 0xffffffffffffff0;
                }
                uStack_330 = 0x143168207;
                lVar40 = -(uVar54 & 0xfffffffffffffff0);
                puVar45 = local_328 + lVar40;
                pvStack_2d0 = (void *)((longlong)local_2e8 + lVar40);
                *(void **)((longlong)&lStack_308 + lVar40) = pvStack_2d0;
                *(undefined8 *)(local_328 + lVar40 + -8) = 0x143168232;
                GenPointsForZeroSpread(uVar63,param_1,param_10,param_9);
              }
              else {
                uStack_330 = 0x143168244;
                plVar37 = (longlong *)AkDevice::GetSpreadCache(param_11,uVar63,0);
                if (plVar37 == (longlong *)0x0) {
                  return;
                }
                uVar62 = *(uint *)(plVar37 + 1);
                local_2a8 = CONCAT44(local_2a8._4_4_,uVar62);
                uVar63 = (ulonglong)uVar62 * 0x10 + 0xf;
                if (uVar63 <= (ulonglong)uVar62 * 0x10) {
                  uVar63 = 0xffffffffffffff0;
                }
                uStack_330 = 0x14316827b;
                lVar40 = -(uVar63 & 0xfffffffffffffff0);
                pfVar36 = (float *)*plVar37;
                local_2b8 = (float *)((longlong)local_2e8 + lVar40);
                pfVar10 = pfVar36 + uVar62 * 4;
                pfVar66 = (float *)((longlong)&local_2c8 + lVar40);
                uStack_280 = 0x3f800347;
                uStack_27c = 0x3f800347;
                fVar112 = 0.5 - param_4 * 0.01;
                fVar112 = (1.5707964 - fVar112 * fVar112 * 2.5838563) * fVar112 + 0.5;
                do {
                  auVar73 = *(undefined1 (*) [16])(pfVar36 + 4);
                  fVar92 = pfVar36[0xc];
                  fVar93 = pfVar36[0xd];
                  pfVar52 = pfVar36 + 0xe;
                  fVar96 = *pfVar36;
                  fVar99 = pfVar36[1];
                  pfVar1 = pfVar36 + 2;
                  fVar102 = pfVar36[8];
                  fVar98 = pfVar36[9];
                  pfVar6 = pfVar36 + 10;
                  pfVar36 = pfVar36 + 0x10;
                  auVar106._4_4_ = auVar73._8_4_;
                  auVar106._0_4_ = *pfVar1;
                  auVar106._8_4_ = *pfVar6;
                  auVar106._12_4_ = *pfVar52;
                  auVar107 = minps(auVar106,_DAT_145aca370);
                  auVar108._8_4_ = DAT_145aca370._8_4_ ^ 0x80000000;
                  auVar108._0_8_ = (ulonglong)DAT_145aca370 ^ 0x8000000080000000;
                  auVar108._12_4_ = DAT_145aca370._12_4_ ^ 0x80000000;
                  auVar108 = maxps(auVar107,auVar108);
                  fVar104 = auVar108._0_4_;
                  fVar105 = auVar108._4_4_;
                  fVar110 = auVar108._8_4_;
                  fVar111 = auVar108._12_4_;
                  fVar113 = (fVar104 - 1.0) * fVar112 + 1.0;
                  fVar114 = (fVar105 - 1.0) * fVar112 + 1.0;
                  fVar115 = (fVar110 - 1.0) * fVar112 + 1.0;
                  fVar116 = (fVar111 - 1.0) * fVar112 + 1.0;
                  fVar94 = -fVar113 * fVar113 + 1.0001;
                  fVar97 = -fVar114 * fVar114 + 1.0001;
                  fVar100 = -fVar115 * fVar115 + 1.0001;
                  fVar103 = -fVar116 * fVar116 + 1.0001;
                  auVar107._0_4_ = (-fVar104 * fVar104 + 1.0) * fVar94;
                  auVar107._4_4_ = (-fVar105 * fVar105 + 1.0) * fVar97;
                  auVar107._8_4_ = (-fVar110 * fVar110 + 1.0) * fVar100;
                  auVar107._12_4_ = (-fVar111 * fVar111 + 1.0) * fVar103;
                  auVar108 = rsqrtps(auVar73,auVar107);
                  fVar94 = auVar108._0_4_ * fVar94;
                  fVar97 = auVar108._4_4_ * fVar97;
                  fVar100 = auVar108._8_4_ * fVar100;
                  fVar103 = auVar108._12_4_ * fVar103;
                  pfVar66[-8] = fVar96 * fVar94;
                  pfVar66[-7] = fVar99 * fVar94;
                  pfVar66[-6] = fVar113;
                  pfVar66[-5] = fVar113;
                  pfVar66[-4] = auVar73._0_4_ * fVar97;
                  pfVar66[-3] = auVar73._4_4_ * fVar97;
                  pfVar66[-2] = fVar114;
                  pfVar66[-1] = fVar114;
                  *pfVar66 = fVar102 * fVar100;
                  pfVar66[1] = fVar98 * fVar100;
                  pfVar66[2] = fVar115;
                  pfVar66[3] = fVar115;
                  pfVar66[4] = fVar92 * fVar103;
                  pfVar66[5] = fVar93 * fVar103;
                  pfVar66[6] = fVar116;
                  pfVar66[7] = fVar116;
                  pfVar66 = pfVar66 + 0x10;
                } while (pfVar36 < pfVar10);
                uVar54 = local_2d8 & 0xffffffff;
                local_288 = (ulonglong)(uVar62 * (uint)local_2d8);
                uVar55 = (ulonglong)(uVar62 * (uint)local_2d8) * 0x10;
                uVar63 = uVar55 + 0xf;
                if (uVar63 <= uVar55) {
                  uVar63 = 0xffffffffffffff0;
                }
                *(undefined8 *)(local_328 + lVar40 + -8) = 0x1431683fe;
                pfVar10 = local_2b8;
                lVar50 = -(uVar63 & 0xfffffffffffffff0);
                pfVar66 = (float *)((longlong)local_2e8 + lVar50 + lVar40);
                pfStack_2a0 = pfVar66;
                *(undefined8 *)(local_328 + lVar50 + lVar40 + -8) = 0x143168418;
                CopyRotatedCopiesOntoChannels(uVar54,uVar62,pfVar10,pfVar66);
                uVar63 = uVar55 + 0xf;
                if (uVar63 <= uVar55) {
                  uVar63 = 0xffffffffffffff0;
                }
                *(undefined8 *)(local_328 + lVar50 + lVar40 + -8) = 0x14316842e;
                pfVar66 = pfStack_2a0;
                lVar11 = -(uVar63 & 0xfffffffffffffff0);
                puVar45 = local_328 + lVar11 + lVar50 + lVar40;
                uVar63 = local_288 & 0xffffffff;
                lVar64 = (longlong)local_2e8 + lVar11 + lVar50 + lVar40;
                *(longlong *)((longlong)local_2f8 + lVar11 + lVar50 + lVar40) = lVar64;
                pvStack_2d0 = (void *)lVar64;
                *(float *)((longlong)afStack_300 + lVar11 + lVar50 + lVar40) = param_3;
                *(undefined8 *)((longlong)&lStack_308 + lVar11 + lVar50 + lVar40) = param_9;
                *(undefined8 *)(local_328 + lVar11 + lVar50 + lVar40 + -8) = 0x14316846c;
                TransformSampledSphereSIMD(pfVar66,uVar63,param_1,param_10);
              }
              *(undefined8 *)(puVar45 + -8) = 0x14316847a;
              local_2b8 = (float *)AkDevice::GetPanCache(param_11,fVar43);
              if (local_2b8 == (float *)0x0) {
                return;
              }
              uVar63 = local_2e0 & 0xffffffff;
              fVar112 = (float)((int)fVar65 + 2);
              if (3 < (uint)fVar65) {
                fVar112 = fVar65;
              }
              uVar54 = uVar60;
              if ((((fVar65 != (float)((int)fVar43 -
                                       ((int)(float)local_2e0 - ((uint)(float)local_2e0 & 0xffffb)
                                       >> 2) & 0xff)) || (((uint)fVar43 & 0xf00) != 0x100)) ||
                  ((float)local_2e0 != (float)((uint)(float)local_2e0 & 0xffffb))) && (fVar95 < 1.0)
                 ) {
                *(undefined8 *)(puVar45 + -8) = 0x1431684f5;
                uVar54 = AkDevice::GetPanCache(param_11);
                uVar63 = local_2e0 & 0xffffffff;
              }
              uStack_2b0 = uStack_2b0 & 0xffffffff00000000;
              local_2e8[0] = 0.0;
              local_288 = (ulonglong)((int)fVar91 - 1) << 3;
              fVar101 = fVar101 / (float)uVar62;
              uVar55 = uVar60;
              do {
                pfVar66 = local_2b8;
                if ((*(uint *)(&DAT_1467bdd40 + (uVar60 + local_288) * 4) & uVar39 & 0xffff) != 0) {
                  local_2d8 = CONCAT44(local_2d8._4_4_,param_8) & 0xffffffff000000ff;
                  uVar42 = ((uint)param_8 & 0xff) + 3;
                  uStack_2c0 = (undefined *)CONCAT44(uStack_2c0._4_4_,uVar42);
                  pauVar58 = (undefined1 (*) [16])
                             (param_5 +
                             (uVar42 & 0xfffffffc) *
                             (*(uint *)(&DAT_1467bdd40 + (uVar60 + local_288) * 4) >> 0x10));
                  uVar42 = (int)uVar55 * uVar62 * 4;
                  pfVar10 = (float *)((longlong)pvStack_2d0 + (ulonglong)uVar42 * 4);
                  pfVar36 = (float *)((longlong)pvStack_2d0 +
                                     ((ulonglong)(uVar62 * 4) + (ulonglong)uVar42) * 4);
                  local_2c8 = pfVar36;
                  do {
                    fVar43 = *pfVar10;
                    pfStack_2a0 = *(float **)pfVar10;
                    local_298 = pfVar10[2];
                    pfVar10 = pfVar10 + 4;
                    if (((int)uVar63 == 3) && (*(int *)(param_11 + 0x54) == 1)) {
                      fVar95 = (fVar43 * 0.5 + 0.70710677) - fVar43 * 0.20710677 * fVar43;
                      fVar95 = fVar95 * fVar95;
                      fVar43 = (1.0 - fVar95) + *(float *)*pauVar58;
                      auVar73 = ZEXT416((uint)fVar43);
                      *(float *)((longlong)*pauVar58 + 4) =
                           fVar95 + *(float *)((longlong)*pauVar58 + 4);
                      *(float *)*pauVar58 = fVar43;
                    }
                    else {
                      *(undefined1 (**) [16])(puVar45 + 0x28) = pauVar58;
                      *(undefined **)(puVar45 + 0x20) =
                           &DAT_1467bdd40 + (ulonglong)((int)fVar65 - 1) * 0x20;
                      pfVar36 = pfVar66;
                      fVar43 = fVar112;
                      if (uVar54 != 0) {
                        *(undefined8 *)(puVar45 + -8) = 0x143168670;
                        AddPowerVbap2d(pfVar66,fVar112,&pfStack_2a0);
                        *(undefined1 (**) [16])(puVar45 + 0x28) = pauVar58;
                        *(undefined **)(puVar45 + 0x20) =
                             &DAT_1467bde20 + (ulonglong)((int)fVar65 - 2) * 0x20;
                        pfVar36 = (float *)uVar54;
                        fVar43 = (float)((int)fVar112 - 1);
                      }
                      *(undefined8 *)(puVar45 + -8) = 0x1431686a3;
                      auVar73._0_8_ = AddPowerVbap2d(pfVar36,fVar43,&pfStack_2a0);
                      auVar73._8_8_ = extraout_XMM0_Qb_01;
                      uVar63 = local_2e0 & 0xffffffff;
                      pfVar36 = local_2c8;
                    }
                  } while (pfVar10 < pfVar36);
                  uVar63 = 0;
                  if ((uint)local_2d8 != 0) {
                    if (0xf < (uint)local_2d8) {
                      uVar62 = 8;
                      do {
                        pfVar66 = (float *)((longlong)*pauVar58 + uVar63 * 4);
                        fVar43 = pfVar66[1];
                        fVar95 = pfVar66[2];
                        fVar92 = pfVar66[3];
                        pfVar10 = (float *)((longlong)*pauVar58 + uVar63 * 4);
                        *pfVar10 = fVar101 * *pfVar66;
                        pfVar10[1] = fVar101 * fVar43;
                        pfVar10[2] = fVar101 * fVar95;
                        pfVar10[3] = fVar101 * fVar92;
                        uVar49 = (int)uVar63 + 0x10;
                        uVar63 = (ulonglong)uVar49;
                        pfVar66 = (float *)((longlong)*pauVar58 + (ulonglong)(uVar62 - 4) * 4);
                        fVar43 = pfVar66[1];
                        fVar95 = pfVar66[2];
                        fVar92 = pfVar66[3];
                        pfVar10 = (float *)((longlong)*pauVar58 + (ulonglong)(uVar62 - 4) * 4);
                        *pfVar10 = *pfVar66 * fVar101;
                        pfVar10[1] = fVar43 * fVar101;
                        pfVar10[2] = fVar95 * fVar101;
                        pfVar10[3] = fVar92 * fVar101;
                        pfVar66 = (float *)((longlong)*pauVar58 + (ulonglong)uVar62 * 4);
                        fVar43 = pfVar66[1];
                        fVar95 = pfVar66[2];
                        fVar92 = pfVar66[3];
                        pfVar10 = (float *)((longlong)*pauVar58 + (ulonglong)uVar62 * 4);
                        *pfVar10 = fVar101 * *pfVar66;
                        pfVar10[1] = fVar101 * fVar43;
                        pfVar10[2] = fVar101 * fVar95;
                        pfVar10[3] = fVar101 * fVar92;
                        uVar42 = uVar62 + 4;
                        uVar62 = uVar62 + 0x10;
                        auVar73 = *(undefined1 (*) [16])
                                   ((longlong)*pauVar58 + (ulonglong)uVar42 * 4);
                        auVar83._0_4_ = fVar101 * auVar73._0_4_;
                        auVar83._4_4_ = fVar101 * auVar73._4_4_;
                        auVar83._8_4_ = fVar101 * auVar73._8_4_;
                        auVar83._12_4_ = fVar101 * auVar73._12_4_;
                        *(undefined1 (*) [16])((longlong)*pauVar58 + (ulonglong)uVar42 * 4) =
                             auVar83;
                      } while (uVar49 < ((uint)local_2d8 & 0xfffffff0));
                    }
                    uVar62 = (uint)uVar63;
                    if (uVar62 < (uint)local_2d8) {
                      if (3 < (uint)local_2d8 - uVar62) {
                        uVar42 = (((uint)local_2d8 - uVar62) - 4 >> 2) + 1;
                        uVar60 = (ulonglong)uVar42;
                        uVar62 = uVar62 + uVar42 * 4;
                        pfVar66 = (float *)((longlong)*pauVar58 + (uVar63 + 2) * 4);
                        do {
                          auVar73._0_4_ = pfVar66[-2] * fVar101;
                          auVar73._4_4_ = pfVar66[-1] * fVar101;
                          auVar73._8_4_ = *pfVar66 * fVar101;
                          auVar73._12_4_ = pfVar66[1] * fVar101;
                          *(undefined1 (*) [16])(pfVar66 + -2) = auVar73;
                          uVar60 = uVar60 - 1;
                          pfVar66 = pfVar66 + 4;
                        } while (uVar60 != 0);
                      }
                      if (uVar62 < (uint)local_2d8) {
                        uVar63 = (ulonglong)((uint)local_2d8 - uVar62);
                        pfVar66 = (float *)((longlong)*pauVar58 + (ulonglong)uVar62 * 4);
                        do {
                          auVar72._4_4_ = fVar101;
                          auVar72._0_4_ = fVar101;
                          auVar72._8_4_ = fVar101;
                          auVar72._12_4_ = fVar101;
                          auVar73._4_12_ = auVar72._4_12_;
                          auVar73._0_4_ = fVar101 * *pfVar66;
                          *pfVar66 = auVar73._0_4_;
                          uVar63 = uVar63 - 1;
                          pfVar66 = pfVar66 + 1;
                        } while (uVar63 != 0);
                      }
                    }
                  }
                  pauVar38 = pauVar58 + ((ulonglong)uStack_2c0 >> 2 & 0x3fffffff);
                  for (; pauVar58 < pauVar38; pauVar58 = pauVar58 + 1) {
                    /* WARNING: Read-only address (ram,0x000145aca370) is written */
                    auVar73 = sqrtps(auVar73,*pauVar58);
                    *pauVar58 = auVar73;
                  }
                    /* WARNING: Read-only address (ram,0x000145aca370) is written */
                  local_2e8[0] = (float)((int)local_2e8[0] + 1);
                  uVar55 = (ulonglong)(uint)local_2e8[0];
                  uVar62 = (uint)local_2a8;
                }
                uVar63 = local_2e0 & 0xffffffff;
                fVar43 = (float)((int)(float)uStack_2b0 + 1);
                uVar60 = (ulonglong)(uint)fVar43;
                uStack_2b0 = CONCAT44(uStack_2b0._4_4_,fVar43);
              } while ((uint)fVar43 < (uint)fVar91);
              return;
            }
          }
          if (param_3 == 0.0) {
            uVar62 = 1;
            local_2a8 = CONCAT44(local_2a8._4_4_,1);
            uVar54 = uVar63 * 0x10 + 0xf;
            if (uVar54 <= uVar63 * 0x10) {
              uVar54 = 0xffffffffffffff0;
            }
            uStack_330 = 0x143168844;
            lVar40 = -(uVar54 & 0xfffffffffffffff0);
            puVar47 = local_328 + lVar40;
            local_2c8 = (float *)((longlong)local_2e8 + lVar40);
            *(float **)((longlong)&lStack_308 + lVar40) = local_2c8;
            *(undefined8 *)(local_328 + lVar40 + -8) = 0x14316886f;
            GenPointsForZeroSpread((float)uVar63,param_1,param_10,param_9);
          }
          else {
            uStack_330 = 0x143168881;
            plVar37 = (longlong *)
                      AkDevice::GetSpreadCache
                                (param_11,uVar63,CONCAT71((uint7)(uint3)((uint)param_7 >> 8),1));
            if (plVar37 == (longlong *)0x0) {
              return;
            }
            uVar62 = *(uint *)(plVar37 + 1);
            local_2a8 = CONCAT44(local_2a8._4_4_,uVar62);
            uVar63 = (ulonglong)uVar62 * 0x10 + 0xf;
            if (uVar63 <= (ulonglong)uVar62 * 0x10) {
              uVar63 = 0xffffffffffffff0;
            }
            uStack_330 = 0x1431688bb;
            lVar40 = -(uVar63 & 0xfffffffffffffff0);
            pfVar36 = (float *)*plVar37;
            local_2b8 = (float *)((longlong)local_2e8 + lVar40);
            pfVar10 = pfVar36 + uVar62 * 4;
            pfVar66 = (float *)((longlong)&local_2c8 + lVar40);
            uStack_280 = 0x3f800347;
            uStack_27c = 0x3f800347;
            fVar92 = 0.5 - param_4 * 0.01;
            fVar92 = (1.5707964 - fVar92 * fVar92 * 2.5838563) * fVar92 + 0.5;
            do {
              auVar73 = *(undefined1 (*) [16])(pfVar36 + 4);
              fVar93 = pfVar36[0xc];
              fVar96 = pfVar36[0xd];
              pfVar52 = pfVar36 + 0xe;
              fVar99 = *pfVar36;
              fVar102 = pfVar36[1];
              pfVar1 = pfVar36 + 2;
              fVar98 = pfVar36[8];
              fVar94 = pfVar36[9];
              pfVar6 = pfVar36 + 10;
              pfVar36 = pfVar36 + 0x10;
              auVar109._4_4_ = auVar73._8_4_;
              auVar109._0_4_ = *pfVar1;
              auVar109._8_4_ = *pfVar6;
              auVar109._12_4_ = *pfVar52;
              auVar108 = minps(auVar109,_DAT_145aca370);
              auVar4._8_4_ = DAT_145aca370._8_4_ ^ 0x80000000;
              auVar4._0_8_ = (ulonglong)DAT_145aca370 ^ 0x8000000080000000;
              auVar4._12_4_ = DAT_145aca370._12_4_ ^ 0x80000000;
              auVar108 = maxps(auVar108,auVar4);
              fVar105 = auVar108._0_4_;
              fVar110 = auVar108._4_4_;
              fVar111 = auVar108._8_4_;
              fVar113 = auVar108._12_4_;
              fVar114 = (fVar105 - 1.0) * fVar92 + 1.0;
              fVar115 = (fVar110 - 1.0) * fVar92 + 1.0;
              fVar116 = (fVar111 - 1.0) * fVar92 + 1.0;
              fVar117 = (fVar113 - 1.0) * fVar92 + 1.0;
              fVar97 = -fVar114 * fVar114 + 1.0001;
              fVar100 = -fVar115 * fVar115 + 1.0001;
              fVar103 = -fVar116 * fVar116 + 1.0001;
              fVar104 = -fVar117 * fVar117 + 1.0001;
              auVar74._0_4_ = (-fVar105 * fVar105 + 1.0) * fVar97;
              auVar74._4_4_ = (-fVar110 * fVar110 + 1.0) * fVar100;
              auVar74._8_4_ = (-fVar111 * fVar111 + 1.0) * fVar103;
              auVar74._12_4_ = (-fVar113 * fVar113 + 1.0) * fVar104;
              auVar108 = rsqrtps(auVar73,auVar74);
              fVar97 = auVar108._0_4_ * fVar97;
              fVar100 = auVar108._4_4_ * fVar100;
              fVar103 = auVar108._8_4_ * fVar103;
              fVar104 = auVar108._12_4_ * fVar104;
              pfVar66[-8] = fVar99 * fVar97;
              pfVar66[-7] = fVar102 * fVar97;
              pfVar66[-6] = fVar114;
              pfVar66[-5] = fVar114;
              pfVar66[-4] = auVar73._0_4_ * fVar100;
              pfVar66[-3] = auVar73._4_4_ * fVar100;
              pfVar66[-2] = fVar115;
              pfVar66[-1] = fVar115;
              *pfVar66 = fVar98 * fVar103;
              pfVar66[1] = fVar94 * fVar103;
              pfVar66[2] = fVar116;
              pfVar66[3] = fVar116;
              pfVar66[4] = fVar93 * fVar104;
              pfVar66[5] = fVar96 * fVar104;
              pfVar66[6] = fVar117;
              pfVar66[7] = fVar117;
              pfVar66 = pfVar66 + 0x10;
            } while (pfVar36 < pfVar10);
            uVar54 = local_2d8 & 0xffffffff;
            pfStack_2a0 = (float *)(ulonglong)(uVar62 * (uint)local_2d8);
            local_288 = (ulonglong)(uVar62 * (uint)local_2d8) * 0x10;
            uVar63 = local_288 + 0xf;
            if (uVar63 <= local_288) {
              uVar63 = 0xffffffffffffff0;
            }
            *(undefined8 *)(local_328 + lVar40 + -8) = 0x143168a47;
            pfVar66 = local_2b8;
            lVar50 = -(uVar63 & 0xfffffffffffffff0);
            uVar63 = (longlong)local_2e8 + lVar50 + lVar40;
            local_268 = uVar63;
            *(undefined8 *)(local_328 + lVar50 + lVar40 + -8) = 0x143168a65;
            CopyRotatedCopiesOntoChannels(uVar54,uVar62,pfVar66,uVar63);
            uVar63 = local_288 + 0xf;
            if (uVar63 <= local_288) {
              uVar63 = 0xffffffffffffff0;
            }
            *(undefined8 *)(local_328 + lVar50 + lVar40 + -8) = 0x143168a7e;
            uVar54 = local_268;
            lVar64 = -(uVar63 & 0xfffffffffffffff0);
            puVar47 = local_328 + lVar64 + lVar50 + lVar40;
            uVar63 = (ulonglong)pfStack_2a0 & 0xffffffff;
            pfVar66 = (float *)((longlong)local_2e8 + lVar64 + lVar50 + lVar40);
            *(float **)((longlong)local_2f8 + lVar64 + lVar50 + lVar40) = pfVar66;
            local_2c8 = pfVar66;
            *(float *)((longlong)afStack_300 + lVar64 + lVar50 + lVar40) = param_3;
            *(undefined8 *)((longlong)&lStack_308 + lVar64 + lVar50 + lVar40) = param_9;
            *(undefined8 *)(local_328 + lVar64 + lVar50 + lVar40 + -8) = 0x143168abf;
            TransformSampledSphereSIMD(uVar54,uVar63,param_1,param_10);
          }
          if (((uint)fVar43 & 0xf00) == 0x100) {
            local_2e0 = CONCAT44(local_2e0._4_4_,fVar43) & 0xffffffff000000ff;
            uVar42 = (uint)fVar43 >> 0xc;
            local_290 = (uint *)0x0;
            fVar92 = (float)((int)fVar43 - (uVar42 - (uVar42 & 0xffffb) >> 2) & 0xff |
                             (uVar42 & 0xffffb) << 0xc | 0x100);
            fVar112 = fVar92;
            uVar63 = uVar60;
            if (((uVar42 & 4) == 0) || (fVar112 = fVar43, fVar95 == 1.0)) {
              *(undefined8 *)(puVar47 + -8) = 0x143168b26;
              pvStack_2d0 = (void *)AkDevice::GetPanCache(param_11,fVar112);
              fVar112 = fVar65;
            }
            else {
              *(undefined8 *)(puVar47 + -8) = 0x143168f09;
              pvStack_2d0 = (void *)AkDevice::GetPanCache(param_11,fVar92);
              local_2e0 = CONCAT44(local_2e0._4_4_,(int)fVar65 - 1U);
              fVar112 = (float)((int)fVar65 - 1U);
              if (fVar95 != 0.0) {
                *(undefined8 *)(puVar47 + -8) = 0x143168f2c;
                uVar63 = AkDevice::GetPanCache(param_11,fVar43);
                local_290 = (uint *)uVar63;
                fVar112 = (float)local_2e0;
              }
            }
            if (pvStack_2d0 != (void *)0x0) {
              local_270 = (ulonglong)(((int)fVar65 + 3U >> 2) << 4);
              local_2d8 = local_2d8 & 0xffffffff00000000;
              uStack_2c0 = (undefined *)((ulonglong)uStack_2c0._4_4_ << 0x20);
              if (uVar63 == 0) {
                local_290 = (uint *)(&DAT_1467bdd40 + (ulonglong)((int)fVar91 - 1U) * 0x20);
                pvVar56 = pvStack_2d0;
                uVar63 = uVar60;
                do {
                  uVar54 = local_270;
                  iVar61 = (int)uVar60;
                  if ((*local_290 & uVar39 & 0xffff) != 0) {
                    pauVar58 = (undefined1 (*) [16])
                               (param_5 +
                               (((uint)param_8 & 0xff) + 3 & 0xfffffffc) * (*local_290 >> 0x10));
                    uVar62 = (int)uVar63 * uVar62 * 4;
                    pfVar66 = local_2c8 + uVar62;
                    pfVar10 = local_2c8 + (ulonglong)((uint)local_2a8 * 4) + (ulonglong)uVar62;
                    pfStack_2a0 = (float *)((longlong)*pauVar58 +
                                           (ulonglong)((uint)fVar43 & 0xff) * 4);
                    local_288 = (ulonglong)(uint)((int)fVar65 - (int)fVar112) * 4 + 4;
                    puVar46 = puVar47;
                    local_2b8 = pfVar10;
                    do {
                      uVar63 = uVar54 + 0xf;
                      pfVar66 = pfVar66 + 4;
                      if (uVar63 <= uVar54) {
                        uVar63 = 0xffffffffffffff0;
                      }
                      *(undefined8 *)(puVar46 + -8) = 0x143168c42;
                      lVar40 = -(uVar63 & 0xfffffffffffffff0);
                      puVar47 = puVar46 + lVar40;
                      *(undefined1 **)(puVar46 + lVar40 + 0x28) = puVar46 + lVar40 + 0x40;
                      *(float *)(puVar46 + lVar40 + 0x20) = fVar112;
                      *(undefined8 *)(puVar46 + lVar40 + -8) = 0x143168c5f;
                      AkVBAPMap::ComputeVBAPSquared(pvVar56);
                      *(float *)*pauVar58 =
                           *(float *)(puVar46 + lVar40 + 0x40) + *(float *)*pauVar58;
                      pfVar52 = (float *)(puVar46 + lVar40 + 0x48);
                      pfVar36 = (float *)((longlong)*pauVar58 + local_288 + 4);
                      *(float *)((longlong)*pauVar58 + 4) =
                           *(float *)((longlong)*pauVar58 + 4) + *(float *)(puVar46 + lVar40 + 0x44)
                      ;
                      do {
                        fVar112 = *pfVar52;
                        auVar76 = ZEXT416((uint)(*pfVar36 + fVar112));
                        pfVar52 = pfVar52 + 1;
                        *pfVar36 = *pfVar36 + fVar112;
                        pfVar36 = pfVar36 + 1;
                      } while (pfVar36 < pfStack_2a0);
                      puVar46 = puVar46 + lVar40;
                      pvVar56 = pvStack_2d0;
                      fVar112 = (float)local_2e0;
                    } while (pfVar66 < pfVar10);
                    uVar63 = 0;
                    auVar85 = ZEXT816(0);
                    if ((float)uStack_2b0 != 0.0) {
                      uVar60 = uVar63;
                      if (7 < (uint)(float)uStack_2b0) {
                        fVar92 = 0.0;
                        fVar93 = 0.0;
                        fVar96 = 0.0;
                        fVar99 = 0.0;
                        fVar112 = 0.0;
                        fVar43 = 0.0;
                        fVar95 = 0.0;
                        fVar65 = 0.0;
                        do {
                          pfVar66 = (float *)((longlong)*pauVar58 + uVar60 * 4);
                          iVar61 = (int)uVar60;
                          uVar62 = iVar61 + 8;
                          uVar60 = (ulonglong)uVar62;
                          fVar92 = fVar92 + *pfVar66;
                          fVar93 = fVar93 + pfVar66[1];
                          fVar96 = fVar96 + pfVar66[2];
                          fVar99 = fVar99 + pfVar66[3];
                          pfVar66 = (float *)((longlong)*pauVar58 + (ulonglong)(iVar61 + 4) * 4);
                          fVar112 = fVar112 + *pfVar66;
                          fVar43 = fVar43 + pfVar66[1];
                          fVar95 = fVar95 + pfVar66[2];
                          fVar65 = fVar65 + pfVar66[3];
                        } while (uVar62 < ((uint)(float)uStack_2b0 & 0xfffffff8));
                        fVar96 = fVar96 + fVar95;
                        fVar99 = fVar99 + fVar65;
                        auVar84._0_4_ = fVar96 + fVar92 + fVar112;
                        auVar84._4_4_ = fVar99 + fVar93 + fVar43;
                        auVar84._8_4_ = fVar96 + fVar96;
                        auVar84._12_4_ = fVar99 + fVar99;
                        auVar76._4_4_ = auVar84._4_4_;
                        auVar76._0_4_ = auVar84._4_4_;
                        auVar76._8_4_ = auVar84._12_4_;
                        auVar76._12_4_ = auVar84._12_4_;
                        auVar85._4_12_ = auVar84._4_12_;
                        auVar85._0_4_ = auVar84._0_4_ + auVar84._4_4_;
                      }
                      fVar112 = (float)uVar60;
                      if ((uint)fVar112 < (uint)(float)uStack_2b0) {
                        if (3 < (uint)((int)(float)uStack_2b0 - (int)fVar112)) {
                          uVar62 = (((int)(float)uStack_2b0 - (int)fVar112) - 4U >> 2) + 1;
                          pfVar66 = (float *)((longlong)*pauVar58 + (uVar60 + 2) * 4);
                          uVar60 = (ulonglong)uVar62;
                          fVar112 = (float)((int)fVar112 + uVar62 * 4);
                          do {
                            auVar85._0_4_ =
                                 auVar85._0_4_ + pfVar66[-2] + pfVar66[-1] + *pfVar66 + pfVar66[1];
                            pfVar66 = pfVar66 + 4;
                            uVar60 = uVar60 - 1;
                          } while (uVar60 != 0);
                        }
                        if ((uint)fVar112 < (uint)(float)uStack_2b0) {
                          pfVar66 = (float *)((longlong)*pauVar58 + (ulonglong)(uint)fVar112 * 4);
                          uVar60 = (ulonglong)(uint)((int)(float)uStack_2b0 - (int)fVar112);
                          do {
                            auVar85._0_4_ = auVar85._0_4_ + *pfVar66;
                            pfVar66 = pfVar66 + 1;
                            uVar60 = uVar60 - 1;
                          } while (uVar60 != 0);
                        }
                      }
                      if (0.0 < auVar85._0_4_) {
                        fVar112 = fVar101 / auVar85._0_4_;
                        if ((float)uStack_2b0 != 0.0) {
                          if (0xf < (uint)(float)uStack_2b0) {
                            uVar62 = 8;
                            do {
                              pfVar66 = (float *)((longlong)*pauVar58 + uVar63 * 4);
                              fVar43 = pfVar66[1];
                              fVar95 = pfVar66[2];
                              fVar65 = pfVar66[3];
                              pfVar10 = (float *)((longlong)*pauVar58 + uVar63 * 4);
                              *pfVar10 = *pfVar66 * fVar112;
                              pfVar10[1] = fVar43 * fVar112;
                              pfVar10[2] = fVar95 * fVar112;
                              pfVar10[3] = fVar65 * fVar112;
                              uVar49 = (int)uVar63 + 0x10;
                              uVar63 = (ulonglong)uVar49;
                              pfVar66 = (float *)((longlong)*pauVar58 + (ulonglong)(uVar62 - 4) * 4)
                              ;
                              auVar86._0_4_ = fVar112 * *pfVar66;
                              auVar86._4_4_ = fVar112 * pfVar66[1];
                              auVar86._8_4_ = fVar112 * pfVar66[2];
                              auVar86._12_4_ = fVar112 * pfVar66[3];
                              *(undefined1 (*) [16])
                               ((longlong)*pauVar58 + (ulonglong)(uVar62 - 4) * 4) = auVar86;
                              pfVar66 = (float *)((longlong)*pauVar58 + (ulonglong)uVar62 * 4);
                              fVar43 = pfVar66[1];
                              fVar95 = pfVar66[2];
                              fVar65 = pfVar66[3];
                              pfVar10 = (float *)((longlong)*pauVar58 + (ulonglong)uVar62 * 4);
                              *pfVar10 = *pfVar66 * fVar112;
                              pfVar10[1] = fVar43 * fVar112;
                              pfVar10[2] = fVar95 * fVar112;
                              pfVar10[3] = fVar65 * fVar112;
                              uVar42 = uVar62 + 4;
                              uVar62 = uVar62 + 0x10;
                              pfVar66 = (float *)((longlong)*pauVar58 + (ulonglong)uVar42 * 4);
                              auVar76._0_4_ = *pfVar66 * fVar112;
                              auVar76._4_4_ = pfVar66[1] * fVar112;
                              auVar76._8_4_ = pfVar66[2] * fVar112;
                              auVar76._12_4_ = pfVar66[3] * fVar112;
                              *(undefined1 (*) [16])((longlong)*pauVar58 + (ulonglong)uVar42 * 4) =
                                   auVar76;
                            } while (uVar49 < ((uint)(float)uStack_2b0 & 0xfffffff0));
                          }
                          fVar43 = (float)uVar63;
                          if ((uint)fVar43 < (uint)(float)uStack_2b0) {
                            if (3 < (uint)((int)(float)uStack_2b0 - (int)fVar43)) {
                              uVar62 = (((int)(float)uStack_2b0 - (int)fVar43) - 4U >> 2) + 1;
                              uVar60 = (ulonglong)uVar62;
                              fVar43 = (float)((int)fVar43 + uVar62 * 4);
                              pfVar66 = (float *)((longlong)*pauVar58 + (uVar63 + 2) * 4);
                              do {
                                auVar76._0_4_ = pfVar66[-2] * fVar112;
                                auVar76._4_4_ = pfVar66[-1] * fVar112;
                                auVar76._8_4_ = *pfVar66 * fVar112;
                                auVar76._12_4_ = pfVar66[1] * fVar112;
                                *(undefined1 (*) [16])(pfVar66 + -2) = auVar76;
                                uVar60 = uVar60 - 1;
                                pfVar66 = pfVar66 + 4;
                              } while (uVar60 != 0);
                            }
                            if ((uint)fVar43 < (uint)(float)uStack_2b0) {
                              uVar63 = (ulonglong)(uint)((int)(float)uStack_2b0 - (int)fVar43);
                              pfVar66 = (float *)((longlong)*pauVar58 + (ulonglong)(uint)fVar43 * 4)
                              ;
                              do {
                                auVar75._4_4_ = fVar112;
                                auVar75._0_4_ = fVar112;
                                auVar75._8_4_ = fVar112;
                                auVar75._12_4_ = fVar112;
                                auVar76._4_12_ = auVar75._4_12_;
                                auVar76._0_4_ = fVar112 * *pfVar66;
                                *pfVar66 = auVar76._0_4_;
                                uVar63 = uVar63 - 1;
                                pfVar66 = pfVar66 + 1;
                              } while (uVar63 != 0);
                            }
                          }
                        }
                        pauVar38 = pauVar58 + ((int)(float)uStack_2b0 + 3U >> 2);
                        for (; pauVar58 < pauVar38; pauVar58 = pauVar58 + 1) {
                          auVar76 = sqrtps(auVar76,*pauVar58);
                          *pauVar58 = auVar76;
                        }
                      }
                    }
                    uVar63 = (ulonglong)((int)uStack_2c0 + 1U);
                    uStack_2c0 = (undefined *)CONCAT44(uStack_2c0._4_4_,(int)uStack_2c0 + 1U);
                    fVar43 = local_2e8[0];
                    fVar65 = (float)uStack_2b0;
                    iVar61 = (uint)local_2d8;
                  }
                  fVar95 = (float)(iVar61 + 1);
                  uVar60 = (ulonglong)(uint)fVar95;
                  local_290 = local_290 + 1;
                  local_2d8 = CONCAT44(local_2d8._4_4_,fVar95);
                  uVar62 = (uint)local_2a8;
                  fVar112 = (float)local_2e0;
                } while ((uint)fVar95 < (uint)fVar91);
              }
              else {
                uVar63 = (ulonglong)((int)fVar91 - 1U) * 8;
                uVar54 = (ulonglong)(((int)fVar112 + 3U >> 2) << 4);
                uVar55 = uVar60;
                fVar92 = fVar43;
                local_288 = uVar63;
                local_278 = uVar54;
                do {
                  uVar57 = local_270;
                  iVar61 = (int)uVar60;
                  if ((*(uint *)(&DAT_1467bdd40 + (uVar60 + uVar63) * 4) & uVar39 & 0xffff) != 0) {
                    fVar93 = 1.0 - fVar95;
                    uVar42 = (((uint)param_8 & 0xff) + 3 & 0xfffffffc) *
                             (*(uint *)(&DAT_1467bdd40 + (uVar60 + uVar63) * 4) >> 0x10);
                    uStack_2b0 = (ulonglong)uVar42;
                    pauVar58 = (undefined1 (*) [16])(param_5 + uVar42);
                    uVar42 = (int)uVar55 * uVar62 * 4;
                    pfVar66 = local_2c8 + uVar42;
                    local_2b8 = local_2c8 + (ulonglong)(uVar62 * 4) + (ulonglong)uVar42;
                    lVar40 = ((uint)fVar92 & 0xff) + uStack_2b0;
                    puVar46 = puVar47;
                    do {
                      uVar63 = uVar54 + 0xf;
                      pfVar66 = pfVar66 + 4;
                      if (uVar63 <= uVar54) {
                        uVar63 = 0xffffffffffffff0;
                      }
                      *(undefined8 *)(puVar46 + -8) = 0x14316902b;
                      pvVar56 = pvStack_2d0;
                      lVar50 = -(uVar63 & 0xfffffffffffffff0);
                      *(undefined1 **)(puVar46 + lVar50 + 0x28) = puVar46 + lVar50 + 0x40;
                      *(float *)(puVar46 + lVar50 + 0x20) = fVar112;
                      *(undefined8 *)(puVar46 + lVar50 + -8) = 0x143169056;
                      AkVBAPMap::ComputeVBAPSquared(pvVar56);
                      *(float *)*pauVar58 =
                           fVar93 * *(float *)(puVar46 + lVar50 + 0x40) + *(float *)*pauVar58;
                      pfVar10 = (float *)(puVar46 + lVar50 + 0x48);
                      *(float *)((longlong)*pauVar58 + 4) =
                           fVar93 * *(float *)(puVar46 + lVar50 + 0x44) +
                           *(float *)((longlong)*pauVar58 + 4);
                      pauVar38 = (undefined1 (*) [16])((longlong)*pauVar58 + 0xc);
                      do {
                        fVar112 = *pfVar10;
                        pfVar10 = pfVar10 + 1;
                        *(float *)*pauVar38 = fVar93 * fVar112 + *(float *)*pauVar38;
                        pauVar38 = (undefined1 (*) [16])((longlong)*pauVar38 + 4);
                      } while (pauVar38 < (undefined1 (*) [16])(param_5 + lVar40));
                      uVar63 = uVar57 + 0xf;
                      if (uVar63 <= uVar57) {
                        uVar63 = 0xffffffffffffff0;
                      }
                      *(undefined8 *)(puVar46 + lVar50 + -8) = 0x1431690c1;
                      puVar9 = local_290;
                      lVar64 = -(uVar63 & 0xfffffffffffffff0);
                      puVar47 = puVar46 + lVar64 + lVar50;
                      *(undefined1 **)(puVar46 + lVar64 + lVar50 + 0x28) =
                           puVar46 + lVar64 + lVar50 + 0x40;
                      *(float *)(puVar46 + lVar64 + lVar50 + 0x20) = fVar65;
                      *(undefined8 *)(puVar46 + lVar64 + lVar50 + -8) = 0x1431690e8;
                      AkVBAPMap::ComputeVBAPSquared(puVar9);
                      pauVar38 = pauVar58;
                      do {
                        auVar78._4_12_ = in_XMM1._4_12_;
                        auVar78._0_4_ =
                             fVar95 * *(float *)((longlong)pauVar38 +
                                                ((longlong)(puVar46 + lVar64 + lVar50 + 0x40) -
                                                (longlong)pauVar58)) + *(float *)*pauVar38;
                        *(float *)*pauVar38 = auVar78._0_4_;
                        pauVar38 = (undefined1 (*) [16])((longlong)*pauVar38 + 4);
                      } while (pauVar38 < (undefined1 (*) [16])(param_5 + lVar40));
                      puVar46 = puVar46 + lVar64 + lVar50;
                      uVar54 = local_278;
                      fVar112 = (float)local_2e0;
                    } while (pfVar66 < local_2b8);
                    uVar63 = 0;
                    auVar88 = ZEXT816(0);
                    if (fVar65 != 0.0) {
                      uVar60 = uVar63;
                      if (7 < (uint)fVar65) {
                        fVar102 = 0.0;
                        fVar98 = 0.0;
                        fVar94 = 0.0;
                        fVar97 = 0.0;
                        fVar92 = 0.0;
                        fVar93 = 0.0;
                        fVar96 = 0.0;
                        fVar99 = 0.0;
                        do {
                          pfVar66 = (float *)((longlong)*pauVar58 + uVar60 * 4);
                          iVar61 = (int)uVar60;
                          uVar62 = iVar61 + 8;
                          uVar60 = (ulonglong)uVar62;
                          fVar102 = fVar102 + *pfVar66;
                          fVar98 = fVar98 + pfVar66[1];
                          fVar94 = fVar94 + pfVar66[2];
                          fVar97 = fVar97 + pfVar66[3];
                          pfVar66 = (float *)((longlong)*pauVar58 + (ulonglong)(iVar61 + 4) * 4);
                          fVar92 = fVar92 + *pfVar66;
                          fVar93 = fVar93 + pfVar66[1];
                          fVar96 = fVar96 + pfVar66[2];
                          fVar99 = fVar99 + pfVar66[3];
                        } while (uVar62 < ((uint)fVar43 & 0xf8));
                        fVar94 = fVar94 + fVar96;
                        fVar97 = fVar97 + fVar99;
                        auVar87._0_4_ = fVar94 + fVar102 + fVar92;
                        auVar87._4_4_ = fVar97 + fVar98 + fVar93;
                        auVar87._8_4_ = fVar94 + fVar94;
                        auVar87._12_4_ = fVar97 + fVar97;
                        auVar78._4_4_ = auVar87._4_4_;
                        auVar78._0_4_ = auVar87._4_4_;
                        auVar78._8_4_ = auVar87._12_4_;
                        auVar78._12_4_ = auVar87._12_4_;
                        auVar88._4_12_ = auVar87._4_12_;
                        auVar88._0_4_ = auVar87._0_4_ + auVar87._4_4_;
                      }
                      fVar92 = (float)uVar60;
                      if ((uint)fVar92 < (uint)fVar65) {
                        if (3 < (uint)((int)fVar65 - (int)fVar92)) {
                          uVar62 = (((int)fVar65 - (int)fVar92) - 4U >> 2) + 1;
                          pfVar66 = (float *)(param_5 + uVar60 + 2 + uStack_2b0);
                          uVar60 = (ulonglong)uVar62;
                          fVar92 = (float)((int)fVar92 + uVar62 * 4);
                          do {
                            auVar88._0_4_ =
                                 auVar88._0_4_ + pfVar66[-2] + pfVar66[-1] + *pfVar66 + pfVar66[1];
                            pfVar66 = pfVar66 + 4;
                            uVar60 = uVar60 - 1;
                          } while (uVar60 != 0);
                        }
                        if ((uint)fVar92 < (uint)fVar65) {
                          pfVar66 = (float *)(param_5 + (uint)fVar92 + uStack_2b0);
                          uVar60 = (ulonglong)(uint)((int)fVar65 - (int)fVar92);
                          do {
                            auVar88._0_4_ = auVar88._0_4_ + *pfVar66;
                            pfVar66 = pfVar66 + 1;
                            uVar60 = uVar60 - 1;
                          } while (uVar60 != 0);
                        }
                      }
                      if (0.0 < auVar88._0_4_) {
                        fVar92 = fVar101 / auVar88._0_4_;
                        if (fVar65 != 0.0) {
                          if (0xf < (uint)fVar65) {
                            uVar62 = 8;
                            do {
                              pfVar66 = (float *)((longlong)*pauVar58 + uVar63 * 4);
                              auVar89._0_4_ = fVar92 * *pfVar66;
                              auVar89._4_4_ = fVar92 * pfVar66[1];
                              auVar89._8_4_ = fVar92 * pfVar66[2];
                              auVar89._12_4_ = fVar92 * pfVar66[3];
                              *(undefined1 (*) [16])((longlong)*pauVar58 + uVar63 * 4) = auVar89;
                              uVar49 = (int)uVar63 + 0x10;
                              uVar63 = (ulonglong)uVar49;
                              pfVar66 = (float *)((longlong)*pauVar58 + (ulonglong)(uVar62 - 4) * 4)
                              ;
                              fVar93 = pfVar66[1];
                              fVar96 = pfVar66[2];
                              fVar99 = pfVar66[3];
                              pfVar10 = (float *)((longlong)*pauVar58 + (ulonglong)(uVar62 - 4) * 4)
                              ;
                              *pfVar10 = *pfVar66 * fVar92;
                              pfVar10[1] = fVar93 * fVar92;
                              pfVar10[2] = fVar96 * fVar92;
                              pfVar10[3] = fVar99 * fVar92;
                              pfVar66 = (float *)((longlong)*pauVar58 + (ulonglong)uVar62 * 4);
                              fVar93 = pfVar66[1];
                              fVar96 = pfVar66[2];
                              fVar99 = pfVar66[3];
                              pfVar10 = (float *)((longlong)*pauVar58 + (ulonglong)uVar62 * 4);
                              *pfVar10 = *pfVar66 * fVar92;
                              pfVar10[1] = fVar93 * fVar92;
                              pfVar10[2] = fVar96 * fVar92;
                              pfVar10[3] = fVar99 * fVar92;
                              uVar42 = uVar62 + 4;
                              uVar62 = uVar62 + 0x10;
                              pfVar66 = (float *)((longlong)*pauVar58 + (ulonglong)uVar42 * 4);
                              auVar78._0_4_ = *pfVar66 * fVar92;
                              auVar78._4_4_ = pfVar66[1] * fVar92;
                              auVar78._8_4_ = pfVar66[2] * fVar92;
                              auVar78._12_4_ = pfVar66[3] * fVar92;
                              *(undefined1 (*) [16])((longlong)*pauVar58 + (ulonglong)uVar42 * 4) =
                                   auVar78;
                            } while (uVar49 < ((uint)fVar43 & 0xf0));
                          }
                          fVar93 = (float)uVar63;
                          if ((uint)fVar93 < (uint)fVar65) {
                            if (3 < (uint)((int)fVar65 - (int)fVar93)) {
                              uVar62 = (((int)fVar65 - (int)fVar93) - 4U >> 2) + 1;
                              uVar60 = (ulonglong)uVar62;
                              fVar93 = (float)((int)fVar93 + uVar62 * 4);
                              pfVar66 = (float *)(param_5 + uVar63 + 2 + uStack_2b0);
                              do {
                                auVar78._0_4_ = pfVar66[-2] * fVar92;
                                auVar78._4_4_ = pfVar66[-1] * fVar92;
                                auVar78._8_4_ = *pfVar66 * fVar92;
                                auVar78._12_4_ = pfVar66[1] * fVar92;
                                *(undefined1 (*) [16])(pfVar66 + -2) = auVar78;
                                uVar60 = uVar60 - 1;
                                pfVar66 = pfVar66 + 4;
                              } while (uVar60 != 0);
                            }
                            if ((uint)fVar93 < (uint)fVar65) {
                              uVar63 = (ulonglong)(uint)((int)fVar65 - (int)fVar93);
                              pfVar66 = (float *)(param_5 + (uint)fVar93 + uStack_2b0);
                              do {
                                auVar77._4_4_ = fVar92;
                                auVar77._0_4_ = fVar92;
                                auVar77._8_4_ = fVar92;
                                auVar77._12_4_ = fVar92;
                                auVar78._4_12_ = auVar77._4_12_;
                                auVar78._0_4_ = fVar92 * *pfVar66;
                                *pfVar66 = auVar78._0_4_;
                                uVar63 = uVar63 - 1;
                                pfVar66 = pfVar66 + 1;
                              } while (uVar63 != 0);
                            }
                          }
                        }
                        pauVar38 = pauVar58 + ((int)fVar65 + 3U >> 2);
                        for (; pauVar58 < pauVar38; pauVar58 = pauVar58 + 1) {
                          auVar78 = sqrtps(auVar78,*pauVar58);
                          *pauVar58 = auVar78;
                        }
                      }
                    }
                    uVar55 = (ulonglong)((int)uStack_2c0 + 1U);
                    uStack_2c0 = (undefined *)CONCAT44(uStack_2c0._4_4_,(int)uStack_2c0 + 1U);
                    uVar63 = local_288;
                    fVar92 = local_2e8[0];
                    iVar61 = (uint)local_2d8;
                  }
                  fVar93 = (float)(iVar61 + 1);
                  uVar60 = (ulonglong)(uint)fVar93;
                  local_2d8 = CONCAT44(local_2d8._4_4_,fVar93);
                  uVar62 = (uint)local_2a8;
                } while ((uint)fVar93 < (uint)fVar91);
              }
            }
          }
          else if (((uint)fVar43 & 0xf00) == 0x200) {
            pfVar66 = (float *)((ulonglong)((int)fVar91 - 1) << 3);
            local_2e8[0] = 0.0;
            param_8 = 0.0;
            uVar63 = uVar60;
            uVar54 = uVar60;
            local_2b8 = pfVar66;
            do {
              if ((*(uint *)(&DAT_1467bdd40 + (uVar63 + (longlong)pfVar66) * 4) & uVar39 & 0xffff)
                  != 0) {
                uVar49 = (uint)fVar112 & 0xff;
                puVar2 = param_5 + (uVar49 + 3 & 0xfffffffc) *
                                   (*(uint *)(&DAT_1467bdd40 + (uVar63 + (longlong)pfVar66) * 4) >>
                                   0x10);
                uVar42 = (int)uVar54 * uVar62 * 4;
                pfVar66 = local_2c8 + uVar42;
                pfVar10 = local_2c8 + (ulonglong)(uVar62 * 4) + (ulonglong)uVar42;
                do {
                  pfVar66 = pfVar66 + 4;
                  *(undefined4 **)(puVar47 + 0x20) = puVar2;
                  *(undefined8 *)(puVar47 + -8) = 0x143169452;
                  AddSphericalHarmonics();
                } while (pfVar66 < pfVar10);
                fVar43 = fVar101 / (float)uVar62;
                if (cVar48 != '\0') {
                  uVar63 = uVar60;
                  if (0xf < uVar49) {
                    uVar42 = 8;
                    do {
                      pfVar66 = (float *)(puVar2 + uVar63);
                      fVar95 = pfVar66[1];
                      fVar65 = pfVar66[2];
                      fVar92 = pfVar66[3];
                      pfVar10 = (float *)(puVar2 + uVar63);
                      *pfVar10 = *pfVar66 * fVar43;
                      pfVar10[1] = fVar95 * fVar43;
                      pfVar10[2] = fVar65 * fVar43;
                      pfVar10[3] = fVar92 * fVar43;
                      uVar53 = (int)uVar63 + 0x10;
                      uVar63 = (ulonglong)uVar53;
                      pfVar66 = (float *)(puVar2 + (uVar42 - 4));
                      fVar95 = pfVar66[1];
                      fVar65 = pfVar66[2];
                      fVar92 = pfVar66[3];
                      pfVar10 = (float *)(puVar2 + (uVar42 - 4));
                      *pfVar10 = *pfVar66 * fVar43;
                      pfVar10[1] = fVar95 * fVar43;
                      pfVar10[2] = fVar65 * fVar43;
                      pfVar10[3] = fVar92 * fVar43;
                      pfVar66 = (float *)(puVar2 + uVar42);
                      fVar95 = pfVar66[1];
                      fVar65 = pfVar66[2];
                      fVar92 = pfVar66[3];
                      pfVar10 = (float *)(puVar2 + uVar42);
                      *pfVar10 = *pfVar66 * fVar43;
                      pfVar10[1] = fVar95 * fVar43;
                      pfVar10[2] = fVar65 * fVar43;
                      pfVar10[3] = fVar92 * fVar43;
                      uVar59 = uVar42 + 4;
                      uVar42 = uVar42 + 0x10;
                      pfVar66 = (float *)(puVar2 + uVar59);
                      auVar90._0_4_ = fVar43 * *pfVar66;
                      auVar90._4_4_ = fVar43 * pfVar66[1];
                      auVar90._8_4_ = fVar43 * pfVar66[2];
                      auVar90._12_4_ = fVar43 * pfVar66[3];
                      *(undefined1 (*) [16])(puVar2 + uVar59) = auVar90;
                    } while (uVar53 < ((uint)fVar112 & 0xf0));
                  }
                  uVar42 = (uint)uVar63;
                  if (uVar42 < uVar49) {
                    if (3 < uVar49 - uVar42) {
                      uVar59 = ((uVar49 - uVar42) - 4 >> 2) + 1;
                      uVar54 = (ulonglong)uVar59;
                      uVar42 = uVar42 + uVar59 * 4;
                      pfVar66 = (float *)(puVar2 + uVar63 + 2);
                      do {
                        pfVar66[-2] = pfVar66[-2] * fVar43;
                        pfVar66[-1] = pfVar66[-1] * fVar43;
                        *pfVar66 = *pfVar66 * fVar43;
                        pfVar66[1] = pfVar66[1] * fVar43;
                        uVar54 = uVar54 - 1;
                        pfVar66 = pfVar66 + 4;
                      } while (uVar54 != 0);
                    }
                    if (uVar42 < uVar49) {
                      uVar63 = (ulonglong)(uVar49 - uVar42);
                      pfVar66 = (float *)(puVar2 + uVar42);
                      do {
                        *pfVar66 = fVar43 * *pfVar66;
                        uVar63 = uVar63 - 1;
                        pfVar66 = pfVar66 + 1;
                      } while (uVar63 != 0);
                    }
                  }
                }
                param_8 = (float)((int)param_8 + 1);
                uVar54 = (ulonglong)(uint)param_8;
                pfVar66 = local_2b8;
              }
              local_2e8[0] = (float)((int)local_2e8[0] + 1);
              uVar63 = (ulonglong)(uint)local_2e8[0];
            } while ((uint)local_2e8[0] < (uint)fVar91);
          }
        }
      }
    }
  }
                    /* WARNING: Read-only address (ram,0x000145aca370) is written */
  return;
}



// FUNCTION 143169620 GetSpeakerVolumesDirect body=45 status=ok
// SIG undefined GetSpeakerVolumesDirect(void)

void CAkSpeakerPan::GetSpeakerVolumesDirect
               (undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143165e50(0,0,param_3,0,param_1,param_2,param_4,0);
  return;
}



// FUNCTION 143169650 GetSpeakerVolumesDirectNoMask body=233 status=ok
// SIG undefined GetSpeakerVolumesDirectNoMask(void)

void CAkSpeakerPan::GetSpeakerVolumesDirectNoMask(uint param_1,byte param_2,void *param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar5 = (uint)param_2;
  uVar10 = param_1 & 0xff;
  uVar8 = uVar5 + 3 >> 2;
  if (uVar8 * uVar10 != 0) {
    ::_guard_xfg_dispatch_icall_nop(param_3,0,(ulonglong)(uVar8 * uVar10 * 4) << 2);
  }
  if ((param_1 & 0xf00) == 0x200) {
    uVar4 = 0;
    uVar9 = 0;
    if (param_2 != 0) {
      do {
        if (uVar10 <= uVar4) {
          return;
        }
        if ((*(uint *)(&DAT_145aca020 + (ulonglong)(uVar10 - 1) * 4) >> (uVar9 & 0x1f) & 1) == 0) {
          iVar2 = uVar8 * uVar4;
          uVar4 = uVar4 + 1;
          *(undefined4 *)((longlong)param_3 + ((ulonglong)(uint)(iVar2 * 4) + (ulonglong)uVar9) * 4)
               = 0x3f800000;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar5);
    }
  }
  else {
    bVar7 = (byte)param_1;
    if (uVar5 <= uVar10) {
      bVar7 = param_2;
    }
    uVar3 = 0;
    uVar6 = uVar3;
    if (bVar7 != 0) {
      do {
        uVar5 = (int)uVar6 + 1;
        lVar1 = uVar8 * (int)uVar6 * 4 + uVar3;
        uVar3 = uVar3 + 1;
        *(undefined4 *)((longlong)param_3 + lVar1 * 4) = 0x3f800000;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < bVar7);
    }
  }
  return;
}



// FUNCTION 143169740 GetSpreadCache body=195 status=ok
// SIG undefined GetSpreadCache(void)

uint * AkDevice::GetSpreadCache(longlong param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc0));
  puVar2 = *(uint **)(param_1 + 0xb0);
  puVar1 = puVar2 + (ulonglong)*(uint *)(param_1 + 0xb8) * 6;
  for (; (puVar2 != puVar1 &&
         (((*puVar2 & 0x7fffffff) != (param_2 & 0x7fffffff) ||
          ((int)(*puVar2 ^ (param_3 << 0x1f | param_2 & 0x7fffffff)) < 0)))); puVar2 = puVar2 + 6) {
  }
  if (puVar2 == (uint *)(*(longlong *)(param_1 + 0xb0) + (ulonglong)*(uint *)(param_1 + 0xb8) * 0x18
                        )) {
    puVar2 = (uint *)FUN_143129f00(param_1);
  }
  else {
    puVar2 = puVar2 + 2;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc0));
  return puVar2;
}



// FUNCTION 143169810 HandleLfe body=101 status=ok
// SIG undefined HandleLfe(void)

void HandleLfe(uint param_1,uint param_2,longlong param_3)

{
  void *_Dst;
  
  if ((param_1 & 0x8000) != 0) {
    _Dst = (void *)(param_3 +
                   (ulonglong)(((param_2 & 0xff) + 3 & 0xfffffffc) * ((param_1 & 0xff) - 1)) * 4);
    if ((char)param_2 != '\0') {
      _guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)(param_2 & 0xff) << 2);
    }
    if ((param_2 & 0x8000) != 0) {
      *(undefined4 *)((longlong)_Dst + (ulonglong)((param_2 & 0xff) - 1) * 4) = 0x3f800000;
    }
  }
  return;
}



// FUNCTION 143169880 FUN_143169880 body=171 status=ok
// SIG undefined FUN_143169880(void)

undefined8 FUN_143169880(ulonglong *param_1,uint param_2)

{
  undefined8 uVar1;
  AKRESULT AVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 extraout_var;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar7 = (uint)param_1[1];
  pvVar3 = (void *)(ulonglong)uVar7;
  if ((uVar7 <= param_2) && (*(uint *)((longlong)param_1 + 0xc) < param_2)) {
    uVar7 = (*(uint *)((longlong)param_1 + 0xc) - uVar7) + param_2;
    pvVar4 = AK::MemoryMgr::Malign(g_DefaultPoolId,(ulonglong)uVar7 << 4,0x10);
    if (pvVar4 == (void *)0x0) {
      return 0;
    }
    pvVar3 = (void *)*param_1;
    if ((pvVar3 != (void *)0x0) && (pvVar3 != pvVar4)) {
      uVar6 = (ulonglong)(uint)param_1[1];
      if (uVar6 != 0) {
        lVar5 = 0;
        do {
          uVar1 = ((undefined8 *)(lVar5 + *param_1))[1];
          *(undefined8 *)(lVar5 + (longlong)pvVar4) = *(undefined8 *)(lVar5 + *param_1);
          ((undefined8 *)(lVar5 + (longlong)pvVar4))[1] = uVar1;
          uVar6 = uVar6 - 1;
          lVar5 = lVar5 + 0x10;
        } while (uVar6 != 0);
        pvVar3 = (void *)*param_1;
      }
      AVar2 = AK::MemoryMgr::Falign(g_DefaultPoolId,pvVar3);
      pvVar3 = (void *)CONCAT44(extraout_var,AVar2);
    }
    *param_1 = (ulonglong)pvVar4;
    *(uint *)((longlong)param_1 + 0xc) = uVar7;
  }
  *(uint *)(param_1 + 1) = param_2;
  return CONCAT71((int7)((ulonglong)pvVar3 >> 8),1);
}



// FUNCTION 143169930 SetSpeakerAngles body=238 status=ok
// SIG undefined SetSpeakerAngles(void)

undefined8
CAkSpeakerPan::SetSpeakerAngles(longlong param_1,uint param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  uVar3 = 0;
  if (param_2 != 0) {
    pfVar1 = param_3;
    do {
      fVar4 = *(float *)((param_1 - (longlong)param_3) + (longlong)pfVar1) * 0.017453292;
      *pfVar1 = fVar4;
      if (3.1415927 <= fVar4) {
        return 2;
      }
      uVar3 = uVar3 + 1;
      pfVar1 = pfVar1 + 1;
    } while (uVar3 < param_2);
  }
  fVar4 = *param_3;
  if (1.5707964 <= fVar4) {
    return 2;
  }
  pfVar1 = param_3;
  uVar3 = 1;
  if (1 < param_2) {
    do {
      uVar2 = uVar3;
      fVar5 = pfVar1[1];
      if (fVar5 < param_3[uVar2 - 1]) {
        return 2;
      }
      fVar5 = fVar5 - param_3[uVar2 - 1];
      if (fVar5 == 0.0) {
        return 2;
      }
      if (3.1415927 <= fVar5) {
        return 2;
      }
      if (fVar4 <= fVar5) {
        fVar5 = fVar4;
      }
      uVar3 = uVar2 + 1;
      fVar4 = fVar5;
      pfVar1 = pfVar1 + 1;
    } while (uVar3 < param_2);
    if ((1 < uVar3) && (fVar4 = 6.2831855 - (param_3[uVar2] + param_3[uVar2]), fVar5 <= fVar4)) {
      fVar4 = fVar5;
    }
  }
  *param_4 = fVar4;
  return 1;
}


