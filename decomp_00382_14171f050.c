// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14171f050 LockReadOnly body=31 status=ok
// SIG undefined LockReadOnly(void)

undefined8 FUntypedBulkData::LockReadOnly(longlong param_1)

{
  MakeSureBulkDataIsLoaded();
  *(undefined4 *)(param_1 + 0x40) = 1;
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 14171f070 MakeSureBulkDataIsLoaded body=196 status=ok
// SIG undefined MakeSureBulkDataIsLoaded(void)

void FUntypedBulkData::MakeSureBulkDataIsLoaded(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  if ((char)param_1[5] == '\0') {
    plVar1 = param_1 + 4;
    if (param_1[9] != 0) {
      WaitForAsyncLoading();
      plVar2 = param_1 + 6;
      if (plVar1 != plVar2) {
        lVar6 = *plVar1;
        lVar4 = param_1[5];
        *(int *)plVar1 = (int)*plVar2;
        *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_1 + 0x34);
        *(int *)(param_1 + 5) = (int)param_1[7];
        *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x3c);
        *plVar2 = lVar6;
        param_1[7] = lVar4;
      }
      FMemory::Free(*plVar2);
      *plVar2 = 0;
      *(undefined1 *)(param_1 + 7) = 0;
      ResetAsyncData(param_1);
      return;
    }
    iVar3 = *(int *)((longlong)param_1 + 0xc);
    iVar5 = (**(code **)(*param_1 + 8))();
    iVar5 = iVar5 * iVar3;
    if (iVar5 == 0) {
      FMemory::Free(*plVar1);
      lVar6 = 0;
    }
    else {
      lVar6 = FMemory::Realloc(*plVar1,(longlong)iVar5,*(undefined4 *)((longlong)param_1 + 0x1c));
    }
    *plVar1 = lVar6;
    *(undefined1 *)(param_1 + 5) = 1;
    if (0 < iVar5) {
      FUN_14171ebf0(param_1,param_1[4]);
    }
  }
  return;
}



// FUNCTION 14171f140 Matches body=610 status=ok
// SIG undefined Matches(void)

undefined8 FCoreRedirectObjectName::Matches(longlong *param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  bool bVar8;
  undefined2 *puVar9;
  bool bVar10;
  longlong local_48 [2];
  longlong local_38 [2];
  
  lVar1 = *param_1;
  bVar8 = false;
  bVar10 = false;
  if (param_3 == '\0') {
    if (((lVar1 != *param_2) && (lVar1 != 0)) || ((param_1[1] != param_2[1] && (param_1[1] != 0))))
    goto LAB_14171f388;
    if (param_1[2] != param_2[2]) {
      bVar10 = param_1[2] == 0;
      goto LAB_14171f386;
    }
LAB_14171f38c:
    uVar6 = 1;
  }
  else {
    puVar9 = &DAT_143f3eda8;
    if (lVar1 == 0) {
LAB_14171f1d1:
      bVar2 = false;
    }
    else {
      puVar5 = (undefined8 *)FName::ToString(param_1,local_38);
      uVar6 = FName::ToString(param_2,local_48);
      if (*(int *)(puVar5 + 1) == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = (undefined2 *)*puVar5;
      }
      bVar8 = true;
      bVar10 = true;
      iVar4 = FUN_141592950(uVar6,puVar7,1,0,0xffffffff);
      if (iVar4 != -1) goto LAB_14171f1d1;
      bVar2 = true;
    }
    if (bVar10) {
      if (local_48[0] != 0) {
        FMemory::Free();
      }
    }
    if (bVar8) {
      if (local_38[0] != 0) {
        FMemory::Free();
      }
    }
    bVar8 = false;
    bVar10 = false;
    if (!bVar2) {
      if (param_1[1] == 0) {
LAB_14171f27c:
        bVar2 = false;
      }
      else {
        bVar8 = true;
        bVar10 = true;
        puVar5 = (undefined8 *)FName::ToString(param_1 + 1,local_48);
        uVar6 = FName::ToString(param_2 + 1,local_38);
        if (*(int *)(puVar5 + 1) == 0) {
          puVar7 = &DAT_143f3eda8;
        }
        else {
          puVar7 = (undefined2 *)*puVar5;
        }
        iVar4 = FUN_141592950(uVar6,puVar7,1,0,0xffffffff);
        if (iVar4 != -1) goto LAB_14171f27c;
        bVar2 = true;
      }
      if (bVar10) {
        if (local_38[0] != 0) {
          FMemory::Free();
        }
      }
      if (bVar8) {
        if (local_48[0] != 0) {
          FMemory::Free();
        }
      }
      bVar3 = false;
      bVar8 = false;
      if (!bVar2) {
        if (param_1[2] == 0) {
LAB_14171f315:
          bVar10 = false;
        }
        else {
          bVar3 = true;
          bVar8 = true;
          puVar5 = (undefined8 *)FName::ToString(param_1 + 2,local_48);
          uVar6 = FName::ToString(param_2 + 2,local_38);
          if (*(int *)(puVar5 + 1) != 0) {
            puVar9 = (undefined2 *)*puVar5;
          }
          iVar4 = FUN_141592950(uVar6,puVar9,1,0,0xffffffff);
          if (iVar4 != -1) goto LAB_14171f315;
          bVar10 = true;
        }
        if (bVar8) {
          if (local_38[0] != 0) {
            FMemory::Free();
          }
        }
        if ((bVar3) && (local_48[0] != 0)) {
          FMemory::Free();
        }
        bVar10 = !bVar10;
LAB_14171f386:
        if (bVar10) goto LAB_14171f38c;
      }
    }
LAB_14171f388:
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 14171f3b0 NormalizeNewName body=68 status=ok
// SIG undefined NormalizeNewName(void)

undefined8 FCoreRedirect::NormalizeNewName(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 8);
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x10);
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x30) = uVar1;
  }
  return uVar1;
}



// FUNCTION 14171f400 ParseValueChanges body=514 status=ok
// SIG undefined ParseValueChanges(void)

wint_t * FCoreRedirect::ParseValueChanges(longlong param_1,short *param_2)

{
  wint_t _C;
  int iVar1;
  wint_t *pwVar2;
  wint_t *pwVar3;
  wint_t *pwVar4;
  wint_t *pwVar5;
  undefined1 local_res10 [8];
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  longlong *local_18;
  longlong *local_10;
  
  pwVar2 = (wint_t *)(param_2 + 1);
  if (*param_2 != 0x28) {
    return (wint_t *)0x0;
  }
  iVar1 = iswspace(*pwVar2);
  while (iVar1 != 0) {
    pwVar4 = pwVar2 + 1;
    pwVar2 = pwVar2 + 1;
    iVar1 = iswspace(*pwVar4);
  }
  _C = *pwVar2;
  if (_C == 0x29) {
    return pwVar2 + 1;
  }
  pwVar4 = (wint_t *)0x0;
  while( true ) {
    iVar1 = iswspace(_C);
    while (iVar1 != 0) {
      pwVar5 = pwVar2 + 1;
      pwVar2 = pwVar2 + 1;
      iVar1 = iswspace(*pwVar5);
    }
    if (*pwVar2 != 0x28) {
      return (wint_t *)0x0;
    }
    local_28 = 0;
    local_20 = 0;
    local_38 = 0;
    local_30 = 0;
    pwVar2 = (wint_t *)UPropertyHelpers::ReadToken(pwVar2 + 1,&local_28,1);
    pwVar5 = pwVar4;
    if (pwVar2 == (wint_t *)0x0) break;
    iVar1 = iswspace(*pwVar2);
    while (iVar1 != 0) {
      pwVar3 = pwVar2 + 1;
      pwVar2 = pwVar2 + 1;
      iVar1 = iswspace(*pwVar3);
    }
    pwVar3 = pwVar2 + 1;
    if (*pwVar2 != 0x2c) break;
    iVar1 = iswspace(*pwVar3);
    while (iVar1 != 0) {
      pwVar2 = pwVar3 + 1;
      pwVar3 = pwVar3 + 1;
      iVar1 = iswspace(*pwVar2);
    }
    pwVar3 = (wint_t *)UPropertyHelpers::ReadToken(pwVar3,&local_38,1);
    if (pwVar3 == (wint_t *)0x0) break;
    iVar1 = iswspace(*pwVar3);
    while (iVar1 != 0) {
      pwVar2 = pwVar3 + 1;
      pwVar3 = pwVar3 + 1;
      iVar1 = iswspace(*pwVar2);
    }
    pwVar5 = (wint_t *)0x0;
    if (*pwVar3 != 0x29) break;
    local_18 = &local_28;
    local_10 = &local_38;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
              (param_1 + 0x50,local_res10,&local_18,0);
    pwVar2 = pwVar3 + 2;
    pwVar5 = pwVar2;
    if ((pwVar3[1] == 0x29) || (pwVar5 = (wint_t *)0x0, pwVar3[1] != 0x2c)) break;
    if (local_38 != 0) {
      FMemory::Free();
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
    _C = *pwVar2;
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  return pwVar5;
}



// FUNCTION 14171f610 PostInitProperties body=54 status=ok
// SIG undefined PostInitProperties(void)

void UClass::PostInitProperties(longlong param_1)

{
  FUN_1417931d0();
  if (((*(uint *)(param_1 + 8) >> 4 & 1) != 0) && (*(longlong *)(param_1 + 0xa8) == 0)) {
    *(code **)(param_1 + 0xa8) = FUN_1417169e0;
  }
  return;
}



// FUNCTION 14171f650 FUN_14171f650 body=84 status=ok
// SIG undefined FUN_14171f650(void)

void FUN_14171f650(longlong *param_1)

{
  UObject::PostLoad();
  (**(code **)(*param_1 + 0x280))(param_1);
  if (param_1[6] != 0) {
    FUN_1417510e0();
  }
  if ((*(uint *)((longlong)param_1 + 0xb4) >> 7 & 1) == 0) {
    *(uint *)((longlong)param_1 + 0xb4) = *(uint *)((longlong)param_1 + 0xb4) & 0xfffff7ff;
    FUN_141726870(param_1);
    return;
  }
  return;
}



// FUNCTION 14171f6b0 FUN_14171f6b0 body=32 status=ok
// SIG undefined FUN_14171f6b0(void)

void FUN_14171f6b0(longlong *param_1)

{
  UObject::PostLoad();
                    /* WARNING: Could not recover jumptable at 0x00014171f6c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x280))(param_1);
  return;
}



// FUNCTION 14171f6d0 FUN_14171f6d0 body=74 status=ok
// SIG undefined FUN_14171f6d0(void)

void FUN_14171f6d0(longlong *param_1)

{
  longlong lVar1;
  
  UObject::PostLoad();
  (**(code **)(*param_1 + 0x280))(param_1);
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    lVar1 = param_1[4];
  }
  else {
    lVar1 = 0;
  }
  if ((lVar1 != 0) && ((*(byte *)(param_1 + 0x11) & 0x40) != 0)) {
    *(uint *)(lVar1 + 0xb4) = *(uint *)(lVar1 + 0xb4) & 0xfffff7ff;
  }
  return;
}



// FUNCTION 14171f730 FUN_14171f730 body=1039 status=ok
// SIG undefined FUN_14171f730(void)

void FUN_14171f730(longlong param_1)

{
  char *pcVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  void *_Dst;
  longlong lVar9;
  undefined2 *puVar10;
  size_t _Size;
  longlong lVar11;
  undefined8 local_res8;
  undefined2 *local_18;
  int local_10;
  
  if (*(char *)(param_1 + 0x8c) != '\0') {
    return;
  }
  plVar7 = *(longlong **)(param_1 + 0x90);
  if (plVar7 == (longlong *)0x0) {
    lVar11 = *(longlong *)(param_1 + 0x18);
    plVar7 = (longlong *)FUN_14171b5a0();
    if ((int)plVar7[1] != *(int *)((longlong)plVar7 + 0x34)) {
      plVar8 = (longlong *)plVar7[8];
      if ((longlong *)plVar7[8] == (longlong *)0x0) {
        plVar8 = plVar7 + 7;
      }
      iVar6 = *(int *)((longlong)plVar8 +
                      ((longlong)((int)((ulonglong)lVar11 >> 0x20) + (int)lVar11) &
                      (longlong)(int)plVar7[9] - 1U) * 4);
      if (iVar6 != -1) {
        lVar2 = *plVar7;
        do {
          lVar9 = (longlong)iVar6;
          if (*(longlong *)(lVar2 + lVar9 * 0x18) == lVar11) {
            if ((iVar6 != -1) && (lVar2 = lVar2 + lVar9 * 0x18, lVar2 != 0)) {
              plVar7 = *(longlong **)(lVar2 + 8);
              goto LAB_14171f7c1;
            }
            break;
          }
          iVar6 = *(int *)(lVar2 + 0x10 + lVar9 * 0x18);
        } while (iVar6 != -1);
      }
    }
    plVar7 = (longlong *)0x0;
LAB_14171f7c1:
    *(longlong **)(param_1 + 0x90) = plVar7;
    if (plVar7 == (longlong *)0x0) {
      if ((*(byte *)(param_1 + 0x88) & 1) != 0) {
        local_res8 = *(undefined8 *)(param_1 + 0x18);
        FName::ToString(&local_res8,&local_18);
        puVar10 = &DAT_143f3eda8;
        if (local_10 != 0) {
          puVar10 = local_18;
        }
        LowLevelFatalErrorHandler
                  ("Unknown",0x79f,
                   L"Couldn\'t bind to native struct %s. Headers need to be rebuilt, or a noexport class is missing a IMPLEMENT_STRUCT."
                   ,puVar10);
        if (local_18 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        local_res8 = *(undefined8 *)(param_1 + 0x18);
        FName::ToString(&local_res8,&local_18);
        puVar10 = &DAT_143f3eda8;
        if (local_10 != 0) {
          puVar10 = local_18;
        }
        FDebug::AssertFailed
                  (&DAT_144cfe0c4,"Unknown",0x79f,
                   L"Couldn\'t bind to native struct %s. Headers need to be rebuilt, or a noexport class is missing a IMPLEMENT_STRUCT."
                   ,puVar10);
        if (local_18 != (undefined2 *)0x0) {
          FMemory::Free();
          *(undefined1 *)(param_1 + 0x8c) = 1;
          return;
        }
      }
      goto LAB_14171fb2d;
    }
  }
  cVar5 = (**(code **)(*plVar7 + 0x30))();
  if (cVar5 != '\0') {
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 0x800;
  }
  cVar5 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x40))();
  if (cVar5 != '\0') {
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 0x40000;
  }
  cVar5 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x78))();
  if (cVar5 != '\0') {
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 0x200000;
  }
  cVar5 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x50))();
  if (cVar5 != '\0') {
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 0x400;
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x58))();
    if (cVar5 != '\0') {
      *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 0x400000;
    }
  }
  cVar5 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x68))();
  if (cVar5 != '\0') {
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 0x100000;
  }
  cVar5 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x88))();
  if (cVar5 == '\0') {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x90))();
    if (cVar5 != '\0') {
      *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 0x1000;
    }
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x20))();
    if (cVar5 == '\0') {
      *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 0x4000;
    }
  }
  else {
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 0x6000;
  }
  cVar5 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))();
  if (cVar5 != '\0') {
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 0x8000;
  }
  cVar5 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x88))();
  if ((cVar5 != '\0') &&
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))(), cVar5 == '\0')) {
    _Size = (size_t)*(int *)(*(longlong *)(param_1 + 0x90) + 8);
    _Dst = (void *)FMemory::Malloc(_Size);
    _guard_xfg_dispatch_icall_nop(_Dst,0,_Size);
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x18))(*(longlong **)(param_1 + 0x90),_Dst);
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x18))();
    bVar3 = true;
    if (0 < (longlong)_Size) {
      lVar11 = 0;
      do {
        if (!bVar3) break;
        pcVar1 = (char *)(lVar11 + (longlong)_Dst);
        lVar11 = lVar11 + 1;
        bVar4 = false;
        if (*pcVar1 == '\0') {
          bVar4 = bVar3;
        }
        bVar3 = bVar4;
      } while (lVar11 < (longlong)_Size);
    }
    FMemory::Free(_Dst);
    if (bVar3) {
      *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 0x8000;
    }
  }
  cVar5 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0xa8))();
  if (cVar5 != '\0') {
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 2;
  }
  cVar5 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0xd8))();
  if (cVar5 != '\0') {
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 0x40;
  }
  cVar5 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0xb8))();
  if (cVar5 != '\0') {
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 0x10000;
  }
  cVar5 = (**(code **)(**(longlong **)(param_1 + 0x90) + 200))();
  if (cVar5 != '\0') {
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 0x20000;
  }
  cVar5 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0xe8))();
  if (cVar5 != '\0') {
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 0x80000;
  }
LAB_14171fb2d:
  *(undefined1 *)(param_1 + 0x8c) = 1;
  return;
}



// FUNCTION 14171fb40 PrependStreamWithSuperClass body=19 status=ok
// SIG undefined PrependStreamWithSuperClass(void)

void UClass::PrependStreamWithSuperClass(longlong param_1,longlong param_2)

{
  FGCReferenceTokenStream::PrependStream(param_1 + 0x1b0,param_2 + 0x1b0);
  return;
}



// FUNCTION 14171fb60 FUN_14171fb60 body=268 status=ok
// SIG undefined FUN_14171fb60(void)

void FUN_14171fb60(longlong *param_1)

{
  *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) & 0x80000000;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (*(int *)((longlong)param_1 + 0xe4) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x1b,0);
  }
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (*(int *)((longlong)param_1 + 0xf4) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x1d,0);
  }
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  if (*(int *)((longlong)param_1 + 0x1ac) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x34,0);
  }
  *(undefined4 *)(param_1 + 0x3e) = 0;
  if (*(int *)((longlong)param_1 + 500) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x3d,0);
  }
  (**(code **)(*param_1 + 0x2c8))(param_1,0);
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  if (*(int *)((longlong)param_1 + 0x54) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 9,0);
  }
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)((longlong)param_1 + 0x84) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xf,0);
  }
  FUN_1406c5d90(param_1 + 0x20,0);
  FUN_1406c5d90(param_1 + 0x2a,0);
  param_1[0xb] = 0;
  return;
}



// FUNCTION 14171fc70 FUN_14171fc70 body=407 status=ok
// SIG undefined FUN_14171fc70(void)

void FUN_14171fc70(longlong *param_1)

{
  *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) & 0x80000000;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (*(int *)((longlong)param_1 + 0xe4) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x1b,0);
  }
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (*(int *)((longlong)param_1 + 0xf4) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x1d,0);
  }
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  if (*(int *)((longlong)param_1 + 0x1ac) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x34,0);
  }
  *(undefined4 *)(param_1 + 0x3e) = 0;
  if (*(int *)((longlong)param_1 + 500) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x3d,0);
  }
  (**(code **)(*param_1 + 0x2c8))(param_1,0);
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  if (*(int *)((longlong)param_1 + 0x54) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 9,0);
  }
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)((longlong)param_1 + 0x84) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xf,0);
  }
  FUN_1406c5d90(param_1 + 0x20,0);
  FUN_1406c5d90(param_1 + 0x2a,0);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  if (*(int *)((longlong)param_1 + 0x20c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x40,0);
  }
  *(undefined4 *)(param_1 + 0x43) = 0;
  if (*(int *)((longlong)param_1 + 0x21c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x42,0);
  }
  *(undefined4 *)(param_1 + 0x45) = 0;
  if (*(int *)((longlong)param_1 + 0x22c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x44,0);
  }
  *(undefined4 *)(param_1 + 0x47) = 0;
  if (*(int *)((longlong)param_1 + 0x23c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x46,0);
  }
  *(undefined4 *)(param_1 + 0x49) = 0;
  if (*(int *)((longlong)param_1 + 0x24c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x48,0);
  }
  *(undefined4 *)(param_1 + 0x4b) = 0;
  if (*(int *)((longlong)param_1 + 0x25c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x4a,0);
  }
  param_1[0x4c] = 0;
  return;
}



// FUNCTION 14171fe10 FUN_14171fe10 body=8 status=ok
// SIG undefined FUN_14171fe10(void)

undefined8 FUN_14171fe10(void)

{
  return DAT_1469e7068;
}



// FUNCTION 14171fe20 FUN_14171fe20 body=12 status=ok
// SIG undefined FUN_14171fe20(void)

void FUN_14171fe20(void)

{
  DAT_1469e7068 = 0;
  return;
}



// FUNCTION 14171fe30 RPC_ValidateFailed body=8 status=ok
// SIG undefined RPC_ValidateFailed(void)

void RPC_ValidateFailed(undefined8 param_1)

{
  DAT_1469e7068 = param_1;
  return;
}



// FUNCTION 14171fe40 FUN_14171fe40 body=2725 status=ok
// SIG undefined FUN_14171fe40(void)

ulonglong FUN_14171fe40(ulonglong param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  uint *puVar6;
  uint *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint *puVar10;
  uint uVar11;
  longlong lVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  uint *puVar18;
  wchar_t *pwVar19;
  uint uVar20;
  uint *puVar21;
  void *_Dst;
  undefined8 *puVar22;
  undefined2 *puVar23;
  uint local_res10 [2];
  char local_res18 [8];
  char local_res20 [8];
  undefined4 uVar25;
  ulonglong uVar24;
  char *local_168;
  uint *local_160;
  longlong local_158;
  undefined8 local_150;
  longlong local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint *puStack_128;
  undefined1 auStack_120 [16];
  undefined8 local_110;
  uint *puStack_108;
  undefined4 local_100;
  uint uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  wchar_t *local_b0;
  int local_a8;
  undefined4 local_a4;
  longlong local_a0 [3];
  uint *local_88;
  undefined8 uStack_80;
  uint *local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  uint *local_58;
  undefined2 local_50;
  
  iVar14 = 0x20;
  iVar16 = 0;
  if (DAT_1469e7020 == '\0') {
    local_res10[0] = 1;
    FName::FName(local_res20,L"ObjectRedirects",1);
    local_168 = local_res20;
    local_160 = local_res10;
    FUN_1416b42c0(&DAT_1464b4a30,local_res18,&local_168,0);
    local_res10[0] = 2;
    FName::FName(local_res20,L"ClassRedirects",1);
    local_168 = local_res20;
    local_160 = local_res10;
    FUN_1416b42c0(&DAT_1464b4a30,local_res18,&local_168,0);
    local_res10[0] = 4;
    FName::FName(local_res20,L"StructRedirects",1);
    local_168 = local_res20;
    local_160 = local_res10;
    FUN_1416b42c0(&DAT_1464b4a30,local_res18,&local_168,0);
    local_res10[0] = 8;
    FName::FName(local_res20,L"EnumRedirects",1);
    local_168 = local_res20;
    local_160 = local_res10;
    FUN_1416b42c0(&DAT_1464b4a30,local_res18,&local_168,0);
    local_res10[0] = 0x10;
    FName::FName(local_res20,L"FunctionRedirects",1);
    local_168 = local_res20;
    local_160 = local_res10;
    FUN_1416b42c0(&DAT_1464b4a30,local_res18,&local_168,0);
    local_res10[0] = 0x20;
    FName::FName(local_res20,L"PropertyRedirects",1);
    local_168 = local_res20;
    local_160 = local_res10;
    FUN_1416b42c0(&DAT_1464b4a30,local_res18,&local_168,0);
    local_res10[0] = 0x40;
    FName::FName(local_res20,L"PackageRedirects",1);
    local_168 = local_res20;
    local_160 = local_res10;
    FUN_1416b42c0(&DAT_1464b4a30,local_res18,&local_168,0);
    local_148 = 0;
    local_140 = 0;
    FUN_141721240(&local_148);
    local_158 = 0;
    local_150 = 0x18;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
    FGenericPlatformString::Memcpy(local_158,L"RegisterNativeRedirects",0x30);
    FCoreRedirects::AddRedirectList(&local_148,&local_158);
    if (local_158 != 0) {
      FMemory::Free();
    }
    TArray<FCoreRedirect,FDefaultAllocator>::~TArray<FCoreRedirect,FDefaultAllocator>(&local_148);
    DAT_1469e7020 = '\x01';
  }
  uVar9 = param_1;
  if (DAT_1468b6148 != 0) {
    uVar24 = param_1;
    local_138 = (uint *)FConfigCacheIni::GetSectionPrivate
                                  (DAT_1468b6148,L"CoreRedirects",0,1,param_1);
    uVar9 = 0;
    if (local_138 != (uint *)0x0) {
      puStack_128 = local_138 + 4;
      uVar20 = local_138[10];
      local_158 = 0;
      local_150 = 0;
      local_110 = (uint *)0x100000000;
      uStack_fc = 0;
      iStack_f8 = 0;
      if (uVar20 != 0) {
        puVar21 = *(uint **)(local_138 + 8);
        if (*(uint **)(local_138 + 8) == (uint *)0x0) {
          puVar21 = puStack_128;
        }
        uVar3 = *puVar21;
        iVar4 = iVar16;
        while (uVar3 == 0) {
          iStack_f8 = iStack_f8 + 0x20;
          uVar9 = (ulonglong)local_110 >> 0x20;
          local_110 = (uint *)CONCAT44((int)uVar9,iVar4 + 1);
          if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
          goto LAB_141720216;
          uVar3 = puVar21[(longlong)iVar4 + 1];
          iVar4 = iVar4 + 1;
        }
        uVar3 = -uVar3 & uVar3;
        iVar4 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        local_110 = (uint *)CONCAT44(uVar3,SUB84(local_110,0));
        if (uVar3 != 0) {
          iVar14 = 0x1f - iVar4;
        }
        uStack_fc = (iStack_f8 - iVar14) + 0x1f;
        if ((int)uVar20 < (int)uStack_fc) {
LAB_141720216:
          uStack_fc = uVar20;
        }
      }
      local_100 = 0xffffffff;
      uStack_70 = CONCAT44(uStack_fc,0xffffffff);
      auStack_120._8_4_ = iStack_f8;
      auStack_120._0_8_ = uStack_70;
      auStack_120._12_4_ = uStack_f4;
      uStack_130 = local_110;
      local_50 = 0;
      uStack_e8._0_4_ = SUB84(local_138,0);
      uStack_e8._4_4_ = (undefined4)((ulonglong)local_138 >> 0x20);
      uStack_80 = local_110;
      local_68._8_4_ = (undefined4)uStack_e8;
      local_68._0_8_ = auStack_120._8_8_;
      local_68._12_4_ = uStack_e8._4_4_;
      uVar20 = uStack_fc;
      puStack_108 = puStack_128;
      uStack_e8 = local_138;
      local_88 = local_138;
      local_78 = puStack_128;
      local_58 = local_138;
      if ((int)uStack_fc < (int)local_138[10]) {
        do {
          puVar21 = local_88;
          puVar17 = (uint *)0x0;
          local_168 = (char *)0x0;
          local_160 = (uint *)0x0;
          local_a0[0] = 0;
          local_a0[1] = 0;
          local_148 = 0;
          local_140 = 0;
          local_res10[0] = local_res10[0] & 0xffffff00;
          local_res18[0] = '\0';
          local_res20[0] = '\0';
          lVar12 = *(longlong *)local_88 + (longlong)(int)uVar20 * 0x30;
          iVar4 = *(int *)(lVar12 + 0x20);
          iVar14 = iVar4 + -1;
          if (iVar4 == 0) {
            iVar14 = 0;
          }
          lVar8 = 0x18;
          if (iVar14 < 1) {
            lVar8 = 8;
          }
          puVar22 = (undefined8 *)(lVar8 + lVar12);
          if (*(int *)(puVar22 + 1) == 0) {
            puVar23 = &DAT_143f3eda8;
          }
          else {
            puVar23 = (undefined2 *)*puVar22;
          }
          FParse::Bool(puVar23,L"InstanceOnly=",local_res10);
          if (*(int *)(puVar22 + 1) == 0) {
            puVar23 = &DAT_143f3eda8;
          }
          else {
            puVar23 = (undefined2 *)*puVar22;
          }
          FParse::Bool(puVar23,L"Removed=",local_res18);
          if (*(int *)(puVar22 + 1) == 0) {
            puVar23 = &DAT_143f3eda8;
          }
          else {
            puVar23 = (undefined2 *)*puVar22;
          }
          FParse::Bool(puVar23,L"MatchSubstring=",local_res20);
          if (*(int *)(puVar22 + 1) == 0) {
            puVar23 = &DAT_143f3eda8;
          }
          else {
            puVar23 = (undefined2 *)*puVar22;
          }
          FParse::Value(puVar23,L"OldName=",&local_168,1);
          if (*(int *)(puVar22 + 1) == 0) {
            puVar23 = &DAT_143f3eda8;
          }
          else {
            puVar23 = (undefined2 *)*puVar22;
          }
          FParse::Value(puVar23,L"NewName=",local_a0,1);
          if (*(int *)(puVar22 + 1) == 0) {
            puVar23 = &DAT_143f3eda8;
          }
          else {
            puVar23 = (undefined2 *)*puVar22;
          }
          FParse::Value(puVar23,L"OverrideClassName=",&local_148,1);
          uVar25 = (undefined4)(uVar24 >> 0x20);
          lVar12 = *(longlong *)((longlong)(int)uVar20 * 0x30 + *(longlong *)puVar21);
          if (DAT_1464b4a38 != DAT_1464b4a64) {
            puVar5 = DAT_1464b4a70;
            if (DAT_1464b4a70 == (undefined *)0x0) {
              puVar5 = &DAT_1464b4a68;
            }
            iVar14 = *(int *)(puVar5 + (longlong)
                                       (int)((int)((ulonglong)lVar12 >> 0x20) + (int)lVar12 &
                                            DAT_1464b4a78 - 1U) * 4);
            while (iVar14 != -1) {
              lVar8 = (longlong)iVar14 * 0x18;
              if (*(longlong *)(lVar8 + DAT_1464b4a30) == lVar12) {
                puVar21 = (uint *)(lVar8 + DAT_1464b4a30);
                if (iVar14 != -1) goto LAB_14172046d;
                break;
              }
              iVar14 = *(int *)(lVar8 + 0x10 + DAT_1464b4a30);
            }
          }
          puVar21 = puVar17;
LAB_14172046d:
          puVar6 = puVar21 + 2;
          if (puVar21 == (uint *)0x0) {
            puVar6 = puVar17;
          }
          if (puVar6 != (uint *)0x0) {
            uVar20 = *puVar6;
            if ((char)local_res10[0] != '\0') {
              uVar20 = uVar20 | 0x10000;
            }
            if (local_res18[0] != '\0') {
              uVar20 = uVar20 | 0x20000;
            }
            if (local_res20[0] != '\0') {
              uVar20 = uVar20 | 0x40000;
            }
            iVar14 = iVar16 + 1;
            local_150 = CONCAT44(local_150._4_4_,iVar14);
            if (local_150._4_4_ < iVar14) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::
              ResizeGrow(&local_158,iVar16);
              iVar14 = (int)local_150;
            }
            puVar21 = (uint *)((longlong)iVar16 * 0xa0 + local_158);
            if (puVar21 != (uint *)0x0) {
              local_138 = (uint *)0x0;
              uStack_130 = (uint *)0x0;
              puStack_128 = (uint *)0x0;
              cVar1 = FUN_1417191f0(local_a0,&local_138,&uStack_130,&puStack_128);
              puVar6 = puStack_128;
              puVar17 = local_138;
              puVar18 = uStack_130;
              if (cVar1 == '\0') {
                local_e0 = 0;
                puVar6 = (uint *)0x0;
                puVar17 = puVar6;
                puVar18 = puVar6;
              }
              local_110 = (uint *)0x0;
              puStack_108 = (uint *)0x0;
              local_100 = 0;
              uStack_fc = 0;
              cVar1 = FUN_1417191f0(&local_168,&local_110,&puStack_108,&local_100);
              if (cVar1 == '\0') {
                puVar7 = (uint *)0x0;
                local_d8 = 0;
                puVar10 = puVar7;
                puVar13 = puVar7;
              }
              else {
                puVar7 = (uint *)CONCAT44(uStack_fc,local_100);
                puVar10 = puStack_108;
                puVar13 = local_110;
              }
              *puVar21 = uVar20;
              *(uint **)(puVar21 + 6) = puVar7;
              *(uint **)(puVar21 + 2) = puVar13;
              *(uint **)(puVar21 + 4) = puVar10;
              *(uint **)(puVar21 + 8) = puVar17;
              *(uint **)(puVar21 + 10) = puVar18;
              *(uint **)(puVar21 + 0xc) = puVar6;
              puVar21[0xe] = 0;
              puVar21[0xf] = 0;
              puVar21[0x10] = 0;
              puVar21[0x11] = 0;
              puVar21[0x12] = 0;
              puVar21[0x13] = 0;
              puVar21[0x14] = 0;
              puVar21[0x15] = 0;
              puVar21[0x16] = 0;
              puVar21[0x17] = 0;
              puVar21[0x1c] = 0;
              puVar21[0x1d] = 0;
              puVar21[0x1e] = 0;
              puVar21[0x1f] = 0;
              puVar21[0x20] = 0xffffffff;
              puVar21[0x21] = 0;
              puVar21[0x24] = 0;
              puVar21[0x25] = 0;
              puVar21[0x26] = 0;
              local_d0 = 0;
              if (*(longlong *)(puVar21 + 8) == 0) {
                *(uint **)(puVar21 + 8) = puVar13;
              }
              local_c8 = 0;
              if (*(longlong *)(puVar21 + 10) == 0) {
                *(uint **)(puVar21 + 10) = puVar10;
              }
              local_c0 = 0;
              puVar17 = puVar21;
              if (puVar6 == (uint *)0x0) {
                *(undefined8 *)(puVar21 + 0xc) = *(undefined8 *)(puVar21 + 6);
              }
            }
            if (1 < (int)local_140) {
              local_138 = (uint *)0x0;
              uStack_130 = (uint *)0x0;
              puStack_128 = (uint *)0x0;
              cVar1 = FUN_1417191f0(&local_148,&local_138,&uStack_130,&puStack_128);
              if (cVar1 == '\0') {
                local_b8 = 0;
                puStack_128 = (uint *)0x0;
                uStack_130 = (uint *)0x0;
                local_138 = (uint *)0x0;
              }
              puVar17[0xe] = (uint)local_138;
              puVar17[0xf] = local_138._4_4_;
              puVar17[0x10] = (uint)uStack_130;
              puVar17[0x11] = uStack_130._4_4_;
              *(uint **)(puVar17 + 0x12) = puStack_128;
            }
            uVar24 = CONCAT44(uVar25,0xffffffff);
            iVar4 = FUN_141592950(puVar22,L"ValueChanges=",1,0,uVar24);
            iVar16 = iVar14;
            if (iVar4 != -1) {
              uVar24 = CONCAT44((int)(uVar24 >> 0x20),iVar4);
              uVar3 = FUN_141592950(puVar22,&DAT_144cff4d4,0,0,uVar24);
              iVar4 = *(int *)(puVar22 + 1);
              uVar11 = uVar3 + 0x7fffffff;
              uVar20 = iVar4 - 1;
              if (iVar4 == 0) {
                uVar20 = 0;
              }
              uVar15 = iVar4 - 1;
              if (uVar3 < uVar20) {
                uVar20 = uVar3;
              }
              if (iVar4 == 0) {
                uVar15 = 0;
              }
              uVar3 = uVar20;
              if ((uVar20 <= uVar11) && (uVar3 = uVar15, uVar11 < uVar15)) {
                uVar3 = uVar11;
              }
              if (iVar4 == 0) {
                puVar23 = &DAT_143f3eda8;
              }
              else {
                puVar23 = (undefined2 *)*puVar22;
              }
              iVar4 = uVar3 - uVar20;
              local_b0 = (wchar_t *)0x0;
              pwVar19 = (wchar_t *)0x0;
              local_a4 = 0;
              local_a8 = iVar4 + 1;
              if (iVar4 == 0) {
                local_a8 = 0;
              }
              if ((0 < local_a8) &&
                 (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b0,0), pwVar19 = local_b0,
                 0 < local_a8)) {
                wcsncpy(local_b0,puVar23 + (int)uVar20,(longlong)iVar4);
                pwVar19[iVar4] = L'\0';
              }
              lVar8 = FCoreRedirect::ParseValueChanges(puVar17,pwVar19);
              lVar12 = local_158;
              if (lVar8 == 0) {
                iVar16 = iVar14 + -1;
                _Dst = (void *)((longlong)iVar16 * 0xa0 + local_158);
                *(undefined4 *)((longlong)_Dst + 0x98) = 0;
                if (*(longlong *)((longlong)_Dst + 0x90) != 0) {
                  FMemory::Free();
                }
                TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ::Empty((longlong)_Dst + 0x50,0);
                if (*(longlong *)((longlong)_Dst + 0x70) != 0) {
                  FMemory::Free();
                }
                if (*(longlong *)((longlong)_Dst + 0x50) != 0) {
                  FMemory::Free();
                }
                iVar4 = (iVar14 - iVar16) + -1;
                if (iVar4 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            (_Dst,(void *)((longlong)iVar14 * 0xa0 + lVar12),(longlong)iVar4 * 0xa0)
                  ;
                }
                local_150 = CONCAT44(local_150._4_4_,iVar16);
                TArray<FRemnantQuestEntityInfo,FDefaultAllocator>::ResizeShrink(&local_158);
                iVar16 = (int)local_150;
              }
              if (pwVar19 != (wchar_t *)0x0) {
                FMemory::Free(pwVar19);
              }
            }
          }
          if (local_148 != 0) {
            FMemory::Free();
          }
          if (local_a0[0] != 0) {
            FMemory::Free();
          }
          if (local_168 != (char *)0x0) {
            FMemory::Free();
          }
          uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_70 & ~uStack_80._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
          uVar20 = uStack_70._4_4_;
        } while ((int)uStack_70._4_4_ < (int)local_78[6]);
        if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
          TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
          ::ConditionalRehash(local_58,local_58[2] - local_58[0xd],1);
        }
      }
      bVar2 = FCoreRedirects::AddRedirectList(&local_158,param_1);
      TArray<FCoreRedirect,FDefaultAllocator>::~TArray<FCoreRedirect,FDefaultAllocator>(&local_158);
      return (ulonglong)bVar2;
    }
  }
  return uVar9 & 0xffffffffffffff00;
}



// FUNCTION 1417208f0 Realloc body=92 status=ok
// SIG undefined Realloc(void)

void FUntypedBulkData::Realloc(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  *(int *)((longlong)param_1 + 0xc) = param_2;
  iVar1 = (**(code **)(*param_1 + 8))();
  if (iVar1 * param_2 != 0) {
    lVar2 = FMemory::Realloc(param_1[4],(longlong)(iVar1 * param_2),
                             *(undefined4 *)((longlong)param_1 + 0x1c));
    param_1[4] = lVar2;
    *(undefined1 *)(param_1 + 5) = 1;
    return;
  }
  FMemory::Free(param_1[4]);
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



// FUNCTION 141720950 Reallocate body=59 status=ok
// SIG undefined Reallocate(void)

void FUntypedBulkData::FAllocatedPtr::Reallocate(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FMemory::Realloc(*param_1,(longlong)param_2);
    *param_1 = uVar1;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  FMemory::Free(*param_1);
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



// FUNCTION 141720990 RedirectName body=788 status=ok
// SIG undefined RedirectName(void)

longlong * FCoreRedirect::RedirectName(uint *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined8 local_res8;
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38 [2];
  
  puVar6 = &DAT_143f3eda8;
  *param_2 = *param_3;
  lVar1 = *(longlong *)(param_1 + 8);
  param_2[1] = param_3[1];
  param_2[2] = param_3[2];
  if (*(longlong *)(param_1 + 2) != lVar1) {
    if ((*param_1 >> 0x12 & 1) == 0) {
      *param_2 = lVar1;
    }
    else {
      puVar2 = (undefined8 *)FName::ToString(param_1 + 8,local_38);
      if (*(int *)(puVar2 + 1) == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = (undefined2 *)*puVar2;
      }
      puVar2 = (undefined8 *)FName::ToString(param_1 + 2,local_48);
      if (*(int *)(puVar2 + 1) == 0) {
        puVar5 = &DAT_143f3eda8;
      }
      else {
        puVar5 = (undefined2 *)*puVar2;
      }
      uVar3 = FName::ToString(param_3,local_58);
      puVar2 = (undefined8 *)FString::Replace(uVar3,local_68,puVar5,puVar7,1);
      if (*(int *)(puVar2 + 1) == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = (undefined2 *)*puVar2;
      }
      plVar4 = (longlong *)FName::FName(&local_res8,puVar7);
      *param_2 = *plVar4;
      if (local_68[0] != 0) {
        FMemory::Free();
      }
      if (local_58[0] != 0) {
        FMemory::Free();
      }
      if (local_48[0] != 0) {
        FMemory::Free();
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
    }
  }
  if ((*(longlong *)(param_1 + 4) != *(longlong *)(param_1 + 10)) ||
     ((local_res8 = 0, *(longlong *)(param_1 + 0xc) != 0 &&
      (local_res8 = 0, *(longlong *)(param_1 + 8) != 0)))) {
    if ((*param_1 >> 0x12 & 1) == 0) {
      param_2[1] = *(longlong *)(param_1 + 10);
    }
    else {
      puVar2 = (undefined8 *)FName::ToString(param_1 + 10,local_68);
      if (*(int *)(puVar2 + 1) == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = (undefined2 *)*puVar2;
      }
      puVar2 = (undefined8 *)FName::ToString(param_1 + 4,local_58);
      if (*(int *)(puVar2 + 1) == 0) {
        puVar5 = &DAT_143f3eda8;
      }
      else {
        puVar5 = (undefined2 *)*puVar2;
      }
      uVar3 = FName::ToString(param_3 + 1,local_48);
      puVar2 = (undefined8 *)FString::Replace(uVar3,local_38,puVar5,puVar7,1);
      if (*(int *)(puVar2 + 1) == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = (undefined2 *)*puVar2;
      }
      plVar4 = (longlong *)FName::FName(&local_res8,puVar7,1);
      param_2[1] = *plVar4;
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      if (local_48[0] != 0) {
        FMemory::Free();
      }
      if (local_58[0] != 0) {
        FMemory::Free();
      }
      if (local_68[0] != 0) {
        FMemory::Free();
      }
    }
  }
  if (*(longlong *)(param_1 + 6) != *(longlong *)(param_1 + 0xc)) {
    if ((*param_1 >> 0x12 & 1) == 0) {
      param_2[2] = *(longlong *)(param_1 + 0xc);
    }
    else {
      puVar2 = (undefined8 *)FName::ToString(param_1 + 0xc,local_68);
      if (*(int *)(puVar2 + 1) == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = (undefined2 *)*puVar2;
      }
      puVar2 = (undefined8 *)FName::ToString(param_1 + 6,local_58);
      if (*(int *)(puVar2 + 1) == 0) {
        puVar5 = &DAT_143f3eda8;
      }
      else {
        puVar5 = (undefined2 *)*puVar2;
      }
      uVar3 = FName::ToString(param_3 + 2,local_48);
      puVar2 = (undefined8 *)FString::Replace(uVar3,local_38,puVar5,puVar7,1);
      if (*(int *)(puVar2 + 1) != 0) {
        puVar6 = (undefined2 *)*puVar2;
      }
      plVar4 = (longlong *)FName::FName(&local_res8,puVar6,1);
      param_2[2] = *plVar4;
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      if (local_48[0] != 0) {
        FMemory::Free();
      }
      if (local_58[0] != 0) {
        FMemory::Free();
      }
      if (local_68[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return param_2;
}



// FUNCTION 141720cb0 FUN_141720cb0 body=782 status=ok
// SIG undefined FUN_141720cb0(void)

undefined8 FUN_141720cb0(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  longlong *local_res18;
  longlong *local_res20;
  longlong local_78;
  longlong local_60;
  undefined8 local_58;
  undefined1 local_50 [24];
  
  lVar19 = *param_2;
  uVar3 = *(undefined4 *)((longlong)param_2 + 4);
  lVar1 = param_2[1];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  iVar13 = 0;
  *(int *)param_3 = (int)lVar19;
  *(undefined4 *)((longlong)param_3 + 4) = uVar3;
  *(int *)(param_3 + 1) = (int)lVar1;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar4;
  lVar1 = param_2[2];
  param_3[2] = lVar1;
  local_60 = 0;
  local_58 = 0;
  local_res20 = param_4;
  cVar6 = FUN_14171bb60((int)lVar19,lVar1,&local_60);
  if (cVar6 != '\0') {
    local_res18 = param_2;
    AlgoImpl::
    IntroSortInternal<FCoreRedirect_const_*,FIdentityFunctor,TDereferenceWrapper<FCoreRedirect_const_*,<lambda_309e34026e113ad4402ec395f84cd26c>_>_>
              (local_60,(longlong)(int)local_58,(ulonglong)param_2 & 0xff,&local_res18);
    local_res18 = (longlong *)((ulonglong)local_res18 & 0xffffffff00000000);
    if (0 < (int)local_58) {
      local_78 = 0;
      do {
        puVar2 = *(uint **)(local_60 + local_78);
        if ((puVar2 != (uint *)0x0) &&
           (cVar6 = FCoreRedirectObjectName::Matches
                              (puVar2 + 2,param_3,*puVar2 >> 0x12 & 0xffffff01), cVar6 != '\0')) {
          if ((param_4 != (longlong *)0x0) &&
             (((0 < (int)(puVar2[0x16] - puVar2[0x21]) || (*(longlong *)(puVar2 + 0xe) != 0)) ||
              (*(longlong *)(puVar2 + 0x12) != 0)))) {
            lVar1 = *param_4;
            if (lVar1 == 0) {
              *param_4 = (longlong)puVar2;
            }
            else if (*(uint *)(lVar1 + 0x58) == puVar2[0x16]) {
              iVar13 = 0;
              if (0 < (int)*(uint *)(lVar1 + 0x58)) {
                lVar19 = 0;
                do {
                  uVar17 = 1 << ((byte)iVar13 & 0x1f);
                  iVar7 = iVar13;
                  if (iVar13 < 0) {
                    iVar7 = iVar13 + 0x1f;
                  }
                  lVar8 = *(longlong *)(lVar1 + 0x70);
                  if (*(longlong *)(lVar1 + 0x70) == 0) {
                    lVar8 = lVar1 + 0x60;
                  }
                  puVar10 = *(uint **)(puVar2 + 0x1c);
                  if (*(uint **)(puVar2 + 0x1c) == (uint *)0x0) {
                    puVar10 = puVar2 + 0x18;
                  }
                  uVar18 = *(uint *)(lVar8 + (longlong)(iVar7 >> 5) * 4) & uVar17;
                  param_4 = local_res20;
                  if ((uVar18 != 0) != ((puVar10[iVar7 >> 5] & uVar17) != 0)) break;
                  if (uVar18 != 0) {
                    puVar16 = (undefined8 *)(*(longlong *)(puVar2 + 0x14) + lVar19);
                    puVar15 = (undefined8 *)(*(longlong *)(lVar1 + 0x50) + lVar19);
                    if (*(int *)(puVar16 + 1) == 0) {
                      puVar12 = &DAT_143f3eda8;
                    }
                    else {
                      puVar12 = (undefined2 *)*puVar16;
                    }
                    if (*(int *)(puVar15 + 1) == 0) {
                      puVar11 = &DAT_143f3eda8;
                    }
                    else {
                      puVar11 = (undefined2 *)*puVar15;
                    }
                    iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar12);
                    param_4 = local_res20;
                    if (iVar7 != 0) break;
                    if (*(int *)(puVar16 + 3) == 0) {
                      puVar12 = &DAT_143f3eda8;
                    }
                    else {
                      puVar12 = (undefined2 *)puVar16[2];
                    }
                    if (*(int *)(puVar15 + 3) == 0) {
                      puVar11 = &DAT_143f3eda8;
                    }
                    else {
                      puVar11 = (undefined2 *)puVar15[2];
                    }
                    iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar12);
                    param_4 = local_res20;
                    if (iVar7 != 0) break;
                  }
                  iVar13 = iVar13 + 1;
                  lVar19 = lVar19 + 0x28;
                  param_4 = local_res20;
                } while (iVar13 < *(int *)(lVar1 + 0x58));
              }
              iVar13 = (int)local_res18;
            }
          }
          puVar9 = (undefined4 *)FCoreRedirect::RedirectName(puVar2,local_50,param_3);
          uVar3 = puVar9[1];
          uVar4 = puVar9[2];
          uVar5 = puVar9[3];
          *(undefined4 *)param_3 = *puVar9;
          *(undefined4 *)((longlong)param_3 + 4) = uVar3;
          *(undefined4 *)(param_3 + 1) = uVar4;
          *(undefined4 *)((longlong)param_3 + 0xc) = uVar5;
          param_3[2] = *(longlong *)(puVar9 + 4);
        }
        iVar13 = iVar13 + 1;
        local_78 = local_78 + 8;
        local_res18 = (longlong *)CONCAT44(local_res18._4_4_,iVar13);
      } while (iVar13 < (int)local_58);
    }
  }
  if (((*param_3 == *param_2) && (param_3[1] == param_2[1])) && (param_3[2] == param_2[2])) {
    uVar14 = 0;
  }
  else {
    uVar14 = 1;
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  return uVar14;
}



// FUNCTION 141720fe0 RegisterFunction body=119 status=ok
// SIG undefined RegisterFunction(void)

void FNativeFunctionRegistrar::RegisterFunction
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  FName::FName(&local_res8,param_2,1);
  iVar1 = *(int *)(param_1 + 0x1f0);
  *(int *)(param_1 + 0x1f0) = iVar1 + 1;
  if (*(int *)(param_1 + 500) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x1e8,iVar1);
  }
  puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x1e8));
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = local_res8;
    puVar2[1] = param_3;
  }
  return;
}



// FUNCTION 141721060 RegisterFunctions body=466 status=ok
// SIG undefined RegisterFunctions(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FNativeFunctionRegistrar::RegisterFunctions(longlong param_1,longlong *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_188 [32];
  undefined1 *local_168;
  undefined8 local_160;
  undefined1 local_158 [256];
  undefined1 *local_58;
  undefined1 *local_50;
  int local_48;
  ulonglong local_38;
  ulonglong uVar7;
  
  if (param_3 != 0) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_188;
    do {
      lVar3 = *param_2;
      local_58 = (undefined1 *)0x0;
      if (lVar3 == 0) {
        local_48 = 0;
        local_50 = (undefined1 *)0x0;
      }
      else {
        uVar6 = 0xffffffffffffffff;
        do {
          uVar7 = uVar6;
          uVar6 = uVar7 + 1;
        } while (*(char *)(lVar3 + uVar6) != '\0');
        local_168 = (undefined1 *)((ulonglong)local_168 & 0xffffffff00000000);
        FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
                  (&local_168,0x7fffffff,lVar3,uVar6 & 0xffffffff);
        local_48 = (int)local_168;
        uVar1 = (int)local_168 + 1;
        if (uVar1 < 0x81) {
          if (local_58 != (undefined1 *)0x0) {
            lVar5 = 0;
LAB_141721129:
            local_58 = (undefined1 *)FMemory::Realloc(local_58,lVar5,0);
          }
        }
        else if ((local_58 != (undefined1 *)0x0) || (uVar1 != 0)) {
          lVar5 = (longlong)(int)uVar1 * 2;
          goto LAB_141721129;
        }
        local_168 = local_158;
        if (local_58 != (undefined1 *)0x0) {
          local_168 = local_58;
        }
        local_50 = local_168;
        FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(&local_168,uVar1,lVar3,(int)uVar7 + 2);
      }
      lVar3 = param_2[1];
      FName::FName(&local_160,local_50,1);
      iVar2 = *(int *)(param_1 + 0x1f0);
      *(int *)(param_1 + 0x1f0) = iVar2 + 1;
      if (*(int *)(param_1 + 500) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0x1e8),iVar2);
      }
      puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x1e8));
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = local_160;
        puVar4[1] = lVar3;
      }
      if (local_58 != (undefined1 *)0x0) {
        FMemory::Free();
      }
      param_2 = param_2 + 2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 141721240 FUN_141721240 body=1679 status=ok
// SIG undefined FUN_141721240(void)

void FUN_141721240(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xa0 + *param_1;
  if (lVar2 != 0) {
    local_28 = 0;
    local_20 = 0x16;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"/Script/Slate.Anchors",0x2c);
    local_18 = 0;
    local_10 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,L"Anchors",0x10);
    FCoreRedirect::FCoreRedirect(lVar2,4,&local_18,&local_28);
  }
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xa0 + *param_1;
  if (lVar2 != 0) {
    local_18 = 0;
    local_10 = 0x37;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy
              (local_18,L"/Script/AnimGraphRuntime.AnimNode_BoneDrivenController",0x6e);
    local_28 = 0;
    local_20 = 0x1e;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"AnimNode_BoneDrivenController",0x3c);
    FCoreRedirect::FCoreRedirect(lVar2,4,&local_28,&local_18);
  }
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xa0 + *param_1;
  if (lVar2 != 0) {
    local_18 = 0;
    local_10 = 0x2b;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,L"/Script/AnimGraphRuntime.AnimNode_CopyBone",0x56);
    local_28 = 0;
    local_20 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"AnimNode_CopyBone",0x24);
    FCoreRedirect::FCoreRedirect(lVar2,4,&local_28,&local_18);
  }
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xa0 + *param_1;
  if (lVar2 != 0) {
    local_18 = 0;
    local_10 = 0x29;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,L"/Script/AnimGraphRuntime.AnimNode_LookAt",0x52);
    local_28 = 0;
    local_20 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"AnimNode_LookAt",0x20);
    FCoreRedirect::FCoreRedirect(lVar2,4,&local_28,&local_18);
  }
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xa0 + *param_1;
  if (lVar2 != 0) {
    local_18 = 0;
    local_10 = 0x2d;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,L"/Script/AnimGraphRuntime.AnimNode_ModifyBone",0x5a);
    local_28 = 0;
    local_20 = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"AnimNode_ModifyBone",0x28);
    FCoreRedirect::FCoreRedirect(lVar2,4,&local_28,&local_18);
  }
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xa0 + *param_1;
  if (lVar2 != 0) {
    local_18 = 0;
    local_10 = 0x2d;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,L"/Script/AnimGraphRuntime.AnimNode_SpringBone",0x5a);
    local_28 = 0;
    local_20 = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"AnimNode_SpringBone",0x28);
    FCoreRedirect::FCoreRedirect(lVar2,4,&local_28,&local_18);
  }
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xa0 + *param_1;
  if (lVar2 != 0) {
    local_18 = 0;
    local_10 = 0x2c;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,L"/Script/AnimGraphRuntime.AnimNode_TwoBoneIK",0x58);
    local_28 = 0;
    local_20 = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"AnimNode_TwoBoneIK",0x26);
    FCoreRedirect::FCoreRedirect(lVar2,4,&local_28,&local_18);
  }
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xa0 + *param_1;
  if (lVar2 != 0) {
    local_18 = 0;
    local_10 = 0x28;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,L"/Script/MovieScene.MovieSceneEditorData",0x50);
    local_28 = 0;
    local_20 = 0x15;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"MovieSceneEditorData",0x2a);
    FCoreRedirect::FCoreRedirect(lVar2,4,&local_28,&local_18);
  }
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xa0 + *param_1;
  if (lVar2 != 0) {
    local_18 = 0;
    local_10 = 0x29;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,L"/Script/MovieScene.MovieScenePossessable",0x52);
    local_28 = 0;
    local_20 = 0x16;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"MovieScenePossessable",0x2c);
    FCoreRedirect::FCoreRedirect(lVar2,4,&local_28,&local_18);
  }
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xa0 + *param_1;
  if (lVar2 != 0) {
    local_18 = 0;
    local_10 = 0x27;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,L"/Script/MovieScene.MovieSceneSpawnable",0x4e);
    local_28 = 0;
    local_20 = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"MovieSceneSpawnable",0x28);
    FCoreRedirect::FCoreRedirect(lVar2,4,&local_28,&local_18);
  }
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xa0 + *param_1;
  if (lVar2 != 0) {
    local_18 = 0;
    local_10 = 0x21;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,L"/Script/SlateCore.ECheckBoxState",0x42);
    local_28 = 0;
    local_20 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"ECheckBoxState",0x1e);
    FCoreRedirect::FCoreRedirect(lVar2,8,&local_28,&local_18);
  }
  return;
}



// FUNCTION 1417218d0 ReinitializeBaseChainArray body=181 status=ok
// SIG undefined ReinitializeBaseChainArray(void)

void FClassBaseChain::ReinitializeBaseChainArray(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  
  FMemory::operator_delete(*param_1);
  uVar7 = 0;
  plVar2 = param_1 + -0x11;
  plVar6 = (longlong *)0x0;
  for (plVar1 = plVar2; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[6]) {
    uVar7 = (int)plVar6 + 1;
    plVar6 = (longlong *)(ulonglong)uVar7;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (longlong)(int)uVar7;
  uVar4 = SUB168(ZEXT816(8) * auVar3,0);
  if (SUB168(ZEXT816(8) * auVar3,8) != 0) {
    uVar4 = 0xffffffffffffffff;
  }
  lVar5 = operator_new(uVar4);
  plVar1 = (longlong *)(lVar5 + (longlong)(int)uVar7 * 8);
  for (; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[6]) {
    plVar1 = plVar1 + -1;
    plVar6 = plVar2 + 0x11;
    if (plVar2 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    *plVar1 = (longlong)plVar6;
  }
  *param_1 = lVar5;
  *(uint *)(param_1 + 1) = uVar7 - 1;
  return;
}



// FUNCTION 141721990 RemoveAnnotation body=101 status=ok
// SIG undefined RemoveAnnotation(void)

void FUObjectAnnotationSparse<FDuplicatedObject,0>::RemoveAnnotation
               (longlong param_1,undefined8 param_2)

{
  BOOL BVar1;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x80) = param_2;
  *(undefined8 *)(param_1 + 0x88) = 0;
  TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 8,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001417219ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  return;
}



// FUNCTION 141721a00 RemoveBulkData body=43 status=ok
// SIG undefined RemoveBulkData(void)

void FUntypedBulkData::RemoveBulkData(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  FMemory::Free(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 141721a30 Rename body=156 status=ok
// SIG undefined Rename(void)

char UClass::Rename(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined1 local_28 [8];
  longlong local_20 [3];
  
  cVar1 = FUN_14175ed80();
  if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0xf8) != 0)) {
    uVar2 = GetDefaultObjectName(param_1,local_28);
    puVar3 = (undefined8 *)FName::ToString(uVar2,local_20);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*puVar3;
    }
    (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x138))
              (*(longlong **)(param_1 + 0xf8),puVar4,param_3,param_4);
    if (local_20[0] != 0) {
      FMemory::Free();
    }
  }
  return cVar1;
}



// FUNCTION 141721ad0 ResetAsyncData body=135 status=ok
// SIG undefined ResetAsyncData(void)

void FUntypedBulkData::ResetAsyncData(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x48) != &local_18) {
    *(undefined8 *)(param_1 + 0x48) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x50,&local_10);
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
  }
  return;
}



// FUNCTION 141721b60 ResizeShrink body=168 status=ok
// SIG undefined ResizeShrink(void)

ulonglong TArray<FRemnantQuestEntityInfo,FDefaultAllocator>::ResizeShrink(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar4 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar5 - iVar4);
  if ((0x3fff < uVar2 * 0xa0) || (uVar2 = (ulonglong)(uint)(iVar5 * 2), iVar4 * 3 < iVar5 * 2)) {
    if (0x40 < (uint)(iVar5 - iVar4)) {
      if (0 < iVar4) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar4 * 0xa0,0);
        iVar5 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        uVar2 = SUB168(ZEXT816(0xcccccccccccccccd) * auVar1,0);
        iVar4 = (int)(uVar3 / 0xa0);
      }
      goto LAB_141721bd6;
    }
    if (iVar4 == 0) goto LAB_141721bd6;
  }
  iVar4 = iVar5;
LAB_141721bd6:
  if (iVar4 != iVar5) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0xa0,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 141721c10 Restore body=243 status=ok
// SIG undefined Restore(void)

void FRestoreClassInfo::Restore(longlong param_1)

{
  uint *puVar1;
  ulonglong *puVar2;
  int iVar3;
  longlong lVar4;
  void *_Src;
  undefined8 *puVar5;
  
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xc0) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 200) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xf8) = *(undefined8 *)(param_1 + 0x20);
  puVar1 = (uint *)(*(longlong *)(param_1 + 8) + 0xb4);
  *puVar1 = *puVar1 | *(uint *)(param_1 + 0x28);
  puVar2 = (ulonglong *)(*(longlong *)(param_1 + 8) + 0xb8);
  *puVar2 = *puVar2 | *(ulonglong *)(param_1 + 0x30);
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x98) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xa0) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xa8) = *(undefined8 *)(param_1 + 0x48);
  lVar4 = *(longlong *)(param_1 + 8);
  puVar5 = (undefined8 *)(lVar4 + 0x1e8);
  if (puVar5 != (undefined8 *)(param_1 + 0x50)) {
    _Src = *(void **)(param_1 + 0x50);
    iVar3 = *(int *)(param_1 + 0x58);
    *(int *)(lVar4 + 0x1f0) = iVar3;
    if ((iVar3 == 0) && (*(int *)(lVar4 + 500) == 0)) {
      *(undefined4 *)(lVar4 + 500) = 0;
      return;
    }
    TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar5,iVar3);
    ::_guard_xfg_dispatch_icall_nop((void *)*puVar5,_Src,(longlong)iVar3 << 4);
  }
  return;
}



// FUNCTION 141721d10 FUN_141721d10 body=245 status=ok
// SIG undefined FUN_141721d10(void)

undefined8 FUN_141721d10(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 local_b8;
  undefined8 uStack_b0;
  code *local_a8 [2];
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined4 local_68;
  code *local_58 [6];
  undefined8 local_28;
  undefined4 local_18;
  
  FUN_1417135c0(param_1 + 0xc,param_1 + 2);
  local_58[0] = AK::MemoryMgr::StartProfileThreadUsage;
  local_28 = 0;
  local_18 = 0;
  local_b8 = FUN_14171a770(param_1 + 0xf);
  local_78 = 0;
  local_68 = 0;
  uStack_b0 = param_1;
  puVar6 = (undefined8 *)FUN_140438ef0(0x18,local_98);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar6 + 1) = (undefined4)local_b8;
    *(undefined4 *)((longlong)puVar6 + 0xc) = local_b8._4_4_;
    *(undefined4 *)(puVar6 + 2) = (undefined4)uStack_b0;
    *(undefined4 *)((longlong)puVar6 + 0x14) = uStack_b0._4_4_;
  }
  local_a8[0] = UE4Function_Private::
                TFunctionRefCaller<<lambda_95246997226aefcd78e735d32b755d1a>,void___cdecl(void)>::
                Call;
  FUN_1408edc50(&local_b8,0,local_a8,local_58);
  plVar5 = uStack_b0;
  if (uStack_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_b0 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*uStack_b0)(uStack_b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*uStack_b0 + 8))(uStack_b0,1);
      }
    }
  }
  return 0;
}



// FUNCTION 141721e10 FUN_141721e10 body=8 status=ok
// SIG undefined FUN_141721e10(void)

void FUN_141721e10(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xa0) = param_2;
  return;
}



// FUNCTION 141721e20 Serialize body=78 status=ok
// SIG undefined Serialize(void)

void FDuplicateDataReader::Serialize(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = FLargeMemoryData::Read
                    (*(undefined8 *)(param_1 + 0x98),param_2,*(undefined8 *)(param_1 + 0xa0),param_3
                    );
  if (cVar1 != '\0') {
    *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0xa0) + param_3;
    return;
  }
  FUN_141725c00(param_1);
  return;
}



// FUNCTION 141721e70 Serialize body=60 status=ok
// SIG undefined Serialize(void)

void FDuplicateDataWriter::Serialize(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = FLargeMemoryData::Write
                    (*(undefined8 *)(param_1 + 0x98),param_2,*(undefined8 *)(param_1 + 0xa0),param_3
                    );
  if (cVar1 != '\0') {
    *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0xa0) + param_3;
  }
  return;
}



// FUNCTION 141721eb0 Serialize body=939 status=ok
// SIG undefined Serialize(void)

void FFeedbackContextImportDefaults::Serialize
               (longlong param_1,undefined8 param_2,char param_3,undefined8 param_4)

{
  void *_Dst;
  char cVar1;
  int iVar2;
  BOOL BVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  void *_Src;
  void *local_78;
  void *local_70;
  int local_68;
  int local_64;
  void *local_60;
  int local_58;
  int local_54;
  longlong local_50 [3];
  
  if (1 < (byte)(param_3 - 2U)) goto LAB_1417221fe;
  if ((*(char *)(param_1 + 0x10) != '\0') && (param_3 == '\x03')) {
    param_3 = '\x02';
  }
  iVar9 = 0;
  local_78 = (void *)0x0;
  if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
    puVar4 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x80) + 8))();
    local_70 = (void *)*puVar4;
    iVar9 = *(int *)(puVar4 + 1);
    *puVar4 = 0;
    local_68 = *(int *)(puVar4 + 1);
    local_64 = *(int *)((longlong)puVar4 + 0xc);
    puVar4[1] = 0;
    iVar8 = local_68;
    if (local_64 < (int)((4 - (uint)(iVar9 != 0)) + local_68)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_70);
      iVar8 = local_68;
    }
    local_68 = (4 - (uint)(iVar8 != 0)) + iVar8;
    if (local_64 < local_68) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70,iVar8);
    }
    iVar9 = local_68;
    local_78 = local_70;
    lVar7 = (longlong)iVar8 - (ulonglong)(iVar8 != 0);
    *(undefined4 *)((longlong)local_70 + lVar7 * 2) = 0x3a0020;
    *(undefined2 *)((longlong)local_70 + lVar7 * 2 + 4) = 0x20;
    *(undefined2 *)((longlong)local_70 + lVar7 * 2 + 6) = 0;
    if (local_60 != (void *)0x0) {
      FMemory::Free();
    }
  }
  puVar4 = (undefined8 *)FUN_1416704c0(local_50,param_3,param_4,param_2,0,0xbff0000000000000);
  if (iVar9 < 2) {
    _Src = (void *)*puVar4;
    *puVar4 = 0;
    iVar9 = *(int *)(puVar4 + 1);
    puVar4[1] = 0;
  }
  else {
    iVar8 = *(int *)(puVar4 + 1) + -1;
    if (*(int *)(puVar4 + 1) == 0) {
      iVar8 = 0;
    }
    if ((iVar9 != 0) || (iVar2 = 1, iVar8 == 0)) {
      iVar2 = 0;
    }
    local_60 = (void *)0x0;
    _Src = (void *)0x0;
    local_58 = iVar9;
    if ((iVar9 == 0) && (iVar8 + iVar2 == 0)) {
      local_54 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_60,iVar9 + iVar8 + iVar2,0);
      _Src = local_60;
      ::_guard_xfg_dispatch_icall_nop(local_60,local_78,(longlong)iVar9 * 2);
    }
    iVar2 = local_58;
    local_70 = (void *)*puVar4;
    iVar9 = local_58;
    if (iVar8 != 0) {
      lVar7 = (longlong)local_58;
      local_58 = iVar8 + (uint)(local_58 == 0) + local_58;
      if (local_54 < local_58) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,iVar2);
        _Src = local_60;
      }
      iVar9 = local_58;
      _Dst = (void *)((longlong)_Src + (lVar7 - (ulonglong)(iVar2 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_70,(longlong)iVar8 * 2);
      *(undefined2 *)((longlong)_Dst + (longlong)iVar8 * 2) = 0;
    }
  }
  if (local_50[0] != 0) {
    FMemory::Free();
  }
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  if (param_3 == '\x02') {
    if (BVar3 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
    }
    iVar8 = *(int *)(param_1 + 0x30);
    *(int *)(param_1 + 0x30) = iVar8 + 1;
    if (*(int *)(param_1 + 0x34) < iVar8 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x28,iVar8);
    }
    puVar4 = (undefined8 *)((longlong)iVar8 * 0x10 + *(longlong *)(param_1 + 0x28));
    *puVar4 = 0;
    *(int *)(puVar4 + 1) = iVar9;
    if (iVar9 == 0) {
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    }
    else {
LAB_14172219e:
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar4,iVar9,0);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar4,_Src,(longlong)iVar9 * 2);
    }
  }
  else {
    if (BVar3 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
    }
    iVar8 = *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x20) = iVar8 + 1;
    if (*(int *)(param_1 + 0x24) < iVar8 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x18,iVar8);
    }
    puVar4 = (undefined8 *)((longlong)iVar8 * 0x10 + *(longlong *)(param_1 + 0x18));
    *puVar4 = 0;
    *(int *)(puVar4 + 1) = iVar9;
    if (iVar9 != 0) goto LAB_14172219e;
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free();
  }
LAB_1417221fe:
  if (DAT_1468b6158 != (longlong *)0x0) {
    (**(code **)(*DAT_1468b6158 + 0x10))(DAT_1468b6158,param_2,param_3,param_4);
  }
  uVar5 = FUN_141672640();
  cVar1 = FOutputDeviceRedirector::IsRedirectingTo(uVar5,param_1);
  if (cVar1 == '\0') {
    plVar6 = (longlong *)FUN_141672640();
    (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 141722260 FUN_141722260 body=883 status=ok
// SIG undefined FUN_141722260(void)

void FUN_141722260(longlong *param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                  byte param_5,undefined4 param_6)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int local_res10 [2];
  undefined8 local_res18;
  int local_68;
  longlong local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 *local_48;
  longlong local_40;
  
  puVar12 = (undefined8 *)0x0;
  local_res10[0] = 0;
  local_res18 = param_3;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    plVar13 = (longlong *)*param_1;
    plVar11 = plVar13 + (longlong)(int)param_1[1] * 2;
    for (; plVar13 != plVar11; plVar13 = plVar13 + 2) {
      plVar9 = (longlong *)*param_4;
      plVar4 = (longlong *)plVar13[1];
      plVar1 = plVar9 + (int)param_4[1];
      for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
        if (*plVar9 == *plVar13) {
          iVar5 = *(int *)((longlong)plVar4 + 0xc);
          iVar6 = (**(code **)(*plVar4 + 8))(plVar4);
          if (0 < iVar6 * iVar5) {
            local_res10[0] = local_res10[0] + 1;
          }
          break;
        }
      }
    }
    plVar13 = (longlong *)param_2[1];
    if ((int *)plVar13[1] < (int *)*plVar13 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res10,4);
      }
    }
    else {
      local_res10[0] = *(int *)*plVar13;
      *plVar13 = *plVar13 + 4;
    }
    plVar13 = (longlong *)*param_1;
    plVar11 = plVar13 + (longlong)(int)param_1[1] * 2;
    for (; plVar13 != plVar11; plVar13 = plVar13 + 2) {
      plVar9 = (longlong *)*param_4;
      local_40 = *plVar13;
      plVar4 = (longlong *)plVar13[1];
      plVar1 = plVar9 + (int)param_4[1];
      for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
        if (*plVar9 == local_40) {
          iVar5 = *(int *)((longlong)plVar4 + 0xc);
          iVar6 = (**(code **)(*plVar4 + 8))(plVar4);
          if (0 < iVar6 * iVar5) {
            local_res10[0] = local_res10[0] + -1;
            (**(code **)(*param_2 + 0x40))(param_2,&local_40);
            uVar2 = *(uint *)(plVar4 + 1);
            *(uint *)(plVar4 + 1) = (uint)param_5 * 8 + 0x40 | uVar2;
            FUN_1417225e0(plVar4,param_2,local_res18,0xffffffff);
            *(uint *)(plVar4 + 1) = uVar2;
          }
          break;
        }
      }
    }
  }
  else {
    plVar13 = (longlong *)param_2[1];
    if ((int *)plVar13[1] < (int *)*plVar13 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res10,4);
      }
    }
    else {
      local_res10[0] = *(int *)*plVar13;
      *plVar13 = *plVar13 + 4;
    }
    local_68 = 0;
    if (0 < local_res10[0]) {
      do {
        local_60 = 0;
        (**(code **)(*param_2 + 0x40))(param_2,&local_60);
        lVar3 = *param_1;
        local_40 = local_60;
        local_58 = local_60;
        iVar5 = 0;
        puVar8 = puVar12;
        uVar10 = (longlong)(int)param_1[1];
        if ((int)param_1[1] != 0) {
          do {
            uVar14 = uVar10 >> 1;
            iVar5 = FName::Compare((uVar14 + (longlong)puVar8) * 0x10 + lVar3,&local_58);
            if (iVar5 < 0) {
              puVar8 = (undefined8 *)((ulonglong)((uint)uVar10 & 1) + uVar14 + (longlong)puVar8);
            }
            uVar10 = uVar14;
          } while (uVar14 != 0);
          iVar5 = (int)param_1[1];
        }
        uVar10 = (ulonglong)(int)puVar8;
        puVar7 = puVar12;
        if ((((uVar10 < (ulonglong)(longlong)iVar5) &&
             (iVar5 = FName::Compare(&local_58,uVar10 * 0x10 + *param_1), -1 < iVar5)) &&
            ((int)puVar8 != -1)) &&
           (puVar8 = (undefined8 *)(*param_1 + 8 + uVar10 * 0x10), puVar8 != (undefined8 *)0x0)) {
          puVar7 = (undefined8 *)*puVar8;
        }
        if (puVar7 == (undefined8 *)0x0) {
          puVar7 = (undefined8 *)FMemory::Malloc(0x70);
          puVar8 = puVar12;
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = &PTR__scalar_deleting_destructor__144d05fe8;
            puVar7[4] = 0;
            *(undefined1 *)(puVar7 + 5) = 0;
            puVar7[6] = 0;
            *(undefined1 *)(puVar7 + 7) = 0;
            puVar7[9] = 0;
            puVar7[10] = 0;
            puVar7[0xb] = 0;
            puVar7[0xc] = 0;
            *(undefined4 *)(puVar7 + 0xd) = 0xffffffff;
            *(undefined4 *)((longlong)puVar7 + 0x6c) = 0;
            puVar7[1] = 0;
            puVar7[2] = 0xffffffffffffffff;
            *(undefined4 *)(puVar7 + 3) = 0xffffffff;
            *(undefined4 *)((longlong)puVar7 + 0x1c) = 0;
            *(undefined4 *)(puVar7 + 8) = 0;
            FWeakObjectPtr::operator=(&local_50,0);
            *(undefined4 *)(puVar7 + 0xd) = local_50;
            *(undefined4 *)((longlong)puVar7 + 0x6c) = local_4c;
            *puVar7 = &PTR__scalar_deleting_destructor__143f48b90;
            puVar8 = puVar7;
          }
          local_48 = puVar8;
          TSortedMap<FName,void_(__cdecl*)(UAnimSequence_&),FDefaultAllocator,TLess<FName>_>::
          Emplace<FName_const_&,void_(__cdecl*const_&)(UAnimSequence_&)>
                    (param_1,&local_40,&local_48);
          puVar7 = local_48;
        }
        *(undefined4 *)((longlong)puVar7 + 0x1c) = param_6;
        FUN_1417225e0(puVar7,param_2,local_res18,0xffffffff);
        local_68 = local_68 + 1;
      } while (local_68 < local_res10[0]);
    }
  }
  return;
}



// FUNCTION 1417225e0 FUN_1417225e0 body=2169 status=ok
// SIG undefined FUN_1417225e0(void)

void FUN_1417225e0(longlong *param_1,longlong *param_2,longlong param_3,undefined4 param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 uVar15;
  wchar_t *pwVar16;
  byte bVar17;
  int iVar18;
  undefined2 *puVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong local_50 [2];
  longlong local_40;
  undefined8 local_38;
  
  if ((*(byte *)(param_2 + 5) & 0x40) == 0) {
    return;
  }
  if ((*(byte *)((longlong)param_2 + 0x2a) & 8) != 0) {
    return;
  }
  if ((*(byte *)((longlong)param_2 + 0x2a) & 0x40) != 0) {
    return;
  }
  local_50[0] = (**(code **)(*param_2 + 0x90))(param_2);
  puVar1 = (uint *)(param_1 + 1);
  puVar5 = *(uint **)param_2[1];
  if ((uint *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,puVar1,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,puVar1,4);
    }
  }
  else {
    *puVar1 = *puVar5;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = (undefined4 *)((longlong)param_1 + 0xc);
  puVar6 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar6 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,puVar2,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,puVar2,4);
    }
  }
  else {
    *puVar2 = *puVar6;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 2) == 0) {
      return;
    }
    *puVar1 = *puVar1 & 0xfffffffb;
    FUntypedBulkData::MakeSureBulkDataIsLoaded(param_1);
    local_40 = (**(code **)(*param_2 + 0x90))(param_2);
    plVar14 = param_1 + 3;
    *(undefined4 *)plVar14 = 0xffffffff;
    puVar2 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,plVar14,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,plVar14,4);
      }
    }
    else {
      *(undefined4 *)plVar14 = *puVar2;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    uVar12 = (**(code **)(*param_2 + 0x90))(param_2);
    param_1[2] = -1;
    plVar13 = param_1 + 2;
    FUN_1404c11e0(param_2,plVar13);
    lVar11 = (**(code **)(*param_2 + 0x88))(param_2);
    if ((lVar11 == 0) || (*(int *)(lVar11 + 0x98) != 2)) {
      lVar11 = 0;
    }
    if ((((*puVar1 & 0x40) == 0) && (lVar11 != 0)) && ((*(byte *)(param_2 + 5) & 8) == 0)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    cVar8 = FUN_1416fbbb0();
    if (((cVar8 != '\0') && (param_2[0xe] != 0)) && ((!bVar7 && ((*puVar1 & 0x400) == 0)))) {
      bVar7 = true;
    }
    iVar10 = -1;
    if (bVar7) {
      *puVar1 = *puVar1 & 0xfffffffe;
      lVar11 = (**(code **)(*param_2 + 0x90))(param_2);
      FUN_1417240a0(param_1,param_2,param_1[4]);
      iVar10 = (**(code **)(*param_2 + 0x90))(param_2);
      iVar10 = iVar10 - (int)lVar11;
      *plVar13 = lVar11;
    }
    else {
      plVar21 = (longlong *)(lVar11 + 0x3a0);
      *puVar1 = *puVar1 | 1;
      lVar20 = (longlong)*(int *)(lVar11 + 0x3a8);
      iVar9 = *(int *)(lVar11 + 0x3a8) + 1;
      *(int *)(lVar11 + 0x3a8) = iVar9;
      if (*(int *)(lVar11 + 0x3ac) < iVar9) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar21);
      }
      lVar11 = *plVar21;
      *(undefined8 *)(lVar11 + lVar20 * 0x28) = 0;
      *(undefined8 *)(lVar11 + 8 + lVar20 * 0x28) = 0;
      *(undefined8 *)(lVar11 + 0x10 + lVar20 * 0x28) = 0;
      *(undefined8 *)(lVar11 + 0x18 + lVar20 * 0x28) = 0;
      *(undefined8 *)(lVar11 + 0x20 + lVar20 * 0x28) = 0;
      lVar11 = *plVar21;
      *(undefined8 *)(lVar11 + lVar20 * 0x28) = uVar12;
      lVar11 = lVar11 + lVar20 * 0x28;
      *(longlong *)(lVar11 + 8) = local_40;
      *(longlong *)(lVar11 + 0x10) = local_50[0];
      uVar4 = *puVar1;
      *(longlong **)(lVar11 + 0x20) = param_1;
      *(uint *)(lVar11 + 0x18) = uVar4;
    }
    *(int *)plVar14 = iVar10;
    uVar15 = (**(code **)(*param_2 + 0x90))(param_2);
    (**(code **)(*param_2 + 0xa8))(param_2,local_50[0]);
    puVar5 = *(uint **)param_2[1];
    if ((uint *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,puVar1,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,puVar1,4);
      }
    }
    else {
      *puVar1 = *puVar5;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    (**(code **)(*param_2 + 0xa8))(param_2,local_40);
    puVar2 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,plVar14,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,plVar14,4);
      }
    }
    else {
      *(undefined4 *)plVar14 = *puVar2;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    (**(code **)(*param_2 + 0xa8))(param_2,uVar12);
    FUN_1404c11e0(param_2,plVar13);
    (**(code **)(*param_2 + 0xa8))(param_2,uVar15);
    return;
  }
  plVar14 = param_1 + 0xb;
  iVar10 = 0;
  if ((undefined *)*plVar14 != &DAT_144cff034) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)((longlong)param_1 + 100) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar14);
      iVar10 = (int)param_1[0xc];
    }
    *(int *)(param_1 + 0xc) = iVar10;
    if (*(int *)((longlong)param_1 + 100) < iVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar14);
    }
  }
  plVar13 = param_1 + 3;
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,plVar13,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,plVar13,4);
    }
  }
  else {
    *(undefined4 *)plVar13 = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_1404c11e0(param_2,param_1 + 2);
  bVar17 = ~(byte)*puVar1 & 1;
  if (((param_3 != 0) && (lVar11 = FUN_1417a53c0(param_3), lVar11 != 0)) && (bVar17 == 0)) {
    lVar11 = FUN_1417a53c0(param_3);
    param_1[2] = param_1[2] + *(longlong *)(lVar11 + 0x198);
  }
  lVar11 = (**(code **)(*param_2 + 0x118))(param_2);
  if ((*(byte *)((longlong)param_2 + 0x2a) & 4) == 0) {
LAB_1417228fd:
    if ((param_3 != 0) && (lVar11 = FUN_1417a53c0(param_3), lVar11 != 0)) {
      lVar11 = FUN_1417a53c0(param_3);
      FString::operator=(plVar14,lVar11 + 0x1e0);
    }
  }
  else if (param_3 != 0) {
    if (lVar11 != 0) {
      uVar12 = UObjectBaseUtility::GetOutermost(param_3);
      FWeakObjectPtr::operator=(param_1 + 0xd,uVar12);
      uVar12 = FWeakObjectPtr::Get(param_1 + 0xd);
      lVar11 = FLinkerLoad::FindExistingLinkerForPackage(uVar12);
      FString::operator=(plVar14,lVar11 + 0x1e0);
      if (bVar17 == 0) {
        if ((*puVar1 >> 0xb & 1) == 0) {
          if ((*puVar1 >> 8 & 1) == 0) {
            return;
          }
          local_40 = 0;
          local_38 = 7;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_40,0);
          pwVar16 = L".ubulk";
        }
        else {
          local_40 = 0;
          local_38 = 7;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_40,0);
          pwVar16 = L".uptnl";
        }
        FGenericPlatformString::Memcpy(local_40,pwVar16,0xe);
        uVar12 = FUN_141665540(local_50,plVar14,&local_40);
        FString::operator=(plVar14,uVar12);
        if (local_50[0] != 0) {
          FMemory::Free();
        }
        if (local_40 == 0) {
          return;
        }
        FMemory::Free();
        return;
      }
      cVar8 = FUN_141726bd0(param_1);
      if (cVar8 == '\0') {
        iVar10 = *(int *)((longlong)param_1 + 0xc);
        iVar9 = (**(code **)(*param_1 + 8))();
        FUntypedBulkData::FAllocatedPtr::Reallocate
                  (param_1 + 4,iVar9 * iVar10,*(undefined4 *)((longlong)param_1 + 0x1c));
        goto LAB_141722849;
      }
      goto LAB_141722935;
    }
    goto LAB_1417228fd;
  }
  cVar8 = FUN_141726bd0(param_1);
  if (cVar8 == '\0') {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar9 = (**(code **)(*param_1 + 8))(param_1);
    FUntypedBulkData::FAllocatedPtr::Reallocate
              (param_1 + 4,iVar9 * iVar10,*(undefined4 *)((longlong)param_1 + 0x1c));
    if (bVar17 == 0) {
      if ((*puVar1 & 0x100) != 0) {
        puVar19 = &DAT_143f3eda8;
        if ((DAT_1468c21ab != '\0') &&
           ((cVar8 = FString::EndsWith(plVar14,L".uasset",1), cVar8 != '\0' ||
            (cVar8 = FString::EndsWith(plVar14,L".umap",1), cVar8 != '\0')))) {
          plVar13 = (longlong *)FUN_1415c3d50();
          if ((int)param_1[0xc] != 0) {
            puVar19 = (undefined2 *)*plVar14;
          }
          lVar11 = (**(code **)(*plVar13 + 0xe8))(plVar13,puVar19);
          param_1[2] = param_1[2] - lVar11;
          plVar13 = (longlong *)FUN_141671940(local_50,plVar14,0);
          lVar11 = plVar13[1];
          local_40 = *plVar13;
          *plVar13 = 0;
          local_38._4_4_ = *(int *)((longlong)plVar13 + 0xc);
          local_38._0_4_ = (int)plVar13[1];
          plVar13[1] = 0;
          iVar9 = (6 - (uint)((int)lVar11 != 0)) + (int)local_38;
          iVar10 = (int)local_38;
          if (local_38._4_4_ < iVar9) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_40,iVar9);
            iVar10 = (int)local_38;
          }
          iVar18 = (6 - (uint)(iVar10 != 0)) + iVar10;
          local_38 = CONCAT44(local_38._4_4_,iVar18);
          iVar9 = local_38._4_4_;
          if (local_38._4_4_ < iVar18) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_40,iVar10);
            iVar18 = (int)local_38;
            iVar9 = local_38._4_4_;
          }
          lVar11 = local_40;
          puVar3 = (undefined8 *)(local_40 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
          *puVar3 = 0x7800650075002e;
          *(undefined2 *)(puVar3 + 1) = 0x70;
          *(undefined2 *)((longlong)puVar3 + 10) = 0;
          if (plVar14 == &local_40) {
            if (local_40 != 0) {
              FMemory::Free(local_40);
            }
          }
          else {
            if (*plVar14 != 0) {
              FMemory::Free();
            }
            *plVar14 = lVar11;
            *(int *)(param_1 + 0xc) = iVar18;
            *(int *)((longlong)param_1 + 100) = iVar9;
          }
          if (local_50[0] != 0) {
            FMemory::Free();
          }
        }
        puVar19 = &DAT_143f3eda8;
        plVar13 = (longlong *)FUN_1415c3d50();
        if ((int)param_1[0xc] != 0) {
          puVar19 = (undefined2 *)*plVar14;
        }
        plVar14 = (longlong *)(**(code **)(*plVar13 + 0x18))(plVar13,puVar19,0);
        (**(code **)(*plVar14 + 0xa8))(plVar14,param_1[2]);
        FUN_1417240a0(param_1,plVar14,param_1[4]);
        (**(code **)*plVar14)(plVar14,1);
        return;
      }
      uVar12 = (**(code **)(*param_2 + 0x90))(param_2);
      (**(code **)(*param_2 + 0xa8))(param_2,param_1[2]);
      FUN_1417240a0(param_1,param_2,param_1[4]);
      (**(code **)(*param_2 + 0xa8))(param_2,uVar12);
      return;
    }
LAB_141722849:
    FUN_1417240a0(param_1,param_2,param_1[4]);
    return;
  }
LAB_141722935:
  FUN_141726c90(param_1,param_2,param_3,param_4,bVar17);
  return;
}



// FUNCTION 141722e60 FUN_141722e60 body=1341 status=ok
// SIG undefined FUN_141722e60(void)

void FUN_141722e60(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  void **ppvVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  uint *puVar5;
  ulonglong uVar6;
  void *_Src;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  int local_res18 [2];
  undefined8 local_res20;
  void *local_58;
  ulonglong local_50;
  
  if (((*(byte *)(param_2 + 5) & 1) != 0) || ((*(byte *)((longlong)param_2 + 0x2a) & 0x10) != 0)) {
    FUN_1417a8df0();
  }
  lVar7 = param_1[6];
  FUN_141723710(param_1,param_2);
  if ((lVar7 != 0) && (lVar7 != param_1[6])) {
    FClassBaseChain::ReinitializeBaseChainArray(param_1 + 0x11);
  }
  if (((*(byte *)(param_2 + 5) & 1) != 0) || ((*(byte *)((longlong)param_2 + 0x2a) & 0x10) != 0)) {
    FUN_1417a6460(param_1);
  }
  *(byte *)((longlong)param_2 + 0x29) = *(byte *)((longlong)param_2 + 0x29) | 2;
  FUN_1417150e0(param_2,param_1 + 0x20);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    if (param_1[0x28] != 0) {
      lVar7 = FMemory::Realloc(param_1[0x28],0,0);
      param_1[0x28] = lVar7;
    }
    *(undefined4 *)(param_1 + 0x29) = 0;
    TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
    ::ConditionalRehash(param_1 + 0x20,(int)param_1[0x21] - *(int *)((longlong)param_1 + 0x134),0);
  }
  puVar1 = (uint *)((longlong)param_1 + 0xb4);
  if ((*(byte *)(param_2 + 5) & 2) == 0) {
    puVar10 = *(uint **)param_2[1];
    puVar5 = (uint *)((undefined8 *)param_2[1])[1];
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      if (puVar5 < puVar10 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,puVar1,4);
        puVar10 = puVar1;
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) goto LAB_141722ffe;
      }
      else {
        *puVar1 = *puVar10;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
    }
    else if (puVar5 < puVar10 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,puVar1,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,puVar1,4);
      }
      *puVar1 = *puVar1 & 0xefbfff7f;
    }
    else {
      *puVar1 = *puVar10;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      *puVar1 = *puVar1 & 0xefbfff7f;
    }
  }
  else {
    plVar4 = (longlong *)param_2[1];
    local_res8 = CONCAT44(local_res8._4_4_,*puVar1) & 0xffffffffefbfff7f;
    if ((undefined4 *)plVar4[1] < (undefined4 *)*plVar4 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,&local_res8,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        puVar10 = (uint *)&local_res8;
LAB_141722ffe:
        FArchive::ByteSwap(param_2,puVar10,4);
      }
    }
    else {
      local_res8 = CONCAT44(local_res8._4_4_,*(undefined4 *)*plVar4);
      *plVar4 = *plVar4 + 4;
    }
  }
  if ((int)param_2[8] < 0x13b) {
    uVar9 = *puVar1 ^ 0x200;
    *puVar1 = uVar9;
    if (((uVar9 >> 9 & 1) == 0) && ((*(uint *)(param_1[6] + 0xb4) >> 9 & 1) != 0)) {
      *puVar1 = uVar9 | 0x200;
    }
  }
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x18);
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x1a);
  local_res18[0] = 0;
  lVar7 = 0;
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x35) = 0;
    if (*(int *)((longlong)param_1 + 0x1ac) != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x34,0);
    }
    if (((int)param_2[8] < 0x169) && (lVar7 = 0, DAT_1468c2177 == '\0')) {
      lVar7 = (**(code **)(*param_2 + 0x90))(param_2);
      plVar4 = (longlong *)param_2[1];
      if ((int *)plVar4[1] < (int *)*plVar4 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res18,4);
        }
      }
      else {
        local_res18[0] = *(int *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
      (**(code **)(*param_2 + 0xa8))(param_2,lVar7 + ((longlong)local_res18[0] * 3 + 1) * 4);
    }
  }
  if ((*(byte *)((longlong)param_2 + 0x2a) & 1) == 0) {
    (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x19);
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *puVar1 = *puVar1 & 0xefbfff7f;
    if ((*(uint *)(param_2 + 6) >> 0xc & 1) == 0) {
      (**(code **)(*param_1 + 0x290))(param_1,param_2,1);
    }
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      uVar8 = (**(code **)(*param_2 + 0x90))(param_2);
      if (((int)param_2[8] < 0x169) && (DAT_1468c2177 == '\0')) {
        (**(code **)(*param_2 + 0xa8))(param_2,lVar7);
      }
      local_58 = (void *)0x0;
      local_50 = 0;
      FUN_141714f50(param_2,&local_58);
      _Src = local_58;
      if ((int)param_1[0x35] == 0) {
        lVar7 = (longlong)(int)local_50;
        if ((0 < (int)local_50) && (ppvVar2 = (void **)(param_1 + 0x34), ppvVar2 != &local_58)) {
          *(int *)(param_1 + 0x35) = (int)local_50;
          TArray<FString,FDefaultAllocator>::ResizeForCopy
                    (ppvVar2,local_50 & 0xffffffff,*(undefined4 *)((longlong)param_1 + 0x1ac));
          _guard_xfg_dispatch_icall_nop(*ppvVar2,_Src,lVar7 << 4);
        }
      }
      if (((int)param_2[8] < 0x169) && (DAT_1468c2177 == '\0')) {
        (**(code **)(*param_2 + 0xa8))(param_2,uVar8);
      }
      if (_Src != (void *)0x0) {
        FMemory::Free(_Src);
      }
      goto LAB_141723243;
    }
  }
  FUN_141714f50(param_2,param_1 + 0x34);
LAB_141723243:
  local_res10[0] = 0;
  (**(code **)(*param_2 + 8))(param_2,local_res10);
  local_res20 = 0;
  (**(code **)(*param_2 + 0x40))(param_2,&local_res20);
  if (0xf0 < (int)param_2[8]) {
    if ((*(byte *)(param_2 + 5) & 2) == 0) {
      uVar9 = *(uint *)(param_1 + 0x16);
    }
    else {
      uVar9 = -(uint)(param_2[0xe] != 0) & 0x80000000 | *(uint *)(param_1 + 0x16) & 0x7fffffff;
      *(uint *)(param_1 + 0x16) = uVar9;
    }
    local_res8 = CONCAT71(local_res8._1_7_,(byte)(uVar9 >> 0x1f));
    (**(code **)(*param_2 + 8))(param_2,&local_res8);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) & 0x7fffffff;
      *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) | (uint)(byte)local_res8 << 0x1f;
    }
  }
  *(int *)((longlong)param_2 + 0x2c) = *(int *)((longlong)param_2 + 0x2c) + 1;
  puVar3 = (ulonglong *)(param_1 + 0x1f);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x20) == 0) {
      (**(code **)(*param_2 + 0x30))(param_2,puVar3);
    }
    else {
      plVar4 = (longlong *)*puVar3;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0xa8))(plVar4,param_2);
      }
    }
  }
  else {
    uVar6 = *puVar3;
    local_res8 = 0;
    (**(code **)(*param_2 + 0x30))(param_2,&local_res8);
    if (*puVar3 == uVar6) {
      *puVar3 = local_res8;
    }
    *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) & 0x80000000;
  }
  *(int *)((longlong)param_2 + 0x2c) = *(int *)((longlong)param_2 + 0x2c) + -1;
  if ((((*(byte *)(param_2 + 5) & 1) != 0) && (*puVar3 == 0)) &&
     ((*(uint *)(param_1 + 1) >> 4 & 1) == 0)) {
    if (DAT_1468c21ab != '\0') {
      (**(code **)(*param_1 + 0x368))(param_1);
      return;
    }
    if ((*(uint *)(param_2 + 6) & 0x401000) == 0) {
      (**(code **)(*param_1 + 0x368))(param_1);
      (**(code **)(*param_2 + 0x48))(param_2);
    }
  }
  return;
}



// FUNCTION 1417233a0 FUN_1417233a0 body=80 status=ok
// SIG undefined FUN_1417233a0(void)

void FUN_1417233a0(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  FUN_141763960();
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0088);
  iVar1 = FArchive::CustomVer(param_2,&DAT_1464b0088);
  if (iVar1 < 0x1d) {
    (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x28);
  }
  return;
}



// FUNCTION 1417233f0 FUN_1417233f0 body=620 status=ok
// SIG undefined FUN_1417233f0(void)

void FUN_1417233f0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  undefined2 local_res8 [4];
  
  FUN_141723710();
  *(byte *)((longlong)param_2 + 0x29) = *(byte *)((longlong)param_2 + 0x29) | 2;
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x88,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x88,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x88) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((*(byte *)(param_1 + 0x88) & 0x40) != 0) {
    plVar2 = (longlong *)param_2[1];
    local_res8[0] = 0;
    if ((undefined2 *)plVar2[1] < (undefined2 *)*plVar2 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res8,2);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res8,2);
      }
    }
    else {
      local_res8[0] = *(undefined2 *)*plVar2;
      *plVar2 = *plVar2 + 2;
    }
  }
  if (0x1c2 < (int)param_2[8]) {
    (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0xa0);
    puVar1 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xa8,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,param_1 + 0xa8,4);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xa8) = *puVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  if ((*(uint *)(param_2 + 6) >> 0xc & 1) != 0) {
    puVar3 = *(undefined1 **)param_2[1];
    if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x8c,1);
    }
    else {
      *(undefined1 *)(param_1 + 0x8c) = *puVar3;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    }
    puVar4 = *(undefined2 **)param_2[1];
    if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x8e,2);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,param_1 + 0x8e,2);
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x8e) = *puVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
    }
    puVar4 = *(undefined2 **)param_2[1];
    if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x90,2);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,param_1 + 0x90,2);
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x90) = *puVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
    }
                    /* WARNING: Could not recover jumptable at 0x00014172363a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x98);
    return;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    UFunction::InitializeDerivedMembers(param_1);
  }
  return;
}



// FUNCTION 141723660 FUN_141723660 body=168 status=ok
// SIG undefined FUN_141723660(void)

void FUN_141723660(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  FUN_141723710();
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x88,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x88,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x88) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xff8003bd;
    *(undefined1 *)(param_1 + 0x8c) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    FUN_14171f730(param_1);
  }
  return;
}



// FUNCTION 141723710 FUN_141723710 body=1382 status=ok
// SIG undefined FUN_141723710(void)

void FUN_141723710(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  bool bVar11;
  int local_res8 [2];
  int local_res10 [2];
  undefined8 local_res18;
  longlong *local_f8;
  undefined8 local_f0;
  undefined **local_e8 [18];
  undefined8 local_58;
  longlong **local_50;
  undefined8 local_48;
  longlong *plVar7;
  
  FUN_141763960();
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0088);
  iVar3 = FArchive::CustomVer(param_2,&DAT_1464b0088);
  if (iVar3 < 0x1d) {
    (**(code **)(*param_2 + 0x30))(param_2,param_1 + 5);
  }
  (**(code **)(*param_1 + 0x2d0))(param_1,param_2);
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0088);
  iVar3 = FArchive::CustomVer(param_2,&DAT_1464b0088);
  plVar7 = (longlong *)0x0;
  if (iVar3 < 0x1d) {
    (**(code **)(*param_2 + 0x30))(param_2,param_1 + 7);
  }
  else {
    local_f8 = (longlong *)0x0;
    local_f0 = 0;
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      plVar8 = plVar7;
      plVar9 = plVar7;
      for (lVar4 = param_1[7]; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x28)) {
        iVar3 = (int)plVar7;
        uVar6 = iVar3 + 1;
        uVar2 = local_f0 >> 0x20;
        local_f0 = CONCAT44((int)uVar2,uVar6);
        if ((int)plVar9 < (int)uVar6) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_f8,plVar7);
          plVar9 = (longlong *)(local_f0 >> 0x20);
          plVar8 = local_f8;
          uVar6 = (uint)local_f0;
        }
        plVar7 = (longlong *)(ulonglong)uVar6;
        plVar8[iVar3] = lVar4;
      }
      FUN_1408bdc30(param_2,&local_f8);
    }
    else {
      FUN_1408bdc30(param_2,&local_f8);
      if ((uint)local_f0 == 0) {
        param_1[7] = 0;
      }
      else {
        if (1 < (int)(uint)local_f0) {
          iVar3 = 1;
          plVar7 = local_f8;
          do {
            iVar3 = iVar3 + 1;
            *(longlong *)(*plVar7 + 0x28) = plVar7[1];
            plVar7 = plVar7 + 1;
          } while (iVar3 < (int)(uint)local_f0);
        }
        param_1[7] = *local_f8;
        *(undefined8 *)(local_f8[(int)((uint)local_f0 + -1)] + 0x28) = 0;
      }
    }
    if (local_f8 != (longlong *)0x0) {
      FMemory::Free(local_f8);
    }
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    FUN_141781650(&local_f8,param_1,param_2);
    FUN_141791880(&local_f8,param_1,param_2,1);
    lVar4 = FUN_14171bfe0();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) {
      return;
    }
    if ((*(uint *)(param_2 + 6) >> 0xc & 1) != 0) {
      return;
    }
    (**(code **)(*param_1 + 0x290))
              (param_1,param_2,CONCAT71((int7)((ulonglong)(lVar4 + 0x88) >> 8),1));
    return;
  }
  local_res8[0] = (int)param_1[10];
  uVar10 = 0xffffffffffffffff;
  if ((*(byte *)(param_2 + 5) & 2) != 0) {
    plVar7 = (longlong *)param_2[1];
    if ((int *)plVar7[1] < (int *)*plVar7 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res8,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*plVar7;
      *plVar7 = *plVar7 + 4;
    }
    local_res10[0] = 0;
    uVar10 = (**(code **)(*param_2 + 0x90))(param_2);
    plVar7 = (longlong *)param_2[1];
    if ((ulonglong)plVar7[1] < *plVar7 + 4U) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res10,4);
      }
    }
    else {
      *plVar7 = *plVar7 + 4;
    }
  }
  if (DAT_1468c2177 != '\0') {
    return;
  }
  local_res10[0] = 0;
  iVar3 = (**(code **)(*param_2 + 0x90))(param_2);
  if (((*(byte *)(param_2 + 5) & 0x40) == 0) ||
     (lVar4 = (**(code **)(*param_2 + 0x88))(param_2), lVar4 == 0)) {
    bVar11 = local_res10[0] == local_res8[0];
    if (local_res8[0] <= local_res10[0]) goto LAB_141723b82;
    do {
      (**(code **)(*param_1 + 0x2b8))(param_1,local_res10,param_2);
    } while (local_res10[0] < local_res8[0]);
  }
  else {
    lVar4 = (**(code **)(*param_2 + 0x88))(param_2);
    if ((lVar4 == 0) || (*(int *)(lVar4 + 0x98) != 2)) {
      lVar4 = 0;
    }
    uVar5 = *(undefined8 *)(lVar4 + 0x290);
    local_f8 = (longlong *)0x0;
    bVar1 = *(byte *)(param_2 + 5);
    local_f0 = 0;
    local_res18 = 0;
    FArchive::FArchive(local_e8);
    local_58 = 0;
    local_e8[0] = &PTR_FUN_143f4a100;
    local_50 = &local_f8;
    local_48 = local_res18;
    FArchive::SetIsSaving(local_e8,1);
    FArchive::SetIsPersistent(local_e8,bVar1 >> 6 & 1);
    *(undefined ****)(lVar4 + 0x290) = local_e8;
    if (local_res10[0] < local_res8[0]) {
      do {
        (**(code **)(*param_1 + 0x2b8))(param_1,local_res10,param_2);
      } while (local_res10[0] < local_res8[0]);
    }
    *(undefined8 *)(lVar4 + 0x290) = uVar5;
    (**(code **)(*param_2 + 0x50))(param_2,local_f8,(longlong)(int)(uint)local_f0);
    FLinker::UpdateScriptSHAKey(lVar4,&local_f8);
    FArchive::~FArchive(local_e8);
    if (local_f8 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  bVar11 = local_res10[0] == local_res8[0];
LAB_141723b82:
  if (!bVar11) {
    LowLevelFatalErrorHandler
              ("Unknown",0x564,L"Script serialization mismatch: Got %i, expected %i",local_res10[0],
               local_res8[0]);
    FDebug::AssertFailed
              (&DAT_144cff276,"Unknown",0x564,L"Script serialization mismatch: Got %i, expected %i",
               local_res10[0],local_res8[0]);
  }
  if ((*(byte *)(param_2 + 5) & 2) != 0) {
    uVar5 = (**(code **)(*param_2 + 0x90))(param_2);
    (**(code **)(*param_2 + 0xa8))(param_2,uVar10);
    plVar7 = (longlong *)param_2[1];
    local_res18 = CONCAT44(local_res18._4_4_,(int)uVar5 - iVar3);
    if ((undefined4 *)plVar7[1] < (undefined4 *)*plVar7 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,&local_res18,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,&local_res18,4);
      }
    }
    else {
      local_res18 = CONCAT44(local_res18._4_4_,*(undefined4 *)*plVar7);
      *plVar7 = *plVar7 + 4;
    }
    (**(code **)(*param_2 + 0xa8))(param_2,uVar5);
  }
  return;
}



// FUNCTION 141723c80 FUN_141723c80 body=413 status=ok
// SIG undefined FUN_141723c80(void)

void FUN_141723c80(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong local_18;
  longlong *local_10;
  
  if ((*(byte *)(param_2 + 0x2a) & 8) == 0) {
    if ((*(byte *)(param_2 + 0x2b) & 0x10) == 0) {
      for (plVar1 = *(longlong **)(param_1 + 0x58); plVar1 != (longlong *)0x0;
          plVar1 = (longlong *)plVar1[10]) {
        cVar4 = FUN_141764c10(plVar1,param_2);
        if (cVar4 != '\0') {
          lVar3 = plVar1[6];
          iVar5 = 0;
          if (0 < (int)lVar3) {
            do {
              local_18 = param_2;
              local_10 = plVar1;
              FUN_141705270(&local_18);
              (**(code **)(*plVar1 + 0x2c0))
                        (plVar1,param_2,
                         (longlong)*(int *)((longlong)plVar1 + 0x44) +
                         iVar5 * *(int *)((longlong)plVar1 + 0x34) + param_3,0);
              FSerializedPropertyScope::PopProperty(&local_18);
              iVar5 = iVar5 + 1;
            } while (iVar5 < (int)lVar3);
          }
        }
      }
    }
    else {
      plVar1 = *(longlong **)(param_2 + 0x68);
      for (plVar2 = plVar1; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[3]) {
        lVar3 = *plVar2;
        if (lVar3 != 0) {
          *(longlong *)(param_2 + 0x68) = plVar2[2];
          FUN_141723fe0(lVar3,param_2,param_3,(int)plVar2[1]);
          *(longlong **)(param_2 + 0x68) = plVar1;
        }
      }
    }
  }
  else {
    for (plVar1 = *(longlong **)(param_1 + 0x60); plVar1 != (longlong *)0x0;
        plVar1 = (longlong *)plVar1[0xb]) {
      cVar4 = FUN_141764c10(plVar1,param_2);
      if (cVar4 != '\0') {
        lVar3 = plVar1[6];
        iVar5 = 0;
        if (0 < (int)lVar3) {
          do {
            local_18 = param_2;
            local_10 = plVar1;
            FUN_141705270(&local_18);
            (**(code **)(*plVar1 + 0x2c0))
                      (plVar1,param_2,
                       (longlong)*(int *)((longlong)plVar1 + 0x44) +
                       *(int *)((longlong)plVar1 + 0x34) * iVar5 + param_3,0);
            FSerializedPropertyScope::PopProperty(&local_18);
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)lVar3);
        }
      }
    }
  }
  return;
}



// FUNCTION 141723e20 FUN_141723e20 body=444 status=ok
// SIG undefined FUN_141723e20(void)

void FUN_141723e20(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  if ((param_4 != 0) && (param_5 != 0)) {
    if (param_1 == (longlong *)0x0) {
      local_40 = (longlong *)0x0;
    }
    else {
      local_40 = (longlong *)param_1[7];
    }
    local_38 = 0xffffffff;
    local_34 = 0x101;
    local_32 = 0;
    local_48 = param_1;
    FUN_140472e10(&local_48);
    plVar1 = local_40;
    while (plVar1 != (longlong *)0x0) {
      local_40 = plVar1;
      cVar2 = FUN_141764c10(plVar1,param_2);
      if (cVar2 != '\0') {
        iVar6 = (int)plVar1[6];
        iVar4 = 0;
        if (0 < iVar6) {
          do {
            lVar3 = (longlong)(*(int *)((longlong)plVar1 + 0x34) * iVar4) +
                    (longlong)*(int *)((longlong)plVar1 + 0x44);
            lVar5 = lVar3 + param_4;
            if (*(int *)(param_5 + 0x40) <
                *(int *)((longlong)plVar1 + 0x34) * iVar6 + *(int *)((longlong)plVar1 + 0x44)) {
              lVar5 = 0;
            }
            lVar3 = lVar3 + param_3;
            cVar2 = (**(code **)(*plVar1 + 0x2b8))
                              (plVar1,lVar3,lVar5,*(undefined8 *)(param_2 + 0x30));
            if (cVar2 == '\0') {
              local_58 = param_2;
              local_50 = plVar1;
              FUN_141705270(&local_58);
              (**(code **)(*plVar1 + 0x2c0))(plVar1,param_2,lVar3,lVar5);
              FSerializedPropertyScope::PopProperty(&local_58);
            }
            iVar6 = (int)plVar1[6];
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar6);
        }
      }
      local_40 = (longlong *)plVar1[5];
      FUN_140472e10(&local_48);
      plVar1 = local_40;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141723fd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x298))();
  return;
}



// FUNCTION 141723fe0 FUN_141723fe0 body=180 status=ok
// SIG undefined FUN_141723fe0(void)

void FUN_141723fe0(longlong *param_1,undefined8 param_2,longlong param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined8 local_18;
  longlong *local_10;
  
  cVar1 = FUN_141764c10();
  if (cVar1 != '\0') {
    if (param_4 < 0) {
      param_4 = 0;
      iVar2 = (int)param_1[6];
    }
    else {
      iVar2 = param_4 + 1;
    }
    for (; param_4 < iVar2; param_4 = param_4 + 1) {
      local_18 = param_2;
      local_10 = param_1;
      FUN_141705270(&local_18);
      (**(code **)(*param_1 + 0x2c0))
                (param_1,param_2,
                 (longlong)*(int *)((longlong)param_1 + 0x44) +
                 *(int *)((longlong)param_1 + 0x34) * param_4 + param_3,0);
      FSerializedPropertyScope::PopProperty(&local_18);
    }
  }
  return;
}



// FUNCTION 1417240a0 FUN_1417240a0 body=698 status=ok
// SIG undefined FUN_1417240a0(void)

void FUN_1417240a0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong local_d8;
  undefined8 local_d0;
  undefined **local_c8 [5];
  byte local_9f;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  
  if (((*(byte *)(param_1 + 1) & 0x20) == 0) &&
     (iVar5 = *(int *)((longlong)param_1 + 0xc), iVar4 = (**(code **)(*param_1 + 8))(),
     iVar4 * iVar5 != 0)) {
    bVar2 = true;
    cVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
    if (((cVar3 != '\0') || ((*(byte *)(param_1 + 1) & 4) != 0)) ||
       (((*(byte *)(param_2 + 5) & 2) != 0 &&
        (iVar5 = (**(code **)(*param_1 + 8))(param_1), 1 < iVar5)))) {
      bVar2 = false;
    }
    uVar1 = *(uint *)(param_1 + 1);
    if (bVar2) {
      iVar5 = *(int *)((longlong)param_1 + 0xc);
      iVar4 = (**(code **)(*param_1 + 8))(param_1);
      lVar6 = (longlong)(iVar4 * iVar5);
      if ((uVar1 & 2) == 0) {
        (**(code **)(*param_2 + 0x50))(param_2,param_3,lVar6);
      }
      else {
        FUN_141694350(param_2,param_3,lVar6,uVar1 >> 1 & 1,0,(byte)(*(uint *)(param_1 + 1) >> 9) & 1
                     );
      }
    }
    else if ((uVar1 & 2) == 0) {
      (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3);
    }
    else {
      local_d8 = 0;
      local_d0 = 0;
      if ((*(byte *)(param_2 + 5) & 1) == 0) {
        if ((*(byte *)(param_2 + 5) & 2) == 0) {
          return;
        }
        FArchive::FArchive(local_c8);
        local_38 = 0;
        local_c8[0] = &PTR_FUN_143f4a100;
        local_30 = &local_d8;
        local_28 = 0;
        FArchive::SetIsSaving(local_c8,1);
        FArchive::SetIsPersistent(local_c8,1);
        local_9f = local_9f ^ (*(byte *)((longlong)param_2 + 0x29) ^ local_9f) & 0x10;
        (**(code **)(*param_1 + 0x10))(param_1,local_c8,param_3);
        FUN_141694350(param_2,local_d8,(longlong)(int)local_d0,*(uint *)(param_1 + 1) >> 1 & 1,0,
                      (byte)(*(uint *)(param_1 + 1) >> 9) & 1);
      }
      else {
        iVar5 = *(int *)((longlong)param_1 + 0xc);
        iVar4 = (**(code **)(*param_1 + 8))(param_1);
        iVar4 = iVar4 * iVar5;
        if (local_d0._4_4_ != iVar4) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_d8,iVar4);
        }
        iVar5 = *(int *)((longlong)param_1 + 0xc);
        iVar4 = (**(code **)(*param_1 + 8))(param_1);
        iVar5 = iVar4 * iVar5 + (int)local_d0;
        local_d0 = CONCAT44(local_d0._4_4_,iVar5);
        if (local_d0._4_4_ < iVar5) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_d8);
          iVar5 = (int)local_d0;
        }
        FUN_141694350(param_2,local_d8,(longlong)iVar5,*(uint *)(param_1 + 1) >> 1 & 1,0,
                      (byte)(*(uint *)(param_1 + 1) >> 9) & 1);
        FArchive::FArchive(local_c8);
        local_38 = 0;
        local_c8[0] = &PTR_FUN_143f4a3a0;
        local_30 = &local_d8;
        local_28 = 0x7fffffffffffffff;
        FArchive::SetIsLoading(local_c8,1);
        FArchive::SetIsPersistent(local_c8,1);
        local_9f = local_9f ^ (*(byte *)((longlong)param_2 + 0x29) ^ local_9f) & 0x10;
        (**(code **)(*param_1 + 0x10))(param_1,local_c8,param_3);
      }
      FArchive::~FArchive(local_c8);
      if (local_d8 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 141724360 FUN_141724360 body=189 status=ok
// SIG undefined FUN_141724360(void)

void FUN_141724360(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *(int *)(param_3 + 0x2c) = *(int *)(param_3 + 0x2c) + 1;
  if (((*(byte *)(param_3 + 0x28) & 3) == 0) || ((*(byte *)(param_3 + 0x28) & 0x10) != 0)) {
    if (*(longlong *)(param_3 + 0x30) == 0) {
      (**(code **)(*param_1 + 0x298))(param_1,param_3,param_2);
    }
    else {
      lVar1 = param_1[6];
      uVar3 = FUN_14178ca30(param_2);
      FUN_141723e20(param_1,param_3,param_2,uVar3,lVar1);
    }
  }
  else {
    lVar1 = param_1[6];
    lVar2 = *param_1;
    uVar3 = FUN_14178ca30(param_2);
    (**(code **)(lVar2 + 0x2a0))(param_1,param_3,param_2,lVar1,uVar3,0);
  }
  *(int *)(param_3 + 0x2c) = *(int *)(param_3 + 0x2c) + -1;
  return;
}



// FUNCTION 141724460 SerializeElements body=94 status=ok
// SIG undefined SerializeElements(void)

void FUntypedBulkData::SerializeElements(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)((longlong)param_1 + 0xc)) {
    do {
      (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)((longlong)param_1 + 0xc));
  }
  return;
}



// FUNCTION 1417244c0 FUN_1417244c0 body=5593 status=ok
// SIG undefined FUN_1417244c0(void)

undefined1 FUN_1417244c0(longlong *param_1,int *param_2,longlong *param_3)

{
  undefined1 uVar1;
  char cVar2;
  ushort uVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  longlong lVar13;
  undefined4 *puVar14;
  undefined2 *puVar15;
  ulonglong uVar16;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_38;
  
  puVar9 = *(undefined1 **)param_3[1];
  if ((undefined1 *)((undefined8 *)param_3[1])[1] < puVar9 + 1) {
    (**(code **)(*param_3 + 0x50))(param_3,(undefined1 *)((longlong)*param_2 + param_1[9]),1);
  }
  else {
    *(undefined1 *)((longlong)*param_2 + param_1[9]) = *puVar9;
    *(longlong *)param_3[1] = *(longlong *)param_3[1] + 1;
  }
  iVar8 = *param_2;
  lVar6 = (longlong)iVar8;
  iVar7 = iVar8 + 1;
  *param_2 = iVar7;
  lVar13 = param_1[9];
  uVar1 = *(undefined1 *)(lVar13 + lVar6);
  switch(uVar1) {
  case 0:
  case 1:
  case 2:
  case 0x48:
    local_res8 = 0;
    if ((*(byte *)(param_3 + 5) & 1) == 0) {
      local_res8 = *(undefined8 *)(iVar7 + lVar13);
      local_res10 = local_res8;
    }
    (**(code **)(*param_3 + 0x30))(param_3,&local_res8);
    if ((*(byte *)(param_3 + 5) & 2) == 0) {
      *(undefined8 *)((longlong)*param_2 + param_1[9]) = local_res8;
    }
    *param_2 = *param_2 + 8;
    break;
  case 3:
  case 5:
  case 8:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x10:
  case 0x11:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x2a:
  case 0x2d:
  case 0x30:
  case 0x32:
  case 0x33:
  case 0x37:
  case 0x3a:
  case 0x3c:
  case 0x3e:
  case 0x40:
  case 0x41:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x49:
  case 0x4a:
  case 0x4d:
  case 0x53:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5e:
  case 0x66:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x86:
  case 0x87:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x8f:
  case 0x90:
  case 0x91:
  case 0x92:
  case 0x93:
  case 0x94:
  case 0x95:
  case 0x96:
  case 0x97:
  case 0x98:
  case 0x99:
  case 0x9a:
  case 0x9b:
  case 0x9c:
  case 0x9d:
  case 0x9e:
  case 0x9f:
  case 0xa0:
  case 0xa1:
  case 0xa2:
  case 0xa3:
  case 0xa4:
  case 0xa5:
  case 0xa6:
  case 0xa7:
  case 0xa8:
  case 0xa9:
  case 0xaa:
  case 0xab:
  case 0xac:
  case 0xad:
  case 0xae:
  case 0xaf:
  case 0xb0:
  case 0xb1:
  case 0xb2:
  case 0xb3:
  case 0xb4:
  case 0xb5:
  case 0xb6:
  case 0xb7:
  case 0xb8:
  case 0xb9:
  case 0xba:
  case 0xbb:
  case 0xbc:
  case 0xbd:
  case 0xbe:
  case 0xbf:
    break;
  case 4:
  case 0x4e:
  case 0x4f:
  case 0x51:
  case 0x5d:
  case 0x67:
    goto switchD_14172454d_caseD_4;
  case 6:
  case 0x1d:
  case 0x1e:
  case 0x4c:
  case 0x5b:
    puVar14 = (undefined4 *)(iVar7 + lVar13);
    puVar12 = *(undefined4 **)param_3[1];
    if (puVar12 + 1 <= (undefined4 *)((undefined8 *)param_3[1])[1]) {
      *puVar14 = *puVar12;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
      *param_2 = *param_2 + 4;
      break;
    }
    (**(code **)(*param_3 + 0x50))(param_3,puVar14,4);
    if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_3,puVar14,4);
      *param_2 = *param_2 + 4;
      break;
    }
    goto LAB_14172500a;
  case 7:
  case 0x18:
    puVar14 = (undefined4 *)(iVar7 + lVar13);
    puVar12 = *(undefined4 **)param_3[1];
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar12 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,puVar14,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,puVar14,4);
      }
      *param_2 = *param_2 + 4;
    }
    else {
      *puVar14 = *puVar12;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
      *param_2 = *param_2 + 4;
    }
    goto switchD_14172454d_caseD_4;
  case 9:
    puVar15 = (undefined2 *)(iVar7 + lVar13);
    puVar5 = *(undefined2 **)param_3[1];
    if ((undefined2 *)((undefined8 *)param_3[1])[1] < puVar5 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,puVar15,2);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,puVar15,2);
      }
    }
    else {
      *puVar15 = *puVar5;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 2;
    }
    iVar8 = *param_2;
    *param_2 = iVar8 + 2;
    puVar9 = (undefined1 *)(param_1[9] + (longlong)iVar8 + 2);
    goto LAB_14172569e;
  case 0xf:
    local_res8 = 0;
    if ((*(byte *)(param_3 + 5) & 1) == 0) {
      local_res8 = *(undefined8 *)(iVar7 + lVar13);
      local_res10 = local_res8;
    }
    (**(code **)(*param_3 + 0x30))(param_3,&local_res8);
    if ((*(byte *)(param_3 + 5) & 2) == 0) {
      local_res10 = local_res8;
      *(undefined8 *)((longlong)*param_2 + param_1[9]) = local_res8;
    }
    *param_2 = *param_2 + 8;
    goto switchD_14172454d_caseD_14;
  case 0x12:
  case 0x19:
  case 0x1a:
    (**(code **)(*param_1 + 0x2b8))(param_1,param_2,param_3);
    puVar14 = (undefined4 *)((longlong)*param_2 + param_1[9]);
    puVar12 = *(undefined4 **)param_3[1];
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar12 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,puVar14,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,puVar14,4);
      }
    }
    else {
      *puVar14 = *puVar12;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    iVar8 = *param_2;
    local_res8 = 0;
    *param_2 = iVar8 + 4;
    if ((*(byte *)(param_3 + 5) & 1) == 0) {
      local_res8 = *(undefined8 *)((longlong)(iVar8 + 4) + param_1[9]);
      local_res10 = local_res8;
    }
    (**(code **)(*param_3 + 0x30))(param_3,&local_res8);
    if ((*(byte *)(param_3 + 5) & 2) == 0) {
      local_res10 = local_res8;
      *(undefined8 *)((longlong)*param_2 + param_1[9]) = local_res8;
    }
LAB_141724937:
    *param_2 = *param_2 + 8;
    goto switchD_14172454d_caseD_4;
  case 0x13:
    local_res8 = 0;
    if ((*(byte *)(param_3 + 5) & 1) == 0) {
      local_res8 = *(undefined8 *)(iVar7 + lVar13);
      local_res10 = local_res8;
    }
    (**(code **)(*param_3 + 0x30))(param_3,&local_res8);
    if ((*(byte *)(param_3 + 5) & 2) == 0) {
      local_res10 = local_res8;
      *(undefined8 *)((longlong)*param_2 + param_1[9]) = local_res8;
    }
    iVar8 = *param_2;
    *param_2 = iVar8 + 8;
    if ((*(byte *)(param_3 + 5) & 2) == 0) {
      FUN_14171d650((longlong)iVar8 + param_1[9]);
    }
    goto switchD_14172454d_caseD_4;
  case 0x14:
  case 0x43:
  case 0x44:
  case 0x5c:
  case 0x5f:
  case 0x60:
  case 0x62:
  case 0x6b:
    goto switchD_14172454d_caseD_14;
  case 0x1b:
    local_res8._0_4_ = 0;
    local_res8._4_4_ = 0;
    if ((*(byte *)(param_3 + 5) & 1) == 0) {
      local_res8._4_4_ = *(undefined4 *)((longlong)iVar7 + 8 + lVar13);
      local_38._0_4_ = (undefined4)*(undefined8 *)(iVar7 + lVar13);
      local_res8._0_4_ = (undefined4)local_38;
    }
    (**(code **)(*param_3 + 0x40))(param_3,&local_res8);
    if ((*(byte *)(param_3 + 5) & 2) == 0) {
      local_38 = CONCAT44((undefined4)local_res8,(undefined4)local_res8);
      iVar8 = *param_2;
      lVar13 = param_1[9];
      *(undefined8 *)(iVar8 + lVar13) = local_38;
      *(undefined4 *)((undefined8 *)(iVar8 + lVar13) + 1) = local_res8._4_4_;
    }
    *param_2 = *param_2 + 0xc;
    do {
      iVar8 = (**(code **)(*param_1 + 0x2b8))(param_1,param_2,param_3);
    } while (iVar8 != 0x16);
    break;
  case 0x1c:
  case 0x68:
    local_res8 = 0;
    if ((*(byte *)(param_3 + 5) & 1) == 0) {
      local_res8 = *(undefined8 *)(iVar7 + lVar13);
      local_res10 = local_res8;
    }
    (**(code **)(*param_3 + 0x30))(param_3,&local_res8);
    if ((*(byte *)(param_3 + 5) & 2) == 0) {
      local_res10 = local_res8;
      *(undefined8 *)((longlong)*param_2 + param_1[9]) = local_res8;
    }
    iVar8 = *param_2;
    *param_2 = iVar8 + 8;
    if ((*(byte *)(param_3 + 5) & 2) == 0) {
      FUN_14171d650((longlong)iVar8 + param_1[9]);
    }
    do {
      iVar8 = (**(code **)(*param_1 + 0x2b8))(param_1,param_2,param_3);
    } while (iVar8 != 0x16);
    break;
  case 0x1f:
    do {
      puVar9 = *(undefined1 **)param_3[1];
      if ((undefined1 *)((undefined8 *)param_3[1])[1] < puVar9 + 1) {
        (**(code **)(*param_3 + 0x50))(param_3,(undefined1 *)(iVar7 + lVar13),1);
      }
      else {
        *(undefined1 *)(iVar7 + lVar13) = *puVar9;
        *(longlong *)param_3[1] = *(longlong *)param_3[1] + 1;
      }
      iVar8 = *param_2;
      iVar7 = iVar8 + 1;
      *param_2 = iVar7;
      lVar13 = param_1[9];
    } while (*(char *)(iVar8 + lVar13) != '\0');
    break;
  case 0x20:
    local_res8 = 0;
    if ((*(byte *)(param_3 + 5) & 1) == 0) {
      local_res8 = *(undefined8 *)(iVar7 + lVar13);
      local_res10 = local_res8;
    }
    (**(code **)(*param_3 + 0x30))(param_3,&local_res8);
    if ((*(byte *)(param_3 + 5) & 2) == 0) {
      local_res10 = local_res8;
      *(undefined8 *)((longlong)*param_2 + param_1[9]) = local_res8;
    }
    iVar8 = *param_2;
    *param_2 = iVar8 + 8;
    if ((*(byte *)(param_3 + 5) & 2) == 0) {
      FUN_14171d650((longlong)iVar8 + param_1[9]);
    }
    break;
  case 0x21:
  case 0x4b:
    local_res8._0_4_ = 0;
    local_res8._4_4_ = 0;
    if ((*(byte *)(param_3 + 5) & 1) == 0) {
      local_res8._4_4_ = *(undefined4 *)((longlong)iVar7 + 8 + lVar13);
      local_38._0_4_ = (undefined4)*(undefined8 *)(iVar7 + lVar13);
      local_res8._0_4_ = (undefined4)local_38;
    }
    (**(code **)(*param_3 + 0x40))(param_3,&local_res8);
    if ((*(byte *)(param_3 + 5) & 2) == 0) {
      local_38 = CONCAT44((undefined4)local_res8,(undefined4)local_res8);
      iVar8 = *param_2;
      lVar13 = param_1[9];
      *(undefined8 *)(iVar8 + lVar13) = local_38;
      *(undefined4 *)((undefined8 *)(iVar8 + lVar13) + 1) = local_res8._4_4_;
    }
    *param_2 = *param_2 + 0xc;
    break;
  case 0x22:
  case 0x23:
    puVar12 = (undefined4 *)(iVar7 + lVar13);
    puVar14 = *(undefined4 **)param_3[1];
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar14 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,puVar12,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
LAB_141724f41:
        FArchive::ByteSwap(param_3,puVar12,4);
      }
    }
    else {
      *puVar12 = *puVar14;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    goto LAB_141724f4f;
  case 0x24:
  case 0x2c:
    puVar10 = (undefined1 *)(lVar13 + 1 + lVar6);
    puVar9 = *(undefined1 **)param_3[1];
    if ((undefined1 *)((undefined8 *)param_3[1])[1] < puVar9 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,puVar10,1);
      *param_2 = *param_2 + 1;
    }
    else {
      *puVar10 = *puVar9;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 1;
      *param_2 = *param_2 + 1;
    }
    break;
  case 0x29:
    puVar9 = *(undefined1 **)param_3[1];
    if ((undefined1 *)((undefined8 *)param_3[1])[1] < puVar9 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,(undefined1 *)(iVar7 + lVar13),1);
    }
    else {
      *(undefined1 *)(iVar7 + lVar13) = *puVar9;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 1;
    }
    iVar8 = *param_2;
    iVar7 = iVar8 + 1;
    *param_2 = iVar7;
    cVar2 = *(char *)((longlong)iVar8 + param_1[9]);
    if (cVar2 == '\x01') {
      (**(code **)(*param_1 + 0x2b8))(param_1,param_2,param_3);
    }
    else {
      if ((cVar2 == '\x02') || (cVar2 == '\x03')) goto switchD_14172454d_caseD_4;
      if (cVar2 != '\x04') break;
      local_res8 = 0;
      if ((*(byte *)(param_3 + 5) & 1) == 0) {
        local_res8 = *(undefined8 *)((longlong)iVar7 + param_1[9]);
        local_res10 = local_res8;
      }
      (**(code **)(*param_3 + 0x30))(param_3,&local_res8);
      if ((*(byte *)(param_3 + 5) & 2) == 0) {
        local_res10 = local_res8;
        *(undefined8 *)((longlong)*param_2 + param_1[9]) = local_res8;
      }
      iVar8 = *param_2;
      *param_2 = iVar8 + 8;
      if ((*(byte *)(param_3 + 5) & 2) == 0) {
        FUN_14171d650((longlong)iVar8 + param_1[9]);
      }
    }
    goto switchD_14172454d_caseD_14;
  case 0x2b:
    puVar14 = (undefined4 *)(iVar7 + lVar13);
    puVar12 = *(undefined4 **)param_3[1];
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar12 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,puVar14,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,puVar14,4);
      }
    }
    else {
      *puVar14 = *puVar12;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    iVar8 = *param_2;
    *param_2 = iVar8 + 4;
    lVar13 = (longlong)iVar8 + param_1[9];
    puVar12 = *(undefined4 **)param_3[1];
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar12 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,lVar13 + 4,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,lVar13 + 4,4);
      }
    }
    else {
      *(undefined4 *)(lVar13 + 4) = *puVar12;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    iVar8 = *param_2;
    *param_2 = iVar8 + 4;
    lVar13 = (longlong)iVar8 + param_1[9];
    puVar12 = *(undefined4 **)param_3[1];
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar12 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,lVar13 + 4,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,lVar13 + 4,4);
      }
    }
    else {
      *(undefined4 *)(lVar13 + 4) = *puVar12;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    iVar8 = *param_2;
    *param_2 = iVar8 + 4;
    lVar13 = (longlong)iVar8 + param_1[9];
    puVar12 = *(undefined4 **)param_3[1];
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar12 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,lVar13 + 4,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,lVar13 + 4,4);
      }
    }
    else {
      *(undefined4 *)(lVar13 + 4) = *puVar12;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    iVar8 = *param_2;
    *param_2 = iVar8 + 4;
    lVar13 = (longlong)iVar8 + param_1[9];
    puVar12 = *(undefined4 **)param_3[1];
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar12 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,lVar13 + 4,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,lVar13 + 4,4);
      }
    }
    else {
      *(undefined4 *)(lVar13 + 4) = *puVar12;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    iVar8 = *param_2;
    *param_2 = iVar8 + 4;
    lVar13 = (longlong)iVar8 + param_1[9];
    puVar12 = *(undefined4 **)param_3[1];
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar12 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,lVar13 + 4,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,lVar13 + 4,4);
      }
    }
    else {
      *(undefined4 *)(lVar13 + 4) = *puVar12;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    iVar8 = *param_2;
    *param_2 = iVar8 + 4;
    lVar13 = (longlong)iVar8 + param_1[9];
    puVar12 = *(undefined4 **)param_3[1];
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar12 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,lVar13 + 4,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,lVar13 + 4,4);
      }
    }
    else {
      *(undefined4 *)(lVar13 + 4) = *puVar12;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    iVar8 = *param_2;
    *param_2 = iVar8 + 4;
    lVar13 = (longlong)iVar8 + param_1[9];
    puVar12 = *(undefined4 **)param_3[1];
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar12 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,lVar13 + 4,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        puVar12 = (undefined4 *)(lVar13 + 4);
        goto LAB_141724f41;
      }
    }
    else {
      *(undefined4 *)(lVar13 + 4) = *puVar12;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
LAB_141724f4f:
    iVar8 = *param_2;
    *param_2 = iVar8 + 4;
    lVar13 = (longlong)iVar8 + param_1[9];
    puVar12 = *(undefined4 **)param_3[1];
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar12 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,lVar13 + 4,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,lVar13 + 4,4);
      }
    }
    else {
      *(undefined4 *)(lVar13 + 4) = *puVar12;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    iVar8 = *param_2;
    *param_2 = iVar8 + 4;
    lVar13 = param_1[9] + (longlong)iVar8;
    puVar12 = *(undefined4 **)param_3[1];
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar12 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,lVar13 + 4,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,lVar13 + 4,4);
      }
LAB_14172500a:
      *param_2 = *param_2 + 4;
    }
    else {
      *(undefined4 *)(lVar13 + 4) = *puVar12;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
      *param_2 = *param_2 + 4;
    }
    break;
  case 0x2e:
    local_res8 = 0;
    if ((*(byte *)(param_3 + 5) & 1) == 0) {
      local_res8 = *(undefined8 *)(iVar7 + lVar13);
      local_res10 = local_res8;
    }
    (**(code **)(*param_3 + 0x30))(param_3,&local_res8);
    if ((*(byte *)(param_3 + 5) & 2) == 0) {
      local_res10 = local_res8;
      *(undefined8 *)((longlong)*param_2 + param_1[9]) = local_res8;
    }
    iVar8 = *param_2;
    *param_2 = iVar8 + 8;
    if ((*(byte *)(param_3 + 5) & 2) == 0) {
      FUN_14171d650((longlong)iVar8 + param_1[9]);
    }
    goto switchD_14172454d_caseD_4;
  case 0x2f:
    local_res8 = 0;
    if ((*(byte *)(param_3 + 5) & 1) == 0) {
      local_res8 = *(undefined8 *)(iVar7 + lVar13);
      local_res10 = local_res8;
    }
    (**(code **)(*param_3 + 0x30))(param_3,&local_res8);
    if ((*(byte *)(param_3 + 5) & 2) == 0) {
      local_res10 = local_res8;
      *(undefined8 *)((longlong)*param_2 + param_1[9]) = local_res8;
    }
    iVar8 = *param_2;
    *param_2 = iVar8 + 8;
    lVar13 = (longlong)iVar8 + param_1[9];
    puVar12 = *(undefined4 **)param_3[1];
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar12 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,lVar13 + 8,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,lVar13 + 8,4);
      }
    }
    else {
      *(undefined4 *)(lVar13 + 8) = *puVar12;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    *param_2 = *param_2 + 4;
    do {
      iVar8 = (**(code **)(*param_1 + 0x2b8))(param_1,param_2,param_3);
    } while (iVar8 != 0x30);
    break;
  case 0x31:
    lVar13 = FUN_1417a53c0(param_1);
    if ((lVar13 == 0) || (((*(byte *)(param_3 + 5) & 1) == 0 || (0x12e < (int)param_3[8])))) {
      (**(code **)(*param_1 + 0x2b8))(param_1,param_2,param_3);
    }
    else {
      local_res8 = 0;
      (**(code **)(*param_3 + 0x30))(param_3,&local_res8);
      if ((*(byte *)(param_3 + 5) & 2) == 0) {
        local_res10 = local_res8;
        *(undefined8 *)((longlong)*param_2 + param_1[9]) = local_res8;
      }
      *param_2 = *param_2 + 8;
    }
    do {
      iVar8 = (**(code **)(*param_1 + 0x2b8))(param_1,param_2,param_3);
    } while (iVar8 != 0x32);
    break;
  case 0x34:
    do {
      puVar15 = (undefined2 *)(iVar7 + lVar13);
      puVar5 = *(undefined2 **)param_3[1];
      if ((undefined2 *)((undefined8 *)param_3[1])[1] < puVar5 + 1) {
        (**(code **)(*param_3 + 0x50))(param_3,puVar15,2);
        if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_3,puVar15,2);
        }
      }
      else {
        *puVar15 = *puVar5;
        *(longlong *)param_3[1] = *(longlong *)param_3[1] + 2;
      }
      iVar8 = *param_2;
      iVar7 = iVar8 + 2;
      *param_2 = iVar7;
      lVar13 = param_1[9];
    } while ((*(char *)((longlong)iVar8 + 1 + lVar13) != '\0') ||
            (*(char *)((longlong)iVar7 + -2 + lVar13) != '\0'));
    break;
  case 0x35:
    FUN_1404c11e0(param_3,iVar7 + lVar13);
    *param_2 = *param_2 + 8;
    break;
  case 0x36:
    puVar11 = (undefined8 *)(iVar7 + lVar13);
    puVar4 = *(undefined8 **)param_3[1];
    if ((undefined8 *)((longlong *)param_3[1])[1] < puVar4 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,puVar11,8);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,puVar11,8);
      }
      *param_2 = *param_2 + 8;
    }
    else {
      *puVar11 = *puVar4;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 8;
      *param_2 = *param_2 + 8;
    }
    break;
  case 0x38:
    puVar9 = (undefined1 *)(iVar7 + lVar13);
LAB_14172569e:
    puVar10 = *(undefined1 **)param_3[1];
    if ((undefined1 *)((undefined8 *)param_3[1])[1] < puVar10 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,puVar9,1);
      *param_2 = *param_2 + 1;
    }
    else {
      *puVar9 = *puVar10;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 1;
      *param_2 = *param_2 + 1;
    }
    goto switchD_14172454d_caseD_4;
  case 0x39:
    (**(code **)(*param_1 + 0x2b8))(param_1,param_2,param_3);
    puVar14 = (undefined4 *)((longlong)*param_2 + param_1[9]);
    puVar12 = *(undefined4 **)param_3[1];
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar12 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,puVar14,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,puVar14,4);
      }
    }
    else {
      *puVar14 = *puVar12;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    *param_2 = *param_2 + 4;
    do {
      iVar8 = (**(code **)(*param_1 + 0x2b8))(param_1,param_2,param_3);
    } while (iVar8 != 0x3a);
    break;
  case 0x3b:
    (**(code **)(*param_1 + 0x2b8))(param_1,param_2,param_3);
    puVar14 = (undefined4 *)((longlong)*param_2 + param_1[9]);
    puVar12 = *(undefined4 **)param_3[1];
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar12 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,puVar14,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,puVar14,4);
      }
    }
    else {
      *puVar14 = *puVar12;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    *param_2 = *param_2 + 4;
    do {
      iVar8 = (**(code **)(*param_1 + 0x2b8))(param_1,param_2,param_3);
    } while (iVar8 != 0x3c);
    break;
  case 0x3d:
    local_res8 = 0;
    if ((*(byte *)(param_3 + 5) & 1) == 0) {
      local_res8 = *(undefined8 *)(iVar7 + lVar13);
      local_res10 = local_res8;
    }
    (**(code **)(*param_3 + 0x30))(param_3,&local_res8);
    if ((*(byte *)(param_3 + 5) & 2) == 0) {
      local_res10 = local_res8;
      *(undefined8 *)((longlong)*param_2 + param_1[9]) = local_res8;
    }
    iVar8 = *param_2;
    *param_2 = iVar8 + 8;
    lVar13 = (longlong)iVar8 + param_1[9];
    puVar12 = *(undefined4 **)param_3[1];
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar12 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,lVar13 + 8,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,lVar13 + 8,4);
      }
    }
    else {
      *(undefined4 *)(lVar13 + 8) = *puVar12;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    *param_2 = *param_2 + 4;
    do {
      iVar8 = (**(code **)(*param_1 + 0x2b8))(param_1,param_2,param_3);
    } while (iVar8 != 0x3e);
    break;
  case 0x3f:
    local_res8 = 0;
    if ((*(byte *)(param_3 + 5) & 1) == 0) {
      local_res8 = *(undefined8 *)(iVar7 + lVar13);
      local_res10 = local_res8;
    }
    (**(code **)(*param_3 + 0x30))(param_3,&local_res8);
    if ((*(byte *)(param_3 + 5) & 2) == 0) {
      local_res10 = local_res8;
      *(undefined8 *)((longlong)*param_2 + param_1[9]) = local_res8;
    }
    iVar8 = *param_2;
    local_res8 = 0;
    *param_2 = iVar8 + 8;
    if ((*(byte *)(param_3 + 5) & 1) == 0) {
      local_res8 = *(undefined8 *)((longlong)(iVar8 + 8) + param_1[9]);
      local_res10 = local_res8;
    }
    (**(code **)(*param_3 + 0x30))(param_3,&local_res8);
    if ((*(byte *)(param_3 + 5) & 2) == 0) {
      local_res10 = local_res8;
      *(undefined8 *)((longlong)*param_2 + param_1[9]) = local_res8;
    }
    iVar8 = *param_2;
    *param_2 = iVar8 + 8;
    lVar13 = (longlong)iVar8 + param_1[9];
    puVar12 = *(undefined4 **)param_3[1];
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar12 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,lVar13 + 8,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,lVar13 + 8,4);
      }
    }
    else {
      *(undefined4 *)(lVar13 + 8) = *puVar12;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    *param_2 = *param_2 + 4;
    do {
      iVar8 = (**(code **)(*param_1 + 0x2b8))(param_1,param_2,param_3);
    } while (iVar8 != 0x40);
    break;
  case 0x42:
  case 100:
    local_res8 = 0;
    if ((*(byte *)(param_3 + 5) & 1) == 0) {
      local_res8 = *(undefined8 *)(iVar7 + lVar13);
      local_res10 = local_res8;
    }
    (**(code **)(*param_3 + 0x30))(param_3,&local_res8);
    if ((*(byte *)(param_3 + 5) & 2) != 0) goto LAB_141724937;
    local_res10 = local_res8;
    *(undefined8 *)((longlong)*param_2 + param_1[9]) = local_res8;
    *param_2 = *param_2 + 8;
    goto switchD_14172454d_caseD_4;
  case 0x50:
    if ((*(byte *)(param_3 + 5) & 1) != 0) {
      *(undefined1 *)(lVar6 + lVar13) = 0x5e;
    }
    break;
  case 0x52:
  case 0x54:
  case 0x55:
    local_res8 = 0;
    if ((*(byte *)(param_3 + 5) & 1) == 0) {
      local_res8 = *(undefined8 *)(iVar7 + lVar13);
      local_res10 = local_res8;
    }
    (**(code **)(*param_3 + 0x30))(param_3,&local_res8);
    if ((*(byte *)(param_3 + 5) & 2) == 0) {
      local_res10 = local_res8;
      *(undefined8 *)((longlong)*param_2 + param_1[9]) = local_res8;
    }
    iVar8 = *param_2;
    *param_2 = iVar8 + 8;
    if ((*(byte *)(param_3 + 5) & 2) == 0) {
      FUN_14171d650((longlong)iVar8 + param_1[9]);
    }
    goto switchD_14172454d_caseD_4;
  case 0x61:
    local_res8 = 0;
    if ((*(byte *)(param_3 + 5) & 1) == 0) {
      local_38._0_4_ = (undefined4)*(undefined8 *)(iVar7 + lVar13);
      local_res8 = CONCAT44(*(undefined4 *)((longlong)iVar7 + 8 + lVar13),(undefined4)local_38);
    }
    (**(code **)(*param_3 + 0x40))(param_3,&local_res8);
    if ((*(byte *)(param_3 + 5) & 2) == 0) {
      iVar8 = *param_2;
      lVar13 = param_1[9];
      *(undefined8 *)(iVar8 + lVar13) = CONCAT44((undefined4)local_res8,(undefined4)local_res8);
      *(undefined4 *)((undefined8 *)(iVar8 + lVar13) + 1) = local_res8._4_4_;
    }
    *param_2 = *param_2 + 0xc;
switchD_14172454d_caseD_14:
    (**(code **)(*param_1 + 0x2b8))(param_1,param_2,param_3);
switchD_14172454d_caseD_4:
    (**(code **)(*param_1 + 0x2b8))(param_1,param_2,param_3);
    break;
  case 99:
    local_res8 = 0;
    if ((*(byte *)(param_3 + 5) & 1) == 0) {
      local_res8 = *(undefined8 *)(iVar7 + lVar13);
      local_res10 = local_res8;
    }
    (**(code **)(*param_3 + 0x30))(param_3,&local_res8);
    if ((*(byte *)(param_3 + 5) & 2) == 0) {
      local_res10 = local_res8;
      *(undefined8 *)((longlong)*param_2 + param_1[9]) = local_res8;
    }
    iVar8 = *param_2;
    *param_2 = iVar8 + 8;
    if ((*(byte *)(param_3 + 5) & 2) == 0) {
      FUN_14171d650((longlong)iVar8 + param_1[9]);
    }
    do {
      iVar8 = (**(code **)(*param_1 + 0x2b8))(param_1,param_2,param_3);
    } while (iVar8 != 0x16);
    break;
  case 0x65:
    local_res8 = 0;
    if ((*(byte *)(param_3 + 5) & 1) == 0) {
      local_res8 = *(undefined8 *)(iVar7 + lVar13);
      local_res10 = local_res8;
    }
    (**(code **)(*param_3 + 0x30))(param_3,&local_res8);
    if ((*(byte *)(param_3 + 5) & 2) == 0) {
      local_res10 = local_res8;
      *(undefined8 *)((longlong)*param_2 + param_1[9]) = local_res8;
    }
    iVar8 = *param_2;
    *param_2 = iVar8 + 8;
    lVar13 = (longlong)iVar8 + param_1[9];
    puVar12 = *(undefined4 **)param_3[1];
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar12 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,lVar13 + 8,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,lVar13 + 8,4);
      }
    }
    else {
      *(undefined4 *)(lVar13 + 8) = *puVar12;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    *param_2 = *param_2 + 4;
    do {
      iVar8 = (**(code **)(*param_1 + 0x2b8))(param_1,param_2,param_3);
    } while (iVar8 != 0x66);
    break;
  case 0x69:
    puVar15 = (undefined2 *)(iVar7 + lVar13);
    puVar5 = *(undefined2 **)param_3[1];
    if ((undefined2 *)((undefined8 *)param_3[1])[1] < puVar5 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,puVar15,2);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,puVar15,2);
      }
    }
    else {
      *puVar15 = *puVar5;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 2;
    }
    iVar8 = *param_2;
    *param_2 = iVar8 + 2;
    uVar3 = *(ushort *)((longlong)iVar8 + param_1[9]);
    lVar13 = param_1[9] + (longlong)iVar8;
    puVar12 = *(undefined4 **)param_3[1];
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar12 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,lVar13 + 2,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,lVar13 + 2,4);
      }
    }
    else {
      *(undefined4 *)(lVar13 + 2) = *puVar12;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
    *param_2 = *param_2 + 4;
    (**(code **)(*param_1 + 0x2b8))(param_1,param_2,param_3);
    if (uVar3 != 0) {
      uVar16 = (ulonglong)uVar3;
      do {
        (**(code **)(*param_1 + 0x2b8))(param_1,param_2,param_3);
        puVar14 = (undefined4 *)((longlong)*param_2 + param_1[9]);
        puVar12 = *(undefined4 **)param_3[1];
        if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar12 + 1) {
          (**(code **)(*param_3 + 0x50))(param_3,puVar14,4);
          if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_3,puVar14,4);
          }
        }
        else {
          *puVar14 = *puVar12;
          *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
        }
        *param_2 = *param_2 + 4;
        (**(code **)(*param_1 + 0x2b8))(param_1,param_2,param_3);
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    (**(code **)(*param_1 + 0x2b8))(param_1,param_2,param_3);
    break;
  case 0x6a:
    if (*(char *)(iVar7 + lVar13) == '\x04') {
      iVar7 = iVar8 + 0xd;
    }
    *param_2 = iVar7 + 1;
    break;
  case 0xc0:
    puVar15 = (undefined2 *)(iVar7 + lVar13);
    puVar5 = *(undefined2 **)param_3[1];
    if ((undefined2 *)((undefined8 *)param_3[1])[1] < puVar5 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,puVar15,2);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,puVar15,2);
      }
    }
    else {
      *puVar15 = *puVar5;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 2;
    }
    *param_2 = *param_2 + 2;
    iVar8 = *param_2;
    lVar13 = param_1[9];
    do {
      puVar15 = (undefined2 *)(iVar8 + lVar13);
      puVar5 = *(undefined2 **)param_3[1];
      if ((undefined2 *)((undefined8 *)param_3[1])[1] < puVar5 + 1) {
        (**(code **)(*param_3 + 0x50))(param_3,puVar15,2);
        if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_3,puVar15,2);
        }
      }
      else {
        *puVar15 = *puVar5;
        *(longlong *)param_3[1] = *(longlong *)param_3[1] + 2;
      }
      iVar7 = *param_2;
      iVar8 = iVar7 + 2;
      *param_2 = iVar8;
      lVar13 = param_1[9];
    } while ((*(char *)((longlong)iVar7 + 1 + lVar13) != '\0') ||
            (*(char *)((longlong)iVar8 + -2 + lVar13) != '\0'));
    break;
  default:
    goto switchD_14172454d_default;
  }
switchD_14172454d_default:
  return uVar1;
}



// FUNCTION 141725c00 FUN_141725c00 body=585 status=ok
// SIG undefined FUN_141725c00(void)

void FUN_141725c00(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined2 *puVar4;
  undefined1 local_res8 [8];
  undefined2 *local_38;
  undefined8 local_30;
  code *local_28;
  undefined1 *puStack_20;
  
  puStack_20 = local_res8;
  local_res8[0] = 0;
  local_28 = FUN_1406ddef0;
  lVar2 = FUN_1415d8310(&local_28,&DAT_14622e6dc);
  lVar1 = *(longlong *)(param_1 + 0x78);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x10) == 0)) {
    local_28 = (code *)0x0;
    puStack_20 = (undefined1 *)0x5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,&DAT_143f3edc8,10);
  }
  else {
    UObjectBaseUtility::GetFullName(lVar1,&local_28,0);
  }
  lVar1 = *(longlong *)(lVar2 + 0x68);
  pcVar3 = (code *)&DAT_143f3eda8;
  if ((int)puStack_20 != 0) {
    pcVar3 = local_28;
  }
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x10) == 0)) {
    local_38 = (undefined2 *)0x0;
    local_30 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,&DAT_143f3edc8,10);
  }
  else {
    UObjectBaseUtility::GetFullName(lVar1,&local_38,0);
  }
  puVar4 = &DAT_143f3eda8;
  if ((int)local_30 != 0) {
    puVar4 = local_38;
  }
  LowLevelFatalErrorHandler
            ("Unknown",0x2b,
             L"FDuplicateDataReader Overread. SerializedObject = %s SerializedProperty = %s",puVar4,
             pcVar3);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_28 != (code *)0x0) {
    FMemory::Free();
  }
  lVar1 = *(longlong *)(param_1 + 0x78);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x10) == 0)) {
    local_38 = (undefined2 *)0x0;
    local_30 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,&DAT_143f3edc8,10);
  }
  else {
    UObjectBaseUtility::GetFullName(lVar1,&local_38,0);
  }
  lVar1 = *(longlong *)(lVar2 + 0x68);
  puVar4 = &DAT_143f3eda8;
  if ((int)local_30 != 0) {
    puVar4 = local_38;
  }
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x10) == 0)) {
    local_28 = (code *)0x0;
    puStack_20 = (undefined1 *)0x5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,&DAT_143f3edc8,10);
  }
  else {
    UObjectBaseUtility::GetFullName(lVar1,&local_28,0);
  }
  pcVar3 = (code *)&DAT_143f3eda8;
  if ((int)puStack_20 != 0) {
    pcVar3 = local_28;
  }
  FDebug::AssertFailed
            (&DAT_144cff516,"Unknown",0x2b,
             L"FDuplicateDataReader Overread. SerializedObject = %s SerializedProperty = %s",pcVar3,
             puVar4);
  if (local_28 != (code *)0x0) {
    FMemory::Free();
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141725e50 FUN_141725e50 body=299 status=ok
// SIG undefined FUN_141725e50(void)

void FUN_141725e50(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  
  if ((((*(byte *)(param_2 + 5) & 3) == 0) || ((*(byte *)(param_2 + 5) & 0x10) != 0)) ||
     (uVar3 = *(uint *)(param_1 + 0x11), (uVar3 & 0x20) != 0)) {
    uVar3 = *(uint *)(param_1 + 0x11);
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) || ((uVar3 & 0x800) != 0)) {
    (**(code **)(*param_2 + 0x70))(param_2,param_1);
    if ((uVar3 & 0x800) != 0) {
      cVar2 = (**(code **)(*(longlong *)param_1[0x12] + 0x38))
                        ((longlong *)param_1[0x12],param_2,param_3);
      if (cVar2 != '\0') goto LAB_141725f43;
    }
    if (bVar1) {
      if ((((*(byte *)(param_2 + 5) & 0x40) == 0) && (param_2[6] != 0)) &&
         (((*(byte *)(param_1 + 0x11) & 0x10) == 0 &&
          ((*(byte *)((longlong)param_2 + 0x2b) & 0x10) == 0)))) {
        FUN_141723e20(param_1,param_2,param_3,param_4,param_1);
      }
      else {
        (**(code **)(*param_1 + 0x298))(param_1,param_2,param_3);
      }
      goto LAB_141725f43;
    }
  }
  (**(code **)(*param_1 + 0x2a0))(param_1,param_2,param_3,param_1,param_4,0);
LAB_141725f43:
  if ((*(uint *)(param_1 + 0x11) & 0x40000) != 0) {
    (**(code **)(*(longlong *)param_1[0x12] + 0x48))((longlong *)param_1[0x12],param_2,param_3);
  }
  return;
}



// FUNCTION 141725f90 FUN_141725f90 body=58 status=ok
// SIG undefined FUN_141725f90(void)

void FUN_141725f90(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x30);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    FClassBaseChain::ReinitializeBaseChainArray(param_1 + 0x88);
  }
  return;
}



// FUNCTION 141725ff0 FUN_141725ff0 body=1956 status=ok
// SIG undefined FUN_141725ff0(void)

void FUN_141725ff0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  uint uVar9;
  byte bVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  int iVar17;
  longlong local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  int local_158 [2];
  longlong local_150;
  longlong local_148 [2];
  longlong local_138 [2];
  longlong local_128;
  longlong local_120;
  int local_100;
  int local_fc;
  undefined1 local_c8 [16];
  undefined1 local_b8 [56];
  int local_80 [2];
  undefined8 local_78;
  
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x58);
    bVar10 = 0;
    plVar15 = (longlong *)0x0;
    iVar5 = 0;
    iVar17 = iVar5;
    if (plVar7 != (longlong *)0x0) {
      iVar17 = (int)plVar7[6];
    }
    FPropertyTag::FPropertyTag(local_138);
    FUN_1417692e0(param_2,local_138);
    if (local_128 == 0) {
      return;
    }
LAB_141726077:
    lVar6 = FName::GetNames();
    iVar4 = (int)local_128;
    if ((iVar4 < 0) || (*(int *)(lVar6 + 0x400) <= iVar4)) {
LAB_1417260db:
      bVar1 = false;
    }
    else {
      uVar9 = iVar4 >> 0x1f & 0x3fff;
      uVar3 = iVar4 + uVar9;
      lVar14 = (longlong)((int)uVar3 >> 0xe);
      lVar13 = (longlong)(int)((uVar3 & 0x3fff) - uVar9);
      if ((*(longlong *)(*(longlong *)(lVar6 + lVar14 * 8) + lVar13 * 8) == 0) ||
         ((*(int *)(lVar6 + 0x400) <= iVar4 ||
          (*(longlong *)(*(longlong *)(lVar6 + lVar14 * 8) + lVar13 * 8) == 0))))
      goto LAB_1417260db;
      bVar1 = true;
    }
    if (!bVar1) {
      return;
    }
    if ((bVar10 != 0) && (iVar17 = iVar17 + -1, iVar17 < 1)) {
      for (plVar7 = (longlong *)plVar7[10]; iVar17 = iVar5, plVar7 != (longlong *)0x0;
          plVar7 = (longlong *)plVar7[10]) {
        cVar2 = FUN_141764c10(plVar7,param_2);
        if (cVar2 != '\0') {
          if (plVar7 != (longlong *)0x0) {
            iVar17 = (int)plVar7[6];
          }
          break;
        }
      }
    }
    if ((plVar7 == (longlong *)0x0) || (plVar11 = plVar7, plVar7[3] != local_128)) {
      plVar12 = plVar7;
      if (((*(byte *)((longlong)param_2 + 0x2b) & 4) != 0) &&
         ((*(uint *)(param_2 + 6) & 0x401000) == 0)) {
        UObjectBaseUtility::GetOutermost(param_1);
        lVar6 = param_1;
        if (param_1 == 0) goto LAB_141726198;
        do {
          lVar13 = FUN_14171cb10();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) goto LAB_141726270;
LAB_141726198:
          lVar6 = *(longlong *)(lVar6 + 0x20);
        } while (lVar6 != 0);
      }
      goto joined_r0x0001417261ab;
    }
    goto LAB_1417262af;
  }
  if (param_4 == 0) {
LAB_1417264ba:
    lVar6 = 0;
  }
  else {
    lVar6 = FUN_14171c950();
    if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
         ) != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar6 = param_4;
    if (!bVar1) goto LAB_1417264ba;
  }
  bVar10 = 0;
  if (lVar6 != 0) {
    bVar10 = *(byte *)(lVar6 + 0x88) >> 4 & 1;
  }
  if ((*(byte *)((longlong)param_2 + 0x2b) & 0x10) == 0) {
    puVar16 = (undefined8 *)0x0;
  }
  else {
    puVar16 = (undefined8 *)param_2[0xd];
  }
  if ((*(byte *)((longlong)param_2 + 0x2b) & 0x10) == 0) {
    plVar7 = *(longlong **)(param_1 + 0x58);
  }
  else {
    if (puVar16 == (undefined8 *)0x0) goto LAB_141726770;
    plVar7 = (longlong *)*puVar16;
  }
  while (plVar7 != (longlong *)0x0) {
    cVar2 = FUN_141764c10(plVar7,param_2);
    if (cVar2 != '\0') {
      if (puVar16 == (undefined8 *)0x0) {
        iVar5 = (int)plVar7[6];
        iVar17 = 0;
      }
      else {
        iVar17 = *(int *)(puVar16 + 1);
        iVar5 = iVar17 + 1;
      }
      for (; iVar17 < iVar5; iVar17 = iVar17 + 1) {
        lVar6 = (longlong)(*(int *)((longlong)plVar7 + 0x34) * iVar17) +
                (longlong)*(int *)((longlong)plVar7 + 0x44);
        lVar13 = param_3 + lVar6;
        if (param_5 == 0) {
LAB_14172659c:
          lVar6 = 0;
        }
        else {
          if (param_4 == 0) {
            iVar4 = 0x7fffffff;
          }
          else {
            iVar4 = *(int *)(param_4 + 0x40);
          }
          if (iVar4 < (int)plVar7[6] * *(int *)((longlong)plVar7 + 0x34) +
                      *(int *)((longlong)plVar7 + 0x44)) goto LAB_14172659c;
          lVar6 = lVar6 + param_5;
        }
        if ((puVar16 == (undefined8 *)0x0) && ((*(byte *)((longlong)param_2 + 0x29) & 0x40) == 0)) {
          if (param_5 == 0) {
            if (param_1 != 0) {
              lVar14 = FUN_14171bfe0();
              if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar14 + 0x90) * 8) != lVar14 + 0x88)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (bVar1) goto LAB_1417265e9;
            }
            goto LAB_141726617;
          }
LAB_1417265e9:
          if (((plVar7[7] & 0x400000000000000U) != 0) ||
             (cVar2 = (**(code **)(*plVar7 + 0x2b8))(plVar7,lVar13,lVar6,param_2[6]), cVar2 == '\0')
             ) goto LAB_141726617;
        }
        else {
LAB_141726617:
          lVar14 = 0;
          if (bVar10 == 0) {
            lVar14 = lVar6;
          }
          FUN_141768c80(local_b8,param_2,plVar7,iVar17,lVar13,lVar14);
          FUN_1417692e0(param_2,local_b8);
          iVar4 = (**(code **)(*param_2 + 0x90))(param_2);
          lVar6 = 0;
          if (((*(byte *)((longlong)param_2 + 0x2b) & 0x10) != 0) && (puVar16 != (undefined8 *)0x0))
          {
            lVar6 = param_2[0xd];
            param_2[0xd] = puVar16[2];
          }
          FUN_14177e730(local_b8,param_2,plVar7,lVar13,lVar14);
          if (lVar6 != 0) {
            param_2[0xd] = lVar6;
          }
          local_80[0] = (**(code **)(*param_2 + 0x90))(param_2);
          local_80[0] = local_80[0] - iVar4;
          if (0 < local_80[0]) {
            uVar8 = (**(code **)(*param_2 + 0x90))(param_2);
            (**(code **)(*param_2 + 0xa8))(param_2,local_78);
            plVar15 = (longlong *)param_2[1];
            if ((int *)plVar15[1] < (int *)*plVar15 + 1) {
              (**(code **)(*param_2 + 0x50))(param_2,local_80,4);
              if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
                FArchive::ByteSwap(param_2,local_80,4);
              }
            }
            else {
              local_80[0] = *(int *)*plVar15;
              *plVar15 = *plVar15 + 4;
            }
            (**(code **)(*param_2 + 0xa8))(param_2,uVar8);
          }
        }
      }
    }
    if ((*(byte *)((longlong)param_2 + 0x2b) & 0x10) == 0) {
      plVar7 = (longlong *)plVar7[10];
    }
    else {
      if ((puVar16 == (undefined8 *)0x0) ||
         (puVar16 = (undefined8 *)puVar16[3], puVar16 == (undefined8 *)0x0)) break;
      plVar7 = (longlong *)*puVar16;
    }
  }
LAB_141726770:
  (**(code **)(*param_2 + 0x40))(param_2,&DAT_1469e70a0);
  return;
  while (lVar6 = *(longlong *)(lVar6 + 0x30), lVar6 != 0) {
LAB_141726270:
    UProperty::FindRedirectedPropertyName(&local_150,lVar6,local_128);
    if (local_150 != 0) {
      local_128 = local_150;
      break;
    }
  }
joined_r0x0001417261ab:
  do {
    if (plVar12 == (longlong *)0x0) break;
    if (plVar12[3] == local_128) goto LAB_1417262ab;
    plVar12 = (longlong *)plVar12[10];
  } while( true );
  for (plVar12 = *(longlong **)(param_1 + 0x58); plVar11 = plVar15, plVar12 != (longlong *)0x0;
      plVar12 = (longlong *)plVar12[10]) {
    if (plVar12 == plVar7) goto LAB_1417261f0;
    if (plVar12[3] == local_128) break;
  }
  if ((plVar12 == plVar7) || (plVar11 = plVar12, plVar12 == (longlong *)0x0)) {
LAB_1417261f0:
    local_188 = 0;
    plVar7 = &local_188;
    iVar17 = iVar5;
  }
  else {
LAB_1417262ab:
    iVar17 = (int)plVar12[6];
    plVar11 = plVar12;
LAB_1417262af:
    plVar7 = (longlong *)(**(code **)(*plVar11 + 0x338))(plVar11,local_c8);
  }
  lVar6 = *plVar7;
  if ((*(byte *)((longlong)param_2 + 0x2b) & 4) != 0) {
    local_180 = 10;
    if ((local_138[0] == 10) && (local_178 = 10, lVar6 == 10)) {
      FLinkerLoad::FindNewNameForStruct(local_148,local_120);
      if (local_148[0] == *(longlong *)(plVar11[0xe] + 0x18)) {
        local_120 = local_148[0];
      }
    }
    else {
      local_170 = 0x22;
      if ((lVar6 == 0x22) &&
         ((local_168 = 0x22, local_138[0] == 0x22 || (local_160 = 1, local_138[0] == 1)))) {
        FLinkerLoad::FindNewNameForEnum(local_158);
      }
    }
  }
  lVar13 = (**(code **)(*param_2 + 0x90))(param_2);
  bVar10 = 0;
  if ((plVar11 != (longlong *)0x0) &&
     (((((plVar11[7] & 0x800000000U) == 0 || (DAT_1468b6144 != '\0')) &&
       (bVar10 = 0, local_fc < (int)plVar11[6])) &&
      ((-1 < local_fc && (cVar2 = FUN_141764c10(plVar11,param_2), cVar2 != '\0')))))) {
    iVar4 = (**(code **)(*plVar11 + 0x2b0))(plVar11,local_138,param_2,param_3,param_4);
    if (iVar4 == 0) {
      if (local_138[0] == lVar6) {
        lVar6 = (longlong)(*(int *)((longlong)plVar11 + 0x34) * local_fc) +
                (longlong)*(int *)((longlong)plVar11 + 0x44);
        if (param_5 == 0) {
LAB_14172640d:
          plVar7 = plVar15;
        }
        else {
          if (param_4 == 0) {
            iVar4 = 0x7fffffff;
          }
          else {
            iVar4 = *(int *)(param_4 + 0x40);
          }
          plVar7 = (longlong *)(lVar6 + param_5);
          if (iVar4 < *(int *)((longlong)plVar11 + 0x34) * (int)plVar11[6] +
                      *(int *)((longlong)plVar11 + 0x44)) goto LAB_14172640d;
        }
        FUN_14177e730(local_138,param_2,plVar11,param_3 + lVar6,plVar7);
        bVar10 = ~*(byte *)((longlong)param_2 + 0x29) & 1;
        if (bVar10 != 0) goto LAB_141726445;
      }
    }
    else if (iVar4 == 2) {
      bVar10 = 1;
      goto LAB_141726445;
    }
  }
  (**(code **)(*param_2 + 0xa8))(param_2,local_100 + lVar13);
LAB_141726445:
  FPropertyTag::FPropertyTag(local_138);
  FUN_1417692e0(param_2,local_138);
  plVar7 = plVar11;
  if (local_128 == 0) {
    return;
  }
  goto LAB_141726077;
}



// FUNCTION 1417267a0 SetBulkDataFlags body=4 status=ok
// SIG undefined SetBulkDataFlags(void)

void FUntypedBulkData::SetBulkDataFlags(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | param_2;
  return;
}



// FUNCTION 1417267b0 SetDestinationRoot body=107 status=ok
// SIG undefined SetDestinationRoot(void)

void FObjectInstancingGraph::SetDestinationRoot(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined1 local_res8 [8];
  longlong *local_18;
  longlong *local_10;
  
  param_1[1] = param_2;
  if (param_3 == 0) {
    param_3 = FUN_14178ca30(param_2);
  }
  *param_1 = param_3;
  local_18 = param_1;
  local_10 = param_1 + 1;
  TSet<TTuple<UFlareCompany_*,__int64>,TDefaultMapHashableKeyFuncs<UFlareCompany_*,__int64,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UFlareCompany_*_const_&,__int64_&&>_>
            (param_1 + 3,local_res8,&local_18,0);
  *(byte *)(param_1 + 2) = (byte)(*(uint *)(param_2 + 8) >> 5) & 1;
  return;
}



// FUNCTION 141726820 FUN_141726820 body=69 status=ok
// SIG undefined FUN_141726820(void)

void FUN_141726820(longlong param_1,undefined8 param_2)

{
  FUN_1417a8df0();
  FUN_1406c5d90(param_1 + 0x150,0);
  *(undefined8 *)(param_1 + 0x30) = param_2;
  FClassBaseChain::ReinitializeBaseChainArray(param_1 + 0x88);
  FUN_1417a6460(param_1);
  return;
}



// FUNCTION 141726870 FUN_141726870 body=849 status=ok
// SIG undefined FUN_141726870(void)

void FUN_141726870(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  void *_Src;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 local_res8 [8];
  longlong *local_58;
  uint local_50;
  int local_4c;
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  if (((*(uint *)(param_1 + 0xb4) >> 0xb & 1) == 0) && (*(longlong *)(param_1 + 0x58) != 0)) {
    plVar1 = (longlong *)(param_1 + 0xe8);
    *(undefined4 *)(param_1 + 0xf0) = 0;
    if (*(int *)(param_1 + 0xf4) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
    }
    lVar4 = *(longlong *)(param_1 + 0x30);
    plVar2 = (longlong *)(param_1 + 0xd8);
    if (lVar4 == 0) {
      *(undefined4 *)(param_1 + 0xe0) = 0;
      if (*(int *)(param_1 + 0xe4) != 0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar2,0);
      }
    }
    else {
      FUN_141726870(lVar4);
      if (plVar2 != (longlong *)(lVar4 + 0xd8)) {
        iVar8 = *(int *)(lVar4 + 0xe0);
        _Src = *(void **)(lVar4 + 0xd8);
        *(int *)(param_1 + 0xe0) = iVar8;
        if ((iVar8 == 0) && (*(int *)(param_1 + 0xe4) == 0)) {
          *(undefined4 *)(param_1 + 0xe4) = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar2,iVar8);
          _guard_xfg_dispatch_icall_nop((void *)*plVar2,_Src,(longlong)iVar8 << 4);
        }
      }
    }
    local_40 = *(longlong *)(param_1 + 0x38);
    iVar8 = 0;
    plVar12 = (longlong *)0x0;
    local_4c = 0;
    local_58 = (longlong *)0x0;
    uVar10 = 0;
    local_32 = 0;
    local_38 = 0xffffffff;
    local_34 = 0x100;
    local_48 = param_1;
    FUN_1416fd4e0(&local_48);
    lVar4 = local_40;
    while (iVar9 = (int)uVar10, local_40 = lVar4, lVar4 != 0) {
      lVar6 = UProperty::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        if ((*(byte *)(lVar4 + 0x38) & 0x20) != 0) {
          iVar3 = *(int *)(param_1 + 0xf0);
          *(int *)(param_1 + 0xf0) = iVar3 + 1;
          if (*(int *)(param_1 + 0xf4) < iVar3 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
          }
          *(longlong *)(*plVar1 + (longlong)iVar3 * 8) = lVar4;
          if (*(longlong *)(lVar4 + 0x20) == param_1) {
            local_50 = iVar9 + 1;
            if (iVar8 < (int)local_50) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_58,uVar10);
              plVar12 = local_58;
              iVar8 = local_4c;
            }
            uVar10 = (ulonglong)local_50;
            plVar12[iVar9] = lVar4;
          }
        }
      }
      else {
        lVar6 = FUN_14171c5d0();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (((bVar5) && ((*(byte *)(lVar4 + 0x88) & 0x40) != 0)) &&
           (*(longlong *)(lVar4 + 0x30) == 0)) {
          iVar9 = *(int *)(param_1 + 0xf0);
          *(int *)(param_1 + 0xf0) = iVar9 + 1;
          if (*(int *)(param_1 + 0xf4) < iVar9 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar9);
          }
          *(longlong *)(*plVar1 + (longlong)iVar9 * 8) = lVar4;
        }
      }
      local_40 = *(longlong *)(lVar4 + 0x28);
      FUN_1416fd4e0(&local_48);
      lVar4 = local_40;
    }
    AlgoImpl::
    IntroSortInternal<UProperty_*,FIdentityFunctor,TDereferenceWrapper<UProperty_*,_FClassNetCacheMgr::SortProperties_::_2_::FCompareUFieldOffsets>_>
              (plVar12,(longlong)iVar9,local_res8[0],local_res8);
    plVar11 = plVar12;
    if (0 < iVar9) {
      do {
        iVar8 = 0;
        *(undefined2 *)(*plVar11 + 0x40) = *(undefined2 *)(param_1 + 0xe0);
        if (0 < *(int *)(*plVar11 + 0x30)) {
          do {
            iVar9 = *(int *)(param_1 + 0xe0);
            *(int *)(param_1 + 0xe0) = iVar9 + 1;
            if (*(int *)(param_1 + 0xe4) < iVar9 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar9);
            }
            plVar7 = (longlong *)((longlong)iVar9 * 0x10 + *plVar2);
            if (plVar7 != (longlong *)0x0) {
              *plVar7 = *plVar11;
              *(int *)(plVar7 + 1) = iVar8;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < *(int *)(*plVar11 + 0x30));
        }
        uVar10 = uVar10 - 1;
        plVar11 = plVar11 + 1;
      } while (uVar10 != 0);
    }
    if (*(int *)(param_1 + 0xf4) != *(int *)(param_1 + 0xf0)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1);
    }
    FUN_141712a30(*plVar1,(longlong)*(int *)(param_1 + 0xf0),local_res8[0],local_res8);
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 0x800;
    if (plVar12 != (longlong *)0x0) {
      FMemory::Free(plVar12);
    }
  }
  return;
}



// FUNCTION 141726bd0 FUN_141726bd0 body=177 status=ok
// SIG undefined FUN_141726bd0(void)

undefined8 FUN_141726bd0(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  DWORD DVar4;
  int iVar5;
  
  if ((DAT_1468c21ab != '\0') &&
     (((*(uint *)(param_1 + 1) & 1) == 0 || ((*(uint *)(param_1 + 1) >> 8 & 1) == 0)))) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 1);
  if ((1 < (int)param_1[0xc]) && (cVar3 = FUN_1415bac00(), cVar3 != '\0')) {
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar3 == '\0') &&
       ((DAT_1468c21ae != '\0' && (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)))) {
      return 0;
    }
    if (((uVar1 >> 7 & 1) == 0) &&
       (iVar2 = *(int *)((longlong)param_1 + 0xc), iVar5 = (**(code **)(*param_1 + 8))(param_1),
       iVar5 * iVar2 <= DAT_1464b49d0)) {
      return 0;
    }
    if (-1 < DAT_1464b49d0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141726c90 FUN_141726c90 body=290 status=ok
// SIG undefined FUN_141726c90(void)

void FUN_141726c90(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  char param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 *local_a8 [2];
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined4 local_68;
  code *local_58 [6];
  undefined8 local_28;
  undefined4 local_18;
  
  local_78 = 0;
  local_28 = 0;
  local_18 = 0;
  local_58[0] = AK::MemoryMgr::StartProfileThreadUsage;
  local_68 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_98);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = param_1;
    *puVar5 = &PTR_FUN_143f77b70;
  }
  local_a8[0] = &LAB_141717480;
  puVar5 = (undefined8 *)FUN_141710660(local_b8,2,local_a8,local_58);
  if ((undefined8 *)(param_1 + 0x48) != puVar5) {
    *(undefined8 *)(param_1 + 0x48) = *puVar5;
    *puVar5 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x50,puVar5 + 1);
  }
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b0 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar2 = (int *)((longlong)local_b0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  if (param_5 != '\0') {
    lVar4 = *param_2;
    lVar6 = (**(code **)(lVar4 + 0x90))(param_2);
    (**(code **)(lVar4 + 0xa8))(param_2,*(int *)(param_1 + 0x18) + lVar6);
  }
  return;
}



// FUNCTION 141726dc0 FUN_141726dc0 body=157 status=ok
// SIG undefined FUN_141726dc0(void)

void FUN_141726dc0(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e71a8) {
    _Init_thread_header(&DAT_1469e71a8);
    if (DAT_1469e71a8 == -1) {
      uVar1 = UPackage::GetPrivateStaticClass();
      DAT_1469e71a0 = StaticFindObjectChecked(uVar1,0,L"/Script/CoreUObject",0);
      _Init_thread_footer(&DAT_1469e71a8);
    }
  }
  uVar1 = FUN_14171c950();
  StaticFindObjectFastInternal(uVar1,DAT_1469e71a0,param_1,0,0,0,0);
  return;
}



// FUNCTION 141726e60 FUN_141726e60 body=77 status=ok
// SIG undefined FUN_141726e60(void)

void FUN_141726e60(longlong *param_1,undefined1 param_2)

{
  undefined1 local_98 [144];
  
  FArchive::FArchive(local_98);
  (**(code **)(*param_1 + 0x290))(param_1,local_98,param_2);
  FArchive::~FArchive(local_98);
  return;
}



// FUNCTION 141726eb0 FUN_141726eb0 body=511 status=ok
// SIG undefined FUN_141726eb0(void)

undefined8 FUN_141726eb0(longlong *param_1,ulonglong *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  undefined2 *puVar4;
  int local_res8 [4];
  uint local_res18 [2];
  undefined1 local_res20 [8];
  undefined2 *local_28;
  undefined8 local_20;
  
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    if ((*(byte *)(param_1 + 5) & 2) == 0) {
      return 1;
    }
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,(int)*param_2 < 0x19b);
    (**(code **)(*param_1 + 0x58))(param_1,local_res8,1);
    if ((char)local_res8[0] != '\0') {
      local_res18[0] = (uint)*param_2;
      (**(code **)(*param_1 + 0x60))(param_1,local_res18,0x19b);
      return 1;
    }
    puVar4 = (undefined2 *)FName::GetComparisonNameEntry(param_2);
    if (puVar4 == (undefined2 *)0x0) {
      local_20 = 10;
      local_28 = puVar4;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      FGenericPlatformString::Memcpy(local_28,L"*INVALID*",0x14);
    }
    else {
      FNameEntry::GetPlainNameString(puVar4,&local_28);
    }
    local_res18[0] = *(uint *)((longlong)param_2 + 4);
    plVar2 = (longlong *)FUN_14158ce90(param_1,&local_28);
    puVar1 = *(uint **)plVar2[1];
    if ((uint *)((undefined8 *)plVar2[1])[1] < puVar1 + 1) {
      (**(code **)(*plVar2 + 0x50))(plVar2,local_res18,4);
      if ((*(byte *)((longlong)plVar2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(plVar2,local_res18,4);
      }
    }
    else {
      local_res18[0] = *puVar1;
      *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 4;
    }
  }
  else {
    local_res8[0] = (uint)local_res8[0]._1_3_ << 8;
    (**(code **)(*param_1 + 0x58))(param_1,local_res8,1);
    if ((char)local_res8[0] != '\0') {
      (**(code **)(*param_1 + 0x60))(param_1,local_res18,0x19b);
      *param_2 = (ulonglong)local_res18[0];
      return 1;
    }
    local_28 = (undefined2 *)0x0;
    local_20 = 0;
    plVar2 = (longlong *)FUN_14158ce90(param_1,&local_28);
    puVar1 = *(uint **)plVar2[1];
    if ((uint *)((undefined8 *)plVar2[1])[1] < puVar1 + 1) {
      (**(code **)(*plVar2 + 0x50))(plVar2,local_res18,4);
      if ((*(byte *)((longlong)plVar2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(plVar2,local_res18,4);
      }
    }
    else {
      local_res18[0] = *puVar1;
      *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 4;
    }
    puVar4 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar4 = local_28;
    }
    puVar3 = (ulonglong *)FName::FName(local_res20,puVar4,local_res18[0],1);
    *param_2 = *puVar3;
  }
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 1417270b0 FUN_1417270b0 body=333 status=ok
// SIG undefined FUN_1417270b0(void)

void FUN_1417270b0(longlong param_1,uint param_2)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong local_28;
  longlong *local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  UObject::TagSubobjects();
  lVar6 = 0;
  if (param_1 == 0) {
    local_20 = (longlong *)0x0;
  }
  else {
    local_20 = *(longlong **)(param_1 + 0x38);
  }
  local_18 = 0xffffffff;
  local_14 = 0x100;
  local_12 = 0;
  local_28 = param_1;
  FUN_140472e10(&local_28);
  plVar2 = local_20;
  while (local_20 = plVar2, plVar2 != (longlong *)0x0) {
    uVar3 = *(uint *)((longlong)plVar2 + 0xc);
    lVar4 = lVar6;
    if ((int)uVar3 < (int)DAT_1469e91c4) {
      uVar5 = uVar3 & 0xffff;
      if ((int)uVar3 < 0) {
        uVar3 = uVar3 + 0xffff;
        uVar5 = uVar5 - 0x10000;
      }
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)uVar5 * 0x18;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) {
      *(uint *)(plVar2 + 1) = *(uint *)(plVar2 + 1) | param_2;
      (**(code **)(*plVar2 + 0x1a8))(plVar2,param_2);
    }
    local_20 = (longlong *)plVar2[5];
    FUN_140472e10(&local_28);
    plVar2 = local_20;
  }
  lVar4 = *(longlong *)(param_1 + 0xf8);
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    if ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0) {
      *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) | param_2;
      (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x1a8))(*(longlong **)(param_1 + 0xf8),param_2)
      ;
    }
  }
  return;
}



// FUNCTION 141727200 FUN_141727200 body=218 status=ok
// SIG undefined FUN_141727200(void)

void FUN_141727200(longlong param_1,uint param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong local_28;
  longlong *local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  UObject::TagSubobjects();
  if (param_1 == 0) {
    local_20 = (longlong *)0x0;
  }
  else {
    local_20 = *(longlong **)(param_1 + 0x38);
  }
  local_18 = 0xffffffff;
  local_14 = 0x100;
  local_12 = 0;
  local_28 = param_1;
  FUN_140472e10(&local_28);
  plVar1 = local_20;
  while (plVar1 != (longlong *)0x0) {
    uVar2 = *(uint *)((longlong)plVar1 + 0xc);
    if ((int)uVar2 < (int)DAT_1469e91c4) {
      uVar4 = uVar2 & 0xffff;
      if ((int)uVar2 < 0) {
        uVar2 = uVar2 + 0xffff;
        uVar4 = uVar4 - 0x10000;
      }
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)uVar4 * 0x18;
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0) {
      *(uint *)(plVar1 + 1) = *(uint *)(plVar1 + 1) | param_2;
      local_20 = plVar1;
      (**(code **)(*plVar1 + 0x1a8))(plVar1,param_2);
    }
    local_20 = (longlong *)plVar1[5];
    FUN_140472e10(&local_28);
    plVar1 = local_20;
  }
  return;
}



// FUNCTION 1417272e0 FUN_1417272e0 body=198 status=ok
// SIG undefined FUN_1417272e0(void)

bool FUN_1417272e0(longlong param_1,longlong param_2,char param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  
  if (((param_1 != 0) && (param_2 != 0)) && (*(int *)(param_1 + 0x40) == *(int *)(param_2 + 0x40)))
  {
    if (*(int *)(param_1 + 0x44) == *(int *)(param_2 + 0x44)) {
      bVar4 = true;
      plVar2 = *(longlong **)(param_1 + 0x58);
      plVar3 = *(longlong **)(param_2 + 0x58);
      do {
        if (plVar2 == plVar3) {
          return bVar4;
        }
        if ((((plVar2 == (longlong *)0x0) || (plVar3 == (longlong *)0x0)) ||
            ((param_3 != '\0' && (plVar2[3] != plVar3[3])))) ||
           ((*(int *)((longlong)plVar2 + 0x34) * (int)plVar2[6] !=
             *(int *)((longlong)plVar3 + 0x34) * (int)plVar3[6] ||
            (*(int *)((longlong)plVar2 + 0x44) != *(int *)((longlong)plVar3 + 0x44))))) {
          bVar4 = false;
        }
        else {
          cVar1 = (**(code **)(*plVar2 + 0x368))(plVar2,plVar3);
          bVar4 = cVar1 != '\0';
        }
        if (plVar2 != (longlong *)0x0) {
          plVar2 = (longlong *)plVar2[10];
        }
        if (plVar3 != (longlong *)0x0) {
          plVar3 = (longlong *)plVar3[10];
        }
      } while (bVar4 != false);
      return false;
    }
  }
  return false;
}



// FUNCTION 1417273b0 ToString body=37 status=ok
// SIG undefined ToString(void)

undefined8 FCoreRedirectObjectName::ToString(undefined8 *param_1,undefined8 param_2)

{
  CombineNames(param_2,*param_1,param_1[1],param_1[2]);
  return param_2;
}



// FUNCTION 1417273f0 Unlock body=49 status=ok
// SIG undefined Unlock(void)

void FUntypedBulkData::Unlock(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((*(byte *)(param_1 + 8) & 8) != 0) {
    FMemory::Free(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 141727430 UseBinarySerialization body=29 status=ok
// SIG undefined UseBinarySerialization(void)

uint UScriptStruct::UseBinarySerialization(longlong param_1,longlong param_2)

{
  uint uVar1;
  
  if (((*(byte *)(param_2 + 0x28) & 3) != 0) && ((*(byte *)(param_2 + 0x28) & 0x10) == 0)) {
    uVar1 = *(uint *)(param_1 + 0x88) & 0x20;
    if ((char)uVar1 == '\0') {
      return uVar1;
    }
  }
  return 1;
}



// FUNCTION 141727450 WaitForAsyncLoading body=100 status=ok
// SIG undefined WaitForAsyncLoading(void)

void FUntypedBulkData::WaitForAsyncLoading(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  do {
    do {
    } while (*(longlong *)(param_1 + 0x48) == 0);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x50);
    cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,1000,0);
  } while (cVar2 == '\0');
  return;
}



// FUNCTION 1417274c0 Warning body=54 status=ok
// SIG undefined Warning(void)

undefined8 FDeferredMessageLog::Warning(undefined8 param_1,undefined8 param_2)

{
  FUN_141624290(param_2,3);
  FUN_1417165e0(param_1,param_2);
  return param_2;
}



// FUNCTION 141727500 WriteObject body=29 status=ok
// SIG undefined WriteObject(void)

ulonglong UPackageMap::WriteObject(void)

{
  longlong *in_stack_00000028;
  
  if (*in_stack_00000028 != 0) {
    in_stack_00000028 = (longlong *)FMemory::Free();
  }
  return (ulonglong)in_stack_00000028 & 0xffffffffffffff00;
}



// FUNCTION 141727520 FUN_141727520 body=338 status=ok
// SIG undefined FUN_141727520(void)

longlong * FUN_141727520(void)

{
  longlong *plVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_98 [144];
  
  plVar1 = DAT_1469e7198;
  if (DAT_1469e7198 == (longlong *)0x0) {
    FUN_1417279b0();
    plVar1 = (longlong *)FUN_14171bfe0();
    UObjectForceRegistration(plVar1);
    plVar1[0x15] = (longlong)FUN_1417169e0;
    FName::FName(local_res8,L"ClassDefaultObject",1);
    UClass::EmitObjectReference(plVar1,0xf8,local_res8,1);
    FName::FName(local_res10,L"ClassWithin",1);
    UClass::EmitObjectReference(plVar1,0xc0,local_res10,1);
    FName::FName(local_res18,L"ClassGeneratedBy",1);
    UClass::EmitObjectReference(plVar1,200,local_res18,1);
    FName::FName(local_res20,L"NetFields",1);
    UClass::EmitObjectArrayReference(plVar1,0xe8,local_res20);
    FArchive::FArchive(local_98);
    (**(code **)(*plVar1 + 0x290))(plVar1,local_98,0);
    FArchive::~FArchive(local_98);
  }
  DAT_1469e7198 = plVar1;
  return plVar1;
}



// FUNCTION 141727680 FUN_141727680 body=114 status=ok
// SIG undefined FUN_141727680(void)

longlong * FUN_141727680(void)

{
  longlong *plVar1;
  undefined1 local_98 [144];
  
  plVar1 = DAT_1469e7258;
  if (DAT_1469e7258 == (longlong *)0x0) {
    FUN_141727830();
    plVar1 = (longlong *)FUN_14171c1a0();
    UObjectForceRegistration(plVar1);
    FArchive::FArchive(local_98);
    (**(code **)(*plVar1 + 0x290))(plVar1,local_98,0);
    FArchive::~FArchive(local_98);
  }
  DAT_1469e7258 = plVar1;
  return plVar1;
}



// FUNCTION 141727700 FUN_141727700 body=128 status=ok
// SIG undefined FUN_141727700(void)

longlong * FUN_141727700(void)

{
  longlong *plVar1;
  undefined1 local_98 [144];
  
  plVar1 = DAT_1469e7268;
  if (DAT_1469e7268 == (longlong *)0x0) {
    FUN_141727520();
    plVar1 = (longlong *)UDynamicClass::GetPrivateStaticClass();
    UObjectForceRegistration(plVar1);
    plVar1[0x15] = (longlong)UDynamicClass::AddReferencedObjects;
    FArchive::FArchive(local_98);
    (**(code **)(*plVar1 + 0x290))(plVar1,local_98,0);
    FArchive::~FArchive(local_98);
  }
  DAT_1469e7268 = plVar1;
  return plVar1;
}



// FUNCTION 141727780 FUN_141727780 body=170 status=ok
// SIG undefined FUN_141727780(void)

longlong * FUN_141727780(void)

{
  longlong *plVar1;
  undefined1 local_res8 [32];
  undefined1 local_98 [144];
  
  plVar1 = DAT_1469e7098;
  if (DAT_1469e7098 == (longlong *)0x0) {
    Z_Construct_UClass_UObject();
    plVar1 = (longlong *)FUN_14171c410();
    UObjectForceRegistration(plVar1);
    FName::FName(local_res8,L"Next",1);
    UClass::EmitObjectReference(plVar1,0x28,local_res8);
    FArchive::FArchive(local_98);
    (**(code **)(*plVar1 + 0x290))(plVar1,local_98,0);
    FArchive::~FArchive(local_98);
  }
  DAT_1469e7098 = plVar1;
  return plVar1;
}



// FUNCTION 141727830 FUN_141727830 body=114 status=ok
// SIG undefined FUN_141727830(void)

longlong * FUN_141727830(void)

{
  longlong *plVar1;
  undefined1 local_98 [144];
  
  plVar1 = DAT_1469e7248;
  if (DAT_1469e7248 == (longlong *)0x0) {
    FUN_1417279b0();
    plVar1 = (longlong *)FUN_14171c5d0();
    UObjectForceRegistration(plVar1);
    FArchive::FArchive(local_98);
    (**(code **)(*plVar1 + 0x290))(plVar1,local_98,0);
    FArchive::~FArchive(local_98);
  }
  DAT_1469e7248 = plVar1;
  return plVar1;
}



// FUNCTION 1417278b0 FUN_1417278b0 body=114 status=ok
// SIG undefined FUN_1417278b0(void)

longlong * FUN_1417278b0(void)

{
  longlong *plVar1;
  undefined1 local_98 [144];
  
  plVar1 = DAT_1469e7278;
  if (DAT_1469e7278 == (longlong *)0x0) {
    Z_Construct_UClass_UObject();
    plVar1 = (longlong *)FUN_14171c790();
    UObjectForceRegistration(plVar1);
    FArchive::FArchive(local_98);
    (**(code **)(*plVar1 + 0x290))(plVar1,local_98,0);
    FArchive::~FArchive(local_98);
  }
  DAT_1469e7278 = plVar1;
  return plVar1;
}



// FUNCTION 141727930 FUN_141727930 body=114 status=ok
// SIG undefined FUN_141727930(void)

longlong * FUN_141727930(void)

{
  longlong *plVar1;
  undefined1 local_98 [144];
  
  plVar1 = DAT_1469e70c8;
  if (DAT_1469e70c8 == (longlong *)0x0) {
    FUN_1417279b0();
    plVar1 = (longlong *)FUN_14171c950();
    UObjectForceRegistration(plVar1);
    FArchive::FArchive(local_98);
    (**(code **)(*plVar1 + 0x290))(plVar1,local_98,0);
    FArchive::~FArchive(local_98);
  }
  DAT_1469e70c8 = plVar1;
  return plVar1;
}



// FUNCTION 1417279b0 FUN_1417279b0 body=283 status=ok
// SIG undefined FUN_1417279b0(void)

longlong * FUN_1417279b0(void)

{
  longlong *plVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  undefined1 local_98 [144];
  
  plVar1 = DAT_1469e70b0;
  if (DAT_1469e70b0 == (longlong *)0x0) {
    FUN_141727780();
    plVar1 = (longlong *)FUN_14171cb10();
    UObjectForceRegistration(plVar1);
    plVar1[0x15] = (longlong)AK::MemoryMgr::StartProfileThreadUsage;
    FName::FName(local_res8,L"SuperStruct",1);
    UClass::EmitObjectReference(plVar1,0x30,local_res8);
    FName::FName(local_res10,L"Children",1);
    UClass::EmitObjectReference(plVar1,0x38,local_res10);
    FName::FName(local_res18,L"ScriptObjectReferences",1);
    UClass::EmitObjectArrayReference(plVar1,0x78,local_res18);
    FArchive::FArchive(local_98);
    (**(code **)(*plVar1 + 0x290))(plVar1,local_98,0);
    FArchive::~FArchive(local_98);
  }
  DAT_1469e70b0 = plVar1;
  return plVar1;
}



// FUNCTION 141727ad0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FUObjectAnnotationSparseSearchable<FUniqueObjectGuid,1>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  ~FUObjectAnnotationSparseSearchable<FUniqueObjectGuid,1>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 141727b50 `scalar_deleting_destructor' body=123 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FUObjectAnnotationSparse<FUniqueObjectGuid,1>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d0fe78;
  RemoveAllAnnotations();
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 1);
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 141727be0 FUN_141727be0 body=653 status=ok
// SIG undefined FUN_141727be0(void)

uint * FUN_141727be0(longlong *param_1,uint *param_2,longlong *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined4 *_Src;
  undefined4 *puVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  undefined4 uVar14;
  int iVar15;
  char cVar16;
  bool bVar17;
  uint local_res8 [2];
  
  iVar15 = 1;
  uVar14 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar12 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar12 + 1)) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,uVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar12 = *(uint *)(param_1 + 6);
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar10 = *(int *)(*param_1 + 4 + (longlong)(int)uVar12 * 0x28);
    *(int *)(param_1 + 6) = iVar10;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar10 * 0x28) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = uVar12;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  local_res8[0] = local_res8[0] & 0xffffff00;
  puVar1 = (uint *)((longlong)plVar11 +
                   (longlong)((int)(uVar12 + ((int)uVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar12 & 0x1f);
  _Src = (undefined4 *)(*param_1 + (longlong)(int)uVar12 * 0x28);
  puVar2 = (undefined4 *)*param_3;
  uVar4 = *puVar2;
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  _Src[4] = 0;
  _Src[5] = 0;
  _Src[6] = 0;
  _Src[7] = 0;
  *_Src = uVar4;
  _Src[1] = uVar5;
  _Src[2] = uVar6;
  _Src[3] = uVar7;
  _Src[8] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar12 = local_res8[0];
    lVar13 = (longlong)(int)local_res8[0];
    bVar17 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar17);
    if (bVar17) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + lVar13 * 0x28),_Src,0x20);
      uVar9 = *param_2;
      bVar3 = (byte)uVar9 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = uVar9;
      }
      lVar13 = *param_1;
      *(undefined4 *)(lVar13 + (longlong)(int)uVar9 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar14 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar13 + 4 + (longlong)(int)uVar9 * 0x28) = uVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar9;
      plVar11 = (longlong *)param_1[4];
      *param_2 = uVar12;
      if (plVar11 == (longlong *)0x0) {
        plVar11 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar11 +
                       (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_141727e47;
    }
  }
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar12) {
    uVar9 = (uVar12 >> 1) + 8;
    iVar15 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar10 = 0x20;
    cVar16 = '\0';
    if (uVar9 != 0) {
      iVar10 = 0x1f - iVar15;
    }
    uVar9 = (uVar12 >> 1) + 7;
    iVar15 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar9 != 0) {
      cVar16 = '\x1f' - (char)iVar15;
    }
    iVar15 = 1 << (~(byte)((iVar10 << 0x1a) >> 0x1f) & 0x20U - cVar16 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar15 <= (int)param_1[9])))) {
    uVar12 = *param_2;
    uVar9 = FCrc::MemCrc_DEPRECATED(_Src,0x10);
    uVar9 = (int)param_1[9] - 1U & uVar9;
    _Src[9] = uVar9;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    _Src[8] = *(undefined4 *)
               ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(uint *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         uVar12;
  }
  else {
    *(int *)(param_1 + 9) = iVar15;
    TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141727e47:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 141727e70 FUN_141727e70 body=523 status=ok
// SIG undefined FUN_141727e70(void)

int * FUN_141727e70(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  void *_Dst;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  bool bVar12;
  int local_38 [2];
  uint *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FNameArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  uVar11 = 0xffffffff;
  *param_2 = local_38[0];
  bVar12 = false;
  *local_30 = *(uint *)*param_3;
  local_30[2] = 0;
  local_30[3] = 0;
  local_30[4] = 0;
  local_30[5] = 0;
  local_30[6] = 0xffffffff;
  iVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar9 != 1) {
    iVar10 = -1;
    iVar7 = iVar10;
    if (iVar9 != 0) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar4 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_30) * 4);
      if (iVar6 != -1) {
        do {
          iVar7 = iVar6;
          if (*(uint *)((longlong)iVar6 * 0x20 + *param_1) == *local_30) break;
          iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + *param_1);
          iVar7 = iVar10;
        } while (iVar6 != -1);
      }
    }
    bVar12 = iVar7 != -1;
    if (bVar12) {
      _Dst = (void *)((longlong)iVar7 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,local_30,0x18);
      iVar9 = *param_2;
      bVar2 = (byte)iVar9 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar9;
      }
      puVar5 = (undefined4 *)((longlong)iVar9 * 0x20 + *param_1);
      *puVar5 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar11 = (undefined4)param_1[6];
      }
      puVar5[1] = uVar11;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar4 = (longlong *)param_1[4];
      *param_2 = iVar7;
      if (plVar4 == (longlong *)0x0) {
        plVar4 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar4 +
                       (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_141728053;
    }
  }
  cVar3 = TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar9,0);
  if (cVar3 == '\0') {
    uVar8 = (int)param_1[9] - 1U & *local_30;
    local_30[7] = uVar8;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    local_30[6] = *(uint *)((longlong)plVar4 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_141728053:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 141728080 FUN_141728080 body=1066 status=ok
// SIG undefined FUN_141728080(void)

int * FUN_141728080(longlong *param_1,int *param_2,longlong *param_3,longlong param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  char cVar20;
  longlong *plVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  int iVar26;
  bool local_res8;
  
  iVar12 = 1;
  iVar26 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar19 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar19 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar19 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar19);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar19 = (int)param_1[6];
    iVar17 = *(int *)((longlong)iVar19 * 0x20 + 4 + *param_1);
    iVar18 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar17;
    *(int *)((longlong)param_1 + 0x34) = iVar18;
    if (iVar18 != 0) {
      *(undefined4 *)((longlong)iVar17 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar21 = (longlong *)param_1[4];
  *param_2 = iVar19;
  local_res8 = false;
  lVar11 = (longlong)((int)(iVar19 + (iVar19 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar21 == (longlong *)0x0) {
    plVar21 = param_1 + 2;
  }
  puVar25 = (uint *)((longlong)plVar21 + lVar11);
  *puVar25 = *puVar25 | 1 << ((byte)iVar19 & 0x1f);
  puVar1 = (undefined4 *)*param_3;
  lVar13 = (longlong)iVar19 * 0x20;
  plVar21 = (longlong *)(*param_1 + lVar13);
  puVar2 = (undefined4 *)param_3[1];
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  *(undefined4 *)plVar21 = *puVar1;
  *(undefined4 *)((longlong)plVar21 + 4) = uVar6;
  *(undefined4 *)(plVar21 + 1) = uVar7;
  *(undefined4 *)((longlong)plVar21 + 0xc) = uVar8;
  *(undefined4 *)(plVar21 + 2) = *puVar2;
  *(undefined4 *)(plVar21 + 3) = 0xffffffff;
  uVar24 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar24 != 1) {
    iVar18 = iVar26;
    if (uVar24 != 0) {
      uVar10 = *(uint *)(plVar21 + 1);
      lVar3 = *plVar21;
      uVar23 = ((int)((ulonglong)lVar3 >> 0x20) - uVar10) + (int)lVar3 ^ uVar10 >> 0xd;
      uVar22 = (-0x61c88647 - uVar23) - uVar10 ^ uVar23 << 8;
      uVar16 = (uVar10 - uVar22) - uVar23 ^ uVar22 >> 0xd;
      uVar23 = (uVar23 - uVar22) - uVar16 ^ uVar16 >> 0xc;
      uVar22 = (uVar22 - uVar23) - uVar16 ^ uVar23 << 0x10;
      uVar16 = (uVar16 - uVar22) - uVar23 ^ uVar22 >> 5;
      uVar23 = (uVar23 - uVar22) - uVar16 ^ uVar16 >> 3;
      uVar22 = (uVar22 - uVar23) - uVar16 ^ uVar23 << 10;
      plVar15 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar15 = param_1 + 7;
      }
      iVar17 = *(int *)((longlong)plVar15 +
                       (((longlong)(int)((uVar16 - uVar22) - uVar23) ^ (ulonglong)(uVar22 >> 0xf)) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar17 != -1) {
        lVar4 = *param_1;
        do {
          lVar14 = (longlong)iVar17 * 0x20;
          if ((*(longlong *)(lVar14 + lVar4) == lVar3) && (*(uint *)(lVar14 + 8 + lVar4) == uVar10))
          {
            bVar9 = true;
          }
          else {
            bVar9 = false;
          }
          iVar18 = iVar17;
        } while ((!bVar9) &&
                (iVar17 = *(int *)(lVar14 + 0x18 + lVar4), iVar18 = iVar26, iVar17 != -1));
      }
    }
    local_res8 = iVar18 != -1;
    if (local_res8) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar18 * 0x20 + *param_1),plVar21,0x18);
      bVar5 = (byte)iVar19 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar19;
      }
      lVar3 = *param_1;
      *(undefined4 *)(lVar13 + lVar3) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar26 = (int)param_1[6];
      }
      *(int *)(lVar13 + 4 + lVar3) = iVar26;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar19;
      plVar21 = (longlong *)param_1[4];
      *param_2 = iVar18;
      if (plVar21 == (longlong *)0x0) {
        plVar21 = param_1 + 2;
      }
      puVar25 = (uint *)((longlong)plVar21 + lVar11);
      *puVar25 = *puVar25 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      goto LAB_141728478;
    }
  }
  if (3 < uVar24) {
    uVar10 = (uVar24 >> 1) + 8;
    iVar26 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar26 == 0; iVar26 = iVar26 + -1) {
      }
    }
    iVar12 = 0x20;
    if (uVar10 != 0) {
      iVar12 = 0x1f - iVar26;
    }
    uVar10 = (uVar24 >> 1) + 7;
    iVar26 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar26 == 0; iVar26 = iVar26 + -1) {
      }
    }
    if (uVar10 == 0) {
      cVar20 = '\0';
    }
    else {
      cVar20 = '\x1f' - (char)iVar26;
    }
    iVar12 = 1 << (~(byte)((iVar12 << 0x1a) >> 0x1f) & 0x20U - cVar20 & 0x1f);
  }
  if (((int)uVar24 < 1) || (((int)param_1[9] != 0 && (iVar12 <= (int)param_1[9])))) {
    uVar24 = *(uint *)(plVar21 + 1);
    uVar10 = ((int)((ulonglong)*plVar21 >> 0x20) - uVar24) + (int)*plVar21 ^ uVar24 >> 0xd;
    uVar16 = (-0x61c88647 - uVar10) - uVar24 ^ uVar10 << 8;
    uVar22 = (uVar24 - uVar16) - uVar10 ^ uVar16 >> 0xd;
    uVar24 = (uVar10 - uVar16) - uVar22 ^ uVar22 >> 0xc;
    uVar10 = (uVar16 - uVar24) - uVar22 ^ uVar24 << 0x10;
    uVar16 = (uVar22 - uVar10) - uVar24 ^ uVar10 >> 5;
    uVar24 = (uVar24 - uVar10) - uVar16 ^ uVar16 >> 3;
    uVar10 = (uVar10 - uVar24) - uVar16 ^ uVar24 << 10;
    uVar24 = ((uVar16 - uVar10) - uVar24 ^ uVar10 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar21 + 0x1c) = uVar24;
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    *(undefined4 *)(plVar21 + 3) =
         *(undefined4 *)
          ((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar24) * 4);
    plVar21 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar21 = param_1 + 7;
    }
    *(int *)((longlong)plVar21 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar24) * 4) =
         iVar19;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    TSet<TTuple<TTuple<FName,FPackageIndex>,FPackageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FName,FPackageIndex>,FPackageIndex,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141728478:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1417284b0 FUN_1417284b0 body=649 status=ok
// SIG undefined FUN_1417284b0(void)

int * FUN_1417284b0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  bool bVar16;
  
  iVar15 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar13 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x18);
    *(int *)(param_1 + 6) = iVar13;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar13 * 0x18) = 0xffffffff;
    }
  }
  plVar14 = (longlong *)param_1[4];
  *param_2 = iVar10;
  lVar7 = (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar14 == (longlong *)0x0) {
    plVar14 = param_1 + 2;
  }
  puVar11 = (uint *)((longlong)plVar14 + lVar7);
  *puVar11 = *puVar11 | 1 << ((byte)iVar10 & 0x1f);
  puVar2 = (undefined4 *)param_3[1];
  lVar1 = (longlong)iVar10 * 0x18;
  plVar14 = (longlong *)(*param_1 + lVar1);
  bVar16 = false;
  lVar3 = *(longlong *)*param_3;
  *plVar14 = lVar3;
  *(undefined4 *)(plVar14 + 1) = *puVar2;
  *(undefined4 *)(plVar14 + 2) = 0xffffffff;
  iVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar13 != 1) {
    iVar6 = iVar15;
    if (iVar13 != 0) {
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar8 +
                      ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar9 != -1) {
        do {
          iVar6 = iVar9;
          if (*(longlong *)(*param_1 + (longlong)iVar9 * 0x18) == lVar3) break;
          iVar9 = *(int *)(*param_1 + 0x10 + (longlong)iVar9 * 0x18);
          iVar6 = iVar15;
        } while (iVar9 != -1);
      }
    }
    bVar16 = iVar6 != -1;
    if (bVar16) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar6 * 0x18),plVar14,0x10);
      bVar4 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar10;
      }
      lVar3 = *param_1;
      *(undefined4 *)(lVar1 + lVar3) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar15 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar3) = iVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar14 = (longlong *)param_1[4];
      *param_2 = iVar6;
      if (plVar14 == (longlong *)0x0) {
        plVar14 = param_1 + 2;
      }
      puVar11 = (uint *)((longlong)plVar14 + lVar7);
      *puVar11 = *puVar11 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_14172870f;
    }
  }
  cVar5 = TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar13,0);
  if (cVar5 == '\0') {
    uVar12 = (int)((ulonglong)*plVar14 >> 0x20) + (int)*plVar14 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar14 + 0x14) = uVar12;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(plVar14 + 2) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(int *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         *param_2;
  }
LAB_14172870f:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar16;
  }
  return param_2;
}



// FUNCTION 141728740 FUN_141728740 body=584 status=ok
// SIG undefined FUN_141728740(void)

int * FUN_141728740(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ulonglong *_Src;
  bool bVar15;
  int local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar2 = *(int *)((longlong)iVar10 * 0x20 + 4 + *param_1);
    iVar13 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar10;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  bVar15 = false;
  puVar1 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar10 & 0x1f);
  _Src = (ulonglong *)((longlong)iVar10 * 0x20 + *param_1);
  puVar3 = (undefined4 *)param_3[1];
  uVar4 = *(ulonglong *)*param_3;
  *_Src = uVar4;
  uVar5 = puVar3[1];
  uVar6 = puVar3[2];
  uVar7 = puVar3[3];
  *(undefined4 *)(_Src + 1) = *puVar3;
  *(undefined4 *)((longlong)_Src + 0xc) = uVar5;
  *(undefined4 *)(_Src + 2) = uVar6;
  *(undefined4 *)((longlong)_Src + 0x14) = uVar7;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  iVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar13 != 1) {
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar4);
    bVar15 = local_res8[0] != -1;
    if (bVar15) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)local_res8[0] * 0x20 + *param_1),_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar10,1);
      *param_2 = local_res8[0];
      goto LAB_14172895f;
    }
  }
  cVar8 = TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar13,0);
  if (cVar8 == '\0') {
    iVar10 = (int)(*_Src >> 4);
    uVar12 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
    uVar14 = -(uVar12 + iVar10) ^ uVar12 >> 0xd;
    uVar11 = (iVar10 - uVar12) - uVar14 ^ uVar14 >> 0xc;
    uVar12 = (uVar12 - uVar11) - uVar14 ^ uVar11 << 0x10;
    uVar14 = (uVar14 - uVar12) - uVar11 ^ uVar12 >> 5;
    uVar11 = (uVar11 - uVar12) - uVar14 ^ uVar14 >> 3;
    uVar12 = (uVar12 - uVar11) - uVar14 ^ uVar11 << 10;
    uVar11 = ((uVar14 - uVar12) - uVar11 ^ uVar12 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar11;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_14172895f:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 141728990 FUN_141728990 body=462 status=ok
// SIG undefined FUN_141728990(void)

int * FUN_141728990(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  undefined4 *_Src;
  bool bVar13;
  int local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar3 = *(int *)((longlong)iVar12 * 0x20 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = iVar12;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar11 +
                   (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar12 & 0x1f);
  puVar4 = (undefined4 *)*param_3;
  puVar5 = (undefined8 *)param_3[1];
  bVar13 = false;
  _Src = (undefined4 *)((longlong)iVar12 * 0x20 + *param_1);
  uVar6 = puVar4[1];
  uVar7 = puVar4[2];
  uVar8 = puVar4[3];
  *_Src = *puVar4;
  _Src[1] = uVar6;
  _Src[2] = uVar7;
  _Src[3] = uVar8;
  *(undefined8 *)(_Src + 4) = *puVar5;
  _Src[6] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FGuid,AActor_*>,TDefaultMapHashableKeyFuncs<FGuid,AActor_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    bVar13 = local_res8[0] != -1;
    if (bVar13) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)local_res8[0] * 0x20 + *param_1),_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_141728b3c;
    }
  }
  cVar9 = TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar9 == '\0') {
    iVar12 = *param_2;
    uVar10 = FCrc::MemCrc_DEPRECATED(_Src,0x10);
    uVar10 = (int)param_1[9] - 1U & uVar10;
    _Src[7] = uVar10;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    _Src[6] = *(undefined4 *)
               ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         iVar12;
  }
LAB_141728b3c:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 141728b60 FUN_141728b60 body=63 status=ok
// SIG undefined FUN_141728b60(void)

longlong FUN_141728b60(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int local_res8 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  FUN_140497620(param_1,local_res8,&local_18,0);
  return *param_1 + (longlong)local_res8[0] * 0x28 + 0x10;
}



// FUNCTION 141728ba0 GetKeys<FDefaultAllocator> body=658 status=ok
// SIG undefined GetKeys<FDefaultAllocator>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
GetKeys<FDefaultAllocator>(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  uint uStack_d0;
  int iStack_cc;
  uint local_c8;
  undefined1 local_c0 [8];
  longlong *local_b8;
  uint uStack_b0;
  uint uStack_ac;
  uint *puStack_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  uint uStack_98;
  longlong local_88;
  ulonglong local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  uint local_54;
  undefined1 local_50 [8];
  ulonglong local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  uVar9 = 0;
  puStack_a8 = (uint *)(param_1 + 2);
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  iVar2 = (int)param_1[5];
  local_e8._0_4_ = 0;
  local_e8._4_4_ = 1;
  local_d8._4_4_ = 0;
  uStack_d0 = 0;
  if (iVar2 != 0) {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puStack_a8;
    }
    uVar1 = *puVar10;
    uVar8 = uVar9;
    uVar12 = uVar9;
    while (uVar1 == 0) {
      iVar6 = (int)uVar8;
      uStack_d0 = (int)uVar12 + 0x20;
      uVar12 = (ulonglong)uStack_d0;
      local_e8._0_4_ = iVar6 + 1;
      uVar8 = (ulonglong)(uint)local_e8;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_141728cb0;
      uVar1 = puVar10[(longlong)iVar6 + 1];
    }
    local_e8._4_4_ = -uVar1 & uVar1;
    iVar6 = 0x1f;
    if (local_e8._4_4_ != 0) {
      for (; local_e8._4_4_ >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (local_e8._4_4_ == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    local_d8._4_4_ = (uStack_d0 - iVar6) + 0x1f;
    if (iVar2 < local_d8._4_4_) {
LAB_141728cb0:
      local_d8._4_4_ = iVar2;
    }
  }
  uStack_a0 = 0xffffffff;
  iStack_9c = local_d8._4_4_;
  uStack_98 = uStack_d0;
  uStack_b0 = (uint)local_e8;
  uStack_ac = local_e8._4_4_;
  uStack_e0 = (uint)local_e8;
  uStack_dc = local_e8._4_4_;
  local_c8 = uStack_d0;
  uStack_d0 = 0xffffffff;
  iStack_cc = local_d8._4_4_;
  bVar4 = iVar2 <= local_d8._4_4_;
  uVar8 = uVar9;
  uVar12 = uVar9;
  local_e8 = param_1;
  local_b8 = param_1;
  local_d8 = puStack_a8;
  if (bVar4) {
LAB_141728dcd:
    lVar3 = param_2[1];
    local_40 = 0;
    if (local_48 != 0) {
      FMemory::Free(local_48);
    }
    TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_88);
    return (int)lVar3;
  }
  do {
    plVar5 = local_e8;
    lVar11 = (longlong)iStack_cc * 0x10;
    lVar3 = *local_e8;
    uVar1 = *(uint *)(lVar3 + lVar11);
    if ((int)uVar8 != (int)uVar9) {
      puVar7 = local_50;
      if (local_48 != 0) {
        puVar7 = (undefined1 *)0x0;
      }
      for (iVar2 = *(int *)(((ulonglong)puVar7 | local_48) +
                           (longlong)(int)((int)uVar12 - 1U & uVar1) * 4); iVar2 != -1;
          iVar2 = *(int *)(local_88 + 4 + (longlong)iVar2 * 0xc)) {
        if (*(uint *)(local_88 + (longlong)iVar2 * 0xc) == uVar1) {
          if (iVar2 != -1) goto LAB_141728d97;
          break;
        }
      }
    }
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    *(undefined4 *)(*param_2 + (longlong)iVar2 * 4) = *(undefined4 *)(lVar11 + lVar3);
    FUN_14044be50(&local_88,local_c0,*plVar5 + lVar11,0);
LAB_141728d97:
    uStack_d0 = uStack_d0 & ~uStack_dc;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_e0);
    if ((int)local_d8[6] <= iStack_cc) goto LAB_141728dcd;
    uVar9 = (ulonglong)local_54;
    uVar8 = local_80 & 0xffffffff;
    uVar12 = (ulonglong)local_40;
  } while( true );
}



// FUNCTION 141728e40 HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSparseArray<TSetElement<TTuple<FPackageIndex,TArray<FName,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FPackageIndex,TArray<FName,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,FDefaultAllocator>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FPackageIndex,TArray<FName,FDefaultAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,FDefaultAllocator>,0>_>::FKeyComparisonClass<TLess<FPackageIndex>_>_>_>_>_> body=417 status=ok
// SIG undefined HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSparseArray<TSetElement<TTuple<FPackageIndex,TArray<FName,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FPackageIndex,TArray<FName,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,FDefaultAllocator>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FPackageIndex,TArray<FName,FDefaultAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,FDefaultAllocator>,0>_>::FKeyComparisonClass<TLess<FPackageIndex>_>_>_>_>_>(void)

void AlgoImpl::
     HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSparseArray<TSetElement<TTuple<FPackageIndex,TArray<FName,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FPackageIndex,TArray<FName,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,FDefaultAllocator>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FPackageIndex,TArray<FName,FDefaultAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,FDefaultAllocator>,0>_>::FKeyComparisonClass<TLess<FPackageIndex>_>_>_>_>_>
               (undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  int *piVar13;
  
  iVar7 = (param_2 + -2) / 2;
  if (-1 < iVar7) {
    iVar8 = iVar7 * 2 + 1;
    iVar1 = iVar8;
    iVar11 = iVar7;
joined_r0x000141728e6a:
    do {
      if (iVar8 < param_2) {
        iVar8 = iVar7 * 2;
        iVar10 = iVar8 + 1;
        if (iVar8 + 2 < param_2) {
          if (*(int *)(param_1 + ((longlong)iVar8 + 2) * 4) <
              *(int *)(param_1 + (longlong)iVar10 * 4)) {
            iVar10 = iVar8;
          }
          iVar10 = iVar10 + 1;
        }
        piVar13 = (int *)(param_1 + (longlong)iVar7 * 4);
        piVar9 = (int *)(param_1 + (longlong)iVar10 * 4);
        if (*piVar13 < *piVar9) {
          if (piVar13 != piVar9) {
            uVar2 = *(undefined8 *)(piVar9 + 2);
            uVar3 = *(undefined8 *)piVar13;
            uVar4 = *(undefined8 *)(piVar13 + 2);
            uVar5 = *(undefined8 *)(piVar13 + 4);
            uVar6 = *(undefined8 *)(piVar13 + 6);
            *(undefined8 *)piVar13 = *(undefined8 *)piVar9;
            *(undefined8 *)(piVar13 + 2) = uVar2;
            uVar2 = *(undefined8 *)(piVar9 + 6);
            *(undefined8 *)(piVar13 + 4) = *(undefined8 *)(piVar9 + 4);
            *(undefined8 *)(piVar13 + 6) = uVar2;
            *(undefined8 *)piVar9 = uVar3;
            *(undefined8 *)(piVar9 + 2) = uVar4;
            *(undefined8 *)(piVar9 + 4) = uVar5;
            *(undefined8 *)(piVar9 + 6) = uVar6;
          }
          iVar8 = iVar10 * 2 + 1;
          iVar7 = iVar10;
          goto joined_r0x000141728e6a;
        }
      }
      iVar8 = iVar1 + -2;
      iVar7 = iVar11 + -1;
      iVar1 = iVar8;
      iVar11 = iVar7;
    } while (-1 < iVar7);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar12 = param_1 + (longlong)param_2 * 4;
    do {
      if (param_1 != puVar12) {
        uVar2 = puVar12[1];
        uVar3 = *param_1;
        uVar4 = param_1[1];
        uVar5 = param_1[2];
        uVar6 = param_1[3];
        *param_1 = *puVar12;
        param_1[1] = uVar2;
        uVar2 = puVar12[3];
        param_1[2] = puVar12[2];
        param_1[3] = uVar2;
        *puVar12 = uVar3;
        puVar12[1] = uVar4;
        puVar12[2] = uVar5;
        puVar12[3] = uVar6;
      }
      iVar7 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar7 * 2;
          iVar8 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            if (*(int *)(param_1 + ((longlong)iVar1 + 2) * 4) <
                *(int *)(param_1 + (longlong)iVar8 * 4)) {
              iVar8 = iVar1;
            }
            iVar8 = iVar8 + 1;
          }
          piVar13 = (int *)(param_1 + (longlong)iVar7 * 4);
          piVar9 = (int *)(param_1 + (longlong)iVar8 * 4);
          if (*piVar9 <= *piVar13) break;
          if (piVar13 != piVar9) {
            uVar2 = *(undefined8 *)(piVar9 + 2);
            uVar3 = *(undefined8 *)piVar13;
            uVar4 = *(undefined8 *)(piVar13 + 2);
            uVar5 = *(undefined8 *)(piVar13 + 4);
            uVar6 = *(undefined8 *)(piVar13 + 6);
            *(undefined8 *)piVar13 = *(undefined8 *)piVar9;
            *(undefined8 *)(piVar13 + 2) = uVar2;
            uVar2 = *(undefined8 *)(piVar9 + 6);
            *(undefined8 *)(piVar13 + 4) = *(undefined8 *)(piVar9 + 4);
            *(undefined8 *)(piVar13 + 6) = uVar2;
            *(undefined8 *)piVar9 = uVar3;
            *(undefined8 *)(piVar9 + 2) = uVar4;
            *(undefined8 *)(piVar9 + 4) = uVar5;
            *(undefined8 *)(piVar9 + 6) = uVar6;
          }
          iVar7 = iVar8;
        } while (iVar8 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar12 = puVar12 + -4;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 141728ff0 InternalConstructor<UEnum> body=66 status=ok
// SIG undefined InternalConstructor<UEnum>(void)

void InternalConstructor<UEnum>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d0fed8;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    *(undefined4 *)(puVar1 + 10) = 0;
    puVar1[0xb] = 0;
  }
  return;
}



// FUNCTION 141729040 FUN_141729040 body=41 status=ok
// SIG undefined FUN_141729040(void)

void FUN_141729040(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UProperty::UProperty(puVar1,param_1);
    *puVar1 = &PTR_FUN_144d10890;
  }
  return;
}



// FUNCTION 141729070 FUN_141729070 body=41 status=ok
// SIG undefined FUN_141729070(void)

void FUN_141729070(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_143f3f648;
  }
  return;
}



// FUNCTION 1417290a0 InternalVTableHelperCtorCaller<UEnum> body=155 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UEnum>(void)

undefined8 * InternalVTableHelperCtorCaller<UEnum>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = UEnum::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    UObject::UObject(puVar3,param_1);
    *puVar3 = &PTR__scalar_deleting_destructor__144d0fed8;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141729140 InternalVTableHelperCtorCaller<UEnumProperty> body=143 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UEnumProperty>(void)

undefined8 * InternalVTableHelperCtorCaller<UEnumProperty>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = UEnumProperty::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    UObject::UObject(puVar3,param_1);
    puVar3[9] = 0;
    *puVar3 = &PTR_FUN_144d10890;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1417291d0 InternalVTableHelperCtorCaller<UInterface> body=139 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UInterface>(void)

undefined8 * InternalVTableHelperCtorCaller<UInterface>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = UInterface::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    UObject::UObject(puVar3,param_1);
    *puVar3 = &PTR_FUN_143f3f648;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141729260 FUN_141729260 body=818 status=ok
// SIG undefined FUN_141729260(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141729260(longlong param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  longlong *plVar7;
  int *piVar8;
  longlong lVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  float fVar14;
  undefined1 auStack_368 [48];
  int local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_1 + (param_2 - 1) * 4;
    fVar14 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar14 = fVar14 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar14 = _guard_xfg_dispatch_icall_nop(fVar14);
    local_318 = (undefined4)(longlong)(fVar14 + fVar14);
    _guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar7 = &local_328;
    do {
      piVar5 = (int *)*plVar7;
      piVar12 = (int *)plVar7[1];
      local_338 = (int)plVar7[2];
      lVar9 = ((longlong)piVar12 - (longlong)piVar5 >> 2) + 1;
      piVar8 = piVar5;
      if (local_338 != 0) {
LAB_141729320:
        if (8 < lVar9) {
          if (lVar9 < 0) {
            lVar9 = lVar9 + 1;
          }
          iVar13 = piVar8[lVar9 >> 1];
          piVar8[lVar9 >> 1] = *piVar8;
          piVar10 = piVar12 + 1;
          *piVar8 = iVar13;
          piVar5 = piVar8;
LAB_141729350:
          piVar5 = piVar5 + 1;
          if (piVar5 <= piVar12) goto code_r0x000141729359;
          goto LAB_141729360;
        }
        for (; piVar10 = piVar8, piVar5 = piVar8, piVar8 < piVar12; piVar12 = piVar12 + -1) {
          while (piVar11 = piVar10, piVar5 = piVar5 + 1, piVar5 <= piVar12) {
            piVar10 = piVar5;
            if (*piVar11 <= *piVar5) {
              piVar10 = piVar11;
            }
          }
          iVar13 = *piVar11;
          *piVar11 = *piVar12;
          *piVar12 = iVar13;
        }
        goto LAB_14172950a;
      }
LAB_14172940e:
      iVar13 = (int)lVar9;
      iVar2 = (iVar13 + -2) / 2;
      if (-1 < iVar2) {
        iVar3 = iVar2 * 2 + 1;
        iVar1 = iVar3;
        iVar6 = iVar2;
joined_r0x000141729428:
        do {
          if (iVar3 < iVar13) {
            iVar3 = iVar2 * 2;
            iVar4 = iVar3 + 1;
            if (iVar3 + 2 < iVar13) {
              if (piVar5[iVar4] < piVar5[(longlong)iVar3 + 2]) {
                iVar4 = iVar3;
              }
              iVar4 = iVar4 + 1;
            }
            iVar3 = piVar5[iVar2];
            if (piVar5[iVar4] < iVar3) {
              piVar5[iVar2] = piVar5[iVar4];
              piVar5[iVar4] = iVar3;
              iVar3 = iVar4 * 2 + 1;
              iVar2 = iVar4;
              goto joined_r0x000141729428;
            }
          }
          iVar3 = iVar1 + -2;
          iVar2 = iVar6 + -1;
          iVar1 = iVar3;
          iVar6 = iVar2;
        } while (-1 < iVar2);
      }
      iVar13 = iVar13 + -1;
      lVar9 = (longlong)iVar13;
      if (0 < iVar13) {
        do {
          iVar2 = *piVar5;
          iVar3 = 0;
          *piVar5 = piVar5[lVar9];
          piVar5[lVar9] = iVar2;
          if (1 < iVar13) {
            do {
              iVar1 = iVar3 * 2;
              iVar2 = iVar1 + 1;
              if (iVar1 + 2 < iVar13) {
                if (piVar5[iVar2] < piVar5[(longlong)iVar1 + 2]) {
                  iVar2 = iVar1;
                }
                iVar2 = iVar2 + 1;
              }
              iVar1 = piVar5[iVar3];
              if (iVar1 <= piVar5[iVar2]) break;
              piVar5[iVar3] = piVar5[iVar2];
              piVar5[iVar2] = iVar1;
              iVar3 = iVar2;
            } while (iVar2 * 2 + 1 < iVar13);
          }
          iVar13 = iVar13 + -1;
          lVar9 = lVar9 + -1;
        } while (0 < lVar9);
      }
LAB_14172950a:
      plVar7 = plVar7 + -3;
    } while (&local_328 <= plVar7);
  }
  return;
code_r0x000141729359:
  if (*piVar8 <= *piVar5) goto LAB_141729350;
LAB_141729360:
  do {
    piVar11 = piVar10;
    iVar13 = piVar11[-1];
    piVar10 = piVar11 + -1;
    if (piVar10 <= piVar8) break;
  } while (iVar13 <= *piVar8);
  if (piVar5 <= piVar10) {
    iVar2 = *piVar5;
    *piVar5 = iVar13;
    *piVar10 = iVar2;
    goto LAB_141729350;
  }
  iVar2 = *piVar8;
  local_338 = local_338 + -1;
  *piVar8 = iVar13;
  *piVar10 = iVar2;
  if ((longlong)((longlong)piVar10 + (-4 - (longlong)piVar8) & 0xfffffffffffffffcU) <
      (longlong)((longlong)piVar12 - (longlong)piVar5 & 0xfffffffffffffffcU)) {
    if (piVar5 < piVar12) {
      *plVar7 = (longlong)piVar5;
      plVar7[1] = (longlong)piVar12;
      *(int *)(plVar7 + 2) = local_338;
      plVar7 = plVar7 + 3;
    }
    if (piVar10 <= piVar8 + 1) goto LAB_14172950a;
    piVar12 = piVar11 + -2;
    piVar5 = piVar8;
  }
  else {
    if (piVar8 + 1 < piVar10) {
      *plVar7 = (longlong)piVar8;
      plVar7[1] = (longlong)(piVar11 + -2);
      *(int *)(plVar7 + 2) = local_338;
      plVar7 = plVar7 + 3;
    }
    if (piVar12 <= piVar5) goto LAB_14172950a;
  }
  lVar9 = ((longlong)piVar12 - (longlong)piVar5 >> 2) + 1;
  piVar8 = piVar5;
  if (local_338 == 0) goto LAB_14172940e;
  goto LAB_141729320;
}



// FUNCTION 1417295a0 IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSparseArray<TSetElement<TTuple<FPackageIndex,TArray<FName,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FPackageIndex,TArray<FName,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,FDefaultAllocator>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FPackageIndex,TArray<FName,FDefaultAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,FDefaultAllocator>,0>_>::FKeyComparisonClass<TLess<FPackageIndex>_>_>_>_>_> body=703 status=ok
// SIG undefined IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSparseArray<TSetElement<TTuple<FPackageIndex,TArray<FName,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FPackageIndex,TArray<FName,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,FDefaultAllocator>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FPackageIndex,TArray<FName,FDefaultAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,FDefaultAllocator>,0>_>::FKeyComparisonClass<TLess<FPackageIndex>_>_>_>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSparseArray<TSetElement<TTuple<FPackageIndex,TArray<FName,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FPackageIndex,TArray<FName,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,FDefaultAllocator>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FPackageIndex,TArray<FName,FDefaultAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,FDefaultAllocator>,0>_>::FKeyComparisonClass<TLess<FPackageIndex>_>_>_>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  int *piVar15;
  longlong *plVar16;
  int *piVar17;
  int *piVar18;
  int *piVar19;
  int *piVar20;
  int *piVar21;
  float fVar22;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_2 * 0x20 + -0x20 + param_1;
    fVar22 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar22 = fVar22 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar22 = ::_guard_xfg_dispatch_icall_nop(fVar22);
    local_318 = (undefined4)(longlong)(fVar22 + fVar22);
    ::_guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar16 = &local_328;
    do {
      piVar21 = (int *)*plVar16;
      piVar19 = (int *)plVar16[1];
      lVar1 = plVar16[2];
      local_338._0_4_ = (int)lVar1;
      lVar14 = ((longlong)piVar19 - (longlong)piVar21 >> 5) + 1;
      piVar20 = piVar21;
      if ((int)local_338 != 0) {
LAB_141729670:
        if (8 < lVar14) {
          piVar21 = piVar20 + (lVar14 / 2) * 8;
          if (piVar21 != piVar20) {
            iVar2 = piVar20[1];
            iVar3 = piVar20[2];
            iVar4 = piVar20[3];
            iVar5 = *piVar21;
            iVar6 = piVar21[1];
            iVar7 = piVar21[2];
            iVar8 = piVar21[3];
            uVar10 = *(undefined8 *)(piVar21 + 4);
            uVar11 = *(undefined8 *)(piVar21 + 6);
            *piVar21 = *piVar20;
            piVar21[1] = iVar2;
            piVar21[2] = iVar3;
            piVar21[3] = iVar4;
            uVar9 = *(undefined8 *)(piVar20 + 6);
            *(undefined8 *)(piVar21 + 4) = *(undefined8 *)(piVar20 + 4);
            *(undefined8 *)(piVar21 + 6) = uVar9;
            *piVar20 = iVar5;
            piVar20[1] = iVar6;
            piVar20[2] = iVar7;
            piVar20[3] = iVar8;
            *(undefined8 *)(piVar20 + 4) = uVar10;
            *(undefined8 *)(piVar20 + 6) = uVar11;
          }
          piVar17 = piVar19 + 8;
          piVar21 = piVar20;
LAB_1417296c0:
          piVar15 = piVar21;
          piVar21 = piVar15 + 8;
          if (piVar21 <= piVar19) goto code_r0x0001417296c9;
          goto LAB_1417296d0;
        }
        for (; piVar17 = piVar20, piVar21 = piVar20, piVar20 < piVar19; piVar19 = piVar19 + -8) {
          while (piVar15 = piVar17, piVar21 = piVar21 + 8, piVar21 <= piVar19) {
            piVar17 = piVar21;
            if (*piVar21 <= *piVar15) {
              piVar17 = piVar15;
            }
          }
          if (piVar15 != piVar19) {
            uVar9 = *(undefined8 *)(piVar19 + 2);
            uVar10 = *(undefined8 *)piVar15;
            uVar11 = *(undefined8 *)(piVar15 + 2);
            uVar12 = *(undefined8 *)(piVar15 + 4);
            uVar13 = *(undefined8 *)(piVar15 + 6);
            *(undefined8 *)piVar15 = *(undefined8 *)piVar19;
            *(undefined8 *)(piVar15 + 2) = uVar9;
            uVar9 = *(undefined8 *)(piVar19 + 6);
            *(undefined8 *)(piVar15 + 4) = *(undefined8 *)(piVar19 + 4);
            *(undefined8 *)(piVar15 + 6) = uVar9;
            *(undefined8 *)piVar19 = uVar10;
            *(undefined8 *)(piVar19 + 2) = uVar11;
            *(undefined8 *)(piVar19 + 4) = uVar12;
            *(undefined8 *)(piVar19 + 6) = uVar13;
          }
        }
        goto LAB_1417297bf;
      }
LAB_1417297b0:
      local_338 = lVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSparseArray<TSetElement<TTuple<FPackageIndex,TArray<FName,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FPackageIndex,TArray<FName,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,FDefaultAllocator>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FPackageIndex,TArray<FName,FDefaultAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,FDefaultAllocator>,0>_>::FKeyComparisonClass<TLess<FPackageIndex>_>_>_>_>_>
                (piVar21,lVar14,param_3,param_4);
LAB_1417297bf:
      plVar16 = plVar16 + -3;
    } while (&local_328 <= plVar16);
  }
  return;
code_r0x0001417296c9:
  if (*piVar21 <= *piVar20) goto LAB_1417296c0;
LAB_1417296d0:
  do {
    piVar18 = piVar17;
    piVar17 = piVar18 + -8;
    if (piVar17 <= piVar20) break;
  } while (*piVar20 <= *piVar17);
  if (piVar21 <= piVar17) {
    if (piVar21 != piVar17) {
      iVar2 = piVar18[-7];
      iVar3 = piVar18[-6];
      iVar4 = piVar18[-5];
      iVar5 = *piVar21;
      iVar6 = piVar15[9];
      iVar7 = piVar15[10];
      iVar8 = piVar15[0xb];
      uVar10 = *(undefined8 *)(piVar15 + 0xc);
      uVar11 = *(undefined8 *)(piVar15 + 0xe);
      *piVar21 = *piVar17;
      piVar15[9] = iVar2;
      piVar15[10] = iVar3;
      piVar15[0xb] = iVar4;
      uVar9 = *(undefined8 *)(piVar18 + -2);
      *(undefined8 *)(piVar15 + 0xc) = *(undefined8 *)(piVar18 + -4);
      *(undefined8 *)(piVar15 + 0xe) = uVar9;
      *piVar17 = iVar5;
      piVar18[-7] = iVar6;
      piVar18[-6] = iVar7;
      piVar18[-5] = iVar8;
      *(undefined8 *)(piVar18 + -4) = uVar10;
      *(undefined8 *)(piVar18 + -2) = uVar11;
    }
    goto LAB_1417296c0;
  }
  if (piVar20 != piVar17) {
    iVar2 = piVar18[-7];
    iVar3 = piVar18[-6];
    iVar4 = piVar18[-5];
    iVar5 = *piVar20;
    iVar6 = piVar20[1];
    iVar7 = piVar20[2];
    iVar8 = piVar20[3];
    uVar10 = *(undefined8 *)(piVar20 + 4);
    uVar11 = *(undefined8 *)(piVar20 + 6);
    *piVar20 = *piVar17;
    piVar20[1] = iVar2;
    piVar20[2] = iVar3;
    piVar20[3] = iVar4;
    uVar9 = *(undefined8 *)(piVar18 + -2);
    *(undefined8 *)(piVar20 + 4) = *(undefined8 *)(piVar18 + -4);
    *(undefined8 *)(piVar20 + 6) = uVar9;
    *piVar17 = iVar5;
    piVar18[-7] = iVar6;
    piVar18[-6] = iVar7;
    piVar18[-5] = iVar8;
    *(undefined8 *)(piVar18 + -4) = uVar10;
    *(undefined8 *)(piVar18 + -2) = uVar11;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)piVar17 + (-0x20 - (longlong)piVar20) & 0xffffffffffffffe0U) <
      (longlong)((longlong)piVar19 - (longlong)piVar21 & 0xffffffffffffffe0U)) {
    if (piVar21 < piVar19) {
      *plVar16 = (longlong)piVar21;
      plVar16[1] = (longlong)piVar19;
      *(int *)(plVar16 + 2) = (int)local_338;
      plVar16 = plVar16 + 3;
    }
    if (piVar17 <= piVar20 + 8) goto LAB_1417297bf;
    piVar19 = piVar18 + -0x10;
    piVar21 = piVar20;
  }
  else {
    if (piVar20 + 8 < piVar17) {
      *plVar16 = (longlong)piVar20;
      plVar16[1] = (longlong)(piVar18 + -0x10);
      *(int *)(plVar16 + 2) = (int)local_338;
      plVar16 = plVar16 + 3;
    }
    if (piVar19 <= piVar21) goto LAB_1417297bf;
  }
  lVar14 = ((longlong)piVar19 - (longlong)piVar21 >> 5) + 1;
  piVar20 = piVar21;
  if ((int)local_338 == 0) goto LAB_1417297b0;
  goto LAB_141729670;
}



// FUNCTION 141729860 IsA<ULinkerPlaceholderFunction> body=69 status=ok
// SIG undefined IsA<ULinkerPlaceholderFunction>(void)

ulonglong UObjectBaseUtility::IsA<ULinkerPlaceholderFunction>(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = ULinkerPlaceholderFunction::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1417298b0 IsA<UObjectRedirector> body=69 status=ok
// SIG undefined IsA<UObjectRedirector>(void)

ulonglong UObjectBaseUtility::IsA<UObjectRedirector>(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = UObjectRedirector::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 141729900 FUN_141729900 body=69 status=ok
// SIG undefined FUN_141729900(void)

ulonglong FUN_141729900(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_14171cb10();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 141729950 FBufferReaderBase body=129 status=ok
// SIG undefined FBufferReaderBase(void)

undefined8 *
FBufferReaderBase::FBufferReaderBase
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
          undefined1 param_5)

{
  FArchive::FArchive();
  param_1[0x12] = param_2;
  *param_1 = &PTR__scalar_deleting_destructor__143f600f0;
  param_1[0x13] = 0;
  param_1[0x14] = param_3;
  *(undefined1 *)(param_1 + 0x15) = param_4;
  FArchive::SetIsLoading(param_1,1);
  FArchive::SetIsPersistent(param_1,param_5);
  return param_1;
}



// FUNCTION 1417299e0 FCollectorTask body=175 status=ok
// SIG undefined FCollectorTask(void)

undefined8 *
TFastReferenceCollector<1,FGCReferenceProcessor<1>,FGCCollector<1>,FGCArrayPool,0>::FCollectorTask::
FCollectorTask(undefined8 *param_1,undefined8 param_2,longlong *param_3,int param_4,int param_5,
              undefined8 param_6)

{
  int iVar1;
  undefined8 *puVar2;
  
  *param_1 = param_2;
  puVar2 = (undefined8 *)TLockFreePointerListLIFOPad<FGCArrayStruct,0>::Pop(param_6);
  if ((puVar2 == (undefined8 *)0x0) &&
     (puVar2 = (undefined8 *)operator_new(0x20), puVar2 != (undefined8 *)0x0)) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
  }
  param_1[2] = param_6;
  param_1[1] = puVar2;
  iVar1 = *(int *)(puVar2 + 1);
  *(int *)(puVar2 + 1) = iVar1 + param_5;
  if (*(int *)((longlong)puVar2 + 0xc) < iVar1 + param_5) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow();
  }
  ::_guard_xfg_dispatch_icall_nop
            (*(void **)param_1[1],(void *)(*param_3 + (longlong)param_4 * 8),(longlong)param_5 << 3)
  ;
  return param_1;
}



// FUNCTION 141729a90 FGCReferenceFixedArrayTokenHelper body=192 status=ok
// SIG undefined FGCReferenceFixedArrayTokenHelper(void)

longlong *
FGCReferenceFixedArrayTokenHelper::FGCReferenceFixedArrayTokenHelper
          (longlong *param_1,longlong param_2,int param_3,int param_4,undefined4 param_5)

{
  longlong *plVar1;
  int iVar2;
  
  *(int *)(param_1 + 1) = param_4;
  plVar1 = (longlong *)(param_2 + 0x1b0);
  *param_1 = (longlong)plVar1;
  if (1 < param_4) {
    iVar2 = *(int *)(param_2 + 0x1b8);
    *(int *)(param_2 + 0x1b8) = iVar2 + 1;
    if (*(int *)(param_2 + 0x1bc) < iVar2 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    *(uint *)(*plVar1 + (longlong)iVar2 * 4) = param_3 << 0xc | 0x500;
    iVar2 = *(int *)(param_2 + 0x1b8);
    *(int *)(param_2 + 0x1b8) = iVar2 + 1;
    if (*(int *)(param_2 + 0x1bc) < iVar2 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = param_5;
    iVar2 = *(int *)(param_2 + 0x1b8);
    *(int *)(param_2 + 0x1b8) = iVar2 + 1;
    if (*(int *)(param_2 + 0x1bc) < iVar2 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    *(int *)(*plVar1 + (longlong)iVar2 * 4) = param_4;
  }
  return param_1;
}



// FUNCTION 141729b50 FUN_141729b50 body=47 status=ok
// SIG undefined FUN_141729b50(void)

undefined8 FUN_141729b50(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_1415b7a00(&DAT_1469e72f8);
  if (iVar1 < 2) {
    FUN_14173df90(DAT_1469e7300);
  }
  return param_1;
}



// FUNCTION 141729b80 FUN_141729b80 body=763 status=ok
// SIG undefined FUN_141729b80(void)

undefined8 * FUN_141729b80(undefined8 *param_1,undefined8 param_2,short *param_3,undefined4 param_4)

{
  undefined1 uVar1;
  DWORD DVar2;
  int iVar3;
  longlong lVar4;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144d10690;
  *(undefined4 *)(param_1 + 0x13) = 1;
  param_1[0x14] = param_2;
  FPackageFileSummary::FPackageFileSummary(param_1 + 0x15);
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (param_3[lVar4] != 0);
    iVar3 = (int)lVar4 + 1;
    *(int *)(param_1 + 0x3d) = iVar3;
    if (0 < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x3c,0);
    }
    FGenericPlatformString::Memcpy(param_1[0x3c],param_3,(longlong)iVar3 * 2);
  }
  *(undefined2 *)(param_1 + 0x3e) = 0;
  param_1[0x3f] = 0;
  if ((DAT_1468c2172 != '\0') ||
     ((DAT_1468c2173 != '\0' && (*(undefined1 *)(param_1 + 0x3e) = 1, DAT_1468c2172 != '\0')))) {
    uVar1 = *(undefined1 *)((longlong)param_1 + 0x1f1);
    if (DAT_1468c2173 == '\0') {
      uVar1 = 1;
    }
    *(undefined1 *)((longlong)param_1 + 0x1f1) = uVar1;
  }
  FArchive::FArchive(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x52) = param_4;
  *param_1 = &PTR_FUN_144d10698;
  *(undefined2 *)((longlong)param_1 + 0x294) = 0;
  param_1[0x40] = &PTR_LAB_144d106a0;
  param_1[0x53] = 0;
  *(undefined2 *)(param_1 + 0x54) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2a2) = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  *(undefined1 *)(param_1 + 0xed) = 0;
  *(undefined8 *)((longlong)param_1 + 0x76c) = 0;
  param_1[0xef] = 0;
  *(undefined1 *)(param_1 + 0xf0) = 0;
  *(undefined1 *)(param_1 + 0xf1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78c) = 0xffffffff;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  *(undefined4 *)(param_1 + 0xfa) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x7d4) = 0;
  param_1[0xfc] = 0;
  *(undefined4 *)(param_1 + 0xfd) = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x65,0xff,0x400);
  DVar2 = GetCurrentThreadId();
  *(DWORD *)((longlong)param_1 + 0x784) = DVar2;
  return param_1;
}



// FUNCTION 141729e80 FRawObjectIterator body=131 status=ok
// SIG undefined FRawObjectIterator(void)

undefined8 * FRawObjectIterator::FRawObjectIterator(undefined8 *param_1,char param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar3;
  
  param_1[2] = 0;
  puVar6 = &DAT_1469e91a0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *param_1 = &DAT_1469e91a0;
  iVar3 = -1;
  if (param_2 != '\0') {
    iVar3 = DAT_1469e91a4;
  }
  uVar2 = iVar3 + 1;
  *(uint *)(param_1 + 1) = uVar2;
  if ((int)uVar2 < (int)DAT_1469e91c4) {
    while( true ) {
      uVar5 = uVar2 & 0xffff;
      uVar4 = uVar2;
      if ((int)uVar2 < 0) {
        uVar4 = uVar2 + 0xffff;
        uVar5 = uVar5 - 0x10000;
      }
      lVar1 = *(longlong *)(*(longlong *)(puVar6 + 0x10) + (longlong)((int)uVar4 >> 0x10) * 8);
      if (*(longlong *)(lVar1 + (longlong)(int)uVar5 * 0x18) != 0) break;
      uVar2 = uVar2 + 1;
      *(uint *)(param_1 + 1) = uVar2;
      puVar6 = (undefined *)*param_1;
      if (*(int *)(puVar6 + 0x24) <= (int)uVar2) {
        return param_1;
      }
    }
    param_1[2] = lVar1 + (longlong)(int)uVar5 * 0x18;
  }
  return param_1;
}



// FUNCTION 141729f10 FReferenceFinder body=201 status=ok
// SIG undefined FReferenceFinder(void)

undefined8 *
FReferenceFinder::FReferenceFinder
          (undefined8 *param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
          undefined1 param_5,char param_6,undefined1 param_7)

{
  undefined1 uVar1;
  longlong lVar2;
  
  FReferenceCollector::FReferenceCollector();
  param_1[3] = param_2;
  *param_1 = &PTR__scalar_deleting_destructor__144d0fe88;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xf] = 0;
  *(undefined1 *)((longlong)param_1 + 0x81) = param_5;
  *(undefined1 *)((longlong)param_1 + 0x83) = param_7;
  param_1[0xe] = param_3;
  *(undefined1 *)(param_1 + 0x10) = param_4;
  if ((param_6 == '\0') || (param_3 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x82) = uVar1;
  if (param_3 != 0) {
    lVar2 = FUN_1417a53c0(param_3);
    if (lVar2 != 0) {
      param_1[0xf] = *(undefined8 *)(lVar2 + 0x278);
    }
  }
  return param_1;
}



// FUNCTION 141729fe0 FUN_141729fe0 body=130 status=ok
// SIG undefined FUN_141729fe0(void)

undefined8 * FUN_141729fe0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 local_res18 [16];
  code *local_18;
  undefined1 *puStack_10;
  
  puStack_10 = local_res18;
  local_res18[0] = 0;
  local_18 = FUN_1406ddef0;
  lVar1 = FUN_1415d8310(&local_18,&DAT_14622e6dc);
  *param_1 = *(undefined8 *)(lVar1 + 0x88);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar1 + 0x80);
  *(undefined8 *)(lVar1 + 0x88) = param_2;
  *(undefined4 *)(lVar1 + 0x80) = param_3;
  return param_1;
}



// FUNCTION 14172a070 FUN_14172a070 body=124 status=ok
// SIG undefined FUN_14172a070(void)

undefined8 FUN_14172a070(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 local_res8;
  undefined1 *local_28;
  undefined8 *puStack_20;
  
  iVar2 = FUN_1415b7a00(&DAT_1469e72f8);
  uVar1 = DAT_1469e7300;
  if (iVar2 < 2) {
    puStack_20 = &local_res8;
    local_res8 = DAT_1469e7300;
    local_28 = &LAB_14172d080;
    FUN_1415a4db0(&local_28,param_2);
    FUN_14173df90(uVar1);
  }
  return param_1;
}



// FUNCTION 14172a0f0 UEnum body=58 status=ok
// SIG undefined UEnum(void)

undefined8 * UEnum::UEnum(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__144d0fed8;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 14172a130 UEnumProperty body=79 status=ok
// SIG undefined UEnumProperty(void)

undefined8 *
UEnumProperty::UEnumProperty
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          ulonglong param_5,undefined8 param_6)

{
  FUN_14174d7e0(param_1,param_2,0,param_4,param_5 | 0x8000000000000);
  param_1[0xe] = 0;
  *param_1 = &PTR_FUN_144d10890;
  param_1[0xf] = param_6;
  return param_1;
}



// FUNCTION 14172a180 ~FUObjectAnnotationSparseSearchable<FUniqueObjectGuid,1> body=229 status=ok
// SIG undefined ~FUObjectAnnotationSparseSearchable<FUniqueObjectGuid,1>(void)

void FUObjectAnnotationSparseSearchable<FUniqueObjectGuid,1>::
     ~FUObjectAnnotationSparseSearchable<FUniqueObjectGuid,1>(undefined8 *param_1)

{
  BOOL BVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d0fe38;
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d));
  }
  FUObjectAnnotationSparse<FUniqueObjectGuid,1>::RemoveAllAnnotations(param_1);
  TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x13,0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d));
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_1[0x1b] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x13);
  *param_1 = &PTR__scalar_deleting_destructor__144d0fe78;
  FUObjectAnnotationSparse<FUniqueObjectGuid,1>::RemoveAllAnnotations(param_1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 1);
  *param_1 = &PTR_FUN_143f47c98;
  return;
}



// FUNCTION 14172a270 ~TArray<FGatherableTextData,FDefaultAllocator> body=104 status=ok
// SIG undefined ~TArray<FGatherableTextData,FDefaultAllocator>(void)

void TArray<FGatherableTextData,FDefaultAllocator>::~TArray<FGatherableTextData,FDefaultAllocator>
               (undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      TArray<FTextSourceSiteContext,FDefaultAllocator>::
      ~TArray<FTextSourceSiteContext,FDefaultAllocator>(plVar1 + 0xe);
      FTextSourceData::~FTextSourceData(plVar1 + 2);
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 14172a2e0 ~TArray<FTextSourceSiteContext,FDefaultAllocator> body=288 status=ok
// SIG undefined ~TArray<FTextSourceSiteContext,FDefaultAllocator>(void)

void TArray<FTextSourceSiteContext,FDefaultAllocator>::
     ~TArray<FTextSourceSiteContext,FDefaultAllocator>(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)*param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    plVar1 = plVar3 + 0x17;
    do {
      *(undefined4 *)(plVar1 + 1) = 0;
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      FUN_1415d5b20(plVar1 + -8,0);
      if (plVar1[-4] != 0) {
        FMemory::Free();
      }
      if (plVar1[-8] != 0) {
        FMemory::Free();
      }
      *(undefined4 *)(plVar1 + -9) = 0;
      if (plVar1[-10] != 0) {
        FMemory::Free();
      }
      FUN_1415d5b20(plVar1 + -0x12,0);
      if (plVar1[-0xe] != 0) {
        FMemory::Free();
      }
      if (plVar1[-0x12] != 0) {
        FMemory::Free();
      }
      if (plVar1[-0x15] != 0) {
        FMemory::Free();
      }
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 0x19;
      plVar1 = plVar1 + 0x19;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar3 = (longlong *)*param_1;
  }
  if (plVar3 != (longlong *)0x0) {
    FMemory::Free(plVar3);
    return;
  }
  return;
}



// FUNCTION 14172a400 FUN_14172a400 body=88 status=ok
// SIG undefined FUN_14172a400(void)

void FUN_14172a400(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  DWORD DVar4;
  
  iVar3 = FUN_1415b4ec0(&DAT_1469e72f8);
  piVar1 = DAT_1469e7300;
  if ((((iVar3 < 1) && (cVar2 = FUN_1415ad720(&DAT_1468e2448), cVar2 == '\0')) &&
      (DAT_1468c21ae != '\0')) && (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14172a460 ~FLinker body=133 status=ok
// SIG undefined ~FLinker(void)

void FLinker::~FLinker(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[0x3f];
  *param_1 = &PTR__scalar_deleting_destructor__144d10690;
  if (lVar1 != 0) {
    FSHA1::~FSHA1(lVar1);
    FMemory::operator_delete(lVar1,200);
  }
  if (param_1[0x3c] != 0) {
    FMemory::Free();
  }
  TArray<FGatherableTextData,FDefaultAllocator>::~TArray<FGatherableTextData,FDefaultAllocator>
            (param_1 + 0x3a);
  if (param_1[0x38] != 0) {
    FMemory::Free();
  }
  FPackageFileSummary::~FPackageFileSummary(param_1 + 0x15);
  FLinkerTables::~FLinkerTables(param_1 + 1);
  return;
}



// FUNCTION 14172a4f0 FUN_14172a4f0 body=342 status=ok
// SIG undefined FUN_14172a4f0(void)

void FUN_14172a4f0(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *puStack_10;
  
  local_res8[0] = 0;
  *param_1 = &PTR_FUN_144d10698;
  param_1[0x40] = &PTR_LAB_144d106a0;
  puStack_10 = local_res8;
  local_18 = FUN_1406ddef0;
  lVar1 = FUN_1415d8310(&local_18,&DAT_14622e6dc);
  if (*(char *)(lVar1 + 0x59) == '\0') {
    LowLevelFatalErrorHandler("Unknown",0x34b,L"Linkers can only be deleted by FLinkerManager.");
    FDebug::AssertFailed
              (&DAT_144d07c0a,"Unknown",0x34b,L"Linkers can only be deleted by FLinkerManager.");
  }
  FUN_141733120(param_1);
  *(undefined4 *)(param_1 + 0xfd) = 0;
  if (param_1[0xfc] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xf4);
  if (param_1[0xf2] != 0) {
    FMemory::Free();
  }
  TArray<TFunction<TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>,FDefaultAllocator>
  ::
  ~TArray<TFunction<TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>,FDefaultAllocator>
            (param_1 + 0xe7);
  if (param_1[0xe5] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x62) = 0;
  if (param_1[0x61] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x59);
  if (*(char *)(param_1 + 0x58) != '\0') {
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  FArchive::~FArchive(param_1 + 0x40);
  FLinker::~FLinker(param_1);
  return;
}



// FUNCTION 14172a650 ~FLinkerTables body=194 status=ok
// SIG undefined ~FLinkerTables(void)

void FLinkerTables::~FLinkerTables(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPackageIndex,TArray<FName,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 8,0);
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  iVar2 = (int)param_1[5];
  plVar1 = (longlong *)param_1[4];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[4];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14172a720 FUN_14172a720 body=89 status=ok
// SIG undefined FUN_14172a720(void)

void FUN_14172a720(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *puStack_10;
  
  puStack_10 = local_res8;
  local_res8[0] = 0;
  local_18 = FUN_1406ddef0;
  lVar1 = FUN_1415d8310(&local_18,&DAT_14622e6dc);
  *(undefined8 *)(lVar1 + 0x88) = *param_1;
  *(undefined4 *)(lVar1 + 0x80) = *(undefined4 *)(param_1 + 1);
  return;
}



// FUNCTION 14172a780 ~FTextSourceData body=97 status=ok
// SIG undefined ~FTextSourceData(void)

void FTextSourceData::~FTextSourceData(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  FUN_1415d5b20(param_1 + 2,0);
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14172a7f0 FUN_14172a7f0 body=483 status=ok
// SIG undefined FUN_14172a7f0(void)

longlong * FUN_14172a7f0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  puVar9 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar3 = (longlong *)param_1[1];
  if ((int *)plVar3[1] < (int *)*plVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar1) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x100001)))) {
    if ((bVar1 & 1) == 0) {
      *(int *)(param_2 + 1) = local_res8[0];
      puVar11 = puVar9;
      if (0 < local_res8[0]) {
        do {
          lVar5 = *param_2;
          (**(code **)(*param_1 + 0x40))(param_1,lVar5 + (longlong)puVar11);
          puVar4 = (undefined1 *)(lVar5 + (longlong)puVar11 + 8);
          puVar6 = *(undefined1 **)param_1[1];
          if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar6 + 1) {
            (**(code **)(*param_1 + 0x50))(param_1,puVar4,1);
          }
          else {
            *puVar4 = *puVar6;
            *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
          }
          uVar10 = (int)puVar9 + 1;
          puVar9 = (undefined8 *)(ulonglong)uVar10;
          puVar11 = puVar11 + 2;
        } while ((int)uVar10 < (int)param_2[1]);
      }
    }
    else {
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,local_res8[0]);
      }
      puVar11 = puVar9;
      if (0 < local_res8[0]) {
        do {
          iVar2 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
          }
          puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
          puVar8 = puVar9;
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = 0;
            *(undefined1 *)(puVar7 + 1) = 0;
            puVar8 = puVar7;
          }
          (**(code **)(*param_1 + 0x40))(param_1,puVar8);
          puVar4 = *(undefined1 **)param_1[1];
          if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
            (**(code **)(*param_1 + 0x50))(param_1,puVar8 + 1,1);
          }
          else {
            *(undefined1 *)(puVar8 + 1) = *puVar4;
            *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
          }
          uVar10 = (int)puVar11 + 1;
          puVar11 = (undefined8 *)(ulonglong)uVar10;
        } while ((int)uVar10 < local_res8[0]);
      }
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar1 | 0x80;
  return param_1;
}



// FUNCTION 14172a9e0 FUN_14172a9e0 body=411 status=ok
// SIG undefined FUN_14172a9e0(void)

longlong * FUN_14172a9e0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  puVar7 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar3 = (longlong *)param_1[1];
  if ((int *)plVar3[1] < (int *)*plVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar1) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x100001)))) {
    if ((bVar1 & 1) == 0) {
      *(int *)(param_2 + 1) = local_res8[0];
      if (0 < local_res8[0]) {
        do {
          lVar6 = (longlong)(int)puVar7 * 0x10 + *param_2;
          (**(code **)(*param_1 + 0x40))(param_1,lVar6);
          FUN_1404c11e0(param_1,lVar6 + 8);
          uVar8 = (int)puVar7 + 1;
          puVar7 = (undefined8 *)(ulonglong)uVar8;
        } while ((int)uVar8 < (int)param_2[1]);
      }
      return param_1;
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,local_res8[0]);
    }
    puVar9 = puVar7;
    if (0 < local_res8[0]) {
      do {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
        }
        puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
        puVar5 = puVar7;
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar5 = puVar4;
        }
        (**(code **)(*param_1 + 0x40))(param_1,puVar5);
        FUN_1404c11e0(param_1,puVar5 + 1);
        uVar8 = (int)puVar9 + 1;
        puVar9 = (undefined8 *)(ulonglong)uVar8;
      } while ((int)uVar8 < local_res8[0]);
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar1 | 0x80;
  return param_1;
}



// FUNCTION 14172ab80 FUN_14172ab80 body=468 status=ok
// SIG undefined FUN_14172ab80(void)

longlong * FUN_14172ab80(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 7,(longlong)*(int *)((longlong)param_2 + 0xc) << 7
            );
  puVar6 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar3 = (longlong *)param_1[1];
  if ((int *)plVar3[1] < (int *)*plVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if ((((char)bVar1 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x20000 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
    return param_1;
  }
  if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_1415cec60(param_1,(longlong)(int)puVar6 * 0x80 + *param_2);
        uVar7 = (int)puVar6 + 1;
        puVar6 = (undefined8 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  TArray<FGatherableTextData,FDefaultAllocator>::Empty(param_2,local_res8[0]);
  puVar8 = puVar6;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow
                (param_2,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x80 + *param_2);
    puVar5 = puVar6;
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      puVar4[0xd] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      *(undefined4 *)(puVar4 + 10) = 0xffffffff;
      *(undefined4 *)((longlong)puVar4 + 0x54) = 0;
      puVar4[0xc] = 0;
      *(undefined4 *)(puVar4 + 0xd) = 0;
      puVar4[0xe] = 0;
      puVar4[0xf] = 0;
      puVar5 = puVar4;
    }
    FUN_1415cec60(param_1,puVar5);
    uVar7 = (int)puVar8 + 1;
    puVar8 = (undefined8 *)(ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 14172ad60 FUN_14172ad60 body=392 status=ok
// SIG undefined FUN_14172ad60(void)

longlong * FUN_14172ad60(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x88,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x88);
  uVar5 = 0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar3 = (longlong *)param_1[1];
  if ((int *)plVar3[1] < (int *)*plVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if ((((char)bVar1 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x1e1e1 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
    return param_1;
  }
  if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        operator<<(param_1,(longlong)(int)uVar5 * 0x88 + *param_2);
        uVar6 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar6;
      } while ((int)uVar6 < (int)param_2[1]);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,4>_>,FDefaultAllocator>::ResizeTo
              (param_2,local_res8[0]);
  }
  uVar7 = uVar5;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,4>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar2);
    }
    uVar4 = uVar5;
    if ((longlong)iVar2 * 0x88 + *param_2 != 0) {
      uVar4 = FObjectExport::FObjectExport();
    }
    operator<<(param_1,uVar4);
    uVar6 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar6;
  } while ((int)uVar6 < local_res8[0]);
  return param_1;
}



// FUNCTION 14172aef0 FUN_14172aef0 body=389 status=ok
// SIG undefined FUN_14172aef0(void)

longlong * FUN_14172aef0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x38,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x38);
  uVar5 = 0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar3 = (longlong *)param_1[1];
  if ((int *)plVar3[1] < (int *)*plVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if ((((char)bVar1 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x49249 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
    return param_1;
  }
  if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_14174dd30(param_1,(longlong)(int)uVar5 * 0x38 + *param_2);
        uVar6 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar6;
      } while ((int)uVar6 < (int)param_2[1]);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (param_2,local_res8[0]);
  }
  uVar7 = uVar5;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar2);
    }
    uVar4 = uVar5;
    if ((longlong)iVar2 * 0x38 + *param_2 != 0) {
      uVar4 = FObjectImport::FObjectImport();
    }
    FUN_14174dd30(param_1,uVar4);
    uVar6 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar6;
  } while ((int)uVar6 < local_res8[0]);
  return param_1;
}



// FUNCTION 14172b080 FUN_14172b080 body=421 status=ok
// SIG undefined FUN_14172b080(void)

longlong * FUN_14172b080(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  int local_res8 [2];
  undefined8 *puVar9;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  puVar5 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar8 = (longlong *)param_1[1];
  if ((int *)plVar8[1] < (int *)*plVar8 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar8;
    *plVar8 = *plVar8 + 4;
  }
  iVar2 = local_res8[0];
  bVar1 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar1) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x100001)))) {
    if ((bVar1 & 1) != 0) {
      plVar8 = (longlong *)*param_2;
      for (iVar6 = (int)param_2[1]; iVar6 != 0; iVar6 = iVar6 + -1) {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 2;
      }
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != iVar2) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,iVar2);
      }
      puVar9 = puVar5;
      if (0 < local_res8[0]) {
        do {
          iVar2 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
          }
          puVar3 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
          puVar4 = puVar5;
          if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar4 = puVar3;
          }
          FUN_14172b3c0(param_1,puVar4);
          uVar7 = (int)puVar9 + 1;
          puVar9 = (undefined8 *)(ulonglong)uVar7;
        } while ((int)uVar7 < local_res8[0]);
      }
      return param_1;
    }
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_14172b3c0(param_1,(longlong)(int)puVar5 * 0x10 + *param_2);
        uVar7 = (int)puVar5 + 1;
        puVar5 = (undefined8 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar1 | 0x80;
  return param_1;
}



// FUNCTION 14172b230 FUN_14172b230 body=391 status=ok
// SIG undefined FUN_14172b230(void)

longlong * FUN_14172b230(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  puVar6 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar4 = (longlong *)param_1[1];
  if ((int *)plVar4[1] < (int *)*plVar4 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  bVar2 = *(byte *)(param_1 + 5);
  if ((((char)bVar2 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x200000 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar2 | 0x80;
    return param_1;
  }
  if ((bVar2 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        (**(code **)(*param_1 + 0x40))(param_1,*param_2 + (longlong)(int)puVar6 * 8);
        uVar7 = (int)puVar6 + 1;
        puVar6 = (undefined8 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,local_res8[0]);
  }
  puVar8 = puVar6;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar3 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
    }
    puVar1 = (undefined8 *)(*param_2 + (longlong)iVar3 * 8);
    puVar5 = puVar6;
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar5 = puVar1;
    }
    (**(code **)(*param_1 + 0x40))(param_1,puVar5);
    uVar7 = (int)puVar8 + 1;
    puVar8 = (undefined8 *)(ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 14172b3c0 FUN_14172b3c0 body=474 status=ok
// SIG undefined FUN_14172b3c0(void)

longlong * FUN_14172b3c0(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar9;
  int local_res8 [2];
  undefined1 local_38 [16];
  undefined1 *local_28;
  undefined1 **local_20;
  undefined4 *puVar8;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 2,(longlong)*(int *)((longlong)param_2 + 0xc) << 2
            );
  puVar9 = (undefined4 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar4 = (longlong *)param_1[1];
  if ((int *)plVar4[1] < (int *)*plVar4 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  bVar2 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar2) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x400001)))) {
    if ((bVar2 & 1) == 0) {
      *(int *)(param_2 + 1) = local_res8[0];
      if (0 < local_res8[0]) {
        do {
          lVar5 = *param_2;
          FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_38,param_1);
          local_28 = local_38;
          local_20 = &local_28;
          FUN_1415d6020(local_38,lVar5 + (longlong)(int)puVar9 * 4);
          FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_38);
          uVar7 = (int)puVar9 + 1;
          puVar9 = (undefined4 *)(ulonglong)uVar7;
        } while ((int)uVar7 < (int)param_2[1]);
      }
      return param_1;
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_2,local_res8[0]);
    }
    puVar8 = puVar9;
    if (0 < local_res8[0]) {
      do {
        iVar3 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
        }
        puVar1 = (undefined4 *)(*param_2 + (longlong)iVar3 * 4);
        puVar6 = puVar9;
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0;
          puVar6 = puVar1;
        }
        FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_38,param_1);
        local_28 = local_38;
        local_20 = &local_28;
        FUN_1415d6020(local_38,puVar6);
        FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_38);
        uVar7 = (int)puVar8 + 1;
        puVar8 = (undefined4 *)(ulonglong)uVar7;
      } while ((int)uVar7 < local_res8[0]);
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar2 | 0x80;
  return param_1;
}



// FUNCTION 14172b5a0 FUN_14172b5a0 body=758 status=ok
// SIG undefined FUN_14172b5a0(void)

longlong * FUN_14172b5a0(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined4 *puVar8;
  int local_res8 [2];
  undefined1 local_78 [16];
  undefined1 *local_68;
  undefined1 **local_60;
  longlong *local_58;
  undefined1 local_50 [4];
  uint local_4c;
  longlong local_48;
  uint local_40;
  int local_3c;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  iVar3 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar4 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) << 2);
  plVar6 = (longlong *)param_1[1];
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    if ((int *)plVar6[1] < (int *)*plVar6 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_58,param_2);
    if (local_3c < *(int *)(local_48 + 0x18)) {
      do {
        lVar7 = (longlong)local_3c * 0x20 + *local_58;
        FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_78,param_1);
        local_68 = local_78;
        local_60 = &local_68;
        FUN_1415d6020(local_78,lVar7);
        FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_78);
        FUN_14172b230(param_1,lVar7 + 8);
        local_40 = local_40 & ~local_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_50);
      } while (local_3c < *(int *)(local_48 + 0x18));
    }
    return param_1;
  }
  iVar3 = 0;
  local_res8[0] = 0;
  if ((int *)plVar6[1] < (int *)*plVar6 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar6;
    *plVar6 = *plVar6 + 4;
  }
  TSparseArray<TSetElement<TTuple<FPackageIndex,TArray<FName,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_2,local_res8[0]);
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar4 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar4 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(param_2,iVar4);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(param_2 + 2,0,1);
      }
      else {
        iVar4 = (int)param_2[6];
        iVar2 = *(int *)((longlong)iVar4 * 0x20 + 4 + *param_2);
        iVar5 = *(int *)((longlong)param_2 + 0x34) + -1;
        *(int *)(param_2 + 6) = iVar2;
        *(int *)((longlong)param_2 + 0x34) = iVar5;
        if (iVar5 != 0) {
          *(undefined4 *)((longlong)iVar2 * 0x20 + *param_2) = 0xffffffff;
        }
      }
      plVar6 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      iVar5 = iVar4;
      if (iVar4 < 0) {
        iVar5 = iVar4 + 0x1f;
      }
      puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar5 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar4 & 0x1f);
      puVar8 = (undefined4 *)((longlong)iVar4 * 0x20 + *param_2);
      *puVar8 = 0;
      *(undefined8 *)(puVar8 + 2) = 0;
      *(undefined8 *)(puVar8 + 4) = 0;
      puVar8[6] = 0xffffffff;
      FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_78,param_1);
      local_68 = local_78;
      local_60 = &local_68;
      FUN_1415d6020(local_78,puVar8);
      FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_78);
      FUN_14172b230(param_1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 14172b8a0 operator<< body=70 status=ok
// SIG undefined operator<<(void)

void operator<<(undefined8 *param_1,longlong param_2)

{
  FUN_1415d6020(*param_1);
  FUN_1415d6020(*param_1,param_2 + 4);
  FUN_1415d6020(*param_1,param_2 + 8);
  FUN_1415d6020(*param_1,param_2 + 0xc);
  return;
}



// FUNCTION 14172b8f0 FUN_14172b8f0 body=1105 status=ok
// SIG undefined FUN_14172b8f0(void)

void FUN_14172b8f0(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18;
  longlong *local_68;
  undefined1 local_60 [4];
  uint local_5c;
  longlong local_58;
  uint local_50;
  int local_4c;
  
  local_res10[0] = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
  plVar6 = *(longlong **)(*param_1 + 8);
  piVar2 = *(int **)plVar6[1];
  if ((int *)((undefined8 *)plVar6[1])[1] < piVar2 + 1) {
    (**(code **)(*plVar6 + 0x50))(plVar6,local_res10,4);
    if ((*(byte *)((longlong)plVar6 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar6,local_res10,4);
    }
  }
  else {
    local_res10[0] = *piVar2;
    *(longlong *)plVar6[1] = *(longlong *)plVar6[1] + 4;
  }
  if ((*(byte *)(*(longlong *)(*param_1 + 8) + 0x28) & 1) == 0) {
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_68,param_2);
    if (local_4c < *(int *)(local_58 + 0x18)) {
      do {
        lVar10 = (longlong)local_4c * 0x20 + *local_68;
        FUN_1415d6020(*param_1,lVar10);
        local_res8[0] = *(int *)(lVar10 + 0x10);
        plVar6 = (longlong *)(lVar10 + 8);
        plVar3 = *(longlong **)(*param_1 + 8);
        piVar2 = *(int **)plVar3[1];
        if ((int *)((undefined8 *)plVar3[1])[1] < piVar2 + 1) {
          (**(code **)(*plVar3 + 0x50))(plVar3,local_res8,4);
          if ((*(byte *)((longlong)plVar3 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(plVar3,local_res8,4);
          }
        }
        else {
          local_res8[0] = *piVar2;
          *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 4;
        }
        if ((*(byte *)(*(longlong *)(*param_1 + 8) + 0x28) & 1) != 0) {
          iVar5 = *(int *)(lVar10 + 0x10);
          if (iVar5 < local_res8[0]) {
            iVar4 = local_res8[0] - iVar5;
            iVar9 = iVar4 + iVar5;
            *(int *)(lVar10 + 0x10) = iVar9;
            if (*(int *)(lVar10 + 0x14) < iVar9) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6);
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar6 + (longlong)iVar5 * 8),0,(longlong)iVar4 << 3);
          }
          else if ((local_res8[0] < iVar5) && (iVar9 = iVar5 - local_res8[0], iVar9 != 0)) {
            iVar4 = (iVar5 - iVar9) - local_res8[0];
            if (iVar4 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*plVar6 + (longlong)local_res8[0] * 8),
                         (void *)(*plVar6 + (longlong)(iVar9 + local_res8[0]) * 8),
                         (longlong)iVar4 << 3);
              iVar5 = *(int *)(lVar10 + 0x10);
            }
            *(int *)(lVar10 + 0x10) = iVar5 - iVar9;
            TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar6);
          }
        }
        iVar5 = 0;
        if (0 < local_res8[0]) {
          do {
            (**(code **)(**(longlong **)(*param_1 + 8) + 0x40))
                      (*(longlong **)(*param_1 + 8),*plVar6 + (longlong)iVar5 * 8);
            iVar5 = iVar5 + 1;
          } while (iVar5 < local_res8[0]);
        }
        local_50 = local_50 & ~local_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_60);
      } while (local_4c < *(int *)(local_58 + 0x18));
    }
  }
  else {
    TSparseArray<TSetElement<TTuple<FPackageIndex,TArray<FName,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(param_2,local_res10[0]);
    local_res18 = 0;
    if (0 < local_res10[0]) {
      do {
        iVar5 = local_res18;
        if (*(int *)((longlong)param_2 + 0x34) == 0) {
          iVar9 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar9 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar9 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
            ::ResizeGrow(param_2,iVar9);
          }
          TBitArray<FDefaultBitArrayAllocator>::Add(param_2 + 2,0,1);
        }
        else {
          iVar9 = (int)param_2[6];
          iVar8 = *(int *)((longlong)iVar9 * 0x20 + 4 + *param_2);
          iVar4 = *(int *)((longlong)param_2 + 0x34) + -1;
          *(int *)(param_2 + 6) = iVar8;
          *(int *)((longlong)param_2 + 0x34) = iVar4;
          if (iVar4 != 0) {
            *(undefined4 *)((longlong)iVar8 * 0x20 + *param_2) = 0xffffffff;
          }
        }
        plVar6 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar6 = param_2 + 2;
        }
        iVar4 = iVar9;
        if (iVar9 < 0) {
          iVar4 = iVar9 + 0x1f;
        }
        puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar4 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
        puVar7 = (undefined4 *)((longlong)iVar9 * 0x20 + *param_2);
        *puVar7 = 0;
        plVar6 = (longlong *)(puVar7 + 2);
        *plVar6 = 0;
        *(undefined8 *)(puVar7 + 4) = 0;
        puVar7[6] = 0xffffffff;
        FUN_1415d6020(*param_1);
        local_res8[0] = puVar7[4];
        plVar3 = *(longlong **)(*param_1 + 8);
        piVar2 = *(int **)plVar3[1];
        if ((int *)((undefined8 *)plVar3[1])[1] < piVar2 + 1) {
          (**(code **)(*plVar3 + 0x50))(plVar3,local_res8,4);
          if ((*(byte *)((longlong)plVar3 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(plVar3,local_res8,4);
          }
        }
        else {
          local_res8[0] = *piVar2;
          *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 4;
        }
        if ((*(byte *)(*(longlong *)(*param_1 + 8) + 0x28) & 1) != 0) {
          iVar9 = puVar7[4];
          if (iVar9 < local_res8[0]) {
            iVar8 = local_res8[0] - iVar9;
            iVar4 = iVar8 + iVar9;
            puVar7[4] = iVar4;
            if ((int)puVar7[5] < iVar4) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6);
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar6 + (longlong)iVar9 * 8),0,(longlong)iVar8 << 3);
          }
          else if ((local_res8[0] < iVar9) &&
                  (iVar4 = iVar9 - local_res8[0], iVar5 = local_res18, iVar4 != 0)) {
            iVar5 = (iVar9 - iVar4) - local_res8[0];
            if (iVar5 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*plVar6 + (longlong)local_res8[0] * 8),
                         (void *)(*plVar6 + (longlong)(iVar4 + local_res8[0]) * 8),
                         (longlong)iVar5 << 3);
              iVar9 = puVar7[4];
            }
            puVar7[4] = iVar9 - iVar4;
            TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar6);
            iVar5 = local_res18;
          }
        }
        iVar9 = 0;
        if (0 < local_res8[0]) {
          do {
            (**(code **)(**(longlong **)(*param_1 + 8) + 0x40))();
            iVar9 = iVar9 + 1;
          } while (iVar9 < local_res8[0]);
        }
        local_res18 = iVar5 + 1;
      } while (local_res18 < local_res10[0]);
    }
  }
  return;
}



// FUNCTION 14172bd50 FUN_14172bd50 body=172 status=ok
// SIG undefined FUN_14172bd50(void)

longlong FUN_14172bd50(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 local_res8 [2];
  undefined1 local_28 [16];
  undefined1 *local_18;
  undefined1 **local_10;
  
  local_res8[0] = 0;
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_28,param_1);
  local_18 = local_28;
  local_10 = &local_18;
  FUN_1415d6020(local_28,local_res8);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_28);
  if ((DAT_1468c21ab != '\0') && (*(char *)(param_1 + 0xa0) != '\0')) {
    uVar1 = FUN_1416f1ca0(*(undefined8 *)(param_1 + 0x120),local_res8[0],0,0);
    *param_2 = uVar1;
    return param_1;
  }
  uVar1 = FUN_14173d7a0(param_1 + -0x200,local_res8[0]);
  *param_2 = uVar1;
  return param_1;
}



// FUNCTION 14172be00 operator<< body=136 status=ok
// SIG undefined operator<<(void)

undefined8 FLinkerLoad::operator<<(undefined8 param_1,undefined4 *param_2)

{
  undefined8 local_38;
  longlong local_30 [3];
  undefined1 local_18 [16];
  
  local_38 = 0;
  local_30[0] = 0;
  local_30[1] = 0;
  FUN_141797610(&local_38,param_1);
  local_30[2] = local_38;
  *param_2 = 0xffffffff;
  param_2[1] = 0;
  FString::FString(local_18,local_30);
  FSoftObjectPath::operator=(param_2 + 4,local_30 + 2);
  param_2[2] = 0;
  if (local_30[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14172be90 FUN_14172be90 body=265 status=ok
// SIG undefined FUN_14172be90(void)

longlong * FUN_14172be90(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 local_res8;
  undefined4 local_res10 [2];
  
  *param_2 = 0;
  plVar2 = (longlong *)param_1[1];
  local_res8 = 0;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,&local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,&local_res8,4);
    }
  }
  else {
    local_res8 = (ulonglong)*(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  plVar2 = (longlong *)param_1[1];
  if ((undefined4 *)plVar2[1] < (undefined4 *)*plVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res10,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res10,4);
    }
  }
  else {
    local_res10[0] = *(undefined4 *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (((int)local_res8 < 0) || ((int)param_1[-7] <= (int)local_res8)) {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x80;
    *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) | 1;
  }
  else {
    iVar1 = *(int *)(param_1[-8] + (longlong)(int)local_res8 * 8);
    if ((iVar1 != 0) || (*(int *)(param_1[-8] + 4 + (longlong)(int)local_res8 * 8) != 0)) {
      local_res8 = CONCAT44(local_res10[0],iVar1);
      *param_2 = local_res8;
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14172bfa0 operator() body=375 status=ok
// SIG undefined operator()(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void <lambda_36ba0310c071ea10b413cd51255802e6>::operator()(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  iVar6 = *(int *)(param_1 + 4);
  uVar8 = iVar6 * param_2 + _DAT_1469e91a0;
  iVar4 = *(int *)((longlong)param_1 + 0x24) + -1;
  if (iVar4 <= param_2) {
    iVar6 = *(int *)(param_1 + 5) - iVar4 * iVar6;
  }
  iVar6 = (uVar8 - 1) + iVar6;
  if ((int)DAT_1469e91c4 + -1 <= iVar6) {
    iVar6 = (int)DAT_1469e91c4 + -1;
  }
  iVar4 = 0;
  do {
    if (iVar6 < (int)uVar8) {
      LOCK();
      DAT_1469e72ac = DAT_1469e72ac + iVar4;
      UNLOCK();
      return;
    }
    uVar7 = uVar8 & 0xffff;
    uVar5 = uVar8;
    if ((int)uVar8 < 0) {
      uVar5 = uVar8 + 0xffff;
      uVar7 = uVar7 - 0x10000;
    }
    lVar1 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8);
    lVar2 = *(longlong *)(lVar1 + (longlong)(int)uVar7 * 0x18);
    lVar1 = lVar1 + (longlong)(int)uVar7 * 0x18;
    if (lVar2 != 0) {
      uVar5 = *(uint *)(lVar1 + 8);
      iVar4 = iVar4 + 1;
      *(uint *)(lVar1 + 8) = uVar5 & 0xff7fffff;
      if ((uVar5 >> 0x1e & 1) == 0) {
        if (*(int *)(lVar1 + 0xc) < 1) {
          bVar3 = true;
          if (((byte)(uVar5 >> 0x1d) & 1) == 0) {
            if ((*(uint *)(param_1 + 3) & uVar5 & 0xff7fffff) == 0) {
              if ((*(uint *)((longlong)param_1 + 0x1c) != 0) &&
                 ((*(uint *)(lVar2 + 8) & *(uint *)((longlong)param_1 + 0x1c)) != 0)) {
                bVar3 = false;
              }
              goto LAB_14172c0ba;
            }
          }
          else {
            if ((uVar5 >> 0x18 & 1) != 0) {
              FLockFreePointerFIFOBase<FUObjectItem,128,1>::Push(param_1[1],lVar1);
            }
LAB_14172c0ba:
            if (bVar3) {
              *(uint *)(lVar1 + 8) = *(uint *)(lVar1 + 8) | 0x10000000;
              goto LAB_14172c0e5;
            }
          }
          FLockFreePointerFIFOBase<FUObjectItem,128,1>::Push(*param_1,lVar2);
          if ((*(byte *)(lVar1 + 0xb) & 1) != 0) {
            FLockFreePointerFIFOBase<FUObjectItem,128,1>::Push(param_1[2],lVar1);
          }
        }
      }
      else {
        if (((uVar5 >> 0x18 & 1) != 0) || (0 < *(int *)(lVar1 + 0xc))) {
          FLockFreePointerFIFOBase<FUObjectItem,128,1>::Push(param_1[2],lVar1);
        }
        FLockFreePointerFIFOBase<FUObjectItem,128,1>::Push(*param_1,lVar2);
      }
    }
LAB_14172c0e5:
    uVar8 = uVar8 + 1;
  } while( true );
}



// FUNCTION 14172c120 operator() body=555 status=ok
// SIG undefined operator()(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void <lambda_d09ef60e1740ff61a95bcdace8c8ae1e>::operator()(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  BOOL BVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  void *pvVar9;
  int iVar10;
  void *pvVar11;
  void *_Src;
  void *pvVar12;
  void *_Src_00;
  void *local_58;
  uint local_50;
  uint local_4c;
  void *local_48;
  uint local_40;
  uint local_3c;
  
  iVar10 = (int)param_1[1];
  uVar7 = iVar10 * param_2 + _DAT_1469e91a0;
  iVar3 = *(int *)((longlong)param_1 + 0xc) + -1;
  if (iVar3 <= param_2) {
    iVar10 = (int)param_1[2] - iVar3 * iVar10;
  }
  iVar10 = (uVar7 - 1) + iVar10;
  if ((int)DAT_1469e91c4 + -1 <= iVar10) {
    iVar10 = (int)DAT_1469e91c4 + -1;
  }
  pvVar8 = (void *)0x0;
  local_48 = (void *)0x0;
  local_3c = 0;
  local_58 = (void *)0x0;
  local_4c = 0;
  pvVar9 = pvVar8;
  pvVar11 = pvVar8;
  _Src = pvVar8;
  pvVar12 = pvVar8;
  _Src_00 = pvVar8;
  if ((int)uVar7 <= iVar10) {
    do {
      uVar6 = uVar7 & 0xffff;
      uVar4 = uVar7;
      if ((int)uVar7 < 0) {
        uVar4 = uVar7 + 0xffff;
        uVar6 = uVar6 - 0x10000;
      }
      lVar2 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8);
      lVar1 = lVar2 + (longlong)(int)uVar6 * 0x18;
      if ((*(uint *)(lVar2 + 8 + (longlong)(int)uVar6 * 0x18) >> 0x1c & 1) != 0) {
        iVar3 = (int)pvVar8;
        local_40 = iVar3 + 1;
        if ((int)pvVar11 < (int)local_40) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,pvVar8);
          _Src_00 = local_48;
        }
        pvVar8 = (void *)(ulonglong)local_40;
        *(longlong *)((longlong)_Src_00 + (longlong)iVar3 * 8) = lVar1;
        if ((*(byte *)(lVar1 + 0xb) & 1) != 0) {
          iVar3 = (int)pvVar9;
          local_50 = iVar3 + 1;
          if ((int)pvVar12 < (int)local_50) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_58,pvVar9);
            pvVar12 = (void *)(ulonglong)local_4c;
            _Src = local_58;
          }
          pvVar9 = (void *)(ulonglong)local_50;
          *(longlong *)((longlong)_Src + (longlong)iVar3 * 8) = lVar1;
        }
      }
      uVar7 = uVar7 + 1;
      pvVar11 = (void *)(ulonglong)local_3c;
    } while ((int)uVar7 <= iVar10);
    iVar10 = (int)pvVar8;
    if (iVar10 != 0) {
      BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469e72d0);
      if (BVar5 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469e72d0);
      }
      if (DAT_1469e72cc < DAT_1469e72c8 + iVar10) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_1469e72c0);
      }
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(DAT_1469e72c0 + (longlong)DAT_1469e72c8 * 8),_Src_00,(longlong)iVar10 << 3
                );
      DAT_1469e72c8 = DAT_1469e72c8 + iVar10;
      param_1 = (longlong *)*param_1;
      iVar10 = (int)pvVar9;
      if (iVar10 != 0) {
        iVar3 = (int)param_1[1];
        if (*(int *)((longlong)param_1 + 0xc) < iVar3 + iVar10) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(param_1);
          iVar3 = (int)param_1[1];
        }
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 + (longlong)iVar3 * 8),_Src,(longlong)iVar10 << 3);
        *(int *)(param_1 + 1) = (int)param_1[1] + iVar10;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1469e72d0);
    }
    if (_Src != (void *)0x0) {
      FMemory::Free(_Src);
    }
    if (_Src_00 != (void *)0x0) {
      FMemory::Free(_Src_00);
    }
  }
  return;
}



// FUNCTION 14172c360 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FGCCollector<1>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FReferenceCollector::~FReferenceCollector();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14172c3a0 FUN_14172c3a0 body=97 status=ok
// SIG undefined FUN_14172c3a0(void)

undefined8 * FUN_14172c3a0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144d10f10;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14172c410 FUN_14172c410 body=97 status=ok
// SIG undefined FUN_14172c410(void)

undefined8 * FUN_14172c410(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144d10de8;
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



// FUNCTION 14172c480 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FLinker::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FLinker();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x200);
  }
  return param_1;
}



// FUNCTION 14172c4c0 FUN_14172c4c0 body=373 status=ok
// SIG undefined FUN_14172c4c0(void)

undefined8 * FUN_14172c4c0(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  undefined1 local_res10 [8];
  code *local_18;
  undefined1 *puStack_10;
  
  local_res10[0] = 0;
  *param_1 = &PTR_FUN_144d10698;
  param_1[0x40] = &PTR_LAB_144d106a0;
  puStack_10 = local_res10;
  local_18 = FUN_1406ddef0;
  lVar1 = FUN_1415d8310(&local_18,&DAT_14622e6dc);
  if (*(char *)(lVar1 + 0x59) == '\0') {
    LowLevelFatalErrorHandler("Unknown",0x34b,L"Linkers can only be deleted by FLinkerManager.");
    FDebug::AssertFailed
              (&DAT_144d07c0a,"Unknown",0x34b,L"Linkers can only be deleted by FLinkerManager.");
  }
  FUN_141733120(param_1);
  *(undefined4 *)(param_1 + 0xfd) = 0;
  if (param_1[0xfc] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xf4);
  if (param_1[0xf2] != 0) {
    FMemory::Free();
  }
  TArray<TFunction<TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>,FDefaultAllocator>
  ::
  ~TArray<TFunction<TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>,FDefaultAllocator>
            (param_1 + 0xe7);
  if (param_1[0xe5] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x62) = 0;
  if (param_1[0x61] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x59);
  if (*(char *)(param_1 + 0x58) != '\0') {
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  FArchive::~FArchive(param_1 + 0x40);
  FLinker::~FLinker(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x7f0);
  }
  return param_1;
}



// FUNCTION 14172c640 `scalar_deleting_destructor' body=96 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FReferenceFinder::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x20);
  FReferenceCollector::~FReferenceCollector(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 14172c6a0 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UShowLoginUICallbackProxy::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 14172c700 AddAnnotation body=543 status=ok
// SIG undefined AddAnnotation(void)

void FUObjectAnnotationSparseSearchable<FUniqueObjectGuid,1>::AddAnnotation
               (longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  BOOL BVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int local_res8 [2];
  longlong local_res10;
  longlong *local_68;
  longlong *plStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong lStack_40;
  
  local_res10 = param_2;
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
  }
  lVar3 = local_res10;
  if (((*(int *)((longlong)param_3 + 0xc) == 0 && (int)param_3[1] == 0) &&
      *(int *)((longlong)param_3 + 4) == 0) && (int)*param_3 == 0) {
    RemoveAnnotation(param_1,local_res10);
  }
  else {
    BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    if (BVar4 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    }
    plVar1 = (longlong *)(param_1 + 0x80);
    if (lVar3 != *plVar1) {
      *plVar1 = lVar3;
      TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 8,local_res8,lVar3);
      puVar6 = (undefined8 *)0x0;
      if (local_res8[0] != -1) {
        puVar6 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 8));
      }
      puVar5 = puVar6 + 1;
      if (puVar6 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)0x0;
      }
      if (puVar5 == (undefined8 *)0x0) {
        local_68 = (longlong *)0x0;
        plStack_60 = (longlong *)0x0;
        uVar7 = 0;
        uVar8 = 0;
      }
      else {
        uVar7 = *puVar5;
        uVar8 = puVar5[1];
      }
      *(undefined8 *)(param_1 + 0x88) = uVar7;
      *(undefined8 *)(param_1 + 0x90) = uVar8;
    }
    local_58 = *(undefined8 *)(param_1 + 0x88);
    uStack_50 = *(undefined8 *)(param_1 + 0x90);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 0x98,&local_58);
    lVar3 = local_res10;
    local_68 = (longlong *)*param_3;
    plStack_60 = (longlong *)param_3[1];
    local_48 = local_68;
    lStack_40 = (longlong)plStack_60;
    BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    if (BVar4 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    }
    auVar2._8_8_ = plStack_60;
    auVar2._0_8_ = local_68;
    *plVar1 = lVar3;
    *(undefined1 (*) [16])(param_1 + 0x88) = auVar2;
    if ((((int)local_68 == 0 && local_48._4_4_ == 0) && (int)plStack_60 == 0) &&
        (int)((ulonglong)plStack_60 >> 0x20) == 0) {
      FUObjectAnnotationSparse<FUniqueObjectGuid,1>::RemoveAnnotation(param_1,lVar3);
    }
    else {
      if (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x3c)) {
        FUObjectArray::AddUObjectDeleteListener(&DAT_1469e91a0,param_1);
      }
      plStack_60 = (longlong *)(param_1 + 0x88);
      local_68 = plVar1;
      FUN_141728740(param_1 + 8,local_res8,&local_68,0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 0x98,param_3);
    plStack_60 = &local_res10;
    local_68 = param_3;
    FUN_141728990(param_1 + 0x98,local_res8,&local_68,0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
  return;
}



// FUNCTION 14172c940 AddKnownMissingPackage body=46 status=ok
// SIG undefined AddKnownMissingPackage(void)

void FLinkerLoad::AddKnownMissingPackage(undefined8 param_1)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = 0;
  local_18 = param_1;
  FCoreRedirects::AddKnownMissing(0x40,&local_28);
  return;
}



// FUNCTION 14172c970 FUN_14172c970 body=305 status=ok
// SIG undefined FUN_14172c970(void)

void FUN_14172c970(longlong param_1)

{
  int iVar1;
  undefined *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  longlong local_res10;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int *local_28;
  longlong *local_20;
  
  plVar4 = *(longlong **)(param_1 + 0x40);
  plVar5 = plVar4 + (longlong)*(int *)(param_1 + 0x48) * 2;
  lVar6 = DAT_1464b4cb0;
  do {
    if (plVar4 == plVar5) {
      return;
    }
    local_38 = (int)*plVar4;
    iStack_34 = *(int *)((longlong)plVar4 + 4);
    iStack_30 = (int)plVar4[1];
    iStack_2c = *(int *)((longlong)plVar4 + 0xc);
    if (DAT_1464b4cb8 != DAT_1464b4ce4) {
      puVar2 = DAT_1464b4cf0;
      if (DAT_1464b4cf0 == (undefined *)0x0) {
        puVar2 = &DAT_1464b4ce8;
      }
      iVar1 = *(int *)(puVar2 + (longlong)(int)(iStack_34 + local_38 & DAT_1464b4cf8 - 1U) * 4);
      while (iVar1 != -1) {
        lVar3 = (longlong)iVar1;
        if (*(longlong *)(lVar6 + lVar3 * 0x18) == *plVar4) {
          if ((((iVar1 != -1) && (lVar3 = lVar6 + lVar3 * 0x18, lVar3 != 0)) &&
              (lVar3 = *(longlong *)(lVar3 + 8), lVar3 != 0)) &&
             ((*(uint *)(lVar3 + 8) >> 0xe & 1) == 0)) {
            if (lVar3 != param_1) {
              UObjectBaseUtility::GetOutermost();
              GetTransientPackage();
              lVar6 = DAT_1464b4cb0;
            }
            goto LAB_14172ca51;
          }
          break;
        }
        iVar1 = *(int *)(lVar6 + 0x10 + lVar3 * 0x18);
      }
    }
    local_28 = &local_38;
    local_20 = &local_res10;
    local_res10 = param_1;
    FUN_1416e1690(&DAT_1464b4cb0,local_res8,&local_28,0);
    lVar6 = DAT_1464b4cb0;
LAB_14172ca51:
    plVar4 = plVar4 + 2;
  } while( true );
}



// FUNCTION 14172cab0 AddReferencedObjects body=65 status=ok
// SIG undefined AddReferencedObjects(void)

void UEnumProperty::AddReferencedObjects(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x78,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00014172caed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x70,param_1,0);
  return;
}



// FUNCTION 14172cb00 AddTask body=320 status=ok
// SIG undefined AddTask(void)

void TFastReferenceCollector<1,FGCReferenceProcessor<1>,FGCCollector<1>,FGCArrayPool,0>::
     FCollectorTaskQueue::AddTask(longlong param_1,longlong *param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  puVar4 = (undefined8 *)
           TLockFreePointerListLIFOPad<FGCArrayStruct,0>::Pop(*(undefined8 *)(param_1 + 8));
  plVar6 = (longlong *)0x0;
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)operator_new(0x20);
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
    }
  }
  iVar1 = *(int *)(puVar4 + 1);
  *(int *)(puVar4 + 1) = iVar1 + param_4;
  if (*(int *)((longlong)puVar4 + 0xc) < iVar1 + param_4) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar4);
  }
  ::_guard_xfg_dispatch_icall_nop
            ((void *)*puVar4,(void *)(*param_2 + (longlong)param_3 * 8),(longlong)param_4 << 3);
  uVar2 = FLockFreeLinkPolicy::AllocLockFreeLink();
  plVar5 = plVar6;
  if (uVar2 != 0) {
    plVar5 = (longlong *)((&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18);
  }
  plVar5[1] = (longlong)puVar4;
  FLockFreePointerListLIFORoot<128,1>::Push(param_1 + 0x10);
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x118));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x118));
  }
  if (*(int *)(param_1 + 0x148) != 0) {
    plVar6 = *(longlong **)
              (*(longlong *)(param_1 + 0x140) + -8 + (longlong)*(int *)(param_1 + 0x148) * 8);
    *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x118));
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  return;
}



// FUNCTION 14172cc40 FUN_14172cc40 body=4 status=ok
// SIG undefined FUN_14172cc40(void)

void FUN_14172cc40(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x28) = param_2;
  return;
}



// FUNCTION 14172cc50 FUN_14172cc50 body=906 status=ok
// SIG undefined FUN_14172cc50(void)

void FUN_14172cc50(longlong param_1,char param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  BOOL BVar5;
  DWORD DVar6;
  undefined8 *puVar7;
  byte bVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  byte bVar11;
  longlong local_68;
  undefined8 local_60;
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38;
  longlong *local_30;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1c0);
  bVar11 = ~(byte)(*(uint *)(param_1 + 0xb4) >> 7) & 1;
  if ((bVar11 != 0) && (BVar5 = TryEnterCriticalSection(lpCriticalSection), BVar5 == 0)) {
    EnterCriticalSection(lpCriticalSection);
  }
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar4 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    LOCK();
    iVar2 = *DAT_1469e7300;
    if (iVar2 == 0) {
      *DAT_1469e7300 = 0;
    }
    UNLOCK();
    if (iVar2 == 0) {
      puVar7 = (undefined8 *)UObjectBaseUtility::GetFullName(param_1,local_58,0);
      puVar9 = &DAT_143f3eda8;
      if (*(int *)(puVar7 + 1) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = (undefined2 *)*puVar7;
      }
      LowLevelFatalErrorHandler
                ("Unknown",0x8f6,
                 L"AssembleReferenceTokenStream for %s called on a non-game thread while GC is not locked."
                 ,puVar10);
      if (local_58[0] != 0) {
        FMemory::Free();
      }
      puVar7 = (undefined8 *)UObjectBaseUtility::GetFullName(param_1,local_48,0);
      if (*(int *)(puVar7 + 1) != 0) {
        puVar9 = (undefined2 *)*puVar7;
      }
      FDebug::AssertFailed
                (&DAT_144d072b2,"Unknown",0x8f6,
                 L"AssembleReferenceTokenStream for %s called on a non-game thread while GC is not locked."
                 ,puVar9);
      if (local_48[0] != 0) {
        FMemory::Free();
      }
    }
  }
  if ((*(uint *)(param_1 + 0xb4) >> 0x16 & 1) == 0) {
    if (param_2 != '\0') goto LAB_14172cdac;
  }
  else {
    if (param_2 == '\0') goto LAB_14172cf57;
LAB_14172cdac:
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    if (*(int *)(param_1 + 0x1bc) != 0) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x1b0,0);
    }
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xffbfffff;
  }
  local_30 = *(longlong **)(param_1 + 0x38);
  local_68 = 0;
  local_60 = 0;
  local_28 = 0xffffffff;
  local_24 = 0x100;
  local_22 = 0;
  local_38 = param_1;
  FUN_140472e10(&local_38);
  plVar1 = local_30;
  while (local_30 = plVar1, plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))(plVar1,param_1,0,&local_68);
    local_30 = (longlong *)plVar1[5];
    FUN_140472e10(&local_38);
    plVar1 = local_30;
  }
  lVar3 = *(longlong *)(param_1 + 0x30);
  if (lVar3 == 0) {
    FUN_141789f30(param_1);
  }
  else {
    bVar8 = ~(byte)(*(uint *)(lVar3 + 0xb4) >> 7) & 1;
    if ((bVar8 != 0) &&
       (BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x1c0)), BVar5 == 0)) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x1c0));
    }
    FUN_14172cc50(lVar3,0);
    if (*(int *)(lVar3 + 0x1b8) != 0) {
      UClass::PrependStreamWithSuperClass(param_1,lVar3);
    }
    if (bVar8 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x1c0));
    }
  }
  if (*(code **)(param_1 + 0xa8) != AK::MemoryMgr::StartProfileThreadUsage) {
    FUN_141745d70(param_1 + 0x1b0);
  }
  if (*(int *)(param_1 + 0x1b8) != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1469e76f0) &&
       (_Init_thread_header(&DAT_1469e76f0), DAT_1469e76f0 == -1)) {
      FName::FName(&DAT_1469e76e8,&DAT_144d07f94,1);
      _Init_thread_footer(&DAT_1469e76f0);
    }
    plVar1 = (longlong *)(param_1 + 0x1b0);
    iVar2 = *(int *)(param_1 + 0x1b8);
    *(int *)(param_1 + 0x1b8) = iVar2 + 1;
    if (*(int *)(param_1 + 0x1bc) < iVar2 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = 0xb00;
    if (*(int *)(param_1 + 0x1bc) != *(int *)(param_1 + 0x1b8)) {
      TArray<float,FDefaultAllocator>::ResizeTo(plVar1);
    }
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 0x400000;
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
LAB_14172cf57:
  if (bVar11 != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}



// FUNCTION 14172cfe0 AttachExternalReadDependency body=87 status=ok
// SIG undefined AttachExternalReadDependency(void)

undefined8 FLinkerLoad::AttachExternalReadDependency(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x540);
  *(int *)(param_1 + 0x540) = iVar1 + 1;
  if (*(int *)(param_1 + 0x544) < iVar1 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x538),iVar1);
  }
  ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
            ((longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 0x538),param_2);
  return 1;
}



// FUNCTION 14172d040 BeginDestroy body=27 status=ok
// SIG undefined BeginDestroy(void)

void UEnum::BeginDestroy(undefined8 param_1)

{
  RemoveNamesFromMasterList();
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 14172d0a0 FUN_14172d0a0 body=82 status=ok
// SIG undefined FUN_14172d0a0(void)

void FUN_14172d0a0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  uVar3 = *param_2;
  iVar1 = *(int *)(lVar2 + 0x48);
  *(int *)(lVar2 + 0x48) = iVar1 + 1;
  if (*(int *)(lVar2 + 0x4c) < iVar1 + 1) {
    TArray<UActionBase_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(lVar2,iVar1);
  }
  lVar4 = *(longlong *)(lVar2 + 0x40);
  if (*(longlong *)(lVar2 + 0x40) == 0) {
    lVar4 = lVar2;
  }
  *(undefined8 *)(lVar4 + (longlong)iVar1 * 8) = uVar3;
  return;
}



// FUNCTION 14172d120 CallAddReferencedObjects body=11 status=ok
// SIG undefined CallAddReferencedObjects(void)

void UObject::CallAddReferencedObjects(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014172d124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x10) + 0xa8))();
  return;
}



// FUNCTION 14172d130 CleanupGCArrayPools body=224 status=ok
// SIG undefined CleanupGCArrayPools(void)

void CleanupGCArrayPools(void)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *local_18;
  undefined8 local_10;
  
  if (DAT_1469e76c0 == 0) {
    DAT_1469e76c0 = FUN_1417380b0();
  }
  uVar5 = 0;
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FUN_141740670(DAT_1469e76c0,&local_18);
  plVar2 = local_18;
  uVar3 = (ulonglong)((longlong)(local_18 + (int)local_10) + (7 - (longlong)local_18)) >> 3;
  if (local_18 + (int)local_10 < local_18) {
    uVar3 = uVar5;
  }
  plVar4 = local_18;
  if (uVar3 != 0) {
    do {
      plVar1 = (longlong *)*plVar4;
      if (plVar1 != (longlong *)0x0) {
        if (plVar1[2] != 0) {
          FMemory::Free();
        }
        if (*plVar1 != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(plVar1,0x20);
      }
      uVar5 = uVar5 + 1;
      plVar4 = plVar4 + 1;
    } while (uVar5 != uVar3);
  }
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar2);
  return;
}



// FUNCTION 14172d210 FUN_14172d210 body=595 status=ok
// SIG undefined FUN_14172d210(void)

/* WARNING: Removing unreachable block (ram,0x00014172d25f) */
/* WARNING: Removing unreachable block (ram,0x00014172d270) */
/* WARNING: Removing unreachable block (ram,0x00014172d291) */
/* WARNING: Removing unreachable block (ram,0x00014172d295) */
/* WARNING: Removing unreachable block (ram,0x00014172d29a) */
/* WARNING: Removing unreachable block (ram,0x00014172d2a0) */
/* WARNING: Removing unreachable block (ram,0x00014172d2ab) */
/* WARNING: Removing unreachable block (ram,0x00014172d2e6) */
/* WARNING: Removing unreachable block (ram,0x00014172d2b6) */
/* WARNING: Removing unreachable block (ram,0x00014172d2bd) */
/* WARNING: Removing unreachable block (ram,0x00014172d2c8) */
/* WARNING: Removing unreachable block (ram,0x00014172d2e9) */
/* WARNING: Removing unreachable block (ram,0x00014172d2f3) */
/* WARNING: Removing unreachable block (ram,0x00014172d2f6) */
/* WARNING: Removing unreachable block (ram,0x00014172d302) */
/* WARNING: Removing unreachable block (ram,0x00014172d30b) */
/* WARNING: Removing unreachable block (ram,0x00014172d316) */
/* WARNING: Removing unreachable block (ram,0x00014172d351) */
/* WARNING: Removing unreachable block (ram,0x00014172d369) */
/* WARNING: Removing unreachable block (ram,0x00014172d363) */
/* WARNING: Removing unreachable block (ram,0x00014172d38a) */
/* WARNING: Removing unreachable block (ram,0x00014172d390) */
/* WARNING: Removing unreachable block (ram,0x00014172d392) */
/* WARNING: Removing unreachable block (ram,0x00014172d3c1) */
/* WARNING: Removing unreachable block (ram,0x00014172d3c8) */
/* WARNING: Removing unreachable block (ram,0x00014172d3d7) */
/* WARNING: Removing unreachable block (ram,0x00014172d3d2) */
/* WARNING: Removing unreachable block (ram,0x00014172d3f8) */
/* WARNING: Removing unreachable block (ram,0x00014172d405) */
/* WARNING: Removing unreachable block (ram,0x00014172d40d) */
/* WARNING: Removing unreachable block (ram,0x00014172d31b) */
/* WARNING: Removing unreachable block (ram,0x00014172d324) */
/* WARNING: Removing unreachable block (ram,0x00014172d32d) */
/* WARNING: Removing unreachable block (ram,0x00014172d332) */
/* WARNING: Removing unreachable block (ram,0x00014172d33a) */
/* WARNING: Removing unreachable block (ram,0x00014172d33f) */
/* WARNING: Removing unreachable block (ram,0x00014172d414) */
/* WARNING: Removing unreachable block (ram,0x00014172d421) */
/* WARNING: Removing unreachable block (ram,0x00014172d44e) */

void FUN_14172d210(void)

{
  FUN_141740670();
  return;
}



// FUNCTION 14172d470 FUN_14172d470 body=95 status=ok
// SIG undefined FUN_14172d470(void)

void FUN_14172d470(undefined4 param_1,undefined1 param_2)

{
  longlong lVar1;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  
  QueryPerformanceCounter(&local_res18);
  FUN_141736720(DAT_1469e7300);
  QueryPerformanceCounter(&local_res20);
  FUN_14172d4d0(param_1,param_2);
  lVar1 = DAT_1469e7300;
  (**(code **)(**(longlong **)(DAT_1469e7300 + 0x38) + 0x10))();
  LOCK();
  *(int *)(lVar1 + 4) = *(int *)(lVar1 + 4) + -1;
  UNLOCK();
  FMemory::Trim();
  return;
}



// FUNCTION 14172d4d0 FUN_14172d4d0 body=494 status=ok
// SIG undefined FUN_14172d4d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14172d4d0(undefined4 param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined **local_res18;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_28 [2];
  
  LOCK();
  *(undefined4 *)(DAT_1469e7300 + 8) = 0;
  UNLOCK();
  DAT_1469e7698 = 0;
  if (DAT_1469e729c != 0) {
    (*(code *)PTR_CanBeUsedOnAnyThread_1464aaa50)();
    lVar1 = DAT_1469e7300;
    (**(code **)(**(longlong **)(DAT_1469e7300 + 0x38) + 0x10))();
    LOCK();
    *(int *)(lVar1 + 4) = *(int *)(lVar1 + 4) + -1;
    UNLOCK();
    FUN_1416f7d70(0xffffffff);
    FUN_141736720(DAT_1469e7300);
  }
  uVar4 = FUN_14178e3a0();
  TBaseMulticastDelegate<void>::Broadcast(uVar4);
  _DAT_1468c21b8 = DAT_1468c21b0;
  LOCK();
  bVar6 = DAT_1469e76c8 == 0;
  if (bVar6) {
    DAT_1469e76c8 = 0;
  }
  UNLOCK();
  LockUObjectHashTables();
  LOCK();
  DAT_1469e76c8 = 1;
  UNLOCK();
  if ((DAT_1469e7294 != '\0') || (DAT_1469e7690 != '\0')) {
    FUN_14173d060(0,0x3b03126f);
    FMemory::Trim();
  }
  cVar2 = FUN_141636a40();
  if ((((cVar2 == '\0') || (cVar2 = FUN_1415bac00(), cVar2 == '\0')) ||
      (iVar3 = FUN_1416a5660(), iVar3 < 2)) || (DAT_1464b4c7c == 0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  QueryPerformanceCounter(&local_res20);
  local_res18 = &PTR_FUN_144d10cf0;
  FUN_14173ff50(&local_res18,param_1,uVar5);
  if (DAT_1469e8f34 != '\0') {
    QueryPerformanceCounter(local_28);
    FUObjectClusterContainer::DissolveClusters(&DAT_1469e8f10);
  }
  TBaseMulticastDelegate<void>::Broadcast(&DAT_1464b5818);
  if (DAT_1469e76c0 == 0) {
    DAT_1469e76c0 = FUN_1417380b0();
  }
  FUN_14172d210(DAT_1469e76c0,param_2);
  FUN_1417367e0(uVar5);
  if ((param_2 != '\0') || (DAT_1464b4c78 == 0)) {
    UnhashUnreachableObjects(0,0);
  }
  DAT_1469e7690 = 1;
  _DAT_1469e7290 = 0;
  DAT_1469e7691 = 1;
  if (param_2 != '\0') {
    FUN_14173d060(0,0x3b03126f);
  }
  uVar4 = FUN_1417555a0();
  FUN_1417525f0(uVar4);
  LOCK();
  DAT_1469e76c8 = (uint)!bVar6;
  UNLOCK();
  FUN_1417a9740();
  uVar4 = FUN_14178e330();
  TBaseMulticastDelegate<void>::Broadcast(uVar4);
  return;
}



// FUNCTION 14172d6c0 FUN_14172d6c0 body=1026 status=ok
// SIG undefined FUN_14172d6c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014172d962) */
/* WARNING: Removing unreachable block (ram,0x00014172d96f) */
/* WARNING: Removing unreachable block (ram,0x00014172d97e) */

void FUN_14172d6c0(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  BOOL BVar5;
  longlong *plVar6;
  DWORD *pDVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  undefined4 uVar16;
  undefined1 auStack_c8 [36];
  int local_a4;
  longlong local_a0;
  longlong local_98 [2];
  longlong local_88;
  longlong local_80;
  longlong local_78 [4];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  iVar12 = 0;
  local_a4 = 0;
  if (*(int *)(param_2 + 8) != 0) {
    local_58 = (longlong *)0x0;
    local_50 = 0;
    local_a0 = param_1;
    plVar6 = (longlong *)FTaskGraphInterface::Get();
    local_a4 = (**(code **)(*plVar6 + 0x18))(plVar6);
    iVar15 = 0;
    if (DAT_1464a8208 != 0) {
      iVar15 = local_a4;
    }
    iVar15 = iVar15 + local_a4;
    plVar6 = local_78;
    iVar13 = (int)local_50;
    if (local_58 != (longlong *)0x0) {
      plVar6 = local_58;
    }
    for (; iVar13 != 0; iVar13 = iVar13 + -1) {
      if (*plVar6 != 0) {
        LOCK();
        piVar1 = (int *)(*plVar6 + 0x48);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          FGraphEvent::Recycle();
        }
      }
      plVar6 = plVar6 + 1;
    }
    uVar11 = local_50 >> 0x20;
    local_50 = local_50 & 0xffffffff00000000;
    if ((int)uVar11 != iVar15) {
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo
                (local_78,iVar15);
    }
    iVar13 = 0;
    uVar11 = (longlong)*(int *)(param_2 + 8) / (longlong)iVar15 & 0xffffffff;
    if (0 < iVar15) {
      do {
        iVar13 = iVar13 + 1;
        if (iVar13 == iVar15) {
          uVar11 = (ulonglong)(uint)(*(int *)(param_2 + 8) - iVar12);
        }
        TFastReferenceCollector<1,FGCReferenceProcessor<1>,FGCCollector<1>,FGCArrayPool,0>::
        FCollectorTaskQueue::AddTask(param_1 + 0x10,param_2,iVar12,uVar11);
        iVar12 = iVar12 + (int)uVar11;
      } while (iVar13 < iVar15);
    }
    iVar12 = 0;
    if (0 < iVar15) {
      do {
        plVar6 = (longlong *)0x0;
        uVar16 = 0xff;
        if (local_a4 <= iVar12) {
          uVar16 = 0x10ff;
        }
        pDVar7 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
        plVar8 = TlsGetValue(*pDVar7);
        if (plVar8 == (longlong *)0x0) {
          plVar8 = (longlong *)operator_new(0x18);
          if (plVar8 != (longlong *)0x0) {
            *plVar8 = 0;
            plVar8[1] = 0;
            *(undefined4 *)(plVar8 + 2) = 0;
            plVar6 = plVar8;
          }
          TlsSetValue(*pDVar7,plVar6);
          plVar8 = plVar6;
        }
        plVar6 = (longlong *)plVar8[1];
        if (plVar6 == (longlong *)0x0) {
          plVar6 = (longlong *)*plVar8;
          if (plVar6 == (longlong *)0x0) {
            uVar4 = FUN_141594c40(pDVar7 + 2);
            plVar6 = (longlong *)0x0;
            if (uVar4 != 0) {
              plVar6 = *(longlong **)
                        ((&DAT_1468a81f8)[uVar4 >> 0xe] + 8 + (ulonglong)(uVar4 & 0x3fff) * 0x18);
              FLockFreeLinkPolicy::FreeLockFreeLink(uVar4);
            }
            plVar8[1] = (longlong)plVar6;
            if (plVar6 == (longlong *)0x0) {
              puVar9 = (undefined8 *)FMemory::Malloc(0x2000,0);
              plVar8[1] = (longlong)puVar9;
              lVar10 = 0x1f;
              do {
                puVar2 = puVar9 + 0x20;
                *puVar9 = puVar2;
                lVar10 = lVar10 + -1;
                puVar9 = puVar2;
              } while (lVar10 != 0);
              *puVar2 = 0;
              plVar6 = (longlong *)plVar8[1];
            }
            *(undefined4 *)(plVar8 + 2) = 0x20;
            iVar13 = 0x20;
          }
          else {
            plVar8[1] = (longlong)plVar6;
            iVar13 = 0x20;
            *plVar8 = 0;
            *(undefined4 *)(plVar8 + 2) = 0x20;
          }
        }
        else {
          iVar13 = (int)plVar8[2];
        }
        plVar8[1] = *plVar6;
        *(int *)(plVar8 + 2) = iVar13 + -1;
        plVar8 = (longlong *)FUN_1415914c0(local_98);
        local_80 = *plVar8;
        *plVar8 = 0;
        *plVar6 = (longlong)&PTR_FUN_143f3edd8;
        *(undefined4 *)(plVar6 + 1) = 0xff;
        *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
        *plVar6 = (longlong)&PTR_FUN_144d10de8;
        *(undefined1 *)(plVar6 + 4) = 0;
        plVar6[5] = local_80;
        if (local_98[0] != 0) {
          LOCK();
          piVar1 = (int *)(local_98[0] + 0x48);
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            FGraphEvent::Recycle();
          }
        }
        *(undefined4 *)(plVar6 + 3) = uVar16;
        plVar6[2] = local_a0 + 0x10;
        lVar10 = plVar6[5];
        if (lVar10 != 0) {
          LOCK();
          *(int *)(lVar10 + 0x48) = *(int *)(lVar10 + 0x48) + 1;
          UNLOCK();
        }
        local_88 = lVar10;
        FUN_1417482f0(plVar6,0,0xff,1);
        lVar14 = (longlong)(int)local_50;
        iVar13 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar13);
        if (local_50._4_4_ < iVar13) {
          TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                    (local_78);
        }
        plVar6 = local_78;
        if (local_58 != (longlong *)0x0) {
          plVar6 = local_58;
        }
        iVar12 = iVar12 + 1;
        plVar6[lVar14] = lVar10;
      } while (iVar12 < iVar15);
    }
    plVar6 = (longlong *)FTaskGraphInterface::Get();
    (**(code **)(*plVar6 + 0x48))(plVar6,local_78,0x102);
    lpCriticalSection = (LPCRITICAL_SECTION)(local_a0 + 0x128);
    BVar5 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar5 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    LeaveCriticalSection(lpCriticalSection);
    plVar6 = local_78;
    iVar12 = (int)local_50;
    if (local_58 != (longlong *)0x0) {
      plVar6 = local_58;
    }
    for (; iVar12 != 0; iVar12 = iVar12 + -1) {
      if (*plVar6 != 0) {
        LOCK();
        piVar1 = (int *)(*plVar6 + 0x48);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          FGraphEvent::Recycle();
        }
      }
      plVar6 = plVar6 + 1;
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14172dad0 Compact body=574 status=ok
// SIG undefined Compact(void)

ulonglong TSparseArray<TSetElement<TTuple<FPackageIndex,TArray<FName,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::Compact(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  ulonglong in_RAX;
  int iVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  if (iVar2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  iVar3 = (int)param_1[1];
  uVar16 = 0;
  iVar17 = iVar3 - iVar2;
  lVar5 = *param_1;
  iVar12 = iVar3;
  iVar8 = (int)param_1[6];
  if ((int)param_1[6] != -1) {
    do {
      iVar14 = *(int *)((longlong)iVar8 * 0x20 + 4 + *param_1);
      if (iVar8 < iVar17) {
        bVar6 = (byte)iVar12 & 0x1f;
        uVar10 = 1 << bVar6 | 1U >> 0x20 - bVar6;
        plVar9 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar9 = param_1 + 2;
        }
        do {
          iVar13 = iVar12 + -1;
          uVar10 = uVar10 >> 1 | (uint)((uVar10 & 1) != 0) << 0x1f;
          iVar15 = iVar13;
          if (iVar13 < 0) {
            iVar15 = iVar12 + 0x1e;
          }
          iVar12 = iVar13;
        } while ((*(uint *)((longlong)plVar9 + (longlong)(iVar15 >> 5) * 4) & uVar10) == 0);
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar8 * 0x20 + lVar5),
                   (void *)((longlong)iVar13 * 0x20 + lVar5),0x20);
        plVar9 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar9 = param_1 + 2;
        }
        iVar15 = iVar8;
        if (iVar8 < 0) {
          iVar15 = iVar8 + 0x1f;
        }
        uVar16 = 1;
        puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar15 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
      }
      iVar8 = iVar14;
    } while (iVar14 != -1);
    iVar12 = (int)param_1[1];
  }
  iVar8 = (iVar12 - iVar17) - iVar2;
  if (iVar8 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar17 * 0x20 + *param_1),
               (void *)((longlong)iVar3 * 0x20 + *param_1),(longlong)iVar8 << 5);
    iVar12 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar12 - iVar2;
  TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(param_1);
  iVar12 = (int)param_1[5];
  if (iVar3 != iVar12) {
    iVar14 = 0;
    iVar8 = 0;
    iVar13 = 0;
    iVar15 = 0;
    uVar10 = 1;
    uVar11 = 1;
    if (0 < iVar12) {
      do {
        if ((iVar15 < iVar17) || (iVar3 <= iVar15)) {
          if (iVar8 != iVar15) {
            plVar9 = (longlong *)param_1[4];
            if ((longlong *)param_1[4] == (longlong *)0x0) {
              plVar9 = param_1 + 2;
            }
            uVar4 = *(uint *)((longlong)plVar9 + (longlong)iVar14 * 4);
            puVar1 = (uint *)((longlong)plVar9 + (longlong)iVar14 * 4);
            if ((*(uint *)((longlong)plVar9 + (longlong)iVar13 * 4) & uVar11) == 0) {
              *puVar1 = ~uVar10 & uVar4;
            }
            else {
              *puVar1 = uVar4 | uVar10;
            }
          }
          iVar8 = iVar8 + 1;
          uVar10 = uVar10 * 2;
          if (uVar10 == 0) {
            uVar10 = 1;
            iVar14 = iVar14 + 1;
          }
        }
        iVar12 = (int)param_1[5];
        uVar4 = uVar11 * 2;
        iVar15 = iVar15 + 1;
        iVar7 = iVar13 + 1;
        uVar11 = 1;
        if (uVar4 != 0) {
          iVar7 = iVar13;
          uVar11 = uVar4;
        }
        iVar13 = iVar7;
      } while (iVar15 < iVar12);
    }
  }
  *(int *)(param_1 + 5) = iVar12 - iVar2;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  return uVar16;
}



// FUNCTION 14172dd10 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      TSet<TTuple<FGuid,AActor_*>,TDefaultMapHashableKeyFuncs<FGuid,AActor_*,0>,FDefaultSetAllocator>
      ::Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14172ddc0 FUN_14172ddc0 body=450 status=ok
// SIG undefined FUN_14172ddc0(void)

undefined8 FUN_14172ddc0(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  undefined2 *local_48;
  int local_40;
  int local_3c;
  longlong local_38 [2];
  longlong local_28;
  
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x298))(param_1,&local_48,&DAT_144d0ce10);
  puVar4 = &DAT_143f3eda8;
  if (*(int *)(puVar2 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*puVar2;
  }
  puVar2 = (undefined8 *)FName::FName(local_res10,puVar3,1);
  iVar1 = UEnum::GetIndexByName(param_1,*puVar2,2);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (iVar1 == -1) {
    puVar2 = (undefined8 *)FUN_141736a40(param_1);
    iVar1 = *(int *)(puVar2 + 1);
    local_48 = (undefined2 *)*puVar2;
    *puVar2 = 0;
    local_40 = *(int *)(puVar2 + 1);
    local_3c = *(int *)((longlong)puVar2 + 0xc);
    puVar2[1] = 0;
    iVar5 = local_40;
    if (local_3c < (int)((5 - (uint)(iVar1 != 0)) + local_40)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48);
      iVar5 = local_40;
    }
    local_40 = (5 - (uint)(iVar5 != 0)) + iVar5;
    if (local_3c < local_40) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar5);
    }
    puVar3 = local_48;
    puVar6 = &DAT_143f3eda8;
    if (local_40 != 0) {
      puVar6 = local_48;
    }
    builtin_wcsncpy(local_48 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)),L"_MAX",5);
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x298))(param_1,local_38,puVar6);
    if (*(int *)(puVar2 + 1) != 0) {
      puVar4 = (undefined2 *)*puVar2;
    }
    FName::FName(&local_res8,puVar4,1);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    if (puVar3 != (undefined2 *)0x0) {
      FMemory::Free(puVar3);
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
    iVar1 = UEnum::GetIndexByName(param_1,local_res8,2);
    if (iVar1 == -1) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 14172dfa0 FUN_14172dfa0 body=77 status=ok
// SIG undefined FUN_14172dfa0(void)

undefined1 FUN_14172dfa0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x350))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x350))
                      (*(longlong **)(param_1 + 0x78),param_2);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 14172dff0 FUN_14172dff0 body=218 status=ok
// SIG undefined FUN_14172dff0(void)

undefined8 FUN_14172dff0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  longlong local_res8;
  
  plVar4 = (longlong *)*param_2;
  iVar1 = (int)param_2[1];
  plVar2 = plVar4 + iVar1;
  for (; plVar4 != plVar2; plVar4 = plVar4 + 1) {
    if (*plVar4 == param_1) {
      return 0;
    }
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2);
    }
    *(longlong *)((longlong)iVar1 * 8 + *param_2) = param_1;
    for (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x58); local_res8 = param_1,
        plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[10]) {
      cVar3 = (**(code **)(*plVar2 + 0x350))(plVar2,param_2);
      if (cVar3 != '\0') {
        TArray<AOnlineBeaconClient_*,FDefaultAllocator>::RemoveSingleSwap(param_2,&local_res8,1);
        return 1;
      }
    }
    TArray<AOnlineBeaconClient_*,FDefaultAllocator>::RemoveSingleSwap(param_2,&local_res8,1);
  }
  return 0;
}



// FUNCTION 14172e0e0 FUN_14172e0e0 body=57 status=ok
// SIG undefined FUN_14172e0e0(void)

undefined1 FUN_14172e0e0(longlong param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x358))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x358))();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 14172e120 FUN_14172e120 body=585 status=ok
// SIG undefined FUN_14172e120(void)

undefined8 FUN_14172e120(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469e76e0) && (_Init_thread_header(&DAT_1469e76e0), DAT_1469e76e0 == -1))
  {
    atexit((_func_5014 *)&LAB_143e7c910);
    _Init_thread_footer(&DAT_1469e76e0);
  }
  iVar3 = DAT_1469e76d8;
  lVar5 = (longlong)DAT_1469e76d8;
  for (plVar4 = DAT_1469e76d0; plVar4 != DAT_1469e76d0 + lVar5; plVar4 = plVar4 + 1) {
    if (*plVar4 == param_1) {
      return 0;
    }
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    DAT_1469e76d8 = DAT_1469e76d8 + 1;
    if (DAT_1469e76dc < DAT_1469e76d8) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_1469e76d0,iVar3);
    }
    DAT_1469e76d0[lVar5] = param_1;
    for (plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x58); plVar4 != (longlong *)0x0;
        plVar4 = (longlong *)plVar4[10]) {
      cVar1 = (**(code **)(*plVar4 + 0x358))(plVar4);
      if (cVar1 != '\0') {
        plVar4 = DAT_1469e76d0;
        if (DAT_1469e76d0 != DAT_1469e76d0 + DAT_1469e76d8) {
          while (*plVar4 != param_1) {
            plVar4 = plVar4 + 1;
            if (plVar4 == DAT_1469e76d0 + DAT_1469e76d8) {
              return 1;
            }
          }
          iVar3 = (int)((longlong)plVar4 - (longlong)DAT_1469e76d0 >> 3);
          if (iVar3 != -1) {
            iVar2 = (DAT_1469e76d8 - iVar3) + -1;
            if (0 < iVar2) {
              iVar2 = 1;
            }
            if (iVar2 != 0) {
              _guard_xfg_dispatch_icall_nop
                        (DAT_1469e76d0 + iVar3,DAT_1469e76d0 + (DAT_1469e76d8 - iVar2),
                         (longlong)iVar2 << 3);
            }
            DAT_1469e76d8 = DAT_1469e76d8 + -1;
            TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(&DAT_1469e76d0);
          }
        }
        return 1;
      }
    }
    plVar4 = DAT_1469e76d0;
    if (DAT_1469e76d0 != DAT_1469e76d0 + DAT_1469e76d8) {
      while (*plVar4 != param_1) {
        plVar4 = plVar4 + 1;
        if (plVar4 == DAT_1469e76d0 + DAT_1469e76d8) {
          return 0;
        }
      }
      iVar3 = (int)((longlong)plVar4 - (longlong)DAT_1469e76d0 >> 3);
      if (iVar3 != -1) {
        iVar2 = (DAT_1469e76d8 - iVar3) + -1;
        if (0 < iVar2) {
          iVar2 = 1;
        }
        if (iVar2 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (DAT_1469e76d0 + iVar3,DAT_1469e76d0 + (DAT_1469e76d8 - iVar2),
                     (longlong)iVar2 << 3);
        }
        DAT_1469e76d8 = DAT_1469e76d8 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(&DAT_1469e76d0);
      }
    }
  }
  return 0;
}



// FUNCTION 14172e370 FUN_14172e370 body=2079 status=ok
// SIG undefined FUN_14172e370(void)

/* WARNING: Removing unreachable block (ram,0x00014172ea42) */
/* WARNING: Removing unreachable block (ram,0x00014172e935) */

undefined8
FUN_14172e370(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
             undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  longlong lVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  double dVar17;
  ulonglong local_res8;
  longlong local_98 [4];
  undefined8 local_78;
  undefined4 local_5c;
  
  lVar5 = *(longlong *)(param_1 + 0x78);
  if ((lVar5 == 0) || (plVar16 = *(longlong **)(param_1 + 0x70), plVar16 == (longlong *)0x0)) {
    return 0;
  }
  lVar10 = *param_2;
  uVar14 = 0;
  if (lVar10 != 1) {
    local_res8 = 0x1a;
    if (lVar10 == 0x1a) {
      plVar6 = (longlong *)param_3[1];
      lVar10 = (longlong)*(int *)(param_1 + 0x44) +
               *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) + param_4;
      if ((byte *)plVar6[1] < (byte *)*plVar6 + 1) {
        (**(code **)(*param_3 + 0x50))(param_3,&local_res8,1);
      }
      else {
        local_res8 = (ulonglong)*(byte *)*plVar6;
        *plVar6 = *plVar6 + 1;
      }
      uVar15 = (ulonglong)(char)local_res8;
      cVar9 = (**(code **)(*plVar16 + 0x3c8))(plVar16,(double)(longlong)uVar15);
      if ((cVar9 != '\0') && (0 < *(int *)(lVar5 + 0x48))) {
        puVar11 = (ulonglong *)(*(longlong *)(lVar5 + 0x40) + 8);
        uVar12 = uVar14;
        do {
          if (*puVar11 == uVar15) goto LAB_14172e897;
          uVar12 = uVar12 + 1;
          puVar11 = puVar11 + 2;
        } while ((longlong)uVar12 < (longlong)*(int *)(lVar5 + 0x48));
      }
      iVar1 = *(int *)(lVar5 + 0x48);
      lVar13 = (longlong)iVar1;
      uVar15 = uVar14;
      if (iVar1 != 0) {
        puVar11 = (ulonglong *)(*(longlong *)(lVar5 + 0x40) + 8);
        uVar14 = *puVar11;
        uVar15 = uVar14;
        if (0 < iVar1) {
          do {
            uVar15 = *puVar11;
            puVar11 = puVar11 + 2;
            if ((longlong)uVar15 <= (longlong)uVar14) {
              uVar15 = uVar14;
            }
            lVar13 = lVar13 + -1;
            uVar14 = uVar15;
          } while (lVar13 != 0);
        }
      }
    }
    else {
      local_res8 = 0x19;
      if (lVar10 == 0x19) {
        plVar6 = (longlong *)param_3[1];
        lVar10 = (longlong)*(int *)(param_1 + 0x44) +
                 *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) + param_4;
        if ((ushort *)plVar6[1] < (ushort *)*plVar6 + 1) {
          (**(code **)(*param_3 + 0x50))(param_3,&local_res8,2);
          if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_3,&local_res8,2);
          }
        }
        else {
          local_res8 = (ulonglong)*(ushort *)*plVar6;
          *plVar6 = *plVar6 + 2;
        }
        uVar15 = (ulonglong)(short)local_res8;
        cVar9 = (**(code **)(*plVar16 + 0x3c8))(plVar16,(double)(longlong)uVar15);
        if ((cVar9 != '\0') && (0 < *(int *)(lVar5 + 0x48))) {
          puVar11 = (ulonglong *)(*(longlong *)(lVar5 + 0x40) + 8);
          uVar12 = uVar14;
          do {
            if (*puVar11 == uVar15) goto LAB_14172e897;
            uVar12 = uVar12 + 1;
            puVar11 = puVar11 + 2;
          } while ((longlong)uVar12 < (longlong)*(int *)(lVar5 + 0x48));
        }
        iVar1 = *(int *)(lVar5 + 0x48);
        lVar13 = (longlong)iVar1;
        uVar15 = uVar14;
        if (iVar1 != 0) {
          puVar11 = (ulonglong *)(*(longlong *)(lVar5 + 0x40) + 8);
          uVar15 = *puVar11;
          if (0 < iVar1) {
            do {
              uVar14 = *puVar11;
              puVar11 = puVar11 + 2;
              if ((longlong)uVar14 <= (longlong)uVar15) {
                uVar14 = uVar15;
              }
              lVar13 = lVar13 + -1;
              uVar15 = uVar14;
            } while (lVar13 != 0);
          }
        }
      }
      else {
        local_res8 = 2;
        if (lVar10 == 2) {
          plVar6 = (longlong *)param_3[1];
          lVar10 = (longlong)*(int *)(param_1 + 0x44) +
                   *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) + param_4;
          if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
            (**(code **)(*param_3 + 0x50))(param_3,&local_res8,4);
            if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(param_3,&local_res8,4);
            }
          }
          else {
            local_res8 = (ulonglong)*(uint *)*plVar6;
            *plVar6 = *plVar6 + 4;
          }
          uVar15 = (ulonglong)(int)local_res8;
          cVar9 = (**(code **)(*plVar16 + 0x3c8))(plVar16,(double)(longlong)uVar15);
          if ((cVar9 != '\0') && (0 < *(int *)(lVar5 + 0x48))) {
            puVar11 = (ulonglong *)(*(longlong *)(lVar5 + 0x40) + 8);
            uVar12 = uVar14;
            do {
              if (*puVar11 == uVar15) goto LAB_14172e897;
              uVar12 = uVar12 + 1;
              puVar11 = puVar11 + 2;
            } while ((longlong)uVar12 < (longlong)*(int *)(lVar5 + 0x48));
          }
          iVar1 = *(int *)(lVar5 + 0x48);
          lVar13 = (longlong)iVar1;
          uVar15 = uVar14;
          if (iVar1 != 0) {
            puVar11 = (ulonglong *)(*(longlong *)(lVar5 + 0x40) + 8);
            uVar15 = *puVar11;
            if (0 < iVar1) {
              do {
                uVar14 = *puVar11;
                puVar11 = puVar11 + 2;
                if ((longlong)uVar14 <= (longlong)uVar15) {
                  uVar14 = uVar15;
                }
                lVar13 = lVar13 + -1;
                uVar15 = uVar14;
              } while (lVar13 != 0);
            }
          }
        }
        else {
          local_res8 = 0x17;
          if (lVar10 != 0x17) {
            local_res8 = 0x16;
            if (lVar10 == 0x16) {
              iVar1 = *(int *)((longlong)param_2 + 0x3c);
              iVar2 = *(int *)(param_1 + 0x34);
              iVar3 = *(int *)(param_1 + 0x44);
              plVar6 = (longlong *)param_3[1];
              if ((ushort *)plVar6[1] < (ushort *)*plVar6 + 1) {
                (**(code **)(*param_3 + 0x50))(param_3,&local_res8,2);
                if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
                  FArchive::ByteSwap(param_3,&local_res8,2);
                }
              }
              else {
                local_res8 = (ulonglong)*(ushort *)*plVar6;
                *plVar6 = *plVar6 + 2;
              }
              uVar15 = local_res8 & 0xffff;
              cVar9 = (**(code **)(*plVar16 + 0x3c8))(plVar16,(double)uVar15);
              if ((cVar9 != '\0') && (0 < *(int *)(lVar5 + 0x48))) {
                puVar11 = (ulonglong *)(*(longlong *)(lVar5 + 0x40) + 8);
                uVar12 = uVar14;
                do {
                  if (*puVar11 == uVar15) goto LAB_14172e9a7;
                  uVar12 = uVar12 + 1;
                  puVar11 = puVar11 + 2;
                } while ((longlong)uVar12 < (longlong)*(int *)(lVar5 + 0x48));
              }
              iVar4 = *(int *)(lVar5 + 0x48);
              lVar10 = (longlong)iVar4;
              uVar15 = uVar14;
              if (iVar4 != 0) {
                puVar11 = (ulonglong *)(*(longlong *)(lVar5 + 0x40) + 8);
                uVar15 = *puVar11;
                uVar14 = *puVar11;
                if (0 < iVar4) {
                  do {
                    uVar15 = *puVar11;
                    puVar11 = puVar11 + 2;
                    if ((longlong)uVar15 <= (longlong)uVar14) {
                      uVar15 = uVar14;
                    }
                    lVar10 = lVar10 + -1;
                    uVar14 = uVar15;
                  } while (lVar10 != 0);
                }
              }
LAB_14172e9a7:
              (**(code **)(*plVar16 + 0x390))
                        (plVar16,(longlong)iVar3 + iVar1 * iVar2 + param_4,uVar15);
              return 2;
            }
            local_res8 = 0x15;
            if (lVar10 == 0x15) {
              plVar6 = (longlong *)param_3[1];
              lVar10 = (longlong)*(int *)(param_1 + 0x44) +
                       *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) + param_4;
              if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
                (**(code **)(*param_3 + 0x50))(param_3,&local_res8,4);
                if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
                  FArchive::ByteSwap(param_3,&local_res8,4);
                }
              }
              else {
                local_res8 = (ulonglong)*(uint *)*plVar6;
                *plVar6 = *plVar6 + 4;
              }
              uVar15 = local_res8 & 0xffffffff;
              cVar9 = (**(code **)(*plVar16 + 0x3c8))(plVar16,(double)uVar15);
              if ((cVar9 != '\0') && (0 < *(int *)(lVar5 + 0x48))) {
                puVar11 = (ulonglong *)(*(longlong *)(lVar5 + 0x40) + 8);
                do {
                  if (*puVar11 == uVar15) goto LAB_14172eb52;
                  uVar14 = uVar14 + 1;
                  puVar11 = puVar11 + 2;
                } while ((longlong)uVar14 < (longlong)*(int *)(lVar5 + 0x48));
              }
            }
            else {
              local_res8 = 0x14;
              if (lVar10 != 0x14) {
                return 0;
              }
              plVar6 = (longlong *)param_3[1];
              lVar10 = (longlong)*(int *)(param_1 + 0x44) +
                       *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) + param_4;
              if ((ulonglong *)plVar6[1] < (ulonglong *)*plVar6 + 1) {
                (**(code **)(*param_3 + 0x50))(param_3,&local_res8,8);
                if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
                  FArchive::ByteSwap(param_3,&local_res8,8);
                }
              }
              else {
                local_res8 = *(ulonglong *)*plVar6;
                *plVar6 = *plVar6 + 8;
              }
              uVar15 = local_res8;
              dVar17 = (double)(longlong)local_res8;
              if ((longlong)local_res8 < 0) {
                dVar17 = dVar17 + 1.8446744073709552e+19;
              }
              cVar9 = (**(code **)(*plVar16 + 0x3c8))(plVar16,dVar17);
              if ((cVar9 != '\0') && (0 < *(int *)(lVar5 + 0x48))) {
                puVar11 = (ulonglong *)(*(longlong *)(lVar5 + 0x40) + 8);
                do {
                  if (*puVar11 == uVar15) goto LAB_14172eb52;
                  uVar14 = uVar14 + 1;
                  puVar11 = puVar11 + 2;
                } while ((longlong)uVar14 < (longlong)*(int *)(lVar5 + 0x48));
              }
            }
            uVar15 = UEnum::GetMaxEnumValue(lVar5);
LAB_14172eb52:
            (**(code **)(*plVar16 + 0x390))(plVar16,lVar10,uVar15);
            return 2;
          }
          plVar6 = (longlong *)param_3[1];
          lVar10 = (longlong)*(int *)(param_1 + 0x44) +
                   *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) + param_4;
          if ((ulonglong *)plVar6[1] < (ulonglong *)*plVar6 + 1) {
            (**(code **)(*param_3 + 0x50))(param_3,&local_res8,8);
            if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(param_3,&local_res8,8);
            }
          }
          else {
            local_res8 = *(ulonglong *)*plVar6;
            *plVar6 = *plVar6 + 8;
          }
          uVar15 = local_res8;
          cVar9 = (**(code **)(*plVar16 + 0x3c8))(plVar16,(double)(longlong)local_res8);
          if ((cVar9 != '\0') && (0 < *(int *)(lVar5 + 0x48))) {
            puVar11 = (ulonglong *)(*(longlong *)(lVar5 + 0x40) + 8);
            uVar12 = uVar14;
            do {
              if (*puVar11 == uVar15) goto LAB_14172e897;
              uVar12 = uVar12 + 1;
              puVar11 = puVar11 + 2;
            } while ((longlong)uVar12 < (longlong)*(int *)(lVar5 + 0x48));
          }
          iVar1 = *(int *)(lVar5 + 0x48);
          lVar13 = (longlong)iVar1;
          uVar15 = uVar14;
          if (iVar1 != 0) {
            puVar11 = (ulonglong *)(*(longlong *)(lVar5 + 0x40) + 8);
            uVar15 = *puVar11;
            uVar14 = *puVar11;
            if (0 < iVar1) {
              do {
                uVar15 = *puVar11;
                puVar11 = puVar11 + 2;
                if ((longlong)uVar15 <= (longlong)uVar14) {
                  uVar15 = uVar14;
                }
                lVar13 = lVar13 + -1;
                uVar14 = uVar15;
              } while (lVar13 != 0);
            }
          }
        }
      }
    }
LAB_14172e897:
    (**(code **)(*plVar16 + 0x388))(plVar16,lVar10,uVar15);
    return 2;
  }
  local_res8 = 0;
  plVar16 = param_2;
  if (param_2[4] == 0) {
    if (((*(uint *)(param_1 + 8) >> 4 & 1) == 0) &&
       (lVar5 = *(longlong *)(param_1 + 0x20), lVar5 != 0)) {
      lVar10 = UProperty::GetPrivateStaticClass();
      lVar5 = *(longlong *)(lVar5 + 0x10);
      if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
          lVar10 + 0x88)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        FPropertyTag::FPropertyTag(local_98);
        local_98[0] = *param_2;
        local_78 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x18);
        local_5c = 0;
        plVar16 = local_98;
        goto LAB_14172e484;
      }
    }
    plVar16 = (longlong *)param_3[1];
    if ((undefined1 *)plVar16[1] < (undefined1 *)*plVar16 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,&local_res8,1);
    }
    else {
      local_res8 = CONCAT71(local_res8._1_7_,*(undefined1 *)*plVar16);
      *plVar16 = *plVar16 + 1;
    }
  }
  else {
LAB_14172e484:
    uVar8 = FUN_14177b480(param_3,param_5,plVar16);
    local_res8 = CONCAT71(local_res8._1_7_,uVar8);
  }
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x390))
            (*(longlong **)(param_1 + 0x70),
             (longlong)*(int *)(param_1 + 0x44) +
             *(int *)((longlong)param_2 + 0x3c) * *(int *)(param_1 + 0x34) + param_4,
             local_res8 & 0xff);
  return 2;
}



// FUNCTION 14172eb90 FUN_14172eb90 body=171 status=ok
// SIG undefined FUN_14172eb90(void)

void FUN_14172eb90(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined4 *)operator_new(0x40);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar3 + 4));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar3 + 4),4000);
    uVar4 = FUN_1415ab270(1);
    *(undefined8 *)(puVar3 + 0xe) = uVar4;
  }
  lVar2 = (longlong)DAT_1469e7300;
  if (DAT_1469e7300 != (undefined4 *)0x0) {
    puVar1 = (undefined8 *)((longlong)DAT_1469e7300 + 0x38);
    DAT_1469e7300 = puVar3;
    FUN_1415b5910(*puVar1);
    *(undefined8 *)(lVar2 + 0x38) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x10));
    FMemory::operator_delete(lVar2,0x40);
    puVar3 = DAT_1469e7300;
  }
  DAT_1469e7300 = puVar3;
  FUN_1415ac290(&DAT_1469e72f8,0);
  return;
}



// FUNCTION 14172ec40 FUN_14172ec40 body=6842 status=ok
// SIG undefined FUN_14172ec40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_14172ec40(undefined8 param_1)

{
  int *piVar1;
  char *pcVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  int iVar14;
  undefined2 *puVar15;
  void *pvVar16;
  void *pvVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 *puVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  undefined4 uVar24;
  char *pcVar25;
  longlong *plVar26;
  uint *puVar27;
  void *pvVar28;
  void *pvVar29;
  undefined1 auStack_608 [32];
  undefined8 local_5e8;
  longlong local_5d8;
  undefined8 local_5d0;
  char local_5c8 [8];
  longlong local_5c0 [2];
  void *local_5b0;
  undefined8 local_5a8;
  void *local_5a0;
  undefined8 local_598;
  void *local_590;
  undefined8 local_588;
  void *local_580;
  undefined8 local_578;
  void *local_570;
  undefined8 local_568;
  undefined8 local_560;
  undefined8 local_558;
  void *local_550;
  undefined8 local_548;
  void *local_540;
  undefined8 local_538;
  void *local_530;
  undefined8 local_528;
  void *local_520;
  undefined8 local_518;
  void *local_510;
  undefined8 local_508;
  void *local_500;
  int local_4f8;
  undefined4 local_4f4;
  longlong local_4f0;
  longlong local_4e8 [14];
  undefined8 local_478;
  int local_470;
  uint uStack_46c;
  uint *puStack_468;
  undefined4 local_460;
  int iStack_45c;
  int iStack_458;
  undefined4 uStack_454;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined8 local_420;
  longlong local_418 [2];
  undefined4 *local_408;
  ulonglong *puStack_400;
  undefined8 local_3f8;
  longlong *local_3e8;
  undefined8 uStack_3e0;
  uint *local_3d8;
  undefined8 uStack_3d0;
  undefined1 local_3c8 [16];
  longlong *local_3b8;
  undefined2 local_3b0;
  int local_3a8;
  undefined1 local_3a4 [4];
  undefined1 local_3a0 [8];
  undefined8 local_398;
  uint local_390 [6];
  undefined4 *local_378;
  ulonglong *puStack_370;
  longlong *local_368;
  undefined8 uStack_360;
  uint *puStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined8 local_338;
  longlong local_330;
  longlong local_328;
  undefined8 local_320;
  longlong local_318;
  undefined8 local_310;
  undefined8 local_308;
  longlong local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined1 local_2e8 [8];
  longlong *local_2e0;
  longlong local_2d8 [2];
  longlong local_2c8 [2];
  longlong local_2b8 [2];
  longlong local_2a8 [2];
  longlong local_298 [2];
  longlong local_288;
  longlong *local_280;
  longlong local_270 [2];
  longlong local_260 [2];
  undefined1 local_250 [16];
  undefined1 local_240 [8];
  longlong *local_238;
  undefined1 local_228 [8];
  longlong *local_220;
  undefined1 local_210 [16];
  undefined1 local_200 [16];
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [24];
  undefined4 local_98 [4];
  undefined1 local_88 [24];
  undefined1 local_70;
  undefined4 local_68;
  undefined1 local_58 [24];
  undefined1 local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_608;
  DAT_1469e7296 = 1;
  if ((DAT_1468b6148 != 0) &&
     (local_5e8 = param_1, local_398 = param_1,
     plVar9 = (longlong *)
              FConfigCacheIni::GetSectionPrivate(DAT_1468b6148,L"/Script/Engine.Engine",0,1),
     plVar9 != (longlong *)0x0)) {
    local_5d8 = 0;
    local_5d0 = 0;
    FDeferredMessageLog::FDeferredMessageLog(local_3a0,&DAT_1469e7368);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1469e7740) &&
       (_Init_thread_header(&DAT_1469e7740), DAT_1469e7740 == -1)) {
      FName::FName(&DAT_1469e7738,L"ActiveClassRedirects",1);
      _Init_thread_footer(&DAT_1469e7740);
    }
    iVar6 = (int)plVar9[5];
    puStack_468 = (uint *)(plVar9 + 2);
    uStack_46c = 1;
    local_470 = 0;
    iStack_45c = 0;
    iStack_458 = 0;
    if (iVar6 != 0) {
      puVar27 = (uint *)plVar9[4];
      if ((uint *)plVar9[4] == (uint *)0x0) {
        puVar27 = puStack_468;
      }
      uVar22 = *puVar27;
      iStack_458 = 0;
      local_470 = 0;
      while (uVar22 == 0) {
        lVar18 = (longlong)local_470;
        iStack_458 = iStack_458 + 0x20;
        iVar14 = local_470 + 1;
        bVar3 = (int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_470;
        local_470 = iVar14;
        if (bVar3) goto LAB_14172edd4;
        uVar22 = puVar27[lVar18 + 1];
      }
      uStack_46c = -uVar22 & uVar22;
      local_3a8 = 0x1f;
      if (uStack_46c != 0) {
        for (; uStack_46c >> local_3a8 == 0; local_3a8 = local_3a8 + -1) {
        }
      }
      if (uStack_46c == 0) {
        iVar14 = 0x20;
      }
      else {
        iVar14 = 0x1f - local_3a8;
      }
      iStack_45c = (iStack_458 - iVar14) + 0x1f;
      if (iVar6 < iStack_45c) {
LAB_14172edd4:
        iStack_45c = iVar6;
      }
    }
    local_460 = 0xffffffff;
    uStack_3d0 = CONCAT44(iStack_45c,0xffffffff);
    auVar4._8_4_ = iStack_458;
    auVar4._0_8_ = uStack_3d0;
    auVar4._12_4_ = uStack_454;
    local_340 = SUB84(plVar9,0);
    uStack_33c = (undefined4)((ulonglong)plVar9 >> 0x20);
    uStack_3e0 = CONCAT44(uStack_46c,local_470);
    local_3b0 = 0;
    uStack_348 = auVar4._8_8_;
    local_3c8._8_4_ = local_340;
    local_3c8._0_8_ = uStack_348;
    local_3c8._12_4_ = uStack_33c;
    iVar6 = iStack_45c;
    local_3e8 = plVar9;
    local_3d8 = puStack_468;
    local_3b8 = plVar9;
    local_368 = plVar9;
    uStack_360 = uStack_3e0;
    puStack_358 = puStack_468;
    uStack_350 = uStack_3d0;
    if (iStack_45c < (int)plVar9[5]) {
      do {
        plVar9 = local_3e8;
        lVar18 = 0;
        lVar21 = (longlong)iVar6 * 0x30;
        plVar26 = (longlong *)(*local_3e8 + lVar21);
        iVar6 = 0;
        if (*plVar26 == DAT_1469e7738) {
          local_5c0[1] = 0;
          local_5c0[0] = 0;
          local_4e8[2] = 0;
          local_4e8[0] = 0;
          local_4f0 = 0;
          local_560 = (undefined4 *)0x0;
          local_558 = 0;
          local_5c8[0] = '\0';
          lVar10 = 0x18;
          iVar14 = (int)plVar26[4] + -1;
          if ((int)plVar26[4] == 0) {
            iVar14 = iVar6;
          }
          if (iVar14 < 1) {
            lVar10 = 8;
          }
          if (*(int *)(lVar10 + 8 + (longlong)plVar26) == 0) {
            puVar15 = &DAT_143f3eda8;
          }
          else {
            puVar15 = *(undefined2 **)(lVar10 + (longlong)plVar26);
          }
          FParse::Bool(puVar15,L"InstanceOnly=",local_5c8);
          lVar19 = *plVar9 + lVar21;
          lVar10 = 0x18;
          iVar14 = *(int *)(lVar19 + 0x20) + -1;
          if (*(int *)(lVar19 + 0x20) == 0) {
            iVar14 = iVar6;
          }
          if (iVar14 < 1) {
            lVar10 = 8;
          }
          if (*(int *)(lVar10 + 8 + lVar19) == 0) {
            puVar15 = &DAT_143f3eda8;
          }
          else {
            puVar15 = *(undefined2 **)(lVar10 + lVar19);
          }
          FParse::Value(puVar15,L"ObjectName=",local_4e8 + 2);
          lVar19 = *plVar9 + lVar21;
          lVar10 = 0x18;
          iVar14 = *(int *)(lVar19 + 0x20) + -1;
          if (*(int *)(lVar19 + 0x20) == 0) {
            iVar14 = iVar6;
          }
          if (iVar14 < 1) {
            lVar10 = 8;
          }
          if (*(int *)(lVar10 + 8 + lVar19) == 0) {
            puVar15 = &DAT_143f3eda8;
          }
          else {
            puVar15 = *(undefined2 **)(lVar10 + lVar19);
          }
          FParse::Value(puVar15,L"OldClassName=",local_5c0 + 1);
          lVar19 = *plVar9 + lVar21;
          lVar10 = 0x18;
          iVar14 = *(int *)(lVar19 + 0x20) + -1;
          if (*(int *)(lVar19 + 0x20) == 0) {
            iVar14 = iVar6;
          }
          if (iVar14 < 1) {
            lVar10 = 8;
          }
          if (*(int *)(lVar10 + 8 + lVar19) == 0) {
            puVar15 = &DAT_143f3eda8;
          }
          else {
            puVar15 = *(undefined2 **)(lVar10 + lVar19);
          }
          FParse::Value(puVar15,L"NewClassName=",local_5c0);
          lVar19 = *plVar9 + lVar21;
          lVar10 = 0x18;
          iVar14 = *(int *)(lVar19 + 0x20) + -1;
          if (*(int *)(lVar19 + 0x20) == 0) {
            iVar14 = iVar6;
          }
          if (iVar14 < 1) {
            lVar10 = 8;
          }
          if (*(int *)(lVar10 + 8 + lVar19) == 0) {
            puVar15 = &DAT_143f3eda8;
          }
          else {
            puVar15 = *(undefined2 **)(lVar10 + lVar19);
          }
          FParse::Value(puVar15,L"OldSubobjName=",local_4e8);
          lVar19 = *plVar9 + lVar21;
          lVar10 = 0x18;
          iVar14 = *(int *)(lVar19 + 0x20) + -1;
          if (*(int *)(lVar19 + 0x20) == 0) {
            iVar14 = iVar6;
          }
          if (iVar14 < 1) {
            lVar10 = 8;
          }
          if (*(int *)(lVar10 + 8 + lVar19) == 0) {
            puVar15 = &DAT_143f3eda8;
          }
          else {
            puVar15 = *(undefined2 **)(lVar10 + lVar19);
          }
          FParse::Value(puVar15,L"NewSubobjName=",&local_4f0);
          lVar19 = *plVar9 + lVar21;
          lVar10 = 0x18;
          iVar14 = *(int *)(lVar19 + 0x20) + -1;
          if (*(int *)(lVar19 + 0x20) == 0) {
            iVar14 = iVar6;
          }
          if (iVar14 < 1) {
            lVar10 = 8;
          }
          if (*(int *)(lVar10 + 8 + lVar19) == 0) {
            puVar15 = &DAT_143f3eda8;
          }
          else {
            puVar15 = *(undefined2 **)(lVar10 + lVar19);
          }
          FParse::Value(puVar15,L"NewClassClass=",&local_560);
          lVar21 = *plVar9 + lVar21;
          lVar10 = 0x18;
          iVar14 = *(int *)(lVar21 + 0x20) + -1;
          if (*(int *)(lVar21 + 0x20) == 0) {
            iVar14 = iVar6;
          }
          if (iVar14 < 1) {
            lVar10 = 8;
          }
          if (*(int *)(lVar10 + 8 + lVar21) == 0) {
            puVar15 = &DAT_143f3eda8;
          }
          else {
            puVar15 = *(undefined2 **)(lVar10 + lVar21);
          }
          FParse::Value(puVar15,L"NewClassPackage=",&local_558);
          uVar23 = local_5d0;
          local_438 = 0;
          if ((local_4f0 == 0) && (local_440 = 0, local_4e8[0] == 0)) {
            if (local_5c8[0] == '\0') {
              local_450 = 0;
              if (local_4e8[2] == 0) {
                uVar11 = FName::ToString(local_5c0,local_260);
                local_5e8._0_4_ = 0xffffffff;
                iVar6 = FUN_141592950(uVar11,&DAT_144d078bc,0);
                uVar11 = FName::ToString(local_5c0,local_270);
                local_5e8 = CONCAT44(local_5e8._4_4_,0xffffffff);
                iVar14 = FUN_141592950(uVar11,&DAT_144d077dc,0);
                if (local_260[0] != 0) {
                  FMemory::Free();
                }
                if (local_270[0] != 0) {
                  FMemory::Free();
                }
                uVar23 = local_5d0;
                if (iVar14 == iVar6) {
                  lVar21 = (longlong)(int)local_5d0;
                  iVar6 = (int)local_5d0 + 1;
                  local_5d0 = CONCAT44(local_5d0._4_4_,iVar6);
                  if (local_5d0._4_4_ < iVar6) {
                    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>
                    ::ResizeGrow(&local_5d8,uVar23 & 0xffffffff);
                  }
                  lVar21 = lVar21 * 0xa0 + local_5d8;
                  if (lVar21 != 0) {
                    FName::ToString(local_5c0,local_e0);
                    uVar11 = FName::ToString(local_5c0 + 1,local_d0);
                    lVar18 = FCoreRedirect::FCoreRedirect(lVar21,2,uVar11);
                  }
                  if (((((int)local_560 == 0) && (local_560._4_4_ == 0)) && ((int)local_558 == 0))
                     && (local_558._4_4_ == 0)) {
                    uVar11 = FName::ToString(lVar18 + 0x20,local_2d8);
                    cVar5 = FString::StartsWith(uVar11,&DAT_144d07c0c,0);
                    if (local_2d8[0] != 0) {
                      FMemory::Free();
                    }
                    uVar23 = local_5d0;
                    lVar18 = (longlong)(int)local_5d0;
                    iVar6 = (int)local_5d0 + 1;
                    local_5d0 = CONCAT44(local_5d0._4_4_,iVar6);
                    if (cVar5 == '\0') {
                      if (local_5d0._4_4_ < iVar6) {
                        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>
                        ::ResizeGrow(&local_5d8,uVar23 & 0xffffffff);
                      }
                      lVar18 = lVar18 * 0xa0 + local_5d8;
                      if (lVar18 != 0) {
                        FName::ToString(local_5c0,local_200);
                        puVar20 = local_1f0;
                        plVar9 = local_5c0 + 1;
                        goto LAB_14172fbc7;
                      }
                    }
                    else {
                      if (local_5d0._4_4_ < iVar6) {
                        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>
                        ::ResizeGrow(&local_5d8,uVar23 & 0xffffffff);
                      }
                      lVar18 = lVar18 * 0xa0 + local_5d8;
                      if (lVar18 != 0) {
                        FName::ToString(local_5c0,local_c0);
                        uVar11 = FName::ToString(local_5c0 + 1,local_210);
                        FCoreRedirect::FCoreRedirect(lVar18,8,uVar11);
                      }
                    }
                  }
                  else {
                    local_408 = local_560;
                    local_430 = 0;
                    puStack_400 = (ulonglong *)0x0;
                    local_3f8 = local_558;
                    *(undefined4 **)(lVar18 + 0x38) = local_560;
                    *(undefined8 *)(lVar18 + 0x40) = 0;
                    *(undefined8 *)(lVar18 + 0x48) = local_558;
                  }
                }
                else {
                  lVar18 = FText::FromName(local_b0,local_5c0);
                  lVar21 = FText::FromName(&local_368,&DAT_1469e7738);
                  uVar11 = FInternationalization::
                           ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                     (local_228,
                                      L"{0} cannot contain a rename of nested objects for \'{1}\'; if you want to leave the outer alone, just specify the name with no path"
                                      ,L"LinkerLoad");
                  puVar12 = (undefined8 *)FTextFormat::FTextFormat(local_f0,uVar11);
                  local_98[0] = 4;
                  FText::FText(local_88,lVar21);
                  local_70 = 1;
                  local_68 = 4;
                  FText::FText(local_58,lVar18);
                  local_408 = local_98;
                  local_40 = 1;
                  puStack_400 = local_38;
                  local_338 = *puVar12;
                  local_330 = puVar12[1];
                  if (local_330 != 0) {
                    LOCK();
                    *(int *)(local_330 + 8) = *(int *)(local_330 + 8) + 1;
                    UNLOCK();
                  }
                  local_378 = local_408;
                  puStack_370 = puStack_400;
                  uVar11 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                           TArray<FFormatArgumentValue,FDefaultAllocator>(local_250,&local_408);
                  uVar11 = FText::Format(local_240,&local_338,uVar11);
                  FText::FText(&local_288,uVar11);
                  plVar9 = local_238;
                  if (local_238 != (longlong *)0x0) {
                    LOCK();
                    plVar26 = local_238 + 1;
                    lVar10 = *plVar26;
                    *(int *)plVar26 = (int)*plVar26 + -1;
                    UNLOCK();
                    if ((int)lVar10 == 1) {
                      (**(code **)*local_238)(local_238);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar9 + 0xc);
                      iVar6 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar6 == 1) {
                        (**(code **)(*plVar9 + 8))(plVar9,1);
                      }
                    }
                  }
                  TArray<FFormatArgumentValue,FDefaultAllocator>::
                  ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_250);
                  lVar10 = 2;
                  pcVar25 = &stack0xfffffffffffffff0;
                  do {
                    lVar10 = lVar10 + -1;
                    pcVar2 = pcVar25 + -0x30;
                    if (*pcVar2 != '\0') {
                      *pcVar2 = '\0';
                      plVar9 = *(longlong **)(pcVar25 + -0x40);
                      if (plVar9 != (longlong *)0x0) {
                        LOCK();
                        plVar26 = plVar9 + 1;
                        lVar19 = *plVar26;
                        *(int *)plVar26 = (int)*plVar26 + -1;
                        UNLOCK();
                        if ((int)lVar19 == 1) {
                          (**(code **)*plVar9)(plVar9);
                          LOCK();
                          piVar1 = (int *)((longlong)plVar9 + 0xc);
                          iVar6 = *piVar1;
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          if (iVar6 == 1) {
                            (**(code **)(*plVar9 + 8))(plVar9,1);
                          }
                        }
                      }
                    }
                    pcVar25 = pcVar2;
                  } while (lVar10 != 0);
                  plVar9 = (longlong *)puVar12[1];
                  if (plVar9 != (longlong *)0x0) {
                    LOCK();
                    plVar26 = plVar9 + 1;
                    lVar10 = *plVar26;
                    *(int *)plVar26 = (int)*plVar26 + -1;
                    UNLOCK();
                    if ((int)lVar10 == 1) {
                      (**(code **)*plVar9)(plVar9);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar9 + 0xc);
                      iVar6 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar6 == 1) {
                        (**(code **)(*plVar9 + 8))(plVar9,1);
                      }
                    }
                  }
                  plVar9 = *(longlong **)(lVar21 + 8);
                  if (plVar9 != (longlong *)0x0) {
                    LOCK();
                    plVar26 = plVar9 + 1;
                    lVar21 = *plVar26;
                    *(int *)plVar26 = (int)*plVar26 + -1;
                    UNLOCK();
                    if ((int)lVar21 == 1) {
                      (**(code **)*plVar9)(plVar9);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar9 + 0xc);
                      iVar6 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar6 == 1) {
                        (**(code **)(*plVar9 + 8))(plVar9,1);
                      }
                    }
                  }
                  plVar9 = *(longlong **)(lVar18 + 8);
                  if (plVar9 != (longlong *)0x0) {
                    LOCK();
                    plVar26 = plVar9 + 1;
                    lVar18 = *plVar26;
                    *(int *)plVar26 = (int)*plVar26 + -1;
                    UNLOCK();
                    if ((int)lVar18 == 1) {
                      (**(code **)*plVar9)(plVar9);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar9 + 0xc);
                      iVar6 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar6 == 1) {
                        (**(code **)(*plVar9 + 8))(plVar9,1);
                      }
                    }
                  }
                  FDeferredMessageLog::Error(local_3a0,local_2e8,&local_288);
                  plVar9 = local_2e0;
                  if (local_2e0 != (longlong *)0x0) {
                    LOCK();
                    plVar26 = local_2e0 + 1;
                    lVar18 = *plVar26;
                    *(int *)plVar26 = (int)*plVar26 + -1;
                    UNLOCK();
                    if ((int)lVar18 == 1) {
                      (**(code **)*local_2e0)(local_2e0);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar9 + 0xc);
                      iVar6 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar6 == 1) {
                        (**(code **)(*plVar9 + 8))(plVar9,1);
                      }
                    }
                  }
                  plVar9 = local_280;
                  if (local_280 != (longlong *)0x0) {
                    LOCK();
                    plVar26 = local_280 + 1;
                    lVar18 = *plVar26;
                    *(int *)plVar26 = (int)*plVar26 + -1;
                    UNLOCK();
                    if ((int)lVar18 == 1) {
                      (**(code **)*local_280)(local_280);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar9 + 0xc);
                      iVar6 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar6 == 1) {
                        (**(code **)(*plVar9 + 8))(plVar9,1);
                      }
                    }
                  }
                  plVar9 = local_220;
                  if (local_220 != (longlong *)0x0) {
                    LOCK();
                    plVar26 = local_220 + 1;
                    lVar18 = *plVar26;
                    *(int *)plVar26 = (int)*plVar26 + -1;
                    UNLOCK();
                    if ((int)lVar18 == 1) {
                      (**(code **)*local_220)(local_220);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar9 + 0xc);
                      iVar6 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar6 == 1) {
                        (**(code **)(*plVar9 + 8))(plVar9,1);
                      }
                    }
                  }
                }
              }
            }
            else {
              lVar18 = (longlong)(int)local_5d0;
              local_448 = 0;
              local_5d0._0_4_ = (int)local_5d0 + 1;
              if (local_5c0[0] == 0) {
                if (local_5d0._4_4_ < (int)local_5d0) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>
                  ::ResizeGrow(&local_5d8,uVar23 & 0xffffffff);
                }
                lVar18 = lVar18 * 0xa0 + local_5d8;
                if (lVar18 != 0) {
                  FName::ToString(local_5c0,local_130);
                  uVar11 = FName::ToString(local_5c0 + 1,local_120);
                  FCoreRedirect::FCoreRedirect(lVar18,0x30002,uVar11);
                }
              }
              else {
                if (local_5d0._4_4_ < (int)local_5d0) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>
                  ::ResizeGrow(&local_5d8,uVar23 & 0xffffffff);
                }
                lVar18 = lVar18 * 0xa0 + local_5d8;
                if (lVar18 != 0) {
                  FName::ToString(local_5c0,local_110);
                  uVar11 = FName::ToString(local_5c0 + 1,local_100);
                  FCoreRedirect::FCoreRedirect(lVar18,0x10002,uVar11);
                }
              }
            }
          }
          else {
            lVar21 = (longlong)(int)local_5d0;
            local_5d0._0_4_ = (int)local_5d0 + 1;
            if (local_5d0._4_4_ < (int)local_5d0) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::
              ResizeGrow(&local_5d8,uVar23 & 0xffffffff);
            }
            lVar21 = lVar21 * 0xa0 + local_5d8;
            if (lVar21 != 0) {
              uVar11 = FName::ToString(local_5c0 + 1,local_1e0);
              uVar13 = FName::ToString(local_5c0 + 1,local_1d0);
              lVar18 = FCoreRedirect::FCoreRedirect(lVar21,2,uVar13,uVar11);
            }
            uVar11 = FName::ToString(&local_4f0,local_2b8);
            local_328 = FName::ToString(local_4e8,local_2c8);
            local_320 = uVar11;
            FUN_140497620(lVar18 + 0x50,local_3a4,&local_328,0);
            if (local_2c8[0] != 0) {
              FMemory::Free();
            }
            if (local_2b8[0] != 0) {
              FMemory::Free();
            }
          }
        }
        else {
          cVar5 = FName::operator==<wchar_t>(plVar26,L"ActiveGameNameRedirects");
          if (cVar5 == '\0') {
            cVar5 = FName::operator==<wchar_t>(*plVar9 + lVar21,L"ActiveStructRedirects");
            if (cVar5 == '\0') {
              cVar5 = FName::operator==<wchar_t>(*plVar9 + lVar21,L"ActivePluginRedirects");
              if (cVar5 == '\0') {
                cVar5 = FName::operator==<wchar_t>(*plVar9 + lVar21,L"KnownMissingPackages");
                if (cVar5 == '\0') {
                  cVar5 = FName::operator==<wchar_t>(*plVar9 + lVar21,L"TaggedPropertyRedirects");
                  if (cVar5 == '\0') {
                    cVar5 = FName::operator==<wchar_t>(*plVar9 + lVar21,L"EnumRedirects");
                    if (cVar5 != '\0') {
                      lVar10 = 0x18;
                      iVar14 = *(int *)(*plVar9 + lVar21 + 0x20);
                      local_4e8[1] = 0;
                      local_4e8[8] = 0;
                      local_4e8[9] = 0;
                      local_418[0] = 0;
                      iVar8 = iVar14 + -1;
                      if (iVar14 == 0) {
                        iVar8 = iVar6;
                      }
                      local_418[1] = 0;
                      if (iVar8 < 1) {
                        lVar10 = 8;
                      }
                      puVar12 = (undefined8 *)(lVar10 + *plVar9 + lVar21);
                      if (*(int *)(puVar12 + 1) == 0) {
                        puVar15 = &DAT_143f3eda8;
                      }
                      else {
                        puVar15 = (undefined2 *)*puVar12;
                      }
                      FParse::Value(puVar15,L"EnumName=",local_4e8 + 1);
                      if (*(int *)(puVar12 + 1) == 0) {
                        puVar15 = &DAT_143f3eda8;
                      }
                      else {
                        puVar15 = (undefined2 *)*puVar12;
                      }
                      cVar5 = FParse::Value(puVar15,L"OldEnumEntry=",local_4e8 + 8);
                      if (cVar5 == '\0') {
                        if (*(int *)(puVar12 + 1) == 0) {
                          puVar15 = &DAT_143f3eda8;
                        }
                        else {
                          puVar15 = (undefined2 *)*puVar12;
                        }
                        FParse::Value(puVar15,L"OldEnumSubstring=",local_418,1);
                      }
                      else {
                        if (*(int *)(puVar12 + 1) == 0) {
                          puVar15 = &DAT_143f3eda8;
                        }
                        else {
                          puVar15 = (undefined2 *)*puVar12;
                        }
                        FParse::Value(puVar15,L"NewEnumEntry=",local_4e8 + 9);
                        uVar23 = local_5d0;
                        lVar21 = (longlong)(int)local_5d0;
                        iVar6 = (int)local_5d0 + 1;
                        local_5d0 = CONCAT44(local_5d0._4_4_,iVar6);
                        if (local_5d0._4_4_ < iVar6) {
                          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>
                          ::ResizeGrow(&local_5d8,uVar23 & 0xffffffff);
                        }
                        lVar21 = lVar21 * 0xa0 + local_5d8;
                        if (lVar21 != 0) {
                          uVar11 = FName::ToString(local_4e8 + 1,local_150);
                          uVar13 = FName::ToString(local_4e8 + 1,local_140);
                          lVar18 = FCoreRedirect::FCoreRedirect(lVar21,8,uVar13,uVar11);
                        }
                        uVar11 = FName::ToString(local_4e8 + 9,local_298);
                        uVar13 = FName::ToString(local_4e8 + 8,local_2a8);
                        FUN_141728b60(lVar18 + 0x50,uVar13,uVar11);
                        if (local_2a8[0] != 0) {
                          FMemory::Free();
                        }
                        if (local_298[0] != 0) {
                          FMemory::Free();
                        }
                      }
                      if (local_418[0] != 0) {
                        FMemory::Free();
                      }
                    }
                  }
                  else {
                    local_4e8[10] = 0;
                    local_4e8[0xc] = 0;
                    local_4e8[0xb] = 0;
                    lVar10 = *plVar9 + lVar21;
                    lVar18 = 0x18;
                    iVar14 = *(int *)(lVar10 + 0x20) + -1;
                    if (*(int *)(lVar10 + 0x20) == 0) {
                      iVar14 = iVar6;
                    }
                    if (iVar14 < 1) {
                      lVar18 = 8;
                    }
                    if (*(int *)(lVar18 + 8 + lVar10) == 0) {
                      puVar15 = &DAT_143f3eda8;
                    }
                    else {
                      puVar15 = *(undefined2 **)(lVar18 + lVar10);
                    }
                    FParse::Value(puVar15,L"ClassName=",local_4e8 + 10);
                    lVar10 = *plVar9 + lVar21;
                    lVar18 = 0x18;
                    iVar14 = *(int *)(lVar10 + 0x20) + -1;
                    if (*(int *)(lVar10 + 0x20) == 0) {
                      iVar14 = iVar6;
                    }
                    if (iVar14 < 1) {
                      lVar18 = 8;
                    }
                    if (*(int *)(lVar18 + 8 + lVar10) == 0) {
                      puVar15 = &DAT_143f3eda8;
                    }
                    else {
                      puVar15 = *(undefined2 **)(lVar18 + lVar10);
                    }
                    FParse::Value(puVar15,L"OldPropertyName=",local_4e8 + 0xc);
                    lVar21 = *plVar9 + lVar21;
                    lVar18 = 0x18;
                    iVar14 = *(int *)(lVar21 + 0x20) + -1;
                    if (*(int *)(lVar21 + 0x20) == 0) {
                      iVar14 = iVar6;
                    }
                    if (iVar14 < 1) {
                      lVar18 = 8;
                    }
                    if (*(int *)(lVar18 + 8 + lVar21) == 0) {
                      puVar15 = &DAT_143f3eda8;
                    }
                    else {
                      puVar15 = *(undefined2 **)(lVar18 + lVar21);
                    }
                    FParse::Value(puVar15,L"NewPropertyName=",local_4e8 + 0xb);
                    uVar23 = local_5d0;
                    lVar18 = (longlong)(int)local_5d0;
                    iVar6 = (int)local_5d0 + 1;
                    local_5d0 = CONCAT44(local_5d0._4_4_,iVar6);
                    if (local_5d0._4_4_ < iVar6) {
                      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>
                      ::ResizeGrow(&local_5d8,uVar23 & 0xffffffff);
                    }
                    lVar18 = lVar18 * 0xa0 + local_5d8;
                    if (lVar18 != 0) {
                      local_318 = local_4e8[0xb];
                      local_310 = local_4e8[10];
                      local_2f8 = local_4e8[10];
                      local_428 = 0;
                      local_308 = 0;
                      local_300 = local_4e8[0xc];
                      local_420 = 0;
                      local_2f0 = 0;
                      FCoreRedirect::FCoreRedirect(lVar18,0x20,&local_300,&local_318);
                    }
                  }
                }
                else {
                  local_4e8[7] = 0;
                  lVar21 = *plVar9 + lVar21;
                  lVar18 = 0x18;
                  iVar14 = *(int *)(lVar21 + 0x20) + -1;
                  if (*(int *)(lVar21 + 0x20) == 0) {
                    iVar14 = iVar6;
                  }
                  if (iVar14 < 1) {
                    lVar18 = 8;
                  }
                  if (*(int *)(lVar18 + 8 + lVar21) == 0) {
                    puVar15 = &DAT_143f3eda8;
                  }
                  else {
                    puVar15 = *(undefined2 **)(lVar18 + lVar21);
                  }
                  FParse::Value(puVar15,L"PackageName=",local_4e8 + 7);
                  uVar23 = local_5d0;
                  lVar18 = (longlong)(int)local_5d0;
                  iVar6 = (int)local_5d0 + 1;
                  local_5d0 = CONCAT44(local_5d0._4_4_,iVar6);
                  if (local_5d0._4_4_ < iVar6) {
                    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>
                    ::ResizeGrow(&local_5d8,uVar23 & 0xffffffff);
                  }
                  lVar18 = lVar18 * 0xa0 + local_5d8;
                  if (lVar18 != 0) {
                    local_390[0] = 0;
                    local_390[1] = 0;
                    local_390[2] = 0;
                    local_390[3] = 0;
                    uVar11 = FName::ToString(local_4e8 + 7,local_160);
                    FCoreRedirect::FCoreRedirect(lVar18,0x20040,uVar11,local_390);
                  }
                }
              }
              else {
                local_580 = (void *)0x0;
                local_578 = 0;
                local_590 = (void *)0x0;
                local_588 = 0;
                lVar10 = *plVar9 + lVar21;
                lVar18 = 0x18;
                iVar14 = *(int *)(lVar10 + 0x20) + -1;
                if (*(int *)(lVar10 + 0x20) == 0) {
                  iVar14 = iVar6;
                }
                if (iVar14 < 1) {
                  lVar18 = 8;
                }
                if (*(int *)(lVar18 + 8 + lVar10) == 0) {
                  puVar15 = &DAT_143f3eda8;
                }
                else {
                  puVar15 = *(undefined2 **)(lVar18 + lVar10);
                }
                FParse::Value(puVar15,L"OldPluginName=",&local_580,1);
                lVar21 = *plVar9 + lVar21;
                lVar18 = 0x18;
                iVar14 = *(int *)(lVar21 + 0x20) + -1;
                if (*(int *)(lVar21 + 0x20) == 0) {
                  iVar14 = iVar6;
                }
                if (iVar14 < 1) {
                  lVar18 = 8;
                }
                if (*(int *)(lVar18 + 8 + lVar21) == 0) {
                  puVar15 = &DAT_143f3eda8;
                }
                else {
                  puVar15 = *(undefined2 **)(lVar18 + lVar21);
                }
                FParse::Value(puVar15,L"NewPluginName=",&local_590,1);
                local_530 = (void *)0x0;
                local_528 = 2;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_530,0);
                pvVar29 = local_530;
                FGenericPlatformString::Memcpy(local_530,&DAT_144d07ce4,4);
                local_518 = 2;
                local_520 = (void *)0x0;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_520,0);
                pvVar16 = local_520;
                FGenericPlatformString::Memcpy(local_520,&DAT_144d07dc4,4);
                pvVar17 = local_580;
                uVar22 = (uint)local_518;
                if ((int)(uint)local_518 < 2) {
                  lVar18 = (longlong)(int)local_578;
                  pvVar16 = (void *)0x0;
                  local_570 = (void *)0x0;
                  local_568 = CONCAT44(local_568._4_4_,(int)local_578);
                  if ((int)local_578 == 0) {
                    local_568 = local_578 & 0xffffffff;
                    uVar23 = 0;
                    iVar14 = 0;
                  }
                  else {
                    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                              (&local_570,local_578 & 0xffffffff,0);
                    pvVar16 = local_570;
                    _guard_xfg_dispatch_icall_nop(local_570,pvVar17,lVar18 * 2);
                    uVar23 = local_568 & 0xffffffff;
                    iVar14 = local_568._4_4_;
                  }
                }
                else {
                  if ((int)local_578 == 0) {
                    iVar6 = 0;
                  }
                  else {
                    iVar6 = (int)local_578 + -1;
                  }
                  if (((uint)local_518 != 0) || (iVar14 = 1, iVar6 == 0)) {
                    iVar14 = 0;
                  }
                  iVar8 = local_518._4_4_;
                  iVar7 = iVar6 + (uint)local_518;
                  local_5a0 = pvVar16;
                  local_520 = (void *)0x0;
                  local_598._0_4_ = (uint)local_518;
                  local_598._4_4_ = local_518._4_4_;
                  local_518 = 0;
                  if (iVar8 < iVar7 + iVar14) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeTo();
                    uVar22 = (uint)local_598;
                  }
                  pvVar17 = local_580;
                  uVar23 = (ulonglong)uVar22;
                  pvVar16 = local_5a0;
                  iVar14 = local_598._4_4_;
                  if (iVar6 != 0) {
                    local_598._0_4_ = (uint)(uVar22 == 0) + iVar6 + uVar22;
                    if (local_598._4_4_ < (int)(uint)local_598) {
                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_5a0,uVar23);
                    }
                    iVar14 = local_598._4_4_;
                    pvVar16 = local_5a0;
                    uVar23 = (ulonglong)(uint)local_598;
                    pvVar28 = (void *)((longlong)local_5a0 +
                                      ((longlong)(int)uVar22 - (ulonglong)(uVar22 != 0)) * 2);
                    _guard_xfg_dispatch_icall_nop(pvVar28,pvVar17,(longlong)iVar6 * 2);
                    *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar28) = 0;
                  }
                  local_5a0 = (void *)0x0;
                  local_568 = CONCAT44(iVar14,(int)uVar23);
                  local_598 = 0;
                  local_570 = pvVar16;
                }
                pvVar17 = (void *)0x0;
                uVar22 = (uint)uVar23;
                iVar6 = (int)local_528;
                if ((int)uVar22 < 2) {
                  iVar14 = local_528._4_4_;
                  local_528 = 0;
                  local_530 = (void *)0x0;
                  pvVar28 = pvVar29;
                  pvVar29 = pvVar17;
                  pvVar17 = pvVar16;
                }
                else {
                  iVar8 = 0;
                  if ((int)local_528 != 0) {
                    iVar8 = (int)local_528 + -1;
                  }
                  if ((uVar22 != 0) || (iVar6 = 1, iVar8 == 0)) {
                    iVar6 = 0;
                  }
                  local_570 = (void *)0x0;
                  local_568 = 0;
                  local_5b0 = pvVar16;
                  local_5a8._4_4_ = iVar14;
                  if (iVar14 < (int)(iVar8 + uVar22 + iVar6)) {
                    local_5a8._0_4_ = uVar22;
                    TArray<wchar_t,FDefaultAllocator>::ResizeTo();
                    uVar23 = (ulonglong)(uint)local_5a8;
                  }
                  iVar7 = (int)uVar23;
                  pvVar28 = local_5b0;
                  iVar6 = iVar7;
                  iVar14 = local_5a8._4_4_;
                  if (iVar8 != 0) {
                    local_5a8._0_4_ = (uint)(iVar7 == 0) + iVar8 + iVar7;
                    if (local_5a8._4_4_ < (int)(uint)local_5a8) {
                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_5b0,uVar23);
                    }
                    iVar14 = local_5a8._4_4_;
                    iVar6 = (uint)local_5a8;
                    pvVar28 = local_5b0;
                    pvVar16 = (void *)((longlong)local_5b0 +
                                      ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
                    _guard_xfg_dispatch_icall_nop(pvVar16,pvVar29,(longlong)iVar8 * 2);
                    *(undefined2 *)((longlong)iVar8 * 2 + (longlong)pvVar16) = 0;
                  }
                  local_5b0 = (void *)0x0;
                  local_5a8 = 0;
                }
                if (local_580 != (void *)0x0) {
                  FMemory::Free();
                }
                local_578 = CONCAT44(iVar14,iVar6);
                local_580 = pvVar28;
                if (pvVar17 != (void *)0x0) {
                  FMemory::Free(pvVar17);
                }
                if (local_520 != (void *)0x0) {
                  FMemory::Free();
                }
                if (pvVar29 != (void *)0x0) {
                  FMemory::Free(pvVar29);
                }
                local_508 = 2;
                local_510 = (void *)0x0;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_510,0);
                pvVar29 = local_510;
                FGenericPlatformString::Memcpy(local_510,&DAT_144d07edc,4);
                local_4e8[0xd] = 0;
                local_478 = 2;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_4e8 + 0xd,0);
                lVar18 = local_4e8[0xd];
                FGenericPlatformString::Memcpy(local_4e8[0xd],&DAT_144d07f5c,4);
                pvVar17 = local_590;
                iVar6 = 0;
                if ((int)local_478 < 2) {
                  lVar21 = (longlong)(int)local_588;
                  local_500 = (void *)0x0;
                  local_4f8 = (int)local_588;
                  if ((int)local_588 == 0) {
                    local_4f4 = 0;
                    pvVar16 = (void *)0x0;
                  }
                  else {
                    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                              (&local_500,local_588 & 0xffffffff,0);
                    pvVar16 = local_500;
                    _guard_xfg_dispatch_icall_nop(local_500,pvVar17,lVar21 * 2);
                  }
                }
                else {
                  iVar14 = iVar6;
                  if ((int)local_588 != 0) {
                    iVar14 = (int)local_588 + -1;
                  }
                  if (((int)local_478 != 0) || (iVar8 = 1, iVar14 == 0)) {
                    iVar8 = iVar6;
                  }
                  TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
                            (&local_540,local_4e8 + 0xd,iVar8 + iVar14);
                  uVar23 = local_538;
                  pvVar17 = local_590;
                  pvVar16 = local_540;
                  if (iVar14 != 0) {
                    iVar8 = (int)local_538;
                    lVar18 = (longlong)(int)local_538;
                    iVar7 = (uint)((int)local_538 == 0) + iVar14 + (int)local_538;
                    local_538 = CONCAT44(local_538._4_4_,iVar7);
                    if (local_538._4_4_ < iVar7) {
                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_540,uVar23 & 0xffffffff);
                    }
                    pvVar16 = local_540;
                    pvVar28 = (void *)((longlong)local_540 + (lVar18 - (ulonglong)(iVar8 != 0)) * 2)
                    ;
                    _guard_xfg_dispatch_icall_nop(pvVar28,pvVar17,(longlong)iVar14 * 2);
                    *(undefined2 *)((longlong)pvVar28 + (longlong)iVar14 * 2) = 0;
                  }
                  local_4f8 = (int)local_538;
                  local_4f4 = local_538._4_4_;
                  local_538 = 0;
                  local_540 = (void *)0x0;
                  lVar18 = local_4e8[0xd];
                  local_500 = pvVar16;
                }
                iVar14 = (int)local_508;
                if (local_4f8 < 2) {
                  uVar24 = local_508._4_4_;
                  local_508 = 0;
                  local_510 = (void *)0x0;
                  pvVar28 = (void *)0x0;
                  pvVar17 = pvVar29;
                }
                else {
                  iVar14 = iVar6;
                  if ((int)local_508 != 0) {
                    iVar14 = (int)local_508 + -1;
                  }
                  if ((local_4f8 != 0) || (iVar8 = 1, iVar14 == 0)) {
                    iVar8 = iVar6;
                  }
                  TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
                            (&local_550,&local_500,iVar14 + iVar8);
                  uVar23 = local_548;
                  pvVar17 = local_550;
                  if (iVar14 != 0) {
                    iVar6 = (int)local_548;
                    lVar21 = (longlong)(int)local_548;
                    iVar8 = (uint)((int)local_548 == 0) + iVar14 + (int)local_548;
                    local_548 = CONCAT44(local_548._4_4_,iVar8);
                    if (local_548._4_4_ < iVar8) {
                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_550,uVar23 & 0xffffffff);
                    }
                    pvVar17 = local_550;
                    pvVar16 = (void *)((longlong)local_550 + (lVar21 - (ulonglong)(iVar6 != 0)) * 2)
                    ;
                    _guard_xfg_dispatch_icall_nop(pvVar16,pvVar29,(longlong)iVar14 * 2);
                    *(undefined2 *)((longlong)iVar14 * 2 + (longlong)pvVar16) = 0;
                  }
                  iVar14 = (int)local_548;
                  uVar24 = local_548._4_4_;
                  local_548 = 0;
                  local_550 = (void *)0x0;
                  pvVar16 = local_500;
                  pvVar28 = pvVar29;
                }
                if (local_590 != (void *)0x0) {
                  FMemory::Free();
                }
                local_588 = CONCAT44(uVar24,iVar14);
                local_590 = pvVar17;
                if (pvVar16 != (void *)0x0) {
                  FMemory::Free(pvVar16);
                }
                if (lVar18 != 0) {
                  FMemory::Free(lVar18);
                }
                if (pvVar28 != (void *)0x0) {
                  FMemory::Free(pvVar28);
                }
                uVar23 = local_5d0;
                lVar18 = (longlong)(int)local_5d0;
                iVar6 = (int)local_5d0 + 1;
                local_5d0 = CONCAT44(local_5d0._4_4_,iVar6);
                if (local_5d0._4_4_ < iVar6) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>
                  ::ResizeGrow(&local_5d8,uVar23 & 0xffffffff);
                }
                lVar18 = lVar18 * 0xa0 + local_5d8;
                if (lVar18 != 0) {
                  uVar11 = FString::FString(local_180,&local_590);
                  uVar13 = FString::FString(local_170,&local_580);
                  FCoreRedirect::FCoreRedirect(lVar18,0x40040,uVar13,uVar11);
                }
                if (local_590 != (void *)0x0) {
                  FMemory::Free();
                }
                if (local_580 != (void *)0x0) {
                  FMemory::Free();
                }
              }
            }
            else {
              local_4e8[6] = 0;
              local_4e8[5] = 0;
              lVar10 = *plVar9 + lVar21;
              lVar18 = 0x18;
              iVar14 = *(int *)(lVar10 + 0x20) + -1;
              if (*(int *)(lVar10 + 0x20) == 0) {
                iVar14 = iVar6;
              }
              if (iVar14 < 1) {
                lVar18 = 8;
              }
              if (*(int *)(lVar18 + 8 + lVar10) == 0) {
                puVar15 = &DAT_143f3eda8;
              }
              else {
                puVar15 = *(undefined2 **)(lVar18 + lVar10);
              }
              FParse::Value(puVar15,L"OldStructName=",local_4e8 + 6);
              lVar21 = *plVar9 + lVar21;
              lVar18 = 0x18;
              iVar14 = *(int *)(lVar21 + 0x20) + -1;
              if (*(int *)(lVar21 + 0x20) == 0) {
                iVar14 = iVar6;
              }
              if (iVar14 < 1) {
                lVar18 = 8;
              }
              if (*(int *)(lVar18 + 8 + lVar21) == 0) {
                puVar15 = &DAT_143f3eda8;
              }
              else {
                puVar15 = *(undefined2 **)(lVar18 + lVar21);
              }
              FParse::Value(puVar15,L"NewStructName=",local_4e8 + 5);
              uVar23 = local_5d0;
              lVar18 = (longlong)(int)local_5d0;
              iVar6 = (int)local_5d0 + 1;
              local_5d0 = CONCAT44(local_5d0._4_4_,iVar6);
              if (local_5d0._4_4_ < iVar6) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::
                ResizeGrow(&local_5d8,uVar23 & 0xffffffff);
              }
              lVar18 = lVar18 * 0xa0 + local_5d8;
              if (lVar18 != 0) {
                FName::ToString(local_4e8 + 5,local_1a0);
                puVar20 = local_190;
                plVar9 = local_4e8 + 6;
LAB_14172fbc7:
                uVar11 = FName::ToString(plVar9,puVar20);
                FCoreRedirect::FCoreRedirect(lVar18,4,uVar11);
              }
            }
          }
          else {
            local_4e8[4] = 0;
            local_4e8[3] = 0;
            lVar10 = *plVar9 + lVar21;
            lVar18 = 0x18;
            iVar14 = *(int *)(lVar10 + 0x20) + -1;
            if (*(int *)(lVar10 + 0x20) == 0) {
              iVar14 = iVar6;
            }
            if (iVar14 < 1) {
              lVar18 = 8;
            }
            if (*(int *)(lVar18 + 8 + lVar10) == 0) {
              puVar15 = &DAT_143f3eda8;
            }
            else {
              puVar15 = *(undefined2 **)(lVar18 + lVar10);
            }
            FParse::Value(puVar15,L"OldGameName=",local_4e8 + 4);
            lVar21 = *plVar9 + lVar21;
            lVar18 = 0x18;
            iVar14 = *(int *)(lVar21 + 0x20) + -1;
            if (*(int *)(lVar21 + 0x20) == 0) {
              iVar14 = iVar6;
            }
            if (iVar14 < 1) {
              lVar18 = 8;
            }
            if (*(int *)(lVar18 + 8 + lVar21) == 0) {
              puVar15 = &DAT_143f3eda8;
            }
            else {
              puVar15 = *(undefined2 **)(lVar18 + lVar21);
            }
            FParse::Value(puVar15,L"NewGameName=",local_4e8 + 3);
            uVar23 = local_5d0;
            lVar18 = (longlong)(int)local_5d0;
            iVar6 = (int)local_5d0 + 1;
            local_5d0 = CONCAT44(local_5d0._4_4_,iVar6);
            if (local_5d0._4_4_ < iVar6) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::
              ResizeGrow(&local_5d8,uVar23 & 0xffffffff);
            }
            lVar18 = lVar18 * 0xa0 + local_5d8;
            if (lVar18 != 0) {
              uVar11 = FName::ToString(local_4e8 + 3,local_1c0);
              uVar13 = FName::ToString(local_4e8 + 4,local_1b0);
              FCoreRedirect::FCoreRedirect(lVar18,0x40,uVar13,uVar11);
            }
          }
        }
        uStack_3d0 = CONCAT44(uStack_3d0._4_4_,(uint)uStack_3d0 & ~uStack_3e0._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_3e0);
        iVar6 = uStack_3d0._4_4_;
      } while (uStack_3d0._4_4_ < (int)local_3d8[6]);
      if (((char)local_3b0 != '\0') && (local_3b0._1_1_ != '\0')) {
        TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_3b8,(int)local_3b8[1] - *(int *)((longlong)local_3b8 + 0x34),1);
      }
    }
    FCoreRedirects::AddRedirectList(&local_5d8,local_398);
    TArray<FCoreRedirect,FDefaultAllocator>::~TArray<FCoreRedirect,FDefaultAllocator>(&local_5d8);
  }
  return;
}



// FUNCTION 141730700 FUN_141730700 body=5432 status=ok
// SIG undefined FUN_141730700(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141730700(longlong param_1,int param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong **pplVar13;
  undefined8 uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  longlong *plVar18;
  undefined4 *puVar19;
  uint uVar20;
  undefined2 *puVar21;
  longlong **pplVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  bool bVar26;
  undefined1 auStack_1a8 [32];
  uint local_188;
  undefined8 local_180;
  uint local_178;
  undefined8 local_170;
  undefined1 local_168;
  undefined4 local_158 [4];
  longlong **local_148;
  undefined4 *puStack_140;
  longlong *local_138;
  undefined8 local_130;
  uint local_128;
  int local_124;
  ulonglong local_120;
  ulonglong local_118;
  longlong ***local_110;
  undefined4 *local_108;
  undefined4 local_f8;
  undefined1 local_f0 [8];
  undefined4 local_e8 [6];
  undefined8 local_d0;
  undefined4 local_c8 [4];
  undefined1 local_b8 [24];
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [32];
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  puStack_140 = local_158;
  uVar11 = 0;
  uVar24 = 0;
  local_148 = (longlong **)FUN_1406ddef0;
  local_f8 = 0;
  local_158[0]._0_1_ = 0;
  local_124 = param_2;
  lVar9 = FUN_1415d8310(&local_148,&DAT_14622e6dc);
  local_d0 = *(undefined8 *)(lVar9 + 0x98);
  local_f8 = *(undefined4 *)(lVar9 + 0x90);
  *(longlong *)(lVar9 + 0x98) = param_1;
  *(int *)(lVar9 + 0x90) = param_2;
  FDeferredMessageLog::FDeferredMessageLog(local_f0,&DAT_1469e7368);
  lVar9 = *(longlong *)(param_1 + 0x18);
  lVar23 = (longlong)param_2 * 0x88;
  plVar2 = (longlong *)(lVar9 + lVar23);
  puVar1 = (ulonglong *)(plVar2 + 9);
  if (plVar2[9] == 0) {
    uVar16 = uVar11;
    if (*(char *)((longlong)plVar2 + 0x59) != '\0') goto LAB_1417318e2;
    if ((((*(char *)((longlong)plVar2 + 0x5b) != '\0') ||
         ((*(char *)(param_1 + 0x1f0) != '\0' && (*(char *)((longlong)plVar2 + 0x56) != '\0')))) ||
        ((*(char *)(param_1 + 0x1f1) != '\0' && (*(char *)((longlong)plVar2 + 0x55) != '\0')))) ||
       (*(int *)((longlong)plVar2 + 0x14) == 0)) goto LAB_1417318d8;
    if (*(char *)((longlong)plVar2 + 0x5a) == '\x01') {
      local_188 = local_188 & 0xffffff00;
      puVar10 = (undefined8 *)FLinker::GetExportPathName(param_1,&local_148,param_2,0);
      if (*(int *)(puVar10 + 1) == 0) {
        puVar21 = &DAT_143f3eda8;
      }
      else {
        puVar21 = (undefined2 *)*puVar10;
      }
      puVar10 = (undefined8 *)FName::FName(&local_138,puVar21,1);
      uVar11 = ConstructDynamicType(*puVar10,1);
      *puVar1 = uVar11;
      if (local_148 != (longlong **)0x0) {
        FMemory::Free();
      }
      if (*puVar1 != 0) {
        FUN_1417a7660(*puVar1,param_1,param_2,1);
        uVar11 = *puVar1;
        if (uVar11 != 0) {
          lVar9 = UDynamicClass::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(uVar11 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(uVar11 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
            bVar26 = false;
          }
          else {
            bVar26 = true;
          }
          if ((bVar26) && (*(longlong *)(uVar11 + 0xf8) == 0)) {
            puStack_140 = local_158;
            local_158[0]._0_1_ = 0;
            local_148 = (longlong **)FUN_1406ddef0;
            lVar9 = FUN_1415d8310(&local_148,&DAT_14622e6dc);
            iVar3 = *(int *)(lVar9 + 0x40);
            *(int *)(lVar9 + 0x40) = iVar3 + 1;
            if (*(int *)(lVar9 + 0x44) < iVar3 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar9 + 0x38,iVar3);
            }
            *(ulonglong *)(*(longlong *)(lVar9 + 0x38) + (longlong)iVar3 * 8) = *puVar1;
          }
        }
      }
      goto LAB_1417318de;
    }
    uVar8 = *(uint *)(lVar23 + 0x10 + lVar9);
    if (((int)uVar8 < 0) && ((*(uint *)(param_1 + 0x290) & 0x100000) == 0)) {
      FUN_141748b40(param_1,~uVar8);
    }
    plVar12 = (longlong *)FUN_14173d7a0(param_1,*(undefined4 *)(lVar23 + 0x10 + lVar9));
    if ((plVar12 == (longlong *)0x0) && ((int)plVar2[2] != 0)) {
      uVar8 = *(uint *)(plVar2 + 1);
      *(undefined1 *)((longlong)plVar2 + 0x59) = 1;
      if (uVar8 == 0) {
        bVar5 = false;
        bVar26 = true;
        pplVar13 = (longlong **)
                   UObjectBaseUtility::GetFullName(*(undefined8 *)(param_1 + 0xa0),&local_148,0);
      }
      else {
        bVar5 = true;
        bVar26 = false;
        if ((int)uVar8 < 0) {
          FLinker::GetImportFullName(param_1,&local_138,~uVar8);
        }
        else if ((int)uVar8 < 1) {
          local_138 = (longlong *)0x0;
          local_130 = 0;
        }
        else {
          local_188 = local_188 & 0xffffff00;
          FLinker::GetExportFullName(param_1,&local_138,uVar8 - 1,0);
        }
        pplVar13 = &local_138;
      }
      plVar12 = *pplVar13;
      *pplVar13 = (longlong *)0x0;
      pplVar13[1] = (longlong *)0x0;
      if ((bVar5) && (local_138 != (longlong *)0x0)) {
        FMemory::Free();
      }
      if ((bVar26) && (local_148 != (longlong **)0x0)) {
        FMemory::Free();
      }
      local_148 = (longlong **)0x0;
      puStack_140 = (undefined4 *)0x17;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
      pplVar13 = local_148;
      local_188 = CONCAT22(local_188._2_2_,0x3f);
      FGenericPlatformString::Convert<char,wchar_t>(local_148,0x17,"UmbraComponentSettings");
      uVar14 = FName::ToString(plVar2,&local_138);
      local_188 = 0xffffffff;
      pplVar22 = (longlong **)&DAT_143f3eda8;
      if ((int)puStack_140 != 0) {
        pplVar22 = pplVar13;
      }
      FUN_141592950(uVar14,pplVar22,1);
      if (local_138 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (pplVar13 != (longlong **)0x0) {
        FMemory::Free(pplVar13);
      }
      if (plVar12 != (longlong *)0x0) {
        FMemory::Free(plVar12);
        uVar16 = uVar24;
      }
      goto LAB_1417318e2;
    }
    if (*(char *)((longlong)plVar2 + 0x5a) == '\x02') {
      uVar16 = uVar24;
      if (plVar12 != (longlong *)0x0) {
        UDynamicClass::GetPrivateStaticClass();
        uVar16 = plVar12[0x1f];
        if (uVar16 == 0) {
          (**(code **)(*plVar12 + 0x368))(plVar12);
          uVar16 = plVar12[0x1f];
        }
        *puVar1 = uVar16;
      }
      goto LAB_1417318e2;
    }
    if ((plVar12 != (longlong *)0x0) ||
       (plVar12 = (longlong *)FUN_14171bfe0(), plVar12 != (longlong *)0x0)) {
      lVar9 = UObjectRedirector::GetPrivateStaticClass();
      if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
          lVar9 + 0x88)) {
        bVar26 = false;
      }
      else {
        bVar26 = true;
      }
      if (bVar26) {
        uVar8 = *(uint *)(plVar2 + 1);
        *(undefined1 *)((longlong)plVar2 + 0x59) = 1;
        if (uVar8 == 0) {
          bVar5 = true;
          bVar26 = false;
          pplVar13 = (longlong **)
                     UObjectBaseUtility::GetFullName(*(undefined8 *)(param_1 + 0xa0),&local_148,0);
        }
        else {
          bVar5 = false;
          bVar26 = true;
          if ((int)uVar8 < 0) {
            FLinker::GetImportFullName(param_1,&local_138,~uVar8);
          }
          else if ((int)uVar8 < 1) {
            local_138 = (longlong *)0x0;
            local_130 = 0;
          }
          else {
            local_188 = local_188 & 0xffffff00;
            FLinker::GetExportFullName(param_1,&local_138,uVar8 - 1,0);
          }
          pplVar13 = &local_138;
        }
        plVar2 = *pplVar13;
        *pplVar13 = (longlong *)0x0;
        pplVar13[1] = (longlong *)0x0;
        if ((bVar26) && (local_138 != (longlong *)0x0)) {
          FMemory::Free();
        }
        if ((bVar5) && (local_148 != (longlong **)0x0)) {
          FMemory::Free();
        }
        uVar16 = uVar24;
        if (plVar2 != (longlong *)0x0) {
          FMemory::Free(plVar2);
        }
        goto LAB_1417318e2;
      }
    }
    if ((int)plVar2[3] != 0) {
      lVar9 = FUN_14173d7a0(param_1,(int)plVar2[3]);
      if (lVar9 == 0) {
        plVar15 = (longlong *)FUN_14171c5d0();
        for (plVar18 = plVar12; plVar18 != (longlong *)0x0; plVar18 = (longlong *)plVar18[6]) {
          if (plVar18 == plVar15) {
            lVar9 = FUN_14173d7a0(param_1,(int)plVar2[1]);
            if ((lVar9 != 0) && (*(char *)((longlong)plVar2 + 0x59) == '\0')) {
              FUN_14171bfe0();
            }
            *(undefined4 *)(plVar2 + 3) = 0;
            goto LAB_141730d83;
          }
        }
        local_188 = local_188 & 0xffffff00;
        puVar10 = (undefined8 *)FLinker::GetExportFullName(param_1,&local_148,param_2,0);
        if (*(int *)(puVar10 + 1) == 0) {
          puVar21 = &DAT_143f3eda8;
        }
        else {
          puVar21 = (undefined2 *)*puVar10;
        }
        puVar10 = (undefined8 *)FName::FName(&local_138,puVar21,1);
        FLinkerLoad::IsKnownMissingPackage(*puVar10);
        uVar16 = uVar24;
        if (local_148 != (longlong **)0x0) {
          FMemory::Free();
        }
        goto LAB_1417318e2;
      }
      if ((*(uint *)(lVar9 + 8) & 0x4200000) == 0) {
        iVar3 = *(int *)(lVar9 + 0xc);
        if (iVar3 < (int)DAT_1469e91c4) {
          uVar7 = iVar3 >> 0x1f & 0xffff;
          uVar8 = iVar3 + uVar7;
          uVar16 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                   (longlong)(int)((uVar8 & 0xffff) - uVar7) * 0x18;
        }
        if ((((*(uint *)(uVar16 + 8) >> 0x19 & 1) == 0) &&
            (lVar23 = FUN_1417a53c0(lVar9), lVar23 != 0)) && ((int)plVar2[3] < 0)) {
          lVar23 = FUN_14171bfe0();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar23 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar23 + 0x90) * 8) != lVar23 + 0x88)) {
            bVar26 = false;
          }
          else {
            bVar26 = true;
          }
          if ((bVar26) && (*(longlong *)(lVar9 + 0xf8) == 0)) {
            *(uint *)(lVar9 + 8) = *(uint *)(lVar9 + 8) | 0x400;
            FUN_141740c00(param_1 + 0x200,lVar9);
          }
        }
      }
    }
LAB_141730d83:
    if ((*(byte *)(plVar2 + 4) & 4) != 0) {
      plVar15 = (longlong *)FUN_14171c410();
      for (plVar18 = plVar12; plVar18 != (longlong *)0x0; plVar18 = (longlong *)plVar18[6]) {
        if (plVar18 == plVar15) goto LAB_141730daa;
      }
      *(uint *)(plVar2 + 4) = *(uint *)(plVar2 + 4) & 0xfffffffb;
    }
LAB_141730daa:
    local_118 = 0;
    if ((int)plVar2[1] == 0) {
      if (*(char *)((longlong)plVar2 + 0x54) == '\0') {
        uVar16 = *(ulonglong *)(param_1 + 0xa0);
        local_118 = uVar16;
      }
      else {
        puVar10 = (undefined8 *)FName::ToString(plVar2,&local_148);
        if (*(int *)(puVar10 + 1) == 0) {
          puVar21 = &DAT_143f3eda8;
        }
        else {
          puVar21 = (undefined2 *)*puVar10;
        }
        uVar16 = FUN_1417894a0(0,puVar21);
        *puVar1 = uVar16;
        if (local_148 != (longlong **)0x0) {
          FMemory::Free();
        }
        puStack_140 = local_158;
        local_158[0]._0_1_ = 0;
        local_148 = (longlong **)FUN_1406ddef0;
        lVar9 = FUN_1415d8310(&local_148,&DAT_14622e6dc);
        *(int *)(lVar9 + 0x2c) = *(int *)(lVar9 + 0x2c) + 1;
        uVar16 = uVar11;
      }
    }
    else {
      uVar16 = FUN_14173d7a0(param_1,(int)plVar2[1]);
      local_118 = uVar16;
    }
    uVar25 = uVar16;
    if ((*(uint *)((longlong)plVar12 + 0xb4) >> 0x1c & 1) == 0) {
LAB_141730ea4:
      uVar25 = local_118;
      if ((*(uint *)(plVar12 + 1) >> 10 & 1) != 0) {
        FUN_141740c00(param_1 + 0x200,plVar12);
        uVar25 = uVar16;
LAB_141730f33:
        if (*(int *)((longlong)plVar12 + 0xb4) < 0) {
          if ((int)*(uint *)(plVar2 + 2) < 0) {
            *(undefined8 *)
             ((longlong)(int)~*(uint *)(plVar2 + 2) * 0x38 + 0x20 + *(longlong *)(param_1 + 8)) = 0;
          }
          plVar12 = (longlong *)FUN_14173d7a0(param_1,(int)plVar2[2]);
        }
        goto LAB_141730f63;
      }
      uVar16 = *puVar1;
      if (uVar16 == 0) {
        if (((~(byte)(*(uint *)(plVar2 + 4) >> 4) & 1) == 0) ||
           (cVar6 = FUN_1416ef8d0(param_1,param_2,local_118), cVar6 == '\0')) goto LAB_141730f33;
      }
      else {
        lVar23 = ULinkerPlaceholderExportObject::GetPrivateStaticClass();
        lVar9 = *(longlong *)(uVar16 + 0x10);
        if ((*(int *)(lVar9 + 0x90) < *(int *)(lVar23 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar9 + 0x88) + (longlong)*(int *)(lVar23 + 0x90) * 8) !=
            lVar23 + 0x88)) {
          bVar26 = false;
        }
        else {
          bVar26 = true;
        }
        uVar25 = local_118;
        if (!bVar26) goto LAB_141730f33;
      }
    }
    else {
      if (uVar16 != 0) {
        lVar9 = ULinkerPlaceholderExportObject::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(uVar16 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(uVar16 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar26 = false;
        }
        else {
          bVar26 = true;
        }
        if (bVar26) goto LAB_141730ea4;
      }
LAB_141730f63:
      if (((*(uint *)((longlong)plVar12 + 0xb4) >> 3 & 1) != 0) &&
         ((*(byte *)(plVar2 + 4) & 0x30) == 0)) {
        local_98 = 0;
        local_90 = 0;
        TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(local_88,0,0);
        local_68 = 0xffffffff;
        local_64 = 0;
        local_58 = 0;
        local_50 = 0;
        uVar14 = FText::FromString(&local_110,param_1 + 0x1e0);
        local_c8[0] = 4;
        FText::FText(local_b8,uVar14);
        local_a0 = 1;
        local_138 = (longlong *)0x0;
        local_130 = 0xc;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
        FGenericPlatformString::Memcpy(local_138,L"PackageName",0x18);
        local_148 = &local_138;
        puStack_140 = local_c8;
        FUN_1407484b0(&local_98,&local_128,&local_148,0);
        if (local_138 != (longlong *)0x0) {
          FMemory::Free();
        }
        FFormatArgumentValue::~FFormatArgumentValue(local_c8);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_110);
        uVar14 = FText::FromName(&local_110,plVar2);
        local_c8[0] = 4;
        FText::FText(local_b8,uVar14);
        local_a0 = 1;
        local_138 = (longlong *)0x0;
        local_130 = 0xb;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
        FGenericPlatformString::Memcpy(local_138,L"ObjectName",0x16);
        local_148 = &local_138;
        puStack_140 = local_c8;
        FUN_1407484b0(&local_98,&local_128,&local_148,0);
        if (local_138 != (longlong *)0x0) {
          FMemory::Free();
        }
        FFormatArgumentValue::~FFormatArgumentValue(local_c8);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_110);
        uVar14 = UObjectBaseUtility::GetPathName(plVar12,&local_110,0);
        uVar14 = FText::FromString(local_e8,uVar14);
        local_c8[0] = 4;
        FText::FText(local_b8,uVar14);
        local_a0 = 1;
        local_138 = (longlong *)0x0;
        local_130 = 10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
        FGenericPlatformString::Memcpy(local_138,L"ClassName",0x14);
        local_148 = &local_138;
        puStack_140 = local_c8;
        FUN_1407484b0(&local_98,&local_128,&local_148,0);
        if (local_138 != (longlong *)0x0) {
          FMemory::Free();
        }
        FFormatArgumentValue::~FFormatArgumentValue(local_c8);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_e8);
        if (local_110 != (longlong ***)0x0) {
          FMemory::Free();
        }
        uVar14 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (&local_110,
                            L"Attempting to load an instance of a transient class from disk - Package:\'{PackageName}\'  Object:\'{ObjectName}\'  Class:\'{ClassName}\'"
                            ,L"LinkerLoad",L"LoadingTransientInstance");
        uVar14 = FTextFormat::FTextFormat(&local_138,uVar14);
        uVar14 = FText::Format(local_e8,uVar14,&local_98);
        FDeferredMessageLog::Warning(local_f0,&local_148,uVar14);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_148);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_e8);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_110);
        local_50 = 0;
        if (local_58 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_98);
      }
      uVar16 = *puVar1;
      if (uVar16 != 0) goto LAB_1417318e2;
      if ((int)plVar2[1] < 1) {
        if (uVar25 != 0) goto LAB_14173125a;
LAB_141731269:
        local_120 = uVar11;
      }
      else {
        if (uVar25 == 0) {
          if (*(char *)((longlong)(int)plVar2[1] * 0x88 + -0x2d + *(longlong *)(param_1 + 0x18)) !=
              '\0') {
            *(undefined1 *)((longlong)plVar2 + 0x5b) = 1;
            uVar16 = uVar24;
            goto LAB_1417318e2;
          }
          goto LAB_141731269;
        }
LAB_14173125a:
        cVar6 = UObjectBaseUtility::IsA<UObjectRedirector>(uVar25);
        local_120 = uVar25;
        if (cVar6 == '\0') goto LAB_141731269;
      }
      if ((uVar25 == 0) || (local_120 != 0)) {
        *(undefined1 *)((longlong)plVar2 + 0x59) = 1;
        bVar26 = (int)plVar2[1] != 0;
        if (bVar26) {
          puVar10 = (undefined8 *)FLinker::GetFullImpExpName(param_1,&local_148,(int)plVar2[1]);
        }
        else {
          puVar10 = (undefined8 *)
                    UObjectBaseUtility::GetFullName(*(undefined8 *)(param_1 + 0xa0),&local_110,0);
        }
        local_138 = (longlong *)*puVar10;
        *puVar10 = 0;
        local_130 = puVar10[1];
        puVar10[1] = 0;
        if ((bVar26) && (local_148 != (longlong **)0x0)) {
          FMemory::Free();
        }
        if ((!bVar26) && (local_110 != (longlong ***)0x0)) {
          FMemory::Free();
        }
        local_98 = 0;
        local_90 = 0;
        TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(local_88,0,0);
        local_68 = 0xffffffff;
        local_64 = 0;
        local_58 = 0;
        local_50 = 0;
        uVar14 = FText::FromName(local_e8,plVar2);
        local_c8[0] = 4;
        FText::FText(local_b8,uVar14);
        local_a0 = 1;
        local_148 = (longlong **)0x0;
        puStack_140 = (undefined4 *)0xb;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
        FGenericPlatformString::Memcpy(local_148,L"ObjectName",0x16);
        local_110 = &local_148;
        local_108 = local_c8;
        FUN_1407484b0(&local_98,&local_124,&local_110,0);
        if (local_148 != (longlong **)0x0) {
          FMemory::Free();
        }
        FFormatArgumentValue::~FFormatArgumentValue(local_c8);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_e8);
        uVar14 = FText::FromString(local_e8,&local_138);
        local_c8[0] = 4;
        FText::FText(local_b8,uVar14);
        local_a0 = 1;
        local_148 = (longlong **)0x0;
        puStack_140 = (undefined4 *)0xa;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
        FGenericPlatformString::Memcpy(local_148,L"OuterName",0x14);
        local_110 = &local_148;
        local_108 = local_c8;
        FUN_1407484b0(&local_98,&local_124,&local_110,0);
        if (local_148 != (longlong **)0x0) {
          FMemory::Free();
        }
        FFormatArgumentValue::~FFormatArgumentValue(local_c8);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_e8);
        if (local_120 == 0) {
          uVar14 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                             (local_e8,
                              L"CreateExport: Failed to load Outer for resource \'{ObjectName}\': {OuterName}"
                              ,L"LinkerLoad",L"CreateExportFailedToLoadOuter");
          uVar14 = FTextFormat::FTextFormat(&local_110,uVar14);
          uVar14 = FText::Format(local_c8,uVar14,&local_98);
          FDeferredMessageLog::Warning(local_f0,&local_148,uVar14);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_148);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_c8);
          puVar19 = local_e8;
        }
        else {
          uVar14 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                             (local_c8,
                              L"CreateExport: Failed to load Outer for resource because it is a redirector \'{ObjectName}\': {OuterName}"
                              ,L"LinkerLoad",L"CreateExportFailedToLoadOuterIsRedirector");
          uVar14 = FTextFormat::FTextFormat(&local_110,uVar14);
          uVar14 = FText::Format(local_e8,uVar14,&local_98);
          FDeferredMessageLog::Warning(local_f0,&local_148,uVar14);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_148);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_e8);
          puVar19 = local_c8;
        }
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(puVar19);
        local_50 = 0;
        if (local_58 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_98);
        uVar16 = uVar24;
        if (local_138 != (longlong *)0x0) {
          FMemory::Free();
        }
        goto LAB_1417318e2;
      }
      local_138 = (longlong *)
                  UObject::GetArchetypeFromRequiredInfo(plVar12,uVar25,*plVar2,(int)plVar2[4]);
      UObject::ConditionalPostLoadSubobjects(local_138,0);
      local_178 = 0;
      local_180 = (longlong *)((ulonglong)local_180._4_4_ << 0x20);
      local_188 = local_188 & 0xffffff00;
      uVar16 = StaticFindObjectFastInternal(0,uVar25,*plVar2,1);
      if ((uVar16 != 0) && (*(longlong **)(uVar16 + 0x10) == plVar12)) {
        *puVar1 = uVar16;
      }
      if (*puVar1 == 0) {
        if (uVar16 != 0) {
          for (plVar18 = *(longlong **)(uVar16 + 0x10); uVar16 = uVar24, plVar18 != (longlong *)0x0;
              plVar18 = (longlong *)plVar18[6]) {
            if (plVar18 == plVar12) goto LAB_1417313eb;
          }
          goto LAB_1417318e2;
        }
LAB_1417313eb:
        uVar8 = *(uint *)(plVar2 + 4);
        if ((((DAT_1468b6145 == '\0') || ((uVar8 & 0x10) != 0)) ||
            ((*(uint *)(*(longlong *)(param_1 + 0xa0) + 0x50) >> 0x15 & 1) != 0)) ||
           (local_128 = uVar8, cVar6 = UObjectBaseUtility::IsTemplate(local_118,0x10), cVar6 != '\0'
           )) {
LAB_141731456:
          uVar8 = uVar8 | 0x83400;
          local_128 = uVar8;
        }
        else {
          plVar15 = (longlong *)FUN_14171c410();
          plVar18 = plVar12;
          do {
            if (plVar18 == plVar15) goto LAB_141731456;
            plVar18 = (longlong *)plVar18[6];
          } while (plVar18 != (longlong *)0x0);
          plVar15 = (longlong *)UObjectRedirector::GetPrivateStaticClass();
          plVar18 = plVar12;
          do {
            if (plVar18 == plVar15) goto LAB_141731456;
            plVar18 = (longlong *)plVar18[6];
          } while (plVar18 != (longlong *)0x0);
        }
        lVar9 = *plVar2;
        if (((uVar8 & 0x10) != 0) &&
           (plVar18 = (longlong *)plVar12[6], uVar8 = local_128, plVar18 != (longlong *)0x0)) {
          iVar3 = *(int *)((longlong)plVar18 + 0xc);
          uVar16 = uVar11;
          if (iVar3 < (int)DAT_1469e91c4) {
            uVar20 = iVar3 >> 0x1f & 0xffff;
            uVar7 = iVar3 + uVar20;
            uVar16 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                     (longlong)(int)((uVar7 & 0xffff) - uVar20) * 0x18;
          }
          if ((*(uint *)(uVar16 + 8) >> 0x19 & 1) == 0) {
            lVar23 = plVar18[0x1f];
            if (lVar23 == 0) {
              (**(code **)(*plVar18 + 0x368))(plVar18);
              lVar23 = plVar18[0x1f];
            }
            local_148 = (longlong **)0x0;
            puStack_140 = (undefined4 *)0x0;
            local_188 = 0x2000000;
            FUN_1417a5b30(lVar23,&local_148,0,0);
            local_120 = 0;
            uVar16 = (ulonglong)
                     ((longlong)(local_148 + (int)puStack_140) + (7 - (longlong)local_148)) >> 3;
            if (local_148 + (int)puStack_140 < local_148) {
              uVar16 = uVar11;
            }
            pplVar13 = local_148;
            if (uVar16 != 0) {
              do {
                uVar8 = *(uint *)(*pplVar13 + 1);
                if (((uVar8 >> 0x13 & 1) != 0) &&
                   (((uVar8 >> 10 & 1) != 0 || ((uVar8 >> 0x15 & 1) == 0)))) {
                  *(uint *)(*pplVar13 + 1) = uVar8 | 0x400;
                  FUN_141740c00(param_1 + 0x200);
                }
                local_120 = local_120 + 1;
                pplVar13 = pplVar13 + 1;
              } while (local_120 != uVar16);
            }
            uVar16 = plVar2[9];
            if (uVar16 != 0) {
              if (local_148 != (longlong **)0x0) {
                FMemory::Free(local_148);
              }
              goto LAB_1417318e2;
            }
            uVar8 = local_128;
            if (local_148 != (longlong **)0x0) {
              FMemory::Free(local_148);
              uVar8 = local_128;
            }
          }
        }
        plVar18 = plVar2 + 9;
        if (plVar12[0x1f] == 0) {
          (**(code **)(*plVar12 + 0x368))(plVar12);
        }
        local_168 = 0;
        local_170 = 0;
        local_178 = local_178 & 0xffffff00;
        local_180 = local_138;
        local_188 = 0;
        lVar23 = FUN_1417985e0(plVar12,local_118,lVar9,uVar8);
        *plVar18 = lVar23;
        if ((DAT_1464aaa49 != '\0') || (DAT_1469e91ac != '\0')) {
          iVar3 = *(int *)(lVar23 + 0xc);
          if (iVar3 < (int)DAT_1469e91c4) {
            uVar7 = iVar3 >> 0x1f & 0xffff;
            uVar8 = iVar3 + uVar7;
            uVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                     (longlong)(int)((uVar8 & 0xffff) - uVar7) * 0x18;
          }
          *(uint *)(uVar11 + 8) = *(uint *)(uVar11 + 8) | 0x40000000;
        }
        lVar23 = *plVar2;
        lVar4 = *(longlong *)(*plVar18 + 0x10);
        if (lVar9 != lVar23) {
          uVar14 = *(undefined8 *)(*plVar18 + 0x20);
          local_120 = 0;
          if (lVar23 == 0) {
            FUN_1417846f0(uVar14,
                          L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                         );
          }
          uVar17 = UObjectRedirector::GetPrivateStaticClass();
          local_168 = 0;
          local_170 = 0;
          local_178 = local_178 & 0xffffff00;
          local_180 = (longlong *)0x0;
          local_188 = 0;
          lVar9 = FUN_1417985e0(uVar17,uVar14,lVar23,3);
          *(longlong *)(lVar9 + 0x28) = *plVar18;
        }
        if (*plVar18 != 0) {
          if (((*(byte *)(plVar2 + 4) & 0x10) == 0) || ((*(uint *)(lVar4 + 0xb4) >> 0x12 & 1) == 0))
          {
            bVar26 = false;
          }
          else {
            bVar26 = true;
            if ((*(uint *)(param_1 + 0x290) & 0x100000) != 0) {
              *(int *)(param_1 + 0x78c) = local_124;
              goto LAB_1417318de;
            }
          }
          if ((-1 < *(int *)(lVar4 + 0xb0)) && (bVar26)) {
            lVar9 = UObjectBaseUtility::GetOutermost(lVar4);
            lVar23 = GetTransientPackage();
            if (lVar9 != lVar23) {
              uVar8 = *(uint *)(*plVar18 + 8);
              *(uint *)(*plVar18 + 8) = uVar8 & 0xffffebff;
              FUN_1417a7660(*plVar18,param_1,local_124,0);
              *(uint *)(*plVar18 + 8) = *(uint *)(*plVar18 + 8) | uVar8;
              cVar6 = FUN_1417061b0(param_1,lVar4,*plVar18);
              if (cVar6 != '\0') goto LAB_1417318de;
              goto LAB_14173177a;
            }
          }
          FUN_1417a7660(*plVar18,param_1,local_124,1);
          puStack_140 = local_158;
          local_158[0]._0_1_ = 0;
          local_148 = (longlong **)FUN_1406ddef0;
          lVar9 = FUN_1415d8310(&local_148,&DAT_14622e6dc);
          iVar3 = *(int *)(lVar9 + 0x40);
          *(int *)(lVar9 + 0x40) = iVar3 + 1;
          if (*(int *)(lVar9 + 0x44) < iVar3 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar9 + 0x38,iVar3);
          }
          *(longlong *)(*(longlong *)(lVar9 + 0x38) + (longlong)iVar3 * 8) = *plVar18;
        }
LAB_14173177a:
        plVar12 = (longlong *)*plVar18;
        if (plVar12 != (longlong *)0x0) {
          cVar6 = FUN_141729900(plVar12);
          if (cVar6 != '\0') {
            if ((int)plVar2[3] != 0) {
              lVar9 = FUN_14173d7a0(param_1,(int)plVar2[3]);
              if ((lVar9 == 0) ||
                 (cVar6 = UObjectBaseUtility::IsA<ULinkerPlaceholderFunction>(lVar9), cVar6 == '\0')
                 ) {
                lVar9 = *plVar12;
                uVar14 = FUN_14173d7a0(param_1,(int)plVar2[3]);
                (**(code **)(lVar9 + 0x2c8))(plVar12,uVar14);
              }
              else {
                local_138 = plVar12;
                FUN_14058cbf0(lVar9 + 0x220,&local_124,&local_138,0);
              }
            }
            plVar18 = (longlong *)*plVar18;
            if ((plVar18 != (longlong *)0x0) && (cVar6 = FUN_140c619d0(plVar18), cVar6 != '\0')) {
              (**(code **)(*plVar18 + 0x280))(plVar18);
            }
          }
          if (*(char *)((longlong)plVar2 + 0x54) != '\0') {
            puStack_140 = local_158;
            local_148 = (longlong **)FUN_1406ddef0;
            local_158[0]._0_1_ = 0;
            lVar9 = FUN_1415d8310(&local_148,&DAT_14622e6dc);
            *(int *)(lVar9 + 0x2c) = *(int *)(lVar9 + 0x2c) + 1;
          }
        }
        goto LAB_1417318d8;
      }
      if (*(char *)((longlong)plVar2 + 0x54) == '\0') {
        FUN_1417a7660(*puVar1,param_1,local_124,1);
        puStack_140 = local_158;
        local_158[0]._0_1_ = 0;
        local_148 = (longlong **)FUN_1406ddef0;
        lVar9 = FUN_1415d8310(&local_148,&DAT_14622e6dc);
        TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
        AddUniqueImpl<UGeometryCacheComponent_*_const_&>(lVar9 + 0x38,puVar1);
        if (((*(uint *)(*puVar1 + 8) >> 0x15 & 1) == 0) &&
           (cVar6 = UPackage::IsFullyLoaded(*(undefined8 *)(param_1 + 0xa0)), cVar6 == '\0')) {
          uVar11 = *puVar1;
          uVar8 = *(uint *)(uVar11 + 8);
          if ((uVar8 >> 4 & 1) == 0) {
            *(uint *)(uVar11 + 8) = uVar8 | 0x83400;
          }
          else {
            *(uint *)(uVar11 + 8) = uVar8 | 0x81400;
          }
        }
      }
      else {
        puStack_140 = local_158;
        local_158[0]._0_1_ = 0;
        local_148 = (longlong **)FUN_1406ddef0;
        lVar9 = FUN_1415d8310(&local_148,&DAT_14622e6dc);
        *(int *)(lVar9 + 0x2c) = *(int *)(lVar9 + 0x2c) + 1;
      }
    }
  }
  else {
LAB_1417318d8:
    uVar16 = uVar24;
    if (*(char *)((longlong)plVar2 + 0x59) != '\0') goto LAB_1417318e2;
  }
LAB_1417318de:
  uVar16 = plVar2[9];
LAB_1417318e2:
  puStack_140 = local_158;
  local_158[0]._0_1_ = 0;
  local_148 = (longlong **)FUN_1406ddef0;
  lVar9 = FUN_1415d8310(&local_148,&DAT_14622e6dc);
  *(undefined8 *)(lVar9 + 0x98) = local_d0;
  *(undefined4 *)(lVar9 + 0x90) = local_f8;
  return uVar16;
}



// FUNCTION 141731c40 FUN_141731c40 body=628 status=ok
// SIG undefined FUN_141731c40(void)

undefined8 FUN_141731c40(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  LARGE_INTEGER local_res8;
  undefined8 local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  iVar6 = *(int *)(param_1 + 0x75c);
  if (iVar6 == 0) {
    puVar7 = (undefined4 *)(param_1 + 0x328);
    uVar3 = 0;
    do {
      uVar3 = uVar3 + 1;
      *puVar7 = 0xffffffff;
      puVar7 = puVar7 + 1;
    } while (uVar3 < 0x100);
    iVar6 = *(int *)(param_1 + 0x75c);
  }
  if (iVar6 < *(int *)(param_1 + 0x20)) {
    do {
      iVar9 = *(int *)(param_1 + 0x76c) + 1;
      *(int *)(param_1 + 0x76c) = iVar9;
      if ((*(byte *)(param_1 + 0x228) & 8) == 0) {
        if (*(char *)(param_1 + 0x766) != '\0') break;
        if ((*(char *)(param_1 + 0x767) != '\0') && (iVar9 == (iVar9 / 100) * 100)) {
          QueryPerformanceCounter(&local_res8);
          iVar6 = *(int *)(param_1 + 0x75c);
          *(bool *)(param_1 + 0x766) =
               (double)*(float *)(param_1 + 0x770) <
               ((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0) -
               *(double *)(param_1 + 0x778);
        }
      }
      if (*(char *)(param_1 + 0x766) != '\0') break;
      lVar1 = *(longlong *)(param_1 + 0x18);
      lVar10 = (longlong)*(int *)(param_1 + 0x75c) * 0x88;
      uVar3 = *(uint *)(lVar10 + 0x10 + lVar1);
      if ((int)uVar3 < 0) {
        iVar6 = *(int *)((longlong)(int)~uVar3 * 0x38 + 8 + *(longlong *)(param_1 + 8));
        if (iVar6 < 0) {
          local_res10 = *(undefined8 *)
                         ((longlong)-iVar6 * 0x38 + -0x38 + *(longlong *)(param_1 + 8));
        }
        else {
          local_res10 = *(undefined8 *)((longlong)iVar6 * 0x88 + -0x88 + lVar1);
        }
      }
      else {
        local_res10 = DAT_1468e2358;
        if (uVar3 != 0) {
          local_res10 = *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x18);
        }
      }
      puVar4 = (undefined8 *)FLinker::GetExportClassName(param_1,local_res18);
      iVar6 = *(int *)(lVar10 + lVar1);
      uVar2 = *puVar4;
      piVar5 = (int *)FPackageName::GetShortFName(local_res20,&local_res10);
      uVar8 = (ulonglong)((int)uVar2 * 7 + *piVar5 * 0x1f + iVar6 & 0xff);
      *(undefined4 *)(lVar10 + 0x50 + lVar1) = *(undefined4 *)(param_1 + 0x328 + uVar8 * 4);
      *(undefined4 *)(param_1 + 0x328 + uVar8 * 4) = *(undefined4 *)(param_1 + 0x75c);
      iVar6 = *(int *)(param_1 + 0x75c) + 1;
      *(int *)(param_1 + 0x75c) = iVar6;
    } while (iVar6 < *(int *)(param_1 + 0x20));
  }
  if (iVar6 == *(int *)(param_1 + 0x20)) {
    *(int *)(param_1 + 0x76c) = *(int *)(param_1 + 0x76c) + 1;
    if ((*(byte *)(param_1 + 0x228) & 8) == 0) {
      if (*(char *)(param_1 + 0x766) != '\0') {
        return 2;
      }
      if (*(char *)(param_1 + 0x767) != '\0') {
        QueryPerformanceCounter(&local_res8);
        *(bool *)(param_1 + 0x766) =
             (double)*(float *)(param_1 + 0x770) <
             ((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0) -
             *(double *)(param_1 + 0x778);
      }
    }
    if (*(char *)(param_1 + 0x766) == '\0') {
      return 1;
    }
  }
  return 2;
}



// FUNCTION 141731ec0 FUN_141731ec0 body=1330 status=ok
// SIG undefined FUN_141731ec0(void)

longlong FUN_141731ec0(longlong param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  BOOL BVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  code **ppcVar13;
  longlong lVar14;
  undefined2 *puVar15;
  longlong *plVar16;
  uint local_res10 [2];
  longlong local_res18;
  uint in_stack_ffffffffffffff88;
  code *local_58;
  uint *puStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  
  lVar12 = 0;
  puStack_50 = local_res10;
  local_58 = FUN_1406ddef0;
  local_res10[0] = 0;
  lVar8 = FUN_1415d8310(&local_58,&DAT_14622e6dc);
  uVar1 = *(undefined4 *)(lVar8 + 0x80);
  uVar3 = *(undefined8 *)(lVar8 + 0x88);
  *(longlong *)(lVar8 + 0x88) = param_1;
  *(int *)(lVar8 + 0x80) = param_2;
  plVar16 = (longlong *)((longlong)param_2 * 0x38 + *(longlong *)(param_1 + 8));
  FUN_1416effd0(param_1,param_2);
  if ((plVar16[4] == 0) && (local_res18 = 0, *plVar16 != 0)) {
    if (DAT_1468b616c == '\0') {
      in_stack_ffffffffffffff88 = 0;
      lVar8 = FindObjectFast<UPackage>(0,plVar16[2],0,0,0);
      if (lVar8 != 0) {
        lVar14 = plVar16[3];
        uVar9 = FUN_14171bfe0();
        in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffff00;
        plVar10 = (longlong *)FUN_141799680(uVar9,lVar8,lVar14,0,in_stack_ffffffffffffff88,0,0);
        if (plVar10 != (longlong *)0x0) {
          FUN_141740c00(param_1 + 0x200,plVar10);
          if (plVar10[0x1f] == 0) {
            (**(code **)(*plVar10 + 0x368))(plVar10);
          }
          uVar2 = *(uint *)(plVar16 + 1);
          if (uVar2 == 0) {
            puVar11 = (undefined8 *)FName::ToString(plVar16,&local_58);
            if (*(int *)(puVar11 + 1) == 0) {
              puVar15 = &DAT_143f3eda8;
            }
            else {
              puVar15 = (undefined2 *)*puVar11;
            }
            lVar12 = FUN_1417894a0(0,puVar15);
            if (local_58 != (code *)0x0) {
              FMemory::Free();
            }
LAB_1417321a2:
            if (lVar12 != 0) {
              puStack_50 = local_res10;
              plVar16[4] = lVar12;
              local_res10[0] = local_res10[0] & 0xffffff00;
              local_58 = FUN_1406ddef0;
              local_48 = 0x406ddef0;
              uStack_44 = 1;
              uStack_40 = puStack_50;
              lVar12 = FUN_1415d8310(&local_48,&DAT_14622e6dc);
              *(int *)(lVar12 + 0x28) = *(int *)(lVar12 + 0x28) + 1;
              local_res18 = param_1;
              lVar12 = FUN_1417555a0();
              BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar12 + 0xd0));
              if (BVar7 == 0) {
                EnterCriticalSection((LPCRITICAL_SECTION)(lVar12 + 0xd0));
              }
              FUN_14058c5a0(lVar12 + 0x80,local_res10,&local_res18,0);
              LeaveCriticalSection((LPCRITICAL_SECTION)(lVar12 + 0xd0));
            }
          }
          else {
            if ((int)uVar2 < 0) {
              lVar14 = (longlong)(int)~uVar2 * 0x38 + *(longlong *)(param_1 + 8);
              lVar8 = *(longlong *)(lVar14 + 0x20);
              if (lVar8 == 0) {
                if (*(int *)(lVar14 + 8) != 0) {
                  uVar2 = *(uint *)(plVar16 + 1);
                  goto LAB_141732081;
                }
                puVar11 = (undefined8 *)FName::ToString(lVar14,&local_58);
                if (*(int *)(puVar11 + 1) == 0) {
                  puVar15 = &DAT_143f3eda8;
                }
                else {
                  puVar15 = (undefined2 *)*puVar11;
                }
                lVar8 = FUN_1417894a0(0,puVar15);
                if (local_58 != (code *)0x0) {
                  FMemory::Free();
                }
                goto LAB_14173208c;
              }
            }
            else {
LAB_141732081:
              lVar8 = FUN_14173d7a0(param_1,uVar2);
LAB_14173208c:
              if (lVar8 == 0) {
                uVar2 = *(uint *)(plVar16 + 1);
                if (uVar2 == 0) {
                  bVar6 = true;
                  bVar5 = false;
                  ppcVar13 = (code **)UObjectBaseUtility::GetFullName
                                                (*(undefined8 *)(param_1 + 0xa0),&local_48,0);
                }
                else {
                  bVar6 = false;
                  bVar5 = true;
                  if ((int)uVar2 < 0) {
                    FLinker::GetImportFullName(param_1,&local_58,~uVar2);
                  }
                  else if ((int)uVar2 < 1) {
                    local_58 = (code *)0x0;
                    puStack_50 = (uint *)0x0;
                  }
                  else {
                    FLinker::GetExportFullName
                              (param_1,&local_58,uVar2 - 1,0,in_stack_ffffffffffffff88 & 0xffffff00)
                    ;
                  }
                  ppcVar13 = &local_58;
                }
                pcVar4 = *ppcVar13;
                *ppcVar13 = (code *)0x0;
                ppcVar13[1] = (code *)0x0;
                if ((bVar5) && (local_58 != (code *)0x0)) {
                  FMemory::Free();
                }
                if ((bVar6) && (CONCAT44(uStack_44,local_48) != 0)) {
                  FMemory::Free();
                }
                if (pcVar4 != (code *)0x0) {
                  FMemory::Free(pcVar4);
                }
                goto LAB_141732397;
              }
            }
            lVar12 = FLinkerLoad::FindImportFast(plVar10,lVar8,*plVar16);
            if (lVar12 != 0) {
              lVar8 = UDynamicClass::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if ((!bVar5) || ((*(uint *)(lVar12 + 0xb4) & 0x20000000) != 0)) goto LAB_1417321a2;
            }
          }
        }
      }
    }
    if (plVar16[4] == 0) {
      if (plVar16[5] == 0) {
        FUN_141748b40(param_1,param_2);
      }
      if ((int)plVar16[6] != -1) {
        lVar12 = FUN_141730700(plVar16[5]);
        plVar16[4] = lVar12;
        puStack_50 = local_res10;
        local_58 = FUN_1406ddef0;
        local_48 = 0x406ddef0;
        uStack_44 = 1;
        local_res10[0] = local_res10[0] & 0xffffff00;
        uStack_40 = puStack_50;
        lVar12 = FUN_1415d8310(&local_48,&DAT_14622e6dc);
        *(int *)(lVar12 + 0x28) = *(int *)(lVar12 + 0x28) + 1;
        local_res18 = param_1;
        lVar12 = FUN_1417555a0();
        BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar12 + 0xd0));
        if (BVar7 == 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar12 + 0xd0));
        }
        FUN_14058c5a0(lVar12 + 0x80,local_res10,&local_res18,0);
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar12 + 0xd0));
      }
      if (plVar16[4] == 0) {
        uVar2 = *(uint *)(plVar16 + 1);
        if (uVar2 == 0) {
          bVar6 = true;
          bVar5 = false;
          ppcVar13 = (code **)UObjectBaseUtility::GetFullName
                                        (*(undefined8 *)(param_1 + 0xa0),&local_48,0);
        }
        else {
          bVar6 = false;
          bVar5 = true;
          if ((int)uVar2 < 0) {
            FLinker::GetImportFullName(param_1,&local_58,~uVar2);
          }
          else if ((int)uVar2 < 1) {
            local_58 = (code *)0x0;
            puStack_50 = (uint *)0x0;
          }
          else {
            FLinker::GetExportFullName
                      (param_1,&local_58,uVar2 - 1,0,in_stack_ffffffffffffff88 & 0xffffff00);
          }
          ppcVar13 = &local_58;
        }
        pcVar4 = *ppcVar13;
        *ppcVar13 = (code *)0x0;
        ppcVar13[1] = (code *)0x0;
        if ((bVar5) && (local_58 != (code *)0x0)) {
          FMemory::Free();
        }
        if ((bVar6) && (CONCAT44(uStack_44,local_48) != 0)) {
          FMemory::Free();
        }
        if (pcVar4 != (code *)0x0) {
          FMemory::Free(pcVar4);
        }
      }
    }
  }
  lVar12 = plVar16[4];
LAB_141732397:
  puStack_50 = local_res10;
  local_res10[0] = local_res10[0] & 0xffffff00;
  local_58 = FUN_1406ddef0;
  local_48 = 0x406ddef0;
  uStack_44 = 1;
  uStack_40 = puStack_50;
  lVar8 = FUN_1415d8310(&local_48,&DAT_14622e6dc);
  *(undefined8 *)(lVar8 + 0x88) = uVar3;
  *(undefined4 *)(lVar8 + 0x80) = uVar1;
  return lVar12;
}



// FUNCTION 141732400 FUN_141732400 body=978 status=ok
// SIG undefined FUN_141732400(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_141732400(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  undefined1 auStack_118 [32];
  undefined2 *local_f8;
  undefined1 local_e8 [16];
  code *local_d8;
  undefined1 *puStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined2 *local_b8;
  int local_b0;
  undefined2 *local_a8;
  int local_a0;
  code *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  uVar10 = 0;
  local_68 = (longlong *)0x0;
  local_58 = 0;
  uVar8 = param_3 & 0xffefffff;
  puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_88);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_143f3f130;
  }
  local_98[0] = AK::MemoryMgr::StartProfileThreadUsage;
  uVar6 = uVar10;
  if (param_1 != 0) {
    uVar6 = *(ulonglong *)(param_1 + 0x60);
  }
  if (uVar6 == 0) {
    if (DAT_1468c21ab != '\0') {
      uVar8 = uVar8 | 1;
    }
    lVar7 = operator_new(0x7f0);
    uVar6 = uVar10;
    if (lVar7 != 0) {
      uVar6 = FUN_141729b80(lVar7,param_1,param_2,uVar8);
    }
    *(ulonglong *)(param_1 + 0x60) = uVar6;
    if ((DAT_1468c21ab != '\0') && (uVar6 != 0)) {
      FUN_141732940(uVar6,local_98);
    }
  }
  else if (DAT_1468c21ab != '\0') {
    local_c8 = *(undefined8 *)(param_1 + 0x18);
    FName::ToString(&local_c8,&local_b8);
    puVar13 = &DAT_143f3eda8;
    if (local_b0 != 0) {
      puVar13 = local_b8;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0x25f,L"FLinkerLoad::CreateLinkerAsync: Found existing linker for \'%s\'",
               puVar13);
    if (local_b8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_c0 = *(undefined8 *)(param_1 + 0x18);
    FName::ToString(&local_c0,&local_a8);
    local_f8 = &DAT_143f3eda8;
    if (local_a0 != 0) {
      local_f8 = local_a8;
    }
    FDebug::AssertFailed
              (&DAT_144d078ba,"Unknown",0x25f,
               L"FLinkerLoad::CreateLinkerAsync: Found existing linker for \'%s\'");
    if (local_a8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (local_58 != 0) {
    plVar12 = local_88;
    if (local_68 != (longlong *)0x0) {
      plVar12 = local_68;
    }
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x10))(plVar12,0);
    }
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  uVar8 = *(uint *)(uVar6 + 0x290);
  *(uint *)(uVar6 + 0x290) = uVar8 | param_3 & 0x100000;
  if (param_4 != 0) {
    *(longlong *)(uVar6 + 0x318) = param_4;
    FLinkerLoad::ResetStatusInfo(uVar6);
  }
  puStack_d0 = local_e8;
  local_e8[0] = 0;
  local_d8 = FUN_1406ddef0;
  lVar7 = FUN_1415d8310(&local_d8,&DAT_14622e6dc);
  uVar1 = *(undefined8 *)(lVar7 + 0x78);
  puStack_d0 = local_e8;
  local_d8 = FUN_1406ddef0;
  local_e8[0] = 0;
  lVar7 = FUN_1415d8310(&local_d8,&DAT_14622e6dc);
  *(ulonglong *)(lVar7 + 0x78) = uVar6;
  iVar4 = FUN_1417485e0(uVar6,0,0,0);
  local_e8[0] = 0;
  puStack_d0 = local_e8;
  local_d8 = FUN_1406ddef0;
  if (iVar4 == 0) {
    lVar7 = FUN_1415d8310(&local_d8,&DAT_14622e6dc);
    *(undefined8 *)(lVar7 + 0x78) = uVar1;
    *(uint *)(uVar6 + 0x290) = uVar8;
    uVar6 = 0;
  }
  else {
    lVar7 = FUN_1415d8310(&local_d8,&DAT_14622e6dc);
    bVar2 = false;
    *(undefined8 *)(lVar7 + 0x78) = uVar1;
    *(uint *)(uVar6 + 0x290) = uVar8;
    DAT_1464b5874 = DAT_1464b5874 + 1;
    lVar7 = (longlong)(DAT_1464b5868 + -1);
    if (-1 < DAT_1464b5868 + -1) {
      lVar9 = lVar7 << 4;
      bVar2 = false;
      do {
        if (((*(int *)(lVar9 + 8 + DAT_1464b5860) == 0) ||
            (plVar12 = *(longlong **)(lVar9 + DAT_1464b5860), plVar12 == (longlong *)0x0)) ||
           (cVar3 = (**(code **)(*plVar12 + 0x40))(plVar12,param_1), cVar3 == '\0')) {
          bVar2 = true;
        }
        lVar9 = lVar9 + -0x10;
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
    }
    iVar4 = DAT_1464b5868;
    DAT_1464b5874 = DAT_1464b5874 + -1;
    if ((bVar2) && (DAT_1464b5874 < 1)) {
      uVar11 = uVar10;
      if (0 < DAT_1464b5868) {
        do {
          if (((*(int *)(uVar10 + 8 + DAT_1464b5860) == 0) ||
              (*(longlong **)(uVar10 + DAT_1464b5860) == (longlong *)0x0)) ||
             (cVar3 = (**(code **)(**(longlong **)(uVar10 + DAT_1464b5860) + 0x10))(), cVar3 != '\0'
             )) {
            TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464b5860,uVar11,1,1);
          }
          else {
            uVar11 = (ulonglong)((int)uVar11 + 1);
            uVar10 = uVar10 + 0x10;
          }
        } while ((int)uVar11 < DAT_1464b5868);
      }
      _DAT_1464b5870 = DAT_1464b5868 * 2;
      if (_DAT_1464b5870 < 3) {
        _DAT_1464b5870 = 2;
      }
      if ((_DAT_1464b5870 < iVar4) && (DAT_1464b586c != DAT_1464b5868)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464b5860);
      }
    }
  }
  return uVar6;
}



// FUNCTION 1417327e0 FUN_1417327e0 body=349 status=ok
// SIG undefined FUN_1417327e0(void)

longlong FUN_1417327e0(longlong param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined8 local_res8;
  undefined2 *local_28;
  int local_20;
  
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x60);
  }
  if (lVar2 == 0) {
    if (DAT_1468c21ab != '\0') {
      param_3 = param_3 | 1;
    }
    lVar1 = operator_new(0x7f0);
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar2 = FUN_141729b80(lVar1,param_1,param_2,param_3);
    }
    *(longlong *)(param_1 + 0x60) = lVar2;
    if ((DAT_1468c21ab != '\0') && (lVar2 != 0)) {
      FUN_141732940(lVar2,param_4);
    }
  }
  else if (DAT_1468c21ab != '\0') {
    local_res8 = *(undefined8 *)(param_1 + 0x18);
    FName::ToString(&local_res8,&local_28);
    puVar3 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar3 = local_28;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0x25f,L"FLinkerLoad::CreateLinkerAsync: Found existing linker for \'%s\'",
               puVar3);
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_res8 = *(undefined8 *)(param_1 + 0x18);
    FName::ToString(&local_res8,&local_28);
    puVar3 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar3 = local_28;
    }
    FDebug::AssertFailed
              (&DAT_144d078ba,"Unknown",0x25f,
               L"FLinkerLoad::CreateLinkerAsync: Found existing linker for \'%s\'",puVar3);
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return lVar2;
}



// FUNCTION 141732940 FUN_141732940 body=1564 status=ok
// SIG undefined FUN_141732940(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_141732940(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined2 *puVar13;
  int iVar14;
  code **ppcVar15;
  short *psVar16;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  LARGE_INTEGER local_f8 [2];
  code *local_e8 [2];
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  code *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  bVar2 = false;
  bVar1 = false;
  local_f8[0].s.LowPart = 0;
  if ((*(longlong *)(param_1 + 0x318) == 0) && (*(char *)(param_1 + 0x295) == '\0')) {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x18);
    plVar6 = (longlong *)FUN_14178d740();
    lVar11 = -1;
    iVar14 = -1;
    iVar5 = iVar14;
    if ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)) {
      plVar7 = (longlong *)plVar6[8];
      if ((longlong *)plVar6[8] == (longlong *)0x0) {
        plVar7 = plVar6 + 7;
      }
      iVar4 = *(int *)((longlong)plVar7 +
                      ((longlong)((int)((ulonglong)lVar8 >> 0x20) + (int)lVar8) &
                      (longlong)(int)plVar6[9] - 1U) * 4);
      if (iVar4 != -1) {
        do {
          iVar5 = iVar4;
          if (*(longlong *)(*plVar6 + (longlong)iVar4 * 0x18) == lVar8) break;
          iVar4 = *(int *)(*plVar6 + ((longlong)iVar4 * 3 + 2) * 8);
          iVar5 = iVar14;
        } while (iVar4 != -1);
      }
    }
    *(bool *)(param_1 + 0x295) = iVar5 != -1;
    if (iVar5 != -1) {
      FUN_1416eddb0(param_1);
    }
    else {
      lVar8 = operator_new(0x240);
      psVar16 = &DAT_143f3eda8;
      if (lVar8 == 0) {
        uVar9 = 0;
      }
      else {
        if (DAT_1468c21ab == '\0') {
          local_68 = (longlong *)0x0;
          local_58 = 0;
          puVar10 = (undefined8 *)FUN_140438ef0(0x10,local_88);
          if (puVar10 != (undefined8 *)0x0) {
            *puVar10 = &PTR_FUN_143f3f130;
          }
          bVar2 = false;
          bVar1 = true;
          local_98[0] = AK::MemoryMgr::StartProfileThreadUsage;
          ppcVar15 = local_98;
        }
        else {
          plVar6 = (longlong *)param_2[6];
          local_b8 = (longlong *)0x0;
          local_a8 = 0;
          if (plVar6 == (longlong *)0x0) {
            _guard_xfg_dispatch_icall_nop(local_d8,param_2 + 2,0x20);
          }
          if (local_b8 != (longlong *)0x0) {
            FMemory::Free();
            plVar6 = (longlong *)param_2[6];
          }
          local_b8 = plVar6;
          param_2[6] = 0;
          local_a8 = *(int *)(param_2 + 8);
          *(undefined4 *)(param_2 + 8) = 0;
          if (local_a8 != 0) {
            plVar7 = local_d8;
            if (plVar6 != (longlong *)0x0) {
              plVar7 = plVar6;
            }
            if (plVar7 != (longlong *)0x0) {
              (**(code **)(*plVar7 + 8))();
              local_e8[0] = (code *)*param_2;
              ppcVar15 = local_e8;
              bVar2 = true;
              bVar1 = false;
              *param_2 = AK::MemoryMgr::StartProfileThreadUsage;
              goto LAB_141732b28;
            }
          }
          local_e8[0] = AK::MemoryMgr::StartProfileThreadUsage;
          ppcVar15 = local_e8;
          *param_2 = AK::MemoryMgr::StartProfileThreadUsage;
          bVar2 = true;
          bVar1 = false;
        }
LAB_141732b28:
        if (*(int *)(param_1 + 0x1e8) == 0) {
          uVar9 = FUN_1416e2de0(lVar8,&DAT_143f3eda8,ppcVar15);
        }
        else {
          uVar9 = FUN_1416e2de0(lVar8,*(undefined8 *)(param_1 + 0x1e0),ppcVar15);
        }
      }
      *(undefined8 *)(param_1 + 0x318) = uVar9;
      if (bVar1) {
        if (local_58 != 0) {
          plVar6 = local_88;
          if (local_68 != (longlong *)0x0) {
            plVar6 = local_68;
          }
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x10))(plVar6,0);
          }
        }
        if (local_68 != (longlong *)0x0) {
          FMemory::Free();
        }
      }
      if (bVar2) {
        if (local_a8 != 0) {
          plVar6 = local_d8;
          if (local_b8 != (longlong *)0x0) {
            plVar6 = local_b8;
          }
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x10))(plVar6,0);
          }
        }
        if (local_b8 != (longlong *)0x0) {
          FMemory::Free();
        }
      }
      puVar10 = *(undefined8 **)(param_1 + 0x318);
      if (puVar10 == (undefined8 *)0x0) {
        return 0;
      }
      if (*(char *)(puVar10 + 5) < '\0') {
        (**(code **)*puVar10)(puVar10,1);
        goto LAB_141732bf4;
      }
      *(undefined8 *)(param_1 + 0x208) = puVar10[1];
      if (*(int *)(param_1 + 0x1e8) == 0) {
        puVar13 = &DAT_143f3eda8;
      }
      else {
        puVar13 = *(undefined2 **)(param_1 + 0x1e0);
      }
      cVar3 = FSHA1::GetFileSHAHash(puVar13,0,1);
      if (((*(uint *)(param_1 + 0x290) & 0x8000) == 0) && (cVar3 == '\0')) {
        *(undefined1 *)(param_1 + 0x2a2) = 1;
      }
      else {
        iVar5 = (**(code **)(**(longlong **)(param_1 + 0x318) + 0x98))();
        uVar9 = FMemory::Malloc(iVar5,0);
        (**(code **)(**(longlong **)(param_1 + 0x318) + 0x50))
                  (*(longlong **)(param_1 + 0x318),uVar9,iVar5);
        puVar10 = *(undefined8 **)(param_1 + 0x318);
        if (puVar10 != (undefined8 *)0x0) {
          (**(code **)*puVar10)(puVar10,1);
        }
        *(undefined8 *)(param_1 + 0x318) = 0;
        if (cVar3 == '\0') {
          puVar10 = (undefined8 *)operator_new(0xb0);
          if (puVar10 == (undefined8 *)0x0) goto LAB_141732d89;
          local_108 = CONCAT31(local_108._1_3_,1);
          FBufferReaderBase::FBufferReaderBase(puVar10,uVar9,iVar5,1);
          *puVar10 = &PTR__scalar_deleting_destructor__143f60308;
        }
        else {
          puVar10 = (undefined8 *)operator_new(200);
          if (puVar10 == (undefined8 *)0x0) {
LAB_141732d89:
            puVar10 = (undefined8 *)0x0;
          }
          else {
            if (*(int *)(param_1 + 0x1e8) != 0) {
              psVar16 = *(short **)(param_1 + 0x1e0);
            }
            local_108 = CONCAT31(local_108._1_3_,1);
            FBufferReaderBase::FBufferReaderBase(puVar10,uVar9,(longlong)iVar5,1);
            *puVar10 = &PTR__scalar_deleting_destructor__144ccf6b8;
            puVar10[0x16] = 0;
            puVar10[0x17] = 0;
            if ((psVar16 != (short *)0x0) && (*psVar16 != 0)) {
              do {
                lVar11 = lVar11 + 1;
              } while (psVar16[lVar11] != 0);
              iVar5 = (int)lVar11 + 1;
              *(int *)(puVar10 + 0x17) = iVar5;
              if (0 < iVar5) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar10 + 0x16,0);
              }
              FGenericPlatformString::Memcpy(puVar10[0x16],psVar16,(longlong)iVar5 * 2);
            }
            *(undefined1 *)(puVar10 + 0x18) = 0;
          }
        }
        *(undefined8 **)(param_1 + 0x318) = puVar10;
      }
    }
    puVar10 = (undefined8 *)0x0;
    if (*(longlong *)(param_1 + 0x2b0) == 0) {
      lVar11 = operator_new(0x10);
      puVar12 = puVar10;
      if (lVar11 != 0) {
        puVar12 = (undefined8 *)
                  FBinaryArchiveFormatter::FBinaryArchiveFormatter(lVar11,param_1 + 0x200);
      }
      *(undefined8 **)(param_1 + 0x2b0) = puVar12;
    }
    puVar12 = (undefined8 *)operator_new(8);
    if (puVar12 != (undefined8 *)0x0) {
      *puVar12 = *(undefined8 *)(param_1 + 0x2b0);
      puVar10 = puVar12;
    }
    *(undefined8 **)(param_1 + 0x2a8) = puVar10;
    *(undefined8 **)(param_1 + 0x2b8) = puVar10;
    *(undefined1 *)(param_1 + 0x2c0) = 1;
    FLinkerLoad::ResetStatusInfo(param_1);
  }
  if (DAT_1468c21ab != '\0') {
    return 2;
  }
  if (*(char *)(param_1 + 0x760) == '\0') {
    if (*(char *)(param_1 + 0x2a2) == '\0') {
      lVar11 = (**(code **)(**(longlong **)(param_1 + 0x318) + 0x98))();
      plVar6 = *(longlong **)(param_1 + 0x318);
      if (lVar11 < 1) {
        if (plVar6 != (longlong *)0x0) {
          (**(code **)*plVar6)(plVar6,1);
          *(undefined8 *)(param_1 + 0x318) = 0;
          return 0;
        }
LAB_141732bf4:
        *(undefined8 *)(param_1 + 0x318) = 0;
        return 0;
      }
      iVar5 = (int)lVar11;
      if (DAT_1464b4e80 <= lVar11) {
        iVar5 = (int)DAT_1464b4e80;
      }
      cVar3 = (**(code **)(*plVar6 + 200))(plVar6,0,(longlong)iVar5);
    }
    else {
      local_108 = *(undefined4 *)(param_1 + 0x770);
      cVar3 = FArchiveAsync2::ReadyToStartReadingHeader
                        (*(longlong **)(param_1 + 0x318),*(undefined1 *)(param_1 + 0x767),
                         *(undefined1 *)(param_1 + 0x768),*(undefined8 *)(param_1 + 0x778));
    }
    if (cVar3 == '\0') {
      return 2;
    }
  }
  *(int *)(param_1 + 0x76c) = *(int *)(param_1 + 0x76c) + 1;
  if ((*(byte *)(param_1 + 0x228) & 8) == 0) {
    if (*(char *)(param_1 + 0x766) != '\0') {
      return 2;
    }
    if (*(char *)(param_1 + 0x767) != '\0') {
      QueryPerformanceCounter(local_f8);
      *(bool *)(param_1 + 0x766) =
           (double)*(float *)(param_1 + 0x770) <
           ((double)CONCAT44(local_f8[0].s.HighPart,local_f8[0].s.LowPart) * DAT_1468b02f8 +
           16777216.0) - *(double *)(param_1 + 0x778);
    }
  }
  if (*(char *)(param_1 + 0x766) != '\0') {
    return 2;
  }
  return 1;
}



// FUNCTION 141732f60 FUN_141732f60 body=372 status=ok
// SIG undefined FUN_141732f60(void)

undefined8 * FUN_141732f60(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  DWORD *pDVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  longlong local_res8;
  longlong local_res10;
  
  plVar8 = (longlong *)0x0;
  iVar9 = 0;
  if (param_2 != 0) {
    iVar9 = *(int *)(param_2 + 0x28);
  }
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar4 = TlsGetValue(*pDVar3);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      plVar8 = plVar4;
    }
    TlsSetValue(*pDVar3,plVar8);
    plVar4 = plVar8;
  }
  plVar8 = (longlong *)plVar4[1];
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)*plVar4;
    if (plVar8 == (longlong *)0x0) {
      lVar5 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar3 + 2);
      plVar4[1] = lVar5;
      if (lVar5 == 0) {
        puVar6 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar4[1] = (longlong)puVar6;
        lVar5 = 0x1f;
        do {
          puVar2 = puVar6 + 0x20;
          *puVar6 = puVar2;
          lVar5 = lVar5 + -1;
          puVar6 = puVar2;
        } while (lVar5 != 0);
        *puVar2 = 0;
      }
      plVar8 = (longlong *)plVar4[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar4 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar4[1] = (longlong)plVar8;
      *(undefined4 *)(plVar4 + 2) = 0x20;
      *plVar4 = 0;
    }
  }
  else {
    iVar7 = (int)plVar4[2];
  }
  plVar4[1] = *plVar8;
  *(int *)(plVar4 + 2) = iVar7 + -1;
  plVar4 = (longlong *)FUN_1415914c0(&local_res8);
  *param_1 = plVar8;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  local_res10 = *plVar4;
  *plVar4 = 0;
  *plVar8 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar8 + 1) = 0xff;
  *(int *)((longlong)plVar8 + 0xc) = iVar9 + 1;
  *plVar8 = (longlong)&PTR_FUN_144d10f10;
  *(undefined1 *)(plVar8 + 5) = 0;
  plVar8[6] = local_res10;
  if (local_res8 != 0) {
    LOCK();
    piVar1 = (int *)(local_res8 + 0x48);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      FGraphEvent::Recycle();
    }
  }
  return param_1;
}



// FUNCTION 1417330e0 FUN_1417330e0 body=30 status=ok
// SIG undefined FUN_1417330e0(void)

void FUN_1417330e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1417555a0();
  FLinkerManager::RemoveLinker(uVar1,param_1);
  return;
}



// FUNCTION 141733100 FUN_141733100 body=21 status=ok
// SIG undefined FUN_141733100(void)

void FUN_141733100(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1417555a0();
  FUN_1417525f0(uVar1);
  return;
}



// FUNCTION 141733120 FUN_141733120 body=727 status=ok
// SIG undefined FUN_141733120(void)

void FUN_141733120(longlong param_1)

{
  undefined8 *puVar1;
  BOOL BVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  code *local_38;
  undefined1 *puStack_30;
  
  uVar8 = 0;
  uVar7 = uVar8;
  uVar10 = uVar8;
  if (0 < *(int *)(param_1 + 0x20)) {
    do {
      if (*(longlong *)(uVar10 + 0x48 + *(longlong *)(param_1 + 0x18)) != 0) {
        FUN_141733400(param_1,uVar7);
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar10 = uVar10 + 0x88;
    } while ((int)uVar6 < *(int *)(param_1 + 0x20));
  }
  lVar3 = FUN_1417555a0();
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x58));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x58));
  }
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove(lVar3 + 8,param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x58));
  lVar3 = FUN_1417555a0();
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0xd0));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0xd0));
  }
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove(lVar3 + 0x80,param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0xd0));
  puStack_30 = local_res8;
  local_res8[0] = 0;
  local_38 = FUN_1406ddef0;
  lVar3 = FUN_1415d8310(&local_38,&DAT_14622e6dc);
  lVar5 = (longlong)*(int *)(lVar3 + 0x50);
  if (*(int *)(lVar3 + 0x50) != 0) {
    bVar13 = **(longlong **)(lVar3 + 0x48) != param_1;
    uVar7 = uVar8;
    uVar10 = uVar8;
    do {
      iVar9 = (int)uVar7;
      uVar8 = uVar8 + 1;
      uVar7 = (ulonglong)(iVar9 + 1);
      if ((longlong)uVar8 < lVar5) {
        plVar4 = (longlong *)(*(longlong *)(lVar3 + 0x48) + uVar8 * 8);
        do {
          if (bVar13 != (*plVar4 != param_1)) break;
          uVar7 = (ulonglong)((int)uVar7 + 1);
          uVar8 = uVar8 + 1;
          plVar4 = plVar4 + 1;
        } while ((longlong)uVar8 < lVar5);
      }
      iVar12 = (int)uVar7 - iVar9;
      if (bVar13 != false) {
        iVar11 = (int)uVar10;
        if (iVar11 != iVar9) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(lVar3 + 0x48) + (longlong)iVar11 * 8),
                     (void *)(*(longlong *)(lVar3 + 0x48) + (longlong)iVar9 * 8),
                     (longlong)iVar12 << 3);
        }
        uVar10 = (ulonglong)(uint)(iVar11 + iVar12);
      }
      bVar13 = (bool)(bVar13 ^ 1);
    } while ((longlong)uVar8 < lVar5);
    *(int *)(lVar3 + 0x50) = (int)uVar10;
  }
  lVar3 = *(longlong *)(param_1 + 0x2b0);
  if (lVar3 != 0) {
    if (*(longlong *)(param_1 + 0x2a8) != 0) {
      FMemory::operator_delete(*(longlong *)(param_1 + 0x2a8),8);
      lVar3 = *(longlong *)(param_1 + 0x2b0);
    }
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    if (lVar3 != 0) {
      FBinaryArchiveFormatter::~FBinaryArchiveFormatter(lVar3);
      FMemory::operator_delete(lVar3,0x10);
    }
    *(undefined8 *)(param_1 + 0x2b0) = 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x318);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x318) = 0;
  }
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  if (*(int *)(param_1 + 0x1cc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x1c0,0);
  }
  TArray<FGatherableTextData,FDefaultAllocator>::Empty(param_1 + 0x1d0,0);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 8,0);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x18,0);
  }
  FUN_1417097c0(param_1);
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x60) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  if (*(longlong *)(param_1 + 800) != 0) {
    FAsyncPackage::DetachLinker();
    *(undefined8 *)(param_1 + 800) = 0;
  }
  return;
}



// FUNCTION 141733400 FUN_141733400 body=959 status=ok
// SIG undefined FUN_141733400(void)

void FUN_141733400(longlong param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined8 local_res8;
  undefined1 local_res18 [16];
  undefined2 *local_68;
  int local_60;
  longlong local_58 [2];
  longlong local_48 [2];
  
  lVar9 = *(longlong *)(param_1 + 0x18) + (longlong)param_2 * 0x88;
  cVar3 = UObjectBase::IsValidLowLevel(*(undefined8 *)(lVar9 + 0x48));
  puVar7 = &DAT_143f3eda8;
  if (cVar3 == '\0') {
    puVar4 = (undefined8 *)FName::ToString(lVar9,local_48);
    if (*(int *)(puVar4 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*puVar4;
    }
    local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x18);
    FName::ToString(&local_res8,&local_68);
    puVar11 = &DAT_143f3eda8;
    if (local_60 != 0) {
      puVar11 = local_68;
    }
    uVar5 = FLinker::GetExportClassName(param_1,local_res18,param_2);
    puVar4 = (undefined8 *)FName::ToString(uVar5,local_58);
    if (*(int *)(puVar4 + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*puVar4;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0x121a,L"Linker object %s %s.%s is invalid",puVar10,puVar11,puVar8);
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    if (local_68 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    puVar4 = (undefined8 *)FName::ToString(lVar9,local_58);
    if (*(int *)(puVar4 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*puVar4;
    }
    local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x18);
    FName::ToString(&local_res8,&local_68);
    puVar11 = &DAT_143f3eda8;
    if (local_60 != 0) {
      puVar11 = local_68;
    }
    uVar5 = FLinker::GetExportClassName(param_1,local_res18,param_2);
    puVar4 = (undefined8 *)FName::ToString(uVar5,local_48);
    if (*(int *)(puVar4 + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*puVar4;
    }
    FDebug::AssertFailed
              (&DAT_144d08837,"Unknown",0x121a,L"Linker object %s %s.%s is invalid",puVar10,puVar11,
               puVar8);
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    if (local_68 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_58[0] != 0) {
      FMemory::Free();
    }
  }
  lVar6 = FUN_1417a53c0(*(undefined8 *)(lVar9 + 0x48));
  if (lVar6 == 0) {
    uVar1 = *(uint *)(*(longlong *)(lVar9 + 0x48) + 8);
    if (((uVar1 >> 0x1a & 1) != 0) ||
       (((*(uint *)(*(longlong *)(*(longlong *)(lVar9 + 0x48) + 0x10) + 8) >> 0x1a & 1) != 0 &&
        ((uVar1 >> 4 & 1) != 0)))) {
      bVar2 = true;
      goto LAB_141733601;
    }
  }
  bVar2 = false;
LAB_141733601:
  if ((lVar6 != param_1) && (!bVar2)) {
    puVar4 = (undefined8 *)FName::ToString(lVar9,local_58);
    if (*(int *)(puVar4 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*puVar4;
    }
    local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x18);
    FName::ToString(&local_res8,&local_68);
    puVar11 = &DAT_143f3eda8;
    if (local_60 != 0) {
      puVar11 = local_68;
    }
    uVar5 = FLinker::GetExportClassName(param_1,local_res18,param_2);
    puVar4 = (undefined8 *)FName::ToString(uVar5,local_48);
    if (*(int *)(puVar4 + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*puVar4;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0x122a,L"Linker object %s %s.%s mislinked!",puVar10,puVar11,puVar8);
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    if (local_68 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    puVar4 = (undefined8 *)FName::ToString(lVar9,local_58);
    if (*(int *)(puVar4 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*puVar4;
    }
    local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x18);
    FName::ToString(&local_res8,&local_68);
    puVar11 = &DAT_143f3eda8;
    if (local_60 != 0) {
      puVar11 = local_68;
    }
    uVar5 = FLinker::GetExportClassName(param_1,local_res18,param_2);
    puVar4 = (undefined8 *)FName::ToString(uVar5,local_48);
    if (*(int *)(puVar4 + 1) != 0) {
      puVar7 = (undefined2 *)*puVar4;
    }
    FDebug::AssertFailed
              (&DAT_144d08977,"Unknown",0x122a,L"Linker object %s %s.%s mislinked!",puVar7,puVar11,
               puVar8);
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    if (local_68 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_58[0] != 0) {
      FMemory::Free();
    }
  }
  FUN_1417a5490(*(undefined8 *)(lVar9 + 0x48));
  FUN_1417a7660(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x48 + (longlong)param_2 * 0x88),0,
                0xffffffff,1);
  return;
}



// FUNCTION 1417337c0 FUN_1417337c0 body=715 status=ok
// SIG undefined FUN_1417337c0(void)

/* WARNING: Removing unreachable block (ram,0x0001417339b4) */
/* WARNING: Removing unreachable block (ram,0x0001417339c3) */

void FUN_1417337c0(undefined8 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong *puVar1;
  int iVar2;
  undefined8 uVar3;
  BOOL BVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x23);
  BVar4 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar4 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (*(char *)(param_1 + 0x2a) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001417337f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
  *(int *)((longlong)param_1 + 0x154) = *(int *)((longlong)param_1 + 0x154) + 1;
  LeaveCriticalSection(lpCriticalSection);
  plVar7 = (longlong *)0x0;
  do {
    uVar5 = FUN_141594c40(param_1 + 2);
    plVar8 = plVar7;
    if (uVar5 != 0) {
      plVar8 = *(longlong **)
                ((&DAT_1468a81f8)[uVar5 >> 0xe] + 8 + (ulonglong)(uVar5 & 0x3fff) * 0x18);
      FLockFreeLinkPolicy::FreeLockFreeLink(uVar5);
    }
    while (plVar8 == (longlong *)0x0) {
      if (*(char *)(param_1 + 0x2a) != '\0') {
        return;
      }
      BVar4 = TryEnterCriticalSection(lpCriticalSection);
      if (BVar4 == 0) {
        EnterCriticalSection(lpCriticalSection);
      }
      if (*(char *)(param_1 + 0x2a) != '\0') goto LAB_141733a5d;
      uVar5 = FUN_141594c40(param_1 + 2);
      plVar8 = plVar7;
      if (uVar5 != 0) {
        plVar8 = *(longlong **)
                  ((&DAT_1468a81f8)[uVar5 >> 0xe] + 8 + (ulonglong)(uVar5 & 0x3fff) * 0x18);
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar5);
      }
      plVar6 = plVar7;
      if (plVar8 == (longlong *)0x0) {
        puVar1 = param_1 + 0x28;
        if (*(int *)(param_1 + 0x29) + 1 == *(int *)((longlong)param_1 + 0x154)) {
          *(undefined1 *)(param_1 + 0x2a) = 1;
          puVar9 = (undefined8 *)*puVar1;
          plVar8 = (longlong *)((longlong)*(int *)(param_1 + 0x29) & 0x1fffffffffffffff);
          if (puVar9 + *(int *)(param_1 + 0x29) < puVar9) {
            plVar8 = plVar7;
          }
          if (plVar8 != (longlong *)0x0) {
            do {
              (**(code **)(*(longlong *)*puVar9 + 0x10))();
              plVar7 = (longlong *)((longlong)plVar7 + 1);
              puVar9 = puVar9 + 1;
            } while (plVar7 != plVar8);
          }
          *(undefined4 *)(param_1 + 0x29) = 0;
          if (*(int *)((longlong)param_1 + 0x14c) != 0) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x28,0);
          }
LAB_141733a5d:
          LeaveCriticalSection(lpCriticalSection);
          return;
        }
        plVar6 = (longlong *)FUN_1415ab270(0);
        iVar2 = *(int *)(param_1 + 0x29);
        *(int *)(param_1 + 0x29) = iVar2 + 1;
        if (*(int *)((longlong)param_1 + 0x14c) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar1,iVar2);
        }
        *(longlong **)(*puVar1 + (longlong)iVar2 * 8) = plVar6;
      }
      LeaveCriticalSection(lpCriticalSection);
      if (plVar8 != (longlong *)0x0) break;
      (**(code **)(*plVar6 + 0x20))(plVar6,0xffffffff,0);
      FUN_1415b5910(plVar6);
      uVar5 = FUN_141594c40(param_1 + 2);
      plVar8 = plVar7;
      if (uVar5 != 0) {
        plVar8 = *(longlong **)
                  ((&DAT_1468a81f8)[uVar5 >> 0xe] + 8 + (ulonglong)(uVar5 & 0x3fff) * 0x18);
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar5);
      }
    }
    FUN_1417414f0(*param_1,plVar8);
    uVar3 = param_1[1];
    *(undefined4 *)(plVar8 + 1) = 0;
    if ((*(int *)((longlong)plVar8 + 0xc) < 0) && (*(int *)((longlong)plVar8 + 0xc) != 0)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar8,0);
    }
    FUN_1415b1b00(uVar3);
  } while( true );
}



// FUNCTION 141733a90 DoesPackageExistForGetPackageLinker body=318 status=ok
// SIG undefined DoesPackageExistForGetPackageLinker(void)

undefined8
DoesPackageExistForGetPackageLinker(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined1 local_res8 [8];
  longlong local_38 [4];
  
  if (*(int *)(param_1 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*param_1;
  }
  plVar3 = (longlong *)FName::FName(local_res8,puVar6,1);
  lVar1 = *plVar3;
  plVar3 = (longlong *)FUN_14178d740();
  if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
    plVar4 = (longlong *)plVar3[8];
    if ((longlong *)plVar3[8] == (longlong *)0x0) {
      plVar4 = plVar3 + 7;
    }
    iVar2 = *(int *)((longlong)plVar4 +
                    ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                    (longlong)(int)plVar3[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*plVar3 + (longlong)iVar2 * 0x18) == lVar1) {
          if (iVar2 != -1) {
            local_38[0] = 0;
            local_38[1] = 0;
            plVar3 = (longlong *)FUN_1416fecc0(local_38 + 2,param_1,local_38);
            if (param_3 != plVar3) {
              if (*param_3 != 0) {
                FMemory::Free();
              }
              *param_3 = *plVar3;
              *plVar3 = 0;
              *(int *)(param_3 + 1) = (int)plVar3[1];
              *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar3 + 0xc);
              plVar3[1] = 0;
            }
            if (local_38[2] != 0) {
              FMemory::Free();
            }
            if (local_38[0] != 0) {
              FMemory::Free();
            }
            return 1;
          }
          break;
        }
        iVar2 = *(int *)(*plVar3 + 0x10 + (longlong)iVar2 * 0x18);
      } while (iVar2 != -1);
    }
  }
  uVar5 = FUN_1416f0740(param_1,param_2,param_3,1);
  return uVar5;
}



// FUNCTION 141733bd0 FUN_141733bd0 body=1301 status=ok
// SIG undefined FUN_141733bd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141733bd0(undefined8 param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  undefined1 auStack_108 [32];
  int local_e8;
  int local_e0;
  undefined1 local_d8 [8];
  longlong local_d0;
  undefined8 local_c8;
  int local_c0;
  uint local_b8;
  int local_b4;
  uint *local_b0;
  undefined8 local_a8;
  uint *local_a0;
  undefined8 local_98;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  undefined1 local_50 [8];
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_98 = param_1;
  if (DAT_1469e76c0 == 0) {
    DAT_1469e76c0 = FUN_1417380b0();
  }
  lVar9 = DAT_1469e76c0;
  iVar15 = 0;
  local_58 = 0xffffffff;
  local_d0 = 0;
  local_c8 = 0;
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_54 = 0;
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  iVar16 = iVar15;
  do {
    LOCK();
    uVar14 = *(ulonglong *)(lVar9 + 8);
    if (uVar14 == 0) {
      *(ulonglong *)(lVar9 + 8) = 0;
      uVar14 = 0;
    }
    UNLOCK();
    uVar5 = (uint)uVar14;
    while (uVar2 = uVar5 & 0x3ffffff, (uVar14 & 0x3ffffff) != 0) {
      uVar11 = (uVar14 & 0xfffffffffc000000) + 0x4000000;
      if (uVar11 < (uVar14 & 0xfffffffffc000000)) {
        LockFreeTagCounterHasOverflowed();
      }
      lVar6 = 0;
      if (uVar2 != 0) {
        lVar6 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
      }
      LOCK();
      bVar17 = uVar14 == *(ulonglong *)(lVar9 + 8);
      if (bVar17) {
        *(ulonglong *)(lVar9 + 8) = *(uint *)(lVar6 + 0x10) | uVar11;
      }
      UNLOCK();
      if (bVar17) {
        *(undefined4 *)(lVar6 + 0x10) = 0;
        break;
      }
      LOCK();
      uVar14 = *(ulonglong *)(lVar9 + 8);
      if (uVar14 == 0) {
        *(ulonglong *)(lVar9 + 8) = 0;
        uVar14 = 0;
      }
      UNLOCK();
      uVar5 = (uint)uVar14;
    }
    if (uVar2 == 0) {
LAB_141733e17:
      local_c0 = iVar15;
      while ((int)local_c8 != 0) {
        iVar15 = (int)local_c8 + -1;
        uVar1 = *(undefined8 *)(local_d0 + (longlong)iVar15 * 8);
        iVar4 = ((int)local_c8 - iVar15) + -1;
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(local_d0 + (longlong)iVar15 * 8),
                     (void *)(local_d0 + (longlong)(int)local_c8 * 8),(longlong)iVar4 << 3);
        }
        local_c8 = CONCAT44(local_c8._4_4_,iVar15);
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(&local_d0);
        uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
        if (uVar5 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
        }
        *(undefined8 *)(lVar6 + 8) = uVar1;
        do {
          LOCK();
          uVar14 = *(ulonglong *)(lVar9 + 8);
          if (uVar14 == 0) {
            *(ulonglong *)(lVar9 + 8) = 0;
            uVar14 = 0;
          }
          UNLOCK();
          uVar11 = (uVar14 & 0xfffffffffc000000) + 0x4000000;
          if (uVar11 < (uVar14 & 0xfffffffffc000000)) {
            LockFreeTagCounterHasOverflowed();
          }
          lVar6 = 0;
          if (uVar5 != 0) {
            lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
          }
          *(uint *)(lVar6 + 0x10) = (uint)uVar14 & 0x3ffffff;
          LOCK();
          bVar17 = uVar14 == *(ulonglong *)(lVar9 + 8);
          if (bVar17) {
            *(ulonglong *)(lVar9 + 8) = uVar11 | uVar5;
          }
          UNLOCK();
        } while (!bVar17);
        param_1 = local_98;
      }
      uVar14 = ((longlong)iVar16 & 0x1fffffffffffffffU) >> 7;
      local_e8 = 1;
      if (0 < local_c0) {
        local_e8 = local_c0;
      }
      local_e0 = (int)((longlong)
                       ((ulonglong)(uint)((int)uVar14 >> 0x1f) << 0x20 | uVar14 & 0xffffffff) /
                      (longlong)local_e8);
      local_e8 = iVar16 / local_e8;
      FOutputDevice::LogfImpl
                (param_1,L"GCPoolStats: %d Pools totaling %d KB. Avg: Objs=%d, Size=%d KB.",local_c0
                );
      uVar11 = 0;
      local_b0 = (uint *)0x0;
      local_a8 = 0;
      TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
      GetKeys<FDefaultAllocator>(&local_88,&local_b0);
      puVar3 = local_b0;
      lVar9 = (longlong)(int)local_a8;
      local_d8[0] = 0;
      FUN_141729260(local_b0,lVar9,0,local_d8);
      uVar14 = (ulonglong)((longlong)(puVar3 + lVar9) + (3 - (longlong)puVar3)) >> 2;
      if (puVar3 + lVar9 < puVar3) {
        uVar14 = uVar11;
      }
      puVar10 = puVar3;
      uVar13 = uVar11;
      if (uVar14 != 0) {
        do {
          uVar5 = *puVar10;
          if ((int)local_80 != local_54) {
            puVar8 = local_50;
            if (local_48 != (undefined1 *)0x0) {
              puVar8 = local_48;
            }
            iVar16 = *(int *)(puVar8 + (longlong)(int)(local_40 - 1U & uVar5) * 4);
            while (iVar16 != -1) {
              lVar9 = (longlong)iVar16;
              if (*(uint *)(local_88 + lVar9 * 0x10) == uVar5) {
                uVar7 = local_88 + lVar9 * 0x10;
                if (iVar16 != -1) goto LAB_141734046;
                break;
              }
              iVar16 = *(int *)(local_88 + lVar9 * 0x10 + 8);
            }
          }
          uVar7 = uVar11;
LAB_141734046:
          local_e8 = (int)(((longlong)(int)uVar5 & 0x1fffffffffffffffU) >> 7);
          local_e0 = local_e8 * *(int *)(uVar7 + 4);
          FOutputDevice::LogfImpl(param_1,L"\t%d\t\t(%d Items @ %d KB = %d KB)");
          puVar10 = puVar10 + 1;
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar14);
      }
      if (puVar3 != (uint *)0x0) {
        FMemory::Free(puVar3);
      }
      local_40 = 0;
      if (local_48 != (undefined1 *)0x0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_88);
      if (local_d0 != 0) {
        FMemory::Free();
      }
      return;
    }
    lVar6 = *(longlong *)((&DAT_1468a81f8)[uVar2 >> 0xe] + 8 + (ulonglong)(uVar5 & 0x3fff) * 0x18);
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar2);
    uVar14 = local_c8;
    if (lVar6 == 0) goto LAB_141733e17;
    lVar12 = (longlong)(int)local_c8;
    iVar4 = (int)local_c8 + 1;
    local_c8 = CONCAT44(local_c8._4_4_,iVar4);
    if (local_c8._4_4_ < iVar4) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_d0,uVar14 & 0xffffffff);
    }
    *(longlong *)(local_d0 + lVar12 * 8) = lVar6;
    local_b8 = *(uint *)(lVar6 + 0xc);
    if ((int)local_80 != local_54) {
      puVar8 = local_50;
      if (local_48 != (undefined1 *)0x0) {
        puVar8 = local_48;
      }
      iVar4 = *(int *)(puVar8 + (longlong)(int)(local_40 - 1U & local_b8) * 4);
      while (iVar4 != -1) {
        lVar12 = (longlong)iVar4;
        if (*(uint *)(local_88 + lVar12 * 0x10) == local_b8) {
          if ((iVar4 != -1) && (lVar12 = local_88 + lVar12 * 0x10, lVar12 != 0)) goto LAB_141733e00;
          break;
        }
        iVar4 = *(int *)(local_88 + lVar12 * 0x10 + 8);
      }
    }
    local_a0 = &local_b8;
    FUN_14058d450(&local_88,&local_b4,&local_a0,0);
    lVar12 = (longlong)local_b4 * 0x10 + local_88;
LAB_141733e00:
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
    iVar15 = iVar15 + 1;
    iVar16 = iVar16 + *(int *)(lVar6 + 0x1c) + *(int *)(lVar6 + 0xc);
  } while( true );
}



// FUNCTION 1417340f0 EmitObjectArrayReference body=80 status=ok
// SIG undefined EmitObjectArrayReference(void)

void UClass::EmitObjectArrayReference(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1b8);
  *(int *)(param_1 + 0x1b8) = iVar1 + 1;
  if (*(int *)(param_1 + 0x1bc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x1b0),iVar1);
  }
  *(uint *)(*(longlong *)(param_1 + 0x1b0) + (longlong)iVar1 * 4) = param_2 << 0xc | 0x300;
  return;
}



// FUNCTION 141734140 EmitObjectReference body=84 status=ok
// SIG undefined EmitObjectReference(void)

void UClass::EmitObjectReference(longlong param_1,int param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1b8);
  *(int *)(param_1 + 0x1b8) = iVar1 + 1;
  if (*(int *)(param_1 + 0x1bc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x1b0),iVar1);
  }
  *(uint *)(*(longlong *)(param_1 + 0x1b0) + (longlong)iVar1 * 4) =
       (param_2 << 4 | param_4 & 0xf) << 8;
  return;
}



// FUNCTION 1417341a0 EmitPointer body=108 status=ok
// SIG undefined EmitPointer(void)

void FGCReferenceTokenStream::EmitPointer(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 2;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 2) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  lVar2 = *param_1;
  *(int *)(lVar2 + (longlong)iVar1 * 4) = (int)param_2;
  *(int *)(lVar2 + 4 + (longlong)iVar1 * 4) = (int)((ulonglong)param_2 >> 0x20);
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar1 * 4) = 0xa00;
  return;
}



// FUNCTION 141734210 FUN_141734210 body=989 status=ok
// SIG undefined FUN_141734210(void)

void FUN_141734210(longlong param_1,longlong param_2,int param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  longlong local_38 [2];
  longlong local_28 [2];
  
  cVar7 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x350))
                    (*(longlong **)(param_1 + 0x70),param_4);
  if (cVar7 != '\0') {
    lVar9 = UStructProperty::GetPrivateStaticClass();
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x10);
    if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
        lVar9 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      iVar2 = *(int *)(param_1 + 0x44);
      plVar1 = (longlong *)(param_2 + 0x1b0);
      iVar8 = *(int *)(param_2 + 0x1b8);
      *(int *)(param_2 + 0x1b8) = iVar8 + 1;
      if (*(int *)(param_2 + 0x1bc) < iVar8 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar8);
      }
      *(uint *)(*plVar1 + (longlong)iVar8 * 4) = (iVar2 + param_3) * 0x1000 | 0x400;
      iVar2 = *(int *)(param_2 + 0x1b8);
      uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x34);
      *(int *)(param_2 + 0x1b8) = iVar2 + 1;
      if (*(int *)(param_2 + 0x1bc) < iVar2 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
      }
      *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
      iVar2 = *(int *)(param_2 + 0x1b8);
      *(int *)(param_2 + 0x1b8) = iVar2 + 1;
      if (*(int *)(param_2 + 0x1bc) < iVar2 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
      }
      *(undefined4 *)((longlong)iVar2 * 4 + *plVar1) = 0xdeadbabe;
      (**(code **)(**(longlong **)(param_1 + 0x70) + 0x360))
                (*(longlong **)(param_1 + 0x70),param_2,0,param_4);
      uVar4 = *(uint *)(*plVar1 + -4 + (longlong)*(int *)(param_2 + 0x1b8) * 4);
      *(uint *)(*plVar1 + (longlong)*(int *)(param_2 + 0x1b8) * 4 + -4) =
           (uVar4 + 1 ^ uVar4) & 0xff ^ uVar4;
      *(uint *)((longlong)iVar2 * 4 + *plVar1) =
           (*(int *)(param_2 + 0x1b8) - iVar2) * 0x100 |
           *(int *)(*plVar1 + -4 + (longlong)*(int *)(param_2 + 0x1b8) * 4) - 1U & 0xff;
    }
    else {
      lVar9 = UObjectProperty::GetPrivateStaticClass();
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x10);
      if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
          lVar9 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        iVar2 = *(int *)(param_1 + 0x44);
        iVar8 = *(int *)(param_2 + 0x1b8);
        *(int *)(param_2 + 0x1b8) = iVar8 + 1;
        if (*(int *)(param_2 + 0x1bc) < iVar8 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2 + 0x1b0,iVar8);
        }
        *(uint *)(*(longlong *)(param_2 + 0x1b0) + (longlong)iVar8 * 4) =
             (iVar2 + param_3) * 0x1000 | 0x300;
      }
      else {
        lVar9 = UInterfaceProperty::GetPrivateStaticClass();
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x10);
        if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
            lVar9 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          iVar2 = *(int *)(param_1 + 0x44);
          plVar1 = (longlong *)(param_2 + 0x1b0);
          iVar8 = *(int *)(param_2 + 0x1b8);
          *(int *)(param_2 + 0x1b8) = iVar8 + 1;
          if (*(int *)(param_2 + 0x1bc) < iVar8 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar8);
          }
          *(uint *)(*plVar1 + (longlong)iVar8 * 4) = (iVar2 + param_3) * 0x1000 | 0x400;
          FGCReferenceTokenStream::EmitStride
                    (plVar1,*(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x34));
          iVar8 = FGCReferenceTokenStream::EmitSkipIndexPlaceholder(plVar1);
          iVar2 = *(int *)(param_2 + 0x1b8);
          *(int *)(param_2 + 0x1b8) = iVar2 + 1;
          if (*(int *)(param_2 + 0x1bc) < iVar2 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
          }
          *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = 0x100;
          uVar4 = *(uint *)(*plVar1 + -4 + (longlong)*(int *)(param_2 + 0x1b8) * 4);
          *(uint *)(*plVar1 + (longlong)*(int *)(param_2 + 0x1b8) * 4 + -4) =
               (uVar4 + 1 ^ uVar4) & 0xff ^ uVar4;
          *(uint *)(*plVar1 + (longlong)iVar8 * 4) =
               (*(int *)(param_2 + 0x1b8) - iVar8) * 0x100 |
               *(int *)(*plVar1 + -4 + (longlong)*(int *)(param_2 + 0x1b8) * 4) - 1U & 0xff;
        }
        else {
          puVar10 = (undefined8 *)UObjectBaseUtility::GetFullName(param_1,local_28,0);
          puVar11 = &DAT_143f3eda8;
          if (*(int *)(puVar10 + 1) == 0) {
            puVar12 = &DAT_143f3eda8;
          }
          else {
            puVar12 = (undefined2 *)*puVar10;
          }
          puVar10 = (undefined8 *)
                    UObjectBaseUtility::GetFullName(*(undefined8 *)(param_1 + 0x70),local_38,0);
          if (*(int *)(puVar10 + 1) == 0) {
            puVar13 = &DAT_143f3eda8;
          }
          else {
            puVar13 = (undefined2 *)*puVar10;
          }
          LowLevelFatalErrorHandler
                    ("Unknown",0x857,
                     L"Encountered unknown property containing object or name reference: %s in %s",
                     puVar13,puVar12);
          if (local_38[0] != 0) {
            FMemory::Free();
          }
          if (local_28[0] != 0) {
            FMemory::Free();
          }
          puVar10 = (undefined8 *)UObjectBaseUtility::GetFullName(param_1,local_38,0);
          if (*(int *)(puVar10 + 1) == 0) {
            puVar12 = &DAT_143f3eda8;
          }
          else {
            puVar12 = (undefined2 *)*puVar10;
          }
          puVar10 = (undefined8 *)
                    UObjectBaseUtility::GetFullName(*(undefined8 *)(param_1 + 0x70),local_28,0);
          if (*(int *)(puVar10 + 1) != 0) {
            puVar11 = (undefined2 *)*puVar10;
          }
          FDebug::AssertFailed
                    (&DAT_144d07226,"Unknown",0x857,
                     L"Encountered unknown property containing object or name reference: %s in %s",
                     puVar11,puVar12);
          if (local_28[0] != 0) {
            FMemory::Free();
          }
          if (local_38[0] != 0) {
            FMemory::Free();
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1417345f0 EmitReferenceInfo body=185 status=ok
// SIG undefined EmitReferenceInfo(void)

void UInterfaceProperty::EmitReferenceInfo(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong *local_18;
  int local_10;
  
  FGCReferenceFixedArrayTokenHelper::FGCReferenceFixedArrayTokenHelper
            (&local_18,param_2,*(int *)(param_1 + 0x44) + param_3,*(undefined4 *)(param_1 + 0x30),
             0x10,param_1);
  iVar1 = *(int *)(param_1 + 0x44);
  iVar2 = *(int *)(param_2 + 0x1b8);
  *(int *)(param_2 + 0x1b8) = iVar2 + 1;
  if (*(int *)(param_2 + 0x1bc) < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2 + 0x1b0,iVar2);
  }
  *(uint *)(*(longlong *)(param_2 + 0x1b0) + (longlong)iVar2 * 4) =
       (iVar1 + param_3) * 0x1000 | 0x100;
  if (1 < local_10) {
    uVar3 = *(uint *)(*local_18 + -4 + (longlong)(int)local_18[1] * 4);
    *(uint *)(*local_18 + (longlong)(int)local_18[1] * 4 + -4) = (uVar3 + 1 ^ uVar3) & 0xff ^ uVar3;
  }
  return;
}



// FUNCTION 1417346b0 FUN_1417346b0 body=130 status=ok
// SIG undefined FUN_1417346b0(void)

void FUN_1417346b0(longlong *param_1,longlong param_2,int param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  
  cVar4 = (**(code **)(*param_1 + 0x350))(param_1,param_4);
  if (cVar4 != '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0x44);
    plVar1 = (longlong *)(param_2 + 0x1b0);
    iVar3 = *(int *)(param_2 + 0x1b8);
    *(int *)(param_2 + 0x1b8) = iVar3 + 1;
    if (*(int *)(param_2 + 0x1bc) < iVar3 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
    }
    *(uint *)(*plVar1 + (longlong)iVar3 * 4) = (iVar2 + param_3) * 0x1000 | 0x800;
    FGCReferenceTokenStream::EmitPointer(plVar1,param_1);
  }
  return;
}



// FUNCTION 141734740 EmitReferenceInfo body=185 status=ok
// SIG undefined EmitReferenceInfo(void)

void UObjectProperty::EmitReferenceInfo(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong *local_18;
  int local_10;
  
  FGCReferenceFixedArrayTokenHelper::FGCReferenceFixedArrayTokenHelper
            (&local_18,param_2,*(int *)(param_1 + 0x44) + param_3,*(undefined4 *)(param_1 + 0x30),8,
             param_1);
  iVar1 = *(int *)(param_1 + 0x44);
  iVar2 = *(int *)(param_2 + 0x1b8);
  *(int *)(param_2 + 0x1b8) = iVar2 + 1;
  if (*(int *)(param_2 + 0x1bc) < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2 + 0x1b0,iVar2);
  }
  *(uint *)(*(longlong *)(param_2 + 0x1b0) + (longlong)iVar2 * 4) =
       (iVar1 + param_3) * 0x1000 | 0x100;
  if (1 < local_10) {
    uVar3 = *(uint *)(*local_18 + -4 + (longlong)(int)local_18[1] * 4);
    *(uint *)(*local_18 + (longlong)(int)local_18[1] * 4 + -4) = (uVar3 + 1 ^ uVar3) & 0xff ^ uVar3;
  }
  return;
}



// FUNCTION 141734800 FUN_141734800 body=132 status=ok
// SIG undefined FUN_141734800(void)

void FUN_141734800(longlong *param_1,longlong param_2,int param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  
  cVar4 = (**(code **)(*param_1 + 0x350))(param_1,param_4);
  if (cVar4 != '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0x44);
    plVar1 = (longlong *)(param_2 + 0x1b0);
    iVar3 = *(int *)(param_2 + 0x1b8);
    *(int *)(param_2 + 0x1b8) = iVar3 + 1;
    if (*(int *)(param_2 + 0x1bc) < iVar3 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
    }
    *(uint *)(*plVar1 + (longlong)iVar3 * 4) = (iVar2 + param_3) * 0x1000 | 0x900;
    FGCReferenceTokenStream::EmitPointer(plVar1,param_1);
  }
  return;
}



// FUNCTION 141734890 FUN_141734890 body=343 status=ok
// SIG undefined FUN_141734890(void)

void FUN_141734890(longlong *param_1,longlong param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *local_18;
  int local_10;
  
  if ((*(byte *)(param_1[0xe] + 0x88) & 0x40) == 0) {
    cVar5 = (**(code **)(*param_1 + 0x350))(param_1,param_4);
    if (cVar5 == '\0') {
      return;
    }
    FGCReferenceFixedArrayTokenHelper::FGCReferenceFixedArrayTokenHelper
              (&local_18,param_2,*(int *)((longlong)param_1 + 0x44) + param_3,(int)param_1[6],
               *(undefined4 *)((longlong)param_1 + 0x34),param_1);
    for (plVar4 = *(longlong **)(param_1[0xe] + 0x58); plVar4 != (longlong *)0x0;
        plVar4 = (longlong *)plVar4[10]) {
      (**(code **)(*plVar4 + 0x360))
                (plVar4,param_2,*(int *)((longlong)param_1 + 0x44) + param_3,param_4);
    }
  }
  else {
    plVar4 = *(longlong **)(param_1[0xe] + 0x90);
    FGCReferenceFixedArrayTokenHelper::FGCReferenceFixedArrayTokenHelper
              (&local_18,param_2,*(int *)((longlong)param_1 + 0x44) + param_3,(int)param_1[6],
               *(undefined4 *)((longlong)param_1 + 0x34),param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x44);
    plVar7 = (longlong *)(param_2 + 0x1b0);
    iVar2 = *(int *)(param_2 + 0x1b8);
    *(int *)(param_2 + 0x1b8) = iVar2 + 1;
    if (*(int *)(param_2 + 0x1bc) < iVar2 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar7,iVar2);
    }
    *(uint *)(*plVar7 + (longlong)iVar2 * 4) = (iVar1 + param_3) * 0x1000 | 0x600;
    uVar6 = (**(code **)(*plVar4 + 0xe0))(plVar4);
    FGCReferenceTokenStream::EmitPointer(plVar7,uVar6);
  }
  if (1 < local_10) {
    uVar3 = *(uint *)(*local_18 + -4 + (longlong)(int)local_18[1] * 4);
    *(uint *)(*local_18 + (longlong)(int)local_18[1] * 4 + -4) = (uVar3 + 1 ^ uVar3) & 0xff ^ uVar3;
  }
  return;
}



// FUNCTION 1417349f0 EmitSkipIndexPlaceholder body=58 status=ok
// SIG undefined EmitSkipIndexPlaceholder(void)

int FGCReferenceTokenStream::EmitSkipIndexPlaceholder(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar1 * 4) = 0xdeadbabe;
  return iVar1;
}



// FUNCTION 141734a30 EmitStride body=64 status=ok
// SIG undefined EmitStride(void)

void FGCReferenceTokenStream::EmitStride(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar1 * 4) = param_2;
  return;
}



// FUNCTION 141734a70 EmitStructArrayBegin body=159 status=ok
// SIG undefined EmitStructArrayBegin(void)

int UClass::EmitStructArrayBegin(longlong param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = (longlong *)(param_1 + 0x1b0);
  iVar2 = *(int *)(param_1 + 0x1b8);
  *(int *)(param_1 + 0x1b8) = iVar2 + 1;
  if (*(int *)(param_1 + 0x1bc) < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(uint *)(*plVar1 + (longlong)iVar2 * 4) = param_2 << 0xc | 0x400;
  iVar2 = *(int *)(param_1 + 0x1b8);
  *(int *)(param_1 + 0x1b8) = iVar2 + 1;
  if (*(int *)(param_1 + 0x1bc) < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = param_4;
  iVar2 = *(int *)(param_1 + 0x1b8);
  *(int *)(param_1 + 0x1b8) = iVar2 + 1;
  if (*(int *)(param_1 + 0x1bc) < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = 0xdeadbabe;
  return iVar2;
}



// FUNCTION 141734b10 FUN_141734b10 body=83 status=ok
// SIG undefined FUN_141734b10(void)

void FUN_141734b10(longlong param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x1b0) + -4 + (longlong)*(int *)(param_1 + 0x1b8) * 4);
  *(uint *)(*(longlong *)(param_1 + 0x1b0) + (longlong)*(int *)(param_1 + 0x1b8) * 4 + -4) =
       (uVar1 + 1 ^ uVar1) & 0xff ^ uVar1;
  *(uint *)(*(longlong *)(param_1 + 0x1b0) + (longlong)param_2 * 4) =
       (*(int *)(param_1 + 0x1b8) - param_2) * 0x100 |
       *(int *)(*(longlong *)(param_1 + 0x1b0) + -4 + (longlong)*(int *)(param_1 + 0x1b8) * 4) - 1U
       & 0xff;
  return;
}



// FUNCTION 141734b70 Empty body=118 status=ok
// SIG undefined Empty(void)

void TArray<FGatherableTextData,FDefaultAllocator>::Empty(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = (longlong *)*param_1;
  for (iVar2 = *(int *)(param_1 + 1); iVar2 != 0; iVar2 = iVar2 + -1) {
    TArray<FTextSourceSiteContext,FDefaultAllocator>::
    ~TArray<FTextSourceSiteContext,FDefaultAllocator>(plVar1 + 0xe);
    FTextSourceData::~FTextSourceData(plVar1 + 2);
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 0x10;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  return;
}



// FUNCTION 141734bf0 Empty body=181 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FUniqueObjectGuid,UObjectBase_const_*>,TDefaultMapHashableKeyFuncs<FUniqueObjectGuid,UObjectBase_const_*,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = ConditionalRehash(param_1,param_2,1);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar5 = 0;
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar5;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar4 + uVar3 * 4) = 0xffffffff;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 141734cb0 Empty body=198 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FPackageIndex,TArray<FName,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong param_1,int param_2)

{
  uint uVar1;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)((longlong)local_1c * 0x20 + *local_38 + 8) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar1 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar1) {
    *(uint *)(param_1 + 0x2c) = uVar1;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  return;
}



// FUNCTION 141734d80 FUN_141734d80 body=302 status=ok
// SIG undefined FUN_141734d80(void)

void FUN_141734d80(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  DWORD *pDVar5;
  longlong *lpTlsValue;
  longlong *plVar6;
  longlong *plVar7;
  
  FUN_1417414f0(param_1[2],param_1[3],param_1 + 6);
  lVar3 = param_1[3];
  plVar7 = (longlong *)0x0;
  uVar4 = param_1[4];
  *(undefined4 *)(lVar3 + 8) = 0;
  if (0x7fffffff < *(uint *)(lVar3 + 0xc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(lVar3,0);
  }
  FUN_1415b1b00(uVar4,lVar3);
  *(undefined1 *)(param_1 + 5) = 0;
  FUN_141591a60(param_1[6],param_2,param_3);
  *param_1 = &PTR_FUN_144d10f10;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar5);
  if (lpTlsValue == (longlong *)0x0) {
    plVar6 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar7;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = 0;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      lpTlsValue = plVar6;
    }
    TlsSetValue(*pDVar5,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar7 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar5 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar7;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 141734eb0 ExecuteTask body=254 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<TFastReferenceCollector<1,FGCReferenceProcessor<1>,FGCCollector<1>,FGCArrayPool,0>::FCollectorTaskProcessorTask>
     ::ExecuteTask(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_1417337c0(param_1[2]);
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_141591a60(param_1[5],param_2,param_3);
  *param_1 = &PTR_FUN_144d10de8;
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



// FUNCTION 141734fb0 FUN_141734fb0 body=1739 status=ok
// SIG undefined FUN_141734fb0(void)

void FUN_141734fb0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6,undefined8 param_7)

{
  int *piVar1;
  void *pvVar2;
  void *pvVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  longlong lVar14;
  undefined2 **ppuVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  void **ppvVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  int iVar23;
  undefined2 *puVar24;
  undefined2 *puVar25;
  longlong lVar26;
  undefined2 *puVar27;
  ulonglong local_res8;
  void *local_d8;
  int local_d0;
  int local_cc;
  undefined2 *local_c8;
  undefined4 local_c0;
  undefined2 *local_b8;
  int local_b0;
  void *local_a8;
  int local_a0;
  undefined2 *local_98;
  int local_90;
  void *local_88;
  int local_80;
  void *local_78 [2];
  longlong local_68 [2];
  longlong local_58 [2];
  undefined1 local_48 [8];
  longlong *local_40;
  
  uVar20 = param_6;
  uVar18 = 0;
  iVar23 = 0;
  local_res8 = local_res8 & 0xffffffff00000000;
  lVar26 = **(longlong **)(param_1 + 0x70);
  if ((param_6 >> 0x1c & 1) == 0) {
    if ((param_6 >> 0x1a & 1) != 0) {
      (**(code **)(lVar26 + 0x2d8))();
      return;
    }
    uVar12 = (**(code **)(lVar26 + 0x3a8))(*(longlong **)(param_1 + 0x70),param_3);
    plVar4 = *(longlong **)(param_1 + 0x78);
    iVar11 = (int)plVar4[9];
    lVar26 = (longlong)iVar11;
    if (0 < iVar11) {
      puVar13 = (ulonglong *)(plVar4[8] + 8);
      uVar22 = uVar18;
      do {
        if (*puVar13 == uVar12) {
          bVar5 = true;
          goto LAB_1417353d6;
        }
        uVar22 = uVar22 + 1;
        puVar13 = puVar13 + 2;
      } while ((longlong)uVar22 < lVar26);
    }
    bVar5 = false;
LAB_1417353d6:
    uVar22 = uVar18;
    if (iVar11 != 0) {
      puVar13 = (ulonglong *)(plVar4[8] + 8);
      uVar22 = *puVar13;
      lVar21 = lVar26;
      if (0 < iVar11) {
        do {
          uVar16 = *puVar13;
          puVar13 = puVar13 + 2;
          if ((longlong)uVar16 <= (longlong)uVar22) {
            uVar16 = uVar22;
          }
          lVar21 = lVar21 + -1;
          uVar22 = uVar16;
        } while (lVar21 != 0);
      }
    }
    if ((!bVar5) || ((uVar12 == uVar22 && ((uVar20 >> 0xb & 1) == 0)))) {
      iVar23 = (int)param_2[1];
      iVar11 = (10 - (uint)(iVar23 != 0)) + iVar23;
      *(int *)(param_2 + 1) = iVar11;
      if (*(int *)((longlong)param_2 + 0xc) < iVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar23);
      }
      lVar26 = (longlong)iVar23 - (ulonglong)(iVar23 != 0);
      builtin_wcsncpy((wchar_t *)(*param_2 + lVar26 * 2),L"(INVALID",8);
      lVar26 = *param_2 + lVar26 * 2;
      *(undefined2 *)(lVar26 + 0x10) = 0x29;
      *(undefined2 *)(lVar26 + 0x12) = 0;
      return;
    }
    if ((uVar20 >> 0x13 & 1) == 0) {
      if (0 < iVar11) {
        puVar13 = (ulonglong *)(plVar4[8] + 8);
        uVar20 = uVar18;
        do {
          iVar11 = (int)uVar20;
          if (*puVar13 == uVar12) goto LAB_14173555c;
          uVar20 = (ulonglong)(iVar11 + 1);
          uVar18 = uVar18 + 1;
          puVar13 = puVar13 + 2;
        } while ((longlong)uVar18 < lVar26);
      }
      iVar11 = -1;
LAB_14173555c:
      FUN_1417392b0(plVar4,&local_88,iVar11);
      pvVar2 = local_88;
      if (local_80 != 0) {
        iVar23 = local_80 + -1;
      }
      if (iVar23 != 0) {
        iVar11 = (int)param_2[1];
        iVar10 = (uint)(iVar11 == 0) + iVar11 + iVar23;
        *(int *)(param_2 + 1) = iVar10;
        if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar11);
        }
        pvVar3 = (void *)(*param_2 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar3,pvVar2,(longlong)iVar23 * 2);
        *(undefined2 *)((longlong)iVar23 * 2 + (longlong)pvVar3) = 0;
      }
      if (local_88 == (void *)0x0) {
        return;
      }
      FMemory::Free(local_88);
      return;
    }
    if (0 < iVar11) {
      puVar13 = (ulonglong *)(plVar4[8] + 8);
      uVar20 = uVar18;
      do {
        iVar11 = (int)uVar20;
        if (*puVar13 == uVar12) goto LAB_141735468;
        uVar20 = (ulonglong)(iVar11 + 1);
        uVar18 = uVar18 + 1;
        puVar13 = puVar13 + 2;
      } while ((longlong)uVar18 < lVar26);
    }
    iVar11 = -1;
LAB_141735468:
    (**(code **)(*plVar4 + 0x288))(plVar4,local_48,iVar11);
    puVar17 = (undefined8 *)FText::ToString(local_48);
    iVar11 = *(int *)(puVar17 + 1) + -1;
    if (*(int *)(puVar17 + 1) == 0) {
      iVar11 = iVar23;
    }
    pvVar2 = (void *)*puVar17;
    if (iVar11 != 0) {
      iVar23 = (int)param_2[1];
      iVar10 = (uint)(iVar23 == 0) + iVar11 + iVar23;
      *(int *)(param_2 + 1) = iVar10;
      if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar23);
      }
      pvVar3 = (void *)(*param_2 + ((longlong)iVar23 - (ulonglong)(iVar23 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar3,pvVar2,(longlong)iVar11 * 2);
      *(undefined2 *)((longlong)iVar11 * 2 + (longlong)pvVar3) = 0;
    }
    if (local_40 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar4 = local_40 + 1;
    lVar26 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar26 != 1) {
      return;
    }
    (**(code **)*local_40)(local_40);
    LOCK();
    piVar1 = (int *)((longlong)local_40 + 0xc);
    iVar23 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar23 != 1) {
      return;
    }
    (**(code **)(*local_40 + 8))(local_40,1);
    return;
  }
  uVar12 = (**(code **)(lVar26 + 0x3a8))();
  lVar26 = *(longlong *)(param_1 + 0x78);
  iVar23 = *(int *)(lVar26 + 0x48);
  uVar20 = uVar18;
  if (iVar23 != 0) {
    uVar20 = *(ulonglong *)(*(longlong *)(lVar26 + 0x40) + 8);
    puVar13 = (ulonglong *)(*(longlong *)(lVar26 + 0x40) + 8);
    lVar21 = (longlong)iVar23;
    if (iVar23 < 1) goto LAB_141735068;
    do {
      uVar22 = *puVar13;
      puVar13 = puVar13 + 2;
      if ((longlong)uVar22 <= (longlong)uVar20) {
        uVar22 = uVar20;
      }
      lVar21 = lVar21 + -1;
      uVar20 = uVar22;
    } while (lVar21 != 0);
  }
  if (0 < iVar23) {
    puVar13 = (ulonglong *)(*(longlong *)(lVar26 + 0x40) + 8);
    do {
      if (*puVar13 == uVar12) {
        bVar5 = true;
        goto LAB_14173506a;
      }
      uVar18 = uVar18 + 1;
      puVar13 = puVar13 + 2;
    } while ((longlong)uVar18 < (longlong)iVar23);
  }
LAB_141735068:
  bVar5 = false;
LAB_14173506a:
  lVar26 = *(longlong *)(lVar26 + 0x10);
  uVar18 = uVar20;
  if (bVar5) {
    uVar18 = uVar12;
  }
  lVar14 = UEnum::GetPrivateStaticClass();
  lVar21 = *(longlong *)(param_1 + 0x78);
  if (lVar26 == lVar14) {
    if (*(int *)(lVar21 + 0x38) < 2) {
      param_6 = *(ulonglong *)(lVar21 + 0x18);
      FName::ToString(&param_6);
      ppvVar19 = local_78;
      bVar7 = true;
      bVar5 = false;
    }
    else {
      iVar23 = *(int *)(lVar21 + 0x38);
      local_d8 = (void *)0x0;
      pvVar2 = *(void **)(lVar21 + 0x30);
      local_d0 = iVar23;
      if (iVar23 == 0) {
        local_cc = iVar23;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_d8,iVar23,0);
        _guard_xfg_dispatch_icall_nop(local_d8,pvVar2,(longlong)iVar23 * 2);
      }
      ppvVar19 = &local_d8;
      bVar7 = false;
      bVar5 = true;
    }
    bVar9 = false;
    bVar8 = false;
    bVar6 = true;
    puVar27 = *ppvVar19;
    *ppvVar19 = (void *)0x0;
    local_c0 = *(undefined4 *)(ppvVar19 + 1);
    ppuVar15 = &local_c8;
    local_c8 = puVar27;
    ppvVar19[1] = (void *)0x0;
  }
  else {
    local_res8 = *(ulonglong *)(lVar21 + 0x18);
    FName::ToString(&local_res8,local_68);
    ppuVar15 = (undefined2 **)UnicodeToCPPIdentifier(local_58,local_68,0,&DAT_144d0dbc8);
    bVar9 = true;
    bVar8 = true;
    bVar7 = false;
    bVar5 = false;
    bVar6 = false;
    puVar27 = *ppuVar15;
  }
  *ppuVar15 = (undefined2 *)0x0;
  param_6 = CONCAT44(param_6._4_4_,*(undefined4 *)(ppuVar15 + 1));
  ppuVar15[1] = (undefined2 *)0x0;
  if ((bVar6) && (local_c8 != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  if ((bVar5) && (local_d8 != (void *)0x0)) {
    FMemory::Free();
  }
  if ((bVar7) && (local_78[0] != (void *)0x0)) {
    FMemory::Free();
  }
  if ((bVar8) && (local_58[0] != 0)) {
    FMemory::Free();
  }
  if ((bVar9) && (local_68[0] != 0)) {
    FMemory::Free();
  }
  if (uVar18 == uVar20) {
    puVar24 = &DAT_143f3eda8;
    if ((int)param_6 != 0) {
      puVar24 = puVar27;
    }
    FString::PrintfImpl(&local_b8,L"(%s)(%ull)",puVar24,uVar12);
    puVar24 = local_b8;
    if (local_b0 == 0) {
      iVar23 = 0;
    }
    else {
      iVar23 = local_b0 + -1;
    }
    local_98 = local_b8;
    if (iVar23 != 0) {
      iVar11 = (int)param_2[1];
      iVar10 = (uint)(iVar11 == 0) + iVar11 + iVar23;
      *(int *)(param_2 + 1) = iVar10;
      if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar11);
      }
      pvVar2 = (void *)(*param_2 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar2,puVar24,(longlong)iVar23 * 2);
      *(undefined2 *)((longlong)iVar23 * 2 + (longlong)pvVar2) = 0;
      local_98 = local_b8;
    }
  }
  else {
    lVar26 = *(longlong *)(param_1 + 0x78);
    uVar20 = 0;
    iVar23 = 0;
    if (0 < *(int *)(lVar26 + 0x48)) {
      puVar13 = (ulonglong *)(*(longlong *)(lVar26 + 0x40) + 8);
      uVar12 = uVar20;
      do {
        iVar11 = (int)uVar12;
        if (*puVar13 == uVar18) goto LAB_1417352b8;
        uVar12 = (ulonglong)(iVar11 + 1);
        uVar20 = uVar20 + 1;
        puVar13 = puVar13 + 2;
      } while ((longlong)uVar20 < (longlong)*(int *)(lVar26 + 0x48));
    }
    iVar11 = -1;
LAB_1417352b8:
    FUN_1417392b0(lVar26,&local_98,iVar11);
    puVar24 = &DAT_143f3eda8;
    if (local_90 != 0) {
      puVar24 = local_98;
    }
    puVar25 = &DAT_143f3eda8;
    if ((int)param_6 != 0) {
      puVar25 = puVar27;
    }
    FString::PrintfImpl(&local_a8,L"%s::%s",puVar25,puVar24);
    pvVar2 = local_a8;
    if (local_a0 != 0) {
      iVar23 = local_a0 + -1;
    }
    if (iVar23 != 0) {
      iVar11 = (int)param_2[1];
      iVar10 = (uint)(iVar11 == 0) + iVar11 + iVar23;
      *(int *)(param_2 + 1) = iVar10;
      if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar11);
      }
      pvVar3 = (void *)(*param_2 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar3,pvVar2,(longlong)iVar23 * 2);
      *(undefined2 *)((longlong)iVar23 * 2 + (longlong)pvVar3) = 0;
    }
    if (local_a8 != (void *)0x0) {
      FMemory::Free(local_a8);
    }
  }
  if (local_98 != (undefined2 *)0x0) {
    FMemory::Free(local_98);
  }
  if (puVar27 != (undefined2 *)0x0) {
    FMemory::Free(puVar27);
  }
  return;
}



// FUNCTION 141735680 ExportTextItem body=82 status=ok
// SIG undefined ExportTextItem(void)

void UProperty::ExportTextItem(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject/UnrealType.h",
             0x134,L"Pure virtual not implemented (%s)",L"UProperty::ExportTextItem");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject/UnrealType.h",
             0x134,L"Pure virtual not implemented (%s)");
  return;
}



// FUNCTION 1417356e0 FUN_1417356e0 body=2369 status=ok
// SIG undefined FUN_1417356e0(void)

char FUN_1417356e0(LARGE_INTEGER param_1)

{
  short *psVar1;
  undefined4 uVar2;
  int iVar3;
  BOOL BVar4;
  undefined8 *puVar5;
  undefined1 **ppuVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 **ppuVar9;
  undefined1 **ppuVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  LARGE_INTEGER LVar18;
  undefined1 **ppuVar19;
  bool bVar20;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  uint local_res18 [2];
  uint local_res20 [2];
  undefined1 **local_f8;
  undefined8 local_f0;
  undefined1 **local_e8;
  undefined8 local_e0;
  undefined1 **local_d8;
  ulonglong local_d0;
  undefined1 **local_c8;
  undefined8 local_c0;
  undefined1 **local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  uint *local_a0;
  undefined1 local_98 [8];
  undefined1 **local_90;
  ulonglong local_88;
  undefined1 **local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60 [4];
  undefined1 **ppuVar17;
  
  ppuVar10 = (undefined1 **)0x0;
  iVar16 = 0;
  local_res8 = param_1;
  if (*(char *)(param_1.QuadPart + 0x764) == '\0') {
    iVar12 = 1;
    if ((*(byte *)(param_1.QuadPart + 0x228) & 8) != 0) {
      local_68 = param_1.QuadPart + 0x2c8;
      FUN_1406c5d90(local_68,*(int *)(param_1.QuadPart + 0x10) + *(int *)(param_1.QuadPart + 0x20));
      if (0 < *(int *)(param_1.QuadPart + 0x20)) {
        local_a8 = local_98;
        local_a0 = local_res18;
        local_res10.s.LowPart = 1;
        ppuVar6 = ppuVar10;
        ppuVar17 = ppuVar10;
        LVar18 = param_1;
        do {
          do {
            iVar3 = (int)ppuVar17;
            lVar11 = (longlong)iVar12 * 0x88 + *(longlong *)(LVar18.QuadPart + 0x18);
            ppuVar9 = ppuVar6;
            if ((iVar3 != 0) && (0 < iVar3 + -1)) {
              uVar13 = iVar3 + 1;
              local_d8 = (undefined1 **)0x0;
              local_d0 = (ulonglong)uVar13;
              if (0 < (int)uVar13) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
                uVar13 = (uint)local_d0;
              }
              ppuVar9 = local_d8;
              ppuVar17 = (undefined1 **)(ulonglong)uVar13;
              *(short *)local_d8 = 0x2e;
              _guard_xfg_dispatch_icall_nop
                        ((short *)((longlong)local_d8 + 2),ppuVar6,((longlong)iVar3 + -1) * 2);
              *(short *)((longlong)ppuVar9 + (longlong)iVar3 * 2) = 0;
              local_d8 = (undefined1 **)0x0;
              local_d0 = 0;
              if (ppuVar6 != (undefined1 **)0x0) {
                FMemory::Free(ppuVar6);
              }
            }
            puVar5 = (undefined8 *)FName::ToString(lVar11 + -0x88);
            uVar13 = *(uint *)(puVar5 + 1);
            iVar12 = (int)ppuVar17;
            if ((int)uVar13 < 2) {
              local_90 = (undefined1 **)0x0;
              local_88 = CONCAT44(local_88._4_4_,iVar12);
              ppuVar6 = ppuVar10;
              if (iVar12 != 0) {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_90,ppuVar17,0);
                ppuVar6 = local_90;
                _guard_xfg_dispatch_icall_nop(local_90,ppuVar9,(longlong)iVar12 * 2);
                ppuVar17 = (undefined1 **)(local_88 & 0xffffffff);
              }
            }
            else {
              iVar3 = iVar12 + -1;
              if (iVar12 == 0) {
                iVar3 = iVar16;
              }
              if ((uVar13 != 0) || (iVar12 = 1, iVar3 == 0)) {
                iVar12 = iVar16;
              }
              local_b8 = (undefined1 **)*puVar5;
              *puVar5 = 0;
              local_b0._4_4_ = *(int *)((longlong)puVar5 + 0xc);
              puVar5[1] = 0;
              if (local_b0._4_4_ < (int)(iVar12 + iVar3 + uVar13)) {
                local_b0._0_4_ = uVar13;
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_b8);
                uVar13 = (uint)local_b0;
              }
              ppuVar17 = (undefined1 **)(ulonglong)uVar13;
              ppuVar6 = local_b8;
              if (iVar3 != 0) {
                uVar15 = (uint)(uVar13 == 0) + iVar3 + uVar13;
                local_b0 = CONCAT44(local_b0._4_4_,uVar15);
                if (local_b0._4_4_ < (int)uVar15) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,ppuVar17);
                  uVar15 = (uint)local_b0;
                }
                ppuVar6 = local_b8;
                ppuVar17 = (undefined1 **)(ulonglong)uVar15;
                psVar1 = (short *)((longlong)local_b8 +
                                  ((longlong)(int)uVar13 - (ulonglong)(uVar13 != 0)) * 2);
                _guard_xfg_dispatch_icall_nop(psVar1,ppuVar9,(longlong)iVar3 * 2);
                psVar1[iVar3] = 0;
              }
              local_b8 = (undefined1 **)0x0;
              local_b0 = 0;
            }
            iVar3 = (int)ppuVar17;
            if (ppuVar9 != (undefined1 **)0x0) {
              FMemory::Free(ppuVar9);
            }
            local_90 = (undefined1 **)0x0;
            local_88 = 0;
            if (local_60[0] != 0) {
              FMemory::Free();
            }
            iVar12 = *(int *)(lVar11 + -0x80);
            LVar18 = local_res8;
          } while (iVar12 != 0);
          for (ppuVar9 = ppuVar6;
              ppuVar9 != (undefined1 **)((longlong)ppuVar6 + (longlong)iVar3 * 2);
              ppuVar9 = (undefined1 **)((longlong)ppuVar9 + 2)) {
            if (*(short *)ppuVar9 == 0x2e) {
              iVar12 = (int)((longlong)ppuVar9 - (longlong)ppuVar6 >> 1);
              if (iVar12 != -1) {
                *(short *)((longlong)ppuVar6 + (longlong)iVar12 * 2) = 0x3a;
              }
              break;
            }
          }
          local_70 = *(undefined8 *)(*(longlong *)(local_res8.QuadPart + 0xa0) + 0x18);
          FName::ToString(&local_70,&local_e8);
          iVar12 = (int)local_e0;
          iVar8 = local_e0._4_4_;
          bVar20 = (int)local_e0 != 0;
          local_c8 = local_e8;
          local_e8 = (undefined1 **)0x0;
          local_c0._0_4_ = (int)local_e0;
          local_c0._4_4_ = local_e0._4_4_;
          local_e0 = (LARGE_INTEGER *)0x0;
          if (iVar8 < (int)((2 - (uint)bVar20) + iVar12)) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_c8);
            iVar12 = (int)local_c0;
          }
          local_c0._0_4_ = (2 - (uint)(iVar12 != 0)) + iVar12;
          ppuVar9 = local_c8;
          iVar8 = (int)local_c0;
          iVar14 = local_c0._4_4_;
          if (local_c0._4_4_ < (int)local_c0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,iVar12);
            ppuVar9 = local_c8;
            iVar8 = (int)local_c0;
            iVar14 = local_c0._4_4_;
          }
          local_c8 = (undefined1 **)0x0;
          local_c0 = 0;
          lVar11 = (longlong)iVar12 - (ulonglong)(iVar12 != 0);
          *(short *)((longlong)ppuVar9 + lVar11 * 2) = 0x2e;
          *(short *)((longlong)ppuVar9 + (lVar11 + 1) * 2) = 0;
          if (iVar8 < 2) {
            local_80 = (undefined1 **)0x0;
            local_78 = CONCAT44(local_78._4_4_,iVar3);
            ppuVar19 = ppuVar10;
            iVar14 = 0;
            if (iVar3 != 0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_80,ppuVar17,0);
              ppuVar19 = local_80;
              _guard_xfg_dispatch_icall_nop(local_80,ppuVar6,(longlong)iVar3 * 2);
              iVar14 = (int)local_78;
            }
          }
          else {
            iVar12 = iVar3 + -1;
            if (iVar3 == 0) {
              iVar12 = iVar16;
            }
            if ((iVar8 != 0) || (iVar3 = 1, iVar12 == 0)) {
              iVar3 = 0;
            }
            iVar3 = iVar3 + iVar12 + iVar8;
            local_f8 = ppuVar9;
            local_f0._4_4_ = iVar14;
            if (iVar14 < iVar3) {
              local_f0._0_4_ = iVar8;
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_f8,iVar3);
              iVar8 = (uint)local_f0;
            }
            ppuVar19 = local_f8;
            iVar14 = iVar8;
            if (iVar12 != 0) {
              iVar14 = (uint)(iVar8 == 0) + iVar8 + iVar12;
              local_f0 = CONCAT44(local_f0._4_4_,iVar14);
              if (local_f0._4_4_ < iVar14) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,iVar8);
                iVar14 = (uint)local_f0;
              }
              ppuVar19 = local_f8;
              psVar1 = (short *)((longlong)local_f8 +
                                ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
              _guard_xfg_dispatch_icall_nop(psVar1,ppuVar6,(longlong)iVar12 * 2);
              psVar1[iVar12] = 0;
            }
            local_f8 = (undefined1 **)0x0;
            local_f0 = 0;
            ppuVar9 = ppuVar10;
          }
          if (ppuVar6 != (undefined1 **)0x0) {
            FMemory::Free(ppuVar6);
          }
          local_80 = (undefined1 **)0x0;
          local_78 = 0;
          if (ppuVar9 != (undefined1 **)0x0) {
            FMemory::Free(ppuVar9);
          }
          if (local_e8 != (undefined1 **)0x0) {
            FMemory::Free();
          }
          ppuVar6 = (undefined1 **)&DAT_143f3eda8;
          if (iVar14 != 0) {
            ppuVar6 = ppuVar19;
          }
          FName::FName(local_98,ppuVar6,1);
          uVar2 = local_res10.s.LowPart;
          local_res18[0] = local_res10.s.LowPart;
          FUN_1417284b0(local_68,local_res20,&local_a8,0);
          if (ppuVar19 != (undefined1 **)0x0) {
            FMemory::Free(ppuVar19);
          }
          iVar12 = uVar2 + 1;
          local_res10.s.LowPart = iVar12;
          ppuVar6 = ppuVar10;
          ppuVar17 = ppuVar10;
          param_1 = local_res8;
          LVar18 = local_res8;
        } while (iVar12 <= *(int *)(local_res8.QuadPart + 0x20));
      }
      local_res10.QuadPart = local_res10.QuadPart & 0xffffffff00000000;
      if (0 < *(int *)(param_1.QuadPart + 0x10)) {
        local_a8 = local_98;
        local_a0 = local_res20;
        ppuVar6 = ppuVar10;
        do {
          uVar13 = ~(uint)ppuVar6;
          ppuVar6 = ppuVar10;
          ppuVar17 = ppuVar10;
          local_res18[0] = uVar13;
          do {
            iVar12 = (int)ppuVar17;
            lVar11 = (longlong)(int)~uVar13 * 0x38 + *(longlong *)(param_1.QuadPart + 8);
            ppuVar9 = ppuVar6;
            if ((iVar12 != 0) && (0 < iVar12 + -1)) {
              uVar13 = iVar12 + 1;
              local_d8 = (undefined1 **)0x0;
              local_d0 = (ulonglong)uVar13;
              if (0 < (int)uVar13) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
                uVar13 = (uint)local_d0;
              }
              ppuVar9 = local_d8;
              ppuVar17 = (undefined1 **)(ulonglong)uVar13;
              *(short *)local_d8 = 0x2e;
              _guard_xfg_dispatch_icall_nop
                        ((short *)((longlong)local_d8 + 2),ppuVar6,((longlong)iVar12 + -1) * 2);
              *(short *)((longlong)ppuVar9 + (longlong)iVar12 * 2) = 0;
              local_d8 = (undefined1 **)0x0;
              local_d0 = 0;
              if (ppuVar6 != (undefined1 **)0x0) {
                FMemory::Free(ppuVar6);
              }
            }
            puVar5 = (undefined8 *)FName::ToString(lVar11);
            uVar13 = *(uint *)(puVar5 + 1);
            iVar12 = (int)ppuVar17;
            if ((int)uVar13 < 2) {
              local_e8 = (undefined1 **)0x0;
              local_e0 = (LARGE_INTEGER *)CONCAT44(local_e0._4_4_,iVar12);
              ppuVar6 = ppuVar10;
              if (iVar12 != 0) {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e8,ppuVar17,0);
                ppuVar6 = local_e8;
                _guard_xfg_dispatch_icall_nop(local_e8,ppuVar9,(longlong)iVar12 * 2);
                ppuVar17 = (undefined1 **)((ulonglong)local_e0 & 0xffffffff);
              }
            }
            else {
              iVar3 = iVar12 + -1;
              if (iVar12 == 0) {
                iVar3 = iVar16;
              }
              if ((uVar13 != 0) || (iVar12 = 1, iVar3 == 0)) {
                iVar12 = 0;
              }
              local_f8 = (undefined1 **)*puVar5;
              *puVar5 = 0;
              local_f0._4_4_ = *(int *)((longlong)puVar5 + 0xc);
              puVar5[1] = 0;
              if (local_f0._4_4_ < (int)(iVar12 + iVar3 + uVar13)) {
                local_f0._0_4_ = uVar13;
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_f8);
                uVar13 = (uint)local_f0;
              }
              ppuVar17 = (undefined1 **)(ulonglong)uVar13;
              ppuVar6 = local_f8;
              if (iVar3 != 0) {
                uVar15 = (uVar13 == 0) + uVar13 + iVar3;
                local_f0 = CONCAT44(local_f0._4_4_,uVar15);
                if (local_f0._4_4_ < (int)uVar15) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,ppuVar17);
                  uVar15 = (uint)local_f0;
                }
                ppuVar6 = local_f8;
                ppuVar17 = (undefined1 **)(ulonglong)uVar15;
                psVar1 = (short *)((longlong)local_f8 +
                                  ((longlong)(int)uVar13 - (ulonglong)(uVar13 != 0)) * 2);
                _guard_xfg_dispatch_icall_nop(psVar1,ppuVar9,(longlong)iVar3 * 2);
                psVar1[iVar3] = 0;
              }
              local_f8 = (undefined1 **)0x0;
              local_f0 = 0;
            }
            if (ppuVar9 != (undefined1 **)0x0) {
              FMemory::Free(ppuVar9);
            }
            local_e8 = (undefined1 **)0x0;
            local_e0 = (LARGE_INTEGER *)0x0;
            if (local_60[0] != 0) {
              FMemory::Free();
            }
            uVar13 = *(uint *)(lVar11 + 8);
            param_1 = local_res8;
          } while (uVar13 != 0);
          ppuVar9 = (undefined1 **)&DAT_143f3eda8;
          if ((int)ppuVar17 != 0) {
            ppuVar9 = ppuVar6;
          }
          FName::FName(local_98,ppuVar9,1);
          local_res20[0] = local_res18[0];
          FUN_1417284b0(local_68,&local_70,&local_a8,0);
          if (ppuVar6 != (undefined1 **)0x0) {
            FMemory::Free(ppuVar6);
          }
          uVar13 = local_res10.s.LowPart + 1;
          ppuVar6 = (undefined1 **)(ulonglong)uVar13;
          local_res10.s.LowPart = uVar13;
          param_1 = local_res8;
        } while ((int)uVar13 < *(int *)(local_res8.QuadPart + 0x10));
      }
    }
    iVar16 = 1;
    local_res10 = param_1;
    lVar11 = FUN_1417555a0();
    BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar11 + 0x58));
    if (BVar4 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar11 + 0x58));
    }
    FUN_14058c5a0(lVar11 + 8,&local_res8,&local_res10,0);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar11 + 0x58));
    uVar7 = FUN_141671940(&local_a8,param_1.QuadPart + 0x1e0,1);
    FString::ToLower(uVar7,local_60);
    if (local_60[0] != 0) {
      FMemory::Free();
    }
    if (local_a8 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    if (((DAT_1468c21ab != '\0') && (*(longlong *)(param_1.QuadPart + 800) != 0)) &&
       (0 < *(int *)(param_1.QuadPart + 0x20))) {
      local_e8 = &local_a8;
      local_e0 = &local_res8;
      do {
        local_res8.s.LowPart = iVar16;
        local_a8 = *(undefined1 **)
                    ((longlong)iVar16 * 0x88 + -0x88 + *(longlong *)(param_1.QuadPart + 0x18));
        local_a0 = (uint *)CONCAT44(local_a0._4_4_,
                                    *(undefined4 *)
                                     ((longlong)iVar16 * 0x88 + -0x80 +
                                     *(longlong *)(param_1.QuadPart + 0x18)));
        FUN_141728080(*(longlong *)(param_1.QuadPart + 800) + 0x348,&local_res10,&local_e8,0);
        iVar16 = iVar16 + 1;
      } while (iVar16 <= *(int *)(param_1.QuadPart + 0x20));
    }
    if (*(char *)(param_1.QuadPart + 0x2a2) != '\0') {
      FUN_1416f1460(*(undefined8 *)(param_1.QuadPart + 0x318));
    }
    if ((*(byte *)(param_1.QuadPart + 0x290) & 0x80) == 0) {
      if (((DAT_1468b616c != '\0') && (*(char *)(param_1.QuadPart + 0x294) == '\0')) &&
         (0 < *(int *)(param_1.QuadPart + 0x108))) {
        do {
          FUN_141748b40(param_1.QuadPart,ppuVar10);
          uVar13 = (int)ppuVar10 + 1;
          ppuVar10 = (undefined1 **)(ulonglong)uVar13;
        } while ((int)uVar13 < *(int *)(param_1.QuadPart + 0x108));
      }
      *(undefined1 *)(param_1.QuadPart + 0x294) = 1;
    }
    *(undefined1 *)(param_1.QuadPart + 0x764) = 1;
  }
  *(int *)(param_1.QuadPart + 0x76cU) = *(int *)(param_1.QuadPart + 0x76cU) + 1;
  if ((*(byte *)(param_1.QuadPart + 0x228) & 8) == 0) {
    bVar20 = *(char *)(param_1.QuadPart + 0x766) == '\0';
    if (!bVar20) goto LAB_14173600e;
    if (*(char *)(param_1.QuadPart + 0x767) != '\0') {
      QueryPerformanceCounter(&local_res8);
      *(bool *)(param_1.QuadPart + 0x766) =
           (double)*(float *)(param_1.QuadPart + 0x770) <
           ((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0) -
           *(double *)(param_1.QuadPart + 0x778);
    }
  }
  bVar20 = *(char *)(param_1.QuadPart + 0x766) == '\0';
LAB_14173600e:
  return !bVar20 + '\x01';
}



// FUNCTION 141736030 FindExistingLinkerForImport body=222 status=ok
// SIG undefined FindExistingLinkerForImport(void)

longlong FLinkerLoad::FindExistingLinkerForImport(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *local_18;
  int local_10;
  
  lVar4 = (longlong)param_2 * 0x38 + *(longlong *)(param_1 + 8);
  lVar2 = *(longlong *)(lVar4 + 0x28);
  if ((lVar2 == 0) && ((*(longlong *)(lVar4 + 0x20) == 0 || (lVar2 = FUN_1417a53c0(), lVar2 == 0))))
  {
    uVar1 = *(uint *)(lVar4 + 8);
    lVar2 = 0;
    if (uVar1 == 0) {
      if (*(longlong *)(lVar4 + 0x18) == 0xcf) {
        FName::ToString(lVar4,&local_18);
        puVar5 = &DAT_143f3eda8;
        if (local_10 != 0) {
          puVar5 = local_18;
        }
        uVar3 = UPackage::GetPrivateStaticClass();
        lVar4 = FUN_141799410(uVar3,0,puVar5,0);
        if (lVar4 != 0) {
          lVar2 = *(longlong *)(lVar4 + 0x60);
        }
        if (local_18 != (undefined2 *)0x0) {
          FMemory::Free();
          return lVar2;
        }
      }
    }
    else if ((int)uVar1 < 0) {
      lVar2 = FindExistingLinkerForImport(param_1,~uVar1);
    }
  }
  return lVar2;
}



// FUNCTION 141736110 FindExistingLinkerForPackage body=13 status=ok
// SIG undefined FindExistingLinkerForPackage(void)

undefined8 FLinkerLoad::FindExistingLinkerForPackage(longlong param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x60);
  }
  return 0;
}



// FUNCTION 141736120 FindNewNameForClass body=189 status=ok
// SIG undefined FindNewNameForClass(void)

longlong * FLinkerLoad::FindNewNameForClass(longlong *param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong lStack_48;
  longlong local_40;
  undefined1 local_38 [32];
  
  local_60 = 0;
  local_58 = 0;
  local_68 = param_2;
  FCoreRedirects::GetRedirectedName(&local_50,2,&local_68);
  if (((local_50 == local_68) && (lStack_48 == local_60)) && (local_40 == local_58)) {
    if (param_3 != '\0') {
      plVar1 = (longlong *)FCoreRedirects::GetRedirectedName(local_38,0x10002,&local_68);
      local_50 = *plVar1;
      if (((local_50 != local_68) || (plVar1[1] != local_60)) || (plVar1[2] != local_58))
      goto LAB_1417361c7;
    }
    *param_1 = 0;
  }
  else {
LAB_1417361c7:
    *param_1 = local_50;
  }
  return param_1;
}



// FUNCTION 1417361e0 FindNewNameForEnum body=125 status=ok
// SIG undefined FindNewNameForEnum(void)

longlong * FLinkerLoad::FindNewNameForEnum(longlong *param_1,longlong param_2)

{
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  
  local_30 = 0;
  local_28 = 0;
  local_38 = param_2;
  FCoreRedirects::GetRedirectedName(&local_20,8,&local_38);
  if (((local_20 == local_38) && (local_18 == local_30)) && (local_10 == local_28)) {
    *param_1 = 0;
    return param_1;
  }
  *param_1 = local_20;
  return param_1;
}



// FUNCTION 141736260 FindNewNameForStruct body=125 status=ok
// SIG undefined FindNewNameForStruct(void)

longlong * FLinkerLoad::FindNewNameForStruct(longlong *param_1,longlong param_2)

{
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  
  local_30 = 0;
  local_28 = 0;
  local_38 = param_2;
  FCoreRedirects::GetRedirectedName(&local_20,4,&local_38);
  if (((local_20 == local_38) && (local_18 == local_30)) && (local_10 == local_28)) {
    *param_1 = 0;
    return param_1;
  }
  *param_1 = local_20;
  return param_1;
}



// FUNCTION 1417362e0 FindReferences body=241 status=ok
// SIG undefined FindReferences(void)

void FReferenceFinder::FindReferences(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = FUN_14171bfe0();
  for (lVar7 = *(longlong *)(param_2 + 0x10); lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
    if (lVar7 == lVar6) goto LAB_1417363b6;
  }
  lVar7 = *(longlong *)(param_1 + 8);
  if (lVar7 == 0) {
    FReferenceCollector::CreateVerySlowReferenceCollectorArchive(param_1);
    lVar7 = *(longlong *)(param_1 + 8);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  uVar2 = *(undefined8 *)(lVar7 + 0x90);
  uVar3 = *(undefined8 *)(lVar7 + 0x78);
  uVar4 = *(undefined8 *)(lVar7 + 0x98);
  uVar5 = *(undefined8 *)(lVar7 + 0xa0);
  *(undefined8 *)(lVar7 + 0x90) = param_3;
  *(undefined8 *)(lVar7 + 0x78) = uVar1;
  *(undefined8 *)(lVar7 + 0x98) = 0;
  *(undefined8 *)(lVar7 + 0xa0) = 0;
  FUN_1417645f0(param_2,lVar7);
  *(undefined8 *)(lVar7 + 0x90) = uVar2;
  *(undefined8 *)(lVar7 + 0x78) = uVar3;
  *(undefined8 *)(lVar7 + 0x98) = uVar4;
  *(undefined8 *)(lVar7 + 0xa0) = uVar5;
LAB_1417363b6:
                    /* WARNING: Could not recover jumptable at 0x0001417363ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_2 + 0x10) + 0xa8))(param_2,param_1);
  return;
}



// FUNCTION 1417363e0 FindSubobjectRedirectName body=228 status=ok
// SIG undefined FindSubobjectRedirectName(void)

undefined8 *
FLinkerLoad::FindSubobjectRedirectName(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int local_res20 [2];
  longlong local_38 [2];
  undefined1 local_28 [32];
  
  FCoreRedirectObjectName::FCoreRedirectObjectName(local_28,param_3);
  plVar1 = (longlong *)FCoreRedirects::GetValueRedirects(2,local_28);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FName::ToString(param_2,local_38);
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(plVar1,local_res20,uVar2);
    puVar3 = (undefined8 *)0x0;
    if (local_res20[0] != -1) {
      puVar3 = (undefined8 *)(*plVar1 + (longlong)local_res20[0] * 0x28);
    }
    puVar4 = puVar3 + 2;
    if (puVar3 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    if (puVar4 != (undefined8 *)0x0) {
      if (*(int *)(puVar4 + 1) != 0) {
        FName::FName(param_1,*puVar4,1);
        return param_1;
      }
      FName::FName(param_1,&DAT_143f3eda8,1);
      return param_1;
    }
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1417364d0 FUN_1417364d0 body=387 status=ok
// SIG undefined FUN_1417364d0(void)

bool FUN_1417364d0(longlong param_1,LARGE_INTEGER param_2)

{
  longlong lVar1;
  LARGE_INTEGER LVar2;
  double dVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  
  QueryPerformanceCounter(&local_res8);
  dVar3 = (double)local_res8.QuadPart * DAT_1468b02f8;
  bVar8 = *(int *)(param_1 + 0x740) == 0;
  if (!bVar8) {
    LVar2 = param_2;
    do {
      lVar1 = *(longlong *)(param_1 + 0x738);
      lVar7 = (longlong)*(int *)(param_1 + 0x740) * 0x50;
      uVar5 = 0;
      local_res8 = LVar2;
      if (*(int *)(lVar7 + -0x10 + lVar1) != 0) {
        plVar6 = *(longlong **)(lVar7 + -0x20 + lVar1);
        if (plVar6 == (longlong *)0x0) {
          plVar6 = (longlong *)(lVar1 + -0x40 + lVar7);
        }
        if (plVar6 != (longlong *)0x0) {
          uVar5 = (**(code **)(*plVar6 + 8))();
        }
      }
      cVar4 = (**(code **)(lVar7 + -0x50 + lVar1))(uVar5,&local_res8);
      if (cVar4 != '\0') {
        TArray<TFunction<bool___cdecl(double)>,FDefaultAllocator>::RemoveAtImpl
                  (param_1 + 0x738,*(int *)(param_1 + 0x740) + -1,1,1);
      }
      if ((0.0 < (double)param_2) &&
         (*(int *)(param_1 + 0x740) == (*(int *)(param_1 + 0x740) / 5) * 5)) {
        QueryPerformanceCounter(&local_res10);
        LVar2.s = (_struct_19)(param_2.s - ((double)local_res10.QuadPart * DAT_1468b02f8 - dVar3));
        if ((double)LVar2 <= 0.0) {
          return false;
        }
      }
    } while (*(int *)(param_1 + 0x740) != 0);
    bVar8 = true;
  }
  return bVar8;
}



// FUNCTION 141736660 FixupForPIE body=147 status=ok
// SIG undefined FixupForPIE(void)

undefined8 * FUniqueObjectGuid::FixupForPIE(undefined4 *param_1,undefined8 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int local_res18 [4];
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)param_2 = *param_1;
  *(undefined4 *)((longlong)param_2 + 4) = uVar1;
  *(undefined4 *)(param_2 + 1) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
  TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
  ::FindId(&DAT_1469e7370 + (longlong)(param_3 % 10) * 10,local_res18);
  puVar6 = (undefined8 *)0x0;
  if (local_res18[0] != -1) {
    puVar6 = (undefined8 *)
             ((&DAT_1469e7370)[(longlong)(param_3 % 10) * 10] + (longlong)local_res18[0] * 0x28);
  }
  puVar5 = puVar6 + 2;
  if (puVar6 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  if (puVar5 != (undefined8 *)0x0) {
    uVar4 = puVar5[1];
    *param_2 = *puVar5;
    param_2[1] = uVar4;
  }
  return param_2;
}



// FUNCTION 141736700 FUN_141736700 body=23 status=ok
// SIG undefined FUN_141736700(void)

void FUN_141736700(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x118) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014173670f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x118) + 0xd0))();
    return;
  }
  return;
}



// FUNCTION 141736720 FUN_141736720 body=186 status=ok
// SIG undefined FUN_141736720(void)

void FUN_141736720(int *param_1)

{
  int iVar1;
  bool bVar2;
  BOOL BVar3;
  int *local_res8;
  undefined4 local_18;
  undefined4 uStack_14;
  int **ppiStack_10;
  
  LOCK();
  param_1[2] = param_1[2] + 1;
  UNLOCK();
  bVar2 = false;
  do {
    local_18 = 0x4172d070;
    uStack_14 = 1;
    local_res8 = param_1;
    ppiStack_10 = &local_res8;
    FUN_1415a4db0(&local_18,0);
    BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
    if (BVar3 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
    }
    LOCK();
    iVar1 = *param_1;
    if (iVar1 == 0) {
      *param_1 = 0;
    }
    UNLOCK();
    if (iVar1 == 0) {
      (**(code **)(**(longlong **)(param_1 + 0xe) + 0x18))();
      LOCK();
      param_1[1] = param_1[1] + 1;
      UNLOCK();
      bVar2 = true;
      LOCK();
      param_1[2] = 0;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  } while (!bVar2);
  return;
}



// FUNCTION 1417367e0 FUN_1417367e0 body=595 status=ok
// SIG undefined FUN_1417367e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1417367e0(undefined1 param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar9;
  uint uVar10;
  ulonglong uVar11;
  LARGE_INTEGER local_res10;
  longlong *local_68;
  undefined8 local_60;
  undefined1 *local_58;
  undefined8 **ppuStack_50;
  longlong **local_48;
  int local_40;
  int local_3c;
  int local_38;
  
  QueryPerformanceCounter(&local_res10);
  DAT_1469e72c8 = 0;
  if ((DAT_1469e72cc < 0) && (DAT_1469e72cc != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_1469e72c0,0);
  }
  iVar7 = (int)DAT_1469e91c4 - _DAT_1469e91a0;
  DAT_1469e7694 = 0;
  plVar3 = (longlong *)FTaskGraphInterface::Get();
  local_3c = (**(code **)(*plVar3 + 0x18))(plVar3);
  local_68 = (longlong *)0x0;
  local_60 = 0;
  if (local_3c < 2) {
    local_3c = 1;
  }
  local_48 = &local_68;
  local_40 = iVar7 / local_3c + 1;
  ppuStack_50 = &local_48;
  local_58 = &LAB_14172d100;
  local_38 = iVar7;
  FUN_1406a7b10(0x4172d100,&local_58,param_1);
  local_res10.QuadPart = (LONGLONG)(local_68 + (int)local_60);
  plVar3 = local_68;
  if (local_68 != (longlong *)local_res10.QuadPart) {
    do {
      lVar1 = *plVar3;
      puVar9 = (uint *)(lVar1 + 8);
      *puVar9 = *puVar9 & 0xfeffffff;
      uVar10 = ~*(uint *)(lVar1 + 0xc);
      puVar9 = *(uint **)(DAT_1469e8f10 + 8 + (longlong)(int)uVar10 * 0x50);
      uVar4 = (ulonglong)*(int *)(DAT_1469e8f10 + 0x10 + (longlong)(int)uVar10 * 0x50);
      uVar11 = uVar4 & 0x3fffffffffffffff;
      if (puVar9 + uVar4 < puVar9) {
        uVar11 = 0;
      }
      uVar4 = 0;
      if (uVar11 != 0) {
        do {
          uVar2 = *puVar9;
          uVar6 = uVar2 & 0xffff;
          if ((int)uVar2 < 0) {
            uVar2 = uVar2 + 0xffff;
            uVar6 = uVar6 - 0x10000;
          }
          lVar5 = (longlong)(int)uVar6;
          lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8);
          *(undefined4 *)(lVar8 + 0xc + lVar5 * 0x18) = 0;
          lVar1 = lVar8 + lVar5 * 0x18;
          uVar2 = *(uint *)(lVar8 + 8 + lVar5 * 0x18);
          if ((uVar2 >> 0x17 & 1) == 0) {
            *(uint *)(lVar1 + 8) = uVar2 | 0x10000000;
            iVar7 = DAT_1469e72c8;
            lVar8 = (longlong)DAT_1469e72c8;
            DAT_1469e72c8 = DAT_1469e72c8 + 1;
            if (DAT_1469e72cc < DAT_1469e72c8) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (&DAT_1469e72c0,iVar7);
            }
            *(longlong *)(DAT_1469e72c0 + lVar8 * 8) = lVar1;
          }
          puVar9 = puVar9 + 1;
          uVar4 = uVar4 + 1;
        } while (uVar4 != uVar11);
      }
      FUObjectClusterContainer::FreeCluster(&DAT_1469e8f10,uVar10);
      plVar3 = plVar3 + 1;
    } while (plVar3 != (longlong *)local_res10.QuadPart);
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}



// FUNCTION 141736a40 FUN_141736a40 body=808 status=ok
// SIG undefined FUN_141736a40(void)

wchar_t ** FUN_141736a40(longlong param_1,wchar_t **param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  wchar_t *pwVar13;
  undefined8 local_res8;
  wchar_t *local_48;
  undefined8 local_40;
  longlong local_38;
  int local_30;
  ulonglong uVar5;
  
  *param_2 = (wchar_t *)0x0;
  param_2[1] = (wchar_t *)0x0;
  if (0 < *(int *)(param_1 + 0x48)) {
    FName::ToString(*(undefined8 *)(param_1 + 0x40));
    iVar10 = 1;
    if (1 < *(int *)(param_1 + 0x48)) {
      do {
        uVar8 = 0;
        pwVar13 = L"";
        FName::ToString((longlong)iVar10 * 0x10 + *(longlong *)(param_1 + 0x40),&local_38);
        iVar1 = *(int *)(param_2 + 1);
        iVar11 = 0;
        uVar5 = (ulonglong)(iVar1 - 1);
        uVar9 = uVar8;
        if (iVar1 == 0) {
          uVar5 = uVar8;
        }
        while( true ) {
          iVar4 = (int)uVar5;
          iVar7 = (int)uVar8;
          if (iVar4 <= iVar7) break;
          iVar3 = local_30 + -1;
          if (local_30 == 0) {
            iVar3 = iVar11;
          }
          if ((iVar3 <= iVar7) ||
             (*(short *)(uVar9 + (longlong)*param_2) != *(short *)(local_38 + uVar9))) break;
          uVar8 = (ulonglong)(iVar7 + 1);
          uVar9 = uVar9 + 2;
        }
        if (iVar1 != 0) {
          pwVar13 = *param_2;
        }
        if ((-1 < iVar7) && (iVar11 = iVar4, iVar7 < iVar4)) {
          iVar11 = iVar7;
        }
        local_48 = (wchar_t *)0x0;
        uVar12 = iVar11 + 1;
        if (iVar11 == 0) {
          uVar12 = 0;
        }
        local_40 = (ulonglong)uVar12;
        pwVar6 = local_48;
        if (0 < (int)uVar12) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
          pwVar6 = local_48;
          uVar12 = (uint)local_40;
          if (0 < (int)(uint)local_40) {
            wcsncpy(local_48,pwVar13,(longlong)iVar11);
            pwVar6[iVar11] = L'\0';
          }
        }
        if (param_2 == &local_48) {
          if (pwVar6 != (wchar_t *)0x0) {
            FMemory::Free(pwVar6);
          }
        }
        else {
          if (*param_2 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          uVar2 = local_40._4_4_;
          *param_2 = pwVar6;
          *(uint *)(param_2 + 1) = uVar12;
          local_40 = 0;
          local_48 = (wchar_t *)0x0;
          *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
        }
        if (local_38 != 0) {
          FMemory::Free();
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(param_1 + 0x48));
    }
    pwVar6 = (wchar_t *)0x0;
    pwVar13 = L"";
    iVar10 = FUN_141592950(param_2,&DAT_144d089ac,0,1,0xffffffff);
    if (iVar10 < 1) {
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0);
      }
    }
    else {
      iVar1 = *(int *)(param_2 + 1);
      if (iVar1 != 0) {
        pwVar13 = *param_2;
      }
      local_48 = (wchar_t *)0x0;
      iVar11 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar11 = 0;
      }
      if (iVar10 < iVar11) {
        iVar11 = iVar10;
      }
      uVar12 = iVar11 + 1;
      if (iVar11 == 0) {
        uVar12 = 0;
      }
      local_40 = (ulonglong)uVar12;
      if (0 < (int)uVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
        pwVar6 = local_48;
        uVar12 = (uint)local_40;
        if (0 < (int)(uint)local_40) {
          wcsncpy(local_48,pwVar13,(longlong)iVar11);
          pwVar6[iVar11] = L'\0';
        }
      }
      if (param_2 == &local_48) {
        if (pwVar6 != (wchar_t *)0x0) {
          FMemory::Free(pwVar6);
        }
      }
      else {
        if (*param_2 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        *param_2 = pwVar6;
        *(uint *)(param_2 + 1) = uVar12;
        *(undefined4 *)((longlong)param_2 + 0xc) = local_40._4_4_;
      }
    }
  }
  iVar10 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar10 = 0;
  }
  if (iVar10 == 0) {
    local_res8 = *(undefined8 *)(param_1 + 0x18);
    FName::ToString(&local_res8,&local_48);
    if (param_2 != &local_48) {
      if (*param_2 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      *param_2 = local_48;
      *(uint *)(param_2 + 1) = (uint)local_40;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_40._4_4_;
      return param_2;
    }
    if (local_48 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 141736d70 GenerateFullEnumName body=240 status=ok
// SIG undefined GenerateFullEnumName(void)

undefined8 * UEnum::GenerateFullEnumName(longlong param_1,undefined8 *param_2,wchar_t *param_3)

{
  wchar_t *pwVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined8 local_res8;
  undefined2 *local_18;
  int local_10;
  
  if ((*(int *)(param_1 + 0x50) == 0) ||
     (pwVar1 = ::_guard_xfg_dispatch_icall_nop(param_3,L"::"), pwVar1 != (wchar_t *)0x0)) {
    *param_2 = 0;
    param_2[1] = 0;
    if ((param_3 != (wchar_t *)0x0) && (*param_3 != L'\0')) {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (param_3[lVar3] != L'\0');
      iVar2 = (int)lVar3 + 1;
      *(int *)(param_2 + 1) = iVar2;
      if (0 < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      }
      FGenericPlatformString::Memcpy(*param_2,param_3,(longlong)iVar2 * 2);
    }
    return param_2;
  }
  local_res8 = *(undefined8 *)(param_1 + 0x18);
  FName::ToString(&local_res8,&local_18);
  puVar4 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar4 = local_18;
  }
  FString::PrintfImpl(param_2,L"%s::%s",puVar4,param_3);
  if (local_18 == (undefined2 *)0x0) {
    return param_2;
  }
  FMemory::Free();
  return param_2;
}



// FUNCTION 141736e80 GetArchiveName body=128 status=ok
// SIG undefined GetArchiveName(void)

undefined8 * FLinkerLoad::GetArchiveName(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  short *psVar3;
  
  if (*(int *)(param_1 + -0x18) == 0) {
    psVar3 = &DAT_143f3eda8;
  }
  else {
    psVar3 = *(short **)(param_1 + -0x20);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (psVar3[lVar2] != 0);
    iVar1 = (int)lVar2 + 1;
    *(int *)(param_2 + 1) = iVar1;
    if (0 < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    }
    FGenericPlatformString::Memcpy(*param_2,psVar3,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 141736f00 GetCPPMacroType body=164 status=ok
// SIG undefined GetCPPMacroType(void)

undefined8 * UEnumProperty::GetCPPMacroType(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 local_res8;
  longlong local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x18);
  FName::ToString(&local_res8,&local_18);
  if (param_3 == &local_18) {
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = local_18;
    *(undefined4 *)(param_3 + 1) = local_10;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_c;
  }
  *param_2 = 0;
  param_2[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"ENUM",10);
  return param_2;
}



// FUNCTION 141736fb0 GetCPPType body=230 status=ok
// SIG undefined GetCPPType(void)

longlong *
UEnumProperty::GetCPPType(longlong param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 local_res8;
  longlong local_28;
  undefined8 local_20;
  longlong local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x10);
  lVar4 = UEnum::GetPrivateStaticClass();
  lVar2 = *(longlong *)(param_1 + 0x78);
  if (*(int *)(lVar2 + 0x38) < 2) {
    local_res8 = *(undefined8 *)(lVar2 + 0x18);
    FName::ToString(&local_res8,&local_18);
    if ((param_4 < '\0') && (lVar1 != lVar4)) {
      UnicodeToCPPIdentifier(&local_28,&local_18,0,&DAT_144d0db78);
      *param_2 = local_28;
      *(undefined4 *)(param_2 + 1) = (undefined4)local_20;
      uVar3 = local_20._4_4_;
      local_20 = 0;
      local_28 = 0;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
      if (local_18 != 0) {
        FMemory::Free();
      }
    }
    else {
      *param_2 = local_18;
      *(undefined4 *)(param_2 + 1) = local_10;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_c;
    }
  }
  else {
    FString::FString(param_2,lVar2 + 0x30);
  }
  return param_2;
}



// FUNCTION 1417370a0 GetCPPType body=107 status=ok
// SIG undefined GetCPPType(void)

undefined8 * UProperty::GetCPPType(undefined8 param_1,undefined8 *param_2)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject/UnrealType.h",
             0x9b,L"Pure virtual not implemented (%s)",L"UProperty::GetCPPType");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject/UnrealType.h",
             0x9b,L"Pure virtual not implemented (%s)",L"UProperty::GetCPPType");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 141737110 FUN_141737110 body=185 status=ok
// SIG undefined FUN_141737110(void)

undefined8 FUN_141737110(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined8 local_res8;
  undefined2 *local_28;
  int local_20;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x70) + 0x298))
                     (*(longlong **)(param_1 + 0x70),local_18,0,0);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*puVar1;
  }
  local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x18);
  FName::ToString(&local_res8,&local_28);
  puVar2 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar2 = local_28;
  }
  FString::PrintfImpl(param_2,L"enum class %s : %s;",puVar2,puVar3);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1417371d0 GetCPPTypeForwardDeclaration body=107 status=ok
// SIG undefined GetCPPTypeForwardDeclaration(void)

undefined8 * UProperty::GetCPPTypeForwardDeclaration(undefined8 param_1,undefined8 *param_2)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject/UnrealType.h",
             0x9d,L"Pure virtual not implemented (%s)",L"UProperty::GetCPPTypeForwardDeclaration");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject/UnrealType.h",
             0x9d,L"Pure virtual not implemented (%s)",L"UProperty::GetCPPTypeForwardDeclaration");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 141737240 FUN_141737240 body=344 status=ok
// SIG undefined FUN_141737240(void)

undefined8 FUN_141737240(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_48;
  int local_40;
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  FUN_1417392b0(param_1,&local_48);
  if (local_40 < 2) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146852c50) {
      _Init_thread_header(&DAT_146852c50);
      if (DAT_146852c50 == -1) {
        FText::FText(&DAT_146852c38,0);
        atexit(FUN_143e3e8f0);
        _Init_thread_footer(&DAT_146852c50);
        FText::FText(param_2,&DAT_146852c38);
        goto LAB_141737326;
      }
    }
    FText::FText(param_2,&DAT_146852c38);
  }
  else if (*(code **)(param_1 + 0x58) == (code *)0x0) {
    uVar5 = FUN_1417392b0(param_1,local_38,param_3);
    FText::FromString(param_2,uVar5);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  else {
    uVar5 = (**(code **)(param_1 + 0x58))(local_28,param_3);
    FText::FText(param_2,uVar5);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  }
LAB_141737326:
  if (local_48 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1417373a0 FUN_1417373a0 body=81 status=ok
// SIG undefined FUN_1417373a0(void)

undefined8 FUN_1417373a0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (0 < (int)param_1[9]) {
    plVar1 = (longlong *)(param_1[8] + 8);
    uVar3 = uVar2;
    do {
      if (*plVar1 == param_3) goto LAB_1417373df;
      uVar2 = (ulonglong)((int)uVar2 + 1);
      uVar3 = uVar3 + 1;
      plVar1 = plVar1 + 2;
    } while ((longlong)uVar3 < (longlong)(int)param_1[9]);
  }
  uVar2 = 0xffffffff;
LAB_1417373df:
  (**(code **)(*param_1 + 0x288))(param_1,param_2,uVar2);
  return param_2;
}



// FUNCTION 141737400 GetExportClassName body=229 status=ok
// SIG undefined GetExportClassName(void)

undefined8 * FLinker::GetExportClassName(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined1 local_res20 [8];
  longlong local_18 [2];
  
  iVar5 = (int)param_3;
  if ((-1 < iVar5) && (iVar5 < *(int *)(param_1 + 0x20))) {
    lVar3 = (longlong)iVar5 * 0x88 + *(longlong *)(param_1 + 0x18);
    uVar1 = *(uint *)(lVar3 + 0x10);
    if (uVar1 != 0) {
      if (-1 < (int)uVar1) {
        *param_2 = *(undefined8 *)
                    (*(longlong *)(param_1 + 0x18) + -0x88 + (longlong)(int)uVar1 * 0x88);
        return param_2;
      }
      *param_2 = *(undefined8 *)((longlong)(int)~uVar1 * 0x38 + *(longlong *)(param_1 + 8));
      return param_2;
    }
    if (*(char *)(lVar3 + 0x5a) == '\x01') {
      puVar2 = (undefined8 *)GetExportPathName(param_1,local_18,param_3,0,0);
      if (*(int *)(puVar2 + 1) == 0) {
        puVar4 = &DAT_143f3eda8;
      }
      else {
        puVar4 = (undefined2 *)*puVar2;
      }
      puVar2 = (undefined8 *)FName::FName(local_res20,puVar4,1);
      FUN_14178dac0(param_2,*puVar2);
      if (local_18[0] == 0) {
        return param_2;
      }
      FMemory::Free();
      return param_2;
    }
  }
  *param_2 = 0x69;
  return param_2;
}



// FUNCTION 1417374f0 GetExportClassPackage body=131 status=ok
// SIG undefined GetExportClassPackage(void)

undefined8 * FLinkerLoad::GetExportClassPackage(longlong param_1,undefined8 *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)((longlong)param_3 * 0x88 + 0x10 + *(longlong *)(param_1 + 0x18));
  if (-1 < (int)uVar1) {
    if (uVar1 != 0) {
      *param_2 = *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x18);
      return param_2;
    }
    *param_2 = DAT_1468e2358;
    return param_2;
  }
  iVar2 = *(int *)((longlong)(int)~uVar1 * 0x38 + 8 + *(longlong *)(param_1 + 8));
  if (iVar2 < 0) {
    *param_2 = *(undefined8 *)((longlong)(-1 - iVar2) * 0x38 + *(longlong *)(param_1 + 8));
    return param_2;
  }
  *param_2 = *(undefined8 *)((longlong)iVar2 * 0x88 + -0x88 + *(longlong *)(param_1 + 0x18));
  return param_2;
}



// FUNCTION 141737580 GetExportFullName body=607 status=ok
// SIG undefined GetExportFullName(void)

longlong *
FLinker::GetExportFullName
          (longlong param_1,longlong *param_2,int param_3,undefined8 param_4,undefined1 param_5)

{
  undefined2 *puVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined8 local_res8;
  void *local_res10;
  longlong local_68;
  int local_60;
  int local_5c;
  longlong local_58;
  longlong local_48 [2];
  
  iVar6 = *(int *)((longlong)param_3 * 0x88 + 0x10 + *(longlong *)(param_1 + 0x18));
  if (iVar6 == 0) {
    local_res8 = 0x69;
  }
  else {
    if (iVar6 < 0) {
      puVar4 = (undefined8 *)((longlong)(-1 - iVar6) * 0x38 + *(longlong *)(param_1 + 8));
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + -0x88 + (longlong)iVar6 * 0x88);
    }
    local_res8 = *puVar4;
  }
  plVar5 = (longlong *)FName::ToString(&local_res8);
  lVar9 = plVar5[1];
  local_68 = *plVar5;
  *plVar5 = 0;
  local_60 = (int)plVar5[1];
  local_5c = *(int *)((longlong)plVar5 + 0xc);
  plVar5[1] = 0;
  iVar6 = local_60;
  if (local_5c < (int)((2 - (uint)((int)lVar9 != 0)) + local_60)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68);
    iVar6 = local_60;
  }
  local_60 = (2 - (uint)(iVar6 != 0)) + iVar6;
  if (local_5c < local_60) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68);
  }
  iVar8 = local_5c;
  iVar2 = local_60;
  lVar9 = local_68;
  puVar1 = (undefined2 *)(local_68 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
  *puVar1 = 0x20;
  puVar1[1] = 0;
  plVar5 = (longlong *)GetExportPathName(param_1,local_48,param_3,param_4,param_5);
  if (iVar2 < 2) {
    *param_2 = 0;
    *param_2 = *plVar5;
    *plVar5 = 0;
    *(int *)(param_2 + 1) = (int)plVar5[1];
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar5 + 0xc);
    plVar5[1] = 0;
    if (lVar9 != 0) {
      FMemory::Free(lVar9);
    }
  }
  else {
    iVar6 = (int)plVar5[1] + -1;
    if ((int)plVar5[1] == 0) {
      iVar6 = 0;
    }
    if ((iVar2 != 0) || (iVar3 = 1, iVar6 == 0)) {
      iVar3 = 0;
    }
    local_68 = lVar9;
    local_60 = iVar2;
    local_5c = iVar8;
    if (iVar8 < iVar3 + iVar6 + iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68);
    }
    iVar2 = local_60;
    local_res10 = (void *)*plVar5;
    lVar9 = local_68;
    iVar3 = local_5c;
    iVar8 = local_60;
    if (iVar6 != 0) {
      lVar7 = (longlong)local_60;
      local_60 = local_60 + (uint)(local_60 == 0) + iVar6;
      if (local_5c < local_60) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar2);
      }
      iVar3 = local_5c;
      iVar8 = local_60;
      lVar9 = local_68;
      _Dst = (void *)(local_68 + (lVar7 - (ulonglong)(iVar2 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_res10,(longlong)iVar6 * 2);
      *(undefined2 *)((longlong)iVar6 * 2 + (longlong)_Dst) = 0;
    }
    *param_2 = lVar9;
    *(int *)(param_2 + 1) = iVar8;
    *(int *)((longlong)param_2 + 0xc) = iVar3;
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1417377e0 GetExportLoadClass body=74 status=ok
// SIG undefined GetExportLoadClass(void)

void FLinkerLoad::GetExportLoadClass(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_2 * 0x88 + *(longlong *)(param_1 + 0x18);
  uVar1 = *(uint *)(lVar2 + 0x10);
  if (((int)uVar1 < 0) && ((*(uint *)(param_1 + 0x290) & 0x100000) == 0)) {
    FUN_141748b40(param_1,~uVar1);
  }
  FUN_14173d7a0(param_1,*(undefined4 *)(lVar2 + 0x10));
  return;
}



// FUNCTION 141737830 GetExportPathName body=2091 status=ok
// SIG undefined GetExportPathName(void)

ulonglong *
FLinker::GetExportPathName
          (longlong param_1,ulonglong *param_2,int param_3,short *param_4,char param_5)

{
  void *pvVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  ulonglong *puVar6;
  void **ppvVar7;
  int iVar8;
  void *pvVar9;
  int iVar10;
  uint uVar11;
  void *pvVar12;
  void *_Src;
  longlong lVar13;
  int iVar14;
  int iVar15;
  void *pvVar16;
  bool bVar17;
  void *local_198;
  undefined8 local_190;
  void *local_188;
  ulonglong local_180;
  void *local_178;
  undefined8 local_170;
  void *local_168;
  undefined8 local_160;
  uint local_158;
  void *local_150;
  undefined8 local_148;
  void *local_140;
  undefined8 local_138;
  void *local_130;
  undefined8 local_128;
  longlong local_120;
  longlong local_118;
  void *local_110;
  undefined8 local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8 [2];
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
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  
  pvVar9 = (void *)0x0;
  param_3 = param_3 + 1;
  bVar5 = false;
  local_158 = 2;
  _Src = pvVar9;
  if (param_3 == 0) {
LAB_141737dd4:
    if (param_4 != (short *)0x0) {
LAB_141737dd9:
      local_188 = (void *)0x0;
      local_180 = 0;
      if (*param_4 != 0) {
        lVar13 = -1;
        do {
          lVar13 = lVar13 + 1;
        } while (param_4[lVar13] != 0);
        uVar11 = (int)lVar13 + 1;
        local_180 = (ulonglong)uVar11;
        if (0 < (int)uVar11) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
        }
        FGenericPlatformString::Memcpy(local_188);
      }
      ppvVar7 = &local_188;
      local_158 = 1;
      goto LAB_141737e4f;
    }
  }
  else {
    lVar13 = *(longlong *)(param_1 + 0x18);
    do {
      local_f0 = (longlong)param_3 * 0x88 + -0x88;
      local_d8 = *(undefined8 *)(lVar13 + local_f0);
      uStack_d0 = ((undefined8 *)(lVar13 + local_f0))[1];
      puVar3 = (undefined8 *)(lVar13 + 0x10 + local_f0);
      local_c8 = *puVar3;
      uStack_c0 = puVar3[1];
      puVar3 = (undefined8 *)(lVar13 + 0x20 + local_f0);
      local_b8 = *puVar3;
      uStack_b0 = puVar3[1];
      puVar3 = (undefined8 *)(lVar13 + 0x30 + local_f0);
      local_a8 = *puVar3;
      uStack_a0 = puVar3[1];
      puVar3 = (undefined8 *)(lVar13 + 0x40 + local_f0);
      local_98 = *puVar3;
      uStack_90 = puVar3[1];
      puVar3 = (undefined8 *)(lVar13 + 0x50 + local_f0);
      local_88 = *puVar3;
      uStack_80 = puVar3[1];
      puVar3 = (undefined8 *)(lVar13 + 0x60 + local_f0);
      local_78 = *puVar3;
      uStack_70 = puVar3[1];
      puVar4 = (undefined4 *)(lVar13 + 0x70 + local_f0);
      local_68 = *puVar4;
      uStack_64 = puVar4[1];
      uStack_60 = puVar4[2];
      uStack_5c = puVar4[3];
      local_58 = *(undefined8 *)(lVar13 + 0x80 + local_f0);
      iVar10 = (int)pvVar9;
      pvVar16 = _Src;
      if ((iVar10 != 0) && (iVar14 = iVar10 + -1, 0 < iVar14)) {
        if ((int)uStack_d0 == 0) {
LAB_141737952:
          local_f8 = 0xcf;
          if (param_3 < 1) {
            local_118 = 0;
          }
          else {
            GetExportClassName(param_1,&local_118,param_3 + -1);
          }
          if (local_118 == local_f8) goto LAB_141737ad7;
          local_150 = (void *)0x0;
          local_148 = 2;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_150,0);
          pvVar1 = local_150;
          FGenericPlatformString::Memcpy(local_150,&DAT_144d0838c,4);
          iVar8 = (int)local_148;
          pvVar12 = (void *)0x0;
          if ((int)local_148 < 2) {
            local_110 = (void *)0x0;
            local_108 = CONCAT44(local_108._4_4_,iVar10);
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_110,pvVar9,0);
            pvVar16 = local_110;
            ::_guard_xfg_dispatch_icall_nop(local_110,_Src,(longlong)iVar10 * 2);
            pvVar12 = pvVar1;
            uVar11 = (uint)local_108;
          }
          else {
            iVar10 = local_148._4_4_;
            bVar17 = (int)local_148 == 0;
            local_168 = pvVar1;
            local_160._0_4_ = (int)local_148;
            local_160._4_4_ = local_148._4_4_;
            local_148 = 0;
            if (iVar10 < (int)(iVar8 + (uint)bVar17 + iVar14)) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_168);
              iVar8 = (uint)local_160;
            }
            uVar11 = iVar8 + (uint)(iVar8 == 0) + iVar14;
            local_160 = CONCAT44(local_160._4_4_,uVar11);
            if (local_160._4_4_ < (int)uVar11) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,iVar8);
              uVar11 = (uint)local_160;
            }
            pvVar16 = local_168;
            pvVar9 = (void *)((longlong)local_168 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2)
            ;
            ::_guard_xfg_dispatch_icall_nop(pvVar9,_Src,(longlong)iVar14 * 2);
            *(undefined2 *)((longlong)iVar14 * 2 + (longlong)pvVar9) = 0;
            local_168 = (void *)0x0;
            local_160 = 0;
          }
          if (_Src != (void *)0x0) {
            FMemory::Free(_Src);
          }
          local_110 = (void *)0x0;
          local_108 = 0;
        }
        else {
          local_100 = 0xcf;
          if ((int)uStack_d0 < 1) {
            local_120 = 0;
          }
          else {
            GetExportClassName(param_1,&local_120,(int)uStack_d0 + -1);
          }
          if (local_120 == local_100) goto LAB_141737952;
LAB_141737ad7:
          local_140 = (void *)0x0;
          local_138 = 2;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_140,0);
          pvVar1 = local_140;
          FGenericPlatformString::Memcpy(local_140,&DAT_144d084bc,4);
          iVar8 = (int)local_138;
          pvVar12 = (void *)0x0;
          if ((int)local_138 < 2) {
            local_188 = (void *)0x0;
            local_180 = CONCAT44(local_180._4_4_,iVar10);
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_188,pvVar9,0);
            pvVar16 = local_188;
            ::_guard_xfg_dispatch_icall_nop(local_188,_Src,(longlong)iVar10 * 2);
            pvVar12 = pvVar1;
            uVar11 = (uint)local_180;
          }
          else {
            iVar10 = local_138._4_4_;
            bVar17 = (int)local_138 == 0;
            local_198 = pvVar1;
            local_190._0_4_ = (int)local_138;
            local_190._4_4_ = local_138._4_4_;
            local_138 = 0;
            if (iVar10 < (int)(iVar8 + (uint)bVar17 + iVar14)) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_198);
              iVar8 = (uint)local_190;
            }
            uVar11 = (uint)(iVar8 == 0) + iVar14 + iVar8;
            local_190 = CONCAT44(local_190._4_4_,uVar11);
            if (local_190._4_4_ < (int)uVar11) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,iVar8);
              uVar11 = (uint)local_190;
            }
            pvVar16 = local_198;
            pvVar9 = (void *)((longlong)local_198 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2)
            ;
            ::_guard_xfg_dispatch_icall_nop(pvVar9,_Src,(longlong)iVar14 * 2);
            *(undefined2 *)((longlong)iVar14 * 2 + (longlong)pvVar9) = 0;
            local_198 = (void *)0x0;
            local_190 = 0;
          }
          if (_Src != (void *)0x0) {
            FMemory::Free(_Src);
          }
          local_188 = (void *)0x0;
          local_180 = 0;
        }
        pvVar9 = (void *)(ulonglong)uVar11;
        if (pvVar12 != (void *)0x0) {
          FMemory::Free(pvVar12);
        }
      }
      _Src = (void *)0x0;
      puVar6 = (ulonglong *)FName::ToString(&local_d8,local_e8);
      iVar10 = (int)pvVar9;
      if ((int)puVar6[1] < 2) {
        local_130 = (void *)0x0;
        local_128 = CONCAT44(local_128._4_4_,iVar10);
        if (iVar10 == 0) {
          iVar14 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_130,pvVar9,0);
          _Src = local_130;
          ::_guard_xfg_dispatch_icall_nop(local_130,pvVar16,(longlong)iVar10 * 2);
          pvVar9 = (void *)(local_128 & 0xffffffff);
          iVar14 = local_128._4_4_;
        }
      }
      else {
        pvVar9 = (void *)(ulonglong)(iVar10 - 1);
        if (iVar10 == 0) {
          pvVar9 = _Src;
        }
        iVar10 = (int)pvVar9;
        if (((int)puVar6[1] != 0) || (iVar14 = 1, iVar10 == 0)) {
          iVar14 = 0;
        }
        local_178 = (void *)*puVar6;
        *puVar6 = 0;
        local_170._0_4_ = (uint)puVar6[1];
        local_170._4_4_ = *(int *)((longlong)puVar6 + 0xc);
        puVar6[1] = 0;
        uVar11 = (uint)local_170;
        if (local_170._4_4_ < (int)(iVar10 + (uint)local_170 + iVar14)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_178);
          uVar11 = (uint)local_170;
        }
        pvVar9 = (void *)(ulonglong)uVar11;
        _Src = local_178;
        iVar14 = local_170._4_4_;
        if (iVar10 != 0) {
          local_170._0_4_ = iVar10 + (uint)(uVar11 == 0) + uVar11;
          if (local_170._4_4_ < (int)(uint)local_170) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,pvVar9);
          }
          iVar14 = local_170._4_4_;
          _Src = local_178;
          pvVar9 = (void *)(ulonglong)(uint)local_170;
          pvVar1 = (void *)((longlong)local_178 +
                           ((longlong)(int)uVar11 - (ulonglong)(uVar11 != 0)) * 2);
          ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar16,(longlong)iVar10 * 2);
          *(undefined2 *)((longlong)iVar10 * 2 + (longlong)pvVar1) = 0;
        }
        local_178 = (void *)0x0;
        local_170 = 0;
      }
      if (pvVar16 != (void *)0x0) {
        FMemory::Free(pvVar16);
      }
      local_130 = (void *)0x0;
      local_128 = 0;
      if (local_e8[0] != 0) {
        FMemory::Free();
      }
      if ((bVar5) || (local_88._4_1_ != '\0')) {
        bVar5 = true;
      }
      lVar13 = *(longlong *)(param_1 + 0x18);
      param_3 = *(int *)(local_f0 + 8 + lVar13);
    } while (param_3 != 0);
    if (!bVar5) goto LAB_141737dd4;
    if (param_4 != (short *)0x0) goto LAB_141737dd9;
    if (param_5 != '\0') {
      *param_2 = (ulonglong)_Src;
      *(int *)(param_2 + 1) = (int)pvVar9;
      *(int *)((longlong)param_2 + 0xc) = iVar14;
      return param_2;
    }
  }
  ppvVar7 = (void **)UObjectBaseUtility::GetPathName(*(undefined8 *)(param_1 + 0xa0));
LAB_141737e4f:
  iVar10 = *(int *)(ppvVar7 + 1);
  local_198 = *ppvVar7;
  *ppvVar7 = (void *)0x0;
  local_190._0_4_ = *(uint *)(ppvVar7 + 1);
  local_190._4_4_ = *(int *)((longlong)ppvVar7 + 0xc);
  ppvVar7[1] = (void *)0x0;
  iVar14 = (uint)local_190;
  if (local_190._4_4_ < (int)((2 - (uint)(iVar10 != 0)) + (uint)local_190)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_198);
    iVar14 = (uint)local_190;
  }
  local_190._0_4_ = (2 - (uint)(iVar14 != 0)) + iVar14;
  if (local_190._4_4_ < (int)(uint)local_190) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,iVar14);
  }
  pvVar16 = local_198;
  puVar2 = (undefined2 *)((longlong)local_198 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
  *puVar2 = 0x2e;
  puVar2[1] = 0;
  iVar10 = (int)pvVar9;
  if ((int)(uint)local_190 < 2) {
    *param_2 = 0;
    *(int *)(param_2 + 1) = iVar10;
    if (iVar10 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,pvVar9);
      ::_guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar10 * 2);
    }
    if (pvVar16 != (void *)0x0) {
      FMemory::Free(pvVar16);
    }
  }
  else {
    iVar14 = iVar10 + -1;
    if (iVar10 == 0) {
      iVar14 = 0;
    }
    if (((uint)local_190 != 0) || (iVar10 = 1, iVar14 == 0)) {
      iVar10 = 0;
    }
    if (local_190._4_4_ < (int)((uint)local_190 + iVar10 + iVar14)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_198);
    }
    iVar10 = (uint)local_190;
    pvVar9 = local_198;
    iVar15 = local_190._4_4_;
    iVar8 = (uint)local_190;
    if (iVar14 != 0) {
      lVar13 = (longlong)(int)(uint)local_190;
      local_190._0_4_ = iVar14 + (uint)((uint)local_190 == 0) + (uint)local_190;
      if (local_190._4_4_ < (int)(uint)local_190) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,iVar10,0);
      }
      iVar15 = local_190._4_4_;
      iVar8 = (uint)local_190;
      pvVar9 = local_198;
      pvVar16 = (void *)((longlong)local_198 + (lVar13 - (ulonglong)(iVar10 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(pvVar16,_Src,(longlong)iVar14 * 2);
      *(undefined2 *)((longlong)pvVar16 + (longlong)iVar14 * 2) = 0;
    }
    *param_2 = (ulonglong)pvVar9;
    *(int *)(param_2 + 1) = iVar8;
    *(int *)((longlong)param_2 + 0xc) = iVar15;
  }
  uVar11 = local_158;
  if (((local_158 & 2) != 0) && (uVar11 = local_158 & 0xfffffffd, local_e8[0] != 0)) {
    FMemory::Free();
  }
  if (((uVar11 & 1) != 0) && (local_188 != (void *)0x0)) {
    FMemory::Free();
  }
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  return param_2;
}



// FUNCTION 141738060 GetFullImpExpName body=76 status=ok
// SIG undefined GetFullImpExpName(void)

undefined8 * FLinker::GetFullImpExpName(undefined8 param_1,undefined8 *param_2,uint param_3)

{
  if ((int)param_3 < 0) {
    GetImportFullName(param_1,param_2,~param_3);
    return param_2;
  }
  if (0 < (int)param_3) {
    GetExportFullName(param_1,param_2,param_3 - 1,0,0);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1417380b0 FUN_1417380b0 body=410 status=ok
// SIG undefined FUN_1417380b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1417380b0(void)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *local_18;
  int local_10;
  
  if ((DAT_1469e7708 <=
       *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38)) || (_Init_thread_header(&DAT_1469e7708), DAT_1469e7708 != -1))
  goto LAB_1417380dd;
  local_18 = (longlong *)0x0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_143f4c9a8;
    plVar2[1] = (longlong)FUN_141733bd0;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[3] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143f4c9f0;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1469e7700 =
       (**(code **)(*DAT_1468b1f88 + 0x60))
                 (DAT_1468b1f88,L"gc.DumpPoolStats",L"Dumps count and size of GC Pools",&local_18,0)
  ;
  _DAT_1469e76f8 = &PTR_FUN_143f3ecf0;
  if (local_10 == 0) {
LAB_141738234:
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
    }
  }
  else if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
    goto LAB_141738234;
  }
  atexit(FUN_143e7c930);
  _Init_thread_footer(&DAT_1469e7708);
LAB_1417380dd:
  if ((DAT_1469e7710 == (undefined8 *)0x0) &&
     (puVar1 = (undefined8 *)operator_new(0x18), DAT_1469e7710 = (undefined8 *)0x0,
     puVar1 != (undefined8 *)0x0)) {
    *puVar1 = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    DAT_1469e7710 = puVar1;
    return puVar1;
  }
  return DAT_1469e7710;
}



// FUNCTION 141738250 GetImportFullName body=534 status=ok
// SIG undefined GetImportFullName(void)

longlong * FLinker::GetImportFullName(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  void *_Dst;
  void *_Src;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong local_58;
  int local_50;
  int local_4c;
  longlong local_48;
  longlong local_38 [2];
  
  plVar4 = (longlong *)FName::ToString();
  lVar8 = plVar4[1];
  local_58 = *plVar4;
  *plVar4 = 0;
  local_50 = (int)plVar4[1];
  local_4c = *(int *)((longlong)plVar4 + 0xc);
  plVar4[1] = 0;
  iVar5 = local_50;
  if (local_4c < (int)((2 - (uint)((int)lVar8 != 0)) + local_50)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58);
    iVar5 = local_50;
  }
  local_50 = (2 - (uint)(iVar5 != 0)) + iVar5;
  if (local_4c < local_50) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
  }
  iVar7 = local_4c;
  iVar2 = local_50;
  lVar8 = local_58;
  puVar1 = (undefined2 *)(local_58 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
  *puVar1 = 0x20;
  puVar1[1] = 0;
  plVar4 = (longlong *)GetImportPathName(param_1,local_38,param_3);
  if (iVar2 < 2) {
    *param_2 = 0;
    *param_2 = *plVar4;
    *plVar4 = 0;
    *(int *)(param_2 + 1) = (int)plVar4[1];
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar4 + 0xc);
    plVar4[1] = 0;
    if (lVar8 != 0) {
      FMemory::Free(lVar8);
    }
  }
  else {
    iVar5 = (int)plVar4[1] + -1;
    if ((int)plVar4[1] == 0) {
      iVar5 = 0;
    }
    if ((iVar2 != 0) || (iVar3 = 1, iVar5 == 0)) {
      iVar3 = 0;
    }
    local_58 = lVar8;
    local_50 = iVar2;
    local_4c = iVar7;
    if (iVar7 < iVar3 + iVar5 + iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58);
    }
    iVar2 = local_50;
    _Src = (void *)*plVar4;
    lVar8 = local_58;
    iVar3 = local_4c;
    iVar7 = local_50;
    if (iVar5 != 0) {
      lVar6 = (longlong)local_50;
      local_50 = (uint)(local_50 == 0) + iVar5 + local_50;
      if (local_4c < local_50) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar2);
      }
      iVar3 = local_4c;
      iVar7 = local_50;
      lVar8 = local_58;
      _Dst = (void *)(local_58 + (lVar6 - (ulonglong)(iVar2 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar5 * 2);
      *(undefined2 *)((longlong)iVar5 * 2 + (longlong)_Dst) = 0;
    }
    *param_2 = lVar8;
    *(int *)(param_2 + 1) = iVar7;
    *(int *)((longlong)param_2 + 0xc) = iVar3;
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141738470 GetImportPathName body=1630 status=ok
// SIG undefined GetImportPathName(void)

void ** FLinker::GetImportPathName(longlong param_1,void **param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  void *pvVar3;
  ulonglong *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  void *pvVar10;
  int iVar11;
  longlong local_res10;
  longlong local_res20;
  void *local_f8;
  undefined8 local_f0;
  void *local_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  longlong local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  longlong local_50 [3];
  
  *param_2 = (void *)0x0;
  param_2[1] = (void *)0x0;
  uVar2 = ~param_3;
  do {
    if (uVar2 == 0) {
      return param_2;
    }
    pvVar9 = (void *)0x0;
    if ((int)uVar2 < 0) {
      puVar6 = (undefined4 *)((longlong)(int)~uVar2 * 0x38 + *(longlong *)(param_1 + 8));
    }
    else {
      puVar6 = (undefined4 *)((longlong)(int)(uVar2 - 1) * 0x88 + *(longlong *)(param_1 + 0x18));
    }
    local_60 = *puVar6;
    uStack_5c = puVar6[1];
    uStack_58 = puVar6[2];
    uStack_54 = puVar6[3];
    bVar1 = false;
    iVar8 = 0;
    iVar5 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      iVar5 = iVar8;
    }
    if (0 < iVar5) {
      local_70 = 0xcf;
      if ((int)uVar2 < 0) {
        local_res10 = *(longlong *)
                       ((longlong)(int)~uVar2 * 0x38 + 0x18 + *(longlong *)(param_1 + 8));
      }
      else if ((int)uVar2 < 1) {
        local_res10 = 0;
      }
      else {
        GetExportClassName(param_1,&local_res10,uVar2 - 1);
      }
      if (local_res10 != local_70) {
        if (uStack_58 != 0) {
          local_68 = 0xcf;
          if ((int)uStack_58 < 0) {
            local_res20 = *(longlong *)
                           (*(longlong *)(param_1 + 8) + (longlong)(int)uStack_58 * -0x38 + -0x20);
          }
          else if ((int)uStack_58 < 1) {
            local_res20 = 0;
          }
          else {
            GetExportClassName(param_1,&local_res20,uStack_58 - 1);
          }
          if (local_res20 != local_68) goto LAB_141738594;
        }
        bVar1 = true;
      }
    }
LAB_141738594:
    iVar5 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      iVar5 = iVar8;
    }
    if (0 < iVar5) {
      if (bVar1) {
        local_98 = (void *)0x0;
        local_90 = 2;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
        pvVar10 = local_98;
        FGenericPlatformString::Memcpy(local_98,&DAT_144d082d4,4);
        iVar8 = (int)local_90;
        iVar5 = *(int *)(param_2 + 1);
        if ((int)local_90 < 2) {
          pvVar3 = *param_2;
          local_c8 = (void *)0x0;
          local_c0 = CONCAT44(local_c0._4_4_,iVar5);
          if (iVar5 == 0) {
            local_c0 = 0;
            iVar7 = 0;
            iVar11 = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c8,iVar5,0);
            pvVar9 = local_c8;
            ::_guard_xfg_dispatch_icall_nop(local_c8,pvVar3,(longlong)iVar5 * 2);
            iVar7 = local_c0._4_4_;
            iVar11 = (int)local_c0;
          }
        }
        else {
          pvVar3 = (void *)(ulonglong)(iVar5 - 1);
          if (iVar5 == 0) {
            pvVar3 = pvVar9;
          }
          iVar5 = (int)pvVar3;
          if (((int)local_90 != 0) || (pvVar3 = (void *)0x1, iVar5 == 0)) {
            pvVar3 = pvVar9;
          }
          iVar11 = local_90._4_4_;
          iVar7 = (int)local_90 + (int)pvVar3;
          local_f8 = pvVar10;
          local_f0._0_4_ = (int)local_90;
          local_f0._4_4_ = local_90._4_4_;
          pvVar10 = (void *)0x0;
          local_90 = 0;
          if (iVar11 < iVar7 + iVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_f8);
            iVar8 = (int)local_f0;
          }
          local_78 = *param_2;
          pvVar9 = local_f8;
          iVar7 = local_f0._4_4_;
          iVar11 = iVar8;
          if (iVar5 != 0) {
            local_f0._0_4_ = iVar5 + (uint)(iVar8 == 0) + iVar8;
            if (local_f0._4_4_ < (int)local_f0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,iVar8);
            }
            iVar7 = local_f0._4_4_;
            iVar11 = (int)local_f0;
            pvVar9 = local_f8;
            pvVar3 = (void *)((longlong)local_f8 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
            ::_guard_xfg_dispatch_icall_nop(pvVar3,local_78,(longlong)iVar5 * 2);
            *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar3) = 0;
          }
          local_f8 = (void *)0x0;
          local_c0 = CONCAT44(iVar7,(int)local_c0);
          local_f0 = 0;
        }
        if (param_2 == &local_c8) {
LAB_1417388e7:
          if (pvVar9 != (void *)0x0) {
            FMemory::Free(pvVar9);
          }
        }
        else {
          if (*param_2 != (void *)0x0) {
            FMemory::Free();
          }
          *param_2 = pvVar9;
          *(int *)((longlong)param_2 + 0xc) = iVar7;
          *(int *)(param_2 + 1) = iVar11;
          local_c8 = (void *)0x0;
          local_c0 = 0;
        }
      }
      else {
        local_88 = (void *)0x0;
        local_80 = 2;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
        pvVar10 = local_88;
        FGenericPlatformString::Memcpy(local_88,&DAT_144d08354,4);
        iVar11 = (int)local_80;
        iVar5 = *(int *)(param_2 + 1);
        if ((int)local_80 < 2) {
          pvVar3 = *param_2;
          local_b8 = (void *)0x0;
          local_b0 = CONCAT44(local_b0._4_4_,iVar5);
          if (iVar5 == 0) {
            local_b0 = 0;
            iVar7 = 0;
            iVar8 = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b8,iVar5,0);
            pvVar9 = local_b8;
            ::_guard_xfg_dispatch_icall_nop(local_b8,pvVar3,(longlong)iVar5 * 2);
            iVar7 = local_b0._4_4_;
            iVar8 = (int)local_b0;
          }
        }
        else {
          pvVar3 = (void *)(ulonglong)(iVar5 - 1);
          if (iVar5 == 0) {
            pvVar3 = pvVar9;
          }
          iVar5 = (int)pvVar3;
          if (((int)local_80 != 0) || (iVar7 = 1, iVar5 == 0)) {
            iVar7 = iVar8;
          }
          iVar8 = local_80._4_4_;
          iVar7 = iVar7 + (int)local_80;
          local_e8 = pvVar10;
          local_e0._0_4_ = (int)local_80;
          local_e0._4_4_ = local_80._4_4_;
          pvVar10 = (void *)0x0;
          local_80 = 0;
          if (iVar8 < iVar7 + iVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_e8);
            iVar11 = (int)local_e0;
          }
          local_78 = *param_2;
          pvVar9 = local_e8;
          iVar7 = local_e0._4_4_;
          iVar8 = iVar11;
          if (iVar5 != 0) {
            local_e0._0_4_ = iVar11 + (uint)(iVar11 == 0) + iVar5;
            if (local_e0._4_4_ < (int)local_e0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,iVar11);
            }
            iVar7 = local_e0._4_4_;
            iVar8 = (int)local_e0;
            pvVar9 = local_e8;
            pvVar3 = (void *)((longlong)local_e8 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0)) * 2
                             );
            ::_guard_xfg_dispatch_icall_nop(pvVar3,local_78,(longlong)iVar5 * 2);
            *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar3) = 0;
          }
          local_e8 = (void *)0x0;
          local_b0 = CONCAT44(iVar7,(int)local_b0);
          local_e0 = 0;
        }
        if (param_2 == &local_b8) goto LAB_1417388e7;
        if (*param_2 != (void *)0x0) {
          FMemory::Free();
        }
        *param_2 = pvVar9;
        *(int *)((longlong)param_2 + 0xc) = iVar7;
        *(int *)(param_2 + 1) = iVar8;
        local_b8 = (void *)0x0;
        local_b0 = 0;
      }
      if (pvVar10 != (void *)0x0) {
        FMemory::Free(pvVar10);
      }
    }
    pvVar9 = (void *)0x0;
    puVar4 = (ulonglong *)FName::ToString(&local_60,local_50);
    iVar5 = *(int *)(param_2 + 1);
    if ((int)puVar4[1] < 2) {
      pvVar10 = *param_2;
      local_a8 = (void *)0x0;
      local_a0 = CONCAT44(local_a0._4_4_,iVar5);
      if (iVar5 == 0) {
        local_a0 = 0;
        iVar8 = 0;
        iVar7 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,iVar5,0);
        pvVar9 = local_a8;
        ::_guard_xfg_dispatch_icall_nop(local_a8,pvVar10,(longlong)iVar5 * 2);
        iVar8 = (int)local_a0;
        iVar7 = local_a0._4_4_;
      }
    }
    else {
      pvVar10 = (void *)(ulonglong)(iVar5 - 1);
      if (iVar5 == 0) {
        pvVar10 = pvVar9;
      }
      iVar5 = (int)pvVar10;
      if (((int)puVar4[1] != 0) || (iVar8 = 1, iVar5 == 0)) {
        iVar8 = 0;
      }
      local_d8 = (void *)*puVar4;
      *puVar4 = 0;
      local_d0._0_4_ = (int)puVar4[1];
      local_d0._4_4_ = *(int *)((longlong)puVar4 + 0xc);
      puVar4[1] = 0;
      iVar11 = (int)local_d0;
      if (local_d0._4_4_ < iVar5 + (int)local_d0 + iVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_d8);
        iVar11 = (int)local_d0;
      }
      pvVar10 = *param_2;
      pvVar9 = local_d8;
      iVar7 = local_d0._4_4_;
      iVar8 = iVar11;
      if (iVar5 != 0) {
        local_d0._0_4_ = iVar11 + (uint)(iVar11 == 0) + iVar5;
        if (local_d0._4_4_ < (int)local_d0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,iVar11);
        }
        iVar7 = local_d0._4_4_;
        iVar8 = (int)local_d0;
        pvVar9 = local_d8;
        pvVar3 = (void *)((longlong)local_d8 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0)) * 2);
        ::_guard_xfg_dispatch_icall_nop(pvVar3,pvVar10,(longlong)iVar5 * 2);
        *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar3) = 0;
      }
      local_d8 = (void *)0x0;
      local_a0 = CONCAT44(iVar7,(int)local_a0);
      local_d0 = 0;
    }
    if (param_2 == &local_a8) {
      if (pvVar9 != (void *)0x0) {
        FMemory::Free(pvVar9);
      }
    }
    else {
      if (*param_2 != (void *)0x0) {
        FMemory::Free();
      }
      *param_2 = pvVar9;
      *(int *)(param_2 + 1) = iVar8;
      *(int *)((longlong)param_2 + 0xc) = iVar7;
      local_a8 = (void *)0x0;
      local_a0 = 0;
    }
    uVar2 = uStack_58;
    if (local_50[0] != 0) {
      FMemory::Free();
      uVar2 = uStack_58;
    }
  } while( true );
}



// FUNCTION 141738ad0 GetIndexByName body=189 status=ok
// SIG undefined GetIndexByName(void)

int UEnum::GetIndexByName(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined8 local_res10;
  longlong local_18 [2];
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    piVar2 = *(int **)(param_1 + 0x40);
    lVar3 = 0;
    local_res10._4_4_ = (int)((ulonglong)param_2 >> 0x20);
    do {
      if ((*piVar2 == (int)param_2) && (piVar2[1] == local_res10._4_4_)) {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 1;
      piVar2 = piVar2 + 4;
    } while (lVar3 < *(int *)(param_1 + 0x48));
  }
  local_res10 = param_2;
  uVar1 = FName::ToString(&local_res10,local_18);
  iVar4 = FUN_141738b90(param_1,uVar1,param_3);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return iVar4;
}



// FUNCTION 141738b90 FUN_141738b90 body=1671 status=ok
// SIG undefined FUN_141738b90(void)

code * FUN_141738b90(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  void *_Src;
  bool bVar1;
  undefined8 *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  code **ppcVar7;
  longlong *plVar8;
  ushort *puVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  code *pcVar15;
  undefined2 *puVar16;
  code *pcVar17;
  uint uVar18;
  code *pcVar19;
  longlong lVar20;
  ushort *puVar21;
  int *piVar22;
  code *pcVar23;
  longlong *local_res8;
  undefined8 *local_res10;
  uint local_res18 [2];
  int local_res20 [2];
  code *local_b8;
  uint local_b0;
  int local_ac;
  code *local_a8;
  code *local_98;
  undefined8 uStack_90;
  code *local_78;
  undefined8 local_70;
  uint local_68;
  uint local_64;
  int local_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  
  local_res18[0] = (uint)param_3;
  pcVar17 = (code *)0x0;
  uVar6 = 0;
  iVar14 = 0;
  local_res20[0] = 0;
  bVar3 = ~(byte)(param_3 >> 1);
  local_b0 = *(uint *)(param_2 + 1);
  lVar20 = (longlong)(int)local_b0;
  _Src = (void *)*param_2;
  local_68 = (uint)bVar3;
  local_64 = bVar3 & 1;
  local_b8 = (code *)0x0;
  local_res8 = param_1;
  local_res10 = param_2;
  if (local_b0 == 0) {
    local_ac = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b8,local_b0,0);
    _guard_xfg_dispatch_icall_nop(local_b8,_Src,lVar20 * 2);
  }
  local_a8 = (code *)0x0;
  local_78 = (code *)0x0;
  local_70 = (code *)0x0;
  iVar4 = FUN_141592950(&local_b8,&DAT_144d0cb08,0,0,0xffffffff);
  puVar21 = &DAT_143f3eda8;
  iVar13 = 0;
  if (iVar4 == -1) {
    pcVar19 = (code *)&DAT_143f3eda8;
    if (local_b0 != 0) {
      pcVar19 = local_b8;
    }
    ppcVar7 = (code **)(**(code **)(*param_1 + 0x298))(param_1,&local_98,pcVar19);
    pcVar15 = pcVar17;
    if (&local_78 != ppcVar7) {
      pcVar15 = *ppcVar7;
      *ppcVar7 = (code *)0x0;
      uVar6 = *(uint *)(ppcVar7 + 1);
      local_70 = ppcVar7[1];
      ppcVar7[1] = (code *)0x0;
      local_a8 = pcVar15;
      local_78 = pcVar15;
    }
    if (local_98 != (code *)0x0) {
      FMemory::Free();
    }
  }
  else {
    if (local_b0 == 0) {
      pcVar19 = (code *)&DAT_143f3eda8;
      iVar11 = iVar14;
    }
    else {
      pcVar19 = local_b8;
      iVar11 = local_b0 + -1;
    }
    iVar5 = (iVar11 - iVar4) + -2;
    iVar12 = iVar14;
    if ((-1 < iVar5) && (iVar12 = iVar11, iVar5 < iVar11)) {
      iVar12 = iVar5;
    }
    local_a8 = (code *)0x0;
    local_98 = (code *)0x0;
    uStack_90 = (uint *)((ulonglong)uStack_90 & 0xffffffff);
    pcVar19 = pcVar19 + ((longlong)iVar11 - (longlong)iVar12) * 2;
    if ((pcVar19 == (code *)0x0) || (*(short *)pcVar19 == 0)) {
      pcVar15 = (code *)0x0;
      iVar11 = iVar13;
    }
    else {
      lVar20 = -1;
      do {
        lVar20 = lVar20 + 1;
      } while (*(short *)(pcVar19 + lVar20 * 2) != 0);
      uVar18 = (int)lVar20 + 1;
      uStack_90 = (uint *)(ulonglong)uVar18;
      iVar11 = iVar14;
      uVar6 = uVar18;
      if (0 < (int)uVar18) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
        iVar11 = uStack_90._4_4_;
        uVar6 = (uint)uStack_90;
      }
      pcVar15 = local_98;
      local_a8 = local_98;
      FGenericPlatformString::Memcpy(local_98,pcVar19,(longlong)(int)uVar18 * 2);
    }
    local_70 = (code *)CONCAT44(iVar11,uVar6);
    param_1 = local_res8;
    local_78 = pcVar15;
  }
  FCoreRedirectObjectName::FCoreRedirectObjectName(&local_98,param_1);
  plVar8 = (longlong *)FCoreRedirects::GetValueRedirects(8,&local_98);
  if (plVar8 == (longlong *)0x0) {
    if (iVar4 != -1) {
      pcVar19 = (code *)&DAT_143f3eda8;
      if (uVar6 != 0) {
        pcVar19 = pcVar15;
      }
      ppcVar7 = (code **)(**(code **)(*param_1 + 0x298))(param_1,&local_98,pcVar19);
      if (&local_b8 != ppcVar7) {
        if (local_b8 != (code *)0x0) {
          FMemory::Free();
        }
        local_b8 = *ppcVar7;
        *ppcVar7 = (code *)0x0;
        local_b0 = *(uint *)(ppcVar7 + 1);
        local_ac = *(int *)((longlong)ppcVar7 + 0xc);
        goto LAB_141738fe2;
      }
      goto LAB_141738fe6;
    }
  }
  else {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(plVar8,local_res20,&local_b8);
    pcVar19 = pcVar17;
    if (local_res20[0] != -1) {
      pcVar19 = (code *)(*plVar8 + (longlong)local_res20[0] * 0x28);
    }
    pcVar23 = pcVar19 + 0x10;
    if (pcVar19 == (code *)0x0) {
      pcVar23 = pcVar17;
    }
    if (pcVar23 == (code *)0x0) {
      TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
      ::FindId(plVar8,local_res20,&local_78);
      pcVar19 = pcVar17;
      if (local_res20[0] != -1) {
        pcVar19 = (code *)(*plVar8 + (longlong)local_res20[0] * 0x28);
      }
      pcVar23 = pcVar19 + 0x10;
      if (pcVar19 == (code *)0x0) {
        pcVar23 = pcVar17;
      }
      if (pcVar23 == (code *)0x0) goto LAB_141738ff4;
    }
    if (*(int *)(pcVar23 + 8) == 0) {
      pcVar23 = (code *)&DAT_143f3eda8;
    }
    else {
      pcVar23 = *(code **)pcVar23;
    }
    if (local_b8 != pcVar23) {
      pcVar19 = pcVar17;
      if ((pcVar23 != (code *)0x0) && (*(short *)pcVar23 != 0)) {
        lVar20 = -1;
        do {
          lVar20 = lVar20 + 1;
        } while (*(short *)(pcVar23 + lVar20 * 2) != 0);
        pcVar19 = (code *)(ulonglong)((int)lVar20 + 1);
      }
      local_b0 = 0;
      iVar4 = (int)pcVar19;
      pcVar15 = pcVar17;
      if (local_ac != iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_b8,pcVar19);
        pcVar15 = (code *)(ulonglong)local_b0;
      }
      local_b0 = iVar4 + (int)pcVar15;
      if (local_ac < (int)local_b0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8);
      }
      if (iVar4 != 0) {
        _guard_xfg_dispatch_icall_nop(local_b8,pcVar23,(longlong)iVar4 * 2);
      }
    }
    iVar4 = FUN_141592950(&local_b8,&DAT_144d0cb68,0,0,0xffffffff);
    if (iVar4 == -1) {
      pcVar19 = (code *)&DAT_143f3eda8;
      if (local_b0 != 0) {
        pcVar19 = local_b8;
      }
      ppcVar7 = (code **)(**(code **)(*param_1 + 0x298))(param_1,&local_98,pcVar19);
      pcVar15 = local_a8;
      if (&local_78 != ppcVar7) {
        if (local_a8 != (code *)0x0) {
          FMemory::Free();
        }
        pcVar15 = *ppcVar7;
        *ppcVar7 = (code *)0x0;
        uVar6 = *(uint *)(ppcVar7 + 1);
LAB_141738fe2:
        ppcVar7[1] = (code *)0x0;
      }
LAB_141738fe6:
      if (local_98 != (code *)0x0) {
        FMemory::Free();
      }
    }
    else {
      if (local_b0 == 0) {
        pcVar19 = (code *)&DAT_143f3eda8;
      }
      else {
        iVar14 = local_b0 + -1;
        pcVar19 = local_b8;
      }
      iVar4 = (iVar14 - iVar4) + -2;
      if ((-1 < iVar4) && (iVar13 = iVar14, iVar4 < iVar14)) {
        iVar13 = iVar4;
      }
      local_98 = (code *)0x0;
      uStack_90 = (uint *)((ulonglong)uStack_90 & 0xffffffff);
      pcVar19 = pcVar19 + ((longlong)iVar14 - (longlong)iVar13) * 2;
      pcVar15 = pcVar17;
      uVar6 = 0;
      if ((pcVar19 != (code *)0x0) && (uVar6 = 0, *(short *)pcVar19 != 0)) {
        lVar20 = -1;
        do {
          lVar20 = lVar20 + 1;
        } while (*(short *)(pcVar19 + lVar20 * 2) != 0);
        uVar18 = (int)lVar20 + 1;
        uStack_90 = (uint *)(ulonglong)uVar18;
        uVar6 = uVar18;
        if (0 < (int)uVar18) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
          uVar6 = (uint)uStack_90;
        }
        pcVar15 = local_98;
        FGenericPlatformString::Memcpy(local_98,pcVar19,(longlong)(int)uVar18 * 2);
      }
      param_1 = local_res8;
      if (local_a8 != (code *)0x0) {
        FMemory::Free();
        param_1 = local_res8;
      }
    }
  }
LAB_141738ff4:
  pcVar19 = (code *)&DAT_143f3eda8;
  if (local_b0 != 0) {
    pcVar19 = local_b8;
  }
  FName::FName(&local_60,pcVar19,1);
  pcVar19 = (code *)&DAT_143f3eda8;
  if (uVar6 != 0) {
    pcVar19 = pcVar15;
  }
  FName::FName(&local_58,pcVar19,1);
  uVar6 = local_64;
  puVar2 = local_res10;
  if (0 < (int)param_1[9]) {
    piVar22 = (int *)(param_1[8] + 4);
    pcVar19 = pcVar17;
    pcVar23 = pcVar17;
    do {
      if (((piVar22[-1] == local_60) && (*piVar22 == iStack_5c)) ||
         ((piVar22[-1] == local_58 && (*piVar22 == iStack_54)))) goto LAB_1417391e6;
      pcVar19 = (code *)(ulonglong)((int)pcVar19 + 1);
      pcVar23 = pcVar23 + 1;
      piVar22 = piVar22 + 4;
    } while ((longlong)pcVar23 < (longlong)(int)param_1[9]);
  }
  if (local_64 == 0) {
    pcVar19 = (code *)&DAT_143f3eda8;
    if (local_b0 != 0) {
      pcVar19 = local_b8;
    }
    if (*(int *)(local_res10 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (ushort *)*local_res10;
    }
    lVar20 = (longlong)pcVar19 - (longlong)puVar9;
    do {
      uVar18 = (uint)*(ushort *)((longlong)puVar9 + lVar20);
      iVar14 = *puVar9 - uVar18;
      if (iVar14 != 0) break;
      puVar9 = puVar9 + 1;
    } while (uVar18 != 0);
  }
  else {
    pcVar19 = (code *)&DAT_143f3eda8;
    if (local_b0 != 0) {
      pcVar19 = local_b8;
    }
    if (*(int *)(local_res10 + 1) == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)*local_res10;
    }
    iVar14 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar16,pcVar19);
  }
  if (iVar14 != 0) goto LAB_1417391e1;
  if (((~(byte)local_res18[0] & 1) == 0) && (1 < *(int *)(puVar2 + 1))) {
    local_res8 = (longlong *)0x0;
    puVar10 = (undefined8 *)FName::ToString(&local_res8,&local_98);
    if (uVar6 == 0) {
      if (*(int *)(puVar10 + 1) == 0) {
        puVar16 = &DAT_143f3eda8;
      }
      else {
        puVar16 = (undefined2 *)*puVar10;
      }
      if (*(int *)(puVar2 + 1) != 0) {
        puVar21 = (ushort *)*puVar2;
      }
      lVar20 = (longlong)puVar16 - (longlong)puVar21;
      do {
        uVar6 = (uint)*(ushort *)((longlong)puVar21 + lVar20);
        iVar14 = *puVar21 - uVar6;
        if (iVar14 != 0) break;
        puVar21 = puVar21 + 1;
      } while (uVar6 != 0);
    }
    else {
      if (*(int *)(puVar10 + 1) == 0) {
        puVar16 = &DAT_143f3eda8;
      }
      else {
        puVar16 = (undefined2 *)*puVar10;
      }
      if (*(int *)(puVar2 + 1) != 0) {
        puVar21 = (ushort *)*puVar2;
      }
      iVar14 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar21,puVar16);
    }
    pcVar17 = (code *)0x1;
    if (iVar14 == 0) goto LAB_141739196;
    bVar1 = true;
  }
  else {
LAB_141739196:
    bVar1 = false;
  }
  if ((pcVar17 != (code *)0x0) && (local_98 != (code *)0x0)) {
    FMemory::Free();
  }
  if (bVar1) {
    uStack_90 = local_res18;
    local_res18[0] = local_res18[0] & 0xffffff00;
    local_98 = FUN_1406ddef0;
    FUN_1415d8310(&local_98,&DAT_14622e6dc);
  }
LAB_1417391e1:
  pcVar19 = (code *)0xffffffff;
LAB_1417391e6:
  if (pcVar15 != (code *)0x0) {
    FMemory::Free(pcVar15);
  }
  if (local_b8 != (code *)0x0) {
    FMemory::Free();
  }
  return pcVar19;
}



// FUNCTION 141739220 GetMaxEnumValue body=56 status=ok
// SIG undefined GetMaxEnumValue(void)

longlong UEnum::GetMaxEnumValue(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = (longlong)*(int *)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x48) == 0) {
    return 0;
  }
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x40) + 8);
  lVar2 = *plVar3;
  if (0 < lVar4) {
    do {
      lVar1 = *plVar3;
      plVar3 = plVar3 + 2;
      if (lVar1 <= lVar2) {
        lVar1 = lVar2;
      }
      lVar2 = lVar1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return lVar2;
}



// FUNCTION 141739270 GetNameByValue body=54 status=ok
// SIG undefined GetNameByValue(void)

undefined8 * UEnum::GetNameByValue(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  puVar2 = puVar1 + (longlong)*(int *)(param_1 + 0x48) * 2;
  while( true ) {
    if (puVar1 == puVar2) {
      *param_2 = 0;
      return param_2;
    }
    if (puVar1[1] == param_3) break;
    puVar1 = puVar1 + 2;
  }
  *param_2 = *puVar1;
  return param_2;
}



// FUNCTION 1417392b0 FUN_1417392b0 body=364 status=ok
// SIG undefined FUN_1417392b0(void)

undefined8 * FUN_1417392b0(longlong param_1,undefined8 *param_2,int param_3)

{
  wchar_t *_Dest;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined8 local_res20;
  undefined2 *local_28;
  int local_20;
  
  if ((-1 < param_3) && (param_3 < *(int *)(param_1 + 0x48))) {
    local_res20 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + (longlong)param_3 * 0x10);
    if (*(int *)(param_1 + 0x50) == 0) {
      FName::ToString(&local_res20);
      return param_2;
    }
    FName::ToString(&local_res20,&local_28);
    iVar1 = FUN_141592950(&local_28,&DAT_144d0ca00,0,0,0xffffffff);
    if (iVar1 != -1) {
      uVar2 = iVar1 + 0x80000001;
      uVar5 = 0;
      uVar6 = local_20 - 1;
      if (local_20 == 0) {
        uVar6 = uVar5;
      }
      if (iVar1 + 2U < uVar6) {
        uVar6 = iVar1 + 2U;
      }
      uVar3 = local_20 - 1;
      if (local_20 == 0) {
        uVar3 = uVar5;
      }
      uVar4 = uVar6;
      if ((uVar6 <= uVar2) && (uVar4 = uVar3, uVar2 < uVar3)) {
        uVar4 = uVar2;
      }
      *param_2 = 0;
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      puVar7 = &DAT_143f3eda8;
      if (local_20 != 0) {
        puVar7 = local_28;
      }
      iVar1 = uVar4 - uVar6;
      uVar2 = iVar1 + 1;
      if (iVar1 == 0) {
        uVar2 = uVar5;
      }
      *(uint *)(param_2 + 1) = uVar2;
      if ((0 < (int)uVar2) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0), 0 < *(int *)(param_2 + 1))) {
        _Dest = (wchar_t *)*param_2;
        wcsncpy(_Dest,puVar7 + (int)uVar6,(longlong)iVar1);
        _Dest[iVar1] = L'\0';
      }
      if (local_28 == (undefined2 *)0x0) {
        return param_2;
      }
      FMemory::Free();
      return param_2;
    }
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 141739420 GetNameStringByValue body=77 status=ok
// SIG undefined GetNameStringByValue(void)

undefined8 UEnum::GetNameStringByValue(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x40) + 8);
    uVar3 = uVar2;
    do {
      if (*plVar1 == param_3) goto LAB_14173945f;
      uVar2 = (ulonglong)((int)uVar2 + 1);
      uVar3 = uVar3 + 1;
      plVar1 = plVar1 + 2;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x48));
  }
  uVar2 = 0xffffffff;
LAB_14173945f:
  FUN_1417392b0(param_1,param_2,uVar2);
  return param_2;
}



// FUNCTION 141739470 GetOrCreateIDForObject body=277 status=ok
// SIG undefined GetOrCreateIDForObject(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUniqueObjectGuid::GetOrCreateIDForObject(int *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  int *piVar5;
  int *piVar6;
  int local_res8 [2];
  undefined8 local_18;
  undefined8 uStack_10;
  
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1464b4dc8);
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1464b4dc8);
  }
  if (param_2 != DAT_1464b4df0) {
    DAT_1464b4df0 = param_2;
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(&DAT_1464b4d78,local_res8,param_2);
    piVar6 = (int *)0x0;
    if (local_res8[0] != -1) {
      piVar6 = (int *)((longlong)local_res8[0] * 0x20 + _DAT_1464b4d78);
    }
    piVar5 = piVar6 + 2;
    if (piVar6 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    if (piVar5 == (int *)0x0) {
      _DAT_1464b4df8 = 0;
      iRam00000001464b4dfc = 0;
      _DAT_1464b4e00 = 0;
      iRam00000001464b4e04 = 0;
    }
    else {
      _DAT_1464b4df8 = *piVar5;
      iRam00000001464b4dfc = piVar5[1];
      _DAT_1464b4e00 = piVar5[2];
      iRam00000001464b4e04 = piVar5[3];
    }
  }
  local_18._0_4_ = _DAT_1464b4df8;
  local_18._4_4_ = iRam00000001464b4dfc;
  uStack_10._0_4_ = _DAT_1464b4e00;
  uStack_10._4_4_ = iRam00000001464b4e04;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1464b4dc8);
  *param_1 = (int)local_18;
  param_1[1] = local_18._4_4_;
  param_1[2] = (int)uStack_10;
  param_1[3] = uStack_10._4_4_;
  if (((param_1[3] == 0 && param_1[2] == 0) && param_1[1] == 0) && *param_1 == 0) {
    piVar6 = (int *)FGuid::NewGuid(&local_18);
    iVar1 = piVar6[1];
    iVar2 = piVar6[2];
    iVar3 = piVar6[3];
    *param_1 = *piVar6;
    param_1[1] = iVar1;
    param_1[2] = iVar2;
    param_1[3] = iVar3;
    local_18 = *(undefined8 *)piVar6;
    uStack_10 = *(undefined8 *)(piVar6 + 2);
    FUObjectAnnotationSparseSearchable<FUniqueObjectGuid,1>::AddAnnotation
              (&PTR_PTR_1464b4d70,param_2,&local_18);
    UObjectBaseUtility::MarkPackageDirty(param_2);
  }
  return param_1;
}



// FUNCTION 141739590 FUN_141739590 body=5155 status=ok
// SIG undefined FUN_141739590(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined2 *
FUN_141739590(longlong param_1,short *param_2,uint param_3,undefined8 param_4,int *param_5,
             undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined2 **ppuVar6;
  void **ppvVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined2 *puVar11;
  uint uVar12;
  undefined2 *puVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined2 *puVar17;
  wchar_t *pwVar19;
  undefined1 auStack_758 [32];
  longlong local_738;
  uint local_730;
  undefined1 local_728 [4];
  uint local_724;
  undefined2 *local_720;
  undefined2 *local_718;
  undefined2 *local_710;
  int local_708;
  undefined4 local_704;
  void *local_700;
  int local_6f8;
  undefined4 local_6f4;
  void *local_6f0;
  int local_6e8;
  undefined4 local_6e4;
  int *local_6e0;
  longlong local_6d8;
  longlong local_6d0;
  ulonglong local_6c8;
  longlong local_6c0;
  ulonglong local_6b8;
  longlong local_6b0;
  ulonglong local_6a8;
  longlong local_6a0;
  ulonglong local_698;
  undefined2 *local_690;
  undefined8 local_688;
  longlong local_680 [11];
  undefined8 local_628;
  undefined8 local_620;
  undefined8 local_618;
  undefined8 local_610;
  undefined1 local_608 [4];
  undefined1 local_604 [4];
  undefined8 local_600;
  undefined8 local_5f8;
  longlong *local_5f0;
  undefined4 *local_5e8;
  longlong *local_5e0;
  undefined4 *local_5d8;
  longlong local_5d0 [3];
  code *local_5b8;
  undefined1 *puStack_5b0;
  longlong *local_5a8;
  undefined4 *local_5a0;
  longlong *local_598;
  undefined4 *local_590;
  longlong *local_588;
  undefined4 *local_580;
  undefined8 local_578;
  undefined8 local_570;
  undefined8 local_568;
  undefined8 local_560;
  undefined8 local_558;
  undefined8 local_550;
  undefined1 local_548 [8];
  longlong *local_540;
  undefined1 local_530 [8];
  longlong *local_528;
  undefined1 local_518 [8];
  undefined1 local_510 [8];
  undefined1 local_508 [8];
  longlong local_500 [2];
  longlong local_4f0 [2];
  longlong local_4e0 [2];
  longlong local_4d0 [2];
  longlong local_4c0 [3];
  undefined4 local_4a8;
  undefined4 uStack_4a4;
  undefined8 uStack_4a0;
  longlong local_498 [2];
  undefined1 local_488 [24];
  undefined1 local_470 [24];
  undefined1 local_458 [24];
  undefined1 local_440 [24];
  undefined1 local_428 [16];
  undefined1 local_418 [8];
  undefined1 local_410 [8];
  longlong *local_408;
  undefined1 local_3f8 [8];
  longlong *local_3f0;
  undefined1 local_3e0 [8];
  longlong *local_3d8;
  undefined1 local_3c8 [8];
  longlong *local_3c0;
  undefined1 local_3b0 [8];
  longlong *local_3a8;
  undefined1 local_398 [16];
  undefined1 local_388 [8];
  undefined1 local_380 [8];
  longlong *local_378;
  undefined1 local_368 [8];
  longlong *local_360;
  undefined1 local_350 [8];
  longlong *local_348;
  undefined1 local_338 [8];
  longlong *local_330;
  undefined1 local_320 [24];
  undefined1 local_308 [24];
  undefined1 local_2f0 [24];
  undefined1 local_2d8 [24];
  undefined1 local_2c0 [16];
  undefined1 local_2b0 [16];
  undefined1 local_2a0 [16];
  undefined1 local_290 [24];
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined4 local_244;
  longlong local_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  longlong local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  longlong local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined1 local_178 [32];
  undefined4 local_158;
  undefined4 local_154;
  longlong local_148;
  undefined4 local_140;
  undefined4 local_138 [4];
  undefined1 local_128 [8];
  longlong *local_120;
  char local_110;
  undefined4 local_108 [4];
  undefined1 local_f8 [8];
  longlong *local_f0;
  char local_e0;
  undefined4 local_d8 [4];
  undefined1 local_c8 [8];
  longlong *local_c0;
  char local_b0;
  undefined4 local_a8 [4];
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined4 local_78 [4];
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48;
  undefined2 *puVar18;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_758;
  puVar18 = (undefined2 *)0x0;
  puVar17 = (undefined2 *)0x0;
  local_6e0 = param_5;
  local_680[10] = param_6;
  puVar11 = puVar18;
  if (param_1 != 0) {
    puVar11 = *(undefined2 **)(param_1 + 0x60);
  }
  if (puVar11 != (undefined2 *)0x0) {
    return puVar11;
  }
  lVar16 = -1;
  local_6d8 = 0;
  local_690 = (undefined2 *)0x0;
  local_688 = 0;
  puVar11 = puVar17;
  local_724 = param_3;
  if (param_2 == (short *)0x0) {
    if (param_1 == 0) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (local_530,L"Can\'t resolve asset name",L"Linker",L"PackageResolveFailed");
      local_738 = 0;
      local_730 = param_3;
      FUN_14173e050(0,0,local_530,local_530);
      puVar11 = puVar18;
      uStack_4a0 = (undefined1 *)CONCAT44(uStack_4a0._4_4_,(undefined4)uStack_4a0);
      if (local_528 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_528 + 1;
        lVar16 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        uStack_4a0 = (undefined1 *)CONCAT44(uStack_4a0._4_4_,(undefined4)uStack_4a0);
        if ((int)lVar16 == 1) {
          (**(code **)*local_528)(local_528);
          LOCK();
          piVar2 = (int *)((longlong)local_528 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_528 + 8))(local_528,1);
            puVar11 = puVar17;
          }
        }
      }
      goto LAB_14173a74b;
    }
    local_600 = *(undefined8 *)(param_1 + 0x18);
    FName::ToString(&local_600,&local_710);
    local_620 = 0;
    puVar13 = &DAT_143f3eda8;
    if (local_708 != 0) {
      puVar13 = local_710;
    }
    local_628 = 0;
    puVar5 = (undefined8 *)FName::FName(local_518,puVar13,1);
    local_568 = *puVar5;
    local_578 = 0;
    local_570 = 0;
    FCoreRedirects::GetRedirectedName(local_428,0x40,&local_578);
    ppuVar6 = (undefined2 **)FName::ToString(local_418,local_500);
    if (&local_710 != ppuVar6) {
      if (local_710 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_710 = *ppuVar6;
      *ppuVar6 = (undefined2 *)0x0;
      local_708 = *(int *)(ppuVar6 + 1);
      local_704 = *(undefined4 *)((longlong)ppuVar6 + 0xc);
      ppuVar6[1] = (undefined2 *)0x0;
    }
    if (local_500[0] != 0) {
      FMemory::Free();
    }
    if ((*(byte *)(param_1 + 0x50) & 0x11) == 0) {
      ppuVar6 = (undefined2 **)FUN_1416f90e0(local_4f0,&local_710);
      if (&local_710 != ppuVar6) {
        if (local_710 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        local_710 = *ppuVar6;
        *ppuVar6 = (undefined2 *)0x0;
        local_708 = *(int *)(ppuVar6 + 1);
        local_704 = *(undefined4 *)((longlong)ppuVar6 + 0xc);
        ppuVar6[1] = (undefined2 *)0x0;
      }
      if (local_4f0[0] != 0) {
        FMemory::Free();
      }
    }
    puVar13 = local_710;
    lVar16 = (longlong)local_708;
    local_700 = (void *)0x0;
    local_6f8 = local_708;
    if (local_708 == 0) {
      local_6f4 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_700,local_708,0);
      _guard_xfg_dispatch_icall_nop(local_700,puVar13,lVar16 * 2);
    }
    if (((*(byte *)(param_1 + 0x50) & 0x11) == 0) &&
       (cVar4 = FPackageName::IsScriptPackage(&local_700), cVar4 == '\0')) {
      ppvVar7 = (void **)FPackageName::GetLocalizedPackagePath(local_4e0,&local_700);
      if (&local_700 != ppvVar7) {
        if (local_700 != (void *)0x0) {
          FMemory::Free();
        }
        local_700 = *ppvVar7;
        *ppvVar7 = (void *)0x0;
        local_6f8 = *(int *)(ppvVar7 + 1);
        local_6f4 = *(undefined4 *)((longlong)ppvVar7 + 0xc);
        ppvVar7[1] = (void *)0x0;
      }
      if (local_4e0[0] != 0) {
        FMemory::Free();
      }
    }
    cVar4 = DoesPackageExistForGetPackageLinker(&local_700,local_6e0,&local_690);
    if (cVar4 == '\0') {
      uStack_4a0 = (undefined1 *)CONCAT44(uStack_4a0._4_4_,(undefined4)uStack_4a0);
      if (((local_724 & 0x20) == 0) &&
         (uStack_4a0 = (undefined1 *)CONCAT44(uStack_4a0._4_4_,(undefined4)uStack_4a0),
         (*(byte *)(param_1 + 0x50) & 0x11) == 0)) {
        cVar4 = FLinkerLoad::IsKnownMissingPackage(*(undefined8 *)(param_1 + 0x18));
        if (cVar4 == '\0') {
          puStack_5b0 = local_728;
          local_728[0] = 0;
          local_5b8 = FUN_1406ddef0;
          local_4a8 = 0x406ddef0;
          uStack_4a4 = 1;
          uStack_4a0 = puStack_5b0;
          lVar16 = FUN_1415d8310(&local_4a8,&DAT_14622e6dc);
          local_278 = 0;
          local_270 = 0;
          local_258 = 0;
          local_250 = 0;
          local_248 = 0xffffffff;
          local_244 = 0;
          local_238 = 0;
          local_230 = 0;
          uVar8 = FText::FromString(local_410,&local_700);
          local_138[0] = 4;
          FText::FText(local_128,uVar8);
          local_110 = '\x01';
          local_680[0] = 0;
          local_680[1] = 10;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_680,0);
          FGenericPlatformString::Memcpy(local_680[0],L"AssetName",0x14);
          local_5a8 = local_680;
          local_5a0 = local_138;
          FUN_1407484b0(&local_278,local_608,&local_5a8,0);
          if (local_680[0] != 0) {
            FMemory::Free();
          }
          if ((local_110 != '\0') && (local_110 = '\0', local_120 != (longlong *)0x0)) {
            LOCK();
            plVar1 = local_120 + 1;
            lVar15 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*local_120)(local_120);
              LOCK();
              piVar2 = (int *)((longlong)local_120 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_120 + 8))(local_120,1);
              }
            }
          }
          if (local_408 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_408 + 1;
            lVar15 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*local_408)(local_408);
              LOCK();
              piVar2 = (int *)((longlong)local_408 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_408 + 8))(local_408,1);
              }
            }
          }
          lVar15 = *(longlong *)(lVar16 + 0x78);
          if (lVar15 == 0) {
            pwVar19 = L"NULL";
          }
          else if (*(int *)(lVar15 + 0x1e8) == 0) {
            pwVar19 = L"";
          }
          else {
            pwVar19 = *(wchar_t **)(lVar15 + 0x1e0);
          }
          local_6c8 = 0;
          local_6d0 = 0;
          if ((pwVar19 != (wchar_t *)0x0) && (*pwVar19 != L'\0')) {
            lVar15 = -1;
            do {
              lVar15 = lVar15 + 1;
            } while (pwVar19[lVar15] != L'\0');
            uVar14 = (int)lVar15 + 1;
            local_6c8 = (ulonglong)uVar14;
            if (0 < (int)uVar14) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_6d0,0);
            }
            FGenericPlatformString::Memcpy(local_6d0,pwVar19,(longlong)(int)uVar14 * 2);
          }
          uVar8 = FText::FromString(local_3f8,&local_6d0);
          local_108[0] = 4;
          FText::FText(local_f8,uVar8);
          local_e0 = '\x01';
          local_680[2] = 0;
          local_680[3] = 0xc;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_680 + 2,0);
          FGenericPlatformString::Memcpy(local_680[2],L"PackageName",0x18);
          local_598 = local_680 + 2;
          local_590 = local_108;
          FUN_1407484b0(&local_278,local_604,&local_598,0);
          if (local_680[2] != 0) {
            FMemory::Free();
          }
          if ((local_e0 != '\0') && (local_e0 = '\0', local_f0 != (longlong *)0x0)) {
            LOCK();
            plVar1 = local_f0 + 1;
            lVar15 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*local_f0)(local_f0);
              LOCK();
              piVar2 = (int *)((longlong)local_f0 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_f0 + 8))(local_f0,1);
              }
            }
          }
          if (local_3f0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_3f0 + 1;
            lVar15 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*local_3f0)(local_3f0);
              LOCK();
              piVar2 = (int *)((longlong)local_3f0 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_3f0 + 8))(local_3f0,1);
              }
            }
          }
          if (local_6d0 != 0) {
            FMemory::Free();
          }
          lVar16 = *(longlong *)(lVar16 + 0x78);
          if ((lVar16 != 0) && (puVar18 = &DAT_143f3eda8, *(int *)(lVar16 + 0x1e8) != 0)) {
            puVar18 = *(undefined2 **)(lVar16 + 0x1e0);
          }
          uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_3b0,L"Can\'t find file for asset.",L"Linker",
                             L"PackageNotFoundShort");
          uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_3c8,
                             L"Can\'t find file for asset \'{AssetName}\' while loading {PackageName}."
                             ,L"Linker",L"PackageNotFound");
          uVar9 = FTextFormat::FTextFormat(local_2c0,uVar9);
          uVar9 = FText::Format(local_3e0,uVar9,&local_278);
          local_730 = local_724;
          local_738 = param_1;
          FUN_14173e050(0,puVar18,uVar9,uVar8);
          if (local_3d8 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_3d8 + 1;
            lVar16 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar16 == 1) {
              (**(code **)*local_3d8)(local_3d8);
              LOCK();
              piVar2 = (int *)((longlong)local_3d8 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_3d8 + 8))(local_3d8,1);
              }
            }
          }
          if (local_3c0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_3c0 + 1;
            lVar16 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar16 == 1) {
              (**(code **)*local_3c0)(local_3c0);
              LOCK();
              piVar2 = (int *)((longlong)local_3c0 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_3c0 + 8))(local_3c0,1);
              }
            }
          }
          if (local_3a8 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_3a8 + 1;
            lVar16 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar16 == 1) {
              (**(code **)*local_3a8)(local_3a8);
              LOCK();
              piVar2 = (int *)((longlong)local_3a8 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_3a8 + 8))(local_3a8,1);
              }
            }
          }
          local_230 = 0;
          if (local_238 != 0) {
            FMemory::Free();
          }
          TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                    (&local_278);
        }
      }
      if (local_700 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_710 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      goto LAB_14173a74b;
    }
    if (local_700 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_710 != (undefined2 *)0x0) {
      FMemory::Free();
    }
LAB_14173a6dd:
    puVar11 = &DAT_143f3eda8;
    if ((int)local_688 != 0) {
      puVar11 = local_690;
    }
    puVar11 = (undefined2 *)FUN_141732400(param_1,puVar11,local_724,local_680[10]);
    if (puVar11 == (undefined2 *)0x0) {
      if (local_6d8 != 0) {
        iVar3 = *(int *)(local_6d8 + 0xc);
        if (iVar3 < (int)DAT_1469e91c4) {
          uVar12 = iVar3 >> 0x1f & 0xffff;
          uVar14 = iVar3 + uVar12;
          puVar18 = (undefined2 *)
                    (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar14 >> 0x10) * 8) +
                    (longlong)(int)((uVar14 & 0xffff) - uVar12) * 0x18);
        }
        *(uint *)(puVar18 + 4) = *(uint *)(puVar18 + 4) | 0x20000000;
      }
    }
    else {
LAB_14173a78d:
      if ((local_6e0 != (int *)0x0) &&
         (((local_6e0[3] != *(int *)(puVar11 + 0x98) || local_6e0[2] != *(int *)(puVar11 + 0x96)) ||
          local_6e0[1] != *(int *)(puVar11 + 0x94)) || *(int *)(puVar11 + 0x92) != *local_6e0)) {
        local_188 = 0;
        local_180 = 0;
        TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(local_178,0,0);
        local_5f8 = *(undefined8 *)(param_1 + 0x18);
        local_158 = 0xffffffff;
        local_154 = 0;
        local_148 = 0;
        local_140 = 0;
        FName::ToString(&local_5f8,local_5d0);
        uVar8 = FText::FromString(local_488,local_5d0);
        local_a8[0] = 4;
        FText::FText(local_98,uVar8);
        local_80 = 1;
        local_680[8] = 0;
        local_680[9] = 10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_680 + 8,0);
        FGenericPlatformString::Memcpy(local_680[8],L"AssetName",0x14);
        local_5e0 = local_680 + 8;
        local_5d8 = local_a8;
        FUN_1407484b0(&local_188,&local_6e0,&local_5e0,0);
        if (local_680[8] != 0) {
          FMemory::Free();
        }
        FFormatArgumentValue::~FFormatArgumentValue(local_a8);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_488);
        if (local_5d0[0] != 0) {
          FMemory::Free();
        }
        uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_440,L"Asset version mismatch",L"Linker",L"PackageVersionShort");
        uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_458,L"Asset \'{AssetName}\' version mismatch",L"Linker",
                           L"PackageVersion");
        uVar9 = FTextFormat::FTextFormat(local_290,uVar9);
        uVar9 = FText::Format(local_470,uVar9,&local_188);
        local_730 = local_724;
        local_738 = param_1;
        FUN_14173e050(puVar11 + 0x100,param_2,uVar9,uVar8);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_470);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_458);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_440);
        local_140 = 0;
        if (local_148 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_188);
        puVar11 = puVar17;
        goto LAB_14173a74b;
      }
    }
  }
  else {
    local_720 = (undefined2 *)0x0;
    local_6c0 = 0;
    local_718 = (undefined2 *)0x0;
    local_6b8 = 0;
    if (*param_2 != 0) {
      lVar15 = -1;
      do {
        lVar15 = lVar15 + 1;
      } while (param_2[lVar15] != 0);
      uVar14 = (int)lVar15 + 1;
      local_6b8 = (ulonglong)uVar14;
      if (0 < (int)uVar14) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_6c0,0);
      }
      FGenericPlatformString::Memcpy(local_6c0,param_2,(longlong)(int)uVar14 * 2);
    }
    cVar4 = FPackageName::TryConvertFilenameToLongPackageName(&local_6c0,&local_720,0);
    if (local_6c0 != 0) {
      FMemory::Free();
    }
    if (cVar4 == '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (local_548,L"Can\'t resolve asset name",L"Linker",L"PackageResolveFailed");
      local_738 = param_1;
      local_730 = param_3;
      FUN_14173e050(0,param_2,local_548,local_548);
      if (local_540 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_540 + 1;
        lVar16 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
          (**(code **)*local_540)(local_540);
          LOCK();
          piVar2 = (int *)((longlong)local_540 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_540 + 8))(local_540,1);
          }
        }
      }
    }
    else {
      local_610 = 0;
      puVar13 = &DAT_143f3eda8;
      if ((int)local_718 != 0) {
        puVar13 = local_720;
      }
      local_618 = 0;
      puVar5 = (undefined8 *)FName::FName(local_510,puVar13,1);
      local_550 = *puVar5;
      local_560 = 0;
      local_558 = 0;
      FCoreRedirects::GetRedirectedName(local_398,0x40,&local_560);
      ppuVar6 = (undefined2 **)FName::ToString(local_388,local_4d0);
      if (&local_720 != ppuVar6) {
        if (local_720 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        local_720 = *ppuVar6;
        *ppuVar6 = (undefined2 *)0x0;
        local_718 = ppuVar6[1];
        ppuVar6[1] = (undefined2 *)0x0;
      }
      if (local_4d0[0] != 0) {
        FMemory::Free();
      }
      ppuVar6 = (undefined2 **)FUN_1416f90e0(local_4c0,&local_720);
      if (&local_720 != ppuVar6) {
        if (local_720 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        local_720 = *ppuVar6;
        *ppuVar6 = (undefined2 *)0x0;
        local_718 = ppuVar6[1];
        ppuVar6[1] = (undefined2 *)0x0;
      }
      if (local_4c0[0] != 0) {
        FMemory::Free();
      }
      puVar13 = local_720;
      lVar15 = (longlong)(int)local_718;
      local_6f0 = (void *)0x0;
      local_6e8 = (int)local_718;
      if ((int)local_718 == 0) {
        local_6e4 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                  (&local_6f0,(ulonglong)local_718 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_6f0,puVar13,lVar15 * 2);
      }
      cVar4 = FPackageName::IsScriptPackage(&local_6f0);
      if (cVar4 == '\0') {
        ppvVar7 = (void **)FPackageName::GetLocalizedPackagePath(local_498,&local_6f0);
        if (&local_6f0 != ppvVar7) {
          if (local_6f0 != (void *)0x0) {
            FMemory::Free();
          }
          local_6f0 = *ppvVar7;
          *ppvVar7 = (void *)0x0;
          local_6e8 = *(int *)(ppvVar7 + 1);
          local_6e4 = *(undefined4 *)((longlong)ppvVar7 + 0xc);
          ppvVar7[1] = (void *)0x0;
        }
        if (local_498[0] != 0) {
          FMemory::Free();
        }
      }
      puVar13 = &DAT_143f3eda8;
      if ((int)local_718 != 0) {
        puVar13 = local_720;
      }
      uVar8 = UPackage::GetPrivateStaticClass();
      lVar15 = FUN_141799410(uVar8,0,puVar13,0);
      if (((lVar15 == 0) || (*(longlong *)(lVar15 + 0x20) != 0)) ||
         ((*(byte *)(lVar15 + 0x50) & 0x11) == 0)) {
        cVar4 = DoesPackageExistForGetPackageLinker(&local_6f0,local_6e0,&local_690);
        if (cVar4 != '\0') {
          lVar10 = lVar15;
          if (lVar15 == 0) {
            puVar13 = &DAT_143f3eda8;
            if ((int)local_718 != 0) {
              puVar13 = local_720;
            }
            local_6d8 = FUN_1417894a0(0,puVar13);
            lVar10 = local_6d8;
          }
          if (((lVar10 != 0) && (lVar10 != lVar15)) && ((local_724 & 0x80000) != 0)) {
            *(uint *)(lVar10 + 0x50) = *(uint *)(lVar10 + 0x50) | 0x100000;
          }
          if (param_1 == 0) {
            if (lVar10 == 0) {
              local_1d8 = 0;
              local_6a0 = 0;
              local_1d0 = 0;
              local_1b8 = 0;
              local_1b0 = 0;
              local_1a8 = 0xffffffff;
              local_1a4 = 0;
              local_198 = 0;
              local_190 = 0;
              local_698 = 0;
              if (*param_2 != 0) {
                do {
                  lVar16 = lVar16 + 1;
                } while (param_2[lVar16] != 0);
                uVar14 = (int)lVar16 + 1;
                local_698 = (ulonglong)uVar14;
                if (0 < (int)uVar14) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_6a0,0);
                }
                FGenericPlatformString::Memcpy(local_6a0,param_2,(longlong)(int)uVar14 * 2);
              }
              uVar8 = FText::FromString(local_320,&local_6a0);
              local_78[0] = 4;
              FText::FText(local_68,uVar8);
              local_50 = 1;
              local_680[6] = 0;
              local_680[7] = 9;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_680 + 6,0);
              FGenericPlatformString::Memcpy(local_680[6],L"Filename",0x12);
              local_5f0 = local_680 + 6;
              local_5e8 = local_78;
              FUN_1407484b0(&local_1d8,&local_6d8,&local_5f0,0);
              if (local_680[6] != 0) {
                FMemory::Free();
              }
              FFormatArgumentValue::~FFormatArgumentValue(local_78);
              TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_320);
              if (local_6a0 != 0) {
                FMemory::Free();
              }
              uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                (local_2d8,L"Can\'t convert filename to asset name",L"Linker",
                                 L"FilenameToPackageShort");
              uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                (local_2f0,L"Can\'t convert filename \'{Filename}\' to asset name",
                                 L"Linker",L"FilenameToPackage");
              uVar9 = FTextFormat::FTextFormat(local_2a0,uVar9);
              uVar9 = FText::Format(local_308,uVar9,&local_1d8);
              local_730 = local_724;
              local_738 = 0;
              FUN_14173e050(0,param_2,uVar9,uVar8);
              TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_308);
              TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_2f0);
              TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_2d8);
              local_190 = 0;
              if (local_198 != 0) {
                FMemory::Free();
              }
              puVar5 = &local_1d8;
              goto LAB_14173a674;
            }
            puVar11 = *(undefined2 **)(lVar10 + 0x60);
            param_1 = lVar10;
          }
          else {
            puVar11 = (undefined2 *)0x0;
            if (param_1 != lVar10) {
              ResetLoaders(param_1);
            }
          }
          if (local_6f0 != (void *)0x0) {
            FMemory::Free();
          }
          if (local_720 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (puVar11 == (undefined2 *)0x0) goto LAB_14173a6dd;
          goto LAB_14173a78d;
        }
        puVar5 = (undefined8 *)FName::FName(local_508,param_2,1);
        cVar4 = FLinkerLoad::IsKnownMissingPackage(*puVar5);
        if (cVar4 == '\0') {
          local_228 = 0;
          local_6b0 = 0;
          local_220 = 0;
          local_208 = 0;
          local_200 = 0;
          local_1f8 = 0xffffffff;
          local_1f4 = 0;
          local_1e8 = 0;
          local_1e0 = 0;
          local_6a8 = 0;
          if (*param_2 != 0) {
            lVar16 = -1;
            do {
              lVar16 = lVar16 + 1;
            } while (param_2[lVar16] != 0);
            uVar14 = (int)lVar16 + 1;
            local_6a8 = (ulonglong)uVar14;
            if (0 < (int)uVar14) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_6b0,0);
            }
            FGenericPlatformString::Memcpy(local_6b0,param_2,(longlong)(int)uVar14 * 2);
          }
          uVar8 = FText::FromString(local_380,&local_6b0);
          local_d8[0] = 4;
          FText::FText(local_c8,uVar8);
          local_b0 = '\x01';
          local_680[4] = 0;
          local_680[5] = 9;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_680 + 4,0);
          FGenericPlatformString::Memcpy(local_680[4],L"Filename",0x12);
          local_588 = local_680 + 4;
          local_580 = local_d8;
          FUN_1407484b0(&local_228,local_680 + 10,&local_588,0);
          if (local_680[4] != 0) {
            FMemory::Free();
          }
          if ((local_b0 != '\0') && (local_b0 = '\0', local_c0 != (longlong *)0x0)) {
            LOCK();
            plVar1 = local_c0 + 1;
            lVar16 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar16 == 1) {
              (**(code **)*local_c0)(local_c0);
              LOCK();
              piVar2 = (int *)((longlong)local_c0 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_c0 + 8))(local_c0,1);
              }
            }
          }
          if (local_378 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_378 + 1;
            lVar16 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar16 == 1) {
              (**(code **)*local_378)(local_378);
              LOCK();
              piVar2 = (int *)((longlong)local_378 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_378 + 8))(local_378,1);
              }
            }
          }
          if (local_6b0 != 0) {
            FMemory::Free();
          }
          uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_338,L"Can\'t find file",L"Linker",L"FileNotFoundShort");
          uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_350,L"Can\'t find file \'{Filename}\'",L"Linker",L"FileNotFound")
          ;
          uVar9 = FTextFormat::FTextFormat(local_2b0,uVar9);
          uVar9 = FText::Format(local_368,uVar9,&local_228);
          local_730 = local_724;
          local_738 = param_1;
          FUN_14173e050(0,param_2,uVar9,uVar8);
          if (local_360 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_360 + 1;
            lVar16 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar16 == 1) {
              (**(code **)*local_360)(local_360);
              LOCK();
              piVar2 = (int *)((longlong)local_360 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_360 + 8))(local_360,1);
              }
            }
          }
          if (local_348 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_348 + 1;
            lVar16 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar16 == 1) {
              (**(code **)*local_348)(local_348);
              LOCK();
              piVar2 = (int *)((longlong)local_348 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_348 + 8))(local_348,1);
              }
            }
          }
          if (local_330 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_330 + 1;
            lVar16 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar16 == 1) {
              (**(code **)*local_330)(local_330);
              LOCK();
              piVar2 = (int *)((longlong)local_330 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_330 + 8))(local_330,1);
              }
            }
          }
          local_1e0 = 0;
          if (local_1e8 != 0) {
            FMemory::Free();
          }
          puVar5 = &local_228;
LAB_14173a674:
          TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                    (puVar5);
        }
      }
      if (local_6f0 != (void *)0x0) {
        FMemory::Free();
      }
    }
    if (local_720 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
LAB_14173a74b:
  if (local_690 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return puVar11;
}



// FUNCTION 14173a9c0 GetPreloadDependencies body=124 status=ok
// SIG undefined GetPreloadDependencies(void)

void UEnumProperty::GetPreloadDependencies(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  UObject::GetPreloadDependencies();
  iVar1 = (int)param_2[1];
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
  iVar1 = (int)param_2[1];
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 14173aa40 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UEnum::GetPrivateStaticClass(void)

{
  if (DAT_1469e76a0 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"Enum",&DAT_1469e76a0,
                  AK::MemoryMgr::StartProfileThreadUsage,0x60,0x10000000,4,L"Engine",
                  InternalConstructor<UEnum>,InternalVTableHelperCtorCaller<UEnum>,
                  AK::MemoryMgr::StartProfileThreadUsage,FUN_14171c410,&LAB_140447700,0);
  }
  return DAT_1469e76a0;
}



// FUNCTION 14173aaf0 GetPrivateStaticClass body=168 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UEnumProperty::GetPrivateStaticClass(void)

{
  if (DAT_1469e76b0 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"EnumProperty",&DAT_1469e76b0,
                  AK::MemoryMgr::StartProfileThreadUsage,0x80,0x10000000,0x1000000000000,L"Engine",
                  FUN_141729040,InternalVTableHelperCtorCaller<UEnumProperty>,AddReferencedObjects,
                  UProperty::StaticClass,FUN_14171c410,0);
  }
  return DAT_1469e76b0;
}



// FUNCTION 14173aba0 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UInterface::GetPrivateStaticClass(void)

{
  if (DAT_1469e7718 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"Interface",&DAT_1469e7718,
                  AK::MemoryMgr::StartProfileThreadUsage,0x28,0x10004001,0,L"Engine",FUN_141729070,
                  InternalVTableHelperCtorCaller<UInterface>,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1469e7718;
}



// FUNCTION 14173ac40 GetScriptSHAKey body=53 status=ok
// SIG undefined GetScriptSHAKey(void)

void FLinker::GetScriptSHAKey(longlong param_1,undefined8 param_2)

{
  FSHA1::Final(*(undefined8 *)(param_1 + 0x1f8));
  FSHA1::GetHash(*(undefined8 *)(param_1 + 0x1f8),param_2);
  return;
}


