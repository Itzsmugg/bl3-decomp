// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1415d4970 CreateDirectory body=134 status=ok
// SIG undefined CreateDirectory(void)

undefined1 FLoggedPlatformFile::CreateDirectory(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  LARGE_INTEGER local_res8;
  longlong local_18 [2];
  
  FString::PrintfImpl(local_18,L"CreateDirectory %s",param_2);
  QueryPerformanceCounter(&local_res8);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xd8))(*(longlong **)(param_1 + 8),param_2);
  QueryPerformanceCounter(&local_res8);
  if (local_18[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_18[0]);
  }
  return uVar1;
}



// FUNCTION 1415d4a10 CreateInternal body=63 status=ok
// SIG undefined CreateInternal(void)

undefined8 FFakeThread::CreateInternal(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  *(longlong *)(param_1 + 0x50) = lVar1;
  bVar2 = lVar1 == 0;
  lVar1 = 0;
  if (!bVar2) {
    (**(code **)*param_2)(param_2);
    lVar1 = *(longlong *)(param_1 + 0x50);
    bVar2 = lVar1 == 0;
  }
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),!bVar2);
}



// FUNCTION 1415d4a50 CreateLineBreakIterator body=146 status=ok
// SIG undefined CreateLineBreakIterator(void)

undefined8 * FBreakIterator::CreateLineBreakIterator(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_144cb1558;
    FUN_1415d4af0(DAT_1468b5038,puVar1 + 1);
    *(undefined4 *)(puVar1 + 3) = 0;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar1;
  }
  *param_1 = puVar1;
  param_1[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_1,puVar1,puVar1);
  return param_1;
}



// FUNCTION 1415d4af0 FUN_1415d4af0 body=501 status=ok
// SIG undefined FUN_1415d4af0(void)

longlong * FUN_1415d4af0(LPCRITICAL_SECTION param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  BOOL BVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  longlong local_48;
  longlong *plStack_40;
  longlong local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  BVar5 = TryEnterCriticalSection(param_1);
  if (BVar5 == 0) {
    EnterCriticalSection(param_1);
  }
  lVar6 = FInternationalization::Get();
  plVar4 = *(longlong **)(lVar6 + 0x60);
  puVar7 = *(undefined8 **)(lVar6 + 0x58);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar7 = (undefined8 *)FUN_1415d8690(*puVar7,local_28,2);
  lVar6 = (**(code **)(*(longlong *)*puVar7 + 0x18))();
  plStack_40 = (longlong *)operator_new(0x18);
  if (plStack_40 != (longlong *)0x0) {
    *(undefined4 *)(plStack_40 + 1) = 1;
    *plStack_40 = (longlong)&PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)plStack_40 + 0xc) = 1;
    plStack_40[2] = lVar6;
  }
  local_48 = lVar6;
  SharedPointerInternals::EnableSharedFromThis(&local_48,lVar6,lVar6);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  local_38 = local_48;
  plStack_30 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
    UNLOCK();
  }
  FUN_1415caeb0(param_1 + 1,local_res8,&local_38,0);
  plVar4 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_30)(plStack_30);
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
  *param_2 = local_48;
  param_2[1] = (longlong)plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plStack_40 + 0xc) = *(int *)((longlong)plStack_40 + 0xc) + 1;
    UNLOCK();
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_40)(plStack_40);
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
  LeaveCriticalSection(param_1);
  return param_2;
}



// FUNCTION 1415d4cf0 FUN_1415d4cf0 body=402 status=ok
// SIG undefined FUN_1415d4cf0(void)

longlong * FUN_1415d4cf0(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  BOOL BVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 local_res10 [2];
  undefined1 local_res18 [8];
  longlong local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  if ((param_3 == (longlong *)0x0) || (param_4 == 0)) {
    lVar4 = 0;
  }
  else {
    plVar6 = (longlong *)0x0;
    local_res10[0] = 0;
    lVar4 = (**(code **)(*param_3 + 0x28))(param_3,param_4,local_res10);
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      plVar5[2] = lVar4;
      plVar6 = plVar5;
    }
    local_20 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_28,lVar4,lVar4);
    local_28 = 0;
    local_38 = lVar4;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_30,&local_20);
    plVar6 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_20 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    lVar4 = local_38;
    if (local_38 != 0) {
      BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
      if (BVar3 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
      }
      FUN_1415c9c10(param_1 + 0xa0,local_res18,&local_38,0);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
    }
  }
  plVar6 = plStack_30;
  *param_2 = lVar4;
  param_2[1] = (longlong)plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plStack_30 + 0xc) = *(int *)((longlong)plStack_30 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar5 = plStack_30 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_30)();
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1415d4e90 CreateTextBiDi body=105 status=ok
// SIG undefined CreateTextBiDi(void)

undefined8 * TextBiDi::CreateTextBiDi(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR__scalar_deleting_destructor__144cb15b8;
    uVar2 = FUN_143aad410();
    puVar1[1] = uVar2;
    puVar1[2] = icu_53::UnicodeString::vftable;
    *(undefined2 *)((longlong)puVar1 + 0x36) = 0x200;
    *param_1 = puVar1;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1415d4f00 FUN_1415d4f00 body=501 status=ok
// SIG undefined FUN_1415d4f00(void)

longlong * FUN_1415d4f00(LPCRITICAL_SECTION param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  BOOL BVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  longlong local_48;
  longlong *plStack_40;
  longlong local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  BVar5 = TryEnterCriticalSection(param_1);
  if (BVar5 == 0) {
    EnterCriticalSection(param_1);
  }
  lVar6 = FInternationalization::Get();
  plVar4 = *(longlong **)(lVar6 + 0x60);
  puVar7 = *(undefined8 **)(lVar6 + 0x58);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar7 = (undefined8 *)FUN_1415d8690(*puVar7,local_28,1);
  lVar6 = (**(code **)(*(longlong *)*puVar7 + 0x18))();
  plStack_40 = (longlong *)operator_new(0x18);
  if (plStack_40 != (longlong *)0x0) {
    *(undefined4 *)(plStack_40 + 1) = 1;
    *plStack_40 = (longlong)&PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)plStack_40 + 0xc) = 1;
    plStack_40[2] = lVar6;
  }
  local_48 = lVar6;
  SharedPointerInternals::EnableSharedFromThis(&local_48,lVar6,lVar6);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  local_38 = local_48;
  plStack_30 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
    UNLOCK();
  }
  FUN_1415caeb0(param_1 + 1,local_res8,&local_38,0);
  plVar4 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_30)(plStack_30);
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
  *param_2 = local_48;
  param_2[1] = (longlong)plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plStack_40 + 0xc) = *(int *)((longlong)plStack_40 + 0xc) + 1;
    UNLOCK();
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_40)(plStack_40);
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
  LeaveCriticalSection(param_1);
  return param_2;
}



// FUNCTION 1415d5100 FUN_1415d5100 body=251 status=ok
// SIG undefined FUN_1415d5100(void)

void FUN_1415d5100(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 != 0) && (lVar2 = (longlong)*(int *)(lVar1 + 0x38), *(int *)(lVar1 + 0x38) != 0)) {
    iVar7 = 0;
    bVar8 = **(longlong **)(lVar1 + 0x30) != param_1;
    lVar4 = 0;
    iVar5 = 0;
    do {
      lVar4 = lVar4 + 1;
      iVar6 = iVar5 + 1;
      if (lVar4 < lVar2) {
        plVar3 = (longlong *)(*(longlong *)(lVar1 + 0x30) + lVar4 * 8);
        do {
          if (bVar8 != (*plVar3 != param_1)) break;
          iVar6 = iVar6 + 1;
          lVar4 = lVar4 + 1;
          plVar3 = plVar3 + 1;
        } while (lVar4 < lVar2);
      }
      if (bVar8 != false) {
        if (iVar7 != iVar5) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar7 * 8),
                     (void *)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar5 * 8),
                     (longlong)(iVar6 - iVar5) << 3);
        }
        iVar7 = iVar7 + (iVar6 - iVar5);
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar5 = iVar6;
    } while (lVar4 < lVar2);
    *(int *)(lVar1 + 0x38) = iVar7;
  }
  return;
}



// FUNCTION 1415d5210 DeleteDirectory body=134 status=ok
// SIG undefined DeleteDirectory(void)

undefined1 FLoggedPlatformFile::DeleteDirectory(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  LARGE_INTEGER local_res8;
  longlong local_18 [2];
  
  FString::PrintfImpl(local_18,L"DeleteDirectory %s",param_2);
  QueryPerformanceCounter(&local_res8);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xe0))(*(longlong **)(param_1 + 8),param_2);
  QueryPerformanceCounter(&local_res8);
  if (local_18[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_18[0]);
  }
  return uVar1;
}



// FUNCTION 1415d52b0 FUN_1415d52b0 body=134 status=ok
// SIG undefined FUN_1415d52b0(void)

undefined1 FUN_1415d52b0(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  LARGE_INTEGER local_res8;
  longlong local_18 [2];
  
  FString::PrintfImpl(local_18,L"DeleteDirectoryRecursively %s",param_2);
  QueryPerformanceCounter(&local_res8);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x148))(*(longlong **)(param_1 + 8),param_2);
  QueryPerformanceCounter(&local_res8);
  if (local_18[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_18[0]);
  }
  return uVar1;
}



// FUNCTION 1415d5350 DeleteFile body=131 status=ok
// SIG undefined DeleteFile(void)

undefined1 FLoggedPlatformFile::DeleteFile(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  LARGE_INTEGER local_res8;
  longlong local_18 [2];
  
  FString::PrintfImpl(local_18,L"DeleteFile %s",param_2);
  QueryPerformanceCounter(&local_res8);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),param_2);
  QueryPerformanceCounter(&local_res8);
  if (local_18[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_18[0]);
  }
  return uVar1;
}



// FUNCTION 1415d53e0 Destroy body=397 status=ok
// SIG undefined Destroy(void)

void FQueuedThreadPoolBase::Destroy(longlong param_1)

{
  LPCRITICAL_SECTION p_Var1;
  longlong *plVar2;
  BOOL BVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  p_Var1 = *(LPCRITICAL_SECTION *)(param_1 + 0x38);
  if (p_Var1 != (LPCRITICAL_SECTION)0x0) {
    BVar3 = TryEnterCriticalSection(p_Var1);
    if (BVar3 == 0) {
      EnterCriticalSection(p_Var1);
    }
    *(undefined1 *)(param_1 + 0x40) = 1;
    uVar4 = 0;
    uVar6 = uVar4;
    uVar7 = uVar4;
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        (**(code **)(**(longlong **)(uVar7 + *(longlong *)(param_1 + 8)) + 8))();
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        uVar7 = uVar7 + 8;
      } while ((int)uVar5 < *(int *)(param_1 + 0x10));
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      TArray<FQueuedThread_*,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
    }
    LeaveCriticalSection(p_Var1);
    while( true ) {
      p_Var1 = *(LPCRITICAL_SECTION *)(param_1 + 0x38);
      BVar3 = TryEnterCriticalSection(p_Var1);
      if (BVar3 == 0) {
        EnterCriticalSection(p_Var1);
      }
      if (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x20)) break;
      LeaveCriticalSection(p_Var1);
      FUN_1416b1760(0);
    }
    LeaveCriticalSection(p_Var1);
    p_Var1 = *(LPCRITICAL_SECTION *)(param_1 + 0x38);
    BVar3 = TryEnterCriticalSection(p_Var1);
    if (BVar3 == 0) {
      EnterCriticalSection(p_Var1);
    }
    uVar6 = uVar4;
    if (0 < *(int *)(param_1 + 0x30)) {
      do {
        (**(code **)(**(longlong **)(uVar6 + *(longlong *)(param_1 + 0x28)) + 0x38))();
        plVar2 = *(longlong **)(uVar6 + *(longlong *)(param_1 + 0x28));
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x28))(plVar2,1);
        }
        uVar5 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar5;
        uVar6 = uVar6 + 8;
      } while ((int)uVar5 < *(int *)(param_1 + 0x30));
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (*(int *)(param_1 + 0x24) != 0) {
      TArray<FQueuedThread_*,FDefaultAllocator>::ResizeTo(param_1 + 0x18,0);
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
    if (*(int *)(param_1 + 0x34) != 0) {
      TArray<FQueuedThread_*,FDefaultAllocator>::ResizeTo(param_1 + 0x28,0);
    }
    LeaveCriticalSection(p_Var1);
    p_Var1 = *(LPCRITICAL_SECTION *)(param_1 + 0x38);
    if (p_Var1 != (LPCRITICAL_SECTION)0x0) {
      DeleteCriticalSection(p_Var1);
      FMemory::operator_delete(p_Var1,0x28);
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1415d5570 FUN_1415d5570 body=285 status=ok
// SIG undefined FUN_1415d5570(void)

void FUN_1415d5570(LPCRITICAL_SECTION param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  BOOL BVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  longlong local_38;
  longlong *local_30;
  longlong local_28 [2];
  
  BVar4 = TryEnterCriticalSection(param_1);
  if (BVar4 == 0) {
    EnterCriticalSection(param_1);
  }
  plVar6 = (longlong *)param_2[1];
  local_38 = 0;
  local_30 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar6[1];
    bVar7 = iVar5 == 0;
    if (bVar7) {
      *(int *)(plVar6 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (!bVar7) {
      LOCK();
      bVar7 = iVar5 == (int)plVar6[1];
      if (bVar7) {
        *(int *)(plVar6 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar7) {
        if ((plVar6 != (longlong *)0x0) && (local_38 = *param_2, local_38 != 0)) {
          FUN_1406a1eb0(param_1 + 1,&local_38);
        }
        goto LAB_1415d5603;
      }
      LOCK();
      iVar5 = (int)plVar6[1];
      bVar7 = iVar5 == 0;
      if (bVar7) {
        *(int *)(plVar6 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
    local_30 = (longlong *)0x0;
    plVar6 = (longlong *)0x0;
  }
LAB_1415d5603:
  if (param_2 != local_28) {
    *param_2 = 0;
    plVar2 = (longlong *)param_2[1];
    param_2[1] = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar6 = local_30;
      if (iVar5 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
        plVar6 = local_30;
      }
    }
  }
  plVar2 = local_30;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar6 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001415d5686. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_1);
  return;
}



// FUNCTION 1415d5690 DestroyObject body=47 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FDecimalNumberFormattingRules,SharedPointerInternals::DefaultDeleter<FDecimalNumberFormattingRules>_>
     ::DestroyObject(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FDecimalNumberFormattingRules::~FDecimalNumberFormattingRules(lVar1);
    FMemory::operator_delete(lVar1,0xa8);
    return;
  }
  return;
}



// FUNCTION 1415d56c0 FUN_1415d56c0 body=47 status=ok
// SIG undefined FUN_1415d56c0(void)

void FUN_1415d56c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1415cdfa0(lVar1);
    FMemory::operator_delete(lVar1,0xd0);
    return;
  }
  return;
}



// FUNCTION 1415d56f0 DestroyObject body=47 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FCulture::FICUCultureImplementation,SharedPointerInternals::DefaultDeleter<FCulture::FICUCultureImplementation>_>
     ::DestroyObject(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1415ce4c0(lVar1);
    FMemory::operator_delete(lVar1,0x338);
    return;
  }
  return;
}



// FUNCTION 1415d5720 DestroyObject body=47 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FSlateElementBatcher,SharedPointerInternals::DefaultDeleter<FSlateElementBatcher>_>
     ::DestroyObject(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1415ce820(lVar1);
    FMemory::operator_delete(lVar1,0x48);
    return;
  }
  return;
}



// FUNCTION 1415d5750 FUN_1415d5750 body=47 status=ok
// SIG undefined FUN_1415d5750(void)

void FUN_1415d5750(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1415ce9d0(lVar1);
    FMemory::operator_delete(lVar1,0x10);
    return;
  }
  return;
}



// FUNCTION 1415d5790 DirectoryExists body=134 status=ok
// SIG undefined DirectoryExists(void)

undefined1 FLoggedPlatformFile::DirectoryExists(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  LARGE_INTEGER local_res8;
  longlong local_18 [2];
  
  FString::PrintfImpl(local_18,L"DirectoryExists %s",param_2);
  QueryPerformanceCounter(&local_res8);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))(*(longlong **)(param_1 + 8),param_2);
  QueryPerformanceCounter(&local_res8);
  if (local_18[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_18[0]);
  }
  return uVar1;
}



// FUNCTION 1415d5830 DumpAllocatorStats body=84 status=ok
// SIG undefined DumpAllocatorStats(void)

void FMallocThreadSafeProxy::DumpAllocatorStats(longlong param_1,undefined8 param_2)

{
  BOOL BVar1;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x68))(*(longlong **)(param_1 + 8),param_2);
                    /* WARNING: Could not recover jumptable at 0x0001415d587d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}



// FUNCTION 1415d5890 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FString,FICUInternationalization::FICUCachedFileData>,TDefaultMapHashableKeyFuncs<FString,FICUInternationalization::FICUCachedFileData,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FString,FICUInternationalization::FICUCachedFileData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = ConditionalRehash(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 1415d5910 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FString,TSharedRef<FCulture,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FCulture,1>,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FString,TSharedRef<FCulture,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = TSet<TTuple<FString,FICUInternationalization::FICUCachedFileData>,TDefaultMapHashableKeyFuncs<FString,FICUInternationalization::FICUCachedFileData,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 1415d5990 Empty body=400 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FString,FICUInternationalization::FICUCachedFileData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
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
    uVar4 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar3) goto LAB_1415d5a61;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar4 & uVar4;
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
LAB_1415d5a61:
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
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FICUInternationalization::FICUCachedFileData>
      ::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FICUInternationalization::FICUCachedFileData>
                (*param_1 + (longlong)iStack_1c * 0x28);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 1415d5b20 FUN_1415d5b20 body=557 status=ok
// SIG undefined FUN_1415d5b20(void)

void FUN_1415d5b20(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint *puVar12;
  int local_78;
  uint uStack_74;
  int iStack_64;
  int iStack_60;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  int iStack_3c;
  int iStack_38;
  
  iVar4 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_78 = 0;
  uStack_74 = 1;
  iStack_64 = 0;
  iStack_60 = 0;
  if (iVar4 != 0) {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar8 = *puVar12;
    iStack_60 = 0;
    local_78 = 0;
    while (uVar8 == 0) {
      lVar10 = (longlong)local_78;
      iStack_60 = iStack_60 + 0x20;
      iVar11 = local_78 + 1;
      bVar6 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar11;
      if (bVar6) goto LAB_1415d5bf4;
      uVar8 = puVar12[lVar10 + 1];
    }
    uStack_74 = -uVar8 & uVar8;
    iVar11 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    iStack_64 = (iStack_60 - iVar11) + 0x1f;
    if (iVar4 < iStack_64) {
LAB_1415d5bf4:
      iStack_64 = iVar4;
    }
  }
  local_50 = local_78;
  uStack_4c = uStack_74;
  local_40 = 0xffffffff;
  iStack_3c = iStack_64;
  iStack_38 = iStack_60;
  puStack_48 = puVar1;
  if (iStack_64 < iVar4) {
    do {
      lVar9 = (longlong)iStack_3c;
      lVar10 = *param_1;
      plVar5 = *(longlong **)(lVar10 + 0x18 + lVar9 * 0x28);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      lVar10 = *(longlong *)(lVar10 + lVar9 * 0x28);
      if (lVar10 != 0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
        }
        (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar10);
      }
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    } while (iStack_3c < (int)puStack_48[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar8 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar8) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar8;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 1415d5d50 Empty body=400 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FString,TSharedRef<FCulture,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
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
    uVar4 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar3) goto LAB_1415d5e21;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar4 & uVar4;
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
LAB_1415d5e21:
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
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FCulture,1>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FCulture,1>_>
                (*param_1 + (longlong)iStack_1c * 0x28);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 1415d5ee0 EnablePoisonTests body=131 status=ok
// SIG undefined EnablePoisonTests(void)

void FMemory::EnablePoisonTests(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  
  if (DAT_1468b5175 == '\0') {
    DAT_1468b5175 = '\x01';
    while( true ) {
      puVar1 = DAT_1468c2208;
      puVar2 = malloc(0x10);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR__scalar_deleting_destructor__144cb0d58;
        puVar2[1] = puVar1;
      }
      LOCK();
      bVar3 = puVar1 == DAT_1468c2208;
      puVar1 = puVar2;
      if (!bVar3) {
        puVar1 = DAT_1468c2208;
      }
      DAT_1468c2208 = puVar1;
      UNLOCK();
      if (bVar3) break;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  return;
}



// FUNCTION 1415d5f70 EnablePurgatoryTests body=171 status=ok
// SIG undefined EnablePurgatoryTests(void)

void FMemory::EnablePurgatoryTests(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  
  if (DAT_1468b5174 == '\0') {
    DAT_1468b5174 = '\x01';
    while( true ) {
      puVar1 = DAT_1468c2208;
      puVar2 = malloc(0x440);
      puVar3 = (undefined8 *)0x0;
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR__scalar_deleting_destructor__144cb0de8;
        puVar2[1] = puVar1;
        *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
        *(undefined4 *)(puVar2 + 3) = 0;
        puVar2[0x14] = 0;
        puVar2[0x35] = 0;
        puVar2[0x56] = 0;
        puVar2[0x77] = 0;
        puVar3 = puVar2;
      }
      LOCK();
      bVar4 = puVar1 == DAT_1468c2208;
      puVar1 = puVar3;
      if (!bVar4) {
        puVar1 = DAT_1468c2208;
      }
      DAT_1468c2208 = puVar1;
      UNLOCK();
      if (bVar4) break;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 1415d6020 FUN_1415d6020 body=109 status=ok
// SIG undefined FUN_1415d6020(void)

void FUN_1415d6020(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  
  plVar1 = *(longlong **)(param_1 + 8);
  puVar2 = *(undefined4 **)plVar1[1];
  if (puVar2 + 1 <= (undefined4 *)((undefined8 *)plVar1[1])[1]) {
    *param_2 = *puVar2;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
    return;
  }
  (**(code **)(*plVar1 + 0x50))(plVar1,param_2,4);
  if ((*(byte *)((longlong)plVar1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(plVar1,param_2,4);
  }
  return;
}



// FUNCTION 1415d6090 EqualTo body=19 status=ok
// SIG undefined EqualTo(void)

bool FText::EqualTo(void)

{
  int iVar1;
  
  iVar1 = CompareTo();
  return iVar1 == 0;
}



// FUNCTION 1415d60b0 EqualToCaseIgnored body=25 status=ok
// SIG undefined EqualToCaseIgnored(void)

bool FText::EqualToCaseIgnored(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = CompareTo(param_1,param_2,2);
  return iVar1 == 0;
}



// FUNCTION 1415d60e0 Exec body=126 status=ok
// SIG undefined Exec(void)

undefined1
FMallocThreadSafeProxy::Exec
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 uVar1;
  BOOL BVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x10);
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 8))
                    (*(longlong **)(param_1 + 8),param_2,param_3,param_4);
  LeaveCriticalSection(lpCriticalSection);
  return uVar1;
}



// FUNCTION 1415d6160 FUN_1415d6160 body=36 status=ok
// SIG undefined FUN_1415d6160(void)

undefined8 * FUN_1415d6160(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1415a9080(*(undefined4 *)(param_1 + 8));
  *param_2 = uVar1;
  *(undefined4 *)(param_2 + 1) = 2;
  return param_2;
}



// FUNCTION 1415d6190 FUN_1415d6190 body=2561 status=ok
// SIG undefined FUN_1415d6190(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 ** FUN_1415d6190(undefined8 **param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 **ppuVar2;
  char cVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined2 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 *puVar15;
  undefined1 auStack_b8 [32];
  undefined8 **local_98;
  undefined8 *local_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  undefined **local_70 [4];
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  FDecimalNumberFormattingRules::FDecimalNumberFormattingRules();
  uVar6 = (**(code **)(*param_2 + 0x188))(param_2);
  puVar10 = (undefined8 *)0x0;
  uVar13 = 0;
  uVar14 = 0;
  switch(uVar6) {
  case 0:
    uVar6 = 6;
    break;
  case 1:
    uVar6 = 5;
    break;
  case 2:
    uVar6 = 4;
    break;
  case 3:
    uVar6 = 3;
    break;
  default:
    uVar6 = uVar14;
    break;
  case 5:
    uVar6 = 2;
    break;
  case 6:
    uVar6 = 1;
  }
  cVar3 = FUN_143b38630(param_2);
  *(undefined4 *)(param_1 + 0x12) = uVar6;
  *(bool *)((longlong)param_1 + 0x8d) = cVar3 != '\0';
  uVar6 = FUN_143b38330(param_2);
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar6;
  uVar6 = FUN_143b382f0(param_2);
  *(undefined4 *)(param_1 + 0x13) = uVar6;
  uVar6 = FUN_143b38310(param_2);
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar6;
  uVar6 = FUN_143b382d0(param_2);
  *(undefined4 *)(param_1 + 0x14) = uVar6;
  (**(code **)(*param_2 + 200))(param_2,1);
  local_4a = 0x200;
  local_70[0] = icu_53::UnicodeString::vftable;
  lVar7 = (**(code **)(*param_2 + 0x120))(param_2);
  local_88 = (undefined8 *)0x0;
  local_80 = (ulonglong)(uint)local_80;
  iVar12 = (int)*(char *)(lVar7 + 0x286);
  if (*(char *)(lVar7 + 0x286) < '\0') {
    iVar12 = *(int *)(lVar7 + 0x274);
  }
  puVar15 = puVar10;
  uVar6 = uVar14;
  if (0 < iVar12) {
    uVar1 = iVar12 + 1;
    if ((int)uVar1 < 1) {
      uVar6 = uVar13;
      if (((int)uVar1 < 0) && (uVar6 = 0, uVar1 != 0)) {
        local_80 = (ulonglong)uVar1;
        TArray<wchar_t,FDefaultAllocator>::ResizeShrink(&local_88);
        goto LAB_1415d62e9;
      }
    }
    else {
      local_80 = (ulonglong)uVar1;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
LAB_1415d62e9:
      uVar6 = (uint)local_80;
    }
    puVar15 = local_88;
    puVar9 = puVar10;
    if (((*(byte *)(lVar7 + 0x287) & 0x11) == 0) &&
       (puVar9 = (undefined8 *)(lVar7 + 0x268), (*(byte *)(lVar7 + 0x287) & 2) == 0)) {
      puVar9 = *(undefined8 **)(lVar7 + 0x268);
    }
    _guard_xfg_dispatch_icall_nop(local_88,puVar9,(longlong)iVar12 * 2);
    *(undefined2 *)((longlong)iVar12 * 2 + (longlong)puVar15) = 0;
  }
  if (param_1 == &local_88) {
    if (puVar15 != (undefined8 *)0x0) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,puVar15);
    }
  }
  else {
    puVar9 = *param_1;
    if (puVar9 != (undefined8 *)0x0) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,puVar9);
    }
    *param_1 = puVar15;
    *(undefined4 *)(param_1 + 1) = uVar6;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_80._4_4_;
  }
  lVar7 = SMultiLineEditingTest::GetMultilineEditableText(param_2,local_70);
  local_88 = (undefined8 *)0x0;
  local_80 = local_80 & 0xffffffff;
  iVar12 = (int)*(char *)(lVar7 + 0x26);
  if (*(char *)(lVar7 + 0x26) < '\0') {
    iVar12 = *(int *)(lVar7 + 0x14);
  }
  puVar15 = puVar10;
  if (0 < iVar12) {
    uVar1 = iVar12 + 1;
    if ((int)uVar1 < 1) {
      uVar14 = uVar13;
      if (((int)uVar1 < 0) && (uVar14 = 0, uVar1 != 0)) {
        local_80 = (ulonglong)uVar1;
        TArray<wchar_t,FDefaultAllocator>::ResizeShrink(&local_88);
        goto LAB_1415d63eb;
      }
    }
    else {
      local_80 = (ulonglong)uVar1;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
LAB_1415d63eb:
      uVar14 = (uint)local_80;
    }
    puVar15 = local_88;
    puVar9 = puVar10;
    if (((*(byte *)(lVar7 + 0x27) & 0x11) == 0) &&
       (puVar9 = (undefined8 *)(lVar7 + 8), (*(byte *)(lVar7 + 0x27) & 2) == 0)) {
      puVar9 = *(undefined8 **)(lVar7 + 8);
    }
    _guard_xfg_dispatch_icall_nop(local_88,puVar9,(longlong)iVar12 * 2);
    *(undefined2 *)((longlong)iVar12 * 2 + (longlong)puVar15) = 0;
  }
  ppuVar2 = param_1 + 2;
  if (ppuVar2 == &local_88) {
    if (puVar15 != (undefined8 *)0x0) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,puVar15);
    }
  }
  else {
    puVar9 = *ppuVar2;
    if (puVar9 != (undefined8 *)0x0) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,puVar9);
    }
    *ppuVar2 = puVar15;
    *(undefined4 *)(param_1 + 3) = uVar14;
    *(undefined4 *)((longlong)param_1 + 0x1c) = local_80._4_4_;
  }
  lVar7 = FUN_143b42680(param_2,local_70);
  local_88 = (undefined8 *)0x0;
  local_80 = local_80 & 0xffffffff;
  iVar12 = (int)*(char *)(lVar7 + 0x26);
  if (*(char *)(lVar7 + 0x26) < '\0') {
    iVar12 = *(int *)(lVar7 + 0x14);
  }
  puVar15 = puVar10;
  uVar14 = uVar13;
  if (0 < iVar12) {
    uVar1 = iVar12 + 1;
    if ((int)uVar1 < 1) {
      if (((int)uVar1 < 0) && (uVar14 = 0, uVar1 != 0)) {
        local_80 = (ulonglong)uVar1;
        TArray<wchar_t,FDefaultAllocator>::ResizeShrink(&local_88);
        goto LAB_1415d64ea;
      }
    }
    else {
      local_80 = (ulonglong)uVar1;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
LAB_1415d64ea:
      uVar14 = (uint)local_80;
    }
    puVar15 = local_88;
    puVar9 = puVar10;
    if (((*(byte *)(lVar7 + 0x27) & 0x11) == 0) &&
       (puVar9 = (undefined8 *)(lVar7 + 8), (*(byte *)(lVar7 + 0x27) & 2) == 0)) {
      puVar9 = *(undefined8 **)(lVar7 + 8);
    }
    _guard_xfg_dispatch_icall_nop(local_88,puVar9,(longlong)iVar12 * 2);
    *(undefined2 *)((longlong)puVar15 + (longlong)iVar12 * 2) = 0;
  }
  ppuVar2 = param_1 + 4;
  if (ppuVar2 == &local_88) {
    if (puVar15 != (undefined8 *)0x0) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,puVar15);
    }
  }
  else {
    puVar9 = *ppuVar2;
    if (puVar9 != (undefined8 *)0x0) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,puVar9);
    }
    *ppuVar2 = puVar15;
    *(undefined4 *)(param_1 + 5) = uVar14;
    *(undefined4 *)((longlong)param_1 + 0x2c) = local_80._4_4_;
  }
  lVar7 = FUN_143b42710(param_2,local_70);
  local_88 = (undefined8 *)0x0;
  local_80 = local_80 & 0xffffffff;
  iVar12 = (int)*(char *)(lVar7 + 0x26);
  if (*(char *)(lVar7 + 0x26) < '\0') {
    iVar12 = *(int *)(lVar7 + 0x14);
  }
  puVar15 = puVar10;
  if (iVar12 < 1) goto LAB_1415d6620;
  uVar1 = iVar12 + 1;
  if ((int)uVar1 < 1) {
    if (((int)uVar1 < 0) && (uVar13 = 0, uVar1 != 0)) {
      local_80 = (ulonglong)uVar1;
      TArray<wchar_t,FDefaultAllocator>::ResizeShrink(&local_88);
      goto LAB_1415d65e9;
    }
  }
  else {
    local_80 = (ulonglong)uVar1;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
LAB_1415d65e9:
    uVar13 = (uint)local_80;
  }
  puVar15 = local_88;
  puVar9 = puVar10;
  if (((*(byte *)(lVar7 + 0x27) & 0x11) == 0) &&
     (puVar9 = (undefined8 *)(lVar7 + 8), (*(byte *)(lVar7 + 0x27) & 2) == 0)) {
    puVar9 = *(undefined8 **)(lVar7 + 8);
  }
  _guard_xfg_dispatch_icall_nop(local_88,puVar9,(longlong)iVar12 * 2);
  *(undefined2 *)((longlong)iVar12 * 2 + (longlong)puVar15) = 0;
LAB_1415d6620:
  ppuVar2 = param_1 + 6;
  if (ppuVar2 == &local_88) {
    if (puVar15 != (undefined8 *)0x0) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,puVar15);
    }
  }
  else {
    puVar9 = *ppuVar2;
    if (puVar9 != (undefined8 *)0x0) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,puVar9);
    }
    *ppuVar2 = puVar15;
    *(undefined4 *)(param_1 + 7) = uVar13;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_80._4_4_;
  }
  lVar7 = FUN_143b42740(param_2,local_70);
  local_88 = (undefined8 *)0x0;
  local_80 = 0;
  iVar12 = (int)*(char *)(lVar7 + 0x26);
  if (*(char *)(lVar7 + 0x26) < '\0') {
    iVar12 = *(int *)(lVar7 + 0x14);
  }
  if (0 < iVar12) {
    uVar1 = iVar12 + 1;
    if ((int)uVar1 < 1) {
      if (((int)uVar1 < 0) && (uVar1 != 0)) {
        local_80 = (ulonglong)uVar1;
        TArray<wchar_t,FDefaultAllocator>::ResizeShrink(&local_88);
      }
    }
    else {
      local_80 = (ulonglong)uVar1;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    }
    puVar15 = local_88;
    if (((*(byte *)(lVar7 + 0x27) & 0x11) == 0) &&
       (puVar10 = (undefined8 *)(lVar7 + 8), (*(byte *)(lVar7 + 0x27) & 2) == 0)) {
      puVar10 = (undefined8 *)*puVar10;
    }
    _guard_xfg_dispatch_icall_nop(local_88,puVar10,(longlong)iVar12 * 2);
    *(undefined2 *)((longlong)iVar12 * 2 + (longlong)puVar15) = 0;
  }
  FString::operator=(param_1 + 8,&local_88);
  puVar10 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,puVar10);
  }
  lVar7 = (**(code **)(*param_2 + 0x120))(param_2);
  local_88 = (undefined8 *)0x0;
  local_80 = 0;
  iVar12 = (int)*(char *)(lVar7 + 0x146);
  if (*(char *)(lVar7 + 0x146) < '\0') {
    iVar12 = *(int *)(lVar7 + 0x134);
  }
  if (iVar12 != 0) {
    local_98 = &local_88;
    ICUUtilities::FStringConverter::ConvertString(local_78,lVar7 + 0x120,0);
  }
  FString::operator=(param_1 + 10,&local_88);
  puVar10 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,puVar10);
  }
  lVar7 = (**(code **)(*param_2 + 0x120))(param_2);
  local_88 = (undefined8 *)0x0;
  local_80 = 0;
  iVar12 = (int)*(char *)(lVar7 + 0x11e);
  if (*(char *)(lVar7 + 0x11e) < '\0') {
    iVar12 = *(int *)(lVar7 + 0x10c);
  }
  if (iVar12 != 0) {
    local_98 = &local_88;
    ICUUtilities::FStringConverter::ConvertString(local_78,lVar7 + 0xf8,0);
  }
  FString::operator=(param_1 + 0xc,&local_88);
  puVar10 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,puVar10);
  }
  lVar7 = (**(code **)(*param_2 + 0x120))(param_2);
  iVar12 = (int)*(char *)(lVar7 + 0x56);
  if (*(char *)(lVar7 + 0x56) < '\0') {
    iVar12 = *(int *)(lVar7 + 0x44);
  }
  uVar11 = 0xffff;
  if (iVar12 == 0) {
    uVar5 = 0xffff;
  }
  else {
    plVar8 = (longlong *)(lVar7 + 0x38);
    if ((*(byte *)(lVar7 + 0x57) & 2) == 0) {
      plVar8 = (longlong *)*plVar8;
    }
    uVar5 = *(undefined2 *)plVar8;
  }
  *(undefined2 *)(param_1 + 0xe) = uVar5;
  lVar7 = (**(code **)(*param_2 + 0x120))(param_2);
  iVar12 = (int)*(char *)(lVar7 + 0x2e);
  if (*(char *)(lVar7 + 0x2e) < '\0') {
    iVar12 = *(int *)(lVar7 + 0x1c);
  }
  if (iVar12 == 0) {
    uVar5 = 0xffff;
  }
  else {
    plVar8 = (longlong *)(lVar7 + 0x10);
    if ((*(byte *)(lVar7 + 0x2f) & 2) == 0) {
      plVar8 = (longlong *)*plVar8;
    }
    uVar5 = *(undefined2 *)plVar8;
  }
  *(undefined2 *)((longlong)param_1 + 0x72) = uVar5;
  uVar4 = UGISInventoryComponent::GetHeroSoulInventoryMaxSize(param_2);
  *(undefined1 *)((longlong)param_1 + 0x74) = uVar4;
  iVar12 = UGISInventoryComponent::GetUseableHeroSoulInventorySize(param_2);
  if (iVar12 < 1) {
    uVar4 = *(undefined1 *)((longlong)param_1 + 0x74);
  }
  else {
    uVar4 = UGISInventoryComponent::GetUseableHeroSoulInventorySize(param_2);
  }
  *(undefined1 *)((longlong)param_1 + 0x75) = uVar4;
  lVar7 = (**(code **)(*param_2 + 0x120))(param_2);
  iVar12 = (int)*(char *)(lVar7 + 0xce);
  if (*(char *)(lVar7 + 0xce) < '\0') {
    iVar12 = *(int *)(lVar7 + 0xbc);
  }
  if (iVar12 == 0) {
    uVar5 = 0xffff;
  }
  else {
    plVar8 = (longlong *)(lVar7 + 0xb0);
    if ((*(byte *)(lVar7 + 0xcf) & 2) == 0) {
      plVar8 = (longlong *)*plVar8;
    }
    uVar5 = *(undefined2 *)plVar8;
  }
  *(undefined2 *)((longlong)param_1 + 0x76) = uVar5;
  lVar7 = (**(code **)(*param_2 + 0x120))(param_2);
  iVar12 = (int)*(char *)(lVar7 + 0x2fe);
  if (*(char *)(lVar7 + 0x2fe) < '\0') {
    iVar12 = *(int *)(lVar7 + 0x2ec);
  }
  if (iVar12 == 0) {
    uVar5 = 0xffff;
  }
  else {
    plVar8 = (longlong *)(lVar7 + 0x2e0);
    if ((*(byte *)(lVar7 + 0x2ff) & 2) == 0) {
      plVar8 = (longlong *)*plVar8;
    }
    uVar5 = *(undefined2 *)plVar8;
  }
  *(undefined2 *)(param_1 + 0xf) = uVar5;
  lVar7 = (**(code **)(*param_2 + 0x120))(param_2);
  iVar12 = (int)*(char *)(lVar7 + 0x326);
  if (*(char *)(lVar7 + 0x326) < '\0') {
    iVar12 = *(int *)(lVar7 + 0x314);
  }
  if (iVar12 == 0) {
    uVar5 = 0xffff;
  }
  else {
    plVar8 = (longlong *)(lVar7 + 0x308);
    if ((*(byte *)(lVar7 + 0x327) & 2) == 0) {
      plVar8 = (longlong *)*plVar8;
    }
    uVar5 = *(undefined2 *)plVar8;
  }
  *(undefined2 *)((longlong)param_1 + 0x7a) = uVar5;
  lVar7 = (**(code **)(*param_2 + 0x120))(param_2);
  iVar12 = (int)*(char *)(lVar7 + 0x34e);
  if (*(char *)(lVar7 + 0x34e) < '\0') {
    iVar12 = *(int *)(lVar7 + 0x33c);
  }
  if (iVar12 == 0) {
    uVar5 = 0xffff;
  }
  else {
    plVar8 = (longlong *)(lVar7 + 0x330);
    if ((*(byte *)(lVar7 + 0x34f) & 2) == 0) {
      plVar8 = (longlong *)*plVar8;
    }
    uVar5 = *(undefined2 *)plVar8;
  }
  *(undefined2 *)((longlong)param_1 + 0x7c) = uVar5;
  lVar7 = (**(code **)(*param_2 + 0x120))(param_2);
  iVar12 = (int)*(char *)(lVar7 + 0x376);
  if (*(char *)(lVar7 + 0x376) < '\0') {
    iVar12 = *(int *)(lVar7 + 0x364);
  }
  if (iVar12 == 0) {
    uVar5 = 0xffff;
  }
  else {
    plVar8 = (longlong *)(lVar7 + 0x358);
    if ((*(byte *)(lVar7 + 0x377) & 2) == 0) {
      plVar8 = (longlong *)*plVar8;
    }
    uVar5 = *(undefined2 *)plVar8;
  }
  *(undefined2 *)((longlong)param_1 + 0x7e) = uVar5;
  lVar7 = (**(code **)(*param_2 + 0x120))(param_2);
  iVar12 = (int)*(char *)(lVar7 + 0x39e);
  if (*(char *)(lVar7 + 0x39e) < '\0') {
    iVar12 = *(int *)(lVar7 + 0x38c);
  }
  if (iVar12 == 0) {
    uVar5 = 0xffff;
  }
  else {
    plVar8 = (longlong *)(lVar7 + 0x380);
    if ((*(byte *)(lVar7 + 0x39f) & 2) == 0) {
      plVar8 = (longlong *)*plVar8;
    }
    uVar5 = *(undefined2 *)plVar8;
  }
  *(undefined2 *)(param_1 + 0x10) = uVar5;
  lVar7 = (**(code **)(*param_2 + 0x120))(param_2);
  iVar12 = (int)*(char *)(lVar7 + 0x3c6);
  if (*(char *)(lVar7 + 0x3c6) < '\0') {
    iVar12 = *(int *)(lVar7 + 0x3b4);
  }
  if (iVar12 == 0) {
    uVar5 = 0xffff;
  }
  else {
    plVar8 = (longlong *)(lVar7 + 0x3a8);
    if ((*(byte *)(lVar7 + 0x3c7) & 2) == 0) {
      plVar8 = (longlong *)*plVar8;
    }
    uVar5 = *(undefined2 *)plVar8;
  }
  *(undefined2 *)((longlong)param_1 + 0x82) = uVar5;
  lVar7 = (**(code **)(*param_2 + 0x120))(param_2);
  iVar12 = (int)*(char *)(lVar7 + 0x3ee);
  if (*(char *)(lVar7 + 0x3ee) < '\0') {
    iVar12 = *(int *)(lVar7 + 0x3dc);
  }
  if (iVar12 == 0) {
    uVar5 = 0xffff;
  }
  else {
    plVar8 = (longlong *)(lVar7 + 0x3d0);
    if ((*(byte *)(lVar7 + 0x3ef) & 2) == 0) {
      plVar8 = (longlong *)*plVar8;
    }
    uVar5 = *(undefined2 *)plVar8;
  }
  *(undefined2 *)((longlong)param_1 + 0x84) = uVar5;
  lVar7 = (**(code **)(*param_2 + 0x120))(param_2);
  iVar12 = (int)*(char *)(lVar7 + 0x416);
  if (*(char *)(lVar7 + 0x416) < '\0') {
    iVar12 = *(int *)(lVar7 + 0x404);
  }
  if (iVar12 == 0) {
    uVar5 = 0xffff;
  }
  else {
    plVar8 = (longlong *)(lVar7 + 0x3f8);
    if ((*(byte *)(lVar7 + 0x417) & 2) == 0) {
      plVar8 = (longlong *)*plVar8;
    }
    uVar5 = *(undefined2 *)plVar8;
  }
  *(undefined2 *)((longlong)param_1 + 0x86) = uVar5;
  lVar7 = (**(code **)(*param_2 + 0x120))(param_2);
  iVar12 = (int)*(char *)(lVar7 + 0x43e);
  if (*(char *)(lVar7 + 0x43e) < '\0') {
    iVar12 = *(int *)(lVar7 + 0x42c);
  }
  if (iVar12 != 0) {
    plVar8 = (longlong *)(lVar7 + 0x420);
    if ((*(byte *)(lVar7 + 0x43f) & 2) == 0) {
      plVar8 = (longlong *)*plVar8;
    }
    uVar11 = *(undefined2 *)plVar8;
  }
  *(undefined2 *)(param_1 + 0x11) = uVar11;
  FUN_143a8dc60(local_70);
  return param_1;
}



// FUNCTION 1415d6bb0 FileExists body=131 status=ok
// SIG undefined FileExists(void)

undefined1 FLoggedPlatformFile::FileExists(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  LARGE_INTEGER local_res8;
  longlong local_18 [2];
  
  FString::PrintfImpl(local_18,L"FileExists %s",param_2);
  QueryPerformanceCounter(&local_res8);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x68))(*(longlong **)(param_1 + 8),param_2);
  QueryPerformanceCounter(&local_res8);
  if (local_18[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_18[0]);
  }
  return uVar1;
}



// FUNCTION 1415d6c40 FUN_1415d6c40 body=94 status=ok
// SIG undefined FUN_1415d6c40(void)

void FUN_1415d6c40(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x50))();
  if (lVar1 != 0) {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x50))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001415d6c87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x180))(plVar2,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 1415d6cb0 FileSize body=131 status=ok
// SIG undefined FileSize(void)

undefined8 FLoggedPlatformFile::FileSize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  LARGE_INTEGER local_res8;
  longlong local_18 [2];
  
  FString::PrintfImpl(local_18,L"FileSize %s",param_2);
  QueryPerformanceCounter(&local_res8);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(*(longlong **)(param_1 + 8),param_2);
  QueryPerformanceCounter(&local_res8);
  if (local_18[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_18[0]);
  }
  return uVar1;
}



// FUNCTION 1415d6d60 FUN_1415d6d60 body=182 status=ok
// SIG undefined FUN_1415d6d60(void)

undefined8 FUN_1415d6d60(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  bool bVar9;
  
  lVar2 = *param_1;
  plVar7 = *(longlong **)(lVar2 + 0x30);
  plVar6 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    LOCK();
    iVar5 = (int)plVar7[1];
    bVar9 = iVar5 == 0;
    if (bVar9) {
      *(int *)(plVar7 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (!bVar9) {
      LOCK();
      bVar9 = iVar5 == (int)plVar7[1];
      if (bVar9) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar6 = plVar7;
        if (((plVar7 != (longlong *)0x0) &&
            (plVar3 = *(longlong **)(lVar2 + 0x28), plVar3 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar3 + 0x38))(), cVar4 != '\0')) {
          uVar8 = 1;
          goto LAB_1415d6d9d;
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar7[1];
      bVar9 = iVar5 == 0;
      if (bVar9) {
        *(int *)(plVar7 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  uVar8 = 0;
  plVar7 = plVar6;
LAB_1415d6d9d:
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar7 + 1;
    lVar2 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
    return uVar8;
  }
  return uVar8;
}



// FUNCTION 1415d6e20 FindOrMakeCulture body=1300 status=ok
// SIG undefined FindOrMakeCulture(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FICUInternationalization::FindOrMakeCulture
          (longlong param_1,undefined8 *param_2,undefined8 param_3,char param_4)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined1 auStack_198 [32];
  char local_178;
  undefined2 *local_170;
  int local_168;
  int local_160 [2];
  longlong *local_158;
  longlong *plStack_150;
  int local_148 [2];
  longlong *local_140;
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined2 **local_110;
  longlong **local_108;
  longlong *local_f8;
  longlong *plStack_f0;
  undefined1 local_e8 [128];
  longlong local_68;
  undefined8 local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_178 = param_4;
  FUN_1415d8dd0(&local_170,param_3);
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x218);
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  plVar8 = (longlong *)(param_1 + 0x1c8);
  local_118 = plVar8;
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(plVar8,local_148,&local_170);
  puVar13 = (undefined8 *)0x0;
  if (local_148[0] != -1) {
    puVar13 = (undefined8 *)(*plVar8 + (longlong)local_148[0] * 0x28);
  }
  puVar9 = puVar13 + 2;
  if (puVar13 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  if (puVar9 == (undefined8 *)0x0) {
    LeaveCriticalSection(lpCriticalSection);
    local_158 = (longlong *)0x0;
    plStack_150 = (longlong *)0x0;
    if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
      puVar10 = &DAT_143f3eda8;
      if (local_168 != 0) {
        puVar10 = local_170;
      }
      iVar3 = FUN_140438070(puVar10);
      lVar5 = *(longlong *)(param_1 + 0x68);
      if (*(longlong *)(param_1 + 0x68) == 0) {
        lVar5 = param_1 + 0x60;
      }
      iVar3 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x70) - 1U & (longlong)iVar3) * 4);
      if (iVar3 != -1) {
        lVar5 = *(longlong *)(param_1 + 0x28);
        do {
          lVar12 = (longlong)iVar3 * 0x20;
          puVar10 = &DAT_143f3eda8;
          if (local_168 != 0) {
            puVar10 = local_170;
          }
          if (*(int *)(lVar12 + 8 + lVar5) == 0) {
            puVar11 = &DAT_143f3eda8;
          }
          else {
            puVar11 = *(undefined2 **)(lVar12 + lVar5);
          }
          iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar10);
          if (iVar4 == 0) {
            if (iVar3 != -1) {
              lVar5 = operator_new(0xd0);
              if (lVar5 == 0) {
                local_140 = (longlong *)0x0;
              }
              else {
                local_140 = (longlong *)FUN_1415cc430(lVar5,&local_170);
              }
              local_138 = (longlong *)operator_new(0x18);
              if (local_138 != (longlong *)0x0) {
                *(undefined4 *)(local_138 + 1) = 1;
                *local_138 = (longlong)&PTR_FUN_144cb1688;
                *(undefined4 *)((longlong)local_138 + 0xc) = 1;
                local_138[2] = (longlong)local_140;
              }
              SharedPointerInternals::EnableSharedFromThis(&local_140,local_140,local_140);
              local_158 = local_140;
              local_140 = (longlong *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_150,&local_138);
              plVar8 = local_138;
              if (local_138 != (longlong *)0x0) {
                LOCK();
                plVar6 = local_138 + 1;
                lVar5 = *plVar6;
                *(int *)plVar6 = (int)*plVar6 + -1;
                UNLOCK();
                if ((int)lVar5 == 1) {
                  (**(code **)*local_138)(local_138);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar8 + 0xc);
                  iVar3 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*plVar8 + 8))(plVar8,1);
                  }
                }
              }
              goto LAB_1415d7211;
            }
            break;
          }
          lVar5 = *(longlong *)(param_1 + 0x28);
          iVar3 = *(int *)(lVar5 + 0x18 + lVar12);
        } while (iVar3 != -1);
      }
    }
    plVar8 = (longlong *)0x0;
    local_160[0] = 0;
    puVar10 = &DAT_143f3eda8;
    if (local_168 != 0) {
      puVar10 = local_170;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_e8,puVar10);
    lVar5 = FUN_143aa5b10(0,local_60,local_160);
    if (local_68 != 0) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
        (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_68);
      }
      else {
        (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_68);
      }
    }
    if (lVar5 != 0) {
      if ((local_160[0] != -0x7f) || (local_178 == '\x01')) {
        lVar12 = operator_new(0xd0);
        plVar6 = plVar8;
        if (lVar12 != 0) {
          plVar6 = (longlong *)FUN_1415cc430(lVar12,&local_170);
        }
        plVar7 = (longlong *)operator_new(0x18);
        if (plVar7 != (longlong *)0x0) {
          *(undefined4 *)(plVar7 + 1) = 1;
          *plVar7 = (longlong)&PTR_FUN_144cb1688;
          *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
          plVar7[2] = (longlong)plVar6;
          plVar8 = plVar7;
        }
        local_130 = plVar6;
        local_128 = plVar8;
        SharedPointerInternals::EnableSharedFromThis(&local_130,plVar6,plVar6);
        local_158 = local_130;
        local_130 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_150,&local_128);
        plVar8 = local_128;
        if (local_128 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_128 + 1;
          lVar12 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*local_128)(local_128);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
        }
      }
      FUN_143aa2ef0(lVar5);
LAB_1415d7211:
      if (local_158 != (longlong *)0x0) {
        BVar2 = TryEnterCriticalSection(lpCriticalSection);
        if (BVar2 == 0) {
          EnterCriticalSection(lpCriticalSection);
        }
        local_f8 = local_158;
        plStack_f0 = plStack_150;
        if (plStack_150 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
          UNLOCK();
        }
        local_110 = &local_170;
        local_108 = &local_f8;
        FUN_1415ca970(local_118,local_120,&local_110,0);
        plVar8 = plStack_f0;
        if (plStack_f0 != (longlong *)0x0) {
          LOCK();
          plVar6 = plStack_f0 + 1;
          lVar5 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plStack_f0)(plStack_f0);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
        }
        LeaveCriticalSection(lpCriticalSection);
      }
    }
    *param_2 = local_158;
    param_2[1] = plStack_150;
    if (local_170 == (undefined2 *)0x0) {
      return param_2;
    }
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
  }
  else {
    *param_2 = *puVar9;
    lVar5 = puVar9[1];
    param_2[1] = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    LeaveCriticalSection(lpCriticalSection);
    if (local_170 == (undefined2 *)0x0) {
      return param_2;
    }
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_170);
      return param_2;
    }
  }
  (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_170);
  return param_2;
}



// FUNCTION 1415d7340 FindPlatformFile body=89 status=ok
// SIG undefined FindPlatformFile(void)

longlong * FPlatformFileManager::FindPlatformFile(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)*param_1;
  while( true ) {
    if (plVar3 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
    uVar2 = (**(code **)(*plVar3 + 0x60))(plVar3);
    iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(uVar2,param_2);
    if (iVar1 == 0) break;
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3);
  }
  return plVar3;
}



// FUNCTION 1415d73a0 FractionalToString body=1095 status=ok
// SIG undefined FractionalToString(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FastDecimalFormat::Internal::FractionalToString
               (double param_1,undefined8 *param_2,undefined1 *param_3,longlong *param_4)

{
  short *psVar1;
  void *_Dst;
  short sVar2;
  void *_Src;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  short *psVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  double dVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined1 auStack_228 [32];
  double *local_208;
  double *local_200;
  uint local_1f8;
  longlong *local_1f0;
  undefined1 *local_1e8;
  undefined4 local_1e0;
  undefined1 local_1d8;
  double local_1d0;
  double local_1c8;
  undefined8 *local_1c0;
  undefined1 *local_1b8;
  short sStack_1aa;
  short local_1a8 [47];
  short asStack_14a [49];
  undefined1 local_e8 [96];
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  iVar12 = *(int *)(param_3 + 8);
  iVar16 = *(int *)(param_3 + 0x10);
  if (iVar12 < 1) {
    iVar12 = 0;
  }
  if (iVar16 < 1) {
    iVar16 = 0;
  }
  *(int *)(param_3 + 8) = iVar12;
  *(int *)(param_3 + 0x10) = iVar16;
  iVar6 = *(int *)(param_3 + 0xc);
  if (*(int *)(param_3 + 0xc) <= iVar12) {
    iVar6 = iVar12;
  }
  *(int *)(param_3 + 0xc) = iVar6;
  iVar4 = *(int *)(param_3 + 0x14);
  if (*(int *)(param_3 + 0x14) <= iVar16) {
    iVar4 = iVar16;
  }
  *(int *)(param_3 + 0x14) = iVar4;
  local_1c8 = param_1;
  local_1c0 = param_2;
  local_1b8 = param_3;
  iVar5 = _isnan((double)(float)param_1);
  dVar3 = local_1c8;
  if (iVar5 != 0) {
    _Src = (void *)*param_2;
    iVar12 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      iVar12 = 0;
    }
    if (iVar12 != 0) {
      iVar16 = (int)param_4[1];
      iVar6 = (uint)(iVar16 == 0) + iVar16 + iVar12;
      *(int *)(param_4 + 1) = iVar6;
      if (*(int *)((longlong)param_4 + 0xc) < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar16);
      }
      _Dst = (void *)(*param_4 + ((longlong)iVar16 - (ulonglong)(iVar16 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar12 * 2);
      *(undefined2 *)((longlong)iVar12 * 2 + (longlong)_Dst) = 0;
    }
    return;
  }
  local_200 = &local_1c8;
  local_1d8 = 0x7fffffffffffffff < (ulonglong)local_1c8;
  local_208 = &local_1d0;
  local_1d0 = 0.0;
  local_1c8 = 0.0;
  FUN_1415d77f0(local_1d8,param_1,iVar4,*(undefined4 *)(param_3 + 4));
  uVar18 = SUB84(local_1c8,0);
  uVar19 = (uint)((ulonglong)local_1c8 >> 0x20);
  dVar17 = local_1d0;
  if (0x7fffffffffffffff < (ulonglong)dVar3) {
    dVar17 = -local_1d0;
    uVar19 = uVar19 ^ 0x80000000;
  }
  dVar3 = (double)CONCAT44(uVar19,uVar18);
  psVar1 = (short *)((longlong)param_2 + 0x76);
  lVar8 = 0;
  if ((9.223372036854776e+18 <= dVar17) &&
     (dVar17 = dVar17 - 9.223372036854776e+18, dVar17 < 9.223372036854776e+18)) {
    lVar8 = -0x8000000000000000;
  }
  local_1e0 = 0x29;
  local_1e8 = local_e8;
  local_1f0 = (longlong *)CONCAT44(local_1f0._4_4_,iVar6);
  local_208 = (double *)CONCAT62(local_208._2_6_,*(undefined2 *)(param_2 + 0xe));
  local_200 = (double *)psVar1;
  local_1f8 = iVar12;
  uVar7 = IntegralToString_UInt64ToString
                    ((longlong)dVar17 + lVar8,local_1b8[1],*(undefined1 *)((longlong)param_2 + 0x74)
                    );
  uVar10 = 0;
  local_1d0 = (double)CONCAT44(local_1d0._4_4_,uVar7);
  uVar13 = 0;
  if ((double)CONCAT44(uVar19,uVar18) != 0.0) {
    lVar8 = 0;
    if ((9.223372036854776e+18 <= (double)CONCAT44(uVar19,uVar18)) &&
       (dVar3 = (double)CONCAT44(uVar19,uVar18) - 9.223372036854776e+18,
       dVar3 < 9.223372036854776e+18)) {
      lVar8 = -0x8000000000000000;
    }
    uVar19 = 0;
    uVar14 = uVar10;
    if (((longlong)dVar3 + lVar8 != 0) && (uVar14 = 0, 0 < iVar4)) {
      psVar11 = asStack_14a;
      uVar9 = (longlong)dVar3 + lVar8;
      uVar14 = uVar10;
      uVar15 = uVar10;
      do {
        psVar11 = psVar11 + 1;
        uVar19 = (uint)uVar15;
        if (uVar9 == 0) break;
        uVar14 = (ulonglong)((int)uVar14 + 1);
        uVar19 = uVar19 + 1;
        uVar15 = (ulonglong)uVar19;
        *psVar11 = psVar1[uVar9 % 10];
        uVar9 = uVar9 / 10;
      } while ((int)uVar19 < iVar4);
    }
    uVar13 = 0x14 - uVar19;
    if ((int)-uVar19 <= (int)(0x14 - uVar19)) {
      uVar13 = -uVar19;
    }
    uVar9 = (ulonglong)uVar13;
    if (0 < (int)uVar13) {
      iVar12 = (int)uVar14;
      uVar14 = (ulonglong)(iVar12 + uVar13);
      sVar2 = *psVar1;
      psVar11 = asStack_14a + (longlong)iVar12 + 1;
      for (; uVar9 != 0; uVar9 = uVar9 - 1) {
        *psVar11 = sVar2;
        psVar11 = psVar11 + 1;
      }
    }
    iVar12 = (int)uVar14;
    lVar8 = (longlong)iVar12;
    if (0 < iVar12) {
      psVar11 = asStack_14a + lVar8;
      do {
        sVar2 = *psVar11;
        psVar11 = psVar11 + -1;
        *(short *)((longlong)local_1a8 + uVar10 * 2) = sVar2;
        uVar10 = uVar10 + 1;
      } while ((longlong)uVar10 < lVar8);
    }
    *(undefined2 *)((longlong)local_1a8 + lVar8 * 2) = 0;
    iVar6 = 0x12 - iVar12;
    if (iVar4 - iVar12 <= 0x12 - iVar12) {
      iVar6 = iVar4 - iVar12;
    }
    if (0 < iVar6) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)local_1a8 + (longlong)iVar6 * 2),local_1a8,lVar8 * 2);
      sVar2 = *psVar1;
      uVar14 = (ulonglong)(uint)(iVar12 + iVar6);
      psVar11 = local_1a8;
      for (uVar10 = (longlong)iVar6 & 0x7fffffffffffffff; uVar10 != 0; uVar10 = uVar10 - 1) {
        *psVar11 = sVar2;
        psVar11 = psVar11 + 1;
      }
    }
    uVar13 = (uint)uVar14;
    if (iVar16 < (int)uVar13) {
      psVar11 = &sStack_1aa + (int)uVar13;
      do {
        uVar13 = (uint)uVar14;
        if (*psVar11 != *psVar1) break;
        uVar13 = uVar13 - 1;
        uVar14 = (ulonglong)uVar13;
        psVar11 = psVar11 + -1;
      } while (iVar16 < (int)uVar13);
    }
    param_2 = local_1c0;
    uVar7 = local_1d0._0_4_;
  }
  if ((ulonglong)((longlong)(int)uVar13 * 2) < 0x52) {
    psVar11 = (short *)((longlong)local_1a8 + (longlong)(int)uVar13 * 2);
    uVar19 = 0x12 - uVar13;
    if ((int)(iVar16 - uVar13) <= (int)(0x12 - uVar13)) {
      uVar19 = iVar16 - uVar13;
    }
    *psVar11 = 0;
    if (0 < (int)uVar19) {
      sVar2 = *psVar1;
      uVar13 = uVar13 + uVar19;
      for (uVar10 = (ulonglong)uVar19; uVar10 != 0; uVar10 = uVar10 - 1) {
        *psVar11 = sVar2;
        psVar11 = psVar11 + 1;
      }
    }
    if ((ulonglong)((longlong)(int)uVar13 * 2) < 0x52) {
      *(undefined2 *)((longlong)local_1a8 + (longlong)(int)uVar13 * 2) = 0;
      local_200 = (double *)local_1a8;
      local_208 = (double *)CONCAT44(local_208._4_4_,uVar7);
      local_1f8 = uVar13;
      local_1f0 = param_4;
      FUN_1415d18f0(local_1d8,*local_1b8,param_2,local_e8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __report_rangecheckfailure();
}



// FUNCTION 1415d77f0 FUN_1415d77f0 body=584 status=ok
// SIG undefined FUN_1415d77f0(void)

void FUN_1415d77f0(char param_1,double param_2,int param_3,undefined4 param_4,double *param_5,
                  double *param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  double *pdVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  double local_res10;
  double local_38 [4];
  
  iVar5 = 0x12;
  if (param_3 < 0x13) {
    iVar5 = param_3;
  }
  local_res10 = param_2;
  if (iVar5 == 0) {
    uVar6 = 0;
    uVar7 = 0;
  }
  else {
    dVar9 = modf(param_2,&local_res10);
    uVar6 = SUB84(dVar9,0);
    uVar7 = (undefined4)((ulonglong)dVar9 >> 0x20);
  }
  local_38[0] = (double)CONCAT44(uVar7,uVar6);
  pdVar4 = &local_res10;
  if (iVar5 != 0) {
    pdVar4 = local_38;
  }
  dVar9 = (double)(longlong)(&DAT_144cb00f0)[iVar5];
  if ((longlong)(&DAT_144cb00f0)[iVar5] < 0) {
    dVar9 = dVar9 + 1.8446744073709552e+19;
  }
  dVar9 = dVar9 * *pdVar4;
  *pdVar4 = dVar9;
  uVar6 = (undefined4)((ulonglong)dVar9 >> 0x20);
  switch(param_4) {
  case 0:
    dVar9 = (double)FMath::RoundHalfToEven();
    break;
  case 1:
    dVar9 = (double)FMath::RoundHalfFromZero();
    break;
  case 2:
    dVar9 = (double)FMath::RoundHalfToZero();
    break;
  case 3:
    if (0.0 <= dVar9) goto LAB_1415d7938;
    goto LAB_1415d78d0;
  case 4:
    if (dVar9 < 0.0) goto LAB_1415d7938;
    goto LAB_1415d78d0;
  case 5:
LAB_1415d78d0:
    lVar3 = (longlong)dVar9;
    if ((lVar3 != -0x8000000000000000) && ((double)lVar3 != dVar9)) {
      auVar2._8_4_ = SUB84(dVar9,0);
      auVar2._0_8_ = dVar9;
      auVar2._12_4_ = uVar6;
      uVar8 = movmskpd(0,auVar2);
      lVar3 = lVar3 - (ulonglong)(uVar8 & 1);
LAB_1415d795d:
      dVar9 = (double)lVar3;
    }
    break;
  case 6:
LAB_1415d7938:
    lVar3 = (longlong)dVar9;
    if ((lVar3 == -0x8000000000000000) || ((double)lVar3 == dVar9)) break;
    auVar1._8_4_ = SUB84(dVar9,0);
    auVar1._0_8_ = dVar9;
    auVar1._12_4_ = uVar6;
    uVar8 = movmskpd(0,auVar1);
    lVar3 = lVar3 + (ulonglong)(uVar8 & 1 ^ 1);
    goto LAB_1415d795d;
  default:
    goto switchD_1415d7898_default;
  }
  *pdVar4 = dVar9;
switchD_1415d7898_default:
  dVar9 = *pdVar4;
  if (iVar5 == 0) {
    *param_5 = dVar9;
    *param_6 = 0.0;
  }
  else {
    uVar8 = (uint)((ulonglong)dVar9 >> 0x20);
    if (param_1 != '\0') {
      uVar8 = uVar8 ^ 0x80000000;
    }
    dVar10 = (double)(longlong)(&DAT_144cb00f0)[iVar5];
    if ((longlong)(&DAT_144cb00f0)[iVar5] < 0) {
      dVar10 = dVar10 + 1.8446744073709552e+19;
    }
    if (dVar10 <= (double)CONCAT44(uVar8,SUB84(dVar9,0))) {
      if (param_1 == '\0') {
        local_res10 = local_res10 + 1.0;
        dVar9 = *pdVar4 - dVar10;
      }
      else {
        local_res10 = local_res10 + -1.0;
        dVar9 = dVar10 + *pdVar4;
      }
      *pdVar4 = dVar9;
    }
    *param_5 = local_res10;
    *param_6 = dVar9;
  }
  return;
}



// FUNCTION 1415d7a60 Free body=52 status=ok
// SIG undefined Free(void)

void `anonymous_namespace'::FICUOverrides::Free(undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,param_2);
  }
  return;
}



// FUNCTION 1415d7aa0 Free body=90 status=ok
// SIG undefined Free(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FMallocPoisonProxy::Free(longlong *param_1,void *param_2)

{
  char cVar1;
  size_t local_res10 [3];
  
  if (param_2 != (void *)0x0) {
    LOCK();
    _DAT_1468b504c = _DAT_1468b504c + 1;
    UNLOCK();
    cVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2,local_res10);
    if ((cVar1 != '\0') && (local_res10[0] != 0)) {
      ::_guard_xfg_dispatch_icall_nop(param_2,0xdd,local_res10[0]);
    }
    (**(code **)(*(longlong *)param_1[1] + 0x20))((longlong *)param_1[1],param_2);
  }
  return;
}



// FUNCTION 1415d7b00 Free body=648 status=ok
// SIG undefined Free(void)

ulonglong FMallocPurgatoryProxy::Free(longlong *param_1,void *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  ulonglong local_res10;
  size_t local_res18 [2];
  ulonglong in_stack_ffffffffffffffc0;
  undefined4 uVar9;
  
  if (param_2 == (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001415d7b1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(*(longlong *)param_1[1] + 0x20))();
    return uVar5;
  }
  local_res18[0] = 0;
  (**(code **)(*param_1 + 0x30))(param_1,param_2,local_res18);
  ::_guard_xfg_dispatch_icall_nop(param_2,0xdc,local_res18[0]);
  uVar3 = DAT_1464aaa8c & 3;
  uVar4 = FLockFreeLinkPolicy::AllocLockFreeLink();
  uVar5 = 0;
  if (uVar4 != 0) {
    uVar5 = (&DAT_1468a81f8)[uVar4 >> 0xe] + (ulonglong)(uVar4 & 0x3fff) * 0x18;
  }
  *(void **)(uVar5 + 8) = param_2;
  FLockFreePointerListLIFORoot<128,1>::Push(param_1 + (ulonglong)uVar3 * 0x21 + 4,uVar4);
  LOCK();
  *(int *)((longlong)param_1 + 0x14) =
       *(int *)((longlong)param_1 + 0x14) + (int)(local_res18[0] + 0x3ff >> 10);
  uVar6 = DAT_1464aaa8c;
  UNLOCK();
  uVar4 = *(uint *)(param_1 + 2);
  LOCK();
  uVar3 = *(uint *)((longlong)param_1 + 0x14);
  if (uVar3 == 0) {
    *(uint *)((longlong)param_1 + 0x14) = 0;
    uVar3 = 0;
  }
  UNLOCK();
  if ((int)uVar3 < 0x17d79) {
    if (uVar4 == uVar6) {
      return (ulonglong)uVar3;
    }
    LOCK();
    uVar3 = *(uint *)(param_1 + 2);
    bVar8 = uVar4 == uVar3;
    if (bVar8) {
      *(uint *)(param_1 + 2) = uVar6;
      uVar3 = uVar4;
    }
    UNLOCK();
    if (!bVar8) {
      return (ulonglong)uVar3;
    }
  }
  else {
    LOCK();
    plVar1 = param_1 + 3;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + 1;
    UNLOCK();
    uVar6 = (int)lVar2 + 1;
  }
  while( true ) {
    uVar5 = FUN_141594c40(param_1 + (ulonglong)(uVar6 - 1 & 3) * 0x21 + 4);
    if ((uint)uVar5 == 0) {
      return uVar5;
    }
    lVar2 = *(longlong *)
             ((&DAT_1468a81f8)[(uVar5 & 0xffffffff) >> 0xe] + 8 +
             (ulonglong)((uint)uVar5 & 0x3fff) * 0x18);
    uVar5 = FLockFreeLinkPolicy::FreeLockFreeLink(uVar5 & 0xffffffff);
    if (lVar2 == 0) break;
    local_res10 = 0;
    (**(code **)(*param_1 + 0x30))(param_1,lVar2,&local_res10);
    uVar5 = local_res10;
    uVar7 = 0;
    if (local_res10 != 0) {
      do {
        uVar9 = (undefined4)(in_stack_ffffffffffffffc0 >> 0x20);
        if (*(char *)(lVar2 + uVar7) != -0x24) {
          FGenericPlatformMisc::LowLevelOutputDebugStringf
                    (L"Freed memory at %p + %d == %x (should be %x)\r\n",lVar2,uVar7,
                     *(char *)(lVar2 + uVar7),0xdc);
          LowLevelFatalErrorHandler
                    ("Unknown",0x94,L"Freed memory at %p + %d == %x (should be %x)",lVar2,uVar7,
                     CONCAT44(uVar9,(uint)*(byte *)(lVar2 + uVar7)),0xdc);
          in_stack_ffffffffffffffc0 = uVar7;
          FDebug::AssertFailed
                    (&DAT_143f3f584,"Unknown",0x94,L"Freed memory at %p + %d == %x (should be %x)",
                     lVar2,uVar7,*(undefined1 *)(lVar2 + uVar7),0xdc);
          uVar5 = local_res10;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar5);
    }
    (**(code **)(*(longlong *)param_1[1] + 0x20))((longlong *)param_1[1],lVar2);
    LOCK();
    *(int *)((longlong)param_1 + 0x14) =
         *(int *)((longlong)param_1 + 0x14) - (int)(local_res10 + 0x3ff >> 10);
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 1415d7d90 Free body=96 status=ok
// SIG undefined Free(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FMallocThreadSafeProxy::Free(longlong param_1,longlong param_2)

{
  BOOL BVar1;
  
  if (param_2 != 0) {
    LOCK();
    _DAT_1468b504c = _DAT_1468b504c + 1;
    UNLOCK();
    BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    if (BVar1 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
    (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),param_2);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  return;
}



// FUNCTION 1415d7df0 Free body=52 status=ok
// SIG undefined Free(void)

void FMemory::Free(longlong param_1)

{
  if (param_1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,param_1);
  }
  return;
}



// FUNCTION 1415d7e30 FreeTls body=97 status=ok
// SIG undefined FreeTls(void)

void FRunnableThread::FreeTls(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  TlsSetValue(DAT_1468b5058,(LPVOID)0x0);
  plVar3 = *(longlong **)(param_1 + 0x30);
  plVar1 = plVar3 + *(int *)(param_1 + 0x38);
  for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    *plVar3 = 0;
  }
  return;
}



// FUNCTION 1415d7ea0 FUN_1415d7ea0 body=261 status=ok
// SIG undefined FUN_1415d7ea0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415d7ea0(void)

{
  char cVar1;
  longlong *plVar2;
  undefined1 local_98 [144];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468b517c) && (_Init_thread_header(&DAT_1468b517c), DAT_1468b517c == -1))
  {
    FUN_1416a13c0(local_98);
    DAT_1468c2208 = (longlong *)FWindowsPlatformMemory::BaseAllocator();
    FUN_1415a8bd0(DAT_1468c2208);
    cVar1 = (**(code **)(*DAT_1468c2208 + 0x70))();
    if (cVar1 == '\0') {
      plVar2 = malloc(0x38);
      if (plVar2 == (longlong *)0x0) {
        DAT_1468c2208 = (longlong *)0x0;
      }
      else {
        plVar2[1] = (longlong)DAT_1468c2208;
        *plVar2 = (longlong)&PTR__scalar_deleting_destructor__144cb0cc8;
        InitializeCriticalSection((LPCRITICAL_SECTION)(plVar2 + 2));
        SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(plVar2 + 2),4000);
        DAT_1468c2208 = plVar2;
      }
    }
    _DAT_1468b5178 = 0;
    _Init_thread_footer(&DAT_1468b517c);
    return;
  }
  return;
}



// FUNCTION 1415d7fb0 FUN_1415d7fb0 body=193 status=ok
// SIG undefined FUN_1415d7fb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_1415d7fb0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b5144) {
    _Init_thread_header(&DAT_1468b5144);
    if (DAT_1468b5144 == -1) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1464a8e18);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_1464a8e18,4000);
      _DAT_1464a8e40 = 0xbf800000;
      _DAT_1464a8e48 = 0;
      _DAT_1464a8e50 = 0;
      uRam00000001464a8e58 = 0;
      DAT_1464a8e44 = 0;
      _DAT_1464a8e60 = 0;
      atexit(FUN_143e78470);
      _Init_thread_footer(&DAT_1468b5144);
      return &PTR_PTR_1464a8e00;
    }
  }
  return &PTR_PTR_1464a8e00;
}



// FUNCTION 1415d8080 FUN_1415d8080 body=8 status=ok
// SIG undefined FUN_1415d8080(void)

undefined8 FUN_1415d8080(void)

{
  return DAT_1468b5038;
}



// FUNCTION 1415d8090 Get body=8 status=ok
// SIG undefined Get(void)

undefined * FPlatformFileManager::Get(void)

{
  return &DAT_1468b5128;
}



// FUNCTION 1415d80a0 FUN_1415d80a0 body=458 status=ok
// SIG undefined FUN_1415d80a0(void)

undefined8 * FUN_1415d80a0(void)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b5138) {
    _Init_thread_header(&DAT_1468b5138);
    if (DAT_1468b5138 == -1) {
      puVar2 = (undefined8 *)operator_new(0xb8);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        puVar2[1] = 0;
        *puVar2 = &PTR_IsPromotedBuild_144cb0b68;
        *(undefined4 *)(puVar2 + 2) = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
        SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar2 + 3),4000);
        puVar2[8] = 0;
        puVar2[9] = 0;
        puVar2[0xc] = 0;
        puVar2[0xd] = 0;
        *(undefined4 *)(puVar2 + 0xe) = 0xffffffff;
        *(undefined4 *)((longlong)puVar2 + 0x74) = 0;
        puVar2[0x10] = 0;
        *(undefined4 *)(puVar2 + 0x11) = 0;
        *(undefined4 *)(puVar2 + 0x12) = 0;
        puVar2[0x13] = 0;
        puVar2[0x14] = 0;
        puVar2[0x15] = 0x3ff0000000000000;
        puVar2[0x16] = 0;
        FThreadHeartBeat::InitSettings(puVar2);
        cVar1 = FUN_1415a30e0();
        if ((cVar1 == '\0') || ((double)puVar2[0x13] <= 0.0)) {
          puVar2[0x13] = 0;
        }
        else {
          cVar1 = FUN_1415bac00();
          if (cVar1 != '\0') {
            uVar3 = FUN_1415d42a0(puVar2,L"FHeartBeatThread",0,1,0xffffffffffffffff);
            puVar2[1] = uVar3;
            FUN_1415c9930(&DAT_1464af3a0,local_res8,puVar2,FUN_1415e2430);
            FUN_1415c9930(&DAT_1464af3b8,local_res10,puVar2,FUN_1415e21d0);
          }
        }
      }
      DAT_1468b4fe8 = puVar2;
      DAT_1468b5130 = puVar2;
      atexit(FUN_143e783c0);
      _Init_thread_footer(&DAT_1468b5138);
      return DAT_1468b5130;
    }
  }
  return DAT_1468b5130;
}



// FUNCTION 1415d8270 FUN_1415d8270 body=155 status=ok
// SIG undefined FUN_1415d8270(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415d8270(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b516c) {
    _Init_thread_header(&DAT_1468b516c);
    if (DAT_1468b516c == -1) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1464a92c0);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_1464a92c0,4000);
      DAT_1464a92e8 = 0;
      _DAT_1464a92f0 = 0;
      atexit(FUN_143e784d0);
      _Init_thread_footer(&DAT_1468b516c);
      return &DAT_1464a9270;
    }
  }
  return &DAT_1464a9270;
}



// FUNCTION 1415d8310 FUN_1415d8310 body=173 status=ok
// SIG undefined FUN_1415d8310(void)

LPVOID FUN_1415d8310(undefined8 *param_1,DWORD *param_2)

{
  int iVar1;
  DWORD dwTlsIndex;
  DWORD DVar2;
  LPVOID lpTlsValue;
  LPVOID pvVar3;
  
  if (*param_2 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    LOCK();
    DVar2 = *param_2;
    if (DVar2 == 0xffffffff) {
      *param_2 = dwTlsIndex;
      DVar2 = 0xffffffff;
    }
    UNLOCK();
    if (DVar2 != 0xffffffff) {
      TlsFree(dwTlsIndex);
    }
  }
  lpTlsValue = TlsGetValue(*param_2);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)(*(code *)*param_1)(param_1[1]);
    pvVar3 = TlsGetValue(DAT_1468b5058);
    *(LPVOID *)((longlong)lpTlsValue + 8) = pvVar3;
    if (pvVar3 != (LPVOID)0x0) {
      iVar1 = *(int *)((longlong)pvVar3 + 0x38);
      *(int *)((longlong)pvVar3 + 0x38) = iVar1 + 1;
      if (*(int *)((longlong)pvVar3 + 0x3c) < iVar1 + 1) {
        TArray<FMallocBinned2::FPerThreadFreeBlockLists_*,FDefaultAllocator>::ResizeGrow
                  ((longlong *)((longlong)pvVar3 + 0x30),iVar1);
      }
      *(LPVOID *)(*(longlong *)((longlong)pvVar3 + 0x30) + (longlong)iVar1 * 8) = lpTlsValue;
    }
    TlsSetValue(*param_2,lpTlsValue);
  }
  return lpTlsValue;
}



// FUNCTION 1415d83c0 FUN_1415d83c0 body=31 status=ok
// SIG undefined FUN_1415d83c0(void)

undefined8 FUN_1415d83c0(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))();
  return param_2;
}



// FUNCTION 1415d83e0 GetAccessTimeStamp body=144 status=ok
// SIG undefined GetAccessTimeStamp(void)

undefined8
FLoggedPlatformFile::GetAccessTimeStamp(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  LARGE_INTEGER local_res8;
  longlong local_18 [2];
  
  FString::PrintfImpl(local_18,L"GetAccessTimeStamp %s");
  QueryPerformanceCounter(&local_res8);
  (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),param_2,param_3);
  QueryPerformanceCounter(&local_res8);
  if (local_18[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_18[0]);
  }
  return param_2;
}



// FUNCTION 1415d8470 GetAllocSize body=124 status=ok
// SIG undefined GetAllocSize(void)

undefined8 FMemory::GetAllocSize(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  
  if (DAT_1468c2208 == (longlong *)0x0) {
    FUN_1415d7ea0();
    local_res10 = 0;
    cVar1 = (**(code **)(*DAT_1468c2208 + 0x30))(DAT_1468c2208,param_1,&local_res10);
    uVar2 = 0;
    if (cVar1 != '\0') {
      uVar2 = local_res10;
    }
    return uVar2;
  }
  local_res18[0] = 0;
  cVar1 = (**(code **)(*DAT_1468c2208 + 0x30))(DAT_1468c2208,param_1,local_res18);
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = local_res18[0];
  }
  return uVar2;
}



// FUNCTION 1415d84f0 GetAllocationSize body=108 status=ok
// SIG undefined GetAllocationSize(void)

undefined1
FMallocThreadSafeProxy::GetAllocationSize(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 uVar1;
  BOOL BVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x10);
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                    (*(longlong **)(param_1 + 8),param_2,param_3);
  LeaveCriticalSection(lpCriticalSection);
  return uVar1;
}



// FUNCTION 1415d8580 GetAllocatorStats body=84 status=ok
// SIG undefined GetAllocatorStats(void)

void FMallocThreadSafeProxy::GetAllocatorStats(longlong param_1,undefined8 param_2)

{
  BOOL BVar1;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8),param_2);
                    /* WARNING: Could not recover jumptable at 0x0001415d85cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}



// FUNCTION 1415d85e0 FUN_1415d85e0 body=164 status=ok
// SIG undefined FUN_1415d85e0(void)

undefined4 FUN_1415d85e0(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar2 = *param_1;
  plVar7 = *(longlong **)(lVar2 + 0x30);
  plVar6 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    LOCK();
    iVar4 = (int)plVar7[1];
    bVar8 = iVar4 == 0;
    if (bVar8) {
      *(int *)(plVar7 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (!bVar8) {
      LOCK();
      bVar8 = iVar4 == (int)plVar7[1];
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar6 = plVar7;
        if ((plVar7 != (longlong *)0x0) &&
           (plVar3 = *(longlong **)(lVar2 + 0x28), plVar3 != (longlong *)0x0)) {
          uVar5 = (**(code **)(*plVar3 + 0x100))();
          goto LAB_1415d8629;
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar8 = iVar4 == 0;
      if (bVar8) {
        *(int *)(plVar7 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  uVar5 = 0xffffffff;
  plVar7 = plVar6;
LAB_1415d8629:
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar7 + 1;
    lVar2 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return uVar5;
}



// FUNCTION 1415d8690 FUN_1415d8690 body=1758 status=ok
// SIG undefined FUN_1415d8690(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001415d88fd) */
/* WARNING: Removing unreachable block (ram,0x0001415d890b) */
/* WARNING: Removing unreachable block (ram,0x0001415d8917) */
/* WARNING: Removing unreachable block (ram,0x0001415d8930) */

longlong * FUN_1415d8690(longlong param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 *puVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined1 auStack_198 [32];
  longlong local_178;
  longlong *plStack_170;
  longlong local_168;
  longlong *local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong *local_140;
  longlong local_138;
  longlong *local_130;
  longlong local_128;
  longlong *local_120;
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
  undefined4 local_c8;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  bVar15 = false;
  bVar14 = false;
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  local_c8 = 0;
  local_178 = 0;
  plStack_170 = (longlong *)0x0;
  if (param_3 == 0) {
    plVar4 = (longlong *)(param_1 + 0x178);
    lVar18 = *plVar4;
    if (lVar18 == 0) {
      plVar17 = (longlong *)`anonymous_namespace'::CreateBreakIterator(local_80,param_1,0);
      local_120 = (longlong *)plVar17[1];
      local_128 = *plVar17;
      if (local_120 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_120 + 1) = (int)local_120[1] + 1;
        UNLOCK();
      }
      if (plVar4 != &local_128) {
        *plVar4 = local_128;
        local_128 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x180,&local_120);
      }
      lVar18 = *plVar4;
      bVar15 = true;
      bVar9 = true;
    }
    plVar17 = plStack_170;
    plVar4 = *(longlong **)(param_1 + 0x180);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_d8._0_4_ = (undefined4)lVar18;
    local_30 = (undefined4)local_d8;
    local_d8._4_4_ = (undefined4)((ulonglong)lVar18 >> 0x20);
    uStack_2c = local_d8._4_4_;
    uStack_d0._0_4_ = SUB84(plVar4,0);
    uStack_28 = (undefined4)uStack_d0;
    uStack_d0._4_4_ = (undefined4)((ulonglong)plVar4 >> 0x20);
    uStack_24 = uStack_d0._4_4_;
    local_d8 = local_178;
    uStack_d0 = plStack_170;
    local_178 = lVar18;
    if (plStack_170 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_170 + 1;
      lVar18 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        puVar6 = (undefined8 *)*plStack_170;
        plStack_170 = plVar4;
        (*(code *)*puVar6)(plVar17);
        LOCK();
        piVar2 = (int *)((longlong)plVar17 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar4 = plStack_170;
        if (iVar5 == 1) {
          (**(code **)(*uStack_d0 + 8))(uStack_d0,1);
          plVar4 = plStack_170;
        }
      }
    }
    plStack_170 = plVar4;
    plVar1 = local_120;
    lVar18 = local_178;
    plVar4 = plStack_170;
    plVar17 = local_78;
    bVar8 = bVar9;
    if ((bVar15) && (local_120 != (longlong *)0x0)) {
      LOCK();
      plVar3 = local_120 + 1;
      lVar16 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*local_120)(local_120);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        lVar18 = local_178;
        plVar4 = plStack_170;
        plVar17 = local_78;
        if (iVar5 == 1) {
          (**(code **)(*local_120 + 8))(local_120,1);
          lVar18 = local_178;
          plVar4 = plStack_170;
          plVar17 = local_78;
        }
      }
    }
  }
  else if (param_3 == 1) {
    plVar4 = (longlong *)(param_1 + 0x188);
    lVar18 = *plVar4;
    if (lVar18 == 0) {
      plVar17 = (longlong *)`anonymous_namespace'::CreateBreakIterator(local_90,param_1,1);
      local_130 = (longlong *)plVar17[1];
      local_138 = *plVar17;
      if (local_130 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_130 + 1) = (int)local_130[1] + 1;
        UNLOCK();
      }
      if (plVar4 != &local_138) {
        *plVar4 = local_138;
        local_138 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 400,&local_130);
      }
      lVar18 = *plVar4;
      bVar14 = true;
      bVar13 = true;
    }
    plVar17 = plStack_170;
    plVar4 = *(longlong **)(param_1 + 400);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_e8._0_4_ = (undefined4)lVar18;
    local_40 = (undefined4)local_e8;
    local_e8._4_4_ = (undefined4)((ulonglong)lVar18 >> 0x20);
    uStack_3c = local_e8._4_4_;
    uStack_e0._0_4_ = SUB84(plVar4,0);
    uStack_38 = (undefined4)uStack_e0;
    uStack_e0._4_4_ = (undefined4)((ulonglong)plVar4 >> 0x20);
    uStack_34 = uStack_e0._4_4_;
    local_e8 = local_178;
    uStack_e0 = plStack_170;
    local_178 = lVar18;
    if (plStack_170 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_170 + 1;
      lVar18 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        puVar6 = (undefined8 *)*plStack_170;
        plStack_170 = plVar4;
        (*(code *)*puVar6)(plVar17);
        LOCK();
        piVar2 = (int *)((longlong)plVar17 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar4 = plStack_170;
        if (iVar5 == 1) {
          (**(code **)(*uStack_e0 + 8))(uStack_e0,1);
          plVar4 = plStack_170;
        }
      }
    }
    plStack_170 = plVar4;
    plVar1 = local_130;
    lVar18 = local_178;
    plVar4 = plStack_170;
    plVar17 = local_88;
    bVar8 = bVar14;
    if ((bVar13) && (local_130 != (longlong *)0x0)) {
      LOCK();
      plVar3 = local_130 + 1;
      lVar16 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*local_130)(local_130);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        lVar18 = local_178;
        plVar4 = plStack_170;
        plVar17 = local_88;
        if (iVar5 == 1) {
          (**(code **)(*local_130 + 8))(local_130,1);
          lVar18 = local_178;
          plVar4 = plStack_170;
          plVar17 = local_88;
        }
      }
    }
  }
  else if (param_3 == 2) {
    plVar4 = (longlong *)(param_1 + 0x198);
    lVar18 = *plVar4;
    if (lVar18 == 0) {
      plVar17 = (longlong *)`anonymous_namespace'::CreateBreakIterator(local_a0,param_1,2);
      local_140 = (longlong *)plVar17[1];
      local_148 = *plVar17;
      if (local_140 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_140 + 1) = (int)local_140[1] + 1;
        UNLOCK();
      }
      if (plVar4 != &local_148) {
        *plVar4 = local_148;
        local_148 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1a0,&local_140);
      }
      lVar18 = *plVar4;
      bVar12 = true;
      bVar11 = true;
    }
    plVar17 = plStack_170;
    plVar4 = *(longlong **)(param_1 + 0x1a0);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_f8._0_4_ = (undefined4)lVar18;
    local_50 = (undefined4)local_f8;
    local_f8._4_4_ = (undefined4)((ulonglong)lVar18 >> 0x20);
    uStack_4c = local_f8._4_4_;
    uStack_f0._0_4_ = SUB84(plVar4,0);
    uStack_48 = (undefined4)uStack_f0;
    uStack_f0._4_4_ = (undefined4)((ulonglong)plVar4 >> 0x20);
    uStack_44 = uStack_f0._4_4_;
    local_f8 = local_178;
    uStack_f0 = plStack_170;
    local_178 = lVar18;
    if (plStack_170 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_170 + 1;
      lVar18 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        puVar6 = (undefined8 *)*plStack_170;
        plStack_170 = plVar4;
        (*(code *)*puVar6)(plVar17);
        LOCK();
        piVar2 = (int *)((longlong)plVar17 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar4 = plStack_170;
        if (iVar5 == 1) {
          (**(code **)(*uStack_f0 + 8))(uStack_f0,1);
          plVar4 = plStack_170;
        }
      }
    }
    plStack_170 = plVar4;
    plVar1 = local_140;
    lVar18 = local_178;
    plVar4 = plStack_170;
    plVar17 = local_98;
    bVar8 = bVar12;
    if ((bVar11) && (local_140 != (longlong *)0x0)) {
      LOCK();
      plVar3 = local_140 + 1;
      lVar16 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*local_140)(local_140);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        lVar18 = local_178;
        plVar4 = plStack_170;
        plVar17 = local_98;
        if (iVar5 == 1) {
          (**(code **)(*local_140 + 8))(local_140,1);
          lVar18 = local_178;
          plVar4 = plStack_170;
          plVar17 = local_98;
        }
      }
    }
  }
  else if (param_3 == 3) {
    plVar4 = (longlong *)(param_1 + 0x1a8);
    lVar18 = *plVar4;
    if (lVar18 == 0) {
      plVar17 = (longlong *)`anonymous_namespace'::CreateBreakIterator(local_b0,param_1,3);
      local_150 = plVar17[1];
      local_158 = *plVar17;
      if (local_150 != 0) {
        LOCK();
        *(int *)(local_150 + 8) = *(int *)(local_150 + 8) + 1;
        UNLOCK();
      }
      if (plVar4 != &local_158) {
        *plVar4 = local_158;
        local_158 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1b0,&local_150);
      }
      lVar18 = *plVar4;
      bVar10 = true;
    }
    plVar1 = plStack_170;
    plVar4 = *(longlong **)(param_1 + 0x1b0);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_108._0_4_ = (undefined4)lVar18;
    local_60 = (undefined4)local_108;
    local_108._4_4_ = (undefined4)((ulonglong)lVar18 >> 0x20);
    uStack_5c = local_108._4_4_;
    uStack_100._0_4_ = SUB84(plVar4,0);
    uStack_58 = (undefined4)uStack_100;
    uStack_100._4_4_ = (undefined4)((ulonglong)plVar4 >> 0x20);
    uStack_54 = uStack_100._4_4_;
    local_108 = local_178;
    uStack_100 = plStack_170;
    plVar17 = local_a8;
    bVar8 = bVar10;
    if (plStack_170 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_170 + 1;
      lVar16 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        puVar6 = (undefined8 *)*plStack_170;
        local_178 = lVar18;
        plStack_170 = plVar4;
        (*(code *)*puVar6)(plVar1);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        lVar18 = local_178;
        plVar4 = plStack_170;
        plVar17 = local_a8;
        if (iVar5 == 1) {
          (**(code **)(*uStack_100 + 8))(uStack_100,1);
          lVar18 = local_178;
          plVar4 = plStack_170;
          plVar17 = local_a8;
        }
      }
    }
  }
  else {
    if (param_3 != 4) goto LAB_1415d8cf7;
    plVar4 = (longlong *)(param_1 + 0x1b8);
    lVar18 = *plVar4;
    if (lVar18 == 0) {
      plVar17 = (longlong *)`anonymous_namespace'::CreateBreakIterator(local_c0,param_1,4);
      local_160 = (longlong *)plVar17[1];
      local_168 = *plVar17;
      if (local_160 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_160 + 1) = (int)local_160[1] + 1;
        UNLOCK();
      }
      if (plVar4 != &local_168) {
        *plVar4 = local_168;
        local_168 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1c0,&local_160);
      }
      lVar18 = *plVar4;
      bVar8 = true;
      bVar7 = true;
    }
    plVar17 = plStack_170;
    plVar4 = *(longlong **)(param_1 + 0x1c0);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_118._0_4_ = (undefined4)lVar18;
    local_70 = (undefined4)local_118;
    local_118._4_4_ = (undefined4)((ulonglong)lVar18 >> 0x20);
    uStack_6c = local_118._4_4_;
    uStack_110._0_4_ = SUB84(plVar4,0);
    uStack_68 = (undefined4)uStack_110;
    uStack_110._4_4_ = (undefined4)((ulonglong)plVar4 >> 0x20);
    uStack_64 = uStack_110._4_4_;
    local_118 = local_178;
    uStack_110 = plStack_170;
    local_178 = lVar18;
    if (plStack_170 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_170 + 1;
      lVar18 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        puVar6 = (undefined8 *)*plStack_170;
        plStack_170 = plVar4;
        (*(code *)*puVar6)(plVar17);
        LOCK();
        piVar2 = (int *)((longlong)plVar17 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar4 = plStack_170;
        if (iVar5 == 1) {
          (**(code **)(*uStack_110 + 8))(uStack_110,1);
          plVar4 = plStack_170;
        }
      }
    }
    plStack_170 = plVar4;
    plVar1 = local_160;
    lVar18 = local_178;
    plVar4 = plStack_170;
    plVar17 = local_b8;
    if ((bVar7) && (local_160 != (longlong *)0x0)) {
      LOCK();
      plVar3 = local_160 + 1;
      lVar16 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*local_160)(local_160);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        lVar18 = local_178;
        plVar4 = plStack_170;
        plVar17 = local_b8;
        if (iVar5 == 1) {
          (**(code **)(*local_160 + 8))(local_160,1);
          lVar18 = local_178;
          plVar4 = plStack_170;
          plVar17 = local_b8;
        }
      }
    }
  }
  plStack_170 = plVar4;
  local_178 = lVar18;
  if ((bVar8) && (plVar17 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plVar17 + 1;
    lVar18 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar2 = (int *)((longlong)plVar17 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar17 + 8))(plVar17,1);
      }
    }
  }
LAB_1415d8cf7:
  plVar4 = plStack_170;
  *param_2 = local_178;
  param_2[1] = (longlong)plStack_170;
  if (plStack_170 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_170 + 1) = (int)plStack_170[1] + 1;
    UNLOCK();
    LOCK();
    plVar17 = plStack_170 + 1;
    lVar18 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plStack_170)(plStack_170);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plStack_170 + 8))(plStack_170,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1415d8d70 GetCacheIndex body=50 status=ok
// SIG undefined GetCacheIndex(void)

uint FCachedFileHandle::GetCacheIndex(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  
  uVar2 = 0;
  plVar1 = (longlong *)(param_1 + 0x20040);
  while ((param_2 < plVar1[-2] || (*plVar1 <= param_2))) {
    uVar2 = uVar2 + 1;
    plVar1 = plVar1 + 1;
    if (1 < uVar2) {
      return 3;
    }
  }
  return uVar2;
}



// FUNCTION 1415d8db0 Memcpy body=23 status=ok
// SIG undefined Memcpy(void)

undefined8 FGenericPlatformString::Memcpy(undefined8 param_1)

{
  FUN_1415d8dd0();
  return param_1;
}



// FUNCTION 1415d8dd0 FUN_1415d8dd0 body=4623 status=ok
// SIG undefined FUN_1415d8dd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1415d8dd0(longlong *param_1,undefined8 param_2)

{
  void *pvVar1;
  byte bVar2;
  undefined4 uVar3;
  short *psVar4;
  void *pvVar5;
  longlong *plVar6;
  undefined4 uVar7;
  wchar_t wVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  longlong lVar12;
  int iVar13;
  wchar_t *pwVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int *piVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined1 uVar26;
  wchar_t *pwVar27;
  undefined2 *puVar28;
  undefined8 *puVar29;
  longlong *plVar30;
  longlong *plVar31;
  undefined8 *puVar32;
  undefined1 auStack_208 [32];
  undefined4 local_1e8;
  wchar_t *local_1d8;
  undefined8 local_1d0;
  wchar_t *local_1c8;
  undefined8 local_1c0;
  wchar_t *local_1b8;
  undefined8 local_1b0;
  uint local_1a8;
  undefined1 local_1a4 [4];
  wchar_t *local_1a0;
  ulonglong local_198;
  longlong *local_190;
  ulonglong local_188;
  ulonglong local_180;
  wchar_t *local_178;
  undefined8 local_170;
  longlong *local_168;
  wchar_t *local_160;
  wchar_t *local_158;
  undefined *local_150;
  undefined1 local_148 [96];
  undefined1 *local_e8;
  undefined8 local_e0;
  undefined8 local_d8 [16];
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  piVar20 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  local_168 = param_1;
  if ((*piVar20 < DAT_1468b53c0) && (_Init_thread_header(&DAT_1468b53c0), DAT_1468b53c0 == -1)) {
    <lambda_baddde5aeda862e686966c7b19c511e7>::operator()(local_1a4,&DAT_1468b53b0);
    atexit((_func_5014 *)&LAB_143e78290);
    _Init_thread_footer(&DAT_1468b53c0);
  }
  pwVar14 = (wchar_t *)0x0;
  if ((*piVar20 < DAT_1468b53d8) && (_Init_thread_header(&DAT_1468b53d8), DAT_1468b53d8 == -1)) {
    DAT_1468b53c8 = 0;
    local_158 = L"currency";
    _DAT_1468b53d0 = 0;
    local_150 = &DAT_144cb1530;
    local_160 = (wchar_t *)0x0;
    local_1c8 = (wchar_t *)0x0;
    local_1c0 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0);
    FGenericPlatformString::Memcpy(local_1c8,L"EURO",10);
    TSortedMap<FString,`FCulture::FICUCultureImplementation::GetCanonicalName'::`2'::FCanonizedTagData,FDefaultAllocator,TLess<FString>_>
    ::
    Emplace<FString,_FCulture::FICUCultureImplementation::GetCanonicalName_::_2_::FCanonizedTagData>
              (&DAT_1468b53c8,&local_1c8,&local_160);
    pwVar27 = local_1c8;
    if (local_1c8 != (wchar_t *)0x0) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,pwVar27);
    }
    atexit((_func_5014 *)&LAB_143e78570);
    _Init_thread_footer(&DAT_1468b53d8);
  }
  ICUUtilities::SanitizeCultureCode(&local_160,param_2);
  iVar10 = (int)local_158;
  local_e8 = (undefined1 *)0x0;
  local_e0 = 0;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  local_1b8 = (wchar_t *)0x0;
  local_180 = 0xffffffffffffffff;
  local_1b0 = 0;
  local_178 = (wchar_t *)0x0;
  local_170 = 0;
  for (pwVar27 = local_160; pwVar27 != local_160 + iVar10; pwVar27 = pwVar27 + 1) {
    if (*pwVar27 == L'@') {
      iVar18 = (int)((longlong)pwVar27 - (longlong)local_160 >> 1);
      goto LAB_1415d8eb1;
    }
  }
  iVar18 = -1;
LAB_1415d8eb1:
  iVar15 = 0;
  for (pwVar27 = local_160; pwVar27 != local_160 + iVar10; pwVar27 = pwVar27 + 1) {
    if (*pwVar27 == L'.') {
      iVar9 = (int)((longlong)pwVar27 - (longlong)local_160 >> 1);
      if (iVar9 != -1) goto LAB_1415d8ef0;
      break;
    }
  }
  iVar9 = iVar10 + -1;
  if (iVar10 == 0) {
    iVar9 = iVar15;
  }
LAB_1415d8ef0:
  iVar13 = iVar18;
  if ((iVar18 == -1) && (iVar13 = iVar15, iVar10 != 0)) {
    iVar13 = iVar10 + -1;
  }
  if (iVar13 <= iVar9) {
    iVar9 = iVar13;
  }
  if (iVar10 == 0) {
    local_1a0 = L"";
  }
  else {
    local_1a0 = local_160;
    iVar15 = iVar10 + -1;
  }
  if (iVar9 < 0) {
    iVar15 = 0;
  }
  else if (iVar9 < iVar15) {
    iVar15 = iVar9;
  }
  local_1c8 = (wchar_t *)0x0;
  iVar9 = iVar15 + 1;
  if (iVar15 == 0) {
    iVar9 = 0;
  }
  local_1c0._4_4_ = 0;
  local_1c0._0_4_ = iVar9;
  if ((0 < iVar9) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0), iVar9 = (int)local_1c0,
     pwVar14 = local_1c8, 0 < (int)local_1c0)) {
    wcsncpy(local_1c8,local_1a0,(longlong)iVar15);
    pwVar14[iVar15] = L'\0';
  }
  pwVar27 = local_1b8;
  if (local_1b8 != (wchar_t *)0x0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,pwVar27);
  }
  local_1b0 = CONCAT44(local_1c0._4_4_,iVar9);
  local_1b8 = pwVar14;
  FString::ReplaceInline(&local_1b8,&DAT_144caf2c8,&DAT_144caf2c4,0);
  if (iVar18 != -1) {
    pwVar14 = (wchar_t *)0x0;
    iVar15 = 0;
    uVar23 = iVar18 + 0x80000000;
    uVar19 = iVar10 - 1;
    if (iVar10 == 0) {
      uVar19 = 0;
    }
    if (iVar18 + 1U < uVar19) {
      uVar19 = iVar18 + 1U;
    }
    uVar16 = iVar10 - 1;
    if (iVar10 == 0) {
      uVar16 = 0;
    }
    uVar17 = uVar19;
    if ((uVar19 <= uVar23) && (uVar17 = uVar16, uVar23 < uVar16)) {
      uVar17 = uVar23;
    }
    local_1c8 = (wchar_t *)0x0;
    pwVar27 = L"";
    if (iVar10 != 0) {
      pwVar27 = local_160;
    }
    iVar18 = uVar17 - uVar19;
    iVar10 = iVar18 + 1;
    if (iVar18 == 0) {
      iVar10 = iVar15;
    }
    local_1c0._4_4_ = 0;
    local_1c0._0_4_ = iVar10;
    if ((0 < iVar10) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0), iVar15 = local_1c0._4_4_,
       iVar10 = (int)local_1c0, pwVar14 = local_1c8, 0 < (int)local_1c0)) {
      wcsncpy(local_1c8,pwVar27 + (int)uVar19,(longlong)iVar18);
      pwVar14[iVar18] = L'\0';
    }
    pwVar27 = local_178;
    if (local_178 != (wchar_t *)0x0) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,pwVar27);
    }
    local_170 = CONCAT44(iVar15,iVar10);
    local_178 = pwVar14;
  }
  lVar21 = DAT_1468b53b0;
  lVar12 = 0;
  uVar24 = (ulonglong)(int)DAT_1468b53b8;
  iVar10 = 0;
  if ((int)DAT_1468b53b8 != 0) {
    do {
      uVar25 = uVar24 >> 1;
      lVar22 = uVar25 + lVar12;
      pwVar14 = L"";
      if ((int)local_1b0 != 0) {
        pwVar14 = local_1b8;
      }
      if (*(int *)(lVar21 + 8 + lVar22 * 0x28) == 0) {
        puVar28 = &DAT_143f3eda8;
      }
      else {
        puVar28 = *(undefined2 **)(lVar21 + lVar22 * 0x28);
      }
      iVar10 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar28,pwVar14);
      if (iVar10 < 0) {
        lVar12 = (ulonglong)((uint)uVar24 & 1) + lVar22;
      }
      uVar24 = uVar25;
    } while (uVar25 != 0);
    iVar10 = (int)DAT_1468b53b8;
  }
  uVar23 = 0;
  iVar18 = 0;
  iVar15 = (int)lVar12;
  uVar24 = (ulonglong)iVar15;
  if (uVar24 < (ulonglong)(longlong)iVar10) {
    if (*(int *)(DAT_1468b53b0 + 8 + uVar24 * 0x28) == 0) {
      puVar28 = &DAT_143f3eda8;
    }
    else {
      puVar28 = *(undefined2 **)(DAT_1468b53b0 + uVar24 * 0x28);
    }
    pwVar14 = L"";
    if ((int)local_1b0 != 0) {
      pwVar14 = local_1b8;
    }
    iVar10 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(pwVar14,puVar28);
    if (((-1 < iVar10) && (iVar15 != -1)) &&
       (puVar32 = (undefined8 *)(DAT_1468b53b0 + ((longlong)iVar15 * 5 + 2) * 8),
       puVar32 != (undefined8 *)0x0)) {
      pwVar14 = (wchar_t *)*puVar32;
      if (local_1b8 == pwVar14) {
LAB_1415d9244:
        iVar18 = (int)local_1b0;
      }
      else {
        uVar19 = uVar23;
        if ((pwVar14 != (wchar_t *)0x0) && (*pwVar14 != L'\0')) {
          lVar21 = -1;
          do {
            lVar21 = lVar21 + 1;
          } while (pwVar14[lVar21] != L'\0');
          uVar19 = (int)lVar21 + 1;
        }
        uVar16 = local_1b0._4_4_;
        local_1b0 = (ulonglong)local_1b0._4_4_ << 0x20;
        if (uVar16 != uVar19) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_1b8,uVar19);
          iVar18 = (int)local_1b0;
          uVar16 = local_1b0._4_4_;
        }
        iVar18 = iVar18 + uVar19;
        local_1b0 = CONCAT44(local_1b0._4_4_,iVar18);
        if ((int)uVar16 < iVar18) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8);
          iVar18 = (int)local_1b0;
        }
        if (uVar19 != 0) {
          _guard_xfg_dispatch_icall_nop(local_1b8,pwVar14,(longlong)(int)uVar19 * 2);
          goto LAB_1415d9244;
        }
      }
      if ((puVar32[1] == 0) || (psVar4 = (short *)puVar32[2], psVar4 == (short *)0x0))
      goto LAB_1415d9380;
      local_1a0 = (wchar_t *)0x0;
      local_198 = 0;
      if (*psVar4 != 0) {
        lVar21 = -1;
        do {
          lVar21 = lVar21 + 1;
        } while (psVar4[lVar21] != 0);
        uVar19 = (int)lVar21 + 1;
        local_198 = (ulonglong)uVar19;
        if (0 < (int)uVar19) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a0,0);
        }
        FGenericPlatformString::Memcpy(local_1a0,psVar4,(longlong)(int)uVar19 * 2);
      }
      psVar4 = (short *)puVar32[1];
      local_1d8 = (wchar_t *)0x0;
      local_1d0 = 0;
      if ((psVar4 != (short *)0x0) && (*psVar4 != 0)) {
        lVar21 = -1;
        do {
          lVar21 = lVar21 + 1;
        } while (psVar4[lVar21] != 0);
        uVar19 = (int)lVar21 + 1;
        local_1d0 = (ulonglong)uVar19;
        if (0 < (int)uVar19) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d8,0);
        }
        FGenericPlatformString::Memcpy(local_1d8,psVar4,(longlong)(int)uVar19 * 2);
      }
      TSortedMap<FString,FString,TInlineAllocator<4,FDefaultAllocator>,TLess<FString>_>::
      Emplace<FString,FString>(local_d8,&local_1d8,&local_1a0);
      pwVar14 = local_1d8;
      if (local_1d8 != (wchar_t *)0x0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
        }
        (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,pwVar14);
      }
      pwVar14 = local_1a0;
      if (local_1a0 != (wchar_t *)0x0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
        }
        (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,pwVar14);
      }
    }
  }
  iVar18 = (int)local_1b0;
LAB_1415d9380:
  local_1a8 = 0;
  local_1a0 = (wchar_t *)0x0;
  do {
    while( true ) {
      uVar19 = local_1a8;
      uVar17 = 0;
      uVar16 = iVar18 - 1;
      if (iVar18 == 0) {
        uVar16 = uVar17;
      }
      if (((int)uVar16 <= (int)local_1a8) || (local_1b8[(longlong)local_1a0] == L'-')) break;
      local_1a8 = local_1a8 + 1;
      local_1a0 = (wchar_t *)((longlong)local_1a0 + 1);
    }
    uVar16 = iVar18 - 1;
    if (iVar18 == 0) {
      uVar16 = uVar17;
    }
    if (uVar23 < uVar16) {
      uVar16 = uVar23;
    }
    uVar23 = iVar18 - 1;
    if (iVar18 == 0) {
      uVar23 = uVar17;
    }
    uVar17 = uVar16;
    if ((uVar16 <= local_1a8) && (uVar17 = uVar23, local_1a8 < uVar23)) {
      uVar17 = local_1a8;
    }
    local_1d8 = (wchar_t *)0x0;
    pwVar14 = L"";
    if (iVar18 != 0) {
      pwVar14 = local_1b8;
    }
    iVar10 = uVar17 - uVar16;
    uVar23 = iVar10 + 1;
    if (iVar10 == 0) {
      uVar23 = 0;
    }
    local_1d0 = (ulonglong)uVar23;
    if (0 < (int)uVar23) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d8,0);
      pwVar27 = local_1d8;
      uVar23 = (uint)local_1d0;
      if (0 < (int)(uint)local_1d0) {
        wcsncpy(local_1d8,pwVar14 + (int)uVar16,(longlong)iVar10);
        pwVar27[iVar10] = L'\0';
        uVar23 = (uint)local_1d0;
      }
    }
    uVar26 = 3;
    if ((int)local_e0 == 0) {
      uVar26 = 0;
      FString::ToLowerInline(&local_1d8);
LAB_1415d9476:
      uVar24 = local_e0;
      pwVar14 = local_1d8;
      lVar21 = (longlong)(int)local_e0;
      uVar3 = (uint)local_1d0;
      uVar7 = local_1d0._4_4_;
      local_1d8 = (wchar_t *)0x0;
      local_1d0 = 0;
      iVar10 = (int)local_e0 + 1;
      local_e0 = CONCAT44(local_e0._4_4_,iVar10);
      if (local_e0._4_4_ < iVar10) {
        TArray<`FCulture::FICUCultureImplementation::GetCanonicalName'::`2'::FNameTag,TInlineAllocator<4,FDefaultAllocator>_>
        ::ResizeGrow(local_148,uVar24 & 0xffffffff);
      }
      puVar11 = local_148;
      if (local_e8 != (undefined1 *)0x0) {
        puVar11 = local_e8;
      }
      *(wchar_t **)(puVar11 + lVar21 * 0x18) = pwVar14;
      *(undefined4 *)(puVar11 + lVar21 * 0x18 + 0xc) = uVar7;
      *(undefined4 *)(puVar11 + lVar21 * 0x18 + 8) = uVar3;
      puVar11[lVar21 * 0x18 + 0x10] = uVar26;
    }
    else {
      if ((int)local_e0 == 1) {
        puVar11 = local_148;
        if (local_e8 != (undefined1 *)0x0) {
          puVar11 = local_e8;
        }
        if (((puVar11[0x10] != '\0') || (uVar23 == 0)) || (uVar23 != 5)) goto LAB_1415d9867;
        uVar26 = 1;
        FString::ToLowerInline(&local_1d8);
        if (((uint)local_1d0 != 0) && (0 < (int)((uint)local_1d0 + -1))) {
          wVar8 = towupper(*local_1d8);
          *local_1d8 = wVar8;
        }
        goto LAB_1415d9476;
      }
      if ((int)local_e0 < 3) {
LAB_1415d9867:
        puVar11 = local_148;
        if (local_e8 != (undefined1 *)0x0) {
          puVar11 = local_e8;
        }
        if ((((byte)puVar11[(longlong)((int)local_e0 + -1) * 0x18 + 0x10] < 2) && (uVar23 != 0)) &&
           (uVar23 - 3 < 2)) {
          uVar26 = 2;
          FString::ToLowerInline(&local_1d8);
          goto LAB_1415d9476;
        }
      }
      FString::ToLowerInline(&local_1d8);
      lVar21 = DAT_1468b53c8;
      lVar12 = 0;
      uVar24 = (ulonglong)DAT_1468b53d0;
      iVar10 = 0;
      if (DAT_1468b53d0 != 0) {
        do {
          uVar25 = uVar24 >> 1;
          lVar22 = uVar25 + lVar12;
          pwVar14 = L"";
          if ((uint)local_1d0 != 0) {
            pwVar14 = local_1d8;
          }
          if (*(int *)(lVar21 + 8 + lVar22 * 0x28) == 0) {
            puVar28 = &DAT_143f3eda8;
          }
          else {
            puVar28 = *(undefined2 **)(lVar21 + lVar22 * 0x28);
          }
          iVar10 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar28,pwVar14);
          if (iVar10 < 0) {
            lVar12 = (ulonglong)((uint)uVar24 & 1) + lVar22;
          }
          uVar24 = uVar25;
        } while (uVar25 != 0);
        iVar10 = DAT_1468b53d0;
        uVar19 = local_1a8;
      }
      iVar18 = (int)lVar12;
      uVar24 = (ulonglong)iVar18;
      if ((ulonglong)(longlong)iVar10 <= uVar24) goto LAB_1415d9476;
      if (*(int *)(DAT_1468b53c8 + 8 + uVar24 * 0x28) == 0) {
        puVar28 = &DAT_143f3eda8;
      }
      else {
        puVar28 = *(undefined2 **)(DAT_1468b53c8 + uVar24 * 0x28);
      }
      pwVar14 = L"";
      if ((uint)local_1d0 != 0) {
        pwVar14 = local_1d8;
      }
      iVar10 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(pwVar14,puVar28);
      if (((iVar10 < 0) || (iVar18 == -1)) ||
         (lVar21 = DAT_1468b53c8 + ((longlong)iVar18 * 5 + 2) * 8, lVar21 == 0)) goto LAB_1415d9476;
      psVar4 = *(short **)(lVar21 + 0x10);
      local_1c0._0_4_ = 0;
      local_1c0._4_4_ = 0;
      local_1c8 = (wchar_t *)0x0;
      if ((psVar4 != (short *)0x0) && (*psVar4 != 0)) {
        lVar12 = -1;
        do {
          lVar22 = lVar12 + 1;
          lVar12 = lVar12 + 1;
        } while (psVar4[lVar22] != 0);
        iVar10 = (int)lVar12 + 1;
        local_1c0._4_4_ = 0;
        local_1c0._0_4_ = iVar10;
        if (0 < iVar10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0);
        }
        FGenericPlatformString::Memcpy(local_1c8,psVar4,(longlong)iVar10 * 2);
      }
      psVar4 = *(short **)(lVar21 + 8);
      local_190 = (longlong *)0x0;
      local_188 = 0;
      if ((psVar4 != (short *)0x0) && (*psVar4 != 0)) {
        lVar21 = -1;
        do {
          lVar12 = lVar21 + 1;
          lVar21 = lVar21 + 1;
        } while (psVar4[lVar12] != 0);
        uVar23 = (int)lVar21 + 1;
        local_188 = (ulonglong)uVar23;
        if (0 < (int)uVar23) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_190,0);
        }
        FGenericPlatformString::Memcpy(local_190,psVar4,(longlong)(int)uVar23 * 2);
      }
      TSortedMap<FString,FString,TInlineAllocator<4,FDefaultAllocator>,TLess<FString>_>::
      Emplace<FString,FString>(local_d8,&local_190,&local_1c8);
      plVar31 = local_190;
      if (local_190 != (longlong *)0x0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
        }
        (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,plVar31);
      }
      pwVar14 = local_1c8;
      if (local_1c8 != (wchar_t *)0x0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
        }
        (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,pwVar14);
      }
    }
    pwVar14 = local_1d8;
    if (local_1d8 != (wchar_t *)0x0) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,pwVar14);
    }
    local_1a8 = uVar19 + 1;
    local_1a0 = (wchar_t *)((longlong)local_1a0 + 1);
    iVar10 = (int)local_1b0 + -1;
    if ((int)local_1b0 == 0) {
      iVar10 = 0;
    }
    iVar18 = (int)local_1b0;
    uVar23 = local_1a8;
  } while ((int)local_1a8 < iVar10);
  local_190 = (longlong *)0x0;
  local_188 = 0;
  FUN_141594550(&local_178,&local_190,&DAT_144caf2cc,1);
  plVar30 = local_190 + (longlong)(int)local_188 * 2;
  plVar6 = local_168;
  for (plVar31 = local_190; local_168 = plVar6, plVar31 != plVar30; plVar31 = plVar31 + 2) {
    pwVar14 = (wchar_t *)*plVar31;
    iVar10 = (int)plVar31[1];
    for (pwVar27 = pwVar14; pwVar27 != pwVar14 + iVar10; pwVar27 = pwVar27 + 1) {
      if (*pwVar27 == L'=') {
        iVar18 = (int)((longlong)pwVar27 - (longlong)pwVar14 >> 1);
        if (iVar18 != -1) {
          pwVar27 = L"";
          if (iVar10 != 0) {
            pwVar27 = pwVar14;
          }
          iVar15 = iVar10 + -1;
          if (iVar10 == 0) {
            iVar15 = 0;
          }
          if (iVar18 < 0) {
            iVar15 = 0;
          }
          else if (iVar18 < iVar15) {
            iVar15 = iVar18;
          }
          local_1d8 = (wchar_t *)0x0;
          uVar23 = iVar15 + 1;
          if (iVar15 == 0) {
            uVar23 = 0;
          }
          local_1d0 = (ulonglong)uVar23;
          if (0 < (int)uVar23) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d8,0);
            pwVar14 = local_1d8;
            if (0 < (int)(uint)local_1d0) {
              wcsncpy(local_1d8,pwVar27,(longlong)iVar15);
              pwVar14[iVar15] = L'\0';
            }
          }
          FString::ToLowerInline(&local_1d8);
          iVar10 = (int)plVar31[1];
          uVar19 = iVar18 + 0x80000000;
          uVar23 = iVar10 - 1;
          if (iVar10 == 0) {
            uVar23 = 0;
          }
          uVar16 = iVar10 - 1;
          if (iVar18 + 1U < uVar23) {
            uVar23 = iVar18 + 1U;
          }
          if (iVar10 == 0) {
            uVar16 = 0;
          }
          uVar17 = uVar23;
          if ((uVar23 <= uVar19) && (uVar17 = uVar16, uVar19 < uVar16)) {
            uVar17 = uVar19;
          }
          if (iVar10 == 0) {
            puVar28 = &DAT_143f3eda8;
          }
          else {
            puVar28 = (undefined2 *)*plVar31;
          }
          iVar10 = uVar17 - uVar23;
          local_1c8 = (wchar_t *)0x0;
          local_1c0._0_4_ = iVar10 + 1;
          if (iVar10 == 0) {
            local_1c0._0_4_ = 0;
          }
          local_1c0._4_4_ = 0;
          if ((0 < (int)local_1c0) &&
             (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0), pwVar14 = local_1c8,
             0 < (int)local_1c0)) {
            wcsncpy(local_1c8,puVar28 + (int)uVar23,(longlong)iVar10);
            pwVar14[iVar10] = L'\0';
          }
          TSortedMap<FString,FString,TInlineAllocator<4,FDefaultAllocator>,TLess<FString>_>::
          Emplace<FString,FString>(local_d8,&local_1d8,&local_1c8);
          pwVar14 = local_1c8;
          if (local_1c8 != (wchar_t *)0x0) {
            if (DAT_1468c2208 == (longlong *)0x0) {
              FUN_1415d7ea0();
            }
            (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,pwVar14);
          }
          pwVar14 = local_1d8;
          if (local_1d8 != (wchar_t *)0x0) {
            if (DAT_1468c2208 == (longlong *)0x0) {
              FUN_1415d7ea0();
            }
            (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,pwVar14);
          }
          goto LAB_1415d961b;
        }
        break;
      }
    }
    FString::ToLowerInline(plVar31);
    uVar24 = local_e0;
    lVar21 = *plVar31;
    *plVar31 = 0;
    lVar12 = plVar31[1];
    uVar3 = *(undefined4 *)((longlong)plVar31 + 0xc);
    plVar31[1] = 0;
    lVar22 = (longlong)(int)local_e0;
    iVar10 = (int)local_e0 + 1;
    local_e0 = CONCAT44(local_e0._4_4_,iVar10);
    if (local_e0._4_4_ < iVar10) {
      TArray<`FCulture::FICUCultureImplementation::GetCanonicalName'::`2'::FNameTag,TInlineAllocator<4,FDefaultAllocator>_>
      ::ResizeGrow(local_148,uVar24 & 0xffffffff);
    }
    puVar11 = local_148;
    if (local_e8 != (undefined1 *)0x0) {
      puVar11 = local_e8;
    }
    *(longlong *)(puVar11 + lVar22 * 0x18) = lVar21;
    *(int *)(puVar11 + lVar22 * 0x18 + 8) = (int)lVar12;
    *(undefined4 *)(puVar11 + lVar22 * 0x18 + 0xc) = uVar3;
    puVar11[lVar22 * 0x18 + 0x10] = 3;
LAB_1415d961b:
    plVar6 = local_168;
  }
  lVar21 = 0;
  TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(&local_190);
  pwVar14 = local_178;
  if (local_178 != (wchar_t *)0x0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,pwVar14);
  }
  pwVar14 = local_1b8;
  if (local_1b8 != (wchar_t *)0x0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,pwVar14);
  }
  *plVar6 = 0;
  plVar6[1] = 0;
  if (0 < (int)local_e0) {
    uVar24 = 0xffffffffffffffff;
    do {
      iVar10 = (int)uVar24;
      puVar11 = local_148;
      if (local_e8 != (undefined1 *)0x0) {
        puVar11 = local_e8;
      }
      bVar2 = puVar11[lVar21 + 0x10];
      plVar31 = (longlong *)(puVar11 + lVar21);
      if (bVar2 == 0) {
        if (plVar6 != plVar31) {
          local_1e8 = 0;
          TArray<wchar_t,FDefaultAllocator>::CopyToEmpty<wchar_t>
                    (plVar6,*plVar31,(int)plVar31[1],*(undefined4 *)((longlong)plVar6 + 0xc));
          goto LAB_1415d9c7b;
        }
      }
      else {
        if (2 < bVar2) {
          if (bVar2 != 3) goto LAB_1415d9c7f;
          if ((((-1 < iVar10) && (iVar10 < (int)local_e0)) && (puVar11[lVar21 + -8] == '\0')) &&
             (1 < (int)plVar31[1])) {
            iVar10 = (int)plVar6[1];
            iVar18 = iVar10 + -1;
            if (iVar10 < 1) {
              iVar18 = 0;
            }
            iVar10 = (iVar10 < 1) + 1 + iVar10;
            *(int *)(plVar6 + 1) = iVar10;
            if (*(int *)((longlong)plVar6 + 0xc) < iVar10) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar6);
            }
            *(undefined2 *)(*plVar6 + (longlong)iVar18 * 2) = 0x2d;
            *(undefined2 *)(*plVar6 + 2 + (longlong)iVar18 * 2) = 0;
          }
        }
        iVar10 = (int)plVar6[1];
        iVar18 = iVar10 + -1;
        if (iVar10 < 1) {
          iVar18 = 0;
        }
        iVar10 = (iVar10 < 1) + 1 + iVar10;
        *(int *)(plVar6 + 1) = iVar10;
        if (*(int *)((longlong)plVar6 + 0xc) < iVar10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar6);
        }
        *(undefined2 *)(*plVar6 + (longlong)iVar18 * 2) = 0x2d;
        *(undefined2 *)(*plVar6 + 2 + (longlong)iVar18 * 2) = 0;
        iVar10 = (int)plVar31[1] + -1;
        if ((int)plVar31[1] == 0) {
          iVar10 = 0;
        }
        pvVar5 = (void *)*plVar31;
        if (iVar10 != 0) {
          iVar18 = (int)plVar6[1];
          iVar15 = (uint)(iVar18 == 0) + iVar10 + iVar18;
          *(int *)(plVar6 + 1) = iVar15;
          if (*(int *)((longlong)plVar6 + 0xc) < iVar15) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar6,iVar18);
          }
          pvVar1 = (void *)(*plVar6 + ((longlong)iVar18 - (ulonglong)(iVar18 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar1,pvVar5,(longlong)iVar10 * 2);
          *(undefined2 *)((longlong)iVar10 * 2 + (longlong)pvVar1) = 0;
        }
LAB_1415d9c7b:
        iVar10 = (int)local_180;
      }
LAB_1415d9c7f:
      uVar24 = (ulonglong)(iVar10 + 1);
      lVar21 = lVar21 + 0x18;
      local_180 = uVar24;
    } while (iVar10 + 2 < (int)local_e0);
  }
  if (0 < (int)local_50) {
    puVar32 = local_d8;
    if (local_58 != (undefined8 *)0x0) {
      puVar32 = local_58;
    }
    puVar29 = puVar32 + (longlong)(int)local_50 * 4;
    uVar23 = 0x40;
    for (; puVar32 != puVar29; puVar32 = puVar32 + 4) {
      iVar10 = (int)plVar6[1];
      iVar18 = iVar10 + -1;
      if (iVar10 < 1) {
        iVar18 = 0;
      }
      iVar10 = (iVar10 < 1) + 1 + iVar10;
      *(int *)(plVar6 + 1) = iVar10;
      if (*(int *)((longlong)plVar6 + 0xc) < iVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar6);
      }
      local_1a8 = CONCAT22(local_1a8._2_2_,0x3b);
      *(short *)(*plVar6 + (longlong)iVar18 * 2) = (short)uVar23;
      *(undefined2 *)(*plVar6 + 2 + (longlong)iVar18 * 2) = 0;
      pvVar5 = (void *)*puVar32;
      iVar10 = *(int *)(puVar32 + 1) + -1;
      if (*(int *)(puVar32 + 1) == 0) {
        iVar10 = 0;
      }
      if (iVar10 != 0) {
        iVar18 = (int)plVar6[1];
        iVar15 = (uint)(iVar18 == 0) + iVar18 + iVar10;
        *(int *)(plVar6 + 1) = iVar15;
        if (*(int *)((longlong)plVar6 + 0xc) < iVar15) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar6,iVar18);
        }
        pvVar1 = (void *)(*plVar6 + ((longlong)iVar18 - (ulonglong)(iVar18 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar5,(longlong)iVar10 * 2);
        *(undefined2 *)((longlong)iVar10 * 2 + (longlong)pvVar1) = 0;
      }
      iVar10 = (int)plVar6[1];
      iVar18 = iVar10 + -1;
      if (iVar10 < 1) {
        iVar18 = 0;
      }
      iVar10 = (iVar10 < 1) + 1 + iVar10;
      *(int *)(plVar6 + 1) = iVar10;
      if (*(int *)((longlong)plVar6 + 0xc) < iVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar6);
      }
      *(undefined2 *)(*plVar6 + (longlong)iVar18 * 2) = 0x3d;
      *(undefined2 *)(*plVar6 + 2 + (longlong)iVar18 * 2) = 0;
      pvVar5 = (void *)puVar32[2];
      iVar10 = *(int *)(puVar32 + 3) + -1;
      if (*(int *)(puVar32 + 3) == 0) {
        iVar10 = 0;
      }
      if (iVar10 != 0) {
        iVar18 = (int)plVar6[1];
        iVar15 = (uint)(iVar18 == 0) + iVar18 + iVar10;
        *(int *)(plVar6 + 1) = iVar15;
        if (*(int *)((longlong)plVar6 + 0xc) < iVar15) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar6,iVar18);
        }
        pvVar1 = (void *)(*plVar6 + ((longlong)iVar18 - (ulonglong)(iVar18 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar5,(longlong)iVar10 * 2);
        *(undefined2 *)((longlong)iVar10 * 2 + (longlong)pvVar1) = 0;
      }
      uVar23 = local_1a8;
    }
  }
  TArray<TTuple<FString,FString>,TInlineAllocator<4,FDefaultAllocator>_>::
  ~TArray<TTuple<FString,FString>,TInlineAllocator<4,FDefaultAllocator>_>(local_d8);
  puVar11 = local_148;
  iVar10 = (int)local_e0;
  if (local_e8 != (undefined1 *)0x0) {
    puVar11 = local_e8;
  }
  for (; iVar10 != 0; iVar10 = iVar10 + -1) {
    FUN_140591050(puVar11);
    puVar11 = puVar11 + 0x18;
  }
  TInlineAllocator<4,FDefaultAllocator>::
  ForElementType<`FCulture::FICUCultureImplementation::GetCanonicalName'::`2'::FNameTag>::
  ~ForElementType<_FCulture::FICUCultureImplementation::GetCanonicalName_::_2_::FNameTag>(local_148)
  ;
  TArray<wchar_t,FDefaultAllocator>::~TArray<wchar_t,FDefaultAllocator>(&local_160);
  return plVar6;
}



// FUNCTION 1415d9fe0 FUN_1415d9fe0 body=380 status=ok
// SIG undefined FUN_1415d9fe0(void)

undefined8 * FUN_1415d9fe0(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  wchar_t *_Dest;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  undefined2 *puVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  undefined4 local_res8 [4];
  
  lVar2 = *param_1;
  uVar11 = 0;
  plVar3 = *(longlong **)(lVar2 + 0x30);
  plVar7 = plVar3;
  uVar5 = uVar11;
  uVar6 = uVar11;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar9 = (int)plVar3[1];
    bVar13 = iVar9 == 0;
    if (bVar13) {
      *(int *)(plVar3 + 1) = 0;
      iVar9 = 0;
    }
    UNLOCK();
    while (plVar7 = (longlong *)0x0, !bVar13) {
      LOCK();
      bVar13 = iVar9 == (int)plVar3[1];
      if (bVar13) {
        *(int *)(plVar3 + 1) = iVar9 + 1;
      }
      UNLOCK();
      if (bVar13) {
        plVar7 = plVar3;
        if ((plVar3 != (longlong *)0x0) &&
           (plVar4 = *(longlong **)(lVar2 + 0x28), plVar4 != (longlong *)0x0)) {
          local_res8[0] = 0;
          uVar5 = (**(code **)(*plVar4 + 0x70))(plVar4,param_3,local_res8);
          uVar6 = (**(code **)(*plVar4 + 0x90))(plVar4,param_3,local_res8);
        }
        break;
      }
      LOCK();
      iVar9 = (int)plVar3[1];
      bVar13 = iVar9 == 0;
      if (bVar13) {
        *(int *)(plVar3 + 1) = 0;
        iVar9 = 0;
      }
      UNLOCK();
    }
  }
  if ((int)uVar5 < 1) {
    uVar5 = uVar11;
  }
  iVar9 = *(int *)(*param_1 + 0x40);
  if ((int)uVar6 <= (int)uVar5) {
    uVar6 = uVar5;
  }
  uVar11 = iVar9 - 1;
  if (iVar9 == 0) {
    uVar11 = 0xffffffff;
  }
  uVar12 = 0;
  if (iVar9 == 0) {
    uVar11 = uVar12;
  }
  if (uVar5 < uVar11) {
    uVar11 = uVar5;
  }
  uVar5 = iVar9 - 1;
  if (iVar9 == 0) {
    uVar5 = uVar12;
  }
  uVar8 = uVar11;
  if ((uVar11 <= uVar6) && (uVar8 = uVar5, uVar6 < uVar5)) {
    uVar8 = uVar6;
  }
  if (iVar9 == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = *(undefined2 **)(*param_1 + 0x38);
  }
  iVar9 = uVar8 - uVar11;
  *param_2 = 0;
  *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  uVar6 = iVar9 + 1;
  if (iVar9 == 0) {
    uVar6 = uVar12;
  }
  *(uint *)(param_2 + 1) = uVar6;
  if ((0 < (int)uVar6) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0), 0 < *(int *)(param_2 + 1))) {
    _Dest = (wchar_t *)*param_2;
    wcsncpy(_Dest,puVar10 + (int)uVar11,(longlong)iVar9);
    _Dest[iVar9] = L'\0';
  }
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
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1415da160 FUN_1415da160 body=167 status=ok
// SIG undefined FUN_1415da160(void)

undefined4 FUN_1415da160(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined4 local_res8 [2];
  
  lVar2 = *param_1;
  local_res8[0] = 0;
  plVar3 = *(longlong **)(lVar2 + 0x30);
  uVar7 = 0xffffffff;
  plVar6 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar8 = iVar5 == 0;
    if (bVar8) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar6 = (longlong *)0x0, !bVar8) {
      LOCK();
      bVar8 = iVar5 == (int)plVar3[1];
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar6 = plVar3;
        if ((plVar3 != (longlong *)0x0) &&
           (plVar4 = *(longlong **)(lVar2 + 0x28), plVar4 != (longlong *)0x0)) {
          uVar7 = (**(code **)(*plVar4 + 0x70))(plVar4,param_2,local_res8);
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar6 + 1;
    lVar2 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar6)(plVar6);
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
  return uVar7;
}



// FUNCTION 1415da210 FUN_1415da210 body=170 status=ok
// SIG undefined FUN_1415da210(void)

undefined4 FUN_1415da210(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined4 local_res8 [2];
  
  lVar2 = *param_1;
  local_res8[0] = 0;
  plVar3 = *(longlong **)(lVar2 + 0x30);
  uVar7 = 0xffffffff;
  plVar6 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar8 = iVar5 == 0;
    if (bVar8) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar6 = (longlong *)0x0, !bVar8) {
      LOCK();
      bVar8 = iVar5 == (int)plVar3[1];
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar6 = plVar3;
        if ((plVar3 != (longlong *)0x0) &&
           (plVar4 = *(longlong **)(lVar2 + 0x28), plVar4 != (longlong *)0x0)) {
          uVar7 = (**(code **)(*plVar4 + 0x90))(plVar4,param_2,local_res8);
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar6 + 1;
    lVar2 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar6)(plVar6);
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
  return uVar7;
}



// FUNCTION 1415da2c0 FUN_1415da2c0 body=757 status=ok
// SIG undefined FUN_1415da2c0(void)

longlong * FUN_1415da2c0(longlong param_1,longlong *param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 local_res8 [2];
  undefined4 local_res20 [2];
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  
  plVar9 = (longlong *)0x0;
  plVar7 = (longlong *)(param_1 + 0x1c8);
  if (*plVar7 == 0) {
    local_res8[0] = 0;
    lVar5 = FUN_143b35ce0(param_1,local_res8);
    plVar6 = (longlong *)operator_new(0x18);
    local_40 = plVar9;
    if (plVar6 != (longlong *)0x0) {
      *(undefined4 *)(plVar6 + 1) = 1;
      *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
      *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
      plVar6[2] = lVar5;
      local_40 = plVar6;
    }
    local_48 = lVar5;
    SharedPointerInternals::EnableSharedFromThis(&local_48,lVar5,lVar5);
    plVar6 = local_40;
    lVar5 = local_48;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_40 + 1;
        lVar4 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
    }
    local_68 = lVar5;
    local_60 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    if (plVar7 != &local_68) {
      *plVar7 = lVar5;
      local_68 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1d0,&local_60);
    }
    plVar8 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_60 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar6 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
  plVar6 = *(longlong **)(param_1 + 0x1d0);
  plVar7 = (longlong *)*plVar7;
  local_res20[0] = 0;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  if (param_3 == 0) {
    *param_2 = (longlong)plVar7;
    param_2[1] = (longlong)plVar6;
    if (plVar6 == (longlong *)0x0) {
      return param_2;
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  else {
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x20))();
    local_58 = plVar7;
    plVar8 = (longlong *)operator_new(0x18);
    local_50 = plVar9;
    if (plVar8 != (longlong *)0x0) {
      *(undefined4 *)(plVar8 + 1) = 1;
      *plVar8 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
      plVar8[2] = (longlong)plVar7;
      local_50 = plVar8;
    }
    SharedPointerInternals::EnableSharedFromThis(&local_58,plVar7,plVar7);
    switch(param_3) {
    default:
      plVar9 = (longlong *)0xffffffff;
      break;
    case 1:
      break;
    case 2:
      plVar9 = (longlong *)0x1;
      break;
    case 3:
      plVar9 = (longlong *)0x2;
      break;
    case 4:
      plVar9 = (longlong *)0x3;
      break;
    case 5:
      plVar9 = (longlong *)0xf;
    }
    (**(code **)(*local_58 + 0xb0))(local_58,5,plVar9,local_res20);
    plVar7 = local_50;
    *param_2 = (longlong)local_58;
    param_2[1] = (longlong)local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_50 + 1;
        lVar5 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar6 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1415da5d0 GetCulture body=26 status=ok
// SIG undefined GetCulture(void)

undefined8 FICUInternationalization::GetCulture(undefined8 param_1,undefined8 param_2)

{
  FindOrMakeCulture();
  return param_2;
}



// FUNCTION 1415da5f0 FUN_1415da5f0 body=128 status=ok
// SIG undefined FUN_1415da5f0(void)

undefined * FUN_1415da5f0(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b5288) {
    _Init_thread_header(&DAT_1468b5288);
    if (DAT_1468b5288 == -1) {
      <lambda_18f265aac54f246469c67c0101d9146f>::operator()(local_res8,&DAT_1468b51e0);
      atexit((_func_5014 *)&LAB_143e782a0);
      _Init_thread_footer(&DAT_1468b5288);
      return &DAT_1468b51e0;
    }
  }
  return &DAT_1468b51e0;
}



// FUNCTION 1415da670 FUN_1415da670 body=8 status=ok
// SIG undefined FUN_1415da670(void)

void FUN_1415da670(undefined8 *param_1)

{
  FUN_1415da680(*param_1);
  return;
}



// FUNCTION 1415da680 FUN_1415da680 body=1630 status=ok
// SIG undefined FUN_1415da680(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

longlong FUN_1415da680(longlong param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  void *_Src;
  BOOL BVar3;
  longlong *plVar4;
  longlong *plVar5;
  void *_Dst;
  longlong lVar6;
  undefined8 *******pppppppuVar7;
  longlong lVar8;
  char cVar9;
  longlong *plVar10;
  undefined1 auStack_1d8 [32];
  char local_1b8;
  longlong local_1b0;
  longlong *plStack_1a8;
  int local_1a0 [4];
  void *local_190;
  int local_188;
  longlong local_180;
  longlong *local_178;
  longlong *local_170;
  longlong *local_168;
  undefined8 local_160;
  longlong *local_158;
  undefined8 local_150;
  longlong *local_148;
  undefined1 local_140 [8];
  void **local_138;
  longlong *local_130;
  undefined **local_128;
  undefined8 *******local_120 [3];
  undefined2 local_102;
  undefined1 local_f8 [176];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  ICUUtilities::SanitizeCurrencyCode(&local_190);
  local_1b8 = local_188 < 2;
  if (local_188 < 2) {
    lVar8 = *(longlong *)(param_1 + 0x288);
    if (lVar8 != 0) goto LAB_1415dac72;
  }
  else {
    BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x310));
    if (BVar3 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x310));
    }
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(param_1 + 0x2c0),local_1a0,&local_190);
    if ((local_1a0[0] != -1) &&
       (lVar6 = *(longlong *)(param_1 + 0x2c0) + (longlong)local_1a0[0] * 0x28, lVar6 != 0)) {
      lVar8 = *(longlong *)(lVar6 + 0x10);
      plVar10 = *(longlong **)(lVar6 + 0x18);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
      if (lVar8 != 0) {
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar10 + 1;
          lVar6 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x310));
        goto LAB_1415dac72;
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar10 + 1;
        lVar6 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x310));
  }
  cVar9 = local_1b8;
  plVar10 = (longlong *)0x0;
  local_168 = (longlong *)0x0;
  local_1a0[1] = 0;
  plVar4 = (longlong *)FUN_143b37230(param_1,local_1a0 + 1);
  plVar5 = (longlong *)operator_new(0x18);
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    plVar5[2] = (longlong)plVar4;
    plVar10 = plVar5;
  }
  local_158 = plVar10;
  SharedPointerInternals::EnableSharedFromThis(&local_160,plVar4,plVar4);
  local_160 = 0;
  local_170 = plVar4;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_168,&local_158);
  plVar10 = local_158;
  if (local_158 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_158 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_158)(local_158);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  plVar10 = local_170;
  _Src = local_190;
  if (cVar9 == '\0') {
    local_128 = icu_53::UnicodeString::vftable;
    local_102._1_1_ = 2;
    local_102 = 0x200;
    if ((local_188 != 0) && (iVar2 = local_188 + -1, 0 < iVar2)) {
      _Dst = (void *)FUN_143a8fd90(&local_128,local_188);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar2 * 2);
      *(undefined2 *)((longlong)iVar2 * 2 + (longlong)_Dst) = 0;
      FUN_143a90820(&local_128,iVar2);
      cVar9 = local_1b8;
    }
    pppppppuVar7 = (undefined8 *******)0x0;
    if (((local_102._1_1_ & 0x11) == 0) && (pppppppuVar7 = local_120, (local_102._1_1_ & 2) == 0)) {
      pppppppuVar7 = local_120[0];
    }
    (**(code **)(*plVar10 + 0x240))(plVar10,pppppppuVar7);
    FUN_143a8dc60(&local_128);
  }
  plVar4 = (longlong *)0x0;
  FUN_1415d6190(local_f8,plVar10);
  if (cVar9 == '\0') {
    BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x310));
    if (BVar3 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x310));
    }
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x2c0,local_1a0 + 2,&local_190);
    if ((local_1a0[2] == -1) ||
       (lVar6 = *(longlong *)(param_1 + 0x2c0) + (longlong)local_1a0[2] * 0x28, lVar6 == 0)) {
      local_1b0 = 0;
      plStack_1a8 = (longlong *)0x0;
LAB_1415daaf8:
      lVar6 = operator_new(0xa8);
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = FDecimalNumberFormattingRules::FDecimalNumberFormattingRules(lVar6,local_f8);
      }
      plVar10 = (longlong *)operator_new(0x18);
      if (plVar10 != (longlong *)0x0) {
        *(undefined4 *)(plVar10 + 1) = 1;
        *plVar10 = (longlong)&PTR_DestroyObject_144cb1678;
        *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
        plVar10[2] = lVar6;
        plVar4 = plVar10;
      }
      local_148 = plVar4;
      SharedPointerInternals::EnableSharedFromThis(&local_150,lVar6,lVar6);
      local_150 = 0;
      local_1b0 = lVar6;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_1a8,&local_148);
      plVar10 = local_148;
      if (local_148 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_148 + 1;
        lVar6 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_148)(local_148);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      local_138 = &local_190;
      local_130 = &local_1b0;
      FUN_1415cabe0(param_1 + 0x2c0,local_140,&local_138,0);
    }
    else {
      local_1b0 = *(longlong *)(lVar6 + 0x10);
      plStack_1a8 = *(longlong **)(lVar6 + 0x18);
      if (plStack_1a8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_1a8 + 1) = (int)plStack_1a8[1] + 1;
        UNLOCK();
      }
      if (local_1b0 == 0) goto LAB_1415daaf8;
    }
    plVar10 = plStack_1a8;
    lVar8 = local_1b0;
    if (plStack_1a8 != (longlong *)0x0) {
      LOCK();
      plVar4 = plStack_1a8 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_1a8)(plStack_1a8);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x310));
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x298);
    BVar3 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar3 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    plVar10 = (longlong *)(param_1 + 0x288);
    if (*plVar10 == 0) {
      lVar6 = operator_new(0xa8);
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = FDecimalNumberFormattingRules::FDecimalNumberFormattingRules(lVar6,local_f8);
      }
      plVar4 = (longlong *)operator_new(0x18);
      if (plVar4 == (longlong *)0x0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        *(undefined4 *)(plVar4 + 1) = 1;
        *plVar4 = (longlong)&PTR_DestroyObject_144cb1678;
        *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
        plVar4[2] = lVar6;
      }
      local_180 = lVar6;
      local_178 = plVar4;
      SharedPointerInternals::EnableSharedFromThis(&local_180,lVar6,lVar6);
      if (plVar10 != &local_180) {
        *plVar10 = lVar6;
        local_180 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x290,&local_178);
        plVar4 = local_178;
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar4 + 1;
        lVar6 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
    }
    LeaveCriticalSection(lpCriticalSection);
    lVar8 = *plVar10;
  }
  FDecimalNumberFormattingRules::~FDecimalNumberFormattingRules(local_f8);
  plVar10 = local_168;
  if (local_168 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_168 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_168)(local_168);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_168 + 8))(local_168,1);
      }
    }
  }
LAB_1415dac72:
  if (local_190 != (void *)0x0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_190);
    }
    else {
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_190);
    }
  }
  return lVar8;
}



// FUNCTION 1415dace0 FUN_1415dace0 body=144 status=ok
// SIG undefined FUN_1415dace0(void)

undefined4 FUN_1415dace0(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  longlong *local_18;
  longlong *local_10;
  
  FUN_1415dc080(param_1,&local_18);
  uVar6 = (**(code **)(*local_18 + 0x70))(local_18);
  (**(code **)(*local_18 + 0x20))(local_18);
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
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
    return uVar6;
  }
  return uVar6;
}



// FUNCTION 1415dad70 GetDateFormatter body=1417 status=ok
// SIG undefined GetDateFormatter(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FCulture::FICUCultureImplementation::GetDateFormatter
          (longlong param_1,undefined8 *param_2,int param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong **pplVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  void *_Dst;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  bool bVar10;
  undefined4 uVar11;
  int iVar12;
  undefined1 auStack_168 [32];
  undefined4 local_148 [2];
  longlong local_140;
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  void *local_120;
  int local_118;
  longlong *local_110;
  longlong *local_108;
  longlong *local_100;
  longlong *local_f8;
  undefined8 local_f0;
  undefined **local_e8 [2];
  int local_d4;
  undefined2 local_c2;
  undefined **local_c0 [2];
  int local_ac;
  ushort local_9a;
  undefined **local_98 [4];
  undefined2 local_72;
  undefined **local_70 [4];
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  pplVar3 = (longlong **)(param_1 + 0x1d8);
  uVar11 = 2;
  local_140 = param_1;
  local_f0 = param_4;
  if (*pplVar3 == (longlong *)0x0) {
    plVar5 = (longlong *)FUN_143b56e80(2,param_1);
    local_108 = (longlong *)operator_new(0x18);
    if (local_108 != (longlong *)0x0) {
      *(undefined4 *)(local_108 + 1) = 1;
      *local_108 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)local_108 + 0xc) = 1;
      local_108[2] = (longlong)plVar5;
    }
    local_110 = plVar5;
    SharedPointerInternals::EnableSharedFromThis(&local_110,plVar5,plVar5);
    plVar5 = local_110;
    lVar7 = *local_110;
    uVar6 = FUN_143b4ac10();
    (**(code **)(lVar7 + 0xb0))(plVar5,uVar6);
    plVar5 = local_108;
    local_138 = local_110;
    if (local_108 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_108 + 1) = (int)local_108[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_108 + 1) = (int)local_108[1] + 1;
      UNLOCK();
      LOCK();
      plVar8 = local_108 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_108)(local_108);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      plVar8 = local_108;
      if (local_108 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_108 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_108)(local_108);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
    }
    local_130 = local_138;
    local_128 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    if (pplVar3 != &local_130) {
      *pplVar3 = local_138;
      local_130 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1e0,&local_128);
    }
    plVar8 = local_128;
    if (local_128 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_128 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_128)(local_128);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_128 + 8))(local_128,1);
        }
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar5 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  lVar7 = local_140;
  ICUUtilities::SanitizeTimezoneCode(&local_120,local_f0);
  iVar12 = local_118;
  local_98[0] = icu_53::UnicodeString::vftable;
  local_72 = 0x200;
  if ((local_118 != 0) && (iVar9 = local_118 + -1, 0 < iVar9)) {
    _Dst = (void *)FUN_143a8fd90(local_98,local_118);
    ::_guard_xfg_dispatch_icall_nop(_Dst,local_120,(longlong)iVar9 * 2);
    FUN_143a90820(local_98,iVar9);
  }
  plVar5 = *(longlong **)(lVar7 + 0x1e0);
  local_138 = *(longlong **)(lVar7 + 0x1d8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    iVar12 = local_118;
  }
  bVar10 = iVar12 < 2;
  if (1 < iVar12) {
    local_c0[0] = icu_53::UnicodeString::vftable;
    local_148[0] = 0;
    local_9a = 0x200;
    FUN_143b4b560(local_98,local_c0,local_148);
    local_70[0] = icu_53::UnicodeString::vftable;
    local_4a = 0x200;
    lVar7 = (**(code **)(*local_138 + 0xa8))();
    FUN_143a8dcd0(local_70,lVar7 + 8);
    local_e8[0] = icu_53::UnicodeString::vftable;
    local_c2 = 0x200;
    FUN_143b4b560(local_70,local_e8,local_148);
    if ((local_9a & 0x100) == 0) {
      iVar12 = (int)(char)local_9a;
      if ((char)local_9a < '\0') {
        iVar12 = local_ac;
      }
      iVar9 = (int)(char)local_c2;
      if ((char)local_c2 < '\0') {
        iVar9 = local_d4;
      }
      if ((((local_c2 & 0x100) == 0) && (iVar12 == iVar9)) &&
         (cVar4 = FUN_143a8ed60(local_c0,local_e8), cVar4 != '\0')) {
        bVar10 = true;
      }
      else {
        bVar10 = false;
      }
    }
    else {
      bVar10 = (bool)(local_c2._1_1_ & 1);
    }
    FUN_143a8dc60(local_e8);
    FUN_143a8dc60(local_70);
    FUN_143a8dc60(local_c0);
  }
  if (param_3 == 0) {
    if (bVar10 != false) {
      *param_2 = local_138;
      param_2[1] = plVar5;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar8 = plVar5 + 1;
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      FUN_143a8dc60(local_98);
      if (local_120 == (void *)0x0) {
        return param_2;
      }
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
        (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_120);
        return param_2;
      }
      goto LAB_1415db2c9;
    }
  }
  else if (param_3 == 1) {
    uVar11 = 3;
  }
  else if (param_3 != 2) {
    if (param_3 == 3) {
      uVar11 = 1;
    }
    else if (param_3 == 4) {
      uVar11 = 0;
    }
  }
  plVar8 = (longlong *)FUN_143b56e80(uVar11,local_140);
  local_100 = plVar8;
  local_f8 = (longlong *)operator_new(0x18);
  if (local_f8 != (longlong *)0x0) {
    *(undefined4 *)(local_f8 + 1) = 1;
    *local_f8 = (longlong)&PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)local_f8 + 0xc) = 1;
    local_f8[2] = (longlong)plVar8;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_100,plVar8,plVar8);
  if (bVar10 == false) {
    uVar6 = FUN_143b4ae60(local_98);
  }
  else {
    uVar6 = FUN_143b4ac10();
  }
  (**(code **)(*local_100 + 0xb0))(local_100,uVar6);
  plVar8 = local_f8;
  *param_2 = local_100;
  param_2[1] = local_f8;
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
    UNLOCK();
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_f8 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_f8)(local_f8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar5 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  FUN_143a8dc60(local_98);
  if (local_120 == (void *)0x0) {
    return param_2;
  }
  if (DAT_1468c2208 == (longlong *)0x0) {
    FUN_1415d7ea0();
  }
LAB_1415db2c9:
  (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_120);
  return param_2;
}



// FUNCTION 1415db300 GetDateTimeFormatter body=1493 status=ok
// SIG undefined GetDateTimeFormatter(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FCulture::FICUCultureImplementation::GetDateTimeFormatter
          (longlong param_1,undefined8 *param_2,int param_3,int param_4,undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  void *_Dst;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined1 auStack_168 [32];
  longlong local_148;
  undefined4 local_140 [2];
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  void *local_120;
  int local_118;
  longlong *local_110;
  longlong *local_108;
  longlong *local_100;
  longlong *local_f8;
  undefined8 local_f0;
  undefined **local_e8 [2];
  int local_d4;
  undefined2 local_c2;
  undefined **local_c0 [2];
  int local_ac;
  ushort local_9a;
  undefined **local_98 [4];
  undefined2 local_72;
  undefined **local_70 [4];
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_f0 = param_5;
  uVar11 = 2;
  local_148 = param_1;
  if (*(longlong *)(param_1 + 0x1f8) == 0) {
    plVar5 = (longlong *)FUN_143b56ec0(2,2,param_1);
    local_108 = (longlong *)operator_new(0x18);
    if (local_108 != (longlong *)0x0) {
      *(undefined4 *)(local_108 + 1) = 1;
      *local_108 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)local_108 + 0xc) = 1;
      local_108[2] = (longlong)plVar5;
    }
    local_110 = plVar5;
    SharedPointerInternals::EnableSharedFromThis(&local_110,plVar5,plVar5);
    plVar5 = local_110;
    lVar7 = *local_110;
    uVar6 = FUN_143b4ac10();
    (**(code **)(lVar7 + 0xb0))(plVar5,uVar6);
    plVar5 = local_108;
    local_138 = local_110;
    if (local_108 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_108 + 1) = (int)local_108[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_108 + 1) = (int)local_108[1] + 1;
      UNLOCK();
      LOCK();
      plVar8 = local_108 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_108)(local_108);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      plVar8 = local_108;
      if (local_108 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_108 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_108)(local_108);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
    }
    local_130 = local_138;
    local_128 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    if ((longlong **)(local_148 + 0x1f8) != &local_130) {
      *(longlong **)(local_148 + 0x1f8) = local_138;
      local_130 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(local_148 + 0x200,&local_128);
    }
    plVar8 = local_128;
    if (local_128 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_128 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_128)(local_128);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_128 + 8))(local_128,1);
        }
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar5 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  lVar7 = local_148;
  ICUUtilities::SanitizeTimezoneCode(&local_120,local_f0);
  local_98[0] = icu_53::UnicodeString::vftable;
  local_72 = 0x200;
  if ((local_118 != 0) && (iVar3 = local_118 + -1, 0 < iVar3)) {
    _Dst = (void *)FUN_143a8fd90(local_98,local_118);
    ::_guard_xfg_dispatch_icall_nop(_Dst,local_120,(longlong)iVar3 * 2);
    FUN_143a90820(local_98,iVar3);
  }
  plVar5 = *(longlong **)(lVar7 + 0x200);
  local_138 = *(longlong **)(lVar7 + 0x1f8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  bVar10 = local_118 < 2;
  if (1 < local_118) {
    local_c0[0] = icu_53::UnicodeString::vftable;
    local_140[0] = 0;
    local_9a = 0x200;
    FUN_143b4b560(local_98,local_c0,local_140);
    local_70[0] = icu_53::UnicodeString::vftable;
    local_4a = 0x200;
    lVar7 = (**(code **)(*local_138 + 0xa8))();
    FUN_143a8dcd0(local_70,lVar7 + 8);
    local_e8[0] = icu_53::UnicodeString::vftable;
    local_c2 = 0x200;
    FUN_143b4b560(local_70,local_e8,local_140);
    if ((local_9a & 0x100) == 0) {
      iVar3 = (int)(char)local_9a;
      if ((char)local_9a < '\0') {
        iVar3 = local_ac;
      }
      iVar9 = (int)(char)local_c2;
      if ((char)local_c2 < '\0') {
        iVar9 = local_d4;
      }
      if ((((local_c2 & 0x100) == 0) && (iVar3 == iVar9)) &&
         (cVar4 = FUN_143a8ed60(local_c0,local_e8), cVar4 != '\0')) {
        bVar10 = true;
      }
      else {
        bVar10 = false;
      }
    }
    else {
      bVar10 = (bool)(local_c2._1_1_ & 1);
    }
    FUN_143a8dc60(local_e8);
    FUN_143a8dc60(local_70);
    FUN_143a8dc60(local_c0);
  }
  if (param_3 == 0) {
    if (param_4 == 0) {
      if (bVar10 != false) {
        *param_2 = local_138;
        param_2[1] = plVar5;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          LOCK();
          plVar8 = plVar5 + 1;
          lVar7 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        FUN_143a8dc60(local_98);
        if (local_120 == (void *)0x0) {
          return param_2;
        }
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
          (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_120);
          return param_2;
        }
        goto LAB_1415db8a5;
      }
      goto LAB_1415db711;
    }
LAB_1415db716:
    if (param_4 == 1) {
      uVar6 = 3;
    }
    else {
      if (param_4 == 2) goto LAB_1415db740;
      if (param_4 == 3) {
        uVar6 = 1;
      }
      else {
        if (param_4 != 4) goto LAB_1415db740;
        uVar6 = 0;
      }
    }
  }
  else {
LAB_1415db711:
    if (param_4 != 0) goto LAB_1415db716;
LAB_1415db740:
    uVar6 = 2;
  }
  if (param_3 != 0) {
    if (param_3 == 1) {
      uVar11 = 3;
    }
    else if (param_3 != 2) {
      if (param_3 == 3) {
        uVar11 = 1;
      }
      else if (param_3 == 4) {
        uVar11 = 0;
      }
    }
  }
  plVar8 = (longlong *)FUN_143b56ec0(uVar11,uVar6,local_148);
  local_100 = plVar8;
  local_f8 = (longlong *)operator_new(0x18);
  if (local_f8 != (longlong *)0x0) {
    *(undefined4 *)(local_f8 + 1) = 1;
    *local_f8 = (longlong)&PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)local_f8 + 0xc) = 1;
    local_f8[2] = (longlong)plVar8;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_100,plVar8,plVar8);
  if (bVar10 == false) {
    uVar6 = FUN_143b4ae60(local_98);
  }
  else {
    uVar6 = FUN_143b4ac10();
  }
  (**(code **)(*local_100 + 0xb0))(local_100,uVar6);
  plVar8 = local_f8;
  *param_2 = local_100;
  param_2[1] = local_f8;
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
    UNLOCK();
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_f8 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_f8)(local_f8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar5 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  FUN_143a8dc60(local_98);
  if (local_120 == (void *)0x0) {
    return param_2;
  }
  if (DAT_1468c2208 == (longlong *)0x0) {
    FUN_1415d7ea0();
  }
LAB_1415db8a5:
  (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_120);
  return param_2;
}



// FUNCTION 1415db8e0 FUN_1415db8e0 body=8 status=ok
// SIG undefined FUN_1415db8e0(void)

void FUN_1415db8e0(undefined8 *param_1)

{
  FUN_1415db8f0(*param_1);
  return;
}



// FUNCTION 1415db8f0 FUN_1415db8f0 body=1250 status=ok
// SIG undefined FUN_1415db8f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1415db8f0(longlong param_1)

{
  int *piVar1;
  longlong **pplVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  bool bVar7;
  BOOL BVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  char *pcVar12;
  short *psVar13;
  undefined8 *puVar14;
  undefined2 *puVar15;
  uint uVar16;
  short *psVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined2 *puVar20;
  short *psVar21;
  undefined1 auStack_198 [32];
  undefined2 local_178;
  undefined4 local_168 [2];
  longlong local_160;
  short *local_158;
  ulonglong local_150;
  undefined2 *local_148;
  undefined8 local_140;
  longlong *local_138;
  longlong *local_130;
  undefined2 *local_128;
  undefined8 local_120;
  longlong local_118;
  longlong *local_110;
  undefined8 local_108;
  longlong *local_100;
  longlong local_f8 [2];
  undefined1 local_e8 [176];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  plVar18 = (longlong *)0x0;
  pplVar2 = (longlong **)(param_1 + 0x218);
  if (*pplVar2 != (longlong *)0x0) {
    return *pplVar2;
  }
  local_110 = (longlong *)0x0;
  local_168[0] = 0;
  local_160 = param_1;
  lVar9 = FUN_143b37290(param_1,local_168);
  plVar10 = (longlong *)operator_new(0x18);
  local_100 = plVar18;
  if (plVar10 != (longlong *)0x0) {
    *(undefined4 *)(plVar10 + 1) = 1;
    *plVar10 = (longlong)&PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
    plVar10[2] = lVar9;
    local_100 = plVar10;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_108,lVar9,lVar9);
  local_108 = 0;
  local_118 = lVar9;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_110,&local_100);
  plVar10 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar19 = local_100 + 1;
    lVar9 = *plVar19;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  FUN_1415d6190(local_e8,local_118);
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x228);
  BVar8 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar8 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (*pplVar2 == (longlong *)0x0) {
    lVar9 = operator_new(0xa8);
    plVar10 = plVar18;
    if (lVar9 != 0) {
      plVar10 = (longlong *)
                FDecimalNumberFormattingRules::FDecimalNumberFormattingRules(lVar9,local_e8);
    }
    plVar11 = (longlong *)operator_new(0x18);
    plVar19 = plVar18;
    if (plVar11 != (longlong *)0x0) {
      *(undefined4 *)(plVar11 + 1) = 1;
      *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
      *plVar11 = (longlong)&PTR_DestroyObject_144cb1678;
      plVar11[2] = (longlong)plVar10;
      plVar19 = plVar11;
    }
    local_138 = plVar10;
    local_130 = plVar19;
    SharedPointerInternals::EnableSharedFromThis(&local_138,plVar10,plVar10);
    if (pplVar2 != &local_138) {
      *pplVar2 = plVar10;
      local_138 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x220,&local_130);
      plVar19 = local_130;
    }
    param_1 = local_160;
    if (plVar19 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar19 + 1;
      lVar9 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar19)(plVar19);
        LOCK();
        piVar1 = (int *)((longlong)plVar19 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        param_1 = local_160;
        if (iVar3 == 1) {
          (**(code **)(*plVar19 + 8))(plVar19,1);
          param_1 = local_160;
        }
      }
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  puVar20 = local_148;
  psVar21 = local_158;
  if (*pplVar2 != (longlong *)0x0) {
    local_128 = (undefined2 *)0x0;
    local_120 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
    puVar20 = local_128;
    FGenericPlatformString::Memcpy(local_128,&DAT_144cafbd8,8);
    pcVar12 = (char *)FUN_143a8b700(param_1);
    local_158 = (short *)0x0;
    local_150 = 0;
    plVar10 = plVar18;
    psVar21 = (short *)0x0;
    if ((pcVar12 != (char *)0x0) &&
       (plVar10 = (longlong *)0x0, psVar21 = (short *)0x0, *pcVar12 != '\0')) {
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (pcVar12[lVar9] != '\0');
      uVar16 = (int)lVar9 + 1;
      local_150 = (ulonglong)uVar16;
      uVar6 = uVar16;
      if (0 < (int)uVar16) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
        uVar6 = (uint)local_150;
      }
      psVar21 = local_158;
      plVar10 = (longlong *)(ulonglong)uVar6;
      local_178 = 0x3f;
      FGenericPlatformString::Convert<char,wchar_t>(local_158,uVar16,pcVar12);
    }
    psVar17 = &DAT_143f3eda8;
    puVar15 = &DAT_143f3eda8;
    if ((int)local_120 != 0) {
      puVar15 = puVar20;
    }
    plVar18 = (longlong *)0x3;
    psVar13 = &DAT_143f3eda8;
    if ((int)plVar10 != 0) {
      psVar13 = psVar21;
    }
    lVar9 = (longlong)puVar15 - (longlong)psVar13;
    do {
      sVar4 = *psVar13;
      sVar5 = *(short *)((longlong)psVar13 + lVar9);
      if (sVar4 != sVar5) break;
      psVar13 = psVar13 + 1;
    } while (sVar5 != 0);
    puVar20 = local_148;
    if (sVar4 == sVar5) {
      local_148 = (undefined2 *)0x0;
      local_140 = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148);
      puVar20 = local_148;
      FGenericPlatformString::Memcpy(local_148,L"fr-CA",0xc);
      puVar14 = (undefined8 *)FCulture::FICUCultureImplementation::GetName(local_160,local_f8);
      puVar15 = &DAT_143f3eda8;
      if ((int)local_140 != 0) {
        puVar15 = puVar20;
      }
      if (*(int *)(puVar14 + 1) != 0) {
        psVar17 = (short *)*puVar14;
      }
      plVar18 = (longlong *)0xf;
      lVar9 = (longlong)puVar15 - (longlong)psVar17;
      do {
        sVar4 = *psVar17;
        sVar5 = *(short *)((longlong)psVar17 + lVar9);
        if (sVar4 != sVar5) break;
        psVar17 = psVar17 + 1;
      } while (sVar5 != 0);
      if (sVar4 != sVar5) {
        bVar7 = true;
        goto LAB_1415dbc7e;
      }
    }
  }
  bVar7 = false;
LAB_1415dbc7e:
  if ((((ulonglong)plVar18 & 8) != 0) &&
     (plVar18 = (longlong *)(ulonglong)((uint)plVar18 & 0xfffffff7), local_f8[0] != 0)) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_f8[0]);
  }
  if ((((ulonglong)plVar18 & 4) != 0) &&
     (plVar18 = (longlong *)(ulonglong)((uint)plVar18 & 0xfffffffb), puVar20 != (undefined2 *)0x0))
  {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,puVar20);
  }
  if ((((ulonglong)plVar18 & 2) != 0) &&
     (plVar18 = (longlong *)(ulonglong)((uint)plVar18 & 0xfffffffd), psVar21 != (short *)0x0)) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,psVar21);
  }
  puVar20 = local_128;
  if ((((ulonglong)plVar18 & 1) != 0) && (local_128 != (undefined2 *)0x0)) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,puVar20);
  }
  if (bVar7) {
    *(undefined2 *)(*pplVar2 + 0xe) = 0xa0;
  }
  plVar18 = *pplVar2;
  FDecimalNumberFormattingRules::~FDecimalNumberFormattingRules(local_e8);
  plVar10 = local_110;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar19 = local_110 + 1;
    lVar9 = *plVar19;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  return plVar18;
}



// FUNCTION 1415dbdf0 GetDescriptiveName body=78 status=ok
// SIG undefined GetDescriptiveName(void)

undefined8 FMallocThreadSafeProxy::GetDescriptiveName(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  undefined8 uVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x10);
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x80))();
  LeaveCriticalSection(lpCriticalSection);
  return uVar2;
}



// FUNCTION 1415dbe40 GetDisplayName body=224 status=ok
// SIG undefined GetDisplayName(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FCulture::FICUCultureImplementation::GetDisplayName(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 ***_Src;
  int iVar2;
  undefined1 auStack_58 [32];
  undefined **local_38;
  undefined8 **local_30;
  int local_24;
  ushort local_12;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  local_12 = 0x200;
  local_38 = icu_53::UnicodeString::vftable;
  FUN_143a98f80(param_1,&local_38);
  _Src = (undefined8 ***)0x0;
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (int)(char)local_12;
  if ((char)local_12 < '\0') {
    iVar2 = local_24;
  }
  if (0 < iVar2) {
    iVar1 = iVar2 + 1;
    if (iVar1 < 1) {
      if ((iVar1 < 0) && (iVar1 != 0)) {
        *(int *)(param_2 + 1) = iVar1;
        TArray<wchar_t,FDefaultAllocator>::ResizeShrink(param_2);
      }
    }
    else {
      *(int *)(param_2 + 1) = iVar1;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    }
    if (((local_12 & 0x1100) == 0) && (_Src = &local_30, (local_12 & 0x200) == 0)) {
      _Src = (undefined8 ***)local_30;
    }
    ::_guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar2 * 2);
    *(undefined2 *)((longlong)iVar2 * 2 + *param_2) = 0;
  }
  FUN_143a8dc60(&local_38);
  return param_2;
}



// FUNCTION 1415dbf20 FUN_1415dbf20 body=164 status=ok
// SIG undefined FUN_1415dbf20(void)

undefined4 FUN_1415dbf20(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar2 = *param_1;
  plVar7 = *(longlong **)(lVar2 + 0x30);
  plVar6 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    LOCK();
    iVar4 = (int)plVar7[1];
    bVar8 = iVar4 == 0;
    if (bVar8) {
      *(int *)(plVar7 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (!bVar8) {
      LOCK();
      bVar8 = iVar4 == (int)plVar7[1];
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar6 = plVar7;
        if ((plVar7 != (longlong *)0x0) &&
           (plVar3 = *(longlong **)(lVar2 + 0x28), plVar3 != (longlong *)0x0)) {
          uVar5 = (**(code **)(*plVar3 + 0x110))();
          goto LAB_1415dbf69;
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar8 = iVar4 == 0;
      if (bVar8) {
        *(int *)(plVar7 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  uVar5 = 0xffffffff;
  plVar7 = plVar6;
LAB_1415dbf69:
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar7 + 1;
    lVar2 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return uVar5;
}



// FUNCTION 1415dbfd0 FUN_1415dbfd0 body=31 status=ok
// SIG undefined FUN_1415dbfd0(void)

undefined8 FUN_1415dbfd0(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))();
  return param_2;
}



// FUNCTION 1415dbff0 GetFilenameOnDisk body=144 status=ok
// SIG undefined GetFilenameOnDisk(void)

undefined8
FLoggedPlatformFile::GetFilenameOnDisk(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  LARGE_INTEGER local_res8;
  longlong local_18 [2];
  
  FString::PrintfImpl(local_18,L"GetFilenameOnDisk %s");
  QueryPerformanceCounter(&local_res8);
  (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))(*(longlong **)(param_1 + 8),param_2,param_3);
  QueryPerformanceCounter(&local_res8);
  if (local_18[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_18[0]);
  }
  return param_2;
}



// FUNCTION 1415dc080 FUN_1415dc080 body=169 status=ok
// SIG undefined FUN_1415dc080(void)

undefined8 * FUN_1415dc080(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar5 = (longlong *)0x0;
  plVar6 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar7 = iVar4 == 0;
    if (bVar7) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar6 = plVar5, !bVar7) {
      LOCK();
      bVar7 = iVar4 == (int)plVar2[1];
      if (bVar7) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar7) {
        plVar6 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar5 = *(longlong **)(param_1 + 8);
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar7 = iVar4 == 0;
      if (bVar7) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  *param_2 = plVar5;
  param_2[1] = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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



// FUNCTION 1415dc130 SetDebugSourceInfo body=8 status=ok
// SIG undefined SetDebugSourceInfo(void)

void FSlateTextBlockLayout::SetDebugSourceInfo(undefined8 *param_1)

{
  FUN_143a8b780(*param_1);
  return;
}



// FUNCTION 1415dc140 FUN_1415dc140 body=167 status=ok
// SIG undefined FUN_1415dc140(void)

undefined4 FUN_1415dc140(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined4 local_res8 [4];
  
  lVar2 = *param_1;
  local_res8[0] = 0;
  plVar3 = *(longlong **)(lVar2 + 0x30);
  uVar7 = 0xffffffff;
  plVar6 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar8 = iVar5 == 0;
    if (bVar8) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar6 = (longlong *)0x0, !bVar8) {
      LOCK();
      bVar8 = iVar5 == (int)plVar3[1];
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar6 = plVar3;
        if ((plVar3 != (longlong *)0x0) &&
           (plVar4 = *(longlong **)(lVar2 + 0x28), plVar4 != (longlong *)0x0)) {
          uVar7 = (**(code **)(*plVar4 + 0x78))(plVar4,local_res8);
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar6 + 1;
    lVar2 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar6)(plVar6);
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
  return uVar7;
}



// FUNCTION 1415dc1f0 FUN_1415dc1f0 body=170 status=ok
// SIG undefined FUN_1415dc1f0(void)

undefined4 FUN_1415dc1f0(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined4 local_res8 [4];
  
  lVar2 = *param_1;
  local_res8[0] = 0;
  plVar3 = *(longlong **)(lVar2 + 0x30);
  uVar7 = 0xffffffff;
  plVar6 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar8 = iVar5 == 0;
    if (bVar8) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar6 = (longlong *)0x0, !bVar8) {
      LOCK();
      bVar8 = iVar5 == (int)plVar3[1];
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar6 = plVar3;
        if ((plVar3 != (longlong *)0x0) &&
           (plVar4 = *(longlong **)(lVar2 + 0x28), plVar4 != (longlong *)0x0)) {
          uVar7 = (**(code **)(*plVar4 + 0x98))(plVar4,local_res8);
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar6 + 1;
    lVar2 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar6)(plVar6);
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
  return uVar7;
}



// FUNCTION 1415dc2b0 GetName body=5 status=ok
// SIG undefined GetName(void)

longlong FCulture::GetName(longlong param_1)

{
  return param_1 + 0x30;
}



// FUNCTION 1415dc2c0 GetName body=148 status=ok
// SIG undefined GetName(void)

undefined8 * FCulture::FICUCultureImplementation::GetName(longlong param_1,undefined8 *param_2)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  
  pcVar1 = *(char **)(param_1 + 0x28);
  *param_2 = 0;
  param_2[1] = 0;
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (pcVar1[lVar3] != '\0');
    iVar2 = (int)lVar3 + 1;
    *(int *)(param_2 + 1) = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    }
    FGenericPlatformString::Convert<char,wchar_t>(*param_2,iVar2,pcVar1,iVar2,0x3f);
  }
  FString::ReplaceInline(param_2,&DAT_144caf2d4,&DAT_144caf2d0,1);
  return param_2;
}



// FUNCTION 1415dc370 GetNativeLanguage body=1166 status=ok
// SIG undefined GetNativeLanguage(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FCulture::FICUCultureImplementation::GetNativeLanguage(undefined8 param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  void *_Dst;
  undefined2 *puVar2;
  int iVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 ***pppuVar9;
  undefined8 ***pppuVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 ***_Src;
  undefined1 auStack_d8 [32];
  undefined8 **local_b8;
  uint local_b0;
  int local_ac;
  undefined8 **local_a8;
  uint local_a0;
  int local_9c;
  undefined8 *local_98;
  undefined **local_90;
  undefined8 **local_88;
  int local_7c;
  ushort local_6a;
  undefined **local_68;
  undefined8 **local_60;
  int local_54;
  ushort local_42;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_42 = 0x200;
  local_68 = icu_53::UnicodeString::vftable;
  local_98 = param_2;
  FUN_143a98e10(param_1,param_1,&local_68);
  pppuVar5 = (undefined8 ***)0x0;
  uVar11 = 0;
  local_b8 = (undefined8 ***)0x0;
  local_ac = 0;
  iVar8 = (int)(char)local_42;
  if ((char)local_42 < '\0') {
    iVar8 = local_54;
  }
  _Src = pppuVar5;
  if (0 < iVar8) {
    iVar6 = iVar8 + 1;
    if (iVar6 < 1) {
      uVar11 = 0;
      if ((iVar6 < 0) && (uVar11 = 0, iVar6 != 0)) {
        local_b0 = iVar6;
        TArray<wchar_t,FDefaultAllocator>::ResizeShrink(&local_b8);
        uVar11 = local_b0;
      }
    }
    else {
      local_b0 = iVar6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
      uVar11 = local_b0;
    }
    _Src = (undefined8 ***)local_b8;
    pppuVar4 = pppuVar5;
    if (((local_42 & 0x1100) == 0) && (pppuVar4 = &local_60, (local_42 & 0x200) == 0)) {
      pppuVar4 = (undefined8 ***)local_60;
    }
    ::_guard_xfg_dispatch_icall_nop(local_b8,pppuVar4,(longlong)iVar8 * 2);
    *(undefined2 *)((longlong)iVar8 * 2 + (longlong)_Src) = 0;
  }
  local_90 = icu_53::UnicodeString::vftable;
  local_6a = 0x200;
  FUN_143a99120(param_1,param_1,&local_90);
  local_a8 = (undefined8 ***)0x0;
  local_9c = 0;
  iVar8 = (int)(char)local_6a;
  if ((char)local_6a < '\0') {
    iVar8 = local_7c;
  }
  pppuVar4 = pppuVar5;
  if (0 < iVar8) {
    uVar7 = iVar8 + 1;
    if ((int)uVar7 < 1) {
      pppuVar9 = pppuVar5;
      if (((int)uVar7 < 0) && (pppuVar9 = (undefined8 ***)0x0, uVar7 != 0)) {
        local_a0 = uVar7;
        TArray<wchar_t,FDefaultAllocator>::ResizeShrink(&local_a8);
        goto LAB_1415dc4ac;
      }
    }
    else {
      local_a0 = uVar7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
LAB_1415dc4ac:
      pppuVar9 = (undefined8 ***)(ulonglong)local_a0;
    }
    pppuVar4 = (undefined8 ***)local_a8;
    if (((local_6a & 0x1100) == 0) && (pppuVar5 = &local_88, (local_6a & 0x200) == 0)) {
      pppuVar5 = (undefined8 ***)local_88;
    }
    ::_guard_xfg_dispatch_icall_nop(local_a8,pppuVar5,(longlong)iVar8 * 2);
    *(undefined2 *)((longlong)iVar8 * 2 + (longlong)pppuVar4) = 0;
    uVar7 = (uint)pppuVar9;
    if (1 < (int)uVar7) {
      local_a8 = (undefined8 ***)0x0;
      local_a0 = uVar11;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                (&local_a8,(3 - (uint)(uVar11 != 0)) + uVar11,0);
      pppuVar5 = (undefined8 ***)local_a8;
      ::_guard_xfg_dispatch_icall_nop(local_a8,_Src,(longlong)(int)uVar11 * 2);
      uVar11 = local_a0;
      lVar12 = (longlong)(int)local_a0;
      local_a0 = (3 - (uint)(local_a0 != 0)) + local_a0;
      if (local_9c < (int)local_a0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,uVar11);
        pppuVar5 = (undefined8 ***)local_a8;
      }
      pppuVar10 = (undefined8 ***)0x0;
      iVar8 = 0;
      puVar1 = (undefined4 *)((longlong)pppuVar5 + (lVar12 - (ulonglong)(uVar11 != 0)) * 2);
      *puVar1 = 0x280020;
      *(undefined2 *)(puVar1 + 1) = 0;
      if ((int)local_a0 < 2) {
        local_b8 = (undefined8 ***)0x0;
        if (uVar7 != 0) {
          local_b0 = uVar7;
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b8,pppuVar9);
          pppuVar10 = (undefined8 ***)local_b8;
          ::_guard_xfg_dispatch_icall_nop(local_b8,pppuVar4,(longlong)(int)uVar7 * 2);
          pppuVar9 = (undefined8 ***)(ulonglong)local_b0;
          iVar8 = local_ac;
        }
      }
      else {
        iVar6 = uVar7 - 1;
        if (uVar7 == 0) {
          iVar6 = iVar8;
        }
        if ((local_a0 != 0) || (iVar3 = 1, iVar6 == 0)) {
          iVar3 = iVar8;
        }
        local_b8 = local_a8;
        local_a8 = (undefined8 ***)0x0;
        local_ac = local_9c;
        uVar11 = local_a0;
        if (local_9c < (int)(local_a0 + iVar3 + iVar6)) {
          local_b0 = local_a0;
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_b8);
          uVar11 = local_b0;
        }
        pppuVar9 = (undefined8 ***)(ulonglong)uVar11;
        pppuVar5 = (undefined8 ***)local_a8;
        pppuVar10 = (undefined8 ***)local_b8;
        iVar8 = local_ac;
        if (iVar6 != 0) {
          local_b0 = uVar11 + (uVar11 == 0) + iVar6;
          if (local_ac < (int)local_b0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,pppuVar9);
          }
          iVar8 = local_ac;
          pppuVar10 = (undefined8 ***)local_b8;
          pppuVar9 = (undefined8 ***)(ulonglong)local_b0;
          _Dst = (void *)((longlong)local_b8 +
                         ((longlong)(int)uVar11 - (ulonglong)(uVar11 != 0)) * 2);
          ::_guard_xfg_dispatch_icall_nop(_Dst,pppuVar4,(longlong)iVar6 * 2);
          *(undefined2 *)((longlong)_Dst + (longlong)iVar6 * 2) = 0;
          pppuVar5 = (undefined8 ***)local_a8;
          param_2 = local_98;
        }
      }
      local_b0 = (uint)pppuVar9;
      local_b8 = pppuVar10;
      local_ac = iVar8;
      if (iVar8 < (int)((local_b0 == 0) + 1 + local_b0)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_b8);
        pppuVar9 = (undefined8 ***)(ulonglong)local_b0;
      }
      iVar8 = (int)pppuVar9;
      local_b0 = (2 - (uint)(iVar8 != 0)) + iVar8;
      if (local_ac < (int)local_b0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,pppuVar9);
      }
      puVar2 = (undefined2 *)((longlong)local_b8 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
      *puVar2 = 0x29;
      puVar2[1] = 0;
      *param_2 = local_b8;
      *(uint *)(param_2 + 1) = local_b0;
      *(int *)((longlong)param_2 + 0xc) = local_ac;
      if (pppuVar5 != (undefined8 ***)0x0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
        }
        (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,pppuVar5);
      }
      if (pppuVar4 != (undefined8 ***)0x0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
        }
        (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,pppuVar4);
      }
      FUN_143a8dc60(&local_90);
      if (_Src != (undefined8 ***)0x0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
          (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,_Src);
        }
        else {
          (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,_Src);
        }
      }
      goto LAB_1415dc7cb;
    }
  }
  *param_2 = _Src;
  *(uint *)(param_2 + 1) = uVar11;
  *(int *)((longlong)param_2 + 0xc) = local_ac;
  if (pppuVar4 != (undefined8 ***)0x0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,pppuVar4);
  }
  FUN_143a8dc60(&local_90);
LAB_1415dc7cb:
  FUN_143a8dc60(&local_68);
  return param_2;
}



// FUNCTION 1415dc800 GetNativeRegion body=1019 status=ok
// SIG undefined GetNativeRegion(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FCulture::FICUCultureImplementation::GetNativeRegion(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  void *_Dst;
  int iVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  int iVar6;
  longlong lVar7;
  undefined8 ***pppuVar8;
  undefined8 ***_Src;
  int iVar9;
  undefined1 auStack_d8 [32];
  undefined8 **local_b8;
  int local_b0;
  int local_ac;
  int local_a8;
  undefined8 **local_a0;
  uint local_98;
  undefined4 local_94;
  undefined **local_90;
  undefined8 **local_88;
  int local_7c;
  ushort local_6a;
  undefined **local_68;
  undefined8 **local_60;
  int local_54;
  ushort local_42;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_42 = 0x200;
  local_68 = icu_53::UnicodeString::vftable;
  FUN_143a98ca0(param_1,param_1,&local_68);
  pppuVar5 = (undefined8 ***)0x0;
  iVar6 = 0;
  local_b8 = (undefined8 ***)0x0;
  local_ac = 0;
  iVar3 = (int)(char)local_42;
  if ((char)local_42 < '\0') {
    iVar3 = local_54;
  }
  _Src = pppuVar5;
  if (0 < iVar3) {
    iVar9 = iVar3 + 1;
    if (iVar9 < 1) {
      iVar6 = 0;
      if ((iVar9 < 0) && (iVar6 = 0, iVar9 != 0)) {
        local_b0 = iVar9;
        TArray<wchar_t,FDefaultAllocator>::ResizeShrink(&local_b8);
        iVar6 = local_b0;
      }
    }
    else {
      local_b0 = iVar9;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
      iVar6 = local_b0;
    }
    _Src = (undefined8 ***)local_b8;
    pppuVar4 = pppuVar5;
    if (((local_42 & 0x1100) == 0) && (pppuVar4 = &local_60, (local_42 & 0x200) == 0)) {
      pppuVar4 = (undefined8 ***)local_60;
    }
    ::_guard_xfg_dispatch_icall_nop(local_b8,pppuVar4,(longlong)iVar3 * 2);
    *(undefined2 *)((longlong)iVar3 * 2 + (longlong)_Src) = 0;
  }
  local_90 = icu_53::UnicodeString::vftable;
  local_6a = 0x200;
  FUN_143a99290(param_1,param_1,&local_90);
  local_a0 = (undefined8 ***)0x0;
  local_94 = 0;
  iVar3 = (int)(char)local_6a;
  if ((char)local_6a < '\0') {
    iVar3 = local_7c;
  }
  pppuVar4 = pppuVar5;
  if (0 < iVar3) {
    uVar1 = iVar3 + 1;
    if ((int)uVar1 < 1) {
      pppuVar8 = pppuVar5;
      if (((int)uVar1 < 0) && (pppuVar8 = (undefined8 ***)0x0, uVar1 != 0)) {
        local_98 = uVar1;
        TArray<wchar_t,FDefaultAllocator>::ResizeShrink(&local_a0);
        goto LAB_1415dc938;
      }
    }
    else {
      local_98 = uVar1;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0,0);
LAB_1415dc938:
      pppuVar8 = (undefined8 ***)(ulonglong)local_98;
    }
    pppuVar4 = (undefined8 ***)local_a0;
    if (((local_6a & 0x1100) == 0) && (pppuVar5 = &local_88, (local_6a & 0x200) == 0)) {
      pppuVar5 = (undefined8 ***)local_88;
    }
    ::_guard_xfg_dispatch_icall_nop(local_a0,pppuVar5,(longlong)iVar3 * 2);
    *(undefined2 *)((longlong)pppuVar4 + (longlong)iVar3 * 2) = 0;
    iVar3 = (int)pppuVar8;
    if (1 < iVar3) {
      local_b8 = (undefined8 ***)0x0;
      local_b0 = iVar6;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b8,(3 - (uint)(iVar6 != 0)) + iVar6,0)
      ;
      pppuVar5 = (undefined8 ***)local_b8;
      ::_guard_xfg_dispatch_icall_nop(local_b8,_Src,(longlong)iVar6 * 2);
      iVar6 = local_b0;
      lVar7 = (longlong)local_b0;
      local_a8 = local_ac;
      local_b0 = (3 - (uint)(local_b0 != 0)) + local_b0;
      if (local_ac < local_b0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,iVar6);
        pppuVar5 = (undefined8 ***)local_b8;
      }
      puVar2 = (undefined4 *)((longlong)pppuVar5 + (lVar7 - (ulonglong)(iVar6 != 0)) * 2);
      *puVar2 = 0x20002c;
      *(undefined2 *)(puVar2 + 1) = 0;
      local_a8 = local_ac;
      if (local_b0 < 2) {
        *param_2 = 0;
        *(int *)(param_2 + 1) = iVar3;
        if (iVar3 == 0) {
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,pppuVar8);
          ::_guard_xfg_dispatch_icall_nop((void *)*param_2,pppuVar4,(longlong)iVar3 * 2);
        }
        if (pppuVar5 != (undefined8 ***)0x0) {
          if (DAT_1468c2208 == (longlong *)0x0) {
            FUN_1415d7ea0();
          }
          (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,pppuVar5);
        }
      }
      else {
        iVar6 = iVar3 + -1;
        if (iVar3 == 0) {
          iVar6 = 0;
        }
        if ((local_b0 != 0) || (iVar3 = 1, iVar6 == 0)) {
          iVar3 = 0;
        }
        iVar3 = iVar3 + local_b0 + iVar6;
        local_b8 = pppuVar5;
        if (local_ac < iVar3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_b8,iVar3);
          local_a8 = local_ac;
        }
        iVar3 = local_b0;
        pppuVar5 = (undefined8 ***)local_b8;
        iVar9 = local_b0;
        local_ac = local_a8;
        if (iVar6 != 0) {
          lVar7 = (longlong)local_b0;
          local_b0 = local_b0 + (uint)(local_b0 == 0) + iVar6;
          if (local_a8 < local_b0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,iVar3,0);
            local_a8 = local_ac;
          }
          iVar9 = local_b0;
          pppuVar5 = (undefined8 ***)local_b8;
          _Dst = (void *)((longlong)local_b8 + (lVar7 - (ulonglong)(iVar3 != 0)) * 2);
          local_ac = local_a8;
          ::_guard_xfg_dispatch_icall_nop(_Dst,pppuVar4,(longlong)iVar6 * 2);
          *(undefined2 *)((longlong)iVar6 * 2 + (longlong)_Dst) = 0;
        }
        *param_2 = pppuVar5;
        *(int *)(param_2 + 1) = iVar9;
        *(int *)((longlong)param_2 + 0xc) = local_a8;
      }
      if (pppuVar4 != (undefined8 ***)0x0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
        }
        (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,pppuVar4);
      }
      FUN_143a8dc60(&local_90);
      if (_Src != (undefined8 ***)0x0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
          (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,_Src);
        }
        else {
          (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,_Src);
        }
      }
      goto LAB_1415dcbc8;
    }
  }
  *param_2 = _Src;
  *(int *)(param_2 + 1) = iVar6;
  *(int *)((longlong)param_2 + 0xc) = local_ac;
  if (pppuVar4 != (undefined8 ***)0x0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,pppuVar4);
  }
  FUN_143a8dc60(&local_90);
LAB_1415dcbc8:
  FUN_143a8dc60(&local_68);
  return param_2;
}



// FUNCTION 1415dcc00 FUN_1415dcc00 body=130 status=ok
// SIG undefined FUN_1415dcc00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1415dcc00(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b5190) {
    _Init_thread_header(&DAT_1468b5190);
    if (DAT_1468b5190 == -1) {
      DAT_1468b5180 = 0;
      _DAT_1468b5188 = 0;
      atexit(FUN_143e782b0);
      _Init_thread_footer(&DAT_1468b5190);
    }
  }
  puVar1 = &DAT_1468b5180;
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*param_1;
  }
  return puVar1;
}



// FUNCTION 1415dcc90 FUN_1415dcc90 body=131 status=ok
// SIG undefined FUN_1415dcc90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1415dcc90(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b51a8) {
    _Init_thread_header(&DAT_1468b51a8);
    if (DAT_1468b51a8 == -1) {
      DAT_1468b5198 = 0;
      _DAT_1468b51a0 = 0;
      atexit(FUN_143e782f0);
      _Init_thread_footer(&DAT_1468b51a8);
    }
  }
  puVar1 = &DAT_1468b5198;
  if (*(undefined8 **)(param_1 + 8) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 8);
  }
  return puVar1;
}



// FUNCTION 1415dcd20 FUN_1415dcd20 body=8 status=ok
// SIG undefined FUN_1415dcd20(void)

undefined8 FUN_1415dcd20(void)

{
  return DAT_1468b4fe8;
}



// FUNCTION 1415dcd30 FUN_1415dcd30 body=8 status=ok
// SIG undefined FUN_1415dcd30(void)

void FUN_1415dcd30(undefined8 *param_1)

{
  FUN_1415dcd40(*param_1);
  return;
}



// FUNCTION 1415dcd40 FUN_1415dcd40 body=648 status=ok
// SIG undefined FUN_1415dcd40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1415dcd40(longlong param_1)

{
  int *piVar1;
  longlong **pplVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar3;
  BOOL BVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_148 [32];
  undefined4 local_128 [2];
  longlong *local_120;
  longlong *local_118;
  longlong local_110;
  longlong *local_108;
  undefined8 local_100;
  longlong *local_f8 [2];
  undefined1 local_e8 [176];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  pplVar2 = (longlong **)(param_1 + 0x250);
  plVar8 = *pplVar2;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    local_108 = (longlong *)0x0;
    local_128[0] = 0;
    lVar5 = FUN_143b37370(param_1,local_128);
    plVar6 = (longlong *)operator_new(0x18);
    local_f8[0] = plVar8;
    if (plVar6 != (longlong *)0x0) {
      *(undefined4 *)(plVar6 + 1) = 1;
      *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
      plVar6[2] = lVar5;
      local_f8[0] = plVar6;
    }
    SharedPointerInternals::EnableSharedFromThis(&local_100,lVar5,lVar5);
    local_100 = 0;
    local_110 = lVar5;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_108,local_f8);
    plVar6 = local_f8[0];
    if (local_f8[0] != (longlong *)0x0) {
      LOCK();
      plVar7 = local_f8[0] + 1;
      lVar5 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_f8[0])(local_f8[0]);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    FUN_1415d6190(local_e8,local_110);
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x260);
    BVar4 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar4 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    if (*pplVar2 == (longlong *)0x0) {
      lVar5 = operator_new(0xa8);
      plVar6 = plVar8;
      if (lVar5 != 0) {
        plVar6 = (longlong *)
                 FDecimalNumberFormattingRules::FDecimalNumberFormattingRules(lVar5,local_e8);
      }
      plVar7 = (longlong *)operator_new(0x18);
      if (plVar7 != (longlong *)0x0) {
        *(undefined4 *)(plVar7 + 1) = 1;
        *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
        *plVar7 = (longlong)&PTR_DestroyObject_144cb1678;
        plVar7[2] = (longlong)plVar6;
        plVar8 = plVar7;
      }
      local_120 = plVar6;
      local_118 = plVar8;
      SharedPointerInternals::EnableSharedFromThis(&local_120,plVar6,plVar6);
      if (pplVar2 != &local_120) {
        *pplVar2 = plVar6;
        local_120 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 600,&local_118);
        plVar8 = local_118;
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar8 + 1;
        lVar5 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
    }
    LeaveCriticalSection(lpCriticalSection);
    plVar8 = *pplVar2;
    FDecimalNumberFormattingRules::~FDecimalNumberFormattingRules(local_e8);
    plVar6 = local_108;
    if (local_108 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_108 + 1;
      lVar5 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_108)(local_108);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_108 + 8))(local_108,1);
        }
      }
    }
  }
  return plVar8;
}



// FUNCTION 1415dcfd0 GetPlatformFile body=31 status=ok
// SIG undefined GetPlatformFile(void)

void FPlatformFileManager::GetPlatformFile(longlong *param_1)

{
  longlong lVar1;
  
  if (*param_1 == 0) {
    lVar1 = FUN_1416a0eb0();
    *param_1 = lVar1;
  }
  return;
}



// FUNCTION 1415dcff0 FUN_1415dcff0 body=495 status=ok
// SIG undefined FUN_1415dcff0(void)

undefined8 * FUN_1415dcff0(undefined8 param_1,longlong param_2)

{
  wchar_t *pwVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 local_res18 [16];
  
  lVar7 = 0;
  while (pwVar1 = L"LogFile" + lVar7, lVar7 = lVar7 + 1,
        *pwVar1 == *(wchar_t *)(param_2 + -2 + lVar7 * 2)) {
    if (lVar7 == 8) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38) < DAT_1468b5110) {
        _Init_thread_header(&DAT_1468b5110);
        if (DAT_1468b5110 == -1) {
          DAT_1468b5108 = (undefined8 *)operator_new(0x10);
          if (DAT_1468b5108 != (undefined8 *)0x0) {
            DAT_1468b5108[1] = 0;
            *DAT_1468b5108 = &PTR_FUN_144cb0418;
          }
          atexit((_func_5014 *)&LAB_143e78200);
          _Init_thread_footer(&DAT_1468b5110);
          return DAT_1468b5108;
        }
      }
      return DAT_1468b5108;
    }
  }
  lVar7 = -1;
  do {
    if (L"CachedReadFile"[lVar7 + 1] != *(wchar_t *)(param_2 + 2 + lVar7 * 2)) break;
    lVar7 = lVar7 + 2;
    if (lVar7 == 0xf) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38) < DAT_1468b5120) {
        _Init_thread_header(&DAT_1468b5120);
        if (DAT_1468b5120 == -1) {
          DAT_1468b5118 = (undefined8 *)operator_new(0x10);
          if (DAT_1468b5118 != (undefined8 *)0x0) {
            DAT_1468b5118[1] = 0;
            *DAT_1468b5118 = &PTR_FUN_144cb0998;
          }
          atexit((_func_5014 *)&LAB_143e78220);
          _Init_thread_footer(&DAT_1468b5120);
          return DAT_1468b5118;
        }
      }
      return DAT_1468b5118;
    }
  } while (L"CachedReadFile"[lVar7] == *(wchar_t *)(param_2 + lVar7 * 2));
  uVar3 = FUN_14168dc80();
  cVar2 = FModuleManager::ModuleExists(uVar3,param_2);
  if (cVar2 != '\0') {
    puVar4 = (undefined8 *)FName::FName(local_res18,param_2,1);
    uVar3 = *puVar4;
    uVar5 = FUN_14168dc80();
    plVar6 = (longlong *)FUN_141690010(uVar5,uVar3);
    if (plVar6 != (longlong *)0x0) {
      puVar4 = (undefined8 *)(**(code **)(*plVar6 + 0x40))(plVar6);
      return puVar4;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1415dd1e0 GetPluralForm body=9 status=ok
// SIG undefined GetPluralForm(void)

void FCulture::GetPluralForm(undefined8 param_1,float param_2)

{
  GetPluralForm(param_1,(double)param_2);
  return;
}



// FUNCTION 1415dd1f0 GetPluralForm body=133 status=ok
// SIG undefined GetPluralForm(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FCulture::GetPluralForm(longlong *param_1,undefined8 param_2,char param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  if (param_3 == '\0') {
    uVar2 = *(undefined8 *)(*param_1 + 0x208);
  }
  else {
    uVar2 = *(undefined8 *)(*param_1 + 0x210);
  }
  local_48 = param_2;
  FUN_143b5beb0(uVar2,local_40,(int)param_2);
  uVar1 = FUN_1415df470(local_40);
  FUN_143a8dc60(local_40);
  return uVar1;
}



// FUNCTION 1415dd280 GetPluralForm body=13 status=ok
// SIG undefined GetPluralForm(void)

void FCulture::GetPluralForm(undefined8 param_1,longlong param_2)

{
  GetPluralForm(param_1,(double)param_2);
  return;
}



// FUNCTION 1415dd290 GetPluralForm body=26 status=ok
// SIG undefined GetPluralForm(void)

void FCulture::GetPluralForm(undefined8 param_1,longlong param_2)

{
  double dVar1;
  
  dVar1 = (double)param_2;
  if (param_2 < 0) {
    dVar1 = dVar1 + 1.8446744073709552e+19;
  }
  GetPluralForm(param_1,dVar1);
  return;
}



// FUNCTION 1415dd2b0 FUN_1415dd2b0 body=131 status=ok
// SIG undefined FUN_1415dd2b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1415dd2b0(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b51c0) {
    _Init_thread_header(&DAT_1468b51c0);
    if (DAT_1468b51c0 == -1) {
      DAT_1468b51b0 = 0;
      _DAT_1468b51b8 = 0;
      atexit(FUN_143e78330);
      _Init_thread_footer(&DAT_1468b51c0);
    }
  }
  puVar1 = &DAT_1468b51b0;
  if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x10);
  }
  return puVar1;
}



// FUNCTION 1415dd340 FUN_1415dd340 body=131 status=ok
// SIG undefined FUN_1415dd340(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1415dd340(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b51d8) {
    _Init_thread_header(&DAT_1468b51d8);
    if (DAT_1468b51d8 == -1) {
      DAT_1468b51c8 = 0;
      _DAT_1468b51d0 = 0;
      atexit(FUN_143e78370);
      _Init_thread_footer(&DAT_1468b51d8);
    }
  }
  puVar1 = &DAT_1468b51c8;
  if (*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x18);
  }
  return puVar1;
}



// FUNCTION 1415dd3d0 GetPrioritizedCultureNames body=2402 status=ok
// SIG undefined GetPrioritizedCultureNames(void)

longlong *
FICUInternationalization::GetPrioritizedCultureNames
          (ulonglong param_1,longlong *param_2,void **param_3)

{
  longlong *plVar1;
  void *pvVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char cVar5;
  undefined1 uVar6;
  wint_t wVar7;
  wint_t wVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined8 *puVar13;
  undefined2 *puVar14;
  int *piVar15;
  undefined2 *puVar16;
  undefined8 *puVar17;
  undefined2 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  wint_t *pwVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined8 *puVar25;
  longlong *plVar26;
  undefined8 *local_res20;
  undefined8 *local_158;
  undefined8 local_150;
  undefined8 *local_148;
  uint local_140;
  uint local_13c;
  void *local_138;
  undefined8 local_130;
  int local_128;
  int local_124;
  int local_120 [2];
  longlong local_118;
  longlong *local_110;
  undefined2 *local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined8 local_80;
  undefined8 *local_78;
  longlong *local_70;
  uint local_68;
  ulonglong local_60;
  longlong *local_58;
  undefined8 *local_50;
  ulonglong local_48 [2];
  
  puVar20 = (undefined8 *)0x0;
  local_138 = (void *)0x0;
  local_130 = 0;
  local_60 = param_1;
  ConditionalInitializeCultureMappings();
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0xd0,&local_128,param_3);
  puVar17 = puVar20;
  if (local_128 != -1) {
    puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0xd0) + (longlong)local_128 * 0x28);
  }
  puVar13 = puVar17 + 2;
  if (puVar17 == (undefined8 *)0x0) {
    puVar13 = puVar20;
  }
  if (puVar13 == (undefined8 *)0x0) {
    if (&local_138 != param_3) {
      iVar9 = *(int *)(param_3 + 1);
      pvVar2 = *param_3;
      local_130 = CONCAT44(local_130._4_4_,iVar9);
      if (iVar9 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_138,iVar9,0);
        ::_guard_xfg_dispatch_icall_nop(local_138,pvVar2,(longlong)iVar9 * 2);
      }
    }
  }
  else {
    FString::operator=(&local_138);
  }
  *param_2 = 0;
  param_2[1] = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = (undefined2 *)0x0;
  local_80 = 0;
  cVar5 = <lambda_8b80504b677f9d9564e84d4ee5403399>::operator()(&local_60,&local_138,&local_b8);
  if (cVar5 != '\0') {
    puVar19 = (undefined8 *)0x0;
    local_13c = 0;
    local_148 = (undefined8 *)0x0;
    local_140 = 0;
    puVar17 = puVar20;
    puVar13 = puVar20;
    if (((int)local_90 < 2) && (puVar17 = puVar19, 1 < (int)local_80)) {
      TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0x78,&local_124,&local_a8);
      if (local_124 != -1) {
        puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x78) + (longlong)local_124 * 0x28);
      }
      puVar19 = puVar13 + 2;
      if (puVar13 == (undefined8 *)0x0) {
        puVar19 = puVar20;
      }
      puVar13 = (undefined8 *)0x0;
      if (puVar19 != (undefined8 *)0x0) {
        piVar15 = (int *)*puVar19;
        puVar11 = (undefined8 *)((longlong)*(int *)(puVar19 + 1) & 0x3fffffffffffffff);
        if (piVar15 + *(int *)(puVar19 + 1) < piVar15) {
          puVar11 = puVar20;
        }
        puVar19 = puVar20;
        puVar25 = puVar20;
        local_res20 = puVar11;
        if (puVar11 != (undefined8 *)0x0) {
          do {
            lVar24 = (longlong)*piVar15 * 0x40 + *(longlong *)(param_1 + 0x18);
            if (1 < *(int *)(lVar24 + 0x28)) {
              if (*(int *)(lVar24 + 0x38) == 0) {
                puVar18 = &DAT_143f3eda8;
              }
              else {
                puVar18 = *(undefined2 **)(lVar24 + 0x30);
              }
              puVar14 = &DAT_143f3eda8;
              if ((int)local_80 != 0) {
                puVar14 = local_88;
              }
              iVar9 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar14,puVar18);
              puVar11 = local_res20;
              if (iVar9 == 0) {
                iVar9 = (int)puVar20;
                local_140 = iVar9 + 1;
                if ((int)local_13c < (int)local_140) {
                  TArray<FICUInternationalization::FICUCultureData,FDefaultAllocator>::ResizeGrow
                            (&local_148,puVar20);
                  puVar25 = local_148;
                }
                puVar20 = (undefined8 *)(ulonglong)local_140;
                puVar17 = puVar25 + (longlong)iVar9 * 8;
                FString::FString(puVar17,lVar24);
                FString::FString(puVar17 + 2,lVar24 + 0x10);
                FString::FString(puVar17 + 4,lVar24 + 0x20);
                FString::FString(puVar17 + 6,lVar24 + 0x30);
                puVar11 = local_res20;
              }
            }
            uVar22 = (uint)puVar20;
            piVar15 = piVar15 + 1;
            puVar19 = (undefined8 *)((longlong)puVar19 + 1);
          } while (puVar19 != puVar11);
          if (uVar22 != 0) goto LAB_1415dd6c1;
          puVar17 = (undefined8 *)(ulonglong)local_13c;
          puVar13 = puVar25;
        }
      }
    }
    local_140 = 1;
    puVar25 = puVar13;
    if ((int)puVar17 < 1) {
      TArray<FICUInternationalization::FICUCultureData,FDefaultAllocator>::ResizeGrow(&local_148,0);
      puVar25 = local_148;
    }
    uVar22 = local_140;
    FString::FString(puVar25,&local_b8);
    FString::FString(puVar25 + 2,&local_a8);
    FString::FString(puVar25 + 4,&local_98);
    FString::FString(puVar25 + 6,&local_88);
LAB_1415dd6c1:
    local_158 = (undefined8 *)0x0;
    local_150 = 0;
    if (0 < (int)(uVar22 * 3)) {
      TArray<FICUInternationalization::FICUCultureData,FDefaultAllocator>::ResizeTo(&local_158);
    }
    puVar17 = puVar25 + (longlong)(int)uVar22 * 8;
    local_50 = puVar17;
    if (puVar25 != puVar17) {
      puVar25 = puVar25 + 4;
      do {
        local_78 = puVar25;
        FCulture::GetPrioritizedParentCultureNames(&local_70,puVar25 + -2,puVar25,puVar25 + 2);
        uVar23 = (ulonglong)(int)local_68;
        local_58 = local_70 + uVar23 * 2;
        puVar20 = puVar25;
        if (local_70 != local_58) {
          plVar26 = local_70;
          do {
            local_108 = (undefined2 *)0x0;
            local_100 = 0;
            local_f8 = 0;
            local_f0 = 0;
            local_e8 = 0;
            local_e0 = 0;
            local_d8 = 0;
            local_d0 = 0;
            TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
            ::FindId((longlong *)(param_1 + 0x28),local_120,plVar26);
            piVar15 = (int *)0x0;
            if (local_120[0] != -1) {
              piVar15 = (int *)((longlong)local_120[0] * 0x20 + *(longlong *)(param_1 + 0x28));
            }
            piVar12 = piVar15 + 4;
            if (piVar15 == (int *)0x0) {
              piVar12 = (int *)0x0;
            }
            if (piVar12 == (int *)0x0) {
              FindOrMakeCulture(param_1,&local_118,plVar26,0);
              plVar3 = local_110;
              lVar24 = local_118;
              if (local_118 != 0) {
                FString::operator=(&local_108,local_118 + 0x30);
                FString::operator=(&local_f8,lVar24 + 0x70);
                FString::operator=(&local_e8,lVar24 + 0xb0);
                FString::operator=(&local_d8,lVar24 + 0x90);
                plVar3 = local_110;
                if (local_110 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_110 + 1;
                  lVar24 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar24 == 1) {
                    (**(code **)*local_110)(local_110);
                    LOCK();
                    piVar15 = (int *)((longlong)plVar3 + 0xc);
                    iVar9 = *piVar15;
                    *piVar15 = *piVar15 + -1;
                    UNLOCK();
                    if (iVar9 == 1) {
                      (**(code **)(*local_110 + 8))(local_110,1);
                    }
                  }
                }
                goto LAB_1415dd891;
              }
              if (local_110 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_110 + 1;
                lVar24 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar24 == 1) {
                  (**(code **)*local_110)(local_110);
                  LOCK();
                  piVar15 = (int *)((longlong)plVar3 + 0xc);
                  iVar9 = *piVar15;
                  *piVar15 = *piVar15 + -1;
                  UNLOCK();
                  if (iVar9 == 1) {
                    (**(code **)(*local_110 + 8))(local_110,1);
                  }
                }
              }
            }
            else {
              lVar24 = (longlong)*piVar12 * 0x40 + *(longlong *)(param_1 + 0x18);
              FString::operator=(&local_108,lVar24);
              FString::operator=(&local_f8,lVar24 + 0x10);
              FString::operator=(&local_e8,lVar24 + 0x20);
              FString::operator=(&local_d8,lVar24 + 0x30);
LAB_1415dd891:
              puVar18 = local_108;
              puVar17 = local_158 + (longlong)(int)local_150 * 8;
              if (local_158 != puVar17) {
                iVar9 = (int)local_100;
                puVar20 = local_158;
                do {
                  puVar14 = &DAT_143f3eda8;
                  if (iVar9 != 0) {
                    puVar14 = puVar18;
                  }
                  if (*(int *)(puVar20 + 1) == 0) {
                    puVar16 = &DAT_143f3eda8;
                  }
                  else {
                    puVar16 = (undefined2 *)*puVar20;
                  }
                  iVar10 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar16,puVar14);
                  if (iVar10 == 0) {
                    if ((int)((longlong)puVar20 - (longlong)local_158 >> 6) != -1)
                    goto LAB_1415dd95a;
                    break;
                  }
                  puVar20 = puVar20 + 8;
                } while (puVar20 != puVar17);
              }
              uVar23 = local_150;
              lVar24 = (longlong)(int)local_150;
              iVar9 = (int)local_150 + 1;
              local_150 = CONCAT44(local_150._4_4_,iVar9);
              if (local_150._4_4_ < iVar9) {
                TArray<FICUInternationalization::FICUCultureData,FDefaultAllocator>::ResizeGrow
                          (&local_158,uVar23 & 0xffffffff);
              }
              puVar17 = local_158 + lVar24 * 8;
              FString::FString(puVar17,&local_108);
              FString::FString(puVar17 + 2,&local_f8);
              FString::FString(puVar17 + 4,&local_e8);
              FString::FString(puVar17 + 6,&local_d8);
              puVar18 = local_108;
LAB_1415dd95a:
              lVar24 = local_d8;
              if (local_d8 != 0) {
                if (DAT_1468c2208 == (longlong *)0x0) {
                  FUN_1415d7ea0();
                }
                (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar24);
              }
              lVar24 = local_e8;
              if (local_e8 != 0) {
                if (DAT_1468c2208 == (longlong *)0x0) {
                  FUN_1415d7ea0();
                }
                (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar24);
              }
              lVar24 = local_f8;
              if (local_f8 != 0) {
                if (DAT_1468c2208 == (longlong *)0x0) {
                  FUN_1415d7ea0();
                }
                (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar24);
              }
              if (puVar18 != (undefined2 *)0x0) {
                if (DAT_1468c2208 == (longlong *)0x0) {
                  FUN_1415d7ea0();
                }
                (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,puVar18);
              }
            }
            plVar26 = plVar26 + 2;
          } while (plVar26 != local_58);
          uVar23 = (ulonglong)local_68;
          puVar17 = local_50;
          puVar20 = local_78;
        }
        plVar3 = local_70;
        uVar22 = (uint)uVar23;
        plVar26 = local_70;
        while (uVar22 != 0) {
          lVar24 = *plVar26;
          if (lVar24 != 0) {
            if (DAT_1468c2208 == (longlong *)0x0) {
              FUN_1415d7ea0();
            }
            (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar24);
          }
          plVar26 = plVar26 + 2;
          uVar22 = (int)uVar23 - 1;
          uVar23 = (ulonglong)uVar22;
        }
        if (plVar3 != (longlong *)0x0) {
          if (DAT_1468c2208 == (longlong *)0x0) {
            FUN_1415d7ea0();
          }
          (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,plVar3);
        }
        puVar25 = puVar20 + 8;
        local_78 = puVar25;
      } while (puVar20 + 4 != puVar17);
    }
    puVar18 = local_88;
    iVar9 = (int)local_80;
    pwVar21 = &DAT_144caf098;
    puVar14 = &DAT_143f3eda8;
    if ((int)local_80 != 0) {
      puVar14 = local_88;
    }
    do {
      wVar7 = *(wint_t *)((longlong)(puVar14 + -0xa265784c) + (longlong)pwVar21);
      if ((wVar7 == 0) && (*pwVar21 == 0)) goto LAB_1415ddba4;
      if (wVar7 != *pwVar21) {
        wVar7 = towlower(wVar7);
        wVar8 = towlower(*pwVar21);
        if (wVar7 != wVar8) goto LAB_1415ddb4a;
      }
      pwVar21 = pwVar21 + 1;
    } while( true );
  }
  goto LAB_1415ddc5c;
LAB_1415ddb96:
  if (wVar7 == wVar8) goto LAB_1415ddba4;
  uVar6 = 0;
  goto LAB_1415ddba6;
LAB_1415ddb4a:
  if (wVar7 != wVar8) {
    pwVar21 = &DAT_144caf0a0;
    puVar14 = &DAT_143f3eda8;
    if (iVar9 != 0) {
      puVar14 = puVar18;
    }
    do {
      wVar7 = *(wint_t *)((longlong)(puVar14 + -0xa2657850) + (longlong)pwVar21);
      if ((wVar7 == 0) && (*pwVar21 == 0)) break;
      if (wVar7 != *pwVar21) {
        wVar7 = towlower(wVar7);
        wVar8 = towlower(*pwVar21);
        if (wVar7 != wVar8) goto LAB_1415ddb96;
      }
      pwVar21 = pwVar21 + 1;
    } while( true );
  }
LAB_1415ddba4:
  uVar6 = 1;
LAB_1415ddba6:
  uVar23 = local_150;
  iVar9 = (int)local_150;
  lVar24 = (longlong)(int)local_150;
  local_res20 = (undefined8 *)CONCAT71(local_res20._1_7_,uVar6);
  AlgoImpl::
  IntroSortInternal<FICUInternationalization::FICUCultureData,FIdentityFunctor,TDereferenceWrapper<FICUInternationalization::FICUCultureData,<lambda_ce5116e61a4c0a46f3db8549ec9beeaa>_>_>
            (local_158,lVar24,param_1 & 0xff,&local_res20);
  if (*(int *)((longlong)param_2 + 0xc) < iVar9) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,uVar23 & 0xffffffff);
  }
  puVar20 = local_158 + lVar24 * 8;
  for (puVar17 = local_158; puVar17 != puVar20; puVar17 = puVar17 + 8) {
    iVar9 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar9 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar9);
    }
    FString::FString((longlong)iVar9 * 0x10 + *param_2,puVar17);
  }
  TArray<FICUInternationalization::FICUCultureData,FDefaultAllocator>::
  ~TArray<FICUInternationalization::FICUCultureData,FDefaultAllocator>(&local_158);
  TArray<FICUInternationalization::FICUCultureData,FDefaultAllocator>::
  ~TArray<FICUInternationalization::FICUCultureData,FDefaultAllocator>(&local_148);
LAB_1415ddc5c:
  local_48[0] = param_1;
  FUN_1415cc020(param_2,local_48);
  if ((int)param_2[1] == 0) {
    local_c8 = 0;
    local_c0 = 3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
    uVar4 = local_c8;
    FGenericPlatformString::Memcpy(local_c8,&DAT_144caf0a8,6);
    iVar9 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar9 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar9);
    }
    puVar17 = (undefined8 *)((longlong)iVar9 * 0x10 + *param_2);
    *puVar17 = uVar4;
    *(undefined4 *)(puVar17 + 1) = (undefined4)local_c0;
    *(undefined4 *)((longlong)puVar17 + 0xc) = local_c0._4_4_;
  }
  FICUCultureData::~FICUCultureData(&local_b8);
  pvVar2 = local_138;
  if (local_138 != (void *)0x0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,pvVar2);
  }
  return param_2;
}



// FUNCTION 1415ddd40 GetPrioritizedParentCultureNames body=44 status=ok
// SIG undefined GetPrioritizedParentCultureNames(void)

undefined8 FCulture::GetPrioritizedParentCultureNames(longlong param_1,undefined8 param_2)

{
  GetPrioritizedParentCultureNames(param_2,param_1 + 0x70,param_1 + 0xb0,param_1 + 0x90);
  return param_2;
}



// FUNCTION 1415ddd70 GetPrioritizedParentCultureNames body=2146 status=ok
// SIG undefined GetPrioritizedParentCultureNames(void)

longlong *
FCulture::GetPrioritizedParentCultureNames
          (longlong *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  undefined2 *puVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined4 uVar9;
  void *pvVar10;
  void *pvVar11;
  void *pvVar12;
  int iVar13;
  undefined4 uVar14;
  void *local_res8;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  int local_50;
  int local_4c;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((1 < *(int *)(param_3 + 1)) && (1 < (int)param_4[1])) {
    iVar13 = *(int *)(param_2 + 1);
    pvVar12 = (void *)*param_2;
    local_68 = (void *)0x0;
    local_60._0_4_ = iVar13;
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,iVar13 + (2 - (uint)(iVar13 != 0)),0)
    ;
    pvVar10 = local_68;
    ::_guard_xfg_dispatch_icall_nop(local_68,pvVar12,(longlong)iVar13 * 2);
    iVar13 = (int)local_60;
    lVar8 = (longlong)(int)local_60;
    local_60._0_4_ = (2 - (uint)((int)local_60 != 0)) + (int)local_60;
    if (local_60._4_4_ < (int)local_60) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar13);
      pvVar10 = local_68;
    }
    puVar1 = (undefined2 *)((longlong)pvVar10 + (lVar8 - (ulonglong)(iVar13 != 0)) * 2);
    *puVar1 = 0x2d;
    puVar1[1] = 0;
    iVar13 = *(int *)(param_3 + 1);
    if ((int)local_60 < 2) {
      pvVar12 = (void *)*param_3;
      local_68 = (void *)0x0;
      local_res8 = pvVar10;
      local_60._0_4_ = iVar13;
      if (iVar13 == 0) {
        local_78 = (void *)0x0;
        local_70._4_4_ = 0;
        local_70._0_4_ = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,iVar13,0);
        pvVar10 = local_68;
        ::_guard_xfg_dispatch_icall_nop(local_68,pvVar12,(longlong)iVar13 * 2);
        local_78 = pvVar10;
        local_70._4_4_ = local_60._4_4_;
        local_70._0_4_ = (int)local_60;
      }
    }
    else {
      iVar5 = iVar13 + -1;
      if (iVar13 == 0) {
        iVar5 = 0;
      }
      if (((int)local_60 != 0) || (iVar13 = 1, iVar5 == 0)) {
        iVar13 = 0;
      }
      local_res8 = (void *)0x0;
      local_70._4_4_ = local_60._4_4_;
      iVar3 = (int)local_60;
      local_78 = pvVar10;
      if (local_60._4_4_ < (int)local_60 + iVar13 + iVar5) {
        local_70._0_4_ = (int)local_60;
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78);
        iVar3 = (int)local_70;
      }
      pvVar12 = (void *)*param_3;
      local_70._0_4_ = iVar3;
      if (iVar5 != 0) {
        local_70._0_4_ = iVar5 + (uint)(iVar3 == 0) + iVar3;
        if (local_70._4_4_ < (int)local_70) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar3);
        }
        iVar2 = local_70._4_4_;
        iVar13 = (int)local_70;
        pvVar11 = local_78;
        pvVar10 = (void *)((longlong)local_78 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
        ::_guard_xfg_dispatch_icall_nop(pvVar10,pvVar12,(longlong)iVar5 * 2);
        *(undefined2 *)((longlong)pvVar10 + (longlong)iVar5 * 2) = 0;
        local_78 = pvVar11;
        local_70._4_4_ = iVar2;
        local_70._0_4_ = iVar13;
      }
    }
    iVar13 = (int)local_70;
    if (local_70._4_4_ < (int)((int)local_70 + 1 + (uint)((int)local_70 == 0))) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78);
      iVar13 = (int)local_70;
    }
    iVar5 = (2 - (uint)(iVar13 != 0)) + iVar13;
    local_70 = CONCAT44(local_70._4_4_,iVar5);
    iVar3 = local_70._4_4_;
    if (local_70._4_4_ < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar13);
      iVar3 = local_70._4_4_;
      iVar5 = (int)local_70;
    }
    pvVar12 = local_78;
    pvVar10 = (void *)0x0;
    iVar2 = 0;
    puVar1 = (undefined2 *)((longlong)local_78 + ((longlong)iVar13 - (ulonglong)(iVar13 != 0)) * 2);
    *puVar1 = 0x2d;
    puVar1[1] = 0;
    iVar13 = (int)param_4[1];
    if (iVar5 < 2) {
      pvVar11 = (void *)*param_4;
      local_68 = (void *)0x0;
      local_60 = CONCAT44(local_60._4_4_,iVar13);
      if (iVar13 == 0) {
        iVar3 = iVar2;
        iVar13 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,iVar13);
        pvVar10 = local_68;
        ::_guard_xfg_dispatch_icall_nop(local_68,pvVar11,(longlong)iVar13 * 2);
        iVar3 = local_60._4_4_;
        iVar13 = (int)local_60;
      }
    }
    else {
      iVar7 = iVar13 + -1;
      if (iVar13 == 0) {
        iVar7 = iVar2;
      }
      if ((iVar5 != 0) || (iVar13 = 1, iVar7 == 0)) {
        iVar13 = iVar2;
      }
      local_60 = CONCAT44(iVar3,iVar5);
      local_68 = local_78;
      if (iVar3 < iVar5 + iVar7 + iVar13) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo();
        iVar3 = local_60._4_4_;
        iVar5 = (int)local_60;
      }
      local_78 = (void *)*param_4;
      pvVar12 = pvVar10;
      pvVar10 = local_68;
      iVar13 = iVar5;
      if (iVar7 != 0) {
        iVar13 = iVar7 + (uint)(iVar5 == 0) + iVar5;
        local_60 = CONCAT44(local_60._4_4_,iVar13);
        if (iVar3 < iVar13) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar5);
          iVar3 = local_60._4_4_;
          iVar13 = (int)local_60;
        }
        pvVar10 = local_68;
        pvVar11 = (void *)(((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2 + (longlong)local_68);
        ::_guard_xfg_dispatch_icall_nop(pvVar11,local_78,(longlong)iVar7 * 2);
        *(undefined2 *)((longlong)pvVar11 + (longlong)iVar7 * 2) = 0;
      }
    }
    iVar5 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar5 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar5);
    }
    plVar4 = (longlong *)((longlong)iVar5 * 0x10 + *param_1);
    *plVar4 = (longlong)pvVar10;
    *(int *)(plVar4 + 1) = iVar13;
    *(int *)((longlong)plVar4 + 0xc) = iVar3;
    if (pvVar12 != (void *)0x0) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,pvVar12);
    }
    if (local_res8 != (void *)0x0) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_res8);
    }
  }
  if (1 < (int)param_4[1]) {
    iVar13 = *(int *)(param_2 + 1);
    pvVar12 = (void *)*param_2;
    local_68 = (void *)0x0;
    local_60._0_4_ = iVar13;
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,iVar13 + (2 - (uint)(iVar13 != 0)),0)
    ;
    pvVar10 = local_68;
    ::_guard_xfg_dispatch_icall_nop(local_68,pvVar12,(longlong)iVar13 * 2);
    iVar13 = (int)local_60;
    lVar8 = (longlong)(int)local_60;
    local_60._0_4_ = (2 - (uint)((int)local_60 != 0)) + (int)local_60;
    if (local_60._4_4_ < (int)local_60) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar13);
      pvVar10 = local_68;
    }
    pvVar12 = (void *)0x0;
    iVar5 = 0;
    lVar8 = (lVar8 - (ulonglong)(iVar13 != 0)) * 2;
    *(undefined2 *)(lVar8 + (longlong)pvVar10) = 0x2d;
    *(undefined2 *)(lVar8 + 2 + (longlong)pvVar10) = 0;
    iVar13 = (int)param_4[1];
    if ((int)local_60 < 2) {
      pvVar11 = (void *)*param_4;
      local_68 = (void *)0x0;
      local_60 = CONCAT44(local_60._4_4_,iVar13);
      if (iVar13 == 0) {
        iVar2 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,iVar13);
        pvVar12 = local_68;
        ::_guard_xfg_dispatch_icall_nop(local_68,pvVar11,(longlong)iVar13 * 2);
        iVar5 = local_60._4_4_;
        iVar2 = (int)local_60;
      }
    }
    else {
      iVar3 = iVar13 + -1;
      if (iVar13 == 0) {
        iVar3 = iVar5;
      }
      if (((int)local_60 != 0) || (iVar13 = 1, iVar3 == 0)) {
        iVar13 = iVar5;
      }
      iVar2 = iVar13 + iVar3 + (int)local_60;
      iVar5 = local_60._4_4_;
      iVar13 = (int)local_60;
      local_68 = pvVar10;
      if (local_60._4_4_ < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68,iVar2);
        iVar5 = local_60._4_4_;
        iVar13 = (int)local_60;
      }
      pvVar11 = (void *)*param_4;
      pvVar10 = pvVar12;
      pvVar12 = local_68;
      iVar2 = iVar13;
      if (iVar3 != 0) {
        iVar2 = iVar13 + (uint)(iVar13 == 0) + iVar3;
        local_60 = CONCAT44(local_60._4_4_,iVar2);
        if (iVar5 < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar13,0);
          iVar5 = local_60._4_4_;
          iVar2 = (int)local_60;
        }
        pvVar12 = local_68;
        _Dst = (void *)((longlong)local_68 + ((longlong)iVar13 - (ulonglong)(iVar13 != 0)) * 2);
        ::_guard_xfg_dispatch_icall_nop(_Dst,pvVar11,(longlong)iVar3 * 2);
        *(undefined2 *)((longlong)_Dst + (longlong)iVar3 * 2) = 0;
      }
    }
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar13);
    }
    plVar4 = (longlong *)((longlong)iVar13 * 0x10 + *param_1);
    *plVar4 = (longlong)pvVar12;
    *(int *)(plVar4 + 1) = iVar2;
    *(int *)((longlong)plVar4 + 0xc) = iVar5;
    if (pvVar10 != (void *)0x0) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,pvVar10);
    }
  }
  if (1 < *(int *)(param_3 + 1)) {
    local_78 = (void *)0x0;
    TArray<wchar_t,FDefaultAllocator>::CopyToEmpty<wchar_t>
              (&local_78,*param_2,*(int *)(param_2 + 1),0,2 - (uint)(*(int *)(param_2 + 1) != 0));
    iVar13 = (int)local_70;
    lVar8 = (longlong)(int)local_70;
    iVar5 = (2 - (uint)((int)local_70 != 0)) + (int)local_70;
    local_4c = local_70._4_4_;
    if (local_70._4_4_ < iVar5) {
      uVar6 = local_70 & 0xffffffff;
      local_70._0_4_ = iVar5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,uVar6);
      iVar5 = (int)local_70;
      local_4c = local_70._4_4_;
    }
    pvVar12 = local_78;
    local_58 = local_78;
    local_78 = (void *)0x0;
    puVar1 = (undefined2 *)((longlong)pvVar12 + (lVar8 - (ulonglong)(iVar13 != 0)) * 2);
    local_70 = 0;
    *puVar1 = 0x2d;
    puVar1[1] = 0;
    local_50 = iVar5;
    TArray<wchar_t,FDefaultAllocator>::~TArray<wchar_t,FDefaultAllocator>(&local_78);
    if (iVar5 < 2) {
      FString::FString(&local_68,param_3);
      pvVar10 = local_68;
      uVar9 = local_60._4_4_;
      uVar14 = (int)local_60;
    }
    else {
      iVar13 = *(int *)(param_3 + 1) + -1;
      if (*(int *)(param_3 + 1) == 0) {
        iVar13 = 0;
      }
      if ((iVar5 != 0) || (iVar5 = 1, iVar13 == 0)) {
        iVar5 = 0;
      }
      TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
                (&local_78,&local_58,iVar13 + iVar5);
      uVar6 = local_70;
      pvVar12 = (void *)*param_3;
      pvVar10 = local_78;
      if (iVar13 != 0) {
        iVar5 = (int)local_70;
        lVar8 = (longlong)(int)local_70;
        iVar3 = (uint)((int)local_70 == 0) + (int)local_70 + iVar13;
        local_70 = CONCAT44(local_70._4_4_,iVar3);
        if (local_70._4_4_ < iVar3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,uVar6 & 0xffffffff);
        }
        pvVar10 = local_78;
        pvVar11 = (void *)((longlong)local_78 + (lVar8 - (ulonglong)(iVar5 != 0)) * 2);
        ::_guard_xfg_dispatch_icall_nop(pvVar11,pvVar12,(longlong)iVar13 * 2);
        *(undefined2 *)((longlong)iVar13 * 2 + (longlong)pvVar11) = 0;
      }
      uVar14 = (int)local_70;
      uVar9 = local_70._4_4_;
      local_70 = 0;
      local_78 = (void *)0x0;
      TArray<wchar_t,FDefaultAllocator>::~TArray<wchar_t,FDefaultAllocator>(&local_78);
    }
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar13);
    }
    local_68 = (void *)0x0;
    plVar4 = (longlong *)((longlong)iVar13 * 0x10 + *param_1);
    local_60 = 0;
    *plVar4 = (longlong)pvVar10;
    *(undefined4 *)(plVar4 + 1) = uVar14;
    *(undefined4 *)((longlong)plVar4 + 0xc) = uVar9;
    TArray<wchar_t,FDefaultAllocator>::~TArray<wchar_t,FDefaultAllocator>(&local_68);
    TArray<wchar_t,FDefaultAllocator>::~TArray<wchar_t,FDefaultAllocator>(&local_58);
  }
  iVar13 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar13 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar13);
  }
  FString::FString((longlong)iVar13 * 0x10 + *param_1,param_2);
  return param_1;
}



// FUNCTION 1415de5e0 LockFreeTagCounterHasOverflowed body=13 status=ok
// SIG undefined LockFreeTagCounterHasOverflowed(void)

void LockFreeTagCounterHasOverflowed(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001415de5e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsGetValue(DAT_1468b5058);
  return;
}



// FUNCTION 1415de5f0 FUN_1415de5f0 body=8 status=ok
// SIG undefined FUN_1415de5f0(void)

longlong FUN_1415de5f0(longlong param_1)

{
  return param_1 + 0xb0;
}



// FUNCTION 1415de600 GetStatData body=31 status=ok
// SIG undefined GetStatData(void)

undefined8 FCachedReadPlatformFile::GetStatData(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0xe8))();
  return param_2;
}



// FUNCTION 1415de620 GetStatData body=144 status=ok
// SIG undefined GetStatData(void)

undefined8 FLoggedPlatformFile::GetStatData(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  LARGE_INTEGER local_res8;
  longlong local_18 [2];
  
  FString::PrintfImpl(local_18,L"GetStatData %s");
  QueryPerformanceCounter(&local_res8);
  (**(code **)(**(longlong **)(param_1 + 8) + 0xe8))(*(longlong **)(param_1 + 8),param_2,param_3);
  QueryPerformanceCounter(&local_res8);
  if (local_18[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_18[0]);
  }
  return param_2;
}



// FUNCTION 1415de6b0 FUN_1415de6b0 body=293 status=ok
// SIG undefined FUN_1415de6b0(void)

undefined8 * FUN_1415de6b0(longlong *param_1,int param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468b5168) && (_Init_thread_header(&DAT_1468b5168), DAT_1468b5168 == -1))
  {
    atexit(FUN_143e78410);
    _Init_thread_footer(&DAT_1468b5168);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 10);
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)param_2) * 4);
    if (iVar2 != -1) {
      do {
        plVar3 = (longlong *)(*param_1 + (longlong)iVar2 * 0x18);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x18) == param_2) {
          if (iVar2 != -1) goto LAB_1415de763;
          break;
        }
        iVar2 = (int)plVar3[2];
      } while (iVar2 != -1);
    }
  }
  plVar3 = (longlong *)0x0;
LAB_1415de763:
  plVar4 = plVar3 + 1;
  if (plVar3 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  if (plVar4 == (longlong *)0x0) {
    puVar5 = &DAT_1468b5158;
  }
  else {
    puVar5 = (undefined8 *)(*plVar4 + 8);
  }
  LeaveCriticalSection(lpCriticalSection);
  return puVar5;
}



// FUNCTION 1415de7e0 GetThreeLetterISOLanguageName body=123 status=ok
// SIG undefined GetThreeLetterISOLanguageName(void)

undefined8 *
FCulture::FICUCultureImplementation::GetThreeLetterISOLanguageName
          (undefined8 param_1,undefined8 *param_2)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  
  pcVar1 = (char *)FUN_143a8b700();
  *param_2 = 0;
  param_2[1] = 0;
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (pcVar1[lVar3] != '\0');
    iVar2 = (int)lVar3 + 1;
    *(int *)(param_2 + 1) = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    }
    FGenericPlatformString::Convert<char,wchar_t>(*param_2,iVar2,pcVar1,iVar2,0x3f);
  }
  return param_2;
}



// FUNCTION 1415de860 GetTimeFormatter body=1417 status=ok
// SIG undefined GetTimeFormatter(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FCulture::FICUCultureImplementation::GetTimeFormatter
          (longlong param_1,undefined8 *param_2,int param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong **pplVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  void *_Dst;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  bool bVar10;
  undefined4 uVar11;
  int iVar12;
  undefined1 auStack_168 [32];
  undefined4 local_148 [2];
  longlong local_140;
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  void *local_120;
  int local_118;
  longlong *local_110;
  longlong *local_108;
  longlong *local_100;
  longlong *local_f8;
  undefined8 local_f0;
  undefined **local_e8 [2];
  int local_d4;
  undefined2 local_c2;
  undefined **local_c0 [2];
  int local_ac;
  ushort local_9a;
  undefined **local_98 [4];
  undefined2 local_72;
  undefined **local_70 [4];
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  pplVar3 = (longlong **)(param_1 + 0x1e8);
  uVar11 = 2;
  local_140 = param_1;
  local_f0 = param_4;
  if (*pplVar3 == (longlong *)0x0) {
    plVar5 = (longlong *)FUN_143b56f00(2,param_1);
    local_108 = (longlong *)operator_new(0x18);
    if (local_108 != (longlong *)0x0) {
      *(undefined4 *)(local_108 + 1) = 1;
      *local_108 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)local_108 + 0xc) = 1;
      local_108[2] = (longlong)plVar5;
    }
    local_110 = plVar5;
    SharedPointerInternals::EnableSharedFromThis(&local_110,plVar5,plVar5);
    plVar5 = local_110;
    lVar7 = *local_110;
    uVar6 = FUN_143b4ac10();
    (**(code **)(lVar7 + 0xb0))(plVar5,uVar6);
    plVar5 = local_108;
    local_138 = local_110;
    if (local_108 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_108 + 1) = (int)local_108[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_108 + 1) = (int)local_108[1] + 1;
      UNLOCK();
      LOCK();
      plVar8 = local_108 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_108)(local_108);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      plVar8 = local_108;
      if (local_108 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_108 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_108)(local_108);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
    }
    local_130 = local_138;
    local_128 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    if (pplVar3 != &local_130) {
      *pplVar3 = local_138;
      local_130 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1f0,&local_128);
    }
    plVar8 = local_128;
    if (local_128 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_128 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_128)(local_128);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_128 + 8))(local_128,1);
        }
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar5 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  lVar7 = local_140;
  ICUUtilities::SanitizeTimezoneCode(&local_120,local_f0);
  iVar12 = local_118;
  local_98[0] = icu_53::UnicodeString::vftable;
  local_72 = 0x200;
  if ((local_118 != 0) && (iVar9 = local_118 + -1, 0 < iVar9)) {
    _Dst = (void *)FUN_143a8fd90(local_98,local_118);
    ::_guard_xfg_dispatch_icall_nop(_Dst,local_120,(longlong)iVar9 * 2);
    FUN_143a90820(local_98,iVar9);
  }
  plVar5 = *(longlong **)(lVar7 + 0x1f0);
  local_138 = *(longlong **)(lVar7 + 0x1e8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    iVar12 = local_118;
  }
  bVar10 = iVar12 < 2;
  if (1 < iVar12) {
    local_c0[0] = icu_53::UnicodeString::vftable;
    local_148[0] = 0;
    local_9a = 0x200;
    FUN_143b4b560(local_98,local_c0,local_148);
    local_70[0] = icu_53::UnicodeString::vftable;
    local_4a = 0x200;
    lVar7 = (**(code **)(*local_138 + 0xa8))();
    FUN_143a8dcd0(local_70,lVar7 + 8);
    local_e8[0] = icu_53::UnicodeString::vftable;
    local_c2 = 0x200;
    FUN_143b4b560(local_70,local_e8,local_148);
    if ((local_9a & 0x100) == 0) {
      iVar12 = (int)(char)local_9a;
      if ((char)local_9a < '\0') {
        iVar12 = local_ac;
      }
      iVar9 = (int)(char)local_c2;
      if ((char)local_c2 < '\0') {
        iVar9 = local_d4;
      }
      if ((((local_c2 & 0x100) == 0) && (iVar12 == iVar9)) &&
         (cVar4 = FUN_143a8ed60(local_c0,local_e8), cVar4 != '\0')) {
        bVar10 = true;
      }
      else {
        bVar10 = false;
      }
    }
    else {
      bVar10 = (bool)(local_c2._1_1_ & 1);
    }
    FUN_143a8dc60(local_e8);
    FUN_143a8dc60(local_70);
    FUN_143a8dc60(local_c0);
  }
  if (param_3 == 0) {
    if (bVar10 != false) {
      *param_2 = local_138;
      param_2[1] = plVar5;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar8 = plVar5 + 1;
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      FUN_143a8dc60(local_98);
      if (local_120 == (void *)0x0) {
        return param_2;
      }
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
        (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_120);
        return param_2;
      }
      goto LAB_1415dedb9;
    }
  }
  else if (param_3 == 1) {
    uVar11 = 3;
  }
  else if (param_3 != 2) {
    if (param_3 == 3) {
      uVar11 = 1;
    }
    else if (param_3 == 4) {
      uVar11 = 0;
    }
  }
  plVar8 = (longlong *)FUN_143b56f00(uVar11,local_140);
  local_100 = plVar8;
  local_f8 = (longlong *)operator_new(0x18);
  if (local_f8 != (longlong *)0x0) {
    *(undefined4 *)(local_f8 + 1) = 1;
    *local_f8 = (longlong)&PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)local_f8 + 0xc) = 1;
    local_f8[2] = (longlong)plVar8;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_100,plVar8,plVar8);
  if (bVar10 == false) {
    uVar6 = FUN_143b4ae60(local_98);
  }
  else {
    uVar6 = FUN_143b4ac10();
  }
  (**(code **)(*local_100 + 0xb0))(local_100,uVar6);
  plVar8 = local_f8;
  *param_2 = local_100;
  param_2[1] = local_f8;
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
    UNLOCK();
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_f8 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_f8)(local_f8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar5 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  FUN_143a8dc60(local_98);
  if (local_120 == (void *)0x0) {
    return param_2;
  }
  if (DAT_1468c2208 == (longlong *)0x0) {
    FUN_1415d7ea0();
  }
LAB_1415dedb9:
  (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_120);
  return param_2;
}



// FUNCTION 1415dedf0 FUN_1415dedf0 body=31 status=ok
// SIG undefined FUN_1415dedf0(void)

undefined8 FUN_1415dedf0(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x98))();
  return param_2;
}



// FUNCTION 1415dee10 GetTimeStamp body=144 status=ok
// SIG undefined GetTimeStamp(void)

undefined8 FLoggedPlatformFile::GetTimeStamp(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  LARGE_INTEGER local_res8;
  longlong local_18 [2];
  
  FString::PrintfImpl(local_18,L"GetTimeStamp %s");
  QueryPerformanceCounter(&local_res8);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x98))(*(longlong **)(param_1 + 8),param_2,param_3);
  QueryPerformanceCounter(&local_res8);
  if (local_18[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_18[0]);
  }
  return param_2;
}



// FUNCTION 1415deea0 GetUnrealLegacyThreeLetterISOLanguageName body=363 status=ok
// SIG undefined GetUnrealLegacyThreeLetterISOLanguageName(void)

undefined8 *
FCulture::FICUCultureImplementation::GetUnrealLegacyThreeLetterISOLanguageName
          (undefined8 param_1,undefined8 *param_2)

{
  wint_t wVar1;
  wint_t wVar2;
  char *pcVar3;
  undefined8 uVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  longlong lVar8;
  wint_t *pwVar9;
  longlong local_28 [2];
  
  pcVar3 = (char *)FUN_143a8b700();
  iVar5 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (pcVar3[lVar8] != '\0');
    iVar7 = (int)lVar8 + 1;
    *(int *)(param_2 + 1) = iVar7;
    if (0 < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    }
    FGenericPlatformString::Convert<char,wchar_t>(*param_2,iVar7,pcVar3,iVar7,0x3f);
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  pwVar9 = &DAT_144caf2d8;
  do {
    wVar1 = *(wint_t *)((longlong)(puVar6 + -0xa265796c) + (longlong)pwVar9);
    if ((wVar1 == 0) && (*pwVar9 == 0)) goto LAB_1415def64;
    if (wVar1 != *pwVar9) {
      wVar1 = towlower(wVar1);
      wVar2 = towlower(*pwVar9);
      if (wVar1 != wVar2) {
        if (wVar1 == wVar2) {
LAB_1415def64:
          if ((undefined8 *)*param_2 != &DAT_144caf2e0) {
            *(undefined4 *)(param_2 + 1) = 0;
            if (*(int *)((longlong)param_2 + 0xc) != 4) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,4);
              iVar5 = *(int *)(param_2 + 1);
            }
            *(int *)(param_2 + 1) = iVar5 + 4;
            if (*(int *)((longlong)param_2 + 0xc) < iVar5 + 4) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
            }
            *(undefined8 *)*param_2 = 0x54004e0049;
          }
        }
        else {
          uVar4 = FString::ToUpper(param_2,local_28);
          FString::operator=(param_2,uVar4);
          if (local_28[0] != 0) {
            if (DAT_1468c2208 == (longlong *)0x0) {
              FUN_1415d7ea0();
            }
            (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_28[0]);
          }
        }
        return param_2;
      }
    }
    pwVar9 = pwVar9 + 1;
  } while( true );
}



// FUNCTION 1415df010 HandleLanguageChanged body=753 status=ok
// SIG undefined HandleLanguageChanged(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FICUInternationalization::HandleLanguageChanged(longlong param_1,undefined8 *param_2)

{
  uint *puVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  bool bVar5;
  BOOL BVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  undefined2 *puVar10;
  longlong lVar11;
  uint *puVar12;
  uint uVar13;
  longlong *plVar14;
  undefined1 auStack_178 [32];
  int local_158;
  uint uStack_154;
  uint *puStack_150;
  uint local_148;
  uint uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  undefined4 local_138 [2];
  longlong *local_130;
  int iStack_128;
  uint uStack_124;
  uint *local_120;
  uint uStack_118;
  uint uStack_114;
  undefined8 local_110;
  longlong *local_108;
  undefined8 uStack_100;
  uint *puStack_f8;
  uint uStack_f0;
  uint uStack_ec;
  undefined8 uStack_e8;
  undefined1 local_d8 [128];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_138[0] = 0;
  if (*(int *)(param_2 + 1) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*param_2;
  }
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  TStringConversion<TStringConvert<wchar_t,char>,128>(local_d8,puVar10);
  FUN_143a97aa0(local_50,local_138);
  if (local_58 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_58);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x218);
  BVar6 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar6 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  plVar14 = (longlong *)(param_1 + 0x1c8);
  uStack_154 = 1;
  uVar2 = *(uint *)(param_1 + 0x1f0);
  puVar1 = (uint *)(param_1 + 0x1d8);
  local_158 = 0;
  uStack_144 = 0;
  iStack_140 = 0;
  if (uVar2 != 0) {
    puVar12 = *(uint **)(param_1 + 0x1e8);
    if (*(uint **)(param_1 + 0x1e8) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar3 = *puVar12;
    iStack_140 = 0;
    local_158 = 0;
    while (uVar3 == 0) {
      lVar11 = (longlong)local_158;
      iStack_140 = iStack_140 + 0x20;
      iVar8 = local_158 + 1;
      bVar5 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_158;
      local_158 = iVar8;
      if (bVar5) goto LAB_1415df171;
      uVar3 = puVar12[lVar11 + 1];
    }
    uStack_154 = -uVar3 & uVar3;
    iVar8 = 0x1f;
    if (uStack_154 != 0) {
      for (; uStack_154 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_154 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_144 = (iStack_140 - iVar8) + 0x1f;
    if ((int)uVar2 < (int)uStack_144) {
LAB_1415df171:
      uStack_144 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x1f0);
  uStack_118 = 0xffffffff;
  uStack_114 = uStack_144;
  local_110 = CONCAT44(uStack_13c,iStack_140);
  uStack_100 = CONCAT44(uStack_154,local_158);
  local_148 = -1 << ((byte)uVar3 & 0x1f);
  uVar13 = uVar3 & 0xffffffe0;
  iStack_128 = local_158;
  uStack_124 = uStack_154;
  puStack_150 = puVar1;
  uStack_144 = uVar3;
  local_120 = puVar1;
  local_108 = plVar14;
  puStack_f8 = puVar1;
  uStack_e8 = local_110;
  local_130 = plVar14;
  uStack_f0 = uStack_118;
  uStack_ec = uStack_114;
  if (uVar3 != uVar2) {
    puVar12 = *(uint **)(param_1 + 0x1e8);
    if (*(uint **)(param_1 + 0x1e8) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar9 = puVar12[(int)uVar3 >> 5] & local_148;
    iVar8 = (int)uVar3 >> 5;
    while (uVar9 == 0) {
      uVar13 = uVar13 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_1415df243;
      uVar9 = puVar12[(longlong)iVar8 + 1];
      local_148 = 0xffffffff;
      iVar8 = iVar8 + 1;
    }
    uVar9 = -uVar9 & uVar9;
    iVar8 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar9 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_144 = (uVar13 - iVar8) + 0x1f;
    uVar3 = uStack_144;
    if ((int)uVar2 < (int)uStack_144) {
LAB_1415df243:
      uStack_144 = uVar2;
      uVar3 = uVar2;
    }
  }
  while (((uStack_114 != uVar3 || (local_120 != puVar1)) || (local_130 != plVar14))) {
    puVar4 = *(undefined8 **)(*local_130 + 0x10 + (longlong)(int)uStack_114 * 0x28);
    uVar7 = FCulture::FICUCultureImplementation::GetDisplayName(*puVar4,&local_158);
    FString::operator=(puVar4 + 2,uVar7);
    lVar11 = CONCAT44(uStack_154,local_158);
    if (lVar11 != 0) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar11);
    }
    uStack_118 = uStack_118 & ~uStack_124;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_128);
  }
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 1415df310 FUN_1415df310 body=342 status=ok
// SIG undefined FUN_1415df310(void)

void FUN_1415df310(longlong param_1,char param_2)

{
  char cVar1;
  BOOL BVar2;
  int iVar3;
  longlong lVar4;
  DWORD local_res18 [2];
  LARGE_INTEGER local_res20;
  DWORD *local_28 [2];
  
  cVar1 = FUN_1415a30e0();
  if (cVar1 != '\0') {
    local_res18[0] = GetCurrentThreadId();
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    if (((param_2 != '\0') && (local_res18[0] == DAT_1468c21c0)) && (DAT_1468b6148 != 0)) {
      FThreadHeartBeat::InitSettings(param_1);
    }
    if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
      lVar4 = *(longlong *)(param_1 + 0x80);
      if (*(longlong *)(param_1 + 0x80) == 0) {
        lVar4 = param_1 + 0x78;
      }
      iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x88) - 1U &
                               (longlong)(int)local_res18[0]) * 4);
      if (iVar3 != -1) {
        do {
          lVar4 = *(longlong *)(param_1 + 0x40) + (longlong)iVar3 * 0x28;
          if (*(DWORD *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar3 * 0x28) == local_res18[0])
          {
            if ((iVar3 != -1) && (lVar4 != 0)) goto LAB_1415df416;
            break;
          }
          iVar3 = *(int *)(lVar4 + 0x20);
        } while (iVar3 != -1);
      }
    }
    local_28[0] = local_res18;
    FUN_1415c9fc0(param_1 + 0x40,&local_res20,local_28,0);
    lVar4 = *(longlong *)(param_1 + 0x40) + (longlong)(int)local_res20.s.LowPart * 0x28;
LAB_1415df416:
    QueryPerformanceCounter(&local_res20);
    *(double *)(lVar4 + 8) =
         (double)CONCAT44(local_res20.s.HighPart,local_res20.s.LowPart) * DAT_1468b02f8 + 16777216.0
    ;
    *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(param_1 + 0xa0);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 1415df470 FUN_1415df470 body=1224 status=ok
// SIG undefined FUN_1415df470(void)

undefined8 FUN_1415df470(longlong param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar4 < DAT_1468b52b8) {
    _Init_thread_header(&DAT_1468b52b8);
    if (DAT_1468b52b8 == -1) {
      FUN_143a94350(&DAT_1468b5290,&DAT_144caf1e0);
      atexit((_func_5014 *)&LAB_143e78580);
      _Init_thread_footer(&DAT_1468b52b8);
    }
  }
  if (*piVar4 < DAT_1468b52e8) {
    _Init_thread_header(&DAT_1468b52e8);
    if (DAT_1468b52e8 == -1) {
      FUN_143a94350(&DAT_1468b52c0,&DAT_144cae81c);
      atexit((_func_5014 *)&LAB_143e78450);
      _Init_thread_footer(&DAT_1468b52e8);
    }
  }
  if (*piVar4 < DAT_1468b5318) {
    _Init_thread_header(&DAT_1468b5318);
    if (DAT_1468b5318 == -1) {
      FUN_143a94350(&DAT_1468b52f0,&DAT_144cae8fc);
      atexit((_func_5014 *)&LAB_143e78560);
      _Init_thread_footer(&DAT_1468b5318);
    }
  }
  if (*piVar4 < DAT_1468b5348) {
    _Init_thread_header(&DAT_1468b5348);
    if (DAT_1468b5348 == -1) {
      FUN_143a94350(&DAT_1468b5320,&DAT_144cae93c);
      atexit((_func_5014 *)&LAB_143e783b0);
      _Init_thread_footer(&DAT_1468b5348);
    }
  }
  if (*piVar4 < DAT_1468b5378) {
    _Init_thread_header(&DAT_1468b5378);
    if (DAT_1468b5378 == -1) {
      FUN_143a94350(&DAT_1468b5350,&DAT_144caf1e8);
      atexit((_func_5014 *)&LAB_143e78400);
      _Init_thread_footer(&DAT_1468b5378);
    }
  }
  if (*piVar4 < DAT_1468b53a8) {
    _Init_thread_header(&DAT_1468b53a8);
    if (DAT_1468b53a8 == -1) {
      FUN_143a94350(&DAT_1468b5380,"other");
      atexit((_func_5014 *)&LAB_143e78460);
      _Init_thread_footer(&DAT_1468b53a8);
    }
  }
  bVar2 = *(byte *)(param_1 + 0x27);
  if ((bVar2 & 1) == 0) {
    iVar5 = (int)*(char *)(param_1 + 0x26);
    if (*(char *)(param_1 + 0x26) < '\0') {
      iVar5 = *(int *)(param_1 + 0x14);
    }
    iVar3 = (int)DAT_1468b52b6;
    if (DAT_1468b52b6 < '\0') {
      iVar3 = DAT_1468b52a4;
    }
    if (((DAT_1468b52b7 & 1) == 0) && (iVar5 == iVar3)) {
      cVar1 = FUN_143a8ed60(param_1,&DAT_1468b5290);
      if (cVar1 != '\0') {
        return 0;
      }
    }
    bVar2 = *(byte *)(param_1 + 0x27);
  }
  else if ((DAT_1468b52b7 & 1) != 0) {
    return 0;
  }
  if ((bVar2 & 1) == 0) {
    iVar5 = (int)*(char *)(param_1 + 0x26);
    if (*(char *)(param_1 + 0x26) < '\0') {
      iVar5 = *(int *)(param_1 + 0x14);
    }
    iVar3 = (int)DAT_1468b52e6;
    if (DAT_1468b52e6 < '\0') {
      iVar3 = DAT_1468b52d4;
    }
    if (((DAT_1468b52e7 & 1) == 0) && (iVar5 == iVar3)) {
      cVar1 = FUN_143a8ed60(param_1,&DAT_1468b52c0);
      if (cVar1 != '\0') {
        return 1;
      }
    }
    bVar2 = *(byte *)(param_1 + 0x27);
  }
  else if ((DAT_1468b52e7 & 1) != 0) {
    return 1;
  }
  if ((bVar2 & 1) == 0) {
    iVar5 = (int)*(char *)(param_1 + 0x26);
    if (*(char *)(param_1 + 0x26) < '\0') {
      iVar5 = *(int *)(param_1 + 0x14);
    }
    iVar3 = (int)DAT_1468b5316;
    if (DAT_1468b5316 < '\0') {
      iVar3 = DAT_1468b5304;
    }
    if (((DAT_1468b5317 & 1) == 0) && (iVar5 == iVar3)) {
      cVar1 = FUN_143a8ed60(param_1,&DAT_1468b52f0);
      if (cVar1 != '\0') {
        return 2;
      }
    }
    bVar2 = *(byte *)(param_1 + 0x27);
  }
  else if ((DAT_1468b5317 & 1) != 0) {
    return 2;
  }
  if ((bVar2 & 1) == 0) {
    iVar5 = (int)*(char *)(param_1 + 0x26);
    if (*(char *)(param_1 + 0x26) < '\0') {
      iVar5 = *(int *)(param_1 + 0x14);
    }
    iVar3 = (int)DAT_1468b5346;
    if (DAT_1468b5346 < '\0') {
      iVar3 = DAT_1468b5334;
    }
    if (((DAT_1468b5347 & 1) == 0) && (iVar5 == iVar3)) {
      cVar1 = FUN_143a8ed60(param_1,&DAT_1468b5320);
      if (cVar1 != '\0') {
        return 3;
      }
    }
    bVar2 = *(byte *)(param_1 + 0x27);
  }
  else if ((DAT_1468b5347 & 1) != 0) {
    return 3;
  }
  if ((bVar2 & 1) == 0) {
    iVar5 = (int)*(char *)(param_1 + 0x26);
    if (*(char *)(param_1 + 0x26) < '\0') {
      iVar5 = *(int *)(param_1 + 0x14);
    }
    iVar3 = (int)DAT_1468b5376;
    if (DAT_1468b5376 < '\0') {
      iVar3 = DAT_1468b5364;
    }
    if (((DAT_1468b5377 & 1) == 0) && (iVar5 == iVar3)) {
      cVar1 = FUN_143a8ed60(param_1,&DAT_1468b5350);
      if (cVar1 != '\0') {
        return 4;
      }
    }
    bVar2 = *(byte *)(param_1 + 0x27);
  }
  else if ((DAT_1468b5377 & 1) != 0) {
    return 4;
  }
  if ((bVar2 & 1) == 0) {
    iVar5 = (int)*(char *)(param_1 + 0x26);
    if (*(char *)(param_1 + 0x26) < '\0') {
      iVar5 = *(int *)(param_1 + 0x14);
    }
    iVar3 = (int)DAT_1468b53a6;
    if (DAT_1468b53a6 < '\0') {
      iVar3 = DAT_1468b5394;
    }
    if (((DAT_1468b53a7 & 1) == 0) && (iVar5 == iVar3)) {
      FUN_143a8ed60(param_1,&DAT_1468b5380);
    }
  }
  return 5;
}



// FUNCTION 1415df940 InitSettings body=133 status=ok
// SIG undefined InitSettings(void)

void FThreadHeartBeat::InitSettings(longlong param_1)

{
  double dVar1;
  double local_res8 [4];
  
  local_res8[0] = 25.0;
  dVar1 = 25.0;
  if (DAT_1468b6148 != 0) {
    FConfigCacheIni::GetDouble
              (DAT_1468b6148,L"Core.System",L"HangDuration",local_res8,&DAT_1468e2360);
    dVar1 = local_res8[0];
    if ((0.0 < local_res8[0]) && (local_res8[0] < 5.0)) {
      dVar1 = 5.0;
    }
  }
  *(double *)(param_1 + 0x98) = dVar1;
  *(double *)(param_1 + 0xa0) = dVar1 * *(double *)(param_1 + 0xa8);
  return;
}



// FUNCTION 1415df9d0 FUN_1415df9d0 body=2675 status=ok
// SIG undefined FUN_1415df9d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1415df9d0(longlong *param_1)

{
  bool bVar1;
  void *_Src;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  LPCRITICAL_SECTION p_Var6;
  undefined8 uVar7;
  void *_Dst;
  LPCRITICAL_SECTION p_Var8;
  longlong lVar9;
  LPCRITICAL_SECTION p_Var10;
  PRTL_CRITICAL_SECTION_DEBUG p_Var11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  undefined8 *puVar16;
  undefined2 *puVar17;
  longlong lVar18;
  undefined1 auStack_298 [32];
  int *local_278;
  int local_268 [2];
  longlong local_260;
  undefined8 local_258;
  undefined8 local_250;
  int local_248;
  int local_244;
  longlong local_240;
  int local_238;
  int local_234;
  undefined8 local_230;
  longlong *plStack_228;
  undefined8 local_220;
  longlong *plStack_218;
  undefined4 local_210;
  undefined4 local_20c;
  longlong local_208 [2];
  undefined8 *local_1f8;
  longlong *local_1f0;
  longlong local_1e8 [2];
  void *local_1d8;
  int local_1d0;
  longlong local_1c8;
  longlong local_1c0 [2];
  longlong local_1b0 [2];
  longlong local_1a0 [2];
  longlong local_190 [2];
  undefined1 local_180 [8];
  longlong *local_178;
  undefined1 local_170 [8];
  longlong *local_168;
  undefined1 local_160 [8];
  longlong *local_158;
  longlong local_150 [2];
  undefined1 local_140 [8];
  longlong *local_138;
  longlong local_130 [2];
  undefined **local_120 [4];
  undefined2 local_fa;
  undefined8 local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  longlong *plStack_e0;
  undefined1 local_d8 [128];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  p_Var10 = (LPCRITICAL_SECTION)0x0;
  local_278 = local_268;
  local_210 = 0;
  local_268[0] = 0;
  local_1f0 = param_1;
  FUN_143aa7900(0,`anonymous_namespace'::FICUOverrides::Malloc,
                `anonymous_namespace'::FICUOverrides::Realloc,
                `anonymous_namespace'::FICUOverrides::Free);
  local_260 = 0;
  local_258 = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_260,0);
  FGenericPlatformString::Memcpy(local_260,L"Internationalization",0x2a);
  plVar3 = (longlong *)FUN_1415c3d50();
  puVar4 = (undefined8 *)FPaths::ProjectContentDir(local_1c0);
  iVar13 = (int)local_258;
  iVar14 = (int)local_258 + -1;
  if ((int)local_258 == 0) {
    iVar14 = 0;
  }
  lVar18 = 2;
  if ((*(int *)(puVar4 + 1) != 0) || (iVar12 = 2, iVar14 == -1)) {
    iVar12 = 1;
  }
  local_250 = *puVar4;
  *puVar4 = 0;
  local_248 = *(int *)(puVar4 + 1);
  local_244 = *(int *)((longlong)puVar4 + 0xc);
  puVar4[1] = 0;
  if (local_244 < iVar12 + local_248 + iVar14) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_250);
  }
  FString::PathAppend(&local_250,local_260,iVar14);
  if (local_1c0[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_1c0[0]);
  }
  plVar5 = (longlong *)FPaths::EngineContentDir(local_1b0);
  iVar14 = iVar13 + -1;
  if (iVar13 == 0) {
    iVar14 = 0;
  }
  if (((int)plVar5[1] != 0) || (iVar13 = 2, iVar14 == -1)) {
    iVar13 = 1;
  }
  local_240 = *plVar5;
  *plVar5 = 0;
  local_238 = (int)plVar5[1];
  local_234 = *(int *)((longlong)plVar5 + 0xc);
  plVar5[1] = 0;
  if (local_234 < iVar13 + local_238 + iVar14) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_240);
  }
  FString::PathAppend(&local_240,local_260,iVar14);
  if (local_1b0[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_1b0[0]);
  }
  bVar1 = false;
  puVar4 = &local_250;
  piVar15 = (int *)&DAT_143f3eda8;
  do {
    if (*(int *)(puVar4 + 1) == 0) {
      puVar17 = &DAT_143f3eda8;
    }
    else {
      puVar17 = (undefined2 *)*puVar4;
    }
    cVar2 = (**(code **)(*plVar3 + 0x50))(plVar3,puVar17);
    if (cVar2 != '\0') {
      if (*(int *)(puVar4 + 1) == 0) {
        puVar17 = &DAT_143f3eda8;
      }
      else {
        puVar17 = (undefined2 *)*puVar4;
      }
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      TStringConversion<TStringConvert<wchar_t,char>,128>(local_d8,puVar17);
      FUN_143a91510(local_50);
      if (local_58 != 0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
        }
        (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_58);
      }
      bVar1 = true;
      break;
    }
    puVar4 = puVar4 + 2;
  } while (puVar4 != &local_230);
  local_1f8 = &local_250;
  if (!bVar1) {
    puVar4 = (undefined8 *)
             <lambda_80c23f523ba0da704c021ccb9de620b8>::operator()(&local_1f8,local_1a0);
    if (*(int *)(puVar4 + 1) == 0) {
      puVar17 = &DAT_143f3eda8;
    }
    else {
      puVar17 = (undefined2 *)*puVar4;
    }
    LowLevelFatalErrorHandler("Unknown",0x87,L"ICU data directory was not discovered:\n%s",puVar17);
    if (local_1a0[0] != 0) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_1a0[0]);
    }
    puVar4 = (undefined8 *)
             <lambda_80c23f523ba0da704c021ccb9de620b8>::operator()(&local_1f8,local_190);
    if (*(int *)(puVar4 + 1) != 0) {
      piVar15 = (int *)*puVar4;
    }
    local_278 = piVar15;
    FDebug::AssertFailed
              (&DAT_144cae65a,"Unknown",0x87,L"ICU data directory was not discovered:\n%s");
    if (local_190[0] != 0) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_190[0]);
    }
  }
  FUN_143aa7b50(0,FUN_1415e26f0,FICUInternationalization::CloseDataFile,local_268);
  FUN_143aa7700(local_268);
  p_Var6 = (LPCRITICAL_SECTION)operator_new(0xf0);
  p_Var8 = p_Var10;
  if (p_Var6 != (LPCRITICAL_SECTION)0x0) {
    _guard_xfg_dispatch_icall_nop(p_Var6,0,0xf0);
    InitializeCriticalSection(p_Var6);
    SetCriticalSectionSpinCount(p_Var6,4000);
    p_Var6[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    p_Var6[1].LockCount = 0;
    p_Var6[1].RecursionCount = 0;
    p_Var6[1].SpinCount = 0;
    p_Var6[2].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    p_Var6[2].LockCount = -1;
    p_Var6[2].RecursionCount = 0;
    p_Var6[2].LockSemaphore = (HANDLE)0x0;
    *(undefined4 *)&p_Var6[2].SpinCount = 0;
    InitializeCriticalSection(p_Var6 + 3);
    SetCriticalSectionSpinCount(p_Var6 + 3,4000);
    p_Var6[4].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    p_Var6[4].LockCount = 0;
    p_Var6[4].RecursionCount = 0;
    p_Var6[4].SpinCount = 0;
    p_Var6[5].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    p_Var6[5].LockCount = -1;
    p_Var6[5].RecursionCount = 0;
    p_Var6[5].LockSemaphore = (HANDLE)0x0;
    *(undefined4 *)&p_Var6[5].SpinCount = 0;
    p_Var8 = p_Var6;
  }
  DAT_1468b5030 = p_Var8;
  p_Var6 = (LPCRITICAL_SECTION)operator_new(0x78);
  p_Var8 = p_Var10;
  if (p_Var6 != (LPCRITICAL_SECTION)0x0) {
    _guard_xfg_dispatch_icall_nop(p_Var6,0,0x78);
    InitializeCriticalSection(p_Var6);
    SetCriticalSectionSpinCount(p_Var6,4000);
    p_Var6[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    p_Var6[1].LockCount = 0;
    p_Var6[1].RecursionCount = 0;
    p_Var6[1].SpinCount = 0;
    p_Var6[2].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    p_Var6[2].LockCount = -1;
    p_Var6[2].RecursionCount = 0;
    p_Var6[2].LockSemaphore = (HANDLE)0x0;
    *(undefined4 *)&p_Var6[2].SpinCount = 0;
    p_Var8 = p_Var6;
  }
  DAT_1468b5038 = p_Var8;
  FICUInternationalization::InitializeAvailableCultures(param_1);
  *(undefined1 *)(param_1 + 0x19) = 0;
  FICUInternationalization::ConditionalInitializeCultureMappings(param_1);
  *(undefined1 *)(param_1 + 0x24) = 0;
  FICUInternationalization::ConditionalInitializeAllowedCultures(param_1);
  local_208[0] = 0;
  local_208[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_208,0);
  FGenericPlatformString::Memcpy(local_208[0],L"en-US-POSIX",0x18);
  puVar4 = (undefined8 *)FICUInternationalization::FindOrMakeCulture(param_1,local_180,local_208,0);
  lVar9 = *param_1;
  puVar16 = (undefined8 *)(lVar9 + 0x78);
  if (puVar16 != puVar4) {
    *puVar16 = *puVar4;
    *puVar4 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(lVar9 + 0x80,puVar4 + 1);
  }
  if (local_178 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_178 + 1;
    lVar9 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_178)(local_178);
      LOCK();
      piVar15 = (int *)((longlong)local_178 + 0xc);
      iVar13 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_178 + 8))(local_178,1);
      }
    }
  }
  lVar9 = local_208[0];
  if (local_208[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar9);
  }
  if (*(longlong *)(*param_1 + 0x78) == 0) {
    local_1e8[0] = 0;
    local_1e8[1] = 0;
    puVar4 = (undefined8 *)
             FICUInternationalization::FindOrMakeCulture(param_1,local_170,local_1e8,1);
    lVar9 = *param_1;
    puVar16 = (undefined8 *)(lVar9 + 0x78);
    if (puVar16 != puVar4) {
      *puVar16 = *puVar4;
      *puVar4 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(lVar9 + 0x80,puVar4 + 1);
    }
    if (local_168 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_168 + 1;
      lVar9 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_168)(local_168);
        LOCK();
        piVar15 = (int *)((longlong)local_168 + 0xc);
        iVar13 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*local_168 + 8))(local_168,1);
        }
      }
    }
    lVar9 = local_1e8[0];
    if (local_1e8[0] != 0) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar9);
    }
  }
  uVar7 = FWindowsPlatformMisc::GetDefaultLanguage(local_150);
  puVar4 = (undefined8 *)FICUInternationalization::FindOrMakeCulture(param_1,local_160,uVar7,1);
  lVar9 = *param_1;
  puVar16 = (undefined8 *)(lVar9 + 0x58);
  if (puVar16 != puVar4) {
    *puVar16 = *puVar4;
    *puVar4 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(lVar9 + 0x60,puVar4 + 1);
  }
  if (local_158 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_158 + 1;
    lVar9 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_158)(local_158);
      LOCK();
      piVar15 = (int *)((longlong)local_158 + 0xc);
      iVar13 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_158 + 8))(local_158,1);
      }
    }
  }
  if (local_150[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_150[0]);
  }
  uVar7 = FWindowsPlatformMisc::GetDefaultLocale(local_130);
  puVar4 = (undefined8 *)FICUInternationalization::FindOrMakeCulture(param_1,local_140,uVar7,1);
  lVar9 = *param_1;
  puVar16 = (undefined8 *)(lVar9 + 0x68);
  if (puVar16 != puVar4) {
    *puVar16 = *puVar4;
    *puVar4 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(lVar9 + 0x70,puVar4 + 1);
  }
  if (local_138 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_138 + 1;
    lVar9 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_138)(local_138);
      LOCK();
      piVar15 = (int *)((longlong)local_138 + 0xc);
      iVar13 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_138 + 8))(local_138,1);
      }
    }
  }
  if (local_130[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_130[0]);
  }
  lVar9 = *param_1;
  plVar3 = *(longlong **)(lVar9 + 0x60);
  puVar4 = (undefined8 *)(lVar9 + 0x28);
  uVar7 = *(undefined8 *)(lVar9 + 0x58);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_230 = uVar7;
  plStack_228 = plVar3;
  if (&local_230 != puVar4) {
    local_230 = *puVar4;
    plStack_228 = *(longlong **)(lVar9 + 0x30);
    *puVar4 = uVar7;
    *(longlong **)(lVar9 + 0x30) = plVar3;
    local_f8 = uVar7;
    plStack_f0 = plVar3;
  }
  plVar3 = plStack_228;
  if (plStack_228 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_228 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_228)(plStack_228);
      LOCK();
      piVar15 = (int *)((longlong)plVar3 + 0xc);
      iVar13 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plStack_228 + 8))(plStack_228,1);
      }
    }
  }
  lVar9 = *param_1;
  plVar3 = *(longlong **)(lVar9 + 0x70);
  puVar4 = (undefined8 *)(lVar9 + 0x38);
  uVar7 = *(undefined8 *)(lVar9 + 0x68);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_220 = uVar7;
  plStack_218 = plVar3;
  if (&local_220 != puVar4) {
    local_220 = *puVar4;
    plStack_218 = *(longlong **)(lVar9 + 0x40);
    *puVar4 = uVar7;
    *(longlong **)(lVar9 + 0x40) = plVar3;
    local_e8 = uVar7;
    plStack_e0 = plVar3;
  }
  plVar3 = plStack_218;
  if (plStack_218 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_218 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_218)(plStack_218);
      LOCK();
      piVar15 = (int *)((longlong)plVar3 + 0xc);
      iVar13 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plStack_218 + 8))(plStack_218,1);
      }
    }
  }
  UCheatManagerGunfire::GetAllCheats(&local_1d8);
  _Src = local_1d8;
  if (local_1d0 < 2) {
    plVar3 = (longlong *)FUN_143b4ac10();
    p_Var8 = p_Var10;
  }
  else {
    local_fa = 0x200;
    local_120[0] = icu_53::UnicodeString::vftable;
    if ((local_1d0 != 0) && (iVar13 = local_1d0 + -1, param_1 = local_1f0, 0 < iVar13)) {
      _Dst = (void *)FUN_143a8fd90(local_120,local_1d0);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar13 * 2);
      *(undefined2 *)((longlong)_Dst + (longlong)iVar13 * 2) = 0;
      FUN_143a90820(local_120,iVar13);
      param_1 = local_1f0;
    }
    plVar3 = (longlong *)FUN_143b4ae60(local_120);
    p_Var8 = (LPCRITICAL_SECTION)0x1;
  }
  if (p_Var8 != (LPCRITICAL_SECTION)0x0) {
    FUN_143a8dc60(local_120);
  }
  FUN_143b4a3b0(plVar3);
  (**(code **)(*plVar3 + 0x38))(plVar3);
  if (local_1d8 != (void *)0x0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_1d8);
  }
  local_20c = 0;
  lVar9 = FUN_143a8d310(0x290);
  if (lVar9 != 0) {
    p_Var10 = (LPCRITICAL_SECTION)FUN_143b5c140(lVar9,&local_20c);
  }
  param_1 = param_1 + 0x48;
  if (param_1 == &local_1c8) {
    if (p_Var10 == (LPCRITICAL_SECTION)0x0) goto LAB_1415e0371;
    p_Var11 = p_Var10->DebugInfo;
  }
  else {
    p_Var8 = (LPCRITICAL_SECTION)*param_1;
    *param_1 = (longlong)p_Var10;
    if (p_Var8 == (LPCRITICAL_SECTION)0x0) goto LAB_1415e0371;
    p_Var11 = p_Var8->DebugInfo;
    p_Var10 = p_Var8;
  }
  (**(code **)p_Var11)(p_Var10,1);
LAB_1415e0371:
  lVar9 = *param_1;
  uVar7 = `FGenericPlatformMisc::GetPlatformChunkInstall'::`2'::
          _dynamic_atexit_destructor_for__Singleton__();
  FUN_143b556c0(lVar9,uVar7);
  puVar4 = &local_230;
  bVar1 = local_268[0] < 1;
  do {
    lVar9 = puVar4[-2];
    puVar4 = puVar4 + -2;
    lVar18 = lVar18 + -1;
    if (lVar9 != 0) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar9);
    }
    lVar9 = local_260;
  } while (lVar18 != 0);
  if (local_260 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar9);
    }
    else {
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_260);
    }
  }
  return bVar1;
}



// FUNCTION 1415e0450 InitializeAvailableCultures body=2121 status=ok
// SIG undefined InitializeAvailableCultures(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FICUInternationalization::InitializeAvailableCultures(longlong param_1)

{
  char *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  char *pcVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar16;
  longlong *plVar17;
  uint uVar18;
  undefined1 auStack_218 [32];
  undefined2 local_1f8;
  undefined2 *local_1e8;
  ulonglong local_1e0;
  int local_1d8 [2];
  longlong local_1d0;
  ulonglong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  longlong *local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  ulonglong local_198;
  longlong local_190;
  undefined8 local_188;
  longlong local_180;
  undefined8 local_178;
  longlong local_170;
  undefined8 local_168;
  longlong local_158 [32];
  longlong *local_58;
  longlong *local_50;
  int local_48;
  ulonglong local_38;
  ulonglong uVar15;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  lVar7 = FUN_143a9a6c0(local_1d8);
  if (*(int *)(param_1 + 0x24) < local_1d8[0]) {
    TArray<FICUInternationalization::FICUCultureData,FDefaultAllocator>::ResizeTo();
  }
  plVar17 = (longlong *)(param_1 + 0x28);
  local_1b0 = plVar17;
  if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x5c) < local_1d8[0]) {
    FUN_1415e42a0(plVar17);
  }
  iVar16 = 0;
  local_1a8 = param_1;
  if (0 < local_1d8[0]) {
    pcVar12 = (char *)(lVar7 + 0x14);
    do {
      lVar7 = 0;
      pcVar1 = pcVar12 + -0xc;
      local_1e0 = 0;
      local_1e8 = (undefined2 *)0x0;
      if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
        lVar8 = -1;
        do {
          lVar3 = lVar8 + -0xb;
          lVar8 = lVar8 + 1;
        } while (pcVar12[lVar3] != '\0');
        uVar13 = (int)lVar8 + 1;
        local_1e0 = (ulonglong)uVar13;
        if (0 < (int)uVar13) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e8,0);
        }
        local_1f8 = 0x3f;
        FGenericPlatformString::Convert<char,wchar_t>(local_1e8,uVar13,pcVar1,uVar13);
      }
      local_1a0 = 0;
      local_198 = 0;
      uVar13 = 0;
      if ((pcVar12 != (char *)0x0) && (*pcVar12 != '\0')) {
        lVar7 = -1;
        do {
          lVar8 = lVar7 + 1;
          lVar7 = lVar7 + 1;
        } while (pcVar12[lVar8] != '\0');
        uVar18 = (int)lVar7 + 1;
        local_198 = (ulonglong)uVar18;
        uVar13 = uVar18;
        if (0 < (int)uVar18) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a0,0);
          uVar13 = (uint)local_198;
        }
        lVar7 = local_1a0;
        local_1f8 = 0x3f;
        FGenericPlatformString::Convert<char,wchar_t>(local_1a0,uVar18,pcVar12,uVar18);
      }
      pcVar1 = pcVar12 + 6;
      local_1d0 = 0;
      local_1c8 = 0;
      if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
        lVar8 = -1;
        do {
          lVar3 = lVar8 + 7;
          lVar8 = lVar8 + 1;
        } while (pcVar12[lVar3] != '\0');
        uVar18 = (int)lVar8 + 1;
        local_1c8 = (ulonglong)uVar18;
        if (0 < (int)uVar18) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d0,0);
        }
        local_1f8 = 0x3f;
        FGenericPlatformString::Convert<char,wchar_t>(local_1d0,uVar18,pcVar1,uVar18);
      }
      local_170 = 0;
      local_168 = 0;
      local_180 = 0;
      local_178 = 0;
      <lambda_e999beae94941459fccc619780b4a803>::operator()
                (&local_1a8,&local_1e8,&local_180,&local_170);
      if (local_180 != 0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
        }
        (**(code **)(*DAT_1468c2208 + 0x20))();
      }
      if (local_170 != 0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
        }
        (**(code **)(*DAT_1468c2208 + 0x20))();
      }
      if (1 < (int)local_1c8) {
        local_190 = 0;
        local_188 = 0;
        <lambda_e999beae94941459fccc619780b4a803>::operator()
                  (&local_1a8,&local_1e8,&local_190,&local_1d0);
        if (local_190 != 0) {
          if (DAT_1468c2208 == (longlong *)0x0) {
            FUN_1415d7ea0();
          }
          (**(code **)(*DAT_1468c2208 + 0x20))();
        }
      }
      if (1 < (int)uVar13) {
        local_1c0 = 0;
        local_1b8 = 0;
        <lambda_e999beae94941459fccc619780b4a803>::operator()
                  (&local_1a8,&local_1e8,&local_1a0,&local_1c0);
        if (local_1c0 != 0) {
          if (DAT_1468c2208 == (longlong *)0x0) {
            FUN_1415d7ea0();
          }
          (**(code **)(*DAT_1468c2208 + 0x20))();
        }
        lVar7 = local_1a0;
        if ((1 < (int)(uint)local_198) && (1 < (int)local_1c8)) {
          <lambda_e999beae94941459fccc619780b4a803>::operator()
                    (&local_1a8,&local_1e8,&local_1a0,&local_1d0);
          lVar7 = local_1a0;
        }
      }
      if (local_1d0 != 0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
        }
        (**(code **)(*DAT_1468c2208 + 0x20))();
      }
      if (lVar7 != 0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
        }
        (**(code **)(*DAT_1468c2208 + 0x20))();
      }
      if (local_1e8 != (undefined2 *)0x0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
        }
        (**(code **)(*DAT_1468c2208 + 0x20))();
      }
      iVar16 = iVar16 + 1;
      pcVar12 = pcVar12 + 0x178;
      plVar17 = local_1b0;
    } while (iVar16 < local_1d8[0]);
  }
  plVar9 = (longlong *)FUN_143a8b720();
  lVar7 = *plVar9;
  while (lVar7 != 0) {
    local_58 = (longlong *)0x0;
    if (lVar7 == 0) {
      local_48 = 0;
      local_50 = (longlong *)0x0;
    }
    else {
      uVar14 = 0xffffffffffffffff;
      do {
        uVar15 = uVar14;
        uVar14 = uVar15 + 1;
      } while (*(char *)(lVar7 + uVar14) != '\0');
      local_1b0 = (longlong *)((ulonglong)local_1b0 & 0xffffffff00000000);
      FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
                (&local_1b0,0x7fffffff,lVar7,uVar14 & 0xffffffff);
      local_48 = (int)local_1b0;
      iVar16 = (int)local_1b0 + 1;
      TInlineAllocator<128,FDefaultAllocator>::ForElementType<wchar_t>::ResizeAllocation
                (local_158,0,iVar16,2);
      local_1b0 = local_158;
      if (local_58 != (longlong *)0x0) {
        local_1b0 = local_58;
      }
      local_50 = local_1b0;
      FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(&local_1b0,iVar16,lVar7,(int)uVar15 + 2);
    }
    plVar2 = local_50;
    local_1e0 = 0;
    local_1e8 = (undefined2 *)0x0;
    if ((local_50 != (longlong *)0x0) && ((short)*local_50 != 0)) {
      lVar7 = -1;
      do {
        lVar8 = lVar7 * 2;
        lVar7 = lVar7 + 1;
      } while (*(short *)((longlong)local_50 + lVar8 + 2) != 0);
      uVar13 = (int)lVar7 + 1;
      local_1e0 = (ulonglong)uVar13;
      if (0 < (int)uVar13) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e8,0);
      }
      FGenericPlatformString::Memcpy(local_1e8,plVar2,(longlong)(int)uVar13 * 2);
    }
    if (local_58 != (longlong *)0x0) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      (**(code **)(*DAT_1468c2208 + 0x20))();
    }
    FString::ToLowerInline(&local_1e8);
    if (((int)local_1e0 != 0) && ((int)local_1e0 == 3)) {
      local_190 = 0;
      local_188 = 0;
      local_1c0 = 0;
      local_1b8 = 0;
      <lambda_e999beae94941459fccc619780b4a803>::operator()
                (&local_1a8,&local_1e8,&local_1c0,&local_190);
      if (local_1c0 != 0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
        }
        (**(code **)(*DAT_1468c2208 + 0x20))();
      }
      if (local_190 != 0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
        }
        (**(code **)(*DAT_1468c2208 + 0x20))();
      }
    }
    if (local_1e8 != (undefined2 *)0x0) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      (**(code **)(*DAT_1468c2208 + 0x20))();
    }
    plVar2 = plVar9 + 1;
    plVar9 = plVar9 + 1;
    lVar7 = *plVar2;
  }
  local_1e8 = (undefined2 *)0x0;
  local_1e0 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e8,0);
  puVar4 = local_1e8;
  FGenericPlatformString::Memcpy(local_1e8,L"en-US-POSIX",0x18);
  if ((int)plVar17[1] != *(int *)((longlong)plVar17 + 0x34)) {
    iVar16 = (int)local_1e0;
    puVar10 = &DAT_143f3eda8;
    if ((int)local_1e0 != 0) {
      puVar10 = puVar4;
    }
    iVar5 = FUN_140438070(puVar10);
    plVar9 = (longlong *)plVar17[8];
    if ((longlong *)plVar17[8] == (longlong *)0x0) {
      plVar9 = plVar17 + 7;
    }
    iVar5 = *(int *)((longlong)plVar9 + ((longlong)(int)plVar17[9] - 1U & (longlong)iVar5) * 4);
    if (iVar5 != -1) {
      lVar7 = *plVar17;
      do {
        lVar8 = (longlong)iVar5 * 0x20;
        puVar10 = &DAT_143f3eda8;
        if (iVar16 != 0) {
          puVar10 = puVar4;
        }
        if (*(int *)(lVar7 + 8 + lVar8) == 0) {
          puVar11 = &DAT_143f3eda8;
        }
        else {
          puVar11 = *(undefined2 **)(lVar7 + lVar8);
        }
        iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar10);
        if (iVar6 == 0) goto LAB_1415e0b34;
        lVar7 = *plVar17;
        iVar5 = *(int *)(lVar7 + 0x18 + lVar8);
      } while (iVar5 != -1);
    }
  }
  iVar5 = -1;
LAB_1415e0b34:
  if (puVar4 != (undefined2 *)0x0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,puVar4);
  }
  if (iVar5 == -1) {
    local_1d0 = 0;
    local_1c8 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d0,0);
    FGenericPlatformString::Memcpy(local_1d0,L"US-POSIX",0x12);
    local_1e8 = (undefined2 *)0x0;
    local_1e0 = 3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e8,0);
    FGenericPlatformString::Memcpy(local_1e8,&DAT_144cae934,6);
    local_1c0 = 0;
    local_1b8 = 0;
    <lambda_e999beae94941459fccc619780b4a803>::operator()
              (&local_1a8,&local_1e8,&local_1c0,&local_1d0);
    lVar7 = local_1c0;
    if (local_1c0 != 0) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar7);
    }
    puVar4 = local_1e8;
    if (local_1e8 != (undefined2 *)0x0) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,puVar4);
    }
    lVar7 = local_1d0;
    if (local_1d0 != 0) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar7);
    }
  }
  return;
}



// FUNCTION 1415e0ca0 InitializeNewAsyncIO body=320 status=ok
// SIG undefined InitializeNewAsyncIO(void)

void FPlatformFileManager::InitializeNewAsyncIO(longlong *param_1)

{
  wchar_t _C;
  wint_t wVar1;
  wint_t wVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  wchar_t *pwVar8;
  longlong *plVar9;
  
  if ((DAT_1468c21ab != '\0') && (plVar4 = (longlong *)*param_1, plVar4 != (longlong *)0x0)) {
LAB_1415e0ce2:
    pwVar8 = L"CachedReadFile";
    lVar3 = (**(code **)(*plVar4 + 0x60))(plVar4);
    do {
      _C = *(wchar_t *)(lVar3 + -0x144cb0b20 + (longlong)pwVar8);
      if ((_C == L'\0') && (*pwVar8 == L'\0')) goto LAB_1415e0d41;
      if (_C != *pwVar8) {
        wVar1 = towlower(_C);
        wVar2 = towlower(*pwVar8);
        if (wVar1 != wVar2) goto LAB_1415e0d24;
      }
      pwVar8 = pwVar8 + 1;
    } while( true );
  }
  goto LAB_1415e0dab;
LAB_1415e0d24:
  if (wVar1 == wVar2) {
LAB_1415e0d41:
    plVar9 = (longlong *)0x0;
    plVar5 = (longlong *)*param_1;
    if ((longlong *)*param_1 == (longlong *)0x0) goto LAB_1415e0d82;
    goto LAB_1415e0d50;
  }
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x50))(plVar4);
  if (plVar4 == (longlong *)0x0) goto LAB_1415e0dab;
  goto LAB_1415e0ce2;
  while (plVar5 = (longlong *)(**(code **)(*plVar7 + 0x50))(), plVar9 = plVar7,
        plVar5 != (longlong *)0x0) {
LAB_1415e0d50:
    plVar7 = plVar5;
    if (plVar7 == plVar4) break;
  }
  if (plVar9 == (longlong *)0x0) {
LAB_1415e0d82:
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x50))(plVar4);
    *param_1 = (longlong)plVar4;
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  else {
    lVar3 = *plVar9;
    uVar6 = (**(code **)(*plVar4 + 0x50))(plVar4);
    (**(code **)(lVar3 + 0x58))(plVar9,uVar6);
  }
LAB_1415e0dab:
  for (param_1 = (longlong *)*param_1; param_1 != (longlong *)0x0;
      param_1 = (longlong *)(**(code **)(*param_1 + 0x50))(param_1)) {
    (**(code **)(*param_1 + 0x30))(param_1);
  }
  return;
}



// FUNCTION 1415e0de0 InnerRead body=60 status=ok
// SIG undefined InnerRead(void)

undefined8 FCachedFileHandle::InnerRead(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
  if (cVar1 != '\0') {
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + param_3;
    return 1;
  }
  return 0;
}



// FUNCTION 1415e0e20 InnerSeek body=64 status=ok
// SIG undefined InnerSeek(void)

char FCachedFileHandle::InnerSeek(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (param_2 == *(longlong *)(param_1 + 0x18)) {
    return '\x01';
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  if (cVar1 != '\0') {
    *(longlong *)(param_1 + 0x18) = param_2;
  }
  return cVar1;
}



// FUNCTION 1415e0e60 InsertUninitialized body=132 status=ok
// SIG undefined InsertUninitialized(void)

void TArray<TTuple<FString,FString>,TInlineAllocator<4,FDefaultAllocator>_>::InsertUninitialized
               (longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  
  iVar1 = *(int *)(param_1 + 0x88);
  iVar2 = iVar1 + param_3;
  *(int *)(param_1 + 0x88) = iVar2;
  if (*(int *)(param_1 + 0x8c) < iVar2) {
    ResizeGrow();
  }
  lVar3 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar3 = param_1;
  }
  _Src = (void *)(lVar3 + (longlong)param_2 * 0x20);
  ::_guard_xfg_dispatch_icall_nop
            ((void *)((longlong)param_3 * 0x20 + (longlong)_Src),_Src,
             (longlong)(iVar1 - param_2) << 5);
  return;
}



// FUNCTION 1415e0ef0 IntegralToString body=340 status=ok
// SIG undefined IntegralToString(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FastDecimalFormat::Internal::IntegralToString
               (undefined1 param_1,undefined8 param_2,longlong param_3,undefined1 *param_4,
               undefined8 param_5)

{
  undefined1 uVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined2 *local_130;
  uint local_128;
  undefined8 local_120;
  undefined1 *local_118;
  undefined4 local_110;
  undefined2 local_108 [48];
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_128 = *(uint *)(param_4 + 8);
  if ((int)*(uint *)(param_4 + 8) < 1) {
    local_128 = 0;
  }
  local_110 = 0x29;
  *(uint *)(param_4 + 8) = local_128;
  uVar7 = *(uint *)(param_4 + 0x10);
  if ((int)*(uint *)(param_4 + 0x10) < 1) {
    uVar7 = 0;
  }
  *(uint *)(param_4 + 0x10) = uVar7;
  uVar6 = *(uint *)(param_4 + 0xc);
  if ((int)*(uint *)(param_4 + 0xc) <= (int)local_128) {
    uVar6 = local_128;
  }
  *(uint *)(param_4 + 0xc) = uVar6;
  uVar3 = *(uint *)(param_4 + 0x14);
  if ((int)*(uint *)(param_4 + 0x14) <= (int)uVar7) {
    uVar3 = uVar7;
  }
  *(uint *)(param_4 + 0x14) = uVar3;
  local_118 = local_a8;
  local_120 = CONCAT44(local_120._4_4_,uVar6);
  local_138 = CONCAT22(local_138._2_2_,*(undefined2 *)(param_3 + 0x70));
  local_130 = (undefined2 *)(param_3 + 0x76);
  uVar4 = IntegralToString_UInt64ToString
                    (param_2,param_4[1],*(undefined1 *)(param_3 + 0x74),
                     *(undefined1 *)(param_3 + 0x75));
  uVar6 = 0;
  if (0 < (int)uVar7) {
    uVar3 = 0x12;
    if ((int)uVar7 < 0x13) {
      uVar3 = uVar7;
    }
    uVar5 = (ulonglong)uVar3;
    uVar6 = 0;
    if (0 < (int)uVar3) {
      uVar2 = *(undefined2 *)(param_3 + 0x76);
      puVar8 = local_108;
      for (; uVar6 = uVar3, uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = uVar2;
        puVar8 = puVar8 + 1;
      }
    }
  }
  if ((ulonglong)((longlong)(int)uVar6 * 2) < 0x52) {
    local_120 = param_5;
    uVar1 = *param_4;
    local_108[(int)uVar6] = 0;
    local_130 = local_108;
    local_138 = uVar4;
    local_128 = uVar6;
    FUN_1415d18f0(param_1,uVar1,param_3,local_a8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_rangecheckfailure();
}



// FUNCTION 1415e1050 IntegralToString_UInt64ToString body=421 status=ok
// SIG undefined IntegralToString_UInt64ToString(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FastDecimalFormat::Internal::IntegralToString_UInt64ToString
               (ulonglong param_1,char param_2,char param_3,char param_4,undefined2 param_5,
               undefined2 *param_6,int param_7,int param_8,longlong param_9)

{
  undefined2 uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined2 auStack_9a [57];
  
  puVar4 = auStack_9a + 1;
  uVar3 = 0;
  uVar10 = uVar3;
  uVar6 = 0;
  if ((param_1 != 0) && (uVar5 = uVar3, uVar6 = 0, 0 < param_8)) {
    do {
      uVar6 = (uint)uVar5;
      iVar8 = (int)uVar10;
      if (param_1 == 0) break;
      if ((param_2 != '\0') && (bVar11 = param_3 == '\0', param_3 = param_3 + -1, bVar11)) {
        iVar8 = iVar8 + 1;
        *puVar4 = param_5;
        puVar4 = puVar4 + 1;
        param_3 = param_4 + -1;
      }
      uVar10 = (ulonglong)(iVar8 + 1);
      uVar6 = uVar6 + 1;
      *puVar4 = param_6[param_1 % 10];
      puVar4 = puVar4 + 1;
      uVar5 = (ulonglong)uVar6;
      param_1 = param_1 / 10;
    } while ((int)uVar6 < param_8);
  }
  uVar9 = (uint)uVar10;
  uVar2 = 0x14 - uVar6;
  if ((int)(param_7 - uVar6) <= (int)(0x14 - uVar6)) {
    uVar2 = param_7 - uVar6;
  }
  uVar5 = (ulonglong)uVar2;
  if (0 < (int)uVar2) {
    uVar1 = *param_6;
    puVar4 = auStack_9a + (longlong)(int)uVar9 + 1;
    do {
      iVar8 = (int)uVar10;
      if ((param_2 != '\0') && (bVar11 = param_3 == '\0', param_3 = param_3 + -1, bVar11)) {
        iVar8 = iVar8 + 1;
        *puVar4 = param_5;
        puVar4 = puVar4 + 1;
        param_3 = param_4;
      }
      *puVar4 = uVar1;
      uVar9 = iVar8 + 1;
      uVar10 = (ulonglong)uVar9;
      puVar4 = puVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  lVar7 = (longlong)(int)uVar9;
  if (0 < (int)uVar9) {
    puVar4 = auStack_9a + lVar7;
    do {
      uVar1 = *puVar4;
      puVar4 = puVar4 + -1;
      *(undefined2 *)(param_9 + uVar3 * 2) = uVar1;
      uVar3 = uVar3 + 1;
    } while ((longlong)uVar3 < lVar7);
  }
  *(undefined2 *)(param_9 + lVar7 * 2) = 0;
  return uVar9;
}



// FUNCTION 1415e1200 IsBeating body=206 status=ok
// SIG undefined IsBeating(void)

undefined8 FThreadHeartBeat::IsBeating(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  DWORD DVar1;
  BOOL BVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  DVar1 = GetCurrentThreadId();
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x18);
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
    lVar4 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar4 = param_1 + 0x78;
    }
    iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x88) - 1U & (longlong)(int)DVar1) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x40) + (longlong)iVar3 * 0x28;
        if (*(DWORD *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar3 * 0x28) == DVar1) {
          if (iVar3 != -1) goto LAB_1415e1293;
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x20);
      } while (iVar3 != -1);
    }
  }
  lVar4 = 0;
LAB_1415e1293:
  lVar5 = lVar4 + 8;
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  if ((lVar5 == 0) || (*(int *)(lVar5 + 8) != 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  LeaveCriticalSection(lpCriticalSection);
  return uVar6;
}



// FUNCTION 1415e12d0 IsCultureAllowed body=111 status=ok
// SIG undefined IsCultureAllowed(void)

undefined8 FICUInternationalization::IsCultureAllowed(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 local_res8 [8];
  
  ConditionalInitializeAllowedCultures();
  if ((*(int *)(param_1 + 0x130) != *(int *)(param_1 + 0x15c)) &&
     (piVar1 = (int *)TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindId
                                (param_1 + 0x128,local_res8,param_2), *piVar1 == -1)) {
    return 0;
  }
  piVar1 = (int *)TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindId
                            (param_1 + 0x178,local_res8,param_2);
  if (*piVar1 != -1) {
    return 0;
  }
  return 1;
}



// FUNCTION 1415e1340 IsInActualRenderingThread body=46 status=ok
// SIG undefined IsInActualRenderingThread(void)

undefined4 IsInActualRenderingThread(void)

{
  DWORD DVar1;
  
  if (DAT_1468b4ff8 != 0) {
    DVar1 = GetCurrentThreadId();
    if (DVar1 == *(DWORD *)(DAT_1468b4ff8 + 0x44)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1415e1370 IsInAudioThread body=37 status=ok
// SIG undefined IsInAudioThread(void)

bool IsInAudioThread(void)

{
  DWORD DVar1;
  DWORD DVar2;
  
  DVar1 = GetCurrentThreadId();
  DVar2 = DAT_1468c21c0;
  if (DAT_1468c21cc != 0) {
    DVar2 = DAT_1468c21cc;
  }
  return DVar1 == DVar2;
}



// FUNCTION 1415e13a0 IsInParallelRenderingThread body=52 status=ok
// SIG undefined IsInParallelRenderingThread(void)

undefined8 IsInParallelRenderingThread(void)

{
  DWORD DVar1;
  
  if ((DAT_1468b4ff8 != 0) && (DAT_1468b5054 == 0)) {
    DVar1 = GetCurrentThreadId();
    if (DVar1 == DAT_1468c21c0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1415e13e0 FUN_1415e13e0 body=218 status=ok
// SIG undefined FUN_1415e13e0(void)

undefined8 FUN_1415e13e0(void)

{
  DWORD DVar1;
  int iVar2;
  
  if ((DAT_1468b4fe4 != 0) && (DVar1 = GetCurrentThreadId(), DVar1 == DAT_1468b4fe4)) {
    return 1;
  }
  if (((DAT_1468b4ff8 != 0) && (DAT_1468b5054 == 0)) &&
     (DVar1 = GetCurrentThreadId(), DVar1 != *(DWORD *)(DAT_1468b4ff8 + 0x44))) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468b5150) && (_Init_thread_header(&DAT_1468b5150), DAT_1468b5150 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_1468b5148 =
         (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.RHICmdUseThread");
    _Init_thread_footer(&DAT_1468b5150);
  }
  if ((DAT_1468b5148 != (longlong *)0x0) &&
     (iVar2 = (**(code **)(*DAT_1468b5148 + 0x68))(), iVar2 == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1415e14c0 IsInRenderingThread body=56 status=ok
// SIG undefined IsInRenderingThread(void)

undefined8 IsInRenderingThread(void)

{
  DWORD DVar1;
  
  if ((DAT_1468b4ff8 != 0) && (DAT_1468b5054 == 0)) {
    DVar1 = GetCurrentThreadId();
    if (DVar1 != *(DWORD *)(DAT_1468b4ff8 + 0x44)) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1415e1500 FUN_1415e1500 body=41 status=ok
// SIG undefined FUN_1415e1500(void)

undefined4 FUN_1415e1500(void)

{
  DWORD DVar1;
  
  if (DAT_1468c21c8 != 0) {
    DVar1 = GetCurrentThreadId();
    if (DVar1 == DAT_1468c21c8) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1415e1530 IsReadOnly body=134 status=ok
// SIG undefined IsReadOnly(void)

undefined1 FLoggedPlatformFile::IsReadOnly(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  LARGE_INTEGER local_res8;
  longlong local_18 [2];
  
  FString::PrintfImpl(local_18,L"IsReadOnly %s",param_2);
  QueryPerformanceCounter(&local_res8);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x80))(*(longlong **)(param_1 + 8),param_2);
  QueryPerformanceCounter(&local_res8);
  if (local_18[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_18[0]);
  }
  return uVar1;
}



// FUNCTION 1415e15c0 IsWhitespace body=22 status=ok
// SIG undefined IsWhitespace(void)

bool FText::IsWhitespace(undefined2 param_1)

{
  char cVar1;
  
  cVar1 = FUN_143a9e310(param_1);
  return cVar1 != '\0';
}



// FUNCTION 1415e15f0 IterateDirectory body=181 status=ok
// SIG undefined IterateDirectory(void)

undefined1
FLoggedPlatformFile::IterateDirectory(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  LARGE_INTEGER local_res8;
  undefined **local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  FString::PrintfImpl(local_18,L"IterateDirectory %s",param_2);
  QueryPerformanceCounter(&local_res8);
  local_28 = &PTR_FUN_144cb03f8;
  local_20 = param_3;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xf0))
                    (*(longlong **)(param_1 + 8),param_2,&local_28);
  QueryPerformanceCounter(&local_res8);
  local_28 = &PTR_FUN_143f47c98;
  if (local_18[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_18[0]);
  }
  return uVar1;
}



// FUNCTION 1415e16c0 IterateDirectoryStatRecursively body=181 status=ok
// SIG undefined IterateDirectoryStatRecursively(void)

undefined1
FLoggedPlatformFile::IterateDirectoryStatRecursively
          (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  LARGE_INTEGER local_res8;
  undefined **local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  FString::PrintfImpl(local_18,L"IterateDirectoryRecursively %s",param_2);
  QueryPerformanceCounter(&local_res8);
  local_28 = &PTR_FUN_144cb03f8;
  local_20 = param_3;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x128))
                    (*(longlong **)(param_1 + 8),param_2,&local_28);
  QueryPerformanceCounter(&local_res8);
  local_28 = &PTR_FUN_143f47c98;
  if (local_18[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_18[0]);
  }
  return uVar1;
}



// FUNCTION 1415e1790 IterateDirectoryStat body=181 status=ok
// SIG undefined IterateDirectoryStat(void)

undefined1
FLoggedPlatformFile::IterateDirectoryStat(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  LARGE_INTEGER local_res8;
  undefined **local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  FString::PrintfImpl(local_18,L"IterateDirectoryStat %s",param_2);
  QueryPerformanceCounter(&local_res8);
  local_28 = &PTR_FUN_144cb0408;
  local_20 = param_3;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xf8))
                    (*(longlong **)(param_1 + 8),param_2,&local_28);
  QueryPerformanceCounter(&local_res8);
  local_28 = &PTR_FUN_143f47c98;
  if (local_18[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_18[0]);
  }
  return uVar1;
}



// FUNCTION 1415e1860 FUN_1415e1860 body=181 status=ok
// SIG undefined FUN_1415e1860(void)

undefined1 FUN_1415e1860(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  LARGE_INTEGER local_res8;
  undefined **local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  FString::PrintfImpl(local_18,L"IterateDirectoryStatRecursively %s",param_2);
  QueryPerformanceCounter(&local_res8);
  local_28 = &PTR_FUN_144cb0408;
  local_20 = param_3;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x130))
                    (*(longlong **)(param_1 + 8),param_2,&local_28);
  QueryPerformanceCounter(&local_res8);
  local_28 = &PTR_FUN_143f47c98;
  if (local_18[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_18[0]);
  }
  return uVar1;
}



// FUNCTION 1415e1920 Kill body=33 status=ok
// SIG undefined Kill(void)

undefined1 FFakeThread::Kill(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1415d8270();
  FUN_1415e4100(uVar1,param_1);
  return 1;
}



// FUNCTION 1415e1950 KillHeartBeat body=87 status=ok
// SIG undefined KillHeartBeat(void)

void FThreadHeartBeat::KillHeartBeat(longlong param_1)

{
  DWORD DVar1;
  BOOL BVar2;
  
  DVar1 = GetCurrentThreadId();
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  TSet<TTuple<unsigned_int,FAISightTarget>,TDefaultMapHashableKeyFuncs<unsigned_int,FAISightTarget,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 0x40,DVar1);
                    /* WARNING: Could not recover jumptable at 0x0001415e19a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}



// FUNCTION 1415e19b0 FUN_1415e19b0 body=82 status=ok
// SIG undefined FUN_1415e19b0(void)

undefined8 FUN_1415e19b0(longlong param_1)

{
  longlong *plVar1;
  
  LOCK();
  *(undefined1 *)(param_1 + 0x10) = 1;
  UNLOCK();
  (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x20))();
  FUN_1415b5910(*(undefined8 *)(param_1 + 8));
  plVar1 = *(longlong **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  return 1;
}



// FUNCTION 1415e1a10 LoadInternationalizationConfigArray body=210 status=ok
// SIG undefined LoadInternationalizationConfigArray(void)

longlong * LoadInternationalizationConfigArray(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  void *local_18;
  ulonglong local_10;
  
  *param_1 = 0;
  param_1[1] = 0;
  FConfigCacheIni::GetArray(DAT_1468b6148,L"Internationalization",param_2,param_1,&DAT_1468e2360);
  local_18 = (void *)0x0;
  local_10 = 0;
  FConfigCacheIni::GetArray(DAT_1468b6148,L"Internationalization",param_2,&local_18,&DAT_1468e2410);
  iVar1 = (int)local_10;
  lVar3 = (longlong)(int)local_10;
  if ((int)local_10 != 0) {
    iVar2 = (int)param_1[1];
    if (*(int *)((longlong)param_1 + 0xc) < iVar2 + (int)local_10) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1);
      iVar2 = (int)param_1[1];
    }
    _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar2 * 0x10 + *param_1),local_18,lVar3 << 4);
    *(int *)(param_1 + 1) = (int)param_1[1] + iVar1;
    local_10 = local_10 & 0xffffffff00000000;
  }
  TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(&local_18);
  return param_1;
}



// FUNCTION 1415e1af0 Malloc body=51 status=ok
// SIG undefined Malloc(void)

void `anonymous_namespace'::FICUOverrides::Malloc(undefined8 param_1,undefined8 param_2)

{
  if (DAT_1468c2208 == (longlong *)0x0) {
    FUN_1415d7ea0();
  }
                    /* WARNING: Could not recover jumptable at 0x0001415e1b1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468c2208 + 0x10))(DAT_1468c2208,param_2,0);
  return;
}



// FUNCTION 1415e1b30 Malloc body=73 status=ok
// SIG undefined Malloc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * FMallocPoisonProxy::Malloc(longlong param_1,size_t param_2)

{
  void *_Dst;
  
  LOCK();
  _DAT_1468b5048 = _DAT_1468b5048 + 1;
  UNLOCK();
  _Dst = (void *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  if ((_Dst != (void *)0x0) && (param_2 != 0)) {
    ::_guard_xfg_dispatch_icall_nop(_Dst,0xcd,param_2);
  }
  return _Dst;
}



// FUNCTION 1415e1b90 Malloc body=114 status=ok
// SIG undefined Malloc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FMallocThreadSafeProxy::Malloc(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  undefined8 uVar2;
  
  LOCK();
  _DAT_1468b5048 = _DAT_1468b5048 + 1;
  UNLOCK();
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x10);
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))
                    (*(longlong **)(param_1 + 8),param_2,param_3);
  LeaveCriticalSection(lpCriticalSection);
  return uVar2;
}



// FUNCTION 1415e1c10 Malloc body=62 status=ok
// SIG undefined Malloc(void)

void FMemory::Malloc(undefined8 param_1,undefined4 param_2)

{
  if (DAT_1468c2208 == (longlong *)0x0) {
    FUN_1415d7ea0();
  }
                    /* WARNING: Could not recover jumptable at 0x0001415e1c4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468c2208 + 0x10))(DAT_1468c2208,param_1,param_2);
  return;
}



// FUNCTION 1415e1c50 MoveFile body=153 status=ok
// SIG undefined MoveFile(void)

undefined1 FLoggedPlatformFile::MoveFile(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  LARGE_INTEGER local_res8;
  longlong local_18 [2];
  
  FString::PrintfImpl(local_18,L"MoveFile %s %s",param_2,param_3);
  QueryPerformanceCounter(&local_res8);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x88))
                    (*(longlong **)(param_1 + 8),param_2,param_3);
  QueryPerformanceCounter(&local_res8);
  if (local_18[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_18[0]);
  }
  return uVar1;
}



// FUNCTION 1415e1cf0 FUN_1415e1cf0 body=144 status=ok
// SIG undefined FUN_1415e1cf0(void)

undefined4 FUN_1415e1cf0(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  longlong *local_18;
  longlong *local_10;
  
  FUN_1415dc080(param_1,&local_18);
  (**(code **)(*local_18 + 0x20))(local_18);
  uVar6 = (**(code **)(*local_18 + 0x78))(local_18,param_2);
  (**(code **)(*local_18 + 0x20))(local_18);
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
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return uVar6;
}



// FUNCTION 1415e1d90 FUN_1415e1d90 body=147 status=ok
// SIG undefined FUN_1415e1d90(void)

undefined4 FUN_1415e1d90(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  longlong *local_18;
  longlong *local_10;
  
  FUN_1415dc080(param_1,&local_18);
  (**(code **)(*local_18 + 0x20))(local_18);
  uVar6 = (**(code **)(*local_18 + 0x80))(local_18,param_2);
  (**(code **)(*local_18 + 0x20))(local_18);
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
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return uVar6;
}



// FUNCTION 1415e1e40 FUN_1415e1e40 body=144 status=ok
// SIG undefined FUN_1415e1e40(void)

undefined4 FUN_1415e1e40(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  longlong *local_18;
  longlong *local_10;
  
  FUN_1415dc080(param_1,&local_18);
  uVar6 = (**(code **)(*local_18 + 0x68))(local_18);
  (**(code **)(*local_18 + 0x20))(local_18);
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
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
    return uVar6;
  }
  return uVar6;
}



// FUNCTION 1415e1ee0 FUN_1415e1ee0 body=286 status=ok
// SIG undefined FUN_1415e1ee0(void)

undefined4 FUN_1415e1ee0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  short sVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  longlong *local_28;
  longlong *local_20;
  
  FUN_1415dc080(param_1,&local_28);
  plVar9 = (longlong *)(**(code **)(*local_28 + 0x20))(local_28);
  uVar8 = *(undefined4 *)(param_1 + 0x18);
  uVar7 = (**(code **)(*DAT_1468b50f8 + 0x68))();
  if ((1 < uVar7) || ((char)uVar7 == '\x01')) {
    (**(code **)(*plVar9 + 0x78))(plVar9,uVar8);
    sVar6 = (**(code **)(*plVar9 + 0x88))(plVar9);
    if ((ushort)(sVar6 + 0x5400U) < 0x2ba4) {
      cVar5 = (**(code **)(*plVar9 + 0x30))(plVar9);
      while ((cVar5 != '\0' &&
             (sVar6 = (**(code **)(*plVar9 + 0x98))(plVar9), (ushort)(sVar6 + 0x5400U) < 0x2ba4))) {
        uVar8 = *(undefined4 *)((longlong)plVar9 + 0xc);
        cVar5 = (**(code **)(*plVar9 + 0x30))(plVar9);
      }
    }
  }
  uVar8 = (**(code **)(*local_28 + 0x78))(local_28,uVar8);
  plVar9 = local_20;
  *(undefined4 *)(param_1 + 0x18) = uVar8;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return uVar8;
}



// FUNCTION 1415e2000 FUN_1415e2000 body=144 status=ok
// SIG undefined FUN_1415e2000(void)

undefined4 FUN_1415e2000(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  longlong *local_18;
  longlong *local_10;
  
  FUN_1415dc080(param_1,&local_18);
  uVar6 = (**(code **)(*local_18 + 0x58))(local_18);
  (**(code **)(*local_18 + 0x20))(local_18);
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
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
    return uVar6;
  }
  return uVar6;
}



// FUNCTION 1415e20a0 FUN_1415e20a0 body=292 status=ok
// SIG undefined FUN_1415e20a0(void)

undefined4 FUN_1415e20a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  short sVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  longlong *local_28;
  longlong *local_20;
  
  FUN_1415dc080(param_1,&local_28);
  plVar9 = (longlong *)(**(code **)(*local_28 + 0x20))(local_28);
  uVar8 = *(undefined4 *)(param_1 + 0x18);
  uVar7 = (**(code **)(*DAT_1468b50f8 + 0x68))();
  if ((1 < uVar7) || ((char)uVar7 == '\x01')) {
    (**(code **)(*plVar9 + 0x78))(plVar9,uVar8);
    sVar6 = (**(code **)(*plVar9 + 0x88))(plVar9);
    if ((ushort)(sVar6 + 0x5400U) < 0x2ba4) {
      cVar5 = (**(code **)(*plVar9 + 0xb0))(plVar9);
      while ((cVar5 != '\0' &&
             (sVar6 = (**(code **)(*plVar9 + 0xa8))(plVar9), (ushort)(sVar6 + 0x5400U) < 0x2ba4))) {
        uVar8 = *(undefined4 *)((longlong)plVar9 + 0xc);
        cVar5 = (**(code **)(*plVar9 + 0xb0))(plVar9);
      }
    }
  }
  uVar8 = (**(code **)(*local_28 + 0x80))(local_28,uVar8);
  plVar9 = local_20;
  *(undefined4 *)(param_1 + 0x18) = uVar8;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return uVar8;
}



// FUNCTION 1415e21d0 FUN_1415e21d0 body=607 status=ok
// SIG undefined FUN_1415e21d0(void)

void FUN_1415e21d0(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  BOOL BVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint *puVar12;
  longlong *plVar13;
  LARGE_INTEGER local_res8;
  int local_a8;
  uint uStack_a4;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int iStack_80;
  uint uStack_7c;
  uint *local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 uStack_40;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x18);
  BVar7 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar7 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  plVar13 = (longlong *)(param_1 + 0x40);
  uStack_a4 = 1;
  uVar3 = *(uint *)(param_1 + 0x68);
  puVar1 = (uint *)(param_1 + 0x50);
  local_a8 = 0;
  uStack_94 = 0;
  iStack_90 = 0;
  if (uVar3 != 0) {
    puVar12 = *(uint **)(param_1 + 0x60);
    if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar4 = *puVar12;
    iStack_90 = 0;
    local_a8 = 0;
    while (uVar4 == 0) {
      lVar10 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar8 = local_a8 + 1;
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar8;
      if (bVar6) goto LAB_1415e22bc;
      uVar4 = puVar12[lVar10 + 1];
    }
    uStack_a4 = -uVar4 & uVar4;
    iVar8 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_94 = (iStack_90 - iVar8) + 0x1f;
    if ((int)uVar3 < (int)uStack_94) {
LAB_1415e22bc:
      uStack_94 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x68);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_94;
  local_68 = CONCAT44(uStack_8c,iStack_90);
  uStack_58 = CONCAT44(uStack_a4,local_a8);
  uVar11 = uVar4 & 0xffffffe0;
  iStack_80 = local_a8;
  uStack_7c = uStack_a4;
  local_78 = puVar1;
  local_60 = plVar13;
  puStack_50 = puVar1;
  uStack_40 = local_68;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  uStack_94 = uVar4;
  if (uVar4 != uVar3) {
    puVar12 = *(uint **)(param_1 + 0x60);
    if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar9 = puVar12[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar8 = (int)uVar4 >> 5;
    while (uVar9 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_1415e2382;
      uVar9 = puVar12[(longlong)iVar8 + 1];
      iVar8 = iVar8 + 1;
    }
    uVar9 = -uVar9 & uVar9;
    iVar8 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar9 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_94 = (uVar11 - iVar8) + 0x1f;
    if ((int)uVar3 < (int)uStack_94) {
LAB_1415e2382:
      uStack_94 = uVar3;
    }
  }
  while ((lVar10 = (longlong)(int)uStack_6c, uStack_6c != uStack_94 || (local_78 != puVar1))) {
    lVar5 = *plVar13;
    piVar2 = (int *)(lVar5 + 0x10 + lVar10 * 0x28);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      QueryPerformanceCounter(&local_res8);
      *(double *)(lVar5 + 8 + lVar10 * 0x28) =
           (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
    }
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
  }
                    /* WARNING: Could not recover jumptable at 0x0001415e2428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 1415e2430 FUN_1415e2430 body=543 status=ok
// SIG undefined FUN_1415e2430(void)

void FUN_1415e2430(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  BOOL BVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  longlong *plVar12;
  int local_88;
  uint uStack_84;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_60;
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
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x18);
  BVar6 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar6 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  uStack_84 = 1;
  plVar12 = (longlong *)(param_1 + 0x40);
  uVar3 = *(uint *)(param_1 + 0x68);
  puVar1 = (uint *)(param_1 + 0x50);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar11 = *(uint **)(param_1 + 0x60);
    if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar4 = *puVar11;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar9 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar7 = local_88 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar7;
      if (bVar5) goto LAB_1415e251d;
      uVar4 = puVar11[lVar9 + 1];
    }
    uStack_84 = -uVar4 & uVar4;
    iVar7 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_74 = (iStack_70 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_1415e251d:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x68);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar10 = uVar4 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = plVar12;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar11 = *(uint **)(param_1 + 0x60);
    if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar8 = puVar11[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar7 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1415e25e4;
      uVar8 = puVar11[(longlong)iVar7 + 1];
      iVar7 = iVar7 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar7 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_74 = (uVar10 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_1415e25e4:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
    piVar2 = (int *)(*plVar12 + 0x10 + (longlong)(int)uStack_4c * 0x28);
    *piVar2 = *piVar2 + 1;
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x0001415e2648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 1415e2660 OpenAsyncRead body=134 status=ok
// SIG undefined OpenAsyncRead(void)

undefined8 FLoggedPlatformFile::OpenAsyncRead(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  LARGE_INTEGER local_res8;
  longlong local_18 [2];
  
  FString::PrintfImpl(local_18,L"OpenAsyncRead %s",param_2);
  QueryPerformanceCounter(&local_res8);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x100))(*(longlong **)(param_1 + 8),param_2);
  QueryPerformanceCounter(&local_res8);
  if (local_18[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_18[0]);
  }
  return uVar1;
}



// FUNCTION 1415e26f0 FUN_1415e26f0 body=791 status=ok
// SIG undefined FUN_1415e26f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1415e26f0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined2 *puVar6;
  uint uVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar10;
  undefined1 auStack_1c8 [32];
  int local_1a8 [2];
  undefined2 *local_1a0;
  ulonglong local_198;
  undefined4 local_190 [2];
  longlong local_188;
  undefined2 **local_180;
  undefined4 *local_178;
  undefined1 local_168 [256];
  longlong local_68;
  short *local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_168,param_4);
  piVar10 = (int *)0x0;
  local_198 = 0;
  local_1a0 = (undefined2 *)0x0;
  if ((local_60 != (short *)0x0) && (*local_60 != 0)) {
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (local_60[lVar8] != 0);
    uVar7 = (int)lVar8 + 1;
    local_198 = (ulonglong)uVar7;
    if (0 < (int)uVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a0,0);
    }
    FGenericPlatformString::Memcpy(local_1a0,local_60,(longlong)(int)uVar7 * 2);
  }
  if (local_68 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_68);
  }
  lVar8 = FInternationalization::Get();
  lVar8 = *(longlong *)(lVar8 + 0x20);
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(lVar8 + 0x270,local_1a8,&local_1a0);
  piVar5 = piVar10;
  if (local_1a8[0] != -1) {
    piVar5 = (int *)(*(longlong *)(lVar8 + 0x270) + (longlong)local_1a8[0] * 0x28);
  }
  piVar9 = piVar5 + 4;
  if (piVar5 == (int *)0x0) {
    piVar9 = piVar10;
  }
  if (piVar9 == (int *)0x0) {
    plVar2 = (longlong *)FUN_1415c3d50();
    puVar6 = &DAT_143f3eda8;
    if ((int)local_198 != 0) {
      puVar6 = local_1a0;
    }
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x18))(plVar2,puVar6,0);
    if (plVar2 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar2 + 0x98))(plVar2);
      local_190[0] = 0;
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
        local_188 = (**(code **)(*DAT_1468c2208 + 0x10))(DAT_1468c2208,uVar3,0);
      }
      else {
        local_188 = (**(code **)(*DAT_1468c2208 + 0x10))(DAT_1468c2208,uVar3,0);
      }
      local_180 = &local_1a0;
      local_178 = local_190;
      FUN_1415ca770(lVar8 + 0x270,local_1a8,&local_180,0);
      lVar1 = local_188;
      piVar9 = (int *)(*(longlong *)(lVar8 + 0x270) + ((longlong)local_1a8[0] * 5 + 2) * 8);
      if (local_188 != 0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
        }
        (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
      }
      (**(code **)(*plVar2 + 0x50))(plVar2,*(undefined8 *)(piVar9 + 2),uVar3);
      (**(code **)*plVar2)(plVar2,1);
    }
    if (piVar9 != (int *)0x0) goto LAB_1415e2921;
  }
  else {
LAB_1415e2921:
    *piVar9 = *piVar9 + 1;
    puVar4 = (undefined8 *)operator_new(0x10);
    puVar6 = local_1a0;
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      lVar8 = (longlong)(int)local_198;
      *(int *)(puVar4 + 1) = (int)local_198;
      if ((int)local_198 == 0) {
        *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar4,local_198 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar4,puVar6,lVar8 * 2);
      }
      goto LAB_1415e2974;
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_1415e2974:
  puVar6 = local_1a0;
  *param_2 = puVar4;
  if (piVar9 != (int *)0x0) {
    piVar10 = *(int **)(piVar9 + 2);
  }
  *param_3 = piVar10;
  if (local_1a0 != (undefined2 *)0x0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,puVar6);
    }
    else {
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_1a0);
    }
  }
  return piVar9 != (int *)0x0;
}



// FUNCTION 1415e2a10 OpenRead body=72 status=ok
// SIG undefined OpenRead(void)

undefined8 FCachedReadPlatformFile::OpenRead(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))();
  if (lVar1 != 0) {
    lVar2 = operator_new(0x20058);
    if (lVar2 != 0) {
      uVar3 = FCachedFileHandle::FCachedFileHandle(lVar2,lVar1,1,0);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1415e2a60 OpenRead body=196 status=ok
// SIG undefined OpenRead(void)

undefined8 FLoggedPlatformFile::OpenRead(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  LARGE_INTEGER local_res8;
  longlong local_18 [2];
  
  FString::PrintfImpl(local_18,L"OpenRead %s",param_2);
  QueryPerformanceCounter(&local_res8);
  lVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))
                    (*(longlong **)(param_1 + 8),param_2,param_3);
  QueryPerformanceCounter(&local_res8);
  if (lVar1 != 0) {
    lVar2 = operator_new(0x20);
    if (lVar2 != 0) {
      uVar3 = FLoggedFileHandle::FLoggedFileHandle(lVar2,lVar1,param_2,param_1);
      goto LAB_1415e2ae6;
    }
  }
  uVar3 = 0;
LAB_1415e2ae6:
  if (local_18[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_18[0]);
  }
  return uVar3;
}



// FUNCTION 1415e2b40 OpenWrite body=91 status=ok
// SIG undefined OpenWrite(void)

undefined8
FCachedReadPlatformFile::OpenWrite
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 200))();
  if (lVar1 != 0) {
    lVar2 = operator_new(0x20058);
    if (lVar2 != 0) {
      uVar3 = FCachedFileHandle::FCachedFileHandle(lVar2,lVar1,param_4,1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1415e2ba0 OpenWrite body=221 status=ok
// SIG undefined OpenWrite(void)

undefined8
FLoggedPlatformFile::OpenWrite
          (longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  LARGE_INTEGER local_res8;
  longlong local_18 [2];
  
  FString::PrintfImpl(local_18,L"OpenWrite %s %d %d",param_2,param_3,param_4);
  QueryPerformanceCounter(&local_res8);
  lVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 200))
                    (*(longlong **)(param_1 + 8),param_2,param_3,param_4);
  QueryPerformanceCounter(&local_res8);
  if (lVar1 != 0) {
    lVar2 = operator_new(0x20);
    if (lVar2 != 0) {
      uVar3 = FLoggedFileHandle::FLoggedFileHandle(lVar2,lVar1,param_2,param_1);
      goto LAB_1415e2c3a;
    }
  }
  uVar3 = 0;
LAB_1415e2c3a:
  if (local_18[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_18[0]);
  }
  return uVar3;
}



// FUNCTION 1415e2c80 ParseSigningStringImpl body=174 status=ok
// SIG undefined ParseSigningStringImpl(void)

ulonglong FastDecimalFormat::Internal::FDecimalNumberSignParser::ParseSigningStringImpl
                    (longlong *param_1,byte *param_2,undefined8 *param_3,byte param_4)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  wchar_t *_Str2;
  
  iVar1 = *(int *)(param_3 + 1);
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = -1;
  }
  uVar3 = (ulonglong)(iVar1 - 1);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  if (0 < (int)uVar3) {
    if (iVar1 == 0) {
      iVar2 = 0;
      _Str2 = L"";
    }
    else {
      _Str2 = (wchar_t *)*param_3;
    }
    iVar2 = wcsncmp((wchar_t *)*param_1,_Str2,(longlong)iVar2);
    uVar3 = CONCAT44(extraout_var,iVar2);
    if (iVar2 == 0) {
      *param_2 = *param_2 | param_4;
      iVar2 = *(int *)(param_3 + 1) + -1;
      if (*(int *)(param_3 + 1) == 0) {
        iVar2 = 0;
      }
      *param_1 = *param_1 + (longlong)iVar2 * 2;
      return CONCAT71((int7)((ulonglong)((longlong)iVar2 * 2) >> 8),1);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1415e2d30 QuantizeSize body=32 status=ok
// SIG undefined QuantizeSize(void)

undefined8 FMemory::QuantizeSize(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (DAT_1468c2208 == (longlong *)0x0) {
    return param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001415e2d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*DAT_1468c2208 + 0x28))(DAT_1468c2208,param_1,param_2);
  return uVar1;
}



// FUNCTION 1415e2d50 Read body=591 status=ok
// SIG undefined Read(void)

ulonglong FCachedFileHandle::Read(longlong param_1,void *param_2,ulonglong param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  ulonglong in_RAX;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  size_t _Size;
  ulonglong uVar7;
  longlong lVar8;
  
  if ((*(char *)(param_1 + 0x29) != '\0') && (-1 < (longlong)param_3)) {
    lVar8 = *(longlong *)(param_1 + 0x10);
    in_RAX = lVar8 + param_3;
    if ((longlong)in_RAX <= *(longlong *)(param_1 + 0x20)) {
      if (param_3 == 0) {
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
      bVar2 = 0;
      if ((longlong)param_3 < 0x10001) {
        bVar2 = 1;
        do {
          if (bVar2 == 0) break;
          uVar7 = *(ulonglong *)(param_1 + 0x10);
          plVar4 = (longlong *)(param_1 + 0x20040);
          uVar6 = 0;
          do {
            if ((plVar4[-2] <= (longlong)uVar7) && ((longlong)uVar7 < *plVar4)) goto LAB_1415e2e81;
            uVar3 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar3;
            plVar4 = plVar4 + 1;
          } while (uVar3 < 2);
          uVar6 = 3;
LAB_1415e2e81:
          if ((uint)uVar6 < 3) {
LAB_1415e2f1c:
            uVar7 = *(longlong *)(param_1 + 0x20040 + uVar6 * 8) - *(longlong *)(param_1 + 0x10);
            if (param_3 <= uVar7) {
              uVar7 = param_3;
            }
            ::_guard_xfg_dispatch_icall_nop
                      (param_2,(void *)(param_1 + 0x2a +
                                       (uVar6 * 0x10000 -
                                       *(longlong *)(param_1 + 0x20030 + uVar6 * 8)) +
                                       *(longlong *)(param_1 + 0x10)),uVar7);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + uVar7;
            param_2 = (void *)((longlong)param_2 + uVar7);
            param_3 = param_3 - uVar7;
          }
          else {
            uVar7 = uVar7 & 0xffffffffffff0000;
            uVar6 = *(longlong *)(param_1 + 0x20) - uVar7;
            if (0xffff < uVar6) {
              uVar6 = 0x10000;
            }
            if (uVar7 != *(ulonglong *)(param_1 + 0x18)) {
              cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))
                                (*(longlong **)(param_1 + 8),uVar7);
              if (cVar1 != '\0') {
                *(ulonglong *)(param_1 + 0x18) = uVar7;
              }
            }
            cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
                              (*(longlong **)(param_1 + 8),
                               param_1 + 0x2a + (longlong)*(int *)(param_1 + 0x20050) * 0x10000,
                               uVar6);
            if (cVar1 != '\0') {
              *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + uVar6;
              bVar2 = 1;
              *(ulonglong *)(param_1 + 0x20030 + (longlong)*(int *)(param_1 + 0x20050) * 8) = uVar7;
              *(ulonglong *)(param_1 + 0x20040 + (longlong)*(int *)(param_1 + 0x20050) * 8) =
                   uVar6 + uVar7;
              uVar6 = (ulonglong)*(uint *)(param_1 + 0x20050);
              *(uint *)(param_1 + 0x20050) = *(uint *)(param_1 + 0x20050) - 1 & 1;
              goto LAB_1415e2f1c;
            }
            bVar2 = 0;
          }
        } while (param_3 != 0);
      }
      else {
        uVar3 = GetCacheIndex(param_1,lVar8);
        if (uVar3 < 2) {
          lVar5 = (longlong)(int)uVar3;
          _Size = *(longlong *)(param_1 + 0x20040 + lVar5 * 8) - lVar8;
          ::_guard_xfg_dispatch_icall_nop
                    (param_2,(void *)(param_1 + 0x2a +
                                     (lVar5 * 0x10000 - *(longlong *)(param_1 + 0x20030 + lVar5 * 8)
                                     ) + lVar8),_Size);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + _Size;
          param_3 = param_3 - _Size;
          lVar8 = *(longlong *)(param_1 + 0x10);
          param_2 = (void *)((longlong)param_2 + _Size);
        }
        cVar1 = InnerSeek(param_1,lVar8);
        if (cVar1 != '\0') {
          bVar2 = InnerRead(param_1,param_2,param_3);
          if (bVar2 != 0) {
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + param_3;
          }
        }
      }
      return (ulonglong)bVar2;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1415e2fa0 Realloc body=66 status=ok
// SIG undefined Realloc(void)

void `anonymous_namespace'::FICUOverrides::Realloc
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_1468c2208 == (longlong *)0x0) {
    FUN_1415d7ea0();
  }
                    /* WARNING: Could not recover jumptable at 0x0001415e2fde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468c2208 + 0x18))(DAT_1468c2208,param_2,param_3,0);
  return;
}



// FUNCTION 1415e2ff0 Realloc body=186 status=ok
// SIG undefined Realloc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FMallocPoisonProxy::Realloc
                   (longlong *param_1,longlong param_2,ulonglong param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  ulonglong local_res8;
  
  LOCK();
  _DAT_1468b5050 = _DAT_1468b5050 + 1;
  UNLOCK();
  local_res8 = 0;
  if ((((param_2 != 0) &&
       (cVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2,&local_res8), cVar1 != '\0')) &&
      (local_res8 != 0)) && (param_3 < local_res8)) {
    ::_guard_xfg_dispatch_icall_nop((void *)(param_2 + param_3),0xdd,local_res8 - param_3);
  }
  lVar2 = (**(code **)(*(longlong *)param_1[1] + 0x18))
                    ((longlong *)param_1[1],param_2,param_3,param_4);
  if (((lVar2 != 0) && (local_res8 != 0)) && (local_res8 < param_3)) {
    ::_guard_xfg_dispatch_icall_nop((void *)(lVar2 + local_res8),0xcd,param_3 - local_res8);
  }
  return lVar2;
}



// FUNCTION 1415e30b0 Realloc body=132 status=ok
// SIG undefined Realloc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FMallocThreadSafeProxy::Realloc
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  undefined8 uVar2;
  
  LOCK();
  _DAT_1468b5050 = _DAT_1468b5050 + 1;
  UNLOCK();
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x10);
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                    (*(longlong **)(param_1 + 8),param_2,param_3,param_4);
  LeaveCriticalSection(lpCriticalSection);
  return uVar2;
}



// FUNCTION 1415e3140 Realloc body=79 status=ok
// SIG undefined Realloc(void)

void FMemory::Realloc(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  if (DAT_1468c2208 == (longlong *)0x0) {
    FUN_1415d7ea0();
  }
                    /* WARNING: Could not recover jumptable at 0x0001415e318b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468c2208 + 0x18))(DAT_1468c2208,param_1,param_2,param_3);
  return;
}



// FUNCTION 1415e3190 FUN_1415e3190 body=92 status=ok
// SIG undefined FUN_1415e3190(void)

void FUN_1415e3190(longlong param_1)

{
  int iVar1;
  LPVOID pvVar2;
  
  pvVar2 = TlsGetValue(DAT_1468b5058);
  *(LPVOID *)(param_1 + 8) = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    iVar1 = *(int *)((longlong)pvVar2 + 0x38);
    *(int *)((longlong)pvVar2 + 0x38) = iVar1 + 1;
    if (*(int *)((longlong)pvVar2 + 0x3c) < iVar1 + 1) {
      TArray<FMallocBinned2::FPerThreadFreeBlockLists_*,FDefaultAllocator>::ResizeGrow
                ((longlong *)((longlong)pvVar2 + 0x30),iVar1);
    }
    *(longlong *)(*(longlong *)((longlong)pvVar2 + 0x30) + (longlong)iVar1 * 8) = param_1;
  }
  return;
}



// FUNCTION 1415e31f0 FUN_1415e31f0 body=230 status=ok
// SIG undefined FUN_1415e31f0(void)

void FUN_1415e31f0(longlong param_1,undefined4 param_2,char param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  BOOL BVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 local_res8 [2];
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x38);
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  plVar4 = *(longlong **)(param_1 + 0x18);
  uVar5 = 0;
  uVar6 = (longlong)*(int *)(param_1 + 0x20) & 0x1fffffffffffffff;
  if (plVar4 + *(int *)(param_1 + 0x20) < plVar4) {
    uVar6 = uVar5;
  }
  if (uVar6 != 0) {
    do {
      lVar1 = *plVar4;
      FUN_1415b2540(*(undefined8 *)(lVar1 + 0x28),param_2);
      if (param_3 != '\0') {
        local_res8[0] = param_2;
        uVar3 = FUN_1415cbed0(local_58,local_res8);
        FUN_1415b2830(*(undefined8 *)(lVar1 + 0x28),uVar3);
        TBaseDelegate<FText>::~TBaseDelegate<FText>(local_40);
      }
      plVar4 = plVar4 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x0001415e32cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 1415e32e0 FUN_1415e32e0 body=159 status=ok
// SIG undefined FUN_1415e32e0(void)

void FUN_1415e32e0(longlong param_1,undefined8 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x38);
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  plVar3 = *(longlong **)(param_1 + 0x18);
  uVar2 = 0;
  uVar4 = (longlong)*(int *)(param_1 + 0x20) & 0x1fffffffffffffff;
  if (plVar3 + *(int *)(param_1 + 0x20) < plVar3) {
    uVar4 = uVar2;
  }
  if (uVar4 != 0) {
    do {
      FUN_1415b2830(*(undefined8 *)(*plVar3 + 0x28),param_2);
      uVar2 = uVar2 + 1;
      plVar3 = plVar3 + 1;
    } while (uVar2 != uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x0001415e3378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 1415e3380 Rehash body=552 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<unsigned_int,FRunnableThread_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
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
  
  lVar6 = param_1[8];
  plVar1 = param_1 + 7;
  if (lVar6 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    lVar6 = (**(code **)(*DAT_1468c2208 + 0x18))(DAT_1468c2208,lVar6,0,0);
    param_1[8] = lVar6;
  }
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_28;
      }
      uVar5 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_1415e34df;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_44 = (iStack_40 - iVar8) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_1415e34df:
        iStack_44 = iVar3;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        puVar12 = (uint *)(*param_1 + (longlong)iStack_1c * 0x18);
        uVar5 = (int)*plVar2 - 1U & *puVar12;
        puVar12[5] = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar12[4] = *(uint *)((longlong)plVar7 +
                              ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1415e35b0 Rehash body=552 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<unsigned_int,FThreadHeartBeat::FHeartBeatInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FThreadHeartBeat::FHeartBeatInfo,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
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
  
  lVar6 = param_1[8];
  plVar1 = param_1 + 7;
  if (lVar6 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    lVar6 = (**(code **)(*DAT_1468c2208 + 0x18))(DAT_1468c2208,lVar6,0,0);
    param_1[8] = lVar6;
  }
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_28;
      }
      uVar5 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_1415e370f;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_44 = (iStack_40 - iVar8) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_1415e370f:
        iStack_44 = iVar3;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        puVar12 = (uint *)(*param_1 + (longlong)iStack_1c * 0x28);
        uVar5 = (int)*plVar2 - 1U & *puVar12;
        puVar12[9] = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar12[8] = *(uint *)((longlong)plVar7 +
                              ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1415e37e0 Rehash body=576 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FString,FICUInternationalization::FICUCachedFileData>,TDefaultMapHashableKeyFuncs<FString,FICUInternationalization::FICUCachedFileData,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
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
  
  lVar7 = param_1[8];
  plVar1 = param_1 + 7;
  if (lVar7 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    lVar7 = (**(code **)(*DAT_1468c2208 + 0x18))(DAT_1468c2208,lVar7,0,0);
    param_1[8] = lVar7;
  }
  uVar6 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar6 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar6) {
      uVar12 = 0;
      uVar13 = (ulonglong)uVar6;
      do {
        uVar11 = (longlong)(int)*plVar2 - 1U & uVar12;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        uVar12 = uVar12 + 1;
        *(undefined4 *)((longlong)plVar8 + uVar11 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar4 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar4 != 0) {
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puStack_28;
      }
      uVar6 = *puVar14;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar6 == 0) {
        lVar7 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar9 = local_58 + 1;
        bVar5 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar9;
        if (bVar5) goto LAB_1415e393f;
        uVar6 = puVar14[lVar7 + 1];
      }
      uStack_54 = -uVar6 & uVar6;
      iVar9 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      iStack_44 = (iStack_40 - iVar9) + 0x1f;
      if (iVar4 < iStack_44) {
LAB_1415e393f:
        iStack_44 = iVar4;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar4) {
      do {
        iVar4 = iStack_1c;
        puVar3 = (undefined8 *)(*param_1 + (longlong)iStack_1c * 0x28);
        if (*(int *)(*param_1 + 8 + (longlong)iStack_1c * 0x28) == 0) {
          puVar10 = &DAT_143f3eda8;
        }
        else {
          puVar10 = (undefined2 *)*puVar3;
        }
        uVar6 = FUN_140438070(puVar10);
        uVar6 = (int)*plVar2 - 1U & uVar6;
        *(uint *)((longlong)puVar3 + 0x24) = uVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(puVar3 + 4) =
             *(undefined4 *)
              ((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar6) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar6) * 4) =
             iVar4;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1415e3a20 Rehash body=668 status=ok
// SIG undefined Rehash(void)

void TSet<TSharedPtr<icu_53::BreakIterator,0>,DefaultKeyFuncs<TSharedPtr<icu_53::BreakIterator,0>,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
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
  
  lVar4 = param_1[8];
  plVar1 = param_1 + 7;
  if (lVar4 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    lVar4 = (**(code **)(*DAT_1468c2208 + 0x18))(DAT_1468c2208,lVar4,0,0);
    param_1[8] = lVar4;
  }
  uVar9 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar9 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar9) {
      uVar5 = 0;
      uVar13 = (ulonglong)uVar9;
      do {
        uVar12 = (longlong)(int)*plVar2 - 1U & uVar5;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar5 = uVar5 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar12 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar8 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar8 != 0) {
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puStack_28;
      }
      uVar9 = *puVar14;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        lVar4 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar3 = (int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar3) goto LAB_1415e3b7f;
        uVar9 = puVar14[lVar4 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
      iVar7 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      iStack_44 = (iStack_40 - iVar7) + 0x1f;
      if (iVar8 < iStack_44) {
LAB_1415e3b7f:
        iStack_44 = iVar8;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar8) {
      do {
        lVar4 = *param_1 + (longlong)iStack_1c * 0x18;
        iVar8 = (int)(*(ulonglong *)(*param_1 + (longlong)iStack_1c * 0x18) >> 4);
        uVar10 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
        uVar11 = -(uVar10 + iVar8) ^ uVar10 >> 0xd;
        uVar9 = (iVar8 - uVar10) - uVar11 ^ uVar11 >> 0xc;
        uVar10 = (uVar10 - uVar9) - uVar11 ^ uVar9 << 0x10;
        uVar11 = (uVar11 - uVar10) - uVar9 ^ uVar10 >> 5;
        uVar9 = (uVar9 - uVar10) - uVar11 ^ uVar11 >> 3;
        uVar10 = (uVar10 - uVar9) - uVar11 ^ uVar9 << 10;
        uVar9 = ((uVar11 - uVar10) - uVar9 ^ uVar10 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)(lVar4 + 0x14) = uVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x10) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1415e3cc0 Remove body=398 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FString,FICUInternationalization::FICUCachedFileData>,TDefaultMapHashableKeyFuncs<FString,FICUInternationalization::FICUCachedFileData,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined2 *puVar12;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = (undefined2 *)*param_2;
  }
  uVar6 = FUN_140438070(puVar12);
  lVar11 = (longlong)(int)((int)param_1[9] - 1U & uVar6);
  plVar8 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar8 = param_1 + 7;
  }
  piVar1 = (int *)((longlong)plVar8 + lVar11 * 4);
  iVar7 = *(int *)((longlong)plVar8 + lVar11 * 4);
  while( true ) {
    if (iVar7 == -1) {
      return 0;
    }
    puVar2 = (undefined8 *)(*param_1 + (longlong)iVar7 * 0x28);
    if (*(int *)(param_2 + 1) == 0) {
      puVar12 = &DAT_143f3eda8;
    }
    else {
      puVar12 = (undefined2 *)*param_2;
    }
    if (*(int *)(puVar2 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar2;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar12);
    if (iVar7 == 0) break;
    iVar7 = *(int *)(puVar2 + 4);
    piVar1 = (int *)(puVar2 + 4);
  }
  iVar7 = *piVar1;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar5 = *param_1;
    lVar11 = lVar5 + (longlong)iVar7 * 0x28;
    lVar10 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar11 + 0x24));
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    puVar3 = (undefined4 *)((longlong)plVar8 + lVar10 * 4);
    iVar4 = *(int *)((longlong)plVar8 + lVar10 * 4);
    while (iVar4 != -1) {
      if (iVar4 == iVar7) {
        *puVar3 = *(undefined4 *)(lVar11 + 0x20);
        break;
      }
      lVar10 = (longlong)iVar4 * 5 + 4;
      puVar3 = (undefined4 *)(lVar5 + lVar10 * 8);
      iVar4 = *(int *)(lVar5 + lVar10 * 8);
    }
  }
  UE4Tuple_Private::
  TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FICUInternationalization::FICUCachedFileData>
  ::
  ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FICUInternationalization::FICUCachedFileData>
            (*param_1 + (longlong)iVar7 * 0x28);
  TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar7,1);
  return 1;
}



// FUNCTION 1415e3e50 RemoveAt body=238 status=ok
// SIG undefined RemoveAt(void)

void TBitArray<FDefaultBitArrayAllocator>::RemoveAt(longlong param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar10 = *(int *)(param_1 + 0x18);
  if (param_2 + param_3 != iVar10) {
    iVar11 = 0;
    iVar7 = 0;
    iVar8 = 0;
    iVar9 = 0;
    uVar5 = 1;
    uVar4 = 1;
    if (0 < iVar10) {
      do {
        if ((iVar9 < param_2) || (param_2 + param_3 <= iVar9)) {
          if (iVar7 != iVar9) {
            lVar6 = *(longlong *)(param_1 + 0x10);
            if (*(longlong *)(param_1 + 0x10) == 0) {
              lVar6 = param_1;
            }
            uVar2 = *(uint *)(lVar6 + (longlong)iVar8 * 4);
            puVar1 = (uint *)(lVar6 + (longlong)iVar8 * 4);
            if ((*(uint *)(lVar6 + (longlong)iVar11 * 4) & uVar4) == 0) {
              *puVar1 = ~uVar5 & uVar2;
            }
            else {
              *puVar1 = uVar2 | uVar5;
            }
          }
          iVar7 = iVar7 + 1;
          uVar5 = uVar5 * 2;
          if (uVar5 == 0) {
            uVar5 = 1;
            iVar8 = iVar8 + 1;
          }
        }
        iVar10 = *(int *)(param_1 + 0x18);
        uVar2 = uVar4 * 2;
        iVar9 = iVar9 + 1;
        iVar3 = iVar11 + 1;
        uVar4 = 1;
        if (uVar2 != 0) {
          iVar3 = iVar11;
          uVar4 = uVar2;
        }
        iVar11 = iVar3;
      } while (iVar9 < iVar10);
    }
  }
  *(int *)(param_1 + 0x18) = iVar10 - param_3;
  return;
}



// FUNCTION 1415e3f40 RemoveAtImpl body=434 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FTextSourceSiteContext,FDefaultAllocator>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (longlong *)(*param_1 + (longlong)param_2 * 200);
    plVar3 = plVar5 + 0x17;
    iVar4 = param_3;
    do {
      *(undefined4 *)(plVar3 + 1) = 0;
      lVar1 = *plVar3;
      if (lVar1 != 0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
        }
        (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
      }
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (plVar3 + -8);
      *(undefined4 *)(plVar3 + -9) = 0;
      lVar1 = plVar3[-10];
      if (lVar1 != 0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
        }
        (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
      }
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (plVar3 + -0x12);
      lVar1 = plVar3[-0x15];
      if (lVar1 != 0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
        }
        (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
      }
      lVar1 = *plVar5;
      if (lVar1 != 0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
        }
        (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
      }
      plVar5 = plVar5 + 0x19;
      plVar3 = plVar3 + 0x19;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = (int)param_1[1];
    iVar2 = (iVar4 - param_2) - param_3;
    if (iVar2 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)param_2 * 200 + *param_1),
                 (void *)((longlong)(param_2 + param_3) * 200 + *param_1),(longlong)iVar2 * 200);
      iVar4 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar4 - param_3;
    if (param_4 != '\0') {
      ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1415e4100 FUN_1415e4100 body=414 status=ok
// SIG undefined FUN_1415e4100(void)

void FUN_1415e4100(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  BOOL BVar5;
  longlong lVar6;
  int iVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  undefined4 uStack_34;
  longlong *local_30;
  int iStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  if (BVar5 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  }
  iVar2 = (int)param_1[5];
  puStack_20 = (uint *)(param_1 + 2);
  local_58 = 0;
  uStack_54 = 1;
  uStack_40 = 0;
  local_48._4_4_ = 0;
  if (iVar2 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puStack_20;
    }
    uVar3 = *puVar8;
    local_58 = 0;
    uStack_40 = 0;
    while (uVar3 == 0) {
      lVar6 = (longlong)local_58;
      uStack_40 = uStack_40 + 0x20;
      iVar7 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar7;
      if (bVar4) goto LAB_1415e41dd;
      uVar3 = puVar8[lVar6 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
    iVar7 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    local_48._4_4_ = (uStack_40 - iVar7) + 0x1f;
    if (iVar2 < local_48._4_4_) {
LAB_1415e41dd:
      local_48._4_4_ = iVar2;
    }
  }
  uStack_18 = 0xffffffff;
  iStack_14 = local_48._4_4_;
  iStack_10 = uStack_40;
  uStack_c = iStack_3c;
  iStack_28 = local_58;
  uStack_24 = uStack_54;
  iVar7 = local_48._4_4_;
  iStack_50 = local_58;
  uStack_4c = uStack_54;
  local_38 = uStack_40;
  uStack_34 = iStack_3c;
  bVar4 = local_48._4_4_ < iVar2;
  local_48 = puStack_20;
  local_30 = param_1;
  uStack_40 = 0xffffffff;
  iStack_3c = iVar7;
  if (bVar4) {
    do {
      if (*(longlong *)(*param_1 + 8 + (longlong)iStack_3c * 0x18) == param_2) {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iStack_3c * 0x18);
        if (puVar1 != (undefined4 *)0x0) {
          TSet<TTuple<int,UHomeItem_*>,TDefaultMapHashableKeyFuncs<int,UHomeItem_*,0>,FDefaultSetAllocator>
          ::Remove(param_1,*puVar1);
        }
        break;
      }
      uStack_40 = uStack_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  FUN_1415d3d90(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001415e4297. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  return;
}



// FUNCTION 1415e42a0 FUN_1415e42a0 body=404 status=ok
// SIG undefined FUN_1415e42a0(void)

void FUN_1415e42a0(longlong *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  
  iVar3 = (int)param_1[1];
  if (iVar3 < param_2) {
    uVar9 = (ulonglong)(uint)(param_2 - iVar3);
    *(int *)(param_1 + 1) = param_2;
    if (*(int *)((longlong)param_1 + 0xc) < param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar3);
    }
    iVar10 = param_2 + -1;
    lVar11 = (longlong)iVar10;
    if (iVar3 <= lVar11) {
      iVar6 = *(int *)((longlong)param_1 + 0x34);
      lVar8 = lVar11 << 5;
      lVar11 = (lVar11 - iVar3) + 1;
      do {
        if (iVar6 != 0) {
          *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar10;
        }
        *(undefined4 *)(lVar8 + *param_1) = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (undefined4)param_1[6];
        }
        *(undefined4 *)(lVar8 + 4 + *param_1) = uVar5;
        lVar8 = lVar8 + -0x20;
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar6 = *(int *)((longlong)param_1 + 0x34);
        *(int *)(param_1 + 6) = iVar10;
        iVar10 = iVar10 + -1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (0 < param_2 - iVar3) {
      do {
        iVar10 = (int)param_1[5];
        iVar3 = iVar10 + 1;
        *(int *)(param_1 + 5) = iVar3;
        if (*(int *)((longlong)param_1 + 0x2c) <= iVar10) {
          uVar2 = (int)(iVar10 + 0x20 + (iVar10 + 0x20 >> 0x1f & 0x1fU)) >> 5;
          if (uVar2 < 5) {
            iVar6 = 4;
          }
          else {
            uVar4 = (((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2) * 4 + 0x40
            ;
            if (DAT_1468c2208 != (longlong *)0x0) {
              uVar4 = (**(code **)(*DAT_1468c2208 + 0x28))(DAT_1468c2208,uVar4,0);
              iVar3 = (int)param_1[5];
            }
            iVar6 = (int)(uVar4 >> 2);
            if (iVar6 < (int)uVar2) {
              iVar6 = 0x7fffffff;
            }
          }
          *(int *)((longlong)param_1 + 0x2c) = iVar6 << 5;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,iVar3 + -1);
        }
        plVar7 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar7 = param_1 + 2;
        }
        iVar3 = iVar10;
        if (iVar10 < 0) {
          iVar3 = iVar10 + 0x1f;
        }
        puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar3 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)iVar10 & 0x1f));
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  return;
}



// FUNCTION 1415e4440 FUN_1415e4440 body=404 status=ok
// SIG undefined FUN_1415e4440(void)

void FUN_1415e4440(longlong *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  
  iVar3 = (int)param_1[1];
  if (iVar3 < param_2) {
    uVar9 = (ulonglong)(uint)(param_2 - iVar3);
    *(int *)(param_1 + 1) = param_2;
    if (*(int *)((longlong)param_1 + 0xc) < param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar3);
    }
    iVar10 = param_2 + -1;
    lVar11 = (longlong)iVar10;
    if (iVar3 <= lVar11) {
      iVar6 = *(int *)((longlong)param_1 + 0x34);
      lVar8 = lVar11 * 0x18;
      lVar11 = (lVar11 - iVar3) + 1;
      do {
        if (iVar6 != 0) {
          *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar10;
        }
        *(undefined4 *)(lVar8 + *param_1) = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (undefined4)param_1[6];
        }
        *(undefined4 *)(lVar8 + 4 + *param_1) = uVar5;
        lVar8 = lVar8 + -0x18;
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar6 = *(int *)((longlong)param_1 + 0x34);
        *(int *)(param_1 + 6) = iVar10;
        iVar10 = iVar10 + -1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (0 < param_2 - iVar3) {
      do {
        iVar10 = (int)param_1[5];
        iVar3 = iVar10 + 1;
        *(int *)(param_1 + 5) = iVar3;
        if (*(int *)((longlong)param_1 + 0x2c) <= iVar10) {
          uVar2 = (int)(iVar10 + 0x20 + (iVar10 + 0x20 >> 0x1f & 0x1fU)) >> 5;
          if (uVar2 < 5) {
            iVar6 = 4;
          }
          else {
            uVar4 = (((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2) * 4 + 0x40
            ;
            if (DAT_1468c2208 != (longlong *)0x0) {
              uVar4 = (**(code **)(*DAT_1468c2208 + 0x28))(DAT_1468c2208,uVar4,0);
              iVar3 = (int)param_1[5];
            }
            iVar6 = (int)(uVar4 >> 2);
            if (iVar6 < (int)uVar2) {
              iVar6 = 0x7fffffff;
            }
          }
          *(int *)((longlong)param_1 + 0x2c) = iVar6 << 5;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,iVar3 + -1);
        }
        plVar7 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar7 = param_1 + 2;
        }
        iVar3 = iVar10;
        if (iVar10 < 0) {
          iVar3 = iVar10 + 0x1f;
        }
        puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar3 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)iVar10 & 0x1f));
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  return;
}



// FUNCTION 1415e45e0 FUN_1415e45e0 body=144 status=ok
// SIG undefined FUN_1415e45e0(void)

undefined4 FUN_1415e45e0(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  longlong *local_18;
  longlong *local_10;
  
  FUN_1415dc080(param_1,&local_18);
  uVar6 = (**(code **)(*local_18 + 0x48))(local_18);
  (**(code **)(*local_18 + 0x20))(local_18);
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
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
    return uVar6;
  }
  return uVar6;
}



// FUNCTION 1415e4670 FUN_1415e4670 body=141 status=ok
// SIG undefined FUN_1415e4670(void)

undefined4 FUN_1415e4670(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  longlong *local_18;
  longlong *local_10;
  
  FUN_1415dc080(param_1,&local_18);
  uVar6 = (**(code **)(*local_18 + 0x48))(local_18);
  *(undefined4 *)(param_1 + 0x18) = uVar6;
  (**(code **)(*local_18 + 0x20))(local_18);
  plVar5 = local_10;
  *(undefined4 *)(param_1 + 0x18) = uVar6;
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
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return uVar6;
}



// FUNCTION 1415e4700 FUN_1415e4700 body=144 status=ok
// SIG undefined FUN_1415e4700(void)

undefined4 FUN_1415e4700(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  longlong *local_18;
  longlong *local_10;
  
  FUN_1415dc080(param_1,&local_18);
  uVar6 = (**(code **)(*local_18 + 0x50))(local_18);
  (**(code **)(*local_18 + 0x20))(local_18);
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
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
    return uVar6;
  }
  return uVar6;
}



// FUNCTION 1415e4790 FUN_1415e4790 body=141 status=ok
// SIG undefined FUN_1415e4790(void)

undefined4 FUN_1415e4790(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  longlong *local_18;
  longlong *local_10;
  
  FUN_1415dc080(param_1,&local_18);
  uVar6 = (**(code **)(*local_18 + 0x50))(local_18);
  *(undefined4 *)(param_1 + 0x18) = uVar6;
  (**(code **)(*local_18 + 0x20))(local_18);
  plVar5 = local_10;
  *(undefined4 *)(param_1 + 0x18) = uVar6;
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
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return uVar6;
}



// FUNCTION 1415e4820 ResizeAllocation body=272 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<4,FDefaultAllocator>::ForElementType<TTuple<FString,FString>_>::
     ResizeAllocation(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x80);
  if (param_3 < 5) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 5);
    pvVar1 = *(void **)((longlong)param_1 + 0x80);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
        }
        pvVar1 = (void *)(**(code **)(*DAT_1468c2208 + 0x18))
                                   (DAT_1468c2208,0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0x80) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 5);
      return;
    }
    param_4 = (int)param_3 * param_4;
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
  }
  uVar2 = (**(code **)(*DAT_1468c2208 + 0x18))(DAT_1468c2208,pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x80) = uVar2;
  return;
}



// FUNCTION 1415e4930 ResizeAllocation body=262 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<4,FDefaultAllocator>::
     ForElementType<`FCulture::FICUCultureImplementation::GetCanonicalName'::`2'::FNameTag>::
     ResizeAllocation(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x60);
  if (param_3 < 5) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x18);
    pvVar1 = *(void **)((longlong)param_1 + 0x60);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
        }
        pvVar1 = (void *)(**(code **)(*DAT_1468c2208 + 0x18))
                                   (DAT_1468c2208,0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0x60) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x18);
      return;
    }
    param_4 = (int)param_3 * param_4;
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
  }
  uVar2 = (**(code **)(*DAT_1468c2208 + 0x18))(DAT_1468c2208,pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x60) = uVar2;
  return;
}



// FUNCTION 1415e4a40 ResizeGrow body=184 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FMallocBinned2::FPerThreadFreeBlockLists_*,FDefaultAllocator>::ResizeGrow
               (longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar4 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
  }
  uVar2 = lVar4 * 8;
  if (DAT_1468c2208 != (longlong *)0x0) {
    uVar2 = (**(code **)(*DAT_1468c2208 + 0x28))(DAT_1468c2208,uVar2,0);
  }
  iVar3 = (int)(uVar2 >> 3);
  if (iVar3 < (int)uVar1) {
    iVar3 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  lVar4 = *param_1;
  if ((lVar4 != 0) || (iVar3 != 0)) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    lVar4 = (**(code **)(*DAT_1468c2208 + 0x18))(DAT_1468c2208,lVar4,(longlong)iVar3 << 3,0);
    *param_1 = lVar4;
  }
  return;
}



// FUNCTION 1415e4b00 ResizeGrow body=201 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TTuple<FString,`FCulture::FICUCultureImplementation::GetCanonicalName'::`2'::FCanonizedTagData>,FDefaultAllocator>
     ::ResizeGrow(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar2 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar3 = lVar2 * 0x28;
  if (DAT_1468c2208 != (longlong *)0x0) {
    uVar3 = (**(code **)(*DAT_1468c2208 + 0x28))(DAT_1468c2208,uVar3,0);
  }
  iVar4 = (int)(uVar3 / 0x28);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  lVar2 = *param_1;
  if ((lVar2 != 0) || (iVar4 != 0)) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    lVar2 = (**(code **)(*DAT_1468c2208 + 0x18))(DAT_1468c2208,lVar2,(longlong)iVar4 * 0x28,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 1415e4bd0 ResizeGrow body=155 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TTuple<FString,FString>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  uVar2 = 4;
  if (4 < uVar1) {
    if ((*(int *)(param_1 + 0x8c) != 0) || (4 < uVar1)) {
      uVar2 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = uVar2 << 5;
    if (DAT_1468c2208 != (longlong *)0x0) {
      uVar3 = (**(code **)(*DAT_1468c2208 + 0x28))(DAT_1468c2208,uVar3,0);
    }
    uVar2 = uVar3 >> 5 & 0xffffffff;
    if ((int)(uVar3 >> 5) < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x8c) = (int)uVar2;
  TInlineAllocator<4,FDefaultAllocator>::ForElementType<TTuple<FString,FString>_>::ResizeAllocation
            (param_1,param_2,uVar2,0x20);
  return;
}



// FUNCTION 1415e4c70 ResizeGrow body=174 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FICUInternationalization::FICUCultureData,FDefaultAllocator>::ResizeGrow
               (longlong *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar3 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
  }
  uVar4 = lVar3 << 6;
  if (DAT_1468c2208 != (longlong *)0x0) {
    uVar4 = (**(code **)(*DAT_1468c2208 + 0x28))(DAT_1468c2208,uVar4,0);
  }
  iVar2 = (int)(uVar4 >> 6);
  if (iVar2 < (int)uVar1) {
    iVar2 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar2;
  lVar3 = *param_1;
  if ((lVar3 != 0) || (iVar2 != 0)) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    lVar3 = (**(code **)(*DAT_1468c2208 + 0x18))(DAT_1468c2208,lVar3,(longlong)iVar2 << 6,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 1415e4d20 ResizeGrow body=160 status=ok
// SIG undefined ResizeGrow(void)

void TArray<`FCulture::FICUCultureImplementation::GetCanonicalName'::`2'::FNameTag,TInlineAllocator<4,FDefaultAllocator>_>
     ::ResizeGrow(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x68);
  uVar3 = 4;
  if (4 < uVar1) {
    if ((*(int *)(param_1 + 0x6c) != 0) || (4 < uVar1)) {
      uVar3 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar2 = uVar3 * 0x18;
    if (DAT_1468c2208 != (longlong *)0x0) {
      uVar2 = (**(code **)(*DAT_1468c2208 + 0x28))(DAT_1468c2208,uVar2,0);
    }
    uVar3 = uVar2 / 0x18 & 0xffffffff;
    if ((int)(uVar2 / 0x18) < (int)uVar1) {
      uVar3 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x6c) = (int)uVar3;
  TInlineAllocator<4,FDefaultAllocator>::
  ForElementType<`FCulture::FICUCultureImplementation::GetCanonicalName'::`2'::FNameTag>::
  ResizeAllocation(param_1,param_2,uVar3,0x18);
  return;
}



// FUNCTION 1415e4dc0 FUN_1415e4dc0 body=201 status=ok
// SIG undefined FUN_1415e4dc0(void)

void FUN_1415e4dc0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar2 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar3 = lVar2 * 0xc;
  if (DAT_1468c2208 != (longlong *)0x0) {
    uVar3 = (**(code **)(*DAT_1468c2208 + 0x28))(DAT_1468c2208,uVar3,0);
  }
  iVar4 = (int)(uVar3 / 0xc);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  lVar2 = *param_1;
  if ((lVar2 != 0) || (iVar4 != 0)) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    lVar2 = (**(code **)(*DAT_1468c2208 + 0x18))(DAT_1468c2208,lVar2,(longlong)iVar4 * 0xc,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 1415e4e90 ResizeGrow body=208 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FTextSourceSiteContext,FDefaultAllocator>::ResizeGrow(longlong *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar5 = lVar3 * 200;
  if (DAT_1468c2208 != (longlong *)0x0) {
    uVar5 = (**(code **)(*DAT_1468c2208 + 0x28))(DAT_1468c2208,uVar5,0);
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar5;
  lVar3 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar2,8);
  iVar4 = (int)((uVar5 - lVar3 >> 1) + lVar3 >> 7);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  lVar3 = *param_1;
  if ((lVar3 != 0) || (iVar4 != 0)) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    lVar3 = (**(code **)(*DAT_1468c2208 + 0x18))(DAT_1468c2208,lVar3,(longlong)iVar4 * 200,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 1415e4f60 FUN_1415e4f60 body=199 status=ok
// SIG undefined FUN_1415e4f60(void)

void FUN_1415e4f60(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = (int)param_1[1];
  if ((0x3fff < (ulonglong)((longlong)(iVar4 - iVar2) << 3)) || (iVar2 * 3 < iVar4 * 2)) {
    if (0x40 < (uint)(iVar4 - iVar2)) {
      if (0 < iVar2) {
        uVar3 = (longlong)iVar2 << 3;
        if (DAT_1468c2208 != (longlong *)0x0) {
          uVar3 = (**(code **)(*DAT_1468c2208 + 0x28))(DAT_1468c2208,uVar3,0);
          iVar4 = *(int *)((longlong)param_1 + 0xc);
        }
        iVar2 = (int)(uVar3 >> 3);
      }
      goto LAB_1415e4fc8;
    }
    if (iVar2 == 0) goto LAB_1415e4fc8;
  }
  iVar2 = iVar4;
LAB_1415e4fc8:
  if (iVar2 != iVar4) {
    *(int *)((longlong)param_1 + 0xc) = iVar2;
    lVar1 = *param_1;
    if ((lVar1 != 0) || (iVar2 != 0)) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      lVar1 = (**(code **)(*DAT_1468c2208 + 0x18))(DAT_1468c2208,lVar1,(longlong)iVar2 << 3,0);
      *param_1 = lVar1;
    }
  }
  return;
}



// FUNCTION 1415e5030 ResizeShrink body=239 status=ok
// SIG undefined ResizeShrink(void)

longlong TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::
         ResizeShrink(longlong *param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = *(int *)((longlong)param_1 + 0xc);
  iVar8 = (int)param_1[1];
  uVar5 = (ulonglong)(iVar9 - iVar8);
  uVar7 = uVar5 * 0x28;
  if ((0x3fff < uVar7) || (uVar5 = (ulonglong)(uint)(iVar9 * 2), iVar8 * 3 < iVar9 * 2)) {
    auVar3._8_8_ = uVar7;
    auVar3._0_8_ = uVar5;
    auVar4._8_8_ = uVar7;
    auVar4._0_8_ = uVar5;
    if (0x40 < (uint)(iVar9 - iVar8)) {
      if (0 < iVar8) {
        uVar5 = (longlong)iVar8 * 0x28;
        if (DAT_1468c2208 != (longlong *)0x0) {
          uVar5 = (**(code **)(*DAT_1468c2208 + 0x28))(DAT_1468c2208,uVar5,0);
          iVar9 = *(int *)((longlong)param_1 + 0xc);
        }
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar5;
        auVar3 = ZEXT816(0xcccccccccccccccd) * auVar2;
        iVar8 = (int)(uVar5 / 0x28);
      }
      goto LAB_1415e50ba;
    }
    auVar3 = auVar4;
    if (iVar8 == 0) goto LAB_1415e50ba;
  }
  auVar3._8_8_ = uVar7;
  auVar3._0_8_ = uVar5;
  iVar8 = iVar9;
LAB_1415e50ba:
  lVar6 = auVar3._0_8_;
  if (iVar8 != iVar9) {
    *(int *)((longlong)param_1 + 0xc) = iVar8;
    lVar1 = *param_1;
    if ((lVar1 != 0) || (iVar8 != 0)) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      lVar6 = (**(code **)(*DAT_1468c2208 + 0x18))(DAT_1468c2208,lVar1,(longlong)iVar8 * 0x28,0);
      *param_1 = lVar6;
    }
  }
  return lVar6;
}



// FUNCTION 1415e5120 ResizeShrink body=239 status=ok
// SIG undefined ResizeShrink(void)

longlong TArray<FTextSourceSiteContext,FDefaultAllocator>::ResizeShrink(longlong *param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = *(int *)((longlong)param_1 + 0xc);
  iVar9 = (int)param_1[1];
  uVar5 = (ulonglong)(iVar8 - iVar9);
  uVar7 = uVar5 * 200;
  if ((0x3fff < uVar7) || (uVar5 = (ulonglong)(uint)(iVar8 * 2), iVar9 * 3 < iVar8 * 2)) {
    auVar3._8_8_ = uVar7;
    auVar3._0_8_ = uVar5;
    auVar4._8_8_ = uVar7;
    auVar4._0_8_ = uVar5;
    if (0x40 < (uint)(iVar8 - iVar9)) {
      if (0 < iVar9) {
        uVar5 = (longlong)iVar9 * 200;
        if (DAT_1468c2208 != (longlong *)0x0) {
          uVar5 = (**(code **)(*DAT_1468c2208 + 0x28))(DAT_1468c2208,uVar5,0);
          iVar8 = *(int *)((longlong)param_1 + 0xc);
        }
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar5;
        auVar3 = ZEXT816(0x47ae147ae147ae15) * auVar2;
        iVar9 = (int)((uVar5 - auVar3._8_8_ >> 1) + auVar3._8_8_ >> 7);
      }
      goto LAB_1415e51ab;
    }
    auVar3 = auVar4;
    if (iVar9 == 0) goto LAB_1415e51ab;
  }
  auVar3._8_8_ = uVar7;
  auVar3._0_8_ = uVar5;
  iVar9 = iVar8;
LAB_1415e51ab:
  lVar6 = auVar3._0_8_;
  if (iVar9 != iVar8) {
    *(int *)((longlong)param_1 + 0xc) = iVar9;
    lVar1 = *param_1;
    if ((lVar1 != 0) || (iVar9 != 0)) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      lVar6 = (**(code **)(*DAT_1468c2208 + 0x18))(DAT_1468c2208,lVar1,(longlong)iVar9 * 200,0);
      *param_1 = lVar6;
    }
  }
  return lVar6;
}



// FUNCTION 1415e5210 ResizeTo body=157 status=ok
// SIG undefined ResizeTo(void)

void TArray<FQueuedThread_*,FDefaultAllocator>::ResizeTo(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar2 = 0;
  if (param_2 != 0) {
    uVar3 = (longlong)param_2 << 3;
    if (DAT_1468c2208 != (longlong *)0x0) {
      uVar3 = (**(code **)(*DAT_1468c2208 + 0x28))(DAT_1468c2208,uVar3,0);
    }
    iVar2 = (int)(uVar3 >> 3);
    if (iVar2 < param_2) {
      iVar2 = 0x7fffffff;
    }
  }
  if (iVar2 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar2;
    lVar1 = *param_1;
    if ((lVar1 != 0) || (iVar2 != 0)) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      lVar1 = (**(code **)(*DAT_1468c2208 + 0x18))(DAT_1468c2208,lVar1,(longlong)iVar2 << 3,0);
      *param_1 = lVar1;
    }
  }
  return;
}



// FUNCTION 1415e52b0 ResizeTo body=157 status=ok
// SIG undefined ResizeTo(void)

void TArray<FICUInternationalization::FICUCultureData,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar2 = 0;
  if (param_2 != 0) {
    uVar3 = (longlong)param_2 << 6;
    if (DAT_1468c2208 != (longlong *)0x0) {
      uVar3 = (**(code **)(*DAT_1468c2208 + 0x28))(DAT_1468c2208,uVar3,0);
    }
    iVar2 = (int)(uVar3 >> 6);
    if (iVar2 < param_2) {
      iVar2 = 0x7fffffff;
    }
  }
  if (iVar2 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar2;
    lVar1 = *param_1;
    if ((lVar1 != 0) || (iVar2 != 0)) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      lVar1 = (**(code **)(*DAT_1468c2208 + 0x18))(DAT_1468c2208,lVar1,(longlong)iVar2 << 6,0);
      *param_1 = lVar1;
    }
  }
  return;
}



// FUNCTION 1415e5350 ResizeTo body=181 status=ok
// SIG undefined ResizeTo(void)

void TArray<TextBiDi::FTextDirectionInfo,FDefaultAllocator>::ResizeTo(longlong *param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar2 = (longlong)param_2 * 0xc;
    if (DAT_1468c2208 != (longlong *)0x0) {
      uVar2 = (**(code **)(*DAT_1468c2208 + 0x28))(DAT_1468c2208,uVar2,0);
    }
    iVar3 = (int)(uVar2 / 0xc);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    lVar1 = *param_1;
    if ((lVar1 != 0) || (iVar3 != 0)) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      lVar1 = (**(code **)(*DAT_1468c2208 + 0x18))(DAT_1468c2208,lVar1,(longlong)iVar3 * 0xc,0);
      *param_1 = lVar1;
    }
  }
  return;
}



// FUNCTION 1415e5410 FUN_1415e5410 body=235 status=ok
// SIG undefined FUN_1415e5410(void)

void FUN_1415e5410(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  DWORD DVar1;
  BOOL BVar2;
  int iVar3;
  longlong lVar4;
  double *pdVar5;
  double *pdVar6;
  LARGE_INTEGER local_res8;
  
  DVar1 = GetCurrentThreadId();
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x18);
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
    lVar4 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar4 = param_1 + 0x78;
    }
    iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x88) - 1U & (longlong)(int)DVar1) * 4);
    if (iVar3 != -1) {
      do {
        pdVar5 = (double *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar3 * 0x28);
        if (*(DWORD *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar3 * 0x28) == DVar1) {
          if (iVar3 != -1) goto LAB_1415e54a3;
          break;
        }
        iVar3 = *(int *)(pdVar5 + 4);
      } while (iVar3 != -1);
    }
  }
  pdVar5 = (double *)0x0;
LAB_1415e54a3:
  pdVar6 = pdVar5 + 1;
  if (pdVar5 == (double *)0x0) {
    pdVar6 = (double *)0x0;
  }
  if (pdVar6 != (double *)0x0) {
    pdVar5 = pdVar6 + 1;
    *(int *)pdVar5 = *(int *)pdVar5 + -1;
    if (*(int *)pdVar5 == 0) {
      QueryPerformanceCounter(&local_res8);
      *pdVar6 = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001415e54f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 1415e5500 RetractQueuedWork body=181 status=ok
// SIG undefined RetractQueuedWork(void)

ulonglong FQueuedThreadPoolBase::RetractQueuedWork(longlong param_1,longlong param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  BOOL BVar2;
  int iVar3;
  ulonglong in_RAX;
  longlong *plVar4;
  ulonglong uVar5;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    return in_RAX & 0xffffffffffffff00;
  }
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x38);
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  plVar1 = *(longlong **)(param_1 + 8);
  plVar4 = plVar1;
  do {
    if (plVar4 == plVar1 + *(int *)(param_1 + 0x10)) {
LAB_1415e5564:
      uVar5 = 0;
LAB_1415e5567:
      LeaveCriticalSection(lpCriticalSection);
      return uVar5;
    }
    if (*plVar4 == param_2) {
      iVar3 = (int)((longlong)plVar4 - (longlong)plVar1 >> 3);
      if (iVar3 != -1) {
        ::_guard_xfg_dispatch_icall_nop
                  (plVar1 + iVar3,plVar1 + iVar3 + 1,
                   (longlong)((*(int *)(param_1 + 0x10) - iVar3) + -1) << 3);
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
        uVar5 = 1;
        goto LAB_1415e5567;
      }
      goto LAB_1415e5564;
    }
    plVar4 = plVar4 + 1;
  } while( true );
}



// FUNCTION 1415e55c0 ReturnToPool body=132 status=ok
// SIG undefined ReturnToPool(void)

void FEventPool<0>::ReturnToPool(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)param_2[2];
  lVar3 = 0;
  param_2[2] = 0;
  *param_2 = &PTR__purecall_144ca0288;
  FMemory::operator_delete(param_2,0x18);
  (**(code **)(*plVar1 + 0x18))(plVar1);
  uVar2 = FLockFreeLinkPolicy::AllocLockFreeLink();
  if (uVar2 != 0) {
    lVar3 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
  }
  *(longlong **)(lVar3 + 8) = plVar1;
  FLockFreePointerListLIFORoot<128,1>::Push(param_1);
  return;
}



// FUNCTION 1415e5650 ReturnToPoolOrGetNextJob body=193 status=ok
// SIG undefined ReturnToPoolOrGetNextJob(void)

longlong FQueuedThreadPoolBase::ReturnToPoolOrGetNextJob(longlong param_1,undefined8 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *_Dst;
  BOOL BVar1;
  int iVar2;
  longlong lVar3;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x38);
  lVar3 = 0;
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (0 < *(int *)(param_1 + 0x10)) {
    iVar2 = *(int *)(param_1 + 0x10);
    _Dst = *(longlong **)(param_1 + 8);
    lVar3 = *_Dst;
    if (iVar2 + -1 != 0) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,_Dst + 1,(longlong)(iVar2 + -1) << 3);
      iVar2 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar2 + -1;
    FUN_1415e4f60(param_1 + 8);
    if (lVar3 != 0) goto LAB_1415e56ea;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x20) = iVar2 + 1;
  if (*(int *)(param_1 + 0x24) < iVar2 + 1) {
    TArray<FMallocBinned2::FPerThreadFreeBlockLists_*,FDefaultAllocator>::ResizeGrow
              (param_1 + 0x18,iVar2);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 8) = param_2;
LAB_1415e56ea:
  LeaveCriticalSection(lpCriticalSection);
  return lVar3;
}



// FUNCTION 1415e5720 Run body=110 status=ok
// SIG undefined Run(void)

undefined8 FQueuedThread::Run(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  while (*(char *)(param_1 + 0x10) == '\0') {
    do {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),10);
    } while (cVar1 == '\0');
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    while (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)();
      puVar2 = (undefined8 *)
               (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))
                         (*(longlong **)(param_1 + 0x20),param_1);
    }
  }
  return 0;
}



// FUNCTION 1415e5790 FUN_1415e5790 body=2131 status=ok
// SIG undefined FUN_1415e5790(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1415e5790(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  BOOL BVar8;
  int iVar9;
  byte *pbVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  longlong *plVar16;
  short *psVar17;
  uint uVar18;
  undefined2 *puVar19;
  int iVar20;
  longlong **pplVar21;
  uint uVar22;
  undefined8 *puVar23;
  undefined2 *puVar24;
  undefined2 *puVar25;
  byte *pbVar26;
  ulonglong uVar27;
  undefined2 *puVar28;
  void *pvVar29;
  bool bVar30;
  int local_res20;
  undefined2 *local_f8;
  undefined8 local_f0;
  uint local_e8;
  undefined2 *local_e0;
  int local_d8;
  undefined4 local_d4;
  longlong *local_d0;
  undefined8 local_c8;
  byte *local_c0;
  longlong local_b8;
  ulonglong local_b0;
  longlong *local_a8;
  int local_a0;
  undefined4 local_9c;
  longlong *local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined8 local_80;
  void *local_78;
  short *local_70;
  int local_68;
  undefined1 local_60 [32];
  
  bVar3 = false;
  bVar5 = false;
  bVar4 = false;
  LOCK();
  bVar30 = *(int *)(param_1 + 0x10) == 0;
  if (bVar30) {
    *(int *)(param_1 + 0x10) = 0;
  }
  UNLOCK();
  if (!bVar30) {
    return 0;
  }
  uVar27 = (ulonglong)_tls_index;
  pvVar29 = ThreadLocalStoragePointer;
  do {
    if (DAT_1468c217e != '\0') {
      return 0;
    }
    iVar7 = FUN_1415d1d50(param_1,local_60);
    if (iVar7 == -1) {
      bVar3 = false;
    }
    else if (!bVar3) {
      pbVar10 = (byte *)(**(code **)(*DAT_1468c2208 + 0x10))(DAT_1468c2208,0xffff,0);
      *pbVar10 = 0;
      local_c0 = pbVar10;
      FWindowsPlatformStackWalk::ThreadStackWalkAndDump(pbVar10,0xffff,0,iVar7);
      uVar18 = 0xffffffff;
      bVar1 = *pbVar10;
      pbVar26 = pbVar10;
      while (bVar1 != 0) {
        pbVar26 = pbVar26 + 1;
        uVar18 = *(uint *)(&DAT_1464aaab0 + (ulonglong)((bVar1 ^ uVar18) & 0xff) * 4) ^ uVar18 >> 8;
        uVar18 = *(uint *)(&DAT_1464aaab0 + (ulonglong)(uVar18 & 0xff) * 4) ^ uVar18 >> 8;
        uVar18 = *(uint *)(&DAT_1464aaab0 + (ulonglong)(uVar18 & 0xff) * 4) ^ uVar18 >> 8;
        uVar18 = *(uint *)(&DAT_1464aaab0 + (ulonglong)(uVar18 & 0xff) * 4) ^ uVar18 >> 8;
        bVar1 = *pbVar26;
      }
      if ((~uVar18 != *(uint *)(param_1 + 0xb0)) || (iVar7 != *(int *)(param_1 + 0xb4))) {
        plVar16 = (longlong *)0x0;
        *(uint *)(param_1 + 0xb0) = ~uVar18;
        *(int *)(param_1 + 0xb4) = iVar7;
        local_b8 = 0;
        local_b0 = 0;
        if (*pbVar10 != 0) {
          lVar11 = -1;
          do {
            lVar6 = lVar11 + 1;
            lVar11 = lVar11 + 1;
          } while (pbVar10[lVar6] != 0);
          uVar18 = (int)lVar11 + 1;
          local_b0 = (ulonglong)uVar18;
          if (0 < (int)uVar18) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
          }
          FGenericPlatformString::Convert<char,wchar_t>(local_b8,uVar18,pbVar10,uVar18,0x3f);
        }
        local_d0 = (longlong *)0x0;
        local_c8 = 0;
        FString::ParseIntoArrayLines(&local_b8,&local_d0,1);
        if (iVar7 == DAT_1468c21c0) {
          bVar5 = true;
          local_98 = (longlong *)0x0;
          local_90 = 0xb;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
          plVar12 = local_98;
          FGenericPlatformString::Memcpy(local_98,L"GameThread",0x16);
          pplVar21 = &local_98;
          plVar16 = local_a8;
        }
        else {
          bVar4 = true;
          plVar12 = (longlong *)FUN_1415d8270();
          if ((*(int *)(*(longlong *)((longlong)pvVar29 + uVar27 * 8) + 0x38) < DAT_1468b5168) &&
             (_Init_thread_header(&DAT_1468b5168), DAT_1468b5168 == -1)) {
            DAT_1468b5158 = 0;
            _DAT_1468b5160 = 0;
            atexit(FUN_143e78410);
            _Init_thread_footer(&DAT_1468b5168);
          }
          lpCriticalSection = (LPCRITICAL_SECTION)(plVar12 + 10);
          BVar8 = TryEnterCriticalSection(lpCriticalSection);
          if (BVar8 == 0) {
            EnterCriticalSection(lpCriticalSection);
          }
          if ((int)plVar12[1] != *(int *)((longlong)plVar12 + 0x34)) {
            plVar13 = (longlong *)plVar12[8];
            if ((longlong *)plVar12[8] == (longlong *)0x0) {
              plVar13 = plVar12 + 7;
            }
            iVar9 = *(int *)((longlong)plVar13 +
                            ((longlong)(int)plVar12[9] - 1U & (longlong)iVar7) * 4);
            if (iVar9 != -1) {
              do {
                plVar13 = (longlong *)(*plVar12 + (longlong)iVar9 * 0x18);
                if (*(int *)(*plVar12 + (longlong)iVar9 * 0x18) == iVar7) {
                  if (iVar9 != -1) goto LAB_1415e5a53;
                  break;
                }
                iVar9 = (int)plVar13[2];
              } while (iVar9 != -1);
            }
          }
          plVar13 = plVar16;
LAB_1415e5a53:
          plVar12 = plVar13 + 1;
          if (plVar13 == (longlong *)0x0) {
            plVar12 = plVar16;
          }
          if (plVar12 == (longlong *)0x0) {
            LeaveCriticalSection(lpCriticalSection);
            puVar23 = &DAT_1468b5158;
          }
          else {
            puVar23 = (undefined8 *)(*plVar12 + 8);
            LeaveCriticalSection(lpCriticalSection);
          }
          iVar9 = *(int *)(puVar23 + 1);
          pvVar29 = (void *)*puVar23;
          local_a8 = (longlong *)0x0;
          local_a0 = iVar9;
          if (iVar9 == 0) {
            local_9c = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,iVar9,0);
            plVar16 = local_a8;
            _guard_xfg_dispatch_icall_nop(local_a8,pvVar29,(longlong)iVar9 * 2);
          }
          pplVar21 = &local_a8;
          plVar12 = local_98;
        }
        puVar14 = (undefined2 *)0x0;
        local_d8 = *(int *)(pplVar21 + 1);
        lVar11 = (longlong)local_d8;
        local_e0 = (undefined2 *)0x0;
        if (local_d8 == 0) {
          local_d4 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e0,local_d8,0);
          puVar14 = local_e0;
          _guard_xfg_dispatch_icall_nop(local_e0,*pplVar21,lVar11 * 2);
        }
        local_res20 = local_d8;
        if ((bVar4) && (bVar4 = false, plVar16 != (longlong *)0x0)) {
          if (DAT_1468c2208 == (longlong *)0x0) {
            FUN_1415d7ea0();
          }
          (**(code **)(*DAT_1468c2208 + 0x20))();
        }
        if ((bVar5) && (bVar5 = false, plVar12 != (longlong *)0x0)) {
          if (DAT_1468c2208 == (longlong *)0x0) {
            FUN_1415d7ea0();
          }
          (**(code **)(*DAT_1468c2208 + 0x20))();
        }
        if (local_res20 < 2) {
          FString::PrintfImpl(&local_88,L"unknown thread (%u)",iVar7);
          if (puVar14 != (undefined2 *)0x0) {
            if (DAT_1468c2208 == (longlong *)0x0) {
              FUN_1415d7ea0();
            }
            (**(code **)(*DAT_1468c2208 + 0x20))();
          }
          puVar14 = local_88;
          local_res20 = (int)local_80;
          local_d8 = (int)local_80;
          local_d4 = local_80._4_4_;
          local_80 = 0;
          local_e0 = local_88;
          local_88 = (undefined2 *)0x0;
        }
        puVar19 = (undefined2 *)0x0;
        local_f8 = (undefined2 *)0x0;
        local_f0 = 0;
        local_e8 = 0;
        puVar24 = puVar19;
        puVar28 = puVar19;
        puVar15 = puVar19;
        puVar25 = puVar19;
        if ((int)local_c8 < 1) {
LAB_1415e5d64:
          puVar15 = &DAT_143f3eda8;
        }
        else {
          do {
            uVar18 = (uint)puVar19;
            if ((uVar18 != 0) && (0x1ff < (int)(uVar18 - 1))) break;
            iVar7 = (3 - (uint)(uVar18 != 0)) + uVar18;
            if ((int)puVar25 < iVar7) {
              local_f0._0_4_ = iVar7;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8);
              puVar25 = (undefined2 *)(ulonglong)local_f0._4_4_;
              puVar15 = local_f8;
              iVar7 = (uint)local_f0;
            }
            lVar11 = (longlong)(int)uVar18 - (ulonglong)(uVar18 != 0);
            *(undefined4 *)(puVar15 + lVar11) = 0x200020;
            puVar15[lVar11 + 2] = 0;
            local_78 = *(void **)((longlong)local_d0 + (longlong)puVar28);
            iVar9 = *(int *)((longlong)local_d0 + (longlong)(puVar28 + 4)) + -1;
            if (*(int *)((longlong)local_d0 + (longlong)(puVar28 + 4)) == 0) {
              iVar9 = 0;
            }
            uVar22 = (uint)puVar24;
            iVar20 = iVar7;
            if (iVar9 != 0) {
              local_f0._0_4_ = iVar7 + (uint)(iVar7 == 0) + iVar9;
              if ((int)puVar25 < (int)(uint)local_f0) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,iVar7);
                puVar25 = (undefined2 *)(ulonglong)local_f0._4_4_;
                puVar15 = local_f8;
              }
              iVar20 = (uint)local_f0;
              _guard_xfg_dispatch_icall_nop
                        (puVar15 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)),local_78,
                         (longlong)iVar9 * 2);
              (puVar15 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)))[iVar9] = 0;
              uVar22 = local_e8;
            }
            uVar18 = (3 - (uint)(iVar20 != 0)) + iVar20;
            local_f0 = CONCAT44(local_f0._4_4_,uVar18);
            if ((int)puVar25 < (int)uVar18) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8);
              puVar25 = (undefined2 *)(local_f0 >> 0x20);
              puVar15 = local_f8;
              uVar18 = (uint)local_f0;
            }
            puVar19 = (undefined2 *)(ulonglong)uVar18;
            local_e8 = uVar22 + 1;
            lVar11 = (longlong)iVar20 - (ulonglong)(iVar20 != 0);
            *(undefined4 *)(puVar15 + lVar11) = 0xa000d;
            puVar15[lVar11 + 2] = 0;
            puVar24 = (undefined2 *)(ulonglong)local_e8;
            puVar28 = puVar28 + 8;
          } while ((int)local_e8 < (int)local_c8);
          puVar14 = local_e0;
          puVar19 = puVar15;
          if (uVar18 == 0) goto LAB_1415e5d64;
        }
        puVar25 = &DAT_143f3eda8;
        if (local_res20 != 0) {
          puVar25 = puVar14;
        }
        FString::PrintfImpl(&local_70,L"Hang detected on %s:%s%s%sCheck log for full callstack.",
                            puVar25,&DAT_144caf4c0,puVar15,&DAT_144caf4b8);
        plVar16 = (longlong *)FUN_141672640();
        (**(code **)(*plVar16 + 0x48))(plVar16);
        psVar17 = &DAT_143f3eda8;
        if (local_68 != 0) {
          psVar17 = local_70;
        }
        lVar11 = (longlong)&DAT_1468c0170 - (longlong)psVar17;
        do {
          sVar2 = *psVar17;
          *(short *)(lVar11 + (longlong)psVar17) = sVar2;
          psVar17 = psVar17 + 1;
        } while (sVar2 != 0);
        psVar17 = &DAT_143f3eda8;
        if (local_68 != 0) {
          psVar17 = local_70;
        }
        FUN_1416a4f60(psVar17);
        psVar17 = local_70;
        DAT_1468c0170 = 0;
        if (local_70 != (short *)0x0) {
          if (DAT_1468c2208 == (longlong *)0x0) {
            FUN_1415d7ea0();
          }
          (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,psVar17);
        }
        if (puVar19 != (undefined2 *)0x0) {
          if (DAT_1468c2208 == (longlong *)0x0) {
            FUN_1415d7ea0();
          }
          (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,puVar19);
        }
        if (puVar14 != (undefined2 *)0x0) {
          if (DAT_1468c2208 == (longlong *)0x0) {
            FUN_1415d7ea0();
          }
          (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,puVar14);
        }
        plVar16 = local_d0;
        plVar12 = local_d0;
        for (iVar7 = (int)local_c8; local_d0 = plVar12, iVar7 != 0; iVar7 = iVar7 + -1) {
          lVar11 = *plVar16;
          if (lVar11 != 0) {
            if (DAT_1468c2208 == (longlong *)0x0) {
              FUN_1415d7ea0();
            }
            (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar11);
          }
          plVar16 = plVar16 + 2;
          plVar12 = local_d0;
        }
        if (plVar12 != (longlong *)0x0) {
          if (DAT_1468c2208 == (longlong *)0x0) {
            FUN_1415d7ea0();
          }
          (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,plVar12);
        }
        lVar11 = local_b8;
        if (local_b8 != 0) {
          if (DAT_1468c2208 == (longlong *)0x0) {
            FUN_1415d7ea0();
          }
          (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar11);
        }
        uVar27 = (ulonglong)_tls_index;
        pbVar10 = local_c0;
        pvVar29 = ThreadLocalStoragePointer;
      }
      bVar3 = true;
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,pbVar10);
    }
    LOCK();
    bVar30 = *(int *)(param_1 + 0x10) == 0;
    if (bVar30) {
      *(int *)(param_1 + 0x10) = 0;
    }
    UNLOCK();
    if ((bVar30) && (DAT_1468c217e == '\0')) {
      FUN_1416b1810(0x3f000000);
    }
    LOCK();
    bVar30 = *(int *)(param_1 + 0x10) == 0;
    if (bVar30) {
      *(int *)(param_1 + 0x10) = 0;
    }
    UNLOCK();
    if (!bVar30) {
      return 0;
    }
  } while( true );
}



// FUNCTION 1415e5ff0 SanitizeCultureCode body=421 status=ok
// SIG undefined SanitizeCultureCode(void)

undefined8 * ICUUtilities::SanitizeCultureCode(undefined8 *param_1,undefined8 *param_2)

{
  short sVar1;
  void *_Src;
  byte bVar2;
  undefined4 uVar3;
  longlong lVar4;
  short *psVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar10;
  short *psVar11;
  short *psVar12;
  undefined4 local_res10;
  short *local_38;
  int local_30;
  undefined4 local_2c;
  short *psVar9;
  
  local_30 = *(int *)(param_2 + 1);
  lVar4 = (longlong)local_30;
  if (local_30 < 2) {
    FString::FString();
    return param_1;
  }
  _Src = (void *)*param_2;
  psVar5 = (short *)0x0;
  local_38 = (short *)0x0;
  if (local_30 == 0) {
    local_res10 = 0;
    psVar12 = psVar5;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
    psVar12 = local_38;
    ::_guard_xfg_dispatch_icall_nop(local_38,_Src,lVar4 * 2);
    local_res10 = local_2c;
  }
  uVar3 = 0;
  if (local_30 != 0) {
    sVar1 = *psVar12;
    if ((sVar1 == 0) ||
       ((((ushort)(sVar1 - 0x2dU) < 0x33 &&
         ((0x43ffffff95ffbU >> ((ulonglong)(ushort)(sVar1 - 0x2dU) & 0x3f) & 1) != 0)) ||
        ((ushort)(sVar1 - 0x61U) < 0x1a)))) {
      bVar6 = 1;
    }
    else {
      bVar6 = 0;
    }
    lVar4 = (longlong)local_30;
    psVar9 = psVar5;
    psVar11 = psVar5;
    do {
      uVar7 = (uint)psVar9;
      uVar8 = uVar7;
      do {
        psVar5 = (short *)((longlong)psVar5 + 1);
        uVar8 = uVar8 + 1;
        psVar9 = (short *)(ulonglong)uVar8;
        if (lVar4 <= (longlong)psVar5) break;
        sVar1 = psVar12[(longlong)psVar5];
        if (((sVar1 == 0) ||
            (((ushort)(sVar1 - 0x2dU) < 0x33 &&
             ((0x43ffffff95ffbU >> ((ulonglong)(ushort)(sVar1 - 0x2dU) & 0x3f) & 1) != 0)))) ||
           ((ushort)(sVar1 - 0x61U) < 0x1a)) {
          bVar2 = 1;
        }
        else {
          bVar2 = 0;
        }
      } while (bVar6 == bVar2);
      if (bVar6 != 0) {
        uVar10 = (uint)psVar11;
        if (uVar10 != uVar7) {
          ::_guard_xfg_dispatch_icall_nop
                    (psVar12 + (int)uVar10,psVar12 + (int)uVar7,(longlong)(int)(uVar8 - uVar7) * 2);
        }
        psVar11 = (short *)(ulonglong)(uVar10 + (uVar8 - uVar7));
      }
      bVar6 = bVar6 ^ 1;
    } while ((longlong)psVar5 < lVar4);
    uVar3 = SUB84(psVar11,0);
  }
  *param_1 = psVar12;
  *(undefined4 *)((longlong)param_1 + 0xc) = local_res10;
  *(undefined4 *)(param_1 + 1) = uVar3;
  return param_1;
}



// FUNCTION 1415e61a0 SanitizeCurrencyCode body=412 status=ok
// SIG undefined SanitizeCurrencyCode(void)

undefined8 * ICUUtilities::SanitizeCurrencyCode(undefined8 *param_1,undefined8 *param_2)

{
  short sVar1;
  void *_Src;
  byte bVar2;
  undefined4 uVar3;
  longlong lVar4;
  short *psVar5;
  uint uVar6;
  short *psVar7;
  uint uVar8;
  uint uVar9;
  short *psVar11;
  short *psVar12;
  byte bVar13;
  undefined4 local_res10;
  short *local_48;
  int local_40;
  undefined4 local_3c;
  short *psVar10;
  
  local_40 = *(int *)(param_2 + 1);
  lVar4 = (longlong)local_40;
  if (local_40 < 2) {
    FString::FString();
    return param_1;
  }
  _Src = (void *)*param_2;
  psVar5 = (short *)0x0;
  local_48 = (short *)0x0;
  if (local_40 == 0) {
    local_res10 = 0;
    psVar11 = psVar5;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_40,0);
    psVar11 = local_48;
    ::_guard_xfg_dispatch_icall_nop(local_48,_Src,lVar4 * 2);
    local_res10 = local_3c;
  }
  psVar7 = (short *)0x0;
  uVar3 = 0;
  if (local_40 != 0) {
    sVar1 = *psVar11;
    if (sVar1 == 0) {
      bVar13 = 1;
    }
    else if (((ushort)(sVar1 - 0x41U) < 0x1a) || ((ushort)(sVar1 - 0x61U) < 0x1a)) {
      psVar7 = (short *)0x1;
      bVar13 = 1;
    }
    else {
      bVar13 = 0;
      psVar7 = psVar5;
    }
    lVar4 = (longlong)local_40;
    psVar10 = psVar5;
    psVar12 = psVar5;
    do {
      uVar8 = (uint)psVar10;
      uVar9 = uVar8;
      do {
        psVar5 = (short *)((longlong)psVar5 + 1);
        uVar9 = uVar9 + 1;
        psVar10 = (short *)(ulonglong)uVar9;
        if (lVar4 <= (longlong)psVar5) break;
        sVar1 = psVar11[(longlong)psVar5];
        if ((sVar1 == 0) ||
           ((((ushort)(sVar1 - 0x41U) < 0x1a || ((ushort)(sVar1 - 0x61U) < 0x1a)) &&
            (uVar6 = (int)psVar7 + 1, psVar7 = (short *)(ulonglong)uVar6, (int)uVar6 < 4)))) {
          bVar2 = 1;
        }
        else {
          bVar2 = 0;
        }
      } while (bVar13 == bVar2);
      if (bVar13 != 0) {
        uVar6 = (uint)psVar12;
        if (uVar6 != uVar8) {
          ::_guard_xfg_dispatch_icall_nop
                    (psVar11 + (int)uVar6,psVar11 + (int)uVar8,(longlong)(int)(uVar9 - uVar8) * 2);
        }
        psVar12 = (short *)(ulonglong)(uVar6 + (uVar9 - uVar8));
      }
      bVar13 = bVar13 ^ 1;
    } while ((longlong)psVar5 < lVar4);
    uVar3 = SUB84(psVar12,0);
  }
  *param_1 = psVar11;
  *(undefined4 *)((longlong)param_1 + 0xc) = local_res10;
  *(undefined4 *)(param_1 + 1) = uVar3;
  return param_1;
}



// FUNCTION 1415e6340 SanitizeTimezoneCode body=180 status=ok
// SIG undefined SanitizeTimezoneCode(void)

undefined8 * ICUUtilities::SanitizeTimezoneCode(undefined8 *param_1,undefined8 *param_2)

{
  void *_Src;
  longlong lVar1;
  undefined4 local_res10 [2];
  undefined4 *local_res18;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_10 = *(int *)(param_2 + 1);
  lVar1 = (longlong)local_10;
  if (local_10 < 2) {
    FString::FString();
    return param_1;
  }
  _Src = (void *)*param_2;
  local_18 = (void *)0x0;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
    ::_guard_xfg_dispatch_icall_nop(local_18,_Src,lVar1 * 2);
  }
  local_res18 = local_res10;
  local_res10[0] = 0;
  FUN_1415cc1e0(&local_18,&local_res18);
  *param_1 = local_18;
  *(int *)(param_1 + 1) = local_10;
  *(undefined4 *)((longlong)param_1 + 0xc) = local_c;
  return param_1;
}



// FUNCTION 1415e6460 FUN_1415e6460 body=162 status=ok
// SIG undefined FUN_1415e6460(void)

void FUN_1415e6460(longlong *param_1,int param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  bool bVar6;
  undefined4 local_res8 [2];
  
  lVar2 = *param_1;
  plVar3 = *(longlong **)(lVar2 + 0x30);
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
        plVar4 = *(longlong **)(lVar2 + 0x28);
        if (plVar4 != (longlong *)0x0) {
          local_res8[0] = 0;
          (**(code **)(*plVar4 + 0xf8))(plVar4,(longlong)param_2,(longlong)param_3,local_res8);
        }
        LOCK();
        plVar4 = plVar3 + 1;
        lVar2 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
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



// FUNCTION 1415e6510 SetNum body=256 status=ok
// SIG undefined SetNum(void)

void TArray<FTextSourceSiteContext,FDefaultAllocator>::SetNum
               (longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (int)param_1[1];
  iVar4 = (int)param_2;
  if (iVar1 < iVar4) {
    iVar5 = iVar4 - iVar1;
    *(int *)(param_1 + 1) = iVar4;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
      ResizeGrow();
    }
    puVar3 = (undefined8 *)((longlong)iVar1 * 200 + *param_1);
    if (iVar5 != 0) {
      lVar2 = (longlong)puVar3 + 0x54;
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 0x19;
        *(undefined8 *)(lVar2 + -0x4c) = 0;
        *(undefined8 *)(lVar2 + -0x44) = 0;
        *(undefined8 *)(lVar2 + -0x3c) = 0;
        *(undefined2 *)(lVar2 + -0x34) = 0;
        *(undefined8 *)(lVar2 + -0x1c) = 0;
        *(undefined8 *)(lVar2 + -0x14) = 0;
        *(undefined8 *)(lVar2 + 0xc) = 0;
        *(undefined8 *)(lVar2 + 0x1c) = 0;
        *(undefined8 *)(lVar2 + -0x2c) = 0;
        *(undefined8 *)(lVar2 + -0x24) = 0;
        *(undefined8 *)(lVar2 + -0xc) = 0;
        *(undefined8 *)(lVar2 + -4) = 0;
        *(undefined4 *)(lVar2 + 4) = 0xffffffff;
        *(undefined4 *)(lVar2 + 8) = 0;
        *(undefined8 *)(lVar2 + 0x14) = 0;
        *(undefined8 *)(lVar2 + 0x34) = 0;
        *(undefined8 *)(lVar2 + 0x3c) = 0;
        *(undefined8 *)(lVar2 + 0x5c) = 0;
        *(undefined8 *)(lVar2 + 0x6c) = 0;
        *(undefined8 *)(lVar2 + 0x24) = 0;
        *(undefined8 *)(lVar2 + 0x2c) = 0;
        *(undefined8 *)(lVar2 + 0x44) = 0;
        *(undefined8 *)(lVar2 + 0x4c) = 0;
        *(undefined4 *)(lVar2 + 0x54) = 0xffffffff;
        *(undefined4 *)(lVar2 + 0x58) = 0;
        *(undefined8 *)(lVar2 + 100) = 0;
        lVar2 = lVar2 + 200;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else if (iVar4 < iVar1) {
    RemoveAtImpl(param_1,param_2,iVar1 - iVar4,param_3);
    return;
  }
  return;
}



// FUNCTION 1415e6610 SetPlatformFile body=13 status=ok
// SIG undefined SetPlatformFile(void)

void FPlatformFileManager::SetPlatformFile(undefined8 *param_1,longlong *param_2)

{
  *param_1 = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001415e6619. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x28))(param_2);
  return;
}



// FUNCTION 1415e6630 SetReadOnly body=155 status=ok
// SIG undefined SetReadOnly(void)

undefined1 FLoggedPlatformFile::SetReadOnly(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 uVar1;
  LARGE_INTEGER local_res8;
  longlong local_18 [2];
  
  FString::PrintfImpl(local_18,L"SetReadOnly %s %d",param_2,param_3);
  QueryPerformanceCounter(&local_res8);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))
                    (*(longlong **)(param_1 + 8),param_2,param_3);
  QueryPerformanceCounter(&local_res8);
  if (local_18[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_18[0]);
  }
  return uVar1;
}



// FUNCTION 1415e66d0 FUN_1415e66d0 body=160 status=ok
// SIG undefined FUN_1415e66d0(void)

void FUN_1415e66d0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  lVar4 = FUN_143a8d310(0x38);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FICUTextCharacterIterator_NativeUTF16::FICUTextCharacterIterator_NativeUTF16
                      (lVar4,param_2);
  }
  puVar6 = (undefined8 *)FUN_1415dc080(param_1,local_18);
  (**(code **)(*(longlong *)*puVar6 + 0x40))((longlong *)*puVar6,uVar5);
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
                    /* WARNING: Could not recover jumptable at 0x0001415e676c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1);
  return;
}



// FUNCTION 1415e6770 FUN_1415e6770 body=160 status=ok
// SIG undefined FUN_1415e6770(void)

void FUN_1415e6770(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  lVar4 = FUN_143a8d310(0x38);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FICUTextCharacterIterator_NativeUTF16::FICUTextCharacterIterator_NativeUTF16
                      (lVar4,param_2);
  }
  puVar6 = (undefined8 *)FUN_1415dc080(param_1,local_18);
  (**(code **)(*(longlong *)*puVar6 + 0x40))((longlong *)*puVar6,uVar5);
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
                    /* WARNING: Could not recover jumptable at 0x0001415e680c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1);
  return;
}



// FUNCTION 1415e6810 FUN_1415e6810 body=166 status=ok
// SIG undefined FUN_1415e6810(void)

void FUN_1415e6810(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  lVar4 = FUN_143a8d310(0x38);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FICUTextCharacterIterator_NativeUTF16::FICUTextCharacterIterator_NativeUTF16
                      (lVar4,param_2,param_3);
  }
  puVar6 = (undefined8 *)FUN_1415dc080(param_1,local_18);
  (**(code **)(*(longlong *)*puVar6 + 0x40))((longlong *)*puVar6,uVar5);
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
                    /* WARNING: Could not recover jumptable at 0x0001415e68b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1);
  return;
}



// FUNCTION 1415e68c0 FUN_1415e68c0 body=160 status=ok
// SIG undefined FUN_1415e68c0(void)

void FUN_1415e68c0(longlong param_1,undefined8 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x38);
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  plVar3 = *(longlong **)(param_1 + 0x18);
  uVar2 = 0;
  uVar4 = (longlong)*(int *)(param_1 + 0x20) & 0x1fffffffffffffff;
  if (plVar3 + *(int *)(param_1 + 0x20) < plVar3) {
    uVar4 = uVar2;
  }
  if (uVar4 != 0) {
    do {
      (**(code **)(**(longlong **)(*plVar3 + 0x28) + 8))(*(longlong **)(*plVar3 + 0x28),param_2);
      uVar2 = uVar2 + 1;
      plVar3 = plVar3 + 1;
    } while (uVar2 != uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x0001415e6959. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 1415e6970 SetTimeStamp body=144 status=ok
// SIG undefined SetTimeStamp(void)

void FLoggedPlatformFile::SetTimeStamp(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  LARGE_INTEGER local_res8;
  longlong local_18 [2];
  
  FString::PrintfImpl(local_18,L"SetTimeStamp %s",param_2);
  QueryPerformanceCounter(&local_res8);
  (**(code **)(**(longlong **)(param_1 + 8) + 0xa0))(*(longlong **)(param_1 + 8),param_2,param_3);
  QueryPerformanceCounter(&local_res8);
  if (local_18[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_18[0]);
  }
  return;
}



// FUNCTION 1415e6a00 SetTls body=16 status=ok
// SIG undefined SetTls(void)

void FRunnableThread::SetTls(LPVOID param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001415e6a09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsSetValue(DAT_1468b5058,param_1);
  return;
}



// FUNCTION 1415e6a10 SetupTLSCachesOnCurrentThread body=39 status=ok
// SIG undefined SetupTLSCachesOnCurrentThread(void)

void FMemory::SetupTLSCachesOnCurrentThread(void)

{
  if (DAT_1468c2208 == (longlong *)0x0) {
    FUN_1415d7ea0();
  }
                    /* WARNING: Could not recover jumptable at 0x0001415e6a33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468c2208 + 0x40))();
  return;
}



// FUNCTION 1415e6a40 ShouldBeUsed body=91 status=ok
// SIG undefined ShouldBeUsed(void)

ulonglong FCachedReadPlatformFile::ShouldBeUsed
                    (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  ulonglong uVar2;
  
  uVar2 = FParse::Param(param_3,L"NoCachedReadFile");
  if ((char)uVar2 != '\0') {
    return uVar2 & 0xffffffffffffff00;
  }
  cVar1 = FParse::Param(param_3,L"CachedReadFile");
  return (ulonglong)(cVar1 != '\0');
}



// FUNCTION 1415e6aa0 Start body=12 status=ok
// SIG undefined Start(void)

undefined4 FThreadHeartBeat::Start(longlong param_1)

{
  undefined4 uVar1;
  
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x90) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 1415e6ad0 StringToFractional body=596 status=ok
// SIG undefined StringToFractional(void)

byte FastDecimalFormat::Internal::StringToFractional
               (ulonglong param_1,int param_2,longlong param_3,char *param_4,double *param_5,
               undefined4 *param_6)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  byte local_res8 [8];
  char local_res10 [8];
  char local_res20 [8];
  char local_1c8 [8];
  ulonglong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  undefined1 local_1a8 [96];
  undefined1 local_148 [96];
  undefined1 local_e8 [96];
  undefined1 local_88 [96];
  
  lVar1 = param_1 + (longlong)param_2 * 2;
  local_1c0 = param_1;
  FDecimalNumberSigningStrings::FDecimalNumberSigningStrings(local_1a8,param_3,0);
  FDecimalNumberSigningStrings::FDecimalNumberSigningStrings(local_148,param_3,1);
  FDecimalNumberSigningStrings::FDecimalNumberSigningStrings(local_e8,param_3,2);
  FDecimalNumberSigningStrings::FDecimalNumberSigningStrings(local_88,param_3,3);
  local_1c8[0] = '\0';
  local_1b0 = 0;
  local_res20[0] = '\0';
  local_res10[0] = '\a';
  if (*param_4 != '\0') {
    local_res10[0] = '\x0f';
  }
  bVar2 = StringToIntegral_StringToUInt64
                    (&local_1c0,lVar1,param_3,local_1a8,local_res10,local_1c8,&local_1b0,local_res20
                    );
  local_res10[0] = '\0';
  local_res8[0] = 0;
  local_1b8 = 0;
  if (((bVar2 != 0) && (param_1 < local_1c0)) &&
     (*(short *)(local_1c0 - 2) == *(short *)(param_3 + 0x72))) {
    local_1c8[1] = 2;
    bVar3 = StringToIntegral_StringToUInt64
                      (&local_1c0,lVar1,param_3,local_1a8,local_1c8 + 1,local_res10,&local_1b8,
                       local_res8);
    bVar2 = bVar2 & bVar3;
  }
  bVar3 = 0;
  if ((byte)(local_res8[0] + local_res20[0]) != '\0') {
    bVar3 = bVar2;
  }
  dVar4 = (double)local_1b8;
  if (local_1b8 < 0) {
    dVar4 = dVar4 + 1.8446744073709552e+19;
  }
  dVar5 = (double)(longlong)(&DAT_144cb00f0)[local_res8[0]];
  if ((longlong)(&DAT_144cb00f0)[local_res8[0]] < 0) {
    dVar5 = dVar5 + 1.8446744073709552e+19;
  }
  dVar6 = (double)local_1b0;
  if (local_1b0 < 0) {
    dVar6 = dVar6 + 1.8446744073709552e+19;
  }
  dVar6 = dVar4 / dVar5 + dVar6;
  if ((local_1c8[0] != '\0') || (local_res10[0] != '\0')) {
    dVar6 = -dVar6;
  }
  *param_5 = dVar6;
  if (((byte)(local_res8[0] + local_res20[0]) != '\0') && (param_6 != (undefined4 *)0x0)) {
    *param_6 = (int)((longlong)(local_1c0 - param_1) >> 1);
  }
  FDecimalNumberSigningStrings::~FDecimalNumberSigningStrings(local_88);
  FDecimalNumberSigningStrings::~FDecimalNumberSigningStrings(local_e8);
  FDecimalNumberSigningStrings::~FDecimalNumberSigningStrings(local_148);
  FDecimalNumberSigningStrings::~FDecimalNumberSigningStrings(local_1a8);
  return bVar3;
}



// FUNCTION 1415e6d30 StringToIntegral_StringToUInt64 body=889 status=ok
// SIG undefined StringToIntegral_StringToUInt64(void)

ulonglong FastDecimalFormat::Internal::StringToIntegral_StringToUInt64
                    (longlong *param_1,ushort *param_2,longlong param_3,longlong param_4,
                    byte *param_5,undefined1 *param_6,longlong *param_7,char *param_8)

{
  ushort uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ushort *puVar4;
  uint uVar5;
  ulonglong uVar6;
  
  *param_6 = 0;
  *param_7 = 0;
  *param_8 = '\0';
  if (*(short *)*param_1 == 0) {
    return CONCAT71((int7)((ulonglong)*param_1 >> 8),1);
  }
  uVar2 = FUN_1415dd2b0(param_4);
  uVar3 = FDecimalNumberSignParser::ParseSigningStringImpl(param_1,param_6,uVar2,0);
  if ((char)uVar3 == '\0') {
    uVar2 = FUN_1415dcc00(param_4);
    uVar3 = FDecimalNumberSignParser::ParseSigningStringImpl(param_1,param_6,uVar2,1);
    if ((char)uVar3 != '\0') goto LAB_1415e6ea1;
    uVar2 = FUN_1415dd2b0(param_4 + 0x60);
    uVar3 = FDecimalNumberSignParser::ParseSigningStringImpl(param_1,param_6,uVar2,0);
    if ((char)uVar3 != '\0') goto LAB_1415e6ea1;
    uVar2 = FUN_1415dcc00(param_4 + 0x60);
    uVar3 = FDecimalNumberSignParser::ParseSigningStringImpl(param_1,param_6,uVar2,1);
    if ((char)uVar3 != '\0') goto LAB_1415e6ea1;
    uVar2 = FUN_1415dd2b0(param_4 + 0xc0);
    uVar3 = FDecimalNumberSignParser::ParseSigningStringImpl(param_1,param_6,uVar2,0);
    if ((char)uVar3 != '\0') goto LAB_1415e6ea1;
    uVar2 = FUN_1415dcc00(param_4 + 0xc0);
    uVar3 = FDecimalNumberSignParser::ParseSigningStringImpl(param_1,param_6,uVar2,1);
    if ((char)uVar3 != '\0') goto LAB_1415e6ea1;
    uVar2 = FUN_1415dd2b0(param_4 + 0x120);
    uVar3 = FDecimalNumberSignParser::ParseSigningStringImpl(param_1,param_6,uVar2,0);
    if ((char)uVar3 != '\0') goto LAB_1415e6ea1;
    uVar2 = FUN_1415dcc00(param_4 + 0x120);
    uVar3 = FDecimalNumberSignParser::ParseSigningStringImpl(param_1,param_6,uVar2,1);
    if ((char)uVar3 != '\0') goto LAB_1415e6ea1;
  }
  else {
LAB_1415e6ea1:
    if ((*param_5 & 1) == 0) goto LAB_1415e708c;
  }
  puVar4 = (ushort *)*param_1;
  uVar6 = 1;
  if (puVar4 < param_2) {
    do {
      uVar1 = *puVar4;
      if (uVar1 == *(ushort *)(param_3 + 0x72)) goto LAB_1415e6f57;
      if (uVar1 == *(ushort *)(param_3 + 0x70)) {
        if ((*param_5 & 8) == 0) goto LAB_1415e708c;
        puVar4 = puVar4 + 1;
        *param_1 = (longlong)puVar4;
      }
      else {
        uVar5 = 0;
        puVar4 = &DAT_144cb0fa8;
        while ((uVar1 != *(ushort *)(param_3 + -0x144cb0f32 + (longlong)puVar4) &&
               (uVar1 != *puVar4))) {
          uVar5 = uVar5 + 1;
          puVar4 = puVar4 + 1;
          if (9 < uVar5) {
            puVar4 = (ushort *)*param_1;
            uVar6 = 0;
            goto LAB_1415e6f57;
          }
        }
        *param_1 = *param_1 + 2;
        *param_8 = *param_8 + '\x01';
        uVar3 = (ulonglong)(int)uVar5;
        *param_7 = uVar3 + *param_7 * 10;
        puVar4 = (ushort *)*param_1;
      }
    } while (puVar4 < param_2);
    uVar6 = 1;
  }
LAB_1415e6f57:
  uVar3 = (ulonglong)*(ushort *)(param_3 + 0x72);
  if (*puVar4 == *(ushort *)(param_3 + 0x72)) {
    if ((*param_5 & 4) == 0) goto LAB_1415e708c;
    *param_1 = (longlong)(puVar4 + 1);
  }
  uVar2 = FUN_1415dd340(param_4);
  uVar3 = FDecimalNumberSignParser::ParseSigningStringImpl(param_1,param_6,uVar2,0);
  if ((char)uVar3 == '\0') {
    uVar2 = FUN_1415dcc90(param_4);
    uVar3 = FDecimalNumberSignParser::ParseSigningStringImpl(param_1,param_6,uVar2,1);
    if ((char)uVar3 == '\0') {
      uVar2 = FUN_1415dd340(param_4 + 0x60);
      uVar3 = FDecimalNumberSignParser::ParseSigningStringImpl(param_1,param_6,uVar2,0);
      if ((char)uVar3 == '\0') {
        uVar2 = FUN_1415dcc90(param_4 + 0x60);
        uVar3 = FDecimalNumberSignParser::ParseSigningStringImpl(param_1,param_6,uVar2,1);
        if ((char)uVar3 == '\0') {
          uVar2 = FUN_1415dd340(param_4 + 0xc0);
          uVar3 = FDecimalNumberSignParser::ParseSigningStringImpl(param_1,param_6,uVar2,0);
          if ((char)uVar3 == '\0') {
            uVar2 = FUN_1415dcc90(param_4 + 0xc0);
            uVar3 = FDecimalNumberSignParser::ParseSigningStringImpl(param_1,param_6,uVar2,1);
            if ((char)uVar3 == '\0') {
              uVar2 = FUN_1415dd340(param_4 + 0x120);
              uVar3 = FDecimalNumberSignParser::ParseSigningStringImpl(param_1,param_6,uVar2,0);
              if ((char)uVar3 == '\0') {
                uVar2 = FUN_1415dcc90(param_4 + 0x120);
                uVar3 = FDecimalNumberSignParser::ParseSigningStringImpl(param_1,param_6,uVar2,1);
                if ((char)uVar3 == '\0') {
                  return uVar6;
                }
              }
            }
          }
        }
      }
    }
  }
  if ((*param_5 & 2) != 0) {
    return 1;
  }
LAB_1415e708c:
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1415e70c0 FUN_1415e70c0 body=192 status=ok
// SIG undefined FUN_1415e70c0(void)

void FUN_1415e70c0(longlong param_1)

{
  DWORD DVar1;
  BOOL BVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  DVar1 = GetCurrentThreadId();
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
    lVar4 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar4 = param_1 + 0x78;
    }
    iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x88) - 1U & (longlong)(int)DVar1) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x40) + (longlong)iVar3 * 0x28;
        if (*(DWORD *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar3 * 0x28) == DVar1) {
          if (iVar3 != -1) goto LAB_1415e7153;
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x20);
      } while (iVar3 != -1);
    }
  }
  lVar4 = 0;
LAB_1415e7153:
  lVar5 = lVar4 + 8;
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  if (lVar5 != 0) {
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001415e7179. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}



// FUNCTION 1415e7180 FUN_1415e7180 body=810 status=ok
// SIG undefined FUN_1415e7180(void)

void FUN_1415e7180(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  HANDLE pvVar6;
  bool bVar7;
  LPCRITICAL_SECTION p_Var8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint *puVar12;
  uint uVar13;
  int local_88;
  uint uStack_84;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_60;
  uint uStack_5c;
  uint *local_58;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  longlong local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined8 uStack_20;
  
  puVar5 = *(undefined8 **)(param_1 + 0x240);
  *(undefined8 *)(param_1 + 0x240) = 0;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5,1);
  }
  p_Var8 = DAT_1468b5030;
  if (DAT_1468b5030 != (LPCRITICAL_SECTION)0x0) {
    *(undefined4 *)&DAT_1468b5030[5].SpinCount = 0;
    pvVar6 = p_Var8[5].LockSemaphore;
    if (pvVar6 != (HANDLE)0x0) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,pvVar6);
    }
    TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (p_Var8 + 4);
    DeleteCriticalSection(p_Var8 + 3);
    *(undefined4 *)&p_Var8[2].SpinCount = 0;
    pvVar6 = p_Var8[2].LockSemaphore;
    if (pvVar6 != (HANDLE)0x0) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,pvVar6);
    }
    TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (p_Var8 + 1);
    DeleteCriticalSection(p_Var8);
    FMemory::operator_delete(p_Var8,0xf0);
  }
  p_Var8 = DAT_1468b5038;
  DAT_1468b5030 = (LPCRITICAL_SECTION)0x0;
  if (DAT_1468b5038 != (LPCRITICAL_SECTION)0x0) {
    *(undefined4 *)&DAT_1468b5038[2].SpinCount = 0;
    pvVar6 = p_Var8[2].LockSemaphore;
    if (pvVar6 != (HANDLE)0x0) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,pvVar6);
    }
    TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (p_Var8 + 1);
    DeleteCriticalSection(p_Var8);
    FMemory::operator_delete(p_Var8,0x78);
  }
  DAT_1468b5038 = (LPCRITICAL_SECTION)0x0;
  TSet<TTuple<FString,TSharedRef<FCulture,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FCulture,1>,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x1c8,0);
  FUN_143aa7730();
  lVar2 = param_1 + 0x270;
  local_88 = 0;
  uVar3 = *(uint *)(param_1 + 0x298);
  puVar1 = (uint *)(param_1 + 0x280);
  uStack_84 = 1;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar12 = *(uint **)(param_1 + 0x290);
    if (*(uint **)(param_1 + 0x290) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar4 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar11 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar9 = local_88 + 1;
      bVar7 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar9;
      if (bVar7) goto LAB_1415e738d;
      uVar4 = puVar12[lVar11 + 1];
    }
    uStack_84 = -uVar4 & uVar4;
    iVar9 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_74 = (iStack_70 - iVar9) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_1415e738d:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x298);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar13 = uVar4 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = lVar2;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar12 = *(uint **)(param_1 + 0x290);
    if (*(uint **)(param_1 + 0x290) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = puVar12[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar9 = (int)uVar4 >> 5;
    while (uVar10 == 0) {
      uVar13 = uVar13 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_1415e7452;
      uVar10 = puVar12[(longlong)iVar9 + 1];
      iVar9 = iVar9 + 1;
    }
    uVar10 = -uVar10 & uVar10;
    iVar9 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar10 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_74 = (uVar13 - iVar9) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_1415e7452:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  TSet<TTuple<FString,FICUInternationalization::FICUCachedFileData>,TDefaultMapHashableKeyFuncs<FString,FICUInternationalization::FICUCachedFileData,0>,FDefaultSetAllocator>
  ::Empty(lVar2,0);
  return;
}



// FUNCTION 1415e74e0 FUN_1415e74e0 body=600 status=ok
// SIG undefined FUN_1415e74e0(void)

void FUN_1415e74e0(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  BOOL BVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  int local_88;
  uint uStack_84;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_60;
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
  
  cVar5 = FUN_1415bac00();
  if (cVar5 == '\0') {
    BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
    if (BVar6 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
    }
    uVar2 = *(uint *)(param_1 + 5);
    puVar1 = (uint *)(param_1 + 2);
    uStack_84 = 1;
    local_88 = 0;
    uStack_74 = 0;
    iStack_70 = 0;
    if (uVar2 != 0) {
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = puVar1;
      }
      uVar3 = *puVar11;
      iStack_70 = 0;
      local_88 = 0;
      while (uVar3 == 0) {
        lVar9 = (longlong)local_88;
        iStack_70 = iStack_70 + 0x20;
        iVar7 = local_88 + 1;
        bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
        local_88 = iVar7;
        if (bVar4) goto LAB_1415e75ed;
        uVar3 = puVar11[lVar9 + 1];
      }
      uStack_84 = -uVar3 & uVar3;
      iVar7 = 0x1f;
      if (uStack_84 != 0) {
        for (; uStack_84 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_84 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_74 = (iStack_70 - iVar7) + 0x1f;
      if ((int)uVar2 < (int)uStack_74) {
LAB_1415e75ed:
        uStack_74 = uVar2;
      }
    }
    uVar3 = *(uint *)(param_1 + 5);
    uStack_50 = 0xffffffff;
    uStack_4c = uStack_74;
    local_48 = CONCAT44(uStack_6c,iStack_70);
    uStack_38 = CONCAT44(uStack_84,local_88);
    uVar10 = uVar3 & 0xffffffe0;
    iStack_60 = local_88;
    uStack_5c = uStack_84;
    local_58 = puVar1;
    local_40 = param_1;
    puStack_30 = puVar1;
    uStack_20 = local_48;
    uStack_28 = uStack_50;
    uStack_24 = uStack_4c;
    uStack_74 = uVar3;
    if (uVar3 != uVar2) {
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = puVar1;
      }
      uVar8 = puVar11[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
      iVar7 = (int)uVar3 >> 5;
      while (uVar8 == 0) {
        uVar10 = uVar10 + 0x20;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
        goto LAB_1415e76b3;
        uVar8 = puVar11[(longlong)iVar7 + 1];
        iVar7 = iVar7 + 1;
      }
      uVar8 = -uVar8 & uVar8;
      iVar7 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uVar8 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_74 = (uVar10 - iVar7) + 0x1f;
      if ((int)uVar2 < (int)uStack_74) {
LAB_1415e76b3:
        uStack_74 = uVar2;
      }
    }
    while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
      (**(code **)(**(longlong **)(*param_1 + 8 + (longlong)(int)uStack_4c * 0x18) + 0x38))();
      uStack_50 = uStack_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  }
  return;
}



// FUNCTION 1415e7740 TickActivePlatformFile body=48 status=ok
// SIG undefined TickActivePlatformFile(void)

void FPlatformFileManager::TickActivePlatformFile(undefined8 *param_1)

{
  longlong *plVar1;
  
  for (plVar1 = (longlong *)*param_1; plVar1 != (longlong *)0x0;
      plVar1 = (longlong *)(**(code **)(*plVar1 + 0x50))(plVar1)) {
    (**(code **)(*plVar1 + 0x48))(plVar1);
  }
  return;
}



// FUNCTION 1415e7770 ToLower body=155 status=ok
// SIG undefined ToLower(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FTextTransformer::ToLower(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined1 local_48 [8];
  undefined **local_40 [4];
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_1a = 0x200;
  local_40[0] = icu_53::UnicodeString::vftable;
  ICUUtilities::ConvertString(param_2,local_40,1);
  lVar1 = FUN_143a94240();
  *param_1 = 0;
  param_1[1] = 0;
  iVar2 = (int)*(char *)(lVar1 + 0x26);
  if (*(char *)(lVar1 + 0x26) < '\0') {
    iVar2 = *(int *)(lVar1 + 0x14);
  }
  if (iVar2 != 0) {
    local_58 = param_1;
    ICUUtilities::FStringConverter::ConvertString(local_48,lVar1,0);
  }
  FUN_143a8dc60(local_40);
  return param_1;
}



// FUNCTION 1415e7810 ToUpper body=155 status=ok
// SIG undefined ToUpper(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FTextTransformer::ToUpper(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined1 local_48 [8];
  undefined **local_40 [4];
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_1a = 0x200;
  local_40[0] = icu_53::UnicodeString::vftable;
  ICUUtilities::ConvertString(param_2,local_40,1);
  lVar1 = FUN_143a94300();
  *param_1 = 0;
  param_1[1] = 0;
  iVar2 = (int)*(char *)(lVar1 + 0x26);
  if (*(char *)(lVar1 + 0x26) < '\0') {
    iVar2 = *(int *)(lVar1 + 0x14);
  }
  if (iVar2 != 0) {
    local_58 = param_1;
    ICUUtilities::FStringConverter::ConvertString(local_48,lVar1,0);
  }
  FUN_143a8dc60(local_40);
  return param_1;
}



// FUNCTION 1415e78b0 Trim body=68 status=ok
// SIG undefined Trim(void)

void FMallocThreadSafeProxy::Trim(longlong param_1)

{
  BOOL BVar1;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x38))();
                    /* WARNING: Could not recover jumptable at 0x0001415e78ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}



// FUNCTION 1415e7900 Trim body=39 status=ok
// SIG undefined Trim(void)

void FMemory::Trim(void)

{
  if (DAT_1468c2208 == (longlong *)0x0) {
    FUN_1415d7ea0();
  }
                    /* WARNING: Could not recover jumptable at 0x0001415e7923. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468c2208 + 0x38))();
  return;
}



// FUNCTION 1415e7930 UEDateTimeToICUDate body=383 status=ok
// SIG undefined UEDateTimeToICUDate(void)

undefined4 FICUInternationalization::UEDateTimeToICUDate(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  BOOL BVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  
  FDateTime::GetDate(param_2,local_res18,local_res8,local_res10);
  lVar1 = *param_2;
  lVar2 = lVar1 / 600000000;
  lVar4 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar2),8) + lVar2;
  lVar5 = lVar1 + SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar1),8);
  lVar6 = (lVar5 >> 0x17) - (lVar5 >> 0x3f);
  lVar5 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar6),8) + lVar6;
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x248));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x248));
  }
  FUN_143b551d0(*(undefined8 *)(param_1 + 0x240),local_res18[0],local_res8[0] + -1,local_res10[0],
                (int)(lVar1 / 36000000000) + (int)((lVar1 / 36000000000) / 0x18) * -0x18,
                (int)lVar2 + ((int)(lVar4 >> 5) - (int)(lVar4 >> 0x3f)) * -0x3c,
                (int)lVar6 + ((int)(lVar5 >> 5) - (int)(lVar5 >> 0x3f)) * -0x3c);
  local_res20[0] = 0;
  uVar7 = FUN_143b52840(*(undefined8 *)(param_1 + 0x240),local_res20);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x248));
  return uVar7;
}



// FUNCTION 1415e7ab0 ValidateHeap body=76 status=ok
// SIG undefined ValidateHeap(void)

undefined1 FMallocThreadSafeProxy::ValidateHeap(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 uVar1;
  BOOL BVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x10);
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x78))();
  LeaveCriticalSection(lpCriticalSection);
  return uVar1;
}



// FUNCTION 1415e7b00 Visit body=84 status=ok
// SIG undefined Visit(void)

undefined1
FLoggedPlatformFile::FLogStatVisitor::Visit(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 8))
                    (*(longlong **)(param_1 + 8),param_2,param_3);
  QueryPerformanceCounter(&local_res8);
  return uVar1;
}



// FUNCTION 1415e7b60 Visit body=86 status=ok
// SIG undefined Visit(void)

undefined1
FLoggedPlatformFile::FLogVisitor::Visit(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 uVar1;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 8))
                    (*(longlong **)(param_1 + 8),param_2,param_3);
  QueryPerformanceCounter(&local_res8);
  return uVar1;
}



// FUNCTION 1415e7bc0 FUN_1415e7bc0 body=30 status=ok
// SIG undefined FUN_1415e7bc0(void)

void FUN_1415e7bc0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1415d8270();
  FUN_1415e4100(uVar1,param_1);
  return;
}



// FUNCTION 1415e7be0 Write body=240 status=ok
// SIG undefined Write(void)

char FCachedFileHandle::Write(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  if ((*(char *)(param_1 + 0x28) != '\0') && (-1 < param_3)) {
    if (param_3 == 0) {
      return '\x01';
    }
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (lVar1 != *(longlong *)(param_1 + 0x18)) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),lVar1);
      if (cVar2 != '\0') {
        *(longlong *)(param_1 + 0x18) = lVar1;
      }
    }
    cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))
                      (*(longlong **)(param_1 + 8),param_2,param_3);
    if (cVar2 != '\0') {
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + param_3;
      lVar1 = *(longlong *)(param_1 + 0x10);
      lVar3 = *(longlong *)(param_1 + 0x20);
      if (*(longlong *)(param_1 + 0x20) <= lVar1) {
        lVar3 = lVar1;
      }
      *(longlong *)(param_1 + 0x20) = lVar3;
      *(undefined8 *)(param_1 + 0x20040) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x20030) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x20048) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x20038) = 0xffffffffffffffff;
      *(longlong *)(param_1 + 0x18) = lVar1;
    }
    return cVar2;
  }
  return '\0';
}



// FUNCTION 1415e7cd0 clear body=7 status=ok
// SIG undefined clear(void)

void icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}



// FUNCTION 1415e7ce0 clone body=141 status=ok
// SIG undefined clone(void)

undefined8 * FICUTextCharacterIterator_NativeUTF16::clone(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  
  puVar3 = (undefined8 *)FUN_143a8d310(0x38);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_143aa5df0(puVar3,param_1);
    *puVar3 = &PTR__scalar_deleting_destructor__144cb1028;
    puVar1 = puVar3 + 4;
    FString::FString(puVar1,*(undefined8 *)(param_1 + 0x30));
    puVar3[6] = puVar1;
    if (*(int *)(puVar3 + 5) == 0) {
      iVar2 = 0;
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*puVar1;
      iVar2 = *(int *)(puVar3 + 5) + -1;
    }
    FUN_143aa72b0(puVar3,puVar4,iVar2);
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1415e7d70 contains body=23 status=ok
// SIG undefined contains(void)

bool icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::contains(uint *param_1,int param_2)

{
  return (*param_1 >> (param_2 - 0x1000U & 0x1f) & 1) != 0;
}



// FUNCTION 1415e7d90 get body=11 status=ok
// SIG undefined get(void)

bool icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::get(uint *param_1,uint param_2)

{
  return (*param_1 >> (param_2 & 0x1f) & 1) != 0;
}



// FUNCTION 1415e7db0 FUN_1415e7db0 body=7 status=ok
// SIG undefined FUN_1415e7db0(void)

bool FUN_1415e7db0(undefined8 param_1,uint param_2)

{
  return param_2 < 2;
}



// FUNCTION 1415e7dc0 set body=31 status=ok
// SIG undefined set(void)

void icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::set
               (uint *param_1,byte param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 1 << (param_2 & 0x1f);
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = ~uVar2 & *param_1 | uVar1;
  return;
}



// FUNCTION 1415e7de0 set body=47 status=ok
// SIG undefined set(void)

void icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::set
               (uint *param_1,byte param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = 1 << (param_2 & 0x1f);
  if (param_3 != 0) {
    *param_1 = ~uVar1 & *param_1 | uVar1;
    return;
  }
  *param_1 = ~uVar1 & *param_1;
  return;
}



// FUNCTION 1415e7e10 FExpressionNode<TextFormatTokens::FArgumentModifierTokenSpecifier> body=176 status=ok
// SIG undefined FExpressionNode<TextFormatTokens::FArgumentModifierTokenSpecifier>(void)

undefined4 *
FExpressionNode::FExpressionNode<TextFormatTokens::FArgumentModifierTokenSpecifier>
          (undefined4 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  longlong local_10;
  
  puVar9 = (undefined4 *)FUN_14160c2e0();
  uVar5 = puVar9[1];
  uVar6 = puVar9[2];
  uVar7 = puVar9[3];
  *param_1 = *puVar9;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  local_28 = *param_2;
  local_20 = *(undefined4 *)(param_2 + 1);
  local_18 = param_2[2];
  local_10 = param_2[3];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  Impl::FInlineDataStorage<TextFormatTokens::FArgumentModifierTokenSpecifier>::
  FInlineDataStorage<TextFormatTokens::FArgumentModifierTokenSpecifier>(param_1 + 4,&local_28);
  plVar4 = (longlong *)param_2[3];
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
    return param_1;
  }
  return param_1;
}


