// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142453690 FUN_142453690 body=6 status=ok
// SIG undefined FUN_142453690(void)

bool FUN_142453690(byte *param_1,byte param_2)

{
  return (*param_1 & param_2) != 0;
}



// FUNCTION 1424536a0 HasLaunchOption body=45 status=ok
// SIG undefined HasLaunchOption(void)

void UGameplayStatics::HasLaunchOption(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  
  if (*(int *)(param_1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*param_1;
  }
  uVar1 = FCommandLine::Get();
  FParse::Param(uVar1,puVar2);
  return;
}



// FUNCTION 142453730 HasOption body=297 status=ok
// SIG undefined HasOption(void)

undefined8 UGameplayStatics::HasOption(longlong *param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  longlong local_38 [2];
  undefined2 *local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  local_38[0] = 0;
  local_38[1] = 0;
  local_28 = (undefined2 *)0x0;
  local_20 = 0;
  local_18[0] = 0;
  local_18[1] = 0;
  cVar2 = FUN_1424523f0(param_1,local_38);
  if (cVar2 != '\0') {
    do {
      FUN_14244f760(local_38,local_38 + 2,local_18);
      puVar1 = local_28;
      puVar5 = &DAT_143f3eda8;
      if ((int)local_20 != 0) {
        puVar5 = local_28;
      }
      if (*(int *)(param_2 + 1) == 0) {
        puVar4 = &DAT_143f3eda8;
      }
      else {
        puVar4 = (undefined2 *)*param_2;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
      if (iVar3 == 0) {
        if (local_18[0] != 0) {
          FMemory::Free();
        }
        if (puVar1 != (undefined2 *)0x0) {
          FMemory::Free(puVar1);
        }
        if (local_38[0] != 0) {
          FMemory::Free();
        }
        if (*param_1 != 0) {
          FMemory::Free();
        }
        return 1;
      }
      cVar2 = FUN_1424523f0(param_1,local_38);
    } while (cVar2 != '\0');
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (puVar1 != (undefined2 *)0x0) {
      FMemory::Free(puVar1);
    }
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return 0;
}



// FUNCTION 142453860 HasOverrideVelocity body=8 status=ok
// SIG undefined HasOverrideVelocity(void)

undefined1 FRootMotionSourceGroup::HasOverrideVelocity(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0xe9);
}



// FUNCTION 142453870 HasVelocity body=24 status=ok
// SIG undefined HasVelocity(void)

undefined1 FRootMotionSourceGroup::HasVelocity(longlong param_1)

{
  if ((*(char *)(param_1 + 0xe9) == '\0') && (*(char *)(param_1 + 0xe8) == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 142453890 FUN_142453890 body=1829 status=ok
// SIG undefined FUN_142453890(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142453890(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong in_stack_ffffffffffffff48;
  uint uVar15;
  undefined4 uVar16;
  LARGE_INTEGER local_88;
  undefined2 *local_80;
  undefined8 local_78;
  longlong local_70 [2];
  undefined1 local_60 [8];
  longlong *local_58;
  longlong local_50;
  longlong local_48 [2];
  
  plVar13 = (longlong *)0x0;
  FUN_142878b30();
  plVar6 = (longlong *)FUN_142874ac0(param_1);
  (**(code **)(*plVar6 + 0x2a8))(plVar6,0);
  plVar6 = (longlong *)FUN_142874ac0(param_1);
  (**(code **)(*plVar6 + 0x280))(plVar6);
  FUN_1415afb20(L"GameInstanceClass");
  plVar6 = (longlong *)UGameMapsSettings::GetPrivateStaticClass();
  lVar9 = plVar6[0x1f];
  if (lVar9 == 0) {
    (**(code **)(*plVar6 + 0x368))(plVar6);
    lVar9 = plVar6[0x1f];
  }
  local_50 = *(longlong *)(lVar9 + 0x70);
  FString::FString(local_48,lVar9 + 0x78);
  uVar15 = (uint)(in_stack_ffffffffffffff48 >> 0x20);
  if (local_50 == 0) {
    lVar9 = FUN_142937720();
    plVar6 = plVar13;
  }
  else {
    puVar7 = (undefined8 *)FSoftObjectPath::ToString(&local_50,local_70);
    if (*(int *)(puVar7 + 1) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (undefined2 *)*puVar7;
    }
    uVar8 = FUN_14171bfe0();
    in_stack_ffffffffffffff48 = (ulonglong)uVar15 << 0x20;
    lVar9 = FUN_141799c90(uVar8,0,puVar11,0,in_stack_ffffffffffffff48,0,1);
    plVar6 = (longlong *)0x1;
  }
  if ((plVar6 != (longlong *)0x0) && (local_70[0] != 0)) {
    FMemory::Free();
  }
  if (lVar9 == 0) {
    lVar9 = FUN_142937720();
  }
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar16 = 0;
  in_stack_ffffffffffffff48 = in_stack_ffffffffffffff48 & 0xffffffff00000000;
  plVar6 = (longlong *)FUN_1417985e0(lVar9,param_1,0,0,in_stack_ffffffffffffff48,0,0,0,0);
  *(longlong **)(param_1 + 0x11d8) = plVar6;
  lVar9 = FUN_14286b170(plVar6[4],1);
  plVar6[6] = lVar9;
  *(longlong **)(lVar9 + 0x240) = plVar6;
  DAT_146af37f1 = 1;
  uVar14 = CONCAT71((int7)(in_stack_ffffffffffffff48 >> 8),1);
  lVar9 = FUN_1428c8a00(1,0,0,0,uVar14,CONCAT44(uVar16,4));
  DAT_146af37f1 = 0;
  *(longlong **)(lVar9 + 400) = plVar6;
  FUN_14288d2f0(plVar6[6],lVar9);
  (**(code **)(*plVar6 + 0x280))(plVar6);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  plVar6 = plVar13;
  if (DAT_1468c2172 != '\0') {
    if (*(longlong *)(param_1 + 0x138) != 0) {
      plVar10 = (longlong *)UGGameViewportClient::GetPrivateStaticClass();
      for (plVar2 = *(longlong **)(param_1 + 0x138);
          (plVar6 = plVar13, plVar2 != (longlong *)0x0 &&
          (plVar6 = *(longlong **)(param_1 + 0x138), plVar2 != plVar10));
          plVar2 = (longlong *)plVar2[6]) {
      }
    }
    local_88.QuadPart = 0;
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    plVar6 = (longlong *)FUN_1417985e0(plVar6,param_1,0,0,uVar14 & 0xffffffff00000000,0,0,0,0);
    (**(code **)(*plVar6 + 0x290))
              (plVar6,*(undefined8 *)(*(longlong *)(param_1 + 0x11d8) + 0x30),
               *(longlong *)(param_1 + 0x11d8),1);
    *(longlong **)(param_1 + 0x7b0) = plVar6;
    *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x11d8) + 0x30) + 0x238) = plVar6;
  }
  QueryPerformanceCounter(&local_88);
  uVar14 = (ulonglong)_tls_index;
  *(double *)(param_1 + 0x1218) = (double)local_88.QuadPart * DAT_1468b02f8 + 16777216.0;
  if (plVar6 == (longlong *)0x0) goto LAB_142453d6c;
  if ((*(longlong *)(param_1 + 0x11e0) == 0) || (*(longlong *)(param_1 + 0x11e8) == 0)) {
LAB_142453b9a:
    bVar3 = false;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar14 * 8) + 0x38) <
         DAT_1468509e4) && (_Init_thread_header(&DAT_1468509e4), DAT_1468509e4 == -1)) {
      uVar8 = FCommandLine::Get();
      DAT_1468509e0 = FParse::Param(uVar8,L"nullrhi");
      _Init_thread_footer(&DAT_1468509e4);
    }
    if (((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) && (DAT_1468509e0 == '\0')) {
      puVar7 = (undefined8 *)FUN_142447ed0(local_60);
      *(undefined8 *)(param_1 + 0x11e0) = *puVar7;
      plVar2 = (longlong *)puVar7[1];
      plVar10 = *(longlong **)(param_1 + 0x11e8);
      if (plVar2 != plVar10) {
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
          UNLOCK();
          plVar10 = *(longlong **)(param_1 + 0x11e8);
        }
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
        *(longlong **)(param_1 + 0x11e8) = plVar2;
      }
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_58 + 1;
        lVar9 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar1 = (int *)((longlong)local_58 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_58 + 8))(local_58,1);
          }
        }
      }
    }
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x11e8) + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (iVar5 < 1) goto LAB_142453b9a;
    bVar3 = true;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar14 * 8) + 0x38) <
       DAT_1468509e4) && (_Init_thread_header(&DAT_1468509e4), DAT_1468509e4 == -1)) {
    uVar8 = FCommandLine::Get();
    DAT_1468509e0 = FParse::Param(uVar8,L"nullrhi");
    _Init_thread_footer(&DAT_1468509e4);
  }
  if (((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) && (DAT_1468509e0 == '\0')) {
    FUN_142446cc0(param_1,plVar6);
  }
  if (!bVar3) {
    FUN_142463010(param_1);
  }
  local_80 = (undefined2 *)0x0;
  local_78 = 0;
  lVar9 = (**(code **)(*plVar6 + 0x2f0))(plVar6,&local_80);
  if (lVar9 == 0) {
    puVar11 = &DAT_143f3eda8;
    if ((int)local_78 != 0) {
      puVar11 = local_80;
    }
    LowLevelFatalErrorHandler("Unknown",0x3b3,&DAT_1450a49e4,puVar11);
    puVar11 = &DAT_143f3eda8;
    if ((int)local_78 != 0) {
      puVar11 = local_80;
    }
    FDebug::AssertFailed(&DAT_1450a035c,"Unknown",0x3b3,&DAT_1450a4c94,puVar11);
  }
  TBaseMulticastDelegate<void>::Broadcast(&DAT_146532738);
  TBaseMulticastDelegate<void>::Broadcast(&DAT_1464af100);
  if (local_80 != (undefined2 *)0x0) {
    FMemory::Free();
  }
LAB_142453d6c:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar14 * 8) + 0x38) <
       DAT_146af49f8) && (_Init_thread_header(&DAT_146af49f8), DAT_146af49f8 == -1)) {
    uVar8 = FCommandLine::Get();
    DAT_146af49f4 = FParse::Param(uVar8,L"nullrhi");
    _Init_thread_footer(&DAT_146af49f8);
  }
  if ((*(longlong *)(DAT_146b17150 + 0x7b0) != 0) &&
     (puVar7 = *(undefined8 **)(*(longlong *)(DAT_146b17150 + 0x7b0) + 0xb8),
     puVar7 != (undefined8 *)0x0)) {
    uVar8 = (**(code **)*puVar7)();
    bVar3 = false;
    DAT_1464af144 = DAT_1464af144 + 1;
    lVar9 = (longlong)(DAT_1464af138 + -1);
    if (-1 < DAT_1464af138 + -1) {
      lVar12 = lVar9 << 4;
      bVar3 = false;
      do {
        if (((*(int *)(lVar12 + 8 + DAT_1464af130) == 0) ||
            (plVar6 = *(longlong **)(lVar12 + DAT_1464af130), plVar6 == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(*plVar6 + 0x40))(plVar6,uVar8), cVar4 == '\0')) {
          bVar3 = true;
        }
        lVar12 = lVar12 + -0x10;
        lVar9 = lVar9 + -1;
      } while (-1 < lVar9);
    }
    iVar5 = DAT_1464af138;
    DAT_1464af144 = DAT_1464af144 + -1;
    if ((bVar3) && (DAT_1464af144 < 1)) {
      plVar6 = plVar13;
      if (0 < DAT_1464af138) {
        do {
          if (((*(int *)((longlong)plVar13 + DAT_1464af130 + 8) == 0) ||
              (*(longlong **)((longlong)plVar13 + DAT_1464af130) == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(**(longlong **)((longlong)plVar13 + DAT_1464af130) + 0x10))(),
             cVar4 != '\0')) {
            TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464af130,plVar6,1,1);
          }
          else {
            plVar6 = (longlong *)(ulonglong)((int)plVar6 + 1);
            plVar13 = plVar13 + 2;
          }
        } while ((int)plVar6 < DAT_1464af138);
      }
      _DAT_1464af140 = DAT_1464af138 * 2;
      if (_DAT_1464af140 < 3) {
        _DAT_1464af140 = 2;
      }
      if ((_DAT_1464af140 < iVar5) && (DAT_1464af13c != DAT_1464af138)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464af130);
      }
    }
  }
  FUN_1415a46c0();
  *(undefined1 *)(param_1 + 0xa18) = 1;
  return;
}



// FUNCTION 142453fc0 FUN_142453fc0 body=976 status=ok
// SIG undefined FUN_142453fc0(void)

void FUN_142453fc0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 local_res20 [8];
  longlong *local_48;
  int local_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_1429379e0();
  if (DAT_1468b616c != '\0') {
    return;
  }
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x330))(param_1,local_res20);
  lVar8 = 0;
  if (*plVar5 != 0) {
    lVar6 = UOnlineSession::GetPrivateStaticClass();
    for (lVar3 = *plVar5; (lVar8 = 0, lVar3 != 0 && (lVar8 = *plVar5, lVar3 != lVar6));
        lVar3 = *(longlong *)(lVar3 + 0x30)) {
    }
  }
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  plVar5 = (longlong *)FUN_1417985e0(lVar8,param_1,0,0,0,0,0,0,0);
  param_1[9] = (longlong)plVar5;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x278))(plVar5);
  }
  plVar4 = DAT_1469eaf50;
  plVar5 = DAT_1469eaf48;
  if ((param_1[6] != 0) && (*(char *)(param_1[6] + 0x270) != '\0')) goto LAB_1424541d2;
  if (DAT_1469eaf50 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_1469eaf50 + 1) = (int)DAT_1469eaf50[1] + 1;
    UNLOCK();
  }
  if (plVar5 != (longlong *)0x0) {
    uStack_30 = 0;
    local_38 = AK::MemoryMgr::StartProfileThreadUsage;
    local_48 = (longlong *)0x0;
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    local_40 = 3;
    local_48 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar7 + 1,param_1);
      *(undefined4 *)(plVar7 + 2) = (undefined4)local_38;
      *(undefined4 *)((longlong)plVar7 + 0x14) = local_38._4_4_;
      *(undefined4 *)(plVar7 + 3) = uStack_30;
      *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_2c;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar7[5] = lVar8;
      *plVar7 = (longlong)&PTR_FUN_143fcff08;
    }
    (**(code **)(*plVar5 + 0x90))(plVar5,&local_48);
    if (local_40 != 0) {
      if (local_48 == (longlong *)0x0) goto LAB_14245419f;
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
LAB_14245419f:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
LAB_1424541d2:
  uStack_30 = 0;
  local_38 = (code *)&LAB_1420db1e0;
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar5 == (longlong *)0x0) {
    if ((DAT_146aff4e8 != 0) && (DAT_146aff4e0 != (longlong *)0x0)) {
      (**(code **)(*DAT_146aff4e0 + 0x28))(DAT_146aff4e0,0);
      if (DAT_146aff4e0 != (longlong *)0x0) {
        DAT_146aff4e0 = (longlong *)FMemory::Realloc(DAT_146aff4e0,0,0);
      }
      DAT_146aff4e8 = 0;
    }
  }
  else {
    *plVar5 = (longlong)&PTR_FUN_144012f30;
    FWeakObjectPtr::operator=(plVar5 + 1,param_1);
    *(undefined4 *)(plVar5 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar5 + 0x14) = local_38._4_4_;
    *(undefined4 *)(plVar5 + 3) = uStack_30;
    *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_2c;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar5[5] = lVar8;
    *plVar5 = (longlong)&PTR_FUN_144012f78;
    FUN_14060dec0(plVar5,&DAT_146aff4e0);
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5,0);
    lVar8 = FMemory::Realloc(plVar5,0,0);
    if (lVar8 != 0) {
      FMemory::Free(lVar8);
    }
  }
  uStack_30 = 0;
  local_38 = (code *)&LAB_142440660;
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar5 == (longlong *)0x0) {
    if ((DAT_146aff4f8 != 0) && (DAT_146aff4f0 != (longlong *)0x0)) {
      (**(code **)(*DAT_146aff4f0 + 0x28))(DAT_146aff4f0,0);
      if (DAT_146aff4f0 != (longlong *)0x0) {
        DAT_146aff4f0 = (longlong *)FMemory::Realloc(DAT_146aff4f0,0,0);
      }
      DAT_146aff4f8 = 0;
    }
  }
  else {
    *plVar5 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar5 + 1,param_1);
    *(undefined4 *)(plVar5 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar5 + 0x14) = local_38._4_4_;
    *(undefined4 *)(plVar5 + 3) = uStack_30;
    *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_2c;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar5[5] = lVar8;
    *plVar5 = (longlong)&PTR_FUN_143fcff08;
    FUN_1405967c0(plVar5,&DAT_146aff4f0);
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5,0);
    lVar8 = FMemory::Realloc(plVar5,0,0);
    if (lVar8 != 0) {
      FMemory::Free(lVar8);
    }
  }
  return;
}



// FUNCTION 142454390 FUN_142454390 body=925 status=ok
// SIG undefined FUN_142454390(void)

void FUN_142454390(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined1 local_res8 [8];
  undefined1 local_38 [24];
  longlong local_20;
  uint local_c;
  
  uVar3 = (**(code **)(*param_1 + 0x148))();
  FString::operator=(param_1 + 0x8b,param_3);
  FActorSpawnParameters::FActorSpawnParameters(local_38);
  local_20 = param_1[0x2a];
  local_c = local_c | 0x40;
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x758))(param_1,local_res8);
  if (*plVar4 != 0) {
    lVar5 = FUN_142948cb0();
    lVar7 = *plVar4;
    for (lVar6 = lVar7; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
      if (lVar6 == lVar5) goto LAB_142454420;
    }
  }
  lVar7 = 0;
LAB_142454420:
  plVar4 = (longlong *)UWorld::SpawnActor(uVar3,lVar7,0,0,local_38);
  param_1[0x96] = (longlong)plVar4;
  (**(code **)(*plVar4 + 0x6e8))(plVar4,param_3);
  iVar2 = FUN_142235230(param_1);
  if (iVar2 != 0) {
    plVar4 = (longlong *)UOnlineEngineInterface::Get();
    cVar1 = (**(code **)(*plVar4 + 0x2f8))(plVar4,uVar3,*(undefined8 *)(param_1[0x96] + 0x468));
    if ((cVar1 == '\0') &&
       (cVar1 = (**(code **)(*(longlong *)param_1[0x96] + 0x6f0))(), cVar1 == '\0')) {
      (**(code **)(*(longlong *)param_1[0x96] + 0x780))();
    }
  }
  (**(code **)(*param_1 + 0x930))(param_1,DAT_146af3918);
  if (param_1[0x8e] != 0) {
    lVar5 = AGeometryCollectionActor::GetPrivateStaticClass();
    lVar7 = param_1[0x8e];
    for (lVar6 = lVar7; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
      if (lVar6 == lVar5) goto LAB_1424544e7;
    }
  }
  lVar7 = 0;
LAB_1424544e7:
  lVar6 = ARemnantQuest::GetPrivateStaticClass();
  for (; (lVar7 != 0 && (lVar7 != lVar6)); lVar7 = *(longlong *)(lVar7 + 0x30)) {
  }
  lVar7 = FUN_14244d3d0();
  FUN_14243b7e0(lVar7 + 0x30,local_res8,param_1,&LAB_142440618);
  lVar7 = FUN_14244d3d0();
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_143f4d290;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    plVar4[2] = (longlong)&LAB_14244063c;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar6;
    *plVar4 = (longlong)&PTR_FUN_143f4d2d8;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar7 + 0x48,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    iVar2 = *(int *)(lVar7 + 0x50);
    *(int *)(lVar7 + 0x50) = iVar2 + 1;
    if (*(int *)(lVar7 + 0x54) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar7 + 0x48,iVar2);
    }
    puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar7 + 0x48));
    *puVar8 = plVar4;
    *(undefined4 *)(puVar8 + 1) = 3;
  }
  lVar7 = FUN_14244d3d0();
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_1441c0108;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    plVar4[2] = (longlong)&LAB_142440624;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar6;
    *plVar4 = (longlong)&PTR_FUN_1441c0150;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar7 + 0x60,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    iVar2 = *(int *)(lVar7 + 0x68);
    *(int *)(lVar7 + 0x68) = iVar2 + 1;
    if (*(int *)(lVar7 + 0x6c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar7 + 0x60,iVar2);
    }
    puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar7 + 0x60));
    *puVar8 = plVar4;
    *(undefined4 *)(puVar8 + 1) = 3;
  }
  lVar7 = FUN_14244d3d0();
  FUN_14243b7e0(lVar7 + 0x78,local_res8,param_1,&LAB_142440630);
  lVar7 = FUN_14244d3d0();
  plVar4 = (longlong *)(lVar7 + 0x90);
  plVar9 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = (longlong)&PTR_FUN_1441c0108;
    FWeakObjectPtr::operator=(plVar9 + 1,param_1);
    plVar9[2] = (longlong)&LAB_142440648;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar9[4] = lVar6;
    *plVar9 = (longlong)&PTR_FUN_1441c0150;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar4,1);
    (**(code **)(*plVar9 + 0x20))(plVar9,local_res8);
    iVar2 = *(int *)(lVar7 + 0x98);
    *(int *)(lVar7 + 0x98) = iVar2 + 1;
    if (*(int *)(lVar7 + 0x9c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar2);
    }
    puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar4);
    *puVar8 = plVar9;
    *(undefined4 *)(puVar8 + 1) = 3;
  }
  return;
}



// FUNCTION 142454730 FUN_142454730 body=300 status=ok
// SIG undefined FUN_142454730(void)

void FUN_142454730(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  undefined1 local_38 [24];
  longlong local_20;
  uint local_c;
  
  uVar4 = (**(code **)(*param_1 + 0x148))();
  FString::operator=(param_1 + 0x8b,param_3);
  FActorSpawnParameters::FActorSpawnParameters(local_38);
  local_20 = param_1[0x2a];
  local_c = local_c | 0x40;
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x758))(param_1,local_res8);
  if (*plVar5 != 0) {
    lVar6 = FUN_142948cb0();
    lVar7 = *plVar5;
    for (lVar1 = lVar7; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar6) goto LAB_1424547c0;
    }
  }
  lVar7 = 0;
LAB_1424547c0:
  plVar5 = (longlong *)UWorld::SpawnActor(uVar4,lVar7,0,0,local_38);
  param_1[0x96] = (longlong)plVar5;
  (**(code **)(*plVar5 + 0x6e8))(plVar5,param_3);
  iVar3 = FUN_142235230(param_1);
  if (iVar3 != 0) {
    plVar5 = (longlong *)UOnlineEngineInterface::Get();
    cVar2 = (**(code **)(*plVar5 + 0x2f8))(plVar5,uVar4,*(undefined8 *)(param_1[0x96] + 0x468));
    if ((cVar2 == '\0') &&
       (cVar2 = (**(code **)(*(longlong *)param_1[0x96] + 0x6f0))(), cVar2 == '\0')) {
      (**(code **)(*(longlong *)param_1[0x96] + 0x780))();
    }
  }
  return;
}



// FUNCTION 142454860 FUN_142454860 body=86 status=ok
// SIG undefined FUN_142454860(void)

void FUN_142454860(longlong param_1)

{
  *(undefined8 *)(*(longlong *)(param_1 + 0x4b8) + 0x458) = *(undefined8 *)(param_1 + 0x10);
  (**(code **)(**(longlong **)(param_1 + 0x4b8) + 0x718))();
  *(undefined8 *)(*(longlong *)(param_1 + 0x4b8) + 0x468) = *(undefined8 *)(param_1 + 0x498);
                    /* WARNING: Could not recover jumptable at 0x0001424548af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x4b8) + 0x720))();
  return;
}



// FUNCTION 1424548c0 FUN_1424548c0 body=1454 status=ok
// SIG undefined FUN_1424548c0(void)

longlong *
FUN_1424548c0(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  undefined2 *puVar3;
  char cVar4;
  wint_t wVar5;
  wint_t wVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  int iVar14;
  wint_t *pwVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  wchar_t *_Source;
  undefined4 local_res20;
  wchar_t *local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined2 *local_a0;
  undefined8 local_98;
  longlong local_90 [2];
  undefined2 *local_80;
  int local_78;
  undefined4 local_74;
  wchar_t *local_70;
  undefined2 *local_68;
  undefined8 local_60;
  ulonglong local_58 [2];
  undefined1 local_48 [16];
  
  local_58[0] = param_4 + 8;
  (**(code **)(*param_1 + 0x888))(param_1,local_90 + 2,param_3,local_58[0],param_5,param_6);
  puVar17 = &DAT_143f3eda8;
  puVar16 = &DAT_143f3eda8;
  if (local_78 != 0) {
    puVar16 = local_80;
  }
  pwVar15 = &DAT_1450a70d8;
  do {
    wVar5 = *(wint_t *)((longlong)pwVar15 + (longlong)(puVar16 + -0xa285386c));
    if ((wVar5 == 0) && (*pwVar15 == 0)) goto LAB_142454986;
    if (wVar5 != *pwVar15) {
      wVar5 = towlower(wVar5);
      wVar6 = towlower(*pwVar15);
      if (wVar5 != wVar6) break;
    }
    pwVar15 = pwVar15 + 1;
  } while( true );
  if (wVar5 != wVar6) {
    *param_2 = (longlong)local_80;
    *(int *)(param_2 + 1) = local_78;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_74;
    return param_2;
  }
LAB_142454986:
  local_70 = (wchar_t *)0x0;
  local_res20 = 0;
  local_a8 = 0;
  local_68 = (undefined2 *)0x0;
  local_60 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  puVar16 = local_68;
  FGenericPlatformString::Memcpy(local_68,L"bIsFromInvite",0x1c);
  plVar8 = (longlong *)FString::FString(local_48,param_5);
  local_90[0] = 0;
  local_90[1] = 0;
  local_a0 = (undefined2 *)0x0;
  local_98 = 0;
  local_c8 = (wchar_t *)0x0;
  local_c0 = 0;
  cVar4 = FUN_1424523f0(plVar8,local_90);
  if (cVar4 != '\0') {
    iVar14 = (int)local_60;
    do {
      FUN_14244f760(local_90,&local_a0,&local_c8);
      puVar3 = local_a0;
      puVar13 = &DAT_143f3eda8;
      if ((int)local_98 != 0) {
        puVar13 = local_a0;
      }
      puVar12 = &DAT_143f3eda8;
      if (iVar14 != 0) {
        puVar12 = puVar16;
      }
      iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar13);
      if (iVar7 == 0) {
        if (local_c8 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        if (puVar3 != (undefined2 *)0x0) {
          FMemory::Free(puVar3);
        }
        if (local_90[0] != 0) {
          FMemory::Free();
        }
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        uVar10 = 1;
        goto LAB_142454a82;
      }
      cVar4 = FUN_1424523f0(plVar8,local_90);
    } while (cVar4 != '\0');
    if (local_c8 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (puVar3 != (undefined2 *)0x0) {
      FMemory::Free(puVar3);
    }
  }
  if (local_90[0] != 0) {
    FMemory::Free();
  }
  if (*plVar8 != 0) {
    FMemory::Free();
  }
  uVar10 = 0;
LAB_142454a82:
  (**(code **)(*(longlong *)param_1[0x96] + 0x708))
            ((longlong *)param_1[0x96],param_3,local_58[0],uVar10);
  if (puVar16 != (undefined2 *)0x0) {
    FMemory::Free(puVar16);
  }
  lVar9 = FUN_14293bcd0(param_1,param_3,param_6);
  if (lVar9 == 0) {
    FString::PrintfImpl(&local_c8,L"Failed to find PlayerStart");
    local_70 = local_c8;
    local_res20 = (int)local_c0;
    local_a8 = local_c0._4_4_;
  }
  else {
    (**(code **)(*param_1 + 0x8d0))(param_1,lVar9,param_3,local_90,local_58);
    (**(code **)(*param_3 + 0x730))(param_3,local_90,local_58);
    FWeakObjectPtr::operator=(param_3 + 0x8d,lVar9);
  }
  local_c0 = 0xe;
  local_c8 = (wchar_t *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
  pwVar1 = local_c8;
  FGenericPlatformString::Memcpy(local_c8,L"SpectatorOnly",0x1c);
  uVar10 = FString::FString(local_48,param_5);
  puVar11 = (undefined8 *)UGameplayStatics::ParseOption(&local_a0,uVar10,&local_c8);
  if (*(int *)(puVar11 + 1) == 0) {
    puVar16 = &DAT_143f3eda8;
  }
  else {
    puVar16 = (undefined2 *)*puVar11;
  }
  for (pwVar15 = &DAT_1450a0c94;
      (wVar5 = *(wint_t *)((longlong)pwVar15 + (longlong)(puVar16 + -0xa285064a)), wVar5 != 0 ||
      (*pwVar15 != 0)); pwVar15 = pwVar15 + 1) {
    if (wVar5 != *pwVar15) {
      wVar5 = towlower(wVar5);
      wVar6 = towlower(*pwVar15);
      if (wVar5 != wVar6) {
        iVar14 = (uint)wVar5 - (uint)wVar6;
LAB_142454c16:
        if (local_a0 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (pwVar1 != (wchar_t *)0x0) {
          FMemory::Free(pwVar1);
        }
        if ((iVar14 == 0) || (cVar4 = FUN_14293c170(param_1,param_3), cVar4 != '\0')) {
          (**(code **)(*param_3 + 0xe00))(param_3);
        }
        local_c8 = (wchar_t *)0x0;
        local_c0 = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
        pwVar1 = local_c8;
        FGenericPlatformString::Memcpy(local_c8,L"Name",10);
        uVar10 = FString::FString(local_48,param_5);
        puVar11 = (undefined8 *)UGameplayStatics::ParseOption(&local_a0,uVar10,&local_c8);
        iVar14 = *(int *)(puVar11 + 1);
        if (iVar14 == 0) {
          _Source = L"";
        }
        else {
          _Source = (wchar_t *)*puVar11;
        }
        local_b8 = (wchar_t *)0x0;
        iVar7 = iVar14 + -1;
        if (iVar14 == 0) {
          iVar7 = 0;
        }
        if (0x14 < iVar7) {
          iVar7 = 0x14;
        }
        local_ac = 0;
        local_b0 = iVar7 + 1;
        if (iVar7 == 0) {
          local_b0 = 0;
        }
        if (0 < local_b0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
        }
        pwVar2 = local_b8;
        if (0 < local_b0) {
          wcsncpy(local_b8,_Source,(longlong)iVar7);
          pwVar2[iVar7] = L'\0';
        }
        if (local_a0 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (pwVar1 != (wchar_t *)0x0) {
          FMemory::Free(pwVar1);
        }
        if (local_b0 < 2) {
          puVar11 = (undefined8 *)FText::ToString(param_1 + 0x99);
          if (*(int *)(puVar11 + 1) != 0) {
            puVar17 = (undefined2 *)*puVar11;
          }
          FString::PrintfImpl(&local_c8,L"%s%i",puVar17,*(undefined4 *)(param_3[0x8c] + 0x480));
          if (local_b8 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          local_b8 = local_c8;
          local_b0 = (int)local_c0;
          local_ac = local_c0._4_4_;
        }
        (**(code **)(*param_1 + 0x838))(param_1,param_3,&local_b8,0);
        local_c8 = (wchar_t *)0x0;
        local_c0 = 9;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
        pwVar1 = local_c8;
        FGenericPlatformString::Memcpy(local_c8,L"Hardware",0x12);
        uVar10 = FString::FString(local_48,param_5);
        uVar10 = UGameplayStatics::ParseOption(&local_a0,uVar10,&local_c8);
        FUN_1427178f0(param_3[0x8c],uVar10);
        if (local_a0 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (pwVar1 != (wchar_t *)0x0) {
          FMemory::Free(pwVar1);
        }
        *param_2 = (longlong)local_70;
        *(undefined4 *)(param_2 + 1) = local_res20;
        *(undefined4 *)((longlong)param_2 + 0xc) = local_a8;
        if (local_b8 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        if (local_80 == (undefined2 *)0x0) {
          return param_2;
        }
        FMemory::Free();
        return param_2;
      }
    }
  }
  iVar14 = 0;
  goto LAB_142454c16;
}



// FUNCTION 142454e70 FUN_142454e70 body=62 status=ok
// SIG undefined FUN_142454e70(void)

undefined8 * FUN_142454e70(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"DEPRECATED",0x16);
  return param_2;
}



// FUNCTION 142454eb0 FUN_142454eb0 body=464 status=ok
// SIG undefined FUN_142454eb0(void)

void FUN_142454eb0(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  longlong local_28 [2];
  
  if (param_2 != (longlong *)0x0) {
    lVar3 = FUN_1429e18b0();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    plVar4 = param_2;
    if (bVar1) goto LAB_142454f0c;
  }
  plVar4 = (longlong *)0x0;
LAB_142454f0c:
  local_28[0] = 0;
  local_28[1] = 0;
  lVar3 = FUN_14293bcd0(param_1,param_2,local_28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (lVar3 != 0) {
    (**(code **)(*param_1 + 0x8d0))(param_1,lVar3,param_2,local_38,local_48);
    (**(code **)(*param_2 + 0x730))(param_2,local_38,local_48);
  }
  FWeakObjectPtr::operator=(param_2 + 0x8d,lVar3);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0xbf8))(plVar4);
    cVar2 = FUN_14293c170(param_1,plVar4);
    if (cVar2 == '\0') {
      if ((char)param_1[0x9f] != '\0') {
        *(uint *)(plVar4 + 200) = *(uint *)(plVar4 + 200) | 0x10;
        (**(code **)(*plVar4 + 0x718))(plVar4,0x142);
        FUN_1429e09e0(plVar4,0x142);
      }
    }
    else {
      (**(code **)(*plVar4 + 0xe00))(plVar4);
    }
  }
  if (param_2 != (longlong *)0x0) {
    lVar3 = FUN_1429e18b0();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*param_1 + 0x9d0))(param_1,param_2);
      cVar2 = FUN_14293c170(param_1,param_2);
      if (cVar2 != '\0') {
        return;
      }
      *(int *)(param_1 + 0xa2) = (int)param_1[0xa2] + 1;
      *(int *)((longlong)param_1 + 0x51c) = *(int *)((longlong)param_1 + 0x51c) + -1;
      return;
    }
  }
  *(int *)((longlong)param_1 + 0x514) = *(int *)((longlong)param_1 + 0x514) + 1;
  return;
}



// FUNCTION 142455080 FUN_142455080 body=355 status=ok
// SIG undefined FUN_142455080(void)

void FUN_142455080(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  longlong local_28 [2];
  
  if (param_2 != (longlong *)0x0) {
    lVar3 = FUN_1429e18b0();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    plVar4 = param_2;
    if (bVar1) goto LAB_1424550dc;
  }
  plVar4 = (longlong *)0x0;
LAB_1424550dc:
  local_28[0] = 0;
  local_28[1] = 0;
  lVar3 = FUN_14293bcd0(param_1,param_2,local_28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (lVar3 != 0) {
    (**(code **)(*param_1 + 0x8d0))(param_1,lVar3,param_2,local_38,local_48);
    (**(code **)(*param_2 + 0x730))(param_2,local_38,local_48);
  }
  FWeakObjectPtr::operator=(param_2 + 0x8d,lVar3);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0xbf8))(plVar4);
    cVar2 = FUN_14293c170(param_1,plVar4);
    if (cVar2 == '\0') {
      if ((char)param_1[0x9f] != '\0') {
        *(uint *)(plVar4 + 200) = *(uint *)(plVar4 + 200) | 0x10;
        (**(code **)(*plVar4 + 0x718))(plVar4,0x142);
        FUN_1429e09e0(plVar4,0x142);
      }
    }
    else {
      (**(code **)(*plVar4 + 0xe00))(plVar4);
    }
  }
  return;
}



// FUNCTION 142455200 FUN_142455200 body=373 status=ok
// SIG undefined FUN_142455200(void)

void FUN_142455200(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  float fVar11;
  undefined1 local_res8 [8];
  
  if (((*(char *)(param_1 + 0x30) == '\0') &&
      (plVar5 = (longlong *)FUN_142875430(DAT_146b17150), plVar5 != (longlong *)0x0)) &&
     (*(longlong *)(param_1 + 0x28) != 0)) {
    (**(code **)(*plVar5 + 0x30))(plVar5,*(longlong *)(param_1 + 0x28),1,0,0);
    puVar6 = (undefined8 *)
             (**(code **)(*plVar5 + 0x78))(plVar5,local_res8,*(undefined8 *)(param_1 + 0x28));
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x300))(*(longlong **)(param_1 + 0x28),*puVar6);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x130);
    fVar11 = (float)USoundWave::GetSampleRateForCurrentPlatform();
    iVar3 = (*(int *)(*(longlong *)(param_1 + 0x28) + 0xe8) * 0x140) / ((int)fVar11 * 2) + 1;
    *(int *)(param_1 + 0x4c) = iVar3;
    iVar3 = iVar3 + *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x40) = iVar3;
    if (*(int *)(param_1 + 0x44) < iVar3) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x38);
    }
    iVar8 = 0x140;
    iVar9 = 1;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0x140;
    iVar3 = -1;
    if (1 < *(int *)(*(longlong *)(param_1 + 0x28) + 0xe8)) {
      pbVar10 = (byte *)(lVar2 + 1);
      do {
        bVar1 = *pbVar10;
        iVar4 = iVar8 / ((int)fVar11 * 2);
        bVar7 = ~bVar1;
        if ((bVar1 & 0x80) == 0) {
          bVar7 = bVar1;
        }
        if (iVar4 != iVar3) {
          *(byte *)((longlong)iVar4 + *(longlong *)(param_1 + 0x38)) = bVar7 * '\x02';
          iVar3 = iVar4;
        }
        iVar9 = iVar9 + 2;
        iVar8 = iVar8 + 0x280;
        pbVar10 = pbVar10 + 2;
      } while (iVar9 < *(int *)(*(longlong *)(param_1 + 0x28) + 0xe8));
    }
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  return;
}



// FUNCTION 1424553a0 IsRunning body=8 status=ok
// SIG undefined IsRunning(void)

undefined1 AFunctionalTest::IsRunning(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x308);
}



// FUNCTION 1424553b0 IsGamePaused body=47 status=ok
// SIG undefined IsGamePaused(void)

void UGameplayStatics::IsGamePaused(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar1 != 0) {
    FUN_14254a160(lVar1);
    return;
  }
  return;
}



// FUNCTION 1424553e0 FUN_1424553e0 body=83 status=ok
// SIG undefined FUN_1424553e0(void)

ulonglong FUN_1424553e0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  uVar3 = 0;
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    uVar3 = UWorld::IsPlayInEditor(uVar2);
    if ((char)uVar3 != '\0') goto LAB_14245542b;
  }
  if ((char)param_1[0xa8] != '\0') {
    uVar3 = FUN_142235230(param_1);
    if ((int)uVar3 == 1) {
      return uVar3;
    }
  }
LAB_14245542b:
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 142455480 IsStillValid body=16 status=ok
// SIG undefined IsStillValid(void)

bool FRootMotionServerToLocalIDMapping::IsStillValid(longlong param_1,float param_2)

{
  return param_2 - 3.0 < *(float *)(param_1 + 4) || param_2 - 3.0 == *(float *)(param_1 + 4);
}



// FUNCTION 1424554c0 K2_FindPlayerStart body=5 status=ok
// SIG undefined K2_FindPlayerStart(void)

undefined8 AGameModeBase::K2_FindPlayerStart(longlong *param_1,undefined8 param_2,void **param_3)

{
  uint uVar1;
  void *_Src;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uStack_28;
  void *pvStack_20;
  ulonglong uStack_18;
  undefined8 uStack_10;
  
  pvStack_20 = (void *)0x0;
  uStack_18 = 0;
  uStack_10 = 0;
  uStack_28 = param_2;
  if (&pvStack_20 != param_3) {
    uVar1 = *(uint *)(param_3 + 1);
    _Src = *param_3;
    uStack_18 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&pvStack_20,uVar1,0);
      ::_guard_xfg_dispatch_icall_nop(pvStack_20,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  lVar2 = *param_1;
  uVar3 = FUN_14178ac60(param_1,DAT_146b1e680);
  (**(code **)(lVar2 + 0x208))(param_1,uVar3,&uStack_28);
  uVar3 = uStack_10;
  if (pvStack_20 != (void *)0x0) {
    FMemory::Free();
  }
  return uVar3;
}



// FUNCTION 1424554d0 FUN_1424554d0 body=155 status=ok
// SIG undefined FUN_1424554d0(void)

undefined8 FUN_1424554d0(longlong *param_1)

{
  longlong lVar1;
  float extraout_XMM0_Da;
  float fVar2;
  float fVar3;
  
  if (param_1[0x41] != 0) {
    lVar1 = AActor::GetWorldSettings();
    if (((lVar1 != 0) && ((*(byte *)(lVar1 + 0x460) & 1) != 0)) && (param_1[0x2f] != 0)) {
      fVar2 = *(float *)(lVar1 + 0x470);
      fVar3 = *(float *)(param_1[0x2f] + 0x228);
      if (fVar3 < fVar2) {
        (**(code **)(*param_1 + 0x400))(param_1);
        fVar3 = (fVar2 - fVar3) + 2.0;
        fVar2 = extraout_XMM0_Da;
        if (fVar3 <= extraout_XMM0_Da) {
          fVar2 = fVar3;
        }
        *(float *)((longlong)param_1 + 0x194) = fVar2;
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142455570 FUN_142455570 body=590 status=ok
// SIG undefined FUN_142455570(void)

longlong * FUN_142455570(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  longlong local_1d8 [3];
  undefined4 local_1c0;
  undefined1 local_1b8 [16];
  longlong local_1a8;
  undefined4 local_198;
  longlong local_190;
  undefined8 local_188;
  undefined2 *local_180;
  undefined8 local_178;
  undefined **local_168 [18];
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined **local_b8 [19];
  undefined1 local_20;
  
  plVar7 = (longlong *)0x0;
  if ((DAT_146850158 == (longlong *)0x0) &&
     (plVar4 = (longlong *)operator_new(8), DAT_146850158 = plVar7, plVar4 != (longlong *)0x0)) {
    *plVar4 = (longlong)&PTR_FUN_143f3eef8;
    DAT_146850158 = plVar4;
  }
  plVar4 = (longlong *)(**(code **)(*DAT_146850158 + 0x40))();
  if (plVar4 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  iVar1 = *(int *)(param_1 + 1);
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  if (iVar3 < 1) {
    return (longlong *)0x0;
  }
  local_1d8[0] = 0;
  local_1d8[1] = 0;
  if (iVar1 == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = (undefined2 *)*param_1;
  }
  cVar2 = (**(code **)(*plVar4 + 0x20))(plVar4,0,puVar8,param_2,local_1d8);
  if (cVar2 == '\0') goto LAB_142455790;
  FArchive::FArchive(local_168);
  local_d8 = 0;
  local_168[0] = &PTR_FUN_143f4a3a0;
  local_d0 = local_1d8;
  local_c8 = 0x7fffffffffffffff;
  FArchive::SetIsLoading(local_168,1);
  FArchive::SetIsPersistent(local_168,1);
  local_1d8[2] = 0;
  local_1c0 = 0;
  FEngineVersion::FEngineVersion(local_1b8);
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = (undefined2 *)0x0;
  local_178 = 0;
  FUN_14245bcc0(local_1d8 + 2,local_168);
  puVar8 = &DAT_143f3eda8;
  if ((int)local_178 != 0) {
    puVar8 = local_180;
  }
  uVar5 = FUN_14171bfe0();
  lVar6 = FUN_141799410(uVar5,0xffffffffffffffff,puVar8);
  if (lVar6 == 0) {
    puVar8 = &DAT_143f3eda8;
    if ((int)local_178 != 0) {
      puVar8 = local_180;
    }
    lVar6 = FUN_14243bb40(0,puVar8,0,0,0);
    if (lVar6 != 0) goto LAB_1424556f4;
  }
  else {
LAB_1424556f4:
    uVar5 = GetTransientPackage();
    plVar7 = (longlong *)NewObject<USaveGame>(uVar5,lVar6,0,0,0,0,0);
    FArchiveProxy::FArchiveProxy(local_b8,local_168);
    local_20 = 1;
    local_b8[0] = &PTR_FUN_143f4a5b0;
    (**(code **)(*plVar7 + 0xa8))(plVar7,local_b8);
    FArchive::~FArchive(local_b8);
  }
  if (local_180 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_190 != 0) {
    FMemory::Free();
  }
  if (local_1a8 != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(local_168);
LAB_142455790:
  if (local_1d8[0] != 0) {
    FMemory::Free();
  }
  return plVar7;
}



// FUNCTION 1424557c0 LoadStreamLevel body=217 status=ok
// SIG undefined LoadStreamLevel(void)

void UGameplayStatics::LoadStreamLevel
               (undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
               longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_res10;
  undefined1 local_28 [16];
  
  local_res10 = param_2;
  lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 400) == 0) {
      lVar4 = lVar1 + 0x400;
    }
    else {
      lVar4 = *(longlong *)(*(longlong *)(lVar1 + 400) + 0x98);
    }
    lVar2 = FLatentActionManager::
            FindExistingActionWithPredicate<FStreamLevelAction,_FLatentActionManager::FindExistingAction<FStreamLevelAction>_::_2_::FFirstItemPredicate>
                      (lVar4,*(undefined8 *)(param_5 + 0x10),*(undefined4 *)(param_5 + 4),local_28);
    if (lVar2 == 0) {
      lVar2 = operator_new(0x38);
      uVar3 = 0;
      if (lVar2 != 0) {
        uVar3 = FUN_14253e390(lVar2,1,&local_res10,param_3,param_4,param_5,lVar1);
      }
      FUN_142514cf0(lVar4,*(undefined8 *)(param_5 + 0x10),*(undefined4 *)(param_5 + 4),uVar3);
    }
  }
  return;
}



// FUNCTION 1424558a0 FUN_1424558a0 body=403 status=ok
// SIG undefined FUN_1424558a0(void)

longlong FUN_1424558a0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,longlong *param_7)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  
  lVar1 = (**(code **)(*param_1 + 0x800))();
  if (lVar1 == 0) {
    plVar2 = (longlong *)
             (**(code **)(*(longlong *)param_1[0x96] + 0x700))
                       ((longlong *)param_1[0x96],&local_28,param_5);
    if (param_7 != plVar2) {
      if (*param_7 != 0) {
        FMemory::Free();
      }
      *param_7 = *plVar2;
      *plVar2 = 0;
      *(int *)(param_7 + 1) = (int)plVar2[1];
      *(undefined4 *)((longlong)param_7 + 0xc) = *(undefined4 *)((longlong)plVar2 + 0xc);
      plVar2[1] = 0;
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
    if ((int)param_7[1] < 2) {
      lVar1 = (**(code **)(*param_1 + 0x828))(param_1,param_3,param_5);
      if (lVar1 == 0) {
        FString::PrintfImpl(&local_28,L"Failed to spawn player controller");
        if (param_7 == &local_28) {
          if (local_28 != 0) {
            FMemory::Free();
          }
        }
        else {
          if (*param_7 != 0) {
            FMemory::Free();
          }
          *param_7 = local_28;
          *(undefined4 *)(param_7 + 1) = local_20;
          *(undefined4 *)((longlong)param_7 + 0xc) = local_1c;
        }
      }
      else {
        uVar3 = (**(code **)(*param_1 + 0x890))(param_1,&local_28,lVar1,param_6,param_5,param_4);
        FString::operator=(param_7,uVar3);
        if (local_28 != 0) {
          FMemory::Free();
        }
        if ((int)param_7[1] < 2) {
          return lVar1;
        }
      }
    }
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 142455a40 FUN_142455a40 body=129 status=ok
// SIG undefined FUN_142455a40(void)

void FUN_142455a40(longlong *param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_1429e18b0();
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
      FUN_14245ce50(param_1,param_2);
      (**(code **)(*param_1 + 0x9b8))(param_1,*(undefined8 *)(param_2 + 0x460),param_2);
    }
  }
  FUN_142455ad0(param_1,param_2);
  return;
}



// FUNCTION 142455ad0 FUN_142455ad0 body=438 status=ok
// SIG undefined FUN_142455ad0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142455ad0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  if (param_2 != 0) {
    lVar5 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      DAT_1465325ec = DAT_1465325ec + 1;
      bVar2 = false;
      lVar5 = (longlong)(DAT_1465325e0 + -1);
      if (-1 < DAT_1465325e0 + -1) {
        lVar7 = lVar5 << 4;
        bVar2 = false;
        do {
          if (((*(int *)(lVar7 + 8 + DAT_1465325d8) == 0) ||
              (plVar1 = *(longlong **)(lVar7 + DAT_1465325d8), plVar1 == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(*plVar1 + 0x40))(plVar1,param_1,param_2), cVar4 == '\0')) {
            bVar2 = true;
          }
          lVar7 = lVar7 + -0x10;
          lVar5 = lVar5 + -1;
        } while (-1 < lVar5);
      }
      iVar3 = DAT_1465325e0;
      DAT_1465325ec = DAT_1465325ec + -1;
      if ((bVar2) && (DAT_1465325ec < 1)) {
        iVar6 = 0;
        if (0 < DAT_1465325e0) {
          lVar5 = 0;
          do {
            if (((*(int *)(lVar5 + 8 + DAT_1465325d8) == 0) ||
                (*(longlong **)(lVar5 + DAT_1465325d8) == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(**(longlong **)(lVar5 + DAT_1465325d8) + 0x10))(),
               cVar4 != '\0')) {
              TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1465325d8,iVar6,1,1);
            }
            else {
              iVar6 = iVar6 + 1;
              lVar5 = lVar5 + 0x10;
            }
          } while (iVar6 < DAT_1465325e0);
        }
        _DAT_1465325e8 = DAT_1465325e0 * 2;
        if (_DAT_1465325e8 < 3) {
          _DAT_1465325e8 = 2;
        }
        if ((_DAT_1465325e8 < iVar3) && (DAT_1465325e4 != DAT_1465325e0)) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1465325d8);
        }
      }
      FUN_14293c020(param_1,param_2);
      plVar1 = *(longlong **)(param_1 + 0x4b0);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x728))(plVar1,param_2);
      }
    }
  }
  return;
}



// FUNCTION 142455c90 FUN_142455c90 body=385 status=ok
// SIG undefined FUN_142455c90(void)

byte * FUN_142455c90(byte *param_1,byte param_2,char param_3,undefined4 param_4,undefined4 param_5,
                    undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,undefined8 *param_9,
                    undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                    undefined4 param_14,undefined4 param_15,undefined8 *param_16,
                    undefined8 *param_17)

{
  undefined4 uVar1;
  
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  _guard_xfg_dispatch_icall_nop(param_1,0,0x90);
  *param_1 = *param_1 & 0xfe;
  *(undefined4 *)(param_1 + 0x10) = param_5;
  *param_1 = (*param_1 | param_2) & 0xfd | param_3 * '\x02';
  *(undefined4 *)(param_1 + 0xc) = param_4;
  uVar1 = *(undefined4 *)(param_6 + 1);
  *(undefined8 *)(param_1 + 0x14) = *param_6;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = *(undefined4 *)(param_7 + 1);
  *(undefined8 *)(param_1 + 0x20) = *param_7;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = *(undefined4 *)(param_8 + 1);
  *(undefined8 *)(param_1 + 0x2c) = *param_8;
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  uVar1 = *(undefined4 *)(param_9 + 1);
  *(undefined8 *)(param_1 + 0x38) = *param_9;
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  FWeakObjectPtr::operator=(param_1 + 100,param_10);
  FWeakObjectPtr::operator=(param_1 + 0x6c,param_11);
  FWeakObjectPtr::operator=(param_1 + 0x74,param_12);
  *(undefined8 *)(param_1 + 0x80) = param_13;
  *(undefined4 *)(param_1 + 0x60) = param_14;
  uVar1 = *(undefined4 *)(param_16 + 1);
  *(undefined8 *)(param_1 + 0x44) = *param_16;
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  uVar1 = *(undefined4 *)(param_17 + 1);
  *(undefined8 *)(param_1 + 0x50) = *param_17;
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 4) = param_15;
  return param_1;
}



// FUNCTION 142455e20 Matches body=139 status=ok
// SIG undefined Matches(void)

ulonglong FRootMotionSource::Matches(longlong *param_1,longlong *param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_2 + 0x58))(param_2);
    in_RAX = (**(code **)(*param_1 + 0x58))(param_1);
    if ((((in_RAX == uVar1) &&
         (in_RAX = (ulonglong)*(ushort *)(param_2 + 2),
         *(ushort *)(param_1 + 2) == *(ushort *)(param_2 + 2))) &&
        (in_RAX = 0, *(char *)((longlong)param_1 + 0x32) == *(char *)((longlong)param_2 + 0x32))) &&
       ((in_RAX = param_2[3], param_1[3] == in_RAX &&
        (ABS(*(float *)((longlong)param_1 + 0x2c) - *(float *)((longlong)param_2 + 0x2c)) <= 1e-08))
       )) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142455eb0 Matches body=155 status=ok
// SIG undefined Matches(void)

ulonglong FRootMotionSource_ConstantForce::Matches(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = FRootMotionSource::Matches();
  if (((((char)uVar1 != '\0') &&
       (ABS(*(float *)(param_1 + 0x98) - *(float *)(param_2 + 0x98)) < 0.1)) &&
      (ABS(*(float *)(param_1 + 0x9c) - *(float *)(param_2 + 0x9c)) < 0.1)) &&
     ((ABS(*(float *)(param_1 + 0xa0) - *(float *)(param_2 + 0xa0)) < 0.1 &&
      (uVar1 = *(ulonglong *)(param_2 + 0xa8), *(ulonglong *)(param_1 + 0xa8) == uVar1)))) {
    return CONCAT71((int7)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 142455f50 Matches body=377 status=ok
// SIG undefined Matches(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FRootMotionSource_JumpForce::Matches(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar6 = FRootMotionSource::Matches();
  if (((((char)uVar6 != '\0') && (uVar6 = 0, *(char *)(param_1 + 0xac) == *(char *)(param_2 + 0xac))
       ) && (uVar6 = *(ulonglong *)(param_2 + 0xb0), *(ulonglong *)(param_1 + 0xb0) == uVar6)) &&
     (((uVar6 = *(ulonglong *)(param_2 + 0xb8), *(ulonglong *)(param_1 + 0xb8) == uVar6 &&
       (ABS(*(float *)(param_1 + 0xa4) - *(float *)(param_2 + 0xa4)) <= 1e-08)) &&
      (ABS(*(float *)(param_1 + 0xa8) - *(float *)(param_2 + 0xa8)) <= 1e-08)))) {
    fVar9 = *(float *)(param_1 + 0x98) - *(float *)(param_2 + 0x98);
    fVar10 = *(float *)(param_1 + 0x9c) - *(float *)(param_2 + 0x9c);
    fVar11 = *(float *)(param_1 + 0xa0) - *(float *)(param_2 + 0xa0);
    fVar1 = (float)DAT_146af3890;
    fVar2 = DAT_146af3890._4_4_;
    fVar3 = DAT_146af3890._8_4_;
    fVar4 = DAT_146af3890._12_4_;
    auVar7._4_4_ = fVar10;
    auVar7._0_4_ = fVar9;
    auVar7._8_4_ = fVar11;
    auVar7._12_4_ = 0;
    auVar7 = divps(auVar7,_DAT_146af3890);
    fVar9 = fVar9 - (float)(int)auVar7._0_4_ * fVar1;
    fVar10 = fVar10 - (float)(int)auVar7._4_4_ * fVar2;
    fVar11 = fVar11 - (float)(int)auVar7._8_4_ * fVar3;
    fVar12 = 0.0 - (float)(int)auVar7._12_4_ * fVar4;
    fVar9 = (float)(((uint)(fVar1 + fVar9) ^ (uint)fVar9) & -(uint)(0.0 <= fVar9) ^
                   (uint)(fVar1 + fVar9));
    fVar10 = (float)(((uint)(fVar2 + fVar10) ^ (uint)fVar10) & -(uint)(0.0 <= fVar10) ^
                    (uint)(fVar2 + fVar10));
    fVar11 = (float)(((uint)(fVar3 + fVar11) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                    (uint)(fVar3 + fVar11));
    fVar12 = (float)(((uint)(fVar4 + fVar12) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                    (uint)(fVar4 + fVar12));
    auVar8._4_4_ = -(uint)(1.0 < (float)((((uint)(fVar10 - fVar2) ^ (uint)fVar10) &
                                          -(uint)(fRam0000000146af3884 < fVar10) ^ (uint)fVar10) &
                                        uRam0000000146af3874));
    auVar8._0_4_ = -(uint)(1.0 < (float)((((uint)(fVar9 - fVar1) ^ (uint)fVar9) &
                                          -(uint)(_DAT_146af3880 < fVar9) ^ (uint)fVar9) &
                                        _DAT_146af3870));
    auVar8._8_4_ = -(uint)(1.0 < (float)((((uint)(fVar11 - fVar3) ^ (uint)fVar11) &
                                          -(uint)(fRam0000000146af3888 < fVar11) ^ (uint)fVar11) &
                                        uRam0000000146af3878));
    auVar8._12_4_ =
         -(uint)(1.0 < (float)((((uint)(fVar12 - fVar4) ^ (uint)fVar12) &
                                -(uint)(fRam0000000146af388c < fVar12) ^ (uint)fVar12) &
                              uRam0000000146af387c));
    iVar5 = movmskps((int)uVar6,auVar8);
    uVar6 = CONCAT44((int)(uVar6 >> 0x20),iVar5);
    if (iVar5 == 0) {
      return CONCAT71((int7)(uVar6 >> 8),1);
    }
  }
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 1424560d0 Matches body=98 status=ok
// SIG undefined Matches(void)

ulonglong FRootMotionSource_MoveToDynamicForce::Matches(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = FRootMotionSource::Matches();
  if (((((char)uVar1 != '\0') && (uVar1 = 0, *(char *)(param_1 + 0xbc) == *(char *)(param_2 + 0xbc))
       ) && (uVar1 = *(ulonglong *)(param_2 + 0xc0), *(ulonglong *)(param_1 + 0xc0) == uVar1)) &&
     (uVar1 = *(ulonglong *)(param_2 + 200), *(ulonglong *)(param_1 + 200) == uVar1)) {
    return CONCAT71((int7)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 142456140 Matches body=174 status=ok
// SIG undefined Matches(void)

ulonglong FRootMotionSource_MoveToForce::Matches(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = FRootMotionSource::Matches();
  if (((((char)uVar1 != '\0') && (uVar1 = 0, *(char *)(param_1 + 0xb0) == *(char *)(param_2 + 0xb0))
       ) && (uVar1 = *(ulonglong *)(param_2 + 0xb8), *(ulonglong *)(param_1 + 0xb8) == uVar1)) &&
     (((ABS(*(float *)(param_1 + 0xa4) - *(float *)(param_2 + 0xa4)) < 0.1 &&
       (ABS(*(float *)(param_1 + 0xa8) - *(float *)(param_2 + 0xa8)) < 0.1)) &&
      (ABS(*(float *)(param_1 + 0xac) - *(float *)(param_2 + 0xac)) < 0.1)))) {
    return CONCAT71((int7)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1424561f0 Matches body=466 status=ok
// SIG undefined Matches(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FRootMotionSource_RadialForce::Matches(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar6 = FRootMotionSource::Matches();
  if ((((((char)uVar6 != '\0') &&
        (uVar6 = 0, *(char *)(param_1 + 0xb8) == *(char *)(param_2 + 0xb8))) &&
       (uVar6 = 0, *(char *)(param_1 + 0xb9) == *(char *)(param_2 + 0xb9))) &&
      ((uVar6 = 0, *(char *)(param_1 + 0xd0) == *(char *)(param_2 + 0xd0) &&
       (uVar6 = *(ulonglong *)(param_2 + 0xc0), *(ulonglong *)(param_1 + 0xc0) == uVar6)))) &&
     (uVar6 = *(ulonglong *)(param_2 + 200), *(ulonglong *)(param_1 + 200) == uVar6)) {
    uVar6 = *(ulonglong *)(param_2 + 0xa8);
    if (*(ulonglong *)(param_1 + 0xa8) != uVar6) {
      uVar6 = FVector::PointsAreNear(param_1 + 0x98,param_2 + 0x98,0x3f800000);
      if ((char)uVar6 == '\0') goto LAB_1424563b5;
    }
    if ((ABS(*(float *)(param_1 + 0xb0) - *(float *)(param_2 + 0xb0)) <= 1e-08) &&
       (ABS(*(float *)(param_1 + 0xb4) - *(float *)(param_2 + 0xb4)) <= 1e-08)) {
      fVar9 = *(float *)(param_1 + 0xd4) - *(float *)(param_2 + 0xd4);
      fVar10 = *(float *)(param_1 + 0xd8) - *(float *)(param_2 + 0xd8);
      fVar11 = *(float *)(param_1 + 0xdc) - *(float *)(param_2 + 0xdc);
      fVar1 = (float)DAT_146af3890;
      fVar2 = DAT_146af3890._4_4_;
      fVar3 = DAT_146af3890._8_4_;
      fVar4 = DAT_146af3890._12_4_;
      auVar7._4_4_ = fVar10;
      auVar7._0_4_ = fVar9;
      auVar7._8_4_ = fVar11;
      auVar7._12_4_ = 0;
      auVar7 = divps(auVar7,_DAT_146af3890);
      fVar9 = fVar9 - (float)(int)auVar7._0_4_ * fVar1;
      fVar10 = fVar10 - (float)(int)auVar7._4_4_ * fVar2;
      fVar11 = fVar11 - (float)(int)auVar7._8_4_ * fVar3;
      fVar12 = 0.0 - (float)(int)auVar7._12_4_ * fVar4;
      fVar9 = (float)(((uint)(fVar1 + fVar9) ^ (uint)fVar9) & -(uint)(0.0 <= fVar9) ^
                     (uint)(fVar1 + fVar9));
      fVar10 = (float)(((uint)(fVar2 + fVar10) ^ (uint)fVar10) & -(uint)(0.0 <= fVar10) ^
                      (uint)(fVar2 + fVar10));
      fVar11 = (float)(((uint)(fVar3 + fVar11) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                      (uint)(fVar3 + fVar11));
      fVar12 = (float)(((uint)(fVar4 + fVar12) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                      (uint)(fVar4 + fVar12));
      auVar8._4_4_ = -(uint)(3.0 < (float)((((uint)(fVar10 - fVar2) ^ (uint)fVar10) &
                                            -(uint)(fRam0000000146af3884 < fVar10) ^ (uint)fVar10) &
                                          uRam0000000146af3874));
      auVar8._0_4_ = -(uint)(3.0 < (float)((((uint)(fVar9 - fVar1) ^ (uint)fVar9) &
                                            -(uint)(_DAT_146af3880 < fVar9) ^ (uint)fVar9) &
                                          _DAT_146af3870));
      auVar8._8_4_ = -(uint)(3.0 < (float)((((uint)(fVar11 - fVar3) ^ (uint)fVar11) &
                                            -(uint)(fRam0000000146af3888 < fVar11) ^ (uint)fVar11) &
                                          uRam0000000146af3878));
      auVar8._12_4_ =
           -(uint)(3.0 < (float)((((uint)(fVar12 - fVar4) ^ (uint)fVar12) &
                                  -(uint)(fRam0000000146af388c < fVar12) ^ (uint)fVar12) &
                                uRam0000000146af387c));
      iVar5 = movmskps((int)uVar6,auVar8);
      uVar6 = CONCAT44((int)(uVar6 >> 0x20),iVar5);
      if (iVar5 == 0) {
        return CONCAT71((int7)(uVar6 >> 8),1);
      }
    }
  }
LAB_1424563b5:
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 1424563d0 MatchesAndHasSameState body=72 status=ok
// SIG undefined MatchesAndHasSameState(void)

ulonglong FRootMotionSource::MatchesAndHasSameState(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x18))();
  if ((((char)uVar1 != '\0') && (uVar1 = 0, (char)param_1[6] == *(char *)(param_2 + 0x30))) &&
     (*(float *)(param_2 + 0x24) == *(float *)((longlong)param_1 + 0x24))) {
    return 1;
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 142456440 FUN_142456440 body=504 status=ok
// SIG undefined FUN_142456440(void)

undefined8 FUN_142456440(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined2 *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 local_res8 [8];
  
  puVar1 = *(undefined2 **)param_2[1];
  if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x10,2);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x10,2);
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x10) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
  }
  puVar1 = *(undefined2 **)param_2[1];
  if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x12,2);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x12,2);
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x12) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
  }
  plVar2 = (longlong *)param_2[1];
  local_res8[0] = *(undefined1 *)(param_1 + 0x14);
  if ((undefined1 *)plVar2[1] < (undefined1 *)*plVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res8,1);
  }
  else {
    local_res8[0] = *(undefined1 *)*plVar2;
    *plVar2 = *plVar2 + 1;
  }
  *(undefined1 *)(param_1 + 0x14) = local_res8[0];
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x18);
  puVar3 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x24,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x24,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x24) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar3 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x2c,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x2c,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x2c) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar4 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,(undefined1 *)(param_1 + 0x30),1);
  }
  else {
    *(undefined1 *)(param_1 + 0x30) = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x32);
  *param_4 = 1;
  return 1;
}



// FUNCTION 142456640 FUN_142456640 body=1126 status=ok
// SIG undefined FUN_142456640(void)

undefined8 FUN_142456640(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  byte local_res8 [8];
  undefined4 local_res10 [2];
  undefined8 local_res18;
  undefined1 *local_res20;
  int local_88;
  int local_84;
  int local_80 [2];
  longlong *local_78 [2];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  longlong *local_50 [2];
  
  if ((*(byte *)(param_2 + 5) & 2) != 0) {
    local_res8[0] = 0xff;
    if (*(int *)(param_1 + 0x90) < 0x100) {
      local_res8[0] = (byte)*(int *)(param_1 + 0x90);
    }
  }
  plVar4 = (longlong *)param_2[1];
  local_res18 = param_3;
  local_res20 = param_4;
  if ((byte *)plVar4[1] < (byte *)*plVar4 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res8,1);
  }
  else {
    local_res8[0] = *(byte *)*plVar4;
    *plVar4 = *plVar4 + 1;
  }
  iVar11 = 0;
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    lVar12 = param_1 + 8;
    iVar9 = *(int *)(param_1 + 0x90);
    uVar8 = (uint)local_res8[0];
    if (iVar9 < (int)(uint)local_res8[0]) {
      *(uint *)(param_1 + 0x90) = (uint)local_res8[0];
      if (*(int *)(param_1 + 0x94) < (int)(uint)local_res8[0]) {
        TArray<FObjectInitializer::FSubobjectsToInit::FSubobjectInit,TInlineAllocator<8,FDefaultAllocator>_>
        ::ResizeGrow(lVar12);
      }
      lVar6 = *(longlong *)(param_1 + 0x88);
      if (*(longlong *)(param_1 + 0x88) == 0) {
        lVar6 = lVar12;
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar6 + (longlong)iVar9 * 0x10),0,(longlong)(int)(uVar8 - iVar9) << 4);
    }
    else if ((int)(uint)local_res8[0] < iVar9) {
      FUN_14245cb10(lVar12,local_res8[0],iVar9 - uVar8,1);
    }
  }
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0xe8);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0xe9);
  if ((*(byte *)(param_2 + 5) & 2) == 0) {
    local_res10[0] = 0;
    (**(code **)(*param_2 + 0x60))(param_2,local_res10,0x18);
    local_88 = 0;
    local_84 = 0;
    local_80[0] = 0;
    iVar10 = 1 << ((char)local_res10[0] + 1U & 0x1f);
    iVar9 = 1 << ((char)local_res10[0] + 2U & 0x1f);
    (**(code **)(*param_2 + 0x60))(param_2,&local_88,iVar9);
    (**(code **)(*param_2 + 0x60))(param_2,&local_84,iVar9);
    (**(code **)(*param_2 + 0x60))(param_2,local_80,iVar9);
    *(float *)(param_1 + 0xec) = (float)(local_88 - iVar10) * 0.1;
    *(float *)(param_1 + 0xf0) = (float)(local_84 - iVar10) * 0.1;
    uVar3 = 1;
    *(float *)(param_1 + 0xf4) = (float)(local_80[0] - iVar10) * 0.1;
  }
  else {
    local_68 = *(undefined8 *)(param_1 + 0xec);
    local_60 = *(undefined4 *)(param_1 + 0xf4);
    uVar3 = FUN_1423249b0(&local_68,param_2);
  }
  *param_4 = uVar3;
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0xf8);
  puVar2 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,(undefined1 *)(param_1 + 0xf9),1);
  }
  else {
    *(undefined1 *)(param_1 + 0xf9) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  if (local_res8[0] != 0) {
    lVar12 = 0;
    do {
      if ((char)param_2[5] < '\0') break;
      lVar6 = param_1 + 8;
      lVar5 = *(longlong *)(param_1 + 0x88);
      if (*(longlong *)(param_1 + 0x88) == 0) {
        lVar5 = lVar6;
      }
      if (*(longlong **)(lVar5 + lVar12) == (longlong *)0x0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = (longlong *)(**(code **)(**(longlong **)(lVar5 + lVar12) + 0x58))();
      }
      local_78[0] = plVar4;
      (**(code **)(*param_2 + 0x30))(param_2,local_78);
      if (local_78[0] != (longlong *)0x0) {
        if ((*(byte *)(param_2 + 5) & 1) != 0) {
          lVar5 = *(longlong *)(param_1 + 0x88);
          if (*(longlong *)(param_1 + 0x88) == 0) {
            lVar5 = lVar6;
          }
          if ((*(longlong *)(lVar5 + lVar12) == 0) || (plVar4 != local_78[0])) {
            lVar5 = FMemory::Malloc((longlong)*(int *)(local_78[0][0x12] + 8),0);
            (**(code **)(*local_78[0] + 0x2a8))(local_78[0],lVar5,1);
            local_58 = lVar5;
            plVar4 = (longlong *)operator_new(0x18);
            if (plVar4 == (longlong *)0x0) {
              plVar4 = (longlong *)0x0;
            }
            else {
              *(undefined4 *)(plVar4 + 1) = 1;
              *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
              *plVar4 = (longlong)&PTR_FUN_143f3f2e0;
              plVar4[2] = lVar5;
            }
            local_50[0] = plVar4;
            SharedPointerInternals::EnableSharedFromThis(&local_58,lVar5,lVar5);
            lVar5 = *(longlong *)(param_1 + 0x88);
            if (*(longlong *)(param_1 + 0x88) == 0) {
              lVar5 = lVar6;
            }
            plVar7 = (longlong *)(lVar5 + lVar12);
            if (plVar7 != &local_58) {
              *plVar7 = local_58;
              local_58 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=(plVar7 + 1,local_50);
              plVar4 = local_50[0];
            }
            param_4 = local_res20;
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              plVar7 = plVar4 + 1;
              lVar5 = *plVar7;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*plVar4)(plVar4);
                LOCK();
                piVar1 = (int *)((longlong)plVar4 + 0xc);
                iVar9 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                param_4 = local_res20;
                if (iVar9 == 1) {
                  (**(code **)(*plVar4 + 8))(plVar4,1);
                  param_4 = local_res20;
                }
              }
            }
          }
        }
        if ((*(uint *)(local_78[0] + 0x11) & 0x400) != 0) {
          lVar5 = *(longlong *)(param_1 + 0x88);
          if (*(longlong *)(param_1 + 0x88) == 0) {
            lVar5 = lVar6;
          }
          (**(code **)(*(longlong *)local_78[0][0x12] + 0x60))
                    ((longlong *)local_78[0][0x12],param_2,local_res18,param_4,
                     *(undefined8 *)(lVar5 + lVar12));
        }
      }
      iVar11 = iVar11 + 1;
      lVar12 = lVar12 + 0x10;
    } while (iVar11 < (int)(uint)local_res8[0]);
  }
  *param_4 = 1;
  return 1;
}



// FUNCTION 142456ab0 FUN_142456ab0 body=101 status=ok
// SIG undefined FUN_142456ab0(void)

undefined1 FUN_142456ab0(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  
  cVar1 = FUN_142456440();
  if (cVar1 == '\0') {
    return 0;
  }
  FUN_1406da970(param_2,param_1 + 0x98);
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0xa8);
  *param_4 = 1;
  return 1;
}



// FUNCTION 142456b20 FUN_142456b20 body=315 status=ok
// SIG undefined FUN_142456b20(void)

undefined1 FUN_142456b20(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  
  cVar2 = FUN_142456440();
  if (cVar2 == '\0') {
    return 0;
  }
  FUN_1406da970(param_2,param_1 + 0x98);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xa4,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xa4,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xa4) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
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
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0xac);
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0xb0);
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0xb8);
  *param_4 = 1;
  return 1;
}



// FUNCTION 142456c60 FUN_142456c60 body=163 status=ok
// SIG undefined FUN_142456c60(void)

undefined1 FUN_142456c60(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  
  cVar1 = FUN_142456440();
  if (cVar1 == '\0') {
    return 0;
  }
  FUN_1406da970(param_2,param_1 + 0x98);
  FUN_1406da970(param_2,param_1 + 0xa4);
  FUN_1406da970(param_2,param_1 + 0xb0);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0xbc);
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0xc0);
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 200);
  *param_4 = 1;
  return 1;
}



// FUNCTION 142456d10 FUN_142456d10 body=132 status=ok
// SIG undefined FUN_142456d10(void)

undefined1 FUN_142456d10(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  
  cVar1 = FUN_142456440();
  if (cVar1 == '\0') {
    return 0;
  }
  FUN_1406da970(param_2,param_1 + 0x98);
  FUN_1406da970(param_2,param_1 + 0xa4);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0xb0);
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0xb8);
  *param_4 = 1;
  return 1;
}



// FUNCTION 142456da0 FUN_142456da0 body=378 status=ok
// SIG undefined FUN_142456da0(void)

undefined1 FUN_142456da0(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  
  cVar2 = FUN_142456440();
  if (cVar2 == '\0') {
    return 0;
  }
  FUN_1406da970(param_2,param_1 + 0x98);
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0xa8);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xb0,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xb0,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xb0) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xb4,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xb4,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xb4) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0xb8);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0xb9);
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0xc0);
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 200);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0xd0);
  FUN_1406da970(param_2,param_1 + 0xd4);
  *param_4 = 1;
  return 1;
}



// FUNCTION 142456f20 FUN_142456f20 body=1477 status=ok
// SIG undefined FUN_142456f20(void)

undefined8 FUN_142456f20(longlong param_1,longlong param_2,longlong *param_3,char param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  void *_Src;
  bool bVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  ushort *puVar12;
  uint uVar13;
  longlong lVar14;
  undefined2 *puVar15;
  longlong lVar16;
  undefined8 uVar17;
  longlong *plVar18;
  ushort *puVar19;
  uint *puVar20;
  uint uVar21;
  uint *puVar22;
  uint *puVar23;
  longlong local_res10;
  ushort *local_118;
  int local_110;
  int local_108;
  uint uStack_104;
  uint *puStack_100;
  uint local_f8;
  uint uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  ulonglong local_d8;
  longlong local_d0;
  undefined2 *local_c8;
  int local_c0;
  ulonglong local_b8 [2];
  undefined2 *local_a8;
  int local_a0;
  longlong local_98 [2];
  undefined8 local_88;
  int iStack_80;
  uint uStack_7c;
  uint *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  uint *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((param_2 != 0) && (puVar19 = *(ushort **)(param_2 + 0xd0), puVar19 != (ushort *)0x0)) {
    local_res10 = param_2;
    local_118 = puVar19;
    if (*(int *)(param_2 + 0x53c) != -1) {
      if (param_4 == '\0') {
        return 0;
      }
      puVar7 = (undefined8 *)UWorld::ConvertToPIEPackageName(local_b8,param_3);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar15 = &DAT_143f3eda8;
      }
      else {
        puVar15 = (undefined2 *)*puVar7;
      }
      FName::FName(&local_d0,puVar15);
      if (local_b8[0] != 0) {
        FMemory::Free();
      }
      local_d8 = *(ulonglong *)(puVar19 + 0xb8);
      uVar10 = (longlong)*(int *)(puVar19 + 0xbc) * 0x80 + local_d8;
      local_b8[0] = uVar10;
      if (local_d8 != uVar10) {
        puVar20 = (uint *)(local_d8 + 0x38);
        do {
          if ((*(longlong *)(puVar20 + -10) == param_2) || (*(longlong *)(puVar20 + -8) == param_2))
          {
            uVar3 = puVar20[6];
            local_108 = 0;
            uStack_104 = 1;
            uStack_f4 = 0;
            iStack_f0 = 0;
            if (uVar3 != 0) {
              puVar22 = *(uint **)(puVar20 + 4);
              if (*(uint **)(puVar20 + 4) == (uint *)0x0) {
                puVar22 = puVar20;
              }
              uVar4 = *puVar22;
              iStack_f0 = 0;
              local_108 = 0;
              while (uVar4 == 0) {
                lVar14 = (longlong)local_108;
                iStack_f0 = iStack_f0 + 0x20;
                iVar9 = local_108 + 1;
                bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_108;
                local_108 = iVar9;
                if (bVar5) goto LAB_1424570b4;
                uVar4 = puVar22[lVar14 + 1];
              }
              uStack_104 = -uVar4 & uVar4;
              iVar9 = 0x1f;
              if (uStack_104 != 0) {
                for (; uStack_104 >> iVar9 == 0; iVar9 = iVar9 + -1) {
                }
              }
              if (uStack_104 == 0) {
                iVar9 = 0x20;
              }
              else {
                iVar9 = 0x1f - iVar9;
              }
              uStack_f4 = (iStack_f0 - iVar9) + 0x1f;
              if ((int)uVar3 < (int)uStack_f4) {
LAB_1424570b4:
                uStack_f4 = uVar3;
              }
            }
            uStack_70 = CONCAT44(uStack_f4,0xffffffff);
            local_68 = CONCAT44(uStack_ec,iStack_f0);
            puVar22 = puVar20 + -4;
            uStack_58 = CONCAT44(uStack_104,local_108);
            uVar4 = puVar20[6];
            local_f8 = -1 << ((byte)uVar3 & 0x1f);
            uVar21 = uVar3 & 0xffffffe0;
            iStack_80 = local_108;
            uStack_7c = uStack_104;
            puStack_100 = puVar20;
            uStack_f4 = uVar3;
            local_78 = puVar20;
            local_60 = puVar22;
            puStack_50 = puVar20;
            uStack_48 = uStack_70;
            uStack_40 = local_68;
            local_88 = puVar22;
            if (uVar3 != uVar4) {
              puVar23 = *(uint **)(puVar20 + 4);
              if (*(uint **)(puVar20 + 4) == (uint *)0x0) {
                puVar23 = puVar20;
              }
              uVar13 = puVar23[(int)uVar3 >> 5] & local_f8;
              iVar9 = (int)uVar3 >> 5;
              while (uVar13 == 0) {
                uVar21 = uVar21 + 0x20;
                if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
                goto LAB_142457198;
                uVar13 = puVar23[(longlong)iVar9 + 1];
                local_f8 = 0xffffffff;
                iVar9 = iVar9 + 1;
              }
              uVar13 = -uVar13 & uVar13;
              iVar9 = 0x1f;
              if (uVar13 != 0) {
                for (; uVar13 >> iVar9 == 0; iVar9 = iVar9 + -1) {
                }
              }
              if (uVar13 == 0) {
                iVar9 = 0x20;
              }
              else {
                iVar9 = 0x1f - iVar9;
              }
              uStack_f4 = (uVar21 - iVar9) + 0x1f;
              uVar3 = uStack_f4;
              if ((int)uVar4 < (int)uStack_f4) {
LAB_142457198:
                uStack_f4 = uVar4;
                uVar3 = uVar4;
              }
            }
            while( true ) {
              if (((uStack_70._4_4_ == uVar3) && (local_78 == puVar20)) &&
                 (uVar10 = local_b8[0], param_2 = local_res10, local_88 == puVar22)) break;
              if (*(longlong *)(*(longlong *)local_88 + (longlong)(int)uStack_70._4_4_ * 0x10) != 0)
              {
                lVar14 = UObjectBaseUtility::GetOutermost();
                if ((lVar14 != 0) && (*(longlong *)(lVar14 + 0x18) == local_d0)) {
                  plVar8 = (longlong *)FName::ToString(&local_d0,&local_118);
                  if (param_3 != plVar8) {
                    if (*param_3 != 0) {
                      FMemory::Free();
                    }
                    *param_3 = *plVar8;
                    *plVar8 = 0;
                    *(int *)(param_3 + 1) = (int)plVar8[1];
                    *(undefined4 *)((longlong)param_3 + 0xc) =
                         *(undefined4 *)((longlong)plVar8 + 0xc);
                    plVar8[1] = 0;
                  }
                  goto LAB_142457316;
                }
              }
              uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_70 & ~uStack_7c);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
            }
          }
          local_d8 = local_d8 + 0x80;
          puVar20 = puVar20 + 0x20;
          puVar19 = local_118;
        } while (local_d8 != uVar10);
      }
    }
    if (param_4 == '\0') {
      return 0;
    }
    if (*(longlong *)(puVar19 + 0x84) == param_2) {
      cVar6 = UWorld::RemapCompiledScriptActor(puVar19,param_3);
      if (cVar6 != '\0') {
        return 1;
      }
    }
    lVar14 = FUN_142876210(param_1,puVar19);
    if (*(int *)(lVar14 + 600) != -1) {
      local_e0 = (int)param_3[1];
      lVar16 = (longlong)local_e0;
      _Src = (void *)*param_3;
      local_e8 = (void *)0x0;
      if (local_e0 == 0) {
        local_dc = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e8,local_e0,0);
        _guard_xfg_dispatch_icall_nop(local_e8,_Src,lVar16 * 2);
      }
      FPackageName::TryConvertFilenameToLongPackageName(&local_e8,&local_e8,0);
      UWorld::ConvertToPIEPackageName(local_98,param_3,*(undefined4 *)(lVar14 + 600));
      UWorld::ConvertToPIEPackageName(&local_c8,&local_e8,*(undefined4 *)(lVar14 + 600));
      lVar14 = UObjectBaseUtility::GetOutermost(puVar19);
      local_res10 = *(longlong *)(lVar14 + 0x18);
      FName::ToString(&local_res10,&local_a8);
      puVar15 = &DAT_143f3eda8;
      if (local_c0 != 0) {
        puVar15 = local_c8;
      }
      puVar11 = &DAT_143f3eda8;
      if (local_a0 != 0) {
        puVar11 = local_a8;
      }
      iVar9 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar15);
      if (iVar9 == 0) {
        FString::operator=(param_3,local_98);
        uVar17 = 1;
      }
      else {
        plVar18 = *(longlong **)(puVar19 + 0x44);
        plVar8 = plVar18 + *(int *)(puVar19 + 0x48);
        for (; plVar18 != plVar8; plVar18 = plVar18 + 1) {
          if (*plVar18 != 0) {
            FSoftObjectPath::GetLongPackageName(*plVar18 + 0x38,&local_118);
            puVar19 = local_118;
            puVar15 = &DAT_143f3eda8;
            if (local_c0 != 0) {
              puVar15 = local_c8;
            }
            puVar12 = &DAT_143f3eda8;
            if (local_110 != 0) {
              puVar12 = local_118;
            }
            iVar9 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar15);
            if (iVar9 == 0) {
              FString::operator=(param_3,local_98);
              if (puVar19 != (ushort *)0x0) {
                FMemory::Free(puVar19);
              }
              uVar17 = 1;
              goto LAB_142457487;
            }
            if (puVar19 != (ushort *)0x0) {
              FMemory::Free(puVar19);
            }
          }
        }
        uVar17 = 0;
      }
LAB_142457487:
      if (local_a8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_c8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_98[0] != 0) {
        FMemory::Free();
      }
      if (local_e8 != (void *)0x0) {
        FMemory::Free();
        return uVar17;
      }
      return uVar17;
    }
    if (1 < *(int *)(param_1 + 0xc20)) {
      FUN_1428d4fe0(&local_118,param_3);
      if ((int)param_3[1] == 0) {
        puVar15 = &DAT_143f3eda8;
      }
      else {
        puVar15 = (undefined2 *)*param_3;
      }
      puVar19 = &DAT_143f3eda8;
      if (local_110 != 0) {
        puVar19 = local_118;
      }
      lVar14 = (longlong)puVar15 - (longlong)puVar19;
      do {
        uVar1 = *puVar19;
        uVar2 = *(ushort *)((longlong)puVar19 + lVar14);
        if (uVar1 != uVar2) break;
        puVar19 = puVar19 + 1;
      } while (uVar2 != 0);
      if (uVar1 != uVar2) {
        FString::operator=(param_3,&local_118);
LAB_142457316:
        if (local_118 != (ushort *)0x0) {
          FMemory::Free();
        }
        return 1;
      }
      if (local_118 != (ushort *)0x0) {
        FMemory::Free(local_118);
      }
    }
  }
  return 0;
}



// FUNCTION 1424574f0 FUN_1424574f0 body=101 status=ok
// SIG undefined FUN_1424574f0(void)

undefined8 FUN_1424574f0(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong *plVar4;
  longlong lVar5;
  
  fVar1 = param_2[1];
  plVar4 = *(longlong **)(param_1 + 0x10);
  fVar2 = param_2[2];
  fVar3 = *param_2;
  lVar5 = plVar4[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 0x368))(plVar4);
    lVar5 = plVar4[0x1f];
  }
  return CONCAT71((int7)((ulonglong)lVar5 >> 8),
                  fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2 < *(float *)(lVar5 + 0x494));
}



// FUNCTION 142457560 FUN_142457560 body=213 status=ok
// SIG undefined FUN_142457560(void)

void FUN_142457560(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
  iVar6 = *(int *)(param_1 + 0x74);
  bVar3 = false;
  iVar5 = *(int *)(param_1 + 0x68) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x60);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1424575e2:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4,param_5);
        if (cVar4 == '\0') goto LAB_1424575e2;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x74);
  }
  *(int *)(param_1 + 0x74) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x60),0);
    return;
  }
  return;
}



// FUNCTION 142457640 FUN_142457640 body=194 status=ok
// SIG undefined FUN_142457640(void)

void FUN_142457640(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 local_18;
  longlong *local_10;
  
  FUN_1418c69f0(DAT_1469f4590);
  puVar3 = (undefined8 *)(param_1 + 0x11f0);
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x7b0) + 0x28);
  uVar7 = (*(code *)**(undefined8 **)*puVar3)();
  (**(code **)(lVar5 + 0xe8))(*(longlong *)(param_1 + 0x7b0) + 0x28,uVar7);
  local_10 = (longlong *)0x0;
  if (puVar3 != &local_18) {
    *puVar3 = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x11f8,&local_10);
    plVar6 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
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



// FUNCTION 142457710 FUN_142457710 body=96 status=ok
// SIG undefined FUN_142457710(void)

void FUN_142457710(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  float local_18;
  float local_14;
  
  SWindow::GetRectInScreen(*param_2,&local_18);
  plVar1 = (longlong *)FUN_142874ac0(param_1);
  (**(code **)(*plVar1 + 0x2c0))(plVar1,(int)local_18,(int)local_14);
  uVar2 = FUN_142874ac0(param_1);
  FUN_141761740(uVar2,0x4000,0,DAT_1468b6148);
  return;
}



// FUNCTION 1424577e0 FUN_1424577e0 body=93 status=ok
// SIG undefined FUN_1424577e0(void)

void FUN_1424577e0(longlong *param_1)

{
  float fVar1;
  float fVar2;
  
  FUN_142393b20();
  fVar1 = *(float *)(param_1 + 0x60);
  if (fVar1 <= 0.005) {
    fVar1 = 0.005;
  }
  fVar2 = *(float *)(param_1 + 0x5f);
  *(float *)(param_1 + 0x60) = fVar1;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  *(float *)(param_1 + 0x5f) = fVar2;
  (**(code **)(*param_1 + 0x548))(param_1,0,0,0,0);
  return;
}



// FUNCTION 142457840 FUN_142457840 body=345 status=ok
// SIG undefined FUN_142457840(void)

void FUN_142457840(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  uint uStackX_14;
  int local_res20;
  int iStackX_24;
  
  plVar7 = (longlong *)0x0;
  if (param_2 == (longlong *)0x0) {
LAB_1424578f5:
    plVar6 = (longlong *)((ulonglong)uStackX_14 << 0x20);
  }
  else {
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0x11f0) + 8);
    if (*(longlong *)(param_1 + 0x11f0) == 0) {
      plVar6 = plVar7;
    }
    if (((param_2 != plVar6) || (*(longlong *)(param_1 + 0x11e0) == 0)) ||
       (*(longlong *)(param_1 + 0x11e8) == 0)) goto LAB_1424578f5;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x11e8) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (iVar4 < 1) goto LAB_1424578f5;
    plVar2 = *(longlong **)(param_1 + 0x11e8);
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
            plVar7 = *(longlong **)(param_1 + 0x11e0);
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
    plVar2 = plVar7 + 0x93;
    plVar7 = (longlong *)0x1;
    iVar4 = (**(code **)(*(longlong *)*plVar2 + 0x68))();
    if (iVar4 == 2) {
      bVar8 = true;
      goto LAB_1424578fd;
    }
  }
  bVar8 = false;
LAB_1424578fd:
  if ((plVar7 != (longlong *)0x0) && (plVar6 != (longlong *)0x0)) {
    LOCK();
    plVar7 = plVar6 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
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
  }
  if (((bVar8) && ((**(code **)(*param_2 + 0x20))(param_2,&local_res20), 0 < local_res20)) &&
     (0 < iStackX_24)) {
    DAT_1465351f4 = iStackX_24;
    DAT_1465351f0 = local_res20;
    uVar5 = FUN_142874ac0(param_1);
    UGameUserSettings::SetScreenResolution(uVar5,CONCAT44(iStackX_24,local_res20));
    FUN_1424774e0(uVar5);
  }
  return;
}



// FUNCTION 1424579a0 FUN_1424579a0 body=768 status=ok
// SIG undefined FUN_1424579a0(void)

void FUN_1424579a0(undefined8 param_1,undefined8 param_2,byte param_3,longlong *param_4)

{
  void *_Dst;
  void *pvVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  void *_Src;
  undefined8 local_res10;
  void *local_e8;
  undefined8 local_e0;
  void *local_d8;
  int local_d0;
  int local_cc;
  undefined2 *local_c8;
  int local_c0;
  int local_bc;
  int local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined1 local_98 [40];
  undefined1 local_70 [72];
  
  local_res10 = param_2;
  lVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  local_b0 = lVar3;
  if (lVar3 != 0) {
    iVar9 = (param_3 ^ 1) * 2;
    local_b8 = iVar9;
    local_a8 = FUN_142876210(DAT_146b17150,lVar3);
    FName::ToString(&local_res10,&local_c8);
    _Src = (void *)0x0;
    iVar7 = 0;
    iVar4 = (int)param_4[1] + -1;
    if ((int)param_4[1] == 0) {
      iVar4 = iVar7;
    }
    if (0 < iVar4) {
      local_e8 = (void *)0x0;
      local_e0 = 2;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
      pvVar8 = local_e8;
      FGenericPlatformString::Memcpy(local_e8,&DAT_14509fb54);
      iVar4 = (int)param_4[1];
      if ((int)local_e0 < 2) {
        pvVar1 = (void *)*param_4;
        local_e8 = (void *)0x0;
        local_e0 = CONCAT44(local_e0._4_4_,iVar4);
        iVar7 = 0;
        if (iVar4 != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e8,iVar4,0);
          _Src = local_e8;
          _guard_xfg_dispatch_icall_nop(local_e8,pvVar1,(longlong)iVar4 * 2);
          iVar7 = (int)local_e0;
        }
      }
      else {
        iVar5 = iVar4 + -1;
        if (iVar4 == 0) {
          iVar5 = iVar7;
        }
        if (((int)local_e0 != 0) || (iVar9 = 1, iVar5 == 0)) {
          iVar9 = iVar7;
        }
        local_d8 = pvVar8;
        local_d0 = (int)local_e0;
        local_cc = local_e0._4_4_;
        if (local_e0._4_4_ < iVar9 + (int)local_e0 + iVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_d8);
        }
        iVar4 = local_d0;
        pvVar1 = (void *)*param_4;
        pvVar8 = (void *)0x0;
        _Src = local_d8;
        iVar9 = local_b8;
        iVar7 = local_d0;
        if (iVar5 != 0) {
          lVar3 = (longlong)local_d0;
          local_d0 = iVar5 + (uint)(local_d0 == 0) + local_d0;
          if (local_cc < local_d0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,iVar4,0);
          }
          iVar7 = local_d0;
          _Src = local_d8;
          _Dst = (void *)((longlong)local_d8 + (lVar3 - (ulonglong)(iVar4 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(_Dst,pvVar1,(longlong)iVar5 * 2);
          *(undefined2 *)((longlong)iVar5 * 2 + (longlong)_Dst) = 0;
          iVar9 = local_b8;
        }
      }
      iVar4 = local_c0;
      if ((iVar7 != 0) && (iVar7 = iVar7 + -1, iVar7 != 0)) {
        lVar3 = (longlong)local_c0;
        local_c0 = (uint)(local_c0 == 0) + local_c0 + iVar7;
        if (local_bc < local_c0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,iVar4,0);
        }
        puVar6 = local_c8 + (lVar3 - (ulonglong)(iVar4 != 0));
        _guard_xfg_dispatch_icall_nop(puVar6,_Src,(longlong)iVar7 * 2);
        puVar6[iVar7] = 0;
      }
      if (_Src != (void *)0x0) {
        FMemory::Free(_Src);
      }
      lVar3 = local_b0;
      if (pvVar8 != (void *)0x0) {
        FMemory::Free(pvVar8);
        lVar3 = local_b0;
      }
    }
    puVar6 = &DAT_143f3eda8;
    if (local_c0 != 0) {
      puVar6 = local_c8;
    }
    FUN_14289aca0(local_98,local_a8 + 0xe8,puVar6,iVar9);
    cVar2 = FUN_1428b2650(local_98);
    if (cVar2 != '\0') {
      UEngine::MakeSureMapNameIsValid(DAT_146b17150,local_70);
    }
    puVar6 = &DAT_143f3eda8;
    if (local_c0 != 0) {
      puVar6 = local_c8;
    }
    FUN_14288d1c0(DAT_146b17150,lVar3,puVar6,iVar9);
    FURL::~FURL(local_98);
    if (local_c8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (*param_4 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142457cb0 ParseOption body=290 status=ok
// SIG undefined ParseOption(void)

longlong * UGameplayStatics::ParseOption(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  longlong local_38;
  undefined8 local_30;
  undefined2 *local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  *param_1 = 0;
  param_1[1] = 0;
  local_18[0] = 0;
  local_18[1] = 0;
  local_28 = (undefined2 *)0x0;
  local_20 = 0;
  local_38 = 0;
  local_30 = 0;
  cVar1 = FUN_1424523f0(param_2,local_18);
  if (cVar1 != '\0') {
    do {
      FUN_14244f760(local_18,&local_28,&local_38);
      puVar4 = &DAT_143f3eda8;
      if ((int)local_20 != 0) {
        puVar4 = local_28;
      }
      if (*(int *)(param_3 + 1) == 0) {
        puVar3 = &DAT_143f3eda8;
      }
      else {
        puVar3 = (undefined2 *)*param_3;
      }
      iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
      if (iVar2 == 0) {
        if (param_1 != &local_38) {
          if (*param_1 != 0) {
            FMemory::Free();
          }
          *param_1 = local_38;
          *(undefined4 *)(param_1 + 1) = (undefined4)local_30;
          *(undefined4 *)((longlong)param_1 + 0xc) = local_30._4_4_;
          goto LAB_142457d61;
        }
        break;
      }
      cVar1 = FUN_1424523f0(param_2,local_18);
    } while (cVar1 != '\0');
    if (local_38 != 0) {
      FMemory::Free();
    }
LAB_142457d61:
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free(local_28);
    }
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142457de0 FUN_142457de0 body=439 status=ok
// SIG undefined FUN_142457de0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142457de0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,float param_6)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_598 [32];
  undefined1 local_578 [80];
  undefined8 local_528;
  byte local_4e0;
  byte local_4de;
  float local_4c8;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_46c;
  undefined4 local_468;
  ulonglong local_38;
  
  if (param_2 != 0) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_598;
    plVar3 = (longlong *)UDialogueWave::GetWaveFromContext(param_2,param_3);
    if ((((plVar3 != (longlong *)0x0) && (DAT_146b17150 != (longlong *)0x0)) &&
        (cVar1 = (**(code **)(*DAT_146b17150 + 0x388))(), cVar1 != '\0')) &&
       (((lVar4 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1), lVar4 != 0 &&
         ((*(uint *)(lVar4 + 0x830) & 0x4000) != 0)) &&
        ((iVar2 = FUN_1428cf800(lVar4), iVar2 != 1 &&
         (lVar5 = UWorld::GetAudioDevice(lVar4), lVar5 != 0)))))) {
      FUN_14221fee0(local_578);
      FUN_14223f150(local_578,plVar3);
      FActiveSound::SetWorld(local_578,lVar4);
      if (param_6 <= 0.0) {
        param_6 = 0.0;
      }
      local_4de = local_4de | 1;
      local_4e0 = local_4e0 & 0xfd;
      local_4b4 = param_5;
      local_468 = *(undefined4 *)((longlong)plVar3 + 0x5c);
      local_528 = 0;
      local_4c8 = param_6;
      local_4b8 = param_4;
      local_46c = (**(code **)(*plVar3 + 0x2b8))(plVar3);
      FActiveSound::SetOwner(local_578,0);
      FUN_1422c0900(lVar5,local_578);
      FActiveSound::~FActiveSound(local_578);
    }
  }
  return;
}



// FUNCTION 142457fa0 FUN_142457fa0 body=326 status=ok
// SIG undefined FUN_142457fa0(void)

void FUN_142457fa0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined8 param_9)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (param_2 != 0) {
    local_28 = *param_5;
    local_20 = *(undefined4 *)(param_5 + 1);
    local_18 = *param_4;
    local_10 = *(undefined4 *)(param_4 + 1);
    lVar3 = UDialogueWave::GetWaveFromContext(param_2,param_3);
    if ((((lVar3 != 0) && (DAT_146b17150 != (longlong *)0x0)) &&
        (cVar1 = (**(code **)(*DAT_146b17150 + 0x388))(), cVar1 != '\0')) &&
       (((lVar4 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1), lVar4 != 0 &&
         ((*(uint *)(lVar4 + 0x830) & 0x4000) != 0)) &&
        ((iVar2 = FUN_1428cf800(lVar4), iVar2 != 1 && (lVar5 = UWorld::GetAudioDevice(), lVar5 != 0)
         ))))) {
      FUN_1422d25e0(lVar5,lVar3,lVar4,param_6,param_7,param_8,&local_18,&local_28,param_9,0,0,0);
    }
  }
  return;
}



// FUNCTION 1424580f0 FUN_1424580f0 body=623 status=ok
// SIG undefined FUN_1424580f0(void)

ulonglong FUN_1424580f0(longlong *param_1,void **param_2,ulonglong param_3,undefined8 *param_4)

{
  void *_Src;
  bool bVar1;
  char cVar2;
  ulonglong in_RAX;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 local_res18;
  longlong local_98;
  undefined8 local_90;
  longlong local_88 [2];
  longlong local_78;
  void *local_60;
  int local_58;
  int local_54;
  longlong local_50;
  longlong *local_40;
  int local_38;
  longlong local_30;
  
  if (param_3 == 0) {
    in_RAX = (**(code **)(*param_1 + 0x148))();
    param_3 = in_RAX;
  }
  if (param_3 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  FUN_1428c8ca0(param_3);
  FURL::FURL(local_88,0);
  if (&local_60 != param_2) {
    local_58 = *(int *)(param_2 + 1);
    lVar5 = (longlong)local_58;
    _Src = *param_2;
    if ((local_58 == 0) && (local_54 == 0)) {
      local_54 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_60,local_58);
      _guard_xfg_dispatch_icall_nop(local_60,_Src,lVar5 * 2);
    }
  }
  puVar6 = (undefined8 *)*param_4;
  puVar8 = puVar6 + (longlong)*(int *)(param_4 + 1) * 2;
  for (; puVar6 != puVar8; puVar6 = puVar6 + 2) {
    if (*(int *)(puVar6 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*puVar6;
    }
    FURL::AddOption(local_88,puVar4);
  }
  FName::FName(&local_res18,L"DemoNetDriver",1);
  cVar2 = FUN_14286abe0(DAT_146b17150,param_3,local_res18,local_res18);
  if (cVar2 == '\0') {
    uVar7 = 0;
    goto LAB_1424582bb;
  }
  plVar3 = (longlong *)FUN_142873bb0(DAT_146b17150,param_3,local_res18);
  if (plVar3 == (longlong *)0x0) {
LAB_142458250:
    plVar3 = (longlong *)0x0;
  }
  else {
    lVar5 = FUN_1429244d0();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_142458250;
  }
  *(longlong **)(param_3 + 0x108) = plVar3;
  (**(code **)(*plVar3 + 0x380))(plVar3,param_3);
  local_98 = 0;
  local_90 = 0;
  cVar2 = (**(code **)(**(longlong **)(param_3 + 0x108) + 0x288))
                    (*(longlong **)(param_3 + 0x108),param_3 + 0x28,local_88,&local_98);
  if (cVar2 != '\0') {
    TBaseMulticastDelegate<void>::Broadcast(&DAT_1464b57e8);
  }
  else {
    FUN_1428c8ca0(param_3);
  }
  uVar7 = (ulonglong)(cVar2 != '\0');
  if (local_98 != 0) {
    FMemory::Free();
  }
LAB_1424582bb:
  plVar3 = local_40;
  if (local_30 != 0) {
    FMemory::Free();
    plVar3 = local_40;
  }
  for (; local_38 != 0; local_38 = local_38 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_40 != (longlong *)0x0) {
    FMemory::Free(local_40);
  }
  if (local_50 != 0) {
    FMemory::Free();
  }
  if (local_60 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  if (local_88[0] != 0) {
    FMemory::Free();
  }
  return uVar7;
}



// FUNCTION 142458360 FUN_142458360 body=429 status=ok
// SIG undefined FUN_142458360(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142458360(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                  float param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_5b8 [32];
  undefined1 local_598 [80];
  undefined8 local_548;
  byte local_500;
  byte local_4fe;
  float local_4e8;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined4 local_48c;
  undefined4 local_488;
  ulonglong local_58;
  
  if ((((param_2 != (longlong *)0x0) &&
       (local_58 = DAT_1468387a8 ^ (ulonglong)auStack_5b8, DAT_146b17150 != (longlong *)0x0)) &&
      (cVar1 = (**(code **)(*DAT_146b17150 + 0x388))(), cVar1 != '\0')) &&
     (((lVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1), lVar3 != 0 &&
       ((*(uint *)(lVar3 + 0x830) & 0x4000) != 0)) &&
      ((iVar2 = FUN_1428cf800(lVar3), iVar2 != 1 &&
       (lVar4 = UWorld::GetAudioDevice(lVar3), lVar4 != 0)))))) {
    FUN_14221fee0(local_598);
    FUN_14223f150(local_598,param_2);
    FActiveSound::SetWorld(local_598,lVar3);
    if (param_5 <= 0.0) {
      param_5 = 0.0;
    }
    local_488 = *(undefined4 *)((longlong)param_2 + 0x5c);
    local_4fe = local_4fe | 1;
    local_500 = local_500 & 0xfd;
    local_548 = param_6;
    local_4e8 = param_5;
    local_4d8 = param_3;
    local_4d4 = param_4;
    local_48c = (**(code **)(*param_2 + 0x2b8))(param_2);
    FActiveSound::SetOwner(local_598,param_7);
    FUN_1422c0900(lVar4,local_598);
    FActiveSound::~FActiveSound(local_598);
  }
  return;
}



// FUNCTION 142458510 FUN_142458510 body=284 status=ok
// SIG undefined FUN_142458510(void)

void FUN_142458510(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((((param_2 != 0) && (DAT_146b17150 != (longlong *)0x0)) &&
      (cVar1 = (**(code **)(*DAT_146b17150 + 0x388))(), cVar1 != '\0')) &&
     (((lVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1), lVar3 != 0 &&
       ((*(uint *)(lVar3 + 0x830) & 0x4000) != 0)) &&
      ((iVar2 = FUN_1428cf800(lVar3), iVar2 != 1 &&
       (lVar4 = UWorld::GetAudioDevice(lVar3), lVar4 != 0)))))) {
    FUN_1422d25e0(lVar4,param_2,lVar3,param_5,param_6,param_7,param_3,param_4,param_8,param_9,0,
                  param_10);
  }
  return;
}



// FUNCTION 142458630 PlayWorldCameraShake body=144 status=ok
// SIG undefined PlayWorldCameraShake(void)

void UGameplayStatics::PlayWorldCameraShake
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  longlong lVar1;
  undefined8 local_28;
  undefined4 local_20;
  
  lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar1 != 0) {
    local_28 = *param_3;
    local_20 = *(undefined4 *)(param_3 + 1);
    FUN_1426e8190(lVar1,param_2,&local_28,param_4,param_5,param_6,param_7);
  }
  return;
}



// FUNCTION 1424586c0 FUN_1424586c0 body=127 status=ok
// SIG undefined FUN_1424586c0(void)

ulonglong FUN_1424586c0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  
  uVar3 = (**(code **)(*param_1 + 0x900))();
  if ((((char)uVar3 != '\0') && (param_2 != (longlong *)0x0)) &&
     ((*(byte *)((longlong)param_2 + 0x94) & 2) == 0)) {
    iVar1 = *(int *)((longlong)param_2 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    uVar3 = 0;
    if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142458730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*param_2 + 0xde0))(param_2);
      return uVar3;
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1424587b0 PointsAreNear body=66 status=ok
// SIG undefined PointsAreNear(void)

undefined1 FVector::PointsAreNear(float *param_1,float *param_2,float param_3)

{
  if (((ABS(*param_1 - *param_2) < param_3) && (ABS(param_1[1] - param_2[1]) < param_3)) &&
     (ABS(param_1[2] - param_2[2]) < param_3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 142458800 FUN_142458800 body=122 status=ok
// SIG undefined FUN_142458800(void)

void FUN_142458800(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  if ((((param_2 != 0) && (DAT_146b17150 != (longlong *)0x0)) &&
      (cVar1 = (**(code **)(*DAT_146b17150 + 0x388))(), cVar1 != '\0')) &&
     (((lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1), lVar2 != 0 &&
       ((*(uint *)(lVar2 + 0x830) & 0x4000) != 0)) &&
      (lVar2 = UWorld::GetAudioDevice(lVar2), lVar2 != 0)))) {
    FUN_1422d2960(lVar2,param_2,0);
  }
  return;
}



// FUNCTION 142458880 FUN_142458880 body=32 status=ok
// SIG undefined FUN_142458880(void)

void FUN_142458880(longlong param_1)

{
  FUN_142238430();
  *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_1 + 0x468);
  return;
}



// FUNCTION 1424588a0 FUN_1424588a0 body=255 status=ok
// SIG undefined FUN_1424588a0(void)

void FUN_1424588a0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  
  UObject::PostLoad();
  plVar1 = (longlong *)(param_1 + 0x128);
  uVar6 = 0;
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x130) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x134)) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  iVar5 = 1;
  if (0 < (int)*(uint *)(param_1 + 0x120)) {
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x120);
    piVar3 = (int *)(*(longlong *)(param_1 + 0x38) + 0xc);
    do {
      iVar2 = *piVar3;
      piVar3 = piVar3 + 6;
      if (iVar2 <= iVar5) {
        iVar2 = iVar5;
      }
      iVar5 = iVar2;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  iVar2 = *(int *)(param_1 + 0x130);
  *(int *)(param_1 + 0x130) = iVar2 + 1;
  if (*(int *)(param_1 + 0x134) < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(int *)(*plVar1 + (longlong)iVar2 * 4) = iVar5;
  uVar4 = uVar6;
  if (0 < *(int *)(param_1 + 0x50)) {
    do {
      plVar1 = *(longlong **)(uVar6 + *(longlong *)(param_1 + 0x48));
      if (plVar1 != (longlong *)0x0) {
        *(uint *)(plVar1 + 1) = *(uint *)(plVar1 + 1) | 1;
        *(undefined1 *)((longlong)plVar1 + 0x4a) = 0x10;
        FUN_1417510e0(plVar1);
        if (((char)plVar1[9] == '\x04') && ((*(byte *)((longlong)plVar1 + 0x4b) & 1) == 0)) {
          *(undefined1 *)(plVar1 + 9) = 9;
          (**(code **)(*plVar1 + 0x278))(plVar1);
        }
      }
      uVar7 = (int)uVar4 + 1;
      uVar6 = uVar6 + 8;
      uVar4 = (ulonglong)uVar7;
    } while ((int)uVar7 < *(int *)(param_1 + 0x50));
  }
  return;
}



// FUNCTION 1424589a0 FUN_1424589a0 body=585 status=ok
// SIG undefined FUN_1424589a0(void)

void FUN_1424589a0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  wchar_t **ppwVar10;
  wchar_t *_Source;
  wchar_t **ppwVar11;
  wchar_t *local_58;
  int local_50;
  undefined4 uStack_4c;
  wchar_t *local_48;
  int local_40;
  undefined4 local_3c;
  wchar_t *local_38;
  ulonglong local_30;
  
  pwVar8 = (wchar_t *)0x0;
  uVar6 = (**(code **)(*param_1 + 0x148))();
  cVar4 = FUN_14293c170(param_1,param_2);
  if (cVar4 == '\0') {
    cVar4 = UWorld::IsInSeamlessTravel(uVar6);
    if (cVar4 == '\0') {
      cVar4 = FUN_14270dfe0(param_2);
      if (cVar4 == '\0') {
        *(int *)((longlong)param_1 + 0x51c) = *(int *)((longlong)param_1 + 0x51c) + 1;
        goto LAB_142458a1c;
      }
    }
    *(int *)(param_1 + 0xa2) = (int)param_1[0xa2] + 1;
  }
  else {
    *(int *)((longlong)param_1 + 0x50c) = *(int *)((longlong)param_1 + 0x50c) + 1;
  }
LAB_142458a1c:
  FUN_14270d390(param_2,&local_38);
  iVar5 = FUN_141592950(&local_38,&DAT_14509f744,0,0,0xffffffff);
  pwVar9 = local_38;
  iVar7 = (int)local_30;
  if (iVar5 < 1) {
    local_48 = (wchar_t *)0x0;
    local_40 = iVar7;
    if (iVar7 == 0) {
      local_3c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_30 & 0xffffffff,0);
      pwVar8 = local_48;
      _guard_xfg_dispatch_icall_nop(local_48,pwVar9,(longlong)iVar7 * 2);
    }
    ppwVar10 = &local_48;
    bVar3 = false;
    bVar2 = true;
    pwVar9 = local_58;
  }
  else {
    if (iVar7 == 0) {
      _Source = L"";
      iVar7 = 0;
    }
    else {
      _Source = local_38;
      iVar7 = iVar7 + -1;
    }
    local_58 = (wchar_t *)0x0;
    uStack_4c = 0;
    if (iVar5 < iVar7) {
      iVar7 = iVar5;
    }
    local_50 = iVar7 + 1;
    if (iVar7 == 0) {
      local_50 = 0;
    }
    pwVar9 = pwVar8;
    if (0 < local_50) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      pwVar9 = local_58;
      if (0 < local_50) {
        wcsncpy(local_58,_Source,(longlong)iVar7);
        pwVar9[iVar7] = L'\0';
      }
    }
    ppwVar10 = &local_58;
    bVar3 = true;
    bVar2 = false;
    pwVar8 = local_48;
  }
  lVar1 = *(longlong *)(param_2 + 0x460);
  ppwVar11 = (wchar_t **)(lVar1 + 0x4a0);
  if (ppwVar11 != ppwVar10) {
    if (*ppwVar11 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    pwVar8 = *ppwVar10;
    *ppwVar10 = (wchar_t *)0x0;
    *ppwVar11 = pwVar8;
    *(undefined4 *)(lVar1 + 0x4a8) = *(undefined4 *)(ppwVar10 + 1);
    ppwVar10[1] = (wchar_t *)0x0;
    *(undefined4 *)(lVar1 + 0x4ac) = *(undefined4 *)((longlong)ppwVar10 + 0xc);
    pwVar8 = local_48;
    pwVar9 = local_58;
  }
  if ((bVar2) && (pwVar8 != (wchar_t *)0x0)) {
    FMemory::Free(pwVar8);
  }
  if ((bVar3) && (pwVar9 != (wchar_t *)0x0)) {
    FMemory::Free(pwVar9);
  }
  (**(code **)(*param_1 + 0x9c0))(param_1,param_2);
  FUN_142458bf0(param_1,param_2);
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142458bf0 FUN_142458bf0 body=721 status=ok
// SIG undefined FUN_142458bf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142458bf0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong local_58 [3];
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_38 [2];
  
  uVar6 = 0;
  (**(code **)(*param_1 + 0x898))();
  (**(code **)(*param_1 + 0x148))(param_1);
  FUN_1429e0810(param_2,*(undefined4 *)(*(longlong *)(param_2 + 0x508) + 0x38));
  cVar3 = FUN_14293c170(param_1,param_2);
  if (cVar3 == '\0') {
    plVar5 = *(longlong **)(*(longlong *)(param_2 + 0x460) + 0x4b8);
    if ((plVar5 != (longlong *)0x0) && (cVar3 = (**(code **)(*plVar5 + 0x20))(), cVar3 != '\0')) {
      plVar4 = (longlong *)FUN_1422312c0(param_1);
      lVar7 = *(longlong *)(param_2 + 0x460);
      plVar5 = *(longlong **)(lVar7 + 0x4b8);
      if ((plVar5 == (longlong *)0x0) || (cVar3 = (**(code **)(*plVar5 + 0x20))(), cVar3 == '\0')) {
        local_58[0] = 0;
        local_58[1] = 8;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
        FGenericPlatformString::Memcpy(local_58[0],L"INVALID",0x10);
        plVar5 = local_58;
        uVar8 = 2;
      }
      else {
        plVar5 = *(longlong **)(lVar7 + 0x4b8);
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x28))(plVar5,local_38);
        uVar8 = 1;
      }
      local_58[2] = *plVar5;
      *plVar5 = 0;
      local_40 = (int)plVar5[1];
      local_3c = *(undefined4 *)((longlong)plVar5 + 0xc);
      plVar5[1] = 0;
      if (((uVar8 & 2) != 0) && (uVar8 = uVar8 & 0xfffffffd, local_58[0] != 0)) {
        FMemory::Free();
      }
      if (((uVar8 & 1) != 0) && (local_38[0] != 0)) {
        FMemory::Free();
      }
      (**(code **)(*plVar4 + 0x2f0))(plVar4,local_58 + 2);
      if (local_58[2] != 0) {
        FMemory::Free();
      }
    }
  }
  else {
    FUN_1429e09e0(param_2,0x142);
  }
  plVar5 = (longlong *)param_1[0x96];
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x710))(plVar5,param_2);
  }
  FUN_14293c130(param_1,param_2);
  bVar1 = false;
  DAT_1465325d4 = DAT_1465325d4 + 1;
  lVar7 = (longlong)(DAT_1465325c8 + -1);
  if (-1 < DAT_1465325c8 + -1) {
    lVar9 = lVar7 << 4;
    bVar1 = false;
    do {
      if (((*(int *)(lVar9 + 8 + DAT_1465325c0) == 0) ||
          (plVar5 = *(longlong **)(lVar9 + DAT_1465325c0), plVar5 == (longlong *)0x0)) ||
         (cVar3 = (**(code **)(*plVar5 + 0x40))(plVar5,param_1,param_2), cVar3 == '\0')) {
        bVar1 = true;
      }
      lVar9 = lVar9 + -0x10;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  iVar2 = DAT_1465325c8;
  DAT_1465325d4 = DAT_1465325d4 + -1;
  if ((bVar1) && (DAT_1465325d4 < 1)) {
    uVar10 = uVar6;
    if (0 < DAT_1465325c8) {
      do {
        if (((*(int *)(uVar10 + 8 + DAT_1465325c0) == 0) ||
            (*(longlong **)(uVar10 + DAT_1465325c0) == (longlong *)0x0)) ||
           (cVar3 = (**(code **)(**(longlong **)(uVar10 + DAT_1465325c0) + 0x10))(), cVar3 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1465325c0,uVar6,1,1);
        }
        else {
          uVar6 = (ulonglong)((int)uVar6 + 1);
          uVar10 = uVar10 + 0x10;
        }
      } while ((int)uVar6 < DAT_1465325c8);
    }
    _DAT_1465325d0 = DAT_1465325c8 * 2;
    if (DAT_1465325c8 * 2 < 3) {
      _DAT_1465325d0 = 2;
    }
    if (((int)_DAT_1465325d0 < iVar2) && (DAT_1465325cc != DAT_1465325c8)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1465325c0);
    }
  }
  FUN_14293be90(param_1,param_2);
  return;
}



// FUNCTION 142458ed0 FUN_142458ed0 body=429 status=ok
// SIG undefined FUN_142458ed0(void)

void FUN_142458ed0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong local_res8;
  longlong *local_38;
  uint local_30;
  uint local_2c;
  longlong local_28;
  int local_20;
  
  if ((longlong *)param_1[0x96] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x96] + 0x770))();
  }
  plVar7 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_2c = 0;
  uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  FUN_1428cb820(uVar3,&local_28);
  plVar8 = plVar7;
  plVar9 = plVar7;
  while( true ) {
    if ((local_20 < 0) || (*(int *)(local_28 + 8) <= local_20)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    iVar6 = (int)plVar7;
    if (!bVar1) break;
    lVar4 = FWeakObjectPtr::Get();
    local_30 = iVar6 + 1;
    if ((int)plVar9 < (int)local_30) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_38,plVar7);
      plVar9 = (longlong *)(ulonglong)local_2c;
      plVar8 = local_38;
    }
    plVar7 = (longlong *)(ulonglong)local_30;
    plVar8[iVar6] = lVar4;
    local_20 = local_20 + 1;
  }
  plVar9 = plVar8;
  do {
    if (plVar9 == plVar8 + iVar6) {
      if (plVar8 != (longlong *)0x0) {
        FMemory::Free(plVar8);
        return;
      }
      return;
    }
    lVar4 = *plVar9;
    local_res8 = lVar4;
    if (*(longlong *)(lVar4 + 0x460) != 0) {
      lVar5 = FUN_1429e18b0();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        cVar2 = FUN_14293c170(param_1,lVar4);
        if (cVar2 == '\0') {
          *(int *)((longlong)param_1 + 0x51c) = *(int *)((longlong)param_1 + 0x51c) + 1;
        }
        else {
          *(int *)((longlong)param_1 + 0x50c) = *(int *)((longlong)param_1 + 0x50c) + 1;
        }
        cVar2 = FUN_14270dfe0(lVar4);
        if (cVar2 == '\0') goto LAB_142459042;
      }
      (**(code **)(*param_1 + 2000))(param_1,&local_res8);
    }
LAB_142459042:
    plVar9 = plVar9 + 1;
  } while( true );
}



// FUNCTION 142459080 FUN_142459080 body=372 status=ok
// SIG undefined FUN_142459080(void)

void FUN_142459080(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong local_res8;
  longlong *local_38;
  uint local_30;
  uint local_2c;
  longlong local_28;
  int local_20;
  
  if ((longlong *)param_1[0x96] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x96] + 0x770))();
  }
  plVar6 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_2c = 0;
  uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  FUN_1428cb820(uVar3,&local_28);
  plVar8 = plVar6;
  plVar9 = plVar6;
  while( true ) {
    if ((local_20 < 0) || (*(int *)(local_28 + 8) <= local_20)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    iVar7 = (int)plVar8;
    if (!bVar1) break;
    lVar4 = FWeakObjectPtr::Get();
    local_30 = iVar7 + 1;
    if ((int)plVar9 < (int)local_30) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_38,plVar8);
      plVar9 = (longlong *)(ulonglong)local_2c;
      plVar6 = local_38;
    }
    plVar8 = (longlong *)(ulonglong)local_30;
    plVar6[iVar7] = lVar4;
    local_20 = local_20 + 1;
  }
  for (plVar8 = plVar6; plVar8 != plVar6 + iVar7; plVar8 = plVar8 + 1) {
    lVar4 = *plVar8;
    local_res8 = lVar4;
    if (*(longlong *)(lVar4 + 0x460) != 0) {
      lVar5 = FUN_1429e18b0();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((!bVar1) || (cVar2 = FUN_14270dfe0(lVar4), cVar2 != '\0')) {
        (**(code **)(*param_1 + 2000))(param_1,&local_res8);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    FMemory::Free(plVar6);
  }
  return;
}



// FUNCTION 142459200 FUN_142459200 body=991 status=ok
// SIG undefined FUN_142459200(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142459200(longlong *param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  undefined1 auStack_e8 [32];
  int local_c8;
  longlong local_c0;
  longlong *local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  uint local_98 [2];
  longlong local_90;
  longlong local_88;
  int local_80;
  int local_78;
  char local_74;
  int local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  undefined8 local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_b8 = param_1;
  plVar8 = (longlong *)FUN_142874ac0();
  (**(code **)(*plVar8 + 0x2b0))(plVar8);
  (**(code **)(*param_1 + 0x470))();
  local_c8 = 0;
  if (0 < (int)param_1[0x184]) {
    local_b0 = 0;
    do {
      iVar17 = local_c8;
      lVar14 = *(longlong *)(*(longlong *)(local_b0 + param_1[0x183]) + 0x288);
      local_c0 = lVar14;
      if (lVar14 != 0) {
        *(uint *)(lVar14 + 0x830) = *(uint *)(lVar14 + 0x830) | 0x400;
        (**(code **)(*param_1 + 0x488))(param_1,lVar14,0);
        FUN_14288fa60(param_1,lVar14);
        local_a8 = FUN_1428dfc70();
        local_98[0] = 5;
        local_40 = '\0';
        local_a0 = lVar14;
        FUN_14044bc80(&local_90,&local_a0,&local_a8);
        FUN_14045a130(local_98);
        if (local_74 == '\0') {
LAB_142459320:
          FUN_14223c120(local_68,4);
          lVar14 = local_90;
          iVar18 = local_78 + 1;
          if (iVar18 < local_58 + local_80) {
            lVar16 = (longlong)iVar18 * 8;
            iVar17 = local_80;
            iVar15 = local_58;
            do {
              if (iVar18 < iVar17) {
                lVar13 = *(longlong *)(local_88 + lVar16);
              }
              else {
                lVar13 = *(longlong *)(local_60 + (longlong)(iVar18 - iVar17) * 8);
              }
              local_70 = local_70 + 1;
              if ((lVar13 != 0) &&
                 (lVar9 = AActor::GetLevel(lVar13), iVar17 = local_80, iVar15 = local_58, lVar9 != 0
                 )) {
                if ((local_98[0] & 1) != 0) {
                  iVar1 = *(int *)(lVar13 + 0xc);
                  if (iVar1 < (int)DAT_1469e91c4) {
                    uVar12 = iVar1 >> 0x1f & 0xffff;
                    uVar7 = iVar1 + uVar12;
                    lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                             (longlong)(int)((uVar7 & 0xffff) - uVar12) * 0x18;
                  }
                  else {
                    lVar10 = 0;
                  }
                  if ((*(uint *)(lVar10 + 8) >> 0x1d & 1) != 0) goto LAB_1424594cc;
                }
                if (((local_98[0] >> 1 & 1) == 0) ||
                   (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(lVar13), iVar17 = local_80,
                   iVar15 = local_58, cVar6 != '\0')) {
                  if ((local_98[0] >> 2 & 1) != 0) {
                    if (((*(byte *)(lVar9 + 0x204) & 0x10) == 0) &&
                       ((*(byte *)(lVar9 + 0x205) & 0x10) == 0)) {
                      bVar5 = false;
                    }
                    else {
                      bVar5 = true;
                    }
                    piVar2 = *(int **)(lVar9 + 600);
                    if (((*(longlong *)(lVar9 + 0xc0) == 0) ||
                        (piVar11 = (int *)UWorld::GetActiveLevelCollection(), piVar11 == (int *)0x0)
                        ) || (piVar2 == piVar11)) {
                      bVar3 = true;
                    }
                    else {
                      bVar3 = false;
                    }
                    if ((piVar2 == (int *)0x0) || (*piVar2 == 2)) {
                      bVar4 = true;
                    }
                    else {
                      bVar4 = false;
                    }
                    if ((bVar3) || (bVar3 = false, bVar4)) {
                      bVar3 = true;
                    }
                    iVar17 = local_80;
                    iVar15 = local_58;
                    if ((!bVar5) || (!bVar3)) goto LAB_1424594cc;
                  }
                  lVar9 = ULevel::GetWorld(lVar9);
                  iVar17 = local_80;
                  iVar15 = local_58;
                  if (lVar9 == lVar14) {
                    lVar9 = AActor::GetLevel(lVar13);
                    if (lVar9 == *(longlong *)(lVar14 + 0x30)) goto LAB_1424595c8;
                    lVar9 = UVoipListenerSynthComponent::GetPrivateStaticClass();
                    if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
                         (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                      bVar5 = false;
                    }
                    else {
                      bVar5 = true;
                    }
                    iVar17 = local_80;
                    iVar15 = local_58;
                    if (!bVar5) goto LAB_1424595c8;
                  }
                }
              }
LAB_1424594cc:
              iVar18 = iVar18 + 1;
              lVar16 = lVar16 + 8;
              if (iVar15 + iVar17 <= iVar18) break;
            } while( true );
          }
          local_68 = 0;
          local_74 = '\x01';
          lVar14 = local_c0;
          param_1 = local_b8;
          iVar17 = local_c8;
        }
LAB_1424594f8:
        if (local_40 != '\0') {
          local_40 = '\0';
          UWorld::RemoveOnActorSpawnedHandler(local_90,local_48);
          if (local_60 != 0) {
            FMemory::Free();
          }
          if (local_88 != 0) {
            FMemory::Free();
          }
        }
        if (*(longlong **)(lVar14 + 400) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar14 + 400) + 0x288))();
        }
        FUN_1428caf60(lVar14,2);
        FUN_1428c72b0(lVar14,1,1,0);
      }
      local_c8 = iVar17 + 1;
      local_b0 = local_b0 + 8;
    } while (local_c8 < (int)param_1[0x184]);
  }
  FUN_142884d70(param_1);
  return;
LAB_1424595c8:
  lVar14 = local_c0;
  param_1 = local_b8;
  iVar17 = local_c8;
  local_78 = iVar18;
  local_68 = lVar13;
  if (local_74 != '\0') goto LAB_1424594f8;
  goto LAB_142459320;
}



// FUNCTION 1424595e0 FUN_1424595e0 body=460 status=ok
// SIG undefined FUN_1424595e0(void)

void FUN_1424595e0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_38 [24];
  longlong local_20;
  uint local_c;
  
  FUN_142239650();
  FActorSpawnParameters::FActorSpawnParameters(local_38);
  local_c = local_c | 0x40;
  local_20 = param_1[0x2a];
  if (param_1[0x8e] != 0) {
    lVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
    for (lVar2 = param_1[0x8e]; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar1) {
        if (param_1[0x8e] != 0) goto LAB_142459651;
        break;
      }
    }
  }
  lVar2 = AGeometryCollectionActor::GetPrivateStaticClass();
  param_1[0x8e] = lVar2;
LAB_142459651:
  lVar1 = 0;
  lVar2 = lVar1;
  if (param_1[0x8e] != 0) {
    lVar3 = AGeometryCollectionActor::GetPrivateStaticClass();
    for (lVar5 = param_1[0x8e];
        (lVar2 = lVar1, lVar5 != 0 && (lVar2 = param_1[0x8e], lVar5 != lVar3));
        lVar5 = *(longlong *)(lVar5 + 0x30)) {
    }
  }
  uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar2 = UWorld::SpawnActor(uVar4,lVar2,0,0,local_38);
  param_1[0x97] = lVar2;
  uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  FUN_1428d79e0(uVar4,lVar2);
  if (param_1[0x97] != 0) {
    *(longlong **)(param_1[0x97] + 0x460) = param_1;
  }
  lVar5 = AActor::GetWorldSettings(param_1);
  lVar2 = lVar1;
  if (*(longlong *)(lVar5 + 0x4a0) != 0) {
    lVar6 = FUN_14293b120();
    for (lVar3 = *(longlong *)(lVar5 + 0x4a0); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
      if (lVar3 == lVar6) {
        lVar2 = 0;
        if (*(longlong *)(lVar5 + 0x4a0) != 0) {
          lVar5 = AActor::GetWorldSettings(param_1);
          lVar2 = lVar1;
          if (*(longlong *)(lVar5 + 0x4a0) != 0) {
            lVar6 = FUN_14293b120();
            for (lVar3 = *(longlong *)(lVar5 + 0x4a0);
                (lVar2 = lVar1, lVar3 != 0 && (lVar2 = *(longlong *)(lVar5 + 0x4a0), lVar3 != lVar6)
                ); lVar3 = *(longlong *)(lVar3 + 0x30)) {
            }
          }
          uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
          lVar2 = UWorld::SpawnActor(uVar4,lVar2,0,0,local_38);
        }
        break;
      }
    }
  }
  lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  *(longlong *)(lVar1 + 0x58) = lVar2;
  (**(code **)(*param_1 + 0x750))(param_1);
  return;
}



// FUNCTION 1424597b0 FUN_1424597b0 body=153 status=ok
// SIG undefined FUN_1424597b0(void)

void FUN_1424597b0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  longlong local_18 [2];
  
  (**(code **)(*param_1 + 0x7f0))();
  if ((int)param_5[1] < 2) {
    plVar1 = (longlong *)
             (**(code **)(*(longlong *)param_1[0x96] + 0x700))
                       ((longlong *)param_1[0x96],local_18,param_2);
    if (param_5 != plVar1) {
      if (*param_5 != 0) {
        FMemory::Free();
      }
      *param_5 = *plVar1;
      *plVar1 = 0;
      *(int *)(param_5 + 1) = (int)plVar1[1];
      *(undefined4 *)((longlong)param_5 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
      plVar1[1] = 0;
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142459850 FUN_142459850 body=2058 status=ok
// SIG undefined FUN_142459850(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142459850(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined1 *puVar16;
  longlong lVar17;
  undefined8 uVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_388 [32];
  undefined4 *local_368;
  uint *local_360;
  undefined8 *local_358;
  undefined1 *local_350;
  undefined *local_348;
  char local_338 [8];
  undefined8 local_330;
  float local_328;
  float local_320;
  undefined8 local_318;
  float local_310;
  uint local_308;
  undefined1 local_304;
  undefined8 local_300;
  float local_2f8;
  undefined8 local_2f0;
  float fStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  float fStack_2dc;
  float local_2d8;
  float local_2d4;
  undefined8 local_2d0;
  float fStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  float fStack_2bc;
  undefined4 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  float local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined1 local_288 [12];
  float local_27c;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined1 local_1f8 [12];
  float local_1ec;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined1 local_168 [72];
  longlong local_120;
  longlong local_100;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_388;
  *(undefined4 *)(param_3 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_3 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo
              (param_3);
  }
  local_2d8 = 0.0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  *(undefined4 *)(param_3 + 5) = 0;
  _guard_xfg_dispatch_icall_nop(param_3 + 6,0,0x90);
  *(undefined4 *)((longlong)param_3 + 0x3c) = 0x3f800000;
  uVar18 = 0;
  lVar11 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if ((lVar11 != 0) && (0.0001 < *(float *)(param_2 + 9))) {
    local_320 = *(float *)((longlong)param_2 + 0x4c);
    fVar23 = 1.0 / *(float *)(param_2 + 9);
    local_2d4 = fVar23;
    if (ABS(local_320) <= 1e-08) {
      local_320 = (float)FUN_1428cc5b0(lVar11);
    }
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146af4a58) &&
       (_Init_thread_header(&DAT_146af4a58), DAT_146af4a58 == -1)) {
      FName::FName(&DAT_146af4a50,"PredictProjectilePath",1);
      _Init_thread_footer(&DAT_146af4a58);
    }
    iVar19 = 0;
    local_368 = (undefined4 *)0x0;
    FUN_1422ffb20(local_168,DAT_146af4a50,local_338,*(undefined1 *)(param_2 + 0xb));
    iVar4 = *(int *)(param_2 + 6);
    local_308 = 0;
    local_304 = 0;
    if ((*(char *)(param_2 + 3) == '\0') ||
       ((*(char *)((longlong)param_2 + 0x24) == '\0' && (iVar4 < 1)))) {
      local_338[0] = '\0';
    }
    else {
      local_338[0] = '\x01';
      FCollisionQueryParams::AddIgnoredActors(local_168,param_2 + 7);
      if (0 < iVar4) {
        for (; (-1 < iVar19 && (iVar19 < *(int *)(param_2 + 6))); iVar19 = iVar19 + 1) {
          uVar3 = *(undefined1 *)((longlong)iVar19 + param_2[5]);
          uVar12 = UCollisionProfile::Get();
          uVar10 = UCollisionProfile::ConvertToCollisionChannel(uVar12,0,uVar3);
          local_308 = local_308 | 1 << (uVar10 & 0x1f);
        }
      }
    }
    local_328 = *(float *)(param_2 + 1);
    local_330 = *param_2;
    uVar12 = *(undefined8 *)((longlong)param_2 + 0xc);
    fVar5 = *(float *)((longlong)param_2 + 0x14);
    iVar19 = -((int)ROUND(-0.5 - (*(float *)(param_2 + 9) * *(float *)(param_2 + 4) +
                                 *(float *)(param_2 + 9) * *(float *)(param_2 + 4))) >> 1);
    if (0x7f < iVar19) {
      iVar19 = 0x80;
    }
    local_318 = local_330;
    local_310 = local_328;
    local_300 = uVar12;
    local_2f8 = fVar5;
    if (*(int *)((longlong)param_3 + 0xc) < iVar19) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo
                (param_3);
    }
    iVar19 = (int)param_3[1];
    uStack_2c4 = (undefined4)uVar12;
    uVar6 = uStack_2c4;
    uStack_2c0 = (undefined4)((ulonglong)uVar12 >> 0x20);
    uVar7 = uStack_2c0;
    local_2b8 = 0;
    *(int *)(param_3 + 1) = iVar19 + 1;
    local_2d0 = local_318;
    fStack_2c8 = local_310;
    fStack_2bc = fVar5;
    if (*(int *)((longlong)param_3 + 0xc) < iVar19 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeGrow
                (param_3,iVar19);
    }
    lVar17 = *param_3;
    lVar15 = (longlong)iVar19 * 0x1c;
    puVar1 = (undefined4 *)(lVar15 + lVar17);
    *puVar1 = (undefined4)local_2d0;
    puVar1[1] = local_2d0._4_4_;
    puVar1[2] = fStack_2c8;
    puVar1[3] = uStack_2c4;
    *(ulonglong *)(lVar15 + 0x10 + lVar17) = CONCAT44(fStack_2bc,uStack_2c0);
    *(undefined4 *)(lVar15 + 0x18 + lVar17) = local_2b8;
    fVar5 = *(float *)(param_2 + 4);
    local_224 = 0xffffffff;
    local_220 = 0;
    local_21c = 0xffffffff;
    local_218 = 0;
    local_214 = 0xffffffff;
    local_210 = 0;
    local_208 = 0;
    local_200 = 0;
    local_194 = 0xffffffff;
    local_190 = 0;
    local_18c = 0xffffffff;
    local_188 = 0;
    local_184 = 0xffffffff;
    local_180 = 0;
    local_178 = 0;
    local_170 = 0;
    local_27c = 1.0;
    local_1ec = 1.0;
    if (0.0 < fVar5) {
      fVar26 = (float)local_300 * 2.0;
      fVar27 = local_300._4_4_ * 2.0;
      fVar21 = 0.0;
      fVar24 = local_2f8;
      do {
        *(undefined8 *)((longlong)param_3 + 0x1c) = uVar12;
        local_318 = local_330;
        local_310 = local_328;
        fVar20 = fVar5 - fVar21;
        if (fVar23 <= fVar5 - fVar21) {
          fVar20 = fVar23;
        }
        fVar22 = fVar21 + fVar20;
        fVar23 = fVar20 * 0.5;
        fVar25 = fVar20 * local_320 + fVar24;
        *(float *)(param_3 + 5) = fVar22;
        local_330._0_4_ = fVar26 * fVar23 + (float)local_330;
        *(float *)((longlong)param_3 + 0x24) = fVar25;
        local_330._4_4_ = fVar27 * fVar23 + local_330._4_4_;
        local_328 = (fVar25 + fVar24) * fVar23 + local_328;
        param_3[2] = CONCAT44(local_330._4_4_,(float)local_330);
        *(float *)(param_3 + 3) = local_328;
        local_2f8 = fVar25;
        if (local_338[0] != '\0') {
          if (iVar4 < 1) {
LAB_142459dfe:
            if (*(char *)((longlong)param_2 + 0x24) != '\0') {
              local_348 = &DAT_146aefe68;
              local_350 = local_168;
              local_358 = &local_2d0;
              local_360 = (uint *)CONCAT44(local_360._4_4_,(uint)*(byte *)((longlong)param_2 + 0x25)
                                          );
              local_368 = &DAT_1464aa810;
              local_2d0 = CONCAT44(uVar2,2);
              cVar8 = UWorld::SweepSingleByChannel(lVar11,local_1f8,&local_318,&local_330);
LAB_142459e52:
              if (cVar8 != '\0') {
                puVar16 = local_288;
                if (local_1ec <= local_27c) {
                  puVar16 = local_1f8;
                }
                FUN_140729f20(param_3 + 6,puVar16);
                fVar20 = fVar20 * *(float *)((longlong)param_3 + 0x3c);
                fStack_2e8 = *(float *)((longlong)param_3 + 0x4c);
                iVar4 = (int)param_3[1];
                local_2d8 = fVar20 + fVar21;
                fStack_2dc = fVar20 * local_320 + fVar24;
                local_2f0 = *(undefined8 *)((longlong)param_3 + 0x44);
                uStack_2e4 = (float)local_300;
                uStack_2e0 = local_300._4_4_;
                *(int *)(param_3 + 1) = iVar4 + 1;
                local_2a8 = fStack_2dc;
                if (*(int *)((longlong)param_3 + 0xc) < iVar4 + 1) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>
                  ::ResizeGrow(param_3,iVar4);
                }
                lVar11 = *param_3;
                uVar18 = 1;
                lVar17 = (longlong)iVar4 * 0x1c;
                puVar1 = (undefined4 *)(lVar17 + lVar11);
                *puVar1 = (undefined4)local_2f0;
                puVar1[1] = local_2f0._4_4_;
                puVar1[2] = fStack_2e8;
                puVar1[3] = uStack_2e4;
                *(ulonglong *)(lVar17 + 0x10 + lVar11) = CONCAT44(fStack_2dc,uStack_2e0);
                *(float *)(lVar17 + 0x18 + lVar11) = local_2d8;
                break;
              }
            }
          }
          else {
            if (*(char *)((longlong)param_2 + 0x24) == '\0') {
              if (iVar4 < 1) goto LAB_142459dfe;
              local_350 = local_168;
              local_358 = (undefined8 *)&local_2a0;
              local_2a0 = 2;
              local_360 = &local_308;
              local_368 = &DAT_1464aa810;
              local_29c = uVar2;
              cVar8 = UWorld::SweepSingleByObjectType(lVar11,local_288,&local_318,&local_330);
              goto LAB_142459e52;
            }
            while( true ) {
              local_350 = local_168;
              local_358 = (undefined8 *)&local_2b0;
              local_2b0 = 2;
              local_360 = &local_308;
              local_368 = &DAT_1464aa810;
              local_2ac = uVar2;
              cVar8 = UWorld::SweepSingleByObjectType(lVar11,local_288,&local_318,&local_330);
              if (cVar8 == '\0') break;
              cVar9 = FWeakObjectPtr::IsValid(&local_21c,1,0);
              if ((cVar9 == '\0') ||
                 (cVar9 = FWeakObjectPtr::IsValid(&local_214,1,0), cVar9 == '\0'))
              goto LAB_142459e52;
              plVar13 = (longlong *)FWeakObjectPtr::Get(&local_214);
              iVar19 = (**(code **)(*plVar13 + 0x4f0))
                                 (plVar13,*(undefined1 *)((longlong)param_2 + 0x25));
              if (iVar19 != 0) goto LAB_142459e52;
              uVar14 = FWeakObjectPtr::Get(&local_21c);
              FCollisionQueryParams::AddIgnoredActor(local_168,uVar14);
            }
          }
        }
        iVar19 = (int)param_3[1];
        fStack_2e8 = local_328;
        *(int *)(param_3 + 1) = iVar19 + 1;
        local_2f0 = local_330;
        uStack_2e4 = uVar6;
        uStack_2e0 = uVar7;
        fStack_2dc = fVar25;
        local_2d8 = fVar22;
        if (*(int *)((longlong)param_3 + 0xc) < iVar19 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::
          ResizeGrow(param_3,iVar19);
        }
        lVar17 = *param_3;
        lVar15 = (longlong)iVar19 * 0x1c;
        puVar1 = (undefined4 *)(lVar15 + lVar17);
        *puVar1 = (undefined4)local_2f0;
        puVar1[1] = local_2f0._4_4_;
        puVar1[2] = fStack_2e8;
        puVar1[3] = uStack_2e4;
        *(ulonglong *)(lVar15 + 0x10 + lVar17) = CONCAT44(fStack_2dc,uStack_2e0);
        *(float *)(lVar15 + 0x18 + lVar17) = local_2d8;
        fVar21 = fVar22;
        fVar23 = local_2d4;
        fVar24 = fVar25;
      } while (fVar22 < fVar5);
    }
    if (local_100 != 0) {
      FMemory::Free();
    }
    if (local_120 != 0) {
      FMemory::Free();
    }
  }
  return uVar18;
}



// FUNCTION 14245a080 FUN_14245a080 body=941 status=ok
// SIG undefined FUN_14245a080(void)

void FUN_14245a080(longlong param_1,float param_2,longlong param_3,longlong param_4,char param_5)

{
  float fVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined1 local_res8 [8];
  undefined1 *local_98 [14];
  
  iVar2 = *(int *)(param_1 + 0xe0);
  plVar8 = (longlong *)(param_1 + 8);
  if (iVar2 != 0) {
    iVar11 = *(int *)(param_1 + 0x90);
    if (*(int *)(param_1 + 0x94) < iVar2 + iVar11) {
      FUN_14245d780(plVar8);
      iVar11 = *(int *)(param_1 + 0x90);
    }
    plVar6 = *(longlong **)(param_1 + 0xd8);
    if (*(longlong **)(param_1 + 0xd8) == (longlong *)0x0) {
      plVar6 = (longlong *)(param_1 + 0x98);
    }
    plVar5 = *(longlong **)(param_1 + 0x88);
    if (*(longlong **)(param_1 + 0x88) == (longlong *)0x0) {
      plVar5 = plVar8;
    }
    plVar7 = plVar5 + (longlong)iVar11 * 2;
    plVar9 = plVar6;
    iVar10 = iVar2;
    do {
      *plVar7 = *plVar9;
      lVar4 = *(longlong *)
               ((longlong)plVar6 + ((longlong)iVar11 * -0x10 - (longlong)plVar5) + 8 +
               (longlong)plVar7);
      plVar7[1] = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      plVar9 = plVar9 + 2;
      plVar7 = plVar7 + 2;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + iVar2;
  }
  FUN_14244ad10((longlong *)(param_1 + 0x98),0);
  if (1 < *(int *)(param_1 + 0x90)) {
    local_98[0] = local_res8;
    local_res8[0] = 0;
    plVar6 = *(longlong **)(param_1 + 0x88);
    if (*(longlong **)(param_1 + 0x88) == (longlong *)0x0) {
      plVar6 = plVar8;
    }
    FUN_14243c5e0(plVar6,*(undefined4 *)(param_1 + 0x90),local_98);
  }
  *(undefined2 *)(param_1 + 0xe8) = 0;
  *(undefined1 *)(param_1 + 0xf9) = 0;
  plVar6 = *(longlong **)(param_1 + 0x88);
  if (*(longlong **)(param_1 + 0x88) == (longlong *)0x0) {
    plVar6 = plVar8;
  }
  plVar8 = plVar6 + (longlong)*(int *)(param_1 + 0x90) * 2;
  do {
    if (plVar6 == plVar8) {
      return;
    }
    lVar4 = *plVar6;
    if (lVar4 != 0) {
      if (((*(byte *)(lVar4 + 0x30) & 1) == 0) || (param_5 != '\0')) {
        fVar13 = param_2;
        if ((*(char *)(lVar4 + 0x33) != '\0') &&
           (fVar12 = *(float *)(lVar4 + 0x28) - *(float *)(lVar4 + 0x24), 0.0 < fVar12)) {
          fVar12 = fVar12 * 0.5;
          if (0.5 <= fVar12) {
            fVar12 = 0.5;
          }
          fVar13 = fVar12 + param_2;
        }
        if ((*(float *)(lVar4 + 0x24) == 0.0) && (*(float *)(lVar4 + 0x20) != -3.4e+38)) {
          if (*(char *)(param_3 + 0x128) == '\x02') {
            cVar3 = (**(code **)(*(longlong *)(param_4 + 0x218) + 0x38))(param_4 + 0x218);
            if (((cVar3 != '\0') &&
                (lVar4 = (**(code **)(*(longlong *)(param_4 + 0x218) + 0x28))(param_4 + 0x218),
                lVar4 != 0)) && ((*(byte *)(param_3 + 0x56c) & 8) == 0)) {
              fVar12 = *(float *)(lVar4 + 0xc);
LAB_14245a324:
              if ((0.0 <= fVar12) && (fVar1 = *(float *)(*plVar6 + 0x20), fVar12 < fVar1)) {
                if (fVar1 < fVar12 + fVar13) {
                  fVar13 = (fVar12 + fVar13) - fVar1;
                }
                else {
                  fVar13 = 0.0;
                }
              }
            }
          }
          else if (((*(char *)(param_3 + 0x128) == '\x03') &&
                   (cVar3 = (**(code **)(*(longlong *)(param_4 + 0x218) + 0x40))(param_4 + 0x218),
                   cVar3 != '\0')) &&
                  (lVar4 = (**(code **)(*(longlong *)(param_4 + 0x218) + 0x30))(param_4 + 0x218),
                  lVar4 != 0)) {
            fVar12 = *(float *)(lVar4 + 0x58) - param_2;
            goto LAB_14245a324;
          }
        }
        cVar3 = (**(code **)(*(longlong *)*plVar6 + 8))();
        if ((cVar3 != '\0') && (lVar4 = *plVar6, (*(byte *)(lVar4 + 0x31) & 2) == 0)) {
          if (*(float *)(lVar4 + 0x2c) <= *(float *)(lVar4 + 0x24) + fVar13) {
            fVar13 = (*(float *)(lVar4 + 0x2c) - *(float *)(lVar4 + 0x24)) + 0.0001;
          }
        }
        if (fVar13 < 0.0) {
          fVar13 = 0.0;
        }
        (**(code **)(*(longlong *)*plVar6 + 0x48))
                  ((longlong *)*plVar6,fVar13,param_2,param_3,param_4);
        *(byte *)(param_1 + 0xf9) = *(byte *)(param_1 + 0xf9) | *(byte *)(*plVar6 + 0x31);
        *(byte *)(*plVar6 + 0x30) = *(byte *)(*plVar6 + 0x30) | 1;
        *(undefined1 *)(*plVar6 + 0x33) = 0;
        lVar4 = *plVar6;
      }
      if (*(char *)(lVar4 + 0x14) == '\x01') {
        *(undefined1 *)(param_1 + 0xe8) = 1;
      }
      else if (*(char *)(lVar4 + 0x14) == '\0') {
        *(undefined1 *)(param_1 + 0xe9) = 1;
      }
    }
    plVar6 = plVar6 + 2;
  } while( true );
}



// FUNCTION 14245a430 PrepareRootMotion body=392 status=ok
// SIG undefined PrepareRootMotion(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FRootMotionSource_ConstantForce::PrepareRootMotion
               (longlong *param_1,float param_2,float param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  fVar8 = 1.0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  uVar6 = uRam0000000146af381c;
  fVar9 = *(float *)(param_1 + 0x13);
  fVar10 = *(float *)((longlong)param_1 + 0x9c);
  uVar12 = _DAT_146af3810 & _DAT_146af3820;
  uVar13 = uRam0000000146af3814 & uRam0000000146af3824;
  uVar14 = uRam0000000146af3818 & uRam0000000146af3828;
  uVar15 = uRam0000000146af381c & uRam0000000146af382c;
  fVar11 = *(float *)(param_1 + 0x14);
  if (param_1[0x15] != 0) {
    fVar7 = (float)UCurveFloat::GetFloatValue();
    fVar9 = fVar9 * fVar7;
    fVar10 = fVar10 * fVar7;
    fVar11 = fVar11 * fVar7;
  }
  if (1e-08 < param_3) {
    fVar8 = param_2 / param_3;
  }
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(uint *)((longlong)param_1 + 0x5c) = uVar6;
  *(uint *)(param_1 + 0xe) = uVar12;
  *(uint *)((longlong)param_1 + 0x74) = uVar13;
  *(uint *)(param_1 + 0xf) = uVar14;
  *(uint *)((longlong)param_1 + 0x7c) = uVar15;
  auVar2._4_4_ = fVar10 * fVar8;
  auVar2._0_4_ = fVar9 * fVar8;
  auVar2._8_4_ = fVar11 * fVar8;
  auVar2._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0xc) = auVar2;
  uVar5 = DAT_146531a98;
  uVar4 = DAT_146531a94;
  uVar3 = DAT_146531a90;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f800000;
  auVar1._4_4_ = uVar4;
  auVar1._0_4_ = uVar3;
  auVar1._8_4_ = uVar5;
  auVar1._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0xe) = auVar1;
                    /* WARNING: Could not recover jumptable at 0x00014245a5b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1,param_2 + *(float *)((longlong)param_1 + 0x24));
  return;
}



// FUNCTION 14245a5c0 PrepareRootMotion body=454 status=ok
// SIG undefined PrepareRootMotion(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FRootMotionSource_JumpForce::PrepareRootMotion(longlong *param_1,float param_2,float param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float local_78;
  float local_74;
  float local_70;
  float local_68;
  float local_64;
  float local_60;
  
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  if (((1e-08 < *(float *)((longlong)param_1 + 0x2c)) && (1e-08 < param_3)) && (1e-08 < param_2)) {
    fVar4 = 1.0 / *(float *)((longlong)param_1 + 0x2c);
    fVar10 = fVar4 * *(float *)((longlong)param_1 + 0x24);
    fVar4 = (*(float *)((longlong)param_1 + 0x24) + param_2) * fVar4;
    if (1.0 < fVar4) {
      fVar5 = fVar4 - 1.0;
      fVar4 = fVar4 - fVar5;
      fVar10 = fVar10 - fVar5;
    }
    if (param_1[0x17] != 0) {
      fVar10 = (float)UCurveFloat::GetFloatValue(param_1[0x17],fVar10);
      fVar4 = (float)UCurveFloat::GetFloatValue(param_1[0x17]);
    }
    GetRelativeLocation(param_1,&local_68,fVar10);
    GetRelativeLocation(param_1,&local_78,fVar4);
    uVar3 = uRam0000000146af381c;
    uVar6 = _DAT_146af3810 & _DAT_146af3820;
    uVar7 = uRam0000000146af3814 & uRam0000000146af3824;
    uVar8 = uRam0000000146af3818 & uRam0000000146af3828;
    uVar9 = uRam0000000146af381c & uRam0000000146af382c;
    *(undefined1 *)(param_1 + 8) = 1;
    param_3 = 1.0 / param_3;
    *(uint *)(param_1 + 0xe) = uVar6;
    *(uint *)((longlong)param_1 + 0x74) = uVar7;
    *(uint *)(param_1 + 0xf) = uVar8;
    *(uint *)((longlong)param_1 + 0x7c) = uVar9;
    *(undefined4 *)(param_1 + 10) = 0;
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0xb) = 0;
    *(uint *)((longlong)param_1 + 0x5c) = uVar3;
    auVar1._4_4_ = (local_74 - local_64) * param_3;
    auVar1._0_4_ = (local_78 - local_68) * param_3;
    auVar1._8_4_ = (local_70 - local_60) * param_3;
    auVar1._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0xc) = auVar1;
    auVar2._4_4_ = DAT_146531a94;
    auVar2._0_4_ = DAT_146531a90;
    auVar2._8_4_ = DAT_146531a98;
    auVar2._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0xe) = auVar2;
    *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f800000;
  }
                    /* WARNING: Could not recover jumptable at 0x00014245a782. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1,param_2 + *(float *)((longlong)param_1 + 0x24));
  return;
}



// FUNCTION 14245a790 FUN_14245a790 body=1187 status=ok
// SIG undefined FUN_14245a790(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14245a790(longlong *param_1,undefined8 param_2,float param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  uint uVar8;
  float *pfVar9;
  float fVar10;
  uint uVar11;
  uint uVar13;
  uint uVar14;
  undefined1 auVar12 [16];
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 local_b8;
  float local_b0;
  
  uVar19 = (undefined4)((ulonglong)param_2 >> 0x20);
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  if ((1e-08 < *(float *)((longlong)param_1 + 0x2c)) && (1e-08 < param_3)) {
    fVar16 = ((float)param_2 + *(float *)((longlong)param_1 + 0x24)) /
             *(float *)((longlong)param_1 + 0x2c);
    if (param_1[0x19] != 0) {
      fVar16 = (float)UCurveFloat::GetFloatValue(param_1[0x19],CONCAT44(uVar19,fVar16));
    }
    fVar18 = *(float *)(param_1 + 0x16);
    fVar20 = *(float *)(param_1 + 0x13);
    fVar21 = *(float *)((longlong)param_1 + 0xb4);
    fVar22 = *(float *)((longlong)param_1 + 0x9c);
    fVar23 = *(float *)(param_1 + 0x17);
    fVar1 = *(float *)(param_1 + 0x14);
    pfVar9 = (float *)FRootMotionSource_MoveToDynamicForce::GetPathOffsetInWorldSpace
                                (param_1,&local_b8,fVar16);
    fVar20 = (fVar18 - fVar20) * fVar16 + fVar20 + *pfVar9;
    fVar18 = (fVar21 - fVar22) * fVar16 + fVar22 + pfVar9[1];
    fVar16 = (fVar23 - fVar1) * fVar16 + fVar1 + pfVar9[2];
    lVar6 = *(longlong *)(param_4 + 0x168);
    if (lVar6 == 0) {
      local_b8 = _DAT_1468b5d90;
      local_b0 = DAT_1468b5d98;
    }
    else {
      local_b8 = *(undefined8 *)(lVar6 + 0x220);
      local_b0 = *(float *)(lVar6 + 0x228);
    }
    param_3 = 1.0 / param_3;
    fVar21 = (fVar20 - (float)local_b8) * param_3;
    fVar23 = (fVar16 - local_b0) * param_3;
    fVar22 = (fVar18 - (float)((ulonglong)local_b8 >> 0x20)) * param_3;
    if ((*(char *)((longlong)param_1 + 0xbc) != '\0') &&
       (((0.0001 < ABS(fVar21) || (0.0001 < ABS(fVar22))) || (0.0001 < ABS(fVar23))))) {
      fVar17 = *(float *)((longlong)param_1 + 0x24) / *(float *)((longlong)param_1 + 0x2c);
      fVar1 = *(float *)(param_1 + 0x16);
      fVar2 = *(float *)(param_1 + 0x13);
      fVar10 = *(float *)((longlong)param_1 + 0xb4);
      fVar3 = *(float *)((longlong)param_1 + 0x9c);
      fVar4 = *(float *)(param_1 + 0x17);
      fVar5 = *(float *)(param_1 + 0x14);
      pfVar9 = (float *)FRootMotionSource_MoveToDynamicForce::GetPathOffsetInWorldSpace
                                  (param_1,&local_b8,fVar17);
      fVar10 = (fVar18 - ((fVar10 - fVar3) * fVar17 + fVar3 + pfVar9[1])) * param_3;
      fVar18 = (fVar20 - ((fVar1 - fVar2) * fVar17 + fVar2 + *pfVar9)) * param_3;
      param_3 = (fVar16 - ((fVar4 - fVar5) * fVar17 + fVar5 + pfVar9[2])) * param_3;
      fVar18 = SQRT(fVar18 * fVar18 + fVar10 * fVar10 + param_3 * param_3);
      fVar16 = fVar21 * fVar21 + fVar22 * fVar22 + fVar23 * fVar23;
      if ((fVar18 + 0.5) * (fVar18 + 0.5) < fVar16) {
        if (1e-08 < fVar16) {
          auVar12 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
          fVar20 = auVar12._0_4_;
          fVar20 = fVar20 + fVar20 * (0.5 - fVar16 * 0.5 * fVar20 * fVar20);
          fVar20 = fVar20 + fVar20 * (0.5 - fVar16 * 0.5 * fVar20 * fVar20);
          fVar21 = fVar21 * fVar20;
          fVar22 = fVar22 * fVar20;
          fVar23 = fVar23 * fVar20;
        }
        fVar21 = fVar21 * fVar18;
        fVar22 = fVar22 * fVar18;
        fVar23 = fVar23 * fVar18;
      }
      uVar19 = 0;
    }
    uVar8 = uRam0000000146af381c;
    uVar11 = _DAT_146af3810 & _DAT_146af3820;
    uVar13 = uRam0000000146af3814 & uRam0000000146af3824;
    uVar14 = uRam0000000146af3818 & uRam0000000146af3828;
    uVar15 = uRam0000000146af381c & uRam0000000146af382c;
    *(undefined1 *)(param_1 + 8) = 1;
    *(uint *)(param_1 + 0xe) = uVar11;
    *(uint *)((longlong)param_1 + 0x74) = uVar13;
    *(uint *)(param_1 + 0xf) = uVar14;
    *(uint *)((longlong)param_1 + 0x7c) = uVar15;
    auVar12._4_4_ = fVar22;
    auVar12._0_4_ = fVar21;
    auVar12._8_4_ = fVar23;
    auVar12._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0xc) = auVar12;
    *(undefined4 *)(param_1 + 10) = 0;
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0xb) = 0;
    *(uint *)((longlong)param_1 + 0x5c) = uVar8;
    auVar7._4_4_ = DAT_146531a94;
    auVar7._0_4_ = DAT_146531a90;
    auVar7._8_4_ = DAT_146531a98;
    auVar7._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0xe) = auVar7;
    *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f800000;
  }
                    /* WARNING: Could not recover jumptable at 0x00014245ac2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))
            (param_1,CONCAT44(uVar19,(float)param_2 + *(float *)((longlong)param_1 + 0x24)));
  return;
}



// FUNCTION 14245ac40 FUN_14245ac40 body=1159 status=ok
// SIG undefined FUN_14245ac40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14245ac40(longlong *param_1,undefined8 param_2,float param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  uint uVar7;
  float *pfVar8;
  float fVar9;
  uint uVar10;
  uint uVar12;
  uint uVar13;
  undefined1 auVar11 [16];
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 local_b8;
  float local_b0;
  
  uVar19 = (undefined4)((ulonglong)param_2 >> 0x20);
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  if ((1e-08 < *(float *)((longlong)param_1 + 0x2c)) && (1e-08 < param_3)) {
    fVar17 = *(float *)(param_1 + 0x13);
    fVar18 = *(float *)((longlong)param_1 + 0x9c);
    fVar21 = *(float *)(param_1 + 0x14);
    fVar22 = *(float *)(param_1 + 0x15);
    fVar23 = *(float *)((longlong)param_1 + 0xac);
    fVar15 = ((float)param_2 + *(float *)((longlong)param_1 + 0x24)) /
             *(float *)((longlong)param_1 + 0x2c);
    fVar20 = *(float *)((longlong)param_1 + 0xa4);
    pfVar8 = (float *)FRootMotionSource_MoveToForce::GetPathOffsetInWorldSpace
                                (0x322bcc77,&local_b8,fVar15);
    fVar20 = (fVar20 - fVar17) * fVar15 + fVar17 + *pfVar8;
    fVar17 = (fVar22 - fVar18) * fVar15 + fVar18 + pfVar8[1];
    fVar18 = (fVar23 - fVar21) * fVar15 + fVar21 + pfVar8[2];
    lVar5 = *(longlong *)(param_4 + 0x168);
    if (lVar5 == 0) {
      local_b8 = _DAT_1468b5d90;
      local_b0 = DAT_1468b5d98;
    }
    else {
      local_b8 = *(undefined8 *)(lVar5 + 0x220);
      local_b0 = *(float *)(lVar5 + 0x228);
    }
    param_3 = 1.0 / param_3;
    fVar21 = (fVar20 - (float)local_b8) * param_3;
    fVar23 = (fVar18 - local_b0) * param_3;
    fVar22 = (fVar17 - (float)((ulonglong)local_b8 >> 0x20)) * param_3;
    if (((char)param_1[0x16] != '\0') &&
       (((0.0001 < ABS(fVar21) || (0.0001 < ABS(fVar22))) || (0.0001 < ABS(fVar23))))) {
      fVar16 = *(float *)((longlong)param_1 + 0x24) / *(float *)((longlong)param_1 + 0x2c);
      fVar15 = *(float *)((longlong)param_1 + 0xa4);
      fVar1 = *(float *)(param_1 + 0x13);
      fVar9 = *(float *)(param_1 + 0x15);
      fVar2 = *(float *)((longlong)param_1 + 0x9c);
      fVar3 = *(float *)((longlong)param_1 + 0xac);
      fVar4 = *(float *)(param_1 + 0x14);
      pfVar8 = (float *)FRootMotionSource_MoveToForce::GetPathOffsetInWorldSpace
                                  (param_1,&local_b8,fVar16);
      fVar9 = (fVar17 - ((fVar9 - fVar2) * fVar16 + fVar2 + pfVar8[1])) * param_3;
      fVar17 = (fVar20 - ((fVar15 - fVar1) * fVar16 + fVar1 + *pfVar8)) * param_3;
      param_3 = (fVar18 - ((fVar3 - fVar4) * fVar16 + fVar4 + pfVar8[2])) * param_3;
      fVar18 = SQRT(fVar17 * fVar17 + fVar9 * fVar9 + param_3 * param_3);
      fVar17 = fVar21 * fVar21 + fVar22 * fVar22 + fVar23 * fVar23;
      if ((fVar18 + 0.5) * (fVar18 + 0.5) < fVar17) {
        if (1e-08 < fVar17) {
          auVar11 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
          fVar20 = auVar11._0_4_;
          fVar20 = fVar20 + fVar20 * (0.5 - fVar17 * 0.5 * fVar20 * fVar20);
          fVar20 = fVar20 + fVar20 * (0.5 - fVar17 * 0.5 * fVar20 * fVar20);
          fVar21 = fVar21 * fVar20;
          fVar22 = fVar22 * fVar20;
          fVar23 = fVar23 * fVar20;
        }
        fVar21 = fVar21 * fVar18;
        fVar22 = fVar22 * fVar18;
        fVar23 = fVar23 * fVar18;
      }
      uVar19 = 0;
    }
    uVar7 = uRam0000000146af381c;
    uVar10 = _DAT_146af3810 & _DAT_146af3820;
    uVar12 = uRam0000000146af3814 & uRam0000000146af3824;
    uVar13 = uRam0000000146af3818 & uRam0000000146af3828;
    uVar14 = uRam0000000146af381c & uRam0000000146af382c;
    *(undefined1 *)(param_1 + 8) = 1;
    *(uint *)(param_1 + 0xe) = uVar10;
    *(uint *)((longlong)param_1 + 0x74) = uVar12;
    *(uint *)(param_1 + 0xf) = uVar13;
    *(uint *)((longlong)param_1 + 0x7c) = uVar14;
    auVar11._4_4_ = fVar22;
    auVar11._0_4_ = fVar21;
    auVar11._8_4_ = fVar23;
    auVar11._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0xc) = auVar11;
    *(undefined4 *)(param_1 + 10) = 0;
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0xb) = 0;
    *(uint *)((longlong)param_1 + 0x5c) = uVar7;
    auVar6._4_4_ = DAT_146531a94;
    auVar6._0_4_ = DAT_146531a90;
    auVar6._8_4_ = DAT_146531a98;
    auVar6._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0xe) = auVar6;
    *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f800000;
  }
                    /* WARNING: Could not recover jumptable at 0x00014245b0c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))
            (param_1,CONCAT44(uVar19,(float)param_2 + *(float *)((longlong)param_1 + 0x24)));
  return;
}



// FUNCTION 14245b0d0 FUN_14245b0d0 body=1111 status=ok
// SIG undefined FUN_14245b0d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14245b0d0(longlong *param_1,float param_2,float param_3,longlong param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  float local_c8;
  float fStack_c4;
  undefined8 local_b8;
  float local_b0;
  longlong local_a8;
  float local_a0;
  
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  lVar1 = *(longlong *)(param_4 + 0x168);
  local_a8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  if (lVar1 == 0) {
    local_b0 = DAT_1468b5d98;
    local_b8 = local_a8;
  }
  else {
    local_b0 = *(float *)(lVar1 + 0x228);
    local_b8 = *(longlong *)(lVar1 + 0x220);
  }
  if (param_1[0x15] == 0) {
    local_a8 = param_1[0x13];
    fVar15 = *(float *)(param_1 + 0x14);
  }
  else {
    lVar1 = *(longlong *)(param_1[0x15] + 0x168);
    fVar15 = DAT_1468b5d98;
    if (lVar1 != 0) {
      local_a8 = *(longlong *)(lVar1 + 0x220);
      fVar15 = *(float *)(lVar1 + 0x228);
    }
  }
  fStack_c4 = (float)((ulonglong)local_b8 >> 0x20);
  local_c8 = (float)local_b8;
  fVar13 = (float)local_a8;
  fVar9 = local_c8 - fVar13;
  local_b8._4_4_ = (float)((ulonglong)local_a8 >> 0x20);
  fVar8 = DAT_1468b5d98;
  fVar12 = DAT_1468b5d90;
  fVar14 = DAT_1468b5d94;
  local_a0 = fVar15;
  if (SQRT(fVar9 * fVar9 + (fStack_c4 - local_b8._4_4_) * (fStack_c4 - local_b8._4_4_) +
           (local_b0 - fVar15) * (local_b0 - fVar15)) < *(float *)(param_1 + 0x16)) {
    fVar9 = 1.0;
    if (param_1[0x18] != 0) {
      fVar9 = (float)UCurveFloat::GetFloatValue();
    }
    if (param_1[0x19] != 0) {
      fVar8 = (float)UCurveFloat::GetFloatValue();
      fVar9 = fVar9 + (fVar8 - 1.0);
    }
    if (0.0 <= fVar9) {
      if (1.0 <= fVar9) {
        fVar9 = 1.0;
      }
    }
    else {
      fVar9 = 0.0;
    }
    fVar9 = fVar9 * *(float *)((longlong)param_1 + 0xb4);
    if ((char)param_1[0x1a] == '\0') {
      fVar13 = fVar13 - local_c8;
      local_b8._4_4_ = local_b8._4_4_ - fStack_c4;
      fVar15 = fVar15 - local_b0;
      fVar10 = local_b8._4_4_ * local_b8._4_4_ + fVar13 * fVar13 + fVar15 * fVar15;
      fVar12 = fVar13;
      fVar14 = local_b8._4_4_;
      fVar8 = fVar15;
      if ((fVar10 != 1.0) &&
         (fVar12 = DAT_1468b5d90, fVar14 = DAT_1468b5d94, fVar8 = DAT_1468b5d98, 1e-08 <= fVar10)) {
        auVar11 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar8 = auVar11._0_4_;
        fVar8 = fVar8 + fVar8 * (0.5 - fVar10 * 0.5 * fVar8 * fVar8);
        fVar8 = fVar8 + fVar8 * (0.5 - fVar10 * 0.5 * fVar8 * fVar8);
        fVar12 = fVar13 * fVar8;
        fVar14 = local_b8._4_4_ * fVar8;
        fVar8 = fVar15 * fVar8;
      }
      fVar8 = fVar8 * fVar9;
      fVar12 = fVar12 * fVar9;
      fVar14 = fVar14 * fVar9;
      if ((char)param_1[0x17] != '\0') {
        fVar12 = -fVar12;
        fVar14 = -fVar14;
        fVar8 = -fVar8;
      }
    }
    else {
      pfVar7 = (float *)FRotator::Vector((longlong)param_1 + 0xd4,&local_a8);
      fVar12 = fVar9 * *pfVar7;
      fVar14 = fVar9 * pfVar7[1];
      fVar8 = fVar9 * pfVar7[2];
    }
  }
  uVar6 = uRam0000000146af381c;
  if (*(char *)((longlong)param_1 + 0xb9) != '\0') {
    fVar8 = 0.0;
  }
  uVar16 = _DAT_146af3810 & _DAT_146af3820;
  uVar17 = uRam0000000146af3814 & uRam0000000146af3824;
  uVar18 = uRam0000000146af3818 & uRam0000000146af3828;
  uVar19 = uRam0000000146af381c & uRam0000000146af382c;
  auVar11._4_4_ = fVar14;
  auVar11._0_4_ = fVar12;
  auVar11._8_4_ = fVar8;
  auVar11._12_4_ = 0;
  if ((param_2 != param_3) && (1e-08 < param_3)) {
    param_3 = param_2 / param_3;
    auVar11._0_4_ = fVar12 * param_3;
    auVar11._4_4_ = fVar14 * param_3;
    auVar11._8_4_ = fVar8 * param_3;
    auVar11._12_4_ = 0;
  }
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(uint *)((longlong)param_1 + 0x5c) = uVar6;
  *(undefined1 (*) [16])(param_1 + 0xc) = auVar11;
  *(uint *)(param_1 + 0xe) = uVar16;
  *(uint *)((longlong)param_1 + 0x74) = uVar17;
  *(uint *)(param_1 + 0xf) = uVar18;
  *(uint *)((longlong)param_1 + 0x7c) = uVar19;
  uVar5 = DAT_146531a98;
  uVar4 = DAT_146531a94;
  uVar3 = DAT_146531a90;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f800000;
  auVar2._4_4_ = uVar4;
  auVar2._0_4_ = uVar3;
  auVar2._8_4_ = uVar5;
  auVar2._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0xe) = auVar2;
                    /* WARNING: Could not recover jumptable at 0x00014245b523. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1,param_2 + *(float *)((longlong)param_1 + 0x24));
  return;
}



// FUNCTION 14245b530 FUN_14245b530 body=339 status=ok
// SIG undefined FUN_14245b530(void)

longlong *
FUN_14245b530(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined1 param_4,
             byte param_5)

{
  longlong lVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_38;
  int local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  plVar6 = (longlong *)0x0;
  uVar3 = (**(code **)(*param_1 + 0x148))();
  UWorld::GetPlayerControllerIterator(uVar3,&local_38);
LAB_14245b580:
  do {
    if ((local_30 < 0) || (*(int *)(local_38 + 8) <= local_30)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return plVar6;
    }
    plVar4 = (longlong *)FWeakObjectPtr::Get();
    if (plVar4 != (longlong *)0x0) {
      lVar1 = plVar4[0xa1];
      if (lVar1 != 0) {
        lVar5 = FUN_1429c30a0();
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          local_28 = *param_3;
          uStack_24 = param_3[1];
          uStack_20 = param_3[2];
          uStack_1c = param_3[3];
          FUN_1426ffc80(plVar4,param_2,2,param_4,&local_28);
          local_30 = local_30 + 1;
          goto LAB_14245b580;
        }
      }
      (**(code **)(*plVar4 + 0xe90))(plVar4,param_2,(param_5 ^ 1) * 2,param_4);
      plVar6 = plVar4;
    }
    local_30 = local_30 + 1;
  } while( true );
}



// FUNCTION 14245b690 FUN_14245b690 body=867 status=ok
// SIG undefined FUN_14245b690(void)

void FUN_14245b690(longlong *param_1,wchar_t **param_2,undefined1 param_3)

{
  wchar_t *_Src;
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  wchar_t **ppwVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  char local_res8;
  undefined8 local_res10;
  undefined1 local_res18;
  wchar_t *local_88;
  ulonglong uStack_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  longlong local_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_res18 = param_3;
  (**(code **)(*param_1 + 0x7e0))();
  if ((*(byte *)(param_1 + 0x9c) & 1) == 0) {
LAB_14245b6e9:
    local_res8 = '\0';
  }
  else {
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    local_res8 = '\x01';
    if (172800.0 < *(float *)(lVar3 + 0x790) || *(float *)(lVar3 + 0x790) == 172800.0)
    goto LAB_14245b6e9;
  }
  pwVar10 = (wchar_t *)0x0;
  local_88 = (wchar_t *)0x0;
  uVar8 = 0;
  uStack_80 = (ulonglong)(uint)uStack_80;
  uVar4 = FString::ToUpper(param_2,local_68);
  iVar2 = FUN_141592950(uVar4,L"?RESTART",1,0,0xffffffff);
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  pwVar11 = L"";
  iVar9 = 0;
  pwVar12 = pwVar10;
  if (iVar2 == -1) {
    iVar2 = FUN_141592950(param_2,&DAT_1450a0aac,1,0,0xffffffff);
    if (iVar2 == -1) {
      if (&local_88 == param_2) goto LAB_14245b888;
      iVar2 = *(int *)(param_2 + 1);
      _Src = *param_2;
      uStack_80 = CONCAT44(uStack_80._4_4_,iVar2);
      pwVar12 = (wchar_t *)0x0;
      if (iVar2 == 0) goto LAB_14245b888;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,iVar2,0);
      pwVar12 = local_88;
      _guard_xfg_dispatch_icall_nop(local_88,_Src,(longlong)iVar2 * 2);
      uVar8 = (uint)uStack_80;
    }
    else {
      iVar7 = iVar9;
      if (*(int *)(param_2 + 1) != 0) {
        pwVar11 = *param_2;
        iVar7 = *(int *)(param_2 + 1) + -1;
      }
      if ((-1 < iVar2) && (iVar9 = iVar7, iVar2 < iVar7)) {
        iVar9 = iVar2;
      }
      local_88 = (wchar_t *)0x0;
      uVar8 = iVar9 + 1;
      if (iVar9 == 0) {
        uVar8 = 0;
      }
      uStack_80 = (ulonglong)uVar8;
      if (0 < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
        pwVar12 = local_88;
        uVar8 = (uint)uStack_80;
        if (0 < (int)(uint)uStack_80) {
          wcsncpy(local_88,pwVar11,(longlong)iVar9);
          pwVar12[iVar9] = L'\0';
        }
      }
    }
  }
  else {
    lVar3 = UObjectBaseUtility::GetOutermost(param_1);
    local_res10 = *(undefined8 *)(lVar3 + 0x18);
    FName::ToString(&local_res10,local_68);
    ppwVar5 = (wchar_t **)FUN_1428d4fe0(&local_58,local_68);
    if (&local_88 != ppwVar5) {
      pwVar12 = *ppwVar5;
      *ppwVar5 = (wchar_t *)0x0;
      uVar8 = *(uint *)(ppwVar5 + 1);
      ppwVar5[1] = (wchar_t *)0x0;
    }
    if (CONCAT44(uStack_54,local_58) != 0) {
      FMemory::Free();
    }
    if (local_68[0] != 0) {
      FMemory::Free();
    }
  }
  pwVar11 = L"";
  if (uVar8 != 0) {
    pwVar11 = pwVar12;
  }
LAB_14245b888:
  lVar3 = *param_1;
  puVar6 = (undefined8 *)FName::FName(&local_res10,pwVar11,1);
  uVar4 = (**(code **)(lVar3 + 0x148))(param_1);
  uVar1 = UWorld::IsPlayInEditor(uVar4);
  UEngine::GetPackageGuid(&local_48,*puVar6,uVar1);
  local_70 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_70;
  pwVar11 = *param_2;
  local_78 = (void *)0x0;
  if (local_70 == 0) {
    local_6c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,local_70,0);
    _guard_xfg_dispatch_icall_nop(local_78,pwVar11,lVar3 * 2);
  }
  local_58 = local_48;
  uStack_54 = uStack_44;
  uStack_50 = uStack_40;
  uStack_4c = uStack_3c;
  (**(code **)(*param_1 + 0x8b8))(param_1,&local_78,&local_58,local_res8,local_res18);
  lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  puVar6 = (undefined8 *)(lVar3 + 0x7f0);
  FString::operator=(puVar6,param_2);
  iVar2 = FUN_142235230(param_1);
  if (local_res8 == '\0') {
    if (1 < iVar2 - 1U) {
      *(undefined4 *)(lVar3 + 0x800) = 0;
    }
  }
  else {
    local_88 = (wchar_t *)0x0;
    uStack_80 = 0;
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    UWorld::SeamlessTravel(lVar3,puVar6,local_res18,&local_58);
    if ((undefined *)*puVar6 != &DAT_1450a0b84) {
      *(undefined4 *)(lVar3 + 0x7f8) = 0;
      if (*(int *)(lVar3 + 0x7fc) != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar6,0);
        pwVar10 = (wchar_t *)(ulonglong)*(uint *)(lVar3 + 0x7f8);
      }
      *(int *)(lVar3 + 0x7f8) = (int)pwVar10;
      if (*(int *)(lVar3 + 0x7fc) < (int)pwVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar6,pwVar10);
      }
    }
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free();
  }
  if (pwVar12 != (wchar_t *)0x0) {
    FMemory::Free(pwVar12);
  }
  return;
}



// FUNCTION 14245ba20 ProcessToggleFreezeStreamingCommand body=54 status=ok
// SIG undefined ProcessToggleFreezeStreamingCommand(void)

void UGameEngine::ProcessToggleFreezeStreamingCommand(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(char *)(param_2 + 0x700) == '\0') {
    FUN_1416f7d70(0xffffffff);
    bVar1 = *(char *)(param_2 + 0x700) == '\0';
  }
  *(bool *)(param_2 + 0x700) = bVar1;
  return;
}



// FUNCTION 14245ba60 FUN_14245ba60 body=397 status=ok
// SIG undefined FUN_14245ba60(void)

undefined8
FUN_14245ba60(longlong *param_1,undefined8 *param_2,float *param_3,char param_4,char param_5)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 local_1c8 [208];
  undefined4 local_f8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [64];
  undefined1 local_48 [64];
  
  if (((param_1 != (longlong *)0x0) &&
      (plVar2 = (longlong *)FUN_14270bb10(), plVar2 != (longlong *)0x0)) && (plVar2[0xe] != 0)) {
    local_f8 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    cVar1 = (**(code **)(*plVar2 + 0x2d0))(plVar2,*(undefined8 *)(plVar2[0xe] + 0xb0),0,local_1c8);
    if (cVar1 != '\0') {
      if (param_5 == '\0') {
        puVar3 = (undefined8 *)
                 FSceneViewProjectionData::ComputeViewProjectionMatrix(local_1c8,local_48);
      }
      else {
        puVar3 = (undefined8 *)FUN_1411d6fd0(local_1c8,local_88);
      }
      local_208 = *puVar3;
      uStack_200 = puVar3[1];
      local_1f8 = puVar3[2];
      uStack_1f0 = puVar3[3];
      local_1e8 = puVar3[4];
      uStack_1e0 = puVar3[5];
      local_1d8 = *(undefined4 *)(puVar3 + 6);
      uStack_1d4 = *(undefined4 *)((longlong)puVar3 + 0x34);
      uStack_1d0 = *(undefined4 *)(puVar3 + 7);
      uStack_1cc = *(undefined4 *)((longlong)puVar3 + 0x3c);
      cVar1 = FSceneView::ProjectWorldToScreen(param_2,&local_98,&local_208,param_3);
      if (param_4 != '\0') {
        *param_3 = *param_3 - (float)(int)local_98;
        param_3[1] = param_3[1] - (float)(int)((ulonglong)local_98 >> 0x20);
      }
      if (cVar1 == '\0') {
        return 0;
      }
      local_210 = *(undefined4 *)(param_2 + 1);
      local_218 = *param_2;
      cVar1 = (**(code **)(*param_1 + 3000))(param_1,&local_218,param_3,param_4);
      if (cVar1 == '\0') {
        return 0;
      }
      return 1;
    }
  }
  *(undefined8 *)param_3 = DAT_1468b5d88;
  return 0;
}



// FUNCTION 14245bbf0 FUN_14245bbf0 body=125 status=ok
// SIG undefined FUN_14245bbf0(void)

void FUN_14245bbf0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  if ((((param_2 != 0) && (DAT_146b17150 != (longlong *)0x0)) &&
      (cVar1 = (**(code **)(*DAT_146b17150 + 0x388))(), cVar1 != '\0')) &&
     (((lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1), lVar2 != 0 &&
       ((*(uint *)(lVar2 + 0x830) & 0x4000) != 0)) &&
      (lVar2 = UWorld::GetAudioDevice(lVar2), lVar2 != 0)))) {
    FUN_1422d3b40(lVar2,param_2,0,0);
  }
  return;
}



// FUNCTION 14245bc70 QuerySupportedSockets body=75 status=ok
// SIG undefined QuerySupportedSockets(void)

void USpringArmComponent::QuerySupportedSockets(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
  }
  puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_2);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = DAT_146af3910;
    *(undefined1 *)(puVar2 + 1) = 2;
  }
  return;
}



// FUNCTION 14245bcc0 FUN_14245bcc0 body=515 status=ok
// SIG undefined FUN_14245bcc0(void)

void FUN_14245bcc0(int *param_1,longlong *param_2)

{
  int *piVar1;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FEngineVersion::Empty(param_1 + 4);
  param_1[0xc] = 0;
  FUN_14168cb90(param_1 + 0xe);
  param_1[0x14] = 0;
  if (param_1[0x15] != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x12,0);
  }
  piVar1 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1,4);
    }
  }
  else {
    *param_1 = *piVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if (*param_1 == 0x53415647) {
    piVar1 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,param_1 + 1,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,param_1 + 1,4);
      }
    }
    else {
      param_1[1] = *piVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    piVar1 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,param_1 + 2,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,param_1 + 2,4);
      }
    }
    else {
      param_1[2] = *piVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    operator<<(param_2,param_1 + 4);
    UGameUserSettings::SetPostProcessingQuality(param_2,param_1[2]);
    FArchive::SetEngineVer(param_2,param_1 + 4);
    if (1 < param_1[1]) {
      piVar1 = *(int **)param_2[1];
      if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xc,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,param_1 + 0xc,4);
        }
      }
      else {
        param_1[0xc] = *piVar1;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      FCustomVersionContainer::Serialize(param_1 + 0xe,param_2,param_1[0xc]);
      FUN_141695050(param_2,param_1 + 0xe);
    }
  }
  else {
    param_2[0x12] = 0;
    param_1[1] = 1;
  }
  FUN_14158ce90(param_2,param_1 + 0x12);
  return;
}



// FUNCTION 14245bed0 FUN_14245bed0 body=47 status=ok
// SIG undefined FUN_14245bed0(void)

ulonglong FUN_14245bed0(longlong param_1)

{
  uint uVar1;
  ulonglong in_RAX;
  
  if (((*(byte *)(param_1 + 0x508) & 1) == 0) &&
     (in_RAX = DAT_146af3980, *(ulonglong *)(param_1 + 0x500) == DAT_146af3980)) {
    uVar1 = *(int *)(param_1 + 0x514) + *(int *)(param_1 + 0x510);
    in_RAX = (ulonglong)uVar1;
    if (0 < (int)uVar1) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14245bf00 FUN_14245bf00 body=101 status=ok
// SIG undefined FUN_14245bf00(void)

undefined8 FUN_14245bf00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_2,1);
  if (lVar1 == 0) {
    puVar2 = (undefined8 *)&DAT_1468b5ca8;
  }
  else {
    puVar2 = (undefined8 *)(lVar1 + 0x7bc);
  }
  local_18 = *puVar2;
  local_10 = *(undefined4 *)(puVar2 + 1);
  FRepMovement::RebaseOntoZeroOrigin(param_1,param_3,&local_18);
  return param_1;
}



// FUNCTION 14245bf70 FUN_14245bf70 body=101 status=ok
// SIG undefined FUN_14245bf70(void)

undefined8 FUN_14245bf70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_2,1);
  if (lVar1 == 0) {
    puVar2 = (undefined8 *)&DAT_1468b5ca8;
  }
  else {
    puVar2 = (undefined8 *)(lVar1 + 0x7bc);
  }
  local_18 = *puVar2;
  local_10 = *(undefined4 *)(puVar2 + 1);
  FRepMovement::RebaseOntoLocalOrigin(param_1,param_3,&local_18);
  return param_1;
}



// FUNCTION 14245bfe0 ReceivedNetworkEncryptionAck body=259 status=ok
// SIG undefined ReceivedNetworkEncryptionAck(void)

void UGameInstance::ReceivedNetworkEncryptionAck(undefined8 param_1,longlong *param_2)

{
  void *_Src;
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  void *local_48;
  ulonglong local_40;
  undefined1 local_38 [8];
  void *local_30;
  int local_28;
  undefined4 local_24;
  longlong local_20;
  undefined8 local_18;
  
  local_40 = 0x2d;
  plVar2 = (longlong *)0x0;
  local_48 = (void *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  _Src = local_48;
  FGenericPlatformString::Memcpy(local_48,L"ReceivedNetworkEncryptionAck not implemented",0x5a);
  lVar3 = (longlong)(int)local_40;
  local_38[0] = 0;
  local_30 = (void *)0x0;
  local_28 = (int)local_40;
  if ((int)local_40 == 0) {
    local_24 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_30,local_40 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_30,_Src,lVar3 * 2);
  }
  local_20 = 0;
  local_18 = 0;
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  if (((int)param_2[1] != 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)*param_2 + 0x18))();
    if (cVar1 != '\0') {
      if ((int)param_2[1] != 0) {
        plVar2 = (longlong *)*param_2;
      }
      (**(code **)(*plVar2 + 0x40))(plVar2,local_38);
    }
  }
  if (local_20 != 0) {
    FMemory::Free();
  }
  if (local_30 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14245c0f0 ReceivedNetworkEncryptionToken body=259 status=ok
// SIG undefined ReceivedNetworkEncryptionToken(void)

void UGameInstance::ReceivedNetworkEncryptionToken
               (undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  void *_Src;
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  void *local_48;
  ulonglong local_40;
  undefined1 local_38 [8];
  void *local_30;
  int local_28;
  undefined4 local_24;
  longlong local_20;
  undefined8 local_18;
  
  plVar2 = (longlong *)0x0;
  local_40 = 0x2f;
  local_48 = (void *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  _Src = local_48;
  FGenericPlatformString::Memcpy(local_48,L"ReceivedNetworkEncryptionToken not implemented",0x5e);
  lVar3 = (longlong)(int)local_40;
  local_38[0] = 0;
  local_30 = (void *)0x0;
  local_28 = (int)local_40;
  if ((int)local_40 == 0) {
    local_24 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_30,local_40 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_30,_Src,lVar3 * 2);
  }
  local_20 = 0;
  local_18 = 0;
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)*param_3 + 0x18))();
    if (cVar1 != '\0') {
      if ((int)param_3[1] != 0) {
        plVar2 = (longlong *)*param_3;
      }
      (**(code **)(*plVar2 + 0x40))(plVar2,local_38);
    }
  }
  if (local_20 != 0) {
    FMemory::Free();
  }
  if (local_30 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14245c200 FUN_14245c200 body=137 status=ok
// SIG undefined FUN_14245c200(void)

void FUN_14245c200(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = DAT_1468e3590;
  uVar3 = FUN_14168db40();
  FCsvProfiler::BeginStat(uVar3,"RedrawViewports",uVar2);
  if (*(longlong **)(param_1 + 0x7b0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x7b0) + 0x300))();
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x7b0) + 0xb0);
    if (lVar1 != 0) {
      FUN_14286d940(lVar1,param_2);
    }
  }
  uVar3 = FUN_14168db40();
  FCsvProfiler::EndStat(uVar3,"RedrawViewports",uVar2);
  return;
}



// FUNCTION 14245c290 RegisterExternalTexture body=654 status=ok
// SIG undefined RegisterExternalTexture(void)

void FExternalTextureRegistry::RegisterExternalTexture
               (longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
               undefined8 *param_5,undefined8 *param_6)

{
  uint *puVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar2;
  bool bVar3;
  BOOL BVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  int local_d8;
  uint uStack_d4;
  uint uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  int iStack_b0;
  uint uStack_ac;
  uint *local_a8;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  longlong *local_90;
  longlong lStack_88;
  uint *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  longlong **local_58;
  uint local_40;
  uint uStack_3c;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xa0);
  BVar4 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar4 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  local_90 = (longlong *)*param_3;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_90 + 1) = (int)local_90[1] + 1;
    UNLOCK();
  }
  lStack_88 = *param_4;
  if (lStack_88 != 0) {
    LOCK();
    *(int *)(lStack_88 + 8) = *(int *)(lStack_88 + 8) + 1;
    UNLOCK();
  }
  puStack_80 = (uint *)*param_5;
  uStack_78 = param_5[1];
  uStack_70 = *param_6;
  uStack_68 = *(undefined4 *)(param_6 + 1);
  uStack_64 = *(undefined4 *)((longlong)param_6 + 0xc);
  local_58 = &local_90;
  local_60 = param_2;
  FUN_14243b8c0(param_1,local_res8,&local_60,0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&lStack_88);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_90);
  uStack_d4 = 1;
  plVar10 = (longlong *)(param_1 + 0x50);
  uVar2 = *(uint *)(param_1 + 0x78);
  puVar1 = (uint *)(param_1 + 0x60);
  local_d8 = 0;
  uStack_c4 = 0;
  iStack_c0 = 0;
  if (uVar2 != 0) {
    puVar9 = *(uint **)(param_1 + 0x70);
    if (*(uint **)(param_1 + 0x70) == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar8 = *puVar9;
    iStack_c0 = 0;
    local_d8 = 0;
    while (uVar8 == 0) {
      lVar7 = (longlong)local_d8;
      iStack_c0 = iStack_c0 + 0x20;
      iVar5 = local_d8 + 1;
      bVar3 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_d8;
      local_d8 = iVar5;
      if (bVar3) goto LAB_14245c3ee;
      uVar8 = puVar9[lVar7 + 1];
    }
    uStack_d4 = -uVar8 & uVar8;
    iVar5 = 0x1f;
    if (uStack_d4 != 0) {
      for (; uStack_d4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_d4 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_c4 = (iStack_c0 - iVar5) + 0x1f;
    if ((int)uVar2 < (int)uStack_c4) {
LAB_14245c3ee:
      uStack_c4 = uVar2;
    }
  }
  uStack_3c = *(uint *)(param_1 + 0x78);
  lStack_88 = CONCAT44(uStack_d4,local_d8);
  uStack_a0 = 0xffffffff;
  uStack_9c = uStack_c4;
  local_98 = CONCAT44(uStack_bc,iStack_c0);
  local_40 = -1 << ((byte)uStack_3c & 0x1f);
  uVar8 = uStack_3c & 0xffffffe0;
  iStack_b0 = local_d8;
  uStack_ac = uStack_d4;
  local_a8 = puVar1;
  local_90 = plVar10;
  puStack_80 = puVar1;
  uStack_70 = local_98;
  uStack_78._0_4_ = uStack_a0;
  uStack_78._4_4_ = uStack_9c;
  uVar6 = uStack_3c;
  if (uStack_3c != uVar2) {
    puVar9 = *(uint **)(param_1 + 0x70);
    if (*(uint **)(param_1 + 0x70) == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar6 = puVar9[(int)uStack_3c >> 5] & local_40;
    iVar5 = (int)uStack_3c >> 5;
    while (uVar6 == 0) {
      uVar8 = uVar8 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_14245c4b2;
      uVar6 = puVar9[(longlong)iVar5 + 1];
      local_40 = 0xffffffff;
      iVar5 = iVar5 + 1;
    }
    uVar6 = -uVar6 & uVar6;
    iVar5 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar6 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_3c = (uVar8 - iVar5) + 0x1f;
    uVar6 = uStack_3c;
    if ((int)uVar2 < (int)uStack_3c) {
LAB_14245c4b2:
      uStack_3c = uVar2;
      uVar6 = uVar2;
    }
  }
  while ((uStack_9c != uVar6 || (local_a8 != puVar1))) {
    FUN_142588520(*(undefined8 *)(*plVar10 + (longlong)(int)uStack_9c * 0x10));
    uStack_a0 = uStack_a0 & ~uStack_ac;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_b0);
  }
                    /* WARNING: Could not recover jumptable at 0x00014245c517. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 14245c520 RegisterReferencedObject body=28 status=ok
// SIG undefined RegisterReferencedObject(void)

void UGameInstance::RegisterReferencedObject(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
  AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x50,local_res10);
  return;
}



// FUNCTION 14245c540 Rehash body=535 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FGuid,FExternalTextureRegistry::FExternalTextureEntry>,TDefaultMapHashableKeyFuncs<FGuid,FExternalTextureRegistry::FExternalTextureEntry,0>,FDefaultSetAllocator>
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
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar6 = FMemory::Realloc(param_1[8],0,0);
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
      local_58 = 0;
      iStack_40 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_14245c67f;
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
LAB_14245c67f:
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
        iVar3 = iStack_1c;
        lVar6 = *param_1 + (longlong)iStack_1c * 0x48;
        uVar5 = FCrc::MemCrc_DEPRECATED(lVar6,0x10);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x44) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x40) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 14245c760 RemapChar body=268 status=ok
// SIG undefined RemapChar(void)

undefined2 UFont::RemapChar(longlong param_1,undefined2 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 local_res8 [4];
  ushort local_res10 [4];
  
  local_res8[0] = param_2;
  FGenericPlatformString::Memcpy(local_res10,local_res8,2);
  if (*(int *)(param_1 + 0x58) == 0) {
    if ((((int)(uint)local_res10[0] < *(int *)(param_1 + 0x120)) &&
        ((int)(uint)local_res10[0] < *(int *)(param_1 + 0x40))) &&
       ((*(int *)(*(longlong *)(param_1 + 0x38) + 0xc + (ulonglong)local_res10[0] * 0x18) != 0 ||
        (local_res10[0] < 0x20)))) {
      return param_2;
    }
  }
  else {
    if (*(int *)(param_1 + 0x188) != *(int *)(param_1 + 0x1b4)) {
      lVar2 = *(longlong *)(param_1 + 0x1c0);
      if (*(longlong *)(param_1 + 0x1c0) == 0) {
        lVar2 = param_1 + 0x1b8;
      }
      iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 0x1c8) - 1U & (ulonglong)local_res10[0]
                               ) * 4);
      if (iVar1 != -1) {
        do {
          puVar4 = (undefined2 *)(*(longlong *)(param_1 + 0x180) + (longlong)iVar1 * 0xc);
          if (*(ushort *)(*(longlong *)(param_1 + 0x180) + (longlong)iVar1 * 0xc) == local_res10[0])
          {
            if (iVar1 != -1) goto LAB_14245c804;
            break;
          }
          iVar1 = *(int *)(puVar4 + 2);
        } while (iVar1 != -1);
      }
    }
    puVar4 = (undefined2 *)0x0;
LAB_14245c804:
    puVar3 = puVar4 + 1;
    if (puVar4 == (undefined2 *)0x0) {
      puVar3 = (undefined2 *)0x0;
    }
    if (puVar3 != (undefined2 *)0x0) {
      return *puVar3;
    }
  }
  return 0x7f;
}



// FUNCTION 14245c870 Remove body=398 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FGuid,FExternalTextureRegistry::FExternalTextureEntry>,TDefaultMapHashableKeyFuncs<FGuid,FExternalTextureRegistry::FExternalTextureEntry,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,int *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar6 = FCrc::MemCrc_DEPRECATED(param_2,0x10);
  plVar8 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar8 = param_1 + 7;
  }
  uVar9 = (longlong)(int)param_1[9] - 1;
  iVar6 = *(int *)((longlong)plVar8 + ((longlong)iVar6 & uVar9) * 4);
  if (iVar6 == -1) {
    return 0;
  }
  lVar5 = *param_1;
  while( true ) {
    lVar7 = (longlong)iVar6;
    lVar3 = lVar7 * 0x48;
    if (((*(int *)(lVar3 + 4 + lVar5) == param_2[1] && *(int *)(lVar3 + 8 + lVar5) == param_2[2]) &&
        *(int *)(lVar3 + 0xc + lVar5) == param_2[3]) && *param_2 == *(int *)(lVar3 + lVar5)) break;
    iVar6 = *(int *)(lVar3 + 0x40 + lVar5);
    if (iVar6 == -1) {
      return 0;
    }
  }
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar9 = (longlong)*(int *)(lVar5 + 0x44 + lVar7 * 0x48) & uVar9;
    puVar2 = (undefined4 *)((longlong)plVar8 + uVar9 * 4);
    iVar4 = *(int *)((longlong)plVar8 + uVar9 * 4);
    while (iVar4 != -1) {
      if (iVar4 == iVar6) {
        *puVar2 = *(undefined4 *)(lVar5 + lVar7 * 0x48 + 0x40);
        break;
      }
      lVar1 = (longlong)iVar4 * 9 + 8;
      puVar2 = (undefined4 *)(lVar5 + lVar1 * 8);
      iVar4 = *(int *)(lVar5 + lVar1 * 8);
    }
  }
  lVar5 = *param_1;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar5 + lVar3 + 0x18);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(lVar5 + lVar3 + 0x10);
  TSparseArray<TSetElement<TTuple<FUniqueNetIdNull,TSharedRef<FUserOnlineAccountNull,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar6,1);
  return 1;
}



// FUNCTION 14245ca00 FUN_14245ca00 body=265 status=ok
// SIG undefined FUN_14245ca00(void)

void FUN_14245ca00(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  
  if (param_3 != 0) {
    plVar5 = (longlong *)(*param_1 + (longlong)param_2 * 0x10);
    iVar6 = param_3;
    do {
      if ((int)plVar5[1] == 0) {
        plVar3 = (longlong *)*plVar5;
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)*plVar5;
        plVar2 = plVar3;
      }
      if (plVar2 == (longlong *)0x0) {
        if (((int)plVar5[1] != 0) && (plVar3 != (longlong *)0x0)) {
          lVar1 = *plVar3;
          goto LAB_14245ca75;
        }
      }
      else {
        lVar1 = *plVar2;
        plVar3 = plVar2;
LAB_14245ca75:
        (**(code **)(lVar1 + 0x28))(plVar3,0);
        if (*plVar5 != 0) {
          lVar1 = FMemory::Realloc(*plVar5,0,0);
          *plVar5 = lVar1;
        }
        *(undefined4 *)(plVar5 + 1) = 0;
      }
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = (int)param_1[1];
    iVar4 = (iVar6 - param_2) - param_3;
    if (iVar4 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x10),
                 (void *)((longlong)(param_2 + param_3) * 0x10 + *param_1),(longlong)iVar4 << 4);
      iVar6 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar6 - param_3;
    if (param_4 != '\0') {
      TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 14245cb10 FUN_14245cb10 body=294 status=ok
// SIG undefined FUN_14245cb10(void)

void FUN_14245cb10(longlong param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if (param_3 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar6 = param_1;
    }
    plVar7 = (longlong *)(lVar6 + 8 + (longlong)param_2 * 0x10);
    iVar5 = param_3;
    do {
      plVar3 = (longlong *)*plVar7;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar3)(plVar3);
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
      plVar7 = plVar7 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar5 = *(int *)(param_1 + 0x88);
    iVar4 = (iVar5 - param_2) - param_3;
    if (iVar4 != 0) {
      lVar6 = *(longlong *)(param_1 + 0x80);
      if (*(longlong *)(param_1 + 0x80) == 0) {
        lVar6 = param_1;
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar6 + (longlong)param_2 * 0x10),
                 (void *)((longlong)(param_2 + param_3) * 0x10 + lVar6),(longlong)iVar4 << 4);
      iVar5 = *(int *)(param_1 + 0x88);
    }
    *(int *)(param_1 + 0x88) = iVar5 - param_3;
    if (param_4 != '\0') {
      TArray<FObjectInitializer::FSubobjectsToInit::FSubobjectInit,TInlineAllocator<8,FDefaultAllocator>_>
      ::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 14245cc40 FUN_14245cc40 body=293 status=ok
// SIG undefined FUN_14245cc40(void)

undefined8 FUN_14245cc40(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  if ((longlong *)param_2[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_2[6] + 0xdb0))();
    if (*(char *)(param_2[6] + 0x128) == '\x03') {
      FUN_142227350(param_2[6],0,1);
    }
    else {
      FUN_1429e1d10();
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x38);
  plVar6 = plVar4;
  do {
    if (plVar6 == plVar4 + *(int *)(param_1 + 0x40)) {
LAB_14245cd44:
      param_2[0xe] = 0;
      return 1;
    }
    if ((longlong *)*plVar6 == param_2) {
      uVar7 = (longlong)plVar6 - (longlong)plVar4 >> 3;
      iVar5 = (int)uVar7;
      if (iVar5 != -1) {
        (**(code **)(*param_2 + 0x2a0))(param_2);
        iVar3 = *(int *)(param_1 + 0x40);
        iVar2 = (iVar3 - iVar5) + -1;
        if (iVar2 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar5 * 8),
                     (void *)(*(longlong *)(param_1 + 0x38) + (longlong)(iVar5 + 1) * 8),
                     (longlong)iVar2 << 3);
          iVar3 = *(int *)(param_1 + 0x40);
        }
        *(int *)(param_1 + 0x40) = iVar3 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x38);
        lVar1 = *(longlong *)(param_1 + 0x30);
        if ((lVar1 != 0) && (*(longlong **)(lVar1 + 0x238) != (longlong *)0x0)) {
          plVar4 = *(longlong **)(lVar1 + 0x238);
          if (lVar1 == 0) {
            plVar4 = (longlong *)0x0;
          }
          (**(code **)(*plVar4 + 0x338))(plVar4,uVar7 & 0xffffffff,param_2);
        }
      }
      goto LAB_14245cd44;
    }
    plVar6 = plVar6 + 1;
  } while( true );
}



// FUNCTION 14245cd70 RemoveMaterialRenderProxyReference body=92 status=ok
// SIG undefined RemoveMaterialRenderProxyReference(void)

void FExternalTextureRegistry::RemoveMaterialRenderProxyReference
               (longlong param_1,undefined8 param_2)

{
  BOOL BVar1;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  }
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove(param_1 + 0x50,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014245cdc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  return;
}



// FUNCTION 14245cdd0 FUN_14245cdd0 body=125 status=ok
// SIG undefined FUN_14245cdd0(void)

void FUN_14245cdd0(longlong *param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (((param_1 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_1 + 0x148))(), lVar2 != 0)) &&
     (lVar3 = FUN_14270bb10(param_1), lVar3 != 0)) {
    if (param_2 == '\0') {
      lVar4 = 0;
    }
    else {
      lVar4 = param_1[0x91];
    }
    cVar1 = FUN_14245cc40(*(undefined8 *)(lVar2 + 400),lVar3);
    if ((cVar1 != '\0') && (lVar4 != 0)) {
      FUN_142227350(lVar4,0,1);
    }
  }
  return;
}



// FUNCTION 14245ce50 FUN_14245ce50 body=117 status=ok
// SIG undefined FUN_14245ce50(void)

void FUN_14245ce50(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    cVar1 = FUN_14293c170();
    if (cVar1 != '\0') {
      *(int *)((longlong)param_1 + 0x50c) = *(int *)((longlong)param_1 + 0x50c) + -1;
      return;
    }
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    cVar1 = UWorld::IsInSeamlessTravel(uVar2);
    if (cVar1 == '\0') {
      cVar1 = FUN_14270dfe0(param_2);
      if (cVar1 == '\0') {
        *(int *)((longlong)param_1 + 0x51c) = *(int *)((longlong)param_1 + 0x51c) + -1;
        return;
      }
    }
    *(int *)(param_1 + 0xa2) = (int)param_1[0xa2] + -1;
  }
  return;
}



// FUNCTION 14245ced0 FUN_14245ced0 body=720 status=ok
// SIG undefined FUN_14245ced0(void)

void FUN_14245ced0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  bool bVar3;
  ulonglong uVar4;
  byte bVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  undefined1 local_res20 [8];
  undefined1 local_58 [8];
  longlong local_50;
  undefined8 local_48;
  
  lVar7 = (**(code **)(*param_1 + 0x148))();
  lVar8 = UWorld::GetWorldSettings(lVar7,0,1);
  if ((*(byte *)(lVar8 + 0x460) & 0x10) == 0) {
    lVar8 = *(longlong *)(param_2 + 0x508);
    if (lVar8 != 0) {
      lVar9 = ULocalPlayer::GetPrivateStaticClass();
      lVar8 = *(longlong *)(lVar8 + 0x10);
      if ((*(int *)(lVar8 + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar8 + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
          lVar9 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return;
      }
    }
    lVar8 = *(longlong *)(param_2 + 0x508);
    if (lVar8 != 0) {
      lVar9 = UIpConnection::GetPrivateStaticClass();
      lVar8 = *(longlong *)(lVar8 + 0x10);
      if ((*(int *)(lVar8 + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar8 + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
          lVar9 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return;
      }
    }
    puVar12 = (undefined8 *)0x0;
    if (*(longlong *)(lVar7 + 0x818) != 0) {
      FUN_1429e0cf0(param_2,*(undefined8 *)(lVar7 + 0x818),1);
      FUN_1429e0890(param_2);
    }
    if (0 < *(int *)(lVar7 + 0x90)) {
      plVar16 = *(longlong **)(lVar7 + 0x88);
      local_50 = 0;
      local_48 = 0;
      puVar15 = (undefined8 *)((longlong)*(int *)(lVar7 + 0x90) & 0x1fffffffffffffff);
      if (plVar16 + *(int *)(lVar7 + 0x90) < plVar16) {
        puVar15 = puVar12;
      }
      puVar17 = puVar12;
      if (puVar15 != (undefined8 *)0x0) {
        do {
          plVar1 = (longlong *)*plVar16;
          if (plVar1 != (longlong *)0x0) {
            bVar5 = (**(code **)(*plVar1 + 0x288))(plVar1);
            bVar6 = (**(code **)(*plVar1 + 0x280))(plVar1);
            uVar4 = local_48;
            lVar8 = (longlong)(int)local_48;
            iVar10 = (int)local_48 + 1;
            local_48 = CONCAT44(local_48._4_4_,iVar10);
            if (local_48._4_4_ < iVar10) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_50,uVar4 & 0xffffffff);
            }
            puVar13 = (undefined8 *)(lVar8 * 0x10 + local_50);
            puVar14 = puVar12;
            if (puVar13 != (undefined8 *)0x0) {
              puVar13[1] = 0;
              *puVar13 = 0;
              puVar14 = puVar13;
            }
            puVar13 = (undefined8 *)ULevelStreaming::GetWorldAssetPackageFName(plVar1,local_res20);
            puVar13 = (undefined8 *)APlayerController::NetworkRemapPath(param_2,local_58,*puVar13,0)
            ;
            uVar2 = *puVar13;
            *(uint *)((longlong)puVar14 + 0xc) = *(uint *)((longlong)puVar14 + 0xc) & 0xfffffffc;
            *puVar14 = uVar2;
            *(uint *)((longlong)puVar14 + 0xc) =
                 *(uint *)((longlong)puVar14 + 0xc) | (bVar5 & 1) * 2 | bVar6 & 1;
            *(uint *)((longlong)puVar14 + 0xc) =
                 *(uint *)((longlong)puVar14 + 0xc) ^
                 ((uint)(*(byte *)((longlong)plVar1 + 0xb6) >> 4) ^
                 *(uint *)((longlong)puVar14 + 0xc)) & 4;
            *(int *)(puVar14 + 1) = (int)plVar1[0x16];
          }
          plVar16 = plVar16 + 1;
          puVar17 = (undefined8 *)((longlong)puVar17 + 1);
        } while (puVar17 != puVar15);
      }
      FUN_1429e14f0(param_2,&local_50);
      FUN_1429e0950(param_2);
      if (local_50 != 0) {
        FMemory::Free();
      }
    }
    iVar10 = *(int *)(lVar7 + 0x810);
    if (0 < iVar10) {
      do {
        iVar11 = (int)puVar12;
        FUN_1429e0cf0(param_2,*(undefined8 *)(*(longlong *)(lVar7 + 0x808) + (longlong)iVar11 * 8),
                      iVar11 == 0,iVar11 == iVar10 + -1);
        iVar10 = *(int *)(lVar7 + 0x810);
        puVar12 = (undefined8 *)(ulonglong)(iVar11 + 1U);
      } while ((int)(iVar11 + 1U) < iVar10);
    }
  }
  return;
}



// FUNCTION 14245d1a0 FUN_14245d1a0 body=306 status=ok
// SIG undefined FUN_14245d1a0(void)

void FUN_14245d1a0(undefined8 *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  plVar5 = (longlong *)*param_1;
  iVar6 = *(int *)(param_1 + 1);
  if (iVar1 < param_2) {
    if (iVar6 != 0) {
      do {
        if ((int)plVar5[1] == 0) {
          plVar4 = (longlong *)*plVar5;
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar4 = (longlong *)*plVar5;
          plVar3 = plVar4;
        }
        if (plVar3 == (longlong *)0x0) {
          if (((int)plVar5[1] != 0) && (plVar4 != (longlong *)0x0)) {
            lVar2 = *plVar4;
            goto LAB_14245d26e;
          }
        }
        else {
          lVar2 = *plVar3;
          plVar4 = plVar3;
LAB_14245d26e:
          (**(code **)(lVar2 + 0x28))(plVar4,0);
          if (*plVar5 != 0) {
            lVar2 = FMemory::Realloc(*plVar5,0,0);
            *plVar5 = lVar2;
          }
          *(undefined4 *)(plVar5 + 1) = 0;
        }
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 2;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      iVar1 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar1 != param_2) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1,param_2);
    }
  }
  else {
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      if ((int)plVar5[1] == 0) {
        plVar4 = (longlong *)*plVar5;
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar4 = (longlong *)*plVar5;
        plVar3 = plVar4;
      }
      if (plVar3 == (longlong *)0x0) {
        if (((int)plVar5[1] != 0) && (plVar4 != (longlong *)0x0)) {
          lVar2 = *plVar4;
          goto LAB_14245d200;
        }
      }
      else {
        lVar2 = *plVar3;
        plVar4 = plVar3;
LAB_14245d200:
        (**(code **)(lVar2 + 0x28))(plVar4,0);
        if (*plVar5 != 0) {
          lVar2 = FMemory::Realloc(*plVar5,0,0);
          *plVar5 = lVar2;
        }
        *(undefined4 *)(plVar5 + 1) = 0;
      }
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 14245d2e0 FUN_14245d2e0 body=32 status=ok
// SIG undefined FUN_14245d2e0(void)

void FUN_14245d2e0(longlong *param_1)

{
  thunk_FUN_1428dfda0();
                    /* WARNING: Could not recover jumptable at 0x00014245d2f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x750))(param_1);
  return;
}



// FUNCTION 14245d300 FUN_14245d300 body=1139 status=ok
// SIG undefined FUN_14245d300(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14245d300(longlong *param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong *local_b0;
  int local_a8;
  undefined8 local_a0;
  uint local_98 [2];
  longlong local_90;
  longlong local_88;
  int local_80;
  int local_78;
  char local_74;
  int local_70;
  longlong *local_68;
  longlong local_60;
  int local_58;
  undefined8 local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_b8 = param_1;
  uVar8 = (**(code **)(*param_1 + 0x148))();
  FUN_1428cb820(uVar8,&local_b0);
  while( true ) {
    if ((local_a8 < 0) || ((int)local_b0[1] <= local_a8)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) break;
    plVar9 = (longlong *)FWeakObjectPtr::Get(*local_b0 + (longlong)local_a8 * 8);
    if (plVar9 != (longlong *)0x0) {
      lVar10 = FUN_1429e18b0();
      if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
          lVar10 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        FUN_1429e0df0(plVar9);
      }
    }
    (**(code **)(*plVar9 + 0x5e8))();
    local_a8 = local_a8 + 1;
  }
  plVar9 = (longlong *)(**(code **)(*param_1 + 0x148))(param_1);
  local_a0 = FUN_1428dfc70();
  local_98[0] = 5;
  local_40 = '\0';
  local_b0 = plVar9;
  FUN_14044bc80(&local_90,&local_b0,&local_a0);
  FUN_14045a130(local_98);
  iVar18 = local_78;
  plVar9 = local_68;
joined_r0x00014245d406:
  local_78 = iVar18;
  local_68 = plVar9;
  if (local_74 == '\0') {
    if (plVar9 != (longlong *)0x0) {
      iVar18 = *(int *)((longlong)plVar9 + 0xc);
      if (iVar18 < (int)DAT_1469e91c4) {
        uVar14 = iVar18 >> 0x1f & 0xffff;
        uVar7 = iVar18 + uVar14;
        lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                 (longlong)(int)((uVar7 & 0xffff) - uVar14) * 0x18;
      }
      else {
        lVar10 = 0;
      }
      if (((*(uint *)(lVar10 + 8) >> 0x1d & 1) == 0) && (plVar9 != param_1)) {
        lVar10 = FUN_14291fb80();
        if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
            != lVar10 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((!bVar3) && (cVar6 = FUN_14293c3f0(param_1,plVar9), cVar6 != '\0')) {
          (**(code **)(*plVar9 + 0x5e8))(plVar9);
        }
      }
    }
    lVar10 = local_90;
    iVar18 = local_78 + 1;
    if (iVar18 < local_58 + local_80) {
      lVar17 = (longlong)iVar18 * 8;
      iVar16 = local_58;
      iVar15 = local_80;
      do {
        if (iVar18 < iVar15) {
          plVar9 = *(longlong **)(lVar17 + local_88);
        }
        else {
          plVar9 = *(longlong **)(local_60 + (longlong)(iVar18 - iVar15) * 8);
        }
        local_70 = local_70 + 1;
        if ((plVar9 != (longlong *)0x0) &&
           (lVar11 = AActor::GetLevel(plVar9), iVar16 = local_58, iVar15 = local_80, lVar11 != 0)) {
          if ((local_98[0] & 1) != 0) {
            iVar1 = *(int *)((longlong)plVar9 + 0xc);
            if (iVar1 < (int)DAT_1469e91c4) {
              uVar14 = iVar1 >> 0x1f & 0xffff;
              uVar7 = iVar1 + uVar14;
              lVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                       (longlong)(int)((uVar7 & 0xffff) - uVar14) * 0x18;
            }
            else {
              lVar12 = 0;
            }
            if ((*(uint *)(lVar12 + 8) >> 0x1d & 1) != 0) goto LAB_14245d685;
          }
          if (((local_98[0] >> 1 & 1) == 0) ||
             (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(plVar9), iVar16 = local_58,
             iVar15 = local_80, cVar6 != '\0')) {
            if ((local_98[0] >> 2 & 1) != 0) {
              if (((*(byte *)(lVar11 + 0x204) & 0x10) == 0) &&
                 ((*(byte *)(lVar11 + 0x205) & 0x10) == 0)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              piVar2 = *(int **)(lVar11 + 600);
              if (((*(longlong *)(lVar11 + 0xc0) == 0) ||
                  (piVar13 = (int *)UWorld::GetActiveLevelCollection(), piVar13 == (int *)0x0)) ||
                 (piVar2 == piVar13)) {
                bVar4 = true;
              }
              else {
                bVar4 = false;
              }
              if ((piVar2 == (int *)0x0) || (*piVar2 == 2)) {
                bVar5 = true;
              }
              else {
                bVar5 = false;
              }
              if ((bVar4) || (bVar4 = false, bVar5)) {
                bVar4 = true;
              }
              iVar16 = local_58;
              iVar15 = local_80;
              if ((!bVar3) || (!bVar4)) goto LAB_14245d685;
            }
            lVar11 = ULevel::GetWorld(lVar11);
            iVar16 = local_58;
            iVar15 = local_80;
            if (lVar11 == lVar10) {
              lVar11 = AActor::GetLevel(plVar9);
              param_1 = local_b8;
              if (lVar11 == *(longlong *)(lVar10 + 0x30)) goto joined_r0x00014245d406;
              lVar11 = UVoipListenerSynthComponent::GetPrivateStaticClass();
              if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
                  lVar11 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              iVar16 = local_58;
              iVar15 = local_80;
              param_1 = local_b8;
              if (!bVar3) goto joined_r0x00014245d406;
            }
          }
        }
LAB_14245d685:
        iVar18 = iVar18 + 1;
        lVar17 = lVar17 + 8;
        if (iVar16 + iVar15 <= iVar18) break;
      } while( true );
    }
    local_68 = (longlong *)0x0;
    local_74 = '\x01';
    param_1 = local_b8;
  }
  if (local_40 != '\0') {
    local_40 = '\0';
    UWorld::RemoveOnActorSpawnedHandler(local_90,local_48);
    if (local_60 != 0) {
      FMemory::Free();
    }
    if (local_88 != 0) {
      FMemory::Free();
    }
  }
  (**(code **)(*param_1 + 0x5e8))(param_1);
  uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar10 = UWorld::GetLevelScriptActor(uVar8,0);
  if (lVar10 != 0) {
    FUN_1429a1620(lVar10);
  }
  return;
}



// FUNCTION 14245d780 FUN_14245d780 body=110 status=ok
// SIG undefined FUN_14245d780(void)

void FUN_14245d780(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x8c)) {
    *(int *)(param_1 + 0x8c) = iVar1;
    FUN_1405a7600(param_1,*(undefined4 *)(param_1 + 0x88),iVar1,0x10);
  }
  return;
}



// FUNCTION 14245d7f0 FUN_14245d7f0 body=40 status=ok
// SIG undefined FUN_14245d7f0(void)

uint FUN_14245d7f0(longlong param_1)

{
  uint uVar1;
  byte bVar2;
  
  bVar2 = FUN_1423750c0();
  uVar1 = *(uint *)(param_1 + 0x228);
  *(uint *)(param_1 + 0x228) = bVar2 & 1 | uVar1;
  return bVar2 & 1 | uVar1 & 0xffffff01;
}



// FUNCTION 14245d820 FUN_14245d820 body=195 status=ok
// SIG undefined FUN_14245d820(void)

void FUN_14245d820(longlong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong local_18 [2];
  
  cVar1 = (**(code **)(*(longlong *)param_1[0x96] + 2000))();
  if ((cVar1 != '\0') && (param_1[0xa0] != DAT_146af3998)) {
    local_18[0] = 0;
    local_18[1] = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_18[0],9,"?Restart",9,0x3f);
    uVar2 = (**(code **)(*param_1 + 0x980))(param_1);
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    FUN_1428d76e0(uVar3,local_18,uVar2,0);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14245d8f0 FUN_14245d8f0 body=238 status=ok
// SIG undefined FUN_14245d8f0(void)

void FUN_14245d8f0(longlong *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong local_18 [2];
  
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0x94) & 2) == 0)) {
    iVar1 = *(int *)(param_2 + 0xc);
    lVar4 = 0;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
      local_18[0] = 0;
      local_18[1] = 0;
      lVar4 = FUN_14293bcd0(param_1,param_2,local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      if ((lVar4 == 0) && (cVar2 = FUN_14044af00(param_2 + 0x468,0), cVar2 != '\0')) {
        lVar4 = FWeakObjectPtr::Get(param_2 + 0x468);
      }
      (**(code **)(*param_1 + 0x848))(param_1,param_2,lVar4);
    }
  }
  return;
}



// FUNCTION 14245d9e0 FUN_14245d9e0 body=659 status=ok
// SIG undefined FUN_14245d9e0(void)

void FUN_14245d9e0(longlong *param_1,longlong *param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 in_RAX;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if ((*(byte *)((longlong)param_2 + 0x94) & 2) == 0) {
    iVar5 = *(int *)((longlong)param_2 + 0xc);
    plVar7 = (longlong *)0x0;
    if (iVar5 < (int)DAT_1469e91c4) {
      uVar11 = iVar5 >> 0x1f & 0xffff;
      uVar4 = iVar5 + uVar11;
      plVar7 = (longlong *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
               (longlong)(int)((uVar4 & 0xffff) - uVar11) * 0x18);
    }
    in_RAX = 0;
    if ((*(uint *)(plVar7 + 1) >> 0x1d & 1) != 0) goto LAB_14245da59;
    uVar6 = 0;
  }
  else {
LAB_14245da59:
    uVar6 = (undefined4)CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  }
  if ((char)uVar6 != '\0') {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  lVar9 = *(longlong *)(param_3 + 0x168);
  if (lVar9 == 0) {
    uVar6 = (undefined4)DAT_1468b5da0;
    uVar12 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
    local_40 = DAT_1468b5da8;
  }
  else {
    local_28 = *(float *)(lVar9 + 0x210);
    fStack_24 = *(float *)(lVar9 + 0x214);
    fStack_20 = *(float *)(lVar9 + 0x218);
    fStack_1c = *(float *)(lVar9 + 0x21c);
    auVar1._4_4_ = -(uint)(fStack_24 != *(float *)(lVar9 + 0x254));
    auVar1._0_4_ = -(uint)(local_28 != *(float *)(lVar9 + 0x250));
    auVar1._8_4_ = -(uint)(fStack_20 != *(float *)(lVar9 + 600));
    auVar1._12_4_ = -(uint)(fStack_1c != *(float *)(lVar9 + 0x25c));
    iVar5 = movmskps(uVar6,auVar1);
    if (iVar5 != 0) {
      *(float *)(lVar9 + 0x250) = local_28;
      *(float *)(lVar9 + 0x254) = fStack_24;
      *(float *)(lVar9 + 600) = fStack_20;
      *(float *)(lVar9 + 0x25c) = fStack_1c;
      puVar8 = (undefined8 *)FQuat::Rotator(&local_28,&local_38);
      *(undefined8 *)(lVar9 + 0x260) = *puVar8;
      *(undefined4 *)(lVar9 + 0x268) = *(undefined4 *)(puVar8 + 1);
    }
    uVar6 = (undefined4)*(undefined8 *)(lVar9 + 0x260);
    uVar12 = (undefined4)((ulonglong)*(undefined8 *)(lVar9 + 0x260) >> 0x20);
    local_40 = *(undefined4 *)(lVar9 + 0x268);
  }
  local_48 = CONCAT44(uVar12,uVar6);
  local_38 = local_48;
  local_30 = local_40;
  lVar9 = FUN_1429e18b0();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
      lVar9 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  plVar7 = param_2;
  if (!bVar3) {
    plVar7 = (longlong *)0x0;
  }
  uVar6 = FUN_14293c170(param_1,plVar7);
  if ((char)uVar6 != '\0') {
    return;
  }
  lVar9 = param_2[0x91];
  if (lVar9 == 0) {
    lVar9 = FUN_14293bd80(param_1,param_2);
    if (lVar9 == 0) goto LAB_14245dc20;
    lVar9 = *param_2;
    uVar10 = FUN_14293c4d0(param_1,param_2,param_3);
    uVar6 = (**(code **)(lVar9 + 0x750))(param_2,uVar10);
    lVar9 = param_2[0x91];
    if (lVar9 == 0) goto LAB_14245dc20;
  }
  lVar9 = *(longlong *)(lVar9 + 0x168);
  if (lVar9 == 0) {
    uVar6 = (undefined4)DAT_1468b5da0;
    uVar12 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
    local_40 = DAT_1468b5da8;
  }
  else {
    local_28 = *(float *)(lVar9 + 0x210);
    fStack_24 = *(float *)(lVar9 + 0x214);
    fStack_20 = *(float *)(lVar9 + 0x218);
    fStack_1c = *(float *)(lVar9 + 0x21c);
    auVar2._4_4_ = -(uint)(*(float *)(lVar9 + 0x254) != fStack_24);
    auVar2._0_4_ = -(uint)(*(float *)(lVar9 + 0x250) != local_28);
    auVar2._8_4_ = -(uint)(*(float *)(lVar9 + 600) != fStack_20);
    auVar2._12_4_ = -(uint)(*(float *)(lVar9 + 0x25c) != fStack_1c);
    iVar5 = movmskps(uVar6,auVar2);
    if (iVar5 != 0) {
      *(float *)(lVar9 + 0x250) = local_28;
      *(float *)(lVar9 + 0x254) = fStack_24;
      *(float *)(lVar9 + 600) = fStack_20;
      *(float *)(lVar9 + 0x25c) = fStack_1c;
      puVar8 = (undefined8 *)FQuat::Rotator(&local_28,&local_38);
      *(undefined8 *)(lVar9 + 0x260) = *puVar8;
      *(undefined4 *)(lVar9 + 0x268) = *(undefined4 *)(puVar8 + 1);
    }
    uVar6 = (undefined4)*(undefined8 *)(lVar9 + 0x260);
    uVar12 = (undefined4)((ulonglong)*(undefined8 *)(lVar9 + 0x260) >> 0x20);
    local_40 = *(undefined4 *)(lVar9 + 0x268);
  }
  local_48 = CONCAT44(uVar12,uVar6);
  local_38 = local_48;
  local_30 = local_40;
LAB_14245dc20:
  if (param_2[0x91] == 0) {
    (**(code **)(*param_2 + 0x7b0))(param_2);
  }
  else {
    FUN_14293bed0(param_1,param_3,param_2);
    (**(code **)(*param_1 + 0x8b0))(param_1,param_2,&local_48);
  }
  return;
}



// FUNCTION 14245dc80 FUN_14245dc80 body=503 status=ok
// SIG undefined FUN_14245dc80(void)

void FUN_14245dc80(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if ((*(byte *)((longlong)param_2 + 0x94) & 2) == 0) {
    iVar6 = *(int *)((longlong)param_2 + 0xc);
    plVar7 = (longlong *)0x0;
    if (iVar6 < (int)DAT_1469e91c4) {
      uVar11 = iVar6 >> 0x1f & 0xffff;
      uVar4 = iVar6 + uVar11;
      plVar7 = (longlong *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
               (longlong)(int)((uVar4 & 0xffff) - uVar11) * 0x18);
    }
    if ((*(uint *)(plVar7 + 1) >> 0x1d & 1) == 0) {
      bVar2 = false;
      goto LAB_14245dcf9;
    }
  }
  bVar2 = true;
LAB_14245dcf9:
  if (!bVar2) {
    lVar8 = FUN_1429e18b0();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    plVar7 = param_2;
    if (!bVar2) {
      plVar7 = (longlong *)0x0;
    }
    cVar3 = FUN_14293c170(param_1,plVar7);
    if (cVar3 == '\0') {
      local_28 = *param_3;
      uStack_20 = *(undefined4 *)(param_3 + 1);
      uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar5 = FQuat::Rotator(&local_28,&local_38);
      if (param_2[0x91] == 0) {
        lVar8 = FUN_14293bd80(param_1,param_2);
        if (lVar8 != 0) {
          lVar8 = *param_2;
          uVar10 = FUN_14293c440(param_1,param_2,param_3);
          (**(code **)(lVar8 + 0x750))(param_2,uVar10);
        }
      }
      else {
        lVar8 = *(longlong *)(param_2[0x91] + 0x168);
        if (lVar8 == 0) {
          uVar5 = (undefined4)DAT_1468b5da0;
          uVar12 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
          local_30 = DAT_1468b5da8;
        }
        else {
          local_18 = *(float *)(lVar8 + 0x210);
          fStack_14 = *(float *)(lVar8 + 0x214);
          fStack_10 = *(float *)(lVar8 + 0x218);
          fStack_c = *(float *)(lVar8 + 0x21c);
          auVar1._4_4_ = -(uint)(*(float *)(lVar8 + 0x254) != fStack_14);
          auVar1._0_4_ = -(uint)(*(float *)(lVar8 + 0x250) != local_18);
          auVar1._8_4_ = -(uint)(*(float *)(lVar8 + 600) != fStack_10);
          auVar1._12_4_ = -(uint)(*(float *)(lVar8 + 0x25c) != fStack_c);
          iVar6 = movmskps(uVar5,auVar1);
          if (iVar6 != 0) {
            *(float *)(lVar8 + 0x250) = local_18;
            *(float *)(lVar8 + 0x254) = fStack_14;
            *(float *)(lVar8 + 600) = fStack_10;
            *(float *)(lVar8 + 0x25c) = fStack_c;
            puVar9 = (undefined8 *)FQuat::Rotator(&local_18,&local_28);
            *(undefined8 *)(lVar8 + 0x260) = *puVar9;
            *(undefined4 *)(lVar8 + 0x268) = *(undefined4 *)(puVar9 + 1);
          }
          uVar5 = (undefined4)*(undefined8 *)(lVar8 + 0x260);
          uVar12 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x260) >> 0x20);
          local_30 = *(undefined4 *)(lVar8 + 0x268);
        }
        local_38 = CONCAT44(uVar12,uVar5);
        local_28 = local_38;
        uStack_20 = local_30;
      }
      if (param_2[0x91] == 0) {
        (**(code **)(*param_2 + 0x7b0))(param_2);
      }
      else {
        (**(code **)(*param_1 + 0x8b0))(param_1,param_2,&local_38);
      }
    }
  }
  return;
}



// FUNCTION 14245de80 FUN_14245de80 body=74 status=ok
// SIG undefined FUN_14245de80(void)

void FUN_14245de80(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 == 0) {
    return;
  }
  if ((longlong *)param_1[9] != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014245deaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[9] + 0x288))();
    return;
  }
  FUN_142876830(param_1[4],lVar1,*(undefined8 *)(lVar1 + 0x38));
  return;
}



// FUNCTION 14245def0 RunSynthBenchmark body=609 status=ok
// SIG undefined RunSynthBenchmark(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void RunSynthBenchmark(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  wchar_t *_Str;
  double dVar5;
  float fVar6;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8 [16];
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  fVar6 = 10.0;
  if (0 < (int)param_1[1]) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
    dVar5 = _wtof(_Str);
    fVar6 = (float)dVar5;
    if (1.0 <= fVar6) {
      if (1000.0 <= fVar6) {
        fVar6 = 1000.0;
      }
    }
    else {
      fVar6 = 1.0;
    }
  }
  local_190 = 0xbf800000;
  local_198 = 0;
  local_18c = 0xbf800000;
  local_188 = 0xbf800000;
  local_180 = 0;
  local_178 = 0;
  local_174 = 0x3f800000;
  local_170 = 0;
  local_168 = 0xbf800000;
  local_164 = 0xbf800000;
  local_160 = 0xbf800000;
  local_158 = 0;
  local_150 = 0;
  local_14c = 0x3f800000;
  local_148 = 0;
  local_140 = 0xbf800000;
  local_13c = 0xbf800000;
  local_138 = 0xbf800000;
  local_130 = 0;
  local_128 = 0;
  local_124 = 0x3f800000;
  local_120 = 0;
  local_118 = 0xbf800000;
  local_114 = 0xbf800000;
  local_110 = 0xbf800000;
  local_108 = 0;
  local_100 = 0;
  local_fc = 0x3f800000;
  local_f8 = 0;
  local_f0 = 0xbf800000;
  local_ec = 0xbf800000;
  local_e8 = 0xbf800000;
  local_e0 = 0;
  local_d8 = 0;
  local_d4 = 0x3f800000;
  local_d0 = 0;
  local_c8 = 0xbf800000;
  local_c4 = 0xbf800000;
  local_c0 = 0xbf800000;
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 0x3f800000;
  local_a8 = 0;
  local_a0 = 0xbf800000;
  local_9c = 0xbf800000;
  local_98 = 0xbf800000;
  local_90 = 0;
  local_88 = 0;
  local_84 = 0x3f800000;
  local_80 = 0;
  local_78 = 0xbf800000;
  local_74 = 0xbf800000;
  local_70 = 0xbf800000;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0x3f800000;
  local_58 = 0;
  local_50 = 0xbf800000;
  local_4c = 0xbf800000;
  local_48 = 0xbf800000;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0x3f800000;
  puVar2 = (undefined8 *)FName::FName(local_1a8,"SynthBenchmark",1);
  uVar1 = *puVar2;
  uVar3 = FUN_14168dc80();
  plVar4 = (longlong *)FUN_141690010(uVar3,uVar1);
  (**(code **)(*plVar4 + 0x40))(plVar4,&local_198,1,fVar6);
  return;
}



// FUNCTION 14245e160 SaveGameToSlot body=460 status=ok
// SIG undefined SaveGameToSlot(void)

ulonglong UGameplayStatics::SaveGameToSlot(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  byte bVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong local_1d8 [2];
  undefined **local_1c8 [18];
  undefined8 local_138;
  longlong *local_130;
  undefined8 local_128;
  undefined1 local_118 [32];
  longlong local_f8;
  longlong local_e0;
  longlong local_d0;
  undefined **local_b8 [19];
  undefined1 local_20;
  
  if ((DAT_146850158 == (longlong *)0x0) &&
     (plVar2 = (longlong *)operator_new(8), DAT_146850158 = (longlong *)0x0,
     plVar2 != (longlong *)0x0)) {
    *plVar2 = (longlong)&PTR_FUN_143f3eef8;
    DAT_146850158 = plVar2;
  }
  plVar2 = (longlong *)(**(code **)(*DAT_146850158 + 0x40))();
  if ((plVar2 != (longlong *)0x0) && (param_1 != (longlong *)0x0)) {
    plVar3 = (longlong *)(ulonglong)(*(int *)(param_2 + 1) - 1);
    if (*(int *)(param_2 + 1) == 0) {
      plVar3 = (longlong *)0x0;
    }
    if (0 < (int)plVar3) {
      local_1d8[0] = 0;
      local_1d8[1] = 0;
      FArchive::FArchive(local_1c8);
      local_138 = 0;
      local_1c8[0] = &PTR_FUN_143f4a100;
      local_130 = local_1d8;
      local_128 = 0;
      FArchive::SetIsSaving(local_1c8,1);
      FArchive::SetIsPersistent(local_1c8,1);
      FSaveGameHeader::FSaveGameHeader(local_118,param_1[2]);
      FUN_142465f90(local_118,local_1c8);
      FArchiveProxy::FArchiveProxy(local_b8,local_1c8);
      local_20 = 0;
      local_b8[0] = &PTR_FUN_143f4a5b0;
      (**(code **)(*param_1 + 0xa8))(param_1,local_b8);
      if (*(int *)(param_2 + 1) == 0) {
        puVar4 = &DAT_143f3eda8;
      }
      else {
        puVar4 = (undefined2 *)*param_2;
      }
      bVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,0,puVar4,param_3,local_1d8);
      FArchive::~FArchive(local_b8);
      if (local_d0 != 0) {
        FMemory::Free();
      }
      if (local_e0 != 0) {
        FMemory::Free();
      }
      if (local_f8 != 0) {
        FMemory::Free();
      }
      FArchive::~FArchive(local_1c8);
      if (local_1d8[0] != 0) {
        FMemory::Free();
      }
      return (ulonglong)bVar1;
    }
  }
  return (ulonglong)plVar2 & 0xffffffffffffff00;
}



// FUNCTION 14245e350 SendPlayer body=66 status=ok
// SIG undefined SendPlayer(void)

void AGameMode::SendPlayer(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  FUN_1426ffc80(param_2,param_3,2,0,&local_18);
  return;
}



// FUNCTION 14245e3a0 FUN_14245e3a0 body=259 status=ok
// SIG undefined FUN_14245e3a0(void)

void FUN_14245e3a0(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  int local_res8 [2];
  
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  }
  (**(code **)(*param_2 + 0x78))
            (param_2,(longlong)*(int *)(param_1 + 1),(longlong)*(int *)((longlong)param_1 + 0xc));
  local_res8[0] = 0;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    local_res8[0] = *(int *)(param_1 + 1);
  }
  plVar1 = (longlong *)param_2[1];
  if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res8,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if (-1 < (char)*(byte *)(param_2 + 5)) {
    if ((-1 < local_res8[0]) &&
       (((*(byte *)((longlong)param_2 + 0x2b) & 8) == 0 || (local_res8[0] < 0x1000001)))) {
      *(int *)(param_1 + 1) = local_res8[0];
      if (((local_res8[0] != 0) || (iVar3 = 0, *(int *)((longlong)param_1 + 0xc) != 0)) &&
         (iVar3 = local_res8[0], (*(byte *)(param_2 + 5) & 1) != 0)) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy
                  (param_1,local_res8[0],*(undefined4 *)((longlong)param_1 + 0xc));
        iVar3 = *(int *)(param_1 + 1);
      }
      (**(code **)(*param_2 + 0x50))(param_2,*param_1,(longlong)iVar3);
      bVar2 = *(byte *)(param_2 + 5);
      goto LAB_14245e487;
    }
  }
  bVar2 = *(byte *)(param_2 + 5) | 0x80;
  *(byte *)(param_2 + 5) = bVar2;
LAB_14245e487:
  if ((bVar2 & 1) != 0) {
    AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  }
  return;
}



// FUNCTION 14245e4b0 Serialize body=46 status=ok
// SIG undefined Serialize(void)

void UFont::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_141763960();
  ::operator<<(param_2,param_1 + 0x180);
  return;
}



// FUNCTION 14245e4e0 FUN_14245e4e0 body=479 status=ok
// SIG undefined FUN_14245e4e0(void)

void FUN_14245e4e0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char local_res10 [8];
  char local_res18 [8];
  undefined8 *local_38;
  longlong *local_30;
  longlong local_28 [2];
  
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0068);
  FUN_141763960(param_1,param_2);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(char *)(param_1 + 0x41) == '\x02') || (param_2[0xe] == 0)) {
      local_res18[0] = '\x01';
    }
    else {
      local_res18[0] = '\0';
    }
    (**(code **)(*param_2 + 8))(param_2,local_res18);
    if (local_res18[0] != '\0') {
      FUN_14245e3a0(*(undefined8 *)(param_1 + 0x48),param_2);
      return;
    }
  }
  else {
    plVar5 = (longlong *)
             (**(code **)(*(longlong *)(param_1 + 0x28) + 0x38))(param_1 + 0x28,local_28);
    plVar1 = (longlong *)(param_1 + 0x30);
    puVar7 = (undefined8 *)0x0;
    if (plVar1 != plVar5) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = *plVar5;
      *plVar5 = 0;
      *(int *)(param_1 + 0x38) = (int)plVar5[1];
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)((longlong)plVar5 + 0xc);
      plVar5[1] = 0;
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    iVar4 = FArchive::CustomVer(param_2,&DAT_1464b0068);
    if (0xd < iVar4) {
      local_res10[0] = '\0';
      (**(code **)(*param_2 + 8))(param_2,local_res10);
      if (local_res10[0] != '\0') {
        if (0 < *(int *)(*(longlong *)(param_1 + 0x48) + 8)) {
          puVar6 = (undefined8 *)operator_new(0x20);
          if (puVar6 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar6 + 1) = 1;
            *puVar6 = &PTR_FUN_144cb51c0;
            *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
            puVar6[2] = 0;
            puVar6[3] = 0;
            puVar7 = puVar6;
          }
          local_38 = puVar7 + 2;
          local_30 = puVar7;
          SharedPointerInternals::EnableSharedFromThis(&local_38,local_38,local_38);
          puVar7 = *(undefined8 **)(param_1 + 0x48);
          *(undefined8 **)(param_1 + 0x48) = local_38;
          plVar1 = *(longlong **)(param_1 + 0x50);
          *(longlong **)(param_1 + 0x50) = local_30;
          local_38 = puVar7;
          local_30 = plVar1;
          if (plVar1 != (longlong *)0x0) {
            LOCK();
            plVar5 = plVar1 + 1;
            lVar3 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)*plVar1)(plVar1);
              LOCK();
              piVar2 = (int *)((longlong)plVar1 + 0xc);
              iVar4 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar1 + 8))(plVar1,1);
              }
            }
          }
        }
        FUN_14245e3a0(*(undefined8 *)(param_1 + 0x48),param_2);
      }
    }
  }
  return;
}



// FUNCTION 14245e6c0 FUN_14245e6c0 body=119 status=ok
// SIG undefined FUN_14245e6c0(void)

void FUN_14245e6c0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  if ((((param_2 != 0) && (DAT_146b17150 != (longlong *)0x0)) &&
      (cVar1 = (**(code **)(*DAT_146b17150 + 0x388))(), cVar1 != '\0')) &&
     (((lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1), lVar2 != 0 &&
       ((*(uint *)(lVar2 + 0x830) & 0x4000) != 0)) &&
      (lVar2 = UWorld::GetAudioDevice(lVar2), lVar2 != 0)))) {
    FUN_1422d7d20(lVar2,param_2);
  }
  return;
}



// FUNCTION 14245e740 FUN_14245e740 body=150 status=ok
// SIG undefined FUN_14245e740(void)

ulonglong FUN_14245e740(undefined8 param_1,undefined1 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1);
  lVar4 = 0;
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(lVar3 + 400);
  }
  uVar5 = 0;
  if (lVar4 != 0) {
    plVar6 = *(longlong **)(lVar4 + 0x38);
    uVar5 = (ulonglong)*(int *)(lVar4 + 0x40);
    plVar1 = plVar6 + uVar5;
    for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      if ((*plVar6 != 0) && (plVar2 = *(longlong **)(*plVar6 + 0x30), plVar2 != (longlong *)0x0)) {
        local_18 = 0;
        local_10 = 0;
        uVar5 = (**(code **)(*plVar2 + 0xb68))(plVar2,param_2,&local_18);
        return uVar5;
      }
    }
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 14245e7e0 FUN_14245e7e0 body=316 status=ok
// SIG undefined FUN_14245e7e0(void)

void FUN_14245e7e0(undefined8 param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,float param_8,float param_9)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  
  if (DAT_146b17150 != (longlong *)0x0) {
    cVar1 = (**(code **)(*DAT_146b17150 + 0x388))();
    if (cVar1 != '\0') {
      lVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
      if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x830) & 0x4000) != 0)) {
        iVar2 = FUN_1428cf800(lVar3);
        if (iVar2 != 1) {
          lVar3 = UWorld::GetAudioDevice(lVar3);
          if (lVar3 != 0) {
            if (param_5 <= 0.0) {
              param_5 = 0.0;
            }
            if (param_6 <= 0.0) {
              param_6 = 0.0;
            }
            if (param_2 <= 0.0) {
              param_2 = 0.0;
            }
            if (param_3 <= 0.0) {
              param_3 = 0.0;
            }
            if (param_4 <= 0.0) {
              param_4 = 0.0;
            }
            if (param_7 <= 0.0) {
              param_7 = 0.0;
            }
            if (param_8 <= 0.0) {
              param_8 = 0.0;
            }
            if (param_9 <= 0.0) {
              param_9 = 0.0;
            }
            local_58 = param_2;
            local_54 = param_3;
            local_50 = param_4;
            local_4c = param_5;
            local_48 = param_6;
            local_44 = param_7;
            local_40 = param_8;
            local_3c = param_9;
            FAudioDevice::SetGlobalFocusSettings(lVar3,&local_58);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14245e920 FUN_14245e920 body=147 status=ok
// SIG undefined FUN_14245e920(void)

void FUN_14245e920(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  if (DAT_146b17150 != (longlong *)0x0) {
    cVar1 = (**(code **)(*DAT_146b17150 + 0x388))();
    if (cVar1 != '\0') {
      lVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
      if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x830) & 0x4000) != 0)) {
        iVar2 = FUN_1428cf800(lVar3);
        if (iVar2 != 1) {
          lVar3 = UWorld::GetAudioDevice(lVar3);
          if (lVar3 != 0) {
            FAudioDevice::SetGlobalPitchModulation(lVar3,param_2,param_3);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14245e9c0 FUN_14245e9c0 body=81 status=ok
// SIG undefined FUN_14245e9c0(void)

void FUN_14245e9c0(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar1 != 0) {
    plVar2 = (longlong *)UWorld::GetWorldSettings(lVar1,0,1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x700))(plVar2,param_2);
    }
  }
  return;
}



// FUNCTION 14245ea20 FUN_14245ea20 body=146 status=ok
// SIG undefined FUN_14245ea20(void)

void FUN_14245ea20(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if (param_1[0xa0] != param_2) {
    param_1[0xa0] = param_2;
    (**(code **)(*param_1 + 0x938))();
    lVar1 = param_1[0x97];
    if (lVar1 != 0) {
      lVar3 = ARemnantQuest::GetPrivateStaticClass();
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
        FUN_14248eaa0(lVar1,param_2);
      }
    }
    FUN_14293c0a0(param_1,param_2);
  }
  return;
}



// FUNCTION 14245eac0 FUN_14245eac0 body=216 status=ok
// SIG undefined FUN_14245eac0(void)

undefined8 FUN_14245eac0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  cVar2 = (**(code **)(*param_1 + 0x790))();
  if (cVar2 != '\0') {
    iVar1 = (int)param_1[0x9e];
    *(int *)(param_1 + 0x9e) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0x4f4) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x9d,iVar1);
    }
    puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + param_1[0x9d]);
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 1) = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(puVar4,param_3);
    lVar3 = AActor::GetWorldSettings(param_1);
    if (*(longlong *)(lVar3 + 0x600) == 0) {
      *(undefined8 *)(lVar3 + 0x600) = *(undefined8 *)(param_2 + 0x460);
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
    return 1;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
  return 0;
}



// FUNCTION 14245eba0 SetPlayerControllerID body=43 status=ok
// SIG undefined SetPlayerControllerID(void)

void UGameplayStatics::SetPlayerControllerID(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  if ((param_1 != 0) && (plVar1 = (longlong *)FUN_14270bb10(), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x2b8))(plVar1,param_2);
  }
  return;
}



// FUNCTION 14245ebe0 FUN_14245ebe0 body=59 status=ok
// SIG undefined FUN_14245ebe0(void)

void FUN_14245ebe0(undefined8 param_1,longlong *param_2)

{
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  uint local_c;
  
  local_c = local_c & 0xfffffffe;
  local_18 = 0;
  local_10 = 0x40000000;
  local_14 = 1;
  (**(code **)(*param_2 + 0xe18))(param_2,0x40000000,&local_18);
  return;
}



// FUNCTION 14245ec20 FUN_14245ec20 body=197 status=ok
// SIG undefined FUN_14245ec20(void)

void FUN_14245ec20(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  char cVar1;
  longlong lVar2;
  
  if ((((param_2 != 0) && (DAT_146b17150 != (longlong *)0x0)) &&
      (cVar1 = (**(code **)(*DAT_146b17150 + 0x388))(), cVar1 != '\0')) &&
     (((lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1), lVar2 != 0 &&
       ((*(uint *)(lVar2 + 0x830) & 0x4000) != 0)) &&
      (lVar2 = UWorld::GetAudioDevice(lVar2), lVar2 != 0)))) {
    FUN_1422d8d30(lVar2,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}



// FUNCTION 14245ecf0 FUN_14245ecf0 body=35 status=ok
// SIG undefined FUN_14245ecf0(void)

void FUN_14245ecf0(byte param_1)

{
  if (DAT_146b17150 != 0) {
    *(uint *)(DAT_146b17150 + 0x7d8) =
         (uint)param_1 * 2 | *(uint *)(DAT_146b17150 + 0x7d8) & 0xfffffffd;
  }
  return;
}



// FUNCTION 14245ed40 SetWorldOriginLocation body=71 status=ok
// SIG undefined SetWorldOriginLocation(void)

void UGameplayStatics::SetWorldOriginLocation(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar1 != 0) {
    local_10 = *(undefined4 *)(param_2 + 1);
    local_18 = *param_2;
    FUN_1428d58f0(lVar1,&local_18);
  }
  return;
}



// FUNCTION 14245ed90 ShouldDoAsyncEndOfFrameTasks body=47 status=ok
// SIG undefined ShouldDoAsyncEndOfFrameTasks(void)

ulonglong UGameEngine::ShouldDoAsyncEndOfFrameTasks(void)

{
  ulonglong uVar1;
  
  uVar1 = FUN_141636a40();
  if ((char)uVar1 != '\0') {
    uVar1 = (ulonglong)DAT_1464a8210;
    if ((DAT_1464a8210 != 2) && (DAT_146af37f8 != 0)) {
      return CONCAT71((uint7)(uint3)(DAT_1464a8210 >> 8),1);
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 14245edc0 FUN_14245edc0 body=41 status=ok
// SIG undefined FUN_14245edc0(void)

undefined1 FUN_14245edc0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = FUN_14044af00(param_2 + 0x468,0);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14245edf0 FUN_14245edf0 body=19 status=ok
// SIG undefined FUN_14245edf0(void)

undefined1 FUN_14245edf0(undefined8 param_1,undefined8 param_2)

{
  FUN_14270bb10(param_2);
  return 0;
}



// FUNCTION 14245ee10 FUN_14245ee10 body=237 status=ok
// SIG undefined FUN_14245ee10(void)

void FUN_14245ee10(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  FUN_142937a20();
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x280))();
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x40) + -1;
  lVar2 = (longlong)iVar1;
  if (-1 < iVar1) {
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x38) + lVar2 * 8) != 0) {
        FUN_14245cc40(param_1);
      }
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  if ((DAT_146aff4e8 != 0) && (DAT_146aff4e0 != (longlong *)0x0)) {
    (**(code **)(*DAT_146aff4e0 + 0x28))(DAT_146aff4e0,0);
    if (DAT_146aff4e0 != (longlong *)0x0) {
      DAT_146aff4e0 = (longlong *)FMemory::Realloc(DAT_146aff4e0,0,0);
    }
    DAT_146aff4e8 = 0;
  }
  if ((DAT_146aff4f8 != 0) && (DAT_146aff4f0 != (longlong *)0x0)) {
    (**(code **)(*DAT_146aff4f0 + 0x28))(DAT_146aff4f0,0);
    if (DAT_146aff4f0 != (longlong *)0x0) {
      DAT_146aff4f0 = (longlong *)FMemory::Realloc(DAT_146aff4f0,0,0);
    }
    DAT_146aff4f8 = 0;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 14245ef00 FUN_14245ef00 body=292 status=ok
// SIG undefined FUN_14245ef00(void)

undefined8
FUN_14245ef00(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined4 param_6,uint param_7,undefined4 param_8,
             undefined4 param_9)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar3;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  if (param_2 != 0) {
    lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
    if (lVar1 != 0) {
      local_20 = *(undefined4 *)(param_3 + 1);
      local_28 = *param_3;
      uVar2 = UWorld::GetWorldSettings(lVar1,0,1);
      uVar2 = FUN_1424461b0(param_2,&local_28,lVar1,uVar2,CONCAT44(uVar3,param_6),param_7,param_8,
                            param_9);
      local_28 = *param_5;
      local_20 = *(undefined4 *)(param_5 + 1);
      local_10 = *(undefined4 *)(param_4 + 1);
      local_18 = *param_4;
      FUN_142399680(uVar2,&local_18,&local_28,0,0,param_7 & 0xffffff00);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14245f030 FUN_14245f030 body=706 status=ok
// SIG undefined FUN_14245f030(void)

undefined8
FUN_14245f030(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 *param_6,int param_7,undefined4 param_8,uint param_9,
             undefined4 param_10,undefined4 param_11)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar5;
  uint uVar6;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  if ((param_1 == 0) || (param_3 == 0)) {
LAB_14245f2d6:
    uVar4 = 0;
  }
  else {
    lVar2 = FUN_1429f11d0();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if ((*(byte *)(param_3 + 0x2f0) & 8) == 0) goto LAB_14245f2d6;
      lVar2 = *(longlong *)(param_3 + 0x118);
      if (lVar2 != 0) {
        lVar3 = UVoipListenerSynthComponent::GetPrivateStaticClass();
        lVar2 = *(longlong *)(lVar2 + 0x10);
        if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
            lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          lVar2 = UEngine::GetWorldFromContextObject
                            (DAT_146b17150,*(undefined8 *)(param_3 + 0x118),1);
          if (lVar2 != 0) {
            local_30 = *(undefined4 *)(param_2 + 1);
            local_38 = *param_2;
            uVar4 = UWorld::GetWorldSettings(lVar2,0,1);
            uVar6 = 0;
            uVar4 = FUN_1424461b0(param_1,&local_38,lVar2,uVar4,CONCAT44(uVar5,param_8),0,0,
                                  0x3c23d70a);
            local_38 = *param_6;
            local_30 = *(undefined4 *)(param_6 + 1);
            local_28 = *param_5;
            local_20 = *(undefined4 *)(param_5 + 1);
            FUN_142399680(uVar4,&local_28,&local_38,0,0,uVar6 & 0xffffff00);
            return uVar4;
          }
          return 0;
        }
      }
    }
    local_20 = *(undefined4 *)(param_2 + 1);
    local_28 = *param_2;
    uVar4 = *(undefined8 *)(param_3 + 0x118);
    lVar2 = *(longlong *)(param_3 + 0x120);
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_3);
    }
    uVar4 = FUN_1424461b0(param_1,&local_28,lVar2,uVar4,CONCAT44(uVar5,param_8),param_9,param_10,
                          param_11);
    FUN_142382f60(uVar4,param_3,&DAT_146af29ec);
    if (param_7 == 1) {
      local_28 = *param_6;
      local_20 = *(undefined4 *)(param_6 + 1);
      local_38 = *param_5;
      local_30 = *(undefined4 *)(param_5 + 1);
      FUN_142399680(uVar4);
    }
    else {
      local_28 = *param_6;
      local_20 = *(undefined4 *)(param_6 + 1);
      local_38 = *param_5;
      local_30 = *(undefined4 *)(param_5 + 1);
      FUN_1423982b0(uVar4,&local_38,&local_28,0,0,param_9 & 0xffffff00);
    }
  }
  return uVar4;
}



// FUNCTION 14245f300 FUN_14245f300 body=117 status=ok
// SIG undefined FUN_14245f300(void)

void FUN_14245f300(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_38 [24];
  longlong local_20;
  undefined1 local_10;
  uint local_c;
  
  FActorSpawnParameters::FActorSpawnParameters(local_38);
  local_20 = param_1[0x2a];
  local_c = local_c | 0x40;
  local_10 = 2;
  uVar1 = FUN_14293bd80(param_1,param_2);
  uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  FUN_142550d00(uVar2,uVar1,param_3,local_38);
  return;
}



// FUNCTION 14245f380 FUN_14245f380 body=223 status=ok
// SIG undefined FUN_14245f380(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14245f380(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = local_68;
  (**(code **)(*param_1 + 0x8d0))(param_1,param_3,param_2,&local_78);
  FRotator::Quaternion(local_68,&local_58);
  local_48 = local_58;
  uStack_40 = uStack_50;
  local_38._8_4_ = local_70;
  local_38._0_8_ = local_78;
  local_38._12_4_ = 0;
  local_28._4_4_ = DAT_1464aa788._4_4_;
  local_28._0_4_ = (undefined4)DAT_1464aa788;
  local_28._8_4_ = DAT_1464aa790;
  local_28._12_4_ = 0;
  FUN_14293c440(param_1,param_2,&local_48);
  return;
}



// FUNCTION 14245f460 FUN_14245f460 body=378 status=ok
// SIG undefined FUN_14245f460(void)

longlong *
FUN_14245f460(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,byte param_7)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined1 local_68 [16];
  undefined8 local_58;
  
  if (param_2 == 0) {
    return (longlong *)0x0;
  }
  plVar3 = (longlong *)UDialogueWave::GetWaveFromContext(param_2,param_3);
  if ((((plVar3 != (longlong *)0x0) && (DAT_146b17150 != (longlong *)0x0)) &&
      (cVar1 = (**(code **)(*DAT_146b17150 + 0x388))(), cVar1 != '\0')) &&
     (((lVar4 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1), lVar4 != 0 &&
       ((*(uint *)(lVar4 + 0x830) & 0x4000) != 0)) && (iVar2 = FUN_1428cf800(lVar4), iVar2 != 1))))
  {
    FAudioDevice::FCreateComponentParams::FCreateComponentParams(local_68,lVar4,0);
    local_58 = 0;
    plVar5 = (longlong *)FUN_1422c5640(plVar3,local_68);
    if (plVar5 != (longlong *)0x0) {
      FUN_142351eb0(plVar5,param_4);
      FUN_142351310(plVar5,param_5);
      *(byte *)(plVar5 + 0x5e) = *(byte *)(plVar5 + 0x5e) & 0xf6;
      *(byte *)((longlong)plVar5 + 0x2f1) = *(byte *)((longlong)plVar5 + 0x2f1) & 0xf7;
      *(byte *)(plVar5 + 0x5e) = *(byte *)(plVar5 + 0x5e) | param_7 | 0x40;
      uVar6 = (**(code **)(*plVar3 + 0x2b8))(plVar3);
      *(undefined4 *)(plVar5 + 100) = uVar6;
      (**(code **)(*plVar5 + 0x558))(plVar5,param_6);
      return plVar5;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 14245f5e0 FUN_14245f5e0 body=545 status=ok
// SIG undefined FUN_14245f5e0(void)

longlong *
FUN_14245f5e0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined8 param_9,byte param_10)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58 [2];
  undefined8 local_48;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)UDialogueWave::GetWaveFromContext(param_2,param_3);
    if ((((plVar4 == (longlong *)0x0) || (DAT_146b17150 == (longlong *)0x0)) ||
        (cVar1 = (**(code **)(*DAT_146b17150 + 0x388))(), cVar1 == '\0')) ||
       (((lVar5 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1), lVar5 == 0 ||
         ((*(uint *)(lVar5 + 0x830) & 0x4000) == 0)) || (iVar3 = FUN_1428cf800(lVar5), iVar3 == 1)))
       ) {
      plVar6 = (longlong *)0x0;
    }
    else {
      bVar2 = UWorld::IsGameWorld(lVar5);
      FAudioDevice::FCreateComponentParams::FCreateComponentParams(local_58,lVar5,0);
      local_70 = *(undefined4 *)(param_4 + 1);
      local_78 = *param_4;
      FAudioDevice::FCreateComponentParams::SetLocation(local_58,&local_78);
      local_58[0] = param_9;
      bVar7 = 0;
      local_48 = 0;
      plVar6 = (longlong *)FUN_1422c5640(plVar4,local_58);
      if (plVar6 != (longlong *)0x0) {
        local_78 = *param_5;
        local_70 = *(undefined4 *)(param_5 + 1);
        local_68 = *param_4;
        local_60 = *(undefined4 *)(param_4 + 1);
        FUN_142399680(plVar6,&local_68,&local_78,0,0,0);
        FUN_142351eb0(plVar6,param_6);
        FUN_142351310(plVar6,param_7);
        *(byte *)(plVar6 + 0x5e) = *(byte *)(plVar6 + 0x5e) & 0xb7;
        if (bVar2 == 0) {
          bVar7 = 0x40;
        }
        *(byte *)(plVar6 + 0x5e) =
             bVar7 | *(byte *)(plVar6 + 0x5e) & 0xfe | (bVar2 & 0xf7) << 3 | param_10;
        uVar8 = (**(code **)(*plVar4 + 0x2b8))(plVar4);
        *(undefined4 *)(plVar6 + 100) = uVar8;
        (**(code **)(*plVar6 + 0x558))(plVar6,param_8);
      }
    }
    return plVar6;
  }
  return (longlong *)0x0;
}



// FUNCTION 14245f810 SpawnDialogueAttached body=255 status=ok
// SIG undefined SpawnDialogueAttached(void)

undefined8
UGameplayStatics::SpawnDialogueAttached
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 *param_5,undefined8 *param_6,undefined4 param_7,undefined1 param_8,
          undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
          undefined1 param_13)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (param_1 != 0) {
    local_28 = *param_6;
    local_20 = *(undefined4 *)(param_6 + 1);
    local_18 = *param_5;
    local_10 = *(undefined4 *)(param_5 + 1);
    uVar1 = UDialogueWave::GetWaveFromContext();
    uVar1 = FUN_142460bb0(uVar1,param_3,param_4,&local_18,&local_28,param_7,param_8,param_9,param_10
                          ,param_11,param_12,0,param_13);
    return uVar1;
  }
  return 0;
}



// FUNCTION 14245f910 FUN_14245f910 body=383 status=ok
// SIG undefined FUN_14245f910(void)

longlong FUN_14245f910(longlong param_1,longlong param_2,undefined4 *param_3,undefined1 param_4,
                      undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 local_40 [24];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    lVar9 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_3 + 8);
    uVar3 = param_3[10];
    local_28 = *param_3;
    uStack_24 = param_3[1];
    uStack_20 = param_3[2];
    uStack_1c = param_3[3];
    puVar7 = (undefined8 *)FQuat::Rotator(&local_28,local_40);
    uVar5 = *(undefined8 *)(param_3 + 4);
    uVar4 = param_3[6];
    uVar1 = *puVar7;
    uVar2 = *(undefined4 *)(puVar7 + 1);
    uVar8 = UWorld::GetWorldSettings(param_1,0,1);
    lVar9 = FUN_142449c30(param_2,param_1,uVar8,param_4,param_5);
    if (lVar9 != 0) {
      *(byte *)(lVar9 + 0x24c) = *(byte *)(lVar9 + 0x24c) | 0x1c;
      *(undefined8 *)(lVar9 + 0x1ec) = uVar5;
      *(undefined4 *)(lVar9 + 500) = uVar4;
      *(undefined8 *)(lVar9 + 0x858) = param_6;
      *(undefined8 *)(lVar9 + 0x204) = uVar6;
      *(undefined8 *)(lVar9 + 0x1f8) = uVar1;
      *(undefined4 *)(lVar9 + 0x20c) = uVar3;
      *(undefined4 *)(lVar9 + 0x200) = uVar2;
      FUN_14234b270(lVar9,param_1);
      FUN_1425fcab0(lVar9,1);
      plVar10 = (longlong *)IStreamingManager::Get();
      (**(code **)(*plVar10 + 0x70))(plVar10,lVar9);
    }
  }
  return lVar9;
}



// FUNCTION 14245fa90 FUN_14245fa90 body=293 status=ok
// SIG undefined FUN_14245fa90(void)

longlong FUN_14245fa90(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
                      undefined8 *param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar2 != 0) {
    uVar3 = UWorld::GetWorldSettings(lVar2,0,1);
    lVar4 = FUN_142449c30(param_2,lVar2,uVar3,param_6,param_7);
    if (lVar4 != 0) {
      *(byte *)(lVar4 + 0x24c) = *(byte *)(lVar4 + 0x24c) | 0x1c;
      *(undefined8 *)(lVar4 + 0x1ec) = *param_3;
      uVar3 = *param_4;
      *(undefined4 *)(lVar4 + 500) = *(undefined4 *)(param_3 + 1);
      uVar1 = *(undefined4 *)(param_4 + 1);
      *(undefined8 *)(lVar4 + 0x1f8) = uVar3;
      *(undefined4 *)(lVar4 + 0x200) = uVar1;
      *(undefined8 *)(lVar4 + 0x858) = param_8;
      uVar1 = *(undefined4 *)(param_5 + 1);
      *(undefined8 *)(lVar4 + 0x204) = *param_5;
      *(undefined4 *)(lVar4 + 0x20c) = uVar1;
      FUN_14234b270(lVar4,lVar2);
      FUN_1425fcab0(lVar4,1);
      plVar5 = (longlong *)IStreamingManager::Get();
      (**(code **)(*plVar5 + 0x70))(plVar5,lVar4);
      return lVar4;
    }
  }
  return 0;
}



// FUNCTION 14245fbc0 FUN_14245fbc0 body=318 status=ok
// SIG undefined FUN_14245fbc0(void)

longlong FUN_14245fbc0(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
                      undefined1 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar2 != 0) {
    uVar3 = UWorld::GetWorldSettings(lVar2,0,1);
    lVar4 = FUN_142449c30(param_2,lVar2,uVar3,param_5,param_6);
    if (lVar4 != 0) {
      *(byte *)(lVar4 + 0x24c) = *(byte *)(lVar4 + 0x24c) | 0x1c;
      *(undefined8 *)(lVar4 + 0x1ec) = *param_3;
      uVar1 = *(undefined4 *)(param_3 + 1);
      *(undefined8 *)(lVar4 + 0x1f8) = *param_4;
      *(undefined4 *)(lVar4 + 500) = uVar1;
      *(undefined4 *)(lVar4 + 0x200) = *(undefined4 *)(param_4 + 1);
      *(undefined8 *)(lVar4 + 0x858) = param_7;
      *(undefined8 *)(lVar4 + 0x204) = 0x3f8000003f800000;
      *(undefined4 *)(lVar4 + 0x20c) = 0x3f800000;
      FUN_14234b270(lVar4,lVar2);
      FUN_1425fcab0(lVar4,1);
      plVar5 = (longlong *)IStreamingManager::Get();
      (**(code **)(*plVar5 + 0x70))(plVar5,lVar4);
      return lVar4;
    }
  }
  return 0;
}



// FUNCTION 14245fd00 FUN_14245fd00 body=998 status=ok
// SIG undefined FUN_14245fd00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14245fd00(longlong param_1,longlong *param_2,undefined8 param_3,
                      undefined1 (*param_4) [12],undefined8 *param_5,undefined1 (*param_6) [12],
                      int param_7,undefined1 param_8,undefined1 param_9,char param_10,
                      undefined8 param_11)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined1 local_108;
  undefined1 local_107;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  undefined1 local_78 [32];
  float local_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  lVar5 = 0;
  local_107 = param_8;
  local_108 = param_9;
  if ((((param_1 != 0) && (param_2 != (longlong *)0x0)) &&
      ((lVar4 = param_2[0x24], lVar4 != 0 || (lVar4 = FUN_1423407b0(param_2), lVar4 != 0)))) &&
     (iVar3 = FUN_1428cf800(lVar4), lVar5 = 0, iVar3 != 1)) {
    local_118 = local_108;
    lVar5 = FUN_142449c30(param_1,lVar4,param_2[0x23],local_107);
    if (lVar5 != 0) {
      FUN_142399e30(lVar5,param_2,param_3);
      if (param_7 == 1) {
        (**(code **)(*param_2 + 0x420))(param_2,local_78,param_3,0);
        FRotator::Quaternion(param_5,&local_f8);
        local_c8._12_4_ = 0;
        local_c8._0_12_ = *param_4;
        local_b8._12_4_ = 0;
        local_b8._0_12_ = *param_6;
        FUN_14162bcf0(local_d8,&local_a8,local_78);
        fStack_f0 = (float)uStack_90;
        *(undefined4 *)(lVar5 + 0x1ec) = local_98;
        *(undefined4 *)(lVar5 + 0x1f0) = uStack_94;
        local_e8 = local_a8;
        uStack_e4 = uStack_a4;
        uStack_e0 = uStack_a0;
        uStack_dc = uStack_9c;
        *(undefined4 *)(lVar5 + 500) = uStack_90;
        puVar6 = (undefined8 *)FQuat::Rotator(&local_e8,&local_f8);
        *(undefined8 *)(lVar5 + 0x1f8) = *puVar6;
        fStack_f0 = fStack_80;
        *(undefined4 *)(lVar5 + 0x200) = *(undefined4 *)(puVar6 + 1);
      }
      else {
        uVar1 = *(undefined4 *)(*param_4 + 8);
        *(undefined8 *)(lVar5 + 0x1ec) = *(undefined8 *)*param_4;
        *(undefined4 *)(lVar5 + 500) = uVar1;
        *(undefined8 *)(lVar5 + 0x1f8) = *param_5;
        *(undefined4 *)(lVar5 + 0x200) = *(undefined4 *)(param_5 + 1);
        if (param_7 == 2) {
          (**(code **)(*param_2 + 0x420))(param_2,local_78,param_3,0);
          fStack_80 = 0.0;
          local_f8 = local_58;
          fStack_f4 = fStack_54;
          uStack_ec = uStack_4c;
          if (1e-08 < ABS(local_58)) {
            local_88 = 1.0 / local_58;
          }
          else {
            local_88 = 0.0;
          }
          if (1e-08 < ABS(fStack_54)) {
            fStack_84 = 1.0 / fStack_54;
          }
          else {
            fStack_84 = 0.0;
          }
          if (1e-08 < ABS(fStack_50)) {
            fStack_80 = 1.0 / fStack_50;
          }
          local_88 = local_88 * *(float *)*param_6;
          fStack_80 = fStack_80 * *(float *)(*param_6 + 8);
          fStack_84 = fStack_84 * *(float *)(*param_6 + 4);
          fStack_f0 = fStack_80;
        }
        else {
          local_88 = (float)*(undefined8 *)*param_6;
          fStack_84 = (float)((ulonglong)*(undefined8 *)*param_6 >> 0x20);
          fStack_80 = *(float *)(*param_6 + 8);
        }
      }
      *(ulonglong *)(lVar5 + 0x204) = CONCAT44(fStack_84,local_88);
      *(float *)(lVar5 + 0x20c) = fStack_80;
      lVar7 = FUN_1429f11d0();
      if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) &&
         (*(uint *)(lVar5 + 0x398) =
               *(uint *)(lVar5 + 0x398) ^ (*(uint *)(param_2 + 0x73) ^ *(uint *)(lVar5 + 0x398)) & 1
         , param_10 != '\0')) {
        FUN_1423979a0(lVar5,*(byte *)(param_2 + 0x5e) >> 5 & 1);
        FUN_142397970(lVar5,*(byte *)(param_2 + 0x5e) >> 6 & 1);
        FUN_142398e60(lVar5,(int)param_2[0xd7],0);
        FUN_142398ea0(lVar5,param_2[0xd6]);
        UActorComponent::SetTickableWhenPaused(lVar5,*(byte *)((longlong)param_2 + 0x3c) & 1);
      }
      *(undefined8 *)(lVar5 + 0x858) = param_11;
      FUN_14234b270(lVar5,lVar4);
      FUN_1425fcab0(lVar5,1);
      plVar8 = (longlong *)IStreamingManager::Get();
      (**(code **)(*plVar8 + 0x70))(plVar8,lVar5);
    }
  }
  return lVar5;
}



// FUNCTION 1424600f0 FUN_1424600f0 body=182 status=ok
// SIG undefined FUN_1424600f0(void)

void FUN_1424600f0(void)

{
  FUN_14245fd00();
  return;
}



// FUNCTION 1424601b0 SpawnForceFeedbackAtLocation body=260 status=ok
// SIG undefined SpawnForceFeedbackAtLocation(void)

longlong *
UGameplayStatics::SpawnForceFeedbackAtLocation
          (undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
          undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
          undefined1 param_9)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (param_2 != 0) {
    lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
    if (lVar1 != 0) {
      uVar2 = UWorld::GetWorldSettings(lVar1,0,1);
      plVar3 = (longlong *)FUN_1424462e0(param_2,uVar2,param_5,param_6,param_8,param_9);
      local_28 = *param_4;
      local_20 = *(undefined4 *)(param_4 + 1);
      local_10 = *(undefined4 *)(param_3 + 1);
      local_18 = *param_3;
      FUN_142399680(plVar3,&local_18,&local_28,0,0,0);
      (**(code **)(*plVar3 + 0x548))(plVar3,param_7);
      return plVar3;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 1424602c0 FUN_1424602c0 body=357 status=ok
// SIG undefined FUN_1424602c0(void)

longlong *
FUN_1424602c0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5,int param_6,char param_7,undefined1 param_8,undefined4 param_9,
             undefined4 param_10,undefined8 param_11,undefined1 param_12)

{
  longlong *plVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    plVar1 = (longlong *)
             FUN_1424462e0(param_1,*(undefined8 *)(param_2 + 0x118),param_8,param_9,param_11,
                           param_12);
    *(byte *)(plVar1 + 0x5b) = *(byte *)(plVar1 + 0x5b) & 0xfd;
    *(byte *)(plVar1 + 0x5b) = *(byte *)(plVar1 + 0x5b) | param_7 * '\x02';
    FUN_142382f60(plVar1,param_2,&DAT_146af29ec);
    if (param_6 == 1) {
      local_28 = *param_5;
      local_20 = *(undefined4 *)(param_5 + 1);
      local_18 = *param_4;
      local_10 = *(undefined4 *)(param_4 + 1);
      FUN_142399680(plVar1,&local_18,&local_28);
    }
    else {
      local_18 = *param_5;
      local_10 = *(undefined4 *)(param_5 + 1);
      local_28 = *param_4;
      local_20 = *(undefined4 *)(param_4 + 1);
      FUN_1423982b0(plVar1,&local_28,&local_18,0,0,0);
    }
    (**(code **)(*plVar1 + 0x548))(plVar1,param_10);
    return plVar1;
  }
  return (longlong *)0x0;
}



// FUNCTION 142460430 FUN_142460430 body=319 status=ok
// SIG undefined FUN_142460430(void)

undefined8 FUN_142460430(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_1 != 0) {
    lVar3 = UObject::GetPrivateStaticClass();
    lVar6 = param_1;
    do {
      if (lVar6 == lVar3) {
        if (param_2 == 0) {
          return 0;
        }
        lVar3 = UObject::GetPrivateStaticClass();
        lVar6 = param_1;
        goto LAB_142460475;
      }
      lVar6 = *(longlong *)(lVar6 + 0x30);
    } while (lVar6 != 0);
  }
  return 0;
  while (lVar6 = *(longlong *)(lVar6 + 0x30), lVar4 = lVar7, lVar6 != 0) {
LAB_142460475:
    lVar7 = 0;
    lVar4 = param_1;
    if (lVar6 == lVar3) break;
  }
  if (*(longlong *)(lVar4 + 0xc0) != 0) {
    lVar3 = UObject::GetPrivateStaticClass();
    lVar6 = param_1;
    do {
      lVar4 = param_1;
      if (lVar6 == lVar3) break;
      lVar6 = *(longlong *)(lVar6 + 0x30);
      lVar4 = lVar7;
    } while (lVar6 != 0);
    iVar1 = *(int *)(*(longlong *)(lVar4 + 0xc0) + 0x90);
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar1) ||
       (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)iVar1 * 8) !=
        *(longlong *)(lVar4 + 0xc0) + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return 0;
    }
  }
  lVar3 = UObject::GetPrivateStaticClass();
  lVar6 = param_1;
  do {
    lVar4 = param_1;
    if (lVar6 == lVar3) break;
    lVar6 = *(longlong *)(lVar6 + 0x30);
    lVar4 = lVar7;
  } while (lVar6 != 0);
  FUN_1417846f0(param_2,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar5 = FUN_1417985e0(lVar4,param_2,0,0x1000000,0,0,0,0,0);
  return uVar5;
}



// FUNCTION 142460570 FUN_142460570 body=31 status=ok
// SIG undefined FUN_142460570(void)

void FUN_142460570(longlong *param_1)

{
  (**(code **)(*param_1 + 0x8c8))();
  return;
}



// FUNCTION 142460590 FUN_142460590 body=259 status=ok
// SIG undefined FUN_142460590(void)

void FUN_142460590(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  bool bVar2;
  undefined2 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined2 *local_18;
  undefined8 local_10;
  
  local_10 = 0x10;
  local_18 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  puVar3 = local_18;
  FGenericPlatformString::Memcpy(local_18,L"SpectatorOnly=1",0x20);
  puVar6 = &DAT_143f3eda8;
  if ((int)local_10 != 0) {
    puVar6 = puVar3;
  }
  iVar4 = FUN_141592950(param_3,puVar6,1,0,0xffffffff);
  if ((iVar4 != -1) && (param_1[0x94] != 0)) {
    lVar5 = FUN_1429e18b0();
    for (lVar1 = param_1[0x94]; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar5) {
        if (param_1[0x94] != 0) {
          bVar2 = true;
          goto LAB_142460640;
        }
        break;
      }
    }
  }
  bVar2 = false;
LAB_142460640:
  if (puVar3 != (undefined2 *)0x0) {
    FMemory::Free(puVar3);
  }
  if (bVar2) {
    (**(code **)(*param_1 + 0x830))();
  }
  else {
    (**(code **)(*param_1 + 0x820))(param_1,param_2,&DAT_1468b5d90,&DAT_1468b5da0);
  }
  return;
}



// FUNCTION 1424606a0 FUN_1424606a0 body=326 status=ok
// SIG undefined FUN_1424606a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1424606a0(longlong *param_1,int param_2,undefined1 (*param_3) [12],undefined8 param_4,
                      longlong param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined1 local_a8 [24];
  longlong local_90;
  ushort local_7e;
  uint local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  FActorSpawnParameters::FActorSpawnParameters(local_a8);
  local_7c = local_7c | 0x40;
  local_7e = local_7e | 4;
  local_90 = param_1[0x2a];
  if (param_5 != 0) {
    lVar1 = FUN_1429e18b0();
    lVar3 = param_5;
    do {
      if (lVar3 == lVar1) goto LAB_142460711;
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  param_5 = 0;
LAB_142460711:
  uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  local_b8 = local_a8;
  lVar3 = UWorld::SpawnActor(uVar2,param_5,param_3,param_4);
  if (lVar3 != 0) {
    if (param_2 == 1) {
      *(undefined1 *)(lVar3 + 0x7c4) = 1;
    }
    FRotator::Quaternion(param_4,&local_78);
    local_68 = local_78;
    uStack_60 = uStack_70;
    local_58._12_4_ = 0;
    local_58._0_12_ = *param_3;
    local_48._4_4_ = DAT_1464aa788._4_4_;
    local_48._0_4_ = (undefined4)DAT_1464aa788;
    local_48._8_4_ = DAT_1464aa790;
    local_48._12_4_ = 0;
    FUN_14222b9f0(lVar3,&local_68,0,0);
  }
  return lVar3;
}



// FUNCTION 1424607f0 FUN_1424607f0 body=31 status=ok
// SIG undefined FUN_1424607f0(void)

void FUN_1424607f0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x8c8))();
  return;
}



// FUNCTION 142460810 FUN_142460810 body=409 status=ok
// SIG undefined FUN_142460810(void)

longlong *
FUN_142460810(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,char param_7,byte param_8)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined1 local_78 [16];
  undefined8 local_68;
  
  if ((((param_2 == (longlong *)0x0) || (DAT_146b17150 == (longlong *)0x0)) ||
      (cVar1 = (**(code **)(*DAT_146b17150 + 0x388))(), cVar1 == '\0')) ||
     (((lVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1), lVar3 == 0 ||
       ((*(uint *)(lVar3 + 0x830) & 0x4000) == 0)) || (iVar2 = FUN_1428cf800(lVar3), iVar2 == 1))))
  {
    plVar5 = (longlong *)0x0;
  }
  else {
    if (param_7 == '\0') {
      FAudioDevice::FCreateComponentParams::FCreateComponentParams(local_78,lVar3,0);
      puVar6 = local_78;
      local_68 = param_6;
    }
    else {
      uVar4 = UWorld::GetAudioDevice(lVar3);
      FAudioDevice::FCreateComponentParams::FCreateComponentParams(local_c8,uVar4);
      puVar6 = local_c8;
      local_b8 = param_6;
    }
    plVar5 = (longlong *)FUN_1422c5640(param_2,puVar6);
    if (plVar5 != (longlong *)0x0) {
      FUN_142351eb0(plVar5,param_3);
      FUN_142351310(plVar5,param_4);
      *(byte *)(plVar5 + 0x5e) = *(byte *)(plVar5 + 0x5e) & 0xf6;
      *(byte *)((longlong)plVar5 + 0x2f1) = *(byte *)((longlong)plVar5 + 0x2f1) & 0xf7;
      *(byte *)(plVar5 + 0x5e) = *(byte *)(plVar5 + 0x5e) | param_8 | 0x40;
      *(byte *)((longlong)plVar5 + 0x2f1) = *(byte *)((longlong)plVar5 + 0x2f1) | param_7 << 3;
      uVar7 = (**(code **)(*param_2 + 0x2b8))(param_2);
      *(undefined4 *)(plVar5 + 100) = uVar7;
      (**(code **)(*plVar5 + 0x558))(plVar5,param_5);
    }
  }
  return plVar5;
}



// FUNCTION 1424609b0 FUN_1424609b0 body=503 status=ok
// SIG undefined FUN_1424609b0(void)

longlong *
FUN_1424609b0(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
             undefined8 param_9,byte param_10)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68 [2];
  undefined8 local_58;
  
  if ((((param_2 == (longlong *)0x0) || (DAT_146b17150 == (longlong *)0x0)) ||
      (cVar1 = (**(code **)(*DAT_146b17150 + 0x388))(), cVar1 == '\0')) ||
     (((lVar4 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1), lVar4 == 0 ||
       ((*(uint *)(lVar4 + 0x830) & 0x4000) == 0)) || (iVar3 = FUN_1428cf800(lVar4), iVar3 == 1))))
  {
    plVar5 = (longlong *)0x0;
  }
  else {
    bVar2 = UWorld::IsGameWorld(lVar4);
    FAudioDevice::FCreateComponentParams::FCreateComponentParams(local_68,lVar4,0);
    local_80 = *(undefined4 *)(param_3 + 1);
    local_88 = *param_3;
    FAudioDevice::FCreateComponentParams::SetLocation(local_68,&local_88);
    local_68[0] = param_8;
    local_58 = param_9;
    plVar5 = (longlong *)FUN_1422c5640(param_2,local_68);
    if (plVar5 != (longlong *)0x0) {
      local_88 = *param_4;
      local_80 = *(undefined4 *)(param_4 + 1);
      bVar6 = 0;
      local_70 = *(undefined4 *)(param_3 + 1);
      local_78 = *param_3;
      FUN_142399680(plVar5,&local_78,&local_88,0,0,0);
      FUN_142351eb0(plVar5,param_5);
      FUN_142351310(plVar5,param_6);
      *(byte *)(plVar5 + 0x5e) = *(byte *)(plVar5 + 0x5e) & 0xb7;
      if (bVar2 == 0) {
        bVar6 = 0x40;
      }
      *(byte *)(plVar5 + 0x5e) =
           bVar6 | *(byte *)(plVar5 + 0x5e) & 0xfe | (bVar2 & 0xf7) << 3 | param_10;
      uVar7 = (**(code **)(*param_2 + 0x2b8))(param_2);
      *(undefined4 *)(plVar5 + 100) = uVar7;
      (**(code **)(*plVar5 + 0x558))(plVar5,param_7);
    }
  }
  return plVar5;
}



// FUNCTION 142460bb0 FUN_142460bb0 body=919 status=ok
// SIG undefined FUN_142460bb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_142460bb0(longlong *param_1,longlong *param_2,longlong param_3,float *param_4,
             undefined8 *param_5,int param_6,undefined1 param_7,undefined4 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             byte param_13)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  float *pfVar6;
  longlong lVar7;
  longlong *plVar8;
  byte bVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined1 local_130;
  longlong local_128;
  float local_120;
  undefined8 local_118;
  float local_110;
  undefined8 local_108;
  undefined4 local_100;
  longlong *local_f8;
  undefined8 local_e8 [2];
  undefined8 local_d8;
  undefined1 local_ce;
  undefined1 local_98 [48];
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_118 = param_11;
  local_108 = param_12;
  if ((param_1 == (longlong *)0x0) || (param_2 == (longlong *)0x0)) {
    plVar8 = (longlong *)0x0;
  }
  else {
    bVar9 = 0;
    fVar16 = param_4[2];
    fVar14 = (float)*(undefined8 *)param_4;
    fVar15 = (float)((ulonglong)*(undefined8 *)param_4 >> 0x20);
    local_f8 = param_1;
    if (param_6 != 1) {
      fVar16 = param_4[2];
      fVar15 = param_4[1];
      fVar14 = *param_4;
      local_128 = 0;
      if (param_3 == 0) {
        fVar1 = *(float *)(param_2 + 0x42);
        fVar2 = *(float *)((longlong)param_2 + 0x214);
        fVar3 = *(float *)(param_2 + 0x43);
        fVar4 = *(float *)((longlong)param_2 + 0x21c);
        fVar14 = *(float *)(param_2 + 0x46) * fVar14;
        fVar15 = *(float *)((longlong)param_2 + 0x234) * fVar15;
        fVar16 = *(float *)(param_2 + 0x47) * fVar16;
        fVar11 = fVar16 * fVar2 - fVar15 * fVar3;
        fVar12 = fVar14 * fVar3 - fVar16 * fVar1;
        fVar13 = fVar15 * fVar1 - fVar14 * fVar2;
        fVar11 = fVar11 + fVar11;
        fVar12 = fVar12 + fVar12;
        fVar13 = fVar13 + fVar13;
        fVar14 = (fVar13 * fVar2 - fVar12 * fVar3) + fVar4 * fVar11 + fVar14 +
                 *(float *)(param_2 + 0x44);
        fVar15 = (fVar11 * fVar3 - fVar13 * fVar1) + fVar4 * fVar12 + fVar15 +
                 *(float *)((longlong)param_2 + 0x224);
        fVar16 = (fVar12 * fVar1 - fVar11 * fVar2) + fVar4 * fVar13 + fVar16 +
                 *(float *)(param_2 + 0x45);
        local_120 = fVar16;
      }
      else {
        pfVar6 = (float *)(**(code **)(*param_2 + 0x420))(param_2,local_98,fVar15,0);
        fVar1 = *pfVar6;
        fVar2 = pfVar6[1];
        fVar3 = pfVar6[2];
        fVar4 = pfVar6[3];
        fVar14 = pfVar6[8] * fVar14;
        fVar15 = pfVar6[9] * fVar15;
        fVar16 = pfVar6[10] * fVar16;
        fVar11 = fVar16 * fVar2 - fVar15 * fVar3;
        fVar12 = fVar14 * fVar3 - fVar16 * fVar1;
        fVar13 = fVar15 * fVar1 - fVar14 * fVar2;
        fVar11 = fVar11 + fVar11;
        fVar12 = fVar12 + fVar12;
        fVar13 = fVar13 + fVar13;
        fVar14 = (fVar13 * fVar2 - fVar12 * fVar3) + fVar4 * fVar11 + fVar14 + pfVar6[4];
        fVar15 = (fVar11 * fVar3 - fVar13 * fVar1) + fVar4 * fVar12 + fVar15 + pfVar6[5];
        fVar16 = (fVar12 * fVar1 - fVar11 * fVar2) + fVar4 * fVar13 + fVar16 + pfVar6[6];
        local_120 = fVar16;
      }
    }
    local_128 = param_2[0x23];
    lVar7 = param_2[0x24];
    if (lVar7 == 0) {
      lVar7 = FUN_1423407b0(param_2);
    }
    FAudioDevice::FCreateComponentParams::FCreateComponentParams(local_e8,lVar7,local_128);
    local_128 = CONCAT44(fVar15,fVar14);
    local_120 = fVar16;
    FAudioDevice::FCreateComponentParams::SetLocation(local_e8,&local_128);
    local_ce = param_7;
    local_e8[0] = local_118;
    local_d8 = local_108;
    plVar8 = (longlong *)FUN_1422c5640(param_1,local_e8);
    if ((plVar8 != (longlong *)0x0) &&
       ((lVar7 = plVar8[0x24], lVar7 != 0 || (lVar7 = FUN_1423407b0(plVar8), lVar7 != 0)))) {
      bVar5 = UWorld::IsGameWorld(lVar7);
      FUN_142382f60(plVar8,param_2,&DAT_146af29ec,param_3);
      local_108 = *param_5;
      local_118 = *(undefined8 *)param_4;
      local_130 = 0;
      local_138 = 0;
      if (param_6 == 1) {
        local_100 = *(undefined4 *)(param_5 + 1);
        local_110 = param_4[2];
        FUN_142399680(plVar8);
      }
      else {
        local_100 = *(undefined4 *)(param_5 + 1);
        local_110 = param_4[2];
        FUN_1423982b0(plVar8,&local_118,&local_108,0);
      }
      FUN_142351eb0(plVar8,param_8);
      FUN_142351310(plVar8,param_9);
      *(byte *)(plVar8 + 0x5e) = *(byte *)(plVar8 + 0x5e) & 0xb7;
      if (bVar5 == 0) {
        bVar9 = 0x40;
      }
      *(byte *)(plVar8 + 0x5e) =
           bVar9 | *(byte *)(plVar8 + 0x5e) & 0xfe | (bVar5 & 0xf7) << 3 | param_13;
      uVar10 = (**(code **)(*local_f8 + 0x2b8))();
      *(undefined4 *)(plVar8 + 100) = uVar10;
      (**(code **)(*plVar8 + 0x558))(plVar8,param_10);
    }
  }
  return plVar8;
}



// FUNCTION 142460f70 FUN_142460f70 body=3665 status=ok
// SIG undefined FUN_142460f70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142460f70(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  void *pvVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  wchar_t *_Str1;
  undefined2 *puVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  short *psVar17;
  short *psVar18;
  short *psVar19;
  bool bVar20;
  undefined1 auStack_548 [32];
  short *local_528;
  undefined8 local_520;
  short *local_518;
  int local_510;
  int local_50c;
  short *local_508;
  int local_500;
  int local_4fc;
  undefined2 *local_4f8;
  int local_4f0;
  longlong local_4e8;
  undefined4 *local_4d8;
  ulonglong *puStack_4d0;
  short *local_4c8;
  int local_4c0;
  int local_4bc;
  short *local_4b8;
  undefined4 *puStack_4b0;
  longlong *local_4a8;
  longlong local_4a0;
  undefined8 local_498;
  longlong *local_490;
  undefined8 local_488;
  longlong *local_480;
  longlong local_478;
  undefined8 local_470;
  undefined4 *local_468;
  undefined4 *puStack_460;
  undefined *local_458;
  undefined8 local_450;
  longlong local_448;
  undefined8 local_440;
  longlong local_438;
  undefined1 local_430 [8];
  longlong *local_428;
  undefined1 local_418 [16];
  undefined8 local_408;
  undefined8 uStack_400;
  undefined1 local_3f8 [16];
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined1 local_3d8 [16];
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined1 local_3b8 [8];
  longlong *local_3b0;
  undefined1 local_3a0 [8];
  longlong *local_398;
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  undefined4 local_368;
  undefined1 local_360 [16];
  undefined1 local_350 [16];
  undefined8 *local_340;
  int local_338;
  undefined4 local_334;
  undefined1 local_330 [16];
  int local_320;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined4 local_2f8;
  undefined1 local_2f0 [16];
  undefined1 local_2e0 [16];
  undefined8 *local_2d0;
  ulonglong local_2c8;
  undefined1 local_2c0 [16];
  int local_2b0;
  undefined1 local_2a8 [8];
  longlong *local_2a0;
  undefined1 local_290 [8];
  longlong *local_288;
  undefined1 local_278 [8];
  longlong *local_270;
  undefined1 local_260 [8];
  longlong *local_258;
  undefined1 local_248 [8];
  longlong *local_240;
  undefined1 local_230 [8];
  longlong *local_228;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [112];
  undefined1 local_178 [24];
  undefined1 local_160 [24];
  undefined1 local_148 [24];
  undefined1 local_130 [112];
  undefined4 local_c0 [4];
  undefined1 local_b0 [8];
  longlong *local_a8;
  char local_98;
  undefined4 local_90 [4];
  undefined1 local_80 [8];
  longlong *local_78;
  char local_68;
  undefined4 local_60 [4];
  undefined1 local_50 [8];
  longlong *local_48;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_548;
  local_480 = (longlong *)param_1[4];
  local_4a8 = param_1;
  FURL::FURL(local_1e8,0);
  FURL::LoadURLConfig(local_1e8,L"DefaultPlayer",&DAT_1468e2410);
  psVar19 = (short *)0x0;
  local_498 = 8;
  local_4a0 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4a0,0);
  FGenericPlatformString::Memcpy(local_4a0,L"Unknown",0x10);
  FCommandLine::Get();
  local_478 = 0;
  local_458 = &DAT_14509fc44;
  local_470 = 0;
  cVar5 = FParse::Value(&DAT_14509fc44,L"-REPLAY=",&local_478,1);
  if (cVar5 != '\0') {
    local_490 = (longlong *)0x0;
    local_488 = 0;
    cVar5 = (**(code **)(*param_1 + 0x2e8))(param_1,&local_478,0,&local_490);
    plVar7 = local_490;
    for (iVar16 = (int)local_488; iVar16 != 0; iVar16 = iVar16 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_490 != (longlong *)0x0) {
      FMemory::Free(local_490);
    }
    if (cVar5 != '\0') goto LAB_142461d59;
  }
  plVar7 = (longlong *)UGameMapsSettings::GetPrivateStaticClass();
  lVar8 = plVar7[0x1f];
  if (lVar8 == 0) {
    local_4e8 = lVar8;
    (**(code **)(*plVar7 + 0x368))(plVar7);
    lVar8 = plVar7[0x1f];
  }
  local_4e8 = lVar8;
  FUN_141e0eac0(&local_4f8);
  local_528 = (short *)0x0;
  local_520 = 0;
  cVar5 = FParse::Token(&local_458,&local_528,0);
  iVar16 = local_4f0;
  puVar12 = local_4f8;
  if (cVar5 == '\0') {
LAB_14246112d:
    local_4c0 = *(int *)(lVar8 + 0x48);
    lVar15 = (longlong)local_4c0;
    psVar18 = psVar19;
    if (local_4f0 < 2) {
      pvVar3 = *(void **)(lVar8 + 0x40);
      local_4c8 = (short *)0x0;
      if (local_4c0 == 0) {
        local_4bc = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_4c8,local_4c0,0);
        psVar18 = local_4c8;
        _guard_xfg_dispatch_icall_nop(local_4c8,pvVar3,lVar15 * 2);
      }
    }
    else {
      iVar14 = local_4c0 + -1;
      if (local_4c0 == 0) {
        iVar14 = 0;
      }
      if ((local_4f0 != 0) || (iVar6 = 1, iVar14 == 0)) {
        iVar6 = 0;
      }
      local_518 = (short *)0x0;
      local_510 = local_4f0;
      if ((local_4f0 == 0) && (iVar6 + iVar14 == 0)) {
        local_50c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_518,iVar6 + iVar14 + local_4f0,0);
        psVar18 = local_518;
        _guard_xfg_dispatch_icall_nop(local_518,puVar12,(longlong)iVar16 * 2);
      }
      iVar16 = local_510;
      local_4d8 = *(undefined4 **)(local_4e8 + 0x40);
      local_4c0 = local_510;
      local_4bc = local_50c;
      if (iVar14 != 0) {
        lVar8 = (longlong)local_510;
        local_510 = iVar14 + (uint)(local_510 == 0) + local_510;
        if (local_50c < local_510) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_518,iVar16);
          psVar18 = local_518;
        }
        iVar4 = local_50c;
        iVar6 = local_510;
        _guard_xfg_dispatch_icall_nop
                  (psVar18 + (lVar8 - (ulonglong)(iVar16 != 0)),local_4d8,(longlong)iVar14 * 2);
        (psVar18 + (lVar8 - (ulonglong)(iVar16 != 0)))[iVar14] = 0;
        local_4c0 = iVar6;
        local_4bc = iVar4;
      }
    }
    iVar16 = local_4bc;
    iVar14 = local_4c0;
    if (local_528 != (short *)0x0) {
      FMemory::Free(local_528);
    }
    local_520 = CONCAT44(iVar16,iVar14);
    param_1 = local_4a8;
    local_528 = psVar18;
LAB_1424612a1:
    psVar18 = local_528;
    if (iVar14 == 0) goto LAB_1424612a5;
  }
  else {
    if ((int)local_520 != 0) {
      iVar14 = (int)local_520;
      if (*local_528 == 0x2d) goto LAB_14246112d;
      goto LAB_1424612a1;
    }
LAB_1424612a5:
    psVar18 = &DAT_143f3eda8;
  }
  FUN_14289aca0(local_318,local_1e8,psVar18,1);
  if (local_2b0 == 0) {
LAB_1424613fc:
    psVar18 = psVar19;
    psVar17 = psVar19;
    if (0 < *(int *)(DAT_146b17150 + 0x7c0)) {
      do {
        if (*(int *)((longlong)psVar17 + *(longlong *)(DAT_146b17150 + 0x7b8) + 8) == 0) {
          _Str1 = L"";
        }
        else {
          _Str1 = *(wchar_t **)((longlong)psVar17 + *(longlong *)(DAT_146b17150 + 0x7b8));
        }
        iVar16 = _wcsnicmp(_Str1,L"automation ",0xb);
        if (iVar16 == 0) {
          FUN_1416a84c0(1);
          FUN_1416a8180(0);
          goto LAB_142461d1f;
        }
        uVar13 = (int)psVar18 + 1;
        psVar18 = (short *)(ulonglong)uVar13;
        psVar17 = psVar17 + 8;
      } while ((int)uVar13 < *(int *)(DAT_146b17150 + 0x7c0));
    }
    puVar12 = &DAT_143f3eda8;
    if (local_4f0 != 0) {
      puVar12 = local_4f8;
    }
    psVar18 = &DAT_143f3eda8;
    if ((int)local_520 != 0) {
      psVar18 = local_528;
    }
    iVar16 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(psVar18,puVar12);
    if (iVar16 == 0) {
      lVar8 = FText::FromString(local_148,local_2f0);
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_230,
                         L"The map specified on the commandline \'{0}\' could not be found. Exiting."
                         ,L"Engine",L"MapNotFoundNoFallback");
      puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_1f8,uVar9);
      local_90[0] = 4;
      FText::FText(local_80,lVar8);
      local_440 = *puVar10;
      local_468 = local_90;
      puStack_460 = local_60;
      local_438 = puVar10[1];
      local_68 = '\x01';
      if (local_438 != 0) {
        LOCK();
        *(int *)(local_438 + 8) = *(int *)(local_438 + 8) + 1;
        UNLOCK();
      }
      local_3e8 = local_468;
      uStack_3e0 = puStack_460;
      uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_3d8,&local_3e8);
      uVar9 = FText::Format(local_248,&local_440,uVar9);
      FText::FText(local_3a0,uVar9);
      if (local_240 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_240 + 1;
        lVar15 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*local_240)(local_240);
          LOCK();
          piVar1 = (int *)((longlong)local_240 + 0xc);
          iVar16 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)(*local_240 + 8))(local_240,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_3d8);
      if ((local_68 != '\0') && (local_68 = '\0', local_78 != (longlong *)0x0)) {
        LOCK();
        plVar7 = local_78 + 1;
        lVar15 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar1 = (int *)((longlong)local_78 + 0xc);
          iVar16 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)(*local_78 + 8))(local_78,1);
          }
        }
      }
      plVar7 = (longlong *)puVar10[1];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar7 + 1;
        lVar15 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar16 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      plVar7 = *(longlong **)(lVar8 + 8);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar7 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar16 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      if (local_228 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_228 + 1;
        lVar8 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_228)(local_228);
          LOCK();
          piVar1 = (int *)((longlong)local_228 + 0xc);
          iVar16 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)(*local_228 + 8))(local_228,1);
          }
        }
      }
      FUN_141678850(0,local_3a0,0);
      FUN_1416a8180(0);
    }
    else {
      lVar8 = FText::FromString(local_178,&local_528);
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_290,
                         L"The map specified on the commandline \'{0}\' could not be found. Would you like to load the default map instead?"
                         ,L"Engine",L"MapNotFound");
      puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_218,uVar9);
      local_c0[0] = 4;
      FText::FText(local_b0,lVar8);
      local_450 = *puVar10;
      local_4b8 = (short *)local_c0;
      puStack_4b0 = local_90;
      local_448 = puVar10[1];
      local_98 = '\x01';
      if (local_448 != 0) {
        LOCK();
        *(int *)(local_448 + 8) = *(int *)(local_448 + 8) + 1;
        UNLOCK();
      }
      local_3c8 = local_4b8;
      uStack_3c0 = puStack_4b0;
      uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_418,&local_3c8);
      uVar9 = FText::Format(local_2a8,&local_450,uVar9);
      FText::FText(local_430,uVar9);
      if (local_2a0 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_2a0 + 1;
        lVar15 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*local_2a0)(local_2a0);
          LOCK();
          piVar1 = (int *)((longlong)local_2a0 + 0xc);
          iVar16 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)(*local_2a0 + 8))(local_2a0,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_418);
      if ((local_98 != '\0') && (local_98 = '\0', local_a8 != (longlong *)0x0)) {
        LOCK();
        plVar7 = local_a8 + 1;
        lVar15 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*local_a8)(local_a8);
          LOCK();
          piVar1 = (int *)((longlong)local_a8 + 0xc);
          iVar16 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)(*local_a8 + 8))(local_a8,1);
          }
        }
      }
      plVar7 = (longlong *)puVar10[1];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar7 + 1;
        lVar15 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar16 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      plVar7 = *(longlong **)(lVar8 + 8);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar7 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar16 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      if (local_288 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_288 + 1;
        lVar8 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_288)(local_288);
          LOCK();
          piVar1 = (int *)((longlong)local_288 + 0xc);
          iVar16 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)(*local_288 + 8))(local_288,1);
          }
        }
      }
      puVar12 = &DAT_143f3eda8;
      if (local_4f0 != 0) {
        puVar12 = local_4f8;
      }
      psVar18 = &DAT_143f3eda8;
      if ((int)local_520 != 0) {
        psVar18 = local_528;
      }
      iVar16 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(psVar18,puVar12);
      if (iVar16 != 0) {
        iVar16 = FUN_141678850(2,local_430);
        if (iVar16 != 5) {
          FUN_1416a8180(0);
          local_398 = local_428;
          goto LAB_142461cf1;
        }
      }
      iVar16 = *(int *)(local_4e8 + 0x48);
      if (local_4f0 < 2) {
        pvVar3 = *(void **)(local_4e8 + 0x40);
        local_4b8 = (short *)0x0;
        puStack_4b0 = (undefined4 *)CONCAT44(puStack_4b0._4_4_,iVar16);
        bVar20 = iVar16 == 0;
        if (!bVar20) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_4b8,iVar16,0);
          psVar19 = local_4b8;
          _guard_xfg_dispatch_icall_nop(local_4b8,pvVar3,(longlong)iVar16 * 2);
          iVar6 = (int)puStack_4b0;
          goto LAB_142461831;
        }
      }
      else {
        iVar14 = iVar16 + -1;
        if (iVar16 == 0) {
          iVar14 = 0;
        }
        if ((local_4f0 != 0) || (iVar16 = 1, iVar14 == 0)) {
          iVar16 = 0;
        }
        local_508 = (short *)0x0;
        local_4d8 = (undefined4 *)local_4f8;
        local_500 = local_4f0;
        if ((local_4f0 == 0) && (iVar16 + iVar14 == 0)) {
          local_4fc = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_508,local_4f0 + iVar16 + iVar14,0)
          ;
          psVar19 = local_508;
          _guard_xfg_dispatch_icall_nop(local_508,local_4d8,(longlong)local_4f0 * 2);
        }
        iVar16 = local_500;
        local_4d8 = *(undefined4 **)(local_4e8 + 0x40);
        iVar6 = local_500;
        if (iVar14 != 0) {
          lVar8 = (longlong)local_500;
          local_500 = local_500 + (uint)(local_500 == 0) + iVar14;
          if (local_4fc < local_500) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_508,iVar16);
            psVar19 = local_508;
          }
          iVar6 = local_500;
          _guard_xfg_dispatch_icall_nop
                    (psVar19 + (lVar8 - (ulonglong)(iVar16 != 0)),local_4d8,(longlong)iVar14 * 2);
          (psVar19 + (lVar8 - (ulonglong)(iVar16 != 0)))[iVar14] = 0;
        }
        puStack_4b0 = (undefined4 *)CONCAT44(puStack_4b0._4_4_,iVar6);
        param_1 = local_4a8;
LAB_142461831:
        bVar20 = iVar6 == 0;
      }
      plVar7 = local_480;
      psVar18 = &DAT_143f3eda8;
      if (!bVar20) {
        psVar18 = psVar19;
      }
      lVar8 = *local_480;
      uVar9 = FUN_14289aca0(local_130,local_1e8,psVar18,1);
      iVar16 = (**(code **)(lVar8 + 0x440))(plVar7,param_1[6],uVar9,&local_4a0);
      if (psVar19 != (short *)0x0) {
        FMemory::Free(psVar19);
      }
      if (local_428 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_428 + 1;
        lVar8 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_428)(local_428);
          LOCK();
          piVar1 = (int *)((longlong)local_428 + 0xc);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*local_428 + 8))(local_428,1);
          }
        }
      }
      if (iVar16 != 1) goto LAB_142461ab9;
      uVar9 = FText::FromString(local_160,&local_4f8);
      uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_260,L"The default map \'{0}\' could not be found. Exiting.",
                          L"Engine",L"DefaultMapNotFound");
      plVar7 = (longlong *)FTextFormat::FTextFormat(local_208,uVar11);
      local_60[0] = 4;
      FText::FText(local_50,uVar9);
      local_468 = (undefined4 *)*plVar7;
      local_4d8 = local_60;
      puStack_4d0 = &local_30;
      puStack_460 = (undefined4 *)plVar7[1];
      local_38 = '\x01';
      if (puStack_460 != (undefined4 *)0x0) {
        LOCK();
        puStack_460[2] = puStack_460[2] + 1;
        UNLOCK();
      }
      local_408 = local_4d8;
      uStack_400 = puStack_4d0;
      uVar11 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_3f8,&local_408);
      uVar11 = FText::Format(local_278,&local_468,uVar11);
      FText::FText(local_3b8,uVar11);
      if (local_270 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_270 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_270)(local_270);
          LOCK();
          piVar1 = (int *)((longlong)local_270 + 0xc);
          iVar16 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)(*local_270 + 8))(local_270,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_3f8);
      if ((local_38 != '\0') && (local_38 = '\0', local_48 != (longlong *)0x0)) {
        LOCK();
        plVar2 = local_48 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          iVar16 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)(*local_48 + 8))(local_48,1);
          }
        }
      }
      plVar7 = (longlong *)plVar7[1];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar7 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar16 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(uVar9);
      if (local_258 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_258 + 1;
        lVar8 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_258)(local_258);
          LOCK();
          piVar1 = (int *)((longlong)local_258 + 0xc);
          iVar16 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)(*local_258 + 8))(local_258,1);
          }
        }
      }
      FUN_141678850(0,local_3b8,0);
      FUN_1416a8180(0);
      local_398 = local_3b0;
    }
LAB_142461cf1:
    if (local_398 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_398 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_398)(local_398);
        LOCK();
        piVar1 = (int *)((longlong)local_398 + 0xc);
        iVar16 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (**(code **)(*local_398 + 8))(local_398,1);
        }
      }
    }
  }
  else {
    FString::FString(local_388,local_318);
    FString::FString(local_378,local_308);
    local_368 = local_2f8;
    FString::FString(local_360,local_2f0);
    FString::FString(local_350,local_2e0);
    local_340 = (undefined8 *)0x0;
    local_338 = (int)local_2c8;
    if (local_338 == 0) {
      local_334 = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_340,local_2c8 & 0xffffffff,0);
      puVar10 = local_340;
      do {
        *puVar10 = 0;
        iVar16 = *(int *)(local_2d0 + 1);
        pvVar3 = (void *)*local_2d0;
        *(int *)(puVar10 + 1) = iVar16;
        if (iVar16 == 0) {
          *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar10,iVar16,0);
          _guard_xfg_dispatch_icall_nop((void *)*puVar10,pvVar3,(longlong)iVar16 * 2);
        }
        puVar10 = puVar10 + 2;
        local_2d0 = local_2d0 + 2;
        uVar13 = (int)local_2c8 - 1;
        local_2c8 = (ulonglong)uVar13;
        param_1 = local_4a8;
      } while (uVar13 != 0);
    }
    FString::FString(local_330,local_2c0);
    local_320 = local_2b0;
    iVar16 = (**(code **)(*local_480 + 0x440))(local_480,param_1[6],local_388,&local_4a0);
    if (iVar16 == 1) goto LAB_1424613fc;
LAB_142461ab9:
    (**(code **)(*param_1 + 0x360))(param_1);
  }
LAB_142461d1f:
  FURL::~FURL(local_318);
  if (local_528 != (short *)0x0) {
    FMemory::Free();
  }
  if (local_4f8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
LAB_142461d59:
  if (local_478 != 0) {
    FMemory::Free();
  }
  if (local_4a0 != 0) {
    FMemory::Free();
  }
  FURL::~FURL(local_1e8);
  return;
}



// FUNCTION 142461dd0 FUN_142461dd0 body=73 status=ok
// SIG undefined FUN_142461dd0(void)

void FUN_142461dd0(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x778))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(longlong *)param_1[0x96] + 0x7b0))();
    if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142461e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x930))(param_1,DAT_146af3988);
      return;
    }
  }
  return;
}



// FUNCTION 142461e20 FUN_142461e20 body=93 status=ok
// SIG undefined FUN_142461e20(void)

void FUN_142461e20(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = param_1[0xa0];
  if (lVar2 == DAT_146af3918) {
    (**(code **)(*param_1 + 0x930))(param_1,DAT_146af3980);
    lVar2 = param_1[0xa0];
  }
  if (lVar2 == DAT_146af3980) {
    cVar1 = FUN_14293c2f0(param_1);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142461e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x910))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 142461ea0 FUN_142461ea0 body=945 status=ok
// SIG undefined FUN_142461ea0(void)

void FUN_142461ea0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  void *pvVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined2 *local_b8;
  int local_b0;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined8 local_90;
  longlong local_88 [2];
  longlong local_78;
  void *local_60;
  int local_58;
  int local_54;
  longlong local_50;
  longlong *local_40;
  int local_38;
  longlong local_30;
  
  uVar5 = FCommandLine::Get();
  cVar4 = FParse::Param(uVar5,L"NOREPLAYS");
  if (cVar4 != '\0') {
    return;
  }
  lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar6 == 0) {
    return;
  }
  if ((*(longlong *)(lVar6 + 0x108) != 0) && (cVar4 = FUN_142416ee0(), cVar4 != '\0')) {
    return;
  }
  FURL::FURL(local_88,0);
  local_a0 = *(int *)(param_2 + 1);
  lVar10 = (longlong)local_a0;
  pvVar1 = (void *)*param_2;
  local_a8 = (void *)0x0;
  if (local_a0 == 0) {
    local_9c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,local_a0,0);
    _guard_xfg_dispatch_icall_nop(local_a8,pvVar1,lVar10 * 2);
  }
  puVar7 = (undefined8 *)FUN_1428cc8c0(lVar6,&local_b8);
  if (*(int *)(puVar7 + 1) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)*puVar7;
  }
  FString::ReplaceInline(&local_a8,&DAT_1450a384c,puVar9,1);
  if (local_b8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  pvVar1 = local_a8;
  lVar10 = (longlong)local_a0;
  local_58 = local_a0;
  if ((local_a0 == 0) && (local_54 == 0)) {
    local_54 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_60,local_a0);
    _guard_xfg_dispatch_icall_nop(local_60,pvVar1,lVar10 * 2);
  }
  if (*(int *)(param_3 + 1) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)*param_3;
  }
  FString::PrintfImpl(&local_b8,L"DemoFriendlyName=%s",puVar9);
  puVar9 = &DAT_143f3eda8;
  if (local_b0 != 0) {
    puVar9 = local_b8;
  }
  FURL::AddOption(local_88,puVar9);
  if (local_b8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  puVar7 = (undefined8 *)*param_4;
  puVar11 = puVar7 + (longlong)*(int *)(param_4 + 1) * 2;
  for (; puVar7 != puVar11; puVar7 = puVar7 + 2) {
    if (*(int *)(puVar7 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar7;
    }
    FURL::AddOption(local_88,puVar9);
  }
  plVar8 = *(longlong **)(lVar6 + 0x108);
  bVar3 = false;
  if (((plVar8 == (longlong *)0x0) || ((char)plVar8[0x113] == '\0')) ||
     (*(char *)((longlong)plVar8 + 0x9f9) == '\0')) {
    FUN_1428c8ca0(lVar6);
    bVar3 = true;
    FName::FName(&local_b8,L"DemoNetDriver",1);
    cVar4 = FUN_14286abe0(DAT_146b17150,lVar6,local_b8,local_b8);
    if (cVar4 == '\0') goto LAB_1424621a2;
    plVar8 = (longlong *)FUN_142873bb0(DAT_146b17150,lVar6,local_b8);
    if (plVar8 == (longlong *)0x0) {
LAB_14246211a:
      plVar8 = (longlong *)0x0;
    }
    else {
      lVar10 = FUN_1429244d0();
      if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
          lVar10 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_14246211a;
    }
    *(longlong **)(lVar6 + 0x108) = plVar8;
  }
  (**(code **)(*plVar8 + 0x380))(plVar8,lVar6);
  lVar10 = UWorld::FindCollectionByType(lVar6,0);
  if (lVar10 != 0) {
    *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)(lVar6 + 0x108);
  }
  local_98 = 0;
  local_90 = 0;
  plVar8 = *(longlong **)(lVar6 + 0x108);
  if (bVar3) {
    cVar4 = (**(code **)(*plVar8 + 0x290))(plVar8,lVar6 + 0x28,local_88,0,&local_98);
  }
  else {
    cVar4 = FUN_142409850(plVar8,local_88);
  }
  if (cVar4 == '\0') {
    *(undefined8 *)(lVar6 + 0x108) = 0;
  }
  if (local_98 != 0) {
    FMemory::Free();
  }
LAB_1424621a2:
  if (local_a8 != (void *)0x0) {
    FMemory::Free();
  }
  plVar8 = local_40;
  if (local_30 != 0) {
    FMemory::Free();
    plVar8 = local_40;
  }
  for (; local_38 != 0; local_38 = local_38 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_40 != (longlong *)0x0) {
    FMemory::Free(local_40);
  }
  if (local_50 != 0) {
    FMemory::Free();
  }
  if (local_60 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  if (local_88[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142462260 FUN_142462260 body=17 status=ok
// SIG undefined FUN_142462260(void)

void FUN_142462260(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014246226a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x930))(param_1,DAT_146af3998);
  return;
}



// FUNCTION 142462280 FUN_142462280 body=111 status=ok
// SIG undefined FUN_142462280(void)

void FUN_142462280(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if (lVar3 != 0) {
    bVar1 = false;
    if (*(longlong *)(lVar3 + 0x108) != 0) {
      cVar2 = FUN_142416ee0();
      bVar1 = false;
      if (cVar2 != '\0') {
        bVar1 = true;
      }
    }
    FUN_1428c8ca0(lVar3);
    if (bVar1) {
      FUN_1428670d0(DAT_146b17150,param_1[6]);
    }
  }
  return;
}



// FUNCTION 1424622f0 FUN_1424622f0 body=2091 status=ok
// SIG undefined FUN_1424622f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1424622f0(undefined8 param_1,undefined8 *param_2,float *param_3,float *param_4,
                       float param_5,char param_6,float param_7,float param_8,int param_9,
                       undefined8 param_10,undefined8 param_11,char param_12)

{
  void *pvVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float *pfVar5;
  int iVar6;
  longlong lVar7;
  float *pfVar8;
  bool bVar9;
  bool bVar10;
  float extraout_XMM0_Da;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_248 [32];
  undefined8 local_228;
  undefined4 *local_220;
  undefined1 *local_218;
  undefined8 local_210;
  float local_208;
  float local_204;
  float local_200;
  undefined1 local_1fc [4];
  float local_1f8;
  float local_1f0 [2];
  undefined8 local_1e8;
  float local_1e0;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float *local_1c8;
  float local_1c0 [2];
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 *local_1a8;
  undefined4 local_1a0;
  float local_19c;
  float local_188;
  float local_180 [6];
  undefined1 local_168 [72];
  longlong local_120;
  longlong local_100;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  local_200 = param_4[1] - param_3[1];
  local_204 = *param_4 - *param_3;
  fVar18 = 1.0;
  fVar16 = param_4[2] - param_3[2];
  local_1b0 = param_10;
  fVar17 = local_200 * local_200 + local_204 * local_204;
  local_1b8 = param_11;
  if (fVar17 == 1.0) {
    local_208 = fVar16;
    if (fVar16 != 0.0) {
LAB_1424624b4:
      local_208 = 0.0;
    }
  }
  else {
    if (1e-08 <= fVar17) {
      auVar15 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
      fVar12 = auVar15._0_4_;
      fVar12 = fVar12 + fVar12 * (0.5 - fVar17 * 0.5 * fVar12 * fVar12);
      fVar12 = fVar12 + fVar12 * (0.5 - fVar17 * 0.5 * fVar12 * fVar12);
      local_200 = fVar12 * local_200;
      local_204 = fVar12 * local_204;
      goto LAB_1424624b4;
    }
    local_204 = DAT_1468b5d90;
    local_200 = DAT_1468b5d94;
    local_208 = DAT_1468b5d98;
  }
  fVar19 = local_200;
  fVar12 = local_204;
  param_5 = param_5 * param_5;
  local_1f8 = SQRT(fVar17);
  local_1c8 = param_3;
  local_1a8 = param_2;
  uVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  uVar3 = uVar2;
  if (uVar2 == 0) {
LAB_142462a7c:
    return uVar3 & 0xffffffffffffff00;
  }
  if (ABS(param_8) <= 1e-08) {
    uVar3 = FUN_1428cc5b0(uVar2);
    param_8 = extraout_XMM0_Da;
  }
  pvVar1 = ThreadLocalStoragePointer;
  param_8 = -param_8;
  fVar16 = param_5 * param_5 - ((fVar16 + fVar16) * param_5 + fVar17 * param_8) * param_8;
  if (fVar16 < 0.0) goto LAB_142462a7c;
  fVar16 = SQRT(fVar16);
  fVar17 = 1.0 / (param_8 * SQRT(fVar17));
  fVar13 = (fVar16 + param_5) * fVar17;
  fVar17 = (param_5 - fVar16) * fVar17;
  fVar16 = param_5 / (fVar13 * fVar13 + 1.0);
  fVar11 = param_5 / (fVar17 * fVar17 + 1.0);
  if (param_9 == 0) {
    fVar14 = fVar11;
    if (param_6 == '\0') {
      if (fVar11 <= fVar16) {
        fVar14 = fVar16;
      }
      if (fVar11 < fVar16) {
        bVar10 = fVar13 == 0.0;
        bVar9 = fVar13 < 0.0;
        goto LAB_1424625e9;
      }
    }
    else {
      if (fVar16 <= fVar11) {
        fVar14 = fVar16;
      }
      if (fVar16 < fVar11) {
        bVar10 = fVar13 == 0.0;
        bVar9 = fVar13 < 0.0;
        goto LAB_1424625e9;
      }
    }
    bVar10 = fVar17 == 0.0;
    bVar9 = fVar17 < 0.0;
LAB_1424625e9:
    if (bVar9 || bVar10) {
      if (bVar9) {
        fVar18 = -1.0;
      }
      else {
        fVar18 = 0.0;
      }
    }
    fVar16 = SQRT(fVar14);
    fVar17 = SQRT(param_5 - fVar14);
    fVar11 = fVar17 * DAT_1464aa7a0 * fVar18 + local_208 * fVar16;
    *param_2 = CONCAT44(fVar17 * DAT_1464aa798._4_4_ * fVar18 + fVar19 * fVar16,
                        fVar17 * (float)DAT_1464aa798 * fVar18 + fVar12 * fVar16);
    *(float *)(param_2 + 1) = fVar11;
    return CONCAT71((uint7)(uint3)((uint)fVar11 >> 8),1);
  }
  fVar18 = fVar11;
  if (fVar16 <= fVar11) {
    fVar18 = fVar16;
  }
  local_1c0[1] = fVar11;
  if (fVar11 <= fVar16) {
    local_1c0[1] = fVar16;
  }
  local_1c0[0] = local_1c0[1];
  if (param_6 != '\0') {
    local_1c0[0] = fVar18;
  }
  if (param_6 == '\0') {
    local_1c0[1] = fVar18;
  }
  local_1f0[1] = -1.0;
  if (param_6 == '\0') {
    if (fVar16 <= fVar11) {
      if (0.0 < fVar17) goto LAB_142462730;
      if (fVar17 < 0.0) goto LAB_14246273c;
LAB_142462746:
      local_1f0[0] = 0.0;
      goto LAB_142462749;
    }
    if (0.0 < fVar13) {
LAB_142462730:
      local_1f0[0] = 1.0;
    }
    else if (fVar13 < 0.0) {
LAB_14246273c:
      local_1f0[0] = -1.0;
    }
    else {
      local_1f0[0] = 0.0;
    }
LAB_142462719:
    if (fVar11 <= fVar16) {
LAB_142462764:
      bVar10 = fVar17 < 0.0;
      if (0.0 < fVar17) {
        local_1f0[1] = 1.0;
        goto LAB_142462775;
      }
    }
    else {
      bVar10 = fVar13 < 0.0;
      if (0.0 < fVar13) {
        local_1f0[1] = 1.0;
        goto LAB_142462775;
      }
    }
  }
  else {
    if (fVar11 <= fVar16) {
      fVar18 = fVar17;
      if (fVar17 <= 0.0) goto LAB_1424626f1;
      local_1f0[0] = 1.0;
    }
    else {
      fVar18 = fVar13;
      if (fVar13 <= 0.0) {
LAB_1424626f1:
        if (0.0 <= fVar18) goto LAB_142462746;
        local_1f0[0] = -1.0;
      }
      else {
        local_1f0[0] = 1.0;
      }
    }
LAB_142462749:
    if (param_6 == '\0') goto LAB_142462719;
    if (fVar16 <= fVar11) goto LAB_142462764;
    bVar10 = fVar13 < 0.0;
    if (0.0 < fVar13) {
      local_1f0[1] = 1.0;
      goto LAB_142462775;
    }
  }
  if (!bVar10) {
    local_1f0[1] = 0.0;
  }
LAB_142462775:
  uVar3 = (ulonglong)_tls_index;
  pfVar8 = local_180;
  iVar6 = 0;
  lVar7 = 0;
  do {
    fVar16 = *(float *)((longlong)local_1f0 + lVar7);
    fVar13 = SQRT(*(float *)((longlong)local_1c0 + lVar7));
    fVar17 = SQRT(param_5 - *(float *)((longlong)local_1c0 + lVar7));
    local_188 = local_208 * fVar13 + fVar16 * fVar17 * DAT_1464aa7a0;
    fVar11 = 0.0;
    *(ulonglong *)pfVar8 =
         CONCAT44(fVar19 * fVar13 + fVar16 * fVar17 * DAT_1464aa798._4_4_,
                  fVar17 * (float)DAT_1464aa798 * fVar16 + fVar12 * fVar13);
    local_1e8 = *(undefined8 *)local_1c8;
    pfVar8[2] = local_188;
    local_1e0 = local_1c8[2];
    uVar4 = (ulonglong)(uint)local_1e0;
    fVar16 = pfVar8[2];
    fVar17 = pfVar8[1];
    fVar18 = *pfVar8;
    pfVar5 = local_1c8;
    while( true ) {
      fVar11 = fVar11 + 0.125;
      fVar12 = fVar11 * local_1f8 * (1.0 / fVar13);
      local_1d4 = fVar17 * fVar12 + pfVar5[1];
      local_1d0 = (fVar12 * fVar12 * param_8 * -0.5 - param_7) + fVar16 * fVar12 + pfVar5[2];
      local_1d8 = fVar18 * fVar12 + *pfVar5;
      if ((param_9 == 2) && (local_1d0 < local_1e0)) {
        if (param_12 != '\0') goto LAB_1424629dd;
        goto LAB_1424628f4;
      }
      if ((*(int *)(*(longlong *)((longlong)pvVar1 + uVar3 * 8) + 0x38) < DAT_146af4a48) &&
         (_Init_thread_header(&DAT_146af4a48), DAT_146af4a48 == -1)) {
        FName::FName(&DAT_146af4a40,"SuggestProjVelTrace",1);
        _Init_thread_footer(&DAT_146af4a48);
      }
      local_228 = 0;
      FUN_1422ffb20(local_168,DAT_146af4a40,local_1fc,1);
      FCollisionQueryParams::AddIgnoredActors(local_168,local_1b8);
      local_210 = local_1b0;
      local_218 = local_168;
      local_19c = param_7;
      local_220 = &local_1a0;
      local_1a0 = 2;
      local_228 = CONCAT44(local_228._4_4_,1);
      uVar4 = UWorld::SweepTestByChannel(uVar2,&local_1e8,&local_1d8,&DAT_1464aa810);
      if ((char)uVar4 != '\0') break;
      if (local_100 != 0) {
        uVar4 = FMemory::Free();
      }
      pfVar5 = local_1c8;
      if (local_120 != 0) {
        uVar4 = FMemory::Free();
        pfVar5 = local_1c8;
      }
LAB_1424629dd:
      local_1e8 = CONCAT44(local_1d4,local_1d8);
      local_1e0 = local_1d0;
      if (1.0 <= fVar11) {
LAB_1424628f4:
        if (iVar6 != -1) {
          fVar16 = local_180[(longlong)iVar6 * 3 + 2];
          *local_1a8 = *(undefined8 *)(local_180 + (longlong)iVar6 * 3);
          *(float *)(local_1a8 + 1) = fVar16;
          return CONCAT71((uint7)(uint3)((uint)fVar16 >> 8),1);
        }
        goto LAB_142462a50;
      }
    }
    if (local_100 != 0) {
      uVar4 = FMemory::Free();
    }
    if (local_120 != 0) {
      uVar4 = FMemory::Free();
    }
    iVar6 = iVar6 + 1;
    lVar7 = lVar7 + 4;
    pfVar8 = pfVar8 + 3;
    fVar12 = local_204;
    fVar19 = local_200;
    if (1 < iVar6) {
LAB_142462a50:
      return uVar4 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 142462b20 SuggestProjectileVelocity_CustomArc body=812 status=ok
// SIG undefined SuggestProjectileVelocity_CustomArc(void)

longlong UGameplayStatics::SuggestProjectileVelocity_CustomArc
                   (undefined8 param_1,undefined8 *param_2,float *param_3,float *param_4,
                   float param_5,float param_6)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_98 [36];
  
  fVar5 = param_4[2] - param_3[2];
  fVar6 = *param_4 - *param_3;
  fVar7 = param_4[1] - param_3[1];
  fVar3 = fVar7 * fVar7 + fVar6 * fVar6;
  fVar4 = SQRT(fVar5 * fVar5 + fVar3);
  lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if ((lVar1 != 0) && (0.0001 < fVar4)) {
    if (ABS(param_5) <= 1e-08) {
      param_5 = (float)FUN_1428cc5b0(lVar1);
    }
    fVar4 = 1.0 / fVar4;
    local_a8 = (fVar4 * fVar6 - (float)DAT_1464aa798) * param_6 + (float)DAT_1464aa798;
    local_a4 = (fVar4 * fVar7 - DAT_1464aa798._4_4_) * param_6 + DAT_1464aa798._4_4_;
    local_a0 = (fVar4 * fVar5 - DAT_1464aa7a0) * param_6 + DAT_1464aa7a0;
    fVar4 = local_a4 * local_a4 + local_a8 * local_a8 + local_a0 * local_a0;
    if (fVar4 != 1.0) {
      if (1e-08 <= fVar4) {
        auVar2 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
        fVar6 = auVar2._0_4_;
        fVar6 = fVar6 + fVar6 * (0.5 - fVar4 * 0.5 * fVar6 * fVar6);
        fVar6 = fVar6 + fVar6 * (0.5 - fVar4 * 0.5 * fVar6 * fVar6);
        local_a8 = local_a8 * fVar6;
        local_a4 = local_a4 * fVar6;
        local_a0 = local_a0 * fVar6;
      }
      else {
        local_a8 = DAT_1468b5d90;
        local_a0 = DAT_1468b5d98;
        local_a4 = DAT_1468b5d94;
      }
    }
    FVector::Rotation(&local_a8,local_98);
    fVar4 = ::_guard_xfg_dispatch_icall_nop(local_98[0] * 0.017453292);
    fVar6 = ::_guard_xfg_dispatch_icall_nop(local_98[0] * 0.017453292);
    fVar3 = (fVar3 * param_5 * 0.5) / ((fVar5 - SQRT(fVar3) * fVar6) * fVar4 * fVar4);
    if (0.0 <= fVar3) {
      fVar3 = SQRT(fVar3);
      *param_2 = CONCAT44(local_a4 * fVar3,local_a8 * fVar3);
      *(float *)(param_2 + 1) = local_a0 * fVar3;
      return CONCAT71((uint7)(uint3)((uint)(local_a0 * fVar3) >> 8),1);
    }
  }
  *param_2 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  fVar3 = DAT_1468b5d98;
  *(float *)(param_2 + 1) = DAT_1468b5d98;
  return (ulonglong)(uint3)((uint)fVar3 >> 8) << 8;
}



// FUNCTION 142462e50 FUN_142462e50 body=442 status=ok
// SIG undefined FUN_142462e50(void)

void FUN_142462e50(longlong *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  
  if (param_2 == 0) {
    return;
  }
  iVar1 = *(int *)(param_2 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar7 = iVar1 >> 0x1f & 0xffff;
    uVar3 = iVar1 + uVar7;
    lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
            (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18;
  }
  else {
    lVar4 = 0;
  }
  if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) != 0) {
    return;
  }
  if (param_3 == (longlong *)0x0) {
    return;
  }
  iVar1 = *(int *)((longlong)param_3 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar7 = iVar1 >> 0x1f & 0xffff;
    uVar3 = iVar1 + uVar7;
    lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
            (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18;
  }
  else {
    lVar4 = 0;
  }
  if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) != 0) {
    return;
  }
  lVar4 = *(longlong *)(param_2 + 0x508);
  if (lVar4 == 0) {
    return;
  }
  *(undefined1 *)((longlong)param_3 + 0x644) = *(undefined1 *)(param_2 + 0x644);
  param_3[0xd1] = *(longlong *)(param_2 + 0x688);
  (**(code **)(*param_3 + 0xd18))(param_3,lVar4);
  FUN_142225f80(param_3,param_2);
  FUN_14293c0e0(param_1,param_2,param_3);
  if (lVar4 != 0) {
    lVar5 = ULocalPlayer::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
      FUN_142543860(uVar6,param_2,0,1);
      return;
    }
    lVar5 = FUN_1429c30a0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_142462fed;
  }
  lVar4 = 0;
LAB_142462fed:
  *(longlong *)(param_2 + 0x680) = lVar4;
  return;
}



// FUNCTION 142463010 FUN_142463010 body=754 status=ok
// SIG undefined FUN_142463010(void)

void FUN_142463010(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  uint uStackX_c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  plVar8 = (longlong *)0x0;
  if ((*(longlong *)(param_1 + 0x11e0) == 0) || (*(longlong *)(param_1 + 0x11e8) == 0)) {
LAB_1424630c3:
    plVar6 = (longlong *)((ulonglong)uStackX_c << 0x20);
    plVar4 = plVar8;
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x11e8) + 8);
    LOCK();
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      *piVar1 = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if (iVar3 < 1) goto LAB_1424630c3;
    plVar4 = *(longlong **)(param_1 + 0x11e8);
    plVar6 = plVar4;
    plVar7 = plVar8;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      iVar3 = (int)plVar4[1];
      bVar9 = iVar3 == 0;
      if (bVar9) {
        *(int *)(plVar4 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
      while (plVar6 = plVar8, plVar7 = (longlong *)0x0, !bVar9) {
        LOCK();
        bVar9 = iVar3 == (int)plVar4[1];
        if (bVar9) {
          *(int *)(plVar4 + 1) = iVar3 + 1;
        }
        UNLOCK();
        if (bVar9) {
          plVar6 = plVar4;
          if (plVar4 != (longlong *)0x0) {
            plVar7 = *(longlong **)(param_1 + 0x11e0);
          }
          break;
        }
        LOCK();
        iVar3 = (int)plVar4[1];
        bVar9 = iVar3 == 0;
        if (bVar9) {
          *(int *)(plVar4 + 1) = 0;
          iVar3 = 0;
        }
        UNLOCK();
      }
    }
    plVar4 = (longlong *)FUN_141834360(plVar7,local_38);
    if ((*(longlong *)(param_1 + 0x1200) == 0) || (*(longlong *)(param_1 + 0x1200) != *plVar4)) {
      bVar9 = true;
      plVar4 = (longlong *)0x3;
      goto LAB_1424630ce;
    }
    plVar4 = (longlong *)0x3;
  }
  bVar9 = false;
LAB_1424630ce:
  if ((((ulonglong)plVar4 & 2) != 0) &&
     (plVar4 = (longlong *)(ulonglong)((uint)plVar4 & 0xfffffffd), local_30 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if ((((ulonglong)plVar4 & 1) != 0) && (plVar6 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plVar6 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
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
  if (bVar9) {
    FUN_1424aafa0(1);
    lVar5 = FUN_1415dcd20();
    if (lVar5 != 0) {
      FUN_1415e70c0(lVar5);
    }
    if (*(longlong *)(param_1 + 0x1200) == 0) {
      FUN_142446cc0(param_1,*(undefined8 *)(param_1 + 0x7b0));
    }
    plVar6 = *(longlong **)(param_1 + 0x1208);
    uVar2 = *(undefined8 *)(param_1 + 0x1200);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    plVar4 = *(longlong **)(param_1 + 0x11e8);
    plVar7 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      iVar3 = (int)plVar4[1];
      bVar9 = iVar3 == 0;
      if (bVar9) {
        *(int *)(plVar4 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
      while (plVar7 = plVar8, !bVar9) {
        LOCK();
        bVar9 = iVar3 == (int)plVar4[1];
        if (bVar9) {
          *(int *)(plVar4 + 1) = iVar3 + 1;
        }
        UNLOCK();
        if (bVar9) {
          plVar7 = plVar4;
          if (plVar4 != (longlong *)0x0) {
            plVar8 = *(longlong **)(param_1 + 0x11e0);
          }
          break;
        }
        LOCK();
        iVar3 = (int)plVar4[1];
        bVar9 = iVar3 == 0;
        if (bVar9) {
          *(int *)(plVar4 + 1) = 0;
          iVar3 = 0;
        }
        UNLOCK();
      }
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_58 = uVar2;
    local_50 = plVar6;
    FUN_14185a760(plVar8,&local_58);
    SWidget::SlatePrepass(plVar8);
    plVar8 = *(longlong **)(param_1 + 0x11f0);
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 8))(plVar8,DAT_1465351f0,DAT_1465351f4,DAT_1465351f8);
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_48 = uVar2;
    local_40 = plVar6;
    FUN_1418bb930(DAT_1469f4590,&local_48);
    if (DAT_1469f4590 != 0) {
      FUN_1418c0e60(DAT_1469f4590,2);
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar7 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar7)(plVar7);
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
    lVar5 = FUN_1415dcd20();
    if (lVar5 != 0) {
      FUN_1415e5410(lVar5);
    }
  }
  return;
}



// FUNCTION 142463310 FUN_142463310 body=106 status=ok
// SIG undefined FUN_142463310(void)

void FUN_142463310(longlong *param_1)

{
  char cVar1;
  
  FUN_1422406d0();
  if (param_1[0xa0] == DAT_146af3980) {
    cVar1 = FUN_14293c2f0(param_1);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x910))(param_1);
    }
  }
  if (param_1[0xa0] == DAT_146af3988) {
    cVar1 = FUN_14293c2a0(param_1);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014246336d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x918))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 142463380 FUN_142463380 body=83 status=ok
// SIG undefined FUN_142463380(void)

void FUN_142463380(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine/Engine.h",0x829,
             L"Pure virtual not implemented (%s)",L"UEngine::Tick");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine/Engine.h",0x829,
             L"Pure virtual not implemented (%s)",L"UEngine::Tick");
  return;
}



// FUNCTION 1424633e0 FUN_1424633e0 body=2996 status=ok
// SIG undefined FUN_1424633e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424633e0(longlong *param_1,float param_2,char param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  DWORD DVar7;
  short *psVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  DWORD *pDVar14;
  undefined1 uVar15;
  int iVar16;
  longlong *plVar17;
  LARGE_INTEGER LVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  undefined4 uVar22;
  int iVar23;
  int iVar24;
  undefined2 *puVar25;
  bool bVar26;
  int local_res10;
  undefined4 in_stack_fffffffffffffee8;
  undefined2 uVar27;
  undefined2 *local_100;
  undefined2 *local_f8;
  undefined8 local_f0;
  undefined2 *local_e8;
  undefined8 local_e0;
  LARGE_INTEGER local_d8;
  LARGE_INTEGER local_d0;
  short *local_c8;
  longlong local_c0;
  longlong local_b8;
  code *local_a8 [2];
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined4 local_68;
  
  if (param_2 < 0.0) {
    LowLevelFatalErrorHandler
              ("Unknown",0x595,
               L"Negative delta time! Please see https://udn.epicgames.com/lists/showpost.php?list=ue3bugs&id=4364"
              );
    FDebug::AssertFailed
              (&DAT_1450a03fe,"Unknown",0x595,
               L"Negative delta time! Please see https://udn.epicgames.com/lists/showpost.php?list=ue3bugs&id=4364"
              );
  }
  uVar21 = (ulonglong)_tls_index;
  if (DAT_1468b616c == '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar21 * 8) + 0x38) <
        DAT_1468509e4) {
      _Init_thread_header(&DAT_1468509e4);
      if (DAT_1468509e4 == -1) {
        uVar9 = FCommandLine::Get();
        DAT_1468509e0 = FParse::Param(uVar9,L"nullrhi");
        _Init_thread_footer(&DAT_1468509e4);
      }
      if ((DAT_1468b616c != '\0') && (DAT_1468b616d == '\0')) goto LAB_1424634a4;
    }
    if (DAT_1468509e0 == '\0') {
      FUN_142867d70(param_1);
    }
  }
LAB_1424634a4:
  if ((DAT_1468c2172 != '\0') && (param_1[0xf6] == 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar21 * 8) + 0x38) <
         DAT_1468509e4) && (_Init_thread_header(&DAT_1468509e4), DAT_1468509e4 == -1)) {
      uVar9 = FCommandLine::Get();
      DAT_1468509e0 = FParse::Param(uVar9,L"nullrhi");
      _Init_thread_footer(&DAT_1468509e4);
    }
    if (((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) && (DAT_1468509e0 == '\0')) {
      FUN_1416a8180(0);
      return;
    }
  }
  plVar11 = (longlong *)param_1[0xf6];
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x2e0))(plVar11,param_2);
  }
  FUN_14179abc0(param_2,DAT_146af1030 != 0,DAT_146531e94 * 0.001);
  FEngineAnalytics::Tick(param_2);
  iVar24 = (int)param_1[0x184];
  iVar16 = 0;
  uVar22 = 0;
  uVar4 = 0;
  if (0 < iVar24) {
    plVar11 = (longlong *)param_1[0x183];
    do {
      if (*(longlong *)(*plVar11 + 0x288) == DAT_146b19a68) {
        local_d0 = (LARGE_INTEGER)
                   ((LARGE_INTEGER *)(((longlong *)param_1[0x183])[iVar16] + 200))->QuadPart;
        goto LAB_1424635c0;
      }
      iVar16 = iVar16 + 1;
      plVar11 = plVar11 + 1;
    } while (iVar16 < iVar24);
  }
  local_d0.QuadPart = 0;
LAB_1424635c0:
  local_res10 = 0;
  if (0 < iVar24) {
    local_d8.QuadPart = 0;
    do {
      LVar18 = local_d8;
      pcVar3 = *(char **)(local_d8.QuadPart + param_1[0x183]);
      lVar19 = *(longlong *)(pcVar3 + 0x288);
      if ((lVar19 != 0) && (*(char *)(lVar19 + 0x3d9) != '\0')) {
        DAT_146b19a68 = lVar19;
        (**(code **)(*param_1 + 0x448))(param_1,pcVar3,param_2);
        if (param_3 == '\0') {
          *(undefined4 *)((longlong)param_1 + 0x7cc) = 0;
          FUN_142552700(*(undefined8 *)(pcVar3 + 0x288),2,param_2);
        }
        if ((DAT_1468b616c == '\0') &&
           (cVar6 = FUN_1428c5cf0(*(undefined8 *)(pcVar3 + 0x288)), cVar6 != '\0')) {
          FUN_1423c0eb0(*(undefined8 *)(pcVar3 + 0x288));
          FUN_14239d3b0(*(undefined8 *)(pcVar3 + 0x288),0,0);
        }
        lVar19 = *(longlong *)(pcVar3 + 0x288);
        if ((*(uint *)(lVar19 + 0x130) & 1) != 0) {
          *(uint *)(lVar19 + 0x130) = *(uint *)(lVar19 + 0x130) & 0xfffffffe;
          psVar8 = (short *)FURL::GetOption(pcVar3 + 0xe8,L"causeevent=");
          uVar27 = (undefined2)((uint)in_stack_fffffffffffffee8 >> 0x10);
          lVar19 = *(longlong *)(pcVar3 + 0x240);
          if ((lVar19 == 0) || (*(int *)(lVar19 + 0x40) < 1)) {
            plVar11 = (longlong *)0x0;
          }
          else {
            plVar11 = (longlong *)**(undefined8 **)(lVar19 + 0x38);
          }
          local_c8 = psVar8;
          if ((psVar8 != (short *)0x0) && (plVar11 != (longlong *)0x0)) {
            local_e0 = 0xc;
            local_e8 = (undefined2 *)0x0;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
            local_100 = local_e8;
            in_stack_fffffffffffffee8 = CONCAT22(uVar27,0x3f);
            FGenericPlatformString::Convert<char,wchar_t>
                      (local_e8,0xc,"CAUSEEVENT ",0xc,in_stack_fffffffffffffee8);
            iVar24 = (int)local_e0;
            if (*psVar8 == 0) {
              local_e0 = 0;
              local_e8 = (undefined2 *)0x0;
            }
            else {
              lVar19 = -1;
              do {
                lVar19 = lVar19 + 1;
              } while (psVar8[lVar19] != 0);
              iVar16 = (int)lVar19;
              if (((int)local_e0 == 0) && (iVar16 != 0)) {
                iVar20 = 1;
              }
              else {
                iVar20 = 0;
              }
              iVar5 = local_e0._4_4_;
              iVar20 = iVar20 + (int)local_e0;
              local_f8 = local_100;
              local_e8 = (undefined2 *)0x0;
              local_f0._0_4_ = (int)local_e0;
              local_f0._4_4_ = local_e0._4_4_;
              local_e0 = 0;
              iVar23 = iVar24;
              if (iVar5 < iVar20 + iVar16) {
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_f8);
                iVar23 = (int)local_f0;
              }
              iVar24 = iVar23;
              local_100 = local_f8;
              if (iVar16 != 0) {
                iVar24 = iVar16 + (uint)(iVar23 == 0) + iVar23;
                local_f0 = CONCAT44(local_f0._4_4_,iVar24);
                if (local_f0._4_4_ < iVar24) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,iVar23);
                  iVar24 = (int)local_f0;
                }
                local_100 = local_f8;
                puVar25 = local_f8 + ((longlong)iVar23 - (ulonglong)(iVar23 != 0));
                _guard_xfg_dispatch_icall_nop(puVar25,local_c8,(longlong)iVar16 * 2);
                puVar25[iVar16] = 0;
              }
              local_f8 = (undefined2 *)0x0;
              local_f0 = 0;
            }
            puVar25 = &DAT_143f3eda8;
            if (iVar24 != 0) {
              puVar25 = local_100;
            }
            lVar19 = plVar11[5];
            uVar9 = FUN_141672640();
            uVar10 = (**(code **)(*plVar11 + 0x148))(plVar11);
            (**(code **)(lVar19 + 8))(plVar11 + 5,uVar10,puVar25,uVar9);
            LVar18 = local_d8;
            if (local_100 != (undefined2 *)0x0) {
              FMemory::Free();
              LVar18 = local_d8;
            }
          }
          *(uint *)(*(longlong *)(pcVar3 + 0x288) + 0x130) =
               *(uint *)(*(longlong *)(pcVar3 + 0x288) + 0x130) | 2;
          lVar19 = *(longlong *)(pcVar3 + 0x288);
          uVar22 = uVar4;
        }
        FUN_142894d60(param_1,lVar19);
        if ((*(byte *)(*(longlong *)(pcVar3 + 0x288) + 0x830) & 8) != 0) {
          FUN_142866090(param_1);
          *(uint *)(*(longlong *)(pcVar3 + 0x288) + 0x830) =
               *(uint *)(*(longlong *)(pcVar3 + 0x288) + 0x830) & 0xfffffff7;
        }
        if (DAT_1468c2173 == '\x01') {
          FUN_1428db6c0(*(undefined8 *)(pcVar3 + 0x288));
        }
        *(undefined4 *)(param_1 + 0xf9) = 0;
        FUN_142869820(param_1,pcVar3);
        if ((*pcVar3 != '\x04') &&
           (cVar6 = FUN_14254a160(*(undefined8 *)(pcVar3 + 0x288)), uVar4 = uVar22, cVar6 == '\0'))
        {
          uVar22 = 1;
          uVar4 = uVar22;
        }
      }
      local_res10 = local_res10 + 1;
      local_d8.QuadPart = LVar18.QuadPart + 8;
    } while (local_res10 < (int)param_1[0x184]);
    uVar21 = (ulonglong)_tls_index;
  }
  LVar18 = local_d0;
  uVar4 = DAT_1468e3590;
  uVar9 = FUN_14168db40();
  FCsvProfiler::BeginStat(uVar9,"GameEngineTickObjects",uVar4);
  FUN_142553c00(0,2,0,param_2,9);
  uVar9 = FUN_14168db40();
  FCsvProfiler::EndStat(uVar9,"GameEngineTickObjects",uVar4);
  if (LVar18.QuadPart != 0) {
    lVar19 = FUN_142876100(param_1,LVar18.QuadPart);
    DAT_146b19a68 = *(longlong *)(lVar19 + 0x288);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar21 * 8) + 0x38) <
       DAT_146af4a08) && (_Init_thread_header(&DAT_146af4a08), DAT_146af4a08 == -1)) {
    FName::FName(&DAT_146af4a00,L"Media",1);
    _Init_thread_footer(&DAT_146af4a08);
  }
  uVar9 = DAT_146af4a00;
  uVar10 = FUN_14168dc80();
  plVar11 = (longlong *)FUN_141690010(uVar10,uVar9);
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0xa0))(plVar11);
  }
  plVar11 = (longlong *)param_1[0xf6];
  if ((plVar11 != (longlong *)0x0) && (param_3 == '\0')) {
    (**(code **)(*plVar11 + 0x2c8))(plVar11,param_2);
  }
  if (DAT_1465326f8 != '\0') {
    DAT_1465326f8 = '\0';
    FWindowsPlatformSplash::Hide();
    if (param_1[0x23c] != 0) {
      if (param_1[0x23d] != 0) {
        piVar1 = (int *)(param_1[0x23d] + 8);
        LOCK();
        iVar24 = *piVar1;
        if (iVar24 == 0) {
          *piVar1 = 0;
          iVar24 = 0;
        }
        UNLOCK();
        if (0 < iVar24) {
          plVar11 = (longlong *)param_1[0x23d];
          plVar12 = (longlong *)0x0;
          plVar17 = plVar11;
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            iVar24 = (int)plVar11[1];
            bVar26 = iVar24 == 0;
            if (bVar26) {
              *(int *)(plVar11 + 1) = 0;
              iVar24 = 0;
            }
            UNLOCK();
            while (plVar12 = (longlong *)0x0, plVar17 = (longlong *)0x0, !bVar26) {
              LOCK();
              bVar26 = iVar24 == (int)plVar11[1];
              if (bVar26) {
                *(int *)(plVar11 + 1) = iVar24 + 1;
              }
              UNLOCK();
              if (bVar26) {
                plVar17 = plVar11;
                if (plVar11 != (longlong *)0x0) {
                  plVar12 = (longlong *)param_1[0x23c];
                }
                break;
              }
              LOCK();
              iVar24 = (int)plVar11[1];
              bVar26 = iVar24 == 0;
              if (bVar26) {
                *(int *)(plVar11 + 1) = 0;
                iVar24 = 0;
              }
              UNLOCK();
            }
          }
          FUN_14185c3e0(plVar12);
          if (plVar17 != (longlong *)0x0) {
            LOCK();
            plVar11 = plVar17 + 1;
            lVar19 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar19 == 1) {
              (**(code **)*plVar17)(plVar17);
              LOCK();
              piVar1 = (int *)((longlong)plVar17 + 0xc);
              iVar24 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar24 == 1) {
                (**(code **)(*plVar17 + 8))(plVar17,1);
              }
            }
          }
          local_c0 = param_1[0x240];
          local_b8 = param_1[0x241];
          if (local_b8 != 0) {
            LOCK();
            *(int *)(local_b8 + 8) = *(int *)(local_b8 + 8) + 1;
            UNLOCK();
          }
          FUN_1418bb930(DAT_1469f4590,&local_c0);
        }
      }
    }
  }
  plVar11 = (longlong *)0x0;
  if ((param_3 == '\0') && (DAT_1468b616c == '\0')) {
    plVar12 = (longlong *)param_1[0xf6];
    if ((plVar12 == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*plVar12 + 0x358))(plVar12,1), cVar6 == '\0')) {
      bVar26 = false;
    }
    else {
      bVar26 = true;
    }
    cVar6 = FUN_1424a3f80();
    if ((((cVar6 == '\0') || (DAT_146af5674 == 1)) || (DAT_146af37fc != 0)) &&
       ((!bVar26 || (0 < DAT_146af37fc)))) {
      uVar15 = 1;
      if ((bVar26) && (uVar15 = 1, DAT_146af37fc == 2)) {
        uVar15 = 0;
      }
      (**(code **)(*param_1 + 0x458))(param_1,uVar15);
      plVar12 = (longlong *)GetRendererModule();
      (**(code **)(*plVar12 + 0x148))(plVar12);
    }
  }
  if (DAT_1468c2172 != '\0') {
    local_78 = 0;
    local_68 = 0;
    puVar13 = (undefined8 *)FUN_140438ef0(0x10,local_98);
    if (puVar13 != (undefined8 *)0x0) {
      *(float *)(puVar13 + 1) = param_2;
      *puVar13 = &PTR_FUN_1450ad0e0;
    }
    local_a8[0] = FUN_1424447f0;
    uVar9 = FUN_1415a9720();
    FUN_1415a59c0(uVar9,&local_c8,local_a8);
    if (local_c8 != (short *)0x0) {
      LOCK();
      piVar1 = (int *)(local_c8 + 0x24);
      iVar24 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar24 == 1) {
        FGraphEvent::Recycle();
      }
    }
  }
  lVar19 = FUN_1428742d0(DAT_146b17150);
  if (lVar19 != 0) {
    FUN_1422fb630(lVar19,uVar22);
  }
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar7 = GetCurrentThreadId(), DVar7 == DAT_1468c21c0)))) {
    cVar6 = DAT_146ac3ac4;
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_d8);
    if (cVar6 == '\0') {
      DAT_146ac3e84 = DAT_146ac3e84 + param_2;
      _DAT_146ac3e80 = param_2;
    }
    plVar11 = (longlong *)GetRendererModule();
    (**(code **)(*plVar11 + 0xa0))(plVar11);
    QueryPerformanceCounter(&local_d0);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_d0.s.LowPart - local_d8._0_4_);
  }
  else {
    pDVar14 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar12 = TlsGetValue(*pDVar14);
    if (plVar12 == (longlong *)0x0) {
      plVar12 = (longlong *)operator_new(0x18);
      if (plVar12 != (longlong *)0x0) {
        *plVar12 = 0;
        plVar12[1] = 0;
        *(undefined4 *)(plVar12 + 2) = 0;
        plVar11 = plVar12;
      }
      TlsSetValue(*pDVar14,plVar11);
      plVar12 = plVar11;
    }
    plVar11 = (longlong *)plVar12[1];
    if (plVar11 == (longlong *)0x0) {
      plVar11 = (longlong *)*plVar12;
      if (plVar11 == (longlong *)0x0) {
        plVar11 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar14 + 2);
        plVar12[1] = (longlong)plVar11;
        if (plVar11 == (longlong *)0x0) {
          puVar13 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar12[1] = (longlong)puVar13;
          lVar19 = 0x1f;
          do {
            puVar2 = puVar13 + 0x20;
            *puVar13 = puVar2;
            lVar19 = lVar19 + -1;
            puVar13 = puVar2;
          } while (lVar19 != 0);
          *puVar2 = 0;
          plVar11 = (longlong *)plVar12[1];
        }
        iVar24 = 0x20;
        *(undefined4 *)(plVar12 + 2) = 0x20;
      }
      else {
        iVar24 = 0x20;
        plVar12[1] = (longlong)plVar11;
        *(undefined4 *)(plVar12 + 2) = 0x20;
        *plVar12 = 0;
      }
    }
    else {
      iVar24 = (int)plVar12[2];
    }
    plVar12[1] = *plVar11;
    *(int *)(plVar12 + 2) = iVar24 + -1;
    *plVar11 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar11 + 1) = 0xff;
    *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
    *plVar11 = (longlong)&PTR_FUN_1450aaa50;
    *(undefined1 *)(plVar11 + 3) = 0;
    plVar11[4] = 0;
    *(char *)(plVar11 + 2) = DAT_146ac3ac4;
    *(float *)((longlong)plVar11 + 0x14) = param_2;
    lVar19 = plVar11[4];
    piVar1 = (int *)(lVar19 + 0x48);
    if (lVar19 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_140445100(plVar11,0,0xff,1);
    if (lVar19 != 0) {
      LOCK();
      iVar24 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar24 == 1) {
        FGraphEvent::Recycle(lVar19);
      }
    }
  }
  FUN_1424905c0(param_1 + 0x19f);
  return;
}



// FUNCTION 142463fa0 FUN_142463fa0 body=956 status=ok
// SIG undefined FUN_142463fa0(void)

void FUN_142463fa0(longlong *param_1,float param_2,undefined4 param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float local_108;
  float local_104;
  float local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  byte local_d8 [12];
  float local_cc;
  undefined1 local_ac [164];
  
  cVar5 = (**(code **)(*param_1 + 0x438))();
  if (cVar5 != '\0') {
    return;
  }
  FUN_14237ac80(param_1,param_2,param_3,param_4);
  if (param_1[0x41] == 0) {
    return;
  }
  if (param_1[0x2f] == 0) {
    return;
  }
  plVar3 = *(longlong **)(param_1[0x41] + 0x490);
  if (plVar3 != (longlong *)0x0) {
    cVar5 = (**(code **)(*plVar3 + 0x768))(plVar3);
    if (cVar5 != '\0') {
      if (((((*(uint *)((longlong)plVar3 + 0x4cc) >> 1 & 1) == 0) ||
           (cVar5 = (**(code **)(*plVar3 + 0x768))(plVar3), cVar5 == '\0')) &&
          (cVar5 = (**(code **)(plVar3[0x8b] + 0x48))(), cVar5 != '\0')) &&
         ((*(byte *)((longlong)param_1 + 500) & 2) == 0)) {
        cVar5 = (**(code **)(*param_1 + 0x428))(param_1,*(undefined4 *)((longlong)param_1 + 0x214));
        if (cVar5 == '\x01') {
          fVar9 = *(float *)((longlong)param_1 + 0x194);
          fVar1 = *(float *)((longlong)param_1 + 0x18c);
          fVar2 = *(float *)(param_1 + 0x32);
          fVar6 = fVar1 * fVar1 + fVar2 * fVar2 + fVar9 * fVar9;
          auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
          fVar7 = auVar8._0_4_;
          fVar7 = fVar7 + fVar7 * (0.5 - fVar6 * 0.5 * fVar7 * fVar7);
          fVar7 = fVar7 + fVar7 * (0.5 - fVar6 * 0.5 * fVar7 * fVar7);
          fVar9 = fVar9 * fVar7 * *(float *)((longlong)param_1 + 0x214);
          *(ulonglong *)((longlong)param_1 + 0x18c) =
               CONCAT44(fVar2 * fVar7 * *(float *)((longlong)param_1 + 0x214),
                        fVar1 * fVar7 * *(float *)((longlong)param_1 + 0x214));
          uStack_f0 = CONCAT44(uStack_f0._4_4_,fVar9);
          *(float *)((longlong)param_1 + 0x194) = fVar9;
        }
      }
      else {
        (**(code **)(*param_1 + 0x598))(param_1,param_2);
      }
      (**(code **)(*param_1 + 0x5a0))(param_1);
      *(uint *)(param_1 + 0x45) = *(uint *)(param_1 + 0x45) & 0xfffffffe;
      local_108 = param_2 * *(float *)((longlong)param_1 + 0x18c);
      local_104 = param_2 * *(float *)(param_1 + 0x32);
      local_100 = param_2 * *(float *)((longlong)param_1 + 0x194);
      if (((1e-06 < ABS(local_108)) || (1e-06 < ABS(local_104))) || (1e-06 < ABS(local_100))) {
        lVar4 = param_1[0x2f];
        local_f8 = *(undefined8 *)(lVar4 + 0x220);
        uStack_f0 = *(undefined8 *)(lVar4 + 0x228);
        local_e8 = *(undefined8 *)(lVar4 + 0x210);
        uStack_e0 = *(undefined8 *)(lVar4 + 0x218);
        _guard_xfg_dispatch_icall_nop(local_d8,0,0x90);
        local_cc = 1.0;
        FUN_1423755e0(param_1,&local_108,&local_e8,1,local_d8,0);
        if (((local_d8[0] & 1) != 0) && ((local_d8[0] & 2) == 0)) {
          (**(code **)(*param_1 + 0x468))(param_1,local_d8,param_2,&local_108);
          (**(code **)(*param_1 + 0x4a8))(param_1,&local_108,1.0 - local_cc,local_ac,local_d8,1);
        }
        if ((*(byte *)(param_1 + 0x45) & 1) == 0) {
          lVar4 = param_1[0x2f];
          param_2 = 1.0 / param_2;
          fVar9 = (*(float *)(lVar4 + 0x228) - (float)uStack_f0) * param_2;
          *(ulonglong *)((longlong)param_1 + 0x18c) =
               CONCAT44((*(float *)(lVar4 + 0x224) - local_f8._4_4_) * param_2,
                        (*(float *)(lVar4 + 0x220) - (float)local_f8) * param_2);
          uStack_f0 = CONCAT44(uStack_f0._4_4_,fVar9);
          *(float *)((longlong)param_1 + 0x194) = fVar9;
        }
      }
      (**(code **)(*param_1 + 0x470))(param_1);
      return;
    }
    return;
  }
  return;
}



// FUNCTION 142464360 FUN_142464360 body=83 status=ok
// SIG undefined FUN_142464360(void)

void FUN_142464360(longlong *param_1,undefined4 param_2)

{
  uint uVar1;
  
  FUN_142357eb0();
  uVar1 = *(uint *)((longlong)param_1 + 0x2f4);
  (**(code **)(*param_1 + 0x548))
            (param_1,uVar1 & 0xffffff01,uVar1 >> 5 & 0xffffff01,uVar1 >> 6 & 0xffffff01,param_2);
  return;
}



// FUNCTION 1424643c0 ToSimpleString body=161 status=ok
// SIG undefined ToSimpleString(void)

undefined8 FRootMotionSource::ToSimpleString(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *local_18;
  undefined8 local_10;
  
  puVar1 = (undefined2 *)FName::GetComparisonNameEntry(param_1 + 0x18);
  if (puVar1 == (undefined2 *)0x0) {
    local_10 = 10;
    local_18 = puVar1;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,L"*INVALID*",0x14);
  }
  else {
    FNameEntry::GetPlainNameString(puVar1,&local_18);
  }
  puVar1 = &DAT_143f3eda8;
  if ((int)local_10 != 0) {
    puVar1 = local_18;
  }
  FString::PrintfImpl(param_2,L"[ID:%u] FRootMotionSource %s",*(undefined2 *)(param_1 + 0x12),puVar1
                     );
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142464470 ToSimpleString body=161 status=ok
// SIG undefined ToSimpleString(void)

undefined8 FRootMotionSource_ConstantForce::ToSimpleString(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *local_18;
  undefined8 local_10;
  
  puVar1 = (undefined2 *)FName::GetComparisonNameEntry(param_1 + 0x18);
  if (puVar1 == (undefined2 *)0x0) {
    local_10 = 10;
    local_18 = puVar1;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,L"*INVALID*",0x14);
  }
  else {
    FNameEntry::GetPlainNameString(puVar1,&local_18);
  }
  puVar1 = &DAT_143f3eda8;
  if ((int)local_10 != 0) {
    puVar1 = local_18;
  }
  FString::PrintfImpl(param_2,L"[ID:%u]FRootMotionSource_ConstantForce %s",
                      *(undefined2 *)(param_1 + 0x12),puVar1);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142464520 ToSimpleString body=161 status=ok
// SIG undefined ToSimpleString(void)

undefined8 FRootMotionSource_JumpForce::ToSimpleString(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *local_18;
  undefined8 local_10;
  
  puVar1 = (undefined2 *)FName::GetComparisonNameEntry(param_1 + 0x18);
  if (puVar1 == (undefined2 *)0x0) {
    local_10 = 10;
    local_18 = puVar1;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,L"*INVALID*",0x14);
  }
  else {
    FNameEntry::GetPlainNameString(puVar1,&local_18);
  }
  puVar1 = &DAT_143f3eda8;
  if ((int)local_10 != 0) {
    puVar1 = local_18;
  }
  FString::PrintfImpl(param_2,L"[ID:%u]FRootMotionSource_JumpForce %s",
                      *(undefined2 *)(param_1 + 0x12),puVar1);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1424645d0 ToSimpleString body=161 status=ok
// SIG undefined ToSimpleString(void)

undefined8 FRootMotionSource_MoveToDynamicForce::ToSimpleString(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *local_18;
  undefined8 local_10;
  
  puVar1 = (undefined2 *)FName::GetComparisonNameEntry(param_1 + 0x18);
  if (puVar1 == (undefined2 *)0x0) {
    local_10 = 10;
    local_18 = puVar1;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,L"*INVALID*",0x14);
  }
  else {
    FNameEntry::GetPlainNameString(puVar1,&local_18);
  }
  puVar1 = &DAT_143f3eda8;
  if ((int)local_10 != 0) {
    puVar1 = local_18;
  }
  FString::PrintfImpl(param_2,L"[ID:%u]FRootMotionSource_MoveToDynamicForce %s",
                      *(undefined2 *)(param_1 + 0x12),puVar1);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142464680 ToSimpleString body=161 status=ok
// SIG undefined ToSimpleString(void)

undefined8 FRootMotionSource_MoveToForce::ToSimpleString(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *local_18;
  undefined8 local_10;
  
  puVar1 = (undefined2 *)FName::GetComparisonNameEntry(param_1 + 0x18);
  if (puVar1 == (undefined2 *)0x0) {
    local_10 = 10;
    local_18 = puVar1;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,L"*INVALID*",0x14);
  }
  else {
    FNameEntry::GetPlainNameString(puVar1,&local_18);
  }
  puVar1 = &DAT_143f3eda8;
  if ((int)local_10 != 0) {
    puVar1 = local_18;
  }
  FString::PrintfImpl(param_2,L"[ID:%u]FRootMotionSource_MoveToForce %s",
                      *(undefined2 *)(param_1 + 0x12),puVar1);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142464730 ToSimpleString body=161 status=ok
// SIG undefined ToSimpleString(void)

undefined8 FRootMotionSource_RadialForce::ToSimpleString(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *local_18;
  undefined8 local_10;
  
  puVar1 = (undefined2 *)FName::GetComparisonNameEntry(param_1 + 0x18);
  if (puVar1 == (undefined2 *)0x0) {
    local_10 = 10;
    local_18 = puVar1;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,L"*INVALID*",0x14);
  }
  else {
    FNameEntry::GetPlainNameString(puVar1,&local_18);
  }
  puVar1 = &DAT_143f3eda8;
  if ((int)local_10 != 0) {
    puVar1 = local_18;
  }
  FString::PrintfImpl(param_2,L"[ID:%u]FRootMotionSource_RadialForce %s",
                      *(undefined2 *)(param_1 + 0x12),puVar1);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1424647e0 UnloadStreamLevel body=205 status=ok
// SIG undefined UnloadStreamLevel(void)

void UGameplayStatics::UnloadStreamLevel
               (undefined8 param_1,undefined8 param_2,longlong param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_res10;
  undefined1 local_18 [16];
  
  local_res10 = param_2;
  lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 400) == 0) {
      lVar4 = lVar1 + 0x400;
    }
    else {
      lVar4 = *(longlong *)(*(longlong *)(lVar1 + 400) + 0x98);
    }
    lVar2 = FLatentActionManager::
            FindExistingActionWithPredicate<FStreamLevelAction,_FLatentActionManager::FindExistingAction<FStreamLevelAction>_::_2_::FFirstItemPredicate>
                      (lVar4,*(undefined8 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 4),local_18);
    if (lVar2 == 0) {
      lVar2 = operator_new(0x38);
      uVar3 = 0;
      if (lVar2 != 0) {
        uVar3 = FUN_14253e390(lVar2,0,&local_res10,0,param_4,param_3,lVar1);
      }
      FUN_142514cf0(lVar4,*(undefined8 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 4),uVar3);
    }
  }
  return;
}



// FUNCTION 1424648b0 UnregisterExternalTexture body=563 status=ok
// SIG undefined UnregisterExternalTexture(void)

void FExternalTextureRegistry::UnregisterExternalTexture(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  BOOL BVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint *puVar10;
  longlong *plVar11;
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
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xa0);
  BVar5 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar5 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  TSet<TTuple<FGuid,FExternalTextureRegistry::FExternalTextureEntry>,TDefaultMapHashableKeyFuncs<FGuid,FExternalTextureRegistry::FExternalTextureEntry,0>,FDefaultSetAllocator>
  ::Remove(param_1,param_2);
  uStack_84 = 1;
  plVar11 = (longlong *)(param_1 + 0x50);
  uVar2 = *(uint *)(param_1 + 0x78);
  puVar1 = (uint *)(param_1 + 0x60);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar2 != 0) {
    puVar10 = *(uint **)(param_1 + 0x70);
    if (*(uint **)(param_1 + 0x70) == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar3 = *puVar10;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar3 == 0) {
      lVar8 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar6 = local_88 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar6;
      if (bVar4) goto LAB_1424649ad;
      uVar3 = puVar10[lVar8 + 1];
    }
    uStack_84 = -uVar3 & uVar3;
    iVar6 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_74 = (iStack_70 - iVar6) + 0x1f;
    if ((int)uVar2 < (int)uStack_74) {
LAB_1424649ad:
      uStack_74 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x78);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar9 = uVar3 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = plVar11;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar3;
  if (uVar3 != uVar2) {
    puVar10 = *(uint **)(param_1 + 0x70);
    if (*(uint **)(param_1 + 0x70) == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar7 = puVar10[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar6 = (int)uVar3 >> 5;
    while (uVar7 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_142464a74;
      uVar7 = puVar10[(longlong)iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    uVar7 = -uVar7 & uVar7;
    iVar6 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_74 = (uVar9 - iVar6) + 0x1f;
    if ((int)uVar2 < (int)uStack_74) {
LAB_142464a74:
      uStack_74 = uVar2;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
    FUN_14259b260(*(undefined8 *)(*plVar11 + (longlong)(int)uStack_4c * 0x10));
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x000142464adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 142464af0 UnregisterReferencedObject body=144 status=ok
// SIG undefined UnregisterReferencedObject(void)

void UGameInstance::UnregisterReferencedObject(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x50);
  iVar5 = *(int *)(param_1 + 0x58);
  plVar3 = plVar1;
  if (plVar1 != plVar1 + iVar5) {
    while (*plVar3 != param_2) {
      plVar3 = plVar3 + 1;
      if (plVar3 == plVar1 + iVar5) {
        return;
      }
    }
    iVar2 = (int)((longlong)plVar3 - (longlong)plVar1 >> 3);
    if (iVar2 != -1) {
      iVar4 = (iVar5 - iVar2) + -1;
      if (0 < iVar4) {
        iVar4 = 1;
      }
      if (iVar4 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  (plVar1 + iVar2,plVar1 + (iVar5 - iVar4),(longlong)iVar4 << 3);
        iVar5 = *(int *)(param_1 + 0x58);
      }
      *(int *)(param_1 + 0x58) = iVar5 + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x50);
      return;
    }
  }
  return;
}



// FUNCTION 142464b80 Update body=149 status=ok
// SIG undefined Update(void)

undefined8 FActiveForceFeedbackEffect::Update(longlong *param_1,float param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  
  if (*param_1 != 0) {
    fVar1 = (float)UForceFeedbackEffect::GetDuration();
    dVar3 = DAT_1464a97d0;
    if ((*(uint *)(param_1 + 2) & 2) == 0) {
      dVar3 = (double)param_2;
    }
    fVar2 = (float)((double)*(float *)((longlong)param_1 + 0x14) + dVar3);
    *(float *)((longlong)param_1 + 0x14) = fVar2;
    if ((fVar2 <= fVar1) || (((*(uint *)(param_1 + 2) & 1) != 0 && (fVar1 != 0.0)))) {
      GetValues(param_1,param_3);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142464c20 FUN_142464c20 body=405 status=ok
// SIG undefined FUN_142464c20(void)

ulonglong FUN_142464c20(longlong *param_1,float param_2,float *param_3)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  uint uVar4;
  ulonglong in_RAX;
  int iVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  
  fVar1 = *(float *)(param_1 + 2);
  if (fVar1 != 0.0) {
    uVar4 = *(uint *)(param_1 + 4);
    in_RAX = (ulonglong)uVar4;
    dVar13 = DAT_1464a97d0;
    if ((uVar4 & 2) == 0) {
      dVar13 = (double)param_2;
    }
    fVar16 = (float)((double)*(float *)((longlong)param_1 + 0x24) + dVar13);
    *(float *)((longlong)param_1 + 0x24) = fVar16;
    if ((fVar16 <= fVar1) || ((uVar4 & 1) != 0)) {
      if (0.0 < fVar1) {
        iVar5 = 0;
        uVar4 = (int)ROUND((fVar16 / fVar1 + fVar16 / fVar1) - 0.5) >> 1;
        fVar7 = (float)(int)uVar4;
        if (0 < (int)param_1[1]) {
          lVar6 = 0;
          do {
            lVar2 = *param_1;
            auVar9._0_8_ = FRuntimeFloatCurve::GetRichCurve(lVar2 + 8 + lVar6);
            auVar9._0_8_ = FRichCurve::Eval(auVar9._0_8_,fVar16 - fVar7 * fVar1,0);
            uVar4 = *(uint *)(lVar6 + lVar2);
            fVar3 = (float)auVar9._0_8_;
            uVar14 = (undefined4)extraout_XMM0_Qb;
            uVar15 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
            if ((uVar4 & 1) != 0) {
              auVar10 = ZEXT416((uint)*param_3);
              if ((*param_3 <= fVar3) &&
                 (auVar9._8_4_ = uVar14, auVar9._12_4_ = uVar15, auVar10 = auVar9, 1.0 <= fVar3)) {
                auVar10._4_12_ = auVar9._4_12_;
                auVar10._0_4_ = 0x3f800000;
              }
              *param_3 = auVar10._0_4_;
              uVar4 = *(uint *)(lVar6 + lVar2);
            }
            if ((uVar4 & 2) != 0) {
              auVar11 = ZEXT416((uint)param_3[1]);
              if ((param_3[1] <= fVar3) &&
                 (auVar11._8_4_ = uVar14, auVar11._0_8_ = auVar9._0_8_, auVar11._12_4_ = uVar15,
                 1.0 <= fVar3)) {
                auVar11._0_4_ = 0x3f800000;
              }
              param_3[1] = auVar11._0_4_;
              uVar4 = *(uint *)(lVar6 + lVar2);
            }
            if ((uVar4 & 4) != 0) {
              auVar12 = ZEXT416((uint)param_3[2]);
              if ((param_3[2] <= fVar3) &&
                 (auVar12._8_4_ = uVar14, auVar12._0_8_ = auVar9._0_8_, auVar12._12_4_ = uVar15,
                 1.0 <= fVar3)) {
                auVar12._0_4_ = 0x3f800000;
              }
              param_3[2] = auVar12._0_4_;
              uVar4 = *(uint *)(lVar6 + lVar2);
            }
            if ((uVar4 & 8) != 0) {
              fVar8 = param_3[3];
              if (fVar8 <= fVar3) {
                if (1.0 <= fVar3) {
                  auVar9._0_8_ = 0x3f800000;
                }
                fVar8 = (float)auVar9._0_8_;
              }
              param_3[3] = fVar8;
            }
            iVar5 = iVar5 + 1;
            lVar6 = lVar6 + 0x80;
          } while (iVar5 < (int)param_1[1]);
        }
        in_RAX = (ulonglong)uVar4;
      }
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142464dc0 Update body=158 status=ok
// SIG undefined Update(void)

undefined8 FActiveHapticFeedbackEffect::Update(longlong *param_1,float param_2,longlong param_3)

{
  float extraout_XMM0_Da;
  
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x288))();
    param_2 = param_2 + *(float *)((longlong)param_1 + 0xc);
    *(float *)((longlong)param_1 + 0xc) = param_2;
    if ((param_2 <= extraout_XMM0_Da) && (extraout_XMM0_Da != 0.0)) {
      (**(code **)(*(longlong *)*param_1 + 0x280))((longlong *)*param_1,param_2,param_3);
      *(float *)(param_3 + 4) = *(float *)(param_3 + 4) * *(float *)(param_1 + 2);
      if ((*(longlong *)(param_3 + 8) != 0) &&
         (*(int *)(*(longlong *)(param_3 + 8) + 0x24) = (int)param_1[2],
         *(char *)(*(longlong *)(param_3 + 8) + 0x1c) != '\0')) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142464e60 FUN_142464e60 body=3043 status=ok
// SIG undefined FUN_142464e60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142464e60(longlong *param_1,char param_2,char param_3,char param_4,float param_5)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  void *pvVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  float *pfVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
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
  undefined1 auStack_2f8 [32];
  undefined8 local_2d8;
  float local_2d0;
  float *local_2c8;
  undefined1 *local_2c0;
  undefined *local_2b8;
  undefined8 local_2a8;
  float local_2a0;
  undefined8 local_298;
  float local_290;
  undefined8 local_288;
  float local_280;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  undefined1 local_268 [8];
  float local_260;
  float fStack_25c;
  float local_258;
  undefined1 local_248 [12];
  undefined4 local_23c;
  undefined1 local_234 [124];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  longlong local_188;
  longlong lStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined1 local_158 [72];
  longlong local_110;
  longlong local_f0;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_2f8;
  local_278 = *(float *)(param_1 + 0x42);
  fStack_274 = *(float *)((longlong)param_1 + 0x214);
  fStack_270 = *(float *)(param_1 + 0x43);
  fStack_26c = *(float *)((longlong)param_1 + 0x21c);
  auVar15._4_4_ = -(uint)(fStack_274 != *(float *)((longlong)param_1 + 0x254));
  auVar15._0_4_ = -(uint)(local_278 != *(float *)(param_1 + 0x4a));
  auVar15._8_4_ = -(uint)(fStack_270 != *(float *)(param_1 + 0x4b));
  auVar15._12_4_ = -(uint)(fStack_26c != *(float *)((longlong)param_1 + 0x25c));
  iVar7 = movmskps((int)local_d8,auVar15);
  if (iVar7 != 0) {
    *(float *)(param_1 + 0x4a) = local_278;
    *(float *)((longlong)param_1 + 0x254) = fStack_274;
    *(float *)(param_1 + 0x4b) = fStack_270;
    *(float *)((longlong)param_1 + 0x25c) = fStack_26c;
    plVar8 = (longlong *)FQuat::Rotator(&local_278,&local_298);
    param_1[0x4c] = *plVar8;
    *(int *)(param_1 + 0x4d) = (int)plVar8[1];
  }
  local_288 = param_1[0x4c];
  local_280 = *(float *)(param_1 + 0x4d);
  if (((*(byte *)((longlong)param_1 + 0x2f4) & 2) != 0) &&
     (plVar8 = (longlong *)param_1[0x23], plVar8 != (longlong *)0x0)) {
    lVar9 = FUN_1429d7ab0();
    if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
        lVar9 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      (**(code **)(*plVar8 + 0x788))(plVar8,&local_298);
      if ((((float)local_288 == (float)local_298) && (local_288._4_4_ == local_298._4_4_)) &&
         (local_280 == local_290)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_288 = local_298;
        local_280 = local_290;
      }
    }
  }
  if ((*(byte *)((longlong)param_1 + 0x24c) & 8) == 0) {
    uVar2 = *(uint *)((longlong)param_1 + 0x2f4);
    if ((uVar2 & 4) == 0) {
      local_288 = CONCAT44(local_288._4_4_,(int)param_1[0x3f]);
    }
    if ((uVar2 & 8) == 0) {
      local_288 = CONCAT44(*(undefined4 *)((longlong)param_1 + 0x1fc),(float)local_288);
    }
    if ((uVar2 & 0x10) == 0) {
      local_280 = *(float *)(param_1 + 0x40);
    }
  }
  fVar21 = *(float *)(param_1 + 0x60);
  if (param_4 != '\0') {
    if ((((*(byte *)((longlong)param_1 + 0x2f4) & 0x80) == 0) || (param_5 <= fVar21)) ||
       (*(float *)((longlong)param_1 + 0x2fc) <= 0.0)) {
      local_2d8 = (undefined4 *)CONCAT44(local_2d8._4_4_,*(undefined4 *)((longlong)param_1 + 0x2fc))
      ;
      plVar8 = (longlong *)FMath::RInterpTo(&local_278,param_1 + 0x66,&local_288,param_5);
      local_288 = *plVar8;
      local_280 = *(float *)(plVar8 + 1);
    }
    else {
      pfVar10 = (float *)(param_1 + 0x66);
      local_290 = *(float *)(param_1 + 0x67);
      fVar16 = local_288._4_4_ - *(float *)((longlong)param_1 + 0x334);
      fVar20 = fVar21 / param_5;
      fVar25 = (float)DAT_146af3890;
      fVar22 = DAT_146af3890._4_4_;
      fVar23 = DAT_146af3890._8_4_;
      auVar14._4_4_ = fVar16;
      auVar14._0_4_ = (float)local_288 - *pfVar10;
      auVar14._8_4_ = local_280 - *(float *)(param_1 + 0x67);
      auVar14._12_4_ = 0;
      auVar15 = divps(auVar14,_DAT_146af3890);
      fVar18 = ((float)local_288 - *pfVar10) - (float)(int)auVar15._0_4_ * fVar25;
      fVar16 = fVar16 - (float)(int)auVar15._4_4_ * fVar22;
      fVar19 = (local_280 - *(float *)(param_1 + 0x67)) - (float)(int)auVar15._8_4_ * fVar23;
      fVar18 = (float)((uint)(fVar18 + fVar25) ^
                      ((uint)(fVar18 + fVar25) ^ (uint)fVar18) & -(uint)(0.0 <= fVar18));
      fVar24 = (float)((uint)(fVar16 + fVar22) ^
                      ((uint)(fVar16 + fVar22) ^ (uint)fVar16) & -(uint)(0.0 <= fVar16));
      fVar19 = (float)((uint)(fVar19 + fVar23) ^
                      ((uint)(fVar19 + fVar23) ^ (uint)fVar19) & -(uint)(0.0 <= fVar19));
      bVar3 = _DAT_146af3880 < fVar18;
      bVar4 = fRam0000000146af3884 < fVar24;
      bVar5 = fRam0000000146af3888 < fVar19;
      local_298 = *(longlong *)pfVar10;
      for (fVar16 = param_5; 0.0001 < fVar16; fVar16 = fVar16 - fVar17) {
        fVar17 = *(float *)(param_1 + 0x60);
        if (fVar16 <= *(float *)(param_1 + 0x60)) {
          fVar17 = fVar16;
        }
        fVar13 = fVar17 * (1.0 / fVar21);
        local_298._4_4_ = (float)((ulonglong)local_298 >> 0x20);
        local_290 = local_290 +
                    (float)((uint)fVar19 ^ ((uint)(fVar19 - fVar23) ^ (uint)fVar19) & -(uint)bVar5)
                    * fVar20 * fVar13;
        local_298 = CONCAT44(local_298._4_4_ +
                             fVar13 * (float)((uint)fVar24 ^
                                             ((uint)(fVar24 - fVar22) ^ (uint)fVar24) & -(uint)bVar4
                                             ) * fVar20,
                             (float)local_298 +
                             (float)((uint)fVar18 ^
                                    ((uint)(fVar18 - fVar25) ^ (uint)fVar18) & -(uint)bVar3) *
                             fVar20 * fVar13);
        local_2d8._4_4_ = (undefined4)((ulonglong)local_2d8 >> 0x20);
        local_2d8 = (undefined4 *)
                    CONCAT44(local_2d8._4_4_,*(undefined4 *)((longlong)param_1 + 0x2fc));
        plVar8 = (longlong *)FMath::RInterpTo(&local_278,pfVar10,&local_298);
        local_288 = *plVar8;
        local_280 = *(float *)(plVar8 + 1);
        *(longlong *)pfVar10 = local_288;
        *(float *)(param_1 + 0x67) = local_280;
      }
    }
  }
  param_1[0x66] = local_288;
  *(float *)(param_1 + 0x67) = local_280;
  local_2a0 = *(float *)(param_1 + 0x45) + *(float *)(param_1 + 0x5d);
  fVar25 = *(float *)((longlong)param_1 + 0x224) + *(float *)((longlong)param_1 + 0x2e4);
  fVar22 = *(float *)(param_1 + 0x44) + *(float *)(param_1 + 0x5c);
  local_2a8 = CONCAT44(fVar25,fVar22);
  local_260 = fVar22;
  fStack_25c = fVar25;
  local_258 = local_2a0;
  if (param_3 != '\0') {
    if ((((*(byte *)((longlong)param_1 + 0x2f4) & 0x80) == 0) ||
        (param_5 <= *(float *)(param_1 + 0x60))) || (*(float *)(param_1 + 0x5f) <= 0.0)) {
      local_2d8 = (undefined4 *)CONCAT44(local_2d8._4_4_,(int)param_1[0x5f]);
      plVar8 = (longlong *)FMath::VInterpTo(&local_278,param_1 + 99,&local_2a8,param_5);
      local_2a8 = *plVar8;
      fVar22 = (float)local_2a8;
      fVar25 = (float)((ulonglong)local_2a8 >> 0x20);
      local_2a0 = *(float *)(plVar8 + 1);
    }
    else {
      local_290 = *(float *)((longlong)param_1 + 0x32c);
      fVar16 = fVar22 - *(float *)((longlong)param_1 + 0x324);
      fVar19 = local_2a0 - *(float *)((longlong)param_1 + 0x32c);
      fVar18 = *(float *)(param_1 + 0x60) / param_5;
      fVar20 = fVar25 - *(float *)(param_1 + 0x65);
      local_298 = *(longlong *)((longlong)param_1 + 0x324);
      for (fVar23 = param_5; 0.0001 < fVar23; fVar23 = fVar23 - fVar24) {
        fVar24 = *(float *)(param_1 + 0x60);
        if (fVar23 <= *(float *)(param_1 + 0x60)) {
          fVar24 = fVar23;
        }
        fVar25 = fVar24 * (1.0 / fVar21);
        local_298._4_4_ = (float)((ulonglong)local_298 >> 0x20);
        local_290 = local_290 + fVar19 * fVar18 * fVar25;
        local_298 = CONCAT44(local_298._4_4_ + fVar20 * fVar18 * fVar25,
                             (float)local_298 + fVar18 * fVar16 * fVar25);
        local_2d8._4_4_ = (undefined4)((ulonglong)local_2d8 >> 0x20);
        local_2d8 = (undefined4 *)CONCAT44(local_2d8._4_4_,(int)param_1[0x5f]);
        plVar8 = (longlong *)FMath::VInterpTo(&local_278,param_1 + 99,&local_298);
        local_2a8 = *plVar8;
        fVar22 = (float)local_2a8;
        fVar25 = (float)((ulonglong)local_2a8 >> 0x20);
        local_2a0 = *(float *)(plVar8 + 1);
        param_1[99] = local_2a8;
        *(float *)(param_1 + 100) = local_2a0;
      }
    }
    fVar21 = *(float *)((longlong)param_1 + 0x304);
    if (0.0 < fVar21) {
      fVar18 = local_2a8._4_4_ - fStack_25c;
      fVar19 = (float)local_2a8 - local_260;
      fVar16 = local_2a0 - local_258;
      fVar23 = fVar19 * fVar19 + fVar18 * fVar18 + fVar16 * fVar16;
      if (fVar21 * fVar21 < fVar23) {
        fVar25 = DAT_1468b5d94;
        local_2a0 = DAT_1468b5d98;
        fVar22 = DAT_1468b5d90;
        if ((0.0001 <= fVar21) &&
           (fVar25 = fVar18, local_2a0 = fVar16, fVar22 = fVar19, fVar21 * fVar21 < fVar23)) {
          auVar15 = rsqrtss(ZEXT416((uint)fVar23),ZEXT416((uint)fVar23));
          fVar25 = auVar15._0_4_;
          fVar25 = fVar25 + fVar25 * (0.5 - fVar23 * 0.5 * fVar25 * fVar25);
          fVar21 = (fVar25 + fVar25 * (0.5 - fVar23 * 0.5 * fVar25 * fVar25)) * fVar21;
          fVar25 = fVar21 * fVar18;
          local_2a0 = fVar21 * fVar16;
          fVar22 = fVar21 * fVar19;
        }
        fVar25 = fVar25 + fStack_25c;
        fVar22 = fVar22 + local_260;
        local_2a0 = local_2a0 + local_258;
        local_2a8 = CONCAT44(fVar25,fVar22);
      }
    }
  }
  fVar21 = *(float *)(param_1 + 0x5a);
  param_1[99] = CONCAT44(fVar25,fVar22);
  *(float *)(param_1 + 100) = local_2a0;
  *(ulonglong *)((longlong)param_1 + 0x324) = CONCAT44(fStack_25c,local_260);
  *(float *)((longlong)param_1 + 0x32c) = local_258;
  pfVar10 = (float *)FRotator::Vector(&local_288,&local_278);
  fVar16 = (float)local_2a8 - fVar21 * *pfVar10;
  fVar23 = local_2a0 - fVar21 * pfVar10[2];
  fVar18 = local_2a8._4_4_ - fVar21 * pfVar10[1];
  local_2a8 = CONCAT44(fVar18,fVar16);
  local_2a0 = fVar23;
  pfVar10 = (float *)FRotationMatrix::FRotationMatrix(local_158,&local_288);
  pvVar6 = ThreadLocalStoragePointer;
  fVar21 = *(float *)((longlong)param_1 + 0x2d4);
  fVar25 = *(float *)(param_1 + 0x5b);
  fVar22 = *(float *)((longlong)param_1 + 0x2dc);
  local_278 = *(float *)((longlong)param_1 + 0x2d4);
  fStack_274 = (float)param_1[0x5b];
  fStack_270 = *(float *)((longlong)param_1 + 0x2dc);
  local_298 = 0;
  local_290 = 0.0;
  fStack_26c = 0.0;
  fVar16 = fVar16 + fVar22 * pfVar10[8] + pfVar10[0xc] * 0.0 +
                    fVar21 * *pfVar10 + fVar25 * pfVar10[4];
  fVar18 = fVar18 + fVar22 * pfVar10[9] + pfVar10[0xd] * 0.0 +
                    fVar21 * pfVar10[1] + fVar25 * pfVar10[5];
  fVar23 = fVar23 + fVar22 * pfVar10[10] + pfVar10[0xe] * 0.0 +
                    fVar21 * pfVar10[2] + fVar25 * pfVar10[6];
  local_2a8 = CONCAT44(fVar18,fVar16);
  local_2a0 = fVar23;
  if ((param_2 == '\0') || (*(float *)(param_1 + 0x5a) == 0.0)) {
    *(ulonglong *)((longlong)param_1 + 0x30c) = CONCAT44(fVar18,fVar16);
    *(float *)((longlong)param_1 + 0x314) = fVar23;
    *(undefined1 *)(param_1 + 0x61) = 0;
    local_290 = fVar23;
  }
  else {
    uVar12 = (ulonglong)_tls_index;
    lVar9 = param_1[0x23];
    *(undefined1 *)(param_1 + 0x61) = 1;
    if ((*(int *)(*(longlong *)((longlong)pvVar6 + uVar12 * 8) + 0x38) < DAT_146af4a18) &&
       (_Init_thread_header(&DAT_146af4a18), DAT_146af4a18 == -1)) {
      FName::FName(&DAT_146af4a10,"SpringArm",1);
      _Init_thread_footer(&DAT_146af4a18);
    }
    local_2d8 = (undefined4 *)lVar9;
    FUN_1422ffb20(local_158,DAT_146af4a10,local_268,0);
    _guard_xfg_dispatch_icall_nop(local_248,0,0x90);
    lVar9 = param_1[0x24];
    fStack_274 = *(float *)((longlong)param_1 + 0x2ec);
    bVar1 = *(byte *)(param_1 + 0x5e);
    local_23c = 0x3f800000;
    local_278 = 2.8026e-45;
    if (lVar9 == 0) {
      lVar9 = FUN_1423407b0(param_1);
    }
    local_2b8 = &DAT_146aefe68;
    local_2c0 = local_158;
    local_2c8 = &local_278;
    local_2d0 = (float)(uint)bVar1;
    local_2d8 = &DAT_1464aa810;
    UWorld::SweepSingleByChannel(lVar9,local_248,&local_260,&local_2a8);
    *(longlong *)((longlong)param_1 + 0x30c) = local_2a8;
    *(float *)((longlong)param_1 + 0x314) = local_2a0;
    local_2d0 = param_5;
    local_2d8 = (undefined4 *)(CONCAT71(local_2d8._1_7_,local_248[0]) & 0xffffffffffffff01);
    puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x550))(param_1,&local_278,&local_2a8,local_234)
    ;
    local_298 = *puVar11;
    fVar23 = *(float *)(puVar11 + 1);
    fVar18 = (float)((ulonglong)local_298 >> 0x20);
    fVar16 = (float)local_298;
    if ((((float)local_298 == (float)local_2a8) && (fVar18 == local_2a8._4_4_)) &&
       (fVar23 == local_2a0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      *(undefined1 *)(param_1 + 0x61) = 0;
    }
    local_290 = fVar23;
    if (local_f0 != 0) {
      FMemory::Free();
    }
    if (local_110 != 0) {
      FMemory::Free();
    }
  }
  FRotator::Quaternion(&local_288,&local_278);
  local_1b8 = CONCAT44(fStack_274,local_278);
  uStack_1b0 = CONCAT44(fStack_26c,fStack_270);
  local_1a8._4_4_ = fVar18;
  local_1a8._0_4_ = fVar16;
  local_1a8._8_4_ = fVar23;
  local_1a8._12_4_ = 0;
  local_198._4_4_ = DAT_1464aa788._4_4_;
  local_198._0_4_ = (undefined4)DAT_1464aa788;
  local_198._8_4_ = DAT_1464aa790;
  local_198._12_4_ = 0;
  FUN_14162bcf0(&local_1b8,&local_188,param_1 + 0x42);
  local_290 = (float)uStack_170;
  *(undefined4 *)((longlong)param_1 + 0x33c) = local_178;
  *(undefined4 *)(param_1 + 0x68) = uStack_174;
  param_1[0x6a] = local_188;
  param_1[0x6b] = lStack_180;
  *(undefined4 *)((longlong)param_1 + 0x344) = uStack_170;
  FUN_14239b420(param_1,0,0,1);
  return;
}



// FUNCTION 142465a70 FUN_142465a70 body=623 status=ok
// SIG undefined FUN_142465a70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142465a70(longlong *param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
  longlong *local_98;
  int local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  uVar1 = FUN_142235230();
  if ((1 < uVar1) && (param_2 == '\0')) {
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    if (1.0 <= *(float *)(lVar3 + 0x790) - *(float *)((longlong)param_1 + 0x45c)) {
      lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
      *(undefined4 *)((longlong)param_1 + 0x45c) = *(undefined4 *)(lVar3 + 0x790);
      iVar2 = (**(code **)(*param_1 + 0x718))(param_1);
      if ((int)param_1[0x8b] != iVar2) {
        *(int *)(param_1 + 0x8b) = iVar2;
        uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
        UWorld::GetPlayerControllerIterator(uVar4,&local_98);
        for (; (-1 < local_90 && (local_90 < (int)local_98[1])); local_90 = local_90 + 1) {
          lVar3 = FWeakObjectPtr::Get(*local_98 + (longlong)local_90 * 8);
          if (lVar3 != 0) {
            FUN_142717ce0(lVar3,(int)param_1[0x8b]);
          }
        }
      }
    }
    else {
      uVar4 = AActor::GetWorldTimerManager();
      plVar5 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_FUN_143f4d170;
        FWeakObjectPtr::operator=(plVar5 + 1,param_1);
        plVar5[2] = (longlong)&LAB_142440654;
        lVar3 = FDelegateHandle::GenerateNewID();
        plVar5[4] = lVar3;
        *plVar5 = (longlong)&PTR_FUN_143f4d1b8;
      }
      local_88 = 0;
      local_80 = 0;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x30))(plVar5,&local_88);
      }
      FWeakObjectPtr::operator=(local_78,0);
      local_a0 = 0xbf800000;
      local_a8 = 0;
      local_70 = 0;
      local_38 = (longlong *)0x0;
      local_28 = 0;
      local_68 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar4,param_1 + 0x9b,&local_88,0x3f800000);
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
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        lVar3 = FMemory::Realloc(plVar5,0,0);
        if (lVar3 != 0) {
          FMemory::Free(lVar3);
        }
      }
    }
  }
  return;
}



// FUNCTION 142465cf0 UpdateStateFrom body=142 status=ok
// SIG undefined UpdateStateFrom(void)

undefined8
FRootMotionSource::UpdateStateFrom(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*param_2 + 0x58))(param_2);
    lVar4 = (**(code **)(*param_1 + 0x58))(param_1);
    if (lVar4 == lVar3) {
      bVar1 = *(byte *)(param_1 + 6);
      *(undefined1 *)((longlong)param_1 + 0x33) = param_3;
      bVar2 = *(byte *)(param_2 + 6);
      *(byte *)(param_1 + 6) = bVar2;
      if ((bVar1 & 4) != 0) {
        *(byte *)(param_1 + 6) = bVar2 | 4;
      }
      (**(code **)(*param_1 + 0x38))(param_1,*(undefined4 *)((longlong)param_2 + 0x24));
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142465d80 FUN_142465d80 body=301 status=ok
// SIG undefined FUN_142465d80(void)

void FUN_142465d80(longlong param_1,longlong param_2,undefined1 param_3)

{
  byte *pbVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  *(undefined1 *)(param_1 + 0xf8) = *(undefined1 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0xec) = *(undefined8 *)(param_2 + 0xec);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
  plVar6 = *(longlong **)(param_2 + 0x88);
  if (*(longlong **)(param_2 + 0x88) == (longlong *)0x0) {
    plVar6 = (longlong *)(param_2 + 8);
  }
  plVar7 = plVar6 + (longlong)*(int *)(param_2 + 0x90) * 2;
  for (; plVar6 != plVar7; plVar6 = plVar6 + 2) {
    if ((*plVar6 != 0) && (*(short *)(*plVar6 + 0x12) != 0)) {
      plVar4 = *(longlong **)(param_1 + 0x88);
      if (*(longlong **)(param_1 + 0x88) == (longlong *)0x0) {
        plVar4 = (longlong *)(param_1 + 8);
      }
      plVar5 = plVar4 + (longlong)*(int *)(param_1 + 0x90) * 2;
      for (; plVar4 != plVar5; plVar4 = plVar4 + 2) {
        plVar2 = (longlong *)*plVar4;
        if (((plVar2 != (longlong *)0x0) &&
            (*(short *)((longlong)plVar2 + 0x12) == *(short *)(*plVar6 + 0x12))) &&
           (cVar3 = (**(code **)(*plVar2 + 0x18))(), cVar3 != '\0')) {
          cVar3 = (**(code **)(*(longlong *)*plVar4 + 0x28))((longlong *)*plVar4,*plVar6,param_3);
          if (cVar3 == '\0') {
            pbVar1 = (byte *)(*plVar4 + 0x30);
            *pbVar1 = *pbVar1 | 4;
          }
          else {
            pbVar1 = (byte *)(*plVar4 + 0x30);
            *pbVar1 = *pbVar1 & 0xfe;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142465eb0 UpdateStateFrom body=19 status=ok
// SIG undefined UpdateStateFrom(void)

bool FRootMotionSource_ConstantForce::UpdateStateFrom(void)

{
  char cVar1;
  
  cVar1 = FRootMotionSource::UpdateStateFrom();
  return cVar1 != '\0';
}



// FUNCTION 142465ed0 FUN_142465ed0 body=183 status=ok
// SIG undefined FUN_142465ed0(void)

undefined8 FUN_142465ed0(longlong param_1,longlong *param_2,float param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((param_2 == (longlong *)0x0) || (param_2[0xa1] == 0)) {
LAB_142465f70:
    uVar3 = 0;
  }
  else {
    lVar2 = (**(code **)(*param_2 + 0x148))(param_2);
    param_3 = *(float *)(lVar2 + 0x790) - param_3;
    if ((*(float *)(param_1 + 0x4bc) <= 0.0) || (*(float *)(param_1 + 0x4bc) <= param_3)) {
      plVar1 = *(longlong **)(param_1 + 0x10);
      lVar2 = plVar1[0x1f];
      if (lVar2 == 0) {
        (**(code **)(*plVar1 + 0x368))(plVar1);
        lVar2 = plVar1[0x1f];
      }
      if (*(float *)(lVar2 + 0x498) / (float)*(int *)(param_2[0xa1] + 0x38) <= param_3)
      goto LAB_142465f70;
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 142465f90 FUN_142465f90 body=373 status=ok
// SIG undefined FUN_142465f90(void)

void FUN_142465f90(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1,4);
    }
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 1,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 1,4);
    }
  }
  else {
    param_1[1] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 2,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 2,4);
    }
  }
  else {
    param_1[2] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  operator<<(param_2,param_1 + 4);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xc,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xc,4);
    }
  }
  else {
    param_1[0xc] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FCustomVersionContainer::Serialize(param_1 + 0xe,param_2,param_1[0xc]);
  FUN_14158ce90(param_2,param_1 + 0x12);
  return;
}



// FUNCTION 142466110 FUN_142466110 body=104 status=ok
// SIG undefined FUN_142466110(void)

undefined1 FUN_142466110(longlong param_1,undefined8 param_2)

{
  FUN_1419e0b60(param_2,param_1 + 200);
  FUN_1419e0a40(param_2,param_1 + 0xcc);
  FUN_1419e0a40(param_2,param_1 + 0xd2);
  FUN_1419e0b60(param_2,param_1 + 0xd8);
  FUN_1419e0b60(param_2,param_1 + 0xdc);
  return 0;
}



// FUNCTION 142466180 FUN_142466180 body=67 status=ok
// SIG undefined FUN_142466180(void)

longlong FUN_142466180(longlong param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xc0);
  FShader::~FShader(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 1424661d0 operator<FName,FCustomizedToolMenuNameArray>_TTuple<FName,FCustomizedToolMenuNameArray> body=118 status=ok
// SIG undefined operator<FName,FCustomizedToolMenuNameArray>_TTuple<FName,FCustomizedToolMenuNameArray>(void)

undefined8 *
TPairInitializer<FName_const_&,FCustomizedToolMenuNameArray_const_&>::
operator<FName,FCustomizedToolMenuNameArray>_TTuple<FName,FCustomizedToolMenuNameArray>
          (undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  puVar2 = (undefined8 *)param_1[1];
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2 + 1,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_2[1],_Src,(longlong)iVar1 << 3);
  }
  return param_2;
}



// FUNCTION 142466250 FUN_142466250 body=282 status=ok
// SIG undefined FUN_142466250(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_142466250(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  puVar1 = (undefined4 *)*param_1;
  local_70 = 0;
  local_68 = 0;
  local_48 = 0;
  local_38 = 0;
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  local_88 = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  param_2[0x10] = 0xffffffff;
  param_2[0x11] = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  param_2[0x16] = 0;
  local_80 = 0;
  local_78 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0xffffffff;
  local_4c = 0;
  local_40 = 0;
  TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(param_2 + 4,&local_80);
  lVar2 = local_40;
  if (local_40 == 0) {
    _guard_xfg_dispatch_icall_nop(param_2 + 0x12,&local_48,4);
  }
  if (*(longlong *)(param_2 + 0x14) != 0) {
    FMemory::Free();
  }
  *(longlong *)(param_2 + 0x14) = lVar2;
  param_2[0x16] = (undefined4)local_38;
  local_40 = 0;
  local_38 = local_38 & 0xffffffff00000000;
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_80);
  return param_2;
}



// FUNCTION 142466370 FUN_142466370 body=591 status=ok
// SIG undefined FUN_142466370(void)

uint * FUN_142466370(longlong *param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  void *_Dst;
  int iVar6;
  uint uVar7;
  char cVar8;
  uint *puVar9;
  bool bVar10;
  uint local_res8 [2];
  uint local_res10;
  uint local_res14;
  
  iVar6 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar7 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar7 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar7 = *(uint *)(param_1 + 6);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar4 = *(int *)((longlong)(int)uVar7 * 0x68 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar4 * 0x68 + *param_1) = 0xffffffff;
    }
  }
  plVar3 = (longlong *)param_1[4];
  *param_2 = uVar7;
  if (plVar3 == (longlong *)0x0) {
    plVar3 = param_1 + 2;
  }
  puVar9 = (uint *)((longlong)plVar3 +
                   (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar9 = *puVar9 | 1 << ((byte)uVar7 & 0x1f);
  puVar9 = (uint *)((longlong)(int)uVar7 * 0x68 + *param_1);
  FUN_142466250(param_3,puVar9);
  puVar9[0x18] = 0xffffffff;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_res14 = puVar9[1];
    local_res10 = *puVar9;
    FUN_14247e250(param_1,local_res8,&local_res10);
    uVar7 = local_res8[0];
    lVar5 = (longlong)(int)local_res8[0];
    bVar10 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar10);
    if (bVar10) {
      _Dst = (void *)(lVar5 * 0x68 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x58) = 0;
      if (*(longlong *)((longlong)_Dst + 0x50) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ((longlong)_Dst + 0x10);
      _guard_xfg_dispatch_icall_nop(_Dst,puVar9,0x60);
      TSparseArray<TSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = uVar7;
      goto LAB_142466599;
    }
  }
  uVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar7) {
    uVar2 = (uVar7 >> 1) + 8;
    iVar6 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    iVar4 = 0x20;
    cVar8 = '\0';
    if (uVar2 != 0) {
      iVar4 = 0x1f - iVar6;
    }
    uVar2 = (uVar7 >> 1) + 7;
    iVar6 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar2 != 0) {
      cVar8 = '\x1f' - (char)iVar6;
    }
    iVar6 = 1 << (~(byte)((iVar4 << 0x1a) >> 0x1f) & 0x20U - cVar8 & 0x1f);
  }
  if (((int)uVar7 < 1) || (((int)param_1[9] != 0 && (iVar6 <= (int)param_1[9])))) {
    uVar7 = (puVar9[1] ^ *puVar9) & (int)param_1[9] - 1U;
    puVar9[0x19] = uVar7;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    puVar9[0x18] = *(uint *)((longlong)plVar3 +
                            ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(uint *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar6;
    FUN_14248aa70(param_1);
  }
LAB_142466599:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 1424665c0 FUN_1424665c0 body=698 status=ok
// SIG undefined FUN_1424665c0(void)

int * FUN_1424665c0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  byte *_Src;
  uint *puVar14;
  int iVar15;
  bool bVar16;
  
  iVar8 = 1;
  iVar15 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x18);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0x18) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar11;
  lVar6 = (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  bVar16 = false;
  puVar14 = (uint *)((longlong)plVar7 + lVar6);
  *puVar14 = *puVar14 | 1 << ((byte)iVar11 & 0x1f);
  puVar3 = (undefined8 *)param_3[1];
  lVar1 = (longlong)iVar11 * 0x18;
  _Src = (byte *)(*param_1 + lVar1);
  bVar2 = *(byte *)*param_3;
  *_Src = bVar2;
  *(undefined8 *)(_Src + 8) = *puVar3;
  _Src[0x10] = 0xff;
  _Src[0x11] = 0xff;
  _Src[0x12] = 0xff;
  _Src[0x13] = 0xff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 != 1) {
    iVar10 = iVar15;
    if (uVar13 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (ulonglong)bVar2) * 4);
      if (iVar9 != -1) {
        do {
          iVar10 = iVar9;
          if (*(byte *)(*param_1 + (longlong)iVar9 * 0x18) == bVar2) break;
          iVar9 = *(int *)(*param_1 + 0x10 + (longlong)iVar9 * 0x18);
          iVar10 = iVar15;
        } while (iVar9 != -1);
      }
    }
    bVar16 = iVar10 != -1;
    if (bVar16) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar10 * 0x18),_Src,0x10);
      bVar2 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar11;
      }
      lVar4 = *param_1;
      *(undefined4 *)(lVar1 + lVar4) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar15 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar4) = iVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar7 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar14 = (uint *)((longlong)plVar7 + lVar6);
      *puVar14 = *puVar14 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_142466855;
    }
  }
  if (3 < uVar13) {
    uVar5 = (uVar13 >> 1) + 8;
    iVar15 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar8 = 0x20;
    if (uVar5 != 0) {
      iVar8 = 0x1f - iVar15;
    }
    uVar5 = (uVar13 >> 1) + 7;
    iVar15 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar5 == 0) {
      cVar12 = '\0';
    }
    else {
      cVar12 = '\x1f' - (char)iVar15;
    }
    iVar8 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar13 = (int)param_1[9] - 1U & (uint)*_Src;
    *(uint *)(_Src + 0x14) = uVar13;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0x10) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar13) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar13) * 4) = iVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142466855:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar16;
  }
  return param_2;
}



// FUNCTION 142466880 FUN_142466880 body=556 status=ok
// SIG undefined FUN_142466880(void)

int * FUN_142466880(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  void *_Dst;
  uint uVar10;
  bool bVar11;
  int local_res8 [2];
  int local_38 [2];
  ulonglong *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FNameArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  *param_2 = local_38[0];
  TPairInitializer<FName_const_&,FCustomizedToolMenuNameArray_const_&>::
  operator<FName,FCustomizedToolMenuNameArray>_TTuple<FName,FCustomizedToolMenuNameArray>
            (param_3,local_30);
  uVar8 = 0xffffffff;
  bVar11 = false;
  *(undefined4 *)(local_30 + 3) = 0xffffffff;
  iVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar9 != 1) {
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,*local_30);
    bVar11 = local_res8[0] != -1;
    if (bVar11) {
      _Dst = (void *)((longlong)local_res8[0] * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,local_30,0x18);
      iVar9 = *param_2;
      bVar2 = (byte)iVar9 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar9;
      }
      puVar7 = (undefined4 *)((longlong)iVar9 * 0x20 + *param_1);
      *puVar7 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar8 = (undefined4)param_1[6];
      }
      puVar7[1] = uVar8;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar4 = (longlong *)param_1[4];
      *param_2 = local_res8[0];
      if (plVar4 == (longlong *)0x0) {
        plVar4 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar4 +
                       (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_142466a83;
    }
  }
  cVar3 = TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar9,0);
  if (cVar3 == '\0') {
    iVar9 = (int)(*local_30 >> 4);
    uVar6 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
    uVar10 = -(uVar6 + iVar9) ^ uVar6 >> 0xd;
    uVar5 = (iVar9 - uVar6) - uVar10 ^ uVar10 >> 0xc;
    uVar6 = (uVar6 - uVar5) - uVar10 ^ uVar5 << 0x10;
    uVar10 = (uVar10 - uVar6) - uVar5 ^ uVar6 >> 5;
    uVar5 = (uVar5 - uVar6) - uVar10 ^ uVar10 >> 3;
    uVar6 = (uVar6 - uVar5) - uVar10 ^ uVar5 << 10;
    uVar5 = ((uVar10 - uVar6) - uVar5 ^ uVar6 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x1c) = uVar5;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 3) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_142466a83:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 142466ab0 FUN_142466ab0 body=710 status=ok
// SIG undefined FUN_142466ab0(void)

int * FUN_142466ab0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  byte bVar5;
  char cVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  void *_Dst;
  bool local_res8;
  
  uVar12 = 0xffffffff;
  iVar11 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar15 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar15);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar15 = (int)param_1[6];
    iVar9 = *(int *)((longlong)iVar15 * 0x20 + 4 + *param_1);
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar9 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar15;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar13 = (uint *)((longlong)plVar7 +
                    (longlong)((int)(iVar15 + (iVar15 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar13 = *puVar13 | 1 << ((byte)iVar15 & 0x1f);
  puVar13 = (uint *)((longlong)iVar15 * 0x20 + *param_1);
  puVar3 = (undefined8 *)param_3[1];
  *puVar13 = *(uint *)*param_3;
  *(undefined8 *)(puVar13 + 2) = *puVar3;
  lVar4 = puVar3[1];
  *(longlong *)(puVar13 + 4) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  puVar13[6] = 0xffffffff;
  iVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (iVar15 != 1) {
    iVar10 = iVar11;
    if (iVar15 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar7 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar13) * 4);
      if (iVar9 != -1) {
        do {
          iVar10 = iVar9;
          if (*(uint *)((longlong)iVar9 * 0x20 + *param_1) == *puVar13) break;
          iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + *param_1);
          iVar10 = iVar11;
        } while (iVar9 != -1);
      }
    }
    local_res8 = iVar10 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar10 * 0x20 + *param_1);
      plVar7 = *(longlong **)((longlong)_Dst + 0x10);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,puVar13,0x18);
      iVar11 = *param_2;
      bVar5 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar11;
      }
      puVar8 = (undefined4 *)((longlong)iVar11 * 0x20 + *param_1);
      *puVar8 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar12 = (undefined4)param_1[6];
      }
      puVar8[1] = uVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar7 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar13 = (uint *)((longlong)plVar7 +
                        (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar13 = *puVar13 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      goto LAB_142466d55;
    }
  }
  cVar6 = TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar15,0);
  if (cVar6 == '\0') {
    uVar14 = (int)param_1[9] - 1U & *puVar13;
    puVar13[7] = uVar14;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    puVar13[6] = *(uint *)((longlong)plVar7 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         *param_2;
  }
LAB_142466d55:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 142466d80 FUN_142466d80 body=782 status=ok
// SIG undefined FUN_142466d80(void)

int * FUN_142466d80(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  longlong *plVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char cVar14;
  uint uVar15;
  uint *puVar16;
  void *_Dst;
  bool local_res8;
  
  iVar9 = 1;
  iVar13 = -1;
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
    iVar3 = *(int *)((longlong)iVar11 * 0x20 + 4 + *param_1);
    iVar12 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar16 = (uint *)((longlong)plVar8 +
                    (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar16 = *puVar16 | 1 << ((byte)iVar11 & 0x1f);
  puVar16 = (uint *)((longlong)iVar11 * 0x20 + *param_1);
  puVar4 = (undefined8 *)param_3[1];
  *puVar16 = *(uint *)*param_3;
  *(undefined8 *)(puVar16 + 2) = *puVar4;
  lVar5 = puVar4[1];
  *(longlong *)(puVar16 + 4) = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  puVar16[6] = 0xffffffff;
  uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar15 != 1) {
    iVar11 = iVar13;
    if (uVar15 != 0) {
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      iVar12 = *(int *)((longlong)plVar8 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar16) * 4);
      if (iVar12 != -1) {
        do {
          iVar11 = iVar12;
          if (*(uint *)((longlong)iVar12 * 0x20 + *param_1) == *puVar16) break;
          iVar12 = *(int *)((longlong)iVar12 * 0x20 + 0x18 + *param_1);
          iVar11 = iVar13;
        } while (iVar12 != -1);
      }
    }
    local_res8 = iVar11 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar11 * 0x20 + *param_1);
      plVar8 = *(longlong **)((longlong)_Dst + 0x10);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar8 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          iVar9 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,puVar16,0x18);
      iVar9 = *param_2;
      bVar6 = (byte)iVar9 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar9;
      }
      puVar10 = (undefined4 *)((longlong)iVar9 * 0x20 + *param_1);
      *puVar10 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar13 = (int)param_1[6];
      }
      puVar10[1] = iVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar8 = (longlong *)param_1[4];
      *param_2 = iVar11;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar16 = (uint *)((longlong)plVar8 +
                        (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar16 = *puVar16 & ~(1 << bVar6 | 1U >> 0x20 - bVar6);
      goto LAB_142467069;
    }
  }
  if (3 < uVar15) {
    uVar7 = (uVar15 >> 1) + 8;
    iVar13 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    iVar9 = 0x20;
    if (uVar7 != 0) {
      iVar9 = 0x1f - iVar13;
    }
    uVar7 = (uVar15 >> 1) + 7;
    iVar13 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar7 == 0) {
      cVar14 = '\0';
    }
    else {
      cVar14 = '\x1f' - (char)iVar13;
    }
    iVar9 = 1 << (~(byte)((iVar9 << 0x1a) >> 0x1f) & 0x20U - cVar14 & 0x1f);
  }
  if (((int)uVar15 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    uVar15 = (int)param_1[9] - 1U & *puVar16;
    puVar16[7] = uVar15;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    puVar16[6] = *(uint *)((longlong)plVar8 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    TSet<TTuple<FDeviceId,TArray<FKey,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FDeviceId,TArray<FKey,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142467069:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 142467090 FUN_142467090 body=364 status=ok
// SIG undefined FUN_142467090(void)

undefined8 * FUN_142467090(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined2 *puVar5;
  longlong lVar6;
  short *psVar7;
  bool bVar8;
  longlong local_38 [4];
  
  psVar7 = &DAT_143f3eda8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  uVar1 = UEnum::GetPrivateStaticClass();
  lVar6 = -1;
  lVar2 = FUN_141799410(uVar1,0xffffffffffffffff,puVar5,0);
  bVar8 = lVar2 == 0;
  if (bVar8) {
    local_38[0] = 0;
    local_38[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
    lVar2 = local_38[0];
    FGenericPlatformString::Convert<char,wchar_t>(local_38[0],5,&DAT_1450af264,5,0x3f);
    plVar3 = local_38;
  }
  else {
    plVar3 = (longlong *)FUN_1417392b0(lVar2,local_38 + 2,param_3);
    lVar2 = local_38[0];
  }
  if ((int)plVar3[1] != 0) {
    psVar7 = (short *)*plVar3;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if ((psVar7 != (short *)0x0) && (*psVar7 != 0)) {
    do {
      lVar6 = lVar6 + 1;
    } while (psVar7[lVar6] != 0);
    iVar4 = (int)lVar6 + 1;
    *(int *)(param_1 + 1) = iVar4;
    if (0 < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,psVar7,(longlong)iVar4 * 2);
  }
  if ((bVar8) && (lVar2 != 0)) {
    FMemory::Free(lVar2);
  }
  if ((!bVar8) && (local_38[2] != 0)) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142467200 GetGameMapsSettings body=51 status=ok
// SIG undefined GetGameMapsSettings(void)

longlong UGameMapsSettings::GetGameMapsSettings(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)GetPrivateStaticClass();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  return lVar2;
}



// FUNCTION 142467240 FUN_142467240 body=440 status=ok
// SIG undefined FUN_142467240(void)

longlong FUN_142467240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      longlong *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 local_res10;
  longlong local_38 [2];
  undefined8 *local_28;
  longlong *local_20;
  
  plVar2 = param_5;
  local_res10 = param_2;
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId(param_5,local_38,param_2);
  plVar6 = (longlong *)0x0;
  if ((int)local_38[0] != -1) {
    plVar6 = (longlong *)((longlong)(int)local_38[0] * 0x20 + *plVar2);
  }
  plVar9 = plVar6 + 1;
  if (plVar6 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  if (plVar9 == (longlong *)0x0) {
    local_28 = &local_res10;
    local_38[0] = 0;
    local_20 = local_38;
    local_38[1] = 0;
    FUN_142466880(plVar2,&param_5,&local_28,0);
    plVar9 = (longlong *)(*plVar2 + (longlong)(int)param_5 * 0x20 + 8);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  iVar8 = (int)plVar9[1] + -1;
  lVar10 = (longlong)iVar8;
  if (-1 < iVar8) {
    do {
      cVar3 = (**(code **)(**(longlong **)(*plVar9 + lVar10 * 8) + 0x90))();
      if (cVar3 != '\0') {
        lVar10 = *plVar9;
        iVar7 = (int)plVar9[1];
        lVar1 = *(longlong *)(lVar10 + (longlong)iVar8 * 8);
        iVar4 = (iVar7 - iVar8) + -1;
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar10 + (longlong)iVar8 * 8),
                     (void *)(lVar10 + (longlong)(iVar8 + 1) * 8),(longlong)iVar4 << 3);
          iVar7 = (int)plVar9[1];
        }
        *(int *)(plVar9 + 1) = iVar7 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar9);
        UObject::ReinitializeProperties(lVar1,0,0);
        *(uint *)(lVar1 + 8) = *(uint *)(lVar1 + 8) & 0xffff7fff;
        return lVar1;
      }
      iVar8 = iVar8 + -1;
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
  }
  param_5 = (longlong *)0x0;
  uVar5 = GetTransientPackage();
  local_38[0] = 0;
  FUN_1417846f0(uVar5,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  lVar10 = FUN_1417985e0(param_3,uVar5,0,0x40,0,param_4,0,0,0);
  return lVar10;
}



// FUNCTION 142467400 HeapSortInternal<`anonymous_namespace'::FLogCategoryPtrs,FIdentityFunctor,TDereferenceWrapper<`anonymous_namespace'::FLogCategoryPtrs,TLess<`anonymous_namespace'::FLogCategoryPtrs>_>_> body=623 status=ok
// SIG undefined HeapSortInternal<`anonymous_namespace'::FLogCategoryPtrs,FIdentityFunctor,TDereferenceWrapper<`anonymous_namespace'::FLogCategoryPtrs,TLess<`anonymous_namespace'::FLogCategoryPtrs>_>_>(void)

void AlgoImpl::
     HeapSortInternal<_anonymous_namespace_::FLogCategoryPtrs,FIdentityFunctor,TDereferenceWrapper<_anonymous_namespace_::FLogCategoryPtrs,TLess<_anonymous_namespace_::FLogCategoryPtrs>_>_>
               (undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  int iVar16;
  undefined8 *puVar17;
  
  iVar10 = (param_2 + -2) / 2;
  if (-1 < iVar10) {
    iVar12 = iVar10 * 2 + 1;
    iVar4 = iVar12;
    iVar13 = iVar10;
joined_r0x000142467439:
    do {
      if (iVar12 < param_2) {
        iVar12 = iVar10 * 2;
        iVar16 = iVar12 + 1;
        if (iVar12 + 2 < param_2) {
          if (*(int *)(param_1 + (longlong)iVar16 * 3 + 1) == 0) {
            puVar15 = &DAT_143f3eda8;
          }
          else {
            puVar15 = (undefined2 *)param_1[(longlong)iVar16 * 3];
          }
          if (*(int *)(param_1 + ((longlong)iVar12 + 2) * 3 + 1) == 0) {
            puVar14 = &DAT_143f3eda8;
          }
          else {
            puVar14 = (undefined2 *)param_1[((longlong)iVar12 + 2) * 3];
          }
          iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar14,puVar15);
          if (iVar11 < 0) {
            iVar16 = iVar12;
          }
          iVar16 = iVar16 + 1;
        }
        puVar17 = param_1 + (longlong)iVar16 * 3;
        puVar1 = param_1 + (longlong)iVar10 * 3;
        if (*(int *)(param_1 + (longlong)iVar16 * 3 + 1) == 0) {
          puVar15 = &DAT_143f3eda8;
        }
        else {
          puVar15 = (undefined2 *)*puVar17;
        }
        if (*(int *)(puVar1 + 1) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*puVar1;
        }
        iVar10 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar14,puVar15);
        if (iVar10 < 0) {
          if (puVar1 != puVar17) {
            uVar5 = *(undefined4 *)((longlong)puVar17 + 4);
            uVar6 = *(undefined4 *)(puVar17 + 1);
            uVar7 = *(undefined4 *)((longlong)puVar17 + 0xc);
            uVar8 = *puVar1;
            uVar9 = puVar1[1];
            uVar3 = puVar1[2];
            *(undefined4 *)puVar1 = *(undefined4 *)puVar17;
            *(undefined4 *)((longlong)puVar1 + 4) = uVar5;
            *(undefined4 *)(puVar1 + 1) = uVar6;
            *(undefined4 *)((longlong)puVar1 + 0xc) = uVar7;
            puVar1[2] = puVar17[2];
            *puVar17 = uVar8;
            puVar17[1] = uVar9;
            puVar17[2] = uVar3;
          }
          iVar12 = iVar16 * 2 + 1;
          iVar10 = iVar16;
          goto joined_r0x000142467439;
        }
      }
      iVar12 = iVar4 + -2;
      iVar10 = iVar13 + -1;
      iVar4 = iVar12;
      iVar13 = iVar10;
    } while (-1 < iVar10);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar17 = param_1 + (longlong)param_2 * 3;
    do {
      if (param_1 != puVar17) {
        uVar5 = *(undefined4 *)((longlong)puVar17 + 4);
        uVar6 = *(undefined4 *)(puVar17 + 1);
        uVar7 = *(undefined4 *)((longlong)puVar17 + 0xc);
        uVar8 = *param_1;
        uVar9 = param_1[1];
        uVar3 = param_1[2];
        *(undefined4 *)param_1 = *(undefined4 *)puVar17;
        *(undefined4 *)((longlong)param_1 + 4) = uVar5;
        *(undefined4 *)(param_1 + 1) = uVar6;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar7;
        param_1[2] = puVar17[2];
        *puVar17 = uVar8;
        puVar17[1] = uVar9;
        puVar17[2] = uVar3;
      }
      iVar10 = 0;
      if (1 < param_2) {
        do {
          iVar4 = iVar10 * 2;
          iVar12 = iVar4 + 1;
          if (iVar4 + 2 < param_2) {
            if (*(int *)(param_1 + (longlong)iVar12 * 3 + 1) == 0) {
              puVar15 = &DAT_143f3eda8;
            }
            else {
              puVar15 = (undefined2 *)param_1[(longlong)iVar12 * 3];
            }
            if (*(int *)(param_1 + ((longlong)iVar4 + 2) * 3 + 1) == 0) {
              puVar14 = &DAT_143f3eda8;
            }
            else {
              puVar14 = (undefined2 *)param_1[((longlong)iVar4 + 2) * 3];
            }
            iVar13 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar14,puVar15);
            if (iVar13 < 0) {
              iVar12 = iVar4;
            }
            iVar12 = iVar12 + 1;
          }
          puVar1 = param_1 + (longlong)iVar12 * 3;
          puVar2 = param_1 + (longlong)iVar10 * 3;
          if (*(int *)(param_1 + (longlong)iVar12 * 3 + 1) == 0) {
            puVar15 = &DAT_143f3eda8;
          }
          else {
            puVar15 = (undefined2 *)*puVar1;
          }
          if (*(int *)(puVar2 + 1) == 0) {
            puVar14 = &DAT_143f3eda8;
          }
          else {
            puVar14 = (undefined2 *)*puVar2;
          }
          iVar10 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar14,puVar15);
          if (-1 < iVar10) break;
          if (puVar2 != puVar1) {
            uVar5 = *(undefined4 *)((longlong)puVar1 + 4);
            uVar6 = *(undefined4 *)(puVar1 + 1);
            uVar7 = *(undefined4 *)((longlong)puVar1 + 0xc);
            uVar8 = *puVar2;
            uVar9 = puVar2[1];
            uVar3 = puVar2[2];
            *(undefined4 *)puVar2 = *(undefined4 *)puVar1;
            *(undefined4 *)((longlong)puVar2 + 4) = uVar5;
            *(undefined4 *)(puVar2 + 1) = uVar6;
            *(undefined4 *)((longlong)puVar2 + 0xc) = uVar7;
            puVar2[2] = puVar1[2];
            *puVar1 = uVar8;
            puVar1[1] = uVar9;
            puVar1[2] = uVar3;
          }
          iVar10 = iVar12;
        } while (iVar12 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar17 = puVar17 + -3;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 142467670 FUN_142467670 body=369 status=ok
// SIG undefined FUN_142467670(void)

void FUN_142467670(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  
  iVar4 = (param_2 + -2) / 2;
  if (-1 < iVar4) {
    iVar10 = iVar4 * 2 + 1;
    iVar8 = iVar10;
    iVar11 = iVar4;
joined_r0x00014246769a:
    do {
      if (iVar10 < param_2) {
        iVar6 = iVar4 * 2 + 1;
        iVar10 = iVar4 * 2 + 2;
        iVar7 = iVar6;
        if ((iVar10 < param_2) &&
           (iVar7 = iVar10,
           *(float *)(param_1 + (longlong)iVar6 * 2) <= *(float *)(param_1 + (longlong)iVar10 * 2)
           && *(float *)(param_1 + (longlong)iVar10 * 2) !=
              *(float *)(param_1 + (longlong)iVar6 * 2))) {
          iVar7 = iVar6;
        }
        pfVar5 = (float *)(param_1 + (longlong)iVar7 * 2);
        pfVar12 = (float *)(param_1 + (longlong)iVar4 * 2);
        if (*pfVar5 < *pfVar12) {
          if (pfVar12 != pfVar5) {
            uVar1 = *(undefined8 *)(pfVar5 + 2);
            uVar2 = *(undefined8 *)pfVar12;
            uVar3 = *(undefined8 *)(pfVar12 + 2);
            *(undefined8 *)pfVar12 = *(undefined8 *)pfVar5;
            *(undefined8 *)(pfVar12 + 2) = uVar1;
            *(undefined8 *)pfVar5 = uVar2;
            *(undefined8 *)(pfVar5 + 2) = uVar3;
          }
          iVar10 = iVar7 * 2 + 1;
          iVar4 = iVar7;
          goto joined_r0x00014246769a;
        }
      }
      iVar10 = iVar8 + -2;
      iVar4 = iVar11 + -1;
      iVar8 = iVar10;
      iVar11 = iVar4;
    } while (-1 < iVar4);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar9 = param_1 + (longlong)param_2 * 2;
    do {
      if (param_1 != puVar9) {
        uVar1 = puVar9[1];
        uVar2 = *param_1;
        uVar3 = param_1[1];
        *param_1 = *puVar9;
        param_1[1] = uVar1;
        *puVar9 = uVar2;
        puVar9[1] = uVar3;
      }
      iVar4 = 0;
      if (1 < param_2) {
        do {
          iVar10 = iVar4 * 2 + 1;
          iVar11 = iVar4 * 2 + 2;
          iVar8 = iVar10;
          if ((iVar11 < param_2) &&
             (iVar8 = iVar11,
             *(float *)(param_1 + (longlong)iVar10 * 2) <=
             *(float *)(param_1 + (longlong)iVar11 * 2) &&
             *(float *)(param_1 + (longlong)iVar11 * 2) !=
             *(float *)(param_1 + (longlong)iVar10 * 2))) {
            iVar8 = iVar10;
          }
          pfVar5 = (float *)(param_1 + (longlong)iVar8 * 2);
          pfVar12 = (float *)(param_1 + (longlong)iVar4 * 2);
          if (*pfVar12 <= *pfVar5) break;
          if (pfVar12 != pfVar5) {
            uVar1 = *(undefined8 *)(pfVar5 + 2);
            uVar2 = *(undefined8 *)pfVar12;
            uVar3 = *(undefined8 *)(pfVar12 + 2);
            *(undefined8 *)pfVar12 = *(undefined8 *)pfVar5;
            *(undefined8 *)(pfVar12 + 2) = uVar1;
            *(undefined8 *)pfVar5 = uVar2;
            *(undefined8 *)(pfVar5 + 2) = uVar3;
          }
          iVar4 = iVar8;
        } while (iVar8 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar9 = puVar9 + -2;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1424677f0 IntroSortInternal<`anonymous_namespace'::FLogCategoryPtrs,FIdentityFunctor,TDereferenceWrapper<`anonymous_namespace'::FLogCategoryPtrs,TLess<`anonymous_namespace'::FLogCategoryPtrs>_>_> body=990 status=ok
// SIG undefined IntroSortInternal<`anonymous_namespace'::FLogCategoryPtrs,FIdentityFunctor,TDereferenceWrapper<`anonymous_namespace'::FLogCategoryPtrs,TLess<`anonymous_namespace'::FLogCategoryPtrs>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<_anonymous_namespace_::FLogCategoryPtrs,FIdentityFunctor,TDereferenceWrapper<_anonymous_namespace_::FLogCategoryPtrs,TLess<_anonymous_namespace_::FLogCategoryPtrs>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  float fVar19;
  undefined1 auStack_388 [48];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
    lStack_340 = param_1 + param_2 * 0x18 + -0x18;
    fVar19 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar19 = fVar19 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar19 = ::_guard_xfg_dispatch_icall_nop(fVar19);
    local_338 = (undefined4)(longlong)(fVar19 + fVar19);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar15 = &local_348;
    do {
      puVar18 = (undefined8 *)*plVar15;
      puVar11 = (undefined8 *)plVar15[1];
      local_358 = plVar15[2];
      lVar9 = ((longlong)puVar11 - (longlong)puVar18) / 0x18 + 1;
      puVar17 = puVar18;
      iVar14 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_1424678f0:
        if (8 < lVar9) {
          if (lVar9 < 0) {
            lVar9 = lVar9 + 1;
          }
          puVar18 = puVar17 + (lVar9 >> 1) * 3;
          if (puVar18 != puVar17) {
            uVar2 = *(undefined4 *)((longlong)puVar17 + 4);
            uVar3 = *(undefined4 *)(puVar17 + 1);
            uVar4 = *(undefined4 *)((longlong)puVar17 + 0xc);
            uVar5 = *puVar18;
            uVar6 = puVar18[1];
            uVar1 = puVar18[2];
            *(undefined4 *)puVar18 = *(undefined4 *)puVar17;
            *(undefined4 *)((longlong)puVar18 + 4) = uVar2;
            *(undefined4 *)(puVar18 + 1) = uVar3;
            *(undefined4 *)((longlong)puVar18 + 0xc) = uVar4;
            puVar18[2] = puVar17[2];
            *puVar17 = uVar5;
            puVar17[1] = uVar6;
            puVar17[2] = uVar1;
          }
          puVar12 = puVar11 + 3;
          puVar18 = puVar17;
LAB_142467940:
          puVar16 = puVar18;
          puVar18 = puVar16 + 3;
          if (puVar18 <= puVar11) goto code_r0x000142467949;
          goto LAB_142467980;
        }
        for (; puVar12 = puVar17, puVar18 = puVar17, puVar17 < puVar11; puVar11 = puVar11 + -3) {
          while (puVar18 = puVar18 + 3, puVar18 <= puVar11) {
            if (*(int *)(puVar18 + 1) == 0) {
              puVar10 = &DAT_143f3eda8;
            }
            else {
              puVar10 = (undefined2 *)*puVar18;
            }
            if (*(int *)(puVar12 + 1) == 0) {
              puVar8 = &DAT_143f3eda8;
            }
            else {
              puVar8 = (undefined2 *)*puVar12;
            }
            iVar14 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar10);
            if (iVar14 < 0) {
              puVar12 = puVar18;
            }
          }
          if (puVar12 != puVar11) {
            uVar2 = *(undefined4 *)((longlong)puVar11 + 4);
            uVar3 = *(undefined4 *)(puVar11 + 1);
            uVar4 = *(undefined4 *)((longlong)puVar11 + 0xc);
            uVar5 = *puVar12;
            uVar6 = puVar12[1];
            uVar1 = puVar12[2];
            *(undefined4 *)puVar12 = *(undefined4 *)puVar11;
            *(undefined4 *)((longlong)puVar12 + 4) = uVar2;
            *(undefined4 *)(puVar12 + 1) = uVar3;
            *(undefined4 *)((longlong)puVar12 + 0xc) = uVar4;
            puVar12[2] = puVar11[2];
            *puVar11 = uVar5;
            puVar11[1] = uVar6;
            puVar11[2] = uVar1;
          }
        }
        goto LAB_142467ae5;
      }
LAB_142467acc:
      HeapSortInternal<_anonymous_namespace_::FLogCategoryPtrs,FIdentityFunctor,TDereferenceWrapper<_anonymous_namespace_::FLogCategoryPtrs,TLess<_anonymous_namespace_::FLogCategoryPtrs>_>_>
                (puVar18,lVar9,param_3,param_4);
LAB_142467ae5:
      plVar15 = plVar15 + -3;
    } while (&local_348 <= plVar15);
  }
  return;
code_r0x000142467949:
  if (*(int *)(puVar16 + 4) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*puVar18;
  }
  if (*(int *)(puVar17 + 1) == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = (undefined2 *)*puVar17;
  }
  iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar10);
  if (-1 < iVar7) goto LAB_142467940;
LAB_142467980:
  do {
    puVar13 = puVar12;
    puVar12 = puVar13 + -3;
    if (puVar12 <= puVar17) break;
    if (*(int *)(puVar17 + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*puVar17;
    }
    if (*(int *)(puVar13 + -2) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*puVar12;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar10);
  } while (-1 < iVar7);
  if (puVar18 <= puVar12) {
    if (puVar18 != puVar12) {
      uVar2 = *(undefined4 *)((longlong)puVar13 + -0x14);
      uVar3 = *(undefined4 *)(puVar13 + -2);
      uVar4 = *(undefined4 *)((longlong)puVar13 + -0xc);
      uVar5 = *puVar18;
      uVar6 = puVar16[4];
      uVar1 = puVar16[5];
      *(undefined4 *)puVar18 = *(undefined4 *)puVar12;
      *(undefined4 *)((longlong)puVar16 + 0x1c) = uVar2;
      *(undefined4 *)(puVar16 + 4) = uVar3;
      *(undefined4 *)((longlong)puVar16 + 0x24) = uVar4;
      puVar16[5] = puVar13[-1];
      *puVar12 = uVar5;
      puVar13[-2] = uVar6;
      puVar13[-1] = uVar1;
    }
    goto LAB_142467940;
  }
  if (puVar17 != puVar12) {
    uVar2 = *(undefined4 *)((longlong)puVar13 + -0x14);
    uVar3 = *(undefined4 *)(puVar13 + -2);
    uVar4 = *(undefined4 *)((longlong)puVar13 + -0xc);
    uVar5 = *puVar17;
    uVar6 = puVar17[1];
    uVar1 = puVar17[2];
    *(undefined4 *)puVar17 = *(undefined4 *)puVar12;
    *(undefined4 *)((longlong)puVar17 + 4) = uVar2;
    *(undefined4 *)(puVar17 + 1) = uVar3;
    *(undefined4 *)((longlong)puVar17 + 0xc) = uVar4;
    puVar17[2] = puVar13[-1];
    *puVar12 = uVar5;
    puVar13[-2] = uVar6;
    puVar13[-1] = uVar1;
  }
  lVar9 = (longlong)puVar12 + (-0x18 - (longlong)puVar17);
  iVar14 = iVar14 + -1;
  lVar9 = lVar9 / 6 + (lVar9 >> 0x3f);
  if ((lVar9 >> 2) - (lVar9 >> 0x3f) < ((longlong)puVar11 - (longlong)puVar18) / 0x18) {
    if (puVar18 < puVar11) {
      *plVar15 = (longlong)puVar18;
      plVar15[1] = (longlong)puVar11;
      *(int *)(plVar15 + 2) = iVar14;
      plVar15 = plVar15 + 3;
    }
    if (puVar12 <= puVar17 + 3) goto LAB_142467ae5;
    puVar11 = puVar13 + -6;
    puVar18 = puVar17;
  }
  else {
    if (puVar17 + 3 < puVar12) {
      *plVar15 = (longlong)puVar17;
      plVar15[1] = (longlong)(puVar13 + -6);
      *(int *)(plVar15 + 2) = iVar14;
      plVar15 = plVar15 + 3;
    }
    if (puVar11 <= puVar18) goto LAB_142467ae5;
  }
  lVar9 = ((longlong)puVar11 - (longlong)puVar18) / 0x18 + 1;
  puVar17 = puVar18;
  if (iVar14 == 0) goto LAB_142467acc;
  goto LAB_1424678f0;
}



// FUNCTION 142467bd0 FUN_142467bd0 body=629 status=ok
// SIG undefined FUN_142467bd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142467bd0(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  float *pfVar8;
  longlong *plVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float fVar15;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_2 * 0x10 + -0x10 + param_1;
    fVar15 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar15 = fVar15 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar15 = _guard_xfg_dispatch_icall_nop(fVar15);
    local_318 = (undefined4)(longlong)(fVar15 + fVar15);
    _guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar9 = &local_328;
    do {
      pfVar14 = (float *)*plVar9;
      pfVar12 = (float *)plVar9[1];
      lVar1 = plVar9[2];
      local_338._0_4_ = (int)lVar1;
      lVar7 = ((longlong)pfVar12 - (longlong)pfVar14 >> 4) + 1;
      pfVar13 = pfVar14;
      if ((int)local_338 != 0) {
LAB_142467ca0:
        if (8 < lVar7) {
          pfVar14 = pfVar13 + (lVar7 / 2) * 4;
          if (pfVar14 != pfVar13) {
            fVar15 = pfVar13[1];
            fVar2 = pfVar13[2];
            fVar3 = pfVar13[3];
            uVar4 = *(undefined8 *)pfVar14;
            uVar5 = *(undefined8 *)(pfVar14 + 2);
            *pfVar14 = *pfVar13;
            pfVar14[1] = fVar15;
            pfVar14[2] = fVar2;
            pfVar14[3] = fVar3;
            *(undefined8 *)pfVar13 = uVar4;
            *(undefined8 *)(pfVar13 + 2) = uVar5;
          }
          pfVar10 = pfVar12 + 4;
          pfVar14 = pfVar13;
LAB_142467cd6:
          pfVar8 = pfVar14;
          pfVar14 = pfVar8 + 4;
          if (pfVar14 <= pfVar12) goto code_r0x000142467cdf;
          goto LAB_142467cf0;
        }
        for (; pfVar10 = pfVar13, pfVar14 = pfVar13, pfVar13 < pfVar12; pfVar12 = pfVar12 + -4) {
          while (pfVar14 = pfVar14 + 4, pfVar14 <= pfVar12) {
            if (*pfVar14 < *pfVar10) {
              pfVar10 = pfVar14;
            }
          }
          if (pfVar10 != pfVar12) {
            uVar6 = *(undefined8 *)(pfVar12 + 2);
            uVar4 = *(undefined8 *)pfVar10;
            uVar5 = *(undefined8 *)(pfVar10 + 2);
            *(undefined8 *)pfVar10 = *(undefined8 *)pfVar12;
            *(undefined8 *)(pfVar10 + 2) = uVar6;
            *(undefined8 *)pfVar12 = uVar4;
            *(undefined8 *)(pfVar12 + 2) = uVar5;
          }
        }
        goto LAB_142467dbc;
      }
LAB_142467dad:
      local_338 = lVar1;
      FUN_142467670(pfVar14,lVar7,param_3,param_4);
LAB_142467dbc:
      plVar9 = plVar9 + -3;
    } while (&local_328 <= plVar9);
  }
  return;
code_r0x000142467cdf:
  if (*pfVar13 <= *pfVar14) goto LAB_142467cd6;
LAB_142467cf0:
  do {
    pfVar11 = pfVar10;
    pfVar10 = pfVar11 + -4;
    if (pfVar10 <= pfVar13) break;
  } while (*pfVar10 <= *pfVar13);
  if (pfVar14 <= pfVar10) {
    if (pfVar14 != pfVar10) {
      fVar15 = pfVar11[-3];
      fVar2 = pfVar11[-2];
      fVar3 = pfVar11[-1];
      uVar4 = *(undefined8 *)pfVar14;
      uVar5 = *(undefined8 *)(pfVar8 + 6);
      *pfVar14 = *pfVar10;
      pfVar8[5] = fVar15;
      pfVar8[6] = fVar2;
      pfVar8[7] = fVar3;
      *(undefined8 *)pfVar10 = uVar4;
      *(undefined8 *)(pfVar11 + -2) = uVar5;
    }
    goto LAB_142467cd6;
  }
  if (pfVar13 != pfVar10) {
    fVar15 = pfVar11[-3];
    fVar2 = pfVar11[-2];
    fVar3 = pfVar11[-1];
    uVar4 = *(undefined8 *)pfVar13;
    uVar5 = *(undefined8 *)(pfVar13 + 2);
    *pfVar13 = *pfVar10;
    pfVar13[1] = fVar15;
    pfVar13[2] = fVar2;
    pfVar13[3] = fVar3;
    *(undefined8 *)pfVar10 = uVar4;
    *(undefined8 *)(pfVar11 + -2) = uVar5;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)pfVar10 + (-0x10 - (longlong)pfVar13) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pfVar12 - (longlong)pfVar14 & 0xfffffffffffffff0U)) {
    if (pfVar14 < pfVar12) {
      *plVar9 = (longlong)pfVar14;
      plVar9[1] = (longlong)pfVar12;
      *(int *)(plVar9 + 2) = (int)local_338;
      plVar9 = plVar9 + 3;
    }
    if (pfVar10 <= pfVar13 + 4) goto LAB_142467dbc;
    pfVar12 = pfVar11 + -8;
    pfVar14 = pfVar13;
  }
  else {
    if (pfVar13 + 4 < pfVar10) {
      *plVar9 = (longlong)pfVar13;
      plVar9[1] = (longlong)(pfVar11 + -8);
      *(int *)(plVar9 + 2) = (int)local_338;
      plVar9 = plVar9 + 3;
    }
    if (pfVar12 <= pfVar14) goto LAB_142467dbc;
  }
  lVar7 = ((longlong)pfVar12 - (longlong)pfVar14 >> 4) + 1;
  pfVar13 = pfVar14;
  if ((int)local_338 == 0) goto LAB_142467dad;
  goto LAB_142467ca0;
}



// FUNCTION 142467e50 FUN_142467e50 body=21051 status=ok
// SIG undefined FUN_142467e50(void)

void FUN_142467e50(undefined8 *param_1)

{
  char cVar1;
  undefined2 *puVar2;
  undefined1 local_res8 [8];
  undefined2 *local_ca8;
  undefined8 local_ca0;
  undefined2 *local_c98;
  undefined8 local_c90;
  undefined2 *local_c88;
  undefined8 local_c80;
  undefined2 *local_c78;
  undefined8 local_c70;
  longlong local_c68 [388];
  longlong local_48 [2];
  longlong local_38 [2];
  longlong local_28 [2];
  
  local_ca0 = 0xf;
  local_ca8 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_ca8,0);
  FGenericPlatformString::Memcpy(local_ca8,L"PostProcessing",0x1e);
  puVar2 = &DAT_143f3eda8;
  if ((int)local_ca0 != 0) {
    puVar2 = local_ca8;
  }
  cVar1 = FUN_14277a4d0(param_1 + 1,0);
  FString::PrintfImpl(local_c68 + 0x182,L"%s=%d",puVar2,cVar1 != '\0');
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (*param_1,local_res8,local_c68 + 0x182,0);
  if (local_c68[0x182] != 0) {
    FMemory::Free();
  }
  if (local_ca8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_c98 = (undefined2 *)0x0;
  local_c90 = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c98,0);
  FGenericPlatformString::Memcpy(local_c98,L"Bloom",0xc);
  puVar2 = &DAT_143f3eda8;
  if ((int)local_c90 != 0) {
    puVar2 = local_c98;
  }
  cVar1 = FUN_14277a4d0(param_1 + 1,1);
  FString::PrintfImpl(local_48,L"%s=%d",puVar2,cVar1 != '\0');
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (*param_1,local_res8,local_48,0);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (local_c98 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_c88 = (undefined2 *)0x0;
  local_c80 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c88,0);
  FGenericPlatformString::Memcpy(local_c88,L"Tonemapper",0x16);
  puVar2 = &DAT_143f3eda8;
  if ((int)local_c80 != 0) {
    puVar2 = local_c88;
  }
  cVar1 = FUN_14277a4d0(param_1 + 1,2);
  FString::PrintfImpl(local_38,L"%s=%d",puVar2,cVar1 != '\0');
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (*param_1,local_res8,local_38,0);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_c88 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_c78 = (undefined2 *)0x0;
  local_c70 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c78,0);
  FGenericPlatformString::Memcpy(local_c78,L"AntiAliasing",0x1a);
  puVar2 = &DAT_143f3eda8;
  if ((int)local_c70 != 0) {
    puVar2 = local_c78;
  }
  cVar1 = FUN_14277a4d0(param_1 + 1,3);
  FString::PrintfImpl(local_28,L"%s=%d",puVar2,cVar1 != '\0');
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (*param_1,local_res8,local_28,0);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_c78 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_c68[0] = 0;
  local_c68[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c68,0);
  FGenericPlatformString::Memcpy(local_c68[0],L"TemporalAA",0x16);
  cVar1 = `UGameViewportClient::HandleShowCommand'::`44'::FIterSink::OnEngineShowFlag
                    (param_1,4,local_c68);
  if (local_c68[0] != 0) {
    FMemory::Free();
  }
  if (cVar1 != '\0') {
    local_c68[2] = 0;
    local_c68[3] = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c68 + 2,0);
    FGenericPlatformString::Memcpy(local_c68[2],L"EdgeDetection",0x1c);
    cVar1 = `UGameViewportClient::HandleShowCommand'::`44'::FIterSink::OnEngineShowFlag
                      (param_1,5,local_c68 + 2);
    if (local_c68[2] != 0) {
      FMemory::Free();
    }
    if (cVar1 != '\0') {
      local_c68[4] = 0;
      local_c68[5] = 0xf;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c68 + 4,0);
      FGenericPlatformString::Memcpy(local_c68[4],L"AmbientCubemap",0x1e);
      cVar1 = `UGameViewportClient::HandleShowCommand'::`44'::FIterSink::OnEngineShowFlag
                        (param_1,6,local_c68 + 4);
      if (local_c68[4] != 0) {
        FMemory::Free();
      }
      if (cVar1 != '\0') {
        local_c68[6] = 0;
        local_c68[7] = 0xe;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c68 + 6,0);
        FGenericPlatformString::Memcpy(local_c68[6],L"EyeAdaptation",0x1c);
        cVar1 = `UGameViewportClient::HandleShowCommand'::`44'::FIterSink::OnEngineShowFlag
                          (param_1,7,local_c68 + 6);
        if (local_c68[6] != 0) {
          FMemory::Free();
        }
        if (cVar1 != '\0') {
          local_c68[8] = 0;
          local_c68[9] = 0xd;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c68 + 8,0);
          FGenericPlatformString::Memcpy(local_c68[8],L"VisualizeHDR",0x1a);
          cVar1 = `UGameViewportClient::HandleShowCommand'::`44'::FIterSink::OnEngineShowFlag
                            (param_1,8,local_c68 + 8);
          if (local_c68[8] != 0) {
            FMemory::Free();
          }
          if (cVar1 != '\0') {
            local_c68[10] = 0;
            local_c68[0xb] = 0xb;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c68 + 10,0);
            FGenericPlatformString::Memcpy(local_c68[10],L"LensFlares",0x16);
            cVar1 = `UGameViewportClient::HandleShowCommand'::`44'::FIterSink::OnEngineShowFlag
                              (param_1,9,local_c68 + 10);
            if (local_c68[10] != 0) {
              FMemory::Free();
            }
            if (cVar1 != '\0') {
              local_c68[0xc] = 0;
              local_c68[0xd] = 0x13;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c68 + 0xc,0);
              FGenericPlatformString::Memcpy(local_c68[0xc],L"GlobalIllumination",0x26);
              cVar1 = `UGameViewportClient::HandleShowCommand'::`44'::FIterSink::OnEngineShowFlag
                                (param_1,10,local_c68 + 0xc);
              if (local_c68[0xc] != 0) {
                FMemory::Free();
              }
              if (cVar1 != '\0') {
                local_c68[0xe] = 0;
                local_c68[0xf] = 9;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c68 + 0xe,0);
                FGenericPlatformString::Memcpy(local_c68[0xe],L"Vignette",0x12);
                cVar1 = `UGameViewportClient::HandleShowCommand'::`44'::FIterSink::OnEngineShowFlag
                                  (param_1,0xb,local_c68 + 0xe);
                if (local_c68[0xe] != 0) {
                  FMemory::Free();
                }
                if (cVar1 != '\0') {
                  local_c68[0x10] = 0;
                  local_c68[0x11] = 6;
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c68 + 0x10,0);
                  FGenericPlatformString::Memcpy(local_c68[0x10],L"Grain",0xc);
                  cVar1 = `UGameViewportClient::HandleShowCommand'::`44'::FIterSink::
                          OnEngineShowFlag(param_1,0xc,local_c68 + 0x10);
                  if (local_c68[0x10] != 0) {
                    FMemory::Free();
                  }
                  if (cVar1 != '\0') {
                    local_c68[0x12] = 0;
                    local_c68[0x13] = 0x11;
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c68 + 0x12,0);
                    FGenericPlatformString::Memcpy(local_c68[0x12],L"AmbientOcclusion",0x22);
                    cVar1 = `UGameViewportClient::HandleShowCommand'::`44'::FIterSink::
                            OnEngineShowFlag(param_1,0xd,local_c68 + 0x12);
                    if (local_c68[0x12] != 0) {
                      FMemory::Free();
                    }
                    if (cVar1 != '\0') {
                      local_c68[0x14] = 0;
                      local_c68[0x15] = 7;
                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c68 + 0x14,0);
                      FGenericPlatformString::Memcpy(local_c68[0x14],L"Decals",0xe);
                      cVar1 = `UGameViewportClient::HandleShowCommand'::`44'::FIterSink::
                              OnEngineShowFlag(param_1,0xe,local_c68 + 0x14);
                      if (local_c68[0x14] != 0) {
                        FMemory::Free();
                      }
                      if (cVar1 != '\0') {
                        local_c68[0x16] = 0;
                        local_c68[0x17] = 0x14;
                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c68 + 0x16,0);
                        FGenericPlatformString::Memcpy(local_c68[0x16],L"CameraImperfections",0x28);
                        cVar1 = `UGameViewportClient::HandleShowCommand'::`44'::FIterSink::
                                OnEngineShowFlag(param_1,0xf,local_c68 + 0x16);
                        if (local_c68[0x16] != 0) {
                          FMemory::Free();
                        }
                        if (cVar1 != '\0') {
                          local_c68[0x18] = 0;
                          local_c68[0x19] = 0xe;
                          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c68 + 0x18,0);
                          FGenericPlatformString::Memcpy(local_c68[0x18],L"OnScreenDebug",0x1c);
                          cVar1 = `UGameViewportClient::HandleShowCommand'::`44'::FIterSink::
                                  OnEngineShowFlag(param_1,0x10,local_c68 + 0x18);
                          if (local_c68[0x18] != 0) {
                            FMemory::Free();
                          }
                          if (cVar1 != '\0') {
                            local_c68[0x1a] = 0;
                            local_c68[0x1b] = 0x1b;
                            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c68 + 0x1a,0);
                            FGenericPlatformString::Memcpy
                                      (local_c68[0x1a],L"OverrideDiffuseAndSpecular",0x36);
                            cVar1 = `UGameViewportClient::HandleShowCommand'::`44'::FIterSink::
                                    OnEngineShowFlag(param_1,0x11,local_c68 + 0x1a);
                            if (local_c68[0x1a] != 0) {
                              FMemory::Free();
                            }
                            if (cVar1 != '\0') {
                              local_c68[0x1c] = 0;
                              local_c68[0x1d] = 0x13;
                              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c68 + 0x1c,0);
                              FGenericPlatformString::Memcpy
                                        (local_c68[0x1c],L"ReflectionOverride",0x26);
                              cVar1 = `UGameViewportClient::HandleShowCommand'::`44'::FIterSink::
                                      OnEngineShowFlag(param_1,0x12,local_c68 + 0x1c);
                              if (local_c68[0x1c] != 0) {
                                FMemory::Free();
                              }
                              if (cVar1 != '\0') {
                                local_c68[0x1e] = 0;
                                local_c68[0x1f] = 0x10;
                                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c68 + 0x1e,0);
                                FGenericPlatformString::Memcpy
                                          (local_c68[0x1e],L"VisualizeBuffer",0x20);
                                cVar1 = `UGameViewportClient::HandleShowCommand'::`44'::FIterSink::
                                        OnEngineShowFlag(param_1,0x13,local_c68 + 0x1e);
                                if (local_c68[0x1e] != 0) {
                                  FMemory::Free();
                                }
                                if (cVar1 != '\0') {
                                  local_c68[0x20] = 0;
                                  local_c68[0x21] = 0xf;
                                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c68 + 0x20,0);
                                  FGenericPlatformString::Memcpy
                                            (local_c68[0x20],L"DirectLighting",0x1e);
                                  cVar1 = `UGameViewportClient::HandleShowCommand'::`44'::FIterSink
                                          ::OnEngineShowFlag(param_1,0x14,local_c68 + 0x20);
                                  if (local_c68[0x20] != 0) {
                                    FMemory::Free();
                                  }
                                  if (cVar1 != '\0') {
                                    local_c68[0x22] = 0;
                                    local_c68[0x23] = 0x12;
                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                              (local_c68 + 0x22,0);
                                    FGenericPlatformString::Memcpy
                                              (local_c68[0x22],L"DirectionalLights",0x24);
                                    cVar1 = `UGameViewportClient::HandleShowCommand'::`44'::
                                            FIterSink::OnEngineShowFlag
                                                      (param_1,0x15,local_c68 + 0x22);
                                    if (local_c68[0x22] != 0) {
                                      FMemory::Free();
                                    }
                                    if (cVar1 != '\0') {
                                      local_c68[0x24] = 0;
                                      local_c68[0x25] = 0xc;
                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                (local_c68 + 0x24,0);
                                      FGenericPlatformString::Memcpy
                                                (local_c68[0x24],L"PointLights",0x18);
                                      cVar1 = `UGameViewportClient::HandleShowCommand'::`44'::
                                              FIterSink::OnEngineShowFlag
                                                        (param_1,0x16,local_c68 + 0x24);
                                      if (local_c68[0x24] != 0) {
                                        FMemory::Free();
                                      }
                                      if (cVar1 != '\0') {
                                        local_c68[0x26] = 0;
                                        local_c68[0x27] = 0xb;
                                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                  (local_c68 + 0x26,0);
                                        FGenericPlatformString::Memcpy
                                                  (local_c68[0x26],L"SpotLights",0x16);
                                        cVar1 = `UGameViewportClient::HandleShowCommand'::`44'::
                                                FIterSink::OnEngineShowFlag
                                                          (param_1,0x17,local_c68 + 0x26);
                                        if (local_c68[0x26] != 0) {
                                          FMemory::Free();
                                        }
                                        if (cVar1 != '\0') {
                                          local_c68[0x28] = 0;
                                          local_c68[0x29] = 0xb;
                                          TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                    (local_c68 + 0x28,0);
                                          FGenericPlatformString::Memcpy
                                                    (local_c68[0x28],L"RectLights",0x16);
                                          cVar1 = `UGameViewportClient::HandleShowCommand'::`44'::
                                                  FIterSink::OnEngineShowFlag
                                                            (param_1,0x18,local_c68 + 0x28);
                                          if (local_c68[0x28] != 0) {
                                            FMemory::Free();
                                          }
                                          if (cVar1 != '\0') {
                                            local_c68[0x2a] = 0;
                                            local_c68[0x2b] = 0xd;
                                            TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                      (local_c68 + 0x2a,0);
                                            FGenericPlatformString::Memcpy
                                                      (local_c68[0x2a],L"ColorGrading",0x1a);
                                            cVar1 = `UGameViewportClient::HandleShowCommand'::`44'::
                                                    FIterSink::OnEngineShowFlag
                                                              (param_1,0x19,local_c68 + 0x2a);
                                            if (local_c68[0x2a] != 0) {
                                              FMemory::Free();
                                            }
                                            if (cVar1 != '\0') {
                                              local_c68[0x2c] = 0;
                                              local_c68[0x2d] = 0xd;
                                              TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                        (local_c68 + 0x2c,0);
                                              FGenericPlatformString::Memcpy
                                                        (local_c68[0x2c],L"VectorFields",0x1a);
                                              cVar1 = `UGameViewportClient::HandleShowCommand'::`44'
                                                      ::FIterSink::OnEngineShowFlag
                                                                (param_1,0x1a,local_c68 + 0x2c);
                                              if (local_c68[0x2c] != 0) {
                                                FMemory::Free();
                                              }
                                              if (cVar1 != '\0') {
                                                local_c68[0x2e] = 0;
                                                local_c68[0x2f] = 0xd;
                                                TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                          (local_c68 + 0x2e,0);
                                                FGenericPlatformString::Memcpy
                                                          (local_c68[0x2e],L"DepthOfField",0x1a);
                                                cVar1 = `UGameViewportClient::HandleShowCommand'::
                                                        `44'::FIterSink::OnEngineShowFlag
                                                                  (param_1,0x1b,local_c68 + 0x2e);
                                                if (local_c68[0x2e] != 0) {
                                                  FMemory::Free();
                                                }
                                                if (cVar1 != '\0') {
                                                  local_c68[0x30] = 0;
                                                  local_c68[0x31] = 0xd;
                                                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                            (local_c68 + 0x30,0);
                                                  FGenericPlatformString::Memcpy
                                                            (local_c68[0x30],L"GBufferHints",0x1a);
                                                  cVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          `44'::FIterSink::OnEngineShowFlag
                                                                    (param_1,0x1c,local_c68 + 0x30);
                                                  if (local_c68[0x30] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c68[0x32] = 0;
                                                    local_c68[0x33] = 0xb;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c68 + 0x32,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c68[0x32],L"MotionBlur",0x16);
                                                    cVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::`44'::FIterSink::OnEngineShowFlag
                                                                      (param_1,0x1d,local_c68 + 0x32
                                                                      );
                                                    if (local_c68[0x32] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c68[0x34] = 0;
                                                      local_c68[0x35] = 0x1a;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c68 + 0x34,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c68[0x34],
                                                                 L"CompositeEditorPrimitives",0x34);
                                                      cVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::`44'::FIterSink::
                                                              OnEngineShowFlag(param_1,0x1e,
                                                                               local_c68 + 0x34);
                                                      if (local_c68[0x34] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c68[0x36] = 0;
                                                        local_c68[0x37] = 0x11;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c68 + 0x36,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c68[0x36],
                                                                   L"GbxDevPrimitives",0x22);
                                                        cVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::`44'::FIterSink
                                                                ::OnEngineShowFlag(param_1,0x1f,
                                                                                   local_c68 + 0x36)
                                                        ;
                                                        if (local_c68[0x36] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c68[0x38] = 0;
                                                          local_c68[0x39] = 10;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c68 + 0x38,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c68[0x38],L"TestImage",
                                                                     0x14);
                                                          cVar1 = `UGameViewportClient::
                                                                  HandleShowCommand'::`44'::
                                                                  FIterSink::OnEngineShowFlag
                                                                            (param_1,0x20,
                                                                             local_c68 + 0x38);
                                                          if (local_c68[0x38] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c68[0x3a] = 0;
                                                            local_c68[0x3b] = 0xd;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c68 + 0x3a,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c68[0x3a],
                                                                       L"VisualizeDOF",0x1a);
                                                            cVar1 = `UGameViewportClient::
                                                                    HandleShowCommand'::`44'::
                                                                    FIterSink::OnEngineShowFlag
                                                                              (param_1,0x21,
                                                                               local_c68 + 0x3a);
                                                            if (local_c68[0x3a] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c68[0x3c] = 0;
                                                              local_c68[0x3d] = 0x15;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c68 + 0x3c,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c68[0x3c],
                                                                         L"VisualizeAdaptiveDOF",
                                                                         0x2a);
                                                              cVar1 = `UGameViewportClient::
                                                                      HandleShowCommand'::`44'::
                                                                      FIterSink::OnEngineShowFlag
                                                                                (param_1,0x22,
                                                                                 local_c68 + 0x3c);
                                                              if (local_c68[0x3c] != 0) {
                                                                FMemory::Free();
                                                              }
                                                              if (cVar1 != '\0') {
                                                                local_c68[0x3e] = 0;
                                                                local_c68[0x3f] = 0xd;
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeGrow(local_c68 + 0x3e,0);
                                                                FGenericPlatformString::Memcpy
                                                                          (local_c68[0x3e],
                                                                           L"VertexColors",0x1a);
                                                                cVar1 = `UGameViewportClient::
                                                                        HandleShowCommand'::`44'::
                                                                        FIterSink::OnEngineShowFlag
                                                                                  (param_1,0x23,
                                                                                   local_c68 + 0x3e)
                                                                ;
                                                                if (local_c68[0x3e] != 0) {
                                                                  FMemory::Free();
                                                                }
                                                                if (cVar1 != '\0') {
                                                                  local_c68[0x40] = 0;
                                                                  local_c68[0x41] = 0xb;
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeGrow(local_c68 + 0x40,0);
                                                                  FGenericPlatformString::Memcpy
                                                                            (local_c68[0x40],
                                                                             L"Refraction",0x16);
                                                                  cVar1 = `UGameViewportClient::
                                                                          HandleShowCommand'::`44'::
                                                                          FIterSink::
                                                                          OnEngineShowFlag(param_1,
                                                  0x24,local_c68 + 0x40);
                                                  if (local_c68[0x40] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c68[0x42] = 0;
                                                    local_c68[0x43] = 0x14;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c68 + 0x42,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c68[0x42],
                                                               L"CameraInterpolation",0x28);
                                                    cVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::`44'::FIterSink::OnEngineShowFlag
                                                                      (param_1,0x25,local_c68 + 0x42
                                                                      );
                                                    if (local_c68[0x42] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c68[0x44] = 0;
                                                      local_c68[0x45] = 0x11;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c68 + 0x44,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c68[0x44],L"SceneColorFringe"
                                                                 ,0x22);
                                                      cVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::`44'::FIterSink::
                                                              OnEngineShowFlag(param_1,0x26,
                                                                               local_c68 + 0x44);
                                                      if (local_c68[0x44] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c68[0x46] = 0;
                                                        local_c68[0x47] = 0x15;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c68 + 0x46,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c68[0x46],
                                                                   L"SeparateTranslucency",0x2a);
                                                        cVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::`44'::FIterSink
                                                                ::OnEngineShowFlag(param_1,0x27,
                                                                                   local_c68 + 0x46)
                                                        ;
                                                        if (local_c68[0x46] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c68[0x48] = 0;
                                                          local_c68[0x49] = 0x11;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c68 + 0x48,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c68[0x48],
                                                                     L"ScreenPercentage",0x22);
                                                          cVar1 = `UGameViewportClient::
                                                                  HandleShowCommand'::`44'::
                                                                  FIterSink::OnEngineShowFlag
                                                                            (param_1,0x28,
                                                                             local_c68 + 0x48);
                                                          if (local_c68[0x48] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c68[0x4a] = 0;
                                                            local_c68[0x4b] = 0x14;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c68 + 0x4a,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c68[0x4a],
                                                                       L"VisualizeMotionBlur",0x28);
                                                            cVar1 = `UGameViewportClient::
                                                                    HandleShowCommand'::`44'::
                                                                    FIterSink::OnEngineShowFlag
                                                                              (param_1,0x29,
                                                                               local_c68 + 0x4a);
                                                            if (local_c68[0x4a] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c68[0x4c] = 0;
                                                              local_c68[0x4d] = 0x16;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c68 + 0x4c,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c68[0x4c],
                                                                         L"ReflectionEnvironment",
                                                                         0x2c);
                                                              cVar1 = `UGameViewportClient::
                                                                      HandleShowCommand'::`44'::
                                                                      FIterSink::OnEngineShowFlag
                                                                                (param_1,0x2a,
                                                                                 local_c68 + 0x4c);
                                                              if (local_c68[0x4c] != 0) {
                                                                FMemory::Free();
                                                              }
                                                              if (cVar1 != '\0') {
                                                                local_c68[0x4e] = 0;
                                                                local_c68[0x4f] = 0x1b;
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeGrow(local_c68 + 0x4e,0);
                                                                FGenericPlatformString::Memcpy
                                                                          (local_c68[0x4e],
                                                                                                                                                      
                                                  L"VisualizeOutOfBoundsPixels",0x36);
                                                  cVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          `44'::FIterSink::OnEngineShowFlag
                                                                    (param_1,0x2b,local_c68 + 0x4e);
                                                  if (local_c68[0x4e] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c68[0x50] = 0;
                                                    local_c68[0x51] = 8;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c68 + 0x50,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c68[0x50],L"Diffuse",0x10);
                                                    cVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::`44'::FIterSink::OnEngineShowFlag
                                                                      (param_1,0x2c,local_c68 + 0x50
                                                                      );
                                                    if (local_c68[0x50] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c68[0x52] = 0;
                                                      local_c68[0x53] = 9;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c68 + 0x52,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c68[0x52],L"Specular",0x12);
                                                      cVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::`44'::FIterSink::
                                                              OnEngineShowFlag(param_1,0x2d,
                                                                               local_c68 + 0x52);
                                                      if (local_c68[0x52] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c68[0x54] = 0;
                                                        local_c68[0x55] = 0x11;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c68 + 0x54,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c68[0x54],
                                                                   L"SelectionOutline",0x22);
                                                        cVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::`44'::FIterSink
                                                                ::OnEngineShowFlag(param_1,0x2e,
                                                                                   local_c68 + 0x54)
                                                        ;
                                                        if (local_c68[0x54] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c68[0x56] = 0;
                                                          local_c68[0x57] = 0x17;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c68 + 0x56,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c68[0x56],
                                                                     L"ScreenSpaceReflections",0x2e)
                                                          ;
                                                          cVar1 = `UGameViewportClient::
                                                                  HandleShowCommand'::`44'::
                                                                  FIterSink::OnEngineShowFlag
                                                                            (param_1,0x2f,
                                                                             local_c68 + 0x56);
                                                          if (local_c68[0x56] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c68[0x58] = 0;
                                                            local_c68[0x59] = 0xf;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c68 + 0x58,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c68[0x58],
                                                                       L"ContactShadows",0x1e);
                                                            cVar1 = `UGameViewportClient::
                                                                    HandleShowCommand'::`44'::
                                                                    FIterSink::OnEngineShowFlag
                                                                              (param_1,0x30,
                                                                               local_c68 + 0x58);
                                                            if (local_c68[0x58] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c68[0x5a] = 0;
                                                              local_c68[0x5b] = 0x1e;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c68 + 0x5a,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c68[0x5a],
                                                                                                                                                  
                                                  L"RayTracedDistanceFieldShadows",0x3c);
                                                  cVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          `44'::FIterSink::OnEngineShowFlag
                                                                    (param_1,0x31,local_c68 + 0x5a);
                                                  if (local_c68[0x5a] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c68[0x5c] = 0;
                                                    local_c68[0x5d] = 0xf;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c68 + 0x5c,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c68[0x5c],L"CapsuleShadows",
                                                               0x1e);
                                                    cVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::`44'::FIterSink::OnEngineShowFlag
                                                                      (param_1,0x32,local_c68 + 0x5c
                                                                      );
                                                    if (local_c68[0x5c] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c68[0x5e] = 0;
                                                      local_c68[0x5f] = 0x15;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c68 + 0x5e,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c68[0x5e],
                                                                 L"SubsurfaceScattering",0x2a);
                                                      cVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::`44'::FIterSink::
                                                              OnEngineShowFlag(param_1,0x33,
                                                                               local_c68 + 0x5e);
                                                      if (local_c68[0x5e] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c68[0x60] = 0;
                                                        local_c68[0x61] = 0xd;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c68 + 0x60,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c68[0x60],L"VisualizeSSS",
                                                                   0x1a);
                                                        cVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::`44'::FIterSink
                                                                ::OnEngineShowFlag(param_1,0x34,
                                                                                   local_c68 + 0x60)
                                                        ;
                                                        if (local_c68[0x60] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c68[0x62] = 0;
                                                          local_c68[99] = 0x13;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c68 + 0x62,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c68[0x62],
                                                                     L"VolumetricLightmap",0x26);
                                                          cVar1 = `UGameViewportClient::
                                                                  HandleShowCommand'::`44'::
                                                                  FIterSink::OnEngineShowFlag
                                                                            (param_1,0x35,
                                                                             local_c68 + 0x62);
                                                          if (local_c68[0x62] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c68[100] = 0;
                                                            local_c68[0x65] = 0x16;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c68 + 100,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c68[100],
                                                                       L"IndirectLightingCache",0x2c
                                                                      );
                                                            cVar1 = `UGameViewportClient::
                                                                    HandleShowCommand'::`44'::
                                                                    FIterSink::OnEngineShowFlag
                                                                              (param_1,0x36,
                                                                               local_c68 + 100);
                                                            if (local_c68[100] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c68[0x66] = 0;
                                                              local_c68[0x67] = 8;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c68 + 0x66,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c68[0x66],L"DebugAI",
                                                                         0x10);
                                                              cVar1 = `UGameViewportClient::
                                                                      HandleShowCommand'::`44'::
                                                                      FIterSink::OnEngineShowFlag
                                                                                (param_1,0x37,
                                                                                 local_c68 + 0x66);
                                                              if (local_c68[0x66] != 0) {
                                                                FMemory::Free();
                                                              }
                                                              if (cVar1 != '\0') {
                                                                local_c68[0x68] = 0;
                                                                local_c68[0x69] = 7;
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeGrow(local_c68 + 0x68,0);
                                                                FGenericPlatformString::Memcpy
                                                                          (local_c68[0x68],L"VisLog"
                                                                           ,0xe);
                                                                cVar1 = `UGameViewportClient::
                                                                        HandleShowCommand'::`44'::
                                                                        FIterSink::OnEngineShowFlag
                                                                                  (param_1,0x38,
                                                                                   local_c68 + 0x68)
                                                                ;
                                                                if (local_c68[0x68] != 0) {
                                                                  FMemory::Free();
                                                                }
                                                                if (cVar1 != '\0') {
                                                                  local_c68[0x6a] = 0;
                                                                  local_c68[0x6b] = 0xb;
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeGrow(local_c68 + 0x6a,0);
                                                                  FGenericPlatformString::Memcpy
                                                                            (local_c68[0x6a],
                                                                             L"Navigation",0x16);
                                                                  cVar1 = `UGameViewportClient::
                                                                          HandleShowCommand'::`44'::
                                                                          FIterSink::
                                                                          OnEngineShowFlag(param_1,
                                                  0x39,local_c68 + 0x6a);
                                                  if (local_c68[0x6a] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c68[0x6c] = 0;
                                                    local_c68[0x6d] = 0xe;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c68 + 0x6c,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c68[0x6c],L"GameplayDebug",0x1c
                                                              );
                                                    cVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::`44'::FIterSink::OnEngineShowFlag
                                                                      (param_1,0x3a,local_c68 + 0x6c
                                                                      );
                                                    if (local_c68[0x6c] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c68[0x6e] = 0;
                                                      local_c68[0x6f] = 0x16;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c68 + 0x6e,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c68[0x6e],
                                                                 L"TexturedLightProfiles",0x2c);
                                                      cVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::`44'::FIterSink::
                                                              OnEngineShowFlag(param_1,0x3b,
                                                                               local_c68 + 0x6e);
                                                      if (local_c68[0x6e] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c68[0x70] = 0;
                                                        local_c68[0x71] = 0xf;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c68 + 0x70,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c68[0x70],L"LightFunctions"
                                                                   ,0x1e);
                                                        cVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::`44'::FIterSink
                                                                ::OnEngineShowFlag(param_1,0x3c,
                                                                                   local_c68 + 0x70)
                                                        ;
                                                        if (local_c68[0x70] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c68[0x72] = 0;
                                                          local_c68[0x73] = 0xd;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c68 + 0x72,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c68[0x72],L"Tessellation"
                                                                     ,0x1a);
                                                          cVar1 = `UGameViewportClient::
                                                                  HandleShowCommand'::`44'::
                                                                  FIterSink::OnEngineShowFlag
                                                                            (param_1,0x3d,
                                                                             local_c68 + 0x72);
                                                          if (local_c68[0x72] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c68[0x74] = 0;
                                                            local_c68[0x75] = 0x16;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c68 + 0x74,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c68[0x74],
                                                                       L"InstancedStaticMeshes",0x2c
                                                                      );
                                                            cVar1 = `UGameViewportClient::
                                                                    HandleShowCommand'::`44'::
                                                                    FIterSink::OnEngineShowFlag
                                                                              (param_1,0x3e,
                                                                               local_c68 + 0x74);
                                                            if (local_c68[0x74] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c68[0x76] = 0;
                                                              local_c68[0x77] = 0x11;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c68 + 0x76,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c68[0x76],
                                                                         L"InstancedFoliage",0x22);
                                                              cVar1 = `UGameViewportClient::
                                                                      HandleShowCommand'::`44'::
                                                                      FIterSink::OnEngineShowFlag
                                                                                (param_1,0x3f,
                                                                                 local_c68 + 0x76);
                                                              if (local_c68[0x76] != 0) {
                                                                FMemory::Free();
                                                              }
                                                              if (cVar1 != '\0') {
                                                                local_c68[0x78] = 0;
                                                                local_c68[0x79] = 0x15;
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeGrow(local_c68 + 0x78,0);
                                                                FGenericPlatformString::Memcpy
                                                                          (local_c68[0x78],
                                                                           L"HISMCOcclusionBounds",
                                                                           0x2a);
                                                                cVar1 = `UGameViewportClient::
                                                                        HandleShowCommand'::`44'::
                                                                        FIterSink::OnEngineShowFlag
                                                                                  (param_1,0x40,
                                                                                   local_c68 + 0x78)
                                                                ;
                                                                if (local_c68[0x78] != 0) {
                                                                  FMemory::Free();
                                                                }
                                                                if (cVar1 != '\0') {
                                                                  local_c68[0x7a] = 0;
                                                                  local_c68[0x7b] = 0x11;
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeGrow(local_c68 + 0x7a,0);
                                                                  FGenericPlatformString::Memcpy
                                                                            (local_c68[0x7a],
                                                                             L"HISMCClusterTree",
                                                                             0x22);
                                                                  cVar1 = `UGameViewportClient::
                                                                          HandleShowCommand'::`44'::
                                                                          FIterSink::
                                                                          OnEngineShowFlag(param_1,
                                                  0x41,local_c68 + 0x7a);
                                                  if (local_c68[0x7a] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c68[0x7c] = 0;
                                                    local_c68[0x7d] = 0xf;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c68 + 0x7c,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c68[0x7c],L"InstancedGrass",
                                                               0x1e);
                                                    cVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::`44'::FIterSink::OnEngineShowFlag
                                                                      (param_1,0x42,local_c68 + 0x7c
                                                                      );
                                                    if (local_c68[0x7c] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c68[0x7e] = 0;
                                                      local_c68[0x7f] = 0xf;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c68 + 0x7e,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c68[0x7e],L"DynamicShadows",
                                                                 0x1e);
                                                      cVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::`44'::FIterSink::
                                                              OnEngineShowFlag(param_1,0x43,
                                                                               local_c68 + 0x7e);
                                                      if (local_c68[0x7e] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c68[0x80] = 0;
                                                        local_c68[0x81] = 10;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c68 + 0x80,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c68[0x80],L"Particles",0x14
                                                                  );
                                                        cVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::`44'::FIterSink
                                                                ::OnEngineShowFlag(param_1,0x44,
                                                                                   local_c68 + 0x80)
                                                        ;
                                                        if (local_c68[0x80] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c68[0x82] = 0;
                                                          local_c68[0x83] = 0xf;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c68 + 0x82,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c68[0x82],
                                                                     L"SkeletalMeshes",0x1e);
                                                          cVar1 = `UGameViewportClient::
                                                                  HandleShowCommand'::`44'::
                                                                  FIterSink::OnEngineShowFlag
                                                                            (param_1,0x45,
                                                                             local_c68 + 0x82);
                                                          if (local_c68[0x82] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c68[0x84] = 0;
                                                            local_c68[0x85] = 0xd;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c68 + 0x84,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c68[0x84],
                                                                       L"BuilderBrush",0x1a);
                                                            cVar1 = `UGameViewportClient::
                                                                    HandleShowCommand'::`44'::
                                                                    FIterSink::OnEngineShowFlag
                                                                              (param_1,0x46,
                                                                               local_c68 + 0x84);
                                                            if (local_c68[0x84] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c68[0x86] = 0;
                                                              local_c68[0x87] = 0xd;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c68 + 0x86,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c68[0x86],
                                                                         L"Translucency",0x1a);
                                                              cVar1 = `UGameViewportClient::
                                                                      HandleShowCommand'::`44'::
                                                                      FIterSink::OnEngineShowFlag
                                                                                (param_1,0x47,
                                                                                 local_c68 + 0x86);
                                                              if (local_c68[0x86] != 0) {
                                                                FMemory::Free();
                                                              }
                                                              if (cVar1 != '\0') {
                                                                local_c68[0x88] = 0;
                                                                local_c68[0x89] = 0x11;
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeGrow(local_c68 + 0x88,0);
                                                                FGenericPlatformString::Memcpy
                                                                          (local_c68[0x88],
                                                                           L"BillboardSprites",0x22)
                                                                ;
                                                                cVar1 = `UGameViewportClient::
                                                                        HandleShowCommand'::`44'::
                                                                        FIterSink::OnEngineShowFlag
                                                                                  (param_1,0x48,
                                                                                   local_c68 + 0x88)
                                                                ;
                                                                if (local_c68[0x88] != 0) {
                                                                  FMemory::Free();
                                                                }
                                                                if (cVar1 != '\0') {
                                                                  local_c68[0x8a] = 0;
                                                                  local_c68[0x8b] = 4;
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeGrow(local_c68 + 0x8a,0);
                                                                  FGenericPlatformString::Memcpy
                                                                            (local_c68[0x8a],
                                                                             &DAT_1450b79e8,8);
                                                                  cVar1 = `UGameViewportClient::
                                                                          HandleShowCommand'::`44'::
                                                                          FIterSink::
                                                                          OnEngineShowFlag(param_1,
                                                  0x49,local_c68 + 0x8a);
                                                  if (local_c68[0x8a] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c68[0x8c] = 0;
                                                    local_c68[0x8d] = 0x10;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c68 + 0x8c,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c68[0x8c],L"LightComplexity",
                                                               0x20);
                                                    cVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::`44'::FIterSink::OnEngineShowFlag
                                                                      (param_1,0x4a,local_c68 + 0x8c
                                                                      );
                                                    if (local_c68[0x8c] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c68[0x8e] = 0;
                                                      local_c68[0x8f] = 0x11;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c68 + 0x8e,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c68[0x8e],L"ShaderComplexity"
                                                                 ,0x22);
                                                      cVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::`44'::FIterSink::
                                                              OnEngineShowFlag(param_1,0x4b,
                                                                               local_c68 + 0x8e);
                                                      if (local_c68[0x8e] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c68[0x90] = 0;
                                                        local_c68[0x91] = 0x17;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c68 + 0x90,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c68[0x90],
                                                                   L"VertexShaderComplexity",0x2e);
                                                        cVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::`44'::FIterSink
                                                                ::OnEngineShowFlag(param_1,0x4c,
                                                                                   local_c68 + 0x90)
                                                        ;
                                                        if (local_c68[0x90] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c68[0x92] = 0;
                                                          local_c68[0x93] = 0x17;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c68 + 0x92,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c68[0x92],
                                                                     L"StationaryLightOverlap",0x2e)
                                                          ;
                                                          cVar1 = `UGameViewportClient::
                                                                  HandleShowCommand'::`44'::
                                                                  FIterSink::OnEngineShowFlag
                                                                            (param_1,0x4d,
                                                                             local_c68 + 0x92);
                                                          if (local_c68[0x92] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c68[0x94] = 0;
                                                            local_c68[0x95] = 0x10;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c68 + 0x94,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c68[0x94],
                                                                       L"LightMapDensity",0x20);
                                                            cVar1 = `UGameViewportClient::
                                                                    HandleShowCommand'::`44'::
                                                                    FIterSink::OnEngineShowFlag
                                                                              (param_1,0x4e,
                                                                               local_c68 + 0x94);
                                                            if (local_c68[0x94] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c68[0x96] = 0;
                                                              local_c68[0x97] = 0x10;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c68 + 0x96,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c68[0x96],
                                                                         L"StreamingBounds",0x20);
                                                              cVar1 = `UGameViewportClient::
                                                                      HandleShowCommand'::`44'::
                                                                      FIterSink::OnEngineShowFlag
                                                                                (param_1,0x4f,
                                                                                 local_c68 + 0x96);
                                                              if (local_c68[0x96] != 0) {
                                                                FMemory::Free();
                                                              }
                                                              if (cVar1 != '\0') {
                                                                local_c68[0x98] = 0;
                                                                local_c68[0x99] = 0xc;
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeGrow(local_c68 + 0x98,0);
                                                                FGenericPlatformString::Memcpy
                                                                          (local_c68[0x98],
                                                                           L"Constraints",0x18);
                                                                cVar1 = `UGameViewportClient::
                                                                        HandleShowCommand'::`44'::
                                                                        FIterSink::OnEngineShowFlag
                                                                                  (param_1,0x50,
                                                                                   local_c68 + 0x98)
                                                                ;
                                                                if (local_c68[0x98] != 0) {
                                                                  FMemory::Free();
                                                                }
                                                                if (cVar1 != '\0') {
                                                                  local_c68[0x9a] = 0;
                                                                  local_c68[0x9b] = 0xf;
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeGrow(local_c68 + 0x9a,0);
                                                                  FGenericPlatformString::Memcpy
                                                                            (local_c68[0x9a],
                                                                             L"MassProperties",0x1e)
                                                                  ;
                                                                  cVar1 = `UGameViewportClient::
                                                                          HandleShowCommand'::`44'::
                                                                          FIterSink::
                                                                          OnEngineShowFlag(param_1,
                                                  0x51,local_c68 + 0x9a);
                                                  if (local_c68[0x9a] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c68[0x9c] = 0;
                                                    local_c68[0x9d] = 0xf;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c68 + 0x9c,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c68[0x9c],L"CameraFrustums",
                                                               0x1e);
                                                    cVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::`44'::FIterSink::OnEngineShowFlag
                                                                      (param_1,0x52,local_c68 + 0x9c
                                                                      );
                                                    if (local_c68[0x9c] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c68[0x9e] = 0;
                                                      local_c68[0x9f] = 0xc;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c68 + 0x9e,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c68[0x9e],L"AudioRadius",0x18
                                                                );
                                                      cVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::`44'::FIterSink::
                                                              OnEngineShowFlag(param_1,0x53,
                                                                               local_c68 + 0x9e);
                                                      if (local_c68[0x9e] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c68[0xa0] = 0;
                                                        local_c68[0xa1] = 0x14;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c68 + 0xa0,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c68[0xa0],
                                                                   L"ForceFeedbackRadius",0x28);
                                                        cVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::`44'::FIterSink
                                                                ::OnEngineShowFlag(param_1,0x54,
                                                                                   local_c68 + 0xa0)
                                                        ;
                                                        if (local_c68[0xa0] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c68[0xa2] = 0;
                                                          local_c68[0xa3] = 9;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c68 + 0xa2,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c68[0xa2],L"BSPSplit",
                                                                     0x12);
                                                          cVar1 = `UGameViewportClient::
                                                                  HandleShowCommand'::`44'::
                                                                  FIterSink::OnEngineShowFlag
                                                                            (param_1,0x55,
                                                                             local_c68 + 0xa2);
                                                          if (local_c68[0xa2] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c68[0xa4] = 0;
                                                            local_c68[0xa5] = 8;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c68 + 0xa4,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c68[0xa4],L"Brushes",
                                                                       0x10);
                                                            cVar1 = `UGameViewportClient::
                                                                    HandleShowCommand'::`44'::
                                                                    FIterSink::OnEngineShowFlag
                                                                              (param_1,0x56,
                                                                               local_c68 + 0xa4);
                                                            if (local_c68[0xa4] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c68[0xa6] = 0;
                                                              local_c68[0xa7] = 9;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c68 + 0xa6,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c68[0xa6],L"Lighting"
                                                                         ,0x12);
                                                              cVar1 = `UGameViewportClient::
                                                                      HandleShowCommand'::`44'::
                                                                      FIterSink::OnEngineShowFlag
                                                                                (param_1,0x57,
                                                                                 local_c68 + 0xa6);
                                                              if (local_c68[0xa6] != 0) {
                                                                FMemory::Free();
                                                              }
                                                              if (cVar1 != '\0') {
                                                                local_c68[0xa8] = 0;
                                                                local_c68[0xa9] = 0x11;
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeGrow(local_c68 + 0xa8,0);
                                                                FGenericPlatformString::Memcpy
                                                                          (local_c68[0xa8],
                                                                           L"DeferredLighting",0x22)
                                                                ;
                                                                cVar1 = `UGameViewportClient::
                                                                        HandleShowCommand'::`44'::
                                                                        FIterSink::OnEngineShowFlag
                                                                                  (param_1,0x58,
                                                                                   local_c68 + 0xa8)
                                                                ;
                                                                if (local_c68[0xa8] != 0) {
                                                                  FMemory::Free();
                                                                }
                                                                if (cVar1 != '\0') {
                                                                  local_c68[0xaa] = 0;
                                                                  local_c68[0xab] = 7;
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeGrow(local_c68 + 0xaa,0);
                                                                  FGenericPlatformString::Memcpy
                                                                            (local_c68[0xaa],
                                                                             L"Editor",0xe);
                                                                  cVar1 = `UGameViewportClient::
                                                                          HandleShowCommand'::`44'::
                                                                          FIterSink::
                                                                          OnEngineShowFlag(param_1,
                                                  0x59,local_c68 + 0xaa);
                                                  if (local_c68[0xaa] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c68[0xac] = 0;
                                                    local_c68[0xad] = 0xd;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c68 + 0xac,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c68[0xac],L"BSPTriangles",0x1a)
                                                    ;
                                                    cVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::`44'::FIterSink::OnEngineShowFlag
                                                                      (param_1,0x5a,local_c68 + 0xac
                                                                      );
                                                    if (local_c68[0xac] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c68[0xae] = 0;
                                                      local_c68[0xaf] = 0xe;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c68 + 0xae,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c68[0xae],L"LargeVertices",
                                                                 0x1c);
                                                      cVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::`44'::FIterSink::
                                                              OnEngineShowFlag(param_1,0x5b,
                                                                               local_c68 + 0xae);
                                                      if (local_c68[0xae] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c68[0xb0] = 0;
                                                        local_c68[0xb1] = 5;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c68 + 0xb0,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c68[0xb0],L"Grid",10);
                                                        cVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::`44'::FIterSink
                                                                ::OnEngineShowFlag(param_1,0x5c,
                                                                                   local_c68 + 0xb0)
                                                        ;
                                                        if (local_c68[0xb0] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c68[0xb2] = 0;
                                                          local_c68[0xb3] = 5;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c68 + 0xb2,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c68[0xb2],L"Snap",10);
                                                          cVar1 = `UGameViewportClient::
                                                                  HandleShowCommand'::`44'::
                                                                  FIterSink::OnEngineShowFlag
                                                                            (param_1,0x5d,
                                                                             local_c68 + 0xb2);
                                                          if (local_c68[0xb2] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c68[0xb4] = 0;
                                                            local_c68[0xb5] = 10;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c68 + 0xb4,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c68[0xb4],L"MeshEdges",
                                                                       0x14);
                                                            cVar1 = `UGameViewportClient::
                                                                    HandleShowCommand'::`44'::
                                                                    FIterSink::OnEngineShowFlag
                                                                              (param_1,0x5e,
                                                                               local_c68 + 0xb4);
                                                            if (local_c68[0xb4] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c68[0xb6] = 0;
                                                              local_c68[0xb7] = 6;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c68 + 0xb6,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c68[0xb6],L"Cover",
                                                                         0xc);
                                                              cVar1 = `UGameViewportClient::
                                                                      HandleShowCommand'::`44'::
                                                                      FIterSink::OnEngineShowFlag
                                                                                (param_1,0x5f,
                                                                                 local_c68 + 0xb6);
                                                              if (local_c68[0xb6] != 0) {
                                                                FMemory::Free();
                                                              }
                                                              if (cVar1 != '\0') {
                                                                local_c68[0xb8] = 0;
                                                                local_c68[0xb9] = 8;
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeGrow(local_c68 + 0xb8,0);
                                                                FGenericPlatformString::Memcpy
                                                                          (local_c68[0xb8],
                                                                           L"Splines",0x10);
                                                                cVar1 = `UGameViewportClient::
                                                                        HandleShowCommand'::`44'::
                                                                        FIterSink::OnEngineShowFlag
                                                                                  (param_1,0x60,
                                                                                   local_c68 + 0xb8)
                                                                ;
                                                                if (local_c68[0xb8] != 0) {
                                                                  FMemory::Free();
                                                                }
                                                                if (cVar1 != '\0') {
                                                                  local_c68[0xba] = 0;
                                                                  local_c68[0xbb] = 10;
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeGrow(local_c68 + 0xba,0);
                                                                  FGenericPlatformString::Memcpy
                                                                            (local_c68[0xba],
                                                                             L"Selection",0x14);
                                                                  cVar1 = `UGameViewportClient::
                                                                          HandleShowCommand'::`44'::
                                                                          FIterSink::
                                                                          OnEngineShowFlag(param_1,
                                                  0x61,local_c68 + 0xba);
                                                  if (local_c68[0xba] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c68[0xbc] = 0;
                                                    local_c68[0xbd] = 0xc;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c68 + 0xbc,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c68[0xbc],L"ModeWidgets",0x18);
                                                    cVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::`44'::FIterSink::OnEngineShowFlag
                                                                      (param_1,0x62,local_c68 + 0xbc
                                                                      );
                                                    if (local_c68[0xbc] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c68[0xbe] = 0;
                                                      local_c68[0xbf] = 7;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c68 + 0xbe,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c68[0xbe],L"Bounds",0xe);
                                                      cVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::`44'::FIterSink::
                                                              OnEngineShowFlag(param_1,99,
                                                                               local_c68 + 0xbe);
                                                      if (local_c68[0xbe] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c68[0xc0] = 0;
                                                        local_c68[0xc1] = 0xb;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c68 + 0xc0,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c68[0xc0],L"HitProxies",
                                                                   0x16);
                                                        cVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::`44'::FIterSink
                                                                ::OnEngineShowFlag(param_1,100,
                                                                                   local_c68 + 0xc0)
                                                        ;
                                                        if (local_c68[0xc0] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c68[0xc2] = 0;
                                                          local_c68[0xc3] = 0x13;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c68 + 0xc2,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c68[0xc2],
                                                                     L"PropertyColoration",0x26);
                                                          cVar1 = `UGameViewportClient::
                                                                  HandleShowCommand'::`44'::
                                                                  FIterSink::OnEngineShowFlag
                                                                            (param_1,0x65,
                                                                             local_c68 + 0xc2);
                                                          if (local_c68[0xc2] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c68[0xc4] = 0;
                                                            local_c68[0xc5] = 0x10;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c68 + 0xc4,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c68[0xc4],
                                                                       L"LightInfluences",0x20);
                                                            cVar1 = `UGameViewportClient::
                                                                    HandleShowCommand'::`44'::
                                                                    FIterSink::OnEngineShowFlag
                                                                              (param_1,0x66,
                                                                               local_c68 + 0xc4);
                                                            if (local_c68[0xc4] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c68[0xc6] = 0;
                                                              local_c68[199] = 6;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c68 + 0xc6,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c68[0xc6],L"Pivot",
                                                                         0xc);
                                                              cVar1 = `UGameViewportClient::
                                                                      HandleShowCommand'::`44'::
                                                                      FIterSink::OnEngineShowFlag
                                                                                (param_1,0x67,
                                                                                 local_c68 + 0xc6);
                                                              if (local_c68[0xc6] != 0) {
                                                                FMemory::Free();
                                                              }
                                                              if (cVar1 != '\0') {
                                                                local_c68[200] = 0;
                                                                local_c68[0xc9] = 0xf;
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeGrow(local_c68 + 200,0);
                                                                FGenericPlatformString::Memcpy
                                                                          (local_c68[200],
                                                                           L"ShadowFrustums",0x1e);
                                                                cVar1 = `UGameViewportClient::
                                                                        HandleShowCommand'::`44'::
                                                                        FIterSink::OnEngineShowFlag
                                                                                  (param_1,0x68,
                                                                                   local_c68 + 200);
                                                                if (local_c68[200] != 0) {
                                                                  FMemory::Free();
                                                                }
                                                                if (cVar1 != '\0') {
                                                                  local_c68[0xca] = 0;
                                                                  local_c68[0xcb] = 10;
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeGrow(local_c68 + 0xca,0);
                                                                  FGenericPlatformString::Memcpy
                                                                            (local_c68[0xca],
                                                                             L"Wireframe",0x14);
                                                                  cVar1 = `UGameViewportClient::
                                                                          HandleShowCommand'::`44'::
                                                                          FIterSink::
                                                                          OnEngineShowFlag(param_1,
                                                  0x69,local_c68 + 0xca);
                                                  if (local_c68[0xca] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c68[0xcc] = 0;
                                                    local_c68[0xcd] = 10;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c68 + 0xcc,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c68[0xcc],L"Materials",0x14);
                                                    cVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::`44'::FIterSink::OnEngineShowFlag
                                                                      (param_1,0x6a,local_c68 + 0xcc
                                                                      );
                                                    if (local_c68[0xcc] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c68[0xce] = 0;
                                                      local_c68[0xcf] = 0xd;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c68 + 0xce,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c68[0xce],L"StaticMeshes",
                                                                 0x1a);
                                                      cVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::`44'::FIterSink::
                                                              OnEngineShowFlag(param_1,0x6b,
                                                                               local_c68 + 0xce);
                                                      if (local_c68[0xce] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c68[0xd0] = 0;
                                                        local_c68[0xd1] = 10;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c68 + 0xd0,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c68[0xd0],L"Landscape",0x14
                                                                  );
                                                        cVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::`44'::FIterSink
                                                                ::OnEngineShowFlag(param_1,0x6c,
                                                                                   local_c68 + 0xd0)
                                                        ;
                                                        if (local_c68[0xd0] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c68[0xd2] = 0;
                                                          local_c68[0xd3] = 0xc;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c68 + 0xd2,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c68[0xd2],L"LightRadius",
                                                                     0x18);
                                                          cVar1 = `UGameViewportClient::
                                                                  HandleShowCommand'::`44'::
                                                                  FIterSink::OnEngineShowFlag
                                                                            (param_1,0x6d,
                                                                             local_c68 + 0xd2);
                                                          if (local_c68[0xd2] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c68[0xd4] = 0;
                                                            local_c68[0xd5] = 4;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c68 + 0xd4,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c68[0xd4],
                                                                       &DAT_144dc72e0,8);
                                                            cVar1 = `UGameViewportClient::
                                                                    HandleShowCommand'::`44'::
                                                                    FIterSink::OnEngineShowFlag
                                                                              (param_1,0x6e,
                                                                               local_c68 + 0xd4);
                                                            if (local_c68[0xd4] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c68[0xd6] = 0;
                                                              local_c68[0xd7] = 8;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c68 + 0xd6,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c68[0xd6],L"Volumes",
                                                                         0x10);
                                                              cVar1 = `UGameViewportClient::
                                                                      HandleShowCommand'::`44'::
                                                                      FIterSink::OnEngineShowFlag
                                                                                (param_1,0x6f,
                                                                                 local_c68 + 0xd6);
                                                              if (local_c68[0xd6] != 0) {
                                                                FMemory::Free();
                                                              }
                                                              if (cVar1 != '\0') {
                                                                local_c68[0xd8] = 0;
                                                                local_c68[0xd9] = 5;
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeGrow(local_c68 + 0xd8,0);
                                                                FGenericPlatformString::Memcpy
                                                                          (local_c68[0xd8],L"Game",
                                                                           10);
                                                                cVar1 = `UGameViewportClient::
                                                                        HandleShowCommand'::`44'::
                                                                        FIterSink::OnEngineShowFlag
                                                                                  (param_1,0x70,
                                                                                   local_c68 + 0xd8)
                                                                ;
                                                                if (local_c68[0xd8] != 0) {
                                                                  FMemory::Free();
                                                                }
                                                                if (cVar1 != '\0') {
                                                                  local_c68[0xda] = 0;
                                                                  local_c68[0xdb] = 0x10;
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeGrow(local_c68 + 0xda,0);
                                                                  FGenericPlatformString::Memcpy
                                                                            (local_c68[0xda],
                                                                             L"LevelColoration",0x20
                                                                            );
                                                                  cVar1 = `UGameViewportClient::
                                                                          HandleShowCommand'::`44'::
                                                                          FIterSink::
                                                                          OnEngineShowFlag(param_1,
                                                  0x71,local_c68 + 0xda);
                                                  if (local_c68[0xda] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c68[0xdc] = 0;
                                                    local_c68[0xdd] = 4;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c68 + 0xdc,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c68[0xdc],&DAT_1450b7dc0,8);
                                                    cVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::`44'::FIterSink::OnEngineShowFlag
                                                                      (param_1,0x72,local_c68 + 0xdc
                                                                      );
                                                    if (local_c68[0xdc] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c68[0xde] = 0;
                                                      local_c68[0xdf] = 10;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c68 + 0xde,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c68[0xde],L"Collision",0x14);
                                                      cVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::`44'::FIterSink::
                                                              OnEngineShowFlag(param_1,0x73,
                                                                               local_c68 + 0xde);
                                                      if (local_c68[0xde] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c68[0xe0] = 0;
                                                        local_c68[0xe1] = 0x14;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c68 + 0xe0,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c68[0xe0],
                                                                   L"CollisionVisibility",0x28);
                                                        cVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::`44'::FIterSink
                                                                ::OnEngineShowFlag(param_1,0x74,
                                                                                   local_c68 + 0xe0)
                                                        ;
                                                        if (local_c68[0xe0] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c68[0xe2] = 0;
                                                          local_c68[0xe3] = 0xe;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c68 + 0xe2,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c68[0xe2],
                                                                     L"CollisionPawn",0x1c);
                                                          cVar1 = `UGameViewportClient::
                                                                  HandleShowCommand'::`44'::
                                                                  FIterSink::OnEngineShowFlag
                                                                            (param_1,0x75,
                                                                             local_c68 + 0xe2);
                                                          if (local_c68[0xe2] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c68[0xe4] = 0;
                                                            local_c68[0xe5] = 0xc;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c68 + 0xe4,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c68[0xe4],
                                                                       L"LightShafts",0x18);
                                                            cVar1 = `UGameViewportClient::
                                                                    HandleShowCommand'::`44'::
                                                                    FIterSink::OnEngineShowFlag
                                                                              (param_1,0x76,
                                                                               local_c68 + 0xe4);
                                                            if (local_c68[0xe4] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c68[0xe6] = 0;
                                                              local_c68[0xe7] = 0x14;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c68 + 0xe6,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c68[0xe6],
                                                                         L"PostProcessMaterial",0x28
                                                                        );
                                                              cVar1 = `UGameViewportClient::
                                                                      HandleShowCommand'::`44'::
                                                                      FIterSink::OnEngineShowFlag
                                                                                (param_1,0x77,
                                                                                 local_c68 + 0xe6);
                                                              if (local_c68[0xe6] != 0) {
                                                                FMemory::Free();
                                                              }
                                                              if (cVar1 != '\0') {
                                                                local_c68[0xe8] = 0;
                                                                local_c68[0xe9] = 0xf;
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeGrow(local_c68 + 0xe8,0);
                                                                FGenericPlatformString::Memcpy
                                                                          (local_c68[0xe8],
                                                                           L"AtmosphericFog",0x1e);
                                                                cVar1 = `UGameViewportClient::
                                                                        HandleShowCommand'::`44'::
                                                                        FIterSink::OnEngineShowFlag
                                                                                  (param_1,0x78,
                                                                                   local_c68 + 0xe8)
                                                                ;
                                                                if (local_c68[0xe8] != 0) {
                                                                  FMemory::Free();
                                                                }
                                                                if (cVar1 != '\0') {
                                                                  local_c68[0xea] = 0;
                                                                  local_c68[0xeb] = 0x16;
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeGrow(local_c68 + 0xea,0);
                                                                  FGenericPlatformString::Memcpy
                                                                            (local_c68[0xea],
                                                                                                                                                          
                                                  L"CameraAspectRatioBars",0x2c);
                                                  cVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          `44'::FIterSink::OnEngineShowFlag
                                                                    (param_1,0x79,local_c68 + 0xea);
                                                  if (local_c68[0xea] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c68[0xec] = 0;
                                                    local_c68[0xed] = 0x11;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c68 + 0xec,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c68[0xec],L"CameraSafeFrames",
                                                               0x22);
                                                    cVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::`44'::FIterSink::OnEngineShowFlag
                                                                      (param_1,0x7a,local_c68 + 0xec
                                                                      );
                                                    if (local_c68[0xec] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c68[0xee] = 0;
                                                      local_c68[0xef] = 0xb;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c68 + 0xee,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c68[0xee],L"TextRender",0x16)
                                                      ;
                                                      cVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::`44'::FIterSink::
                                                              OnEngineShowFlag(param_1,0x7b,
                                                                               local_c68 + 0xee);
                                                      if (local_c68[0xee] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c68[0xf0] = 0;
                                                        local_c68[0xf1] = 10;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c68 + 0xf0,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c68[0xf0],L"Rendering",0x14
                                                                  );
                                                        cVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::`44'::FIterSink
                                                                ::OnEngineShowFlag(param_1,0x7c,
                                                                                   local_c68 + 0xf0)
                                                        ;
                                                        if (local_c68[0xf0] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c68[0xf2] = 0;
                                                          local_c68[0xf3] = 0x16;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c68 + 0xf2,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c68[0xf2],
                                                                     L"HighResScreenshotMask",0x2c);
                                                          cVar1 = `UGameViewportClient::
                                                                  HandleShowCommand'::`44'::
                                                                  FIterSink::OnEngineShowFlag
                                                                            (param_1,0x7d,
                                                                             local_c68 + 0xf2);
                                                          if (local_c68[0xf2] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c68[0xf4] = 0;
                                                            local_c68[0xf5] = 0xe;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c68 + 0xf4,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c68[0xf4],
                                                                       L"HMDDistortion",0x1c);
                                                            cVar1 = `UGameViewportClient::
                                                                    HandleShowCommand'::`44'::
                                                                    FIterSink::OnEngineShowFlag
                                                                              (param_1,0x7e,
                                                                               local_c68 + 0xf4);
                                                            if (local_c68[0xf4] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c68[0xf6] = 0;
                                                              local_c68[0xf7] = 0x10;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c68 + 0xf6,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c68[0xf6],
                                                                         L"StereoRendering",0x20);
                                                              cVar1 = `UGameViewportClient::
                                                                      HandleShowCommand'::`44'::
                                                                      FIterSink::OnEngineShowFlag
                                                                                (param_1,0x7f,
                                                                                 local_c68 + 0xf6);
                                                              if (local_c68[0xf6] != 0) {
                                                                FMemory::Free();
                                                              }
                                                              if (cVar1 != '\0') {
                                                                local_c68[0xf8] = 0;
                                                                local_c68[0xf9] = 0x19;
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeGrow(local_c68 + 0xf8,0);
                                                                FGenericPlatformString::Memcpy
                                                                          (local_c68[0xf8],
                                                                                                                                                      
                                                  L"DistanceCulledPrimitives",0x32);
                                                  cVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          `44'::FIterSink::OnEngineShowFlag
                                                                    (param_1,0x80,local_c68 + 0xf8);
                                                  if (local_c68[0xf8] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c68[0xfa] = 0;
                                                    local_c68[0xfb] = 0x16;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c68 + 0xfa,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c68[0xfa],
                                                               L"VisualizeLightCulling",0x2c);
                                                    cVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::`44'::FIterSink::OnEngineShowFlag
                                                                      (param_1,0x81,local_c68 + 0xfa
                                                                      );
                                                    if (local_c68[0xfa] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c68[0xfc] = 0;
                                                      local_c68[0xfd] = 0x16;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c68 + 0xfc,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c68[0xfc],
                                                                 L"PrecomputedVisibility",0x2c);
                                                      cVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::`44'::FIterSink::
                                                              OnEngineShowFlag(param_1,0x82,
                                                                               local_c68 + 0xfc);
                                                      if (local_c68[0xfc] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c68[0xfe] = 0;
                                                        local_c68[0xff] = 0xc;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c68 + 0xfe,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c68[0xfe],L"SkyLighting",
                                                                   0x18);
                                                        cVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::`44'::FIterSink
                                                                ::OnEngineShowFlag(param_1,0x83,
                                                                                   local_c68 + 0xfe)
                                                        ;
                                                        if (local_c68[0xfe] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c68[0x100] = 0;
                                                          local_c68[0x101] = 0xd;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c68 + 0x100,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c68[0x100],
                                                                     L"VisualizeLPV",0x1a);
                                                          cVar1 = `UGameViewportClient::
                                                                  HandleShowCommand'::`44'::
                                                                  FIterSink::OnEngineShowFlag
                                                                            (param_1,0x84,
                                                                             local_c68 + 0x100);
                                                          if (local_c68[0x100] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c68[0x102] = 0;
                                                            local_c68[0x103] = 0x18;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c68 + 0x102,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c68[0x102],
                                                                       L"PreviewShadowsIndicator",
                                                                       0x30);
                                                            cVar1 = `UGameViewportClient::
                                                                    HandleShowCommand'::`44'::
                                                                    FIterSink::OnEngineShowFlag
                                                                              (param_1,0x85,
                                                                               local_c68 + 0x102);
                                                            if (local_c68[0x102] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c68[0x104] = 0;
                                                              local_c68[0x105] = 0x1b;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c68 + 0x104,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c68[0x104],
                                                                                                                                                  
                                                  L"PrecomputedVisibilityCells",0x36);
                                                  cVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          `44'::FIterSink::OnEngineShowFlag
                                                                    (param_1,0x86,local_c68 + 0x104)
                                                  ;
                                                  if (local_c68[0x104] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c68[0x106] = 0;
                                                    local_c68[0x107] = 0x1c;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c68 + 0x106,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c68[0x106],
                                                               L"VisualizeVolumetricLightmap",0x38);
                                                    cVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::`44'::FIterSink::OnEngineShowFlag
                                                                      (param_1,0x87,
                                                                       local_c68 + 0x106);
                                                    if (local_c68[0x106] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c68[0x108] = 0;
                                                      local_c68[0x109] = 0x16;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c68 + 0x108,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c68[0x108],
                                                                 L"VolumeLightingSamples",0x2c);
                                                      cVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::`44'::FIterSink::
                                                              OnEngineShowFlag(param_1,0x88,
                                                                               local_c68 + 0x108);
                                                      if (local_c68[0x108] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c68[0x10a] = 0;
                                                        local_c68[0x10b] = 0xf;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c68 + 0x10a,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c68[0x10a],
                                                                   L"Paper2DSprites",0x1e);
                                                        cVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::`44'::FIterSink
                                                                ::OnEngineShowFlag(param_1,0x89,
                                                                                   local_c68 + 0x10a
                                                                                  );
                                                        if (local_c68[0x10a] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c68[0x10c] = 0;
                                                          local_c68[0x10d] = 0x19;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c68 + 0x10c,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c68[0x10c],
                                                                     L"VisualizeDistanceFieldAO",
                                                                     0x32);
                                                          cVar1 = `UGameViewportClient::
                                                                  HandleShowCommand'::`44'::
                                                                  FIterSink::OnEngineShowFlag
                                                                            (param_1,0x8a,
                                                                             local_c68 + 0x10c);
                                                          if (local_c68[0x10c] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c68[0x10e] = 0;
                                                            local_c68[0x10f] = 0x19;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c68 + 0x10e,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c68[0x10e],
                                                                       L"VisualizeDistanceFieldGI",
                                                                       0x32);
                                                            cVar1 = `UGameViewportClient::
                                                                    HandleShowCommand'::`44'::
                                                                    FIterSink::OnEngineShowFlag
                                                                              (param_1,0x8b,
                                                                               local_c68 + 0x10e);
                                                            if (local_c68[0x10e] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c68[0x110] = 0;
                                                              local_c68[0x111] = 0x1c;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c68 + 0x110,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c68[0x110],
                                                                                                                                                  
                                                  L"VisualizeMeshDistanceFields",0x38);
                                                  cVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          `44'::FIterSink::OnEngineShowFlag
                                                                    (param_1,0x8c,local_c68 + 0x110)
                                                  ;
                                                  if (local_c68[0x110] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c68[0x112] = 0;
                                                    local_c68[0x113] = 0x1d;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c68 + 0x112,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c68[0x112],
                                                               L"VisualizeGlobalDistanceField",0x3a)
                                                    ;
                                                    cVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::`44'::FIterSink::OnEngineShowFlag
                                                                      (param_1,0x8d,
                                                                       local_c68 + 0x112);
                                                    if (local_c68[0x112] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c68[0x114] = 0;
                                                      local_c68[0x115] = 0xe;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c68 + 0x114,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c68[0x114],L"ScreenSpaceAO",
                                                                 0x1c);
                                                      cVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::`44'::FIterSink::
                                                              OnEngineShowFlag(param_1,0x8e,
                                                                               local_c68 + 0x114);
                                                      if (local_c68[0x114] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c68[0x116] = 0;
                                                        local_c68[0x117] = 0x10;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c68 + 0x116,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c68[0x116],
                                                                   L"DistanceFieldAO",0x20);
                                                        cVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::`44'::FIterSink
                                                                ::OnEngineShowFlag(param_1,0x8f,
                                                                                   local_c68 + 0x116
                                                                                  );
                                                        if (local_c68[0x116] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c68[0x118] = 0;
                                                          local_c68[0x119] = 0x10;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c68 + 0x118,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c68[0x118],
                                                                     L"DistanceFieldGI",0x20);
                                                          cVar1 = `UGameViewportClient::
                                                                  HandleShowCommand'::`44'::
                                                                  FIterSink::OnEngineShowFlag
                                                                            (param_1,0x90,
                                                                             local_c68 + 0x118);
                                                          if (local_c68[0x118] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c68[0x11a] = 0;
                                                            local_c68[0x11b] = 0xe;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c68 + 0x11a,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c68[0x11a],
                                                                       L"VolumetricFog",0x1c);
                                                            cVar1 = `UGameViewportClient::
                                                                    HandleShowCommand'::`44'::
                                                                    FIterSink::OnEngineShowFlag
                                                                              (param_1,0x91,
                                                                               local_c68 + 0x11a);
                                                            if (local_c68[0x11a] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c68[0x11c] = 0;
                                                              local_c68[0x11d] = 0xd;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c68 + 0x11c,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c68[0x11c],
                                                                         L"VisualizeSSR",0x1a);
                                                              cVar1 = `UGameViewportClient::
                                                                      HandleShowCommand'::`44'::
                                                                      FIterSink::OnEngineShowFlag
                                                                                (param_1,0x92,
                                                                                 local_c68 + 0x11c);
                                                              if (local_c68[0x11c] != 0) {
                                                                FMemory::Free();
                                                              }
                                                              if (cVar1 != '\0') {
                                                                local_c68[0x11e] = 0;
                                                                local_c68[0x11f] = 0x17;
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeGrow(local_c68 + 0x11e,0);
                                                                FGenericPlatformString::Memcpy
                                                                          (local_c68[0x11e],
                                                                           L"VisualizeShadingModels"
                                                                           ,0x2e);
                                                                cVar1 = `UGameViewportClient::
                                                                        HandleShowCommand'::`44'::
                                                                        FIterSink::OnEngineShowFlag
                                                                                  (param_1,0x93,
                                                                                   local_c68 + 0x11e
                                                                                  );
                                                                if (local_c68[0x11e] != 0) {
                                                                  FMemory::Free();
                                                                }
                                                                if (cVar1 != '\0') {
                                                                  local_c68[0x120] = 0;
                                                                  local_c68[0x121] = 0x10;
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeGrow(local_c68 + 0x120,0);
                                                                  FGenericPlatformString::Memcpy
                                                                            (local_c68[0x120],
                                                                             L"VisualizeSenses",0x20
                                                                            );
                                                                  cVar1 = `UGameViewportClient::
                                                                          HandleShowCommand'::`44'::
                                                                          FIterSink::
                                                                          OnEngineShowFlag(param_1,
                                                  0x94,local_c68 + 0x120);
                                                  if (local_c68[0x120] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c68[0x122] = 0;
                                                    local_c68[0x123] = 0xf;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c68 + 0x122,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c68[0x122],L"VisualizeBloom",
                                                               0x1e);
                                                    cVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::`44'::FIterSink::OnEngineShowFlag
                                                                      (param_1,0x95,
                                                                       local_c68 + 0x122);
                                                    if (local_c68[0x122] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c68[0x124] = 0;
                                                      local_c68[0x125] = 0xe;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c68 + 0x124,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c68[0x124],L"LODColoration",
                                                                 0x1c);
                                                      cVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::`44'::FIterSink::
                                                              OnEngineShowFlag(param_1,0x96,
                                                                               local_c68 + 0x124);
                                                      if (local_c68[0x124] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c68[0x126] = 0;
                                                        local_c68[0x127] = 0xf;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c68 + 0x126,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c68[0x126],
                                                                   L"HLODColoration",0x1e);
                                                        cVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::`44'::FIterSink
                                                                ::OnEngineShowFlag(param_1,0x97,
                                                                                   local_c68 + 0x126
                                                                                  );
                                                        if (local_c68[0x126] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c68[0x128] = 0;
                                                          local_c68[0x129] = 0xd;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c68 + 0x128,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c68[0x128],
                                                                     L"QuadOverdraw",0x1a);
                                                          cVar1 = `UGameViewportClient::
                                                                  HandleShowCommand'::`44'::
                                                                  FIterSink::OnEngineShowFlag
                                                                            (param_1,0x98,
                                                                             local_c68 + 0x128);
                                                          if (local_c68[0x128] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c68[0x12a] = 0;
                                                            local_c68[299] = 0x21;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c68 + 0x12a,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c68[0x12a],
                                                                                                                                              
                                                  L"ShaderComplexityWithQuadOverdraw",0x42);
                                                  cVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          `44'::FIterSink::OnEngineShowFlag
                                                                    (param_1,0x99,local_c68 + 0x12a)
                                                  ;
                                                  if (local_c68[0x12a] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c68[300] = 0;
                                                    local_c68[0x12d] = 0x1a;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c68 + 300,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c68[300],
                                                               L"PrimitiveDistanceAccuracy",0x34);
                                                    cVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::`44'::FIterSink::OnEngineShowFlag
                                                                      (param_1,0x9a,local_c68 + 300)
                                                    ;
                                                    if (local_c68[300] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c68[0x12e] = 0;
                                                      local_c68[0x12f] = 0x16;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c68 + 0x12e,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c68[0x12e],
                                                                 L"MeshUVDensityAccuracy",0x2c);
                                                      cVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::`44'::FIterSink::
                                                              OnEngineShowFlag(param_1,0x9b,
                                                                               local_c68 + 0x12e);
                                                      if (local_c68[0x12e] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c68[0x130] = 0;
                                                        local_c68[0x131] = 0x1d;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c68 + 0x130,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c68[0x130],
                                                                   L"MaterialTextureScaleAccuracy",
                                                                   0x3a);
                                                        cVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::`44'::FIterSink
                                                                ::OnEngineShowFlag(param_1,0x9c,
                                                                                   local_c68 + 0x130
                                                                                  );
                                                        if (local_c68[0x130] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c68[0x132] = 0;
                                                          local_c68[0x133] = 0x1c;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c68 + 0x132,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c68[0x132],
                                                                     L"OutputMaterialTextureScales",
                                                                     0x38);
                                                          cVar1 = `UGameViewportClient::
                                                                  HandleShowCommand'::`44'::
                                                                  FIterSink::OnEngineShowFlag
                                                                            (param_1,0x9d,
                                                                             local_c68 + 0x132);
                                                          if (local_c68[0x132] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c68[0x134] = 0;
                                                            local_c68[0x135] = 0x1a;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c68 + 0x134,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c68[0x134],
                                                                       L"RequiredTextureResolution",
                                                                       0x34);
                                                            cVar1 = `UGameViewportClient::
                                                                    HandleShowCommand'::`44'::
                                                                    FIterSink::OnEngineShowFlag
                                                                              (param_1,0x9e,
                                                                               local_c68 + 0x134);
                                                            if (local_c68[0x134] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c68[0x136] = 0;
                                                              local_c68[0x137] = 0x11;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c68 + 0x136,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c68[0x136],
                                                                         L"WidgetComponents",0x22);
                                                              cVar1 = `UGameViewportClient::
                                                                      HandleShowCommand'::`44'::
                                                                      FIterSink::OnEngineShowFlag
                                                                                (param_1,0x9f,
                                                                                 local_c68 + 0x136);
                                                              if (local_c68[0x136] != 0) {
                                                                FMemory::Free();
                                                              }
                                                              if (cVar1 != '\0') {
                                                                local_c68[0x138] = 0;
                                                                local_c68[0x139] = 6;
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeGrow(local_c68 + 0x138,0);
                                                                FGenericPlatformString::Memcpy
                                                                          (local_c68[0x138],L"Bones"
                                                                           ,0xc);
                                                                cVar1 = `UGameViewportClient::
                                                                        HandleShowCommand'::`44'::
                                                                        FIterSink::OnEngineShowFlag
                                                                                  (param_1,0xa0,
                                                                                   local_c68 + 0x138
                                                                                  );
                                                                if (local_c68[0x138] != 0) {
                                                                  FMemory::Free();
                                                                }
                                                                if (cVar1 != '\0') {
                                                                  local_c68[0x13a] = 0;
                                                                  local_c68[0x13b] = 0xc;
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeGrow(local_c68 + 0x13a,0);
                                                                  FGenericPlatformString::Memcpy
                                                                            (local_c68[0x13a],
                                                                             L"MediaPlanes",0x18);
                                                                  cVar1 = `UGameViewportClient::
                                                                          HandleShowCommand'::`44'::
                                                                          FIterSink::
                                                                          OnEngineShowFlag(param_1,
                                                  0xa1,local_c68 + 0x13a);
                                                  if (local_c68[0x13a] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c68[0x13c] = 0;
                                                    local_c68[0x13d] = 0xb;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c68 + 0x13c,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c68[0x13c],L"ScreenSize",0x16);
                                                    cVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::`44'::FIterSink::OnEngineShowFlag
                                                                      (param_1,0xa2,
                                                                       local_c68 + 0x13c);
                                                    if (local_c68[0x13c] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c68[0x13e] = 0;
                                                      local_c68[0x13f] = 0x16;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c68 + 0x13e,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c68[0x13e],
                                                                 L"VisualizeLightMapBase",0x2c);
                                                      cVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::`44'::FIterSink::
                                                              OnEngineShowFlag(param_1,0xa3,
                                                                               local_c68 + 0x13e);
                                                      if (local_c68[0x13e] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c68[0x140] = 0;
                                                        local_c68[0x141] = 0x1b;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c68 + 0x140,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c68[0x140],
                                                                   L"VisualizeLightMapTimeOfDay",
                                                                   0x36);
                                                        cVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::`44'::FIterSink
                                                                ::OnEngineShowFlag(param_1,0xa4,
                                                                                   local_c68 + 0x140
                                                                                  );
                                                        if (local_c68[0x140] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c68[0x142] = 0;
                                                          local_c68[0x143] = 0x17;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c68 + 0x142,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c68[0x142],
                                                                     L"VisualizeSkyBentNormal",0x2e)
                                                          ;
                                                          cVar1 = `UGameViewportClient::
                                                                  HandleShowCommand'::`44'::
                                                                  FIterSink::OnEngineShowFlag
                                                                            (param_1,0xa5,
                                                                             local_c68 + 0x142);
                                                          if (local_c68[0x142] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c68[0x144] = 0;
                                                            local_c68[0x145] = 0x16;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c68 + 0x144,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c68[0x144],
                                                                       L"VisualizeSkyOcclusion",0x2c
                                                                      );
                                                            cVar1 = `UGameViewportClient::
                                                                    HandleShowCommand'::`44'::
                                                                    FIterSink::OnEngineShowFlag
                                                                              (param_1,0xa6,
                                                                               local_c68 + 0x144);
                                                            if (local_c68[0x144] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c68[0x146] = 0;
                                                              local_c68[0x147] = 0x18;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c68 + 0x146,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c68[0x146],
                                                                         L"VisualizeAOMaterialMask",
                                                                         0x30);
                                                              cVar1 = `UGameViewportClient::
                                                                      HandleShowCommand'::`44'::
                                                                      FIterSink::OnEngineShowFlag
                                                                                (param_1,0xa7,
                                                                                 local_c68 + 0x146);
                                                              if (local_c68[0x146] != 0) {
                                                                FMemory::Free();
                                                              }
                                                              if (cVar1 != '\0') {
                                                                local_c68[0x148] = 0;
                                                                local_c68[0x149] = 0x18;
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeGrow(local_c68 + 0x148,0);
                                                                FGenericPlatformString::Memcpy
                                                                          (local_c68[0x148],
                                                                                                                                                      
                                                  L"VisualizeLightMapTexels",0x30);
                                                  cVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          `44'::FIterSink::OnEngineShowFlag
                                                                    (param_1,0xa8,local_c68 + 0x148)
                                                  ;
                                                  if (local_c68[0x148] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c68[0x14a] = 0;
                                                    local_c68[0x14b] = 0xe;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c68 + 0x14a,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c68[0x14a],L"DebugLight_GI",
                                                               0x1c);
                                                    cVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::`44'::FIterSink::OnEngineShowFlag
                                                                      (param_1,0xa9,
                                                                       local_c68 + 0x14a);
                                                    if (local_c68[0x14a] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c68[0x14c] = 0;
                                                      local_c68[0x14d] = 0x17;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c68 + 0x14c,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c68[0x14c],
                                                                 L"DebugLight_GI_LightMap",0x2e);
                                                      cVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::`44'::FIterSink::
                                                              OnEngineShowFlag(param_1,0xaa,
                                                                               local_c68 + 0x14c);
                                                      if (local_c68[0x14c] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c68[0x14e] = 0;
                                                        local_c68[0x14f] = 0x1c;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c68 + 0x14e,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c68[0x14e],
                                                                   L"DebugLight_GI_LightMap_Base",
                                                                   0x38);
                                                        cVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::`44'::FIterSink
                                                                ::OnEngineShowFlag(param_1,0xab,
                                                                                   local_c68 + 0x14e
                                                                                  );
                                                        if (local_c68[0x14e] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c68[0x150] = 0;
                                                          local_c68[0x151] = 0x21;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c68 + 0x150,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c68[0x150],
                                                                                                                                          
                                                  L"DebugLight_GI_LightMap_TimeOfDay",0x42);
                                                  cVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          `44'::FIterSink::OnEngineShowFlag
                                                                    (param_1,0xac,local_c68 + 0x150)
                                                  ;
                                                  if (local_c68[0x150] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c68[0x152] = 0;
                                                    local_c68[0x153] = 0x15;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c68 + 0x152,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c68[0x152],
                                                               L"DebugLight_GI_Volume",0x2a);
                                                    cVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::`44'::FIterSink::OnEngineShowFlag
                                                                      (param_1,0xad,
                                                                       local_c68 + 0x152);
                                                    if (local_c68[0x152] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c68[0x154] = 0;
                                                      local_c68[0x155] = 0x1a;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c68 + 0x154,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c68[0x154],
                                                                 L"DebugLight_GI_Volume_Base",0x34);
                                                      cVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::`44'::FIterSink::
                                                              OnEngineShowFlag(param_1,0xae,
                                                                               local_c68 + 0x154);
                                                      if (local_c68[0x154] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c68[0x156] = 0;
                                                        local_c68[0x157] = 0x1f;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c68 + 0x156,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c68[0x156],
                                                                   L"DebugLight_GI_Volume_TimeOfDay"
                                                                   ,0x3e);
                                                        cVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::`44'::FIterSink
                                                                ::OnEngineShowFlag(param_1,0xaf,
                                                                                   local_c68 + 0x156
                                                                                  );
                                                        if (local_c68[0x156] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c68[0x158] = 0;
                                                          local_c68[0x159] = 0x12;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c68 + 0x158,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c68[0x158],
                                                                     L"DebugLight_GI_Sky",0x24);
                                                          cVar1 = `UGameViewportClient::
                                                                  HandleShowCommand'::`44'::
                                                                  FIterSink::OnEngineShowFlag
                                                                            (param_1,0xb0,
                                                                             local_c68 + 0x158);
                                                          if (local_c68[0x158] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c68[0x15a] = 0;
                                                            local_c68[0x15b] = 0x14;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c68 + 0x15a,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c68[0x15a],
                                                                       L"DebugLight_Emissive",0x28);
                                                            cVar1 = `UGameViewportClient::
                                                                    HandleShowCommand'::`44'::
                                                                    FIterSink::OnEngineShowFlag
                                                                              (param_1,0xb1,
                                                                               local_c68 + 0x15a);
                                                            if (local_c68[0x15a] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c68[0x15c] = 0;
                                                              local_c68[0x15d] = 0x11;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c68 + 0x15c,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c68[0x15c],
                                                                         L"DebugLight_Light",0x22);
                                                              cVar1 = `UGameViewportClient::
                                                                      HandleShowCommand'::`44'::
                                                                      FIterSink::OnEngineShowFlag
                                                                                (param_1,0xb2,
                                                                                 local_c68 + 0x15c);
                                                              if (local_c68[0x15c] != 0) {
                                                                FMemory::Free();
                                                              }
                                                              if (cVar1 != '\0') {
                                                                local_c68[0x15e] = 0;
                                                                local_c68[0x15f] = 0x12;
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeGrow(local_c68 + 0x15e,0);
                                                                FGenericPlatformString::Memcpy
                                                                          (local_c68[0x15e],
                                                                           L"DebugLight_EnvMap",0x24
                                                                          );
                                                                cVar1 = `UGameViewportClient::
                                                                        HandleShowCommand'::`44'::
                                                                        FIterSink::OnEngineShowFlag
                                                                                  (param_1,0xb3,
                                                                                   local_c68 + 0x15e
                                                                                  );
                                                                if (local_c68[0x15e] != 0) {
                                                                  FMemory::Free();
                                                                }
                                                                if (cVar1 != '\0') {
                                                                  local_c68[0x160] = 0;
                                                                  local_c68[0x161] = 0x16;
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeGrow(local_c68 + 0x160,0);
                                                                  FGenericPlatformString::Memcpy
                                                                            (local_c68[0x160],
                                                                                                                                                          
                                                  L"DebugLight_EnvMap_SSR",0x2c);
                                                  cVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          `44'::FIterSink::OnEngineShowFlag
                                                                    (param_1,0xb4,local_c68 + 0x160)
                                                  ;
                                                  if (local_c68[0x160] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c68[0x162] = 0;
                                                    local_c68[0x163] = 0x17;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c68 + 0x162,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c68[0x162],
                                                               L"DebugLight_EnvMap_Cube",0x2e);
                                                    cVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::`44'::FIterSink::OnEngineShowFlag
                                                                      (param_1,0xb5,
                                                                       local_c68 + 0x162);
                                                    if (local_c68[0x162] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c68[0x164] = 0;
                                                      local_c68[0x165] = 0x1c;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c68 + 0x164,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c68[0x164],
                                                                 L"DebugLight_EnvMap_Cube_Base",0x38
                                                                );
                                                      cVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::`44'::FIterSink::
                                                              OnEngineShowFlag(param_1,0xb6,
                                                                               local_c68 + 0x164);
                                                      if (local_c68[0x164] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c68[0x166] = 0;
                                                        local_c68[0x167] = 0x1e;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c68 + 0x166,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c68[0x166],
                                                                   L"DebugLight_EnvMap_Cube_SunInf",
                                                                   0x3c);
                                                        cVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::`44'::FIterSink
                                                                ::OnEngineShowFlag(param_1,0xb7,
                                                                                   local_c68 + 0x166
                                                                                  );
                                                        if (local_c68[0x166] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c68[0x168] = 0;
                                                          local_c68[0x169] = 0x1e;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c68 + 0x168,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c68[0x168],
                                                                                                                                          
                                                  L"DebugLight_EnvMap_Cube_SkyInf",0x3c);
                                                  cVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          `44'::FIterSink::OnEngineShowFlag
                                                                    (param_1,0xb8,local_c68 + 0x168)
                                                  ;
                                                  if (local_c68[0x168] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c68[0x16a] = 0;
                                                    local_c68[0x16b] = 0x1b;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c68 + 0x16a,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c68[0x16a],
                                                               L"DebugLight_EnvMap_Cube_Sky",0x36);
                                                    cVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::`44'::FIterSink::OnEngineShowFlag
                                                                      (param_1,0xb9,
                                                                       local_c68 + 0x16a);
                                                    if (local_c68[0x16a] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c68[0x16c] = 0;
                                                      local_c68[0x16d] = 0x1b;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c68 + 0x16c,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c68[0x16c],
                                                                 L"DebugLight_EnvMap_Cube_Fog",0x36)
                                                      ;
                                                      cVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::`44'::FIterSink::
                                                              OnEngineShowFlag(param_1,0xba,
                                                                               local_c68 + 0x16c);
                                                      if (local_c68[0x16c] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c68[0x16e] = 0;
                                                        local_c68[0x16f] = 0x1f;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c68 + 0x16e,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c68[0x16e],
                                                                   L"DebugLight_EnvMap_Cube_Ambient"
                                                                   ,0x3e);
                                                        cVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::`44'::FIterSink
                                                                ::OnEngineShowFlag(param_1,0xbb,
                                                                                   local_c68 + 0x16e
                                                                                  );
                                                        if (local_c68[0x16e] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c68[0x170] = 0;
                                                          local_c68[0x171] = 0x24;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c68 + 0x170,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c68[0x170],
                                                                                                                                          
                                                  L"DebugLight_Display_EnvMap_ProbeCube",0x48);
                                                  cVar1 = `UGameViewportClient::HandleShowCommand'::
                                                          `44'::FIterSink::OnEngineShowFlag
                                                                    (param_1,0xbc,local_c68 + 0x170)
                                                  ;
                                                  if (local_c68[0x170] != 0) {
                                                    FMemory::Free();
                                                  }
                                                  if (cVar1 != '\0') {
                                                    local_c68[0x172] = 0;
                                                    local_c68[0x173] = 0x22;
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (local_c68 + 0x172,0);
                                                    FGenericPlatformString::Memcpy
                                                              (local_c68[0x172],
                                                               L"DebugLight_Display_EnvMap_SkyCube",
                                                               0x44);
                                                    cVar1 = `UGameViewportClient::HandleShowCommand'
                                                            ::`44'::FIterSink::OnEngineShowFlag
                                                                      (param_1,0xbd,
                                                                       local_c68 + 0x172);
                                                    if (local_c68[0x172] != 0) {
                                                      FMemory::Free();
                                                    }
                                                    if (cVar1 != '\0') {
                                                      local_c68[0x174] = 0;
                                                      local_c68[0x175] = 0x13;
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (local_c68 + 0x174,0);
                                                      FGenericPlatformString::Memcpy
                                                                (local_c68[0x174],
                                                                 L"ForceWhiteSunLight",0x26);
                                                      cVar1 = `UGameViewportClient::
                                                              HandleShowCommand'::`44'::FIterSink::
                                                              OnEngineShowFlag(param_1,0xbe,
                                                                               local_c68 + 0x174);
                                                      if (local_c68[0x174] != 0) {
                                                        FMemory::Free();
                                                      }
                                                      if (cVar1 != '\0') {
                                                        local_c68[0x176] = 0;
                                                        local_c68[0x177] = 0x13;
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(local_c68 + 0x176,0);
                                                        FGenericPlatformString::Memcpy
                                                                  (local_c68[0x176],
                                                                   L"ForceWhiteSkyLight",0x26);
                                                        cVar1 = `UGameViewportClient::
                                                                HandleShowCommand'::`44'::FIterSink
                                                                ::OnEngineShowFlag(param_1,0xbf,
                                                                                   local_c68 + 0x176
                                                                                  );
                                                        if (local_c68[0x176] != 0) {
                                                          FMemory::Free();
                                                        }
                                                        if (cVar1 != '\0') {
                                                          local_c68[0x178] = 0;
                                                          local_c68[0x179] = 0x14;
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(local_c68 + 0x178,0);
                                                          FGenericPlatformString::Memcpy
                                                                    (local_c68[0x178],
                                                                     L"QueryOnlyVisibility",0x28);
                                                          cVar1 = `UGameViewportClient::
                                                                  HandleShowCommand'::`44'::
                                                                  FIterSink::OnEngineShowFlag
                                                                            (param_1,0xc0,
                                                                             local_c68 + 0x178);
                                                          if (local_c68[0x178] != 0) {
                                                            FMemory::Free();
                                                          }
                                                          if (cVar1 != '\0') {
                                                            local_c68[0x17a] = 0;
                                                            local_c68[0x17b] = 0x16;
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(local_c68 + 0x17a,0);
                                                            FGenericPlatformString::Memcpy
                                                                      (local_c68[0x17a],
                                                                       L"PhysicsOnlyVisibility",0x2c
                                                                      );
                                                            cVar1 = `UGameViewportClient::
                                                                    HandleShowCommand'::`44'::
                                                                    FIterSink::OnEngineShowFlag
                                                                              (param_1,0xc1,
                                                                               local_c68 + 0x17a);
                                                            if (local_c68[0x17a] != 0) {
                                                              FMemory::Free();
                                                            }
                                                            if (cVar1 != '\0') {
                                                              local_c68[0x17c] = 0;
                                                              local_c68[0x17d] = 0x17;
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(local_c68 + 0x17c,0);
                                                              FGenericPlatformString::Memcpy
                                                                        (local_c68[0x17c],
                                                                         L"ForceAxisVisualization",
                                                                         0x2e);
                                                              cVar1 = `UGameViewportClient::
                                                                      HandleShowCommand'::`44'::
                                                                      FIterSink::OnEngineShowFlag
                                                                                (param_1,0xc2,
                                                                                 local_c68 + 0x17c);
                                                              if (local_c68[0x17c] != 0) {
                                                                FMemory::Free();
                                                              }
                                                              if (cVar1 != '\0') {
                                                                local_c68[0x17e] = 0;
                                                                local_c68[0x17f] = 0x13;
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeGrow(local_c68 + 0x17e,0);
                                                                FGenericPlatformString::Memcpy
                                                                          (local_c68[0x17e],
                                                                           L"GbxBlockingVolumes",
                                                                           0x26);
                                                                cVar1 = `UGameViewportClient::
                                                                        HandleShowCommand'::`44'::
                                                                        FIterSink::OnEngineShowFlag
                                                                                  (param_1,0xc3,
                                                                                   local_c68 + 0x17e
                                                                                  );
                                                                if (local_c68[0x17e] != 0) {
                                                                  FMemory::Free();
                                                                }
                                                                if (cVar1 != '\0') {
                                                                  local_c68[0x180] = 0;
                                                                  local_c68[0x181] = 7;
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeGrow(local_c68 + 0x180,0);
                                                                  FGenericPlatformString::Memcpy
                                                                            (local_c68[0x180],
                                                                             L"Flight",0xe);
                                                                  `UGameViewportClient::
                                                                  HandleShowCommand'::`44'::
                                                                  FIterSink::OnEngineShowFlag
                                                                            (param_1,0xc4,
                                                                             local_c68 + 0x180);
                                                                  if (local_c68[0x180] != 0) {
                                                                    FMemory::Free();
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14246d090 FUN_14246d090 body=179 status=ok
// SIG undefined FUN_14246d090(void)

void FUN_14246d090(int *param_1,char param_2)

{
  float fVar1;
  int iVar2;
  float local_res8;
  float local_resc;
  
  local_resc = (float)param_1[2];
  iVar2 = *param_1 + -1;
  fVar1 = (float)param_1[1];
  if (iVar2 != -1) {
    local_resc = (float)FUN_142477410((longlong)iVar2 * 0x20 + DAT_146532760);
  }
  param_1[1] = (int)local_resc;
  if (((param_2 != '\0') && (iVar2 != -1)) && (1e-08 < ABS(fVar1 - local_resc))) {
    local_res8 = fVar1;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (DAT_146532760 + 0x10 + (longlong)iVar2 * 0x20,&local_res8);
  }
  return;
}



// FUNCTION 14246d150 FUN_14246d150 body=164 status=ok
// SIG undefined FUN_14246d150(void)

void FUN_14246d150(int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float local_res8;
  float local_resc;
  
  iVar3 = *param_1 + -1;
  iVar1 = param_1[1];
  fVar4 = (float)param_1[2];
  if (iVar3 != -1) {
    fVar4 = (float)FUN_142477410((longlong)iVar3 * 0x20 + DAT_146532760);
  }
  iVar2 = (int)fVar4;
  param_1[1] = iVar2;
  if (((param_2 != '\0') && (iVar3 != -1)) && (iVar1 != iVar2)) {
    local_res8 = (float)iVar1;
    local_resc = (float)iVar2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (DAT_146532760 + 0x10 + (longlong)iVar3 * 0x20,&local_res8);
  }
  return;
}



// FUNCTION 14246d200 FUN_14246d200 body=52 status=ok
// SIG undefined FUN_14246d200(void)

undefined8 * FUN_14246d200(undefined8 *param_1)

{
  FUN_1424de090();
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *param_1 = &PTR__scalar_deleting_destructor__1450b9100;
  param_1[0x8d] = 0;
  return param_1;
}



// FUNCTION 14246d240 FUN_14246d240 body=355 status=ok
// SIG undefined FUN_14246d240(void)

undefined8 * FUN_14246d240(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 local_res8 [8];
  
  FUN_141784790(param_2,L"Sprite");
  puVar1 = (undefined8 *)FName::FName(local_res8,L"Sprite",1);
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,*puVar1,0,param_2);
  FUN_1424de090(param_1,param_2);
  *param_1 = &PTR__scalar_deleting_destructor__1450b98e8;
  param_1[0x8b] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x92] = 0;
  *(undefined4 *)(param_1 + 0x93) = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4d4) = 0;
  param_1[0x9c] = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0;
  *(undefined1 *)(param_1 + 0x9e) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x9f));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x9f),4000);
  *(undefined1 *)((longlong)param_1 + 0x95) = 1;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(undefined4 *)((longlong)param_1 + 0x48c) = 0x40a00000;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0x67 | 8;
  *param_1 = &PTR__scalar_deleting_destructor__1450ba060;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa7] = 0;
  param_1[0xa4] = DAT_146af3918;
  param_1[0xa5] = DAT_146af3918;
  return param_1;
}



// FUNCTION 14246d3b0 FUN_14246d3b0 body=285 status=ok
// SIG undefined FUN_14246d3b0(void)

undefined8 * FUN_14246d3b0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 local_res8 [8];
  
  FUN_141784790(param_2,L"Sprite");
  puVar1 = (undefined8 *)FName::FName(local_res8,L"Sprite",1);
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,*puVar1,0,param_2);
  FUN_1424de090(param_1,param_2);
  *param_1 = &PTR__scalar_deleting_destructor__1450b98e8;
  param_1[0x8b] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x92] = 0;
  *(undefined4 *)(param_1 + 0x93) = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4d4) = 0;
  param_1[0x9c] = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0;
  *(undefined1 *)(param_1 + 0x9e) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x9f));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x9f),4000);
  *(undefined1 *)((longlong)param_1 + 0x95) = 1;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(undefined4 *)((longlong)param_1 + 0x48c) = 0x40a00000;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0x67 | 8;
  return param_1;
}



// FUNCTION 14246d4d0 FUN_14246d4d0 body=178 status=ok
// SIG undefined FUN_14246d4d0(void)

undefined8 * FUN_14246d4d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 7;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) | 8;
  *param_1 = &PTR__scalar_deleting_destructor__1450bab68;
  *(undefined1 *)(param_1 + 0x8d) = 1;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"TransientSkyDefinition",1);
  uVar3 = *puVar1;
  uVar2 = USnapMapConnectionInfo::StaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8e] = uVar3;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"Skybox",1);
  param_1[0x11] = *puVar1;
  FUN_142477aa0(param_1);
  return param_1;
}



// FUNCTION 14246d590 FUN_14246d590 body=21 status=ok
// SIG undefined FUN_14246d590(void)

undefined1 * FUN_14246d590(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 14246d5b0 FUN_14246d5b0 body=470 status=ok
// SIG undefined FUN_14246d5b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14246d5b0(undefined8 *param_1,longlong param_2)

{
  float fVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_90 [64];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_98 = 0;
  FUN_14271d7c0(param_1,param_2,0);
  *param_1 = &PTR__scalar_deleting_destructor__1450bb670;
  if (((*(byte *)(param_2 + 0x24c) & 0x20) == 0) || ((*(byte *)(param_2 + 0x24c) & 0x40) != 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + 0x76) = uVar3;
  *(byte *)((longlong)param_1 + 0x3b1) = *(byte *)(param_2 + 0x24c) >> 5 & 1;
  bVar2 = *(byte *)(param_2 + 0x708);
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) | 0x40000000;
  *(undefined4 *)(param_1 + 0x77) = 0;
  *(byte *)((longlong)param_1 + 0x3b3) = bVar2 >> 1 & 1;
  *(undefined4 *)((longlong)param_1 + 0x3bc) = 0x3f800000;
  uVar4 = UMaterial::GetDefaultMaterial(1);
  lVar5 = USkeletalMeshComponent::GetPostProcessInstance(param_2);
  if (lVar5 != 0) {
    local_50 = 0;
    local_48 = 0;
    plVar6 = (longlong *)USkeletalMeshComponent::GetPostProcessInstance(param_2);
    lVar5 = (**(code **)(*plVar6 + 0x298))(plVar6,local_90);
    if (*(char *)(lVar5 + 0x140) == '\x01') {
      uVar4 = USkeletalMeshComponent::GetPostProcessInstance(param_2);
    }
    if (local_50 != 0) {
      FMemory::Free();
    }
  }
  param_1[0x74] = param_2;
  param_1[0x75] = uVar4;
  uVar3 = FUN_142341190(param_2);
  *(undefined1 *)((longlong)param_1 + 0x3b2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = *(undefined4 *)(param_2 + 0x6f8);
  lVar5 = *(longlong *)(param_2 + 0x120);
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0(param_2);
  }
  fVar1 = *(float *)(lVar5 + 0x790);
  fVar7 = (float)APVPBasePawn::GetHeight(param_2);
  fVar8 = (float)UEngine::GetDisplayGamma(param_2);
  if (0.0 < fVar8) {
    *(float *)(param_1 + 0x77) = 1.0 / fVar8;
    *(float *)((longlong)param_1 + 0x3bc) = (fVar7 + fVar1 + fVar8) * (1.0 / fVar8);
  }
  if (*(longlong *)(param_2 + 0x118) != 0) {
    *(byte *)(param_1 + 0x76) =
         *(byte *)(param_1 + 0x76) & ~*(byte *)(*(longlong *)(param_2 + 0x118) + 0x80) & 1;
  }
  *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) | 0x10000000;
  return param_1;
}



// FUNCTION 14246d790 FUN_14246d790 body=196 status=ok
// SIG undefined FUN_14246d790(void)

undefined4 * FUN_14246d790(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 5;
  param_1[1] = 10;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 1;
  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 2,0);
  **(undefined4 **)(param_1 + 2) = 0x3c23d70a;
  iVar1 = param_1[4];
  param_1[4] = iVar1 + 1;
  if ((int)param_1[5] < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 2) + (longlong)iVar1 * 4) = 0x3a83126f;
  iVar1 = param_1[4];
  param_1[4] = iVar1 + 1;
  if ((int)param_1[5] < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 2) + (longlong)iVar1 * 4) = 0x3a03126f;
  iVar1 = param_1[4];
  param_1[4] = iVar1 + 1;
  if ((int)param_1[5] < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 2) + (longlong)iVar1 * 4) = 0x3983126f;
  return param_1;
}



// FUNCTION 14246d860 FUN_14246d860 body=200 status=ok
// SIG undefined FUN_14246d860(void)

undefined4 * FUN_14246d860(undefined4 *param_1,int *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  
  *param_1 = 0;
  FUN_142478640();
  if (*param_2 != 0) {
    lVar1 = FUN_1424811e0(param_1);
    lVar5 = (longlong)*param_2 * 0x20 + DAT_146532760;
    FUN_14246fd80(lVar1,lVar5 + -0x20);
    plVar6 = (longlong *)(lVar1 + 0x10);
    if (plVar6 != (longlong *)(lVar5 + -0x10)) {
      iVar4 = *(int *)(lVar5 + -8);
      lVar5 = *(longlong *)(lVar5 + -0x10);
      *(int *)(lVar1 + 0x18) = iVar4;
      if ((iVar4 == 0) && (*(int *)(lVar1 + 0x1c) == 0)) {
        *(undefined4 *)(lVar1 + 0x1c) = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar6,iVar4);
        if (iVar4 != 0) {
          puVar2 = (undefined8 *)(lVar5 + 8);
          puVar3 = (undefined4 *)*plVar6;
          do {
            *puVar3 = *(undefined4 *)(puVar2 + -1);
            puVar3[1] = *(undefined4 *)((longlong)puVar2 + -4);
            *(undefined8 *)(puVar3 + 2) = *puVar2;
            iVar4 = iVar4 + -1;
            puVar2 = puVar2 + 2;
            puVar3 = puVar3 + 4;
          } while (iVar4 != 0);
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 14246d930 FUN_14246d930 body=88 status=ok
// SIG undefined FUN_14246d930(void)

int * FUN_14246d930(int *param_1,longlong param_2)

{
  int iVar1;
  
  FUN_14246d860();
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 8);
  param_1[2] = iVar1;
  if (*param_1 + -1 != -1) {
    iVar1 = FUN_142477410((longlong)(*param_1 + -1) * 0x20 + DAT_146532760,iVar1);
  }
  param_1[1] = iVar1;
  return param_1;
}



// FUNCTION 14246d990 FUN_14246d990 body=20 status=ok
// SIG undefined FUN_14246d990(void)

undefined4 * FUN_14246d990(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = param_2;
  return param_1;
}



// FUNCTION 14246d9b0 FDifficultyFloat body=12 status=ok
// SIG undefined FDifficultyFloat(void)

undefined8 * FDifficultyFloat::FDifficultyFloat(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 14246d9c0 FUN_14246d9c0 body=93 status=ok
// SIG undefined FUN_14246d9c0(void)

int * FUN_14246d9c0(int *param_1,longlong param_2)

{
  int iVar1;
  float fVar2;
  
  FUN_14246d860();
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 8);
  param_1[2] = iVar1;
  fVar2 = (float)iVar1;
  if (*param_1 + -1 != -1) {
    fVar2 = (float)FUN_142477410((longlong)(*param_1 + -1) * 0x20 + DAT_146532760,fVar2);
  }
  param_1[1] = (int)fVar2;
  return param_1;
}



// FUNCTION 14246da20 FUN_14246da20 body=16 status=ok
// SIG undefined FUN_14246da20(void)

undefined4 * FUN_14246da20(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = param_2;
  return param_1;
}



// FUNCTION 14246da30 FUN_14246da30 body=17 status=ok
// SIG undefined FUN_14246da30(void)

undefined1 * FUN_14246da30(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  return param_1;
}



// FUNCTION 14246da50 FUN_14246da50 body=16 status=ok
// SIG undefined FUN_14246da50(void)

undefined1 * FUN_14246da50(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  return param_1;
}



// FUNCTION 14246da60 FUN_14246da60 body=753 status=ok
// SIG undefined FUN_14246da60(void)

longlong * FUN_14246da60(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  DWORD DVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  bool bVar14;
  undefined4 local_res8 [2];
  longlong local_68 [4];
  undefined1 local_48 [32];
  
  iVar13 = 0;
  local_res8[0] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  puVar8 = (undefined8 *)operator_new(0x28,param_1 + 3);
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[1] = param_1;
    *puVar8 = &PTR_GetPoolName_143f3f4f8;
    puVar8[2] = FUN_142490b90;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[4] = uVar9;
  }
  param_1[5] = 0;
  plVar12 = param_1 + 8;
  param_1[6] = 0;
  param_1[7] = (longlong)param_2;
  *plVar12 = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  lVar10 = (**(code **)(*param_2 + 0x208))(param_2);
  bVar14 = lVar10 == 0;
  if (bVar14) {
    local_68[0] = 0;
    local_68[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
    lVar10 = local_68[0];
    FGenericPlatformString::Memcpy(local_68[0],L"NULL",10);
    plVar11 = local_68;
  }
  else {
    uVar9 = (**(code **)(*param_2 + 0x208))(param_2);
    plVar11 = (longlong *)UObjectBaseUtility::GetPathName(uVar9,local_68 + 2,0);
    lVar10 = local_68[0];
  }
  if (plVar12 != plVar11) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    *plVar12 = *plVar11;
    *plVar11 = 0;
    *(int *)(param_1 + 9) = (int)plVar11[1];
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)plVar11 + 0xc);
    plVar11[1] = 0;
    lVar10 = local_68[0];
  }
  if ((bVar14) && (lVar10 != 0)) {
    FMemory::Free(lVar10);
  }
  if ((!bVar14) && (local_68[2] != 0)) {
    FMemory::Free();
  }
  iVar5 = DAT_146af4d38;
  lVar10 = (longlong)DAT_146af4d38;
  DAT_146af4d38 = DAT_146af4d38 + 1;
  if (DAT_146af4d3c < DAT_146af4d38) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146af4d30,iVar5);
  }
  *(longlong **)(DAT_146af4d30 + lVar10 * 8) = param_1;
  uVar9 = FUN_14164ab60();
  plVar12 = (longlong *)
            FUN_14158f860(uVar9,local_res8,param_1 + 3,L"FGbxColorRemapLUTManager_Tick",0);
  param_1[5] = *plVar12;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1);
    iVar13 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar13 + 2;
  if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 2) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1);
  }
  lVar10 = *param_1;
  *(undefined8 *)(lVar10 + (longlong)iVar13 * 8) = 0;
  *(undefined8 *)(lVar10 + 8 + (longlong)iVar13 * 8) = 0;
  if (DAT_146ac3ac6 != '\0') {
    cVar6 = IsInRenderingThread();
    if (cVar6 != '\0') goto LAB_14246dcc9;
  }
  if (DAT_146ac3ac5 == '\0') {
    cVar6 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar6 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar7 = GetCurrentThreadId();
      if (DVar7 != DAT_1468c21c0) goto LAB_14246dcee;
    }
LAB_14246dcc9:
    FBaseGraphTask::GetSmallTaskAllocator();
    FUN_1424719e0(param_1,&DAT_146ab6e78,0);
    return param_1;
  }
LAB_14246dcee:
  plVar12 = (longlong *)FUN_142478050(local_48,0,0xff);
  *(longlong **)(*plVar12 + 0x10) = param_1;
  lVar10 = *plVar12;
  lVar4 = plVar12[2];
  lVar2 = plVar12[1];
  lVar3 = *(longlong *)(lVar10 + 0x20);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0x48) = *(int *)(lVar3 + 0x48) + 1;
    UNLOCK();
  }
  FUN_140445100(lVar10,lVar2,(int)lVar4,1);
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 0x48);
    iVar13 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar13 == 1) {
      FGraphEvent::Recycle(lVar3);
    }
  }
  return param_1;
}



// FUNCTION 14246dd60 FUN_14246dd60 body=994 status=ok
// SIG undefined FUN_14246dd60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14246dd60(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  
  puVar6 = (undefined8 *)0x0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  puVar2 = (undefined8 *)operator_new(0x28,param_1);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = param_1;
    *puVar2 = &PTR_GetPoolName_143f3f4f8;
    puVar2[2] = FUN_142490e60;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[4] = uVar3;
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 3),4000);
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_14159fa40(param_1 + 0x10);
  FUN_14159fa40(param_1 + 0x54);
  FUN_14159fa40(param_1 + 0x98);
  FUN_14159fe30(param_1 + 0xdc);
  param_1[0xec] = 0;
  FUN_14159fe30(param_1 + 0xed);
  param_1[0xfd] = 0;
  uVar3 = FUN_14164ab60();
  FUN_14158f860(uVar3,local_res8,param_1,L"FGbxCoreStatEngine_Tick",0);
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar4 == (longlong *)0x0) {
    if ((DAT_1468b0c78 != 0) && (DAT_1468b0c70 != (longlong *)0x0)) {
      (**(code **)(*DAT_1468b0c70 + 0x28))(DAT_1468b0c70,0);
      if (DAT_1468b0c70 != (longlong *)0x0) {
        DAT_1468b0c70 = (longlong *)FMemory::Realloc(DAT_1468b0c70,0,0);
      }
      DAT_1468b0c78 = 0;
    }
  }
  else {
    plVar4[1] = (longlong)param_1;
    *plVar4 = (longlong)&PTR_GetPoolName_144e8bf08;
    plVar4[2] = (longlong)FUN_14247ea50;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    (**(code **)(*plVar4 + 0x30))(plVar4,&DAT_1468b0c70);
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    lVar5 = FMemory::Realloc(plVar4,0,0);
    if (lVar5 != 0) {
      FMemory::Free(lVar5);
    }
  }
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = (longlong)param_1;
    *plVar4 = (longlong)&DAT_143f3ed00;
    plVar4[2] = (longlong)FUN_142487e50;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464a84c8,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    iVar1 = DAT_1464a84d0;
    lVar5 = (longlong)DAT_1464a84d0;
    DAT_1464a84d0 = DAT_1464a84d0 + 1;
    if (DAT_1464a84d4 < DAT_1464a84d0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464a84c8,iVar1);
    }
    puVar2 = (undefined8 *)(lVar5 * 0x10 + _DAT_1464a84c8);
    *puVar2 = plVar4;
    *(undefined4 *)(puVar2 + 1) = 3;
  }
  puVar2 = (undefined8 *)operator_new();
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 0;
    puVar6 = puVar2;
  }
  param_1[2] = puVar6;
  if (DAT_1468b02d8 != 0) {
    plVar4 = (longlong *)FMemory::Realloc(0,0x20);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_GetPoolName_143f4c9a8;
      plVar4[1] = (longlong)AK::MemoryMgr::StartProfileThreadUsage;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[3] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_143f4c9f0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464b57b8,1);
      (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
      iVar1 = DAT_1464b57c0;
      lVar5 = (longlong)DAT_1464b57c0;
      DAT_1464b57c0 = DAT_1464b57c0 + 1;
      if (DAT_1464b57c4 < DAT_1464b57c0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464b57b8,iVar1);
      }
      puVar6 = (undefined8 *)(lVar5 * 0x10 + DAT_1464b57b8);
      *puVar6 = plVar4;
      *(undefined4 *)(puVar6 + 1) = 2;
    }
    plVar4 = (longlong *)FMemory::Realloc(0,0x20);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_GetPoolName_143f4c9a8;
      plVar4[1] = (longlong)AK::MemoryMgr::StartProfileThreadUsage;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[3] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_143f4c9f0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464b57d0,1);
      (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
      iVar1 = DAT_1464b57d8;
      lVar5 = (longlong)DAT_1464b57d8;
      DAT_1464b57d8 = DAT_1464b57d8 + 1;
      if (DAT_1464b57dc < DAT_1464b57d8) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464b57d0,iVar1);
      }
      puVar6 = (undefined8 *)(lVar5 * 0x10 + DAT_1464b57d0);
      *puVar6 = plVar4;
      *(undefined4 *)(puVar6 + 1) = 2;
    }
    if (DAT_1468b616c != '\0') {
      FUN_1415b7aa0(0);
    }
  }
  return param_1;
}



// FUNCTION 14246e150 FUN_14246e150 body=1301 status=ok
// SIG undefined FUN_14246e150(void)

undefined8 * FUN_14246e150(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_1,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)*param_1,pvVar2,(longlong)iVar1 << 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_1 + 2,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[2],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1 + 4,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[4],pvVar2,(longlong)iVar1);
  }
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)((longlong)param_1 + 0x31) = *(undefined1 *)((longlong)param_2 + 0x31);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  param_1[9] = param_2[9];
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  uVar4 = *(undefined8 *)((longlong)param_2 + 100);
  *(undefined8 *)((longlong)param_1 + 0x5c) = *(undefined8 *)((longlong)param_2 + 0x5c);
  *(undefined8 *)((longlong)param_1 + 100) = uVar4;
  *(undefined8 *)((longlong)param_1 + 0x6c) = *(undefined8 *)((longlong)param_2 + 0x6c);
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x74);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)((longlong)param_1 + 0x84) = *(undefined8 *)((longlong)param_2 + 0x84);
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x8c);
  param_1[0x12] = param_2[0x12];
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_2 + 0xa4);
  param_1[0x15] = 0;
  iVar1 = *(int *)(param_2 + 0x16);
  pvVar2 = (void *)param_2[0x15];
  *(int *)(param_1 + 0x16) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_1 + 0x15,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[0x15],pvVar2,(longlong)iVar1 << 2);
  }
  FString::FString(param_1 + 0x17,param_2 + 0x17);
  FString::FString(param_1 + 0x19,param_2 + 0x19);
  FString::FString(param_1 + 0x1b,param_2 + 0x1b);
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
  *(undefined1 *)((longlong)param_1 + 0xe9) = *(undefined1 *)((longlong)param_2 + 0xe9);
  *(undefined4 *)((longlong)param_1 + 0xec) = *(undefined4 *)((longlong)param_2 + 0xec);
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_2 + 0x1e);
  *(undefined4 *)((longlong)param_1 + 0xf4) = *(undefined4 *)((longlong)param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
  *(undefined4 *)((longlong)param_1 + 0xfc) = *(undefined4 *)((longlong)param_2 + 0xfc);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x104) = *(undefined4 *)((longlong)param_2 + 0x104);
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
  *(undefined4 *)((longlong)param_1 + 0x10c) = *(undefined4 *)((longlong)param_2 + 0x10c);
  uVar4 = param_2[0x23];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = uVar4;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  uVar4 = param_2[0x27];
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = uVar4;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)((longlong)param_1 + 0x144) = *(undefined4 *)((longlong)param_2 + 0x144);
  *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(param_2 + 0x29);
  *(undefined4 *)((longlong)param_1 + 0x14c) = *(undefined4 *)((longlong)param_2 + 0x14c);
  *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(param_2 + 0x2a);
  *(undefined4 *)((longlong)param_1 + 0x154) = *(undefined4 *)((longlong)param_2 + 0x154);
  *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_2 + 0x2b);
  *(undefined4 *)((longlong)param_1 + 0x15c) = *(undefined4 *)((longlong)param_2 + 0x15c);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)((longlong)param_1 + 0x164) = *(undefined4 *)((longlong)param_2 + 0x164);
  *(undefined4 *)(param_1 + 0x2d) = *(undefined4 *)(param_2 + 0x2d);
  uVar4 = *(undefined8 *)((longlong)param_2 + 0x174);
  *(undefined8 *)((longlong)param_1 + 0x16c) = *(undefined8 *)((longlong)param_2 + 0x16c);
  *(undefined8 *)((longlong)param_1 + 0x174) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x17c) = *(undefined4 *)((longlong)param_2 + 0x17c);
  uVar4 = param_2[0x31];
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = uVar4;
  uVar4 = param_2[0x33];
  param_1[0x32] = param_2[0x32];
  param_1[0x33] = uVar4;
  uVar4 = param_2[0x35];
  param_1[0x34] = param_2[0x34];
  param_1[0x35] = uVar4;
  uVar4 = param_2[0x37];
  param_1[0x36] = param_2[0x36];
  param_1[0x37] = uVar4;
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x1c4) = *(undefined4 *)((longlong)param_2 + 0x1c4);
  *(undefined4 *)(param_1 + 0x39) = *(undefined4 *)(param_2 + 0x39);
  *(undefined4 *)((longlong)param_1 + 0x1cc) = *(undefined4 *)((longlong)param_2 + 0x1cc);
  *(undefined4 *)(param_1 + 0x3a) = *(undefined4 *)(param_2 + 0x3a);
  *(undefined4 *)((longlong)param_1 + 0x1d4) = *(undefined4 *)((longlong)param_2 + 0x1d4);
  lVar3 = param_2[0x3b];
  param_1[0x3b] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  lVar3 = param_2[0x3c];
  param_1[0x3c] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  lVar3 = param_2[0x3d];
  param_1[0x3d] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  lVar3 = param_2[0x3e];
  param_1[0x3e] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  lVar3 = param_2[0x3f];
  param_1[0x3f] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)((longlong)param_1 + 0x204) = *(undefined4 *)((longlong)param_2 + 0x204);
  uVar4 = param_2[0x43];
  param_1[0x42] = param_2[0x42];
  param_1[0x43] = uVar4;
  uVar4 = param_2[0x45];
  param_1[0x44] = param_2[0x44];
  param_1[0x45] = uVar4;
  param_1[0x46] = param_2[0x46];
  *(undefined4 *)(param_1 + 0x47) = *(undefined4 *)(param_2 + 0x47);
  *(undefined8 *)((longlong)param_1 + 0x23c) = *(undefined8 *)((longlong)param_2 + 0x23c);
  *(undefined4 *)((longlong)param_1 + 0x244) = *(undefined4 *)((longlong)param_2 + 0x244);
  lVar3 = param_2[0x49];
  param_1[0x49] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  lVar3 = param_2[0x4a];
  param_1[0x4a] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 14246e670 FUN_14246e670 body=483 status=ok
// SIG undefined FUN_14246e670(void)

longlong * FUN_14246e670(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[9] = -0x4010000000000000;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0xbf800000;
  *(undefined4 *)(param_1 + 8) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0xbf800000;
  param_1[10] = -0x40800000;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x3f800000;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x3f800000;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0x3f800000;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0x3f800000;
  lVar4 = (longlong)(int)param_1[1];
  iVar2 = (int)param_1[1] + 7;
  *(int *)(param_1 + 1) = iVar2;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow();
  }
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + lVar4 * 4) = 0;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 4) = 0;
  *(undefined8 *)(lVar1 + 0x10 + lVar4 * 4) = 0;
  *(undefined4 *)(lVar1 + 0x18 + lVar4 * 4) = 0;
  lVar4 = (longlong)(int)param_1[3];
  iVar2 = (int)param_1[3] + 7;
  *(int *)(param_1 + 3) = iVar2;
  if (*(int *)((longlong)param_1 + 0x1c) < iVar2) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow();
  }
  lVar1 = param_1[2];
  *(undefined8 *)(lVar1 + lVar4 * 4) = 0;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 4) = 0;
  *(undefined8 *)(lVar1 + 0x10 + lVar4 * 4) = 0;
  *(undefined4 *)(lVar1 + 0x18 + lVar4 * 4) = 0;
  iVar2 = (int)param_1[5];
  *(int *)(param_1 + 5) = iVar2 + 7;
  if (*(int *)((longlong)param_1 + 0x2c) < iVar2 + 7) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 4,iVar2);
  }
  puVar3 = (undefined4 *)((longlong)iVar2 + param_1[4]);
  *puVar3 = 0;
  *(undefined2 *)(puVar3 + 1) = 0;
  *(undefined1 *)((longlong)puVar3 + 6) = 0;
  return param_1;
}



// FUNCTION 14246e860 FUN_14246e860 body=212 status=ok
// SIG undefined FUN_14246e860(void)

undefined8 * FUN_14246e860(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  local_res8 = 0;
  FUN_14271d7c0(param_1,param_2,0);
  *param_1 = &PTR_FUN_1450bb4d0;
  param_1[0x74] = *(undefined8 *)(param_2 + 0x118);
  lVar1 = *(longlong *)(param_2 + 0x708);
  param_1[0x75] = lVar1;
  param_1[0x76] = *(undefined8 *)(lVar1 + 0x38);
  FUN_14246e670(param_1 + 0x78);
  param_1[0xc4] = *(undefined8 *)(param_2 + 0x710);
  param_1[0xc5] = 0;
  puVar2 = (undefined8 *)FUN_142592090(param_1[0xc4],&local_res8,*(undefined4 *)(param_1[0x26] + 8))
  ;
  param_1[0xc5] = *puVar2;
  FUN_142484af0(param_1 + 0x78,param_2);
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) | 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  return param_1;
}



// FUNCTION 14246e940 FUN_14246e940 body=204 status=ok
// SIG undefined FUN_14246e940(void)

undefined8 * FUN_14246e940(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450ba828;
  *(undefined4 *)(param_1 + 10) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0xbf800000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0xffffffffffffffff;
  Scalability::FQualityLevels::SetDefaults();
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  FUN_14248f360(param_1);
  return param_1;
}



// FUNCTION 14246ea10 FUN_14246ea10 body=2692 status=ok
// SIG undefined FUN_14246ea10(void)

undefined8 * FUN_14246ea10(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  undefined8 local_58;
  int iStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  FUN_142745950();
  puVar6 = (undefined8 *)0x0;
  *param_1 = &PTR_FUN_1450b8ba8;
  param_1[5] = &PTR_LAB_1450b8f08;
  param_1[9] = &PTR_LAB_1450b90f0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x14] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x15c2625;
  *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) & 0xf9ffffff | 0x1120400
  ;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  *(undefined1 *)(param_1 + 0x3f) = 1;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 2;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 2;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 2;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 2;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 2;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 2;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 2;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 2;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  *(uint *)((longlong)param_1 + 0x7c) = *(uint *)((longlong)param_1 + 0x7c) & 0xfffffffd;
  *(undefined4 *)((longlong)param_1 + 0x304) = 0;
  *(undefined4 *)(param_1 + 0x61) = 0x10000;
  *(undefined1 *)((longlong)param_1 + 0x30c) = 1;
  *(undefined4 *)(param_1 + 0x62) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x314) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 3;
  plVar5 = (longlong *)param_1[0xd];
  for (iVar8 = *(int *)(param_1 + 0xe); iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  lVar9 = 8;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (*(int *)((longlong)param_1 + 0x74) != 8) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0xd);
  }
  do {
    iVar8 = *(int *)(param_1 + 0xe);
    iVar1 = iVar8 + 1;
    *(int *)(param_1 + 0xe) = iVar1;
    if (*(int *)((longlong)param_1 + 0x74) < iVar1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xd);
    }
    plVar5 = (longlong *)param_1[0xd];
    plVar2 = plVar5 + (longlong)iVar8 * 2;
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = 0;
      plVar2[1] = 0;
      plVar5 = (longlong *)param_1[0xd];
    }
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  lVar9 = plVar5[1];
  iVar8 = (int)lVar9 + 1;
  *(int *)(plVar5 + 1) = iVar8;
  if (*(int *)((longlong)plVar5 + 0xc) < iVar8) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar5);
  }
  puVar4 = (undefined8 *)(*plVar5 + (longlong)(int)lVar9 * 0x10);
  *puVar4 = 0x3f8000003f800000;
  puVar4[1] = 0;
  lVar9 = param_1[0xd];
  iVar8 = *(int *)(lVar9 + 0x18);
  iVar1 = iVar8 + 1;
  *(int *)(lVar9 + 0x18) = iVar1;
  if (*(int *)(lVar9 + 0x1c) < iVar1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar9 + 0x10);
  }
  puVar4 = (undefined8 *)(*(longlong *)(lVar9 + 0x10) + (longlong)iVar8 * 0x10);
  *puVar4 = 0x3f0000003f800000;
  puVar4[1] = 0;
  lVar9 = param_1[0xd];
  iVar8 = *(int *)(lVar9 + 0x18);
  iVar1 = iVar8 + 1;
  *(int *)(lVar9 + 0x18) = iVar1;
  if (*(int *)(lVar9 + 0x1c) < iVar1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar9 + 0x10);
  }
  puVar4 = (undefined8 *)(*(longlong *)(lVar9 + 0x10) + (longlong)iVar8 * 0x10);
  *puVar4 = 0x3f0000003f800000;
  puVar4[1] = 0x3f00000000000000;
  lVar9 = param_1[0xd];
  iVar8 = *(int *)(lVar9 + 0x28);
  iVar1 = iVar8 + 1;
  *(int *)(lVar9 + 0x28) = iVar1;
  if (*(int *)(lVar9 + 0x2c) < iVar1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar9 + 0x20);
  }
  puVar4 = (undefined8 *)(*(longlong *)(lVar9 + 0x20) + (longlong)iVar8 * 0x10);
  *puVar4 = 0x3f8000003f000000;
  puVar4[1] = 0;
  lVar9 = param_1[0xd];
  iVar8 = *(int *)(lVar9 + 0x28);
  iVar1 = iVar8 + 1;
  *(int *)(lVar9 + 0x28) = iVar1;
  if (*(int *)(lVar9 + 0x2c) < iVar1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar9 + 0x20);
  }
  puVar4 = (undefined8 *)(*(longlong *)(lVar9 + 0x20) + (longlong)iVar8 * 0x10);
  *puVar4 = 0x3f8000003f000000;
  puVar4[1] = 0x3f000000;
  lVar9 = param_1[0xd];
  iVar8 = *(int *)(lVar9 + 0x38);
  iVar1 = iVar8 + 1;
  *(int *)(lVar9 + 0x38) = iVar1;
  if (*(int *)(lVar9 + 0x3c) < iVar1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar9 + 0x30);
  }
  puVar4 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar8 * 0x10);
  *puVar4 = 0x3f0000003f800000;
  puVar4[1] = 0;
  lVar9 = param_1[0xd];
  iVar8 = *(int *)(lVar9 + 0x38);
  iVar1 = iVar8 + 1;
  *(int *)(lVar9 + 0x38) = iVar1;
  if (*(int *)(lVar9 + 0x3c) < iVar1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar9 + 0x30);
  }
  puVar4 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar8 * 0x10);
  *puVar4 = 0x3f0000003f000000;
  puVar4[1] = 0x3f00000000000000;
  lVar9 = param_1[0xd];
  iVar8 = *(int *)(lVar9 + 0x38);
  iVar1 = iVar8 + 1;
  *(int *)(lVar9 + 0x38) = iVar1;
  if (*(int *)(lVar9 + 0x3c) < iVar1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar9 + 0x30);
  }
  puVar4 = (undefined8 *)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar8 * 0x10);
  *puVar4 = 0x3f0000003f000000;
  puVar4[1] = 0x3f0000003f000000;
  lVar9 = param_1[0xd];
  iVar8 = *(int *)(lVar9 + 0x48);
  iVar1 = iVar8 + 1;
  *(int *)(lVar9 + 0x48) = iVar1;
  if (*(int *)(lVar9 + 0x4c) < iVar1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar9 + 0x40);
  }
  puVar4 = (undefined8 *)(*(longlong *)(lVar9 + 0x40) + (longlong)iVar8 * 0x10);
  *puVar4 = 0x3f0000003f000000;
  puVar4[1] = 0;
  lVar9 = param_1[0xd];
  iVar8 = *(int *)(lVar9 + 0x48);
  iVar1 = iVar8 + 1;
  *(int *)(lVar9 + 0x48) = iVar1;
  if (*(int *)(lVar9 + 0x4c) < iVar1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar9 + 0x40);
  }
  puVar4 = (undefined8 *)(*(longlong *)(lVar9 + 0x40) + (longlong)iVar8 * 0x10);
  *puVar4 = 0x3f0000003f000000;
  puVar4[1] = 0x3f000000;
  lVar9 = param_1[0xd];
  iVar8 = *(int *)(lVar9 + 0x48);
  iVar1 = iVar8 + 1;
  *(int *)(lVar9 + 0x48) = iVar1;
  if (*(int *)(lVar9 + 0x4c) < iVar1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar9 + 0x40);
  }
  puVar4 = (undefined8 *)(*(longlong *)(lVar9 + 0x40) + (longlong)iVar8 * 0x10);
  *puVar4 = 0x3f0000003f800000;
  puVar4[1] = 0x3f00000000000000;
  lVar9 = param_1[0xd];
  iVar8 = *(int *)(lVar9 + 0x58);
  iVar1 = iVar8 + 1;
  *(int *)(lVar9 + 0x58) = iVar1;
  if (*(int *)(lVar9 + 0x5c) < iVar1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar9 + 0x50);
  }
  puVar4 = (undefined8 *)(*(longlong *)(lVar9 + 0x50) + (longlong)iVar8 * 0x10);
  *puVar4 = 0x3f8000003f000000;
  puVar4[1] = 0;
  lVar9 = param_1[0xd];
  iVar8 = *(int *)(lVar9 + 0x58);
  iVar1 = iVar8 + 1;
  *(int *)(lVar9 + 0x58) = iVar1;
  if (*(int *)(lVar9 + 0x5c) < iVar1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar9 + 0x50);
  }
  puVar4 = (undefined8 *)(*(longlong *)(lVar9 + 0x50) + (longlong)iVar8 * 0x10);
  *puVar4 = 0x3f0000003f000000;
  puVar4[1] = 0x3f000000;
  lVar9 = param_1[0xd];
  iVar8 = *(int *)(lVar9 + 0x58);
  iVar1 = iVar8 + 1;
  *(int *)(lVar9 + 0x58) = iVar1;
  if (*(int *)(lVar9 + 0x5c) < iVar1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar9 + 0x50);
  }
  puVar4 = (undefined8 *)(*(longlong *)(lVar9 + 0x50) + (longlong)iVar8 * 0x10);
  *puVar4 = 0x3f0000003f000000;
  puVar4[1] = 0x3f0000003f000000;
  lVar9 = param_1[0xd];
  iVar8 = *(int *)(lVar9 + 0x68);
  iVar1 = iVar8 + 1;
  *(int *)(lVar9 + 0x68) = iVar1;
  if (*(int *)(lVar9 + 0x6c) < iVar1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar9 + 0x60);
  }
  puVar4 = (undefined8 *)(*(longlong *)(lVar9 + 0x60) + (longlong)iVar8 * 0x10);
  *puVar4 = 0x3f0000003f000000;
  puVar4[1] = 0;
  lVar9 = param_1[0xd];
  iVar8 = *(int *)(lVar9 + 0x68);
  iVar1 = iVar8 + 1;
  *(int *)(lVar9 + 0x68) = iVar1;
  if (*(int *)(lVar9 + 0x6c) < iVar1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar9 + 0x60);
  }
  puVar4 = (undefined8 *)(*(longlong *)(lVar9 + 0x60) + (longlong)iVar8 * 0x10);
  *puVar4 = 0x3f0000003f000000;
  puVar4[1] = 0x3f00000000000000;
  lVar9 = param_1[0xd];
  iVar8 = *(int *)(lVar9 + 0x68);
  iVar1 = iVar8 + 1;
  *(int *)(lVar9 + 0x68) = iVar1;
  if (*(int *)(lVar9 + 0x6c) < iVar1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar9 + 0x60);
  }
  puVar4 = (undefined8 *)(*(longlong *)(lVar9 + 0x60) + (longlong)iVar8 * 0x10);
  *puVar4 = 0x3f8000003f000000;
  puVar4[1] = 0x3f000000;
  lVar9 = param_1[0xd];
  iVar8 = *(int *)(lVar9 + 0x78);
  iVar1 = iVar8 + 1;
  *(int *)(lVar9 + 0x78) = iVar1;
  if (*(int *)(lVar9 + 0x7c) < iVar1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar9 + 0x70);
  }
  puVar4 = (undefined8 *)(*(longlong *)(lVar9 + 0x70) + (longlong)iVar8 * 0x10);
  *puVar4 = 0x3f0000003f000000;
  puVar4[1] = 0;
  lVar9 = param_1[0xd];
  iVar8 = *(int *)(lVar9 + 0x78);
  iVar1 = iVar8 + 1;
  *(int *)(lVar9 + 0x78) = iVar1;
  if (*(int *)(lVar9 + 0x7c) < iVar1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar9 + 0x70);
  }
  puVar4 = (undefined8 *)(*(longlong *)(lVar9 + 0x70) + (longlong)iVar8 * 0x10);
  *puVar4 = 0x3f0000003f000000;
  puVar4[1] = 0x3f000000;
  lVar9 = param_1[0xd];
  iVar8 = *(int *)(lVar9 + 0x78);
  iVar1 = iVar8 + 1;
  *(int *)(lVar9 + 0x78) = iVar1;
  if (*(int *)(lVar9 + 0x7c) < iVar1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar9 + 0x70);
  }
  puVar4 = (undefined8 *)(*(longlong *)(lVar9 + 0x70) + (longlong)iVar8 * 0x10);
  *puVar4 = 0x3f0000003f000000;
  puVar4[1] = 0x3f00000000000000;
  lVar9 = param_1[0xd];
  iVar8 = *(int *)(lVar9 + 0x78);
  iVar1 = iVar8 + 1;
  *(int *)(lVar9 + 0x78) = iVar1;
  if (*(int *)(lVar9 + 0x7c) < iVar1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar9 + 0x70);
  }
  puVar4 = (undefined8 *)(*(longlong *)(lVar9 + 0x70) + (longlong)iVar8 * 0x10);
  *puVar4 = 0x3f0000003f000000;
  puVar4[1] = 0x3f0000003f000000;
  *(undefined4 *)(param_1 + 0xf) = 4;
  *(undefined1 *)(param_1 + 0x13) = 1;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    puVar3 = (undefined8 *)operator_new(0x48);
    puVar4 = puVar6;
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      *(undefined4 *)(puVar3 + 7) = 0;
      puVar3[8] = 0;
      puVar4 = puVar3;
    }
    param_1[0x5e] = puVar4;
    puVar4 = (undefined8 *)operator_new(0x30);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      iVar8 = *(int *)(puVar4 + 2);
      iVar1 = iVar8 + 0x14;
      *(int *)(puVar4 + 2) = iVar1;
      if (*(int *)((longlong)puVar4 + 0x14) < iVar1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(puVar4 + 1);
      }
      _guard_xfg_dispatch_icall_nop((void *)(puVar4[1] + (longlong)iVar8 * 4),0,0x50);
      iVar8 = *(int *)(puVar4 + 4);
      iVar1 = iVar8 + 0x14;
      *(int *)(puVar4 + 4) = iVar1;
      if (*(int *)((longlong)puVar4 + 0x24) < iVar1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar4 + 3);
      }
      _guard_xfg_dispatch_icall_nop((void *)(puVar4[3] + (longlong)iVar8 * 8),0,0xa0);
      puVar6 = puVar4;
    }
    param_1[0x5f] = puVar6;
    iStack_50 = 0;
    local_58 = FUN_1424845a0;
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_FUN_1443188c0;
      FWeakObjectPtr::operator=(plVar5 + 1,param_1);
      *(undefined4 *)(plVar5 + 2) = (undefined4)local_58;
      *(undefined4 *)((longlong)plVar5 + 0x14) = local_58._4_4_;
      *(int *)(plVar5 + 3) = iStack_50;
      *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_4c;
      lVar9 = FDelegateHandle::GenerateNewID();
      plVar5[5] = lVar9;
      *plVar5 = (longlong)&PTR_FUN_144318908;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af4c0,1);
      (**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
      iVar8 = DAT_1464af4c8;
      lVar9 = (longlong)DAT_1464af4c8;
      DAT_1464af4c8 = DAT_1464af4c8 + 1;
      if (DAT_1464af4cc < DAT_1464af4c8) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af4c0,iVar8);
      }
      puVar6 = (undefined8 *)(lVar9 * 0x10 + DAT_1464af4c0);
      *puVar6 = plVar5;
      *(undefined4 *)(puVar6 + 1) = 3;
    }
    iStack_50 = 0;
    local_58 = (code *)&LAB_1424847f0;
    local_48 = (code *)&LAB_1424847f0;
    uStack_40 = 0;
    uStack_3c = uStack_4c;
    FUN_140722860(&DAT_1464af4d8,local_res8,param_1,&local_48);
    iStack_50 = 0;
    local_58 = FUN_142484720;
    local_48 = FUN_142484720;
    uStack_40 = 0;
    uStack_3c = uStack_4c;
    FUN_140722860(&DAT_1464af4f0,local_res8,param_1,&local_48);
    uStack_40 = 0;
    local_48 = FUN_142484680;
    local_58 = (code *)0x0;
    iStack_50 = 0;
    puVar6 = (undefined8 *)operator_new(0x30,&local_58);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &PTR_FUN_143fcff50;
      FWeakObjectPtr::operator=(puVar6 + 1,param_1);
      *(undefined4 *)(puVar6 + 2) = (undefined4)local_48;
      *(undefined4 *)((longlong)puVar6 + 0x14) = local_48._4_4_;
      *(undefined4 *)(puVar6 + 3) = uStack_40;
      *(undefined4 *)((longlong)puVar6 + 0x1c) = uStack_3c;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[5] = uVar7;
      *puVar6 = &PTR_FUN_143fcff98;
    }
    iVar8 = iStack_50;
    plVar5 = (longlong *)local_58;
    if (iStack_50 == 0) {
      if (local_58 != (code *)0x0) {
        FMemory::Free();
      }
    }
    else if (local_58 != (code *)0x0) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af508,1);
      (**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
      iVar1 = DAT_1464af510;
      lVar9 = (longlong)DAT_1464af510;
      DAT_1464af510 = DAT_1464af510 + 1;
      if (DAT_1464af514 < DAT_1464af510) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af508,iVar1);
      }
      puVar6 = (undefined8 *)(lVar9 * 0x10 + DAT_1464af508);
      *puVar6 = plVar5;
      *(int *)(puVar6 + 1) = iVar8;
    }
  }
  return param_1;
}



// FUNCTION 14246f4a0 FUN_14246f4a0 body=63 status=ok
// SIG undefined FUN_14246f4a0(void)

undefined8 * FUN_14246f4a0(undefined8 *param_1)

{
  FUN_1417818c0();
  *(undefined4 *)(param_1 + 5) = 0x40000000;
  *param_1 = &PTR_FUN_1450bb7e8;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  FUN_14246d790(param_1 + 7);
  return param_1;
}



// FUNCTION 14246f4e0 FUN_14246f4e0 body=42 status=ok
// SIG undefined FUN_14246f4e0(void)

undefined8 * FUN_14246f4e0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1450bba60;
  FUN_142741540(param_1 + 8);
  return param_1;
}



// FUNCTION 14246f510 FUN_14246f510 body=68 status=ok
// SIG undefined FUN_14246f510(void)

undefined8 * FUN_14246f510(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1450bbcd8;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  return param_1;
}



// FUNCTION 14246f560 FUN_14246f560 body=81 status=ok
// SIG undefined FUN_14246f560(void)

undefined8 * FUN_14246f560(undefined8 *param_1)

{
  FUN_1423a0060();
  *param_1 = &PTR__scalar_deleting_destructor__1450bc1f0;
  param_1[5] = &PTR_LAB_1450bcae0;
  param_1[0x5a] = &PTR_LAB_1450bcb10;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0x5f) | 0x40;
  return param_1;
}



// FUNCTION 14246f5c0 FUN_14246f5c0 body=435 status=ok
// SIG undefined FUN_14246f5c0(void)

undefined8 * FUN_14246f5c0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450bb250;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 300) = 0x3f800000;
  param_1[0xc] = 0xbf800000;
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x14] = 0xbf800000;
  param_1[0x15] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0x3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0x3f8000003f800000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x40600000;
  param_1[0x19] = 0x3ed893753e841893;
  param_1[0x1a] = 0x3f8000003f2872b0;
  *(undefined4 *)(param_1 + 6) = 0x41a00000;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x3f3851ec3f43d70a;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x3f322d0e;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x44228000;
  param_1[0x1b] = 0x3f8000003f800000;
  param_1[0x1c] = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x40400000;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 8) = 0x42480000;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x40000000;
  *(undefined4 *)(param_1 + 0x10) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x11) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x12) = 0x3fc00000;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x43fa0000;
  *(undefined4 *)(param_1 + 0x13) = 0x40400000;
  *(undefined4 *)(param_1 + 0x1d) = 0x3ef0a3d7;
  *(undefined4 *)(param_1 + 0x1e) = 0x459c4000;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0x461c4000;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x3e3d70a4;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x41200000;
  *(undefined4 *)(param_1 + 0x21) = 0xbd4ccccd;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  return param_1;
}



// FUNCTION 14246f780 FUN_14246f780 body=68 status=ok
// SIG undefined FUN_14246f780(void)

undefined8 * FUN_14246f780(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UMaterialExpression::UMaterialExpression(param_1,uVar1);
  *param_1 = &PTR_FUN_1450bbf50;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 14246f7d0 thunk_FUN_142478640 body=5 status=ok
// SIG undefined thunk_FUN_142478640(void)

void thunk_FUN_142478640(int *param_1)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
  
  lVar2 = DAT_146532760;
  iVar4 = *param_1 + -1;
  if (iVar4 != -1) {
    lVar6 = (longlong)*param_1 * 0x20;
    if (*(longlong *)(DAT_146532760 + -0x10 + lVar6) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar2 + -0x20 + lVar6) != 0) {
      FMemory::Free();
    }
    bVar1 = (byte)iVar4 & 0x1f;
    if (DAT_146532794 != 0) {
      *(int *)((longlong)DAT_146532790 * 0x20 + DAT_146532760) = iVar4;
    }
    lVar2 = DAT_146532760;
    *(undefined4 *)(lVar6 + -0x20 + DAT_146532760) = 0xffffffff;
    iVar3 = -1;
    if (0 < DAT_146532794) {
      iVar3 = DAT_146532790;
    }
    *(int *)(lVar6 + -0x1c + lVar2) = iVar3;
    DAT_146532794 = DAT_146532794 + 1;
    puVar5 = DAT_146532780;
    if (DAT_146532780 == (undefined *)0x0) {
      puVar5 = &DAT_146532770;
    }
    DAT_146532790 = iVar4;
    *(uint *)(puVar5 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4) =
         *(uint *)(puVar5 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4) &
         ~(1 << bVar1 | 1U >> 0x20 - bVar1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 14246f7e0 FUN_14246f7e0 body=71 status=ok
// SIG undefined FUN_14246f7e0(void)

void FUN_14246f7e0(longlong *param_1)

{
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 3);
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x30))();
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14246f830 FUN_14246f830 body=213 status=ok
// SIG undefined FUN_14246f830(void)

void FUN_14246f830(longlong *param_1)

{
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 0x4a);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 0x49);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 0x3f);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 0x3e);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 0x3d);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 0x3c);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 0x3b);
  if (param_1[0x1b] != 0) {
    FMemory::Free();
  }
  if (param_1[0x19] != 0) {
    FMemory::Free();
  }
  if (param_1[0x17] != 0) {
    FMemory::Free();
  }
  if (param_1[0x15] != 0) {
    FMemory::Free();
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14246f910 FUN_14246f910 body=862 status=ok
// SIG undefined FUN_14246f910(void)

void FUN_14246f910(undefined8 *param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  
  puVar1 = param_1 + 5;
  *param_1 = &PTR_FUN_1450b8ba8;
  *puVar1 = &PTR_LAB_1450b8f08;
  param_1[9] = &PTR_LAB_1450b90f0;
  FUN_140483870(&DAT_1464af4c0,param_1);
  FUN_140483870(&DAT_1464af4d8,param_1);
  FUN_140483870(&DAT_1464af4f0,param_1);
  FUN_140483870(&DAT_1464af508,param_1);
  lVar3 = param_1[0x5f];
  if (lVar3 != 0) {
    if (*(longlong *)(lVar3 + 0x18) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar3 + 8) != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(lVar3,0x30);
    param_1[0x5f] = 0;
  }
  if (param_1[0x5e] != 0) {
    FMemory::operator_delete(param_1[0x5e],0x48);
    param_1[0x5e] = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x5c);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x5a);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x57);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x54);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x51);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x4e);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x4b);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x48);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x45);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x43);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x3e) = 0;
  if (param_1[0x3d] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x35,0);
  if (param_1[0x39] != 0) {
    FMemory::Free();
  }
  if (param_1[0x35] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (param_1[0x33] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x2b,0);
  if (param_1[0x2f] != 0) {
    FMemory::Free();
  }
  if (param_1[0x2b] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if (param_1[0x29] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x21,0);
  if (param_1[0x25] != 0) {
    FMemory::Free();
  }
  if (param_1[0x21] != 0) {
    FMemory::Free();
  }
  plVar5 = (longlong *)param_1[0x20];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  plVar5 = (longlong *)param_1[0x1d];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  plVar5 = (longlong *)param_1[0x1b];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  plVar5 = (longlong *)param_1[0x19];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  iVar4 = *(int *)(param_1 + 0xe);
  plVar5 = (longlong *)param_1[0xd];
  if (iVar4 != 0) {
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    plVar5 = (longlong *)param_1[0xd];
  }
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  FExec::~FExec(param_1 + 9);
  *puVar1 = &PTR_FUN_144f9f050;
  if (DAT_146b17190 == puVar1) {
    DAT_146b17190 = (undefined8 *)0x0;
  }
  *puVar1 = &PTR_FUN_144f9ee70;
  FUN_141782120(param_1);
  return;
}



// FUNCTION 14246fc70 FUN_14246fc70 body=200 status=ok
// SIG undefined FUN_14246fc70(void)

undefined8 FUN_14246fc70(undefined8 param_1,int *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  
  FUN_142478640();
  if (*param_2 != 0) {
    lVar1 = FUN_1424811e0(param_1);
    lVar5 = (longlong)*param_2 * 0x20 + DAT_146532760;
    FUN_14246fd80(lVar1,lVar5 + -0x20);
    plVar6 = (longlong *)(lVar1 + 0x10);
    if (plVar6 != (longlong *)(lVar5 + -0x10)) {
      iVar4 = *(int *)(lVar5 + -8);
      lVar5 = *(longlong *)(lVar5 + -0x10);
      *(int *)(lVar1 + 0x18) = iVar4;
      if ((iVar4 == 0) && (*(int *)(lVar1 + 0x1c) == 0)) {
        *(undefined4 *)(lVar1 + 0x1c) = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar6,iVar4);
        if (iVar4 != 0) {
          puVar2 = (undefined8 *)(lVar5 + 8);
          puVar3 = (undefined4 *)*plVar6;
          do {
            *puVar3 = *(undefined4 *)(puVar2 + -1);
            puVar3[1] = *(undefined4 *)((longlong)puVar2 + -4);
            *(undefined8 *)(puVar3 + 2) = *puVar2;
            iVar4 = iVar4 + -1;
            puVar2 = puVar2 + 2;
            puVar3 = puVar3 + 4;
          } while (iVar4 != 0);
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 14246fd40 FUN_14246fd40 body=13 status=ok
// SIG undefined FUN_14246fd40(void)

void FUN_14246fd40(longlong param_1,longlong param_2)

{
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 4);
  FUN_14246d090(param_1,1);
  return;
}



// FUNCTION 14246fd50 FUN_14246fd50 body=12 status=ok
// SIG undefined FUN_14246fd50(void)

void FUN_14246fd50(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  FUN_14246d090(param_1,1);
  return;
}



// FUNCTION 14246fd60 FUN_14246fd60 body=13 status=ok
// SIG undefined FUN_14246fd60(void)

void FUN_14246fd60(longlong param_1,longlong param_2)

{
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 4);
  FUN_14246d150(param_1,1);
  return;
}



// FUNCTION 14246fd70 FUN_14246fd70 body=10 status=ok
// SIG undefined FUN_14246fd70(void)

void FUN_14246fd70(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  FUN_14246d150(param_1,1);
  return;
}



// FUNCTION 14246fd80 FUN_14246fd80 body=107 status=ok
// SIG undefined FUN_14246fd80(void)

void FUN_14246fd80(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = (void *)*param_2;
    iVar1 = *(int *)(param_2 + 1);
    *(int *)(param_1 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return;
    }
    TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1,iVar1);
    _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
  }
  return;
}



// FUNCTION 14246fdf0 FUN_14246fdf0 body=232 status=ok
// SIG undefined FUN_14246fdf0(void)

undefined4 * FUN_14246fdf0(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)(param_2 + 10);
  *param_1 = *param_2;
  plVar2 = (longlong *)(param_1 + 10);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    *(undefined8 *)(param_2 + 0xc) = 0;
  }
  plVar1 = (longlong *)(param_2 + 0xe);
  plVar2 = (longlong *)(param_1 + 0xe);
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  return param_1;
}



// FUNCTION 14246fee0 FUN_14246fee0 body=437 status=ok
// SIG undefined FUN_14246fee0(void)

longlong * FUN_14246fee0(longlong *param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)*(int *)(param_2 + 0x328) << 3,
             (longlong)*(int *)(param_2 + 0x32c) << 3);
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = *(int *)(param_2 + 0x328);
  }
  else {
    local_res8[0] = 0;
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
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x200001)))) {
    if ((bVar1 & 1) != 0) {
      *(undefined4 *)(param_2 + 0x328) = 0;
      if (*(int *)(param_2 + 0x32c) != local_res8[0]) {
        FUN_14248cf20(param_2,local_res8[0]);
      }
      iVar5 = 0;
      if (0 < local_res8[0]) {
        do {
          iVar2 = *(int *)(param_2 + 0x328);
          *(int *)(param_2 + 0x328) = iVar2 + 1;
          if (*(int *)(param_2 + 0x32c) < iVar2 + 1) {
            FUN_14248cc50(param_2,iVar2);
          }
          lVar4 = *(longlong *)(param_2 + 800);
          if (*(longlong *)(param_2 + 800) == 0) {
            lVar4 = param_2;
          }
          (**(code **)(*param_1 + 0x30))(param_1,lVar4 + (longlong)iVar2 * 8);
          iVar5 = iVar5 + 1;
        } while (iVar5 < local_res8[0]);
      }
      return param_1;
    }
    iVar5 = 0;
    *(int *)(param_2 + 0x328) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        lVar4 = *(longlong *)(param_2 + 800);
        if (*(longlong *)(param_2 + 800) == 0) {
          lVar4 = param_2;
        }
        (**(code **)(*param_1 + 0x30))(param_1,lVar4 + (longlong)iVar5 * 8);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(param_2 + 0x328));
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar1 | 0x80;
  return param_1;
}



// FUNCTION 1424700a0 FUN_1424700a0 body=800 status=ok
// SIG undefined FUN_1424700a0(void)

longlong * FUN_1424700a0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int local_res8 [2];
  longlong *local_58;
  undefined1 local_50 [4];
  uint local_4c;
  longlong local_48;
  uint local_40;
  int local_3c;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  plVar1 = param_2 + 2;
  iVar4 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar5 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2);
  plVar8 = (longlong *)param_1[1];
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
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
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_58,param_2);
    if (local_3c < *(int *)(local_48 + 0x18)) {
      do {
        lVar10 = (longlong)local_3c * 0x20 + *local_58;
        (**(code **)(*param_1 + 0x30))(param_1,lVar10);
        FUN_1408bdc30(param_1,lVar10 + 8);
        local_40 = local_40 & ~local_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_50);
      } while (local_3c < *(int *)(local_48 + 0x18));
    }
    return param_1;
  }
  iVar4 = 0;
  local_res8[0] = 0;
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
  iVar5 = local_res8[0];
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_58,param_2);
  if (local_3c < *(int *)(local_48 + 0x18)) {
    do {
      if (*(longlong *)((longlong)local_3c * 0x20 + *local_58 + 8) != 0) {
        FMemory::Free();
      }
      local_40 = local_40 & ~local_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_50);
    } while (local_3c < *(int *)(local_48 + 0x18));
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar5) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_2,iVar5);
  }
  *(undefined4 *)(param_2 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  uVar6 = iVar5 + 0x1f + (iVar5 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_2 + 0x2c) != uVar6) {
    *(uint *)((longlong)param_2 + 0x2c) = uVar6;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(plVar1,0);
  }
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar5 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar5 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(param_2,iVar5);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(plVar1,0,1);
      }
      else {
        iVar5 = (int)param_2[6];
        iVar3 = *(int *)((longlong)iVar5 * 0x20 + 4 + *param_2);
        iVar7 = *(int *)((longlong)param_2 + 0x34) + -1;
        *(int *)(param_2 + 6) = iVar3;
        *(int *)((longlong)param_2 + 0x34) = iVar7;
        if (iVar7 != 0) {
          *(undefined4 *)((longlong)iVar3 * 0x20 + *param_2) = 0xffffffff;
        }
      }
      plVar8 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar8 = plVar1;
      }
      iVar7 = iVar5;
      if (iVar5 < 0) {
        iVar7 = iVar5 + 0x1f;
      }
      puVar2 = (uint *)((longlong)plVar8 + (longlong)(iVar7 >> 5) * 4);
      *puVar2 = *puVar2 | 1 << ((byte)iVar5 & 0x1f);
      puVar9 = (undefined8 *)((longlong)iVar5 * 0x20 + *param_2);
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      *(undefined4 *)(puVar9 + 3) = 0xffffffff;
      (**(code **)(*param_1 + 0x30))(param_1);
      FUN_1408bdc30(param_1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 1424703c0 FUN_1424703c0 body=220 status=ok
// SIG undefined FUN_1424703c0(void)

void FUN_1424703c0(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  
  while( true ) {
    while( true ) {
      lVar2 = *param_1;
      LOCK();
      piVar1 = (int *)(lVar2 + 4);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if ((iVar4 < 0) || (*(int *)(lVar2 + 0x10) <= iVar4)) break;
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 8) + (longlong)iVar4 * 0x10);
      cVar3 = FWeakObjectPtr::IsValid(lVar2);
      if (cVar3 != '\0') {
        lVar5 = FWeakObjectPtr::Get(lVar2);
        if (*(longlong *)(lVar5 + 0x178) != 0) {
          uVar6 = FWeakObjectPtr::Get(lVar2);
          FUN_142358060(uVar6,*(undefined4 *)(lVar2 + 8),lVar2 + 0xc);
        }
      }
    }
    iVar4 = iVar4 - *(int *)(lVar2 + 0x10);
    if ((iVar4 < 0) || (*(int *)(lVar2 + 0x20) <= iVar4)) break;
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + (longlong)iVar4 * 0x10);
    cVar3 = FWeakObjectPtr::IsValid(lVar2);
    if (cVar3 != '\0') {
      lVar5 = FWeakObjectPtr::Get(lVar2);
      if (*(longlong *)(lVar5 + 0x178) != 0) {
        plVar7 = (longlong *)FWeakObjectPtr::Get(lVar2);
        (**(code **)(*plVar7 + 0x590))(plVar7,*(undefined4 *)(lVar2 + 8));
      }
    }
  }
  LOCK();
  *(int *)param_1[1] = *(int *)param_1[1] + -1;
  UNLOCK();
  return;
}



// FUNCTION 142470520 FUN_142470520 body=97 status=ok
// SIG undefined FUN_142470520(void)

undefined8 * FUN_142470520(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1450bcd40;
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


