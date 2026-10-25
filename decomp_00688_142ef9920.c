// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142ef9920 FUN_142ef9920 body=523 status=ok
// SIG undefined FUN_142ef9920(void)

void FUN_142ef9920(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_38 [8];
  undefined8 local_30;
  longlong *plStack_28;
  undefined1 local_20;
  
  lVar8 = 0;
  uVar9 = 0xffffffff;
  if ((*(longlong *)(param_1 + 0x50) == 0) || (*(longlong *)(param_1 + 0x58) == 0)) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf0))();
    if ((lVar4 != 0) && (lVar5 = FUN_14270bb10(lVar4), lVar5 != 0)) {
      uVar9 = *(undefined4 *)(lVar5 + 0x108);
    }
  }
  lVar5 = lVar8;
  if (lVar4 != 0) {
    uVar6 = FUN_142f30760();
    plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar6);
    if (plVar7 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x50);
  if (((lVar4 != 0) && (*(longlong *)(param_1 + 0x58) != 0)) && (lVar5 != 0)) {
    if (*(char *)(param_1 + 0xa3) == '\0') {
      if ((0 < *(int *)(lVar5 + 0x48)) &&
         (plVar7 = *(longlong **)
                    (*(longlong *)(lVar5 + 0x40) + -8 + (longlong)*(int *)(lVar5 + 0x48) * 8),
         plVar7 != (longlong *)0x0)) {
        lVar8 = (**(code **)(*plVar7 + 0x278))();
        lVar4 = *(longlong *)(param_1 + 0x50);
      }
      if (lVar8 != lVar4) {
        return;
      }
    }
    if (((0 < *(int *)(lVar5 + 0x48)) &&
        (plVar7 = *(longlong **)
                   (*(longlong *)(lVar5 + 0x40) + -8 + (longlong)*(int *)(lVar5 + 0x48) * 8),
        plVar7 != (longlong *)0x0)) && (lVar8 = (**(code **)(*plVar7 + 0x278))(), lVar8 != 0)) {
      uVar6 = FUN_142f2b5a0();
      plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar8,uVar6);
      if (plVar7 != (longlong *)0x0) {
        FName::FName(&local_48,&DAT_143f3eda8,1);
        local_40 = 0xffffffff;
        local_3c = 0;
        FName::FName(local_38,&DAT_143f3eda8,1);
        local_48 = *param_2;
        local_20 = 0;
        local_30 = 0;
        plStack_28 = (longlong *)0x0;
        local_40 = uVar9;
        FKey::operator=(local_38,&DAT_1469e9868);
        local_3c = param_3;
        (**(code **)(*plVar7 + 0xc0))(plVar7,&local_48);
        plVar7 = plStack_28;
        if (plStack_28 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_28 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plStack_28)(plStack_28);
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
      }
    }
  }
  return;
}



// FUNCTION 142ef9b30 FUN_142ef9b30 body=222 status=ok
// SIG undefined FUN_142ef9b30(void)

void FUN_142ef9b30(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  
  *(bool *)(param_1 + 8) = *DAT_146b3e258 != 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x1c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
  }
  plVar2 = (longlong *)FUN_14203ca50();
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    plVar3[1] = param_1;
    *plVar3 = (longlong)&DAT_143f3ed00;
    plVar3[2] = (longlong)FUN_142efe0e0;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar2,1);
    (**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
    iVar1 = (int)plVar2[1];
    *(int *)(plVar2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar1);
    }
    puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar2);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 3;
  }
  return;
}



// FUNCTION 142ef9c10 FUN_142ef9c10 body=594 status=ok
// SIG undefined FUN_142ef9c10(void)

void FUN_142ef9c10(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *local_res8;
  longlong *local_48;
  int local_40;
  int local_3c;
  
  plVar8 = (longlong *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x34)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar8,0);
  }
  if (plVar8 != param_2) {
    iVar1 = (int)param_2[1];
    pvVar2 = (void *)*param_2;
    *(int *)(param_1 + 0x30) = iVar1;
    if ((iVar1 == 0) && (*(int *)(param_1 + 0x34) == 0)) {
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(plVar8,iVar1);
      _guard_xfg_dispatch_icall_nop((void *)*plVar8,pvVar2,(longlong)iVar1 << 3);
    }
  }
  *(undefined2 *)(param_1 + 0x38) = 0x100;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  local_40 = *(int *)(param_1 + 0x18);
  lVar6 = (longlong)local_40;
  pvVar2 = *(void **)(param_1 + 0x10);
  local_res8 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  if (local_40 == 0) {
    local_3c = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_48,local_40,0);
    local_res8 = local_48;
    _guard_xfg_dispatch_icall_nop(local_48,pvVar2,lVar6 << 3);
  }
  iVar3 = local_3c;
  iVar1 = local_40;
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  local_40 = iVar1 + 1;
  if (iVar3 < local_40) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,iVar1);
    local_res8 = local_48;
  }
  iVar3 = local_40;
  _guard_xfg_dispatch_icall_nop(local_res8 + 1,local_res8,(longlong)iVar1 << 3);
  *local_res8 = param_3;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x20));
  uVar7 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((*(int *)(param_1 + 0x1c) < 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x20));
  uVar4 = (ulonglong)((longlong)(local_res8 + iVar3) + (7 - (longlong)local_res8)) >> 3;
  if (local_res8 + iVar3 < local_res8) {
    uVar4 = uVar7;
  }
  plVar8 = local_res8;
  if (uVar4 != 0) {
    do {
      lVar5 = 0;
      lVar6 = *plVar8;
      AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x20));
      if (*(int *)(param_1 + 0x18) != 0) {
        lVar5 = *(longlong *)
                 (*(longlong *)(param_1 + 0x10) + -8 + (longlong)*(int *)(param_1 + 0x18) * 8);
      }
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x20));
      if ((lVar6 != lVar5) && (lVar6 != 0)) {
        AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x20));
        iVar1 = *(int *)(param_1 + 0x18);
        *(int *)(param_1 + 0x18) = iVar1 + 1;
        if (*(int *)(param_1 + 0x1c) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x10,iVar1);
        }
        *(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = lVar6;
        ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x20));
      }
      uVar7 = uVar7 + 1;
      plVar8 = plVar8 + 1;
    } while (uVar7 != uVar4);
  }
  FUN_142ee2820(param_1);
  if (local_res8 != (longlong *)0x0) {
    FMemory::Free(local_res8);
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142ef9e70 FUN_142ef9e70 body=145 status=ok
// SIG undefined FUN_142ef9e70(void)

void FUN_142ef9e70(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FUN_14208b300();
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
  }
  local_58[0] = &LAB_142ee3700;
  FUN_14208c5d0(param_1,local_58);
  return;
}



// FUNCTION 142ef9f10 FUN_142ef9f10 body=2503 status=ok
// SIG undefined FUN_142ef9f10(void)

void FUN_142ef9f10(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  bool bVar12;
  longlong local_e8;
  longlong *local_e0;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  FUN_142ef9e70();
  puVar11 = &DAT_143f3eda8;
  if (*(int *)(param_1 + 0x1e8) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = *(undefined2 **)(param_1 + 0x1e0);
  }
  FUN_142085870(param_1,&local_e8,puVar10);
  plVar2 = local_e0;
  if (local_e8 != 0) {
    *(longlong *)(param_1 + 0x230) = local_e8;
    plVar8 = *(longlong **)(param_1 + 0x238);
    if (local_e0 != plVar8) {
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_e0 + 0xc) = *(int *)((longlong)local_e0 + 0xc) + 1;
        UNLOCK();
        plVar8 = *(longlong **)(param_1 + 0x238);
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      *(longlong **)(param_1 + 0x238) = plVar2;
    }
    if (*(int *)(param_1 + 0x1f8) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = *(undefined2 **)(param_1 + 0x1f0);
    }
    puVar6 = (undefined8 *)FUN_1420392d0(local_e8,local_d8,puVar10);
    *(undefined8 *)(param_1 + 0x240) = *puVar6;
    plVar2 = (longlong *)puVar6[1];
    plVar8 = *(longlong **)(param_1 + 0x248);
    if (plVar2 != plVar8) {
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
        plVar8 = *(longlong **)(param_1 + 0x248);
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      *(longlong **)(param_1 + 0x248) = plVar2;
    }
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_d0 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar1 = (int *)((longlong)local_d0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
    if (*(int *)(param_1 + 0x208) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = *(undefined2 **)(param_1 + 0x200);
    }
    puVar6 = (undefined8 *)FUN_1420392d0(local_e8,local_c8,puVar10);
    *(undefined8 *)(param_1 + 0x250) = *puVar6;
    plVar2 = (longlong *)puVar6[1];
    plVar8 = *(longlong **)(param_1 + 600);
    if (plVar2 != plVar8) {
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
        plVar8 = *(longlong **)(param_1 + 600);
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      *(longlong **)(param_1 + 600) = plVar2;
    }
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_c0 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar1 = (int *)((longlong)local_c0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
    }
    if (*(int *)(param_1 + 0x218) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = *(undefined2 **)(param_1 + 0x210);
    }
    uVar7 = FUN_1420392d0(local_e8,local_b8,puVar10);
    FUN_142ede260(param_1 + 0x280,uVar7);
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_b0 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)local_b0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
    if (*(int *)(param_1 + 0x228) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = *(undefined2 **)(param_1 + 0x220);
    }
    uVar7 = FUN_1420392d0(local_e8,local_a8,puVar10);
    FUN_142ede260(param_1 + 0x298,uVar7);
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_a0 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
    if (*(int *)(param_1 + 0x1c8) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = *(undefined2 **)(param_1 + 0x1c0);
    }
    puVar6 = (undefined8 *)FUN_1420392d0(local_e8,local_98,puVar10);
    *(undefined8 *)(param_1 + 0x260) = *puVar6;
    plVar2 = (longlong *)puVar6[1];
    plVar8 = *(longlong **)(param_1 + 0x268);
    if (plVar2 != plVar8) {
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
        plVar8 = *(longlong **)(param_1 + 0x268);
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      *(longlong **)(param_1 + 0x268) = plVar2;
    }
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_90 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
  }
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_e0 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar1 = (int *)((longlong)local_e0 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_e0 + 8))(local_e0,1);
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x240) == 0) || (*(longlong *)(param_1 + 0x248) == 0)) {
LAB_142efa2d4:
    if (*(int *)(param_1 + 0x1f8) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = *(undefined2 **)(param_1 + 0x1f0);
    }
    puVar6 = (undefined8 *)FUN_142085870(param_1,local_88,puVar10);
    *(undefined8 *)(param_1 + 0x240) = *puVar6;
    plVar2 = (longlong *)puVar6[1];
    plVar8 = *(longlong **)(param_1 + 0x248);
    if (plVar2 != plVar8) {
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
        plVar8 = *(longlong **)(param_1 + 0x248);
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      *(longlong **)(param_1 + 0x248) = plVar2;
    }
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x248) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (iVar4 < 1) goto LAB_142efa2d4;
  }
  if ((*(longlong *)(param_1 + 0x250) == 0) || (*(longlong *)(param_1 + 600) == 0)) {
LAB_142efa39a:
    if (*(int *)(param_1 + 0x208) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = *(undefined2 **)(param_1 + 0x200);
    }
    puVar6 = (undefined8 *)FUN_142085870(param_1,local_78,puVar10);
    *(undefined8 *)(param_1 + 0x250) = *puVar6;
    plVar2 = (longlong *)puVar6[1];
    plVar8 = *(longlong **)(param_1 + 600);
    if (plVar2 != plVar8) {
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
        plVar8 = *(longlong **)(param_1 + 600);
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      *(longlong **)(param_1 + 600) = plVar2;
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_70 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 600) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (iVar4 < 1) goto LAB_142efa39a;
  }
  if ((*(longlong *)(param_1 + 0x288) == 0) || (*(longlong *)(param_1 + 0x290) == 0)) {
LAB_142efa45c:
    if (*(int *)(param_1 + 0x218) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = *(undefined2 **)(param_1 + 0x210);
    }
    uVar7 = FUN_142085870(param_1,local_68,puVar10);
    FUN_142ede260(param_1 + 0x280,uVar7);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_60 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x290) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (iVar4 < 1) goto LAB_142efa45c;
  }
  if ((*(longlong *)(param_1 + 0x2a0) == 0) || (*(longlong *)(param_1 + 0x2a8) == 0)) {
LAB_142efa4e2:
    if (*(int *)(param_1 + 0x228) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = *(undefined2 **)(param_1 + 0x220);
    }
    uVar7 = FUN_142085870(param_1,local_58,puVar10);
    FUN_142ede260(param_1 + 0x298,uVar7);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_50 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x2a8) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (iVar4 < 1) goto LAB_142efa4e2;
  }
  if ((*(longlong *)(param_1 + 0x260) != 0) && (*(longlong *)(param_1 + 0x268) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x268) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) goto LAB_142efa60d;
  }
  if (*(int *)(param_1 + 0x1c8) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = *(undefined2 **)(param_1 + 0x1c0);
  }
  puVar6 = (undefined8 *)FUN_142085870(param_1,local_48,puVar10);
  *(undefined8 *)(param_1 + 0x260) = *puVar6;
  plVar2 = (longlong *)puVar6[1];
  plVar8 = *(longlong **)(param_1 + 0x268);
  if (plVar2 != plVar8) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(param_1 + 0x268);
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    *(longlong **)(param_1 + 0x268) = plVar2;
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
LAB_142efa60d:
  plVar2 = *(longlong **)(param_1 + 0x268);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar12 = iVar4 == 0;
    if (bVar12) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (!bVar12) {
      LOCK();
      bVar12 = iVar4 == (int)plVar2[1];
      if (bVar12) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar12) {
        if (plVar2 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 0x260) != 0) {
            if (*(int *)(param_1 + 0x1d8) != 0) {
              puVar11 = *(undefined2 **)(param_1 + 0x1d0);
            }
            puVar6 = (undefined8 *)FUN_1420392d0(*(longlong *)(param_1 + 0x260),local_38,puVar11);
            *(undefined8 *)(param_1 + 0x270) = *puVar6;
            plVar8 = (longlong *)puVar6[1];
            plVar9 = *(longlong **)(param_1 + 0x278);
            if (plVar8 != plVar9) {
              if (plVar8 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
                UNLOCK();
                plVar9 = *(longlong **)(param_1 + 0x278);
              }
              if (plVar9 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)plVar9 + 0xc);
                iVar4 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar9 + 8))(plVar9,1);
                }
              }
              *(longlong **)(param_1 + 0x278) = plVar8;
            }
            if (local_30 != (longlong *)0x0) {
              LOCK();
              plVar8 = local_30 + 1;
              lVar3 = *plVar8;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)lVar3 == 1) {
                (**(code **)*local_30)(local_30);
                LOCK();
                piVar1 = (int *)((longlong)local_30 + 0xc);
                iVar4 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*local_30 + 8))(local_30,1);
                }
              }
            }
          }
          LOCK();
          plVar8 = plVar2 + 1;
          lVar3 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar12 = iVar4 == 0;
      if (bVar12) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x238);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar12 = iVar4 == 0;
    if (bVar12) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (!bVar12) {
      LOCK();
      bVar12 = iVar4 == (int)plVar2[1];
      if (bVar12) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar12) {
        if (plVar2 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 0x230) != 0) {
            uVar5 = FUN_14203aec0(*(longlong *)(param_1 + 0x230),"totalFrames");
            *(undefined4 *)(param_1 + 0x17c) = uVar5;
          }
          LOCK();
          plVar8 = plVar2 + 1;
          lVar3 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar12 = iVar4 == 0;
      if (bVar12) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x248);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar12 = iVar4 == 0;
    if (bVar12) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (!bVar12) {
      LOCK();
      bVar12 = iVar4 == (int)plVar2[1];
      if (bVar12) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar12) {
        if (plVar2 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 0x240) != 0) {
            uVar5 = FUN_14203aec0(*(longlong *)(param_1 + 0x240),"totalFrames");
            *(undefined4 *)(param_1 + 0x180) = uVar5;
          }
          LOCK();
          plVar8 = plVar2 + 1;
          lVar3 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar12 = iVar4 == 0;
      if (bVar12) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  plVar2 = *(longlong **)(param_1 + 600);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar12 = iVar4 == 0;
    if (bVar12) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (!bVar12) {
      LOCK();
      bVar12 = iVar4 == (int)plVar2[1];
      if (bVar12) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar12) {
        if (plVar2 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 0x250) != 0) {
            uVar5 = FUN_14203aec0(*(longlong *)(param_1 + 0x250),"totalFrames");
            *(undefined4 *)(param_1 + 0x184) = uVar5;
          }
          LOCK();
          plVar8 = plVar2 + 1;
          lVar3 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar12 = iVar4 == 0;
      if (bVar12) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x174) = 1;
  UNLOCK();
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_142eaff20(*(longlong *)(param_1 + 0x38),param_1);
  }
  return;
}



// FUNCTION 142efa8e0 FUN_142efa8e0 body=345 status=ok
// SIG undefined FUN_142efa8e0(void)

void FUN_142efa8e0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  FUN_142ef9f10();
  puVar5 = (undefined8 *)FUN_142085870(param_1,local_28,L"iconContainer");
  *(undefined8 *)(param_1 + 0x318) = *puVar5;
  plVar3 = (longlong *)puVar5[1];
  plVar6 = *(longlong **)(param_1 + 800);
  if (plVar3 != plVar6) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar6 = *(longlong **)(param_1 + 800);
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
    *(longlong **)(param_1 + 800) = plVar3;
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  puVar5 = (undefined8 *)FUN_142085870(param_1,local_18,L"currentValueContainer");
  *(undefined8 *)(param_1 + 0x328) = *puVar5;
  plVar3 = (longlong *)puVar5[1];
  plVar6 = *(longlong **)(param_1 + 0x330);
  if (plVar3 != plVar6) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar6 = *(longlong **)(param_1 + 0x330);
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
    *(longlong **)(param_1 + 0x330) = plVar3;
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_10 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)local_10 + 0xc);
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



// FUNCTION 142efaa40 FUN_142efaa40 body=3084 status=ok
// SIG undefined FUN_142efaa40(void)

void FUN_142efaa40(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  bool bVar14;
  double dVar15;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_208;
  undefined8 uStack_200;
  longlong local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  int local_1e0;
  longlong *local_1d8;
  int local_1d0;
  longlong *local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 local_190;
  longlong *local_188;
  undefined8 local_180;
  longlong local_178;
  undefined8 local_170;
  longlong *local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  longlong *local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong *local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60 [4];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b3e2d8) && (_Init_thread_header(&DAT_146b3e2d8), DAT_146b3e2d8 == -1))
  {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14673cb58,0);
    FGenericPlatformString::Memcpy(DAT_14673cb58,L"vertical",0x12);
    atexit((_func_5014 *)&LAB_143ec2010);
    _Init_thread_footer(&DAT_146b3e2d8);
  }
  FName::FName(&local_res18,L"BeginLeftSlide",1);
  FName::FName(&local_res20,L"BeginRightSlide",1);
  FName::FName(&local_res10,L"EndSlide",1);
  FUN_142ec3600(param_1);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_142eaff20(*(longlong *)(param_1 + 0x38),param_1);
  }
  local_1b8 = 0;
  local_1b0 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
  FGenericPlatformString::Memcpy(local_1b8,L"upOrLeftButton",0x1e);
  local_1c8 = (longlong *)0x0;
  local_1c0 = 0;
  local_a8 = 0;
  uVar7 = FUN_140f9a360(param_1,&local_1b8,0,6,&local_1c8);
  *(undefined8 *)(param_1 + 0x2d8) = uVar7;
  plVar9 = local_1c8;
  for (iVar13 = (int)local_1c0; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_1c8 != (longlong *)0x0) {
    FMemory::Free(local_1c8);
  }
  if (local_1b8 != 0) {
    FMemory::Free();
  }
  local_198 = 0;
  local_190 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
  FGenericPlatformString::Memcpy(local_198,L"downOrRightButton",0x24);
  local_1a8 = (longlong *)0x0;
  local_1a0 = 0;
  local_a0 = 0;
  uVar7 = FUN_140f9a360(param_1,&local_198,0,6,&local_1a8);
  *(undefined8 *)(param_1 + 0x2e0) = uVar7;
  plVar9 = local_1a8;
  for (iVar13 = (int)local_1a0; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_1a8 != (longlong *)0x0) {
    FMemory::Free(local_1a8);
  }
  if (local_198 != 0) {
    FMemory::Free();
  }
  local_178 = 0;
  local_170 = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
  FGenericPlatformString::Memcpy(local_178,L"thumb",0xc);
  local_188 = (longlong *)0x0;
  local_180 = 0;
  local_98 = 0;
  uVar7 = FUN_140f9a360(param_1,&local_178,0,6,&local_188);
  *(undefined8 *)(param_1 + 0x2e8) = uVar7;
  plVar9 = local_188;
  for (iVar13 = (int)local_180; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_188 != (longlong *)0x0) {
    FMemory::Free(local_188);
  }
  if (local_178 != 0) {
    FMemory::Free();
  }
  local_158 = 0;
  local_150 = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
  FGenericPlatformString::Memcpy(local_158,L"track",0xc);
  local_168 = (longlong *)0x0;
  local_160 = 0;
  local_90 = 0;
  uVar7 = FUN_140f9a360(param_1,&local_158,0,6,&local_168);
  *(undefined8 *)(param_1 + 0x2f0) = uVar7;
  plVar9 = local_168;
  for (iVar13 = (int)local_160; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_168 != (longlong *)0x0) {
    FMemory::Free(local_168);
  }
  if (local_158 != 0) {
    FMemory::Free();
  }
  local_138 = 0;
  local_130 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"sliderTrackButton",0x24);
  local_148 = (longlong *)0x0;
  local_140 = 0;
  local_88 = 0;
  cVar6 = FUN_140e98b90(param_1,param_1 + 0x2f8,&local_138,0,6,&local_148);
  plVar9 = local_148;
  for (iVar13 = (int)local_140; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_148 != (longlong *)0x0) {
    FMemory::Free(local_148);
  }
  if (local_138 != 0) {
    FMemory::Free();
  }
  if (cVar6 != '\0') {
    if (*(longlong *)(param_1 + 0x2e8) == 0) {
      local_118 = 0;
      local_110 = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
      FGenericPlatformString::Memcpy(local_118,L"thumb",0xc);
      local_128 = (longlong *)0x0;
      local_120 = 0;
      local_80 = 0;
      uVar7 = FUN_140f9a360(*(undefined8 *)(param_1 + 0x2f8),&local_118,0,6,&local_128);
      *(undefined8 *)(param_1 + 0x2e8) = uVar7;
      plVar9 = local_128;
      for (iVar13 = (int)local_120; iVar13 != 0; iVar13 = iVar13 + -1) {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 2;
      }
      if (local_128 != (longlong *)0x0) {
        FMemory::Free(local_128);
      }
      if (local_118 != 0) {
        FMemory::Free();
      }
    }
    if (*(longlong *)(param_1 + 0x2f0) == 0) {
      local_f8 = 0;
      local_f0 = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
      FGenericPlatformString::Memcpy(local_f8,L"track",0xc);
      local_108 = (longlong *)0x0;
      local_100 = 0;
      local_78 = 0;
      uVar7 = FUN_140f9a360(*(undefined8 *)(param_1 + 0x2f8),&local_f8,0,6,&local_108);
      *(undefined8 *)(param_1 + 0x2f0) = uVar7;
      plVar9 = local_108;
      for (iVar13 = (int)local_100; iVar13 != 0; iVar13 = iVar13 + -1) {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 2;
      }
      if (local_108 != (longlong *)0x0) {
        FMemory::Free(local_108);
      }
      if (local_f8 != 0) {
        FMemory::Free();
      }
    }
  }
  local_d8 = 0;
  local_d0 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  FGenericPlatformString::Memcpy(local_d8,L"maskFill",0x12);
  local_e8 = (longlong *)0x0;
  local_e0 = 0;
  local_70 = 0;
  uVar7 = FUN_140ecbdf0(param_1,&local_d8,0,6,&local_e8);
  *(undefined8 *)(param_1 + 0x300) = uVar7;
  plVar9 = local_e8;
  for (iVar13 = (int)local_e0; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free(local_e8);
  }
  if (local_d8 != 0) {
    FMemory::Free();
  }
  local_b8 = 0;
  local_b0 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
  FGenericPlatformString::Memcpy(local_b8,L"defaultValue",0x1a);
  local_c8 = (longlong *)0x0;
  local_c0 = 0;
  local_68 = 0;
  uVar7 = FUN_140ecbdf0(param_1,&local_b8,0,6,&local_c8);
  *(undefined8 *)(param_1 + 0x308) = uVar7;
  plVar9 = local_c8;
  for (iVar13 = (int)local_c0; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free(local_c8);
  }
  if (local_b8 != 0) {
    FMemory::Free();
  }
  if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_142efb171:
    plVar9 = &local_208;
    local_208 = (code *)0x0;
    uStack_200 = (longlong *)0x0;
    bVar4 = false;
    bVar14 = true;
    lVar10 = 0;
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar13 = *piVar1;
    if (iVar13 == 0) {
      *piVar1 = 0;
      iVar13 = 0;
    }
    UNLOCK();
    if (iVar13 < 1) goto LAB_142efb171;
    local_1f0 = *(longlong **)(param_1 + 0x30);
    local_1f8 = 0;
    if (local_1f0 == (longlong *)0x0) {
LAB_142efb15f:
      plVar9 = &local_1f8;
      bVar4 = true;
      bVar14 = false;
      lVar10 = local_1f8;
    }
    else {
      LOCK();
      iVar13 = (int)local_1f0[1];
      bVar14 = iVar13 == 0;
      if (bVar14) {
        *(int *)(local_1f0 + 1) = 0;
        iVar13 = 0;
      }
      UNLOCK();
      while (!bVar14) {
        LOCK();
        bVar14 = iVar13 == (int)local_1f0[1];
        if (bVar14) {
          *(int *)(local_1f0 + 1) = iVar13 + 1;
        }
        UNLOCK();
        if (bVar14) {
          if (local_1f0 != (longlong *)0x0) {
            local_1f8 = *(longlong *)(param_1 + 0x28);
          }
          goto LAB_142efb15f;
        }
        LOCK();
        iVar13 = (int)local_1f0[1];
        bVar14 = iVar13 == 0;
        if (bVar14) {
          *(int *)(local_1f0 + 1) = 0;
          iVar13 = 0;
        }
        UNLOCK();
      }
      plVar9 = &local_1f8;
      local_1f0 = (longlong *)0x0;
      bVar4 = true;
      bVar14 = false;
      lVar10 = 0;
    }
  }
  plVar3 = (longlong *)plVar9[1];
  plVar9[1] = 0;
  *plVar9 = 0;
  plVar9 = uStack_200;
  if ((bVar14) && (uStack_200 != (longlong *)0x0)) {
    LOCK();
    plVar2 = uStack_200 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*uStack_200)(uStack_200);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*uStack_200 + 8))(uStack_200,1);
      }
    }
  }
  plVar9 = local_1f0;
  if ((bVar4) && (local_1f0 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_1f0 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_1f0)(local_1f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_1f0 + 8))(local_1f0,1);
      }
    }
  }
  if (lVar10 != 0) {
    puVar8 = (undefined8 *)FUN_14203af90(lVar10,local_60,"ScrollDirection");
    puVar11 = &DAT_143f3eda8;
    puVar12 = &DAT_143f3eda8;
    if (DAT_14673cb60 != 0) {
      puVar12 = DAT_14673cb58;
    }
    if (*(int *)(puVar8 + 1) != 0) {
      puVar11 = (undefined2 *)*puVar8;
    }
    iVar13 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar12);
    if (local_60[0] != 0) {
      FMemory::Free();
    }
    if (iVar13 == 0) {
      *(undefined1 *)(param_1 + 0x338) = 1;
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar3 + 1;
    lVar10 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if (*(longlong *)(param_1 + 0x2f0) != 0) {
    if (*(char *)(param_1 + 0x338) == '\0') {
      dVar15 = (double)FUN_142eeea40();
    }
    else {
      dVar15 = (double)FUN_142eeca30();
    }
    *(float *)(param_1 + 0x314) = (float)dVar15;
  }
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    if (*(char *)(param_1 + 0x338) == '\0') {
      dVar15 = (double)FUN_142eeea40();
    }
    else {
      dVar15 = (double)FUN_142eeca30();
    }
    *(float *)(param_1 + 0x318) = (float)dVar15;
  }
  if (*(longlong *)(param_1 + 0x2f0) != 0) {
    uStack_200 = (longlong *)((ulonglong)uStack_200 & 0xffffffff00000000);
    local_1e8 = (longlong *)0x0;
    local_208 = FUN_142efdd80;
    plVar9 = (longlong *)FMemory::Realloc(0,0x30);
    local_1e0 = 3;
    local_1e8 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar9 + 1,param_1);
      *(undefined4 *)(plVar9 + 2) = (undefined4)local_208;
      *(undefined4 *)((longlong)plVar9 + 0x14) = local_208._4_4_;
      *(undefined4 *)(plVar9 + 3) = (undefined4)uStack_200;
      *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_200._4_4_;
      lVar10 = FDelegateHandle::GenerateNewID();
      plVar9[5] = lVar10;
      *plVar9 = (longlong)&PTR_FUN_143fcff08;
    }
    FUN_142ee1c00(*(undefined8 *)(param_1 + 0x2f0),PTR_s_mouseDown_14673cb00,param_1 + 0x358,
                  &local_1e8);
    if (local_1e0 != 0) {
      if (local_1e8 == (longlong *)0x0) goto LAB_142efb400;
      (**(code **)(*local_1e8 + 0x28))(local_1e8,0);
      if (local_1e8 != (longlong *)0x0) {
        local_1e8 = (longlong *)FMemory::Realloc(local_1e8,0,0);
      }
      local_1e0 = 0;
    }
    if (local_1e8 != (longlong *)0x0) {
      FMemory::Free(local_1e8);
    }
  }
LAB_142efb400:
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    uStack_200 = (longlong *)((ulonglong)uStack_200 & 0xffffffff00000000);
    local_1d8 = (longlong *)0x0;
    local_208 = FUN_142efd940;
    plVar9 = (longlong *)FMemory::Realloc(0,0x30);
    local_1d0 = 3;
    local_1d8 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar9 + 1,param_1);
      *(undefined4 *)(plVar9 + 2) = (undefined4)local_208;
      *(undefined4 *)((longlong)plVar9 + 0x14) = local_208._4_4_;
      *(undefined4 *)(plVar9 + 3) = (undefined4)uStack_200;
      *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_200._4_4_;
      lVar10 = FDelegateHandle::GenerateNewID();
      plVar9[5] = lVar10;
      *plVar9 = (longlong)&PTR_FUN_143fcff08;
    }
    FUN_142ee1c00(*(undefined8 *)(param_1 + 0x2e8),PTR_s_mouseDown_14673cb00,param_1 + 0x368,
                  &local_1d8);
    if (local_1d0 != 0) {
      if (local_1d8 == (longlong *)0x0) goto LAB_142efb4d4;
      (**(code **)(*local_1d8 + 0x28))(local_1d8,0);
      if (local_1d8 != (longlong *)0x0) {
        local_1d8 = (longlong *)FMemory::Realloc(local_1d8,0,0);
      }
      local_1d0 = 0;
    }
    if (local_1d8 != (longlong *)0x0) {
      FMemory::Free(local_1d8);
    }
  }
LAB_142efb4d4:
  lVar10 = *(longlong *)(param_1 + 0x2d8);
  if (lVar10 != 0) {
    FWeakObjectPtr::operator=(lVar10 + 0x1f0,param_1);
    *(undefined8 *)(lVar10 + 0x1f8) = local_res18;
    lVar10 = *(longlong *)(param_1 + 0x2d8);
    FWeakObjectPtr::operator=(lVar10 + 0x200,param_1);
    *(undefined8 *)(lVar10 + 0x208) = local_res10;
    lVar10 = *(longlong *)(param_1 + 0x2d8);
    FWeakObjectPtr::operator=(lVar10 + 0x220,param_1);
    *(undefined8 *)(lVar10 + 0x228) = local_res10;
  }
  lVar10 = *(longlong *)(param_1 + 0x2e0);
  if (lVar10 != 0) {
    FWeakObjectPtr::operator=(lVar10 + 0x1f0,param_1);
    *(undefined8 *)(lVar10 + 0x1f8) = local_res20;
    lVar10 = *(longlong *)(param_1 + 0x2e0);
    FWeakObjectPtr::operator=(lVar10 + 0x200,param_1);
    *(undefined8 *)(lVar10 + 0x208) = local_res10;
    lVar10 = *(longlong *)(param_1 + 0x2e0);
    FWeakObjectPtr::operator=(lVar10 + 0x220,param_1);
    *(undefined8 *)(lVar10 + 0x228) = local_res10;
  }
  plVar9 = *(longlong **)(param_1 + 0x308);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x278))(plVar9,0);
  }
  FUN_142f0fa80(param_1,0,0);
  return;
}



// FUNCTION 142efb650 FUN_142efb650 body=969 status=ok
// SIG undefined FUN_142efb650(void)

void FUN_142efb650(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  void *_Src;
  bool bVar3;
  bool bVar4;
  void *pvVar5;
  longlong *plVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  void *local_c8;
  int local_c0;
  int local_bc;
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  longlong *plStack_80;
  void *local_78;
  int local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  uint local_50;
  undefined8 local_48;
  undefined8 local_38;
  
  FUN_142ef9e70();
  local_68 = 0xffffffffffffffff;
  uStack_60 = 0xffffffffffffffff;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_142efb705:
    plVar10 = &local_88;
    local_88 = 0;
    plStack_80 = (longlong *)0x0;
    bVar4 = false;
    bVar3 = true;
    lVar9 = 0;
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar11 = *piVar1;
    if (iVar11 == 0) {
      *piVar1 = 0;
      iVar11 = 0;
    }
    UNLOCK();
    if (iVar11 < 1) goto LAB_142efb705;
    local_b0 = *(longlong **)(param_1 + 0x30);
    bVar4 = true;
    bVar3 = false;
    local_b8 = 0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      iVar11 = (int)local_b0[1];
      bVar13 = iVar11 == 0;
      if (bVar13) {
        *(int *)(local_b0 + 1) = 0;
        iVar11 = 0;
      }
      UNLOCK();
      while (!bVar13) {
        LOCK();
        bVar13 = iVar11 == (int)local_b0[1];
        if (bVar13) {
          *(int *)(local_b0 + 1) = iVar11 + 1;
        }
        UNLOCK();
        if (bVar13) {
          local_b8 = *(longlong *)(param_1 + 0x28);
          plVar10 = &local_b8;
          lVar9 = local_b8;
          goto LAB_142efb719;
        }
        LOCK();
        iVar11 = (int)local_b0[1];
        bVar13 = iVar11 == 0;
        if (bVar13) {
          *(int *)(local_b0 + 1) = 0;
          iVar11 = 0;
        }
        UNLOCK();
      }
      local_b0 = (longlong *)0x0;
    }
    plVar10 = &local_b8;
    lVar9 = 0;
  }
LAB_142efb719:
  plVar2 = (longlong *)plVar10[1];
  plVar10[1] = 0;
  plVar6 = plStack_80;
  local_a0 = plVar2;
  *plVar10 = 0;
  local_a8 = lVar9;
  if ((bVar3) && (plStack_80 != (longlong *)0x0)) {
    LOCK();
    plVar10 = plStack_80 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plStack_80 + 8))(plStack_80,1);
      }
    }
  }
  plVar10 = local_b0;
  if ((bVar4) && (local_b0 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_b0 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  lVar9 = local_a8;
  if ((local_a8 == 0) || (cVar7 = FUN_14203acd0(local_a8,"graphics",&local_68), cVar7 == '\0'))
  goto LAB_142efb989;
  local_98 = (longlong *)0x0;
  local_90 = 0;
  local_c0 = *(int *)(lVar9 + 0x30);
  lVar12 = (longlong)local_c0;
  _Src = *(void **)(lVar9 + 0x28);
  local_c8 = (void *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
            (&local_c8,(9 - (uint)(local_c0 != 0)) + local_c0,0);
  pvVar5 = local_c8;
  _guard_xfg_dispatch_icall_nop(local_c8,_Src,lVar12 * 2);
  iVar11 = local_c0;
  lVar12 = (longlong)local_c0;
  local_c0 = (9 - (uint)(local_c0 != 0)) + local_c0;
  local_78 = pvVar5;
  if (local_bc < local_c0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,iVar11);
    local_78 = local_c8;
  }
  lVar12 = lVar12 - (ulonglong)(iVar11 != 0);
  builtin_wcsncpy((wchar_t *)((longlong)local_78 + lVar12 * 2),L"graphics",8);
  *(undefined2 *)((longlong)local_78 + lVar12 * 2 + 0x10) = 0;
  local_70 = local_c0;
  uVar8 = UPlatformGameInstance::StaticClass();
  plVar10 = *(longlong **)(lVar9 + 0x80);
  local_38 = *(undefined8 *)(lVar9 + 0x78);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  lVar9 = FUN_14203ba40(local_38,uVar8,&local_68,&local_78,&local_98);
  if (lVar9 == 0) {
LAB_142efb90a:
    lVar9 = 0;
  }
  else {
    lVar12 = UPlatformGameInstance::StaticClass();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8)
        != lVar12 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_142efb90a;
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar10 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar10)(plVar10);
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
  *(longlong *)(param_1 + 0x170) = lVar9;
  if (local_78 != (void *)0x0) {
    FMemory::Free();
  }
  plVar10 = local_98;
  for (iVar11 = (int)local_90; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free(local_98);
  }
LAB_142efb989:
  plVar10 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_a0 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if ((local_50 >> 6 & 1) != 0) {
    (**(code **)(*local_58 + 0x10))(local_58,&local_68,local_48);
  }
  return;
}



// FUNCTION 142efba20 FUN_142efba20 body=356 status=ok
// SIG undefined FUN_142efba20(void)

void FUN_142efba20(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong **local_res8;
  longlong *local_28;
  undefined8 local_20;
  undefined1 *local_18;
  longlong ***ppplStack_10;
  
  FUN_1420e0a60(param_1,0);
  uVar3 = (**(code **)(*param_1 + 0x2a0))(param_1);
  uVar5 = 0;
  if (uVar3 != 0) {
    lVar4 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(uVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_142efba8d;
  }
  uVar3 = uVar5;
LAB_142efba8d:
  param_1[0x58] = uVar3;
  FUN_1420fd690(param_1);
  local_28 = (longlong *)0x0;
  local_20._0_4_ = 0;
  local_20 = 0;
  if (param_1[0x34] != 0) {
    local_res8 = &local_28;
    ppplStack_10 = &local_res8;
    local_18 = &LAB_142ee3650;
    FUN_1420f6930(param_1[0x34],&local_18,0);
  }
  uVar3 = (ulonglong)((longlong)(local_28 + (int)local_20) + (7 - (longlong)local_28)) >> 3;
  if (local_28 + (int)local_20 < local_28) {
    uVar3 = uVar5;
  }
  plVar6 = local_28;
  if (uVar3 != 0) {
    do {
      plVar1 = (longlong *)*plVar6;
      if (plVar1 != (longlong *)0x0) {
        plVar1[0x5e] = (longlong)param_1;
        plVar1[0x5f] = param_1[0x59];
        plVar1[0x60] = param_1[0x58];
        (**(code **)(*plVar1 + 0x498))();
      }
      plVar6 = plVar6 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar3);
  }
  FUN_142f28080(param_1);
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142efbba0 FUN_142efbba0 body=661 status=ok
// SIG undefined FUN_142efbba0(void)

void FUN_142efbba0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 local_res8;
  undefined8 local_res10;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  
  FName::FName(&local_res8,L"SpinLeft",1);
  FName::FName(&local_res10,L"SpinRight",1);
  FUN_142ec3600(param_1);
  local_30 = 0xb;
  local_38 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_38,0xb,"leftButton",0xb,0x3f);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  uVar2 = FUN_140f9a360(param_1,&local_38,0,6,&local_48);
  *(undefined8 *)(param_1 + 0x2f0) = uVar2;
  plVar4 = local_48;
  for (iVar3 = (int)local_40; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_40 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_48,0xc,"rightButton",0xc,0x3f);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  uVar2 = FUN_140f9a360(param_1,&local_48,0,6,&local_38);
  *(undefined8 *)(param_1 + 0x2f8) = uVar2;
  plVar4 = local_38;
  for (iVar3 = (int)local_30; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_40 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_48,0xb,"choiceText",0xb,0x3f);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  uVar2 = FUN_140ecc7d0(param_1,&local_48,0,6,&local_38);
  *(undefined8 *)(param_1 + 0x300) = uVar2;
  plVar4 = local_38;
  for (iVar3 = (int)local_30; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  lVar1 = *(longlong *)(param_1 + 0x2f0);
  if (lVar1 != 0) {
    FWeakObjectPtr::operator=(lVar1 + 0x1b0,param_1);
    *(undefined8 *)(lVar1 + 0x1b8) = local_res8;
  }
  lVar1 = *(longlong *)(param_1 + 0x2f8);
  if (lVar1 != 0) {
    FWeakObjectPtr::operator=(lVar1 + 0x1b0,param_1);
    *(undefined8 *)(lVar1 + 0x1b8) = local_res10;
  }
  return;
}



// FUNCTION 142efbe40 FUN_142efbe40 body=59 status=ok
// SIG undefined FUN_142efbe40(void)

void FUN_142efbe40(longlong param_1)

{
  char cVar1;
  
  FUN_142ef9e70();
  cVar1 = FUN_14208d2d0(param_1,param_1 + 0x170,L"textField");
  if (cVar1 != '\0') {
    FUN_142f04a10(param_1);
    return;
  }
  return;
}



// FUNCTION 142efbe80 FUN_142efbe80 body=237 status=ok
// SIG undefined FUN_142efbe80(void)

char FUN_142efbe80(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  char cVar3;
  
  cVar3 = '\0';
  if ((*(longlong *)(param_1 + 0x20) != 0) && (cVar1 = FUN_142ef0210(), cVar1 != '\0')) {
    return '\x01';
  }
  if ((((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146b3e2b8 == *param_2)) &&
      (*(longlong *)(param_1 + 8) != 0)) && (*(char *)(*(longlong *)(param_1 + 8) + 0x34) != '\0'))
  {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_142f001d0();
    }
    cVar3 = '\x01';
  }
  if (cVar3 == '\0') {
    param_1 = param_1 + 0x38;
    cVar1 = FWeakObjectPtr::IsValid(param_1);
    if ((cVar1 != '\0') && (*(char *)((longlong)param_2 + 0xc) == '\0')) {
      if (DAT_146b3e040 == *param_2) {
        uVar2 = FWeakObjectPtr::Get(param_1);
        FUN_142ee3a70(uVar2,2);
        return '\x01';
      }
      if (DAT_146b3e048 == *param_2) {
        uVar2 = FWeakObjectPtr::Get(param_1);
        FUN_142ee3a70(uVar2,3);
        return '\x01';
      }
    }
  }
  return cVar3;
}



// FUNCTION 142efbf70 FUN_142efbf70 body=130 status=ok
// SIG undefined FUN_142efbf70(void)

undefined8 FUN_142efbf70(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    cVar1 = FUN_142ef0210();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  if ((((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146b3e2b8 == *param_2)) &&
      (*(longlong *)(param_1 + 8) != 0)) && (*(char *)(*(longlong *)(param_1 + 8) + 0x34) != '\0'))
  {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_142f001d0();
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 142efc000 FUN_142efc000 body=54 status=ok
// SIG undefined FUN_142efc000(void)

void FUN_142efc000(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + -0x2b8);
  (**(code **)(*plVar1 + 0x498))(plVar1);
  FUN_142f38590(plVar1,param_2);
  return;
}



// FUNCTION 142efc060 FUN_142efc060 body=545 status=ok
// SIG undefined FUN_142efc060(void)

void FUN_142efc060(longlong param_1,byte param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined **local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  ushort local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined **local_c8;
  undefined1 local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  code *local_a8 [2];
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined4 local_68;
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    plVar3 = (longlong *)(param_1 + -0x2b8);
    cVar6 = FUN_142ef5430(plVar3);
    if ((cVar6 != '\0') && (*(char *)(*(longlong *)(param_1 + 8) + 0x31) != '\0')) {
      *(uint *)(*(longlong *)(param_1 + 0x10) + 0x6a8) =
           *(uint *)(*(longlong *)(param_1 + 0x10) + 0x6a8) & 0xfffffffe | (uint)param_2;
      if (param_2 == 0) {
        local_c8 = &PTR_FUN_1445c4dd0;
        local_c0 = 1;
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0xcc0))
                  (*(longlong **)(param_1 + 0x10),&local_c8);
        (**(code **)(*plVar3 + 0x288))(plVar3,3);
        lVar5 = *(longlong *)(param_1 + 0x18);
        if (lVar5 != 0) {
          local_28 = 0;
          local_18 = 0;
          puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_48);
          if (puVar7 != (undefined8 *)0x0) {
            puVar7[1] = lVar5;
            *puVar7 = &PTR_FUN_143f77b70;
          }
          local_58[0] = FUN_142ee38e0;
          FUN_14204c280(local_58);
        }
      }
      else {
        lVar5 = *(longlong *)(param_1 + 0x18);
        if (lVar5 != 0) {
          local_78 = 0;
          local_68 = 0;
          puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_98);
          if (puVar7 != (undefined8 *)0x0) {
            puVar7[1] = lVar5;
            *puVar7 = &PTR_FUN_143f77b70;
          }
          local_a8[0] = FUN_142ee37e0;
          FUN_14204c280(local_a8);
        }
        local_e0 = 0x100;
        local_f8 = &PTR_FUN_1445c4dc0;
        local_f0 = 0;
        uStack_e8 = 0;
        puVar7 = (undefined8 *)UWidget::TakeWidget(plVar3,local_b8);
        local_d8 = *puVar7;
        local_d0 = puVar7[1];
        if (local_d0 != 0) {
          LOCK();
          *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
          UNLOCK();
        }
        FInputModeGameAndUI::SetWidgetToFocus(&local_f8,&local_d8);
        if (local_b0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_b0 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_b0)(local_b0);
            LOCK();
            piVar2 = (int *)((longlong)local_b0 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_b0 + 8))(local_b0,1);
            }
          }
        }
        local_e0 = local_e0 & 0xff;
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0xcc0))
                  (*(longlong **)(param_1 + 0x10),&local_f8);
        (**(code **)(*plVar3 + 0x288))(plVar3,4);
        FUN_140e6b990(&local_f8);
      }
    }
  }
  return;
}



// FUNCTION 142efc290 FUN_142efc290 body=39 status=ok
// SIG undefined FUN_142efc290(void)

void FUN_142efc290(longlong param_1)

{
  FUN_142efc310();
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_142f001d0();
    return;
  }
  return;
}



// FUNCTION 142efc2c0 FUN_142efc2c0 body=80 status=ok
// SIG undefined FUN_142efc2c0(void)

void FUN_142efc2c0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  FUN_142efc310();
  (**(code **)(*(longlong *)(param_1 + -0x2b8) + 0x288))((longlong *)(param_1 + -0x2b8),4);
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x38);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x000142efc303. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x288))(plVar2,4);
    return;
  }
  return;
}



// FUNCTION 142efc310 FUN_142efc310 body=412 status=ok
// SIG undefined FUN_142efc310(void)

void FUN_142efc310(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  undefined8 local_48;
  longlong local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined **local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ushort local_10;
  
  if (param_1[3] != 0) {
    FUN_142f04290();
  }
  lVar4 = param_1[2];
  if ((lVar4 != 0) && (param_1[1] != 0)) {
    *(uint *)(lVar4 + 0x6a8) =
         *(uint *)(lVar4 + 0x6a8) ^
         ((uint)*(byte *)(param_1[1] + 0x31) ^ *(uint *)(lVar4 + 0x6a8)) & 1;
    cVar5 = (**(code **)(*param_1 + 0xf8))(param_1);
    if (((byte)(cVar5 - 1U) < 4) && (param_1[3] != 0)) {
      local_10 = 0x100;
      local_28 = &PTR_FUN_1445c4dc0;
      local_20 = 0;
      uStack_18 = 0;
      puVar6 = (undefined8 *)UWidget::TakeWidget(param_1 + -0x57,local_38);
      local_48 = *puVar6;
      local_40 = puVar6[1];
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
        UNLOCK();
      }
      FInputModeGameAndUI::SetWidgetToFocus(&local_28,&local_48);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)local_30 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
      local_10 = local_10 & 0xff;
      (**(code **)(*(longlong *)param_1[2] + 0xcc0))((longlong *)param_1[2],&local_28);
      FUN_142f0b330(param_1[3],1);
      FUN_140e6b990(&local_28);
    }
  }
  uVar7 = 1;
  if (param_1[3] != 0) {
    uVar7 = *(undefined1 *)(param_1[3] + 0xb8);
  }
  plVar1 = param_1 + -0x57;
  (**(code **)(*plVar1 + 0x498))(plVar1);
  FUN_142f38590(plVar1,uVar7);
  lVar4 = param_1[5];
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0xa2) != '\0')) {
    *(undefined1 *)(lVar4 + 0xa0) = 1;
    FUN_142ef1190();
  }
  (**(code **)(*plVar1 + 0x498))(plVar1);
  FUN_142f38450(plVar1);
  return;
}



// FUNCTION 142efc4b0 FUN_142efc4b0 body=128 status=ok
// SIG undefined FUN_142efc4b0(void)

void FUN_142efc4b0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x94) < 1) && (*(char *)(param_1 + 0x9a) == '\0')) {
    iVar1 = FUN_142eea230(param_1 + 0x58);
    if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x60))) {
      *(float *)(*(longlong *)(param_1 + 0x58) + 4 + (longlong)iVar1 * 0x28) =
           *(float *)(param_2 + 4) +
           *(float *)(*(longlong *)(param_1 + 0x58) + 4 + (longlong)iVar1 * 0x28);
      return;
    }
    FUN_142edc4f0(param_1 + 0x58,param_2);
  }
  return;
}



// FUNCTION 142efc530 FUN_142efc530 body=149 status=ok
// SIG undefined FUN_142efc530(void)

void FUN_142efc530(longlong *param_1)

{
  uint *puVar1;
  longlong lVar2;
  char cVar3;
  undefined **local_18;
  undefined1 local_10;
  
  FUN_142f384d0(param_1 + -0x57);
  lVar2 = param_1[5];
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0xa2) != '\0')) {
    *(undefined1 *)(lVar2 + 0xa0) = 0;
    FUN_142ef1190();
  }
  if ((param_1[2] != 0) && (param_1[1] != 0)) {
    puVar1 = (uint *)(param_1[2] + 0x6a8);
    *puVar1 = *puVar1 & 0xfffffffe;
    cVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
    if (((byte)(cVar3 - 1U) < 4) && (param_1[3] != 0)) {
      FUN_142f0b330(param_1[3],0);
      local_18 = &PTR_FUN_1445c4dd0;
      local_10 = 1;
      (**(code **)(*(longlong *)param_1[2] + 0xcc0))((longlong *)param_1[2],&local_18);
    }
  }
  return;
}



// FUNCTION 142efc5d0 FUN_142efc5d0 body=161 status=ok
// SIG undefined FUN_142efc5d0(void)

void FUN_142efc5d0(longlong param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b3e340) {
    _Init_thread_header(&DAT_146b3e340);
    if (DAT_146b3e340 == -1) {
      FName::FName(&DAT_146b3e338,L"Close",1);
      _Init_thread_footer(&DAT_146b3e340);
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_142f0d400(*(longlong *)(param_1 + 0x20),0,0);
  }
  FUN_142f38510(param_1 + -0x2b8);
                    /* WARNING: Could not recover jumptable at 0x000142efc62e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + -0x2b8) + 0x298))(param_1 + -0x2b8);
  return;
}



// FUNCTION 142efc680 FUN_142efc680 body=308 status=ok
// SIG undefined FUN_142efc680(void)

void FUN_142efc680(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 local_res8;
  
  FUN_142efc880();
  lVar5 = *(longlong *)(param_1 + 8);
  if (lVar5 == 0) {
    return;
  }
  lVar3 = FUN_142f320a0();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  plVar1 = (longlong *)(param_1 + -0x2b8);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(lVar5 + 0x60);
  (**(code **)(*plVar1 + 0x4a0))(plVar1,&local_res8);
  puVar4 = (undefined8 *)FUN_142eea7b0(plVar1,local_res8);
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  lVar5 = FUN_142eed320(plVar1,puVar4);
  if (lVar5 == 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x40) = *puVar4;
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     (lVar5 = FUN_142f02280(*(longlong *)(param_1 + 0x18),lVar5), lVar5 != 0)) {
    lVar3 = FUN_142f32150();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_142efc781;
  }
  lVar5 = 0;
LAB_142efc781:
  *(longlong *)(param_1 + 0x38) = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*plVar1 + 0x4a8))(plVar1,puVar4,lVar5,1);
  }
  return;
}



// FUNCTION 142efc7c0 FUN_142efc7c0 body=178 status=ok
// SIG undefined FUN_142efc7c0(void)

void FUN_142efc7c0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 == 0) goto LAB_142efc865;
  iVar1 = *(int *)(lVar4 + 0x48);
  if (iVar1 < 2) goto LAB_142efc865;
  if ((iVar1 + -2 < 0) || (iVar1 <= iVar1 + -2)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((bVar3) &&
     (plVar2 = *(longlong **)(*(longlong *)(lVar4 + 0x40) + -0x10 + (longlong)iVar1 * 8),
     plVar2 != (longlong *)0x0)) {
    lVar4 = (**(code **)(*plVar2 + 0x278))();
    if (lVar4 == 0) goto LAB_142efc852;
    lVar5 = UUGNewGameUW::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_142efc852;
  }
  else {
LAB_142efc852:
    lVar4 = 0;
  }
  FWeakObjectPtr::operator=(param_1 + 0x38,lVar4);
LAB_142efc865:
  FUN_142efc880(param_1);
  return;
}



// FUNCTION 142efc880 FUN_142efc880 body=492 status=ok
// SIG undefined FUN_142efc880(void)

void FUN_142efc880(longlong param_1)

{
  HWND hWnd;
  char cVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  HWND pHVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_res8;
  longlong local_res10;
  undefined1 *local_38;
  HWND *ppHStack_30;
  HWND local_28;
  longlong *local_20;
  longlong *local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b3e330) && (_Init_thread_header(&DAT_146b3e330), DAT_146b3e330 == -1))
  {
    FName::FName(&DAT_146b3e328,L"Open",1);
    _Init_thread_footer(&DAT_146b3e330);
  }
  hWnd = (HWND)(param_1 + -0x2b8);
  pHVar5 = UWidget::GetParent(hWnd);
  if ((*(longlong *)(param_1 + 8) != 0) && (pHVar5 == (HWND)0x0)) {
    cVar1 = *(char *)(*(longlong *)(param_1 + 8) + 0x33);
    *(char *)(param_1 + 0x34) = cVar1;
    if (cVar1 == '\x02') {
      lVar6 = *(longlong *)(param_1 + 0x18);
      *(undefined1 *)(param_1 + 0x34) = 1;
      if (lVar6 != 0) {
        iVar4 = *(int *)(lVar6 + 0x48) + -2;
        if ((((-1 < iVar4) && (iVar4 < *(int *)(lVar6 + 0x48))) &&
            (plVar2 = *(longlong **)(*(longlong *)(lVar6 + 0x40) + (longlong)iVar4 * 8),
            plVar2 != (longlong *)0x0)) && (lVar6 = (**(code **)(*plVar2 + 0x278))(), lVar6 != 0)) {
          lVar7 = UGPasswordResetPage::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((bVar3) && (*(longlong *)(lVar6 + 0x2c0) != 0)) {
            *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(lVar6 + 0x2ec);
          }
        }
      }
    }
    if (*(char *)(param_1 + 0x34) == '\0') {
      UUserWidget::AddToViewport(hWnd,*(undefined4 *)(param_1 + 0x30));
    }
    else if (*(char *)(param_1 + 0x34) == '\x01') {
      FUN_1420e0a60(hWnd,*(undefined4 *)(param_1 + 0x30));
    }
  }
  local_res10 = *(longlong *)(param_1 + -0x118);
  local_20 = &local_res8;
  local_18 = &local_res10;
  local_res8 = 0;
  local_28 = hWnd;
  if (local_res10 != 0) {
    ppHStack_30 = &local_28;
    local_38 = &LAB_142ee37c0;
    FUN_1420f6930(local_res10,&local_38,0);
    if ((local_res8 != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
      FUN_142f0d400(*(longlong *)(param_1 + 0x20),local_res8,0);
    }
  }
  FUN_142f38550(hWnd);
  return;
}



// FUNCTION 142efca80 FUN_142efca80 body=375 status=ok
// SIG undefined FUN_142efca80(void)

void FUN_142efca80(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  
  plVar7 = (longlong *)0x0;
  plVar5 = plVar7;
  if ((DAT_146b17150 != 0) &&
     (lVar3 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x148))(param_1 + -0x28), lVar3 != 0)) {
    uVar4 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x148))(param_1 + -0x28);
    plVar5 = (longlong *)
             UEngine::GetLocalPlayerFromControllerId
                       (DAT_146b17150,uVar4,*(undefined4 *)(param_2 + 8));
  }
  if (((*(char *)(param_1 + 0x9a) == '\0') ||
      (lVar3 = *(longlong *)
                (*(longlong *)(param_1 + 0x18) + -8 + (longlong)*(int *)(param_1 + 0x20) * 8),
      lVar3 == 0)) ||
     ((*(longlong *)(lVar3 + 0x28) != 0 &&
      ((*(longlong *)(lVar3 + 0x30) != 0 &&
       (cVar2 = (**(code **)(**(longlong **)(lVar3 + 0x30) + 0x170))(), cVar2 == '\0')))))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  uVar6 = 0;
  if ((0 < *(int *)(param_1 + 0x94)) ||
     (((plVar5 == (longlong *)0x0 &&
       ((((*(int *)(param_1 + 0x20) < 1 ||
          (lVar3 = *(longlong *)
                    (*(longlong *)(param_1 + 0x18) + -8 + (longlong)*(int *)(param_1 + 0x20) * 8),
          lVar3 == 0)) || (*(longlong *)(lVar3 + 0x28) == 0)) ||
        ((*(longlong *)(lVar3 + 0x30) == 0 ||
         (cVar2 = (**(code **)(**(longlong **)(lVar3 + 0x30) + 0x140))
                            (*(longlong **)(lVar3 + 0x30),param_2,local_res8), cVar2 == '\0'))))))
      || (bVar1)))) {
    param_1 = param_1 + 0x10;
    cVar2 = FWeakObjectPtr::IsValid(param_1);
    if (((cVar2 != '\0') && (lVar3 = FWeakObjectPtr::Get(param_1), *(int *)(lVar3 + 0x40) != 0)) &&
       ((*(longlong **)(lVar3 + 0x38) != (longlong *)0x0 &&
        (cVar2 = (**(code **)(**(longlong **)(lVar3 + 0x38) + 0x18))(), cVar2 != '\0')))) {
      if (*(char *)(param_2 + 0xc) != '\0') {
        if (*(char *)(param_2 + 0xc) != '\x02') {
          return;
        }
        uVar6 = 1;
      }
      lVar3 = FWeakObjectPtr::Get(param_1);
      if (*(int *)(lVar3 + 0x40) != 0) {
        plVar7 = *(longlong **)(lVar3 + 0x38);
      }
      (**(code **)(*plVar7 + 0x38))(plVar7,*(undefined4 *)(param_2 + 8),param_2 + 0x10,uVar6);
    }
  }
  else {
    FUN_142edc580(param_1 + 0x38,param_2);
  }
  return;
}



// FUNCTION 142efcc20 FUN_142efcc20 body=716 status=ok
// SIG undefined FUN_142efcc20(void)

void FUN_142efcc20(longlong param_1,longlong param_2,float *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  float *pfVar16;
  float *pfVar17;
  float fVar18;
  undefined8 *local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  fVar4 = param_3[2];
  if ((*(longlong *)(param_1 + 0x328) != 0) &&
     (*(int *)(*(longlong *)(param_1 + 0x328) + 0x120) != -1)) {
    fVar5 = *param_3;
    fVar6 = param_3[1];
    fVar18 = fVar5 * 0.5 * param_3[7];
    fVar7 = param_3[8];
    fVar8 = param_3[9];
    fVar9 = param_3[10];
    fVar10 = param_3[0xb];
    fVar11 = param_3[0xc];
    FUN_1420e2b20(fVar18,&local_88);
    lVar13 = local_88[1];
    *(undefined4 *)(lVar13 + 8) = 0;
    if (*(int *)(lVar13 + 0xc) != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar13,0);
    }
    *(float *)(param_1 + 0x348) = fVar6 * 0.5 * fVar8 + fVar18 + fVar10;
    *(float *)(param_1 + 0x34c) = fVar6 * 0.5 * fVar9 + fVar5 * 0.5 * fVar7 + fVar11;
    FUN_142f14920(param_1 + 0x330,*(undefined4 *)(param_2 + 0x28));
    pfVar16 = *(float **)(param_1 + 0x338);
    pfVar17 = pfVar16 + (longlong)*(int *)(param_1 + 0x340) * 7;
    puVar15 = local_88;
    for (; pfVar16 != pfVar17; pfVar16 = pfVar16 + 7) {
      local_68 = 0;
      uStack_60 = 0x3f80000000000000;
      local_88 = puVar15;
      FSlateVectorArtInstanceData::SetPosition
                (&local_68,CONCAT44(fVar4 * pfVar16[3] + pfVar16[1],fVar4 * pfVar16[2] + *pfVar16));
      setPxD6JointDriveForceLimit(&local_68,fVar4);
      plVar14 = (longlong *)local_88[1];
      iVar12 = (int)plVar14[1];
      *(int *)(plVar14 + 1) = iVar12 + 1;
      if (*(int *)((longlong)plVar14 + 0xc) < iVar12 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar12);
      }
      puVar3 = (undefined4 *)(*plVar14 + (longlong)iVar12 * 0x10);
      *puVar3 = (undefined4)local_68;
      puVar3[1] = local_68._4_4_;
      puVar3[2] = (undefined4)uStack_60;
      puVar3[3] = uStack_60._4_4_;
      puVar15 = local_88;
    }
    if (local_80 != (longlong *)0x0) {
      LOCK();
      if ((int)local_80[1] == 0) {
        *(int *)(local_80 + 1) = 0;
      }
      UNLOCK();
    }
    (**(code **)(*(longlong *)*puVar15 + 0x18))
              ((longlong *)*puVar15,*(undefined4 *)(puVar15[1] + 8));
    *(undefined1 *)((longlong)puVar15 + 0x14) = 1;
    local_70 = (longlong *)0x0;
    local_88 = (undefined8 *)0x0;
    local_78 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_80,&local_70);
    plVar14 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_80 + 1;
      lVar13 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)local_80 + 0xc);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
  }
  FUN_142111630(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 142efcef0 FUN_142efcef0 body=1093 status=ok
// SIG undefined FUN_142efcef0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_142efcef0(longlong *param_1,longlong param_2,undefined4 *param_3,float *param_4,
                 undefined8 param_5,int param_6,undefined8 param_7,char param_8)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  float *pfVar9;
  uint uVar10;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_2c8 [32];
  undefined8 local_2a8;
  int local_2a0;
  undefined8 local_298;
  undefined1 local_290;
  undefined1 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined8 local_260;
  undefined8 local_258;
  undefined4 *local_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined1 local_238 [16];
  undefined4 local_228;
  undefined1 local_224;
  float local_220;
  float local_21c;
  undefined8 local_218;
  undefined4 local_210;
  undefined1 local_20c;
  undefined1 local_20b;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  float fStack_1dc;
  float local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined1 local_1a0 [8];
  undefined1 local_198 [288];
  undefined1 *local_78;
  undefined8 local_70;
  undefined1 local_68;
  ulonglong local_60;
  longlong *plVar11;
  
  local_60 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  local_258 = param_5;
  local_260 = param_7;
  local_1a0[0] = DAT_1464b9ee8;
  plVar11 = (longlong *)0x0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  local_68 = 0;
  local_250 = param_3;
  (**(code **)(*param_1 + 0x200))(param_1,param_3,local_1a0);
  if (param_8 != '\0') {
    if ((((int)param_1[0x15] != 0) && ((longlong *)param_1[0x14] != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(*(longlong *)param_1[0x14] + 0x18))(), cVar4 != '\0')) {
      plVar7 = plVar11;
      if ((int)param_1[0x15] != 0) {
        plVar7 = (longlong *)param_1[0x14];
      }
      uVar5 = (**(code **)(*plVar7 + 0x38))();
      *(undefined1 *)(param_1 + 0x13) = uVar5;
    }
    local_288 = 1;
    if ((char)param_1[0x13] != '\0') goto LAB_142efcfe1;
  }
  local_288 = 0;
LAB_142efcfe1:
  local_2a0 = *(int *)(param_2 + 0x28);
  local_2a8 = *(undefined8 *)(param_2 + 0x20);
  FPaintArgs::FPaintArgs
            (local_238,param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x18));
  local_228 = *(undefined4 *)(param_2 + 0x10);
  local_224 = *(undefined1 *)(param_2 + 0x14);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  lVar3 = *(longlong *)(param_2 + 0x38);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar7 = (longlong *)CONCAT44(uStack_1fc,uStack_200);
  local_270 = (undefined4)uVar2;
  uStack_26c = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_268 = (undefined4)lVar3;
  uStack_264 = (undefined4)((ulonglong)lVar3 >> 0x20);
  local_1b0 = local_270;
  uStack_1ac = uStack_26c;
  uStack_1a8 = uStack_268;
  uStack_1a4 = uStack_264;
  local_208 = local_270;
  uStack_204 = uStack_26c;
  uStack_200 = uStack_268;
  uStack_1fc = uStack_264;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)(*plVar7 + 8))(plVar7,1);
    }
  }
  uVar5 = local_288;
  local_1f8 = *(undefined8 *)(param_2 + 0x40);
  local_20c = *(undefined1 *)(param_2 + 0x2c);
  local_20b = *(undefined1 *)(param_2 + 0x2d);
  plVar7 = plVar11;
  if (0 < (int)local_70) {
    do {
      fVar17 = *(float *)((longlong)param_1 + 0x23c) + param_4[3];
      puVar8 = local_198;
      if (local_78 != (undefined1 *)0x0) {
        puVar8 = local_78;
      }
      pfVar9 = (float *)(puVar8 + (longlong)plVar7);
      fVar16 = pfVar9[4];
      fVar15 = pfVar9[3];
      fVar13 = pfVar9[2] * pfVar9[1] + fVar16;
      fVar12 = pfVar9[2] * *pfVar9 + fVar15;
      fVar14 = fVar13;
      if (fVar16 <= fVar13) {
        fVar14 = fVar16;
      }
      if (fVar13 <= fVar16) {
        fVar13 = fVar16;
      }
      fVar16 = fVar15;
      if (fVar15 <= fVar12) {
        fVar16 = fVar12;
      }
      if (fVar12 <= fVar15) {
        fVar15 = fVar12;
      }
      if (fVar13 <= fVar17) {
        fVar17 = fVar13;
      }
      if (param_4[2] + *(float *)(param_1 + 0x47) <= fVar16) {
        fVar16 = param_4[2] + *(float *)(param_1 + 0x47);
      }
      fVar13 = param_4[1] + *(float *)((longlong)param_1 + 0x234);
      if (fVar14 <= fVar13) {
        fVar14 = fVar13;
      }
      if (fVar15 <= *param_4 + *(float *)(param_1 + 0x46)) {
        fVar15 = *param_4 + *(float *)(param_1 + 0x46);
      }
      iVar6 = param_6;
      if ((fVar17 < fVar14) || (fVar16 < fVar15)) {
        local_280 = 0;
        uStack_278 = 0;
        if (*(char *)(*(longlong *)(pfVar9 + 0xe) + 0x200) != '\0') {
          uStack_244 = local_250[8];
          uStack_240 = local_250[9];
          uStack_23c = local_250[10];
          uStack_1d4 = local_250[5];
          uStack_1d0 = local_250[6];
          local_248 = local_250[7];
          local_1e8 = *local_250;
          uStack_1e4 = local_250[1];
          uStack_1e0 = local_250[2];
          local_1d8 = (float)local_250[4] + local_21c;
          uStack_1b4 = (undefined4)((ulonglong)*(undefined8 *)(local_250 + 0xc) >> 0x20);
          fStack_1b8 = local_21c + (float)*(undefined8 *)(local_250 + 0xc);
          fStack_1dc = (float)local_250[3] + local_220;
          fStack_1bc = local_220 + (float)local_250[0xb];
          uStack_1cc = local_248;
          local_1c8 = uStack_244;
          uStack_1c4 = uStack_240;
          uStack_1c0 = uStack_23c;
          SWidget::ExecuteActiveTimers(*(longlong *)(pfVar9 + 0xe),local_218,local_210);
          (**(code **)(**(longlong **)(pfVar9 + 0xe) + 8))
                    (*(longlong **)(pfVar9 + 0xe),&local_1e8,(int)local_218,local_210);
        }
      }
      else {
        local_2a0 = param_6 + 1;
        local_290 = uVar5;
        local_298 = local_260;
        local_280 = CONCAT44(fVar14,fVar15);
        uStack_278 = CONCAT44(fVar17,fVar16);
        local_2a8 = local_258;
        iVar6 = FUN_14184f6c0(*(undefined8 *)(pfVar9 + 0xe),local_238,pfVar9,&local_280);
        if (iVar6 <= param_6) {
          iVar6 = param_6;
        }
      }
      param_6 = iVar6;
      uVar10 = (int)plVar11 + 1;
      plVar11 = (longlong *)(ulonglong)uVar10;
      plVar7 = plVar7 + 9;
    } while ((int)uVar10 < (int)local_70);
  }
  plVar11 = (longlong *)CONCAT44(uStack_1fc,uStack_200);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar6 == 1) && (plVar11 != (longlong *)0x0)) {
      (**(code **)(*plVar11 + 8))(plVar11,1);
    }
  }
  FUN_140456b10(local_198);
  return param_6;
}



// FUNCTION 142efd340 FUN_142efd340 body=86 status=ok
// SIG undefined FUN_142efd340(void)

void FUN_142efd340(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    uVar1 = FUN_142f26140();
    lVar2 = UObjectBaseUtility::GetInterfaceAddress(param_2,uVar1);
  }
  if (lVar2 == 0) {
    param_2 = *(longlong *)(param_1 + 0x5d8);
  }
  FWeakObjectPtr::operator=(param_1 + 0x61c,param_2);
  FUN_142f02af0(param_1);
  return;
}



// FUNCTION 142efd3a0 FUN_142efd3a0 body=767 status=ok
// SIG undefined FUN_142efd3a0(void)

void FUN_142efd3a0(longlong *param_1,float param_2,float param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 in_RDX;
  undefined *puVar8;
  longlong lVar9;
  bool bVar10;
  float fVar11;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  
  fVar11 = ABS(*(float *)(param_1 + 0x5e) - *(float *)((longlong)param_1 + 0x2f4));
  FUN_142f280c0(fVar11,in_RDX,param_3,1e-08 < fVar11,param_1 + 0x5b);
  lVar9 = param_1[0x36];
  lVar3 = lVar9 + (longlong)(int)param_1[0x37] * 0x18;
  for (; lVar9 != lVar3; lVar9 = lVar9 + 0x18) {
    if (((*(float *)(lVar9 + 8) <= param_3) && (param_3 <= *(float *)(lVar9 + 0xc))) &&
       (((param_2 < *(float *)(lVar9 + 8) && (*(char *)(lVar9 + 0x10) != '\0')) ||
        ((*(float *)(lVar9 + 0xc) < param_2 && (*(char *)(lVar9 + 0x11) != '\0')))))) {
      (**(code **)(*param_1 + 0x2b8))(param_1,lVar9);
    }
  }
  if ((param_1[0x4e] == 0) || (param_1[0x4f] == 0)) {
LAB_142efd500:
    local_50 = (longlong *)param_1[0x4d];
    local_58 = 0;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      iVar6 = (int)local_50[1];
      bVar10 = iVar6 == 0;
      if (bVar10) {
        *(int *)(local_50 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
      while (!bVar10) {
        LOCK();
        bVar10 = iVar6 == (int)local_50[1];
        if (bVar10) {
          *(int *)(local_50 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar10) {
          if (local_50 != (longlong *)0x0) {
            local_58 = param_1[0x4c];
          }
          goto LAB_142efd550;
        }
        LOCK();
        iVar6 = (int)local_50[1];
        bVar10 = iVar6 == 0;
        if (bVar10) {
          *(int *)(local_50 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
      }
      local_50 = (longlong *)0x0;
    }
LAB_142efd550:
    plVar7 = &local_58;
    bVar5 = false;
    bVar10 = true;
  }
  else {
    piVar1 = (int *)(param_1[0x4f] + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (iVar6 < 1) goto LAB_142efd500;
    local_40 = (longlong *)param_1[0x4f];
    local_48 = 0;
    if (local_40 == (longlong *)0x0) {
LAB_142efd4f3:
      plVar7 = &local_48;
      bVar5 = true;
      bVar10 = false;
    }
    else {
      LOCK();
      iVar6 = (int)local_40[1];
      bVar10 = iVar6 == 0;
      if (bVar10) {
        *(int *)(local_40 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
      while (!bVar10) {
        LOCK();
        bVar10 = iVar6 == (int)local_40[1];
        if (bVar10) {
          *(int *)(local_40 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar10) {
          if (local_40 != (longlong *)0x0) {
            local_48 = param_1[0x4e];
          }
          goto LAB_142efd4f3;
        }
        LOCK();
        iVar6 = (int)local_40[1];
        bVar10 = iVar6 == 0;
        if (bVar10) {
          *(int *)(local_40 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
      }
      local_40 = (longlong *)0x0;
      plVar7 = &local_48;
      bVar5 = true;
      bVar10 = false;
    }
  }
  lVar3 = *plVar7;
  plVar4 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = local_50;
  if ((bVar10) && (local_50 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_50 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  plVar7 = local_40;
  if ((bVar5) && (local_40 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (lVar3 != 0) {
    if ((char)param_1[0x56] == '\x01') {
      if ((param_2 <= param_3) ||
         (ABS(*(float *)(param_1 + 0x5e) - *(float *)((longlong)param_1 + 0x2f4)) <= 1e-08))
      goto LAB_142efd64d;
      puVar8 = &DAT_14598c054;
    }
    else {
      if ((char)param_1[0x56] != '\x02') goto LAB_142efd64d;
      puVar8 = &DAT_14598bf94;
    }
    FUN_14203e030(lVar3,puVar8);
  }
LAB_142efd64d:
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
  return;
}



// FUNCTION 142efd6a0 FUN_142efd6a0 body=204 status=ok
// SIG undefined FUN_142efd6a0(void)

void FUN_142efd6a0(longlong *param_1,float param_2,float param_3)

{
  longlong lVar1;
  undefined8 in_RDX;
  longlong lVar2;
  float fVar3;
  
  fVar3 = ABS(*(float *)(param_1 + 0x73) - *(float *)((longlong)param_1 + 0x39c));
  FUN_142f323f0(fVar3,in_RDX,param_3,1e-08 < fVar3,param_1 + 0x70);
  lVar2 = param_1[99];
  lVar1 = lVar2 + (longlong)(int)param_1[100] * 0x18;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    if (((*(float *)(lVar2 + 8) <= param_3) && (param_3 <= *(float *)(lVar2 + 0xc))) &&
       (((param_2 < *(float *)(lVar2 + 8) && (*(char *)(lVar2 + 0x10) != '\0')) ||
        ((*(float *)(lVar2 + 0xc) < param_2 && (*(char *)(lVar2 + 0x11) != '\0')))))) {
      (**(code **)(*param_1 + 0x4b8))(param_1,lVar2);
    }
  }
  return;
}



// FUNCTION 142efd770 FUN_142efd770 body=173 status=ok
// SIG undefined FUN_142efd770(void)

void FUN_142efd770(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)0x0;
  plVar5 = *(longlong **)(param_1 + 0x40);
  plVar6 = (longlong *)((longlong)*(int *)(param_1 + 0x48) & 0x1fffffffffffffff);
  if (plVar5 + *(int *)(param_1 + 0x48) < plVar5) {
    plVar6 = plVar7;
  }
  plVar4 = plVar7;
  if (plVar6 != (longlong *)0x0) {
    do {
      lVar1 = *plVar5;
      if ((((lVar1 != 0) && (*(longlong *)(lVar1 + 0x28) != 0)) &&
          (*(longlong *)(lVar1 + 0x30) != 0)) &&
         (cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x30) + 0x158))
                            (*(longlong **)(lVar1 + 0x30),param_2), cVar2 != '\0')) {
        plVar3 = plVar7;
        if (*(longlong *)(lVar1 + 0x28) != 0) {
          plVar3 = *(longlong **)(lVar1 + 0x30);
        }
        (**(code **)(*plVar3 + 0x150))(plVar3,param_2);
      }
      plVar5 = plVar5 + 1;
      plVar4 = (longlong *)((longlong)plVar4 + 1);
    } while (plVar4 != plVar6);
  }
  return;
}



// FUNCTION 142efd820 FUN_142efd820 body=34 status=ok
// SIG undefined FUN_142efd820(void)

void FUN_142efd820(longlong param_1)

{
  FWeakObjectPtr::operator=(param_1 + 0x614);
  FUN_142f02af0(param_1);
  return;
}



// FUNCTION 142efd850 FUN_142efd850 body=233 status=ok
// SIG undefined FUN_142efd850(void)

void FUN_142efd850(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res10 [2];
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  local_res10[0] = 0xffffffff;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_14170c210(local_res10);
  }
  FWeakObjectPtr::operator=(&local_res8,param_1);
  uVar2 = local_res10[0];
  local_res10[0] = 0xffffffff;
  local_48 = 0;
  local_38 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_68);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1459930e8;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
    *(undefined4 *)(puVar1 + 3) = uVar2;
    uVar2 = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = param_2;
  }
  local_78[0] = &LAB_142ee3820;
  FUN_14208c5d0(param_1,local_78);
  FUN_1416f8340(uVar2);
  FUN_1416f8340(local_res10[0]);
  return;
}



// FUNCTION 142efd940 FUN_142efd940 body=991 status=ok
// SIG undefined FUN_142efd940(void)

void FUN_142efd940(longlong param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 local_res8 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20;
  undefined4 local_res24;
  longlong *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  longlong *local_e8;
  int local_e0;
  float local_d8;
  float local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  longlong *local_c0;
  uint local_b8;
  double local_b0;
  code *local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong *local_80;
  uint local_78;
  double local_70;
  
  if (*(longlong *)(param_1 + 0x2e8) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x2f8) == 0) {
    return;
  }
  local_90 = 0xffffffffffffffff;
  uStack_88 = 0xffffffffffffffff;
  local_80 = (longlong *)0x0;
  local_78 = 0;
  local_d0 = 0xffffffffffffffff;
  uStack_c8 = 0xffffffffffffffff;
  local_c0 = (longlong *)0x0;
  local_b8 = 0;
  cVar3 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))
                    (*(longlong **)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20),"stageX",
                     &local_90,((byte)*(undefined4 *)(param_2 + 0x18) & 0x8f) == 10);
  if ((cVar3 == '\0') ||
     (cVar3 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))
                        (*(longlong **)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20),"stageY",
                         &local_d0,((byte)*(undefined4 *)(param_2 + 0x18) & 0x8f) == 10),
     dVar2 = local_70, dVar1 = local_b0, cVar3 == '\0')) goto LAB_142efdcc6;
  *(undefined1 *)(param_1 + 800) = 1;
  FUN_142087ad0(*(undefined8 *)(param_1 + 0x2e8),local_res8,local_res18);
  local_res20 = local_res8[0];
  local_res24 = local_res18[0];
  FUN_142ef62c0(*(undefined8 *)(param_1 + 0x2f8),&local_d8,&local_res20);
  *(float *)(param_1 + 0x330) = (float)((double)local_d8 - dVar2);
  *(float *)(param_1 + 0x334) = (float)((double)local_d4 - dVar1);
  if ((*(longlong *)(param_1 + 0x38) == 0) || (lVar4 = FUN_142eb7f00(), lVar4 == 0))
  goto LAB_142efdcc6;
  local_f8 = (longlong *)&LAB_142efcc00;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x370) = 0;
  iStack_f0 = 0;
  local_e8 = (longlong *)0x0;
  plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_e0 = 3;
  local_e8 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar5 + 1,param_1);
    plVar5[2] = (longlong)local_f8;
    plVar5[3] = CONCAT44(uStack_ec,iStack_f0);
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[5] = lVar6;
    *plVar5 = (longlong)&PTR_FUN_143fcff08;
  }
  FUN_142ee1c00(lVar4,PTR_s_mouseMove_14673cb08,param_1 + 0x350,&local_e8);
  if (local_e0 == 0) {
LAB_142efdbcd:
    if (local_e8 != (longlong *)0x0) {
      FMemory::Free(local_e8);
    }
  }
  else if (local_e8 != (longlong *)0x0) {
    (**(code **)(*local_e8 + 0x28))(local_e8,0);
    if (local_e8 != (longlong *)0x0) {
      local_e8 = (longlong *)FMemory::Realloc(local_e8,0,0);
    }
    local_e0 = 0;
    goto LAB_142efdbcd;
  }
  uStack_98 = 0;
  local_f8 = (longlong *)0x0;
  local_a0 = FUN_142efdd20;
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  iStack_f0 = 3;
  local_f8 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)IDelegateInstance::vftable;
    *plVar5 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar5 + 1,param_1);
    plVar5[2] = (longlong)local_a0;
    plVar5[3] = CONCAT44(uStack_94,uStack_98);
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[5] = lVar6;
    *plVar5 = (longlong)&PTR_FUN_143fcff08;
  }
  FUN_142ee1c00(lVar4,PTR_s_mouseUp_14673cb10,param_1 + 0x370,&local_f8);
  if (iStack_f0 != 0) {
    if (local_f8 == (longlong *)0x0) goto LAB_142efdcc6;
    (**(code **)(*local_f8 + 0x28))(local_f8,0);
    if (local_f8 != (longlong *)0x0) {
      local_f8 = (longlong *)FMemory::Realloc(local_f8,0,0);
    }
    iStack_f0 = 0;
  }
  if (local_f8 != (longlong *)0x0) {
    FMemory::Free(local_f8);
  }
LAB_142efdcc6:
  if ((local_b8 >> 6 & 1) != 0) {
    (**(code **)(*local_c0 + 0x10))(local_c0,&local_d0,local_b0);
    local_c0 = (longlong *)0x0;
  }
  local_b8 = 0;
  if ((local_78 >> 6 & 1) != 0) {
    (**(code **)(*local_80 + 0x10))(local_80,&local_90,local_70);
  }
  return;
}



// FUNCTION 142efdd20 FUN_142efdd20 body=91 status=ok
// SIG undefined FUN_142efdd20(void)

void FUN_142efdd20(longlong param_1)

{
  longlong lVar1;
  
  *(undefined1 *)(param_1 + 800) = 0;
  FUN_142ed3cf0(param_1,0);
  if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar1 = FUN_142eb7f00(), lVar1 != 0)) {
    FUN_142f06340(lVar1,param_1 + 0x350);
    FUN_142f06340(lVar1,param_1 + 0x370);
  }
  return;
}



// FUNCTION 142efdd80 FUN_142efdd80 body=292 status=ok
// SIG undefined FUN_142efdd80(void)

void FUN_142efdd80(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *local_28;
  int local_20;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_142f0f800();
  if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar1 = FUN_142eb7f00(), lVar1 != 0)) {
    uStack_10 = 0;
    local_18 = FUN_142efdeb0;
    local_28 = (longlong *)0x0;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    local_20 = 3;
    local_28 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = (undefined4)local_18;
      *(undefined4 *)((longlong)plVar2 + 0x14) = local_18._4_4_;
      *(undefined4 *)(plVar2 + 3) = uStack_10;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_c;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar3;
      *plVar2 = (longlong)&PTR_FUN_143fcff08;
    }
    FUN_142ee1c00(lVar1,PTR_s_mouseUp_14673cb10,param_1 + 0x360,&local_28);
    if (local_20 != 0) {
      if (local_28 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_28 + 0x28))(local_28,0);
      if (local_28 != (longlong *)0x0) {
        local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
      }
      local_20 = 0;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  return;
}



// FUNCTION 142efdeb0 FUN_142efdeb0 body=84 status=ok
// SIG undefined FUN_142efdeb0(void)

void FUN_142efdeb0(longlong param_1)

{
  longlong lVar1;
  
  FUN_142ed3cf0(param_1,0);
  if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar1 = FUN_142eb7f00(), lVar1 != 0)) {
    FUN_142f06340(lVar1,param_1 + 0x350);
    FUN_142f06340(lVar1,param_1 + 0x360);
  }
  return;
}



// FUNCTION 142efdf10 FUN_142efdf10 body=457 status=ok
// SIG undefined FUN_142efdf10(void)

/* WARNING: Removing unreachable block (ram,0x000142efe079) */
/* WARNING: Removing unreachable block (ram,0x000142efe092) */
/* WARNING: Removing unreachable block (ram,0x000142efe0a4) */
/* WARNING: Removing unreachable block (ram,0x000142efe0af) */

void FUN_142efdf10(longlong param_1,float param_2)

{
  float *pfVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  undefined1 local_48 [64];
  
  iVar2 = *(int *)(param_1 + 0x310);
  fVar9 = param_2;
  if (0 < iVar2) {
    pfVar7 = *(float **)(param_1 + 0x308);
    fVar8 = *pfVar7;
    iVar6 = 1;
    do {
      fVar9 = param_2;
      if ((((ABS(param_2 - fVar8) < 0.0001) || (fVar9 = fVar8, param_2 < fVar8)) || (iVar6 < 0)) ||
         ((iVar2 <= iVar6 || (pfVar1 = pfVar7 + 1, param_2 < (*pfVar1 - fVar8) * 0.5 + fVar8))))
      break;
      pfVar7 = pfVar7 + 1;
      bVar4 = iVar6 < iVar2;
      fVar8 = *pfVar1;
      fVar9 = param_2;
      iVar6 = iVar6 + 1;
    } while (bVar4);
  }
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    FUN_142136670();
  }
  fVar8 = 0.0;
  if ((0.0 <= fVar9) && (fVar8 = fVar9, 1.0 <= fVar9)) {
    fVar8 = 1.0;
  }
  fVar8 = (1.0 - fVar8) * *(float *)(param_1 + 0x2f4) + fVar8 * *(float *)(param_1 + 0x2f8);
  if (*(char *)(param_1 + 0x2fc) != '\0') {
    fVar8 = (float)((int)ROUND(fVar8 + fVar8 + 0.5) >> 1);
  }
  if (fVar8 != *(float *)(param_1 + 0x304)) {
    *(float *)(param_1 + 0x304) = fVar8;
    *(float *)(param_1 + 0x300) = fVar9;
    if (*(longlong **)(param_1 + 0x220) != (longlong *)0x0) {
      lVar3 = **(longlong **)(param_1 + 0x220);
      uVar5 = FText::AsNumber(local_48);
      (**(code **)(lVar3 + 0x2d0))(*(undefined8 *)(param_1 + 0x220),uVar5);
    }
    FUN_140757f80(param_1 + 0x2b8,param_1);
  }
  return;
}



// FUNCTION 142efe0e0 FUN_142efe0e0 body=289 status=ok
// SIG undefined FUN_142efe0e0(void)

void FUN_142efe0e0(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong local_18;
  longlong *local_10;
  
  *(bool *)(param_1 + 8) = param_2 == 1;
  if (param_2 != 1) {
    uVar7 = 0;
    plVar8 = *(longlong **)(param_1 + 0x10);
    uVar9 = (longlong)*(int *)(param_1 + 0x18) & 0x1fffffffffffffff;
    if (plVar8 + *(int *)(param_1 + 0x18) < plVar8) {
      uVar9 = uVar7;
    }
    if (uVar9 != 0) {
      do {
        plVar4 = (longlong *)*plVar8;
        if ((plVar4 != (longlong *)0x0) &&
           (cVar6 = (**(code **)(*plVar4 + 0x480))(plVar4), cVar6 != '\0')) {
          FUN_140ad4c90(plVar4,&local_18);
          if (local_18 != 0) {
            LOCK();
            cVar6 = *(char *)(local_18 + 0x30);
            if (cVar6 == '\0') {
              *(char *)(local_18 + 0x30) = '\0';
              cVar6 = '\0';
            }
            UNLOCK();
            if (cVar6 == '\x05') {
              FUN_142ed3fc0(plVar4,&DAT_1468b5b70);
            }
          }
          plVar4 = local_10;
          if (local_10 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_10 + 1;
            lVar5 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*local_10)(local_10);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_10 + 8))(local_10,1);
              }
            }
          }
        }
        plVar8 = plVar8 + 1;
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar9);
    }
  }
  return;
}



// FUNCTION 142efe210 FUN_142efe210 body=278 status=ok
// SIG undefined FUN_142efe210(void)

void FUN_142efe210(longlong param_1,float param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  float fVar6;
  float local_28;
  float local_24;
  float local_20;
  
  if (*(char *)(param_1 + 8) != '\0') {
    cVar1 = FUN_14044af00(param_1 + 0x20,0);
    if (cVar1 != '\0') {
      uVar2 = FWeakObjectPtr::Get(param_1 + 0x20);
      fVar6 = (float)FUN_14222dcf0(uVar2);
      param_2 = param_2 * fVar6;
    }
    local_28 = DAT_1468b5d90;
    local_24 = DAT_1468b5d94;
    local_20 = DAT_1468b5d98;
    FUN_142f14cf0(param_1,param_2,&local_28);
    if (((local_28 != 0.0) || (local_24 != 0.0)) || (local_20 != 0.0)) {
      puVar3 = *(undefined8 **)(param_1 + 0x10);
      uVar4 = 0;
      uVar5 = (longlong)*(int *)(param_1 + 0x18) & 0x1fffffffffffffff;
      if (puVar3 + *(int *)(param_1 + 0x18) < puVar3) {
        uVar5 = uVar4;
      }
      if (uVar5 != 0) {
        do {
          FUN_142ee2660(param_1,*puVar3,&local_28);
          uVar4 = uVar4 + 1;
          puVar3 = puVar3 + 1;
        } while (uVar4 != uVar5);
      }
    }
  }
  return;
}



// FUNCTION 142efe330 FUN_142efe330 body=394 status=ok
// SIG undefined FUN_142efe330(void)

void FUN_142efe330(longlong param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  *(undefined1 *)(param_1 + 0x2e8) = 0;
  if (*(char *)(param_1 + 0x2e9) != '\0') {
    *(undefined1 *)(param_1 + 0x2e8) = 1;
    if (*(char *)(param_1 + 0x2c8) == '\0') {
      fVar3 = (float)FMath::FInterpTo(*(undefined4 *)(param_1 + 0x2e0),
                                      *(undefined4 *)(param_1 + 0x2e4),param_2,
                                      *(float *)(param_1 + 0x2b8) * *(float *)(param_1 + 700));
      *(float *)(param_1 + 0x2e0) = fVar3;
      fVar3 = fVar3 * param_2 + *(float *)(param_1 + 0x2d0);
      *(float *)(param_1 + 0x2d0) = fVar3;
      if ((*(char *)(param_1 + 0x2ea) == '\0') &&
         (ABS(fVar3 - *(float *)(param_1 + 0x2d4)) < *(float *)(param_1 + 700) * 0.2)) {
        *(undefined1 *)(param_1 + 0x2ea) = 1;
        uVar1 = *(uint *)(param_1 + 0x2c4);
        if (*(float *)(param_1 + 0x2e4) <= 0.0) {
          uVar1 = uVar1 ^ 0x80000000;
        }
        *(uint *)(param_1 + 0x2e4) = uVar1;
      }
    }
    else {
      fVar3 = *(float *)(param_1 + 0x2d0);
      fVar2 = *(float *)(param_1 + 0x2cc);
      if (*(float *)(param_1 + 0x2d4) <= fVar3 && fVar3 != *(float *)(param_1 + 0x2d4)) {
        fVar2 = -fVar2;
      }
      *(float *)(param_1 + 0x2e4) = fVar2;
      fVar3 = fVar2 * param_2 + fVar3;
      *(float *)(param_1 + 0x2d0) = fVar3;
    }
    if (((0.0 < *(float *)(param_1 + 0x2e4)) &&
        (fVar2 = *(float *)(param_1 + 0x2d4), fVar2 <= fVar3)) ||
       ((*(float *)(param_1 + 0x2e4) < 0.0 && (fVar2 = *(float *)(param_1 + 0x2d4), fVar3 <= fVar2))
       )) {
      *(float *)(param_1 + 0x2d0) = fVar2;
      *(undefined1 *)(param_1 + 0x2e9) = 0;
      *(undefined4 *)(param_1 + 0x2e0) = 0;
    }
  }
  FUN_142edbed0(param_1);
  FUN_142ee43f0(param_1,*(undefined4 *)(param_1 + 0x2d0));
  return;
}



// FUNCTION 142efe4c0 FUN_142efe4c0 body=250 status=ok
// SIG undefined FUN_142efe4c0(void)

void FUN_142efe4c0(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  bVar2 = 1e-08 < ABS(*(float *)(param_1 + 0x5e) - *(float *)((longlong)param_1 + 0x2f4));
  if (bVar2) {
    FUN_142f12fb0(param_1 + 0x5b);
    LOCK();
    *(undefined4 *)((longlong)param_1 + 0x174) = 1;
    UNLOCK();
  }
  LOCK();
  iVar1 = *(int *)((longlong)param_1 + 0x174);
  *(int *)((longlong)param_1 + 0x174) = 0;
  UNLOCK();
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x2a8))(param_1);
  }
  if ((bVar2) && (ABS(*(float *)(param_1 + 0x5e) - *(float *)((longlong)param_1 + 0x2f4)) <= 1e-08))
  {
    if (param_1[0x58] != 0) {
      lVar3 = FWeakObjectPtr::Get(param_1 + 0x57);
      if (lVar3 != 0) {
        lVar3 = UObject::FindFunction(lVar3,param_1[0x58]);
        if (lVar3 != 0) {
          plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x57);
          uVar5 = FUN_14178ac60(plVar4,param_1[0x58]);
          (**(code **)(*plVar4 + 0x208))(plVar4,uVar5,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 142efe5c0 FUN_142efe5c0 body=307 status=ok
// SIG undefined FUN_142efe5c0(void)

void FUN_142efe5c0(longlong param_1,float param_2)

{
  float fVar1;
  
  *(float *)(param_1 + 0x34c) = param_2 + *(float *)(param_1 + 0x34c);
  if (*(char *)(param_1 + 0x339) == '\x01') {
    if (*(int *)(param_1 + 0x324) < 2) {
      fVar1 = *(float *)(param_1 + 0x31c);
    }
    else {
      fVar1 = 1.0 / (float)(*(int *)(param_1 + 0x324) + -1);
    }
    fVar1 = *(float *)(param_1 + 0x310) - fVar1;
    if (*(int *)(param_1 + 0x328) < 1) {
      FUN_142f0fa80(param_1,fVar1,1);
      return;
    }
    *(int *)(param_1 + 0x32c) = *(int *)(param_1 + 0x32c) + 1;
    if ((*(int *)(param_1 + 0x32c) < 1) || (*(int *)(param_1 + 0x328) < *(int *)(param_1 + 0x32c)))
    {
LAB_142efe6bf:
      FUN_142f0fa80(param_1,fVar1,1);
      *(undefined4 *)(param_1 + 0x32c) = 0;
      return;
    }
  }
  else if (*(char *)(param_1 + 0x339) == '\x02') {
    if (*(int *)(param_1 + 0x324) < 2) {
      fVar1 = *(float *)(param_1 + 0x31c);
    }
    else {
      fVar1 = 1.0 / (float)(*(int *)(param_1 + 0x324) + -1);
    }
    fVar1 = *(float *)(param_1 + 0x310) + fVar1;
    if (*(int *)(param_1 + 0x328) < 1) {
      FUN_142f0fa80(param_1,fVar1,1);
      return;
    }
    *(int *)(param_1 + 0x32c) = *(int *)(param_1 + 0x32c) + 1;
    if ((*(int *)(param_1 + 0x32c) < 1) || (*(int *)(param_1 + 0x328) < *(int *)(param_1 + 0x32c)))
    goto LAB_142efe6bf;
  }
  return;
}



// FUNCTION 142efe720 FUN_142efe720 body=1390 status=ok
// SIG undefined FUN_142efe720(void)

void FUN_142efe720(ulonglong param_1,uint param_2,uint param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int *piVar6;
  uint uVar7;
  char *pcVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint local_res10 [2];
  byte local_res18;
  ulonglong local_res20;
  undefined4 local_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  uint uStack_ac;
  ulonglong local_a8;
  ulonglong local_a0;
  int local_98;
  undefined8 local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int local_78;
  int local_74;
  ulonglong local_70;
  int *local_68;
  int *local_60;
  uint *local_58;
  longlong *local_50;
  
  if (param_2 != param_3) {
    iVar17 = *(int *)(param_1 + 0x280);
    local_90 = CONCAT44(local_90._4_4_,param_2);
    if (iVar17 != 0) {
      local_74 = iVar17 + -1;
      local_78 = *(int *)(param_1 + 0x388) * *(int *)(param_1 + 900);
      local_68 = &local_78;
      local_60 = &local_74;
      local_a0 = param_1;
      local_58 = local_res10;
      local_50 = (longlong *)&local_a0;
      local_98 = iVar17;
      if ((int)(local_78 + param_2 + -1) <= local_74) {
        local_98 = local_78 + param_2;
      }
      local_98 = local_98 + -1;
      uStack_b0 = CONCAT31(uStack_b0._1_3_,1);
      uStack_ac = local_98;
      local_88 = CONCAT31(local_88._1_3_,1);
      if ((int)(local_78 + param_3 + -1) <= local_74) {
        iVar17 = local_78 + param_3;
      }
      uStack_84 = param_3;
      uStack_7c = iVar17 - 1;
      uStack_80 = CONCAT31(uStack_80._1_3_,1);
      uVar9 = 0;
      uStack_b4 = 0;
      if (local_98 < (int)param_2) {
        local_res18 = 0;
        cVar1 = '\0';
        uVar10 = uVar9;
      }
      else if ((int)uStack_7c < (int)param_3) {
        local_res18 = 0;
        uStack_b4 = 0;
        cVar1 = '\0';
        uVar10 = 0;
      }
      else {
        pcVar8 = (char *)&uStack_b0;
        if ((int)uStack_7c <= local_98) {
          pcVar8 = (char *)&uStack_80;
        }
        cVar1 = *pcVar8;
        uVar10 = (ulonglong)*(uint *)(pcVar8 + 4);
        uStack_b4 = param_3;
        if ((int)param_3 < (int)param_2) {
          uStack_b4 = param_2;
        }
        local_res18 = 1;
      }
      local_res20 = CONCAT71(local_res20._1_7_,cVar1);
      uStack_ac = (uint)uVar10;
      local_a8 = CONCAT44(local_a8._4_4_,uStack_ac);
      local_b8 = CONCAT31((int3)((uint)local_b8 >> 8),local_res18);
      uStack_b0 = CONCAT31(uStack_b0._1_3_,cVar1);
      local_res10[0] = param_2;
      local_70 = param_1;
      if ((param_3 == 0xffffffff) ||
         ((cVar1 != '\x02' &&
          (((int)uStack_ac < (int)uStack_b4 ||
           ((uStack_b4 == uStack_ac && ((local_res18 == 0 || (cVar1 == '\0')))))))))) {
        FUN_142ee0670(&local_70);
      }
      else {
        uVar11 = uVar9;
        if (0 < *(int *)(param_1 + 0x3a0)) {
          do {
            iVar17 = (int)uVar11;
            uVar10 = (longlong)iVar17 * 0x30 + *(longlong *)(param_1 + 0x398);
            local_a8 = uVar10;
            if (((*(int *)(uVar10 + 0x28) != -1) &&
                (cVar1 = FUN_142ee4fd0(&local_88), cVar1 != '\0')) &&
               (cVar1 = FUN_142ee4fd0(&local_b8,*(undefined4 *)(uVar10 + 0x28)), cVar1 == '\0')) {
              FUN_142ef0460(param_1,*(undefined4 *)(uVar10 + 0x28));
              lVar5 = (longlong)*(int *)(param_1 + 0x3b0);
              if (*(int *)(param_1 + 0x3b0) != 0) {
                local_res20 = local_res20 & 0xffffffff00000000;
                local_res18 = **(int **)(param_1 + 0x3a8) != iVar17;
                uVar10 = uVar9;
                uVar11 = uVar9;
                uVar13 = uVar9;
                do {
                  iVar15 = (int)uVar13;
                  iVar12 = (int)uVar11;
                  uVar10 = uVar10 + 1;
                  uVar11 = (ulonglong)(iVar12 + 1);
                  if ((longlong)uVar10 < lVar5) {
                    piVar6 = (int *)(*(longlong *)(param_1 + 0x3a8) + uVar10 * 4);
                    do {
                      if ((bool)local_res18 != (*piVar6 != iVar17)) break;
                      uVar11 = (ulonglong)((int)uVar11 + 1);
                      uVar10 = uVar10 + 1;
                      piVar6 = piVar6 + 1;
                    } while ((longlong)uVar10 < lVar5);
                  }
                  iVar18 = (int)uVar11 - iVar12;
                  if (local_res18 != 0) {
                    if (iVar15 != iVar12) {
                      _guard_xfg_dispatch_icall_nop
                                ((void *)(*(longlong *)(param_1 + 0x3a8) + (longlong)iVar15 * 4),
                                 (void *)(*(longlong *)(param_1 + 0x3a8) + (longlong)iVar12 * 4),
                                 (longlong)iVar18 << 2);
                      iVar15 = (int)local_res20;
                    }
                    uVar16 = iVar15 + iVar18;
                    uVar13 = (ulonglong)uVar16;
                    local_res20 = CONCAT44(local_res20._4_4_,uVar16);
                  }
                  local_res18 = local_res18 ^ 1;
                } while ((longlong)uVar10 < lVar5);
                *(int *)(param_1 + 0x3b0) = (int)uVar13;
                uVar10 = local_a8;
              }
              FUN_142f066c0(uVar10);
            }
            uVar11 = (ulonglong)(iVar17 + 1U);
          } while ((int)(iVar17 + 1U) < *(int *)(param_1 + 0x3a0));
          uVar10 = (ulonglong)uStack_ac;
          local_res20 = CONCAT71(local_res20._1_7_,(char)uStack_b0);
          local_a8 = CONCAT44(local_a8._4_4_,uStack_ac);
          cVar1 = (char)uStack_b0;
          param_2 = (uint)local_90;
          local_res18 = (byte)local_b8;
        }
        uVar16 = uStack_b4;
        uVar11 = local_a0;
        bVar14 = local_res18;
        if ((int)param_2 <= local_98) {
          do {
            if (((((bVar14 != 2) && ((int)param_2 <= (int)uVar16)) &&
                 (((int)param_2 < (int)uVar16 || (bVar14 != 1)))) &&
                ((bVar14 != 1 || (param_2 != uVar16)))) ||
               (((cVar1 != '\x02' &&
                 ((uVar7 = (uint)uVar10, (int)uVar7 <= (int)param_2 &&
                  (((int)uVar7 < (int)param_2 || (cVar1 != '\x01')))))) &&
                ((cVar1 != '\x01' || (param_2 != uVar7)))))) {
              iVar17 = *(int *)(uVar11 + 0x3a0);
              bVar14 = local_res18;
              if (0 < iVar17) {
                piVar6 = (int *)(*(longlong *)(uVar11 + 0x398) + 0x28);
                uVar10 = uVar9;
                uVar13 = uVar9;
                do {
                  iVar15 = (int)uVar13;
                  if (*piVar6 == -1) {
                    if ((-1 < iVar15) && (iVar15 < iVar17)) {
                      iVar17 = *(int *)(uVar11 + 0x38c);
                      lVar5 = uVar10 * 0x30 + *(longlong *)(uVar11 + 0x398);
                      *(uint *)(lVar5 + 0x28) = param_2;
                      *(uint *)(lVar5 + 0x2c) = param_2 - iVar17;
                      cVar1 = FWeakObjectPtr::IsValid(lVar5 + 0x20);
                      if ((cVar1 != '\0') && (*(longlong *)(lVar5 + 0x18) != 0)) {
                        uVar2 = FWeakObjectPtr::Get(lVar5 + 0x20);
                        FUN_142ee17b0(uVar2,*(undefined8 *)(lVar5 + 0x18));
                        lVar3 = FWeakObjectPtr::Get(lVar5 + 0x20);
                        *(undefined1 *)(*(longlong *)(lVar5 + 0x18) + 0x250) =
                             *(undefined1 *)(lVar3 + 0x1c8);
                      }
                      uVar10 = local_a0;
                      iVar17 = *(int *)(local_a0 + 0x3b0);
                      *(int *)(local_a0 + 0x3b0) = iVar17 + 1;
                      if (*(int *)(local_a0 + 0x3b4) < iVar17 + 1) {
                        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(local_a0 + 0x3a8,iVar17);
                      }
                      uVar13 = local_a0;
                      *(int *)(*(longlong *)(uVar10 + 0x3a8) + (longlong)iVar17 * 4) = iVar15;
                      if (*(longlong *)(lVar5 + 0x18) != 0) {
                        *(uint *)(*(longlong *)(lVar5 + 0x18) + 0x2d8) = param_2;
                      }
                      FUN_142eed030(local_a0,&local_88,*(undefined4 *)(lVar5 + 0x28));
                      uStack_7c._0_3_ = CONCAT12(1,(undefined2)uStack_7c);
                      local_90 = 0;
                      uVar11 = uVar13;
                      bVar14 = local_res18;
                      if (((*(longlong *)(uVar13 + 0x328) != 0) &&
                          (lVar5 = FWeakObjectPtr::Get(uVar13 + 800), uVar11 = local_a0,
                          bVar14 = local_res18, lVar5 != 0)) &&
                         (lVar5 = UObject::FindFunction(lVar5,*(undefined8 *)(uVar13 + 0x328)),
                         uVar11 = local_a0, bVar14 = local_res18, lVar5 != 0)) {
                        local_b8 = local_88;
                        uStack_b4 = uStack_84;
                        uStack_b0 = uStack_80;
                        uStack_ac = uStack_7c;
                        plVar4 = (longlong *)FWeakObjectPtr::Get(uVar13 + 800);
                        uVar2 = FUN_14178ac60(plVar4,*(undefined8 *)(uVar13 + 0x328));
                        (**(code **)(*plVar4 + 0x208))(plVar4,uVar2,&local_b8);
                        uVar11 = local_a0;
                        bVar14 = local_res18;
                      }
                    }
                    break;
                  }
                  uVar13 = (ulonglong)(iVar15 + 1);
                  uVar10 = uVar10 + 1;
                  piVar6 = piVar6 + 0xc;
                } while ((longlong)uVar10 < (longlong)iVar17);
              }
            }
            param_2 = param_2 + 1;
            uVar10 = local_a8 & 0xffffffff;
            cVar1 = (char)local_res20;
          } while ((int)param_2 <= local_98);
        }
      }
      local_res20 = param_1;
      FUN_142edcf00(*(undefined8 *)(param_1 + 0x3a8),(longlong)*(int *)(param_1 + 0x3b0),
                    (undefined1)local_res10[0],&local_res20);
      uVar10 = uVar9;
      if (0 < *(int *)(param_1 + 0x3b0)) {
        do {
          iVar17 = *(int *)(uVar9 + *(longlong *)(param_1 + 0x3a8));
          if ((-1 < iVar17) && (iVar17 < *(int *)(param_1 + 0x3a0))) {
            *(int *)(*(longlong *)(param_1 + 0x398) + 0x2c + (longlong)iVar17 * 0x30) = (int)uVar10;
          }
          uVar16 = (int)uVar10 + 1;
          uVar9 = uVar9 + 4;
          uVar10 = (ulonglong)uVar16;
        } while ((int)uVar16 < *(int *)(param_1 + 0x3b0));
      }
    }
  }
  return;
}



// FUNCTION 142efec90 FUN_142efec90 body=100 status=ok
// SIG undefined FUN_142efec90(void)

void FUN_142efec90(longlong param_1,longlong *param_2)

{
  undefined4 local_res8 [2];
  
  FUN_140757f80(param_1 + 0x2b8,param_1);
  if (*(longlong *)(param_1 + 0x2e8) == 0) {
    local_res8[0] = 0xffffffff;
  }
  else {
    local_res8[0] = FUN_1420fe5f0();
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x2f0,local_res8);
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142efed00 FUN_142efed00 body=100 status=ok
// SIG undefined FUN_142efed00(void)

void FUN_142efed00(longlong *param_1)

{
  (**(code **)(*param_1 + 0x288))(param_1,1);
  FUN_142137e90(param_1);
  (**(code **)(*param_1 + 0x288))(param_1,2);
  if ((DAT_146b17150 != 0) && (param_1[0x5c] != 0)) {
    FUN_1424787e0(DAT_146b17150 + 0xcf8);
  }
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  return;
}



// FUNCTION 142efed70 FUN_142efed70 body=1135 status=ok
// SIG undefined FUN_142efed70(void)

ulonglong FUN_142efed70(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong *plStack_40;
  longlong local_38;
  longlong *local_30;
  
  lVar11 = 0;
  if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_142efee1b:
    plVar10 = &local_68;
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    bVar4 = false;
    bVar13 = true;
    lVar12 = 0;
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar8 = *piVar1;
    if (iVar8 == 0) {
      *piVar1 = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (iVar8 < 1) goto LAB_142efee1b;
    local_90 = *(longlong **)(param_1 + 0x30);
    local_98 = 0;
    if (local_90 == (longlong *)0x0) {
LAB_142efee0b:
      plVar10 = &local_98;
      bVar4 = true;
      bVar13 = false;
      lVar12 = local_98;
    }
    else {
      LOCK();
      iVar8 = (int)local_90[1];
      bVar13 = iVar8 == 0;
      if (bVar13) {
        *(int *)(local_90 + 1) = 0;
        iVar8 = 0;
      }
      UNLOCK();
      while (!bVar13) {
        LOCK();
        bVar13 = iVar8 == (int)local_90[1];
        if (bVar13) {
          *(int *)(local_90 + 1) = iVar8 + 1;
        }
        UNLOCK();
        if (bVar13) {
          if (local_90 != (longlong *)0x0) {
            local_98 = *(longlong *)(param_1 + 0x28);
          }
          goto LAB_142efee0b;
        }
        LOCK();
        iVar8 = (int)local_90[1];
        bVar13 = iVar8 == 0;
        if (bVar13) {
          *(int *)(local_90 + 1) = 0;
          iVar8 = 0;
        }
        UNLOCK();
      }
      plVar10 = &local_98;
      local_90 = (longlong *)0x0;
      bVar4 = true;
      bVar13 = false;
      lVar12 = 0;
    }
  }
  plVar2 = (longlong *)plVar10[1];
  plVar10[1] = 0;
  plVar3 = plStack_60;
  *plVar10 = 0;
  if ((bVar13) && (plStack_60 != (longlong *)0x0)) {
    LOCK();
    plVar10 = plStack_60 + 1;
    lVar5 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    uVar9 = (int)lVar5 - 1;
    plVar10 = (longlong *)(ulonglong)uVar9;
    if (uVar9 == 0) {
      (**(code **)*plStack_60)();
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar10 = (longlong *)(ulonglong)(iVar8 - 1U);
      if (iVar8 - 1U == 0) {
        plVar10 = (longlong *)(**(code **)(*plStack_60 + 8))(plStack_60,1);
      }
    }
  }
  plVar3 = local_90;
  if ((bVar4) && (local_90 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_90 + 1;
    lVar5 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    uVar9 = (int)lVar5 - 1;
    plVar10 = (longlong *)(ulonglong)uVar9;
    if (uVar9 == 0) {
      (**(code **)*local_90)();
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar10 = (longlong *)(ulonglong)(iVar8 - 1U);
      if (iVar8 - 1U == 0) {
        plVar10 = (longlong *)(**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  if (lVar12 == 0) goto LAB_142eff188;
  if (param_2 == 0) {
    plVar10 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar4 = false;
    bVar13 = true;
  }
  else {
    if ((*(longlong *)(param_2 + 0x28) == 0) || (*(longlong *)(param_2 + 0x30) == 0)) {
LAB_142efef67:
      plVar10 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar4 = false;
      bVar13 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_2 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_142efef67;
      local_80 = *(longlong **)(param_2 + 0x30);
      local_88 = 0;
      if (local_80 == (longlong *)0x0) {
LAB_142efef58:
        plVar10 = &local_88;
        bVar4 = true;
        bVar13 = false;
        lVar11 = local_88;
      }
      else {
        LOCK();
        iVar8 = (int)local_80[1];
        bVar13 = iVar8 == 0;
        if (bVar13) {
          *(int *)(local_80 + 1) = 0;
          iVar8 = 0;
        }
        UNLOCK();
        while (!bVar13) {
          LOCK();
          bVar13 = iVar8 == (int)local_80[1];
          if (bVar13) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            if (local_80 != (longlong *)0x0) {
              local_88 = *(longlong *)(param_2 + 0x28);
            }
            goto LAB_142efef58;
          }
          LOCK();
          iVar8 = (int)local_80[1];
          bVar13 = iVar8 == 0;
          if (bVar13) {
            *(int *)(local_80 + 1) = 0;
            iVar8 = 0;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
        plVar10 = &local_88;
        bVar4 = true;
        bVar13 = false;
        lVar11 = 0;
      }
    }
    local_78 = lVar11;
    local_70 = (longlong *)plVar10[1];
    plVar10[1] = 0;
    plVar3 = plStack_50;
    *plVar10 = 0;
    if ((bVar13) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar10 = plStack_50 + 1;
      lVar5 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_50)();
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar10 = local_80;
    if ((bVar4) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar3 = local_80 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_80)();
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar4 = true;
    bVar13 = false;
    plVar10 = &local_78;
  }
  plVar3 = (longlong *)plVar10[1];
  plVar10[1] = 0;
  plVar6 = plStack_40;
  *plVar10 = 0;
  if ((bVar13) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar10 = plStack_40 + 1;
    lVar5 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    uVar9 = (int)lVar5 - 1;
    plVar10 = (longlong *)(ulonglong)uVar9;
    if (uVar9 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar10 = (longlong *)(ulonglong)(iVar8 - 1U);
      if (iVar8 - 1U == 0) {
        plVar10 = (longlong *)(**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar6 = local_70;
  if ((bVar4) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_70 + 1;
    lVar5 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    uVar9 = (int)lVar5 - 1;
    plVar10 = (longlong *)(ulonglong)uVar9;
    if (uVar9 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar10 = (longlong *)(ulonglong)(iVar8 - 1U);
      if (iVar8 - 1U == 0) {
        plVar10 = (longlong *)(**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (lVar11 != 0) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_38 = lVar11;
    local_30 = plVar3;
    bVar7 = FUN_14204a410(lVar12,&local_38);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar3 + 1;
      lVar11 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3);
        }
      }
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar2 + 1;
      lVar11 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
    return (ulonglong)bVar7;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar3 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    uVar9 = (int)lVar11 - 1;
    plVar10 = (longlong *)(ulonglong)uVar9;
    if (uVar9 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar10 = (longlong *)(ulonglong)(iVar8 - 1U);
      if (iVar8 - 1U == 0) {
        plVar10 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
LAB_142eff188:
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar2 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    uVar9 = (int)lVar11 - 1;
    plVar10 = (longlong *)(ulonglong)uVar9;
    if (uVar9 == 0) {
      plVar10 = (longlong *)(**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        plVar10 = (longlong *)(**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return (ulonglong)plVar10 & 0xffffffffffffff00;
}



// FUNCTION 142eff1e0 FUN_142eff1e0 body=38 status=ok
// SIG undefined FUN_142eff1e0(void)

undefined1 FUN_142eff1e0(float param_1,float param_2,float param_3,char param_4,char param_5)

{
  if (param_2 <= param_1) {
    if (param_3 <= param_1) goto LAB_142eff1f4;
    if (param_4 != '\0') {
      return 1;
    }
  }
  if (param_1 < param_3) {
    return 0;
  }
LAB_142eff1f4:
  if ((param_1 < param_2) && (param_5 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 142eff210 FUN_142eff210 body=738 status=ok
// SIG undefined FUN_142eff210(void)

undefined8
FUN_142eff210(undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4,
             undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_c8 [72];
  longlong local_80;
  
  uVar5 = FUN_1404b03b0();
  FText::FText(local_118,uVar5);
  cVar4 = FUN_142ef5b70(param_2,param_3);
  if (cVar4 != '\0') {
    FUN_142eff500(local_c8,param_2,param_3);
    if (local_80 != 0) {
      lVar6 = UTexture2D::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(local_80 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(local_80 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        fVar9 = 0.0;
        iVar8 = 0;
        if (param_4 <= 0.0) {
          param_4 = 1.0;
        }
        else if (*(longlong *)(local_80 + 0xd8) == 0) {
          param_4 = param_4 / 0.0;
        }
        else {
          param_4 = param_4 / (float)*(int *)(*(longlong *)(local_80 + 0xd8) + 4);
        }
        fVar10 = 0.0;
        if (1e-08 < ABS(param_4 - 1.0)) {
          piVar2 = *(int **)(local_80 + 0xd8);
          iVar7 = iVar8;
          if (piVar2 != (int *)0x0) {
            iVar7 = *piVar2;
          }
          fVar9 = (float)iVar7 * param_4;
          if (piVar2 != (int *)0x0) {
            iVar8 = piVar2[1];
          }
          fVar10 = (float)iVar8 * param_4;
        }
        lVar6 = UTexture2D::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(local_80 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(local_80 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        lVar6 = 0;
        if (bVar3) {
          lVar6 = local_80;
        }
        uVar5 = FUN_142eea840(local_100,lVar6,(int)fVar9,(int)fVar10,param_5);
        FText::operator=(local_118,uVar5);
        if (local_f8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_f8 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_f8)(local_f8);
            LOCK();
            piVar2 = (int *)((longlong)local_f8 + 0xc);
            iVar8 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_f8 + 8))(local_f8,1);
            }
          }
        }
        FText::FText(param_1,local_118);
        FSlateBrush::~FSlateBrush(local_c8);
        goto LAB_142eff49e;
      }
    }
    FSlateBrush::~FSlateBrush(local_c8);
  }
  uVar5 = FUN_142effbc0(local_e8,param_2,param_3);
  FText::operator=(local_118,uVar5);
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_e0 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar2 = (int *)((longlong)local_e0 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_e0 + 8))(local_e0,1);
      }
    }
  }
  FText::FText(param_1,local_118);
LAB_142eff49e:
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_110 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar2 = (int *)((longlong)local_110 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 142eff500 FUN_142eff500 body=677 status=ok
// SIG undefined FUN_142eff500(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142eff500(undefined8 param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined ***pppuVar8;
  longlong *plVar9;
  undefined4 uStackX_c;
  undefined **local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined1 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  byte local_138;
  undefined **local_130 [17];
  undefined1 local_a8 [144];
  
  if (param_3 != 0) {
    uVar4 = FUN_142f30760();
    plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_3,uVar4);
    if (((plVar5 != (longlong *)0x0) && (lVar6 = (**(code **)(*plVar5 + 0x10))(plVar5), lVar6 != 0))
       && (lVar6 = *(longlong *)(lVar6 + 0x38), lVar6 != 0)) {
      if (*(int *)(lVar6 + 0x38) != *(int *)(lVar6 + 100)) {
        lVar7 = *(longlong *)(lVar6 + 0x70);
        if (*(longlong *)(lVar6 + 0x70) == 0) {
          lVar7 = lVar6 + 0x68;
        }
        iVar3 = *(int *)(lVar7 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                                 (longlong)*(int *)(lVar6 + 0x78) - 1U) * 4);
        if (iVar3 != -1) {
          do {
            plVar5 = (longlong *)((longlong)iVar3 * 0x98 + *(longlong *)(lVar6 + 0x30));
            if (*plVar5 == param_2) {
              if (iVar3 != -1) goto LAB_142eff5e7;
              break;
            }
            iVar3 = (int)plVar5[0x12];
          } while (iVar3 != -1);
        }
      }
      plVar5 = (longlong *)0x0;
LAB_142eff5e7:
      plVar9 = plVar5 + 1;
      if (plVar5 == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
      }
      if (plVar9 == (longlong *)0x0) {
        local_138 = local_138 & 0xfc;
        local_1b0 = 0x4200000042000000;
        uStack_1a8 = 0;
        local_1b8 = &PTR__scalar_deleting_destructor__143f489a8;
        pppuVar8 = &local_1b8;
        local_1a0 = 0;
        local_180 = 0;
        uStack_178 = 0;
        local_188 = 0;
        local_198 = _DAT_1464aa6c0;
        uStack_190 = _DAT_1464aa6c8;
        local_170 = 0;
        local_160 = (undefined4)DAT_1468b5d88;
        uStackX_c = (undefined4)((ulonglong)DAT_1468b5d88 >> 0x20);
        local_154 = uStackX_c;
        local_15c = uStackX_c;
        local_148 = 0;
        uStack_140 = 0;
        local_168 = 0;
        local_150 = 0;
        local_14c = 3;
        local_158 = local_160;
      }
      else {
        pppuVar8 = (undefined ***)FUN_14080bc50(local_a8);
      }
      FUN_14080bc50(local_130,pppuVar8);
      if (plVar9 == (longlong *)0x0) {
        FSlateBrush::~FSlateBrush(&local_1b8);
      }
      else {
        FSlateBrush::~FSlateBrush(local_a8);
      }
      bVar2 = true;
      bVar1 = false;
      pppuVar8 = local_130;
      goto LAB_142eff762;
    }
  }
  local_138 = local_138 & 0xfc;
  pppuVar8 = &local_1b8;
  local_1b0 = 0x4200000042000000;
  uStack_1a8 = 0;
  local_1b8 = &PTR__scalar_deleting_destructor__143f489a8;
  bVar2 = false;
  bVar1 = true;
  local_1a0 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_188 = 0;
  local_198 = _DAT_1464aa6c0;
  uStack_190 = _DAT_1464aa6c8;
  local_170 = 0;
  local_160 = (undefined4)DAT_1468b5d88;
  uStackX_c = (undefined4)((ulonglong)DAT_1468b5d88 >> 0x20);
  local_154 = uStackX_c;
  local_15c = uStackX_c;
  local_148 = 0;
  uStack_140 = 0;
  local_168 = 0;
  local_150 = 0;
  local_14c = 3;
  local_158 = local_160;
LAB_142eff762:
  FUN_14080bc50(param_1,pppuVar8);
  if (bVar1) {
    FSlateBrush::~FSlateBrush(&local_1b8);
  }
  if (bVar2) {
    FSlateBrush::~FSlateBrush(local_130);
  }
  return param_1;
}



// FUNCTION 142eff7b0 FUN_142eff7b0 body=556 status=ok
// SIG undefined FUN_142eff7b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142eff7b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 local_res18 [2];
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  ulonglong *puStack_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [16];
  undefined1 local_78 [24];
  undefined4 local_60 [4];
  undefined1 local_50 [8];
  longlong *local_48;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_res18[0] = param_3;
  lVar6 = FText::FromName(local_78,local_res18);
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_a0,L"[{0}]",L"GbxUILocalization",L"KeyWithBrackets");
  puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_88,uVar7);
  local_60[0] = 4;
  FText::FText(local_50,lVar6);
  local_e8 = local_60;
  local_38 = '\x01';
  puStack_e0 = &local_30;
  local_d8 = *puVar8;
  local_d0 = puVar8[1];
  if (local_d0 != 0) {
    LOCK();
    *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
    UNLOCK();
  }
  uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_c8,&local_e8);
  uVar7 = FText::Format(local_b8,&local_d8,uVar7);
  FText::FText(param_2,uVar7);
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_b0 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)local_b0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_c8);
  if (local_38 != '\0') {
    local_38 = '\0';
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_48 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
  }
  plVar4 = (longlong *)puVar8[1];
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
  plVar4 = *(longlong **)(lVar6 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_98 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar1 = (int *)((longlong)local_98 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_98 + 8))(local_98,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142eff9e0 FUN_142eff9e0 body=468 status=ok
// SIG undefined FUN_142eff9e0(void)

undefined8 FUN_142eff9e0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 local_res8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [72];
  longlong local_60;
  
  uVar5 = FUN_1404b03b0();
  FText::FText(param_1,uVar5);
  local_res8._0_4_ = (float)param_4;
  uVar5 = param_4;
  if ((((float)local_res8 == 0.0) &&
      (local_res8._4_4_ = (float)((ulonglong)param_4 >> 0x20), uVar5 = param_4,
      local_res8._4_4_ == 0.0)) && (uVar5 = param_4, param_3 != 0)) {
    uVar5 = FUN_142f30760();
    plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_3,uVar5);
    uVar5 = param_4;
    if ((plVar6 != (longlong *)0x0) &&
       (lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6), uVar5 = param_4, lVar7 != 0)) {
      local_res8._0_4_ = (float)*(undefined8 *)(lVar7 + 0xf8);
      uVar5 = *(undefined8 *)(lVar7 + 0xf8);
    }
  }
  local_res8 = uVar5;
  cVar4 = FUN_142ef5b70(param_2,param_3);
  if (cVar4 == '\0') {
    uVar5 = FUN_142effbc0(local_c0,param_2,param_3);
    FText::operator=(param_1,uVar5);
    if (local_b8 == (longlong *)0x0) {
      return param_1;
    }
    LOCK();
    plVar6 = local_b8 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 != 1) {
      return param_1;
    }
    (**(code **)*local_b8)(local_b8);
    LOCK();
    piVar1 = (int *)((longlong)local_b8 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) {
      return param_1;
    }
    (**(code **)(*local_b8 + 8))(local_b8,1);
    return param_1;
  }
  FUN_142eff500(local_a8);
  if (local_60 != 0) {
    lVar7 = UTexture2D::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(local_60 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_60 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_142effad7;
  }
  local_60 = 0;
LAB_142effad7:
  uVar5 = FUN_142eea840(local_d8,local_60,(int)(float)local_res8,(int)local_res8._4_4_,0);
  FText::operator=(param_1,uVar5);
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_d0 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)local_d0 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  FSlateBrush::~FSlateBrush(local_a8);
  return param_1;
}



// FUNCTION 142effbc0 FUN_142effbc0 body=819 status=ok
// SIG undefined FUN_142effbc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142effbc0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined8 local_res10 [2];
  undefined1 auStack_148 [32];
  undefined4 *local_128;
  ulonglong *puStack_120;
  undefined4 local_118;
  undefined8 local_110;
  longlong local_108;
  undefined1 local_100 [16];
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_118 = 0;
  local_res10[0] = param_2;
  if (param_3 != 0) {
    uVar8 = FUN_142f30760();
    plVar9 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_3,uVar8);
    if (plVar9 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar9 + 0x10))(plVar9);
      if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0x38) != 0)) {
        puVar11 = (undefined1 *)FUN_142eff7b0(*(longlong *)(lVar10 + 0x38),local_a8,local_res10[0]);
        bVar6 = true;
        bVar5 = false;
        bVar4 = false;
        goto LAB_142effe09;
      }
    }
  }
  lVar10 = FText::FromName(local_80,local_res10);
  uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_c0,L"[{0}]",L"GbxUILocalization",L"KeyWithBrackets");
  puVar12 = (undefined8 *)FTextFormat::FTextFormat(local_90,uVar8);
  local_68[0] = 4;
  FText::FText(local_58,lVar10);
  local_110 = *puVar12;
  local_128 = local_68;
  puStack_120 = local_38;
  local_108 = puVar12[1];
  local_40 = '\x01';
  if (local_108 != 0) {
    LOCK();
    *(int *)(local_108 + 8) = *(int *)(local_108 + 8) + 1;
    UNLOCK();
  }
  uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_100,&local_128);
  uVar8 = FText::Format(local_d8,&local_110,uVar8);
  FText::FText(local_f0,uVar8);
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_d0 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar2 = (int *)((longlong)local_d0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_100);
  if (local_40 != '\0') {
    local_40 = '\0';
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_50 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  plVar9 = (longlong *)puVar12[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  plVar9 = *(longlong **)(lVar10 + 8);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  puVar11 = local_f0;
  bVar6 = false;
  bVar5 = true;
  bVar4 = true;
LAB_142effe09:
  FText::FText(param_1,puVar11);
  if (bVar4) {
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_e8 + 1;
      lVar10 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar2 = (int *)((longlong)local_e8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_e8 + 8))(local_e8,1);
        }
      }
    }
  }
  if (bVar5) {
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_b8 + 1;
      lVar10 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar2 = (int *)((longlong)local_b8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_b8 + 8))(local_b8,1);
        }
      }
    }
  }
  if ((bVar6) && (local_a0 != (longlong *)0x0)) {
    LOCK();
    plVar9 = local_a0 + 1;
    lVar10 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)local_a0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 142efff00 FUN_142efff00 body=719 status=ok
// SIG undefined FUN_142efff00(void)

longlong FUN_142efff00(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  wchar_t *pwVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  int *piVar13;
  int *piVar14;
  wchar_t *pwVar15;
  longlong local_res20;
  int local_38;
  int local_34;
  longlong local_30;
  
  pwVar15 = (wchar_t *)0x0;
  pwVar7 = pwVar15;
  if (param_1 != 0) {
    uVar5 = FUN_142f30760();
    plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_1,uVar5);
    if (plVar6 != (longlong *)0x0) {
      pwVar7 = (wchar_t *)(**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  if ((((param_1 != 0) && (param_2 != 0)) && (pwVar7 != (wchar_t *)0x0)) &&
     (*(longlong *)(pwVar7 + 0x2c) != 0)) {
    lVar8 = UGunfireTechRequirementsImplSteam::GetPrivateStaticClass();
    lVar10 = *(longlong *)(pwVar7 + 0x2c);
    for (lVar11 = lVar10; lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x30)) {
      if (lVar11 == lVar8) {
        if (lVar10 == 0) {
          return 0;
        }
        if (*(longlong *)(pwVar7 + 0x30) == 0) {
          return 0;
        }
        pwVar12 = pwVar15;
        if (lVar10 != 0) {
          pwVar9 = (wchar_t *)UGunfireTechRequirementsImplSteam::GetPrivateStaticClass();
          for (pwVar2 = *(wchar_t **)(pwVar7 + 0x2c);
              (pwVar12 = pwVar15, pwVar2 != (wchar_t *)0x0 &&
              (pwVar12 = *(wchar_t **)(pwVar7 + 0x2c), pwVar2 != pwVar9));
              pwVar2 = *(wchar_t **)(pwVar2 + 0x18)) {
          }
        }
        lVar10 = FUN_1420f0e60(param_1,pwVar12,0);
        if (lVar10 == 0) {
          return 0;
        }
        lVar11 = UGunfireTechRequirementsImplSteam::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) {
          return 0;
        }
        uVar5 = *(undefined8 *)(pwVar7 + 0x30);
        *(undefined8 *)(lVar10 + 0x2b8) = uVar5;
        if (param_3 == '\0') goto LAB_142f001a4;
        pwVar7 = _guard_xfg_dispatch_icall_nop
                           (L"&UGbxFullScreenMovie::OnMovieFinishedPlaying",L"::");
        while (pwVar12 = pwVar7, pwVar12 != (wchar_t *)0x0) {
          pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar12 + 1,L"::");
          pwVar15 = pwVar12;
        }
        FName::FName(&local_res20,pwVar15 + 2,1);
        lVar11 = *(longlong *)(lVar10 + 0x2b8);
        FWeakObjectPtr::operator=(&local_38,0);
        local_30 = 0;
        FWeakObjectPtr::operator=(&local_38,lVar10);
        local_30 = local_res20;
        if ((local_res20 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_38), lVar8 != 0)) {
          UObject::FindFunction(lVar8,local_30);
        }
        piVar13 = *(int **)(lVar11 + 0x28);
        iVar1 = *(int *)(lVar11 + 0x30);
        piVar14 = piVar13;
        if (piVar13 == piVar13 + (longlong)iVar1 * 4) {
LAB_142f00159:
          iVar1 = *(int *)(lVar11 + 0x30);
          *(int *)(lVar11 + 0x30) = iVar1 + 1;
          if (*(int *)(lVar11 + 0x34) < iVar1 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar11 + 0x28,iVar1);
          }
          piVar13 = (int *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar11 + 0x28));
          *piVar13 = local_38;
          piVar13[1] = local_34;
          *(longlong *)(piVar13 + 2) = local_30;
        }
        else {
          while( true ) {
            if (((*piVar14 == local_38) && (piVar14[1] == local_34)) ||
               ((cVar4 = FWeakObjectPtr::IsValid(piVar14), cVar4 == '\0' &&
                (cVar4 = FWeakObjectPtr::IsValid(&local_38), cVar4 == '\0')))) {
              bVar3 = true;
            }
            else {
              bVar3 = false;
            }
            if ((bVar3) && (*(longlong *)(piVar14 + 2) == local_30)) {
              bVar3 = true;
            }
            else {
              bVar3 = false;
            }
            if (bVar3) break;
            piVar14 = piVar14 + 4;
            if (piVar14 == piVar13 + (longlong)iVar1 * 4) goto LAB_142f00159;
          }
          if ((int)((longlong)piVar14 - (longlong)piVar13 >> 4) == -1) goto LAB_142f00159;
        }
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(lVar11 + 0x28);
        uVar5 = *(undefined8 *)(lVar10 + 0x2b8);
LAB_142f001a4:
        FUN_142aab3c0(uVar5,param_2);
        UUserWidget::AddToViewport(lVar10,0);
        return lVar10;
      }
    }
  }
  return 0;
}



// FUNCTION 142f001d0 FUN_142f001d0 body=433 status=ok
// SIG undefined FUN_142f001d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f001d0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  
  if ((*(char *)(param_1 + 0xaf) == '\0') && (*(char *)(param_1 + 0xb0) == '\0')) {
    iVar1 = *(int *)(param_1 + 0x48);
    if (((1 < iVar1) &&
        (((*(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (longlong)iVar1 * 8) != 0 &&
          (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x40) + -0x10 + (longlong)iVar1 * 8),
          plVar2 != (longlong *)0x0)) && (plVar2[7] != 0)))) &&
       (*(char *)(plVar2[7] + 0x36) == '\0')) {
      uVar5 = (**(code **)(*plVar2 + 0x278))();
      FUN_142f005e0(param_1,uVar5);
      TBaseDelegate<void>::ExecuteIfBound(param_1 + 0xf8);
      return;
    }
    if (0 < iVar1) {
      lVar3 = *(longlong *)
               (*(longlong *)(param_1 + 0x40) + -8 + (longlong)*(int *)(param_1 + 0x48) * 8);
      if (((lVar3 != 0) && (*(longlong *)(lVar3 + 0x28) != 0)) && (*(longlong *)(lVar3 + 0x30) != 0)
         ) {
        (**(code **)(**(longlong **)(lVar3 + 0x30) + 0x20))();
      }
      FUN_142ee8180(param_1,lVar3);
      FUN_142ee86c0(param_1,lVar3);
      LOCK();
      DAT_146ace8c0 = DAT_146ace8c0 + -1;
      UNLOCK();
      lVar3 = *(longlong *)
               (*(longlong *)(param_1 + 0x40) + -8 + (longlong)*(int *)(param_1 + 0x48) * 8);
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x40);
      if (((lVar3 != 0) && (*(longlong *)(lVar3 + 0x28) != 0)) && (*(longlong *)(lVar3 + 0x30) != 0)
         ) {
        (**(code **)(**(longlong **)(lVar3 + 0x30) + 0x90))();
      }
      if (*(int *)(param_1 + 0x48) == 0) {
        FUN_14202d950(0);
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x148,0);
      }
      FUN_142f04290(param_1);
      if ((0 < *(int *)(param_1 + 0x48)) &&
         (FUN_142ee16e0(param_1,*(undefined8 *)
                                 (*(longlong *)(param_1 + 0x40) + -8 +
                                 (longlong)*(int *)(param_1 + 0x48) * 8)),
         *(char *)(param_1 + 0xac) != '\0')) {
        return;
      }
    }
    *(undefined1 *)(param_1 + 0xac) = 1;
    if (((*(int *)(param_1 + 0x100) != 0) && (*(longlong **)(param_1 + 0xf8) != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x18))(), cVar4 != '\0')) {
      if (*(int *)(param_1 + 0x100) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000142f0036a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x40))();
        return;
      }
      (**(code **)(_DAT_00000000 + 0x40))();
    }
  }
  return;
}



// FUNCTION 142f00390 FUN_142f00390 body=114 status=ok
// SIG undefined FUN_142f00390(void)

void FUN_142f00390(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_1 != 0) && (lVar2 = UWidgetComponent::GetRenderTarget(), lVar2 != 0)) {
    lVar3 = FUN_142f27b90();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (0 < *(int *)(lVar2 + 0x5a8))) {
      FUN_142eef110();
      return;
    }
  }
  return;
}



// FUNCTION 142f00410 FUN_142f00410 body=125 status=ok
// SIG undefined FUN_142f00410(void)

void FUN_142f00410(longlong param_1)

{
  longlong lVar1;
  
  LOCK();
  DAT_146ace8c0 = DAT_146ace8c0 + -1;
  UNLOCK();
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (longlong)*(int *)(param_1 + 0x48) * 8)
  ;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
  TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink();
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x28) != 0)) && (*(longlong *)(lVar1 + 0x30) != 0)) {
    (**(code **)(**(longlong **)(lVar1 + 0x30) + 0x90))();
  }
  if (*(int *)(param_1 + 0x48) == 0) {
    FUN_14202d950(0);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x148,0);
  }
  FUN_142f04290(param_1);
  return;
}



// FUNCTION 142f00490 FUN_142f00490 body=334 status=ok
// SIG undefined FUN_142f00490(void)

void FUN_142f00490(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  PSRWLOCK SRWLock;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  
  if ((param_1 != 0) && (lVar5 = UWidgetComponent::GetRenderTarget(), lVar5 != 0)) {
    lVar6 = FUN_142f27b90();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (0 < *(int *)(lVar5 + 0x5a8))) {
      plVar1 = (longlong *)(lVar5 + 0x5a0);
      if (*(longlong *)(*(longlong *)(lVar5 + 0x5a0) + -8 + (longlong)*(int *)(lVar5 + 0x5a8) * 8)
          == param_2) {
        FUN_142eef110();
        return;
      }
      SRWLock = (PSRWLOCK)(lVar5 + 0x5b0);
      AcquireSRWLockShared(SRWLock);
      plVar2 = (longlong *)*plVar1;
      plVar9 = plVar2 + *(int *)(lVar5 + 0x5a8);
      do {
        if (plVar9 == plVar2) {
          iVar8 = -1;
          goto LAB_142f00563;
        }
        plVar9 = plVar9 + -1;
      } while (*plVar9 != param_2);
      iVar8 = (int)((longlong)plVar9 - (longlong)plVar2 >> 3);
LAB_142f00563:
      ReleaseSRWLockShared(SRWLock);
      if (iVar8 != -1) {
        AcquireSRWLockExclusive(SRWLock);
        iVar7 = *(int *)(lVar5 + 0x5a8);
        iVar4 = (iVar7 - iVar8) + -1;
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + (longlong)iVar8 * 8),
                     (void *)(*plVar1 + (longlong)(iVar8 + 1) * 8),(longlong)iVar4 << 3);
          iVar7 = *(int *)(lVar5 + 0x5a8);
        }
        *(int *)(lVar5 + 0x5a8) = iVar7 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
        ReleaseSRWLockExclusive(SRWLock);
      }
    }
  }
  return;
}



// FUNCTION 142f005e0 FUN_142f005e0 body=395 status=ok
// SIG undefined FUN_142f005e0(void)

void FUN_142f005e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  
  if ((*(char *)(param_1 + 0xaf) == '\0') && (*(char *)(param_1 + 0xb0) == '\0')) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (0 < iVar3) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x40) + -8 + (longlong)iVar3 * 8);
      if ((plVar1 != (longlong *)0x0) &&
         (lVar4 = (**(code **)(*plVar1 + 0x278))(), lVar4 == param_2)) {
        return;
      }
      FUN_142ee8180(param_1,*(undefined8 *)
                             (*(longlong *)(param_1 + 0x40) + -8 +
                             (longlong)*(int *)(param_1 + 0x48) * 8));
      iVar3 = *(int *)(param_1 + 0x48);
    }
    bVar2 = false;
    while (0 < iVar3) {
      FUN_142ee86c0(param_1,*(undefined8 *)
                             (*(longlong *)(param_1 + 0x40) + -8 +
                             (longlong)*(int *)(param_1 + 0x48) * 8));
      LOCK();
      DAT_146ace8c0 = DAT_146ace8c0 + -1;
      UNLOCK();
      lVar4 = *(longlong *)
               (*(longlong *)(param_1 + 0x40) + -8 + (longlong)*(int *)(param_1 + 0x48) * 8);
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x40);
      if (((lVar4 != 0) && (*(longlong *)(lVar4 + 0x28) != 0)) && (*(longlong *)(lVar4 + 0x30) != 0)
         ) {
        (**(code **)(**(longlong **)(lVar4 + 0x30) + 0x90))();
      }
      if (*(int *)(param_1 + 0x48) == 0) {
        FUN_14202d950(0);
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x148,0);
      }
      FUN_142f04290(param_1);
      if (*(int *)(param_1 + 0x48) < 1) break;
      plVar1 = *(longlong **)
                (*(longlong *)(param_1 + 0x40) + -8 + (longlong)*(int *)(param_1 + 0x48) * 8);
      if ((plVar1 != (longlong *)0x0) &&
         ((lVar4 = (**(code **)(*plVar1 + 0x278))(), lVar4 == param_2 || (bVar2)))) {
        bVar2 = true;
        lVar4 = *(longlong *)
                 (*(longlong *)
                   (*(longlong *)(param_1 + 0x40) + -8 + (longlong)*(int *)(param_1 + 0x48) * 8) +
                 0x38);
        if ((lVar4 != 0) && (*(char *)(lVar4 + 0x36) != '\0')) {
          FUN_142ee16e0(param_1);
          break;
        }
      }
      iVar3 = *(int *)(param_1 + 0x48);
    }
    *(undefined1 *)(param_1 + 0xac) = 1;
  }
  return;
}



// FUNCTION 142f00770 FUN_142f00770 body=406 status=ok
// SIG undefined FUN_142f00770(void)

void FUN_142f00770(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  if ((param_1 != 0) && (lVar5 = UWidgetComponent::GetRenderTarget(), lVar5 != 0)) {
    lVar6 = FUN_142f27b90();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      iVar7 = *(int *)(lVar5 + 0x5a8);
      while (0 < iVar7) {
        AcquireSRWLockShared((PSRWLOCK)(lVar5 + 0x5b0));
        if (*(int *)(lVar5 + 0x5a8) == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = *(longlong *)
                   (*(longlong *)(lVar5 + 0x5a0) + -8 + (longlong)*(int *)(lVar5 + 0x5a8) * 8);
        }
        ReleaseSRWLockShared((PSRWLOCK)(lVar5 + 0x5b0));
        if (lVar6 == param_2) break;
        AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x5b0));
        iVar7 = *(int *)(lVar5 + 0x5a8);
        iVar3 = (iVar7 - (iVar7 + -1)) + -1;
        if (iVar3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(lVar5 + 0x5a0) + (longlong)(iVar7 + -1) * 8),
                     (void *)(*(longlong *)(lVar5 + 0x5a0) + (longlong)iVar7 * 8),
                     (longlong)iVar3 << 3);
          iVar7 = *(int *)(lVar5 + 0x5a8);
        }
        *(int *)(lVar5 + 0x5a8) = iVar7 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar5 + 0x5a0);
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x5b0));
        iVar7 = *(int *)(lVar5 + 0x5a8);
      }
      AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x5b0));
      iVar3 = *(int *)(lVar5 + 0x5a8);
      lVar6 = *(longlong *)(lVar5 + 0x5a0);
      iVar7 = iVar3 + -1;
      uVar1 = *(undefined8 *)(lVar6 + (longlong)iVar7 * 8);
      iVar4 = (iVar3 - iVar7) + -1;
      if (iVar4 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(lVar6 + (longlong)iVar7 * 8),(void *)(lVar6 + (longlong)iVar3 * 8),
                   (longlong)iVar4 << 3);
        iVar3 = *(int *)(lVar5 + 0x5a8);
      }
      *(int *)(lVar5 + 0x5a8) = iVar3 + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar5 + 0x5a0);
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x5b0));
      FUN_142f024b0(lVar5 + 0x590,uVar1,0);
    }
  }
  return;
}



// FUNCTION 142f00910 FUN_142f00910 body=528 status=ok
// SIG undefined FUN_142f00910(void)

undefined8 FUN_142f00910(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 local_res18;
  longlong local_18;
  undefined8 *local_10;
  
  if ((*(char *)(param_1 + 0xaf) != '\0') || (*(char *)(param_1 + 0xb0) != '\0')) {
    return 0;
  }
  local_10 = &local_res18;
  iVar1 = *(int *)(param_1 + 0x48);
  local_res18 = param_3;
  local_18 = param_1;
  if (0 < iVar1) {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x40) + -8 + (longlong)iVar1 * 8);
    if ((plVar3 != (longlong *)0x0) && (lVar2 = (**(code **)(*plVar3 + 0x278))(), lVar2 == param_2))
    {
      FUN_142ee8180(param_1,*(undefined8 *)
                             (*(longlong *)(param_1 + 0x40) + -8 +
                             (longlong)*(int *)(param_1 + 0x48) * 8));
      FUN_142ee86c0(param_1,*(undefined8 *)
                             (*(longlong *)(param_1 + 0x40) + -8 +
                             (longlong)*(int *)(param_1 + 0x48) * 8));
      FUN_142f00410(param_1);
      plVar3 = (longlong *)FUN_142ede760(&local_18);
      *(undefined1 *)(param_1 + 0xac) = 1;
      if (plVar3 == (longlong *)0x0) {
        return 0;
      }
      uVar4 = (**(code **)(*plVar3 + 0x278))(plVar3);
      return uVar4;
    }
    FUN_142ee8180(param_1,*(undefined8 *)
                           (*(longlong *)(param_1 + 0x40) + -8 +
                           (longlong)*(int *)(param_1 + 0x48) * 8));
    iVar1 = *(int *)(param_1 + 0x48);
  }
  while (0 < iVar1) {
    FUN_142ee86c0(param_1,*(undefined8 *)
                           (*(longlong *)(param_1 + 0x40) + -8 +
                           (longlong)*(int *)(param_1 + 0x48) * 8));
    LOCK();
    DAT_146ace8c0 = DAT_146ace8c0 + -1;
    UNLOCK();
    lVar2 = *(longlong *)
             (*(longlong *)(param_1 + 0x40) + -8 + (longlong)*(int *)(param_1 + 0x48) * 8);
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x40);
    if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x28) != 0)) && (*(longlong *)(lVar2 + 0x30) != 0))
    {
      (**(code **)(**(longlong **)(lVar2 + 0x30) + 0x90))();
    }
    if (*(int *)(param_1 + 0x48) == 0) {
      FUN_14202d950(0);
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x148,0)
      ;
    }
    FUN_142f04290(param_1);
    if (*(int *)(param_1 + 0x48) < 1) break;
    plVar3 = *(longlong **)
              (*(longlong *)(param_1 + 0x40) + -8 + (longlong)*(int *)(param_1 + 0x48) * 8);
    if ((plVar3 != (longlong *)0x0) && (lVar2 = (**(code **)(*plVar3 + 0x278))(), lVar2 == param_2))
    {
      FUN_142ee86c0(param_1,*(undefined8 *)
                             (*(longlong *)(param_1 + 0x40) + -8 +
                             (longlong)*(int *)(param_1 + 0x48) * 8));
      FUN_142f00410(param_1);
      plVar3 = (longlong *)FUN_142ede760(&local_18);
      *(undefined1 *)(param_1 + 0xac) = 1;
      if (plVar3 != (longlong *)0x0) {
        uVar4 = (**(code **)(*plVar3 + 0x278))(plVar3);
        return uVar4;
      }
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0x48);
  }
  uVar4 = FUN_142f02280(param_1,local_res18);
  return uVar4;
}



// FUNCTION 142f00b20 FUN_142f00b20 body=317 status=ok
// SIG undefined FUN_142f00b20(void)

void FUN_142f00b20(longlong param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  if ((param_1 != 0) && (lVar3 = UWidgetComponent::GetRenderTarget(), lVar3 != 0)) {
    lVar4 = FUN_142f27b90();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar5 = *(int *)(lVar3 + 0x5a8);
      while (0 < iVar5) {
        AcquireSRWLockShared((PSRWLOCK)(lVar3 + 0x5b0));
        if (*(int *)(lVar3 + 0x5a8) == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = *(longlong *)
                   (*(longlong *)(lVar3 + 0x5a0) + -8 + (longlong)*(int *)(lVar3 + 0x5a8) * 8);
        }
        ReleaseSRWLockShared((PSRWLOCK)(lVar3 + 0x5b0));
        if (lVar4 == param_2) break;
        AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x5b0));
        iVar5 = *(int *)(lVar3 + 0x5a8);
        iVar2 = (iVar5 - (iVar5 + -1)) + -1;
        if (iVar2 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(lVar3 + 0x5a0) + (longlong)(iVar5 + -1) * 8),
                     (void *)(*(longlong *)(lVar3 + 0x5a0) + (longlong)iVar5 * 8),
                     (longlong)iVar2 << 3);
          iVar5 = *(int *)(lVar3 + 0x5a8);
        }
        *(int *)(lVar3 + 0x5a8) = iVar5 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar3 + 0x5a0);
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x5b0));
        iVar5 = *(int *)(lVar3 + 0x5a8);
      }
      FUN_142f021a0(lVar3 + 0x590,param_3,0);
    }
  }
  return;
}



// FUNCTION 142f00c80 FUN_142f00c80 body=32 status=ok
// SIG undefined FUN_142f00c80(void)

void FUN_142f00c80(longlong *param_1)

{
  UPanelWidget::PostLoad();
                    /* WARNING: Could not recover jumptable at 0x000142f00c99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x298))(param_1);
  return;
}



// FUNCTION 142f00ca0 FUN_142f00ca0 body=1117 status=ok
// SIG undefined FUN_142f00ca0(void)

void FUN_142f00ca0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  longlong *plVar12;
  undefined1 local_res8 [8];
  int local_b8;
  uint uStack_b4;
  undefined8 uStack_b0;
  uint local_a8;
  uint uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  longlong *local_90;
  int iStack_88;
  uint uStack_84;
  uint *local_80;
  uint uStack_78;
  uint uStack_74;
  undefined8 local_70;
  longlong *local_68;
  undefined8 uStack_60;
  uint *puStack_58;
  uint uStack_50;
  uint uStack_4c;
  undefined8 uStack_48;
  int *local_40;
  undefined8 *local_38;
  
  UObject::PostLoad();
  uStack_b4 = 1;
  lVar7 = param_1 + 0x198;
  local_b8 = 0;
  uVar2 = *(uint *)(param_1 + 0x1c0);
  puVar1 = (uint *)(param_1 + 0x1a8);
  uStack_a4 = 0;
  iStack_a0 = 0;
  if (uVar2 != 0) {
    puVar11 = *(uint **)(param_1 + 0x1b8);
    if (*(uint **)(param_1 + 0x1b8) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar3 = *puVar11;
    iStack_a0 = 0;
    local_b8 = 0;
    while (uVar3 == 0) {
      lVar6 = (longlong)local_b8;
      iStack_a0 = iStack_a0 + 0x20;
      iVar9 = local_b8 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_b8;
      local_b8 = iVar9;
      if (bVar4) goto LAB_142f00d7b;
      uVar3 = puVar11[lVar6 + 1];
    }
    uStack_b4 = -uVar3 & uVar3;
    iVar9 = 0x1f;
    if (uStack_b4 != 0) {
      for (; uStack_b4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_b4 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_a4 = (iStack_a0 - iVar9) + 0x1f;
    if ((int)uVar2 < (int)uStack_a4) {
LAB_142f00d7b:
      uStack_a4 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x1c0);
  uStack_78 = 0xffffffff;
  uStack_74 = uStack_a4;
  local_70 = CONCAT44(uStack_9c,iStack_a0);
  uStack_60 = CONCAT44(uStack_b4,local_b8);
  local_a8 = -1 << ((byte)uVar3 & 0x1f);
  uVar10 = uVar3 & 0xffffffe0;
  iStack_88 = local_b8;
  uStack_84 = uStack_b4;
  uStack_a4 = uVar3;
  local_80 = puVar1;
  local_68 = (longlong *)lVar7;
  puStack_58 = puVar1;
  uStack_48 = local_70;
  uStack_b0 = puVar1;
  local_90 = (longlong *)lVar7;
  uStack_50 = uStack_78;
  uStack_4c = uStack_74;
  if (uVar3 != uVar2) {
    puVar11 = *(uint **)(param_1 + 0x1b8);
    if (*(uint **)(param_1 + 0x1b8) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar5 = puVar11[(int)uVar3 >> 5] & local_a8;
    iVar9 = (int)uVar3 >> 5;
    while (uVar5 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_142f00e53;
      uVar5 = puVar11[(longlong)iVar9 + 1];
      local_a8 = 0xffffffff;
      iVar9 = iVar9 + 1;
    }
    uVar5 = -uVar5 & uVar5;
    iVar9 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar5 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_a4 = (uVar10 - iVar9) + 0x1f;
    uVar3 = uStack_a4;
    if ((int)uVar2 < (int)uStack_a4) {
LAB_142f00e53:
      uStack_a4 = uVar2;
      uVar3 = uVar2;
    }
  }
  while (((uStack_74 != uVar3 || (local_80 != puVar1)) || (local_90 != (longlong *)lVar7))) {
    uStack_78 = uStack_78 & ~uStack_84;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_88);
  }
  FUN_142f0a6b0();
  uStack_b4 = 1;
  plVar12 = (longlong *)(param_1 + 0x238);
  local_b8 = 0;
  uVar2 = *(uint *)(param_1 + 0x260);
  puVar1 = (uint *)(param_1 + 0x248);
  uStack_a4 = 0;
  iStack_a0 = 0;
  if (uVar2 != 0) {
    puVar11 = *(uint **)(param_1 + 600);
    if (*(uint **)(param_1 + 600) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar3 = *puVar11;
    iStack_a0 = 0;
    local_b8 = 0;
    while (uVar3 == 0) {
      lVar7 = (longlong)local_b8;
      iStack_a0 = iStack_a0 + 0x20;
      iVar9 = local_b8 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_b8;
      local_b8 = iVar9;
      if (bVar4) goto LAB_142f00f3d;
      uVar3 = puVar11[lVar7 + 1];
    }
    uStack_b4 = -uVar3 & uVar3;
    iVar9 = 0x1f;
    if (uStack_b4 != 0) {
      for (; uStack_b4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_b4 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_a4 = (iStack_a0 - iVar9) + 0x1f;
    if ((int)uVar2 < (int)uStack_a4) {
LAB_142f00f3d:
      uStack_a4 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x260);
  uStack_78 = 0xffffffff;
  uStack_74 = uStack_a4;
  local_70 = CONCAT44(uStack_9c,iStack_a0);
  uStack_60 = CONCAT44(uStack_b4,local_b8);
  local_a8 = -1 << ((byte)uVar3 & 0x1f);
  uVar10 = uVar3 & 0xffffffe0;
  iStack_88 = local_b8;
  uStack_84 = uStack_b4;
  uStack_a4 = uVar3;
  local_80 = puVar1;
  local_68 = plVar12;
  puStack_58 = puVar1;
  uStack_48 = local_70;
  uStack_b0 = puVar1;
  local_90 = plVar12;
  uStack_50 = uStack_78;
  uStack_4c = uStack_74;
  if (uVar3 != uVar2) {
    puVar11 = *(uint **)(param_1 + 600);
    if (*(uint **)(param_1 + 600) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar5 = puVar11[(int)uVar3 >> 5] & local_a8;
    iVar9 = (int)uVar3 >> 5;
    while (uVar5 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_142f01012;
      uVar5 = puVar11[(longlong)iVar9 + 1];
      local_a8 = 0xffffffff;
      iVar9 = iVar9 + 1;
    }
    uVar5 = -uVar5 & uVar5;
    iVar9 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar5 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_a4 = (uVar10 - iVar9) + 0x1f;
    uVar3 = uStack_a4;
    if ((int)uVar2 < (int)uStack_a4) {
LAB_142f01012:
      uStack_a4 = uVar2;
      uVar3 = uVar2;
    }
  }
  while (((uStack_74 != uVar3 || (local_80 != puVar1)) || (local_90 != plVar12))) {
    puVar8 = (undefined8 *)((longlong)(int)uStack_74 * 0xa0 + *local_90);
    *(undefined4 *)(puVar8 + 3) = 0xffffffff;
    *(undefined4 *)((longlong)puVar8 + 0x1c) = 0;
    local_b8 = (int)puVar8[0xd];
    uStack_b4 = (uint)((ulonglong)puVar8[0xd] >> 0x20);
    FString::FString(&uStack_b0,puVar8 + 0xe);
    FSoftObjectPath::operator=(puVar8 + 5,&local_b8);
    *(undefined4 *)(puVar8 + 4) = 0;
    local_a8 = (uint)*puVar8;
    uStack_a4 = (uint)((ulonglong)*puVar8 >> 0x20);
    local_b8 = -1;
    uStack_b4 = 0;
    uStack_b0._0_4_ = 0;
    FString::FString(&iStack_a0,puVar8 + 1);
    local_40 = &local_b8;
    local_38 = puVar8 + 3;
    FUN_142edc6e0(param_1 + 0x1e8,local_res8,&local_40,0);
    if (CONCAT44(uStack_9c,iStack_a0) != 0) {
      FMemory::Free();
    }
    uStack_78 = uStack_78 & ~uStack_84;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_88);
    uStack_b0 = (uint *)CONCAT44(uStack_b0._4_4_,(undefined4)uStack_b0);
  }
  return;
}



// FUNCTION 142f01110 FUN_142f01110 body=171 status=ok
// SIG undefined FUN_142f01110(void)

void FUN_142f01110(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  
  if ((((0 < *(int *)(param_1 + 0x20)) &&
       (lVar4 = *(longlong *)
                 (*(longlong *)(param_1 + 0x18) + -8 + (longlong)*(int *)(param_1 + 0x20) * 8),
       lVar4 != 0)) && (*(longlong *)(lVar4 + 0x28) != 0)) && (*(longlong *)(lVar4 + 0x30) != 0)) {
    plVar5 = *(longlong **)(lVar4 + 0x30);
    local_28 = *param_2;
    local_20 = param_2[1];
    local_18 = param_2[2];
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar5 + 0x160))(plVar5,&local_28);
  }
  plVar5 = (longlong *)param_2[2];
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



// FUNCTION 142f011c0 FUN_142f011c0 body=878 status=ok
// SIG undefined FUN_142f011c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142f013c5) */
/* WARNING: Removing unreachable block (ram,0x000142f013d2) */
/* WARNING: Removing unreachable block (ram,0x000142f013eb) */

void FUN_142f011c0(longlong param_1,longlong *param_2,float param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined1 auStack_f8 [32];
  float local_d8 [2];
  undefined4 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  float local_a4;
  undefined8 local_a0;
  longlong local_98;
  longlong local_90;
  longlong *plStack_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  lVar6 = *(longlong *)(param_1 + 0x20);
  local_d8[0] = param_3;
  local_d0 = param_4;
  local_c8 = param_2;
  if (lVar6 != 0) {
    lVar5 = FUN_142937720();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((bVar3) &&
        (lVar6 = UGameInstance::FindLocalPlayerFromControllerId(lVar6,param_4), lVar6 != 0)) &&
       (plVar7 = (longlong *)UPlayer::GetPlayerController(lVar6,0), plVar7 != (longlong *)0x0)) {
      lVar6 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
      if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_80 = *param_2;
        local_78 = param_2[1];
        local_70 = param_2[2];
        if (local_70 != 0) {
          LOCK();
          *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
          UNLOCK();
        }
        cVar4 = (**(code **)(*plVar7 + 0xff0))(plVar7,&local_80,local_d8);
        if (cVar4 != '\0') goto LAB_142f012f6;
      }
    }
  }
  if (ABS(local_d8[0]) < *(float *)(param_1 + 0x9c)) {
    local_d8[0] = 0.0;
  }
LAB_142f012f6:
  puVar13 = *(undefined8 **)(param_1 + 0xb0);
  puVar8 = puVar13 + (longlong)*(int *)(param_1 + 0xb8) * 7;
  local_b0 = puVar8;
  if (puVar13 != puVar8) {
    do {
      if (*(char *)(puVar13 + 3) == '\0') {
        plVar7 = (longlong *)puVar13[1];
        plVar12 = plVar7 + (longlong)*(int *)(puVar13 + 2) * 4;
        lVar6 = local_98;
        for (; local_98 = lVar6, plVar7 != plVar12; plVar7 = plVar7 + 4) {
          local_98 = *param_2;
          if (local_98 == *plVar7) {
            local_a0 = *puVar13;
            local_a4 = local_d8[0] * *(float *)(plVar7 + 3);
            local_90 = param_2[1];
            plStack_88 = (longlong *)param_2[2];
            if (plStack_88 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_88 + 1) = (int)plStack_88[1] + 1;
              UNLOCK();
            }
            local_c0._0_4_ = (undefined4)local_90;
            local_c0._4_4_ = (undefined4)((ulonglong)local_90 >> 0x20);
            uStack_b8._0_4_ = SUB84(plStack_88,0);
            uStack_b8._4_4_ = (undefined4)((ulonglong)plStack_88 >> 0x20);
            uStack_5c = uStack_b8._4_4_;
            uStack_60 = (undefined4)uStack_b8;
            uStack_64 = local_c0._4_4_;
            local_68 = (undefined4)local_c0;
            uStack_b8 = 0;
            local_c0 = 0;
            local_a8 = local_d0;
            cVar4 = FUN_142ef5490(param_1);
            if (cVar4 != '\0') {
              plVar10 = *(longlong **)(param_1 + 0x50);
              plVar11 = plVar10 + (longlong)*(int *)(param_1 + 0x58) * 2;
              param_2 = local_c8;
              for (; local_c8 = param_2, plVar10 != plVar11; plVar10 = plVar10 + 2) {
                if (((*plVar10 != 0) && (plVar9 = (longlong *)plVar10[1], plVar9 != (longlong *)0x0)
                    ) && (cVar4 = (**(code **)(*plVar9 + 0x38))(plVar9,local_a8), cVar4 != '\0')) {
                  if (*plVar10 == 0) {
                    plVar9 = (longlong *)0x0;
                  }
                  else {
                    plVar9 = (longlong *)plVar10[1];
                  }
                  (**(code **)(*plVar9 + 0x18))(plVar9,&local_a8);
                }
                param_2 = local_c8;
              }
            }
            plVar10 = plStack_88;
            lVar6 = local_98;
            if (plStack_88 != (longlong *)0x0) {
              LOCK();
              plVar11 = plStack_88 + 1;
              lVar5 = *plVar11;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*plStack_88)(plStack_88);
                LOCK();
                piVar1 = (int *)((longlong)plVar10 + 0xc);
                iVar2 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                lVar6 = local_98;
                if (iVar2 == 1) {
                  (**(code **)(*plVar10 + 8))(plVar10,1);
                  lVar6 = local_98;
                }
              }
            }
          }
          local_98 = lVar6;
          puVar8 = local_b0;
          lVar6 = local_98;
        }
      }
      puVar13 = puVar13 + 7;
    } while (puVar13 != puVar8);
  }
  plVar7 = (longlong *)param_2[2];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar7 + 1;
    lVar6 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  return;
}



// FUNCTION 142f01530 FUN_142f01530 body=1056 status=ok
// SIG undefined FUN_142f01530(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142f016f2) */
/* WARNING: Removing unreachable block (ram,0x000142f016fe) */
/* WARNING: Removing unreachable block (ram,0x000142f01717) */
/* WARNING: Removing unreachable block (ram,0x000142f01825) */
/* WARNING: Removing unreachable block (ram,0x000142f01831) */
/* WARNING: Removing unreachable block (ram,0x000142f0184a) */

void FUN_142f01530(longlong param_1,longlong *param_2,float param_3,undefined4 param_4,char param_5)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_ec;
  longlong local_e8;
  longlong local_e0;
  longlong *plStack_d8;
  char local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  longlong local_b8;
  longlong local_b0;
  longlong *plStack_a8;
  char local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulonglong local_70;
  
  local_70 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_128 = param_4;
  local_120 = param_1;
  if (1e-08 < ABS(param_3)) {
    cVar6 = FKey::IsGamepadKey(param_2);
    FUN_142f0e180(param_1,(cVar6 == '\0') + '\x01',param_4);
  }
  lVar10 = *(longlong *)(param_1 + 0xb0);
  lVar7 = (longlong)*(int *)(param_1 + 0xb8) * 0x38 + lVar10;
  local_98 = lVar7;
  if (lVar10 != lVar7) {
    do {
      if (*(char *)(lVar10 + 0x18) != '\0') {
        plVar8 = *(longlong **)(lVar10 + 8);
        plVar9 = plVar8 + (longlong)*(int *)(lVar10 + 0x10) * 4;
        for (; plVar8 != plVar9; plVar8 = plVar8 + 4) {
          if (*param_2 == *plVar8) {
            fVar3 = *(float *)(plVar8 + 3);
            if ((param_3 * fVar3 < 0.0) && ((param_5 == '\0' || (*(char *)(lVar10 + 0x30) != '\0')))
               ) {
              FName::FName(&local_f8,&DAT_143f3eda8,1);
              local_f0 = 0xffffffff;
              local_ec = 0;
              FName::FName(&local_e8,&DAT_143f3eda8,1);
              local_f8 = *(undefined8 *)(lVar10 + 0x28);
              local_e8 = *param_2;
              local_e0 = param_2[1];
              plStack_d8 = (longlong *)param_2[2];
              if (plStack_d8 != (longlong *)0x0) {
                LOCK();
                *(int *)(plStack_d8 + 1) = (int)plStack_d8[1] + 1;
                UNLOCK();
              }
              local_118._0_4_ = (undefined4)local_e0;
              local_118._4_4_ = (undefined4)((ulonglong)local_e0 >> 0x20);
              uStack_110._0_4_ = SUB84(plStack_d8,0);
              uStack_110._4_4_ = (undefined4)((ulonglong)plStack_d8 >> 0x20);
              uStack_84 = uStack_110._4_4_;
              uStack_88 = (undefined4)uStack_110;
              uStack_8c = local_118._4_4_;
              local_90 = (undefined4)local_118;
              uStack_110 = 0;
              local_118 = 0;
              local_d0 = param_5;
              local_f0 = param_4;
              FUN_142ee3540(local_120,&local_f8);
              plVar5 = plStack_d8;
              param_4 = local_128;
              if (plStack_d8 != (longlong *)0x0) {
                LOCK();
                plVar1 = plStack_d8 + 1;
                lVar7 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar7 == 1) {
                  (**(code **)*plStack_d8)(plStack_d8);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar5 + 0xc);
                  iVar4 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  param_4 = local_128;
                  if (iVar4 == 1) {
                    (**(code **)(*plVar5 + 8))(plVar5,1);
                    param_4 = local_128;
                  }
                }
              }
            }
            if ((0.0 < param_3 * fVar3) && ((param_5 == '\0' || (*(char *)(lVar10 + 0x30) != '\0')))
               ) {
              FName::FName(&local_c8,&DAT_143f3eda8,1);
              local_c0 = 0xffffffff;
              local_bc = 0;
              FName::FName(&local_b8,&DAT_143f3eda8,1);
              local_c8 = *(undefined8 *)(lVar10 + 0x20);
              local_b8 = *param_2;
              local_b0 = param_2[1];
              plStack_a8 = (longlong *)param_2[2];
              if (plStack_a8 != (longlong *)0x0) {
                LOCK();
                *(int *)(plStack_a8 + 1) = (int)plStack_a8[1] + 1;
                UNLOCK();
              }
              local_108._0_4_ = (undefined4)local_b0;
              local_108._4_4_ = (undefined4)((ulonglong)local_b0 >> 0x20);
              uStack_100._0_4_ = SUB84(plStack_a8,0);
              uStack_100._4_4_ = (undefined4)((ulonglong)plStack_a8 >> 0x20);
              uStack_74 = uStack_100._4_4_;
              uStack_78 = (undefined4)uStack_100;
              uStack_7c = local_108._4_4_;
              local_80 = (undefined4)local_108;
              uStack_100 = 0;
              local_108 = 0;
              local_a0 = param_5;
              local_c0 = param_4;
              FUN_142ee3540(local_120,&local_c8);
              plVar5 = plStack_a8;
              if (plStack_a8 != (longlong *)0x0) {
                LOCK();
                plVar1 = plStack_a8 + 1;
                lVar7 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar7 == 1) {
                  (**(code **)*plStack_a8)(plStack_a8);
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
          }
          lVar7 = local_98;
          param_4 = local_128;
        }
      }
      lVar10 = lVar10 + 0x38;
    } while (lVar10 != lVar7);
  }
  plVar8 = (longlong *)param_2[2];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar8 + 1;
    lVar10 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  return;
}



// FUNCTION 142f01950 FUN_142f01950 body=116 status=ok
// SIG undefined FUN_142f01950(void)

void FUN_142f01950(longlong param_1,longlong *param_2)

{
  float fVar1;
  longlong lVar2;
  char cVar3;
  
  lVar2 = *param_2;
  cVar3 = (char)param_2[5];
  if ((lVar2 == DAT_146b3e158) || (lVar2 == DAT_146b3e160)) {
    fVar1 = *(float *)(param_1 + 0x34c);
    *(undefined4 *)(param_1 + 0x34c) = 0;
    if (fVar1 < *(float *)(param_1 + 0x2d4)) {
      cVar3 = '\x01';
    }
    lVar2 = *param_2;
  }
  if ((*(longlong *)(param_1 + 0x340) == lVar2) && (cVar3 != '\0')) {
    *(int *)(param_1 + 0x348) = *(int *)(param_1 + 0x348) + 1;
    *(longlong *)(param_1 + 0x340) = *param_2;
    return;
  }
  *(undefined4 *)(param_1 + 0x348) = 0;
  *(longlong *)(param_1 + 0x340) = *param_2;
  return;
}



// FUNCTION 142f019d0 FUN_142f019d0 body=650 status=ok
// SIG undefined FUN_142f019d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142f01b43) */
/* WARNING: Removing unreachable block (ram,0x000142f01b4f) */
/* WARNING: Removing unreachable block (ram,0x000142f01b68) */

void FUN_142f019d0(longlong param_1,longlong *param_2,undefined4 param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined1 auStack_c8 [32];
  char local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_84;
  longlong local_80;
  longlong local_78;
  longlong *plStack_70;
  undefined1 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_a8 = param_4;
  cVar7 = FKey::IsGamepadKey(param_2);
  FUN_142f0e180(param_1,(cVar7 == '\0') + '\x01',param_3);
  puVar9 = *(undefined8 **)(param_1 + 0xa0);
  local_60 = puVar9 + (longlong)*(int *)(param_1 + 0xa8) * 4;
  if (puVar9 != local_60) {
    do {
      if (param_4 == '\0') {
        if (*(char *)(puVar9 + 3) == '\x01') {
LAB_142f01a7b:
          plVar8 = (longlong *)puVar9[1];
          plVar4 = plVar8 + (longlong)*(int *)(puVar9 + 2) * 3;
          for (; plVar8 != plVar4; plVar8 = plVar8 + 3) {
            if (*param_2 == *plVar8) {
              FName::FName(&local_90,&DAT_143f3eda8,1);
              local_88 = 0xffffffff;
              local_84 = 0;
              FName::FName(&local_80,&DAT_143f3eda8,1);
              local_90 = *puVar9;
              local_80 = *param_2;
              local_78 = param_2[1];
              plStack_70 = (longlong *)param_2[2];
              if (plStack_70 != (longlong *)0x0) {
                LOCK();
                *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
                UNLOCK();
              }
              local_a0._0_4_ = (undefined4)local_78;
              local_a0._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
              uStack_98._0_4_ = SUB84(plStack_70,0);
              uStack_98._4_4_ = (undefined4)((ulonglong)plStack_70 >> 0x20);
              uStack_4c = uStack_98._4_4_;
              uStack_50 = (undefined4)uStack_98;
              uStack_54 = local_a0._4_4_;
              local_58 = (undefined4)local_a0;
              local_68 = 0;
              local_84 = 1;
              uStack_98 = 0;
              local_a0 = 0;
              local_88 = param_3;
              FUN_142ee3540(param_1,&local_90);
              plVar6 = plStack_70;
              if (plStack_70 != (longlong *)0x0) {
                LOCK();
                plVar1 = plStack_70 + 1;
                lVar5 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar5 == 1) {
                  (**(code **)*plStack_70)(plStack_70);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar6 + 0xc);
                  iVar3 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*plVar6 + 8))(plVar6,1);
                  }
                }
              }
            }
            param_4 = local_a8;
          }
        }
      }
      else if (*(char *)(puVar9 + 3) == '\x02') goto LAB_142f01a7b;
      puVar9 = puVar9 + 4;
    } while (puVar9 != local_60);
  }
  plVar4 = (longlong *)param_2[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar4 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
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



// FUNCTION 142f01c60 FUN_142f01c60 body=704 status=ok
// SIG undefined FUN_142f01c60(void)

void FUN_142f01c60(longlong param_1,longlong *param_2,undefined4 param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  char local_30;
  
  cVar5 = FKey::IsGamepadKey(param_2);
  FUN_142f0e180(param_1,(cVar5 == '\0') + '\x01',param_3);
  plVar8 = *(longlong **)(param_1 + 0x50);
  plVar9 = plVar8 + (longlong)*(int *)(param_1 + 0x58) * 2;
  if (plVar8 != plVar9) {
    plVar10 = (longlong *)0x0;
    do {
      plVar6 = plVar10;
      if (*plVar8 != 0) {
        plVar6 = (longlong *)plVar8[1];
      }
      if (plVar6 != (longlong *)0x0) {
        plVar6 = plVar10;
        if (*plVar8 != 0) {
          plVar6 = (longlong *)plVar8[1];
        }
        local_70 = *param_2;
        local_68 = param_2[1];
        local_60 = param_2[2];
        if (local_60 != 0) {
          LOCK();
          *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
          UNLOCK();
        }
        (**(code **)(*plVar6 + 0x58))(plVar6,&local_70,param_3,param_4);
        plVar6 = plVar10;
        if (*plVar8 != 0) {
          plVar6 = (longlong *)plVar8[1];
        }
        cVar5 = (**(code **)(*plVar6 + 0x48))(plVar6,param_3);
        if (cVar5 != '\0') {
          if (*plVar8 != 0) {
            plVar10 = (longlong *)plVar8[1];
          }
          (**(code **)(*plVar10 + 0x50))(plVar10,param_2,param_3);
          plVar8 = (longlong *)param_2[2];
          if (plVar8 == (longlong *)0x0) {
            return;
          }
          goto LAB_142f01eb6;
        }
      }
      plVar8 = plVar8 + 2;
    } while (plVar8 != plVar9);
  }
  puVar11 = *(undefined8 **)(param_1 + 0xa0);
  puVar7 = puVar11 + (longlong)*(int *)(param_1 + 0xa8) * 4;
  for (; puVar11 != puVar7; puVar11 = puVar11 + 4) {
    plVar9 = (longlong *)puVar11[1];
    plVar8 = plVar9 + (longlong)*(int *)(puVar11 + 2) * 3;
    lVar3 = local_48;
    for (; plVar9 != plVar8; plVar9 = plVar9 + 3) {
      local_48 = *param_2;
      if (((local_48 == *plVar9) && (*(char *)(puVar11 + 3) == '\0')) &&
         ((param_4 == '\0' || (*(char *)((longlong)puVar11 + 0x19) != '\0')))) {
        plVar10 = (longlong *)param_2[2];
        local_40 = param_2[1];
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        local_58 = *puVar11;
        local_4c = 0;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        local_30 = 0;
        local_50 = param_3;
        local_38 = plVar10;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar10 + 1;
          lVar3 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
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
        local_30 = param_4;
        FUN_142ee3540(param_1,&local_58);
        plVar10 = local_38;
        lVar3 = local_48;
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_38 + 1;
          lVar4 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_38)(local_38);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            lVar3 = local_48;
            if (iVar2 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
              lVar3 = local_48;
            }
          }
        }
      }
      local_48 = lVar3;
      lVar3 = local_48;
    }
    local_48 = lVar3;
  }
  plVar8 = (longlong *)param_2[2];
  if (plVar8 != (longlong *)0x0) {
LAB_142f01eb6:
    LOCK();
    plVar9 = plVar8 + 1;
    lVar3 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  return;
}



// FUNCTION 142f01f20 FUN_142f01f20 body=629 status=ok
// SIG undefined FUN_142f01f20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142f02083) */
/* WARNING: Removing unreachable block (ram,0x000142f0208f) */
/* WARNING: Removing unreachable block (ram,0x000142f020a8) */

void FUN_142f01f20(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_7c;
  longlong local_78;
  longlong local_70;
  longlong *plStack_68;
  undefined1 local_60;
  undefined8 *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  cVar7 = FKey::IsGamepadKey(param_2);
  FUN_142f0e180(param_1,(cVar7 == '\0') + '\x01',param_3);
  puVar10 = *(undefined8 **)(param_1 + 0xa0);
  puVar8 = puVar10 + (longlong)*(int *)(param_1 + 0xa8) * 4;
  local_58 = puVar8;
  if (puVar10 != puVar8) {
    do {
      if (*(char *)(puVar10 + 3) == '\x03') {
        plVar9 = (longlong *)puVar10[1];
        plVar4 = plVar9 + (longlong)*(int *)(puVar10 + 2) * 3;
        for (; plVar9 != plVar4; plVar9 = plVar9 + 3) {
          if (*param_2 == *plVar9) {
            FName::FName(&local_88,&DAT_143f3eda8,1);
            local_80 = 0xffffffff;
            local_7c = 0;
            FName::FName(&local_78,&DAT_143f3eda8,1);
            local_88 = *puVar10;
            local_78 = *param_2;
            local_70 = param_2[1];
            plStack_68 = (longlong *)param_2[2];
            if (plStack_68 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_68 + 1) = (int)plStack_68[1] + 1;
              UNLOCK();
            }
            local_98._0_4_ = (undefined4)local_70;
            local_98._4_4_ = (undefined4)((ulonglong)local_70 >> 0x20);
            uStack_90._0_4_ = SUB84(plStack_68,0);
            uStack_90._4_4_ = (undefined4)((ulonglong)plStack_68 >> 0x20);
            uStack_44 = uStack_90._4_4_;
            uStack_48 = (undefined4)uStack_90;
            uStack_4c = local_98._4_4_;
            local_50 = (undefined4)local_98;
            local_60 = 0;
            local_7c = 2;
            uStack_90 = 0;
            local_98 = 0;
            local_80 = param_3;
            FUN_142ee3540(param_1,&local_88);
            plVar6 = plStack_68;
            if (plStack_68 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_68 + 1;
              lVar5 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*plStack_68)(plStack_68);
                LOCK();
                piVar2 = (int *)((longlong)plVar6 + 0xc);
                iVar3 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*plVar6 + 8))(plVar6,1);
                }
              }
            }
          }
          puVar8 = local_58;
        }
      }
      puVar10 = puVar10 + 4;
    } while (puVar10 != puVar8);
  }
  plVar4 = (longlong *)param_2[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar4 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
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



// FUNCTION 142f021a0 FUN_142f021a0 body=209 status=ok
// SIG undefined FUN_142f021a0(void)

void FUN_142f021a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong local_res10;
  
  if (param_2 != 0) {
    local_res10 = param_2;
    if (0 < *(int *)(param_1 + 0x18)) {
      lVar2 = *(longlong *)(param_1 + 0x10);
      lVar4 = *(longlong *)(lVar2 + -8 + (longlong)*(int *)(param_1 + 0x18) * 8);
      if ((((lVar4 != 0) && (lVar4 != param_2)) && (*(char *)(lVar4 + 0x50) != '\0')) &&
         (*(char *)(param_2 + 0x50) == '\0')) {
        lVar4 = lVar2 + (longlong)*(int *)(param_1 + 0x18) * 8;
        do {
          if (lVar4 == lVar2) {
            uVar3 = 0xffffffff;
            goto LAB_142f0221f;
          }
          plVar1 = (longlong *)(lVar4 + -8);
          lVar4 = lVar4 + -8;
        } while ((*plVar1 != 0) && (*(char *)(*plVar1 + 0x50) != '\0'));
        uVar3 = (undefined4)(lVar4 - lVar2 >> 3);
LAB_142f0221f:
        AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x20));
        TArray<UWidgetAnimation_*,FDefaultAllocator>::Insert
                  ((longlong *)(param_1 + 0x10),&local_res10,uVar3);
                    /* WARNING: Could not recover jumptable at 0x000142f02252. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x20));
        return;
      }
    }
    FUN_142f024b0();
  }
  return;
}



// FUNCTION 142f02280 FUN_142f02280 body=551 status=ok
// SIG undefined FUN_142f02280(void)

longlong FUN_142f02280(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  if (((*(char *)(param_1 + 0xaf) == '\0') && (*(char *)(param_1 + 0xb0) == '\0')) &&
     (TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x128,0)
     , param_2 != 0)) {
    if (0 < *(int *)(param_1 + 0x48)) {
      FUN_142ee8180(param_1,*(undefined8 *)
                             (*(longlong *)(param_1 + 0x40) + -8 +
                             (longlong)*(int *)(param_1 + 0x48) * 8));
    }
    plVar2 = (longlong *)FUN_142ee7390(param_1,param_2,0);
    if (plVar2 != (longlong *)0x0) {
      if (plVar2[5] == 0) {
        return 0;
      }
      if (plVar2[6] == 0) {
        return plVar2[5];
      }
      FUN_142f025f0(param_1,plVar2);
      uVar1 = *(undefined1 *)(param_1 + 0xae);
      *(undefined1 *)(param_1 + 0xae) = 1;
      *(undefined1 *)(param_1 + 0xac) = 0;
      if (plVar2[5] == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = plVar2[6];
      }
      cVar5 = '\0';
      if (lVar3 != 0) {
        if (plVar2[5] == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = (longlong *)plVar2[6];
        }
        (**(code **)(*plVar6 + 0x28))();
        if (plVar2[5] == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = (longlong *)plVar2[6];
        }
        (**(code **)(*plVar6 + 0x30))();
        if (plVar2[5] == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = (longlong *)plVar2[6];
        }
        (**(code **)(*plVar6 + 0x38))();
        cVar5 = *(char *)(param_1 + 0xac);
      }
      *(undefined1 *)(param_1 + 0xae) = uVar1;
      if (cVar5 == '\0') {
        FUN_142ee16e0(param_1,plVar2);
        if (*(char *)(param_1 + 0xac) == '\0') {
          *(undefined1 *)(param_1 + 0xac) = 1;
          uVar4 = (**(code **)(*plVar2 + 0x278))(plVar2);
          TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x118,uVar4);
          return plVar2[5];
        }
        lVar3 = (**(code **)(*plVar2 + 0x278))();
        plVar7 = *(longlong **)(param_1 + 0x40);
        plVar6 = plVar7 + *(int *)(param_1 + 0x48);
        for (; plVar7 != plVar6; plVar7 = plVar7 + 1) {
          if ((*plVar7 != 0) && (lVar3 == *(longlong *)(*plVar7 + 0x28))) goto LAB_142f023fe;
        }
      }
      else {
        lVar3 = (**(code **)(*plVar2 + 0x278))(plVar2);
        plVar7 = *(longlong **)(param_1 + 0x40);
        plVar6 = plVar7 + *(int *)(param_1 + 0x48);
        for (; plVar7 != plVar6; plVar7 = plVar7 + 1) {
          if ((*plVar7 != 0) && (lVar3 == *(longlong *)(*plVar7 + 0x28))) goto LAB_142f023fe;
        }
      }
      plVar2[5] = 0;
      plVar2[6] = 0;
      goto LAB_142f023e7;
    }
  }
  return 0;
LAB_142f023fe:
  uVar4 = (**(code **)(*plVar2 + 0x278))(plVar2);
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x118,uVar4);
LAB_142f023e7:
                    /* WARNING: Could not recover jumptable at 0x000142f023f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar3 = (**(code **)(*plVar2 + 0x278))(plVar2);
  return lVar3;
}



// FUNCTION 142f024b0 FUN_142f024b0 body=183 status=ok
// SIG undefined FUN_142f024b0(void)

void FUN_142f024b0(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    if (param_3 == '\0') {
      AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x20));
      if (*(int *)(param_1 + 0x18) == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = *(longlong *)
                 (*(longlong *)(param_1 + 0x10) + -8 + (longlong)*(int *)(param_1 + 0x18) * 8);
      }
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x20));
      if (param_2 == lVar2) {
        return;
      }
    }
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x20));
    iVar1 = *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x18) = iVar1 + 1;
    if (*(int *)(param_1 + 0x1c) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x10,iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = param_2;
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x20));
    FUN_142ee2820(param_1);
  }
  return;
}



// FUNCTION 142f02570 FUN_142f02570 body=125 status=ok
// SIG undefined FUN_142f02570(void)

void FUN_142f02570(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_1 != 0) && (lVar2 = UWidgetComponent::GetRenderTarget(), lVar2 != 0)) {
    lVar3 = FUN_142f27b90();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_142f021a0(lVar2 + 0x590,param_2,param_3);
    }
  }
  return;
}



// FUNCTION 142f025f0 FUN_142f025f0 body=145 status=ok
// SIG undefined FUN_142f025f0(void)

void FUN_142f025f0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x48) == 0) {
      FUN_14202d950(1);
    }
    iVar1 = *(int *)(param_1 + 0x48);
    *(int *)(param_1 + 0x48) = iVar1 + 1;
    if (*(int *)(param_1 + 0x4c) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x40,iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar1 * 8) = param_2;
    LOCK();
    DAT_146ace8c0 = DAT_146ace8c0 + 1;
    UNLOCK();
    if ((*(longlong *)(param_2 + 0x28) != 0) && (*(longlong *)(param_2 + 0x30) != 0)) {
      (**(code **)(**(longlong **)(param_2 + 0x30) + 0x88))();
    }
    FUN_142f04290(param_1);
  }
  return;
}



// FUNCTION 142f02690 FUN_142f02690 body=946 status=ok
// SIG undefined FUN_142f02690(void)

char * FUN_142f02690(longlong param_1,char *param_2,longlong *param_3,int param_4)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  longlong *plVar6;
  float fVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  float fVar15;
  float fVar16;
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined2 local_b0;
  undefined4 local_ae;
  undefined2 local_aa;
  longlong *local_98;
  float local_80;
  char local_7c;
  char local_7b;
  
  bVar5 = false;
  bVar4 = false;
  iVar12 = *(int *)(param_1 + 0xa8);
  param_2[0] = '\0';
  param_2[1] = '\0';
  param_2[4] = '\0';
  param_2[5] = '\0';
  param_2[6] = '\0';
  param_2[7] = '\0';
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = '\0';
  plVar13 = *(longlong **)(param_1 + 0xa0);
  plVar9 = plVar13 + (longlong)iVar12 * 4;
  if (plVar13 != plVar9) {
    do {
      if (*plVar13 == *param_3) {
        FUN_142eddb50(&local_c8);
        if ((char)local_b0 != '\x02') goto LAB_142f02729;
        fVar16 = *(float *)(param_1 + 0x74);
        goto LAB_142f0272f;
      }
      plVar13 = plVar13 + 4;
    } while (plVar13 != plVar9);
  }
  local_ae = 0;
  local_aa = 0;
  local_c8 = 0;
  local_c0 = (longlong *)0x0;
  local_b8 = 0;
  local_b0 = 0;
LAB_142f02729:
  fVar16 = *(float *)(param_1 + 0x70);
LAB_142f0272f:
  plVar13 = local_c0 + (longlong)(int)local_b8 * 3;
  fVar7 = 0.0;
  plVar9 = local_c0;
  do {
    if (plVar9 == plVar13) {
      *(float *)(param_2 + 4) = fVar16;
      param_2[1] = (byte)((char)local_b0 - 1U) < 2;
      fVar15 = 0.0;
      if ((*param_2 != '\0') && (fVar15 = fVar7, bVar4)) {
        fVar15 = fVar16;
      }
      *(float *)(param_2 + 8) = fVar15;
      TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
      ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(&local_c0);
      return param_2;
    }
    plVar11 = (longlong *)plVar9[2];
    lVar10 = *plVar9;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      LOCK();
      plVar3 = plVar11 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    plVar3 = *(longlong **)(param_1 + 0x88);
    for (plVar14 = plVar3; fVar15 = fVar7,
        plVar14 != plVar3 + (longlong)*(int *)(param_1 + 0x90) * 10; plVar14 = plVar14 + 10) {
      if (((*plVar14 == lVar10) && ((int)plVar14[3] == param_4)) &&
         (plVar6 = plVar3, *(char *)((longlong)plVar14 + 0x1c) == '\0'))
      goto joined_r0x000142f028a9;
    }
LAB_142f027e0:
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar11 + 1;
      lVar10 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          lVar10 = *plVar11;
LAB_142f02811:
          (**(code **)(lVar10 + 8))(plVar11,1);
        }
      }
    }
LAB_142f02819:
    plVar9 = plVar9 + 3;
    fVar7 = fVar15;
  } while( true );
joined_r0x000142f028a9:
  if (plVar6 == plVar3 + (longlong)*(int *)(param_1 + 0x90) * 10) goto LAB_142f027e0;
  if (((*plVar6 == lVar10) && ((int)plVar6[3] == param_4)) &&
     (*(char *)((longlong)plVar6 + 0x1c) == '\0')) {
    iVar12 = (int)(((longlong)plVar6 - (longlong)plVar3) / 0x50);
    if ((-1 < iVar12) && (iVar12 < *(int *)(param_1 + 0x90))) {
      local_98 = (longlong *)plVar3[(longlong)iVar12 * 10 + 2];
      if (local_98 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_98 + 1) = (int)local_98[1] + 1;
        UNLOCK();
      }
      local_7c = *(char *)((longlong)plVar3 + (longlong)iVar12 * 0x50 + 0x2c);
      local_80 = *(float *)(plVar3 + (longlong)iVar12 * 10 + 5);
      cVar2 = *(char *)((longlong)plVar3 + (longlong)iVar12 * 0x50 + 0x1d);
      local_7b = *(char *)((longlong)plVar3 + (longlong)iVar12 * 0x50 + 0x2d);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar11 + 1;
        lVar10 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      plVar11 = local_98;
      if (cVar2 != '\0') {
        *param_2 = '\x01';
        if ((char)local_b0 == '\x02') {
          if (local_7b != '\0') {
            bVar5 = true;
            bVar4 = true;
          }
        }
        else {
          bVar4 = bVar5;
          if (local_7c != '\0') {
            bVar5 = true;
            bVar4 = true;
          }
        }
        if (0.0 <= local_80) {
          fVar15 = local_80;
          if (fVar16 <= local_80) {
            fVar15 = fVar16;
          }
        }
        else {
          fVar15 = 0.0;
        }
        if (fVar15 <= fVar7) {
          fVar15 = fVar7;
        }
      }
      if (local_98 == (longlong *)0x0) goto LAB_142f02819;
      LOCK();
      plVar3 = local_98 + 1;
      lVar10 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar10 != 1) goto LAB_142f02819;
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 != 1) goto LAB_142f02819;
      lVar10 = *local_98;
      plVar11 = local_98;
      goto LAB_142f02811;
    }
    goto LAB_142f027e0;
  }
  plVar6 = plVar6 + 10;
  goto joined_r0x000142f028a9;
}



// FUNCTION 142f02a50 FUN_142f02a50 body=146 status=ok
// SIG undefined FUN_142f02a50(void)

void FUN_142f02a50(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_res10 [3];
  
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 0x178) = 0;
    local_res10[0] = param_2;
    cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x30);
    if ((cVar2 != '\0') && (*(longlong *)(param_1 + 0x180) != 0)) {
      puVar3 = (undefined8 *)FUN_142eee1c0(param_1);
      if (0 < *(int *)(puVar3 + 1)) {
        plVar4 = (longlong *)*puVar3;
        lVar5 = 0;
        do {
          if (((*plVar4 != 0) && (lVar1 = *(longlong *)(*plVar4 + 0x38), lVar1 != 0)) &&
             (lVar1 == param_2)) {
            return;
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar5 < *(int *)(puVar3 + 1));
      }
    }
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x158,local_res10);
  }
  return;
}



// FUNCTION 142f02af0 FUN_142f02af0 body=195 status=ok
// SIG undefined FUN_142f02af0(void)

void FUN_142f02af0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  cVar1 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x61c);
  if (cVar1 != '\0') {
    cVar1 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x614);
    if (cVar1 != '\0') {
      lVar2 = FWeakObjectPtr::Get((longlong)param_1 + 0x61c);
      if (lVar2 != 0) {
        uVar3 = FUN_142f26140();
        plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar3);
        if (plVar4 != (longlong *)0x0) {
          lVar2 = param_1[0xbe];
          if (lVar2 == 0) {
            lVar2 = (**(code **)(*plVar4 + 0x10))();
          }
          FUN_142f0c4b0(param_1,lVar2,(char)param_1[0xbc]);
                    /* WARNING: Could not recover jumptable at 0x000142f02b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x7e0))(param_1);
          return;
        }
      }
      FWeakObjectPtr::IsValid((longlong)param_1 + 0x61c);
    }
  }
  return;
}



// FUNCTION 142f02bc0 FUN_142f02bc0 body=896 status=ok
// SIG undefined FUN_142f02bc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142f02bc0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  void **ppvVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  byte bVar12;
  longlong *plVar13;
  longlong lVar14;
  void *pvVar15;
  longlong **pplVar16;
  undefined1 auStack_248 [32];
  longlong local_228;
  longlong local_220;
  undefined4 local_218;
  longlong local_210;
  longlong local_208;
  longlong local_200;
  undefined1 local_1f8;
  undefined1 local_1f0;
  longlong local_1e8;
  longlong *local_1d8;
  longlong *local_1d0;
  int local_1c8;
  undefined4 local_1c0;
  void *local_1b8;
  int local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  longlong local_1a0;
  longlong *local_198;
  longlong *local_190;
  undefined1 local_178 [272];
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  local_1a0 = param_1;
  plVar13 = (longlong *)FUN_142edd310();
  plVar5 = plVar13 + 2;
  local_198 = plVar5;
  local_190 = plVar13;
  FUN_14044f790(&local_198,plVar5);
  local_228 = 0x350;
  SWidget::SetDebugInfo
            (plVar5,"SGbxMeshWidget",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxUI\\Private\\GbxMeshWidget.cpp",
             0x9b);
  lVar14 = STSDRichInlineImage::FArguments::FArguments(local_178);
  local_1e8 = lVar14 + 0xf8;
  local_1f0 = *(undefined1 *)(lVar14 + 0xf1);
  local_200 = lVar14 + 0xe8;
  local_218 = *(undefined4 *)(lVar14 + 0x90);
  local_208 = lVar14 + 200;
  local_210 = lVar14 + 0x98;
  local_1f8 = *(undefined1 *)(lVar14 + 0xf0);
  local_220 = lVar14 + 0x78;
  local_228 = lVar14 + 0x60;
  SWidget::SWidgetConstruct(plVar5,lVar14,lVar14 + 0x30,lVar14 + 0x40);
  local_1c8 = *(int *)(param_1 + 0x108);
  plVar13[0x67] = param_1;
  local_1c0 = 0;
  local_1a8 = 0;
  local_1a4 = 0;
  local_1b8 = (void *)0x0;
  local_1ac = 0;
  local_1b0 = local_1c8;
  if (0 < local_1c8) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeGrow
              (&local_1b8);
  }
  uVar10 = local_1a4;
  uVar9 = local_1a8;
  uVar8 = local_1ac;
  iVar4 = local_1b0;
  pvVar15 = local_1b8;
  uVar7 = local_1c0;
  _guard_xfg_dispatch_icall_nop(local_1b8,0,(longlong)local_1c8 * 0x1c);
  *(undefined4 *)(plVar13 + 0x68) = uVar7;
  ppvVar3 = (void **)(plVar13 + 0x69);
  if (ppvVar3 != &local_1b8) {
    if (*ppvVar3 != (void *)0x0) {
      FMemory::Free();
    }
    *ppvVar3 = pvVar15;
    pvVar15 = (void *)0x0;
    *(int *)(plVar13 + 0x6a) = iVar4;
    *(undefined4 *)((longlong)plVar13 + 0x354) = uVar8;
  }
  *(undefined4 *)(plVar13 + 0x6b) = uVar9;
  *(undefined4 *)((longlong)plVar13 + 0x35c) = uVar10;
  if (pvVar15 != (void *)0x0) {
    FMemory::Free(pvVar15);
  }
  if (((char)plVar13[5] < '\0') || (cVar11 = (**(code **)(*plVar5 + 0x1e8))(plVar5), cVar11 != '\0')
     ) {
    bVar12 = 1;
  }
  else {
    bVar12 = 0;
  }
  lVar14 = local_1a0;
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) | bVar12;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  pplVar16 = (longlong **)(local_1a0 + 0x110);
  local_1d8 = plVar5;
  local_1d0 = plVar13;
  if (pplVar16 != &local_1d8) {
    *pplVar16 = plVar5;
    local_1d8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_1a0 + 0x118,&local_1d0);
  }
  plVar5 = local_1d0;
  if (local_1d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1d0 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_1d0)(local_1d0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_1d0 + 8))(local_1d0,1);
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar13 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
    LOCK();
    plVar5 = plVar13 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  FUN_140456c70(local_178);
  plVar5 = *(longlong **)(lVar14 + 0x118);
  plVar13 = *pplVar16;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)plVar13;
  param_2[1] = (longlong)plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar5 + 1;
      lVar14 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
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
  return param_2;
}



// FUNCTION 142f02f40 FUN_142f02f40 body=980 status=ok
// SIG undefined FUN_142f02f40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142f02f40(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  longlong *plVar6;
  char cVar7;
  byte bVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 auStack_238 [32];
  longlong local_218;
  longlong local_210;
  undefined4 local_208;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  undefined1 local_1e8;
  undefined1 local_1e0;
  longlong local_1d8;
  longlong *local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  longlong *local_1a0;
  longlong local_198;
  longlong *local_190;
  longlong *local_180;
  longlong *local_178;
  undefined1 local_168 [264];
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  local_1b8 = param_2;
  plVar9 = (longlong *)FUN_142edd400();
  plVar4 = plVar9 + 2;
  local_180 = plVar4;
  local_178 = plVar9;
  FUN_14044f790(&local_180,plVar4);
  local_218 = 0x240;
  SWidget::SetDebugInfo
            (plVar4,"SGbxNoClipConstraintCanvas",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxUI\\Private\\GbxNoClipCanvasPanel.cpp"
             ,0x42);
  lVar10 = SCanvas::FArguments::FArguments(local_168);
  local_1d8 = lVar10 + 0xf8;
  local_1e0 = *(undefined1 *)(lVar10 + 0xf1);
  local_1f0 = lVar10 + 0xe8;
  local_208 = *(undefined4 *)(lVar10 + 0x90);
  local_1f8 = lVar10 + 200;
  local_200 = lVar10 + 0x98;
  local_1e8 = *(undefined1 *)(lVar10 + 0xf0);
  local_210 = lVar10 + 0x78;
  local_218 = lVar10 + 0x60;
  SWidget::SWidgetConstruct(plVar4,lVar10,lVar10 + 0x30,lVar10 + 0x40);
  SOverlay::Construct(plVar4,lVar10);
  if (((char)plVar9[5] < '\0') || (cVar7 = (**(code **)(*plVar4 + 0x1e8))(plVar4), cVar7 != '\0')) {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) | bVar8;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar12 = plVar9 + 1;
    lVar10 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
    LOCK();
    plVar12 = plVar9 + 1;
    lVar10 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_168);
  lVar10 = *(longlong *)(param_1 + 0x130);
  plVar9[0x48] = *(longlong *)(param_1 + 0x128);
  plVar9[0x49] = lVar10;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  pplVar2 = (longlong **)(param_1 + 0x118);
  local_1c8 = plVar4;
  local_1c0 = plVar9;
  if (pplVar2 != &local_1c8) {
    *pplVar2 = plVar4;
    local_1c8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x120,&local_1c0);
  }
  plVar4 = local_1c0;
  if (local_1c0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_1c0 + 1;
    lVar10 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_1c0)(local_1c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_1c0 + 8))(local_1c0,1);
      }
    }
  }
  plVar12 = *(longlong **)(param_1 + 0x100);
  plVar4 = plVar12 + *(int *)(param_1 + 0x108);
  plVar6 = local_1b8;
  for (; local_1b8 = plVar6, plVar12 != plVar4; plVar12 = plVar12 + 1) {
    lVar10 = *plVar12;
    if (lVar10 != 0) {
      lVar11 = UCanvasPanelSlot::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        *(longlong *)(lVar10 + 0x28) = param_1;
        local_1a0 = *pplVar2;
        local_198 = *(longlong *)(param_1 + 0x120);
        if (local_198 != 0) {
          LOCK();
          *(int *)(local_198 + 8) = *(int *)(local_198 + 8) + 1;
          UNLOCK();
        }
        FUN_1420e3ab0(lVar10,&local_1a0);
      }
    }
    plVar6 = local_1b8;
  }
  plVar4 = *(longlong **)(param_1 + 0x120);
  local_190 = *pplVar2;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *plVar6 = (longlong)local_190;
  plVar6[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar12 = plVar4 + 1;
    lVar10 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar9 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return plVar6;
}



// FUNCTION 142f03320 FUN_142f03320 body=1128 status=ok
// SIG undefined FUN_142f03320(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142f03320(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong **pplVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined1 auStack_228 [32];
  longlong local_208;
  longlong local_200;
  undefined4 local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined1 local_1d8;
  undefined1 local_1d0;
  longlong local_1c8;
  longlong *local_1b8;
  longlong *local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  longlong *plStack_198;
  undefined1 local_190 [8];
  longlong *local_188;
  longlong *local_180;
  longlong *local_178;
  undefined1 local_168 [272];
  longlong *local_58;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  uVar3 = *(undefined4 *)(param_1 + 0x11c);
  local_1a8 = 0;
  lVar11 = FUN_1420cded0(local_168);
  *(undefined4 *)(lVar11 + 0x11c) = uVar3;
  *(undefined4 *)(lVar11 + 0x120) = *(undefined4 *)(param_1 + 0x120);
  plVar12 = (longlong *)FUN_142edd4a0();
  plVar4 = plVar12 + 2;
  local_180 = plVar4;
  local_178 = plVar12;
  FUN_14044f790(&local_180,plVar4);
  local_208 = 0x4f0;
  SWidget::SetDebugInfo
            (plVar4,"SGbxRetainerWidget",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxUI\\Private\\GbxRetainerBox.cpp",
             0x14);
  local_1f8 = *(undefined4 *)(lVar11 + 0x90);
  local_1c8 = lVar11 + 0xf8;
  local_1e0 = lVar11 + 0xe8;
  local_1d0 = *(undefined1 *)(lVar11 + 0xf1);
  local_1e8 = lVar11 + 200;
  local_1f0 = lVar11 + 0x98;
  local_1d8 = *(undefined1 *)(lVar11 + 0xf0);
  local_200 = lVar11 + 0x78;
  local_208 = lVar11 + 0x60;
  SWidget::SWidgetConstruct(plVar4,lVar11,lVar11 + 0x30,lVar11 + 0x40);
  FUN_1420ec540(plVar4,lVar11);
  if (-1 < (char)plVar12[5]) {
    cVar8 = (**(code **)(*plVar4 + 0x1e8))(plVar4);
    if (cVar8 == '\0') {
      bVar9 = 0;
      goto LAB_142f03476;
    }
  }
  bVar9 = 1;
LAB_142f03476:
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) | bVar9;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    plVar5 = plVar12 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
    LOCK();
    plVar5 = plVar12 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_58 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  FUN_140456c70(local_168);
  if (plVar4 != (longlong *)0x0) {
    FWeakObjectPtr::operator=(plVar12 + 0x9f,param_1);
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  pplVar2 = (longlong **)(param_1 + 0x138);
  local_1b8 = plVar4;
  local_1b0 = plVar12;
  if (pplVar2 != &local_1b8) {
    *pplVar2 = plVar4;
    local_1b8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x140,&local_1b0);
  }
  plVar4 = local_1b0;
  if (local_1b0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1b0 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_1b0)(local_1b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_1b0 + 8))(local_1b0,1);
      }
    }
  }
  FUN_142134760(*pplVar2,1);
  iVar10 = FUN_1420f9a60(param_1);
  if (0 < iVar10) {
    lVar11 = UContentWidget::GetContentSlot(param_1);
    if (*(longlong *)(lVar11 + 0x30) == 0) {
      local_1a0 = DAT_1469eb218;
      plStack_198 = DAT_1469eb220;
      if (DAT_1469eb220 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_1469eb220 + 1) = (int)DAT_1469eb220[1] + 1;
        UNLOCK();
      }
      puVar13 = &local_1a0;
      bVar7 = false;
      bVar6 = true;
    }
    else {
      lVar11 = UContentWidget::GetContentSlot(param_1);
      puVar13 = (undefined8 *)UWidget::TakeWidget(*(undefined8 *)(lVar11 + 0x30),local_190);
      bVar7 = true;
      bVar6 = false;
    }
    FUN_142130770(*pplVar2,puVar13);
    plVar4 = plStack_198;
    if (bVar6) {
      if (plStack_198 != (longlong *)0x0) {
        LOCK();
        plVar5 = plStack_198 + 1;
        lVar11 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plStack_198)(plStack_198);
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
    if ((bVar7) && (local_188 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_188 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_188)(local_188);
        LOCK();
        piVar1 = (int *)((longlong)local_188 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_188 + 8))(local_188,1);
        }
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x140);
  plVar5 = *pplVar2;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)plVar5;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar11 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
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
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar12 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142f03790 FUN_142f03790 body=1262 status=ok
// SIG undefined FUN_142f03790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142f03790(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong **pplVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  byte bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined1 auStack_408 [32];
  longlong local_3e8;
  longlong local_3e0;
  undefined4 local_3d8;
  longlong local_3d0;
  longlong local_3c8;
  longlong local_3c0;
  undefined1 local_3b8;
  undefined1 local_3b0;
  longlong local_3a8;
  undefined8 local_398;
  longlong *plStack_390;
  longlong *local_388;
  longlong *local_380;
  undefined8 *local_378;
  ulonglong local_370;
  undefined8 *local_368;
  int local_360;
  undefined4 local_35c;
  int local_358;
  undefined1 local_354;
  undefined8 local_350;
  undefined4 local_348;
  undefined8 local_340;
  longlong *local_338;
  longlong *local_330;
  longlong *local_328;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined8 local_2f8;
  longlong *plStack_2f0;
  undefined1 local_2e8 [672];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_408;
  pplVar3 = (longlong **)(param_1 + 0x6a);
  param_1[0x3a] = *(longlong *)((longlong)param_1 + 0x364);
  *(undefined4 *)(param_1 + 0x3b) = *(undefined4 *)((longlong)param_1 + 0x36c);
  *(int *)((longlong)param_1 + 0x1dc) = (int)param_1[0x6e];
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)((longlong)param_1 + 0x374);
  *(int *)((longlong)param_1 + 0x1e4) = (int)param_1[0x6f];
  if (*pplVar3 != (longlong *)0x0) {
    SRichTextBlock::SetTextStyle(*pplVar3,param_1 + 0x2a);
  }
  (**(code **)(*param_1 + 0x2d0))(param_1);
  local_378 = (undefined8 *)0x0;
  local_370 = 0;
  (**(code **)(*param_1 + 0x2d8))(param_1,&local_378);
  puVar11 = local_378;
  iVar14 = (int)local_370;
  lVar10 = param_1[0x66];
  local_368 = (undefined8 *)0x0;
  local_360 = (int)local_370;
  if ((int)local_370 == 0) {
    local_35c = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_368,local_370 & 0xffffffff,0);
    puVar13 = local_368;
    do {
      *puVar13 = *puVar11;
      lVar5 = puVar11[1];
      puVar13[1] = lVar5;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      puVar13 = puVar13 + 2;
      puVar11 = puVar11 + 2;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  uVar8 = (**(code **)(*param_1 + 0x2e8))(param_1,local_318);
  uVar9 = (**(code **)(*param_1 + 0x2e0))(param_1,local_308);
  local_3e8 = lVar10;
  FUN_1418f4140(&local_340,uVar9,uVar8,&local_368);
  plVar4 = local_338;
  local_358 = (int)(short)param_1[0x6c];
  local_350 = 0;
  local_348 = 0;
  local_354 = 1;
  if (local_338 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_338 + 1) = (int)local_338[1] + 1;
    UNLOCK();
  }
  uVar8 = FUN_140585cd0(param_1);
  lVar10 = FUN_142edd820(local_2e8);
  local_398 = local_340;
  *(undefined8 *)(lVar10 + 0x1d8) = uVar8;
  puVar11 = (undefined8 *)(lVar10 + 0x1b0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  plVar12 = plVar4;
  if (&local_398 != puVar11) {
    local_398 = *puVar11;
    plVar12 = *(longlong **)(lVar10 + 0x1b8);
    local_2f8 = local_340;
    plStack_2f0 = plVar4;
    *puVar11 = local_340;
    *(longlong **)(lVar10 + 0x1b8) = plVar4;
  }
  plStack_390 = plVar12;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar12 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar14 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*plStack_390 + 8))(plStack_390,1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar4 + 1;
    lVar5 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar14 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  *(int *)(lVar10 + 0x278) = local_358;
  *(undefined1 *)(lVar10 + 0x27c) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x280,&local_350);
  plVar12 = (longlong *)FUN_142edd540();
  plVar4 = plVar12 + 2;
  local_330 = plVar4;
  local_328 = plVar12;
  FUN_14044f790(&local_330,plVar4);
  local_3e8 = 0x520;
  SWidget::SetDebugInfo
            (plVar4,"UGbxSRichTextBlock",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxUI\\Private\\GbxRichTextBlock.cpp"
             ,0x1b);
  local_3d8 = *(undefined4 *)(lVar10 + 0x90);
  local_3a8 = lVar10 + 0xf8;
  local_3c0 = lVar10 + 0xe8;
  local_3b0 = *(undefined1 *)(lVar10 + 0xf1);
  local_3c8 = lVar10 + 200;
  local_3d0 = lVar10 + 0x98;
  local_3b8 = *(undefined1 *)(lVar10 + 0xf0);
  local_3e0 = lVar10 + 0x78;
  local_3e8 = lVar10 + 0x60;
  SWidget::SWidgetConstruct(plVar4,lVar10,lVar10 + 0x30,lVar10 + 0x40);
  FUN_142ee44f0(plVar4,lVar10);
  if (((char)plVar12[5] < '\0') || (cVar6 = (**(code **)(*plVar4 + 0x1e8))(plVar4), cVar6 != '\0'))
  {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) | bVar7;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_388 = plVar4;
  local_380 = plVar12;
  if (pplVar3 != &local_388) {
    *pplVar3 = plVar4;
    local_388 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x6b,&local_380);
  }
  plVar4 = local_380;
  if (local_380 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_380 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_380)(local_380);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar14 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*local_380 + 8))(local_380,1);
      }
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar12 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar14 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
    LOCK();
    plVar4 = plVar12 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar14 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  FUN_142ede020(local_2e8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_350);
  plVar4 = (longlong *)param_1[0x6b];
  plVar12 = *pplVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)plVar12;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar4 + 1;
      lVar10 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar14 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
  if (local_338 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_338 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_338)(local_338);
      LOCK();
      piVar2 = (int *)((longlong)local_338 + 0xc);
      iVar14 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*local_338 + 8))(local_338,1);
      }
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_378);
  return param_2;
}



// FUNCTION 142f03c80 FUN_142f03c80 body=885 status=ok
// SIG undefined FUN_142f03c80(void)

void FUN_142f03c80(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *plStack_40;
  longlong local_38;
  longlong *plStack_30;
  
  LOCK();
  iVar6 = *(int *)(param_1 + 0x338);
  *(int *)(param_1 + 0x338) = 1;
  UNLOCK();
  if (iVar6 != 0) {
    return;
  }
  if ((*(longlong *)(param_1 + 0x318) == 0) || (*(longlong *)(param_1 + 800) == 0)) {
LAB_142f03d4c:
    plVar7 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar4 = false;
    bVar9 = true;
    lVar8 = 0;
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 800) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (iVar6 < 1) goto LAB_142f03d4c;
    local_60 = *(longlong **)(param_1 + 800);
    local_68 = 0;
    if (local_60 == (longlong *)0x0) {
LAB_142f03d3c:
      plVar7 = &local_68;
      bVar4 = true;
      bVar9 = false;
      lVar8 = local_68;
    }
    else {
      LOCK();
      iVar6 = (int)local_60[1];
      bVar9 = iVar6 == 0;
      if (bVar9) {
        *(int *)(local_60 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
      while (!bVar9) {
        LOCK();
        bVar9 = iVar6 == (int)local_60[1];
        if (bVar9) {
          *(int *)(local_60 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar9) {
          if (local_60 != (longlong *)0x0) {
            local_68 = *(longlong *)(param_1 + 0x318);
          }
          goto LAB_142f03d3c;
        }
        LOCK();
        iVar6 = (int)local_60[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_60 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
      }
      plVar7 = &local_68;
      local_60 = (longlong *)0x0;
      bVar4 = true;
      bVar9 = false;
      lVar8 = 0;
    }
  }
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_40;
  if ((bVar9) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_40 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar7 = local_60;
  if ((bVar4) && (local_60 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  if (lVar8 != 0) {
    FUN_14203e030(lVar8,L"valueChangePickup");
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if ((*(longlong *)(param_1 + 0x328) != 0) && (*(longlong *)(param_1 + 0x330) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x330) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_50 = *(longlong **)(param_1 + 0x330);
      local_58 = 0;
      if (local_50 == (longlong *)0x0) {
LAB_142f03ecc:
        plVar7 = &local_58;
        bVar4 = true;
        bVar9 = false;
        lVar8 = local_58;
      }
      else {
        LOCK();
        iVar6 = (int)local_50[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_50 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar6 == (int)local_50[1];
          if (bVar9) {
            *(int *)(local_50 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar9) {
            if (local_50 != (longlong *)0x0) {
              local_58 = *(longlong *)(param_1 + 0x328);
            }
            goto LAB_142f03ecc;
          }
          LOCK();
          iVar6 = (int)local_50[1];
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(local_50 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar7 = &local_58;
        local_50 = (longlong *)0x0;
        bVar4 = true;
        bVar9 = false;
        lVar8 = 0;
      }
      goto LAB_142f03ef1;
    }
  }
  plVar7 = &local_38;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  lVar8 = 0;
  bVar4 = false;
  bVar9 = true;
LAB_142f03ef1:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_30;
  if ((bVar9) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  plVar7 = local_50;
  if ((bVar4) && (local_50 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_50 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  if (lVar8 != 0) {
    FUN_14203e030(lVar8,L"valueChangePickup");
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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



// FUNCTION 142f04000 FUN_142f04000 body=363 status=ok
// SIG undefined FUN_142f04000(void)

void FUN_142f04000(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  plVar1 = (longlong *)(param_1 + 0x148);
  iVar4 = (**(code **)(*plVar1 + 0x20))(plVar1);
  iVar8 = 0;
  lVar11 = 0;
  if (0 < iVar4) {
    do {
      plVar6 = (longlong *)(**(code **)(*plVar1 + 0x40))(plVar1,iVar8);
      if (plVar6 != (longlong *)0x0) {
        if ((int)plVar6[0x5c] != iVar8) {
          (**(code **)(*plVar6 + 0x498))(plVar6,iVar8);
        }
        if ((iVar8 < 0) || (iVar5 = (**(code **)(*plVar1 + 0x20))(plVar1), iVar5 <= iVar8)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((iVar8 == -1) || (!bVar3)) {
LAB_142f040c8:
          uVar9 = 0xffffffff;
          uVar10 = 0xffffffff;
        }
        else if ((*(char *)(param_1 + 0x17c) == '\x01') &&
                (iVar5 = *(int *)(param_1 + 0x178), 0 < iVar5)) {
          uVar10 = (longlong)iVar8 % (longlong)iVar5 & 0xffffffff;
          uVar9 = (longlong)iVar8 / (longlong)iVar5 & 0xffffffff;
        }
        else {
          if ((*(char *)(param_1 + 0x17c) != '\0') || (iVar5 = *(int *)(param_1 + 0x174), iVar5 < 1)
             ) goto LAB_142f040c8;
          uVar9 = (longlong)iVar8 % (longlong)iVar5 & 0xffffffff;
          uVar10 = (longlong)iVar8 / (longlong)iVar5 & 0xffffffff;
        }
        if ((iVar8 < 0) || (*(int *)(param_1 + 0x108) <= iVar8)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((bVar3) &&
           (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x100) + lVar11 * 8), lVar2 != 0)) {
          lVar7 = UGridSlot::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            FUN_142130580(lVar2,uVar9);
            FUN_142134770(lVar2,uVar10);
          }
        }
      }
      iVar8 = iVar8 + 1;
      lVar11 = lVar11 + 1;
    } while (lVar11 < iVar4);
  }
  return;
}



// FUNCTION 142f04170 FUN_142f04170 body=110 status=ok
// SIG undefined FUN_142f04170(void)

void FUN_142f04170(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  plVar1 = (longlong *)(param_1 + 0x860);
  iVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      plVar3 = (longlong *)(**(code **)(*plVar1 + 0x40))(plVar1,iVar4);
      if ((plVar3 != (longlong *)0x0) && ((int)plVar3[0x5c] != iVar4)) {
        (**(code **)(*plVar3 + 0x498))(plVar3,iVar4);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



// FUNCTION 142f041e0 FUN_142f041e0 body=155 status=ok
// SIG undefined FUN_142f041e0(void)

void FUN_142f041e0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x98)) {
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0x90));
      if (plVar3 != (longlong *)0x0) {
        lVar1 = (**(code **)(*plVar3 + 0x278))();
        if (lVar1 == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          uVar2 = FUN_142f2b5a0();
          plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
        }
        (**(code **)(*plVar3 + 0x110))(plVar3,*(undefined1 *)(param_1 + 0xc2));
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar4 < *(int *)(param_1 + 0x98));
  }
  return;
}



// FUNCTION 142f04290 FUN_142f04290 body=395 status=ok
// SIG undefined FUN_142f04290(void)

void FUN_142f04290(longlong param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 uVar6;
  int iVar7;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar8;
  
  iVar1 = *(int *)(param_1 + 0x48);
  uVar9 = 0;
  iVar11 = 0;
  uVar8 = uVar9;
  uVar10 = uVar9;
  uVar12 = uVar9;
  iVar7 = iVar1;
  if (0 < iVar1) {
    do {
      iVar7 = (int)uVar8;
      if ((((-1 < iVar7) && (iVar7 < *(int *)(param_1 + 0x48))) &&
          (plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x40) + uVar10 * 8),
          plVar5 != (longlong *)0x0)) && (lVar3 = (**(code **)(*plVar5 + 0x278))(), lVar3 != 0)) {
        uVar4 = FUN_142f2b5a0();
        plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
        if ((plVar5 != (longlong *)0x0) &&
           (cVar2 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar2 != '\0')) {
          uVar12 = uVar8;
        }
      }
      iVar11 = (int)uVar12;
      uVar10 = uVar10 + 1;
      uVar8 = (ulonglong)(iVar7 + 1);
    } while ((longlong)uVar10 < (longlong)iVar1);
    iVar7 = *(int *)(param_1 + 0x48);
  }
  if (((0 < iVar7) &&
      (plVar5 = *(longlong **)
                 (*(longlong *)(param_1 + 0x40) + -8 + (longlong)*(int *)(param_1 + 0x48) * 8),
      plVar5 != (longlong *)0x0)) && (lVar3 = (**(code **)(*plVar5 + 0x278))(), lVar3 != 0)) {
    uVar4 = FUN_142f2b5a0();
    plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x100))(plVar5);
    }
  }
  if (0 < iVar1) {
    uVar8 = uVar9;
    do {
      iVar7 = (int)uVar8;
      if ((((-1 < (longlong)uVar9) && (iVar7 < *(int *)(param_1 + 0x48))) &&
          (plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x40) + uVar9 * 8),
          plVar5 != (longlong *)0x0)) && (lVar3 = (**(code **)(*plVar5 + 0x278))(), lVar3 != 0)) {
        uVar4 = FUN_142f2b5a0();
        plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
        if (plVar5 != (longlong *)0x0) {
          if (iVar7 == iVar1 + -1) {
            (**(code **)(*plVar5 + 0x110))(plVar5,*(undefined1 *)(param_1 + 0xc2));
          }
          else {
            if ((longlong)uVar9 < (longlong)iVar11) {
              uVar6 = 1;
            }
            else {
              uVar6 = *(undefined1 *)(param_1 + 0xc2);
            }
            (**(code **)(*plVar5 + 0x110))(plVar5,uVar6);
          }
        }
      }
      uVar8 = (ulonglong)(iVar7 + 1);
      uVar9 = uVar9 + 1;
    } while ((longlong)uVar9 < (longlong)iVar1);
  }
  return;
}



// FUNCTION 142f04420 FUN_142f04420 body=388 status=ok
// SIG undefined FUN_142f04420(void)

void FUN_142f04420(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 local_38;
  int iStack_30;
  uint uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  uint uStack_1c;
  
  iVar2 = *(int *)(param_1 + 0x280);
  uVar9 = 0;
  uVar8 = uVar9;
  if (0 < iVar2) {
    do {
      local_38 = 0;
      iStack_30 = -1;
      uStack_2c = uStack_2c & 0xff000000;
      iVar7 = (int)uVar8;
      if ((-1 < iVar7) && (iVar7 < iVar2)) {
        uStack_2c = CONCAT31(uStack_2c._1_3_,iVar7 == *(int *)(param_1 + 0x270));
        iStack_30 = iVar7;
        if ((*(int *)(param_1 + 0x38c) <= iVar7) &&
           ((iVar7 < *(int *)(param_1 + 0x38c) + *(int *)(param_1 + 0x390) &&
            (local_38 = uVar9, iVar7 != -1)))) {
          piVar3 = *(int **)(param_1 + 0x3a8);
          piVar1 = piVar3 + *(int *)(param_1 + 0x3b0);
          for (; piVar3 != piVar1; piVar3 = piVar3 + 1) {
            iVar2 = *piVar3;
            if (((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 0x3a0))) &&
               (*(int *)(*(longlong *)(param_1 + 0x398) + 0x28 + (longlong)iVar2 * 0x30) == iVar7))
            {
              local_38 = *(ulonglong *)
                          (*(longlong *)(param_1 + 0x398) + 0x18 + (longlong)iVar2 * 0x30);
              break;
            }
          }
        }
      }
      if (((*(longlong *)(param_1 + 0x328) != 0) &&
          (lVar4 = FWeakObjectPtr::Get(param_1 + 800), lVar4 != 0)) &&
         (lVar4 = UObject::FindFunction(lVar4,*(undefined8 *)(param_1 + 0x328)), lVar4 != 0)) {
        local_28 = (undefined4)local_38;
        uStack_24 = local_38._4_4_;
        iStack_20 = iStack_30;
        uStack_1c = uStack_2c;
        plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + 800);
        uVar6 = FUN_14178ac60(plVar5,*(undefined8 *)(param_1 + 0x328));
        (**(code **)(*plVar5 + 0x208))(plVar5,uVar6,&local_28);
      }
      iVar2 = *(int *)(param_1 + 0x280);
      uVar8 = (ulonglong)(iVar7 + 1U);
    } while ((int)(iVar7 + 1U) < iVar2);
  }
  return;
}



// FUNCTION 142f045b0 FUN_142f045b0 body=182 status=ok
// SIG undefined FUN_142f045b0(void)

void FUN_142f045b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x80);
  lVar5 = (longlong)*(int *)(param_1 + 0x88) * 0x30 + lVar4;
  for (; lVar4 != lVar5; lVar4 = lVar4 + 0x30) {
    lVar1 = *(longlong *)(lVar4 + 0x18);
    if (lVar1 != 0) {
      lVar3 = AGameModeTitleScene::GetPrivateStaticClass();
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
        (**(code **)(*(longlong *)(lVar1 + 0x308) + 0x10))
                  ((longlong *)(lVar1 + 0x308),param_1,param_2);
      }
    }
  }
  return;
}



// FUNCTION 142f04670 FUN_142f04670 body=913 status=ok
// SIG undefined FUN_142f04670(void)

void FUN_142f04670(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  undefined *puVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  longlong local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  uint local_b0;
  undefined *local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong *local_88;
  uint local_80;
  undefined *local_78;
  longlong local_68;
  longlong *plStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48;
  uint local_40;
  undefined1 local_38;
  undefined7 uStack_37;
  
  if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 8);
    LOCK();
    iVar8 = *piVar1;
    if (iVar8 == 0) {
      *piVar1 = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (0 < iVar8) {
      local_d0 = *(longlong **)(param_1 + 0x10);
      local_d8 = 0;
      if (local_d0 == (longlong *)0x0) {
LAB_142f04709:
        plVar9 = &local_d8;
        bVar4 = true;
        bVar11 = false;
        lVar10 = local_d8;
      }
      else {
        LOCK();
        iVar8 = (int)local_d0[1];
        bVar11 = iVar8 == 0;
        if (bVar11) {
          *(int *)(local_d0 + 1) = 0;
          iVar8 = 0;
        }
        UNLOCK();
        while (!bVar11) {
          LOCK();
          bVar11 = iVar8 == (int)local_d0[1];
          if (bVar11) {
            *(int *)(local_d0 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar11) {
            if (local_d0 != (longlong *)0x0) {
              local_d8 = *(longlong *)(param_1 + 8);
            }
            goto LAB_142f04709;
          }
          LOCK();
          iVar8 = (int)local_d0[1];
          bVar11 = iVar8 == 0;
          if (bVar11) {
            *(int *)(local_d0 + 1) = 0;
            iVar8 = 0;
          }
          UNLOCK();
        }
        plVar9 = &local_d8;
        local_d0 = (longlong *)0x0;
        bVar4 = true;
        bVar11 = false;
        lVar10 = 0;
      }
      goto LAB_142f0472e;
    }
  }
  plVar9 = &local_68;
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  bVar4 = false;
  bVar11 = true;
  lVar10 = 0;
LAB_142f0472e:
  plVar3 = (longlong *)plVar9[1];
  plVar9[1] = 0;
  plVar2 = plStack_60;
  *plVar9 = 0;
  if ((bVar11) && (plStack_60 != (longlong *)0x0)) {
    LOCK();
    plVar9 = plStack_60 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_60 + 8))(plStack_60,1);
      }
    }
  }
  plVar9 = local_d0;
  if ((bVar4) && (local_d0 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_d0 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  if (lVar10 != 0) {
    plVar9 = *(longlong **)(lVar10 + 0xd8);
    lVar5 = *(longlong *)(lVar10 + 0xd0);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    if (lVar5 != 0) {
      local_88 = (longlong *)0x0;
      local_80 = 0;
      local_98 = 0xffffffffffffffff;
      uStack_90 = 0xffffffffffffffff;
      cVar7 = FUN_14203acd0(lVar5,"AutoSize",&local_98);
      puVar6 = PTR_s_shrink_14673cb38;
      if (cVar7 == '\0') {
        if ((local_80 >> 6 & 1) != 0) {
          (**(code **)(*local_88 + 0x10))(local_88,&local_98,local_78);
          local_88 = (longlong *)0x0;
        }
        local_80 = 6;
        local_78 = puVar6;
        FUN_1420520d0(lVar10,&local_98);
      }
      local_b8 = (longlong *)0x0;
      local_b0 = 0;
      local_c8 = 0xffffffffffffffff;
      uStack_c0 = 0xffffffffffffffff;
      cVar7 = FUN_14203acd0(lVar5,"VerticalAlign",&local_c8);
      puVar6 = PTR_DAT_14673cb18;
      if (cVar7 == '\0') {
        if ((local_b0 >> 6 & 1) != 0) {
          (**(code **)(*local_b8 + 0x10))(local_b8,&local_c8,local_a8);
          local_b8 = (longlong *)0x0;
        }
        local_b0 = 6;
        local_a8 = puVar6;
        FUN_1420560e0(lVar10,&local_c8);
      }
      FUN_142055240(lVar10,0);
      local_48 = (longlong *)0x0;
      local_58 = 0xffffffffffffffff;
      uStack_50 = 0xffffffffffffffff;
      local_40 = 2;
      local_38 = 1;
      FUN_142055740(lVar10,PTR_s_scaleform_gfx_Extensions_14673cb40,"enabled",&local_58);
      if ((local_40 >> 6 & 1) != 0) {
        (**(code **)(*local_48 + 0x10))(local_48,&local_58,CONCAT71(uStack_37,local_38));
      }
      if ((local_b0 >> 6 & 1) != 0) {
        (**(code **)(*local_b8 + 0x10))(local_b8,&local_c8,local_a8);
        local_b8 = (longlong *)0x0;
      }
      local_b0 = 0;
      if ((local_80 >> 6 & 1) != 0) {
        (**(code **)(*local_88 + 0x10))(local_88,&local_98,local_78);
      }
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar9 + 1;
      lVar10 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar3 + 1;
    lVar10 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 142f04a10 FUN_142f04a10 body=754 status=ok
// SIG undefined FUN_142f04a10(void)

void FUN_142f04a10(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  bool bVar12;
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *plStack_90;
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar8 = *piVar1;
    if (iVar8 == 0) {
      *piVar1 = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (0 < iVar8) {
      local_a0 = *(longlong **)(param_1 + 0x30);
      local_a8 = 0;
      if (local_a0 == (longlong *)0x0) {
LAB_142f04ab3:
        plVar9 = &local_a8;
        bVar5 = true;
        bVar12 = false;
        lVar11 = local_a8;
      }
      else {
        LOCK();
        iVar8 = (int)local_a0[1];
        bVar12 = iVar8 == 0;
        if (bVar12) {
          *(int *)(local_a0 + 1) = 0;
          iVar8 = 0;
        }
        UNLOCK();
        while (!bVar12) {
          LOCK();
          bVar12 = iVar8 == (int)local_a0[1];
          if (bVar12) {
            *(int *)(local_a0 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar12) {
            if (local_a0 != (longlong *)0x0) {
              local_a8 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_142f04ab3;
          }
          LOCK();
          iVar8 = (int)local_a0[1];
          bVar12 = iVar8 == 0;
          if (bVar12) {
            *(int *)(local_a0 + 1) = 0;
            iVar8 = 0;
          }
          UNLOCK();
        }
        plVar9 = &local_a8;
        local_a0 = (longlong *)0x0;
        bVar5 = true;
        bVar12 = false;
        lVar11 = 0;
      }
      goto LAB_142f04ada;
    }
  }
  plVar9 = &local_98;
  local_98 = 0;
  plStack_90 = (longlong *)0x0;
  bVar5 = false;
  bVar12 = true;
  lVar11 = 0;
LAB_142f04ada:
  plVar3 = (longlong *)plVar9[1];
  plVar9[1] = 0;
  *plVar9 = 0;
  plVar9 = plStack_90;
  if ((bVar12) && (plStack_90 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_90 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_90 + 8))(plStack_90,1);
      }
    }
  }
  plVar9 = local_a0;
  if ((bVar5) && (local_a0 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_a0 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  if (lVar11 != 0) {
    plVar9 = *(longlong **)(lVar11 + 0x80);
    uVar4 = *(undefined8 *)(lVar11 + 0x78);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    cVar7 = FTcpMessageTransportConnection::Init(uVar4);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar9 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    if (cVar7 != '\0') {
      FWeakObjectPtr::operator=(&local_res10,param_1);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      local_58 = 0;
      local_48 = 0;
      puVar10 = (undefined8 *)FUN_140438ef0(0x28,local_78);
      plVar9 = plVar3;
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &PTR_FUN_1459930d0;
        puVar10[1] = param_1;
        puVar10[2] = lVar11;
        puVar10[3] = plVar3;
        *(undefined4 *)(puVar10 + 4) = local_res10;
        *(undefined4 *)((longlong)puVar10 + 0x24) = local_res14;
        plVar9 = (longlong *)0x0;
      }
      local_88[0] = &LAB_142ee37b0;
      FUN_14208c5d0(param_1,local_88);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar9 + 1;
        lVar11 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar3 + 1;
    lVar11 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 142f04d10 FUN_142f04d10 body=540 status=ok
// SIG undefined FUN_142f04d10(void)

void FUN_142f04d10(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_50 = *(longlong **)(param_1 + 0x10);
      local_58 = 0;
      if (local_50 == (longlong *)0x0) {
LAB_142f04dad:
        plVar7 = &local_58;
        bVar4 = true;
        bVar10 = false;
        lVar9 = local_58;
      }
      else {
        LOCK();
        iVar6 = (int)local_50[1];
        bVar10 = iVar6 == 0;
        if (bVar10) {
          *(int *)(local_50 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar10) {
          LOCK();
          bVar10 = iVar6 == (int)local_50[1];
          if (bVar10) {
            *(int *)(local_50 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar10) {
            if (local_50 != (longlong *)0x0) {
              local_58 = *(longlong *)(param_1 + 8);
            }
            goto LAB_142f04dad;
          }
          LOCK();
          iVar6 = (int)local_50[1];
          bVar10 = iVar6 == 0;
          if (bVar10) {
            *(int *)(local_50 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar7 = &local_58;
        local_50 = (longlong *)0x0;
        bVar4 = true;
        bVar10 = false;
        lVar9 = 0;
      }
      goto LAB_142f04dd4;
    }
  }
  plVar7 = &local_48;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  bVar4 = false;
  bVar10 = true;
  lVar9 = 0;
LAB_142f04dd4:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_40;
  if ((bVar10) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_40 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar7 = local_50;
  if ((bVar4) && (local_50 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_50 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  if (lVar9 != 0) {
    uVar8 = FSnapshotWidgetReflectorNode::GetWidgetType(lVar9,local_38);
    uVar8 = FText::ToString(uVar8);
    FUN_142f0fdc0(param_1,uVar8,1,0);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_30 + 1;
      lVar9 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
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



// FUNCTION 142f04f30 FUN_142f04f30 body=124 status=ok
// SIG undefined FUN_142f04f30(void)

void FUN_142f04f30(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (param_1[0x2e] != 0) {
    lVar4 = *param_1;
    uVar5 = FSnapshotWidgetReflectorNode::GetWidgetType(param_1[0x2e],local_28);
    (**(code **)(lVar4 + 0x2b0))(param_1,uVar5,1,0);
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
  return;
}



// FUNCTION 142f04fb0 FUN_142f04fb0 body=407 status=ok
// SIG undefined FUN_142f04fb0(void)

void FUN_142f04fb0(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *local_48;
  uint local_40;
  uint local_3c;
  undefined8 *puVar6;
  
  puVar9 = (undefined8 *)0x0;
  if (param_2 != (undefined8 *)0x0) {
    lVar3 = UGPasswordResetPage::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142f0500f;
  }
  param_2 = puVar9;
LAB_142f0500f:
  FWeakObjectPtr::operator=(param_1 + 0x1c,param_2);
  iVar2 = FUN_1420f9a60(param_1 + -0x150);
  local_48 = (undefined8 *)0x0;
  iVar8 = 0;
  local_3c = 0;
  puVar6 = puVar9;
  puVar7 = puVar9;
  puVar10 = puVar9;
  puVar11 = puVar9;
  if (0 < iVar2) {
    do {
      lVar3 = UPanelWidget::GetChildAt(param_1 + -0x150,puVar6);
      if (lVar3 != 0) {
        lVar4 = FUN_142f2ce20();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          iVar8 = (int)puVar7;
          local_40 = iVar8 + 1;
          if ((int)puVar10 < (int)local_40) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,puVar7);
            puVar10 = (undefined8 *)(ulonglong)local_3c;
            puVar11 = local_48;
          }
          puVar7 = (undefined8 *)(ulonglong)local_40;
          puVar11[iVar8] = lVar3;
        }
      }
      iVar8 = (int)puVar7;
      uVar5 = (int)puVar6 + 1;
      puVar6 = (undefined8 *)(ulonglong)uVar5;
    } while ((int)uVar5 < iVar2);
  }
  (**(code **)(*(longlong *)(param_1 + -8) + 0x38))(param_1 + -8);
  puVar6 = (undefined8 *)((ulonglong)((longlong)(puVar11 + iVar8) + (7 - (longlong)puVar11)) >> 3);
  if (puVar11 + iVar8 < puVar11) {
    puVar6 = puVar9;
  }
  puVar7 = puVar11;
  if (puVar6 != (undefined8 *)0x0) {
    do {
      (**(code **)(*(longlong *)(param_1 + -8) + 0x28))(param_1 + -8,*puVar7);
      puVar9 = (undefined8 *)((longlong)puVar9 + 1);
      puVar7 = puVar7 + 1;
    } while (puVar9 != puVar6);
  }
  if (puVar11 != (undefined8 *)0x0) {
    FMemory::Free(puVar11);
  }
  FUN_142ebc100(param_1);
  return;
}



// FUNCTION 142f05150 FUN_142f05150 body=407 status=ok
// SIG undefined FUN_142f05150(void)

void FUN_142f05150(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *local_48;
  uint local_40;
  uint local_3c;
  undefined8 *puVar6;
  
  puVar9 = (undefined8 *)0x0;
  if (param_2 != (undefined8 *)0x0) {
    lVar3 = UGPasswordResetPage::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142f051af;
  }
  param_2 = puVar9;
LAB_142f051af:
  FWeakObjectPtr::operator=(param_1 + 0x18,param_2);
  iVar2 = FUN_1420f9a60(param_1 + -0x868);
  local_48 = (undefined8 *)0x0;
  iVar8 = 0;
  local_3c = 0;
  puVar6 = puVar9;
  puVar7 = puVar9;
  puVar10 = puVar9;
  puVar11 = puVar9;
  if (0 < iVar2) {
    do {
      lVar3 = UPanelWidget::GetChildAt(param_1 + -0x868,puVar6);
      if (lVar3 != 0) {
        lVar4 = FUN_142f2ce20();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          iVar8 = (int)puVar7;
          local_40 = iVar8 + 1;
          if ((int)puVar10 < (int)local_40) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,puVar7);
            puVar10 = (undefined8 *)(ulonglong)local_3c;
            puVar11 = local_48;
          }
          puVar7 = (undefined8 *)(ulonglong)local_40;
          puVar11[iVar8] = lVar3;
        }
      }
      iVar8 = (int)puVar7;
      uVar5 = (int)puVar6 + 1;
      puVar6 = (undefined8 *)(ulonglong)uVar5;
    } while ((int)uVar5 < iVar2);
  }
  (**(code **)(*(longlong *)(param_1 + -8) + 0x38))(param_1 + -8);
  puVar6 = (undefined8 *)((ulonglong)((longlong)(puVar11 + iVar8) + (7 - (longlong)puVar11)) >> 3);
  if (puVar11 + iVar8 < puVar11) {
    puVar6 = puVar9;
  }
  puVar7 = puVar11;
  if (puVar6 != (undefined8 *)0x0) {
    do {
      (**(code **)(*(longlong *)(param_1 + -8) + 0x28))(param_1 + -8,*puVar7);
      puVar9 = (undefined8 *)((longlong)puVar9 + 1);
      puVar7 = puVar7 + 1;
    } while (puVar9 != puVar6);
  }
  if (puVar11 != (undefined8 *)0x0) {
    FMemory::Free(puVar11);
  }
  FUN_142ebc100(param_1);
  return;
}



// FUNCTION 142f052f0 FUN_142f052f0 body=122 status=ok
// SIG undefined FUN_142f052f0(void)

void FUN_142f052f0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = UGPasswordResetPage::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142f0533d;
  }
  param_2 = 0;
LAB_142f0533d:
  FWeakObjectPtr::operator=(param_1 + 0x9c,param_2);
  FUN_142ef2440(param_1 + -0x208);
  FUN_142ebc100(param_1);
  return;
}



// FUNCTION 142f05370 FUN_142f05370 body=230 status=ok
// SIG undefined FUN_142f05370(void)

void FUN_142f05370(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (param_2 != 0) {
    uVar1 = UBlendableInterface::GetPrivateStaticClass();
    plVar2 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      local_24 = param_3[1];
      local_18 = param_3[4];
      local_28 = *param_3;
      local_20 = param_3[2];
      local_14 = param_3[5];
      local_1c = param_3[3];
      local_10 = param_3[6];
      local_c = param_3[7];
      FUN_142f11010(param_1,param_2,&local_28);
      local_28 = *param_3;
      local_24 = param_3[1];
      local_20 = param_3[2];
      local_1c = param_3[3];
      local_18 = param_3[4];
      local_14 = param_3[5];
      local_10 = param_3[6];
      local_c = param_3[7];
      (**(code **)(*plVar2 + 0x18))(plVar2,param_1,&local_28);
    }
  }
  return;
}



// FUNCTION 142f05460 FUN_142f05460 body=202 status=ok
// SIG undefined FUN_142f05460(void)

void FUN_142f05460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FWeakObjectPtr::operator=(&local_48,0);
  FWeakObjectPtr::operator=(&uStack_40,0);
  FWeakObjectPtr::operator=(&local_38,0);
  FWeakObjectPtr::operator=(&uStack_30,0);
  FWeakObjectPtr::operator=(&local_48,param_3);
  FWeakObjectPtr::operator=(&uStack_40,param_4);
  FWeakObjectPtr::operator=(&local_38,param_5);
  FWeakObjectPtr::operator=(&uStack_30,param_6);
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_18 = local_38;
  uStack_14 = uStack_34;
  uStack_10 = uStack_30;
  uStack_c = uStack_2c;
  FUN_142f05370(param_1,param_2,&local_28);
  return;
}



// FUNCTION 142f05530 FUN_142f05530 body=117 status=ok
// SIG undefined FUN_142f05530(void)

void FUN_142f05530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 1;
  local_18 = (undefined8 *)0x0;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_18,0);
  puVar1 = local_18;
  *local_18 = param_3;
  FUN_142f05630(param_1,param_2,&local_18);
  if (puVar1 != (undefined8 *)0x0) {
    FMemory::Free(puVar1);
  }
  return;
}



// FUNCTION 142f055b0 FUN_142f055b0 body=124 status=ok
// SIG undefined FUN_142f055b0(void)

void FUN_142f055b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *local_18;
  undefined8 local_10;
  
  lVar1 = *(longlong *)(param_1 + 0x2e0);
  if (lVar1 != 0) {
    local_18 = (undefined8 *)0x0;
    local_10 = 1;
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_18,0);
    puVar2 = local_18;
    *local_18 = param_3;
    FUN_142f05630(lVar1,param_2,&local_18);
    if (puVar2 != (undefined8 *)0x0) {
      FMemory::Free(puVar2);
    }
  }
  return;
}



// FUNCTION 142f05630 FUN_142f05630 body=646 status=ok
// SIG undefined FUN_142f05630(void)

ulonglong FUN_142f05630(longlong param_1,longlong *param_2,longlong **param_3)

{
  PSRWLOCK SRWLock;
  uint uVar1;
  int iVar2;
  ulonglong extraout_RAX;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *_Src;
  longlong *local_58;
  ulonglong local_50;
  undefined1 local_48;
  longlong local_40;
  longlong lStack_38;
  longlong *local_30;
  
  SRWLock = (PSRWLOCK)(param_1 + 0x90);
  AcquireSRWLockShared(SRWLock);
  LOCK();
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
  UNLOCK();
  plVar3 = (longlong *)(param_1 + 0x80);
  lVar6 = *plVar3;
  lVar7 = (longlong)*(int *)(param_1 + 0x88) * 0x30 + lVar6;
  if (lVar6 != lVar7) {
    do {
      if (*(longlong *)(lVar6 + 0x18) == *param_2) {
        TArray<FName,FDefaultAllocator>::operator=(lVar6,param_3);
        ReleaseSRWLockShared(SRWLock);
        LOCK();
        *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
        UNLOCK();
        return extraout_RAX;
      }
      lVar6 = lVar6 + 0x30;
    } while (lVar6 != lVar7);
  }
  ReleaseSRWLockShared(SRWLock);
  LOCK();
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
  UNLOCK();
  plVar5 = (longlong *)0x0;
  local_48 = 1;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  local_30 = (longlong *)0x0;
  local_40 = 0;
  lStack_38 = 0;
  _Src = plVar5;
  if (&local_58 != param_3) {
    uVar1 = *(uint *)(param_3 + 1);
    plVar9 = *param_3;
    local_50 = (ulonglong)uVar1;
    _Src = (longlong *)0x0;
    if (uVar1 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_58,uVar1,0);
      _Src = local_58;
      _guard_xfg_dispatch_icall_nop(local_58,plVar9,(longlong)(int)uVar1 << 3);
    }
  }
  lVar6 = *param_2;
  plVar9 = (longlong *)param_2[1];
  local_40 = lVar6;
  lStack_38 = lVar6;
  local_30 = plVar9;
  AcquireSRWLockExclusive(SRWLock);
  LOCK();
  *(undefined4 *)(param_1 + 0x98) = 1;
  UNLOCK();
  iVar2 = *(int *)(param_1 + 0x88);
  *(int *)(param_1 + 0x88) = iVar2 + 1;
  if (*(int *)(param_1 + 0x8c) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar3,iVar2);
  }
  lVar7 = (longlong)(int)local_50;
  puVar8 = (undefined8 *)((longlong)iVar2 * 0x30 + *plVar3);
  *puVar8 = 0;
  *(int *)(puVar8 + 1) = (int)local_50;
  if ((int)local_50 == 0) {
    *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
              (puVar8,local_50 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop((void *)*puVar8,_Src,lVar7 << 3);
  }
  puVar8[3] = local_40;
  *(undefined1 *)(puVar8 + 2) = 1;
  puVar8[4] = lVar6;
  if (lVar6 == 0) {
    plVar9 = plVar5;
  }
  puVar8[5] = plVar9;
  ReleaseSRWLockExclusive(SRWLock);
  lVar6 = local_40;
  LOCK();
  uVar1 = *(uint *)(param_1 + 0x98);
  *(uint *)(param_1 + 0x98) = 0;
  uVar4 = (ulonglong)uVar1;
  UNLOCK();
  if (local_40 != 0) {
    plVar3 = plVar5;
    if ((*(longlong *)(param_1 + 0x50) != 0) && (*(longlong *)(param_1 + 0x58) != 0)) {
      plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x58) + 0xf0))();
    }
    FUN_142f27a10(lVar6,param_1,plVar3);
    uVar4 = FUN_142f27b40(lVar6,0);
  }
  plVar3 = local_30;
  if ((lStack_38 != 0) && (local_30 != (longlong *)0x0)) {
    if ((*(longlong *)(param_1 + 0x50) != 0) && (*(longlong *)(param_1 + 0x58) != 0)) {
      plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x58) + 0xf0))();
    }
    (**(code **)(*plVar3 + 0x10))(plVar3,param_1,plVar5);
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,0);
  }
  if (local_58 != (longlong *)0x0) {
    uVar4 = FMemory::Free();
  }
  return uVar4;
}



// FUNCTION 142f058c0 FUN_142f058c0 body=788 status=ok
// SIG undefined FUN_142f058c0(void)

void FUN_142f058c0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint *puVar16;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar9 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar9 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar9) {
      uVar13 = 0;
      uVar15 = (ulonglong)uVar9;
      do {
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        uVar7 = (longlong)(int)*plVar2 - 1U & uVar13;
        uVar13 = uVar13 + 1;
        *(undefined4 *)((longlong)plVar11 + uVar7 * 4) = 0xffffffff;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar16 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar16 = puStack_38;
      }
      uVar9 = *puVar16;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar9 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_142f059ef;
        uVar9 = puVar16[lVar6 + 1];
      }
      uStack_64 = -uVar9 & uVar9;
      iVar8 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_54 = (iStack_50 - iVar8) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_142f059ef:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        lVar6 = (longlong)iStack_2c * 0xb0 + *param_1;
        uVar14 = (int)((ulonglong)*(undefined8 *)(lVar6 + 0x10) >> 0x20) +
                 (int)*(undefined8 *)(lVar6 + 0x10);
        uVar12 = uVar14 >> 0xd ^ -uVar14;
        uVar9 = (-0x61c88647 - uVar12) - uVar14 ^ uVar12 << 8;
        uVar14 = (uVar14 - uVar9) - uVar12 ^ uVar9 >> 0xd;
        uVar12 = (uVar12 - uVar9) - uVar14 ^ uVar14 >> 0xc;
        uVar9 = (uVar9 - uVar12) - uVar14 ^ uVar12 << 0x10;
        uVar14 = (uVar14 - uVar9) - uVar12 ^ uVar9 >> 5;
        uVar12 = (uVar12 - uVar9) - uVar14 ^ uVar14 >> 3;
        uVar9 = (uVar9 - uVar12) - uVar14 ^ uVar12 << 10;
        if (*(int *)(lVar6 + 0x20) == 0) {
          puVar10 = &DAT_143f3eda8;
        }
        else {
          puVar10 = *(undefined2 **)(lVar6 + 0x18);
        }
        uVar5 = FUN_140438070(puVar10);
        uVar12 = ((uVar14 - uVar9) - uVar12 ^ uVar9 >> 0xf) - uVar5 ^ uVar5 >> 0xd;
        uVar9 = (-0x61c88647 - uVar12) - uVar5 ^ uVar12 << 8;
        uVar14 = (uVar5 - uVar9) - uVar12 ^ uVar9 >> 0xd;
        uVar12 = (uVar12 - uVar9) - uVar14 ^ uVar14 >> 0xc;
        uVar9 = (uVar9 - uVar12) - uVar14 ^ uVar12 << 0x10;
        uVar14 = (uVar14 - uVar9) - uVar12 ^ uVar9 >> 5;
        uVar12 = (uVar12 - uVar9) - uVar14 ^ uVar14 >> 3;
        uVar9 = (uVar9 - uVar12) - uVar14 ^ uVar12 << 10;
        uVar9 = ((uVar14 - uVar9) - uVar12 ^ uVar9 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)(lVar6 + 0xac) = uVar9;
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0xa8) =
             *(undefined4 *)
              ((longlong)plVar11 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4);
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        *(int *)((longlong)plVar11 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 142f05be0 FUN_142f05be0 body=139 status=ok
// SIG undefined FUN_142f05be0(void)

void FUN_142f05be0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x110) != &local_18) {
    *(undefined8 *)(param_1 + 0x110) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x118,&local_10);
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



// FUNCTION 142f05c70 FUN_142f05c70 body=447 status=ok
// SIG undefined FUN_142f05c70(void)

void FUN_142f05c70(longlong param_1,undefined1 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *plStack_20;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_30 = *(longlong **)(param_1 + 0x30);
      local_38 = 0;
      if (local_30 == (longlong *)0x0) {
LAB_142f05d0e:
        plVar7 = &local_38;
        bVar4 = true;
        bVar9 = false;
        lVar8 = local_38;
      }
      else {
        LOCK();
        iVar6 = (int)local_30[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_30 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar6 == (int)local_30[1];
          if (bVar9) {
            *(int *)(local_30 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar9) {
            if (local_30 != (longlong *)0x0) {
              local_38 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_142f05d0e;
          }
          LOCK();
          iVar6 = (int)local_30[1];
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(local_30 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar7 = &local_38;
        local_30 = (longlong *)0x0;
        bVar4 = true;
        bVar9 = false;
        lVar8 = 0;
      }
      goto LAB_142f05d35;
    }
  }
  plVar7 = &local_28;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  bVar4 = false;
  bVar9 = true;
  lVar8 = 0;
LAB_142f05d35:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_20;
  if ((bVar9) && (plStack_20 != (longlong *)0x0)) {
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
  if (lVar8 != 0) {
    FUN_14204da70(lVar8,param_2);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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



// FUNCTION 142f05e30 FUN_142f05e30 body=129 status=ok
// SIG undefined FUN_142f05e30(void)

void FUN_142f05e30(longlong *param_1)

{
  bool bVar1;
  HWND pHVar2;
  longlong lVar3;
  
  (**(code **)(*param_1 + 0x18))(param_1,0xffffffff,0);
  FUN_1420e74a0(param_1 + -0x29);
  pHVar2 = UWidget::GetParent((HWND)(param_1 + -0x29));
  if (pHVar2 != (HWND)0x0) {
    lVar3 = UScrollBox::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(pHVar2 + 4) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pHVar2 + 4) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_142134a30(pHVar2,0);
      return;
    }
  }
  return;
}



// FUNCTION 142f05ec0 FUN_142f05ec0 body=46 status=ok
// SIG undefined FUN_142f05ec0(void)

void FUN_142f05ec0(longlong *param_1)

{
  FUN_1420e74a0(param_1 + -0x10c);
                    /* WARNING: Could not recover jumptable at 0x000142f05eea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0xffffffff,1);
  return;
}



// FUNCTION 142f05ef0 FUN_142f05ef0 body=1101 status=ok
// SIG undefined FUN_142f05ef0(void)

void FUN_142f05ef0(longlong param_1,longlong param_2,undefined1 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong *local_40;
  
  lVar9 = 0;
  if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_142f05fa7:
    plVar8 = &local_78;
    local_78 = 0;
    plStack_70 = (longlong *)0x0;
    bVar5 = false;
    bVar11 = true;
    lVar10 = 0;
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (iVar7 < 1) goto LAB_142f05fa7;
    local_a0 = *(longlong **)(param_1 + 0x30);
    local_a8 = 0;
    if (local_a0 == (longlong *)0x0) {
LAB_142f05f98:
      plVar8 = &local_a8;
      bVar5 = true;
      bVar11 = false;
      lVar10 = local_a8;
    }
    else {
      LOCK();
      iVar7 = (int)local_a0[1];
      bVar11 = iVar7 == 0;
      if (bVar11) {
        *(int *)(local_a0 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
      while (!bVar11) {
        LOCK();
        bVar11 = iVar7 == (int)local_a0[1];
        if (bVar11) {
          *(int *)(local_a0 + 1) = iVar7 + 1;
        }
        UNLOCK();
        if (bVar11) {
          if (local_a0 != (longlong *)0x0) {
            local_a8 = *(longlong *)(param_1 + 0x28);
          }
          goto LAB_142f05f98;
        }
        LOCK();
        iVar7 = (int)local_a0[1];
        bVar11 = iVar7 == 0;
        if (bVar11) {
          *(int *)(local_a0 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
      }
      plVar8 = &local_a8;
      local_a0 = (longlong *)0x0;
      bVar5 = true;
      bVar11 = false;
      lVar10 = 0;
    }
  }
  plVar3 = (longlong *)plVar8[1];
  plVar8[1] = 0;
  plVar4 = plStack_70;
  *plVar8 = 0;
  if ((bVar11) && (plStack_70 != (longlong *)0x0)) {
    LOCK();
    plVar8 = plStack_70 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_70)();
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_70 + 8))(plStack_70,1);
      }
    }
  }
  plVar8 = local_a0;
  if ((bVar5) && (local_a0 != (longlong *)0x0)) {
    LOCK();
    plVar4 = local_a0 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_a0)();
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  if (lVar10 == 0) goto LAB_142f062d9;
  if (param_2 == 0) {
    plVar8 = &local_58;
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    bVar5 = false;
    bVar11 = true;
  }
  else {
    if ((*(longlong *)(param_2 + 0x28) == 0) || (*(longlong *)(param_2 + 0x30) == 0)) {
LAB_142f060ea:
      plVar8 = &local_68;
      local_68 = 0;
      plStack_60 = (longlong *)0x0;
      bVar5 = false;
      bVar11 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_2 + 0x30) + 8);
      LOCK();
      iVar7 = *piVar1;
      if (iVar7 == 0) {
        *piVar1 = 0;
        iVar7 = 0;
      }
      UNLOCK();
      if (iVar7 < 1) goto LAB_142f060ea;
      local_90 = *(longlong **)(param_2 + 0x30);
      local_98 = 0;
      if (local_90 == (longlong *)0x0) {
LAB_142f060db:
        plVar8 = &local_98;
        bVar5 = true;
        bVar11 = false;
        lVar9 = local_98;
      }
      else {
        LOCK();
        iVar7 = (int)local_90[1];
        bVar11 = iVar7 == 0;
        if (bVar11) {
          *(int *)(local_90 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
        while (!bVar11) {
          LOCK();
          bVar11 = iVar7 == (int)local_90[1];
          if (bVar11) {
            *(int *)(local_90 + 1) = iVar7 + 1;
          }
          UNLOCK();
          if (bVar11) {
            if (local_90 != (longlong *)0x0) {
              local_98 = *(longlong *)(param_2 + 0x28);
            }
            goto LAB_142f060db;
          }
          LOCK();
          iVar7 = (int)local_90[1];
          bVar11 = iVar7 == 0;
          if (bVar11) {
            *(int *)(local_90 + 1) = 0;
            iVar7 = 0;
          }
          UNLOCK();
        }
        local_90 = (longlong *)0x0;
        plVar8 = &local_98;
        bVar5 = true;
        bVar11 = false;
        lVar9 = 0;
      }
    }
    local_88 = lVar9;
    local_80 = (longlong *)plVar8[1];
    plVar8[1] = 0;
    plVar4 = plStack_60;
    *plVar8 = 0;
    if ((bVar11) && (plStack_60 != (longlong *)0x0)) {
      LOCK();
      plVar8 = plStack_60 + 1;
      lVar6 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_60)();
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plStack_60 + 8))(plStack_60,1);
        }
      }
    }
    plVar8 = local_90;
    if ((bVar5) && (local_90 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_90 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_90)();
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    bVar5 = true;
    bVar11 = false;
    plVar8 = &local_88;
  }
  plVar4 = (longlong *)plVar8[1];
  plVar8[1] = 0;
  plVar2 = plStack_50;
  *plVar8 = 0;
  if ((bVar11) && (plStack_50 != (longlong *)0x0)) {
    LOCK();
    plVar8 = plStack_50 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
  plVar8 = local_80;
  if ((bVar5) && (local_80 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_80 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  if (lVar9 != 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_48 = lVar9;
    local_40 = plVar4;
    FUN_14204de30(lVar10,&local_48,param_3);
    plVar8 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_40 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar4 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
LAB_142f062d9:
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar3 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 142f06340 FUN_142f06340 body=445 status=ok
// SIG undefined FUN_142f06340(void)

void FUN_142f06340(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *plStack_20;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_30 = *(longlong **)(param_1 + 0x30);
      local_38 = 0;
      if (local_30 == (longlong *)0x0) {
LAB_142f063dd:
        plVar7 = &local_38;
        bVar4 = true;
        bVar9 = false;
        lVar8 = local_38;
      }
      else {
        LOCK();
        iVar6 = (int)local_30[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_30 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar6 == (int)local_30[1];
          if (bVar9) {
            *(int *)(local_30 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar9) {
            if (local_30 != (longlong *)0x0) {
              local_38 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_142f063dd;
          }
          LOCK();
          iVar6 = (int)local_30[1];
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(local_30 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar7 = &local_38;
        local_30 = (longlong *)0x0;
        bVar4 = true;
        bVar9 = false;
        lVar8 = 0;
      }
      goto LAB_142f06404;
    }
  }
  plVar7 = &local_28;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  bVar4 = false;
  bVar9 = true;
  lVar8 = 0;
LAB_142f06404:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_20;
  if ((bVar9) && (plStack_20 != (longlong *)0x0)) {
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
  if (lVar8 != 0) {
    FUN_14204e6f0(lVar8,param_2);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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



// FUNCTION 142f06500 FUN_142f06500 body=447 status=ok
// SIG undefined FUN_142f06500(void)

void FUN_142f06500(longlong param_1,undefined1 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *plStack_20;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_30 = *(longlong **)(param_1 + 0x30);
      local_38 = 0;
      if (local_30 == (longlong *)0x0) {
LAB_142f0659e:
        plVar7 = &local_38;
        bVar4 = true;
        bVar9 = false;
        lVar8 = local_38;
      }
      else {
        LOCK();
        iVar6 = (int)local_30[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_30 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar6 == (int)local_30[1];
          if (bVar9) {
            *(int *)(local_30 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar9) {
            if (local_30 != (longlong *)0x0) {
              local_38 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_142f0659e;
          }
          LOCK();
          iVar6 = (int)local_30[1];
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(local_30 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar7 = &local_38;
        local_30 = (longlong *)0x0;
        bVar4 = true;
        bVar9 = false;
        lVar8 = 0;
      }
      goto LAB_142f065c5;
    }
  }
  plVar7 = &local_28;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  bVar4 = false;
  bVar9 = true;
  lVar8 = 0;
LAB_142f065c5:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_20;
  if ((bVar9) && (plStack_20 != (longlong *)0x0)) {
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
  if (lVar8 != 0) {
    FUN_14204eb30(lVar8,param_2);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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



// FUNCTION 142f066c0 FUN_142f066c0 body=76 status=ok
// SIG undefined FUN_142f066c0(void)

void FUN_142f066c0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x20);
  if ((cVar2 != '\0') && (*(longlong *)(param_1 + 0x18) != 0)) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0x20);
    FUN_142f05ef0(uVar1,*(undefined8 *)(param_1 + 0x18),0);
  }
  return;
}



// FUNCTION 142f06710 FUN_142f06710 body=678 status=ok
// SIG undefined FUN_142f06710(void)

void FUN_142f06710(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong local_88;
  longlong *local_80;
  code *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  lVar9 = *param_2;
  if ((lVar9 != 0) && (lVar7 = param_2[1], lVar7 != 0)) {
    plVar4 = *(longlong **)(param_1 + 0x50);
    lVar8 = (longlong)*(int *)(param_1 + 0x58);
    for (plVar2 = plVar4; plVar2 != plVar4 + lVar8 * 2; plVar2 = plVar2 + 2) {
      if (*plVar2 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = plVar2[1];
      }
      if ((lVar3 == lVar7) && (*plVar2 == lVar9)) {
        if (*(int *)(param_1 + 0x58) != 0) {
          iVar13 = 0;
          if (*plVar4 == 0) {
            lVar3 = 0;
          }
          else {
            lVar3 = plVar4[1];
          }
          if ((lVar3 == lVar7) && (*plVar4 == lVar9)) {
            bVar10 = 0;
          }
          else {
            bVar10 = 1;
          }
          lVar9 = 0;
          iVar11 = 0;
          do {
            lVar9 = lVar9 + 1;
            iVar12 = iVar11 + 1;
            if (lVar9 < lVar8) {
              plVar4 = (longlong *)(lVar9 * 0x10 + *(longlong *)(param_1 + 0x50));
              do {
                if (*plVar4 == 0) {
                  lVar7 = 0;
                }
                else {
                  lVar7 = plVar4[1];
                }
                if (*param_2 == 0) {
                  lVar3 = 0;
                }
                else {
                  lVar3 = param_2[1];
                }
                if ((lVar7 == lVar3) && (*plVar4 == *param_2)) {
                  bVar6 = 0;
                }
                else {
                  bVar6 = 1;
                }
                if (bVar10 != bVar6) break;
                iVar12 = iVar12 + 1;
                lVar9 = lVar9 + 1;
                plVar4 = plVar4 + 2;
              } while (lVar9 < lVar8);
            }
            if (bVar10 != 0) {
              if (iVar13 != iVar11) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)((longlong)iVar13 * 0x10 + *(longlong *)(param_1 + 0x50)),
                           (void *)((longlong)iVar11 * 0x10 + *(longlong *)(param_1 + 0x50)),
                           (longlong)(iVar12 - iVar11) << 4);
              }
              iVar13 = iVar13 + (iVar12 - iVar11);
            }
            bVar10 = bVar10 ^ 1;
            iVar11 = iVar12;
          } while (lVar9 < lVar8);
          *(int *)(param_1 + 0x58) = iVar13;
        }
        if (*(int *)(param_1 + 0x58) != 0) {
          return;
        }
        FUN_142ee40a0(param_1);
        lVar9 = *(longlong *)(param_1 + 0x78);
        if (((lVar9 != 0) && (DAT_146b17150 != 0)) && (*(longlong *)(DAT_146b17150 + 0x7b0) != 0)) {
          plVar4 = *(longlong **)(param_1 + 0x80);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          local_88 = lVar9;
          local_80 = plVar4;
          (**(code **)(**(longlong **)(DAT_146b17150 + 0x7b0) + 0x2a8))
                    (*(longlong **)(DAT_146b17150 + 0x7b0),&local_88);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar4 + 1;
            lVar9 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              iVar13 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
        }
        local_48 = 0;
        local_38 = 0;
        puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_68);
        if (puVar5 != (undefined8 *)0x0) {
          puVar5[1] = param_1;
          *puVar5 = &PTR_FUN_143f77b70;
        }
        local_78[0] = FUN_142ee3830;
        FUN_14204c280(local_78);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142f069c0 FUN_142f069c0 body=263 status=ok
// SIG undefined FUN_142f069c0(void)

void FUN_142f069c0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x48))();
  uVar3 = (**(code **)(*param_1 + 0x10))(param_1);
  (**(code **)(*param_1 + 0x18))(param_1,0xffffffff,0);
  if (param_2 != (longlong *)0x0) {
    lVar2 = param_2[0x5c];
    plVar1 = param_1 + -0x29;
    iVar4 = UPanelWidget::GetChildIndex(plVar1,param_2);
    if (iVar4 == (int)lVar2) {
      plVar7 = (longlong *)0x0;
      plVar6 = param_1;
      if (plVar1 == (longlong *)0x0) {
        plVar6 = plVar7;
      }
      if (param_2[0x59] != 0) {
        plVar7 = (longlong *)param_2[0x5a];
      }
      if (plVar7 == plVar6) {
        (**(code **)(*param_2 + 0x298))(param_2);
        param_2[0x59] = 0;
        param_2[0x5a] = 0;
        FUN_142f04000(plVar1);
      }
    }
  }
  if (plVar5 != param_2) {
                    /* WARNING: Could not recover jumptable at 0x000142f06ac3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x50))(param_1,plVar5,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142f06aa9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb8))(param_1,uVar3);
  return;
}



// FUNCTION 142f06ad0 FUN_142f06ad0 body=235 status=ok
// SIG undefined FUN_142f06ad0(void)

void FUN_142f06ad0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x48))();
  lVar2 = param_1[3];
  (**(code **)(*param_1 + 0x18))(param_1,0xffffffff,0);
  if (param_2 != (longlong *)0x0) {
    lVar3 = param_2[0x5c];
    plVar1 = param_1 + -0x10c;
    iVar4 = UPanelWidget::GetChildIndex(plVar1,param_2);
    if (iVar4 == (int)lVar3) {
      plVar6 = (longlong *)0x0;
      plVar7 = param_1;
      if (plVar1 == (longlong *)0x0) {
        plVar7 = plVar6;
      }
      if (param_2[0x59] != 0) {
        plVar6 = (longlong *)param_2[0x5a];
      }
      if (plVar6 == plVar7) {
        (**(code **)(*param_2 + 0x298))(param_2);
        FUN_142f04170(plVar1);
      }
    }
  }
  if (plVar5 != param_2) {
                    /* WARNING: Could not recover jumptable at 0x000142f06bb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x50))(param_1,plVar5,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142f06b9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb8))(param_1,(int)lVar2);
  return;
}



// FUNCTION 142f06bc0 FUN_142f06bc0 body=234 status=ok
// SIG undefined FUN_142f06bc0(void)

void FUN_142f06bc0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x98)) {
    lVar6 = 0;
    plVar1 = (longlong *)(param_1 + 0x90);
    do {
      if ((*(longlong **)(lVar6 + *plVar1) != (longlong *)0x0) &&
         (lVar3 = (**(code **)(**(longlong **)(lVar6 + *plVar1) + 0x278))(), lVar3 == param_2)) {
        FUN_142ee86c0(param_1,*(undefined8 *)(*plVar1 + (longlong)iVar5 * 8));
        iVar2 = *(int *)(param_1 + 0x98);
        iVar4 = (iVar2 - iVar5) + -1;
        if (0 < iVar4) {
          iVar4 = 1;
        }
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + (longlong)iVar5 * 8),
                     (void *)(*plVar1 + (longlong)(iVar2 - iVar4) * 8),(longlong)iVar4 << 3);
          iVar2 = *(int *)(param_1 + 0x98);
        }
        *(int *)(param_1 + 0x98) = iVar2 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
        break;
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
    } while (iVar5 < *(int *)(param_1 + 0x98));
  }
  FUN_142f041e0(param_1);
  return;
}



// FUNCTION 142f06cb0 FUN_142f06cb0 body=7570 status=ok
// SIG undefined FUN_142f06cb0(void)

void FUN_142f06cb0(float *param_1,void **param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong *plVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  undefined2 *puVar20;
  int iVar21;
  wchar_t *pwVar22;
  wchar_t *pwVar23;
  longlong *plVar24;
  uint uVar25;
  undefined2 *puVar26;
  undefined2 *puVar27;
  undefined8 *puVar28;
  wchar_t *pwVar29;
  wchar_t *pwVar30;
  void *pvVar31;
  void *pvVar32;
  uint uVar33;
  wchar_t *pwVar34;
  short *psVar35;
  void *pvVar36;
  bool bVar37;
  float fVar38;
  float fVar39;
  undefined4 local_res18;
  longlong *local_3b8;
  undefined8 local_3b0;
  undefined2 *local_3a8;
  int local_3a0;
  undefined4 local_39c;
  longlong local_398;
  int local_390;
  int local_38c;
  undefined2 *local_388;
  undefined8 local_380;
  undefined2 *local_378;
  undefined8 local_370;
  wchar_t *local_368;
  undefined8 local_360;
  wchar_t *local_358;
  undefined8 local_350;
  undefined2 *local_348;
  undefined8 local_340;
  wchar_t *local_338;
  undefined8 local_330;
  undefined2 *local_328;
  undefined8 local_320;
  int local_318;
  wchar_t *local_310;
  undefined8 local_308;
  undefined2 *local_300;
  wchar_t *local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  wchar_t *local_2d8;
  undefined8 local_2d0;
  void *local_2c8;
  undefined8 local_2c0;
  void *local_2b8;
  undefined8 local_2b0;
  wchar_t *local_2a8;
  undefined8 local_2a0;
  void *local_298;
  int local_290;
  undefined4 local_28c;
  void *local_288;
  undefined8 local_280;
  undefined8 local_278;
  longlong local_270;
  longlong *local_268;
  wchar_t *local_260;
  undefined8 local_258;
  wchar_t *local_250;
  undefined8 local_248;
  wchar_t *local_240;
  int local_238;
  undefined4 local_234;
  undefined2 *local_230;
  int local_228;
  int local_224;
  wchar_t *local_220;
  int local_218;
  undefined4 local_214;
  int local_210;
  int local_20c;
  wchar_t *local_208;
  uint local_200;
  int local_1fc;
  wchar_t *local_1f8;
  int local_1f0;
  undefined4 local_1ec;
  wchar_t *local_1e8;
  int local_1e0;
  undefined4 local_1dc;
  wchar_t *local_1d8;
  uint local_1d0;
  undefined4 local_1cc;
  undefined2 *local_1c8;
  undefined8 local_1c0;
  wchar_t *local_1b8;
  int local_1b0;
  undefined4 local_1ac;
  void *local_1a8;
  uint local_1a0;
  undefined4 local_19c;
  longlong local_198;
  wchar_t *local_190;
  int local_188;
  undefined4 local_184;
  longlong local_180;
  longlong *local_178;
  longlong local_170;
  longlong *plStack_168;
  undefined2 *local_160;
  int local_158;
  int local_154;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  float local_100;
  float local_fc;
  
  iVar8 = 0;
  if ((*(longlong *)(param_1 + 2) != 0) && (*(longlong *)(param_1 + 4) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 4) + 8);
    LOCK();
    iVar9 = *piVar1;
    if (iVar9 == 0) {
      *piVar1 = 0;
      iVar9 = 0;
    }
    UNLOCK();
    if (0 < iVar9) {
      local_268 = *(longlong **)(param_1 + 4);
      local_270 = 0;
      if (local_268 == (longlong *)0x0) {
LAB_142f06d5f:
        plVar12 = &local_270;
        bVar3 = true;
        bVar37 = false;
        lVar10 = local_270;
      }
      else {
        LOCK();
        iVar9 = (int)local_268[1];
        bVar37 = iVar9 == 0;
        if (bVar37) {
          *(int *)(local_268 + 1) = 0;
          iVar9 = 0;
        }
        UNLOCK();
        while (!bVar37) {
          LOCK();
          bVar37 = iVar9 == (int)local_268[1];
          if (bVar37) {
            *(int *)(local_268 + 1) = iVar9 + 1;
          }
          UNLOCK();
          if (bVar37) {
            if (local_268 != (longlong *)0x0) {
              local_270 = *(longlong *)(param_1 + 2);
            }
            goto LAB_142f06d5f;
          }
          LOCK();
          iVar9 = (int)local_268[1];
          bVar37 = iVar9 == 0;
          if (bVar37) {
            *(int *)(local_268 + 1) = 0;
            iVar9 = 0;
          }
          UNLOCK();
        }
        plVar12 = &local_270;
        local_268 = (longlong *)0x0;
        bVar3 = true;
        bVar37 = false;
        lVar10 = 0;
      }
      goto LAB_142f06d88;
    }
  }
  plVar12 = &local_170;
  local_170 = 0;
  plStack_168 = (longlong *)0x0;
  bVar3 = false;
  bVar37 = true;
  lVar10 = 0;
LAB_142f06d88:
  plVar24 = (longlong *)plVar12[1];
  plVar12[1] = 0;
  plVar5 = plStack_168;
  local_178 = plVar24;
  *plVar12 = 0;
  local_180 = lVar10;
  if ((bVar37) && (plStack_168 != (longlong *)0x0)) {
    LOCK();
    plVar12 = plStack_168 + 1;
    lVar19 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*plStack_168)(plStack_168);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_168 + 8))(plStack_168,1);
      }
    }
  }
  plVar12 = local_268;
  if ((bVar3) && (local_268 != (longlong *)0x0)) {
    LOCK();
    plVar24 = local_268 + 1;
    lVar19 = *plVar24;
    *(int *)plVar24 = (int)*plVar24 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*local_268)(local_268);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_268 + 8))(local_268,1);
      }
    }
  }
  if (((lVar10 != 0) && (local_198 = FUN_142eed9c0(param_1), local_198 != 0)) &&
     (lVar10 = FUN_1420fc090(local_198), lVar10 != 0)) {
    uVar11 = FUN_142f30760();
    plVar12 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar10,uVar11);
    if ((plVar12 != (longlong *)0x0) &&
       (lVar10 = (**(code **)(*plVar12 + 0x10))(), local_398 = lVar10, lVar10 != 0)) {
      local_390 = 0;
      do {
        bVar3 = false;
        bVar37 = false;
        if (*(int *)(lVar10 + 0x90) == 0) {
          puVar26 = &DAT_143f3eda8;
        }
        else {
          puVar26 = *(undefined2 **)(lVar10 + 0x88);
        }
        iVar8 = FUN_141592950(param_2,puVar26,1,0,iVar8);
        if (*(int *)(lVar10 + 0xa0) == 0) {
          puVar26 = &DAT_143f3eda8;
        }
        else {
          puVar26 = *(undefined2 **)(lVar10 + 0x98);
        }
        local_20c = FUN_141592950(param_2,puVar26,1,0,iVar8 + 1);
        if (local_20c <= iVar8) break;
        uVar33 = 0;
        uVar25 = *(int *)(lVar10 + 0x90) - 1;
        if (*(int *)(lVar10 + 0x90) == 0) {
          uVar25 = uVar33;
        }
        uVar25 = uVar25 + iVar8;
        uVar15 = *(int *)(lVar10 + 0xa0) - 1;
        if (*(int *)(lVar10 + 0xa0) == 0) {
          uVar15 = uVar33;
        }
        iVar9 = *(int *)(param_2 + 1);
        uVar14 = ((uVar25 - uVar15) - iVar8) + local_20c;
        uVar15 = iVar9 - 1;
        if (iVar9 == 0) {
          uVar15 = uVar33;
        }
        if (uVar25 < uVar15) {
          uVar15 = uVar25;
        }
        uVar25 = iVar9 - 1;
        if (iVar9 == 0) {
          uVar25 = uVar33;
        }
        uVar33 = uVar15;
        if ((uVar15 <= uVar14) && (uVar33 = uVar25, uVar14 < uVar25)) {
          uVar33 = uVar14;
        }
        if (iVar9 == 0) {
          puVar26 = &DAT_143f3eda8;
        }
        else {
          puVar26 = *param_2;
        }
        local_240 = (wchar_t *)0x0;
        iVar17 = uVar33 - uVar15;
        local_234 = 0;
        iVar9 = iVar17 + 1;
        if (iVar17 == 0) {
          iVar9 = 0;
        }
        local_318 = iVar9;
        local_238 = iVar9;
        if (0 < iVar9) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_240,0);
          iVar9 = local_238;
          pwVar29 = local_240;
          local_318 = local_238;
          if (0 < local_238) {
            wcsncpy(local_240,puVar26 + (int)uVar15,(longlong)iVar17);
            pwVar29[iVar17] = L'\0';
          }
        }
        lVar10 = local_398;
        plVar12 = (longlong *)(local_398 + 0xa8);
        TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
        ::FindId(plVar12,&local_210,&local_240);
        puVar13 = (undefined8 *)0x0;
        if (local_210 != -1) {
          puVar13 = (undefined8 *)((longlong)local_210 * 0x30 + *plVar12);
        }
        puVar28 = puVar13 + 2;
        if (puVar13 == (undefined8 *)0x0) {
          puVar28 = (undefined8 *)0x0;
        }
        if (puVar28 == (undefined8 *)0x0) {
          if (-1 < iVar8) {
            bVar37 = true;
            local_390 = iVar8 + 1;
          }
        }
        else {
          local_3a0 = *(int *)(puVar28 + 1);
          lVar19 = (longlong)local_3a0;
          local_3a8 = (undefined2 *)0x0;
          pvVar31 = (void *)*puVar28;
          if (local_3a0 == 0) {
            local_39c = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_3a8,local_3a0,0);
            _guard_xfg_dispatch_icall_nop(local_3a8,pvVar31,lVar19 * 2);
          }
          uVar25 = FUN_141592950(&local_3a8,L"<img src",1,0,0xffffffff);
          iVar17 = FUN_141592950(&local_3a8,&DAT_1459908e4,1,0,uVar25);
          if ((-1 < (int)uVar25) && ((int)uVar25 <= iVar17)) {
            fVar38 = *param_1;
            if (fVar38 == 0.0) {
              fVar38 = (float)FUN_142eec5f0(param_1);
            }
            if (1e-08 < fVar38) {
              uVar15 = iVar17 + uVar25;
              fVar38 = fVar38 / *(float *)(lVar10 + 0xf8);
              pwVar29 = (wchar_t *)0x0;
              fVar39 = *(float *)(lVar10 + 0xf8) * fVar38;
              fVar38 = fVar38 * *(float *)(lVar10 + 0xfc);
              local_300 = (undefined2 *)
                          CONCAT44(local_300._4_4_,(int)ROUND((fVar38 + fVar38) - 0.5) >> 1);
              local_38c = (int)ROUND((fVar39 + fVar39) - 0.5) >> 1;
              uVar33 = local_3a0 - 1;
              if (local_3a0 == 0) {
                uVar33 = 0;
              }
              if (uVar25 < uVar33) {
                uVar33 = uVar25;
              }
              uVar25 = local_3a0 - 1;
              if (local_3a0 == 0) {
                uVar25 = 0;
              }
              uVar14 = uVar33;
              if ((uVar33 <= uVar15) && (uVar14 = uVar25, uVar15 < uVar25)) {
                uVar14 = uVar15;
              }
              local_190 = (wchar_t *)0x0;
              local_184 = 0;
              puVar26 = &DAT_143f3eda8;
              if (local_3a0 != 0) {
                puVar26 = local_3a8;
              }
              iVar18 = uVar14 - uVar33;
              iVar17 = iVar18 + 1;
              if (iVar18 == 0) {
                iVar17 = 0;
              }
              local_188 = iVar17;
              if ((0 < iVar17) &&
                 (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_190,0), iVar17 = local_188,
                 pwVar29 = local_190, 0 < local_188)) {
                wcsncpy(local_190,puVar26 + (int)uVar33,(longlong)iVar18);
                pwVar29[iVar18] = L'\0';
              }
              pwVar23 = L"";
              if (iVar17 != 0) {
                pwVar23 = pwVar29;
              }
              FString::PrintfImpl(&local_1c8,L"%s height=\"%i\" width=\"%i\"/>",pwVar23,local_38c,
                                  (ulonglong)local_300 & 0xffffffff);
              if (local_3a8 != (undefined2 *)0x0) {
                FMemory::Free();
              }
              local_3a0 = (int)local_1c0;
              local_3a8 = local_1c8;
              local_39c = local_1c0._4_4_;
              local_1c0 = 0;
              local_1c8 = (undefined2 *)0x0;
              lVar10 = local_398;
              if (pwVar29 != (wchar_t *)0x0) {
                FMemory::Free(pwVar29);
                lVar10 = local_398;
              }
            }
          }
          pwVar29 = (wchar_t *)0x0;
          bVar37 = bVar3;
          if (*(char *)(puVar28 + 2) == '\0') {
            if (1 < local_3a0) {
              bVar3 = true;
              uVar25 = 0;
              pwVar23 = (wchar_t *)(ulonglong)(*(int *)(lVar10 + 0x90) - 1);
              if (*(int *)(lVar10 + 0x90) == 0) {
                pwVar23 = pwVar29;
              }
              uVar33 = uVar25;
              if (iVar9 != 0) {
                uVar33 = iVar9 - 1;
              }
              pwVar30 = (wchar_t *)(ulonglong)(*(int *)(lVar10 + 0xa0) - 1);
              if (*(int *)(lVar10 + 0xa0) == 0) {
                pwVar30 = pwVar29;
              }
              if (*(int *)(param_2 + 1) == 0) {
                puVar26 = &DAT_143f3eda8;
                pwVar34 = pwVar29;
              }
              else {
                puVar26 = *param_2;
                uVar25 = *(int *)(param_2 + 1) - 1;
                pwVar34 = (wchar_t *)(ulonglong)uVar25;
              }
              uVar33 = (((uVar25 - (int)pwVar23) - uVar33) - (int)pwVar30) - iVar8;
              if ((int)uVar33 < 0) {
                uVar25 = 0;
              }
              else if ((int)uVar33 < (int)uVar25) {
                uVar25 = uVar33;
              }
              local_2a8 = (wchar_t *)0x0;
              local_2a0 = 0;
              psVar35 = puVar26 + ((longlong)(int)pwVar34 - (longlong)(int)uVar25);
              pwVar23 = pwVar29;
              if ((psVar35 != (short *)0x0) && (pwVar23 = (wchar_t *)0x0, *psVar35 != 0)) {
                lVar10 = -1;
                do {
                  lVar19 = lVar10 + 1;
                  lVar10 = lVar10 + 1;
                } while (psVar35[lVar19] != 0);
                uVar33 = (int)lVar10 + 1;
                local_2a0 = (ulonglong)uVar33;
                uVar25 = uVar33;
                if (0 < (int)uVar33) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2a8,0);
                  uVar25 = (uint)local_2a0;
                }
                pwVar29 = local_2a8;
                pwVar23 = (wchar_t *)(ulonglong)uVar25;
                FGenericPlatformString::Memcpy(local_2a8,psVar35,(longlong)(int)uVar33 * 2);
              }
              pwVar30 = (wchar_t *)0x0;
              iVar9 = *(int *)(param_2 + 1) + -1;
              if (*(int *)(param_2 + 1) == 0) {
                pwVar34 = L"";
                iVar9 = 0;
              }
              else {
                pwVar34 = *param_2;
              }
              if (iVar8 < 0) {
                iVar9 = 0;
              }
              else if (iVar8 < iVar9) {
                iVar9 = iVar8;
              }
              local_1f8 = (wchar_t *)0x0;
              local_1ec = 0;
              pwVar22 = (wchar_t *)(ulonglong)(iVar9 + 1);
              if (iVar9 == 0) {
                pwVar22 = pwVar30;
              }
              iVar8 = (int)pwVar22;
              local_1f0 = iVar8;
              if ((0 < iVar8) &&
                 (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f8,0), iVar8 = local_1f0,
                 pwVar30 = local_1f8, 0 < local_1f0)) {
                wcsncpy(local_1f8,pwVar34,(longlong)iVar9);
                pwVar30[iVar9] = L'\0';
              }
              iVar9 = local_3a0;
              puVar26 = local_3a8;
              pvVar31 = (void *)0x0;
              if (iVar8 < 2) {
                local_298 = (void *)0x0;
                local_290 = local_3a0;
                if (local_3a0 == 0) {
                  local_28c = 0;
                }
                else {
                  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_298,local_3a0,0);
                  pvVar31 = local_298;
                  _guard_xfg_dispatch_icall_nop(local_298,puVar26,(longlong)iVar9 * 2);
                }
              }
              else {
                iVar9 = 0;
                if (local_3a0 != 0) {
                  iVar9 = local_3a0 + -1;
                }
                if ((iVar8 != 0) || (iVar8 = 1, iVar9 == 0)) {
                  iVar8 = 0;
                }
                TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
                          (&local_2b8,&local_1f8,iVar9 + iVar8);
                uVar4 = local_2b0;
                puVar26 = local_3a8;
                pvVar31 = local_2b8;
                if (iVar9 != 0) {
                  iVar8 = (int)local_2b0;
                  lVar10 = (longlong)(int)local_2b0;
                  iVar17 = (uint)((int)local_2b0 == 0) + (int)local_2b0 + iVar9;
                  local_2b0 = CONCAT44(local_2b0._4_4_,iVar17);
                  if (local_2b0._4_4_ < iVar17) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,uVar4 & 0xffffffff);
                  }
                  pvVar31 = local_2b8;
                  pvVar36 = (void *)((longlong)local_2b8 + (lVar10 - (ulonglong)(iVar8 != 0)) * 2);
                  _guard_xfg_dispatch_icall_nop(pvVar36,puVar26,(longlong)iVar9 * 2);
                  *(undefined2 *)((longlong)pvVar36 + (longlong)iVar9 * 2) = 0;
                }
                local_290 = (int)local_2b0;
                local_28c = local_2b0._4_4_;
                local_2b0 = 0;
                local_2b8 = (void *)0x0;
                pwVar30 = local_1f8;
                local_298 = pvVar31;
              }
              iVar8 = (int)pwVar23;
              if (local_290 < 2) {
                local_1dc = local_2a0._4_4_;
                local_2a0 = 0;
                local_2a8 = (wchar_t *)0x0;
                pwVar34 = (wchar_t *)0x0;
                local_1e8 = pwVar29;
                local_1e0 = iVar8;
              }
              else {
                iVar9 = 0;
                if (iVar8 != 0) {
                  iVar9 = iVar8 + -1;
                }
                if ((local_290 != 0) || (iVar8 = 1, iVar9 == 0)) {
                  iVar8 = 0;
                }
                TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
                          (&local_310,&local_298,iVar9 + iVar8);
                uVar4 = local_308;
                pwVar23 = local_310;
                if (iVar9 != 0) {
                  iVar8 = (int)local_308;
                  lVar10 = (longlong)(int)local_308;
                  iVar17 = (uint)((int)local_308 == 0) + (int)local_308 + iVar9;
                  local_308 = CONCAT44(local_308._4_4_,iVar17);
                  if (local_308._4_4_ < iVar17) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_310,uVar4 & 0xffffffff);
                  }
                  pwVar23 = local_310;
                  pwVar34 = local_310 + (lVar10 - (ulonglong)(iVar8 != 0));
                  _guard_xfg_dispatch_icall_nop(pwVar34,pwVar29,(longlong)iVar9 * 2);
                  pwVar34[iVar9] = L'\0';
                }
                local_1e0 = (int)local_308;
                local_1dc = local_308._4_4_;
                local_308 = 0;
                local_310 = (wchar_t *)0x0;
                pvVar31 = local_298;
                pwVar34 = pwVar29;
                local_1e8 = pwVar23;
              }
              FString::operator=(param_2,&local_1e8);
              if (local_1e8 != (wchar_t *)0x0) {
                FMemory::Free();
              }
              if (pvVar31 != (void *)0x0) {
                FMemory::Free(pvVar31);
              }
              if (pwVar30 != (wchar_t *)0x0) {
                FMemory::Free(pwVar30);
              }
              goto joined_r0x000142f07fba;
            }
          }
          else {
            iVar17 = *(int *)(lVar10 + 0x90);
            pvVar31 = *(void **)(lVar10 + 0x88);
            local_348 = (undefined2 *)0x0;
            local_340._0_4_ = iVar17;
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                      (&local_348,(2 - (uint)(iVar17 != 0)) + iVar17,0);
            puVar26 = local_348;
            local_300 = local_348;
            _guard_xfg_dispatch_icall_nop(local_348,pvVar31,(longlong)iVar17 * 2);
            iVar18 = (int)local_340;
            lVar10 = (longlong)(int)local_340;
            local_340._0_4_ = (2 - (uint)((int)local_340 != 0)) + (int)local_340;
            iVar21 = (int)local_340;
            iVar17 = local_340._4_4_;
            if (local_340._4_4_ < (int)local_340) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_348,iVar18);
              local_300 = local_348;
              puVar26 = local_348;
              iVar21 = (int)local_340;
              iVar17 = local_340._4_4_;
            }
            puVar27 = (undefined2 *)0x0;
            local_348 = (undefined2 *)0x0;
            local_340 = 0;
            lVar10 = lVar10 - (ulonglong)(iVar18 != 0);
            puVar26[lVar10] = 0x2f;
            puVar26[lVar10 + 1] = 0;
            local_158 = iVar21;
            local_154 = iVar17;
            if (iVar21 < 2) {
              local_328 = (undefined2 *)0x0;
              local_320 = CONCAT44(local_320._4_4_,iVar9);
              local_160 = puVar26;
              if (iVar9 == 0) {
                local_320 = 0;
                iVar9 = 0;
                iVar17 = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_328,iVar9);
                puVar27 = local_328;
                _guard_xfg_dispatch_icall_nop(local_328,local_240,(longlong)iVar9 * 2);
                iVar9 = (int)local_320;
                iVar17 = local_320._4_4_;
              }
            }
            else {
              iVar18 = 0;
              if (iVar9 != 0) {
                iVar18 = iVar9 + -1;
              }
              if ((iVar21 != 0) || (iVar9 = 1, iVar18 == 0)) {
                iVar9 = 0;
              }
              local_300 = (undefined2 *)0x0;
              local_160 = (undefined2 *)0x0;
              local_388 = puVar26;
              local_380._4_4_ = iVar17;
              if (iVar17 < iVar18 + iVar9 + iVar21) {
                local_380._0_4_ = iVar21;
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_388);
                iVar21 = (int)local_380;
              }
              puVar27 = local_388;
              iVar9 = iVar21;
              iVar17 = local_380._4_4_;
              if (iVar18 != 0) {
                local_380._0_4_ = (uint)(iVar21 == 0) + iVar18 + iVar21;
                if (local_380._4_4_ < (int)local_380) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_388,iVar21);
                }
                iVar17 = local_380._4_4_;
                iVar9 = (int)local_380;
                puVar27 = local_388;
                puVar26 = local_388 + ((longlong)iVar21 - (ulonglong)(iVar21 != 0));
                _guard_xfg_dispatch_icall_nop(puVar26,local_240,(longlong)iVar18 * 2);
                puVar26[iVar18] = 0;
              }
              local_388 = (undefined2 *)0x0;
              local_320 = CONCAT44(iVar17,iVar9);
              local_380 = 0;
              local_328 = puVar27;
            }
            lVar10 = local_398;
            puVar26 = (undefined2 *)0x0;
            iVar18 = *(int *)(local_398 + 0xa0);
            if (iVar9 < 2) {
              pvVar31 = *(void **)(local_398 + 0x98);
              local_230 = (undefined2 *)0x0;
              local_228 = iVar18;
              if (iVar18 == 0) {
                local_224 = 0;
                puVar20 = puVar26;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_230,iVar18,0);
                puVar20 = local_230;
                _guard_xfg_dispatch_icall_nop(local_230,pvVar31,(longlong)iVar18 * 2);
              }
            }
            else {
              puVar20 = (undefined2 *)(ulonglong)(iVar18 - 1);
              if (iVar18 == 0) {
                puVar20 = puVar26;
              }
              iVar18 = (int)puVar20;
              if ((iVar9 != 0) || (iVar21 = 1, iVar18 == 0)) {
                iVar21 = 0;
              }
              local_328 = (undefined2 *)0x0;
              local_320 = 0;
              local_378 = puVar27;
              local_370._4_4_ = iVar17;
              if (iVar17 < iVar21 + iVar9 + iVar18) {
                local_370._0_4_ = iVar9;
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_378);
                iVar9 = (int)local_370;
              }
              pvVar31 = *(void **)(lVar10 + 0x98);
              puVar20 = local_378;
              iVar17 = iVar9;
              iVar21 = local_370._4_4_;
              if (iVar18 != 0) {
                local_370._0_4_ = (uint)(iVar9 == 0) + iVar18 + iVar9;
                if (local_370._4_4_ < (int)local_370) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_378,iVar9);
                }
                iVar21 = local_370._4_4_;
                iVar17 = (int)local_370;
                puVar20 = local_378;
                puVar27 = local_378 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0));
                _guard_xfg_dispatch_icall_nop(puVar27,pvVar31,(longlong)iVar18 * 2);
                puVar27[iVar18] = 0;
                lVar10 = local_398;
              }
              local_378 = (undefined2 *)0x0;
              local_370 = 0;
              puVar27 = puVar26;
              local_230 = puVar20;
              local_228 = iVar17;
              local_224 = iVar21;
            }
            puVar26 = &DAT_143f3eda8;
            if (local_228 != 0) {
              puVar26 = puVar20;
            }
            iVar9 = FUN_141592950(param_2,puVar26,1,0,0xffffffff);
            local_38c = iVar9;
            if (puVar20 != (undefined2 *)0x0) {
              FMemory::Free(puVar20);
            }
            if (puVar27 != (undefined2 *)0x0) {
              FMemory::Free(puVar27);
            }
            if (local_300 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            if (local_20c < iVar9) {
              iVar17 = *(int *)(lVar10 + 0x90) + -1;
              if (*(int *)(lVar10 + 0x90) == 0) {
                iVar17 = 0;
              }
              iVar18 = *(int *)(lVar10 + 0xa0) + -1;
              uVar25 = iVar17 + local_20c;
              if (*(int *)(lVar10 + 0xa0) == 0) {
                iVar18 = 0;
              }
              iVar17 = *(int *)(param_2 + 1);
              uVar15 = ((uVar25 - iVar18) - local_20c) + iVar9;
              uVar33 = iVar17 - 1;
              if (iVar17 == 0) {
                uVar33 = 0;
              }
              uVar14 = iVar17 - 1;
              if (uVar25 < uVar33) {
                uVar33 = uVar25;
              }
              if (iVar17 == 0) {
                uVar14 = 0;
              }
              uVar25 = uVar33;
              if ((uVar33 <= uVar15) && (uVar25 = uVar14, uVar15 < uVar14)) {
                uVar25 = uVar15;
              }
              if (iVar17 == 0) {
                puVar26 = &DAT_143f3eda8;
              }
              else {
                puVar26 = *param_2;
              }
              iVar17 = uVar25 - uVar33;
              local_1b8 = (wchar_t *)0x0;
              pwVar29 = (wchar_t *)0x0;
              local_1ac = 0;
              iVar9 = iVar17 + 1;
              if (iVar17 == 0) {
                iVar9 = 0;
              }
              local_1b0 = iVar9;
              if ((0 < iVar9) &&
                 (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0), iVar9 = local_1b0,
                 pwVar29 = local_1b8, 0 < local_1b0)) {
                wcsncpy(local_1b8,puVar26 + (int)uVar33,(longlong)iVar17);
                pwVar29[iVar17] = L'\0';
              }
              pwVar34 = local_1b8;
              if (1 < local_3a0) {
                bVar3 = true;
                puVar26 = &DAT_143f3eda8;
                if (local_3a0 != 0) {
                  puVar26 = local_3a8;
                }
                iVar17 = *(int *)(local_398 + 0x90) + -1;
                if (*(int *)(local_398 + 0x90) == 0) {
                  iVar17 = 0;
                }
                iVar18 = local_318 + -1;
                if (local_318 == 0) {
                  iVar18 = 0;
                }
                iVar2 = *(int *)(param_2 + 1);
                iVar21 = *(int *)(local_398 + 0xa0) + -1;
                if (*(int *)(local_398 + 0xa0) == 0) {
                  iVar21 = 0;
                }
                if (iVar2 == 0) {
                  puVar27 = &DAT_143f3eda8;
                  iVar16 = -1;
                }
                else {
                  puVar27 = *param_2;
                  iVar16 = iVar2 + -1;
                }
                uVar25 = 0;
                if (iVar2 == 0) {
                  iVar16 = 0;
                }
                iVar18 = (((iVar16 - iVar17) - iVar21) - iVar18) - local_38c;
                iVar17 = iVar18 + -1;
                if (iVar17 < 0) {
                  iVar21 = 0;
                }
                else {
                  iVar21 = iVar16;
                  if (iVar18 <= iVar16) {
                    iVar21 = iVar17;
                  }
                }
                pwVar23 = (wchar_t *)0x0;
                local_338 = (wchar_t *)0x0;
                local_330 = 0;
                psVar35 = puVar27 + ((longlong)iVar16 - (longlong)iVar21);
                if ((psVar35 != (short *)0x0) && (*psVar35 != 0)) {
                  lVar10 = -1;
                  do {
                    lVar19 = lVar10 + 1;
                    lVar10 = lVar10 + 1;
                  } while (psVar35[lVar19] != 0);
                  uVar33 = (int)lVar10 + 1;
                  local_330 = (ulonglong)uVar33;
                  uVar25 = uVar33;
                  if (0 < (int)uVar33) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_338,0);
                    uVar25 = (uint)local_330;
                  }
                  pwVar23 = local_338;
                  FGenericPlatformString::Memcpy(local_338,psVar35,(longlong)(int)uVar33 * 2);
                }
                pwVar30 = L"";
                if (iVar9 != 0) {
                  pwVar30 = pwVar29;
                }
                FString::PrintfImpl(&local_250,puVar26,pwVar30);
                iVar9 = *(int *)(param_2 + 1) + -1;
                if (*(int *)(param_2 + 1) == 0) {
                  pwVar29 = L"";
                  iVar9 = 0;
                }
                else {
                  pwVar29 = *param_2;
                }
                if (iVar8 < 0) {
                  iVar9 = 0;
                }
                else if (iVar8 < iVar9) {
                  iVar9 = iVar8;
                }
                local_260 = (wchar_t *)0x0;
                uVar33 = iVar9 + 1;
                if (iVar9 == 0) {
                  uVar33 = 0;
                }
                pwVar30 = (wchar_t *)0x0;
                local_258 = (ulonglong)uVar33;
                iVar8 = 0;
                if (0 < (int)uVar33) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_260,0);
                  pwVar30 = local_260;
                  uVar33 = (uint)local_258;
                  iVar8 = local_258._4_4_;
                  if (0 < (int)(uint)local_258) {
                    wcsncpy(local_260,pwVar29,(longlong)iVar9);
                    pwVar30[iVar9] = L'\0';
                  }
                }
                pwVar29 = local_250;
                pwVar34 = (wchar_t *)0x0;
                uVar15 = (uint)local_248;
                if ((int)uVar33 < 2) {
                  iVar8 = local_248._4_4_;
                  local_250 = (wchar_t *)0x0;
                  local_248 = 0;
                  pwVar34 = pwVar30;
                }
                else {
                  iVar9 = 0;
                  if ((uint)local_248 != 0) {
                    iVar9 = (uint)local_248 - 1;
                  }
                  if ((uVar33 != 0) || (iVar17 = 1, iVar9 == 0)) {
                    iVar17 = 0;
                  }
                  local_260 = (wchar_t *)0x0;
                  local_258 = 0;
                  local_368 = pwVar30;
                  local_360._4_4_ = iVar8;
                  if (iVar8 < (int)(iVar17 + uVar33 + iVar9)) {
                    local_360._0_4_ = uVar33;
                    TArray<wchar_t,FDefaultAllocator>::ResizeTo();
                    uVar33 = (uint)local_360;
                  }
                  pwVar30 = local_250;
                  pwVar29 = local_368;
                  iVar8 = local_360._4_4_;
                  uVar15 = uVar33;
                  if (iVar9 != 0) {
                    local_360._0_4_ = iVar9 + (uint)(uVar33 == 0) + uVar33;
                    if (local_360._4_4_ < (int)(uint)local_360) {
                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_368,uVar33);
                    }
                    iVar8 = local_360._4_4_;
                    uVar15 = (uint)local_360;
                    pwVar29 = local_368;
                    pwVar23 = local_368 + ((longlong)(int)uVar33 - (ulonglong)(uVar33 != 0));
                    _guard_xfg_dispatch_icall_nop(pwVar23,pwVar30,(longlong)iVar9 * 2);
                    pwVar23[iVar9] = L'\0';
                    pwVar23 = local_338;
                  }
                  local_368 = (wchar_t *)0x0;
                  local_360 = 0;
                }
                pwVar30 = (wchar_t *)0x0;
                if ((int)uVar15 < 2) {
                  local_1fc = local_330._4_4_;
                  local_330 = 0;
                  local_338 = (wchar_t *)0x0;
                  pwVar30 = pwVar29;
                  local_208 = pwVar23;
                  local_200 = uVar25;
                }
                else {
                  pwVar23 = pwVar30;
                  if (uVar25 != 0) {
                    pwVar23 = (wchar_t *)(ulonglong)(uVar25 - 1);
                  }
                  iVar9 = (int)pwVar23;
                  if ((uVar15 != 0) || (pwVar23 = (wchar_t *)0x1, iVar9 == 0)) {
                    pwVar23 = pwVar30;
                  }
                  local_358 = pwVar29;
                  local_350._4_4_ = iVar8;
                  if (iVar8 < (int)(uVar15 + (int)pwVar23 + iVar9)) {
                    local_350._0_4_ = uVar15;
                    TArray<wchar_t,FDefaultAllocator>::ResizeTo();
                    uVar15 = (uint)local_350;
                  }
                  iVar8 = local_350._4_4_;
                  uVar25 = uVar15;
                  if (iVar9 != 0) {
                    local_350._0_4_ = (uint)(uVar15 == 0) + iVar9 + uVar15;
                    if (local_350._4_4_ < (int)(uint)local_350) {
                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_358,uVar15);
                    }
                    iVar8 = local_350._4_4_;
                    uVar25 = (uint)local_350;
                    pwVar29 = local_358 + ((longlong)(int)uVar15 - (ulonglong)(uVar15 != 0));
                    _guard_xfg_dispatch_icall_nop(pwVar29,local_338,(longlong)iVar9 * 2);
                    pwVar29[iVar9] = L'\0';
                  }
                  local_208 = local_358;
                  local_358 = (wchar_t *)0x0;
                  local_350 = 0;
                  local_200 = uVar25;
                  local_1fc = iVar8;
                }
                pwVar29 = local_338;
                FString::operator=(param_2,&local_208);
                if (local_208 != (wchar_t *)0x0) {
                  FMemory::Free();
                }
                if (pwVar30 != (wchar_t *)0x0) {
                  FMemory::Free(pwVar30);
                }
                if (pwVar34 != (wchar_t *)0x0) {
                  FMemory::Free(pwVar34);
                }
                if (local_250 != (wchar_t *)0x0) {
                  FMemory::Free();
                }
                pwVar34 = local_1b8;
                if (pwVar29 != (wchar_t *)0x0) {
                  FMemory::Free(pwVar29);
                  pwVar34 = local_1b8;
                }
              }
joined_r0x000142f07fba:
              bVar37 = bVar3;
              if (pwVar34 != (wchar_t *)0x0) {
                FMemory::Free(pwVar34);
              }
            }
          }
          lVar10 = local_398;
          if (local_3a8 != (undefined2 *)0x0) {
            FMemory::Free();
            lVar10 = local_398;
          }
        }
        iVar8 = local_390;
        if (local_240 != (wchar_t *)0x0) {
          FMemory::Free();
        }
      } while (bVar37);
      uVar11 = FUN_1420fc090(local_198);
      cVar6 = FUN_142dd3d20(uVar11);
      do {
        bVar37 = false;
        if (*(int *)(lVar10 + 0x108) == 0) {
          puVar26 = &DAT_143f3eda8;
        }
        else {
          puVar26 = *(undefined2 **)(lVar10 + 0x100);
        }
        iVar8 = FUN_141592950(param_2,puVar26,1,0,0xffffffff);
        if (*(int *)(lVar10 + 0x118) == 0) {
          puVar26 = &DAT_143f3eda8;
        }
        else {
          puVar26 = *(undefined2 **)(lVar10 + 0x110);
        }
        iVar9 = FUN_141592950(param_2,puVar26,1,0,0xffffffff);
        if (iVar9 <= iVar8) break;
        iVar17 = *(int *)(lVar10 + 0x108) + -1;
        if (*(int *)(lVar10 + 0x108) == 0) {
          iVar17 = 0;
        }
        iVar18 = *(int *)(lVar10 + 0x118) + -1;
        uVar25 = iVar17 + iVar8;
        if (*(int *)(lVar10 + 0x118) == 0) {
          iVar18 = 0;
        }
        iVar17 = *(int *)(param_2 + 1);
        uVar15 = ((uVar25 - iVar18) - iVar8) + iVar9;
        uVar33 = iVar17 - 1;
        if (iVar17 == 0) {
          uVar33 = 0;
        }
        uVar14 = iVar17 - 1;
        if (uVar25 < uVar33) {
          uVar33 = uVar25;
        }
        if (iVar17 == 0) {
          uVar14 = 0;
        }
        uVar25 = uVar33;
        if ((uVar33 <= uVar15) && (uVar25 = uVar14, uVar15 < uVar14)) {
          uVar25 = uVar15;
        }
        if (iVar17 == 0) {
          puVar26 = &DAT_143f3eda8;
        }
        else {
          puVar26 = *param_2;
        }
        iVar17 = uVar25 - uVar33;
        local_220 = (wchar_t *)0x0;
        local_214 = 0;
        local_218 = iVar17 + 1;
        if (iVar17 == 0) {
          local_218 = 0;
        }
        if ((0 < local_218) &&
           (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_220,0), pwVar29 = local_220,
           0 < local_218)) {
          wcsncpy(local_220,puVar26 + (int)uVar33,(longlong)iVar17);
          pwVar29[iVar17] = L'\0';
        }
        local_3b8 = (longlong *)0x0;
        local_3b0 = 0;
        iVar17 = FUN_141594550(&local_220,&local_3b8,&DAT_14598bcf4);
        plVar24 = local_3b8 + (longlong)(int)local_3b0 * 2;
        lVar10 = local_398;
        for (plVar12 = local_3b8; local_398 = lVar10, plVar12 != plVar24; plVar12 = plVar12 + 2) {
          FString::RemoveSpacesInline(plVar12);
          lVar10 = local_398;
        }
        if (0 < iVar17) {
          local_2e8 = *(undefined8 *)(lVar10 + 0xf8);
          local_2e0 = local_2e8;
          if (iVar17 != 1) {
            if (iVar17 == 3) {
              cVar7 = FString::IsNumeric(local_3b8 + 2);
              if ((cVar7 != '\0') && (cVar7 = FString::IsNumeric(local_3b8 + 4), cVar7 != '\0')) {
                if ((int)local_3b8[3] == 0) {
                  pwVar29 = L"";
                }
                else {
                  pwVar29 = (wchar_t *)local_3b8[2];
                }
                iVar17 = _wtoi(pwVar29);
                local_2e0 = CONCAT44(local_2e0._4_4_,(float)iVar17);
                if ((int)local_3b8[5] == 0) {
                  pwVar29 = L"";
                }
                else {
                  pwVar29 = (wchar_t *)local_3b8[4];
                }
                iVar18 = _wtoi(pwVar29);
                local_2e8 = (ulonglong)(uint)(float)iVar17;
                fVar38 = (float)iVar18;
                local_2e0 = CONCAT44(fVar38,(undefined4)local_2e0);
                goto LAB_142f0839a;
              }
            }
            else {
              if (iVar17 != 5) {
                TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(&local_3b8);
                if (local_220 != (wchar_t *)0x0) {
                  FMemory::Free();
                }
                TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>
                          (&local_180);
                return;
              }
              cVar7 = FString::IsNumeric(local_3b8 + 2);
              if ((cVar7 != '\0') && (cVar7 = FString::IsNumeric(local_3b8 + 4), cVar7 != '\0')) {
                if ((int)local_3b8[3] == 0) {
                  pwVar29 = L"";
                }
                else {
                  pwVar29 = (wchar_t *)local_3b8[2];
                }
                iVar17 = _wtoi(pwVar29);
                local_2e0 = CONCAT44(local_2e0._4_4_,(float)iVar17);
                if ((int)local_3b8[5] == 0) {
                  pwVar29 = L"";
                }
                else {
                  pwVar29 = (wchar_t *)local_3b8[4];
                }
                iVar17 = _wtoi(pwVar29);
                local_2e0 = CONCAT44((float)iVar17,(undefined4)local_2e0);
              }
              cVar7 = FString::IsNumeric(local_3b8 + 6);
              if ((cVar7 != '\0') && (cVar7 = FString::IsNumeric(local_3b8 + 8), cVar7 != '\0')) {
                if ((int)local_3b8[7] == 0) {
                  pwVar29 = L"";
                }
                else {
                  pwVar29 = (wchar_t *)local_3b8[6];
                }
                iVar17 = _wtoi(pwVar29);
                local_2e8 = CONCAT44(local_2e8._4_4_,(float)iVar17);
                if ((int)local_3b8[9] == 0) {
                  iVar17 = _wtoi(L"");
                  fVar38 = (float)iVar17;
                }
                else {
                  iVar17 = _wtoi((wchar_t *)local_3b8[8]);
                  fVar38 = (float)iVar17;
                }
LAB_142f0839a:
                local_2e8 = CONCAT44(fVar38,(undefined4)local_2e8);
              }
            }
          }
          if ((int)local_3b8[1] == 0) {
            puVar26 = &DAT_143f3eda8;
          }
          else {
            puVar26 = (undefined2 *)*local_3b8;
          }
          FName::FName(&local_278,puVar26,1);
          FText::FText(local_150);
          lVar19 = local_198;
          uVar11 = FUN_1420fc090(local_198);
          cVar7 = FUN_142ef5b70(local_278,uVar11);
          if (cVar7 == '\0') {
            cVar7 = (cVar6 != '\0') + '\x01';
            uVar11 = FUN_1420fc090(lVar19);
            FUN_142ef33f0(local_108,local_278,uVar11,cVar7);
            puVar13 = &local_2e8;
            if (cVar6 == '\0') {
              puVar13 = &local_2e0;
            }
            fVar38 = *(float *)((longlong)puVar13 + 4) / local_fc;
            fVar39 = local_100 * fVar38;
            fVar38 = local_fc * fVar38;
            uVar11 = FUN_1420fc090(lVar19);
            uVar11 = FUN_142ef39a0(local_120,local_278,uVar11,cVar7,CONCAT44(fVar38,fVar39));
            FText::operator=(local_150,uVar11);
            plVar12 = local_118;
            if (local_118 != (longlong *)0x0) {
              LOCK();
              plVar24 = local_118 + 1;
              lVar19 = *plVar24;
              *(int *)plVar24 = (int)*plVar24 + -1;
              UNLOCK();
              if ((int)lVar19 == 1) {
                (**(code **)*local_118)(local_118);
                LOCK();
                piVar1 = (int *)((longlong)plVar12 + 0xc);
                iVar17 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar17 == 1) {
                  (**(code **)(*plVar12 + 8))(plVar12,1);
                }
              }
            }
            FSlateBrush::~FSlateBrush(local_108);
          }
          else {
            uVar11 = FUN_1420fc090(lVar19);
            uVar11 = FUN_142eff9e0(local_138,local_278,uVar11,0);
            FText::operator=(local_150,uVar11);
            plVar12 = local_130;
            if (local_130 != (longlong *)0x0) {
              LOCK();
              plVar24 = local_130 + 1;
              lVar19 = *plVar24;
              *(int *)plVar24 = (int)*plVar24 + -1;
              UNLOCK();
              if ((int)lVar19 == 1) {
                (**(code **)*local_130)(local_130);
                LOCK();
                piVar1 = (int *)((longlong)plVar12 + 0xc);
                iVar17 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar17 == 1) {
                  (**(code **)(*plVar12 + 8))(plVar12,1);
                }
              }
            }
          }
          iVar17 = *(int *)(lVar10 + 0x118) + -1;
          if (*(int *)(lVar10 + 0x118) == 0) {
            iVar17 = 0;
          }
          if (*(int *)(param_2 + 1) == 0) {
            puVar26 = &DAT_143f3eda8;
            iVar18 = 0;
          }
          else {
            puVar26 = *param_2;
            iVar18 = *(int *)(param_2 + 1) + -1;
          }
          iVar9 = (iVar18 - iVar17) - iVar9;
          if (iVar9 < 0) {
            iVar17 = 0;
          }
          else {
            iVar17 = iVar18;
            if (iVar9 < iVar18) {
              iVar17 = iVar9;
            }
          }
          pvVar31 = (void *)0x0;
          uVar25 = 0;
          local_288 = (void *)0x0;
          local_res18 = 0;
          local_280 = 0;
          psVar35 = puVar26 + ((longlong)iVar18 - (longlong)iVar17);
          if ((psVar35 != (short *)0x0) && (*psVar35 != 0)) {
            lVar10 = -1;
            do {
              lVar19 = lVar10 + 1;
              lVar10 = lVar10 + 1;
            } while (psVar35[lVar19] != 0);
            uVar33 = (int)lVar10 + 1;
            local_280 = (ulonglong)uVar33;
            uVar25 = uVar33;
            if (0 < (int)uVar33) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_288,0);
              local_res18 = local_280._4_4_;
              uVar25 = (uint)local_280;
            }
            pvVar31 = local_288;
            FGenericPlatformString::Memcpy(local_288,psVar35,(longlong)(int)uVar33 * 2);
          }
          puVar13 = (undefined8 *)FText::ToString(local_150);
          if (*(int *)(puVar13 + 1) == 0) {
            psVar35 = &DAT_143f3eda8;
          }
          else {
            psVar35 = (short *)*puVar13;
          }
          iVar9 = *(int *)(param_2 + 1) + -1;
          if (*(int *)(param_2 + 1) == 0) {
            pwVar29 = L"";
            iVar9 = 0;
          }
          else {
            pwVar29 = *param_2;
          }
          if (iVar8 < 0) {
            iVar9 = 0;
          }
          else if (iVar8 < iVar9) {
            iVar9 = iVar8;
          }
          local_2d8 = (wchar_t *)0x0;
          uVar33 = iVar9 + 1;
          if (iVar9 == 0) {
            uVar33 = 0;
          }
          pwVar23 = (wchar_t *)0x0;
          local_2d0 = (ulonglong)uVar33;
          if (0 < (int)uVar33) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2d8,0);
            pwVar23 = local_2d8;
            uVar33 = (uint)local_2d0;
            if (0 < (int)(uint)local_2d0) {
              wcsncpy(local_2d8,pwVar29,(longlong)iVar9);
              pwVar23[iVar9] = L'\0';
            }
          }
          if ((psVar35 == (short *)0x0) || (*psVar35 == 0)) {
            local_1cc = local_2d0._4_4_;
            local_2d0 = 0;
            local_2d8 = (wchar_t *)0x0;
          }
          else {
            lVar10 = -1;
            do {
              lVar10 = lVar10 + 1;
            } while (psVar35[lVar10] != 0);
            iVar8 = (int)lVar10;
            if ((uVar33 != 0) || (iVar9 = 1, iVar8 == 0)) {
              iVar9 = 0;
            }
            TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
                      (&local_2f8,&local_2d8,iVar9 + iVar8);
            uVar4 = local_2f0;
            pwVar23 = local_2f8;
            if (iVar8 != 0) {
              iVar9 = (uint)local_2f0;
              lVar10 = (longlong)(int)(uint)local_2f0;
              iVar17 = ((uint)local_2f0 == 0) + (uint)local_2f0 + iVar8;
              local_2f0 = CONCAT44(local_2f0._4_4_,iVar17);
              if (local_2f0._4_4_ < iVar17) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2f8,uVar4 & 0xffffffff);
              }
              pwVar23 = local_2f8;
              pwVar29 = local_2f8 + (lVar10 - (ulonglong)(iVar9 != 0));
              _guard_xfg_dispatch_icall_nop(pwVar29,psVar35,(longlong)iVar8 * 2);
              pwVar29[iVar8] = L'\0';
            }
            uVar33 = (uint)local_2f0;
            local_1cc = local_2f0._4_4_;
            local_2f0 = 0;
            local_2f8 = (wchar_t *)0x0;
          }
          pwVar29 = local_2d8;
          local_1d8 = pwVar23;
          local_1d0 = uVar33;
          if ((int)uVar33 < 2) {
            local_288 = (void *)0x0;
            local_280 = 0;
            pvVar32 = (void *)0x0;
            pvVar36 = pvVar31;
          }
          else {
            iVar8 = 0;
            if (uVar25 != 0) {
              iVar8 = uVar25 - 1;
            }
            if ((uVar33 != 0) || (iVar9 = 1, iVar8 == 0)) {
              iVar9 = 0;
            }
            TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
                      (&local_2c8,&local_1d8,iVar9 + iVar8);
            uVar4 = local_2c0;
            pvVar36 = local_2c8;
            if (iVar8 != 0) {
              iVar9 = (uint)local_2c0;
              lVar10 = (longlong)(int)(uint)local_2c0;
              iVar17 = ((uint)local_2c0 == 0) + (uint)local_2c0 + iVar8;
              local_2c0 = CONCAT44(local_2c0._4_4_,iVar17);
              if (local_2c0._4_4_ < iVar17) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2c8,uVar4 & 0xffffffff);
              }
              pvVar36 = local_2c8;
              pvVar32 = (void *)((longlong)local_2c8 + (lVar10 - (ulonglong)(iVar9 != 0)) * 2);
              _guard_xfg_dispatch_icall_nop(pvVar32,pvVar31,(longlong)iVar8 * 2);
              *(undefined2 *)((longlong)iVar8 * 2 + (longlong)pvVar32) = 0;
            }
            uVar25 = (uint)local_2c0;
            local_res18 = local_2c0._4_4_;
            local_2c0 = 0;
            local_2c8 = (void *)0x0;
            pvVar32 = pvVar31;
          }
          pwVar23 = local_1d8;
          local_1a8 = pvVar36;
          local_1a0 = uVar25;
          local_19c = local_res18;
          if (param_2 == &local_1a8) {
            if (pvVar36 != (void *)0x0) {
              FMemory::Free(pvVar36);
            }
          }
          else {
            if (*param_2 != (void *)0x0) {
              FMemory::Free();
            }
            *param_2 = pvVar36;
            *(uint *)(param_2 + 1) = uVar25;
            *(undefined4 *)((longlong)param_2 + 0xc) = local_res18;
          }
          if (pwVar23 != (wchar_t *)0x0) {
            FMemory::Free(pwVar23);
          }
          if (pwVar29 != (wchar_t *)0x0) {
            FMemory::Free(pwVar29);
          }
          if (pvVar32 != (void *)0x0) {
            FMemory::Free(pvVar32);
          }
          plVar12 = local_148;
          bVar37 = true;
          if (local_148 != (longlong *)0x0) {
            LOCK();
            plVar24 = local_148 + 1;
            lVar10 = *plVar24;
            *(int *)plVar24 = (int)*plVar24 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_148)(local_148);
              LOCK();
              piVar1 = (int *)((longlong)plVar12 + 0xc);
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar12 + 8))(plVar12,1);
              }
            }
          }
        }
        plVar12 = local_3b8;
        for (iVar8 = (int)local_3b0; iVar8 != 0; iVar8 = iVar8 + -1) {
          if (*plVar12 != 0) {
            FMemory::Free();
          }
          plVar12 = plVar12 + 2;
        }
        if (local_3b8 != (longlong *)0x0) {
          FMemory::Free(local_3b8);
        }
        if (local_220 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        lVar10 = local_398;
      } while (bVar37);
    }
  }
  plVar12 = local_178;
  if (local_178 != (longlong *)0x0) {
    LOCK();
    plVar24 = local_178 + 1;
    lVar10 = *plVar24;
    *(int *)plVar24 = (int)*plVar24 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_178)(local_178);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_178 + 8))(local_178,1);
      }
    }
  }
  return;
}



// FUNCTION 142f08a50 FUN_142f08a50 body=7255 status=ok
// SIG undefined FUN_142f08a50(void)

void FUN_142f08a50(longlong param_1,wchar_t **param_2)

{
  int *piVar1;
  void *pvVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined2 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  int iVar17;
  undefined2 *puVar18;
  int iVar19;
  int iVar20;
  wchar_t *pwVar21;
  ulonglong uVar22;
  longlong *plVar23;
  uint uVar24;
  undefined2 *puVar25;
  undefined8 *puVar26;
  wchar_t *pwVar27;
  wchar_t *pwVar28;
  wchar_t *pwVar29;
  uint uVar30;
  short *_Src;
  float fVar31;
  float fVar32;
  int local_res20;
  longlong *local_378;
  undefined8 local_370;
  undefined8 local_368;
  ulonglong local_360;
  undefined2 *local_358;
  int local_350;
  undefined4 local_34c;
  uint local_348;
  undefined8 local_340;
  int local_338;
  undefined4 uStack_334;
  int local_330;
  undefined2 *local_328;
  undefined8 local_320;
  undefined2 *local_318;
  undefined8 local_310;
  wchar_t *local_308;
  undefined8 local_300;
  wchar_t *local_2f8;
  undefined8 local_2f0;
  wchar_t *local_2e8;
  undefined8 local_2e0;
  undefined2 *local_2d8;
  undefined8 local_2d0;
  wchar_t *local_2c8;
  ulonglong local_2c0;
  wchar_t *local_2b8;
  undefined8 local_2b0;
  undefined2 *local_2a8;
  undefined8 local_2a0;
  wchar_t *local_298;
  undefined8 local_290;
  wchar_t *local_288;
  undefined8 local_280;
  wchar_t *local_278;
  undefined8 local_270;
  wchar_t *local_268;
  undefined8 local_260;
  wchar_t *local_258;
  undefined8 local_250;
  wchar_t *local_248;
  int local_240;
  int local_23c;
  wchar_t *local_238;
  ulonglong local_230;
  wchar_t *local_228;
  undefined8 local_220;
  wchar_t *local_218;
  undefined8 local_210;
  wchar_t *local_208;
  int local_200;
  undefined4 local_1fc;
  undefined2 *local_1f8;
  int local_1f0;
  int local_1ec;
  wchar_t *local_1e8;
  int local_1e0;
  undefined4 local_1dc;
  int local_1d8 [2];
  wchar_t *local_1d0;
  uint local_1c8;
  undefined4 local_1c4;
  wchar_t *local_1c0;
  uint local_1b8;
  undefined4 local_1b4;
  undefined2 *local_1b0;
  undefined8 local_1a8;
  wchar_t *local_1a0;
  uint local_198;
  int local_194;
  wchar_t *local_190;
  int local_188;
  undefined4 local_184;
  wchar_t *local_180;
  uint local_178;
  undefined4 local_174;
  wchar_t *local_170;
  int local_168;
  undefined4 local_164;
  undefined2 *local_160;
  int local_158;
  int local_154;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  float local_100;
  float local_fc;
  
  if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar10 = FUN_1420fc090(), lVar10 != 0)) {
    lVar10 = FUN_1420fc090();
    uVar22 = 0;
    uVar13 = uVar22;
    if (lVar10 != 0) {
      uVar11 = FUN_142f30760();
      plVar12 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar10,uVar11);
      if (plVar12 != (longlong *)0x0) {
        uVar13 = (**(code **)(*plVar12 + 0x10))();
      }
    }
    if (uVar13 != 0) {
      local_348 = 0;
      local_360 = uVar13;
      do {
        bVar3 = false;
        if (*(int *)(uVar13 + 0x90) == 0) {
          puVar18 = &DAT_143f3eda8;
        }
        else {
          puVar18 = *(undefined2 **)(uVar13 + 0x88);
        }
        iVar7 = FUN_141592950(param_2,puVar18,1,0,uVar22);
        if (*(int *)(uVar13 + 0xa0) == 0) {
          puVar18 = &DAT_143f3eda8;
        }
        else {
          puVar18 = *(undefined2 **)(uVar13 + 0x98);
        }
        local_338 = iVar7;
        local_330 = FUN_141592950(param_2,puVar18,1,0,iVar7 + 1U);
        if (local_330 <= iVar7) break;
        iVar9 = *(int *)(uVar13 + 0x90) + -1;
        if (*(int *)(uVar13 + 0x90) == 0) {
          iVar9 = 0;
        }
        uVar24 = iVar9 + iVar7;
        uVar30 = 0;
        uVar8 = *(int *)(uVar13 + 0xa0) - 1;
        if (*(int *)(uVar13 + 0xa0) == 0) {
          uVar8 = uVar30;
        }
        iVar9 = *(int *)(param_2 + 1);
        uVar16 = ((uVar24 - uVar8) - iVar7) + local_330;
        uVar8 = iVar9 - 1;
        if (iVar9 == 0) {
          uVar8 = uVar30;
        }
        if (uVar24 < uVar8) {
          uVar8 = uVar24;
        }
        uVar24 = iVar9 - 1;
        if (iVar9 == 0) {
          uVar24 = uVar30;
        }
        uVar30 = uVar8;
        if ((uVar8 <= uVar16) && (uVar30 = uVar24, uVar16 < uVar24)) {
          uVar30 = uVar16;
        }
        if (iVar9 == 0) {
          pwVar29 = L"";
        }
        else {
          pwVar29 = *param_2;
        }
        iVar19 = uVar30 - uVar8;
        local_208 = (wchar_t *)0x0;
        local_1fc = 0;
        iVar9 = iVar19 + 1;
        if (iVar19 == 0) {
          iVar9 = 0;
        }
        local_200 = iVar9;
        if ((0 < iVar9) &&
           (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_208,0), iVar9 = local_200,
           pwVar27 = local_208, 0 < local_200)) {
          wcsncpy(local_208,pwVar29 + (int)uVar8,(longlong)iVar19);
          pwVar27[iVar19] = L'\0';
        }
        uVar13 = local_360;
        plVar12 = (longlong *)(local_360 + 0xa8);
        TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
        ::FindId(plVar12,local_1d8,&local_208);
        puVar15 = (undefined8 *)0x0;
        if (local_1d8[0] != -1) {
          puVar15 = (undefined8 *)((longlong)local_1d8[0] * 0x30 + *plVar12);
        }
        puVar26 = puVar15 + 2;
        if (puVar15 == (undefined8 *)0x0) {
          puVar26 = (undefined8 *)0x0;
        }
        if (puVar26 == (undefined8 *)0x0) {
          if (-1 < local_338) {
            bVar3 = true;
            local_348 = iVar7 + 1U;
          }
        }
        else {
          local_350 = *(int *)(puVar26 + 1);
          lVar10 = (longlong)local_350;
          local_358 = (undefined2 *)0x0;
          pvVar2 = (void *)*puVar26;
          if (local_350 == 0) {
            local_34c = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_358,local_350,0);
            _guard_xfg_dispatch_icall_nop(local_358,pvVar2,lVar10 * 2);
          }
          uVar8 = FUN_141592950(&local_358,L"<img src",1,0,0xffffffff);
          iVar7 = FUN_141592950(&local_358,&DAT_14598c784,1,0,uVar8);
          if (((-1 < (int)uVar8) && ((int)uVar8 <= iVar7)) &&
             (fVar31 = (float)FUN_142eebf40(param_1), 1e-08 < fVar31)) {
            uVar24 = iVar7 + uVar8;
            fVar31 = fVar31 / *(float *)(uVar13 + 0xf8);
            pwVar29 = (wchar_t *)0x0;
            fVar32 = *(float *)(uVar13 + 0xf8) * fVar31;
            fVar31 = fVar31 * *(float *)(uVar13 + 0xfc);
            local_368 = (undefined2 *)
                        CONCAT44(local_368._4_4_,(int)ROUND((fVar31 + fVar31) - 0.5) >> 1);
            local_340 = (undefined2 *)
                        CONCAT44(local_340._4_4_,(int)ROUND((fVar32 + fVar32) - 0.5) >> 1);
            uVar30 = local_350 - 1;
            if (local_350 == 0) {
              uVar30 = 0;
            }
            if (uVar8 < uVar30) {
              uVar30 = uVar8;
            }
            uVar8 = local_350 - 1;
            if (local_350 == 0) {
              uVar8 = 0;
            }
            uVar16 = uVar30;
            if ((uVar30 <= uVar24) && (uVar16 = uVar8, uVar24 < uVar8)) {
              uVar16 = uVar24;
            }
            local_170 = (wchar_t *)0x0;
            local_164 = 0;
            puVar18 = &DAT_143f3eda8;
            if (local_350 != 0) {
              puVar18 = local_358;
            }
            iVar19 = uVar16 - uVar30;
            iVar7 = iVar19 + 1;
            if (iVar19 == 0) {
              iVar7 = 0;
            }
            local_168 = iVar7;
            if ((0 < iVar7) &&
               (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_170,0), iVar7 = local_168,
               pwVar29 = local_170, 0 < local_168)) {
              wcsncpy(local_170,puVar18 + (int)uVar30,(longlong)iVar19);
              pwVar29[iVar19] = L'\0';
            }
            pwVar27 = L"";
            if (iVar7 != 0) {
              pwVar27 = pwVar29;
            }
            FString::PrintfImpl(&local_1b0,L"%s height=\"%i\" width=\"%i\"/>",pwVar27,
                                (ulonglong)local_340 & 0xffffffff,(ulonglong)local_368 & 0xffffffff)
            ;
            if (local_358 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            local_350 = (int)local_1a8;
            local_358 = local_1b0;
            local_34c = local_1a8._4_4_;
            local_1a8 = 0;
            local_1b0 = (undefined2 *)0x0;
            if (pwVar29 != (wchar_t *)0x0) {
              FMemory::Free(pwVar29);
            }
          }
          iVar7 = local_338;
          uVar8 = 0;
          if (*(char *)(puVar26 + 2) == '\0') {
            if (1 < local_350) {
              bVar3 = true;
              iVar19 = 0;
              uVar30 = *(int *)(local_360 + 0x90) - 1;
              if (*(int *)(local_360 + 0x90) == 0) {
                uVar30 = uVar8;
              }
              if (iVar9 != 0) {
                iVar19 = iVar9 + -1;
              }
              uVar24 = *(int *)(local_360 + 0xa0) - 1;
              if (*(int *)(local_360 + 0xa0) == 0) {
                uVar24 = uVar8;
              }
              if (*(int *)(param_2 + 1) == 0) {
                pwVar29 = L"";
                uVar16 = uVar8;
              }
              else {
                pwVar29 = *param_2;
                uVar16 = *(int *)(param_2 + 1) - 1;
              }
              uVar30 = (((uVar16 - iVar19) - uVar30) - uVar24) - local_338;
              if ((int)uVar30 < 0) {
                uVar24 = 0;
              }
              else {
                uVar24 = uVar16;
                if ((int)uVar30 < (int)uVar16) {
                  uVar24 = uVar30;
                }
              }
              local_2b8 = (wchar_t *)0x0;
              local_2b0 = 0;
              pwVar29 = pwVar29 + ((longlong)(int)uVar16 - (longlong)(int)uVar24);
              if ((pwVar29 != (wchar_t *)0x0) && (uVar8 = 0, *pwVar29 != L'\0')) {
                lVar10 = -1;
                do {
                  lVar4 = lVar10 + 1;
                  lVar10 = lVar10 + 1;
                } while (pwVar29[lVar4] != L'\0');
                uVar30 = (int)lVar10 + 1;
                local_2b0 = (ulonglong)uVar30;
                uVar8 = uVar30;
                if (0 < (int)uVar30) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,0);
                  uVar8 = (uint)local_2b0;
                }
                FGenericPlatformString::Memcpy(local_2b8,pwVar29,(longlong)(int)uVar30 * 2);
              }
              pwVar29 = (wchar_t *)0x0;
              iVar9 = *(int *)(param_2 + 1) + -1;
              if (*(int *)(param_2 + 1) == 0) {
                pwVar27 = L"";
                iVar9 = 0;
              }
              else {
                pwVar27 = *param_2;
              }
              if (iVar7 < 0) {
                iVar9 = 0;
              }
              else if (iVar7 < iVar9) {
                iVar9 = iVar7;
              }
              local_218 = (wchar_t *)0x0;
              local_210 = (wchar_t *)(ulonglong)(iVar9 + 1);
              if (iVar9 == 0) {
                local_210 = pwVar29;
              }
              iVar7 = (int)local_210;
              iVar19 = 0;
              if (0 < iVar7) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_218,0);
                pwVar29 = local_218;
                iVar7 = (int)local_210;
                iVar19 = local_210._4_4_;
                if (0 < (int)local_210) {
                  wcsncpy(local_218,pwVar27,(longlong)iVar9);
                  pwVar29[iVar9] = L'\0';
                }
              }
              iVar9 = local_350;
              puVar18 = local_358;
              if (iVar7 < 2) {
                local_248 = (wchar_t *)0x0;
                if (local_350 == 0) {
                  local_23c = 0;
                  pwVar27 = (wchar_t *)0x0;
                  local_240 = local_350;
                }
                else {
                  local_240 = local_350;
                  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_248,local_350,0);
                  pwVar27 = local_248;
                  _guard_xfg_dispatch_icall_nop(local_248,puVar18,(longlong)iVar9 * 2);
                }
              }
              else {
                iVar9 = local_350 + -1;
                if (local_350 == 0) {
                  iVar9 = 0;
                }
                if ((iVar7 != 0) || (iVar20 = 1, iVar9 == 0)) {
                  iVar20 = 0;
                }
                local_218 = (wchar_t *)0x0;
                local_210 = (wchar_t *)0x0;
                local_2e8 = pwVar29;
                local_2e0._4_4_ = iVar19;
                if (iVar19 < iVar9 + iVar7 + iVar20) {
                  local_2e0._0_4_ = iVar7;
                  TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2e8);
                  iVar7 = (int)local_2e0;
                }
                puVar18 = local_358;
                pwVar27 = local_2e8;
                iVar19 = iVar7;
                iVar20 = local_2e0._4_4_;
                if (iVar9 != 0) {
                  local_2e0._0_4_ = (uint)(iVar7 == 0) + iVar9 + iVar7;
                  if (local_2e0._4_4_ < (int)local_2e0) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2e8,iVar7);
                  }
                  iVar20 = local_2e0._4_4_;
                  iVar19 = (int)local_2e0;
                  pwVar27 = local_2e8;
                  pwVar29 = local_2e8 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0));
                  _guard_xfg_dispatch_icall_nop(pwVar29,puVar18,(longlong)iVar9 * 2);
                  pwVar29[iVar9] = L'\0';
                }
                local_2e8 = (wchar_t *)0x0;
                local_2e0 = 0;
                pwVar29 = (wchar_t *)0x0;
                local_248 = pwVar27;
                local_240 = iVar19;
                local_23c = iVar20;
              }
              if (local_240 < 2) {
                local_1d0 = local_2b8;
                local_1c4 = local_2b0._4_4_;
                local_2b0 = 0;
                local_2b8 = (wchar_t *)0x0;
                local_1c8 = uVar8;
              }
              else {
                iVar7 = uVar8 - 1;
                if (uVar8 == 0) {
                  iVar7 = 0;
                }
                if ((local_240 != 0) || (iVar9 = 1, iVar7 == 0)) {
                  iVar9 = 0;
                }
                TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
                          (&local_288,&local_248,iVar7 + iVar9);
                uVar13 = local_280;
                pwVar21 = local_288;
                if (iVar7 != 0) {
                  iVar9 = (uint)local_280;
                  lVar10 = (longlong)(int)(uint)local_280;
                  iVar19 = (uint)((uint)local_280 == 0) + iVar7 + (uint)local_280;
                  local_280 = CONCAT44(local_280._4_4_,iVar19);
                  if (local_280._4_4_ < iVar19) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_288,uVar13 & 0xffffffff);
                  }
                  pwVar21 = local_288;
                  pwVar27 = local_288 + (lVar10 - (ulonglong)(iVar9 != 0));
                  _guard_xfg_dispatch_icall_nop(pwVar27,local_2b8,(longlong)iVar7 * 2);
                  pwVar27[iVar7] = L'\0';
                }
                local_1c8 = (uint)local_280;
                local_1c4 = local_280._4_4_;
                local_288 = (wchar_t *)0x0;
                local_280 = 0;
                pwVar27 = local_248;
                local_1d0 = pwVar21;
              }
              pwVar21 = local_2b8;
              FString::operator=(param_2,&local_1d0);
              if (local_1d0 != (wchar_t *)0x0) {
                FMemory::Free();
              }
              if (pwVar27 != (wchar_t *)0x0) {
                FMemory::Free(pwVar27);
              }
              if (pwVar29 != (wchar_t *)0x0) {
                FMemory::Free(pwVar29);
              }
              goto joined_r0x000142f09c46;
            }
          }
          else {
            local_2d8 = (undefined2 *)0x0;
            iVar7 = *(int *)(local_360 + 0x90);
            pvVar2 = *(void **)(local_360 + 0x88);
            local_2d0._0_4_ = iVar7;
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                      (&local_2d8,(2 - (uint)(iVar7 != 0)) + iVar7,0);
            puVar18 = local_2d8;
            local_368 = local_2d8;
            _guard_xfg_dispatch_icall_nop(local_2d8,pvVar2,(longlong)iVar7 * 2);
            iVar19 = (int)local_2d0;
            lVar10 = (longlong)(int)local_2d0;
            local_2d0._0_4_ = (2 - (uint)((int)local_2d0 != 0)) + (int)local_2d0;
            iVar20 = (int)local_2d0;
            iVar7 = local_2d0._4_4_;
            if (local_2d0._4_4_ < (int)local_2d0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2d8,iVar19);
              local_368 = local_2d8;
              puVar18 = local_2d8;
              iVar20 = (int)local_2d0;
              iVar7 = local_2d0._4_4_;
            }
            puVar25 = (undefined2 *)0x0;
            local_2d8 = (undefined2 *)0x0;
            local_2d0 = 0;
            lVar10 = lVar10 - (ulonglong)(iVar19 != 0);
            puVar18[lVar10] = 0x2f;
            puVar18[lVar10 + 1] = 0;
            local_158 = iVar20;
            local_154 = iVar7;
            if (iVar20 < 2) {
              local_2a8 = (undefined2 *)0x0;
              local_2a0 = CONCAT44(local_2a0._4_4_,iVar9);
              local_160 = puVar18;
              if (iVar9 == 0) {
                local_2a0 = 0;
                iVar7 = 0;
                iVar17 = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_2a8,iVar9);
                puVar25 = local_2a8;
                _guard_xfg_dispatch_icall_nop(local_2a8,local_208,(longlong)iVar9 * 2);
                iVar7 = (int)local_2a0;
                iVar17 = local_2a0._4_4_;
              }
            }
            else {
              iVar19 = 0;
              if (iVar9 != 0) {
                iVar19 = iVar9 + -1;
              }
              if ((iVar20 != 0) || (iVar17 = 1, iVar19 == 0)) {
                iVar17 = 0;
              }
              local_368 = (undefined2 *)0x0;
              local_160 = (undefined2 *)0x0;
              local_328 = puVar18;
              local_320._4_4_ = iVar7;
              if (iVar7 < iVar19 + iVar17 + iVar20) {
                local_320._0_4_ = iVar20;
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_328);
                iVar20 = (int)local_320;
              }
              puVar25 = local_328;
              iVar7 = iVar20;
              iVar17 = local_320._4_4_;
              if (iVar19 != 0) {
                local_320._0_4_ = (uint)(iVar20 == 0) + iVar20 + iVar19;
                if (local_320._4_4_ < (int)local_320) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_328,iVar20);
                }
                iVar17 = local_320._4_4_;
                iVar7 = (int)local_320;
                puVar25 = local_328;
                puVar18 = local_328 + ((longlong)iVar20 - (ulonglong)(iVar20 != 0));
                _guard_xfg_dispatch_icall_nop(puVar18,local_208,(longlong)iVar19 * 2);
                puVar18[iVar19] = 0;
              }
              local_328 = (undefined2 *)0x0;
              local_2a0 = CONCAT44(iVar17,iVar7);
              local_320 = 0;
              local_2a8 = puVar25;
            }
            uVar13 = local_360;
            puVar18 = (undefined2 *)0x0;
            iVar19 = *(int *)(local_360 + 0xa0);
            if (iVar7 < 2) {
              pvVar2 = *(void **)(local_360 + 0x98);
              local_1f8 = (undefined2 *)0x0;
              local_1f0 = iVar19;
              if (iVar19 == 0) {
                local_1ec = 0;
                puVar14 = puVar18;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1f8,iVar19,0);
                puVar14 = local_1f8;
                _guard_xfg_dispatch_icall_nop(local_1f8,pvVar2,(longlong)iVar19 * 2);
              }
            }
            else {
              puVar14 = (undefined2 *)(ulonglong)(iVar19 - 1);
              if (iVar19 == 0) {
                puVar14 = puVar18;
              }
              iVar19 = (int)puVar14;
              if ((iVar7 != 0) || (puVar14 = (undefined2 *)0x1, iVar19 == 0)) {
                puVar14 = puVar18;
              }
              local_2a8 = (undefined2 *)0x0;
              local_2a0 = 0;
              local_318 = puVar25;
              local_310._4_4_ = iVar17;
              if (iVar17 < iVar19 + (int)puVar14 + iVar7) {
                local_310._0_4_ = iVar7;
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_318);
                iVar7 = (int)local_310;
              }
              pvVar2 = *(void **)(uVar13 + 0x98);
              puVar14 = local_318;
              iVar20 = iVar7;
              iVar17 = local_310._4_4_;
              if (iVar19 != 0) {
                local_310._0_4_ = (uint)(iVar7 == 0) + iVar19 + iVar7;
                if (local_310._4_4_ < (int)local_310) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_318,iVar7);
                }
                iVar17 = local_310._4_4_;
                iVar20 = (int)local_310;
                puVar14 = local_318;
                puVar25 = local_318 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0));
                _guard_xfg_dispatch_icall_nop(puVar25,pvVar2,(longlong)iVar19 * 2);
                puVar25[iVar19] = 0;
              }
              local_318 = (undefined2 *)0x0;
              local_310 = 0;
              puVar25 = puVar18;
              local_1f8 = puVar14;
              local_1f0 = iVar20;
              local_1ec = iVar17;
            }
            puVar18 = &DAT_143f3eda8;
            if (local_1f0 != 0) {
              puVar18 = puVar14;
            }
            iVar7 = FUN_141592950(param_2,puVar18,1,0,0xffffffff);
            local_340 = (undefined2 *)CONCAT44(local_340._4_4_,iVar7);
            if (puVar14 != (undefined2 *)0x0) {
              FMemory::Free(puVar14);
            }
            if (puVar25 != (undefined2 *)0x0) {
              FMemory::Free(puVar25);
            }
            if (local_368 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            if (local_330 < iVar7) {
              iVar19 = *(int *)(local_360 + 0x90) + -1;
              if (*(int *)(local_360 + 0x90) == 0) {
                iVar19 = 0;
              }
              iVar20 = *(int *)(local_360 + 0xa0) + -1;
              uVar8 = iVar19 + local_330;
              if (*(int *)(local_360 + 0xa0) == 0) {
                iVar20 = 0;
              }
              iVar19 = *(int *)(param_2 + 1);
              uVar24 = ((uVar8 - iVar20) - local_330) + iVar7;
              uVar30 = iVar19 - 1;
              if (iVar19 == 0) {
                uVar30 = 0;
              }
              uVar16 = iVar19 - 1;
              if (uVar8 < uVar30) {
                uVar30 = uVar8;
              }
              if (iVar19 == 0) {
                uVar16 = 0;
              }
              uVar8 = uVar30;
              if ((uVar30 <= uVar24) && (uVar8 = uVar16, uVar24 < uVar16)) {
                uVar8 = uVar24;
              }
              if (iVar19 == 0) {
                pwVar29 = L"";
              }
              else {
                pwVar29 = *param_2;
              }
              iVar19 = uVar8 - uVar30;
              local_190 = (wchar_t *)0x0;
              pwVar27 = (wchar_t *)0x0;
              local_184 = 0;
              iVar7 = iVar19 + 1;
              if (iVar19 == 0) {
                iVar7 = 0;
              }
              local_188 = iVar7;
              if ((0 < iVar7) &&
                 (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_190,0), iVar7 = local_188,
                 pwVar27 = local_190, 0 < local_188)) {
                wcsncpy(local_190,pwVar29 + (int)uVar30,(longlong)iVar19);
                pwVar27[iVar19] = L'\0';
              }
              pwVar21 = local_190;
              if (1 < local_350) {
                bVar3 = true;
                puVar18 = &DAT_143f3eda8;
                if (local_350 != 0) {
                  puVar18 = local_358;
                }
                iVar19 = *(int *)(local_360 + 0x90) + -1;
                if (*(int *)(local_360 + 0x90) == 0) {
                  iVar19 = 0;
                }
                iVar20 = iVar9 + -1;
                if (iVar9 == 0) {
                  iVar20 = 0;
                }
                iVar9 = *(int *)(local_360 + 0xa0) + -1;
                if (*(int *)(local_360 + 0xa0) == 0) {
                  iVar9 = 0;
                }
                if (*(int *)(param_2 + 1) == 0) {
                  pwVar29 = L"";
                  iVar17 = 0;
                }
                else {
                  pwVar29 = *param_2;
                  iVar17 = *(int *)(param_2 + 1) + -1;
                }
                iVar19 = (((iVar17 - iVar19) - iVar20) - iVar9) - (int)local_340;
                iVar9 = iVar19 + -1;
                if (iVar9 < 0) {
                  iVar20 = 0;
                }
                else {
                  iVar20 = iVar17;
                  if (iVar19 <= iVar17) {
                    iVar20 = iVar9;
                  }
                }
                uVar8 = 0;
                local_2c8 = (wchar_t *)0x0;
                local_res20 = 0;
                iVar9 = local_res20;
                local_res20 = 0;
                local_2c0 = 0;
                pwVar29 = pwVar29 + ((longlong)iVar17 - (longlong)iVar20);
                if ((pwVar29 != (wchar_t *)0x0) && (*pwVar29 != L'\0')) {
                  lVar10 = -1;
                  do {
                    lVar4 = lVar10 + 1;
                    lVar10 = lVar10 + 1;
                  } while (pwVar29[lVar4] != L'\0');
                  uVar30 = (int)lVar10 + 1;
                  local_2c0 = (ulonglong)uVar30;
                  uVar8 = uVar30;
                  local_res20 = iVar9;
                  if (0 < (int)uVar30) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2c8,0);
                    local_res20 = (int)(local_2c0 >> 0x20);
                    uVar8 = (uint)local_2c0;
                  }
                  FGenericPlatformString::Memcpy(local_2c8,pwVar29,(longlong)(int)uVar30 * 2);
                }
                pwVar29 = L"";
                if (iVar7 != 0) {
                  pwVar29 = pwVar27;
                }
                FString::PrintfImpl(&local_228,puVar18,pwVar29);
                iVar7 = *(int *)(param_2 + 1) + -1;
                if (*(int *)(param_2 + 1) == 0) {
                  pwVar29 = L"";
                  iVar7 = 0;
                }
                else {
                  pwVar29 = *param_2;
                }
                if (local_338 < 0) {
                  iVar7 = 0;
                }
                else if (local_338 < iVar7) {
                  iVar7 = local_338;
                }
                local_258 = (wchar_t *)0x0;
                uVar30 = iVar7 + 1;
                if (iVar7 == 0) {
                  uVar30 = 0;
                }
                pwVar27 = (wchar_t *)0x0;
                local_250 = (ulonglong)uVar30;
                iVar9 = 0;
                if (0 < (int)uVar30) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_258,0);
                  pwVar27 = local_258;
                  uVar30 = (uint)local_250;
                  iVar9 = local_250._4_4_;
                  if (0 < (int)(uint)local_250) {
                    wcsncpy(local_258,pwVar29,(longlong)iVar7);
                    pwVar27[iVar7] = L'\0';
                  }
                }
                pwVar29 = local_228;
                uVar24 = (uint)local_220;
                if ((int)uVar30 < 2) {
                  iVar9 = local_220._4_4_;
                  local_228 = (wchar_t *)0x0;
                  local_220 = 0;
                }
                else {
                  iVar7 = 0;
                  if ((uint)local_220 != 0) {
                    iVar7 = (uint)local_220 - 1;
                  }
                  if ((uVar30 != 0) || (iVar19 = 1, iVar7 == 0)) {
                    iVar19 = 0;
                  }
                  local_258 = (wchar_t *)0x0;
                  local_250 = 0;
                  local_308 = pwVar27;
                  local_300._4_4_ = iVar9;
                  if (iVar9 < (int)(iVar19 + uVar30 + iVar7)) {
                    local_300._0_4_ = uVar30;
                    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_308);
                    uVar30 = (uint)local_300;
                  }
                  pwVar27 = local_228;
                  pwVar29 = local_308;
                  iVar9 = local_300._4_4_;
                  uVar24 = uVar30;
                  if (iVar7 != 0) {
                    local_300._0_4_ = iVar7 + (uint)(uVar30 == 0) + uVar30;
                    if (local_300._4_4_ < (int)(uint)local_300) {
                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_308,uVar30);
                    }
                    iVar9 = local_300._4_4_;
                    uVar24 = (uint)local_300;
                    pwVar29 = local_308;
                    pwVar21 = local_308 + ((longlong)(int)uVar30 - (ulonglong)(uVar30 != 0));
                    _guard_xfg_dispatch_icall_nop(pwVar21,pwVar27,(longlong)iVar7 * 2);
                    pwVar21[iVar7] = L'\0';
                  }
                  local_308 = (wchar_t *)0x0;
                  local_300 = 0;
                }
                pwVar27 = local_2c8;
                pwVar21 = (wchar_t *)0x0;
                if ((int)uVar24 < 2) {
                  local_2c8 = (wchar_t *)0x0;
                  local_2c0 = 0;
                  pwVar21 = pwVar29;
                }
                else {
                  iVar7 = uVar8 - 1;
                  if (uVar8 == 0) {
                    iVar7 = 0;
                  }
                  if ((uVar24 != 0) || (pwVar27 = (wchar_t *)0x1, iVar7 == 0)) {
                    pwVar27 = pwVar21;
                  }
                  local_2f8 = pwVar29;
                  local_2f0._4_4_ = iVar9;
                  if (iVar9 < (int)(uVar24 + (int)pwVar27 + iVar7)) {
                    local_2f0._0_4_ = uVar24;
                    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2f8);
                    uVar24 = (uint)local_2f0;
                  }
                  pwVar27 = local_2f8;
                  uVar8 = uVar24;
                  local_res20 = local_2f0._4_4_;
                  if (iVar7 != 0) {
                    local_2f0._0_4_ = uVar24 + (uVar24 == 0) + iVar7;
                    if (local_2f0._4_4_ < (int)(uint)local_2f0) {
                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2f8,uVar24);
                    }
                    local_res20 = local_2f0._4_4_;
                    uVar8 = (uint)local_2f0;
                    pwVar27 = local_2f8;
                    pwVar29 = local_2f8 + ((longlong)(int)uVar24 - (ulonglong)(uVar24 != 0));
                    _guard_xfg_dispatch_icall_nop(pwVar29,local_2c8,(longlong)iVar7 * 2);
                    pwVar29[iVar7] = L'\0';
                  }
                  local_2f8 = (wchar_t *)0x0;
                  local_2f0 = 0;
                }
                pwVar29 = local_2c8;
                local_1a0 = pwVar27;
                local_198 = uVar8;
                local_194 = local_res20;
                if (param_2 == &local_1a0) {
                  if (pwVar27 != (wchar_t *)0x0) {
                    FMemory::Free(pwVar27);
                  }
                }
                else {
                  if (*param_2 != (wchar_t *)0x0) {
                    FMemory::Free();
                  }
                  *param_2 = pwVar27;
                  *(uint *)(param_2 + 1) = uVar8;
                  *(int *)((longlong)param_2 + 0xc) = local_res20;
                }
                if (pwVar21 != (wchar_t *)0x0) {
                  FMemory::Free(pwVar21);
                }
                if (local_258 != (wchar_t *)0x0) {
                  FMemory::Free();
                }
                if (local_228 != (wchar_t *)0x0) {
                  FMemory::Free();
                }
                pwVar21 = local_190;
                if (pwVar29 != (wchar_t *)0x0) {
                  FMemory::Free(pwVar29);
                  pwVar21 = local_190;
                }
              }
joined_r0x000142f09c46:
              if (pwVar21 != (wchar_t *)0x0) {
                FMemory::Free(pwVar21);
              }
            }
          }
          uVar13 = local_360;
          if (local_358 != (undefined2 *)0x0) {
            FMemory::Free();
            uVar13 = local_360;
          }
        }
        uVar22 = (ulonglong)local_348;
        if (local_208 != (wchar_t *)0x0) {
          FMemory::Free();
        }
      } while (bVar3);
      uVar11 = FUN_1420fc090(*(undefined8 *)(param_1 + 0x38));
      cVar5 = FUN_142dd3d20(uVar11);
      do {
        bVar3 = false;
        if (*(int *)(uVar13 + 0x108) == 0) {
          puVar18 = &DAT_143f3eda8;
        }
        else {
          puVar18 = *(undefined2 **)(uVar13 + 0x100);
        }
        iVar7 = FUN_141592950(param_2,puVar18,1,0,0xffffffff);
        if (*(int *)(uVar13 + 0x118) == 0) {
          puVar18 = &DAT_143f3eda8;
        }
        else {
          puVar18 = *(undefined2 **)(uVar13 + 0x110);
        }
        local_330 = iVar7;
        iVar9 = FUN_141592950(param_2,puVar18,1,0,0xffffffff);
        if (iVar9 <= iVar7) {
          return;
        }
        uVar30 = 0;
        uVar8 = *(int *)(uVar13 + 0x108) - 1;
        if (*(int *)(uVar13 + 0x108) == 0) {
          uVar8 = uVar30;
        }
        uVar8 = uVar8 + iVar7;
        uVar24 = *(int *)(uVar13 + 0x118) - 1;
        if (*(int *)(uVar13 + 0x118) == 0) {
          uVar24 = uVar30;
        }
        iVar19 = *(int *)(param_2 + 1);
        uVar16 = ((uVar8 - uVar24) - iVar7) + iVar9;
        uVar24 = iVar19 - 1;
        if (iVar19 == 0) {
          uVar24 = uVar30;
        }
        if (uVar8 < uVar24) {
          uVar24 = uVar8;
        }
        uVar8 = iVar19 - 1;
        if (iVar19 == 0) {
          uVar8 = uVar30;
        }
        uVar30 = uVar24;
        if ((uVar24 <= uVar16) && (uVar30 = uVar8, uVar16 < uVar8)) {
          uVar30 = uVar16;
        }
        if (iVar19 == 0) {
          pwVar29 = L"";
        }
        else {
          pwVar29 = *param_2;
        }
        iVar7 = uVar30 - uVar24;
        local_1e8 = (wchar_t *)0x0;
        local_1dc = 0;
        local_1e0 = iVar7 + 1;
        if (iVar7 == 0) {
          local_1e0 = 0;
        }
        if ((0 < local_1e0) &&
           (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e8,0), pwVar27 = local_1e8,
           0 < local_1e0)) {
          wcsncpy(local_1e8,pwVar29 + (int)uVar24,(longlong)iVar7);
          pwVar27[iVar7] = L'\0';
        }
        local_378 = (longlong *)0x0;
        local_370 = 0;
        iVar7 = FUN_141594550(&local_1e8,&local_378,&DAT_14598b864);
        plVar23 = local_378 + (longlong)(int)local_370 * 2;
        uVar13 = local_360;
        for (plVar12 = local_378; local_360 = uVar13, plVar12 != plVar23; plVar12 = plVar12 + 2) {
          FString::RemoveSpacesInline(plVar12);
          uVar13 = local_360;
        }
        if (0 < iVar7) {
          local_368 = *(undefined2 **)(uVar13 + 0xf8);
          local_340 = local_368;
          if (iVar7 != 1) {
            if (iVar7 == 3) {
              cVar6 = FString::IsNumeric(local_378 + 2);
              if ((cVar6 != '\0') && (cVar6 = FString::IsNumeric(local_378 + 4), cVar6 != '\0')) {
                if ((int)local_378[3] == 0) {
                  pwVar29 = L"";
                }
                else {
                  pwVar29 = (wchar_t *)local_378[2];
                }
                iVar7 = _wtoi(pwVar29);
                local_368 = (undefined2 *)CONCAT44(local_368._4_4_,(float)iVar7);
                if ((int)local_378[5] == 0) {
                  pwVar29 = L"";
                }
                else {
                  pwVar29 = (wchar_t *)local_378[4];
                }
                iVar19 = _wtoi(pwVar29);
                local_340 = (undefined2 *)(ulonglong)(uint)(float)iVar7;
                fVar31 = (float)iVar19;
                local_368 = (undefined2 *)CONCAT44(fVar31,(undefined4)local_368);
                goto LAB_142f0a031;
              }
            }
            else {
              if (iVar7 != 5) {
                TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(&local_378);
                if (local_1e8 == (wchar_t *)0x0) {
                  return;
                }
                FMemory::Free();
                return;
              }
              cVar6 = FString::IsNumeric(local_378 + 2);
              if ((cVar6 != '\0') && (cVar6 = FString::IsNumeric(local_378 + 4), cVar6 != '\0')) {
                if ((int)local_378[3] == 0) {
                  pwVar29 = L"";
                }
                else {
                  pwVar29 = (wchar_t *)local_378[2];
                }
                iVar7 = _wtoi(pwVar29);
                local_368 = (undefined2 *)CONCAT44(local_368._4_4_,(float)iVar7);
                if ((int)local_378[5] == 0) {
                  pwVar29 = L"";
                }
                else {
                  pwVar29 = (wchar_t *)local_378[4];
                }
                iVar7 = _wtoi(pwVar29);
                local_368 = (undefined2 *)CONCAT44((float)iVar7,(undefined4)local_368);
              }
              cVar6 = FString::IsNumeric(local_378 + 6);
              if ((cVar6 != '\0') && (cVar6 = FString::IsNumeric(local_378 + 8), cVar6 != '\0')) {
                if ((int)local_378[7] == 0) {
                  pwVar29 = L"";
                }
                else {
                  pwVar29 = (wchar_t *)local_378[6];
                }
                iVar7 = _wtoi(pwVar29);
                local_340 = (undefined2 *)CONCAT44(local_340._4_4_,(float)iVar7);
                if ((int)local_378[9] == 0) {
                  iVar7 = _wtoi(L"");
                  fVar31 = (float)iVar7;
                }
                else {
                  iVar7 = _wtoi((wchar_t *)local_378[8]);
                  fVar31 = (float)iVar7;
                }
LAB_142f0a031:
                local_340 = (undefined2 *)CONCAT44(fVar31,(int)local_340);
              }
            }
          }
          if ((int)local_378[1] == 0) {
            puVar18 = &DAT_143f3eda8;
          }
          else {
            puVar18 = (undefined2 *)*local_378;
          }
          FName::FName(&local_338,puVar18,1);
          FText::FText(local_150);
          uVar11 = FUN_1420fc090(*(undefined8 *)(param_1 + 0x38));
          cVar6 = FUN_142ef5b70(CONCAT44(uStack_334,local_338),uVar11);
          if (cVar6 == '\0') {
            cVar6 = (cVar5 != '\0') + '\x01';
            uVar11 = FUN_1420fc090(*(undefined8 *)(param_1 + 0x38));
            FUN_142ef33f0(local_108,CONCAT44(uStack_334,local_338),uVar11,cVar6);
            puVar15 = &local_340;
            if (cVar5 == '\0') {
              puVar15 = &local_368;
            }
            fVar31 = *(float *)((longlong)puVar15 + 4) / local_fc;
            fVar32 = local_100 * fVar31;
            fVar31 = local_fc * fVar31;
            uVar11 = FUN_1420fc090(*(undefined8 *)(param_1 + 0x38));
            uVar11 = FUN_142ef39a0(local_120,CONCAT44(uStack_334,local_338),uVar11,cVar6,
                                   CONCAT44(fVar31,fVar32));
            FText::operator=(local_150,uVar11);
            plVar12 = local_118;
            if (local_118 != (longlong *)0x0) {
              LOCK();
              plVar23 = local_118 + 1;
              lVar10 = *plVar23;
              *(int *)plVar23 = (int)*plVar23 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*local_118)(local_118);
                LOCK();
                piVar1 = (int *)((longlong)plVar12 + 0xc);
                iVar7 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar12 + 8))(plVar12,1);
                }
              }
            }
            FSlateBrush::~FSlateBrush(local_108);
          }
          else {
            uVar11 = FUN_1420fc090(*(undefined8 *)(param_1 + 0x38));
            uVar11 = FUN_142eff9e0(local_138,CONCAT44(uStack_334,local_338),uVar11,0);
            FText::operator=(local_150,uVar11);
            plVar12 = local_130;
            if (local_130 != (longlong *)0x0) {
              LOCK();
              plVar23 = local_130 + 1;
              lVar10 = *plVar23;
              *(int *)plVar23 = (int)*plVar23 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*local_130)(local_130);
                LOCK();
                piVar1 = (int *)((longlong)plVar12 + 0xc);
                iVar7 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar12 + 8))(plVar12,1);
                }
              }
            }
          }
          iVar7 = *(int *)(uVar13 + 0x118) + -1;
          if (*(int *)(uVar13 + 0x118) == 0) {
            iVar7 = 0;
          }
          if (*(int *)(param_2 + 1) == 0) {
            pwVar29 = L"";
            iVar19 = 0;
          }
          else {
            pwVar29 = *param_2;
            iVar19 = *(int *)(param_2 + 1) + -1;
          }
          iVar9 = (iVar19 - iVar7) - iVar9;
          if (iVar9 < 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = iVar19;
            if (iVar9 < iVar19) {
              iVar7 = iVar9;
            }
          }
          pwVar27 = (wchar_t *)0x0;
          uVar8 = 0;
          local_238 = (wchar_t *)0x0;
          local_res20 = 0;
          iVar9 = local_res20;
          local_res20 = 0;
          local_230 = 0;
          pwVar29 = pwVar29 + ((longlong)iVar19 - (longlong)iVar7);
          if ((pwVar29 != (wchar_t *)0x0) && (*pwVar29 != L'\0')) {
            lVar10 = -1;
            do {
              lVar4 = lVar10 + 1;
              lVar10 = lVar10 + 1;
            } while (pwVar29[lVar4] != L'\0');
            uVar30 = (int)lVar10 + 1;
            local_230 = (ulonglong)uVar30;
            uVar8 = uVar30;
            local_res20 = iVar9;
            if (0 < (int)uVar30) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_238,0);
              local_res20 = (int)(local_230 >> 0x20);
              uVar8 = (uint)local_230;
            }
            pwVar27 = local_238;
            FGenericPlatformString::Memcpy(local_238,pwVar29,(longlong)(int)uVar30 * 2);
          }
          puVar15 = (undefined8 *)FText::ToString(local_150);
          if (*(int *)(puVar15 + 1) == 0) {
            _Src = &DAT_143f3eda8;
          }
          else {
            _Src = (short *)*puVar15;
          }
          iVar7 = *(int *)(param_2 + 1) + -1;
          if (*(int *)(param_2 + 1) == 0) {
            pwVar29 = L"";
            iVar7 = 0;
          }
          else {
            pwVar29 = *param_2;
          }
          if (local_330 < 0) {
            iVar7 = 0;
          }
          else if (local_330 < iVar7) {
            iVar7 = local_330;
          }
          local_268 = (wchar_t *)0x0;
          uVar30 = iVar7 + 1;
          if (iVar7 == 0) {
            uVar30 = 0;
          }
          pwVar21 = (wchar_t *)0x0;
          local_260 = (ulonglong)uVar30;
          if (0 < (int)uVar30) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,0);
            pwVar21 = local_268;
            uVar30 = (uint)local_260;
            if (0 < (int)(uint)local_260) {
              wcsncpy(local_268,pwVar29,(longlong)iVar7);
              pwVar21[iVar7] = L'\0';
            }
          }
          if ((_Src == (short *)0x0) || (*_Src == 0)) {
            local_1b4 = local_260._4_4_;
            local_260 = 0;
            local_268 = (wchar_t *)0x0;
          }
          else {
            lVar10 = -1;
            do {
              lVar10 = lVar10 + 1;
            } while (_Src[lVar10] != 0);
            iVar7 = (int)lVar10;
            if ((uVar30 != 0) || (iVar9 = 1, iVar7 == 0)) {
              iVar9 = 0;
            }
            TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
                      (&local_278,&local_268,iVar9 + iVar7);
            uVar13 = local_270;
            pwVar21 = local_278;
            if (iVar7 != 0) {
              iVar9 = (uint)local_270;
              lVar10 = (longlong)(int)(uint)local_270;
              iVar19 = ((uint)local_270 == 0) + (uint)local_270 + iVar7;
              local_270 = CONCAT44(local_270._4_4_,iVar19);
              if (local_270._4_4_ < iVar19) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_278,uVar13 & 0xffffffff);
              }
              pwVar21 = local_278;
              pwVar29 = local_278 + (lVar10 - (ulonglong)(iVar9 != 0));
              _guard_xfg_dispatch_icall_nop(pwVar29,_Src,(longlong)iVar7 * 2);
              pwVar29[iVar7] = L'\0';
            }
            uVar30 = (uint)local_270;
            local_1b4 = local_270._4_4_;
            local_270 = 0;
            local_278 = (wchar_t *)0x0;
          }
          pwVar29 = local_268;
          local_1c0 = pwVar21;
          local_1b8 = uVar30;
          if ((int)uVar30 < 2) {
            local_238 = (wchar_t *)0x0;
            local_230 = 0;
            pwVar28 = (wchar_t *)0x0;
            pwVar21 = pwVar27;
          }
          else {
            iVar7 = 0;
            if (uVar8 != 0) {
              iVar7 = uVar8 - 1;
            }
            if ((uVar30 != 0) || (iVar9 = 1, iVar7 == 0)) {
              iVar9 = 0;
            }
            TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
                      (&local_298,&local_1c0,iVar9 + iVar7);
            uVar13 = local_290;
            pwVar21 = local_298;
            if (iVar7 != 0) {
              iVar9 = (uint)local_290;
              lVar10 = (longlong)(int)(uint)local_290;
              iVar19 = (uint)((uint)local_290 == 0) + iVar7 + (uint)local_290;
              local_290 = CONCAT44(local_290._4_4_,iVar19);
              if (local_290._4_4_ < iVar19) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,uVar13 & 0xffffffff);
              }
              pwVar21 = local_298;
              pwVar28 = local_298 + (lVar10 - (ulonglong)(iVar9 != 0));
              _guard_xfg_dispatch_icall_nop(pwVar28,pwVar27,(longlong)iVar7 * 2);
              pwVar28[iVar7] = L'\0';
            }
            uVar8 = (uint)local_290;
            local_res20 = local_290._4_4_;
            local_290 = 0;
            local_298 = (wchar_t *)0x0;
            pwVar28 = pwVar27;
          }
          pwVar27 = local_1c0;
          local_180 = pwVar21;
          local_178 = uVar8;
          local_174 = local_res20;
          if (param_2 == &local_180) {
            if (pwVar21 != (wchar_t *)0x0) {
              FMemory::Free(pwVar21);
            }
          }
          else {
            if (*param_2 != (wchar_t *)0x0) {
              FMemory::Free();
            }
            *param_2 = pwVar21;
            *(uint *)(param_2 + 1) = uVar8;
            *(int *)((longlong)param_2 + 0xc) = local_res20;
          }
          if (pwVar27 != (wchar_t *)0x0) {
            FMemory::Free(pwVar27);
          }
          if (pwVar29 != (wchar_t *)0x0) {
            FMemory::Free(pwVar29);
          }
          if (pwVar28 != (wchar_t *)0x0) {
            FMemory::Free(pwVar28);
          }
          plVar12 = local_148;
          bVar3 = true;
          if (local_148 != (longlong *)0x0) {
            LOCK();
            plVar23 = local_148 + 1;
            lVar10 = *plVar23;
            *(int *)plVar23 = (int)*plVar23 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_148)(local_148);
              LOCK();
              piVar1 = (int *)((longlong)plVar12 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar12 + 8))(plVar12,1);
              }
            }
          }
        }
        plVar12 = local_378;
        for (iVar7 = (int)local_370; iVar7 != 0; iVar7 = iVar7 + -1) {
          if (*plVar12 != 0) {
            FMemory::Free();
          }
          plVar12 = plVar12 + 2;
        }
        if (local_378 != (longlong *)0x0) {
          FMemory::Free(local_378);
        }
        if (local_1e8 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        uVar13 = local_360;
      } while (bVar3);
    }
  }
  return;
}



// FUNCTION 142f0a6b0 FUN_142f0a6b0 body=272 status=ok
// SIG undefined FUN_142f0a6b0(void)

void FUN_142f0a6b0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  void *_Dst;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      FUN_142eddfc0((longlong)local_1c * 0xb0 + *local_38);
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<FTTLRaderInfo,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2)
  ;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar3 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar3 = param_1 + 0x38;
      }
      uVar2 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar3 + uVar2 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 142f0a7c0 FUN_142f0a7c0 body=482 status=ok
// SIG undefined FUN_142f0a7c0(void)

void FUN_142f0a7c0(longlong *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  FUN_142ee4130();
  FUN_142f0e630(param_1 + 0x4f,param_2,1);
  cVar1 = *(char *)((longlong)param_1 + 0x1e1);
  fVar5 = 0.0;
  if (cVar1 == '\0') {
    fVar5 = (float)(int)param_1[0x6f] * *(float *)((longlong)param_1 + 0x36c);
  }
  else if (cVar1 == '\x01') {
    fVar5 = (float)*(int *)((longlong)param_1 + 0x37c) * *(float *)(param_1 + 0x6d);
  }
  fVar3 = (float)FUN_142eed2b0(param_1);
  fVar6 = 0.0;
  fVar3 = fVar3 - fVar5;
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  if (*(float *)(param_1 + 0x5a) <= fVar3) {
    fVar3 = *(float *)(param_1 + 0x5a);
  }
  if (cVar1 == '\0') {
    fVar6 = (float)(int)param_1[0x6f] * *(float *)((longlong)param_1 + 0x36c);
  }
  else if (cVar1 == '\x01') {
    fVar6 = (float)*(int *)((longlong)param_1 + 0x37c) * *(float *)(param_1 + 0x6d);
  }
  fVar5 = *(float *)(param_1 + 0x70);
  fVar4 = (float)FUN_142eed2b0(param_1);
  *(float *)((longlong)param_1 + 0x2dc) = fVar4;
  fVar4 = fVar4 - fVar6;
  *(float *)((longlong)param_1 + 700) = fVar5;
  *(float *)(param_1 + 0x58) = fVar5 * 10.0;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  *(float *)(param_1 + 0x5b) = fVar6;
  *(float *)((longlong)param_1 + 0x2c4) = fVar5 * 0.2;
  fVar5 = 0.0;
  if ((0.0 <= fVar3) && (fVar5 = fVar4, fVar3 <= fVar4)) {
    fVar5 = fVar3;
  }
  *(float *)(param_1 + 0x5a) = fVar5;
  param_1[0x5c] = 0;
  *(float *)((longlong)param_1 + 0x2d4) = fVar5;
  *(undefined2 *)(param_1 + 0x5d) = 1;
  FUN_142ee43f0(param_1,fVar5);
  FUN_142efe720(param_1,*(undefined4 *)((longlong)param_1 + 0x38c),0xffffffff);
  iVar2 = (int)param_1[0x4e];
  if ((iVar2 != -1) && (param_2 <= iVar2)) {
    iVar2 = param_2 + -1;
  }
  if (((iVar2 < 0) || ((int)param_1[0x50] <= iVar2)) && (iVar2 != -1)) {
    iVar2 = -1;
  }
  *(int *)(param_1 + 0x4e) = iVar2;
  FUN_142ef0fb0(param_1);
                    /* WARNING: Could not recover jumptable at 0x000142f0a99b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x338))(param_1);
  return;
}



// FUNCTION 142f0a9b0 FUN_142f0a9b0 body=686 status=ok
// SIG undefined FUN_142f0a9b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142f0a9b0(longlong param_1,float param_2,float *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  longlong local_a0;
  longlong *plStack_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  float fStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  undefined4 local_68;
  uint local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_a8 = 0;
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_b0 = *(longlong **)(param_1 + 0x30);
      local_b8 = 0;
      if (local_b0 == (longlong *)0x0) {
LAB_142f0aa5f:
        plVar7 = &local_b8;
        bVar4 = true;
        bVar9 = false;
        lVar8 = local_b8;
      }
      else {
        LOCK();
        iVar6 = (int)local_b0[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_b0 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar6 == (int)local_b0[1];
          if (bVar9) {
            *(int *)(local_b0 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar9) {
            if (local_b0 != (longlong *)0x0) {
              local_b8 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_142f0aa5f;
          }
          LOCK();
          iVar6 = (int)local_b0[1];
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(local_b0 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar7 = &local_b8;
        local_b0 = (longlong *)0x0;
        bVar4 = true;
        bVar9 = false;
        lVar8 = 0;
      }
      goto LAB_142f0aa84;
    }
  }
  plVar7 = &local_a0;
  local_a0 = 0;
  plStack_98 = (longlong *)0x0;
  bVar4 = false;
  bVar9 = true;
  lVar8 = 0;
LAB_142f0aa84:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  plVar2 = plStack_98;
  *plVar7 = 0;
  if ((bVar9) && (plStack_98 != (longlong *)0x0)) {
    LOCK();
    plVar7 = plStack_98 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_98)(plStack_98);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_98 + 8))(plStack_98,1);
      }
    }
  }
  plVar7 = local_b0;
  if ((bVar4) && (local_b0 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_b0 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (lVar8 != 0) {
    local_88 = 0x3f800000;
    uStack_84 = 0;
    uStack_80 = 0;
    fStack_7c = 0.0;
    local_78 = 0;
    uStack_74 = 0x3f800000;
    uStack_70 = 0;
    fStack_6c = 0.0;
    FUN_142039800(lVar8,&local_88);
    fStack_7c = fStack_7c - *param_3;
    fStack_6c = fStack_6c - param_3[1];
    local_58 = __libm_sse2_sincosf_(param_2 * 0.017453292);
    local_68 = (undefined4)((ulonglong)local_58 >> 0x20);
    local_64 = (uint)local_58 ^ 0x80000000;
    local_60 = 0;
    local_50 = 0;
    Scaleform::Render::Matrix2x4<float>::Append
              ((Matrix2x4<float> *)&local_88,(Matrix2x4<float> *)&local_68);
    fStack_7c = fStack_7c + *param_3;
    fStack_6c = fStack_6c + param_3[1];
    FUN_1420510c0(lVar8,&local_88);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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



// FUNCTION 142f0ac60 FUN_142f0ac60 body=48 status=ok
// SIG undefined FUN_142f0ac60(void)

int FUN_142f0ac60(longlong param_1,int param_2,int param_3)

{
  if (*(char *)(param_1 + 0x1e1) == '\0') {
    return *(int *)(param_1 + 0x37c) * param_3 + param_2;
  }
  if (*(char *)(param_1 + 0x1e1) == '\x01') {
    return *(int *)(param_1 + 0x378) * param_2 + param_3;
  }
  return 0;
}



// FUNCTION 142f0ac90 FUN_142f0ac90 body=134 status=ok
// SIG undefined FUN_142f0ac90(void)

int FUN_142f0ac90(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 == -1) || (param_3 == -1)) {
    return -1;
  }
  if (*(char *)(param_1 + 0x17c) == '\x01') {
    if (*(int *)(param_1 + 0x178) < 1) {
      return -1;
    }
    param_2 = *(int *)(param_1 + 0x178) * param_3 + param_2;
  }
  else {
    if (*(char *)(param_1 + 0x17c) != '\0') {
      return -1;
    }
    if (*(int *)(param_1 + 0x174) < 1) {
      return -1;
    }
    param_2 = *(int *)(param_1 + 0x174) * param_2 + param_3;
  }
  if ((-1 < param_2) &&
     (iVar1 = (**(code **)(*(longlong *)(param_1 + 0x148) + 0x20))(), param_2 < iVar1)) {
    return param_2;
  }
  if (param_2 != -1) {
    param_2 = -1;
  }
  return param_2;
}



// FUNCTION 142f0ad20 FUN_142f0ad20 body=51 status=ok
// SIG undefined FUN_142f0ad20(void)

ulonglong FUN_142f0ad20(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 != (longlong *)0x0) {
    local_18 = 0;
    local_10 = 0;
    uVar2 = (**(code **)(*plVar1 + 0x4e8))(plVar1,param_2,&local_18);
    return uVar2;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142f0ad60 FUN_142f0ad60 body=140 status=ok
// SIG undefined FUN_142f0ad60(void)

void FUN_142f0ad60(longlong param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x280))) {
    fVar1 = *(float *)(param_1 + 0x380);
    fVar3 = (float)(param_2 / *(int *)(param_1 + 0x388)) * fVar1;
    if (*(float *)(param_1 + 0x2d0) <= fVar3) {
      fVar2 = (float)FUN_142eedc50(param_1,(longlong)param_2 % (longlong)*(int *)(param_1 + 0x388) &
                                           0xffffffff);
      if (fVar1 + fVar3 <= fVar2 + *(float *)(param_1 + 0x2d0)) {
        return;
      }
      FUN_142eedc50(param_1);
    }
    FUN_142f0adf0(param_1);
  }
  return;
}



// FUNCTION 142f0adf0 FUN_142f0adf0 body=186 status=ok
// SIG undefined FUN_142f0adf0(void)

void FUN_142f0adf0(longlong param_1,float param_2,char param_3)

{
  uint uVar1;
  float fVar2;
  
  if (param_3 == '\0') {
    fVar2 = 0.0;
    if (0.0 <= param_2) {
      fVar2 = *(float *)(param_1 + 0x2dc) - *(float *)(param_1 + 0x2d8);
      if (fVar2 <= 0.0) {
        fVar2 = 0.0;
      }
      if (param_2 <= fVar2) {
        fVar2 = param_2;
      }
    }
    *(undefined2 *)(param_1 + 0x2e8) = 0x101;
    *(undefined1 *)(param_1 + 0x2ea) = 0;
    uVar1 = *(uint *)(param_1 + 0x2c0);
    *(float *)(param_1 + 0x2d4) = fVar2;
    if (param_2 < *(float *)(param_1 + 0x2d0) || param_2 == *(float *)(param_1 + 0x2d0)) {
      uVar1 = uVar1 ^ 0x80000000;
    }
  }
  else {
    uVar1 = 0;
    if (0.0 <= param_2) {
      fVar2 = *(float *)(param_1 + 0x2dc) - *(float *)(param_1 + 0x2d8);
      if (fVar2 <= 0.0) {
        fVar2 = 0.0;
      }
      if (param_2 <= fVar2) {
        fVar2 = param_2;
      }
    }
    else {
      fVar2 = 0.0;
    }
    *(float *)(param_1 + 0x2d0) = fVar2;
    *(float *)(param_1 + 0x2d4) = fVar2;
    *(undefined2 *)(param_1 + 0x2e8) = 1;
    *(undefined4 *)(param_1 + 0x2e0) = 0;
  }
  *(uint *)(param_1 + 0x2e4) = uVar1;
  FUN_142ee43f0(uVar1,*(undefined4 *)(param_1 + 0x2d0));
  return;
}



// FUNCTION 142f0aec0 FUN_142f0aec0 body=79 status=ok
// SIG undefined FUN_142f0aec0(void)

void FUN_142f0aec0(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(longlong *)(param_1 + 0x2e8) != 0) &&
     (iVar1 = UComboBoxString::GetOptionCount(), 0 < iVar1)) {
    iVar2 = FUN_1420fe5f0(*(undefined8 *)(param_1 + 0x2e8));
    FUN_142134ed0(*(undefined8 *)(param_1 + 0x2e8),
                  (longlong)(iVar2 + 1 + iVar1) % (longlong)iVar1 & 0xffffffff);
  }
  return;
}



// FUNCTION 142f0af10 FUN_142f0af10 body=274 status=ok
// SIG undefined FUN_142f0af10(void)

void FUN_142f0af10(longlong *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = (**(code **)(*param_1 + 0x20))();
  if (iVar2 < 1) {
LAB_142f0b00d:
    (**(code **)(*param_1 + 0x18))(param_1,0xffffffff,0);
  }
  else {
    if (param_2 < 0) {
      iVar5 = 0;
      iVar6 = iVar5;
    }
    else {
      iVar5 = iVar2 + -1;
      if (param_2 < iVar2 + -1) {
        iVar5 = param_2;
      }
      iVar6 = iVar5;
      if (iVar5 == -1) goto LAB_142f0b00d;
    }
    for (; iVar5 < iVar2; iVar5 = iVar5 + 1) {
      lVar3 = (**(code **)(*param_1 + 0x40))(param_1,iVar5);
      if ((lVar3 != 0) &&
         (cVar1 = (**(code **)(*(longlong *)(lVar3 + 0x208) + 0x40))(), cVar1 != '\0')) {
        lVar4 = *param_1;
        goto LAB_142f0afdd;
      }
    }
    do {
      iVar6 = iVar6 + -1;
      if (iVar6 < 0) {
        (**(code **)(*param_1 + 0x18))(param_1,0xffffffff,0);
        return;
      }
      lVar3 = (**(code **)(*param_1 + 0x40))(param_1,iVar6);
    } while ((lVar3 == 0) ||
            (cVar1 = (**(code **)(*(longlong *)(lVar3 + 0x208) + 0x40))(), cVar1 == '\0'));
    lVar4 = *param_1;
LAB_142f0afdd:
    (**(code **)(lVar4 + 0x50))(param_1,lVar3,1);
  }
  return;
}



// FUNCTION 142f0b030 FUN_142f0b030 body=79 status=ok
// SIG undefined FUN_142f0b030(void)

void FUN_142f0b030(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(longlong *)(param_1 + 0x2e8) != 0) &&
     (iVar1 = UComboBoxString::GetOptionCount(), 0 < iVar1)) {
    iVar2 = FUN_1420fe5f0(*(undefined8 *)(param_1 + 0x2e8));
    FUN_142134ed0(*(undefined8 *)(param_1 + 0x2e8),
                  (longlong)(iVar2 + -1 + iVar1) % (longlong)iVar1 & 0xffffffff);
  }
  return;
}



// FUNCTION 142f0b080 FUN_142f0b080 body=200 status=ok
// SIG undefined FUN_142f0b080(void)

undefined8 FUN_142f0b080(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  float fVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x180);
  if (lVar1 != 0) {
    cVar2 = (**(code **)(*(longlong *)(lVar1 + 0x170) + 0x40))();
    if (((cVar2 != '\0') && (1e-08 < ABS(*(float *)(param_2 + 4)))) &&
       (((*(longlong *)(param_2 + 8) == DAT_146b3e0a0 && (*(char *)(lVar1 + 0x338) == '\x01')) ||
        ((*(longlong *)(param_2 + 8) == DAT_146b3e098 && (*(char *)(lVar1 + 0x338) == '\0')))))) {
      fVar3 = *(float *)(lVar1 + 0x31c);
      *(undefined4 *)(lVar1 + 0x348) = 0;
      *(undefined8 *)(lVar1 + 0x340) = 0;
      if (0.0 < *(float *)(param_2 + 4)) {
        fVar3 = -fVar3;
      }
      FUN_142f0fa80(lVar1,fVar3 + *(float *)(lVar1 + 0x310),1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142f0b150 FUN_142f0b150 body=29 status=ok
// SIG undefined FUN_142f0b150(void)

ulonglong FUN_142f0b150(longlong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x180) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000142f0b166. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x180) + 0x170) + 0x20))();
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142f0b170 FUN_142f0b170 body=448 status=ok
// SIG undefined FUN_142f0b170(void)

void FUN_142f0b170(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_40 = *(longlong **)(param_1 + 0x30);
      local_48 = 0;
      if (local_40 == (longlong *)0x0) {
LAB_142f0b20d:
        plVar7 = &local_48;
        bVar4 = true;
        bVar9 = false;
        lVar8 = local_48;
      }
      else {
        LOCK();
        iVar6 = (int)local_40[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_40 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar6 == (int)local_40[1];
          if (bVar9) {
            *(int *)(local_40 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar9) {
            if (local_40 != (longlong *)0x0) {
              local_48 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_142f0b20d;
          }
          LOCK();
          iVar6 = (int)local_40[1];
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(local_40 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar7 = &local_48;
        local_40 = (longlong *)0x0;
        bVar4 = true;
        bVar9 = false;
        lVar8 = 0;
      }
      goto LAB_142f0b234;
    }
  }
  plVar7 = &local_38;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  bVar4 = false;
  bVar9 = true;
  lVar8 = 0;
LAB_142f0b234:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_30;
  if ((bVar9) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  plVar7 = local_40;
  if ((bVar4) && (local_40 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (lVar8 != 0) {
    FUN_14204ff20(lVar8,param_2);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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



// FUNCTION 142f0b330 FUN_142f0b330 body=374 status=ok
// SIG undefined FUN_142f0b330(void)

void FUN_142f0b330(longlong param_1,char param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong local_28;
  undefined8 local_20;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x38);
  if (cVar2 != '\0') {
    if (param_2 == '\0') {
      local_28 = param_1;
      if (param_1 == 0) {
        local_20 = 0;
      }
      else {
        uVar4 = FUN_142f2a230();
        local_20 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar4);
      }
      uVar4 = FWeakObjectPtr::Get(param_1 + 0x38);
      FUN_142f06710(uVar4,&local_28);
      return;
    }
    plVar9 = (longlong *)0x0;
    plVar5 = plVar9;
    if (param_1 != 0) {
      uVar4 = FUN_142f2a230();
      plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_1,uVar4);
    }
    lVar6 = FWeakObjectPtr::Get(param_1 + 0x38);
    plVar8 = plVar5;
    if (param_1 == 0) {
      plVar8 = plVar9;
    }
    if (plVar8 != (longlong *)0x0) {
      plVar8 = *(longlong **)(lVar6 + 0x50);
      plVar11 = plVar8 + (longlong)*(int *)(lVar6 + 0x58) * 2;
      for (; plVar8 != plVar11; plVar8 = plVar8 + 2) {
        plVar10 = plVar9;
        if (*plVar8 != 0) {
          plVar10 = (longlong *)plVar8[1];
        }
        plVar7 = plVar5;
        if (param_1 == 0) {
          plVar7 = plVar9;
        }
        if ((plVar10 == plVar7) && (*plVar8 == param_1)) {
          return;
        }
      }
      if (*(int *)(lVar6 + 0x58) == 0) {
        FUN_142ee2fb0(lVar6);
      }
      iVar1 = *(int *)(lVar6 + 0x58);
      *(int *)(lVar6 + 0x58) = iVar1 + 1;
      if (*(int *)(lVar6 + 0x5c) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar6 + 0x50,iVar1);
      }
      plVar8 = (longlong *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar6 + 0x50));
      if (param_1 == 0) {
        plVar5 = plVar9;
      }
      *plVar8 = param_1;
      plVar8[1] = (longlong)plVar5;
      uVar3 = (**(code **)(*plVar5 + 0x28))(plVar5);
      FUN_142ee42e0(lVar6,uVar3);
    }
  }
  return;
}



// FUNCTION 142f0b4b0 FUN_142f0b4b0 body=1572 status=ok
// SIG undefined FUN_142f0b4b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f0b4b0(longlong param_1,float *param_2)

{
  int *piVar1;
  uint *puVar2;
  LARGE_INTEGER *pLVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  float fVar32;
  undefined1 auStack_228 [32];
  undefined2 local_208;
  longlong local_1f8;
  longlong *local_1f0;
  undefined4 local_1e8;
  longlong local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  longlong *plStack_1a8;
  LARGE_INTEGER local_1a0;
  undefined1 *local_198 [2];
  undefined1 local_188 [32];
  undefined8 local_168;
  undefined4 local_158;
  undefined1 *local_148 [2];
  undefined1 local_138 [32];
  undefined8 local_118;
  undefined4 local_108;
  longlong *local_f8;
  longlong *local_f0;
  undefined1 local_e8 [16];
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  undefined1 *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  local_1e8 = 0;
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar12 = *piVar1;
    if (iVar12 == 0) {
      *piVar1 = 0;
      iVar12 = 0;
    }
    UNLOCK();
    if (0 < iVar12) {
      local_1f0 = *(longlong **)(param_1 + 0x30);
      local_1f8 = 0;
      if (local_1f0 == (longlong *)0x0) {
LAB_142f0b56e:
        plVar13 = &local_1f8;
        bVar11 = true;
        bVar19 = false;
        lVar18 = local_1f8;
      }
      else {
        LOCK();
        iVar12 = (int)local_1f0[1];
        bVar19 = iVar12 == 0;
        if (bVar19) {
          *(int *)(local_1f0 + 1) = 0;
          iVar12 = 0;
        }
        UNLOCK();
        while (!bVar19) {
          LOCK();
          bVar19 = iVar12 == (int)local_1f0[1];
          if (bVar19) {
            *(int *)(local_1f0 + 1) = iVar12 + 1;
          }
          UNLOCK();
          if (bVar19) {
            if (local_1f0 != (longlong *)0x0) {
              local_1f8 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_142f0b56e;
          }
          LOCK();
          iVar12 = (int)local_1f0[1];
          bVar19 = iVar12 == 0;
          if (bVar19) {
            *(int *)(local_1f0 + 1) = 0;
            iVar12 = 0;
          }
          UNLOCK();
        }
        plVar13 = &local_1f8;
        local_1f0 = (longlong *)0x0;
        bVar11 = true;
        bVar19 = false;
        lVar18 = 0;
      }
      goto LAB_142f0b597;
    }
  }
  plVar13 = &local_1b0;
  local_1b0 = 0;
  plStack_1a8 = (longlong *)0x0;
  bVar11 = false;
  bVar19 = true;
  lVar18 = 0;
LAB_142f0b597:
  plVar4 = (longlong *)plVar13[1];
  plVar13[1] = 0;
  plVar16 = plStack_1a8;
  *plVar13 = 0;
  if ((bVar19) && (plStack_1a8 != (longlong *)0x0)) {
    LOCK();
    puVar2 = (uint *)(plStack_1a8 + 1);
    uVar29 = *puVar2;
    plVar13 = (longlong *)(ulonglong)uVar29;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if (uVar29 == 1) {
      (**(code **)*plStack_1a8)(plStack_1a8);
      LOCK();
      puVar2 = (uint *)((longlong)plVar16 + 0xc);
      uVar29 = *puVar2;
      plVar13 = (longlong *)(ulonglong)uVar29;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if (uVar29 == 1) {
        plVar13 = (longlong *)(**(code **)(*plStack_1a8 + 8))(plStack_1a8,1);
      }
    }
  }
  plVar16 = local_1f0;
  iVar12 = (int)plVar13;
  if ((bVar11) && (local_1f0 != (longlong *)0x0)) {
    LOCK();
    plVar13 = local_1f0 + 1;
    iVar12 = (int)*plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if (iVar12 == 1) {
      (**(code **)*local_1f0)(local_1f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        iVar12 = (**(code **)(*local_1f0 + 8))(local_1f0,1);
      }
    }
  }
  if (lVar18 != 0) {
    fVar6 = *param_2;
    fVar7 = param_2[1];
    fVar8 = param_2[2];
    fVar9 = param_2[3];
    *(float *)(param_1 + 0x40) = fVar6;
    *(float *)(param_1 + 0x44) = fVar7;
    *(float *)(param_1 + 0x48) = fVar8;
    *(float *)(param_1 + 0x4c) = fVar9;
    uVar10 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 0x58) = uVar10;
    uVar10 = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x68) = uVar10;
    fVar22 = fVar6 * fVar6 + fVar8 * fVar8;
    fVar23 = fVar7 * fVar7 + fVar9 * fVar9;
    fVar25 = fVar8 * fVar8 + fVar6 * fVar6;
    fVar27 = fVar9 * fVar9 + fVar7 * fVar7;
    fVar32 = fVar23 + fVar22;
    fVar23 = fVar25 + fVar23;
    fVar25 = fVar27 + fVar25;
    fVar22 = fVar22 + fVar27;
    auVar20._0_4_ = (float)((uint)(_DAT_146b3dea0 - fVar32) & _DAT_146b3df40);
    auVar20._4_4_ = (float)((uint)(fRam0000000146b3dea4 - fVar23) & uRam0000000146b3df44);
    auVar20._8_4_ = (float)((uint)(fRam0000000146b3dea8 - fVar25) & uRam0000000146b3df48);
    auVar20._12_4_ = (float)((uint)(fRam0000000146b3deac - fVar22) & uRam0000000146b3df4c);
    auVar21._4_4_ = -(uint)(fRam0000000146b3df54 < auVar20._4_4_);
    auVar21._0_4_ = -(uint)(_DAT_146b3df50 < auVar20._0_4_);
    auVar21._8_4_ = -(uint)(fRam0000000146b3df58 < auVar20._8_4_);
    auVar21._12_4_ = -(uint)(fRam0000000146b3df5c < auVar20._12_4_);
    iVar12 = movmskps(iVar12,auVar21);
    if (iVar12 != 0) {
      auVar5._4_4_ = fVar23;
      auVar5._0_4_ = fVar32;
      auVar5._8_4_ = fVar25;
      auVar5._12_4_ = fVar22;
      auVar21 = rsqrtps(auVar20,auVar5);
      fVar27 = auVar21._0_4_;
      fVar24 = auVar21._4_4_;
      fVar26 = auVar21._8_4_;
      fVar28 = auVar21._12_4_;
      fVar27 = (_DAT_146b3de90 - fVar27 * fVar27 * fVar32 * _DAT_146b3de90) * fVar27 + fVar27;
      fVar24 = (fRam0000000146b3de94 - fVar24 * fVar24 * fVar23 * fRam0000000146b3de94) * fVar24 +
               fVar24;
      fVar26 = (fRam0000000146b3de98 - fVar26 * fVar26 * fVar25 * fRam0000000146b3de98) * fVar26 +
               fVar26;
      fVar28 = (fRam0000000146b3de9c - fVar28 * fVar28 * fVar22 * fRam0000000146b3de9c) * fVar28 +
               fVar28;
      uVar29 = ((uint)(((fRam0000000146b3de94 - fVar24 * fVar24 * fVar23 * fRam0000000146b3de94) *
                        fVar24 + fVar24) * fVar7) ^ uRam0000000146b3de84) &
               -(uint)(fRam0000000146b3df14 <= fVar23) ^ uRam0000000146b3de84;
      uVar30 = ((uint)(((fRam0000000146b3de98 - fVar26 * fVar26 * fVar25 * fRam0000000146b3de98) *
                        fVar26 + fVar26) * fVar8) ^ uRam0000000146b3de88) &
               -(uint)(fRam0000000146b3df18 <= fVar25) ^ uRam0000000146b3de88;
      uVar31 = ((uint)(((fRam0000000146b3de9c - fVar28 * fVar28 * fVar22 * fRam0000000146b3de9c) *
                        fVar28 + fVar28) * fVar9) ^ uRam0000000146b3de8c) &
               -(uint)(fRam0000000146b3df1c <= fVar22) ^ uRam0000000146b3de8c;
      *(uint *)(param_1 + 0x40) =
           ((uint)(((_DAT_146b3de90 - fVar27 * fVar27 * fVar32 * _DAT_146b3de90) * fVar27 + fVar27)
                  * fVar6) ^ _DAT_146b3de80) & -(uint)(_DAT_146b3df10 <= fVar32) ^ _DAT_146b3de80;
      *(uint *)(param_1 + 0x44) = uVar29;
      *(uint *)(param_1 + 0x48) = uVar30;
      *(uint *)(param_1 + 0x4c) = uVar31;
    }
    pLVar3 = (LARGE_INTEGER *)(param_1 + 0xa0);
    if ((*(longlong *)(param_1 + 0x160) == 0) ||
       (*(char *)(*(longlong *)(param_1 + 0x160) + 0x58) != '\0')) {
      plVar13 = (longlong *)0x0;
      local_168 = 0;
      local_158 = 0;
      puVar14 = (undefined8 *)FUN_140438ef0(0x10,local_188);
      if (puVar14 != (undefined8 *)0x0) {
        puVar14[1] = param_1;
        *puVar14 = &PTR_FUN_143f77b70;
      }
      local_1c0 = 0;
      local_198[0] = &LAB_142ee3660;
      local_1b8 = 0x27;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c0,0);
      local_208 = 0x3f;
      FGenericPlatformString::Convert<char,wchar_t>
                (local_1c0,0x27,"UGbxGFxObject::SetBaseDisplayTransform");
      FUN_142f0e4d0(pLVar3,&local_1c0,local_198);
      QueryPerformanceCounter(&local_1a0);
      *pLVar3 = local_1a0;
      lVar15 = operator_new(0x18);
      plVar16 = plVar13;
      if (lVar15 != 0) {
        plVar16 = (longlong *)FUN_140cdf810(lVar15);
      }
      plVar17 = (longlong *)operator_new(0x18);
      if (plVar17 != (longlong *)0x0) {
        *(undefined4 *)(plVar17 + 1) = 1;
        *plVar17 = (longlong)&PTR_DestroyObject_1444f8938;
        *(undefined4 *)((longlong)plVar17 + 0xc) = 1;
        plVar17[2] = (longlong)plVar16;
        plVar13 = plVar17;
      }
      local_1d0 = plVar16;
      local_1c8 = plVar13;
      SharedPointerInternals::EnableSharedFromThis(&local_1d0,plVar16,plVar16);
      *(undefined1 *)(local_1d0 + 2) = 1;
      local_1d8 = (longlong *)local_1d0[1];
      local_1e0 = *local_1d0;
      if (local_1d8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1d8 + 1) = (int)local_1d8[1] + 1;
        UNLOCK();
      }
      if ((longlong *)(param_1 + 0x160) != &local_1e0) {
        *(longlong *)(param_1 + 0x160) = local_1e0;
        local_1e0 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x168,&local_1d8);
      }
      plVar13 = local_1d8;
      if (local_1d8 != (longlong *)0x0) {
        LOCK();
        plVar16 = local_1d8 + 1;
        lVar15 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*local_1d8)(local_1d8);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*local_1d8 + 8))(local_1d8,1);
          }
        }
      }
      local_68 = (longlong *)0x0;
      local_58 = 0;
      puVar14 = (undefined8 *)FUN_140438ef0(0x10,local_88);
      if (puVar14 != (undefined8 *)0x0) {
        puVar14[1] = pLVar3;
        *puVar14 = &PTR_FUN_1444f8620;
      }
      local_98[0] = &LAB_140cee980;
      local_f8 = local_1d0;
      local_f0 = local_1c8;
      if (local_1c8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1c8 + 1) = (int)local_1c8[1] + 1;
        UNLOCK();
      }
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_e8,local_98);
      local_118 = 0;
      local_108 = 0;
      puVar14 = (undefined8 *)FUN_140438ef0(0x70,local_138);
      if (puVar14 != (undefined8 *)0x0) {
        *puVar14 = &PTR_CopyToEmptyStorage_1444f8578;
        puVar14[2] = local_f8;
        puVar14[3] = local_f0;
        if (local_f0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
          UNLOCK();
        }
        TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar14 + 4,local_e8);
      }
      local_148[0] = &LAB_140cee8d0;
      if (local_a8 != 0) {
        plVar13 = local_d8;
        if (local_b8 != (longlong *)0x0) {
          plVar13 = local_b8;
        }
        if (plVar13 != (longlong *)0x0) {
          (**(code **)(*plVar13 + 0x10))(plVar13,0);
        }
      }
      if (local_b8 != (longlong *)0x0) {
        FMemory::Free();
      }
      plVar13 = local_f0;
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar16 = local_f0 + 1;
        lVar15 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
      }
      if (local_58 != 0) {
        plVar13 = local_88;
        if (local_68 != (longlong *)0x0) {
          plVar13 = local_68;
        }
        if (plVar13 != (longlong *)0x0) {
          (**(code **)(*plVar13 + 0x10))(plVar13,0);
        }
      }
      if (local_68 != (longlong *)0x0) {
        FMemory::Free();
      }
      plVar13 = local_1c8;
      if (local_1c8 != (longlong *)0x0) {
        LOCK();
        plVar16 = local_1c8 + 1;
        lVar15 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*local_1c8)(local_1c8);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
      }
      FUN_1420326d0(lVar18,local_148);
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar4 + 1;
    lVar18 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return;
}



// FUNCTION 142f0bae0 FUN_142f0bae0 body=17 status=ok
// SIG undefined FUN_142f0bae0(void)

void FUN_142f0bae0(longlong param_1,byte param_2)

{
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + (uint)param_2 * 2 + -1;
  return;
}



// FUNCTION 142f0bb00 FUN_142f0bb00 body=258 status=ok
// SIG undefined FUN_142f0bb00(void)

void FUN_142f0bb00(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)0x0;
  plVar4 = plVar7;
  plVar6 = plVar7;
  if (0 < *(int *)(param_1 + 0x48)) {
    do {
      lVar1 = *(longlong *)((longlong)plVar4 + *(longlong *)(param_1 + 0x40));
      if (((lVar1 != 0) && (lVar2 = *(longlong *)(lVar1 + 0x28), lVar2 != 0)) &&
         (plVar3 = *(longlong **)(lVar1 + 0x30), plVar3 != (longlong *)0x0)) {
        if (param_2 == '\0') {
          if (lVar2 == 0) {
            plVar3 = plVar7;
          }
          (**(code **)(*plVar3 + 0x130))();
        }
        else {
          if (lVar2 == 0) {
            plVar3 = plVar7;
          }
          (**(code **)(*plVar3 + 0x128))();
        }
      }
      uVar5 = (int)plVar6 + 1;
      plVar4 = plVar4 + 1;
      plVar6 = (longlong *)(ulonglong)uVar5;
    } while ((int)uVar5 < *(int *)(param_1 + 0x48));
  }
  plVar4 = plVar7;
  plVar6 = plVar7;
  if (0 < *(int *)(param_1 + 0x98)) {
    do {
      lVar1 = *(longlong *)((longlong)plVar4 + *(longlong *)(param_1 + 0x90));
      if (((lVar1 != 0) && (lVar2 = *(longlong *)(lVar1 + 0x28), lVar2 != 0)) &&
         (plVar3 = *(longlong **)(lVar1 + 0x30), plVar3 != (longlong *)0x0)) {
        if (param_2 == '\0') {
          if (lVar2 == 0) {
            plVar3 = plVar7;
          }
          (**(code **)(*plVar3 + 0x130))();
        }
        else {
          if (lVar2 == 0) {
            plVar3 = plVar7;
          }
          (**(code **)(*plVar3 + 0x128))();
        }
      }
      uVar5 = (int)plVar6 + 1;
      plVar4 = plVar4 + 1;
      plVar6 = (longlong *)(ulonglong)uVar5;
    } while ((int)uVar5 < *(int *)(param_1 + 0x98));
  }
  return;
}



// FUNCTION 142f0bc10 FUN_142f0bc10 body=17 status=ok
// SIG undefined FUN_142f0bc10(void)

void FUN_142f0bc10(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined8 uStackX_8;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  lVar1 = *(longlong *)(param_1 + 0x2e8);
  if (lVar1 == 0) {
    return;
  }
  *(undefined1 *)(lVar1 + 0x118) = param_2;
  if (*(longlong *)(lVar1 + 0x758) != 0) {
    uStackX_8 = 0;
    if (((*(longlong *)(lVar1 + 0x128) == 0) ||
        (lVar2 = FWeakObjectPtr::Get(lVar1 + 0x120), lVar2 == 0)) ||
       (lVar2 = UObject::FindFunction(lVar2,*(undefined8 *)(lVar1 + 0x128)), lVar2 == 0)) {
      uStack_58 = *(undefined1 *)(lVar1 + 0x118);
      puVar4 = &uStack_40;
      uStack_3f = 1;
      iVar5 = 2;
      uStack_38 = 0;
      uStack_30 = 0;
      iVar6 = 0;
      uStack_40 = uStack_58;
    }
    else {
      uStackX_8 = *(undefined8 *)(lVar1 + 0x128);
      uVar3 = FWeakObjectPtr::Get(lVar1 + 0x120);
      puVar4 = (undefined1 *)FUN_1420c48a0(auStack_28,uVar3,&uStackX_8);
      uStack_58 = *puVar4;
      iVar6 = 1;
      iVar5 = 0;
    }
    uStack_57 = puVar4[1];
    uStack_50 = 0;
    uStack_48 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&uStack_50,puVar4 + 8);
    FUN_141957130(*(undefined8 *)(lVar1 + 0x758),&uStack_58);
    if (iVar5 != 0) {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&uStack_38);
    }
    if (iVar6 != 0) {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(auStack_20);
    }
    return;
  }
  return;
}



// FUNCTION 142f0bc30 FUN_142f0bc30 body=456 status=ok
// SIG undefined FUN_142f0bc30(void)

void FUN_142f0bc30(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  
  lVar8 = 0;
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_40 = *(longlong **)(param_1 + 0x30);
      local_48 = 0;
      if (local_40 == (longlong *)0x0) {
LAB_142f0bccd:
        plVar7 = &local_48;
        bVar4 = true;
        bVar9 = false;
        lVar8 = local_48;
      }
      else {
        LOCK();
        iVar6 = (int)local_40[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_40 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar6 == (int)local_40[1];
          if (bVar9) {
            *(int *)(local_40 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar9) {
            if (local_40 != (longlong *)0x0) {
              local_48 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_142f0bccd;
          }
          LOCK();
          iVar6 = (int)local_40[1];
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(local_40 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar7 = &local_48;
        local_40 = (longlong *)0x0;
        bVar4 = true;
        bVar9 = false;
        lVar8 = 0;
      }
      goto LAB_142f0bcf4;
    }
  }
  plVar7 = &local_38;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  bVar4 = false;
  bVar9 = true;
LAB_142f0bcf4:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_30;
  if ((bVar9) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  plVar7 = local_40;
  if ((bVar4) && (local_40 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (lVar8 != 0) {
    FUN_1420504f0(lVar8,param_2,param_3);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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



// FUNCTION 142f0be00 FUN_142f0be00 body=292 status=ok
// SIG undefined FUN_142f0be00(void)

void FUN_142f0be00(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  
  plVar3 = (longlong *)(param_1 + 0x2c8);
  if (plVar3 != param_2) {
    iVar7 = *(int *)(param_1 + 0x2d0);
    if (iVar7 != 0) {
      plVar8 = (longlong *)(*plVar3 + 8);
      do {
        plVar5 = (longlong *)*plVar8;
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
        plVar8 = plVar8 + 3;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    iVar7 = (int)param_2[1];
    lVar6 = *param_2;
    *(int *)(param_1 + 0x2d0) = iVar7;
    if ((iVar7 == 0) && (*(int *)(param_1 + 0x2d4) == 0)) {
      *(undefined4 *)(param_1 + 0x2d4) = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(plVar3,iVar7);
      lVar9 = *plVar3;
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        FText::FText(lVar9,lVar6);
        lVar9 = lVar9 + 0x18;
        lVar6 = lVar6 + 0x18;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x2d8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2e8) = 0;
  if (*(int *)(param_1 + 0x2ec) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x2e0,0);
    return;
  }
  return;
}



// FUNCTION 142f0bf30 FUN_142f0bf30 body=750 status=ok
// SIG undefined FUN_142f0bf30(void)

void FUN_142f0bf30(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  longlong local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong *plStack_c0;
  undefined1 *local_b8 [2];
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined4 local_78;
  undefined8 local_58;
  undefined8 uStack_50;
  
  lVar12 = 0;
  if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 8);
    LOCK();
    iVar8 = *piVar1;
    if (iVar8 == 0) {
      *piVar1 = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (0 < iVar8) {
      local_d0 = *(longlong **)(param_1 + 0x10);
      local_d8 = 0;
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        iVar8 = (int)local_d0[1];
        bVar13 = iVar8 == 0;
        if (bVar13) {
          *(int *)(local_d0 + 1) = 0;
          iVar8 = 0;
        }
        UNLOCK();
        while (!bVar13) {
          LOCK();
          bVar13 = iVar8 == (int)local_d0[1];
          if (bVar13) {
            *(int *)(local_d0 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            lVar12 = *(longlong *)(param_1 + 8);
            plVar9 = &local_d8;
            bVar6 = true;
            bVar13 = false;
            local_d8 = lVar12;
            goto LAB_142f0bff5;
          }
          LOCK();
          iVar8 = (int)local_d0[1];
          bVar13 = iVar8 == 0;
          if (bVar13) {
            *(int *)(local_d0 + 1) = 0;
            iVar8 = 0;
          }
          UNLOCK();
        }
        local_d0 = (longlong *)0x0;
      }
      lVar12 = 0;
      plVar9 = &local_d8;
      bVar6 = true;
      bVar13 = false;
      goto LAB_142f0bff5;
    }
  }
  plVar9 = &local_c8;
  local_c8 = 0;
  plStack_c0 = (longlong *)0x0;
  bVar6 = false;
  bVar13 = true;
LAB_142f0bff5:
  plVar3 = (longlong *)plVar9[1];
  plVar9[1] = 0;
  *plVar9 = 0;
  plVar9 = plStack_c0;
  if ((bVar13) && (plStack_c0 != (longlong *)0x0)) {
    LOCK();
    plVar11 = plStack_c0 + 1;
    lVar7 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_c0)(plStack_c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
      }
    }
  }
  plVar9 = local_d0;
  if ((bVar6) && (local_d0 != (longlong *)0x0)) {
    LOCK();
    plVar11 = local_d0 + 1;
    lVar7 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  if (lVar12 != 0) {
    lVar7 = *(longlong *)(lVar12 + 0xd0);
    plVar9 = *(longlong **)(lVar12 + 0xd8);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    if (lVar7 != 0) {
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      uVar4 = *param_2;
      uVar5 = param_2[1];
      local_88 = 0;
      local_78 = 0;
      local_58 = uVar4;
      uStack_50 = uVar5;
      puVar10 = (undefined8 *)FUN_140438ef0(0x30,local_a8);
      plVar11 = plVar9;
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &PTR_FUN_145992ed8;
        puVar10[1] = lVar7;
        puVar10[2] = plVar9;
        puVar10[3] = uVar4;
        puVar10[4] = uVar5;
        *(undefined1 *)(puVar10 + 5) = param_3;
        plVar11 = (longlong *)0x0;
      }
      local_b8[0] = &LAB_142ee3670;
      FUN_14204c6c0(lVar7,local_b8);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar11 + 1;
        lVar12 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar9 + 1;
      lVar12 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar3 + 1;
    lVar12 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 142f0c220 FUN_142f0c220 body=656 status=ok
// SIG undefined FUN_142f0c220(void)

void FUN_142f0c220(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  longlong **pplVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *plStack_c0;
  undefined1 *local_b8 [2];
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined4 local_78;
  undefined8 local_58;
  undefined8 uStack_50;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar8 = *piVar1;
    if (iVar8 == 0) {
      *piVar1 = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (0 < iVar8) {
      local_d0 = *(longlong **)(param_1 + 0x30);
      local_d8 = (longlong *)0x0;
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        iVar8 = (int)local_d0[1];
        bVar13 = iVar8 == 0;
        if (bVar13) {
          *(int *)(local_d0 + 1) = 0;
          iVar8 = 0;
        }
        UNLOCK();
        while (!bVar13) {
          LOCK();
          bVar13 = iVar8 == (int)local_d0[1];
          if (bVar13) {
            *(int *)(local_d0 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            local_d8 = *(longlong **)(param_1 + 0x28);
            pplVar9 = &local_d8;
            bVar6 = true;
            bVar13 = false;
            plVar12 = local_d8;
            goto LAB_142f0c2e8;
          }
          LOCK();
          iVar8 = (int)local_d0[1];
          bVar13 = iVar8 == 0;
          if (bVar13) {
            *(int *)(local_d0 + 1) = 0;
            iVar8 = 0;
          }
          UNLOCK();
        }
        local_d0 = (longlong *)0x0;
      }
      pplVar9 = &local_d8;
      bVar6 = true;
      bVar13 = false;
      plVar12 = (longlong *)0x0;
      goto LAB_142f0c2e8;
    }
  }
  pplVar9 = &local_c8;
  local_c8 = (longlong *)0x0;
  plStack_c0 = (longlong *)0x0;
  bVar6 = false;
  bVar13 = true;
  plVar12 = (longlong *)0x0;
LAB_142f0c2e8:
  plVar3 = pplVar9[1];
  pplVar9[1] = (longlong *)0x0;
  *pplVar9 = (longlong *)0x0;
  plVar11 = plStack_c0;
  if ((bVar13) && (plStack_c0 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_c0 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_c0)(plStack_c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
      }
    }
  }
  plVar11 = local_d0;
  if ((bVar6) && (local_d0 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_d0 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  if (plVar12 != (longlong *)0x0) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    uVar4 = *param_2;
    uVar5 = param_2[1];
    local_88 = 0;
    local_78 = 0;
    local_58 = uVar4;
    uStack_50 = uVar5;
    puVar10 = (undefined8 *)FUN_140438ef0(0x30,local_a8);
    plVar11 = plVar3;
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &PTR_FUN_145992ed8;
      puVar10[1] = plVar12;
      puVar10[2] = plVar3;
      puVar10[3] = uVar4;
      puVar10[4] = uVar5;
      *(undefined1 *)(puVar10 + 5) = param_3;
      plVar11 = (longlong *)0x0;
    }
    local_b8[0] = &LAB_142ee3670;
    FUN_14204c6c0(plVar12,local_b8);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar11 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar3 + 1;
    lVar7 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 142f0c4b0 FUN_142f0c4b0 body=793 status=ok
// SIG undefined FUN_142f0c4b0(void)

void FUN_142f0c4b0(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_res10 [2];
  undefined8 local_res20;
  undefined8 in_stack_ffffffffffffff98;
  uint uVar10;
  undefined1 local_38 [16];
  
  uVar10 = (uint)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  if (param_2 == 0) {
    return;
  }
  lVar9 = *(longlong *)(param_1 + 0x5e8);
  if (lVar9 == 0) {
    local_res10[0] = 0;
    lVar9 = 0;
    if (*(longlong *)(param_2 + 0x30) != 0) {
      lVar5 = AWeaponBase::GetPrivateStaticClass();
      for (lVar8 = *(longlong *)(param_2 + 0x30);
          (lVar9 = 0, lVar8 != 0 && (lVar9 = *(longlong *)(param_2 + 0x30), lVar8 != lVar5));
          lVar8 = *(longlong *)(lVar8 + 0x30)) {
      }
    }
    uVar6 = GetTransientPackage();
    lVar8 = local_res10[0];
    local_res20 = 0;
    if (local_res10[0] == 0) {
      FUN_1417846f0(uVar6,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
    }
    uVar6 = FUN_1417985e0(lVar9,uVar6,lVar8,0,(ulonglong)uVar10 << 0x20,0,0,0,0);
    *(undefined8 *)(param_1 + 0x5e8) = uVar6;
    FUN_142ed5120(uVar6,param_1 + 0x590);
    local_res10[0] = *(longlong *)(param_1 + 0x61c);
    local_res20 = *(undefined8 *)(param_1 + 0x60c);
    FWeakObjectPtr::operator=(local_38,param_1);
    FUN_142ebb630(*(undefined8 *)(param_1 + 0x5e8),param_2,local_38,&local_res20,local_res10);
    *(int *)(param_1 + 0x58c) = *(int *)(param_1 + 0x58c) + 1;
    bVar2 = false;
    iVar7 = *(int *)(param_1 + 0x58c);
    iVar4 = *(int *)(param_1 + 0x580) + -1;
    lVar9 = (longlong)iVar4;
    if (-1 < iVar4) {
      lVar8 = lVar9 << 4;
      bVar2 = false;
      do {
        lVar5 = *(longlong *)(param_1 + 0x578);
        if (((*(int *)(lVar8 + 8 + lVar5) == 0) ||
            (plVar1 = *(longlong **)(lVar8 + lVar5), plVar1 == (longlong *)0x0)) ||
           (cVar3 = (**(code **)(*plVar1 + 0x40))(), cVar3 == '\0')) {
          bVar2 = true;
        }
        lVar8 = lVar8 + -0x10;
        lVar9 = lVar9 + -1;
      } while (-1 < lVar9);
      iVar7 = *(int *)(param_1 + 0x58c);
    }
    *(int *)(param_1 + 0x58c) = iVar7 + -1;
    if (!bVar2) {
      return;
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x578),0);
    return;
  }
  if (*(longlong *)(lVar9 + 0x520) != param_2) goto LAB_142f0c736;
  lVar9 = FWeakObjectPtr::Get(lVar9 + 0x5a8);
  if (lVar9 == 0) {
LAB_142f0c6b8:
    lVar9 = 0;
  }
  else {
    lVar8 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_142f0c6b8;
  }
  lVar8 = FWeakObjectPtr::Get(param_1 + 0x61c);
  if (lVar9 != lVar8) goto LAB_142f0c736;
  lVar9 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x5e8) + 0x598);
  if (lVar9 == 0) {
LAB_142f0c719:
    lVar9 = 0;
  }
  else {
    lVar8 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_142f0c719;
  }
  lVar8 = FWeakObjectPtr::Get(param_1 + 0x60c);
  if ((lVar9 == lVar8) && (param_3 == '\0')) {
    return;
  }
LAB_142f0c736:
  local_res10[0] = *(longlong *)(param_1 + 0x61c);
  local_res20 = *(undefined8 *)(param_1 + 0x60c);
  FWeakObjectPtr::operator=(local_38,param_1);
  FUN_142ecff20(*(undefined8 *)(param_1 + 0x5e8),param_2,local_38,&local_res20,local_res10);
  FUN_142ed5120(*(undefined8 *)(param_1 + 0x5e8),param_1 + 0x590);
  return;
}



// FUNCTION 142f0c7d0 FUN_142f0c7d0 body=86 status=ok
// SIG undefined FUN_142f0c7d0(void)

void FUN_142f0c7d0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((*(longlong *)(param_1 + 0x288) != 0) && (*(longlong *)(param_1 + 0x290) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x290) + 8);
    LOCK();
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      *piVar1 = 0;
      iVar2 = 0;
    }
    UNLOCK();
    if (0 < iVar2) {
      uVar3 = FText::ToString(param_2);
      FUN_142f0fdc0(param_1 + 0x280,uVar3,1,0);
      return;
    }
  }
  return;
}



// FUNCTION 142f0c830 FUN_142f0c830 body=65 status=ok
// SIG undefined FUN_142f0c830(void)

void FUN_142f0c830(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_28 [32];
  
  if (*(longlong **)(param_1 + 0x360) != (longlong *)0x0) {
    lVar1 = **(longlong **)(param_1 + 0x360);
    uVar2 = FText::FText(local_28);
    (**(code **)(lVar1 + 0x2d0))(*(undefined8 *)(param_1 + 0x360),uVar2);
  }
  return;
}



// FUNCTION 142f0c880 FUN_142f0c880 body=243 status=ok
// SIG undefined FUN_142f0c880(void)

void FUN_142f0c880(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  float local_res8 [4];
  float local_res18 [4];
  
  plVar3 = *(longlong **)(param_1 + 0x308);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x278))(plVar3,1);
    if (0.0 <= param_2) {
      if (1.0 <= param_2) {
        param_2 = 1.0;
      }
    }
    else {
      param_2 = 0.0;
    }
    fVar1 = *(float *)(param_1 + 0x314);
    fVar2 = *(float *)(param_1 + 0x318);
    local_res18[0] = 0.0;
    local_res8[0] = 0.0;
    FUN_142087ad0(*(undefined8 *)(param_1 + 0x308),local_res18,local_res8);
    if (ABS(*(float *)(param_1 + 0x314) - *(float *)(param_1 + 0x318)) <= 1e-08) {
      fVar1 = 0.0;
    }
    else {
      param_2 = (fVar1 - fVar2) * param_2;
      fVar1 = param_2;
      if (*(char *)(param_1 + 0x338) == '\0') {
        fVar1 = local_res8[0];
        local_res18[0] = param_2;
      }
    }
    local_res8[0] = fVar1;
    FUN_14208ff10(*(undefined8 *)(param_1 + 0x308),local_res18[0],local_res8[0]);
  }
  return;
}



// FUNCTION 142f0c980 FUN_142f0c980 body=1348 status=ok
// SIG undefined FUN_142f0c980(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142f0c980(longlong *param_1,int param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  longlong lStack_180;
  undefined1 local_178 [8];
  undefined4 local_170;
  undefined1 local_16c;
  undefined1 local_168 [8];
  undefined8 local_160;
  longlong *plStack_158;
  undefined1 local_150;
  undefined1 local_148 [8];
  undefined4 local_140;
  undefined1 local_13c;
  undefined1 local_138 [8];
  undefined8 local_130;
  longlong *plStack_128;
  undefined1 local_120;
  undefined1 local_118 [8];
  undefined4 local_110;
  undefined1 local_10c;
  undefined1 local_108 [8];
  undefined8 local_100;
  longlong *plStack_f8;
  undefined1 local_f0;
  undefined1 local_e8 [8];
  undefined4 local_e0;
  undefined1 local_dc;
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong *plStack_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [16];
  undefined4 local_58 [2];
  undefined8 local_50;
  longlong *local_40;
  char local_30;
  ulonglong local_28 [2];
  
  local_28[0] = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  iVar3 = (int)param_1[0x5a];
  iVar10 = 0;
  if (iVar3 == 0) {
    iVar10 = -1;
  }
  else if (iVar3 != 1) {
    if (param_2 < 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = iVar3 + -1;
      if (param_2 < iVar3 + -1) {
        iVar10 = param_2;
      }
    }
  }
  piVar2 = (int *)param_1[0x5c];
  piVar9 = piVar2;
  do {
    if (piVar9 == piVar2 + (int)param_1[0x5d]) {
      iVar8 = -1;
LAB_142f0ca13:
      if (iVar8 == -1) {
        if ((iVar10 != (int)param_1[0x5b]) && (param_1[0x60] != 0)) {
          *(int *)(param_1 + 0x5b) = iVar10;
          local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,(undefined4)local_b8);
          uStack_b0 = (ulonglong *)CONCAT44(uStack_b0._4_4_,(undefined4)uStack_b0);
          if ((-1 < iVar10) &&
             (local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,(undefined4)local_b8),
             uStack_b0 = (ulonglong *)CONCAT44(uStack_b0._4_4_,(undefined4)uStack_b0),
             iVar10 < iVar3)) {
            puVar4 = (undefined8 *)
                     FTextFormat::FTextFormat(local_68,param_1[0x59] + (longlong)iVar10 * 0x18);
            local_58[0] = 0;
            local_b8 = local_58;
            local_30 = '\0';
            uStack_b0 = local_28;
            local_188 = *puVar4;
            lStack_180 = puVar4[1];
            local_50 = 0;
            if (lStack_180 != 0) {
              LOCK();
              *(int *)(lStack_180 + 8) = *(int *)(lStack_180 + 8) + 1;
              UNLOCK();
            }
            uVar5 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                    TArray<FFormatArgumentValue,FDefaultAllocator>(local_a8,&local_b8);
            uVar5 = FText::Format(local_80,&local_188,uVar5);
            FText::FText(local_98,uVar5);
            if (local_78 != (longlong *)0x0) {
              LOCK();
              plVar7 = local_78 + 1;
              lVar6 = *plVar7;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*local_78)(local_78);
                LOCK();
                piVar2 = (int *)((longlong)local_78 + 0xc);
                iVar3 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*local_78 + 8))(local_78,1);
                }
              }
            }
            TArray<FFormatArgumentValue,FDefaultAllocator>::
            ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_a8);
            if ((local_30 != '\0') && (local_30 = '\0', local_40 != (longlong *)0x0)) {
              LOCK();
              plVar7 = local_40 + 1;
              lVar6 = *plVar7;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*local_40)(local_40);
                LOCK();
                piVar2 = (int *)((longlong)local_40 + 0xc);
                iVar3 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*local_40 + 8))(local_40,1);
                }
              }
            }
            plVar7 = (longlong *)puVar4[1];
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar7 + 1;
              lVar6 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
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
            (**(code **)(*(longlong *)param_1[0x60] + 0x2b0))
                      ((longlong *)param_1[0x60],local_98,1,0);
            if (local_90 != (longlong *)0x0) {
              LOCK();
              plVar7 = local_90 + 1;
              lVar6 = *plVar7;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*local_90)(local_90);
                LOCK();
                piVar2 = (int *)((longlong)local_90 + 0xc);
                iVar3 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*local_90 + 8))(local_90,1);
                }
              }
            }
          }
          local_188 = 0;
          if (param_1[99] != 0) {
            lVar6 = FWeakObjectPtr::Get(param_1 + 0x62);
            if (lVar6 != 0) {
              lVar6 = UObject::FindFunction(lVar6,param_1[99]);
              if (lVar6 != 0) {
                plVar7 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x62);
                uVar5 = FUN_14178ac60(plVar7,param_1[99]);
                (**(code **)(*plVar7 + 0x208))(plVar7,uVar5,0);
              }
            }
          }
        }
      }
      else {
        *(int *)(param_1 + 0x5b) = iVar10;
        if (param_3 == '\0') {
          if ((iVar10 < 1) && ((char)param_1[0x61] == '\0')) {
            FName::FName(local_148,&DAT_143f3eda8,1);
            local_140 = 0xffffffff;
            local_13c = 0;
            FName::FName(local_138,&DAT_143f3eda8,1);
            local_120 = 0;
            local_130 = 0;
            plStack_128 = (longlong *)0x0;
            FUN_142f12730(param_1,0,local_148);
            plVar7 = plStack_128;
          }
          else {
            FName::FName(local_e8,&DAT_143f3eda8,1);
            local_e0 = 0xffffffff;
            local_dc = 0;
            FName::FName(local_d8,&DAT_143f3eda8,1);
            iVar3 = (int)param_1[0x5b] + -1;
            local_c0 = 0;
            local_d0 = 0;
            plStack_c8 = (longlong *)0x0;
            if ((iVar3 < 0) && (iVar3 = 0, (char)param_1[0x61] != '\0')) {
              iVar3 = (int)param_1[0x5a] + -1;
            }
            FUN_142f0c980(param_1,iVar3,0);
            (**(code **)(*param_1 + 800))(param_1,0);
            plVar7 = plStack_c8;
          }
        }
        else if ((iVar10 < iVar3 + -1) || ((char)param_1[0x61] != '\0')) {
          FName::FName(local_178,&DAT_143f3eda8,1);
          local_170 = 0xffffffff;
          local_16c = 0;
          FName::FName(local_168,&DAT_143f3eda8,1);
          local_150 = 0;
          local_160 = 0;
          plStack_158 = (longlong *)0x0;
          FUN_142f12730(param_1,0,local_178);
          plVar7 = plStack_158;
        }
        else {
          FName::FName(local_118,&DAT_143f3eda8,1);
          local_110 = 0xffffffff;
          local_10c = 0;
          FName::FName(local_108,&DAT_143f3eda8,1);
          iVar3 = (int)param_1[0x5b] + -1;
          local_f0 = 0;
          local_100 = 0;
          plStack_f8 = (longlong *)0x0;
          if ((iVar3 < 0) && (iVar3 = 0, (char)param_1[0x61] != '\0')) {
            iVar3 = (int)param_1[0x5a] + -1;
          }
          FUN_142f0c980(param_1,iVar3,0);
          (**(code **)(*param_1 + 800))(param_1,0);
          plVar7 = plStack_f8;
        }
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar7 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
      }
      return;
    }
    if (*piVar9 == iVar10) {
      iVar8 = (int)((longlong)piVar9 - (longlong)piVar2 >> 2);
      goto LAB_142f0ca13;
    }
    piVar9 = piVar9 + 1;
  } while( true );
}



// FUNCTION 142f0ced0 FUN_142f0ced0 body=68 status=ok
// SIG undefined FUN_142f0ced0(void)

void FUN_142f0ced0(longlong param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  
  fVar1 = 0.0;
  if (0.0 <= param_2) {
    fVar1 = *(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x20);
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    if (param_2 <= fVar1) {
      fVar1 = param_2;
    }
  }
  *(undefined2 *)(param_1 + 0x30) = 0x101;
  *(undefined1 *)(param_1 + 0x32) = 0;
  uVar2 = *(uint *)(param_1 + 8);
  *(float *)(param_1 + 0x1c) = fVar1;
  if (param_2 < *(float *)(param_1 + 0x18) || param_2 == *(float *)(param_1 + 0x18)) {
    uVar2 = uVar2 ^ 0x80000000;
  }
  *(uint *)(param_1 + 0x2c) = uVar2;
  return;
}



// FUNCTION 142f0cf20 FUN_142f0cf20 body=8 status=ok
// SIG undefined FUN_142f0cf20(void)

void FUN_142f0cf20(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x858) = param_2;
  return;
}



// FUNCTION 142f0cf30 set_QuitModal body=8 status=ok
// SIG undefined set_QuitModal(void)

void uhx::glues::UGGameInstance_Glue_obj::set_QuitModal(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x850) = param_2;
  return;
}



// FUNCTION 142f0cf40 FUN_142f0cf40 body=8 status=ok
// SIG undefined FUN_142f0cf40(void)

void FUN_142f0cf40(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x848) = param_2;
  return;
}



// FUNCTION 142f0cf50 FUN_142f0cf50 body=306 status=ok
// SIG undefined FUN_142f0cf50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142f0cf50(longlong param_1,float *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_48 [36];
  float local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x238);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar8 = (int)plVar3[1];
    bVar9 = iVar8 == 0;
    if (bVar9) {
      *(int *)(plVar3 + 1) = 0;
      iVar8 = 0;
    }
    UNLOCK();
    while (!bVar9) {
      LOCK();
      bVar9 = iVar8 == (int)plVar3[1];
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar8 + 1;
      }
      UNLOCK();
      if (bVar9) {
        if (plVar3 == (longlong *)0x0) {
          return;
        }
        if (*(longlong *)(param_1 + 0x230) != 0) {
          if (*(char *)(param_1 + 0x310) != '\0') {
            local_24 = *param_2;
            fStack_20 = param_2[1];
            fStack_1c = param_2[2];
            fStack_18 = param_2[3];
            if ((((*(char *)(param_1 + 0x310) == '\x01') &&
                 (local_24 == *(float *)(param_1 + 0x300))) &&
                (fStack_20 == *(float *)(param_1 + 0x304))) &&
               ((fStack_1c == *(float *)(param_1 + 0x308) &&
                (fStack_18 == *(float *)(param_1 + 0x30c))))) goto LAB_142f0d037;
          }
          FUN_142050af0(*(longlong *)(param_1 + 0x230),param_2,1);
          if (param_2 != (float *)(param_1 + 0x300)) {
            fVar4 = param_2[1];
            fVar5 = param_2[2];
            fVar6 = param_2[3];
            *(float *)(param_1 + 0x300) = *param_2;
            *(float *)(param_1 + 0x304) = fVar4;
            *(float *)(param_1 + 0x308) = fVar5;
            *(float *)(param_1 + 0x30c) = fVar6;
            *(undefined1 *)(param_1 + 0x310) = 1;
          }
        }
LAB_142f0d037:
        LOCK();
        plVar1 = plVar3 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 != 1) {
          return;
        }
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 != 1) {
          return;
        }
        (**(code **)(*plVar3 + 8))(plVar3,1);
        return;
      }
      LOCK();
      iVar8 = (int)plVar3[1];
      bVar9 = iVar8 == 0;
      if (bVar9) {
        *(int *)(plVar3 + 1) = 0;
        iVar8 = 0;
      }
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 142f0d090 FUN_142f0d090 body=39 status=ok
// SIG undefined FUN_142f0d090(void)

void FUN_142f0d090(longlong param_1,undefined4 *param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(longlong *)(param_1 + 0x348) != 0) {
    local_18 = *param_2;
    uStack_14 = param_2[1];
    uStack_10 = param_2[2];
    uStack_c = param_2[3];
    UImage::SetColorAndOpacity(*(longlong *)(param_1 + 0x348),&local_18);
  }
  return;
}



// FUNCTION 142f0d0c0 FUN_142f0d0c0 body=228 status=ok
// SIG undefined FUN_142f0d0c0(void)

void FUN_142f0d0c0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FWeakObjectPtr::operator=(&local_48,0);
  FWeakObjectPtr::operator=(&uStack_40,0);
  FWeakObjectPtr::operator=(&local_38,0);
  FWeakObjectPtr::operator=(&uStack_30,0);
  FWeakObjectPtr::operator=(&local_48,param_3);
  FWeakObjectPtr::operator=(&uStack_40,param_4);
  FWeakObjectPtr::operator=(&local_38,param_5);
  FWeakObjectPtr::operator=(&uStack_30,param_6);
  if (param_2 != 0) {
    uVar1 = UBlendableInterface::GetPrivateStaticClass();
    lVar2 = UObjectBaseUtility::GetInterfaceAddress(param_2,uVar1);
    if (lVar2 != 0) {
      local_28 = local_48;
      uStack_24 = uStack_44;
      uStack_20 = uStack_40;
      uStack_1c = uStack_3c;
      local_18 = local_38;
      uStack_14 = uStack_34;
      uStack_10 = uStack_30;
      uStack_c = uStack_2c;
      FUN_142f11010(param_1,param_2,&local_28);
    }
  }
  return;
}



// FUNCTION 142f0d1b0 FUN_142f0d1b0 body=148 status=ok
// SIG undefined FUN_142f0d1b0(void)

void FUN_142f0d1b0(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  
  FUN_142ed3330();
  if (*(longlong *)(param_1 + 0x168) != 0) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x168) + 0x170);
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x170) + 0x170);
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x180) + 0x170);
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x178) + 0x170);
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  return;
}



// FUNCTION 142f0d250 FUN_142f0d250 body=185 status=ok
// SIG undefined FUN_142f0d250(void)

void FUN_142f0d250(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if ((((*(longlong *)(param_1 + 0xc0) != 0) && (*(longlong *)(param_1 + 200) != 0)) &&
      (param_2 == '\0')) &&
     (lVar1 = (**(code **)(**(longlong **)(param_1 + 200) + 0x48))(), lVar1 == param_1 + -0x208)) {
    plVar3 = (longlong *)0x0;
    plVar2 = plVar3;
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      plVar2 = *(longlong **)(param_1 + 200);
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,0xffffffff,0);
    FUN_142ed32d0(param_1,0);
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      plVar3 = *(longlong **)(param_1 + 200);
    }
                    /* WARNING: Could not recover jumptable at 0x000142f0d2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0xb8))(plVar3,*(undefined4 *)(param_1 + 0xd8));
    return;
  }
  FUN_142ed32d0(param_1,param_2);
  return;
}



// FUNCTION 142f0d310 FUN_142f0d310 body=203 status=ok
// SIG undefined FUN_142f0d310(void)

void FUN_142f0d310(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  BOOL BVar3;
  undefined8 uVar4;
  
  uVar4 = FWeakObjectPtr::Get(param_2);
  iVar2 = FUN_142eece20(param_1,uVar4);
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  }
  if ((iVar2 < 0) || (*(int *)(param_1 + 0x60) <= iVar2)) {
    FUN_142edc460(param_1 + 0x58,param_2);
  }
  else {
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar2 * 0x28);
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
    puVar1[4] = param_2[4];
    puVar1[5] = param_2[5];
    puVar1[6] = param_2[6];
    puVar1[7] = param_2[7];
    puVar1[8] = param_2[8];
    puVar1[9] = param_2[9];
  }
                    /* WARNING: Could not recover jumptable at 0x000142f0d3d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  return;
}



// FUNCTION 142f0d3e0 FUN_142f0d3e0 body=17 status=ok
// SIG undefined FUN_142f0d3e0(void)

void FUN_142f0d3e0(longlong param_1,longlong *param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  BOOL BVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined4 auStackX_8 [2];
  undefined4 auStackX_10 [2];
  undefined4 auStackX_20 [2];
  
  lVar1 = *(longlong *)(param_1 + 0x2d8);
  if (lVar1 == 0) {
    return;
  }
  BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x68));
  if (BVar5 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x68));
  }
  auStackX_20[0] = 0xffffffff;
  if (*(longlong *)(lVar1 + 0x38) != 0) {
    FUN_14170c210(auStackX_20);
  }
  plVar2 = *(longlong **)(lVar1 + 0x40);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x68));
  plVar11 = (longlong *)0x0;
  if (param_2 != (longlong *)0x0) {
    lVar7 = UObject::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    plVar9 = param_2;
    if (!bVar3) {
      plVar9 = plVar11;
    }
    iVar6 = FUN_142eece20(lVar1,plVar9);
    if (iVar6 == -1) {
      BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x68));
      if (BVar5 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x68));
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x68));
    }
  }
  BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x68));
  if (BVar5 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x68));
  }
  if (*(longlong **)(lVar1 + 0x48) == param_2) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x68));
    goto LAB_142f0d60f;
  }
  auStackX_10[0] = 0xffffffff;
  if (*(longlong **)(lVar1 + 0x48) != (longlong *)0x0) {
    FUN_14170c210(auStackX_10);
  }
  lVar7 = *(longlong *)(lVar1 + 0x50);
  *(longlong **)(lVar1 + 0x48) = param_2;
  if (param_2 == (longlong *)0x0) {
    lVar10 = 0;
    plVar9 = plVar11;
  }
  else {
    uVar8 = UBlendableInterface::GetPrivateStaticClass();
    plVar9 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_2,uVar8);
    lVar10 = *(longlong *)(lVar1 + 0x48);
  }
  *(longlong **)(lVar1 + 0x50) = plVar9;
  auStackX_8[0] = 0xffffffff;
  if (lVar10 != 0) {
    FUN_14170c210(auStackX_8,lVar10);
    plVar9 = *(longlong **)(lVar1 + 0x50);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x68));
  if (lVar7 != 0) {
    FUN_142ed3540(lVar7,0,param_3);
  }
  if (plVar9 != (longlong *)0x0) {
    FUN_142ed3540(plVar9,1,param_3);
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0xe8))(plVar2,plVar9,lVar7,param_3);
  }
  if ((*(int *)(lVar1 + 0x30) == 0) || (*(longlong **)(lVar1 + 0x28) == (longlong *)0x0)) {
LAB_142f0d5d0:
    bVar3 = false;
  }
  else {
    cVar4 = (**(code **)(**(longlong **)(lVar1 + 0x28) + 0x18))();
    if (cVar4 == '\0') goto LAB_142f0d5d0;
    bVar3 = true;
  }
  if (bVar3) {
    if (*(int *)(lVar1 + 0x30) != 0) {
      plVar11 = *(longlong **)(lVar1 + 0x28);
    }
    (**(code **)(*plVar11 + 0x40))(plVar11,plVar9,lVar7,param_3);
  }
  FUN_1416f8340(auStackX_8[0]);
  FUN_1416f8340(auStackX_10[0]);
LAB_142f0d60f:
  FUN_1416f8340(auStackX_20[0]);
  return;
}



// FUNCTION 142f0d400 FUN_142f0d400 body=550 status=ok
// SIG undefined FUN_142f0d400(void)

void FUN_142f0d400(longlong param_1,longlong *param_2,undefined1 param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  BOOL BVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  }
  local_res20[0] = 0xffffffff;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_14170c210(local_res20);
  }
  plVar1 = *(longlong **)(param_1 + 0x40);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  plVar10 = (longlong *)0x0;
  if (param_2 != (longlong *)0x0) {
    lVar6 = UObject::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    plVar8 = param_2;
    if (!bVar2) {
      plVar8 = plVar10;
    }
    iVar5 = FUN_142eece20(param_1,plVar8);
    if (iVar5 == -1) {
      BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
      if (BVar4 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
    }
  }
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  }
  if (*(longlong **)(param_1 + 0x48) == param_2) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
    goto LAB_142f0d60f;
  }
  local_res10[0] = 0xffffffff;
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    FUN_14170c210(local_res10);
  }
  lVar6 = *(longlong *)(param_1 + 0x50);
  *(longlong **)(param_1 + 0x48) = param_2;
  if (param_2 == (longlong *)0x0) {
    lVar9 = 0;
    plVar8 = plVar10;
  }
  else {
    uVar7 = UBlendableInterface::GetPrivateStaticClass();
    plVar8 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_2,uVar7);
    lVar9 = *(longlong *)(param_1 + 0x48);
  }
  *(longlong **)(param_1 + 0x50) = plVar8;
  local_res8[0] = 0xffffffff;
  if (lVar9 != 0) {
    FUN_14170c210(local_res8,lVar9);
    plVar8 = *(longlong **)(param_1 + 0x50);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  if (lVar6 != 0) {
    FUN_142ed3540(lVar6,0,param_3);
  }
  if (plVar8 != (longlong *)0x0) {
    FUN_142ed3540(plVar8,1,param_3);
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xe8))(plVar1,plVar8,lVar6,param_3);
  }
  if ((*(int *)(param_1 + 0x30) == 0) || (*(longlong **)(param_1 + 0x28) == (longlong *)0x0)) {
LAB_142f0d5d0:
    bVar2 = false;
  }
  else {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))();
    if (cVar3 == '\0') goto LAB_142f0d5d0;
    bVar2 = true;
  }
  if (bVar2) {
    if (*(int *)(param_1 + 0x30) != 0) {
      plVar10 = *(longlong **)(param_1 + 0x28);
    }
    (**(code **)(*plVar10 + 0x40))(plVar10,plVar8,lVar6,param_3);
  }
  FUN_1416f8340(local_res8[0]);
  FUN_1416f8340(local_res10[0]);
LAB_142f0d60f:
  FUN_1416f8340(local_res20[0]);
  return;
}



// FUNCTION 142f0d630 FUN_142f0d630 body=165 status=ok
// SIG undefined FUN_142f0d630(void)

void FUN_142f0d630(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *local_28;
  undefined8 local_20;
  
  local_28 = (longlong *)0x0;
  local_20 = 0;
  lVar1 = FUN_140ecc7d0(param_1,param_2,0,6,&local_28);
  plVar2 = local_28;
  for (iVar3 = (int)local_20; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (lVar1 != 0) {
    FUN_142f0d6e0(lVar1,param_3,param_4);
  }
  return;
}



// FUNCTION 142f0d6e0 FUN_142f0d6e0 body=803 status=ok
// SIG undefined FUN_142f0d6e0(void)

void FUN_142f0d6e0(longlong param_1,float param_2,short *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  float fVar10;
  longlong *local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  uint local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong *local_88;
  uint local_80;
  short *local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  uint local_50;
  double local_48;
  
  if (((0.0 < param_2) && (fVar10 = (float)FUN_142eebf40(), 1e-08 < ABS(fVar10 - param_2))) &&
     (param_3 != (short *)0x0)) {
    iVar9 = 0;
    FUN_142eebd80(&local_d8,0);
    lVar8 = -1;
    if ((local_d8 != (longlong *)0x0) && (cVar6 = (**(code **)(*local_d8 + 0xd0))(), cVar6 != '\0'))
    {
      puVar3 = (undefined8 *)(param_1 + 0x270);
      *(float *)(param_1 + 0x268) = param_2;
      if ((short *)*puVar3 != param_3) {
        iVar7 = iVar9;
        if (*param_3 != 0) {
          do {
            lVar8 = lVar8 + 1;
          } while (param_3[lVar8] != 0);
          iVar7 = (int)lVar8 + 1;
        }
        *(undefined4 *)(param_1 + 0x278) = 0;
        if (*(int *)(param_1 + 0x27c) != iVar7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar3,iVar7);
          iVar9 = *(int *)(param_1 + 0x278);
        }
        *(int *)(param_1 + 0x278) = iVar9 + iVar7;
        if (*(int *)(param_1 + 0x27c) < iVar9 + iVar7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar3);
        }
        if (iVar7 != 0) {
          _guard_xfg_dispatch_icall_nop((void *)*puVar3,param_3,(longlong)iVar7 * 2);
        }
      }
      plVar4 = *(longlong **)(param_1 + 0x178);
      uVar5 = *(undefined8 *)(param_1 + 0x170);
      local_88 = (longlong *)0x0;
      local_80 = 7;
      local_98 = 0xffffffffffffffff;
      uStack_90 = 0xffffffffffffffff;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_78 = param_3;
      FUN_1420523e0(uVar5,"autoSize",&local_98);
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
          iVar9 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
      if ((local_80 >> 6 & 1) != 0) {
        (**(code **)(*local_88 + 0x10))(local_88,&local_98,local_78);
      }
      local_b8 = (longlong *)0x0;
      local_b0 = 0;
      local_c8 = 0xffffffffffffffff;
      uStack_c0 = 0xffffffffffffffff;
      if ((*(longlong *)(param_1 + 0x170) != 0) && (cVar6 = FUN_142045be0(), cVar6 != '\0')) {
        cVar6 = FUN_1420458d0(*(undefined8 *)(param_1 + 0x170),"getTextFormat",&local_c8,0,0);
        if (cVar6 != '\0') {
          local_68 = 0xffffffffffffffff;
          uStack_60 = 0xffffffffffffffff;
          local_58 = (longlong *)0x0;
          local_50 = 5;
          local_48 = (double)param_2;
          cVar6 = (**(code **)(*local_b8 + 0x28))
                            (local_b8,local_a8,&DAT_14598d22c,&local_68,
                             ((byte)local_b0 & 0x8f) == 10);
          if (cVar6 != '\0') {
            FUN_1420458d0(*(undefined8 *)(param_1 + 0x170),"setTextFormat",0,&local_c8,1);
          }
          if ((local_50 >> 6 & 1) != 0) {
            (**(code **)(*local_58 + 0x10))(local_58,&local_68,local_48);
          }
        }
      }
      if ((local_b0 >> 6 & 1) != 0) {
        (**(code **)(*local_b8 + 0x10))(local_b8,&local_c8,local_a8);
      }
    }
    plVar4 = local_d0;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_d0 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142f0da10 FUN_142f0da10 body=106 status=ok
// SIG undefined FUN_142f0da10(void)

void FUN_142f0da10(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_1 != 0) && (lVar2 = UWidgetComponent::GetRenderTarget(), lVar2 != 0)) {
    lVar3 = FUN_142f27b90();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_142f0c4b0(lVar2,param_2,0);
    }
  }
  return;
}



// FUNCTION 142f0da80 FUN_142f0da80 body=527 status=ok
// SIG undefined FUN_142f0da80(void)

void FUN_142f0da80(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *plStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  uint local_50;
  undefined8 local_48;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_80 = *(longlong **)(param_1 + 0x30);
      local_88 = 0;
      if (local_80 == (longlong *)0x0) {
LAB_142f0db1d:
        plVar7 = &local_88;
        bVar4 = true;
        bVar9 = false;
        lVar8 = local_88;
      }
      else {
        LOCK();
        iVar6 = (int)local_80[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_80 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar6 == (int)local_80[1];
          if (bVar9) {
            *(int *)(local_80 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar9) {
            if (local_80 != (longlong *)0x0) {
              local_88 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_142f0db1d;
          }
          LOCK();
          iVar6 = (int)local_80[1];
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(local_80 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar7 = &local_88;
        local_80 = (longlong *)0x0;
        bVar4 = true;
        bVar9 = false;
        lVar8 = 0;
      }
      goto LAB_142f0db42;
    }
  }
  plVar7 = &local_78;
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  bVar4 = false;
  bVar9 = true;
  lVar8 = 0;
LAB_142f0db42:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_70;
  if ((bVar9) && (plStack_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_70 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_70 + 8))(plStack_70,1);
      }
    }
  }
  plVar7 = local_80;
  if ((bVar4) && (local_80 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_80 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  if (lVar8 != 0) {
    local_58 = (longlong *)0x0;
    local_68 = 0xffffffffffffffff;
    uStack_60 = 0xffffffffffffffff;
    local_50 = 5;
    local_48 = param_2;
    FUN_1420523e0(lVar8,"height",&local_68);
    if ((local_50 >> 6 & 1) != 0) {
      (**(code **)(*local_58 + 0x10))(local_58,&local_68,local_48);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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



// FUNCTION 142f0dc90 FUN_142f0dc90 body=201 status=ok
// SIG undefined FUN_142f0dc90(void)

void FUN_142f0dc90(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  FWeakObjectPtr::operator=(&local_res8,param_1);
  lVar4 = 0;
  lVar2 = lVar4;
  lVar3 = lVar4;
  if (*param_2 != 0) {
    lVar2 = *param_2;
    lVar3 = param_2[1];
  }
  local_38 = 0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x28,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145992ef0;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
    puVar1[3] = lVar2;
    if (lVar2 == 0) {
      lVar2 = lVar4;
    }
    if (lVar2 == 0) {
      lVar3 = lVar4;
    }
    puVar1[4] = lVar3;
  }
  local_68[0] = &LAB_142ee36d0;
  FUN_14204c280(local_68);
  return;
}



// FUNCTION 142f0dd60 FUN_142f0dd60 body=225 status=ok
// SIG undefined FUN_142f0dd60(void)

void FUN_142f0dd60(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  lVar1 = *(longlong *)(param_1 + 0x2e0);
  if (lVar1 != 0) {
    FWeakObjectPtr::operator=(&local_res8,lVar1);
    lVar5 = 0;
    lVar3 = lVar5;
    lVar4 = lVar5;
    if (*param_2 != 0) {
      lVar3 = *param_2;
      lVar4 = param_2[1];
    }
    local_38 = 0;
    local_28 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x28,local_58);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_145992ef0;
      puVar2[1] = lVar1;
      *(undefined4 *)(puVar2 + 2) = local_res8;
      *(undefined4 *)((longlong)puVar2 + 0x14) = local_resc;
      puVar2[3] = lVar3;
      if (lVar3 == 0) {
        lVar3 = lVar5;
      }
      if (lVar3 == 0) {
        lVar4 = lVar5;
      }
      puVar2[4] = lVar4;
    }
    local_68[0] = &LAB_142ee36d0;
    FUN_14204c280(local_68);
  }
  return;
}



// FUNCTION 142f0de50 FUN_142f0de50 body=17 status=ok
// SIG undefined FUN_142f0de50(void)

void FUN_142f0de50(longlong param_1,longlong param_2)

{
  char *pcVar1;
  longlong lVar2;
  char cVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined8 uStack_68;
  undefined8 uStack_60;
  longlong *plStack_58;
  uint uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  longlong *plStack_28;
  uint uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  lVar2 = *(longlong *)(param_1 + 0x170);
  if (lVar2 != 0) {
    pcVar1 = (char *)(*(longlong *)(lVar2 + 0x78) + 0x30);
    LOCK();
    cVar3 = *pcVar1;
    if (cVar3 == '\0') {
      *pcVar1 = '\0';
      cVar3 = '\0';
    }
    UNLOCK();
    if (cVar3 < '\x06') {
      uStack_50 = *(uint *)(lVar2 + 0xa0);
      uStack_48 = *(undefined8 *)(lVar2 + 0xa8);
      uStack_40 = *(undefined8 *)(lVar2 + 0xb0);
      uStack_68 = 0xffffffffffffffff;
      uStack_60 = 0xffffffffffffffff;
      plStack_58 = (longlong *)0x0;
      if ((uStack_50 >> 6 & 1) != 0) {
        plStack_58 = *(longlong **)(lVar2 + 0x98);
        (**(code **)(*plStack_58 + 8))(plStack_58,&uStack_68);
      }
      uStack_20 = *(uint *)(param_2 + 0x18);
      uStack_18 = *(undefined8 *)(param_2 + 0x20);
      uStack_10 = *(undefined8 *)(param_2 + 0x28);
      uStack_38 = 0xffffffffffffffff;
      uStack_30 = 0xffffffffffffffff;
      plStack_28 = (longlong *)0x0;
      if ((uStack_20 >> 6 & 1) != 0) {
        plStack_28 = *(longlong **)(param_2 + 0x10);
        (**(code **)(*plStack_28 + 8))(plStack_28,&uStack_38);
      }
      lVar5 = 2;
      FUN_14202cf40(*(undefined8 *)(lVar2 + 0x78),PTR_s_scaleform_gfx_TextFieldEx_1464f0630,
                    PTR_s_setTextAutoSize_1464f0650,0,&uStack_68,2);
      puVar4 = &stack0xfffffffffffffff8;
      do {
        lVar5 = lVar5 + -1;
        if ((*(uint *)(puVar4 + -0x18) >> 6 & 1) != 0) {
          (**(code **)(**(longlong **)(puVar4 + -0x20) + 0x10))
                    (*(longlong **)(puVar4 + -0x20),puVar4 + -0x30,*(undefined8 *)(puVar4 + -0x10));
          *(undefined8 *)(puVar4 + -0x20) = 0;
        }
        *(undefined4 *)(puVar4 + -0x18) = 0;
        puVar4 = puVar4 + -0x30;
      } while (lVar5 != 0);
    }
    return;
  }
  return;
}



// FUNCTION 142f0de70 FUN_142f0de70 body=105 status=ok
// SIG undefined FUN_142f0de70(void)

void FUN_142f0de70(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint local_20;
  undefined8 local_18;
  
  local_28 = (longlong *)0x0;
  local_20 = 6;
  local_38 = 0xffffffffffffffff;
  uStack_30 = 0xffffffffffffffff;
  local_18 = param_2;
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FUN_1420520d0(*(longlong *)(param_1 + 0x170),&local_38);
  }
  if ((local_20 >> 6 & 1) != 0) {
    (**(code **)(*local_28 + 0x10))(local_28,&local_38,local_18);
  }
  return;
}



// FUNCTION 142f0dee0 FUN_142f0dee0 body=11 status=ok
// SIG undefined FUN_142f0dee0(void)

void FUN_142f0dee0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xa1) = param_2;
  FUN_142ef1190();
  return;
}



// FUNCTION 142f0def0 FUN_142f0def0 body=56 status=ok
// SIG undefined FUN_142f0def0(void)

void FUN_142f0def0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x608) != param_2) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x5f8,0);
    *(char *)(param_1 + 0x608) = param_2;
  }
  return;
}



// FUNCTION 142f0df30 FUN_142f0df30 body=224 status=ok
// SIG undefined FUN_142f0df30(void)

void FUN_142f0df30(longlong param_1,char param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (*(char *)(param_1 + 0xb8) != param_2) {
    *(char *)(param_1 + 0xb8) = param_2;
    FUN_142f0e0a0(param_1,param_2 != '\x01');
    uVar4 = 0;
    uVar3 = uVar4;
    uVar5 = uVar4;
    if (0 < *(int *)(param_1 + 0x48)) {
      do {
        lVar1 = *(longlong *)(uVar5 + *(longlong *)(param_1 + 0x40));
        if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x28) != 0)) &&
           (*(longlong *)(lVar1 + 0x30) != 0)) {
          (**(code **)(**(longlong **)(lVar1 + 0x30) + 0xd8))
                    (*(longlong **)(lVar1 + 0x30),*(undefined1 *)(param_1 + 0xb8));
        }
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
        uVar5 = uVar5 + 8;
      } while ((int)uVar2 < *(int *)(param_1 + 0x48));
    }
    uVar3 = uVar4;
    if (0 < *(int *)(param_1 + 0x98)) {
      do {
        lVar1 = *(longlong *)(uVar4 + *(longlong *)(param_1 + 0x90));
        if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x28) != 0)) &&
           (*(longlong *)(lVar1 + 0x30) != 0)) {
          (**(code **)(**(longlong **)(lVar1 + 0x30) + 0xd8))
                    (*(longlong **)(lVar1 + 0x30),*(undefined1 *)(param_1 + 0xb8));
        }
        uVar2 = (int)uVar3 + 1;
        uVar4 = uVar4 + 8;
        uVar3 = (ulonglong)uVar2;
      } while ((int)uVar2 < *(int *)(param_1 + 0x98));
    }
  }
  return;
}



// FUNCTION 142f0e010 FUN_142f0e010 body=133 status=ok
// SIG undefined FUN_142f0e010(void)

void FUN_142f0e010(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 local_28 [32];
  
  if (*(longlong **)(param_1 + 0x218) != (longlong *)0x0) {
    lVar4 = **(longlong **)(param_1 + 0x218);
    uVar6 = FText::FText(local_28);
    (**(code **)(lVar4 + 0x2d0))(*(undefined8 *)(param_1 + 0x218),uVar6);
  }
  plVar5 = *(longlong **)(param_2 + 8);
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



// FUNCTION 142f0e0a0 FUN_142f0e0a0 body=224 status=ok
// SIG undefined FUN_142f0e0a0(void)

void FUN_142f0e0a0(longlong param_1,char param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (*(char *)(param_1 + 0xb9) != param_2) {
    uVar4 = 0;
    *(char *)(param_1 + 0xb9) = param_2;
    uVar3 = uVar4;
    uVar5 = uVar4;
    if (0 < *(int *)(param_1 + 0x48)) {
      do {
        lVar1 = *(longlong *)(uVar5 + *(longlong *)(param_1 + 0x40));
        if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x28) != 0)) &&
           (*(longlong *)(lVar1 + 0x30) != 0)) {
          (**(code **)(**(longlong **)(lVar1 + 0x30) + 0xe0))
                    (*(longlong **)(lVar1 + 0x30),*(undefined1 *)(param_1 + 0xb9));
        }
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
        uVar5 = uVar5 + 8;
      } while ((int)uVar2 < *(int *)(param_1 + 0x48));
    }
    uVar3 = uVar4;
    if (0 < *(int *)(param_1 + 0x98)) {
      do {
        lVar1 = *(longlong *)(uVar4 + *(longlong *)(param_1 + 0x90));
        if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x28) != 0)) &&
           (*(longlong *)(lVar1 + 0x30) != 0)) {
          (**(code **)(**(longlong **)(lVar1 + 0x30) + 0xe0))
                    (*(longlong **)(lVar1 + 0x30),*(undefined1 *)(param_1 + 0xb9));
        }
        uVar2 = (int)uVar3 + 1;
        uVar4 = uVar4 + 8;
        uVar3 = (ulonglong)uVar2;
      } while ((int)uVar2 < *(int *)(param_1 + 0x98));
    }
  }
  return;
}



// FUNCTION 142f0e180 FUN_142f0e180 body=218 status=ok
// SIG undefined FUN_142f0e180(void)

void FUN_142f0e180(longlong param_1,char param_2,uint param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 local_res20 [8];
  
  if (param_3 < 8) {
    plVar3 = *(longlong **)(param_1 + 0x50);
    plVar5 = plVar3 + (longlong)*(int *)(param_1 + 0x58) * 2;
    for (; plVar3 != plVar5; plVar3 = plVar3 + 2) {
      if (((*plVar3 != 0) && ((longlong *)plVar3[1] != (longlong *)0x0)) &&
         (uVar1 = (**(code **)(*(longlong *)plVar3[1] + 0x28))(), uVar1 == param_3)) {
        if (*plVar3 == 0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = (longlong *)plVar3[1];
        }
        (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
      }
    }
    if (*(char *)((longlong)(int)param_3 + 0xe0 + param_1) != param_2) {
      *(char *)((longlong)(int)param_3 + 0xe0 + param_1) = param_2;
      puVar2 = (undefined8 *)FName::FName(local_res20,L"GbxShiftOverlay",1);
      plVar3 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar2);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0xe8))(plVar3,param_2 == '\x01',param_3);
      }
    }
  }
  return;
}



// FUNCTION 142f0e260 FUN_142f0e260 body=86 status=ok
// SIG undefined FUN_142f0e260(void)

void FUN_142f0e260(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((*(longlong *)(param_1 + 0x2a0) != 0) && (*(longlong *)(param_1 + 0x2a8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x2a8) + 8);
    LOCK();
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      *piVar1 = 0;
      iVar2 = 0;
    }
    UNLOCK();
    if (0 < iVar2) {
      uVar3 = FText::ToString(param_2);
      FUN_142f0fdc0(param_1 + 0x298,uVar3,1,0);
      return;
    }
  }
  return;
}



// FUNCTION 142f0e2c0 FUN_142f0e2c0 body=65 status=ok
// SIG undefined FUN_142f0e2c0(void)

void FUN_142f0e2c0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_28 [32];
  
  if (*(longlong **)(param_1 + 0x368) != (longlong *)0x0) {
    lVar1 = **(longlong **)(param_1 + 0x368);
    uVar2 = FText::FText(local_28);
    (**(code **)(lVar1 + 0x2d0))(*(undefined8 *)(param_1 + 0x368),uVar2);
  }
  return;
}



// FUNCTION 142f0e310 FUN_142f0e310 body=92 status=ok
// SIG undefined FUN_142f0e310(void)

void FUN_142f0e310(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  
  plVar1 = (longlong *)(param_1 + -0x2b8);
  lVar2 = *plVar1;
  if (param_2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142f0e33e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x288))(plVar1,2);
    return;
  }
  cVar3 = FUN_142ef5430(plVar1);
  uVar4 = 3;
  if (cVar3 != '\0') {
    uVar4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000142f0e369. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x288))(plVar1,uVar4);
  return;
}



// FUNCTION 142f0e370 FUN_142f0e370 body=344 status=ok
// SIG undefined FUN_142f0e370(void)

void FUN_142f0e370(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  undefined1 local_78 [80];
  
  plVar1 = (longlong *)FString::FString(local_88);
  FString::operator=(param_1 + 8,plVar1);
  if (*plVar1 != 0) {
    FMemory::Free();
  }
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x60,local_c8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_CopyToEmptyStorage_144f71d70;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar2 + 2,param_3);
  }
  local_d8[0] = FUN_14202ce20;
  lVar3 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_78,local_d8);
  FGenericPlatformMemory::MemswapGreaterThan8(lVar3,param_1 + 0x20,0x50);
  if (*(int *)(lVar3 + 0x40) != 0) {
    plVar1 = *(longlong **)(lVar3 + 0x30);
    if (*(longlong **)(lVar3 + 0x30) == (longlong *)0x0) {
      plVar1 = (longlong *)(lVar3 + 0x10);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (*(longlong *)(lVar3 + 0x30) != 0) {
    FMemory::Free();
  }
  if (local_98 != 0) {
    plVar1 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar1 = local_a8;
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_3 + 0x40) != 0) {
    plVar1 = *(longlong **)(param_3 + 0x30);
    if (*(longlong **)(param_3 + 0x30) == (longlong *)0x0) {
      plVar1 = (longlong *)(param_3 + 0x10);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (*(longlong *)(param_3 + 0x30) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f0e4d0 FUN_142f0e4d0 body=344 status=ok
// SIG undefined FUN_142f0e4d0(void)

void FUN_142f0e4d0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  undefined1 local_78 [80];
  
  plVar1 = (longlong *)FString::FString(local_88);
  FString::operator=(param_1 + 8,plVar1);
  if (*plVar1 != 0) {
    FMemory::Free();
  }
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x60,local_c8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_CopyToEmptyStorage_1444f81f0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar2 + 2,param_3);
  }
  local_d8[0] = UE4Function_Private::
                TFunctionRefCaller<<lambda_50573a4081bc06268289253819177437>,void___cdecl(void)>::
                Call;
  lVar3 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_78,local_d8);
  FGenericPlatformMemory::MemswapGreaterThan8(lVar3,param_1 + 0x20,0x50);
  if (*(int *)(lVar3 + 0x40) != 0) {
    plVar1 = *(longlong **)(lVar3 + 0x30);
    if (*(longlong **)(lVar3 + 0x30) == (longlong *)0x0) {
      plVar1 = (longlong *)(lVar3 + 0x10);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (*(longlong *)(lVar3 + 0x30) != 0) {
    FMemory::Free();
  }
  if (local_98 != 0) {
    plVar1 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar1 = local_a8;
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_3 + 0x40) != 0) {
    plVar1 = *(longlong **)(param_3 + 0x30);
    if (*(longlong **)(param_3 + 0x30) == (longlong *)0x0) {
      plVar1 = (longlong *)(param_3 + 0x10);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (*(longlong *)(param_3 + 0x30) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f0e630 FUN_142f0e630 body=130 status=ok
// SIG undefined FUN_142f0e630(void)

void FUN_142f0e630(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (int)param_1[1];
  iVar3 = (int)param_2;
  if (iVar1 < iVar3) {
    iVar4 = iVar3 - iVar1;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x20 + *param_1);
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2 = puVar2 + 4;
    }
  }
  else if (iVar3 < iVar1) {
    FUN_14241dcf0(param_1,param_2,iVar1 - iVar3,param_3);
    return;
  }
  return;
}



// FUNCTION 142f0e6c0 FUN_142f0e6c0 body=767 status=ok
// SIG undefined FUN_142f0e6c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f0e6c0(longlong param_1,float *param_2)

{
  int *piVar1;
  uint *puVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  bool bVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  float fVar29;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *plStack_90;
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar12 = *piVar1;
    if (iVar12 == 0) {
      *piVar1 = 0;
      iVar12 = 0;
    }
    UNLOCK();
    if (0 < iVar12) {
      local_a0 = *(longlong **)(param_1 + 0x30);
      local_a8 = 0;
      if (local_a0 == (longlong *)0x0) {
LAB_142f0e76f:
        plVar13 = &local_a8;
        bVar10 = true;
        bVar16 = false;
        lVar15 = local_a8;
      }
      else {
        LOCK();
        iVar12 = (int)local_a0[1];
        bVar16 = iVar12 == 0;
        if (bVar16) {
          *(int *)(local_a0 + 1) = 0;
          iVar12 = 0;
        }
        UNLOCK();
        while (!bVar16) {
          LOCK();
          bVar16 = iVar12 == (int)local_a0[1];
          if (bVar16) {
            *(int *)(local_a0 + 1) = iVar12 + 1;
          }
          UNLOCK();
          if (bVar16) {
            if (local_a0 != (longlong *)0x0) {
              local_a8 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_142f0e76f;
          }
          LOCK();
          iVar12 = (int)local_a0[1];
          bVar16 = iVar12 == 0;
          if (bVar16) {
            *(int *)(local_a0 + 1) = 0;
            iVar12 = 0;
          }
          UNLOCK();
        }
        plVar13 = &local_a8;
        local_a0 = (longlong *)0x0;
        bVar10 = true;
        bVar16 = false;
        lVar15 = 0;
      }
      goto LAB_142f0e798;
    }
  }
  plVar13 = &local_98;
  local_98 = 0;
  plStack_90 = (longlong *)0x0;
  bVar10 = false;
  bVar16 = true;
  lVar15 = 0;
LAB_142f0e798:
  plVar3 = (longlong *)plVar13[1];
  plVar13[1] = 0;
  *plVar13 = 0;
  plVar11 = plStack_90;
  if ((bVar16) && (plStack_90 != (longlong *)0x0)) {
    LOCK();
    puVar2 = (uint *)(plStack_90 + 1);
    uVar26 = *puVar2;
    plVar13 = (longlong *)(ulonglong)uVar26;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if (uVar26 == 1) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      puVar2 = (uint *)((longlong)plVar11 + 0xc);
      uVar26 = *puVar2;
      plVar13 = (longlong *)(ulonglong)uVar26;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if (uVar26 == 1) {
        plVar13 = (longlong *)(**(code **)(*plStack_90 + 8))(plStack_90,1);
      }
    }
  }
  plVar11 = local_a0;
  iVar12 = (int)plVar13;
  if ((bVar10) && (local_a0 != (longlong *)0x0)) {
    LOCK();
    plVar13 = local_a0 + 1;
    iVar12 = (int)*plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if (iVar12 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        iVar12 = (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  if (lVar15 != 0) {
    fVar5 = *param_2;
    fVar6 = param_2[1];
    fVar7 = param_2[2];
    fVar8 = param_2[3];
    *(float *)(param_1 + 0x70) = fVar5;
    *(float *)(param_1 + 0x74) = fVar6;
    *(float *)(param_1 + 0x78) = fVar7;
    *(float *)(param_1 + 0x7c) = fVar8;
    uVar9 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 0x88) = uVar9;
    uVar9 = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x98) = uVar9;
    fVar19 = fVar5 * fVar5 + fVar7 * fVar7;
    fVar20 = fVar6 * fVar6 + fVar8 * fVar8;
    fVar22 = fVar7 * fVar7 + fVar5 * fVar5;
    fVar24 = fVar8 * fVar8 + fVar6 * fVar6;
    fVar29 = fVar20 + fVar19;
    fVar20 = fVar22 + fVar20;
    fVar22 = fVar24 + fVar22;
    fVar19 = fVar19 + fVar24;
    auVar17._0_4_ = (float)((uint)(_DAT_146b3dea0 - fVar29) & _DAT_146b3df40);
    auVar17._4_4_ = (float)((uint)(fRam0000000146b3dea4 - fVar20) & uRam0000000146b3df44);
    auVar17._8_4_ = (float)((uint)(fRam0000000146b3dea8 - fVar22) & uRam0000000146b3df48);
    auVar17._12_4_ = (float)((uint)(fRam0000000146b3deac - fVar19) & uRam0000000146b3df4c);
    auVar18._4_4_ = -(uint)(fRam0000000146b3df54 < auVar17._4_4_);
    auVar18._0_4_ = -(uint)(_DAT_146b3df50 < auVar17._0_4_);
    auVar18._8_4_ = -(uint)(fRam0000000146b3df58 < auVar17._8_4_);
    auVar18._12_4_ = -(uint)(fRam0000000146b3df5c < auVar17._12_4_);
    iVar12 = movmskps(iVar12,auVar18);
    if (iVar12 != 0) {
      auVar4._4_4_ = fVar20;
      auVar4._0_4_ = fVar29;
      auVar4._8_4_ = fVar22;
      auVar4._12_4_ = fVar19;
      auVar18 = rsqrtps(auVar17,auVar4);
      fVar24 = auVar18._0_4_;
      fVar21 = auVar18._4_4_;
      fVar23 = auVar18._8_4_;
      fVar25 = auVar18._12_4_;
      fVar24 = (_DAT_146b3de90 - fVar24 * fVar24 * fVar29 * _DAT_146b3de90) * fVar24 + fVar24;
      fVar21 = (fRam0000000146b3de94 - fVar21 * fVar21 * fVar20 * fRam0000000146b3de94) * fVar21 +
               fVar21;
      fVar23 = (fRam0000000146b3de98 - fVar23 * fVar23 * fVar22 * fRam0000000146b3de98) * fVar23 +
               fVar23;
      fVar25 = (fRam0000000146b3de9c - fVar25 * fVar25 * fVar19 * fRam0000000146b3de9c) * fVar25 +
               fVar25;
      uVar26 = ((uint)(((fRam0000000146b3de94 - fVar21 * fVar21 * fVar20 * fRam0000000146b3de94) *
                        fVar21 + fVar21) * fVar6) ^ uRam0000000146b3de84) &
               -(uint)(fRam0000000146b3df14 <= fVar20) ^ uRam0000000146b3de84;
      uVar27 = ((uint)(((fRam0000000146b3de98 - fVar23 * fVar23 * fVar22 * fRam0000000146b3de98) *
                        fVar23 + fVar23) * fVar7) ^ uRam0000000146b3de88) &
               -(uint)(fRam0000000146b3df18 <= fVar22) ^ uRam0000000146b3de88;
      uVar28 = ((uint)(((fRam0000000146b3de9c - fVar25 * fVar25 * fVar19 * fRam0000000146b3de9c) *
                        fVar25 + fVar25) * fVar8) ^ uRam0000000146b3de8c) &
               -(uint)(fRam0000000146b3df1c <= fVar19) ^ uRam0000000146b3de8c;
      *(uint *)(param_1 + 0x70) =
           ((uint)(((_DAT_146b3de90 - fVar24 * fVar24 * fVar29 * _DAT_146b3de90) * fVar24 + fVar24)
                  * fVar5) ^ _DAT_146b3de80) & -(uint)(_DAT_146b3df10 <= fVar29) ^ _DAT_146b3de80;
      *(uint *)(param_1 + 0x74) = uVar26;
      *(uint *)(param_1 + 0x78) = uVar27;
      *(uint *)(param_1 + 0x7c) = uVar28;
    }
    local_58 = 0;
    local_48 = 0;
    puVar14 = (undefined8 *)FUN_140438ef0(0x10,local_78);
    if (puVar14 != (undefined8 *)0x0) {
      puVar14[1] = param_1;
      *puVar14 = &PTR_FUN_143f77b70;
    }
    local_88[0] = &LAB_142ee3870;
    FUN_14204c6c0(lVar15,local_88);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar3 + 1;
    lVar15 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 142f0e9c0 FUN_142f0e9c0 body=34 status=ok
// SIG undefined FUN_142f0e9c0(void)

void FUN_142f0e9c0(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1[0xbe] == param_2) {
    return;
  }
  param_1[0xbe] = param_2;
  if (param_2 != 0) {
    FUN_142f0c4b0(param_1,param_2,1);
    return;
  }
  cVar1 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x61c);
  if (cVar1 != '\0') {
    cVar1 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x614);
    if (cVar1 != '\0') {
      lVar2 = FWeakObjectPtr::Get((longlong)param_1 + 0x61c);
      if (lVar2 != 0) {
        uVar3 = FUN_142f26140();
        plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar3);
        if (plVar4 != (longlong *)0x0) {
          lVar2 = param_1[0xbe];
          if (lVar2 == 0) {
            lVar2 = (**(code **)(*plVar4 + 0x10))();
          }
          FUN_142f0c4b0(param_1,lVar2,(char)param_1[0xbc]);
                    /* WARNING: Could not recover jumptable at 0x000142f02b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x7e0))(param_1);
          return;
        }
      }
      FWeakObjectPtr::IsValid((longlong)param_1 + 0x61c);
    }
  }
  return;
}



// FUNCTION 142f0e9f0 FUN_142f0e9f0 body=109 status=ok
// SIG undefined FUN_142f0e9f0(void)

void FUN_142f0e9f0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined4 local_res8;
  undefined4 local_resc;
  
  FWeakObjectPtr::operator=(param_1 + 0x20);
  cVar1 = FUN_14044af00(param_1 + 0x20,0);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x20);
    FWeakObjectPtr::operator=(param_1 + 0x30,*(undefined8 *)(lVar2 + 0x528));
    return;
  }
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x30) = local_res8;
  *(undefined4 *)(param_1 + 0x34) = local_resc;
  return;
}



// FUNCTION 142f0ea60 FUN_142f0ea60 body=105 status=ok
// SIG undefined FUN_142f0ea60(void)

void FUN_142f0ea60(longlong param_1,undefined1 param_2)

{
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint local_20;
  undefined1 local_18;
  undefined7 uStack_17;
  
  if (*(longlong *)(param_1 + 0x170) != 0) {
    local_38 = 0xffffffffffffffff;
    uStack_30 = 0xffffffffffffffff;
    local_28 = (longlong *)0x0;
    local_20 = 2;
    local_18 = param_2;
    FUN_1420523e0(*(longlong *)(param_1 + 0x170),"displayAsPassword",&local_38);
    if ((local_20 >> 6 & 1) != 0) {
      (**(code **)(*local_28 + 0x10))(local_28,&local_38,CONCAT71(uStack_17,local_18));
    }
  }
  return;
}



// FUNCTION 142f0ead0 FUN_142f0ead0 body=154 status=ok
// SIG undefined FUN_142f0ead0(void)

uint FUN_142f0ead0(longlong *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  
  fVar1 = *(float *)(param_1 + 0x5e);
  fVar2 = *(float *)((longlong)param_1 + 0x2f4);
  *(float *)((longlong)param_1 + 0x2f4) = param_2;
  *(float *)((longlong)param_1 + 0x2ec) = param_2;
  *(float *)(param_1 + 0x5e) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0;
  fVar3 = *(float *)(param_1 + 0x2f);
  bVar4 = param_2 != fVar3;
  if (bVar4) {
    *(float *)(param_1 + 0x2f) = param_2;
    (**(code **)(*param_1 + 0x2b0))(fVar3,fVar3,param_2);
  }
  uVar5 = (uint)bVar4;
  if ((1e-08 < ABS(fVar1 - fVar2)) || (bVar4)) {
    LOCK();
    uVar5 = *(uint *)((longlong)param_1 + 0x174);
    *(uint *)((longlong)param_1 + 0x174) = 1;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 142f0eb70 FUN_142f0eb70 body=159 status=ok
// SIG undefined FUN_142f0eb70(void)

void FUN_142f0eb70(longlong *param_1,float param_2)

{
  float fVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  fVar1 = *(float *)((longlong)param_1 + 0x2e4);
  *(float *)((longlong)param_1 + 0x39c) = param_2;
  *(float *)((longlong)param_1 + 0x394) = param_2;
  *(float *)(param_1 + 0x73) = param_2;
  if (param_2 != fVar1) {
    *(float *)((longlong)param_1 + 0x2e4) = param_2;
    (**(code **)(*param_1 + 0x4b0))(param_1,fVar1,param_2);
  }
  (**(code **)(*param_1 + 0x498))(param_1);
  plVar3 = (longlong *)param_1[0x6a];
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x2e4);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x288))(plVar3,3);
    FUN_142f32490(param_1,param_1[0x6a],uVar2,param_2);
  }
  return;
}



// FUNCTION 142f0ec10 FUN_142f0ec10 body=569 status=ok
// SIG undefined FUN_142f0ec10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142f0ec10(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong *local_a0;
  undefined4 local_98;
  longlong local_90;
  longlong *plStack_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  lVar13 = 0;
  local_98 = 0;
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar10 = *piVar1;
    if (iVar10 == 0) {
      *piVar1 = 0;
      iVar10 = 0;
    }
    UNLOCK();
    if (0 < iVar10) {
      local_a0 = *(longlong **)(param_1 + 0x30);
      local_a8 = 0;
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        iVar10 = (int)local_a0[1];
        bVar14 = iVar10 == 0;
        if (bVar14) {
          *(int *)(local_a0 + 1) = 0;
          iVar10 = 0;
        }
        UNLOCK();
        while (!bVar14) {
          LOCK();
          bVar14 = iVar10 == (int)local_a0[1];
          if (bVar14) {
            *(int *)(local_a0 + 1) = iVar10 + 1;
          }
          UNLOCK();
          if (bVar14) {
            lVar13 = *(longlong *)(param_1 + 0x28);
            plVar11 = &local_a8;
            bVar8 = true;
            bVar14 = false;
            local_a8 = lVar13;
            goto LAB_142f0ece8;
          }
          LOCK();
          iVar10 = (int)local_a0[1];
          bVar14 = iVar10 == 0;
          if (bVar14) {
            *(int *)(local_a0 + 1) = 0;
            iVar10 = 0;
          }
          UNLOCK();
        }
        local_a0 = (longlong *)0x0;
      }
      lVar13 = 0;
      plVar11 = &local_a8;
      bVar8 = true;
      bVar14 = false;
      goto LAB_142f0ece8;
    }
  }
  plVar11 = &local_90;
  local_90 = 0;
  plStack_88 = (longlong *)0x0;
  bVar8 = false;
  bVar14 = true;
LAB_142f0ece8:
  plVar3 = (longlong *)plVar11[1];
  plVar11[1] = 0;
  plVar2 = plStack_88;
  *plVar11 = 0;
  if ((bVar14) && (plStack_88 != (longlong *)0x0)) {
    LOCK();
    plVar11 = plStack_88 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_88)(plStack_88);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plStack_88 + 8))(plStack_88,1);
      }
    }
  }
  plVar11 = local_a0;
  if ((bVar8) && (local_a0 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_a0 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  if (lVar13 != 0) {
    local_78 = *param_2;
    local_70 = *(undefined4 *)(param_2 + 1);
    FUN_142052f40(lVar13,&local_78);
    puVar12 = (undefined8 *)FUN_142086190(param_1,local_68);
    uVar7 = puVar12[1];
    *(undefined8 *)(param_1 + 0x40) = *puVar12;
    *(undefined8 *)(param_1 + 0x48) = uVar7;
    uVar7 = puVar12[3];
    *(undefined8 *)(param_1 + 0x50) = puVar12[2];
    *(undefined8 *)(param_1 + 0x58) = uVar7;
    uVar4 = *(undefined4 *)((longlong)puVar12 + 0x24);
    uVar5 = *(undefined4 *)(puVar12 + 5);
    uVar6 = *(undefined4 *)((longlong)puVar12 + 0x2c);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(puVar12 + 4);
    *(undefined4 *)(param_1 + 100) = uVar4;
    *(undefined4 *)(param_1 + 0x68) = uVar5;
    *(undefined4 *)(param_1 + 0x6c) = uVar6;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar3 + 1;
    lVar13 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 142f0ee50 FUN_142f0ee50 body=52 status=ok
// SIG undefined FUN_142f0ee50(void)

void FUN_142f0ee50(longlong param_1,float param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (0.0 <= param_2) {
    fVar1 = *(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x20);
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    if (param_2 <= fVar1) {
      fVar1 = param_2;
    }
  }
  *(float *)(param_1 + 0x18) = fVar1;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(float *)(param_1 + 0x1c) = fVar1;
  *(undefined2 *)(param_1 + 0x30) = 1;
  return;
}



// FUNCTION 142f0ee90 FUN_142f0ee90 body=448 status=ok
// SIG undefined FUN_142f0ee90(void)

void FUN_142f0ee90(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_40 = *(longlong **)(param_1 + 0x30);
      local_48 = 0;
      if (local_40 == (longlong *)0x0) {
LAB_142f0ef2d:
        plVar7 = &local_48;
        bVar4 = true;
        bVar9 = false;
        lVar8 = local_48;
      }
      else {
        LOCK();
        iVar6 = (int)local_40[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_40 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar6 == (int)local_40[1];
          if (bVar9) {
            *(int *)(local_40 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar9) {
            if (local_40 != (longlong *)0x0) {
              local_48 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_142f0ef2d;
          }
          LOCK();
          iVar6 = (int)local_40[1];
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(local_40 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar7 = &local_48;
        local_40 = (longlong *)0x0;
        bVar4 = true;
        bVar9 = false;
        lVar8 = 0;
      }
      goto LAB_142f0ef54;
    }
  }
  plVar7 = &local_38;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  bVar4 = false;
  bVar9 = true;
  lVar8 = 0;
LAB_142f0ef54:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_30;
  if ((bVar9) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  plVar7 = local_40;
  if ((bVar4) && (local_40 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (lVar8 != 0) {
    FUN_142054b00(lVar8,param_2);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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



// FUNCTION 142f0f050 FUN_142f0f050 body=569 status=ok
// SIG undefined FUN_142f0f050(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142f0f050(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong *local_a0;
  undefined4 local_98;
  longlong local_90;
  longlong *plStack_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  lVar13 = 0;
  local_98 = 0;
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar10 = *piVar1;
    if (iVar10 == 0) {
      *piVar1 = 0;
      iVar10 = 0;
    }
    UNLOCK();
    if (0 < iVar10) {
      local_a0 = *(longlong **)(param_1 + 0x30);
      local_a8 = 0;
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        iVar10 = (int)local_a0[1];
        bVar14 = iVar10 == 0;
        if (bVar14) {
          *(int *)(local_a0 + 1) = 0;
          iVar10 = 0;
        }
        UNLOCK();
        while (!bVar14) {
          LOCK();
          bVar14 = iVar10 == (int)local_a0[1];
          if (bVar14) {
            *(int *)(local_a0 + 1) = iVar10 + 1;
          }
          UNLOCK();
          if (bVar14) {
            lVar13 = *(longlong *)(param_1 + 0x28);
            plVar11 = &local_a8;
            bVar8 = true;
            bVar14 = false;
            local_a8 = lVar13;
            goto LAB_142f0f128;
          }
          LOCK();
          iVar10 = (int)local_a0[1];
          bVar14 = iVar10 == 0;
          if (bVar14) {
            *(int *)(local_a0 + 1) = 0;
            iVar10 = 0;
          }
          UNLOCK();
        }
        local_a0 = (longlong *)0x0;
      }
      lVar13 = 0;
      plVar11 = &local_a8;
      bVar8 = true;
      bVar14 = false;
      goto LAB_142f0f128;
    }
  }
  plVar11 = &local_90;
  local_90 = 0;
  plStack_88 = (longlong *)0x0;
  bVar8 = false;
  bVar14 = true;
LAB_142f0f128:
  plVar3 = (longlong *)plVar11[1];
  plVar11[1] = 0;
  plVar2 = plStack_88;
  *plVar11 = 0;
  if ((bVar14) && (plStack_88 != (longlong *)0x0)) {
    LOCK();
    plVar11 = plStack_88 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_88)(plStack_88);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plStack_88 + 8))(plStack_88,1);
      }
    }
  }
  plVar11 = local_a0;
  if ((bVar8) && (local_a0 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_a0 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  if (lVar13 != 0) {
    local_78 = *param_2;
    local_70 = *(undefined4 *)(param_2 + 1);
    FUN_142054e50(lVar13,&local_78);
    puVar12 = (undefined8 *)FUN_142086190(param_1,local_68);
    uVar7 = puVar12[1];
    *(undefined8 *)(param_1 + 0x40) = *puVar12;
    *(undefined8 *)(param_1 + 0x48) = uVar7;
    uVar7 = puVar12[3];
    *(undefined8 *)(param_1 + 0x50) = puVar12[2];
    *(undefined8 *)(param_1 + 0x58) = uVar7;
    uVar4 = *(undefined4 *)((longlong)puVar12 + 0x24);
    uVar5 = *(undefined4 *)(puVar12 + 5);
    uVar6 = *(undefined4 *)((longlong)puVar12 + 0x2c);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(puVar12 + 4);
    *(undefined4 *)(param_1 + 100) = uVar4;
    *(undefined4 *)(param_1 + 0x68) = uVar5;
    *(undefined4 *)(param_1 + 0x6c) = uVar6;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar3 + 1;
    lVar13 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 142f0f290 FUN_142f0f290 body=57 status=ok
// SIG undefined FUN_142f0f290(void)

void FUN_142f0f290(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  if (((param_2 < 0) || (*(int *)(param_1 + 0x280) <= param_2)) && (param_2 != -1)) {
    param_2 = -1;
  }
  iVar1 = *(int *)(param_1 + 0x270);
  *(int *)(param_1 + 0x270) = param_2;
  if ((iVar1 == param_2) && (param_3 == '\0')) {
    return;
  }
  FUN_142ef0fb0();
  return;
}



// FUNCTION 142f0f2d0 FUN_142f0f2d0 body=122 status=ok
// SIG undefined FUN_142f0f2d0(void)

void FUN_142f0f2d0(longlong param_1,int param_2,char param_3,byte param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  if (((param_2 < 0) || (*(int *)(param_1 + 0x280) <= param_2)) && (param_2 != -1)) {
    iVar2 = -1;
  }
  iVar1 = *(int *)(param_1 + 0x270);
  *(int *)(param_1 + 0x270) = iVar2;
  if (iVar1 != iVar2) {
    FUN_142ef0fb0();
  }
  if (param_3 != '\0') {
    FUN_142f0ad60(param_1,param_2,param_4 ^ 1);
  }
  return;
}



// FUNCTION 142f0f350 FUN_142f0f350 body=362 status=ok
// SIG undefined FUN_142f0f350(void)

void FUN_142f0f350(longlong *param_1,int param_2,char param_3,undefined1 param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  HWND pHVar6;
  longlong lVar7;
  
  iVar4 = (**(code **)(*param_1 + 0x20))();
  if ((iVar4 <= param_2) || (param_2 < 0)) {
    param_2 = -1;
  }
  iVar4 = (**(code **)(*param_1 + 0x10))(param_1);
  FUN_142ef1530(param_1 + -0x29,param_2,(longlong)param_1 + 0x1c,param_1 + 3);
  (**(code **)(*param_1 + 0x10))(param_1);
  if (param_2 != iVar4) {
    lVar5 = (**(code **)(*param_1 + 0x40))(param_1,iVar4);
    if (lVar5 != 0) {
      plVar1 = (longlong *)(lVar5 + 0x208);
      cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1);
      if (cVar3 != '\0') {
        FUN_142ed3540(plVar1,0,0);
      }
    }
    lVar5 = (**(code **)(*param_1 + 0x40))(param_1,param_2);
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x2e0) == param_2)) {
      if (param_3 != '\0') {
        pHVar6 = UWidget::GetParent((HWND)(param_1 + -0x29));
        if (pHVar6 != (HWND)0x0) {
          lVar7 = UScrollBox::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(pHVar6 + 4) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(pHVar6 + 4) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            FUN_14212edf0(pHVar6,lVar5,param_4,0);
          }
        }
      }
      cVar3 = (**(code **)(*(longlong *)(lVar5 + 0x208) + 0x40))(lVar5 + 0x208);
      if (cVar3 == '\0') {
        lVar5 = 0;
      }
      else {
        FUN_142ed3540(lVar5 + 0x208,1,0);
      }
    }
    FUN_140757f80(param_1 + 7,lVar5);
  }
  return;
}



// FUNCTION 142f0f4c0 FUN_142f0f4c0 body=251 status=ok
// SIG undefined FUN_142f0f4c0(void)

void FUN_142f0f4c0(longlong *param_1,int param_2,char param_3,undefined1 param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = (**(code **)(*param_1 + 0x20))();
  lVar4 = param_1[3];
  if (iVar3 <= param_2) {
    param_2 = -1;
  }
  *(int *)(param_1 + 3) = param_2;
  if (param_2 != (int)lVar4) {
    lVar4 = (**(code **)(*param_1 + 0x40))(param_1);
    if (lVar4 != 0) {
      plVar1 = (longlong *)(lVar4 + 0x208);
      cVar2 = (**(code **)(*plVar1 + 0x40))(plVar1);
      if (cVar2 != '\0') {
        FUN_142ed3540(plVar1,0,0);
      }
    }
    lVar4 = (**(code **)(*param_1 + 0x40))(param_1,param_2);
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x2e0) == param_2)) {
      if (param_3 != '\0') {
        FUN_14212edf0(param_1 + -0x10c,lVar4,param_4,0);
      }
      cVar2 = (**(code **)(*(longlong *)(lVar4 + 0x208) + 0x40))(lVar4 + 0x208);
      if (cVar2 == '\0') {
        lVar4 = 0;
      }
      else {
        FUN_142ed3540(lVar4 + 0x208,1,0);
      }
    }
    FUN_140757f80(param_1 + 5,lVar4);
  }
  return;
}



// FUNCTION 142f0f5c0 FUN_142f0f5c0 body=86 status=ok
// SIG undefined FUN_142f0f5c0(void)

void FUN_142f0f5c0(longlong *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *param_1;
  uVar2 = UPanelWidget::GetChildIndex(param_1 + -0x29);
                    /* WARNING: Could not recover jumptable at 0x000142f0f613. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x18))(param_1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 142f0f620 FUN_142f0f620 body=86 status=ok
// SIG undefined FUN_142f0f620(void)

void FUN_142f0f620(longlong *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *param_1;
  uVar2 = UPanelWidget::GetChildIndex(param_1 + -0x10c);
                    /* WARNING: Could not recover jumptable at 0x000142f0f673. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x18))(param_1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 142f0f680 FUN_142f0f680 body=17 status=ok
// SIG undefined FUN_142f0f680(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142f0f680(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  void **ppvVar4;
  int iVar5;
  undefined8 *puVar6;
  void *_Src;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  void *pvVar13;
  undefined1 auStack_c8 [32];
  void *pvStack_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  undefined1 auStack_68 [8];
  longlong *plStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong uStack_48;
  
  plVar7 = *(longlong **)(param_1 + 0x2e8);
  if (plVar7 != (longlong *)0x0) {
    if (-1 < param_2) {
      uStack_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
      lVar12 = (longlong)param_2;
      if (param_2 < (int)plVar7[400]) {
        plVar3 = plVar7 + 0x195;
        uStack_90 = *(longlong **)(plVar7[399] + 8 + lVar12 * 0x10);
        uStack_98 = *(longlong *)(plVar7[399] + lVar12 * 0x10);
        if (uStack_90 != (longlong *)0x0) {
          LOCK();
          *(int *)(uStack_90 + 1) = (int)uStack_90[1] + 1;
          UNLOCK();
        }
        if (&uStack_98 != plVar3) {
          uStack_98._4_4_ = (undefined4)((ulonglong)uStack_98 >> 0x20);
          uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
          lVar9 = *plVar3;
          plVar8 = (longlong *)plVar7[0x196];
          uStack_58 = (undefined4)uStack_98;
          uStack_54 = uStack_98._4_4_;
          uStack_50 = (undefined4)uStack_90;
          uStack_4c = uStack_90._4_4_;
          *(undefined4 *)plVar3 = (undefined4)uStack_98;
          *(undefined4 *)((longlong)plVar7 + 0xcac) = uStack_98._4_4_;
          *(undefined4 *)(plVar7 + 0x196) = (undefined4)uStack_90;
          *(undefined4 *)((longlong)plVar7 + 0xcb4) = uStack_90._4_4_;
          uStack_98 = lVar9;
          uStack_90 = plVar8;
        }
        plVar8 = uStack_90;
        if (uStack_90 != (longlong *)0x0) {
          LOCK();
          plVar1 = uStack_90 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*uStack_90)(uStack_90);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*uStack_90 + 8))(uStack_90,1);
            }
          }
        }
        pvVar13 = (void *)0x0;
        pvStack_a8 = (void *)0x0;
        if (param_2 < (int)plVar7[400]) {
          puVar6 = *(undefined8 **)(plVar7[399] + lVar12 * 0x10);
          iStack_a0 = *(int *)(puVar6 + 1);
          lVar12 = (longlong)iStack_a0;
          _Src = (void *)*puVar6;
          if (iStack_a0 == 0) {
            uStack_9c = 0;
            pvVar13 = (void *)0x0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&pvStack_a8,iStack_a0,0);
            pvVar13 = pvStack_a8;
            _guard_xfg_dispatch_icall_nop(pvStack_a8,_Src,lVar12 * 2);
          }
        }
        else {
          iStack_a0 = 0;
          uStack_9c = 0;
        }
        uVar10 = uStack_9c;
        iVar5 = iStack_a0;
        ppvVar4 = (void **)(plVar7 + 0x22);
        if (ppvVar4 == &pvStack_a8) {
          if (pvVar13 != (void *)0x0) {
            FMemory::Free(pvVar13);
          }
        }
        else {
          if (*ppvVar4 != (void *)0x0) {
            FMemory::Free();
          }
          *ppvVar4 = pvVar13;
          *(int *)(plVar7 + 0x23) = iVar5;
          *(undefined4 *)((longlong)plVar7 + 0x11c) = uVar10;
        }
        if (plVar7[0x193] != 0) {
          lStack_88 = *plVar3;
          lStack_80 = plVar7[0x196];
          if (lStack_80 != 0) {
            LOCK();
            *(int *)(lStack_80 + 8) = *(int *)(lStack_80 + 8) + 1;
            UNLOCK();
          }
          FUN_1419a3c30(plVar7[0x191],&lStack_88);
          lStack_78 = *plVar3;
          lStack_70 = plVar7[0x196];
          if (lStack_70 != 0) {
            LOCK();
            *(int *)(lStack_70 + 8) = *(int *)(lStack_70 + 8) + 1;
            UNLOCK();
          }
          lVar12 = plVar7[0x193];
          uVar11 = (**(code **)(*plVar7 + 0x2d0))(plVar7,auStack_68,&lStack_78);
          SBox::SetContent(lVar12,uVar11);
          if (plStack_60 != (longlong *)0x0) {
            LOCK();
            plVar7 = plStack_60 + 1;
            lVar12 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar12 == 1) {
              (**(code **)*plStack_60)(plStack_60);
              LOCK();
              piVar2 = (int *)((longlong)plStack_60 + 0xc);
              iVar5 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plStack_60 + 8))(plStack_60,1);
              }
            }
          }
        }
      }
    }
    return;
  }
  return;
}



// FUNCTION 142f0f6a0 FUN_142f0f6a0 body=18 status=ok
// SIG undefined FUN_142f0f6a0(void)

void FUN_142f0f6a0(longlong *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x5d) = param_2;
                    /* WARNING: Could not recover jumptable at 0x000142f0f6ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x4a8))();
  return;
}



// FUNCTION 142f0f6c0 FUN_142f0f6c0 body=63 status=ok
// SIG undefined FUN_142f0f6c0(void)

void FUN_142f0f6c0(longlong *param_1,byte param_2)

{
  if ((*(byte *)(param_1 + 0x8c) >> 1 & 1) != param_2) {
    FUN_1425093e0();
    (**(code **)(*param_1 + 0x7a8))(param_1,param_2);
  }
  return;
}



// FUNCTION 142f0f700 FUN_142f0f700 body=141 status=ok
// SIG undefined FUN_142f0f700(void)

void FUN_142f0f700(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_18 [16];
  
  if (((*(longlong *)(param_1 + 0x2c8) != 0) && (param_2 != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2c8) + 0x508), lVar1 != 0)) {
    lVar3 = ULocalPlayer::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar4 = UWidget::TakeWidget(param_2,local_18);
      FUN_14185b9a0(lVar1 + 0x110,uVar4,2,0);
    }
  }
  return;
}



// FUNCTION 142f0f790 FUN_142f0f790 body=112 status=ok
// SIG undefined FUN_142f0f790(void)

void FUN_142f0f790(longlong param_1,char param_2)

{
  double dVar1;
  
  *(char *)(param_1 + 0x338) = param_2;
  if (*(longlong *)(param_1 + 0x2f0) != 0) {
    if (param_2 == '\0') {
      dVar1 = (double)FUN_142eeea40();
    }
    else {
      dVar1 = (double)FUN_142eeca30();
    }
    *(float *)(param_1 + 0x314) = (float)dVar1;
  }
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    if (*(char *)(param_1 + 0x338) == '\0') {
      dVar1 = (double)FUN_142eeea40();
    }
    else {
      dVar1 = (double)FUN_142eeca30();
    }
    *(float *)(param_1 + 0x318) = (float)dVar1;
  }
  return;
}



// FUNCTION 142f0f800 FUN_142f0f800 body=623 status=ok
// SIG undefined FUN_142f0f800(void)

void FUN_142f0f800(longlong param_1,longlong param_2)

{
  double dVar1;
  char cVar2;
  undefined4 *puVar3;
  longlong lVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  float local_res20;
  float local_res24;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong *local_a0;
  uint local_98;
  double local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong *local_70;
  uint local_68;
  double local_60;
  
  local_70 = (longlong *)0x0;
  local_80 = 0xffffffffffffffff;
  uStack_78 = 0xffffffffffffffff;
  local_68 = 0;
  local_b0 = 0xffffffffffffffff;
  uStack_a8 = 0xffffffffffffffff;
  local_a0 = (longlong *)0x0;
  local_98 = 0;
  cVar2 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))
                    (*(longlong **)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20),"stageX",
                     &local_80,((byte)*(undefined4 *)(param_2 + 0x18) & 0x8f) == 10);
  if ((((cVar2 == '\0') ||
       (cVar2 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))
                          (*(longlong **)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20),"stageY",
                           &local_b0,((byte)*(undefined4 *)(param_2 + 0x18) & 0x8f) == 10),
       dVar1 = local_60, dVar6 = local_90, cVar2 == '\0')) || (*(longlong *)(param_1 + 0x2e8) == 0))
     || (*(longlong *)(param_1 + 0x2f8) == 0)) goto LAB_142f0fa0f;
  FUN_142087ad0(*(longlong *)(param_1 + 0x2e8),local_res18,local_res10);
  if (*(char *)(param_1 + 0x338) == '\0') {
    local_res20 = (float)dVar1;
    local_res24 = 0.0;
    puVar3 = (undefined4 *)FUN_142eeeda0(*(undefined8 *)(param_1 + 0x2f8),local_b8,&local_res20);
    fVar5 = (float)FUN_142ef5e80(param_1,*puVar3);
    if (*(char *)(param_1 + 800) == '\0') {
      dVar6 = (double)FUN_142eeea40(*(undefined8 *)(param_1 + 0x2e8));
LAB_142f0f9a8:
      fVar5 = (float)((double)fVar5 - dVar6 * 0.5);
    }
    else {
      fVar5 = fVar5 + *(float *)(param_1 + 0x330);
    }
  }
  else {
    local_res24 = (float)dVar6;
    local_res20 = 0.0;
    lVar4 = FUN_142eeeda0(*(undefined8 *)(param_1 + 0x2f8),local_b8,&local_res20);
    fVar5 = (float)FUN_142ef5e80(param_1,*(undefined4 *)(lVar4 + 4));
    if (*(char *)(param_1 + 800) == '\0') {
      dVar6 = (double)FUN_142eeca30(*(undefined8 *)(param_1 + 0x2e8));
      goto LAB_142f0f9a8;
    }
    fVar5 = fVar5 + *(float *)(param_1 + 0x334);
  }
  fVar7 = 0.0;
  if ((0.0 <= fVar5) &&
     (fVar7 = *(float *)(param_1 + 0x314) - *(float *)(param_1 + 0x318), fVar5 <= fVar7)) {
    fVar7 = fVar5;
  }
  fVar7 = fVar7 / (*(float *)(param_1 + 0x314) - *(float *)(param_1 + 0x318));
  *(float *)(param_1 + 0x310) = fVar7;
  FUN_142f0fa80(param_1,fVar7,1);
LAB_142f0fa0f:
  if ((local_98 >> 6 & 1) != 0) {
    (**(code **)(*local_a0 + 0x10))(local_a0,&local_b0,local_90);
    local_a0 = (longlong *)0x0;
  }
  local_98 = 0;
  if ((local_68 >> 6 & 1) != 0) {
    (**(code **)(*local_70 + 0x10))(local_70,&local_80,local_60);
  }
  return;
}



// FUNCTION 142f0fa70 FUN_142f0fa70 body=8 status=ok
// SIG undefined FUN_142f0fa70(void)

void FUN_142f0fa70(undefined8 param_1,undefined8 param_2)

{
  FUN_142f0fa80(param_1,param_2,0);
  return;
}



// FUNCTION 142f0fa80 FUN_142f0fa80 body=530 status=ok
// SIG undefined FUN_142f0fa80(void)

void FUN_142f0fa80(longlong param_1,float param_2,char param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_res8;
  float local_res10 [2];
  float local_res18 [2];
  
  fVar7 = 1.0;
  if (0.0 <= param_2) {
    if (1.0 <= param_2) {
      param_2 = 1.0;
    }
  }
  else {
    param_2 = 0.0;
  }
  fVar6 = *(float *)(param_1 + 0x314);
  fVar5 = *(float *)(param_1 + 0x318);
  fVar8 = fVar6 - fVar5;
  local_res10[0] = 0.0;
  local_res18[0] = 0.0;
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    FUN_142087ad0(*(longlong *)(param_1 + 0x2e8),local_res10,local_res18);
    fVar6 = *(float *)(param_1 + 0x314);
    fVar5 = *(float *)(param_1 + 0x318);
  }
  if (ABS(fVar6 - fVar5) <= 1e-08) {
    if ((*(char *)(param_1 + 0x338) != '\x01') || (*(char *)(param_1 + 0x321) != '\0')) {
      fVar7 = 0.0;
    }
    fVar8 = 0.0;
  }
  else {
    fVar8 = fVar8 * param_2;
    fVar7 = fVar8 / (fVar6 - fVar5);
    fVar6 = fVar8;
    if (*(char *)(param_1 + 0x338) == '\0') goto LAB_142f0fb8f;
  }
  fVar6 = local_res10[0];
  local_res18[0] = fVar8;
LAB_142f0fb8f:
  local_res10[0] = fVar6;
  *(float *)(param_1 + 0x310) = fVar7;
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    FUN_14208ff10(*(longlong *)(param_1 + 0x2e8),local_res10[0],local_res18[0]);
  }
  lVar2 = *(longlong *)(param_1 + 0x300);
  if (lVar2 != 0) {
    fVar7 = *(float *)(param_1 + 0x318) * 0.5;
    if (*(char *)(param_1 + 0x338) == '\0') {
      FUN_142f113c0(lVar2,(double)(fVar7 + local_res10[0]));
    }
    else {
      FUN_142f0da80(lVar2,(double)(fVar7 + local_res18[0]));
    }
  }
  if (param_3 != '\0') {
    uVar1 = *(undefined4 *)(param_1 + 0x310);
    local_res8 = 0;
    if (((*(longlong *)(param_1 + 0x380) != 0) &&
        (lVar2 = FWeakObjectPtr::Get(param_1 + 0x378), lVar2 != 0)) &&
       (lVar2 = UObject::FindFunction(lVar2,*(undefined8 *)(param_1 + 0x380)), lVar2 != 0)) {
      local_res8 = CONCAT44(local_res8._4_4_,uVar1);
      plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x378);
      uVar4 = FUN_14178ac60(plVar3,*(undefined8 *)(param_1 + 0x380));
      (**(code **)(*plVar3 + 0x208))(plVar3,uVar4,&local_res8);
    }
  }
  return;
}



// FUNCTION 142f0fca0 FUN_142f0fca0 body=47 status=ok
// SIG undefined FUN_142f0fca0(void)

void FUN_142f0fca0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0xc2) != param_2) {
    *(char *)(param_1 + 0xc2) = param_2;
    FUN_142f04290();
    FUN_142f041e0(param_1);
    return;
  }
  return;
}



// FUNCTION 142f0fcd0 FUN_142f0fcd0 body=227 status=ok
// SIG undefined FUN_142f0fcd0(void)

void FUN_142f0fcd0(longlong param_1,longlong *param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x90));
  LOCK();
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
  UNLOCK();
  plVar6 = *(longlong **)(param_1 + 0x80);
  plVar4 = plVar6 + (longlong)*(int *)(param_1 + 0x88) * 6;
  if (plVar6 != plVar4) {
    do {
      if ((int)plVar6[1] == (int)param_2[1]) {
        plVar5 = (longlong *)*param_2;
        plVar1 = plVar5 + (int)param_2[1];
        if (plVar5 == plVar1) {
LAB_142f0fd82:
          *(undefined1 *)(plVar6 + 2) = param_3;
          break;
        }
        plVar2 = (longlong *)*plVar6;
        while (plVar2 != plVar2 + (int)plVar6[1]) {
          plVar3 = plVar2;
          while (*plVar3 != *plVar5) {
            plVar3 = plVar3 + 1;
            if (plVar3 == plVar2 + (int)plVar6[1]) goto LAB_142f0fd6e;
          }
          plVar5 = plVar5 + 1;
          if (plVar5 == plVar1) goto LAB_142f0fd82;
        }
      }
LAB_142f0fd6e:
      plVar6 = plVar6 + 6;
    } while (plVar6 != plVar4);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x90));
  LOCK();
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
  UNLOCK();
  return;
}



// FUNCTION 142f0fdc0 FUN_142f0fdc0 body=713 status=ok
// SIG undefined FUN_142f0fdc0(void)

void FUN_142f0fdc0(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong *local_b8;
  longlong local_b0 [2];
  undefined1 local_a0;
  undefined1 local_9f;
  longlong local_98;
  longlong *plStack_90;
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_d0 = *(longlong **)(param_1 + 0x10);
      local_d8 = 0;
      if (local_d0 == (longlong *)0x0) {
LAB_142f0fe69:
        plVar7 = &local_d8;
        bVar4 = true;
        bVar10 = false;
        lVar9 = local_d8;
      }
      else {
        LOCK();
        iVar6 = (int)local_d0[1];
        bVar10 = iVar6 == 0;
        if (bVar10) {
          *(int *)(local_d0 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar10) {
          LOCK();
          bVar10 = iVar6 == (int)local_d0[1];
          if (bVar10) {
            *(int *)(local_d0 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar10) {
            if (local_d0 != (longlong *)0x0) {
              local_d8 = *(longlong *)(param_1 + 8);
            }
            goto LAB_142f0fe69;
          }
          LOCK();
          iVar6 = (int)local_d0[1];
          bVar10 = iVar6 == 0;
          if (bVar10) {
            *(int *)(local_d0 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar7 = &local_d8;
        local_d0 = (longlong *)0x0;
        bVar4 = true;
        bVar10 = false;
        lVar9 = 0;
      }
      goto LAB_142f0fe8e;
    }
  }
  plVar7 = &local_98;
  local_98 = 0;
  plStack_90 = (longlong *)0x0;
  bVar4 = false;
  bVar10 = true;
  lVar9 = 0;
LAB_142f0fe8e:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  plVar2 = plStack_90;
  *plVar7 = 0;
  if ((bVar10) && (plStack_90 != (longlong *)0x0)) {
    LOCK();
    plVar7 = plStack_90 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_90 + 8))(plStack_90,1);
      }
    }
  }
  plVar7 = local_d0;
  if ((bVar4) && (local_d0 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_d0 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  if (lVar9 != 0) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_c8 = param_1;
    local_c0 = lVar9;
    local_b8 = plVar3;
    FString::FString(local_b0,param_2);
    local_58 = 0;
    local_48 = 0;
    local_a0 = param_3;
    local_9f = param_4;
    puVar8 = (undefined8 *)FUN_140438ef0(0x38,local_78);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &PTR_FUN_145993100;
      puVar8[1] = local_c8;
      puVar8[2] = local_c0;
      puVar8[3] = local_b8;
      local_b8 = (longlong *)0x0;
      local_c0 = 0;
      FString::FString(puVar8 + 4,local_b0);
      *(undefined1 *)(puVar8 + 6) = local_a0;
      *(undefined1 *)((longlong)puVar8 + 0x31) = local_9f;
    }
    local_88[0] = &LAB_142ee3960;
    FUN_14204c6c0(lVar9,local_88);
    if (local_b0[0] != 0) {
      FMemory::Free();
    }
    plVar7 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_b8 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_b8 + 8))(local_b8,1);
        }
      }
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



// FUNCTION 142f10090 InspectEntity body=68 status=ok
// SIG undefined InspectEntity(void)

void UMistDebugEntityScreen::InspectEntity
               (undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FText::ToString(param_2);
  FUN_142f0fdc0(param_1,uVar1,param_3,param_4);
  return;
}



// FUNCTION 142f100e0 FUN_142f100e0 body=153 status=ok
// SIG undefined FUN_142f100e0(void)

void FUN_142f100e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong **pplVar4;
  longlong *local_18;
  undefined8 local_10;
  
  pplVar4 = &local_18;
  local_18 = (longlong *)0x0;
  local_10 = 0;
  plVar1 = (longlong *)FUN_140ecc7d0();
  plVar2 = local_18;
  for (iVar3 = (int)local_10; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2b0))(plVar1,param_3,1,0,pplVar4);
  }
  return;
}



// FUNCTION 142f10180 FUN_142f10180 body=732 status=ok
// SIG undefined FUN_142f10180(void)

void FUN_142f10180(longlong param_1,undefined8 *param_2,char param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  longlong *plVar6;
  void *_Src;
  bool bVar7;
  bool bVar8;
  char cVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  short *psVar14;
  undefined2 *puVar15;
  longlong lVar16;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *plStack_60;
  undefined1 local_58 [8];
  longlong *local_50;
  
  lVar13 = 0;
  lVar16 = *(longlong *)(param_1 + 0x170);
  if (lVar16 == 0) {
    plVar10 = &local_68;
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    bVar8 = false;
    bVar7 = true;
  }
  else {
    local_70 = *(longlong **)(param_1 + 0x178);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
    }
    plVar10 = &local_78;
    bVar8 = true;
    bVar7 = false;
    lVar13 = lVar16;
    local_78 = lVar16;
  }
  plVar6 = (longlong *)plVar10[1];
  plVar10[1] = 0;
  *plVar10 = 0;
  plVar10 = plStack_60;
  if (bVar7) {
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      lVar16 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_60 + 8))(plStack_60,1);
        }
      }
    }
  }
  plVar10 = local_70;
  if (bVar8) {
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      lVar16 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
  }
  bVar7 = false;
  if (lVar13 == 0) goto LAB_142f103fa;
  if (param_4 == '\0') {
    bVar7 = true;
    uVar11 = FSnapshotWidgetReflectorNode::GetWidgetType(lVar13,local_58);
    puVar12 = (undefined8 *)FText::ToString(uVar11);
    psVar14 = &DAT_143f3eda8;
    if (*(int *)(puVar12 + 1) == 0) {
      puVar15 = &DAT_143f3eda8;
    }
    else {
      puVar15 = (undefined2 *)*puVar12;
    }
    if (*(int *)(param_2 + 1) != 0) {
      psVar14 = (short *)*param_2;
    }
    lVar16 = (longlong)puVar15 - (longlong)psVar14;
    do {
      sVar4 = *psVar14;
      sVar5 = *(short *)((longlong)psVar14 + lVar16);
      if (sVar4 != sVar5) break;
      psVar14 = psVar14 + 1;
    } while (sVar5 != 0);
    if (sVar4 != sVar5) goto LAB_142f1030d;
    bVar8 = false;
  }
  else {
LAB_142f1030d:
    bVar8 = true;
  }
  if ((bVar7) && (local_50 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_50 + 1;
    lVar16 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar16 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  if (bVar8) {
    if (param_3 == '\0') {
      cVar9 = FUN_142055760(lVar13,param_2,1);
    }
    else {
      local_80 = *(int *)(param_2 + 1);
      lVar16 = (longlong)local_80;
      _Src = (void *)*param_2;
      local_88 = (void *)0x0;
      if (local_80 == 0) {
        local_7c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,local_80,0);
        _guard_xfg_dispatch_icall_nop(local_88,_Src,lVar16 * 2);
      }
      FUN_142f08a50(param_1,&local_88);
      cVar9 = FUN_142055930(lVar13,param_2,&local_88,1);
      if (local_88 != (void *)0x0) {
        FMemory::Free();
      }
    }
    if (cVar9 != '\0') {
      FUN_142f04a10(param_1);
      FUN_142f153d0(param_1);
    }
  }
LAB_142f103fa:
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar6 + 1;
    lVar16 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar16 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return;
}



// FUNCTION 142f10460 FUN_142f10460 body=737 status=ok
// SIG undefined FUN_142f10460(void)

void FUN_142f10460(longlong param_1,undefined8 param_2,char param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  void *pvVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *plStack_60;
  undefined1 local_58 [8];
  longlong *local_50;
  
  lVar12 = 0;
  lVar13 = *(longlong *)(param_1 + 0x170);
  if (lVar13 == 0) {
    plVar9 = &local_68;
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = true;
  }
  else {
    local_70 = *(longlong **)(param_1 + 0x178);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
    }
    plVar9 = &local_78;
    bVar7 = true;
    bVar6 = false;
    lVar12 = lVar13;
    local_78 = lVar13;
  }
  plVar4 = (longlong *)plVar9[1];
  plVar9[1] = 0;
  *plVar9 = 0;
  plVar9 = plStack_60;
  if (bVar6) {
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_60 + 8))(plStack_60,1);
        }
      }
    }
  }
  plVar9 = local_70;
  if (bVar7) {
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
  }
  bVar6 = false;
  if (lVar12 == 0) goto LAB_142f106e0;
  if (param_4 == '\0') {
    bVar6 = true;
    uVar10 = FSnapshotWidgetReflectorNode::GetWidgetType(lVar12,local_58);
    cVar8 = FText::EqualTo(param_2,uVar10,0);
    bVar7 = false;
    if (cVar8 == '\0') goto LAB_142f105ad;
  }
  else {
LAB_142f105ad:
    bVar7 = true;
  }
  if ((bVar6) && (local_50 != (longlong *)0x0)) {
    LOCK();
    plVar9 = local_50 + 1;
    lVar13 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  if (bVar7) {
    puVar11 = (undefined8 *)FText::ToString();
    local_98 = (void *)0x0;
    local_90 = *(int *)(puVar11 + 1);
    lVar13 = (longlong)local_90;
    pvVar5 = (void *)*puVar11;
    if (local_90 == 0) {
      local_8c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,local_90,0);
      _guard_xfg_dispatch_icall_nop(local_98,pvVar5,lVar13 * 2);
    }
    iVar3 = local_90;
    pvVar5 = local_98;
    if (param_3 == '\0') {
      cVar8 = FUN_142055760(lVar12,&local_98,1);
    }
    else {
      local_88 = (void *)0x0;
      local_80 = local_90;
      if (local_90 == 0) {
        local_7c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,local_90,0);
        _guard_xfg_dispatch_icall_nop(local_88,pvVar5,(longlong)iVar3 * 2);
      }
      FUN_142f08a50(param_1,&local_88);
      cVar8 = FUN_142055930(lVar12,&local_98,&local_88,1);
      if (local_88 != (void *)0x0) {
        FMemory::Free();
      }
    }
    if (cVar8 != '\0') {
      FUN_142f04a10(param_1);
      FUN_142f153d0(param_1);
    }
    if (local_98 != (void *)0x0) {
      FMemory::Free();
    }
  }
LAB_142f106e0:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar4 + 1;
    lVar13 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
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



// FUNCTION 142f10750 FUN_142f10750 body=114 status=ok
// SIG undefined FUN_142f10750(void)

void FUN_142f10750(longlong param_1,float param_2)

{
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint local_20;
  double local_18;
  
  if (*(longlong *)(param_1 + 0x170) != 0) {
    local_38 = 0xffffffffffffffff;
    uStack_30 = 0xffffffffffffffff;
    local_28 = (longlong *)0x0;
    local_20 = 5;
    local_18 = (double)param_2;
    FUN_1420523e0(*(longlong *)(param_1 + 0x170),"width",&local_38);
    if ((local_20 >> 6 & 1) != 0) {
      (**(code **)(*local_28 + 0x10))(local_28,&local_38,local_18);
    }
  }
  return;
}



// FUNCTION 142f107d0 FUN_142f107d0 body=141 status=ok
// SIG undefined FUN_142f107d0(void)

void FUN_142f107d0(longlong param_1,float param_2)

{
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint local_20;
  double local_18;
  
  if ((1e-08 < ABS(param_2)) && (*(longlong *)(param_1 + 0x170) != 0)) {
    local_38 = 0xffffffffffffffff;
    uStack_30 = 0xffffffffffffffff;
    local_28 = (longlong *)0x0;
    local_20 = 5;
    local_18 = (double)(param_2 + 5.0);
    FUN_1420523e0(*(longlong *)(param_1 + 0x170),"width",&local_38);
    if ((local_20 >> 6 & 1) != 0) {
      (**(code **)(*local_28 + 0x10))(local_28,&local_38,local_18);
    }
  }
  return;
}



// FUNCTION 142f10860 FUN_142f10860 body=17 status=ok
// SIG undefined FUN_142f10860(void)

void FUN_142f10860(longlong param_1,longlong param_2)

{
  char *pcVar1;
  longlong lVar2;
  char cVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined8 uStack_68;
  undefined8 uStack_60;
  longlong *plStack_58;
  uint uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  longlong *plStack_28;
  uint uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  lVar2 = *(longlong *)(param_1 + 0x170);
  if (lVar2 != 0) {
    pcVar1 = (char *)(*(longlong *)(lVar2 + 0x78) + 0x30);
    LOCK();
    cVar3 = *pcVar1;
    if (cVar3 == '\0') {
      *pcVar1 = '\0';
      cVar3 = '\0';
    }
    UNLOCK();
    if (cVar3 < '\x06') {
      uStack_50 = *(uint *)(lVar2 + 0xa0);
      uStack_48 = *(undefined8 *)(lVar2 + 0xa8);
      uStack_40 = *(undefined8 *)(lVar2 + 0xb0);
      uStack_68 = 0xffffffffffffffff;
      uStack_60 = 0xffffffffffffffff;
      plStack_58 = (longlong *)0x0;
      if ((uStack_50 >> 6 & 1) != 0) {
        plStack_58 = *(longlong **)(lVar2 + 0x98);
        (**(code **)(*plStack_58 + 8))(plStack_58,&uStack_68);
      }
      uStack_20 = *(uint *)(param_2 + 0x18);
      uStack_18 = *(undefined8 *)(param_2 + 0x20);
      uStack_10 = *(undefined8 *)(param_2 + 0x28);
      uStack_38 = 0xffffffffffffffff;
      uStack_30 = 0xffffffffffffffff;
      plStack_28 = (longlong *)0x0;
      if ((uStack_20 >> 6 & 1) != 0) {
        plStack_28 = *(longlong **)(param_2 + 0x10);
        (**(code **)(*plStack_28 + 8))(plStack_28,&uStack_38);
      }
      lVar5 = 2;
      FUN_14202cf40(*(undefined8 *)(lVar2 + 0x78),PTR_s_scaleform_gfx_TextFieldEx_1464f0630,
                    PTR_s_setVerticalAlign_1464f0648,0,&uStack_68,2);
      puVar4 = &stack0xfffffffffffffff8;
      do {
        lVar5 = lVar5 + -1;
        if ((*(uint *)(puVar4 + -0x18) >> 6 & 1) != 0) {
          (**(code **)(**(longlong **)(puVar4 + -0x20) + 0x10))
                    (*(longlong **)(puVar4 + -0x20),puVar4 + -0x30,*(undefined8 *)(puVar4 + -0x10));
          *(undefined8 *)(puVar4 + -0x20) = 0;
        }
        *(undefined4 *)(puVar4 + -0x18) = 0;
        puVar4 = puVar4 + -0x30;
      } while (lVar5 != 0);
    }
    return;
  }
  return;
}



// FUNCTION 142f10880 FUN_142f10880 body=130 status=ok
// SIG undefined FUN_142f10880(void)

void FUN_142f10880(longlong param_1,float param_2)

{
  longlong lVar1;
  float fVar2;
  
  fVar2 = 0.0;
  if ((0.0 <= param_2) && (fVar2 = param_2, 1.0 <= param_2)) {
    fVar2 = 1.0;
  }
  fVar2 = fVar2 * *(float *)(param_1 + 0x314);
  lVar1 = *(longlong *)(param_1 + 0x2e8);
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x338) == '\0') {
      FUN_142f113c0(lVar1,(double)fVar2);
      *(float *)(param_1 + 0x318) = fVar2;
      return;
    }
    if (*(char *)(param_1 + 0x338) == '\x01') {
      FUN_142f0da80(lVar1,(double)fVar2);
      *(float *)(param_1 + 0x318) = fVar2;
    }
  }
  return;
}



// FUNCTION 142f10910 FUN_142f10910 body=34 status=ok
// SIG undefined FUN_142f10910(void)

void FUN_142f10910(longlong param_1,float param_2)

{
  if (param_2 < 0.0) {
    *(undefined4 *)(param_1 + 0x31c) = 0;
    return;
  }
  if (1.0 <= param_2) {
    param_2 = 1.0;
  }
  *(float *)(param_1 + 0x31c) = param_2;
  return;
}



// FUNCTION 142f10940 FUN_142f10940 body=29 status=ok
// SIG undefined FUN_142f10940(void)

ulonglong FUN_142f10940(longlong param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong alStackX_10 [3];
  
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (lVar2 == 0) {
    return 0;
  }
  if (param_2 == '\0') {
    uVar3 = FUN_142ed0e30();
    return uVar3;
  }
  alStackX_10[0] = param_1;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x4b0));
  LOCK();
  *(undefined4 *)(lVar2 + 0x4b8) = 1;
  UNLOCK();
  TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
  AddUniqueImpl<UGeometryCacheComponent_*_const_&>(lVar2 + 0x4a0,alStackX_10);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x4b0));
  LOCK();
  uVar1 = *(uint *)(lVar2 + 0x4b8);
  *(uint *)(lVar2 + 0x4b8) = 0;
  UNLOCK();
  return (ulonglong)uVar1;
}



// FUNCTION 142f10960 FUN_142f10960 body=384 status=ok
// SIG undefined FUN_142f10960(void)

void FUN_142f10960(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  void *_Src;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  iVar5 = (int)param_2[1];
  if (iVar5 < (int)param_1[0x5a]) {
    plVar2 = param_1 + 0x5c;
    if (plVar2 != param_2) {
      _Src = (void *)*param_2;
      *(int *)(param_1 + 0x5d) = iVar5;
      if ((iVar5 == 0) && (*(int *)((longlong)param_1 + 0x2ec) == 0)) {
        *(undefined4 *)((longlong)param_1 + 0x2ec) = 0;
      }
      else {
        TArray<int,FDefaultAllocator>::ResizeForCopy(plVar2,iVar5);
        _guard_xfg_dispatch_icall_nop((void *)*plVar2,_Src,(longlong)iVar5 << 2);
      }
    }
    piVar3 = (int *)*plVar2;
    if (piVar3 != piVar3 + (int)param_1[0x5d]) {
      piVar6 = piVar3;
      do {
        if (*piVar6 == (int)param_1[0x5b]) {
          if ((int)((longlong)piVar6 - (longlong)piVar3 >> 2) == -1) {
            return;
          }
          FName::FName(local_38,&DAT_143f3eda8,1);
          local_2c = 0;
          local_30 = 0xffffffff;
          FName::FName(local_28,&DAT_143f3eda8,1);
          iVar5 = (int)param_1[0x5b] + 1;
          local_10 = 0;
          local_20 = 0;
          plStack_18 = (longlong *)0x0;
          if (((int)param_1[0x5a] <= iVar5) && (iVar5 = 0, (char)param_1[0x61] == '\0')) {
            iVar5 = (int)param_1[0x5a] + -1;
          }
          FUN_142f0c980(param_1,iVar5,1);
          (**(code **)(*param_1 + 800))(param_1,0);
          plVar2 = plStack_18;
          if (plStack_18 == (longlong *)0x0) {
            return;
          }
          LOCK();
          plVar1 = plStack_18 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 != 1) {
            return;
          }
          (**(code **)*plStack_18)(plStack_18);
          LOCK();
          piVar3 = (int *)((longlong)plVar2 + 0xc);
          iVar5 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar5 != 1) {
            return;
          }
          (**(code **)(*plVar2 + 8))(plVar2,1);
          return;
        }
        piVar6 = piVar6 + 1;
      } while (piVar6 != piVar3 + (int)param_1[0x5d]);
    }
  }
  return;
}



// FUNCTION 142f10ae0 FUN_142f10ae0 body=152 status=ok
// SIG undefined FUN_142f10ae0(void)

void FUN_142f10ae0(longlong param_1,char param_2)

{
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint local_20;
  undefined *local_18;
  
  if (*(longlong *)(param_1 + 0x170) != 0) {
    local_28 = (longlong *)0x0;
    local_20 = 6;
    local_38 = 0xffffffffffffffff;
    uStack_30 = 0xffffffffffffffff;
    local_18 = PTR_DAT_14673cb18;
    if (((param_2 != '\x01') && (local_18 = PTR_s_center_14673cb28, param_2 != '\x02')) &&
       (local_18 = PTR_s_bottom_14673cb30, param_2 != '\x03')) {
      local_18 = PTR_DAT_14673cb20;
    }
    FUN_142056230(*(longlong *)(param_1 + 0x170),&local_38);
    if ((local_20 >> 6 & 1) != 0) {
      (**(code **)(*local_28 + 0x10))(local_28,&local_38,local_18);
    }
  }
  return;
}



// FUNCTION 142f10bd0 FUN_142f10bd0 body=329 status=ok
// SIG undefined FUN_142f10bd0(void)

void FUN_142f10bd0(longlong param_1,byte param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  bool bVar9;
  
  cVar1 = *(char *)(param_1 + 0x38);
  if (cVar1 != '\0') {
    if (param_2 == 0) {
      if (cVar1 == '\x02') {
        return;
      }
    }
    else if (cVar1 == '\x01') {
      return;
    }
  }
  *(byte *)(param_1 + 0x38) = (param_2 ^ 1) + 1;
  uVar7 = 0;
  plVar8 = *(longlong **)(param_1 + 0x28);
  uVar4 = (longlong)*(int *)(param_1 + 0x30) & 0x1fffffffffffffff;
  if (plVar8 + *(int *)(param_1 + 0x30) < plVar8) {
    uVar4 = uVar7;
  }
  if (uVar4 != 0) {
    do {
      lVar6 = 0;
      lVar3 = *plVar8;
      if ((lVar3 != 0) && (plVar2 = *(longlong **)(lVar3 + 0x2b8), plVar2 != (longlong *)0x0)) {
        if (param_2 == 0) {
LAB_142f10cce:
          uVar5 = 0;
        }
        else {
          AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x20));
          if (*(int *)(param_1 + 0x18) != 0) {
            lVar6 = *(longlong *)
                     (*(longlong *)(param_1 + 0x10) + -8 + (longlong)*(int *)(param_1 + 0x18) * 8);
          }
          ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x20));
          if (lVar6 == 0) goto LAB_142f10cce;
          lVar3 = FUN_142edca80(lVar6 + 0x40,lVar3);
          bVar9 = lVar3 != 0;
          if (*(char *)(lVar6 + 0x39) != '\0') {
            if (*(char *)(lVar6 + 0x39) != '\x01') goto LAB_142f10cce;
            bVar9 = !bVar9;
          }
          if (!bVar9) goto LAB_142f10cce;
          uVar5 = 1;
        }
        (**(code **)(*plVar2 + 0x278))(plVar2,uVar5);
      }
      plVar8 = plVar8 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar4);
  }
  return;
}



// FUNCTION 142f10d20 FUN_142f10d20 body=727 status=ok
// SIG undefined FUN_142f10d20(void)

void FUN_142f10d20(longlong param_1,undefined1 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong *plStack_80;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_90 = *(longlong **)(param_1 + 0x10);
      local_98 = 0;
      if (local_90 == (longlong *)0x0) {
LAB_142f10dcd:
        plVar7 = &local_98;
        bVar4 = true;
        bVar11 = false;
        lVar9 = local_98;
      }
      else {
        LOCK();
        iVar6 = (int)local_90[1];
        bVar11 = iVar6 == 0;
        if (bVar11) {
          *(int *)(local_90 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar11) {
          LOCK();
          bVar11 = iVar6 == (int)local_90[1];
          if (bVar11) {
            *(int *)(local_90 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar11) {
            if (local_90 != (longlong *)0x0) {
              local_98 = *(longlong *)(param_1 + 8);
            }
            goto LAB_142f10dcd;
          }
          LOCK();
          iVar6 = (int)local_90[1];
          bVar11 = iVar6 == 0;
          if (bVar11) {
            *(int *)(local_90 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar7 = &local_98;
        local_90 = (longlong *)0x0;
        bVar4 = true;
        bVar11 = false;
        lVar9 = 0;
      }
      goto LAB_142f10df4;
    }
  }
  plVar7 = &local_88;
  local_88 = 0;
  plStack_80 = (longlong *)0x0;
  bVar4 = false;
  bVar11 = true;
  lVar9 = 0;
LAB_142f10df4:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_80;
  if ((bVar11) && (plStack_80 != (longlong *)0x0)) {
    LOCK();
    plVar10 = plStack_80 + 1;
    lVar5 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_80 + 8))(plStack_80,1);
      }
    }
  }
  plVar7 = local_90;
  if ((bVar4) && (local_90 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_90 + 1;
    lVar5 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  if (lVar9 != 0) {
    plVar7 = *(longlong **)(lVar9 + 0xd8);
    lVar9 = *(longlong *)(lVar9 + 0xd0);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    if (lVar9 != 0) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      local_48 = 0;
      local_38 = 0;
      puVar8 = (undefined8 *)FUN_140438ef0(0x20,local_68);
      plVar10 = plVar7;
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &PTR_FUN_14467a4e8;
        puVar8[1] = lVar9;
        puVar8[2] = plVar7;
        *(undefined1 *)(puVar8 + 3) = param_2;
        plVar10 = (longlong *)0x0;
      }
      local_78[0] = &LAB_142ee3720;
      FUN_14204c6c0(lVar9,local_78);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar10 + 1;
        lVar9 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar7 + 1;
      lVar9 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
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



// FUNCTION 142f11000 FUN_142f11000 body=11 status=ok
// SIG undefined FUN_142f11000(void)

void FUN_142f11000(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xa0) = param_2;
  FUN_142ef1190();
  return;
}



// FUNCTION 142f11010 FUN_142f11010 body=575 status=ok
// SIG undefined FUN_142f11010(void)

void FUN_142f11010(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  BOOL BVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    local_48 = 0xffffffff;
    local_44 = 0;
    FWeakObjectPtr::operator=(&local_40,0);
    FWeakObjectPtr::operator=(&local_38,0);
    FWeakObjectPtr::operator=(&local_30,0);
    FWeakObjectPtr::operator=(&local_28,0);
    FWeakObjectPtr::operator=(&local_48,param_2);
    local_40 = *param_3;
    lVar2 = *(longlong *)(param_1 + 0x2d8);
    local_3c = param_3[1];
    local_38 = param_3[2];
    local_34 = param_3[3];
    local_30 = param_3[4];
    local_2c = param_3[5];
    local_28 = param_3[6];
    local_24 = param_3[7];
    uVar6 = FWeakObjectPtr::Get(&local_48);
    iVar4 = FUN_142eece20(lVar2,uVar6);
    BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x68));
    if (BVar5 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x68));
    }
    if ((-1 < iVar4) && (iVar4 < *(int *)(lVar2 + 0x60))) {
      puVar1 = (undefined4 *)(*(longlong *)(lVar2 + 0x58) + (longlong)iVar4 * 0x28);
      *puVar1 = local_48;
      puVar1[1] = local_44;
      puVar1[2] = local_40;
      puVar1[3] = local_3c;
      puVar1[4] = local_38;
      puVar1[5] = local_34;
      puVar1[6] = local_30;
      puVar1[7] = local_2c;
      puVar1[8] = local_28;
      puVar1[9] = local_24;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x68));
      return;
    }
    iVar4 = *(int *)(lVar2 + 0x60);
    lVar3 = *(longlong *)(lVar2 + 0x58);
    for (lVar9 = lVar3; lVar9 != lVar3 + (longlong)iVar4 * 0x28; lVar9 = lVar9 + 0x28) {
      lVar7 = FWeakObjectPtr::Get(lVar9);
      lVar8 = FWeakObjectPtr::Get(&local_48);
      if (lVar7 == lVar8) {
        if ((int)((lVar9 - lVar3) / 0x28) != -1) goto LAB_142f11222;
        break;
      }
    }
    iVar4 = *(int *)(lVar2 + 0x60);
    *(int *)(lVar2 + 0x60) = iVar4 + 1;
    if (*(int *)(lVar2 + 100) < iVar4 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(lVar2 + 0x58,iVar4);
    }
    puVar1 = (undefined4 *)(*(longlong *)(lVar2 + 0x58) + (longlong)iVar4 * 0x28);
    *puVar1 = local_48;
    puVar1[1] = local_44;
    puVar1[2] = local_40;
    puVar1[3] = local_3c;
    puVar1[4] = local_38;
    puVar1[5] = local_34;
    puVar1[6] = local_30;
    puVar1[7] = local_2c;
    puVar1[8] = local_28;
    puVar1[9] = local_24;
LAB_142f11222:
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x68));
  }
  return;
}



// FUNCTION 142f11250 SetWidgetToFocus body=253 status=ok
// SIG undefined SetWidgetToFocus(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FInputModeGameAndUI::SetWidgetToFocus(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  puVar1 = (undefined8 *)(param_1 + 8);
  uStack_40 = (longlong *)param_2[1];
  if (uStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_40 + 1) = (int)uStack_40[1] + 1;
    UNLOCK();
  }
  if (&local_48 != puVar1) {
    local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    uVar6 = *puVar1;
    plVar5 = *(longlong **)(param_1 + 0x10);
    local_38 = (undefined4)local_48;
    uStack_34 = local_48._4_4_;
    uStack_30 = (undefined4)uStack_40;
    uStack_2c = uStack_40._4_4_;
    *(undefined4 *)puVar1 = (undefined4)local_48;
    *(undefined4 *)(param_1 + 0xc) = local_48._4_4_;
    *(undefined4 *)(param_1 + 0x10) = (undefined4)uStack_40;
    *(undefined4 *)(param_1 + 0x14) = uStack_40._4_4_;
    local_48 = uVar6;
    uStack_40 = plVar5;
  }
  plVar5 = uStack_40;
  if (uStack_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = uStack_40 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*uStack_40)(uStack_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_40 + 8))(uStack_40,1);
      }
    }
  }
  plVar5 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 142f11350 FUN_142f11350 body=111 status=ok
// SIG undefined FUN_142f11350(void)

void FUN_142f11350(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  puVar1 = (undefined8 *)(param_1 + 0x10);
  if (puVar1 != param_2) {
    _Src = (void *)*param_2;
    iVar2 = *(int *)(param_2 + 1);
    *(int *)(param_1 + 0x18) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x1c) == 0)) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      return;
    }
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar2);
    _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  return;
}



// FUNCTION 142f113c0 FUN_142f113c0 body=527 status=ok
// SIG undefined FUN_142f113c0(void)

void FUN_142f113c0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *plStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  uint local_50;
  undefined8 local_48;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_80 = *(longlong **)(param_1 + 0x30);
      local_88 = 0;
      if (local_80 == (longlong *)0x0) {
LAB_142f1145d:
        plVar7 = &local_88;
        bVar4 = true;
        bVar9 = false;
        lVar8 = local_88;
      }
      else {
        LOCK();
        iVar6 = (int)local_80[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_80 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar6 == (int)local_80[1];
          if (bVar9) {
            *(int *)(local_80 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar9) {
            if (local_80 != (longlong *)0x0) {
              local_88 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_142f1145d;
          }
          LOCK();
          iVar6 = (int)local_80[1];
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(local_80 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar7 = &local_88;
        local_80 = (longlong *)0x0;
        bVar4 = true;
        bVar9 = false;
        lVar8 = 0;
      }
      goto LAB_142f11482;
    }
  }
  plVar7 = &local_78;
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  bVar4 = false;
  bVar9 = true;
  lVar8 = 0;
LAB_142f11482:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_70;
  if ((bVar9) && (plStack_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_70 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_70 + 8))(plStack_70,1);
      }
    }
  }
  plVar7 = local_80;
  if ((bVar4) && (local_80 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_80 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  if (lVar8 != 0) {
    local_58 = (longlong *)0x0;
    local_68 = 0xffffffffffffffff;
    uStack_60 = 0xffffffffffffffff;
    local_50 = 5;
    local_48 = param_2;
    FUN_1420523e0(lVar8,"width",&local_68);
    if ((local_50 >> 6 & 1) != 0) {
      (**(code **)(*local_58 + 0x10))(local_58,&local_68,local_48);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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



// FUNCTION 142f115d0 FUN_142f115d0 body=483 status=ok
// SIG undefined FUN_142f115d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142f115d0(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong param_4,
                  undefined1 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined1 auVar1 [16];
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_98 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  *(undefined4 *)(param_1 + 0x103) = param_6;
  FUN_142136ab0(param_1,*param_2);
  (**(code **)(*param_1 + 0x928))(param_1);
  (**(code **)(*param_1 + 0x938))(param_1);
  lVar5 = param_1[0xf3];
  if (lVar5 != 0) {
    lVar3 = USoundWave::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_142f11670;
  }
  lVar5 = 0;
LAB_142f11670:
  param_1[0x10d] = lVar5;
  if (lVar5 != 0) {
    FUN_1420f6bf0(lVar5);
  }
  *(byte *)((longlong)param_1 + 0x24c) = *(byte *)((longlong)param_1 + 0x24c) | 8;
  *(undefined1 *)(param_1 + 0xe5) = param_5;
  (**(code **)(*param_1 + 0x640))(param_1,param_7);
  local_98[0] = 0;
  FUN_142382f60(param_1,param_4,&DAT_146532180,0);
  param_1[0x10c] = (longlong)param_3;
  if ((param_3 != (longlong *)0x0) && (param_4 != 0)) {
    auVar1 = *(undefined1 (*) [16])(param_4 + 0x220);
    uVar4 = (**(code **)(*param_3 + 0x720))(param_3,local_98);
    FRotator::Quaternion(uVar4,&local_88);
    local_78 = local_88;
    uStack_70 = uStack_80;
    local_a8 = 0;
    local_68._12_4_ = 0;
    local_68._0_12_ = auVar1._0_12_;
    local_58._4_4_ = DAT_1464aa788._4_4_;
    local_58._0_4_ = (undefined4)DAT_1464aa788;
    local_58._8_4_ = DAT_1464aa790;
    local_58._12_4_ = 0;
    FUN_142399d60(param_1,&local_78,0,0);
  }
  *(uint *)(param_1 + 0x73) = *(uint *)(param_1 + 0x73) | 1;
  return;
}



// FUNCTION 142f117c0 FUN_142f117c0 body=300 status=ok
// SIG undefined FUN_142f117c0(void)

void FUN_142f117c0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  int iVar5;
  longlong *local_38;
  undefined8 local_30;
  longlong local_28 [2];
  
  FUN_142eeca30();
  FUN_142eeea40(param_1);
  if (*(longlong *)(param_1 + 0x298) != 0) {
    FUN_142eeca30();
    FUN_142eeea40(*(undefined8 *)(param_1 + 0x298));
  }
  iVar5 = 0;
  while( true ) {
    local_38 = (longlong *)0x0;
    local_30 = 0;
    if (*(int *)(param_1 + 0x218) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = *(undefined2 **)(param_1 + 0x210);
    }
    FString::PrintfImpl(local_28,L"%s%i",puVar4,iVar5);
    lVar1 = FUN_142ea8420(param_1,local_28,0,6,&local_38);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    plVar3 = local_38;
    for (iVar2 = (int)local_30; iVar2 != 0; iVar2 = iVar2 + -1) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
    if (lVar1 == 0) break;
    iVar5 = iVar5 + 1;
    FUN_142f05ef0(param_1,lVar1,0);
  }
  FUN_142ebc100(param_1 + 0x170);
  return;
}



// FUNCTION 142f118f0 FUN_142f118f0 body=385 status=ok
// SIG undefined FUN_142f118f0(void)

void FUN_142f118f0(longlong param_1,longlong param_2,longlong param_3)

{
  double dVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  uint *puVar7;
  longlong local_res10;
  undefined1 local_28 [16];
  
  if ((*(longlong *)(param_1 + 0x180) != 0) &&
     (lVar4 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x180) + 0x378), param_1 == lVar4)) {
    lVar4 = *(longlong *)(param_1 + 0x180);
    FWeakObjectPtr::operator=(lVar4 + 0x378,0);
    *(undefined8 *)(lVar4 + 0x380) = 0;
  }
  *(longlong *)(param_1 + 0x180) = param_2;
  if (param_2 != 0) {
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&UGbxTextField::OnScrollBarPositionUpdated",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_res10,pwVar3 + 2,1);
    lVar4 = *(longlong *)(param_1 + 0x180);
    FWeakObjectPtr::operator=(lVar4 + 0x378,param_1);
    *(longlong *)(lVar4 + 0x380) = local_res10;
    if ((local_res10 != 0) && (lVar6 = FWeakObjectPtr::Get(lVar4 + 0x378), lVar6 != 0)) {
      UObject::FindFunction(lVar6,*(undefined8 *)(lVar4 + 0x380));
    }
  }
  if (param_3 != 0) {
    dVar1 = (double)FUN_142eeca30(param_3);
    *(float *)(param_1 + 0x260) = (float)dVar1;
  }
  puVar7 = (uint *)FUN_142eeb1f0(param_3,local_28,param_1);
  *(uint *)(param_1 + 0x280) = *puVar7 ^ 0x80000000;
  FUN_142f153d0(param_1);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    return;
  }
  FUN_142eaff20(*(longlong *)(param_1 + 0x38),param_1);
  return;
}



// FUNCTION 142f11a80 FUN_142f11a80 body=95 status=ok
// SIG undefined FUN_142f11a80(void)

void FUN_142f11a80(longlong param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  *(float *)(param_1 + 4) = param_4;
  *(float *)(param_1 + 8) = param_4 * 10.0;
  *(float *)(param_1 + 0x20) = param_2;
  *(float *)(param_1 + 0xc) = param_4 * 0.2;
  fVar1 = *(float *)(param_1 + 0x18);
  *(float *)(param_1 + 0x24) = param_3;
  fVar2 = 0.0;
  if (0.0 <= fVar1) {
    fVar2 = param_3 - param_2;
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    if (fVar1 <= fVar2) {
      fVar2 = fVar1;
    }
  }
  *(float *)(param_1 + 0x18) = fVar2;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(float *)(param_1 + 0x1c) = fVar2;
  *(undefined2 *)(param_1 + 0x30) = 1;
  return;
}



// FUNCTION 142f11ae0 FUN_142f11ae0 body=249 status=ok
// SIG undefined FUN_142f11ae0(void)

undefined8 FUN_142f11ae0(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  
  plVar6 = *(longlong **)(param_1 + 0x50);
  uVar8 = 0;
  plVar7 = plVar6 + (longlong)*(int *)(param_1 + 0x58) * 2;
  for (; plVar6 != plVar7; plVar6 = plVar6 + 2) {
    if (*plVar6 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = plVar6[1];
    }
    if (lVar4 != 0) {
      plVar5 = (longlong *)0x0;
      if (*plVar6 != 0) {
        plVar5 = (longlong *)plVar6[1];
      }
      local_38 = *param_3;
      local_30 = param_3[1];
      local_28 = param_3[2];
      if (local_28 != 0) {
        LOCK();
        *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
        UNLOCK();
      }
      cVar3 = (**(code **)(*plVar5 + 0x40))(plVar5,param_2,&local_38);
      if (cVar3 != '\0') {
        uVar8 = 1;
      }
    }
  }
  plVar6 = (longlong *)param_3[2];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar6 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar6)(plVar6);
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
  return uVar8;
}



// FUNCTION 142f11be0 FUN_142f11be0 body=498 status=ok
// SIG undefined FUN_142f11be0(void)

undefined8 FUN_142f11be0(longlong param_1,int param_2,longlong *param_3)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  bVar2 = 0;
  plVar7 = (longlong *)0x0;
  if ((((*(int *)(param_1 + 0x20) < 1) ||
       (lVar5 = *(longlong *)
                 (*(longlong *)(param_1 + 0x18) + -8 + (longlong)*(int *)(param_1 + 0x20) * 8),
       lVar5 == 0)) || (*(longlong *)(lVar5 + 0x28) == 0)) || (*(longlong *)(lVar5 + 0x30) == 0)) {
LAB_142f11c6b:
    if (bVar2 != 0) {
      if (bVar2 < 3) {
        iVar4 = FUN_142eed430(param_1);
        bVar9 = iVar4 == param_2;
      }
      else {
        if (bVar2 != 3) {
          if (bVar2 == 4) goto LAB_142f11d3b;
          goto LAB_142f11c8a;
        }
        if ((DAT_146b17150 != 0) &&
           (lVar5 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x148))(param_1 + -0x28),
           lVar5 != 0)) {
          uVar6 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x148))(param_1 + -0x28);
          plVar7 = (longlong *)UEngine::GetLocalPlayerFromControllerId(DAT_146b17150,uVar6,param_2);
        }
        bVar9 = plVar7 != (longlong *)0x0;
      }
      if (bVar9) goto LAB_142f11d3b;
    }
LAB_142f11c8a:
    plVar7 = (longlong *)param_3[2];
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
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
  }
  else {
    bVar2 = (**(code **)(**(longlong **)(lVar5 + 0x30) + 0xf8))();
    lVar5 = *(longlong *)
             (*(longlong *)(param_1 + 0x18) + -8 + (longlong)*(int *)(param_1 + 0x20) * 8);
    plVar8 = plVar7;
    if (*(longlong *)(lVar5 + 0x28) != 0) {
      plVar8 = *(longlong **)(lVar5 + 0x30);
    }
    cVar3 = (**(code **)(*plVar8 + 0x120))(plVar8,param_2);
    if (cVar3 == '\0') goto LAB_142f11c6b;
LAB_142f11d3b:
    if ((((*(int *)(param_1 + 0x20) < 1) ||
         (lVar5 = *(longlong *)
                   (*(longlong *)(param_1 + 0x18) + -8 + (longlong)*(int *)(param_1 + 0x20) * 8),
         lVar5 == 0)) ||
        ((*(longlong *)(lVar5 + 0x28) == 0 ||
         (((*(longlong *)(lVar5 + 0x30) == 0 ||
           (cVar3 = (**(code **)(**(longlong **)(lVar5 + 0x30) + 0xf8))(), cVar3 != '\x02')) ||
          (*param_3 == DAT_1469e98f8)))))) || (*param_3 == DAT_1469e9958)) {
      plVar7 = (longlong *)param_3[2];
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
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      return 1;
    }
    FKey::~FKey(param_3);
  }
  return 0;
}



// FUNCTION 142f11de0 FUN_142f11de0 body=902 status=ok
// SIG undefined FUN_142f11de0(void)

void FUN_142f11de0(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  void *_Src;
  longlong lVar1;
  bool bVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined2 *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  plVar13 = (longlong *)(*(longlong *)(param_1 + 0x4b0) + 0x98);
  local_58 = 0x3f800000;
  uStack_54 = 0x3f22a2a3;
  uStack_50 = 0;
  uStack_4c = 0x3f800000;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  (**(code **)(*plVar13 + 0x20))(plVar13,&local_58);
  uVar14 = 0;
  if (0 < *(int *)(param_1 + 0x490)) {
    local_68 = (undefined2 *)0x0;
    local_60 = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    FGenericPlatformString::Memcpy(local_68,&DAT_14598bd1c,4);
    puVar10 = *(undefined8 **)(param_1 + 0x488);
    uVar12 = (longlong)*(int *)(param_1 + 0x490) & 0x1fffffffffffffff;
    if (puVar10 + *(int *)(param_1 + 0x490) < puVar10) {
      uVar12 = uVar14;
    }
    if (uVar12 != 0) {
      do {
        uVar3 = local_60;
        iVar8 = (int)local_60;
        lVar9 = (longlong)(int)local_60;
        local_res20 = *puVar10;
        if (((int)local_60 != 0) && (1 < (int)local_60 + -1)) {
          iVar4 = (int)local_60 + 1;
          local_60 = CONCAT44(local_60._4_4_,iVar4);
          if (local_60._4_4_ < iVar4) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar3 & 0xffffffff);
          }
          lVar9 = lVar9 - (ulonglong)(iVar8 != 0);
          local_68[lVar9] = 0x2c;
          local_68[lVar9 + 1] = 0;
        }
        puVar6 = (undefined8 *)FName::ToString(&local_res20,&local_58);
        uVar3 = local_60;
        if (*(int *)(puVar6 + 1) == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(puVar6 + 1) + -1;
        }
        _Src = (void *)*puVar6;
        if (iVar8 != 0) {
          iVar4 = (int)local_60;
          lVar9 = (longlong)(int)local_60;
          iVar5 = (uint)((int)local_60 == 0) + (int)local_60 + iVar8;
          local_60 = CONCAT44(local_60._4_4_,iVar5);
          if (local_60._4_4_ < iVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar3 & 0xffffffff);
          }
          puVar11 = local_68 + (lVar9 - (ulonglong)(iVar4 != 0));
          _guard_xfg_dispatch_icall_nop(puVar11,_Src,(longlong)iVar8 * 2);
          puVar11[iVar8] = 0;
        }
        if (CONCAT44(uStack_54,local_58) != 0) {
          FMemory::Free();
        }
        puVar10 = puVar10 + 1;
        uVar14 = uVar14 + 1;
        param_1 = local_res8;
      } while (uVar14 != uVar12);
    }
    uVar14 = local_60;
    iVar8 = (int)local_60;
    lVar9 = (longlong)(int)local_60;
    iVar4 = (2 - (uint)((int)local_60 != 0)) + (int)local_60;
    local_60 = CONCAT44(local_60._4_4_,iVar4);
    if (local_60._4_4_ < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar14 & 0xffffffff);
    }
    local_res8 = local_res8 & 0xffffffff00000000;
    lVar9 = lVar9 - (ulonglong)(iVar8 != 0);
    local_68[lVar9] = 0x5d;
    local_68[lVar9 + 1] = 0;
    FUN_1428a6fb0(plVar13,&local_68,&local_res8);
    param_2 = local_res10;
    param_3 = local_res18;
    if (local_68 != (undefined2 *)0x0) {
      FMemory::Free();
      param_2 = local_res10;
      param_3 = local_res18;
    }
  }
  if ((*(longlong *)(param_1 + 0x458) != 0) &&
     (lVar9 = UWidgetComponent::GetRenderTarget(), lVar9 != 0)) {
    lVar7 = FUN_142f27b90();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      local_res8 = local_res8 & 0xffffffff00000000;
      local_68 = (undefined2 *)0x0;
      local_60 = 0x14;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      FGenericPlatformString::Memcpy(local_68,L"[ HUD State Stack ]",0x28);
      FUN_1428a6fb0(plVar13,&local_68,&local_res8);
      if (local_68 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      iVar8 = *(int *)(lVar9 + 0x5a8) + -1;
      if (-1 < iVar8) {
        lVar7 = (longlong)iVar8 * 8;
        do {
          lVar1 = *(longlong *)(lVar7 + *(longlong *)(lVar9 + 0x5a0));
          if (lVar1 != 0) {
            local_res8 = local_res8 & 0xffffffff00000000;
            local_res20 = *(undefined8 *)(lVar1 + 0x18);
            FName::ToString(&local_res20,&local_68);
            puVar11 = &DAT_143f3eda8;
            if ((int)local_60 != 0) {
              puVar11 = local_68;
            }
            FString::PrintfImpl(&local_58,L"#%d %s",iVar8,puVar11);
            FUN_1428a6fb0(plVar13,&local_58,&local_res8);
            if (CONCAT44(uStack_54,local_58) != 0) {
              FMemory::Free();
            }
            if (local_68 != (undefined2 *)0x0) {
              FMemory::Free();
            }
          }
          lVar7 = lVar7 + -8;
          iVar8 = iVar8 + -1;
        } while (-1 < iVar8);
      }
    }
  }
  FUN_14250a280(param_1,param_2,param_3);
  return;
}



// FUNCTION 142f12170 FUN_142f12170 body=508 status=ok
// SIG undefined FUN_142f12170(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_142f12170(longlong param_1,undefined8 *param_2,longlong *param_3,undefined1 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uStackX_c;
  
  plVar3 = *(longlong **)(param_1 + 0x40);
  plVar2 = plVar3 + (longlong)*(int *)(param_1 + 0x48) * 0xa1;
  if (plVar3 != plVar2) {
    do {
      if (*plVar3 == *param_3) {
        switch(param_4) {
        case 0:
          FUN_14080bc50(param_2,plVar3 + 0x19);
          return param_2;
        case 1:
          FUN_14080bc50(param_2,plVar3 + 0x2a);
          return param_2;
        case 2:
          FUN_14080bc50(param_2,plVar3 + 0x3b);
          return param_2;
        case 3:
          FUN_14080bc50(param_2,plVar3 + 0x6e);
          return param_2;
        case 4:
          FUN_14080bc50(param_2,plVar3 + 0x7f);
          return param_2;
        case 5:
          FUN_14080bc50(param_2,plVar3 + 0x90);
          return param_2;
        case 6:
          FUN_14080bc50(param_2,plVar3 + 0x4c);
          return param_2;
        case 7:
          FUN_14080bc50(param_2,plVar3 + 0x5d);
          return param_2;
        default:
          *param_2 = &PTR__scalar_deleting_destructor__143f489a8;
          *(undefined4 *)(param_2 + 1) = 0x42000000;
          *(undefined8 *)((longlong)param_2 + 0xc) = 0x42000000;
          *(undefined8 *)((longlong)param_2 + 0x14) = 0;
          *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
          uVar1 = _DAT_1464aa6c8;
          param_2[4] = _DAT_1464aa6c0;
          param_2[5] = uVar1;
          *(undefined1 *)(param_2 + 6) = 0;
          param_2[7] = 0;
          param_2[8] = 0;
          param_2[9] = 0;
          param_2[10] = 0;
          uStackX_c = (undefined4)((ulonglong)DAT_1468b5d88 >> 0x20);
        }
        goto LAB_142f121fc;
      }
      plVar3 = plVar3 + 0xa1;
    } while (plVar3 != plVar2);
  }
  *param_2 = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_2 + 1) = 0x42000000;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0x42000000;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_2[4] = _DAT_1464aa6c0;
  param_2[5] = uVar1;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  uStackX_c = (undefined4)((ulonglong)DAT_1468b5d88 >> 0x20);
LAB_142f121fc:
  uVar4 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_2 + 0xc) = uVar4;
  *(undefined4 *)((longlong)param_2 + 100) = uStackX_c;
  *(undefined4 *)(param_2 + 0xb) = uVar4;
  *(undefined4 *)((longlong)param_2 + 0x5c) = uStackX_c;
  *(undefined1 *)(param_2 + 0xd) = 0;
  *(undefined4 *)((longlong)param_2 + 0x6c) = 3;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) & 0xfc;
  return param_2;
}



// FUNCTION 142f12390 FUN_142f12390 body=814 status=ok
// SIG undefined FUN_142f12390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142f12390(longlong param_1,undefined8 param_2,longlong *param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  ulonglong *puStack_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined1 local_d8 [16];
  longlong local_c8 [2];
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [16];
  undefined1 local_78 [24];
  undefined4 local_60 [4];
  undefined1 local_50 [8];
  longlong *local_48;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  plVar7 = *(longlong **)(param_1 + 0x40);
  plVar8 = plVar7 + (longlong)*(int *)(param_1 + 0x48) * 0xa1;
  if (plVar7 != plVar8) {
    do {
      if (*plVar7 == *param_3) {
        switch(param_4) {
        case 0:
          FText::FText(param_2,plVar7 + 1);
          return param_2;
        case 1:
          FText::FText(param_2,plVar7 + 4);
          return param_2;
        case 2:
          FText::FText(param_2,plVar7 + 7);
          return param_2;
        case 3:
          FText::FText(param_2,plVar7 + 0x10);
          return param_2;
        case 4:
          FText::FText(param_2,plVar7 + 0x13);
          return param_2;
        case 5:
          FText::FText(param_2,plVar7 + 0x16);
          return param_2;
        case 6:
          FText::FText(param_2,plVar7 + 10);
          return param_2;
        case 7:
          FText::FText(param_2,plVar7 + 0xd);
          return param_2;
        }
      }
      plVar7 = plVar7 + 0xa1;
    } while (plVar7 != plVar8);
  }
  uVar4 = FName::ToString(param_3,local_c8);
  lVar5 = FText::FromString(local_78,uVar4);
  uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_a0,L"[{0}]",L"GbxUILocalization",L"KeyWithBrackets");
  puVar6 = (undefined8 *)FTextFormat::FTextFormat(local_88,uVar4);
  local_60[0] = 4;
  FText::FText(local_50,lVar5);
  local_e8 = *puVar6;
  local_f8 = local_60;
  puStack_f0 = &local_30;
  local_e0 = puVar6[1];
  local_38 = '\x01';
  if (local_e0 != 0) {
    LOCK();
    *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
    UNLOCK();
  }
  uVar4 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_d8,&local_f8);
  uVar4 = FText::Format(local_b8,&local_e8,uVar4);
  FText::FText(param_2,uVar4);
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_b0 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)local_b0 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_d8);
  if ((local_38 != '\0') && (local_38 = '\0', local_48 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_48 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
  }
  plVar7 = (longlong *)puVar6[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
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
  plVar7 = *(longlong **)(lVar5 + 8);
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
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_98 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar1 = (int *)((longlong)local_98 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_98 + 8))(local_98,1);
      }
    }
  }
  if (local_c8[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142f126e0 FUN_142f126e0 body=69 status=ok
// SIG undefined FUN_142f126e0(void)

void FUN_142f126e0(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[0x5b] + -1;
  if (iVar1 < 0) {
    if ((char)param_1[0x61] == '\0') {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)param_1[0x5a] + -1;
    }
  }
  FUN_142f0c980(param_1,iVar1,0);
                    /* WARNING: Could not recover jumptable at 0x000142f1271e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 800))(param_1,0);
  return;
}



// FUNCTION 142f12730 FUN_142f12730 body=72 status=ok
// SIG undefined FUN_142f12730(void)

void FUN_142f12730(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[0x5b] + 1;
  if ((int)param_1[0x5a] <= iVar1) {
    iVar1 = 0;
    if ((char)param_1[0x61] == '\0') {
      iVar1 = (int)param_1[0x5a] + -1;
    }
  }
  FUN_142f0c980(param_1,iVar1,1);
                    /* WARNING: Could not recover jumptable at 0x000142f12771. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 800))(param_1,0);
  return;
}



// FUNCTION 142f12780 FUN_142f12780 body=385 status=ok
// SIG undefined FUN_142f12780(void)

undefined8 FUN_142f12780(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  if (*(char *)(param_1 + 0xaf) != '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0xb0) != '\0') {
    return 0;
  }
  if (*(int *)(param_1 + 0x48) < 1) {
    uVar4 = FUN_142f02280();
    return uVar4;
  }
  FUN_142ee8180(param_1,*(undefined8 *)
                         (*(longlong *)(param_1 + 0x40) + -8 +
                         (longlong)*(int *)(param_1 + 0x48) * 8));
  FUN_142ee86c0(param_1,*(undefined8 *)
                         (*(longlong *)(param_1 + 0x40) + -8 +
                         (longlong)*(int *)(param_1 + 0x48) * 8));
  FUN_142f00410(param_1);
  plVar2 = (longlong *)FUN_142ee7390(param_1,param_2,0);
  if ((plVar2 == (longlong *)0x0) || (lVar3 = (**(code **)(*plVar2 + 0x278))(plVar2), lVar3 == 0)) {
LAB_142f128d9:
    *(undefined1 *)(param_1 + 0xac) = 1;
    if (plVar2 == (longlong *)0x0) {
      return 0;
    }
  }
  else {
    FUN_142f025f0(param_1,plVar2);
    *(undefined1 *)(param_1 + 0xac) = 0;
    FUN_142ef23e0(param_1,plVar2);
    if (*(char *)(param_1 + 0xac) == '\0') {
      FUN_142ee16e0(param_1,plVar2);
      if (*(char *)(param_1 + 0xac) == '\0') goto LAB_142f128d9;
      lVar3 = (**(code **)(*plVar2 + 0x278))(plVar2);
      plVar5 = *(longlong **)(param_1 + 0x40);
      plVar1 = plVar5 + *(int *)(param_1 + 0x48);
      for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
        if ((*plVar5 != 0) && (lVar3 == *(longlong *)(*plVar5 + 0x28))) goto LAB_142f12876;
      }
    }
    else {
      lVar3 = (**(code **)(*plVar2 + 0x278))(plVar2);
      plVar5 = *(longlong **)(param_1 + 0x40);
      plVar1 = plVar5 + *(int *)(param_1 + 0x48);
      for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
        if ((*plVar5 != 0) && (lVar3 == *(longlong *)(*plVar5 + 0x28))) goto LAB_142f12876;
      }
    }
    plVar2[5] = 0;
    plVar2[6] = 0;
  }
LAB_142f12876:
                    /* WARNING: Could not recover jumptable at 0x000142f12886. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*plVar2 + 0x278))(plVar2);
  return uVar4;
}



// FUNCTION 142f12910 FUN_142f12910 body=240 status=ok
// SIG undefined FUN_142f12910(void)

void FUN_142f12910(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  if ((param_1 != 0) && (lVar3 = UWidgetComponent::GetRenderTarget(), lVar3 != 0)) {
    lVar4 = FUN_142f27b90();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (0 < *(int *)(lVar3 + 0x5a8)) {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x5b0));
        iVar5 = *(int *)(lVar3 + 0x5a8);
        iVar2 = (iVar5 - (iVar5 + -1)) + -1;
        if (iVar2 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(lVar3 + 0x5a0) + (longlong)(iVar5 + -1) * 8),
                     (void *)(*(longlong *)(lVar3 + 0x5a0) + (longlong)iVar5 * 8),
                     (longlong)iVar2 << 3);
          iVar5 = *(int *)(lVar3 + 0x5a8);
        }
        *(int *)(lVar3 + 0x5a8) = iVar5 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar3 + 0x5a0);
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x5b0));
      }
      FUN_142f021a0(lVar3 + 0x590,param_2,0);
    }
  }
  return;
}



// FUNCTION 142f12a00 thunk_FUN_142f12a10 body=8 status=ok
// SIG undefined thunk_FUN_142f12a10(void)

void thunk_FUN_142f12a10(undefined8 param_1,undefined8 param_2)

{
  FUN_142f12a10(param_1,param_2,4);
  return;
}



// FUNCTION 142f12a10 FUN_142f12a10 body=345 status=ok
// SIG undefined FUN_142f12a10(void)

void FUN_142f12a10(longlong *param_1,longlong param_2,undefined1 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if ((param_2 != param_1[0x5f]) && (lVar3 = param_1[0x58], lVar3 != 0)) {
    lVar2 = FUN_142f320a0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      plVar5 = *(longlong **)(lVar3 + 0x58);
      plVar4 = plVar5 + (longlong)*(int *)(lVar3 + 0x60) * 6;
      for (; plVar5 != plVar4; plVar5 = plVar5 + 6) {
        if (*plVar5 == param_2) {
          lVar3 = FUN_142eed320(param_1,plVar5);
          if (lVar3 == 0) {
            return;
          }
          param_1[0x5f] = param_2;
          if ((param_1[0x5a] != 0) &&
             (lVar3 = FUN_142f00910(param_1[0x5a],param_1[0x5e],lVar3), lVar3 != 0)) {
            lVar2 = FUN_142f32150();
            if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) goto LAB_142f12b2c;
          }
          lVar3 = 0;
LAB_142f12b2c:
          param_1[0x5e] = lVar3;
          if (lVar3 == 0) {
            return;
          }
          (**(code **)(*param_1 + 0x4a8))(param_1,plVar5,lVar3,param_3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 142f12b70 FUN_142f12b70 body=79 status=ok
// SIG undefined FUN_142f12b70(void)

void FUN_142f12b70(longlong param_1)

{
  UGridPanel::SynchronizeProperties();
  if (*(char *)(param_1 + 0x17c) == '\0') {
    if (*(int *)(param_1 + 0x174) < 1) {
      *(undefined4 *)(param_1 + 0x174) = 1;
      return;
    }
  }
  else if ((*(char *)(param_1 + 0x17c) == '\x01') && (*(int *)(param_1 + 0x178) < 1)) {
    *(undefined4 *)(param_1 + 0x178) = 1;
  }
  return;
}



// FUNCTION 142f12bc0 FUN_142f12bc0 body=61 status=ok
// SIG undefined FUN_142f12bc0(void)

void FUN_142f12bc0(longlong param_1)

{
  undefined4 uVar1;
  
  FUN_14213dc10();
  if ((*(longlong *)(param_1 + 0x110) != 0) && (*(longlong *)(param_1 + 0x100) != 0)) {
    uVar1 = SMeshWidget::AddMeshWithInstancing
                      (*(longlong *)(param_1 + 0x110),*(longlong *)(param_1 + 0x100),1);
    *(undefined4 *)(param_1 + 0x120) = uVar1;
  }
  return;
}



// FUNCTION 142f12c00 FUN_142f12c00 body=56 status=ok
// SIG undefined FUN_142f12c00(void)

void FUN_142f12c00(longlong *param_1)

{
  FUN_14213d720();
  (**(code **)(*param_1 + 0x4a0))(param_1);
  (**(code **)(*param_1 + 0x4a8))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000142f12c31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x498))(param_1);
  return;
}



// FUNCTION 142f12c40 FUN_142f12c40 body=848 status=ok
// SIG undefined FUN_142f12c40(void)

void FUN_142f12c40(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_res8;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *plStack_40;
  longlong local_38;
  longlong *plStack_30;
  
  if ((*(longlong *)(param_1 + 0x318) == 0) || (*(longlong *)(param_1 + 800) == 0)) {
LAB_142f12ced:
    plVar7 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar4 = false;
    bVar9 = true;
    lVar8 = 0;
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 800) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (iVar6 < 1) goto LAB_142f12ced;
    local_60 = *(longlong **)(param_1 + 800);
    local_68 = 0;
    if (local_60 == (longlong *)0x0) {
LAB_142f12cdd:
      plVar7 = &local_68;
      bVar4 = true;
      bVar9 = false;
      lVar8 = local_68;
    }
    else {
      LOCK();
      iVar6 = (int)local_60[1];
      bVar9 = iVar6 == 0;
      if (bVar9) {
        *(int *)(local_60 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
      while (!bVar9) {
        LOCK();
        bVar9 = iVar6 == (int)local_60[1];
        if (bVar9) {
          *(int *)(local_60 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar9) {
          if (local_60 != (longlong *)0x0) {
            local_68 = *(longlong *)(param_1 + 0x318);
          }
          goto LAB_142f12cdd;
        }
        LOCK();
        iVar6 = (int)local_60[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_60 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
      }
      plVar7 = &local_68;
      local_60 = (longlong *)0x0;
      bVar4 = true;
      bVar9 = false;
      lVar8 = 0;
    }
  }
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_40;
  if ((bVar9) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_40 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar7 = local_60;
  if ((bVar4) && (local_60 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  if (lVar8 != 0) {
    FUN_14203e030(lVar8,L"valueChange");
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if ((*(longlong *)(param_1 + 0x328) != 0) && (*(longlong *)(param_1 + 0x330) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x330) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_50 = *(longlong **)(param_1 + 0x330);
      local_58 = 0;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        iVar6 = (int)local_50[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_50 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar6 == (int)local_50[1];
          if (bVar9) {
            *(int *)(local_50 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar9) {
            if (local_50 != (longlong *)0x0) {
              local_58 = *(longlong *)(param_1 + 0x328);
            }
            goto LAB_142f12e5d;
          }
          LOCK();
          iVar6 = (int)local_50[1];
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(local_50 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        local_50 = (longlong *)0x0;
      }
LAB_142f12e5d:
      plVar7 = &local_58;
      local_res8 = local_58;
      bVar4 = true;
      bVar9 = false;
      goto LAB_142f12e87;
    }
  }
  local_res8 = 0;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  plVar7 = &local_38;
  bVar4 = false;
  bVar9 = true;
LAB_142f12e87:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_30;
  if ((bVar9) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  plVar7 = local_50;
  if ((bVar4) && (local_50 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_50 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  if (local_res8 != 0) {
    FUN_14203e030(local_res8,L"valueChange");
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  LOCK();
  *(undefined4 *)(param_1 + 0x338) = 0;
  UNLOCK();
  return;
}



// FUNCTION 142f12f90 FUN_142f12f90 body=23 status=ok
// SIG undefined FUN_142f12f90(void)

void FUN_142f12f90(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x5e8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142f12f9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x5e8) + 0x508))();
    return;
  }
  return;
}



// FUNCTION 142f12fb0 FUN_142f12fb0 body=171 status=ok
// SIG undefined FUN_142f12fb0(void)

void FUN_142f12fb0(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  undefined1 local_res10 [24];
  
  fVar2 = param_1[8];
  param_1[8] = param_2 + fVar2;
  if (param_1[1] != 0.0) {
    fVar2 = ((param_2 + fVar2) - *param_1) / param_1[1];
    if (fVar2 < 0.0) {
      fVar2 = 0.0;
      goto LAB_142f12ffb;
    }
    if (fVar2 < 1.0) goto LAB_142f12ffb;
  }
  fVar2 = 1.0;
LAB_142f12ffb:
  local_res10[0] = *(undefined1 *)(param_1 + 2);
  fVar1 = (float)UKismetMathLibrary::Ease
                           (param_1[5],param_1[7],fVar2,local_res10,param_1[3],param_1[4]);
  param_1[6] = fVar1;
  if (1.0 <= fVar2) {
    param_1[6] = param_1[7];
    param_1[5] = param_1[7];
    param_1[8] = 0.0;
  }
  return;
}



// FUNCTION 142f13060 FUN_142f13060 body=315 status=ok
// SIG undefined FUN_142f13060(void)

undefined1 FUN_142f13060(float *param_1,float param_2)

{
  char cVar1;
  float fVar2;
  float fVar3;
  
  cVar1 = *(char *)(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (*(char *)((longlong)param_1 + 0x31) != '\0') {
    *(undefined1 *)(param_1 + 0xc) = 1;
    if (*(char *)(param_1 + 4) == '\0') {
      fVar3 = (float)FMath::FInterpTo(param_1[10],param_1[0xb],param_2,param_1[1] * *param_1);
      param_1[10] = fVar3;
      fVar3 = fVar3 * param_2 + param_1[6];
      param_1[6] = fVar3;
      if ((*(char *)((longlong)param_1 + 0x32) == '\0') &&
         (ABS(fVar3 - param_1[7]) < param_1[1] * 0.2)) {
        *(undefined1 *)((longlong)param_1 + 0x32) = 1;
        fVar2 = param_1[3];
        if (param_1[0xb] <= 0.0) {
          fVar2 = -fVar2;
        }
        param_1[0xb] = fVar2;
      }
    }
    else {
      fVar3 = param_1[6];
      fVar2 = param_1[5];
      if (param_1[7] <= fVar3 && fVar3 != param_1[7]) {
        fVar2 = -fVar2;
      }
      param_1[0xb] = fVar2;
      fVar3 = fVar2 * param_2 + fVar3;
      param_1[6] = fVar3;
    }
    if (((0.0 < param_1[0xb]) && (fVar2 = param_1[7], fVar2 <= fVar3)) ||
       ((param_1[0xb] < 0.0 && (fVar2 = param_1[7], fVar3 <= fVar2)))) {
      param_1[6] = fVar2;
      *(undefined1 *)((longlong)param_1 + 0x31) = 0;
      param_1[10] = 0.0;
    }
  }
  if ((cVar1 == '\0') && (*(char *)(param_1 + 0xc) == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 142f131a0 FUN_142f131a0 body=1963 status=ok
// SIG undefined FUN_142f131a0(void)

void FUN_142f131a0(longlong param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  float *pfVar3;
  void *_Dst;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  void *_Src;
  char cVar10;
  DWORD DVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  wchar_t *pwVar16;
  int iVar17;
  float *pfVar18;
  longlong *plVar19;
  float *pfVar20;
  longlong lVar21;
  undefined2 *puVar22;
  undefined8 *puVar23;
  float fVar24;
  float fVar25;
  longlong local_res8;
  float local_res10;
  undefined1 local_res18 [8];
  longlong local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  longlong *local_1b0;
  void *local_1a8;
  int local_1a0;
  undefined1 *local_198;
  longlong **pplStack_190;
  longlong *local_188;
  undefined8 local_180;
  longlong local_178;
  undefined8 local_170;
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
  undefined8 local_150;
  longlong local_148;
  undefined8 local_140;
  longlong local_138;
  longlong local_130;
  undefined8 local_128;
  longlong local_120;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  longlong local_88 [10];
  
  if (*(int *)(param_1 + 0x58) < 1) {
    return;
  }
  local_res10 = param_2;
  cVar10 = FUN_142ef5490();
  uVar7 = DAT_1469f4590;
  if (cVar10 == '\0') {
    FUN_142ee40a0(param_1);
  }
  else {
    puVar13 = (undefined8 *)FName::FName(local_res18,L"GbxShiftOverlay",1);
    local_res8 = FModuleManager::GetModulePtr_Internal(*puVar13);
    if (local_res8 == 0) {
      local_1b8 = *(undefined8 *)(param_1 + 0x78);
      local_1b0 = *(longlong **)(param_1 + 0x80);
      if (local_1b0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1b0 + 1) = (int)local_1b0[1] + 1;
        UNLOCK();
      }
      FUN_1418c0b40(uVar7,&local_1b8,2);
      plVar19 = local_1b0;
      uStack_90 = (longlong **)CONCAT44(uStack_90._4_4_,(undefined4)uStack_90);
      if (local_1b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_1b0 + 1;
        lVar21 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        uStack_90 = (longlong **)CONCAT44(uStack_90._4_4_,(undefined4)uStack_90);
        if ((int)lVar21 == 1) {
          (**(code **)*local_1b0)(local_1b0);
          LOCK();
          piVar2 = (int *)((longlong)plVar19 + 0xc);
          iVar17 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            (**(code **)(*plVar19 + 8))(plVar19,1);
          }
        }
      }
    }
    else {
      local_188 = &local_res8;
      local_180 = uVar7;
      pplStack_190 = &local_188;
      local_198 = &LAB_142ee3640;
      local_98 = 0x42ee3640;
      uStack_94 = 1;
      local_178 = param_1;
      uStack_90 = pplStack_190;
      FUN_14189a880(uVar7,&local_98,0);
    }
  }
  pfVar20 = *(float **)(param_1 + 0xc0);
  pfVar3 = pfVar20 + (longlong)*(int *)(param_1 + 200) * 6;
  if (pfVar20 != pfVar3) {
    pfVar18 = pfVar20 + 2;
    do {
      fVar24 = *pfVar18;
      fVar25 = pfVar18[1];
      fVar6 = pfVar18[3];
      fVar4 = *pfVar20;
      fVar5 = pfVar18[-1];
      *(undefined8 *)pfVar20 = *(undefined8 *)pfVar18;
      if ((int)fVar6 < 1) {
        local_170 = DAT_1469e97f0;
        local_168 = DAT_1469e97f8;
        local_160 = DAT_1469e9800;
        if (DAT_1469e9800 != 0) {
          LOCK();
          *(int *)(DAT_1469e9800 + 8) = *(int *)(DAT_1469e9800 + 8) + 1;
          UNLOCK();
        }
        FUN_142ef0500(param_1,&local_170,fVar24 - fVar4,pfVar18[2]);
        local_158 = DAT_1469e9808;
        local_150 = DAT_1469e9810;
        local_148 = DAT_1469e9818;
        if (DAT_1469e9818 != 0) {
          LOCK();
          *(int *)(DAT_1469e9818 + 8) = *(int *)(DAT_1469e9818 + 8) + 1;
          UNLOCK();
        }
        FUN_142ef0500(param_1,&local_158,fVar25 - fVar5,pfVar18[2]);
      }
      else {
        pfVar18[3] = (float)((int)fVar6 + -1);
      }
      pfVar20 = pfVar20 + 6;
      pfVar18 = pfVar18 + 6;
    } while (pfVar20 != pfVar3);
  }
  puVar13 = *(undefined8 **)(param_1 + 0x88);
  local_1c8 = 0;
  local_1c0 = 0;
  puVar23 = puVar13 + (longlong)*(int *)(param_1 + 0x90) * 10;
  if (puVar13 != puVar23) {
    plVar19 = puVar13 + 2;
    do {
      iVar17 = 0;
      if (*(char *)((longlong)plVar19 + 0xd) == '\0') {
        *(undefined4 *)(plVar19 + 3) = 0;
      }
      else {
        *(float *)(plVar19 + 3) = local_res10 + *(float *)(plVar19 + 3);
      }
      lVar21 = DAT_146b3e2d0;
      if (*(char *)(param_1 + 0x48) == '\0') {
        cVar10 = FUN_1415ad720(&DAT_1468e2448);
        if ((cVar10 == '\0') && (DAT_1468c21ae != '\0')) {
          DVar11 = GetCurrentThreadId();
          lVar14 = 4;
          if (DVar11 == DAT_1468c21c0) goto LAB_142f1348a;
        }
        else {
LAB_142f1348a:
          lVar14 = 0;
        }
        if (*(int *)(lVar14 + lVar21) != 0) goto LAB_142f1349e;
      }
      else {
LAB_142f1349e:
        puVar15 = (undefined8 *)FKey::ToString(puVar13,local_88);
        if (*(int *)(puVar15 + 1) == 0) {
          puVar22 = &DAT_143f3eda8;
        }
        else {
          puVar22 = (undefined2 *)*puVar15;
        }
        pwVar16 = L"Up";
        if (*(char *)((longlong)plVar19 + 0xd) != '\0') {
          pwVar16 = L"Down";
        }
        FString::PrintfImpl(&local_1a8,L"%s.%u = [%s]",puVar22,(int)plVar19[1],pwVar16);
        _Src = local_1a8;
        uVar9 = local_1c0;
        if (local_1a0 != 0) {
          iVar17 = local_1a0 + -1;
        }
        if (iVar17 != 0) {
          iVar8 = (int)local_1c0;
          lVar21 = (longlong)(int)local_1c0;
          iVar12 = (uint)((int)local_1c0 == 0) + (int)local_1c0 + iVar17;
          local_1c0 = CONCAT44(local_1c0._4_4_,iVar12);
          if (local_1c0._4_4_ < iVar12) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,uVar9 & 0xffffffff);
          }
          _Dst = (void *)(local_1c8 + (lVar21 - (ulonglong)(iVar8 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar17 * 2);
          *(undefined2 *)((longlong)iVar17 * 2 + (longlong)_Dst) = 0;
        }
        if (local_1a8 != (void *)0x0) {
          FMemory::Free(local_1a8);
        }
        if (local_88[0] != 0) {
          FMemory::Free();
        }
      }
      lVar21 = plVar19[1];
      if (*(char *)((longlong)plVar19 + 0xc) == '\0') {
        if (*(char *)((longlong)plVar19 + 0xd) != '\0') {
          fVar24 = *(float *)(plVar19 + 2);
          *(float *)(plVar19 + 2) = fVar24 - local_res10;
          if (fVar24 - local_res10 <= 0.0) {
            local_f8 = *puVar13;
            local_f0 = plVar19[-1];
            local_e8 = *plVar19;
            if (local_e8 != 0) {
              LOCK();
              *(int *)(local_e8 + 8) = *(int *)(local_e8 + 8) + 1;
              UNLOCK();
            }
            FUN_142f01c60(param_1,&local_f8,(int)lVar21,1);
            *(undefined4 *)(plVar19 + 2) = *(undefined4 *)((longlong)plVar19 + 0x14);
            fVar25 = *(float *)((longlong)plVar19 + 0x14) - *(float *)(param_1 + 0x6c);
            fVar24 = *(float *)(param_1 + 0x68);
            if ((*(float *)(param_1 + 0x68) <= fVar25) &&
               (fVar24 = *(float *)(param_1 + 100), fVar25 <= *(float *)(param_1 + 100))) {
              fVar24 = fVar25;
            }
            *(float *)((longlong)plVar19 + 0x14) = fVar24;
          }
          if (*(char *)((longlong)plVar19 + 0xd) != '\0') {
            if ((*(char *)((longlong)plVar19 + 0x1c) == '\0') &&
               (*(float *)(param_1 + 0x70) < *(float *)(plVar19 + 3) ||
                *(float *)(param_1 + 0x70) == *(float *)(plVar19 + 3))) {
              *(undefined1 *)((longlong)plVar19 + 0x1c) = 1;
              local_e0 = *puVar13;
              local_d8 = plVar19[-1];
              local_d0 = *plVar19;
              if (local_d0 != 0) {
                LOCK();
                *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
                UNLOCK();
              }
              FUN_142f019d0(param_1,&local_e0,(int)plVar19[1],0);
            }
            if ((*(char *)((longlong)plVar19 + 0x1d) == '\0') &&
               (*(float *)(param_1 + 0x74) < *(float *)(plVar19 + 3) ||
                *(float *)(param_1 + 0x74) == *(float *)(plVar19 + 3))) {
              *(undefined1 *)((longlong)plVar19 + 0x1d) = 1;
              local_c8 = *puVar13;
              local_c0 = plVar19[-1];
              local_b8 = *plVar19;
              if (local_b8 != 0) {
                LOCK();
                *(int *)(local_b8 + 8) = *(int *)(local_b8 + 8) + 1;
                UNLOCK();
              }
              FUN_142f019d0(param_1,&local_c8,(int)plVar19[1],1);
            }
          }
        }
        if (*(char *)((longlong)plVar19 + 0xd) == '\0') {
          fVar24 = 0.0;
          if ((char)plVar19[7] != '\0') goto LAB_142f1384c;
        }
        else {
          fVar24 = 1.0;
        }
        *(bool *)(plVar19 + 7) = *(char *)((longlong)plVar19 + 0xd) == '\0';
        local_b0 = *puVar13;
        local_a8 = plVar19[-1];
        local_a0 = *plVar19;
        if (local_a0 != 0) {
          LOCK();
          *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
          UNLOCK();
        }
        puVar15 = &local_b0;
LAB_142f13840:
        FUN_142f011c0(param_1,puVar15,fVar24);
      }
      else {
        lVar14 = plVar19[4];
        if ((*(char *)((longlong)plVar19 + 0x25) != '\0') &&
           (fVar24 = *(float *)((longlong)plVar19 + 0x2c) - local_res10,
           *(float *)((longlong)plVar19 + 0x2c) = fVar24, fVar24 <= 0.0)) {
          local_140 = *puVar13;
          local_138 = plVar19[-1];
          local_130 = *plVar19;
          if (local_130 != 0) {
            LOCK();
            *(int *)(local_130 + 8) = *(int *)(local_130 + 8) + 1;
            UNLOCK();
          }
          FUN_142f01530(param_1,&local_140,(int)lVar14,(int)lVar21,1);
          *(undefined4 *)((longlong)plVar19 + 0x2c) = *(undefined4 *)((longlong)plVar19 + 0x34);
          fVar25 = *(float *)((longlong)plVar19 + 0x34) - *(float *)(param_1 + 0x6c);
          fVar24 = *(float *)(param_1 + 0x68);
          if ((*(float *)(param_1 + 0x68) <= fVar25) &&
             (fVar24 = *(float *)(param_1 + 100), fVar25 <= *(float *)(param_1 + 100))) {
            fVar24 = fVar25;
          }
          *(float *)((longlong)plVar19 + 0x34) = fVar24;
        }
        lVar21 = plVar19[4];
        lVar14 = plVar19[1];
        if ((*(char *)((longlong)plVar19 + 0x24) != '\0') &&
           (fVar24 = *(float *)(plVar19 + 5), *(float *)(plVar19 + 5) = fVar24 - local_res10,
           fVar24 - local_res10 <= 0.0)) {
          local_128 = *puVar13;
          local_120 = plVar19[-1];
          local_118 = *plVar19;
          if (local_118 != 0) {
            LOCK();
            *(int *)(local_118 + 8) = *(int *)(local_118 + 8) + 1;
            UNLOCK();
          }
          FUN_142f01530(param_1,&local_128,(int)lVar21,(int)lVar14,1);
          *(int *)(plVar19 + 5) = (int)plVar19[6];
          fVar25 = *(float *)(plVar19 + 6) - *(float *)(param_1 + 0x6c);
          fVar24 = *(float *)(param_1 + 0x68);
          if ((*(float *)(param_1 + 0x68) <= fVar25) &&
             (fVar24 = *(float *)(param_1 + 100), fVar25 <= *(float *)(param_1 + 100))) {
            fVar24 = fVar25;
          }
          *(float *)(plVar19 + 6) = fVar24;
        }
        fVar24 = *(float *)(plVar19 + 4);
        if ((1e-08 < ABS(fVar24)) || ((char)plVar19[7] == '\0')) {
          *(bool *)(plVar19 + 7) = 1e-08 >= ABS(fVar24);
          local_110 = *puVar13;
          local_108 = plVar19[-1];
          local_100 = *plVar19;
          if (local_100 != 0) {
            LOCK();
            *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
            UNLOCK();
            fVar24 = *(float *)(plVar19 + 4);
          }
          puVar15 = &local_110;
          goto LAB_142f13840;
        }
      }
LAB_142f1384c:
      puVar13 = puVar13 + 10;
      plVar19 = plVar19 + 10;
    } while (puVar13 != puVar23);
  }
  lVar21 = DAT_146b3e2d0;
  if (*(char *)(param_1 + 0x48) == '\0') {
    cVar10 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar10 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar11 = GetCurrentThreadId();
      lVar14 = 4;
      if (DVar11 == DAT_1468c21c0) goto LAB_142f138cf;
    }
    else {
LAB_142f138cf:
      lVar14 = 0;
    }
    if (*(int *)(lVar14 + lVar21) == 0) goto LAB_142f13911;
  }
  if (DAT_146b17150 != 0) {
    AK::MemoryMgr::StartProfileThreadUsage((long)DAT_146b17150);
  }
LAB_142f13911:
  if (local_1c8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f13950 FUN_142f13950 body=2721 status=ok
// SIG undefined FUN_142f13950(void)

void FUN_142f13950(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  longlong *plVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  char local_res8 [8];
  int local_res18 [2];
  int local_res20 [2];
  int local_b8;
  int local_b4;
  longlong local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [8];
  undefined4 local_98;
  undefined1 local_94;
  undefined1 local_90 [8];
  undefined8 local_88;
  longlong *plStack_80;
  undefined1 local_78;
  
  if (*(char *)(param_1 + 0xad) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0xac) != '\0') {
    FUN_142ee91e0(param_1 + 0x60,0);
    FUN_142ee9130(param_1 + 0x80,0);
  }
  *(undefined1 *)(param_1 + 0xad) = 1;
  FUN_142ee8c40(param_1);
  *(undefined1 *)(param_1 + 0xac) = 0;
  if ((*(byte *)(param_1 + 0xcc) & 0x10) != 0) {
    *(byte *)(param_1 + 0xcc) = *(byte *)(param_1 + 0xcc) & 0xef;
    if ((0 < *(int *)(param_1 + 0x48)) &&
       (cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x30), cVar2 != '\0')) {
      plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x30);
      (**(code **)(*plVar4 + 0xff8))(plVar4,*(char *)(param_1 + 0xcd) == '\x01');
    }
    FUN_142f0df30(param_1,*(undefined1 *)(param_1 + 0xcd));
  }
  plVar4 = (longlong *)0x0;
  uVar13 = 0;
  if ((DAT_146b17150 != 0) && (*(longlong *)(DAT_146b17150 + 0x7b0) != 0)) {
    uVar13 = (uint)*(byte *)(*(longlong *)(DAT_146b17150 + 0x7b0) + 0x80);
  }
  if (*(uint *)(param_1 + 0xd0) != uVar13) {
    cVar2 = *(char *)(param_1 + 0xd4);
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x30);
    if (((*(byte *)(lVar5 + 0x640) & 2) == 0) || (uVar13 != 0)) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x01';
    }
    *(char *)(param_1 + 0xd4) = cVar3;
    if ((cVar2 == '\0') && (cVar3 == '\0')) {
      FUN_142ee3cb0(param_1);
      FUN_142ee8c40(param_1);
      bVar20 = false;
    }
    else {
      bVar20 = true;
    }
    *(byte *)(param_1 + 0xcc) = *(byte *)(param_1 + 0xcc) | 2;
    *(uint *)(param_1 + 0xd0) = uVar13;
    if (!bVar20) {
      FUN_142ee91e0(param_1 + 0x60,0);
      FUN_142ee9130(param_1 + 0x80,0);
      *(undefined1 *)(param_1 + 0xad) = 0;
      plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x30);
      (**(code **)(*plVar4 + 0xfc0))(plVar4);
      return;
    }
  }
  if ((*(byte *)(param_1 + 0xcc) & 2) != 0) {
    lVar5 = param_1 + 0x30;
    local_res20[0] = 0;
    local_res18[0] = 0;
    local_b4 = 0;
    local_b8 = 0;
    cVar2 = FWeakObjectPtr::IsValid(lVar5);
    if (cVar2 != '\0') {
      uVar6 = FWeakObjectPtr::Get(lVar5);
      FUN_14270dc70(uVar6,local_res20,local_res18);
      uVar6 = FWeakObjectPtr::Get(lVar5);
      FUN_142dcfa90(uVar6,&local_b4,&local_b8);
    }
    fVar22 = 0.0;
    if (local_res18[0] == 0) {
      fVar23 = 0.0;
    }
    else {
      fVar23 = (float)local_res20[0] / (float)local_res18[0];
    }
    if (local_b8 != 0) {
      fVar22 = (float)local_b4 / (float)local_b8;
    }
    plVar12 = *(longlong **)(param_1 + 0x40);
    plVar19 = (longlong *)((longlong)*(int *)(param_1 + 0x48) & 0x1fffffffffffffff);
    if (plVar12 + *(int *)(param_1 + 0x48) < plVar12) {
      plVar19 = plVar4;
    }
    plVar18 = plVar4;
    if (plVar19 != (longlong *)0x0) {
      do {
        lVar5 = *plVar12;
        if (((lVar5 != 0) && (*(longlong *)(lVar5 + 0x28) != 0)) &&
           (*(longlong *)(lVar5 + 0x30) != 0)) {
          cVar2 = (**(code **)(**(longlong **)(lVar5 + 0x30) + 0x100))();
          fVar21 = fVar23;
          if (cVar2 == '\x01') {
            fVar21 = fVar22;
          }
          plVar10 = plVar4;
          if (*(longlong *)(lVar5 + 0x28) != 0) {
            plVar10 = *(longlong **)(lVar5 + 0x30);
          }
          (**(code **)(*plVar10 + 0xb0))(plVar10,fVar21);
        }
        plVar12 = plVar12 + 1;
        plVar18 = (longlong *)((longlong)plVar18 + 1);
      } while (plVar18 != plVar19);
    }
    plVar12 = *(longlong **)(param_1 + 0x90);
    plVar19 = (longlong *)((longlong)*(int *)(param_1 + 0x98) & 0x1fffffffffffffff);
    if (plVar12 + *(int *)(param_1 + 0x98) < plVar12) {
      plVar19 = plVar4;
    }
    plVar18 = plVar4;
    if (plVar19 != (longlong *)0x0) {
      do {
        lVar5 = *plVar12;
        if (((lVar5 != 0) && (*(longlong *)(lVar5 + 0x28) != 0)) &&
           (*(longlong *)(lVar5 + 0x30) != 0)) {
          cVar2 = (**(code **)(**(longlong **)(lVar5 + 0x30) + 0x100))();
          fVar21 = fVar23;
          if (cVar2 == '\x01') {
            fVar21 = fVar22;
          }
          plVar10 = plVar4;
          if (*(longlong *)(lVar5 + 0x28) != 0) {
            plVar10 = *(longlong **)(lVar5 + 0x30);
          }
          (**(code **)(*plVar10 + 0xb0))(plVar10,fVar21);
        }
        plVar12 = plVar12 + 1;
        plVar18 = (longlong *)((longlong)plVar18 + 1);
      } while (plVar18 != plVar19);
    }
    *(byte *)(param_1 + 0xcc) = *(byte *)(param_1 + 0xcc) & 0xfd;
  }
  plVar19 = *(longlong **)(param_1 + 0x40);
  plVar12 = plVar19 + *(int *)(param_1 + 0x48);
  for (; plVar19 != plVar12; plVar19 = plVar19 + 1) {
    lVar5 = *plVar19;
    if (((lVar5 != 0) && (*(longlong *)(lVar5 + 0x28) != 0)) &&
       ((*(longlong *)(lVar5 + 0x30) != 0 &&
        (cVar2 = (**(code **)(**(longlong **)(lVar5 + 0x30) + 0x68))(), cVar2 != '\0')))) {
      if (*(char *)(param_1 + 0xac) != '\0') goto LAB_142f13db7;
      plVar18 = plVar4;
      if (*(longlong *)(lVar5 + 0x28) != 0) {
        plVar18 = *(longlong **)(lVar5 + 0x30);
      }
      (**(code **)(*plVar18 + 0x70))(plVar18,param_2);
      if (*(char *)(param_1 + 0xac) != '\0') goto LAB_142f13db7;
    }
  }
  plVar19 = *(longlong **)(param_1 + 0x90);
  plVar12 = plVar19 + *(int *)(param_1 + 0x98);
  for (; plVar19 != plVar12; plVar19 = plVar19 + 1) {
    lVar5 = *plVar19;
    if ((((lVar5 != 0) && (*(longlong *)(lVar5 + 0x28) != 0)) && (*(longlong *)(lVar5 + 0x30) != 0))
       && (cVar2 = (**(code **)(**(longlong **)(lVar5 + 0x30) + 0x68))(), cVar2 != '\0')) {
      if (*(char *)(param_1 + 0xac) != '\0') {
LAB_142f13db7:
        FUN_142ee91e0(param_1 + 0x60,0);
        FUN_142ee9130(param_1 + 0x80,0);
        *(undefined1 *)(param_1 + 0xad) = 0;
        return;
      }
      plVar18 = plVar4;
      if (*(longlong *)(lVar5 + 0x28) != 0) {
        plVar18 = *(longlong **)(lVar5 + 0x30);
      }
      (**(code **)(*plVar18 + 0x70))(plVar18,param_2);
      if (*(char *)(param_1 + 0xac) != '\0') goto LAB_142f13db7;
    }
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x30);
  if (cVar2 == '\0') {
    local_b0 = 0;
  }
  else {
    uVar6 = FWeakObjectPtr::Get(param_1 + 0x30);
    local_b0 = FUN_1422312c0(uVar6);
  }
  *(undefined2 *)(param_1 + 0xc0) = 1;
  FUN_142ee91e0(param_1 + 0x70,0);
  if (((0 < *(int *)(param_1 + 0x48)) &&
      (lVar5 = *(longlong *)
                (*(longlong *)(param_1 + 0x40) + -8 + (longlong)*(int *)(param_1 + 0x48) * 8),
      lVar5 != 0)) && ((*(longlong *)(lVar5 + 0x28) != 0 && (*(longlong *)(lVar5 + 0x30) != 0)))) {
    puVar16 = *(undefined8 **)(param_1 + 0x60);
    puVar17 = puVar16 + (longlong)*(int *)(param_1 + 0x68) * 6;
    for (; puVar16 != puVar17; puVar16 = puVar16 + 6) {
      iVar14 = *(int *)(puVar16 + 1);
      if ((local_b0 == 0) ||
         (lVar7 = UGameInstance::FindLocalPlayerFromControllerId(local_b0,iVar14), lVar7 != 0)) {
        if ((iVar14 == -1) && (cVar2 = FWeakObjectPtr::IsValid(), cVar2 != '\0')) {
          FWeakObjectPtr::Get(param_1 + 0x30);
          lVar7 = FUN_14270bb10();
          if (lVar7 != 0) {
            FWeakObjectPtr::Get(param_1 + 0x30);
            FUN_14270bb10();
          }
        }
        if (*(longlong *)(lVar5 + 0x28) == 0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = *(longlong **)(lVar5 + 0x30);
        }
        cVar2 = (**(code **)(*plVar4 + 0xb8))(plVar4,puVar16);
        if (cVar2 == '\0') {
LAB_142f13f4c:
          cVar2 = FWeakObjectPtr::IsValid();
          if (cVar2 != '\0') {
            if ((((*(int *)(param_1 + 0x48) < 1) ||
                 (lVar7 = *(longlong *)
                           (*(longlong *)(param_1 + 0x40) + -8 +
                           (longlong)*(int *)(param_1 + 0x48) * 8), lVar7 == 0)) ||
                (*(longlong *)(lVar7 + 0x28) == 0)) ||
               ((*(longlong *)(lVar7 + 0x30) == 0 ||
                (cVar2 = (**(code **)(**(longlong **)(lVar7 + 0x30) + 0xf8))(), cVar2 != '\x04'))))
            {
              cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x30);
              if (cVar2 == '\0') {
LAB_142f14010:
                iVar14 = -1;
              }
              else {
                uVar6 = FWeakObjectPtr::Get(param_1 + 0x30);
                lVar7 = FUN_14270bb10(uVar6);
                if (lVar7 == 0) goto LAB_142f14010;
                uVar6 = FWeakObjectPtr::Get(param_1 + 0x30);
                lVar7 = FUN_14270bb10(uVar6);
                iVar14 = *(int *)(lVar7 + 0x108);
              }
              lVar8 = FWeakObjectPtr::Get(param_1 + 0x38);
              lVar7 = *(longlong *)(lVar8 + 0x88);
              lVar8 = (longlong)*(int *)(lVar8 + 0x90) * 0x50 + lVar7;
              for (; lVar7 != lVar8; lVar7 = lVar7 + 0x50) {
                if (*(int *)(lVar7 + 0x18) == iVar14) {
                  *(undefined2 *)(lVar7 + 0x2c) = 0x101;
                }
              }
            }
            else {
              lVar8 = FWeakObjectPtr::Get(param_1 + 0x38);
              lVar7 = *(longlong *)(lVar8 + 0x88);
              lVar8 = (longlong)*(int *)(lVar8 + 0x90) * 0x50 + lVar7;
              for (; lVar7 != lVar8; lVar7 = lVar7 + 0x50) {
                *(undefined2 *)(lVar7 + 0x2c) = 0x101;
              }
            }
          }
        }
        else {
          if (*(longlong *)(lVar5 + 0x28) == 0) {
            plVar4 = (longlong *)0x0;
          }
          else {
            plVar4 = *(longlong **)(lVar5 + 0x30);
          }
          cVar2 = (**(code **)(*plVar4 + 0xc0))(plVar4,puVar16);
          if (cVar2 != '\0') goto LAB_142f13f4c;
        }
        if ((*(char *)(param_1 + 0xac) != '\0') || (*(char *)(param_1 + 0xc1) != '\0')) {
          FUN_142ee91e0(param_1 + 0x60,0);
          *(undefined1 *)(param_1 + 0xc0) = 0;
          goto LAB_142f143aa;
        }
      }
      else {
        iVar14 = *(int *)(param_1 + 0x78);
        *(int *)(param_1 + 0x78) = iVar14 + 1;
        if (*(int *)(param_1 + 0x7c) < iVar14 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x70),iVar14);
        }
        puVar11 = (undefined8 *)((longlong)iVar14 * 0x30 + *(longlong *)(param_1 + 0x70));
        *puVar11 = *puVar16;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar16 + 1);
        *(undefined1 *)((longlong)puVar11 + 0xc) = *(undefined1 *)((longlong)puVar16 + 0xc);
        puVar11[2] = puVar16[2];
        puVar11[3] = puVar16[3];
        lVar7 = puVar16[4];
        puVar11[4] = lVar7;
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
          UNLOCK();
        }
        *(undefined1 *)(puVar11 + 5) = *(undefined1 *)(puVar16 + 5);
      }
    }
    piVar15 = *(int **)(param_1 + 0x80);
    piVar1 = piVar15 + (longlong)*(int *)(param_1 + 0x88) * 10;
    for (; piVar15 != piVar1; piVar15 = piVar15 + 10) {
      if ((*piVar15 == -1) && (cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x30), cVar2 != '\0')) {
        uVar6 = FWeakObjectPtr::Get(param_1 + 0x30);
        lVar7 = FUN_14270bb10(uVar6);
        if (lVar7 != 0) {
          uVar6 = FWeakObjectPtr::Get(param_1 + 0x30);
          FUN_14270bb10(uVar6);
        }
      }
      plVar4 = (longlong *)0x0;
      plVar12 = plVar4;
      if (*(longlong *)(lVar5 + 0x28) != 0) {
        plVar12 = *(longlong **)(lVar5 + 0x30);
      }
      cVar2 = (**(code **)(*plVar12 + 200))(plVar12,piVar15);
      if (cVar2 != '\0') {
        if (*(longlong *)(lVar5 + 0x28) != 0) {
          plVar4 = *(longlong **)(lVar5 + 0x30);
        }
        (**(code **)(*plVar4 + 0xd0))(plVar4,piVar15);
      }
      if ((*(char *)(param_1 + 0xac) != '\0') || (*(char *)(param_1 + 0xc1) != '\0')) {
        FUN_142ee9130(param_1 + 0x80,0);
        *(undefined1 *)(param_1 + 0xc0) = 0;
        goto LAB_142f143aa;
      }
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x70);
  lVar7 = (longlong)*(int *)(param_1 + 0x78) * 0x30 + lVar5;
  for (; lVar5 != lVar7; lVar5 = lVar5 + 0x30) {
    if ((local_b0 == 0) ||
       (lVar8 = UGameInstance::FindLocalPlayerFromControllerId(local_b0,*(undefined4 *)(lVar5 + 8)),
       lVar8 != 0)) {
      bVar20 = false;
    }
    else {
      bVar20 = true;
    }
    local_res8[0] = '\0';
    cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x38);
    if ((((cVar2 != '\0') && (bVar20)) && (0 < *(int *)(param_1 + 0x48))) &&
       (((lVar8 = *(longlong *)
                   (*(longlong *)(param_1 + 0x40) + -8 + (longlong)*(int *)(param_1 + 0x48) * 8),
         lVar8 != 0 && (*(longlong *)(lVar8 + 0x28) != 0)) &&
        ((*(longlong *)(lVar8 + 0x30) != 0 &&
         (cVar2 = (**(code **)(**(longlong **)(lVar8 + 0x30) + 0x140))
                            (*(longlong **)(lVar8 + 0x30),lVar5,local_res8), cVar2 != '\0')))))) {
      if (local_res8[0] == '\0') {
        lVar8 = FWeakObjectPtr::Get(param_1 + 0x38);
        local_a8 = 0;
        if ((*(longlong *)(lVar8 + 0x30) == 0) ||
           (lVar9 = FWeakObjectPtr::Get(lVar8 + 0x28), lVar9 == 0)) {
          bVar20 = false;
        }
        else {
          lVar9 = UObject::FindFunction(lVar9,*(undefined8 *)(lVar8 + 0x30));
          bVar20 = lVar9 != 0;
        }
        if (bVar20) {
          FName::FName(local_a0,&DAT_143f3eda8,1);
          local_98 = 0xffffffff;
          local_94 = 0;
          FName::FName(local_90,&DAT_143f3eda8,1);
          local_78 = 0;
          local_88 = 0;
          plStack_80 = (longlong *)0x0;
          FUN_140ed08a0(local_a0,lVar5);
          plVar4 = (longlong *)FWeakObjectPtr::Get(lVar8 + 0x28);
          uVar6 = FUN_14178ac60(plVar4,*(undefined8 *)(lVar8 + 0x30));
          (**(code **)(*plVar4 + 0x208))(plVar4,uVar6,local_a0);
          plVar4 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            plVar12 = plStack_80 + 1;
            lVar8 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plStack_80)(plStack_80);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              iVar14 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar14 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
        }
      }
      else if ((((0 < *(int *)(param_1 + 0x48)) &&
                (lVar8 = *(longlong *)
                          (*(longlong *)(param_1 + 0x40) + -8 +
                          (longlong)*(int *)(param_1 + 0x48) * 8), lVar8 != 0)) &&
               (*(longlong *)(lVar8 + 0x28) != 0)) && (*(longlong *)(lVar8 + 0x30) != 0)) {
        (**(code **)(**(longlong **)(lVar8 + 0x30) + 0xc0))(*(longlong **)(lVar8 + 0x30),lVar5);
      }
    }
  }
  FUN_142ee91e0(param_1 + 0x70,0);
  *(undefined1 *)(param_1 + 0xc0) = 0;
  FUN_142ee91e0(param_1 + 0x60,0);
  FUN_142ee9130(param_1 + 0x80,0);
  FUN_142ee8c40(param_1);
  FUN_142f14400(param_1,param_2);
LAB_142f143aa:
  *(undefined1 *)(param_1 + 0xad) = 0;
  return;
}



// FUNCTION 142f14400 FUN_142f14400 body=1084 status=ok
// SIG undefined FUN_142f14400(void)

void FUN_142f14400(longlong param_1,float param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  longlong *plVar13;
  longlong local_28 [4];
  
  if (*(int *)(param_1 + 0x160) < 1) {
    return;
  }
  if (*(char *)(param_1 + 0x178) != '\0') {
    *(float *)(param_1 + 0x17c) = param_2 + *(float *)(param_1 + 0x17c);
  }
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x30);
  if (cVar3 == '\0') {
    return;
  }
  uVar5 = FWeakObjectPtr::Get(param_1 + 0x30);
  lVar6 = UWidgetComponent::GetRenderTarget(uVar5);
  if (lVar6 == 0) {
    return;
  }
  lVar7 = FUN_142f27b90();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  if (*(longlong *)(lVar6 + 0x5e8) == 0) {
    return;
  }
  if (*(char *)(*(longlong *)(lVar6 + 0x5e8) + 0x4d8) != '\x03') {
    FString::PrintfImpl(local_28,L"HUD INIT Running");
    AK::MemoryMgr::StartProfileThreadUsage((long)DAT_146b17150);
    if (local_28[0] == 0) {
      return;
    }
    FMemory::Free();
    return;
  }
  if (0.0 < *(float *)(param_1 + 0x174)) {
    *(float *)(param_1 + 0x174) = *(float *)(param_1 + 0x174) - param_2;
    return;
  }
  plVar13 = (longlong *)0x0;
  if (*(char *)(param_1 + 0x170) == '\0') {
    cVar3 = (*(code *)PTR_CanBeUsedOnAnyThread_1464aaa50)();
    if (cVar3 == '\0') {
      puVar1 = (undefined8 *)(param_1 + 0x158);
      lVar6 = *(longlong *)*puVar1;
      cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x30);
      if ((cVar3 != '\0') && (*(longlong *)(param_1 + 0x180) != 0)) {
        puVar8 = (undefined8 *)FUN_142eee1c0(param_1);
        if (0 < *(int *)(puVar8 + 1)) {
          plVar9 = (longlong *)*puVar8;
          plVar10 = plVar13;
          do {
            if (*plVar9 != 0) {
              lVar7 = *(longlong *)(*plVar9 + 0x38);
              if ((lVar7 == 0) || (lVar7 != lVar6)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                iVar4 = *(int *)(param_1 + 0x160);
                if (iVar4 + -1 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)*puVar1,(void *)((longlong)*puVar1 + 8),
                             (longlong)(iVar4 + -1) << 3);
                  iVar4 = *(int *)(param_1 + 0x160);
                }
                *(int *)(param_1 + 0x160) = iVar4 + -1;
                goto LAB_142f14812;
              }
            }
            uVar12 = (int)plVar10 + 1;
            plVar10 = (longlong *)(ulonglong)uVar12;
            plVar9 = plVar9 + 1;
          } while ((int)uVar12 < *(int *)(puVar8 + 1));
        }
      }
      *(undefined1 *)(param_1 + 0x170) = 1;
      plVar9 = (longlong *)FUN_142ee7390(param_1,*(undefined8 *)*puVar1,0);
      if (((plVar9 != (longlong *)0x0) && (lVar6 = plVar9[5], lVar6 != 0)) &&
         (plVar10 = (longlong *)plVar9[6], plVar10 != (longlong *)0x0)) {
        if ((lVar6 != 0) && (plVar10 != (longlong *)0x0)) {
          if (lVar6 == 0) {
            plVar10 = plVar13;
          }
          (**(code **)(*plVar10 + 0x28))();
          plVar10 = plVar13;
          if (plVar9[5] != 0) {
            plVar10 = (longlong *)plVar9[6];
          }
          (**(code **)(*plVar10 + 0x30))();
          plVar10 = plVar13;
          if (plVar9[5] != 0) {
            plVar10 = (longlong *)plVar9[6];
          }
          (**(code **)(*plVar10 + 0x38))();
        }
        *(longlong **)(param_1 + 0x168) = plVar9;
        lVar6 = (**(code **)(*plVar9 + 0x278))(plVar9);
        if (lVar6 != 0) {
          lVar7 = UInputKeySelector::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            iVar4 = *(int *)(lVar6 + 0xc);
            plVar9 = plVar13;
            if (iVar4 < (int)DAT_1469e91c4) {
              uVar11 = iVar4 >> 0x1f & 0xffff;
              uVar12 = iVar4 + uVar11;
              plVar9 = (longlong *)
                       (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar12 >> 0x10) * 8) +
                       (longlong)(int)((uVar12 & 0xffff) - uVar11) * 0x18);
            }
            *(uint *)(plVar9 + 1) = *(uint *)(plVar9 + 1) | 0x40000000;
          }
        }
      }
    }
    if (*(char *)(param_1 + 0x170) == '\0') {
      return;
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x168);
  if (lVar6 == 0) {
    return;
  }
  if ((*(longlong *)(lVar6 + 0x28) == 0) || (*(longlong **)(lVar6 + 0x30) == (longlong *)0x0))
  goto LAB_142f147cb;
  plVar9 = *(longlong **)(lVar6 + 0x30);
  if (*(longlong *)(lVar6 + 0x28) == 0) {
    plVar9 = plVar13;
  }
  (**(code **)(*plVar9 + 0x70))(plVar9,param_2);
  plVar9 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x168) + 0x278))();
  if (plVar9 == (longlong *)0x0) {
LAB_142f147a5:
    plVar9 = plVar13;
  }
  else {
    lVar6 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_142f147a5;
  }
  cVar3 = (**(code **)(plVar9[0x9b] + 0x168))();
  if (cVar3 == '\0') {
    return;
  }
  FUN_142ee86c0(param_1,*(undefined8 *)(param_1 + 0x168));
LAB_142f147cb:
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined1 *)(param_1 + 0x170) = 0;
  iVar4 = *(int *)(param_1 + 0x160);
  if (iVar4 + -1 != 0) {
    _guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0x158),(void *)((longlong)*(void **)(param_1 + 0x158) + 8),
               (longlong)(iVar4 + -1) << 3);
    iVar4 = *(int *)(param_1 + 0x160);
  }
  *(int *)(param_1 + 0x160) = iVar4 + -1;
LAB_142f14812:
  TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x158);
  return;
}



// FUNCTION 142f14840 FUN_142f14840 body=100 status=ok
// SIG undefined FUN_142f14840(void)

void FUN_142f14840(longlong *param_1,undefined1 param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x90))();
  if ((cVar1 != '\0') && (cVar1 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x24), cVar1 != '\0'))
  {
    lVar2 = FWeakObjectPtr::Get((longlong)param_1 + 0x24);
    if (*(longlong *)(lVar2 + 0x2d8) != 0) {
      FUN_142f0d400(*(longlong *)(lVar2 + 0x2d8),param_1 + -0x29,param_2);
    }
  }
  return;
}



// FUNCTION 142f148b0 FUN_142f148b0 body=100 status=ok
// SIG undefined FUN_142f148b0(void)

void FUN_142f148b0(longlong *param_1,undefined1 param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x90))();
  if ((cVar1 != '\0') && (cVar1 = FWeakObjectPtr::IsValid(param_1 + 4), cVar1 != '\0')) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 4);
    if (*(longlong *)(lVar2 + 0x2d8) != 0) {
      FUN_142f0d400(*(longlong *)(lVar2 + 0x2d8),param_1 + -0x10c,param_2);
    }
  }
  return;
}


