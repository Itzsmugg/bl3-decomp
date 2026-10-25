// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14302d8f0 FUN_14302d8f0 body=194 status=ok
// SIG undefined FUN_14302d8f0(void)

void FUN_14302d8f0(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_143015470(param_1,local_res20,local_res10[0] != 0);
  return;
}



// FUNCTION 14302d9c0 FUN_14302d9c0 body=143 status=ok
// SIG undefined FUN_14302d9c0(void)

void FUN_14302d9c0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  puVar1 = &local_res10;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_143017e10(param_1,puVar1);
  return;
}



// FUNCTION 14302da50 FUN_14302da50 body=143 status=ok
// SIG undefined FUN_14302da50(void)

void FUN_14302da50(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  puVar1 = &local_res10;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1430180e0(param_1,puVar1);
  return;
}



// FUNCTION 14302dae0 FUN_14302dae0 body=653 status=ok
// SIG undefined FUN_14302dae0(void)

void FUN_14302dae0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28 [2];
  
  local_88 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_28[0] = 0;
  local_28[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_38 = 0;
  local_30 = 0;
  plVar1 = local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_res20[0] = 0;
  plVar2 = &local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_70);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_80);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_58 = local_80;
  local_50 = local_78;
  local_40 = local_68;
  local_48 = local_70;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_143018ca0(local_88,plVar1,plVar2,local_res20[0],&local_48,&local_58,local_res10[0]);
  if ((int)local_30 != 0) {
    plVar1 = (longlong *)(local_38 + 0x78);
    iVar3 = (int)local_30;
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0x11;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14302dd70 FUN_14302dd70 body=583 status=ok
// SIG undefined FUN_14302dd70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14302dd70(void)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 local_res10 [24];
  longlong *local_18;
  longlong *local_10;
  
  if (DAT_146855f80 != (longlong *)0x0) {
    (**(code **)(*DAT_146855f80 + 0xb0))(DAT_146855f80,&PTR_PTR_14678b6a0);
    (**(code **)(*DAT_146855f80 + 0x128))(DAT_146855f80,0,&PTR_PTR_14678b6b0,&PTR_PTR_14678b6c0);
    plVar4 = (longlong *)0x0;
    DAT_14678b6bc = 1;
    DAT_14678b6cc = 0;
    _DAT_146b46ff0 = 0;
    DAT_146b46ff4 = 1;
    _DAT_146b46ffc = 0;
    _DAT_146b46ff8 = 0x101;
    plVar3 = (longlong *)operator_new(8);
    plVar7 = plVar4;
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_145a55f68;
      plVar7 = plVar3;
    }
    local_18 = plVar7;
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *(undefined4 *)(plVar3 + 1) = 1;
      *plVar3 = (longlong)&PTR_FUN_144146c40;
      *(undefined4 *)((longlong)plVar3 + 0xc) = 1;
      plVar3[2] = (longlong)plVar7;
      plVar4 = plVar3;
    }
    local_10 = plVar4;
    SharedPointerInternals::EnableSharedFromThis(&local_18,plVar7,plVar7);
    DAT_146b08788 = local_18;
    local_18 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&DAT_146b08790,&local_10);
    plVar4 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_10 + 1;
      lVar5 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_10)(local_10);
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
    (**(code **)(*DAT_146855f80 + 0x130))(DAT_146855f80,0);
    (**(code **)(*DAT_146855f80 + 0x120))(DAT_146855f80,DAT_14678b5f0);
    (**(code **)(*DAT_146855f80 + 0x118))(DAT_146855f80,DAT_14678b5f4);
    plVar4 = (longlong *)FMemory::Realloc(0,0x20);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_GetPoolName_143f4c9a8;
      plVar4[1] = (longlong)FUN_143034060;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[3] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_143f4c9f0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146535868,1);
      (**(code **)(*plVar4 + 0x20))(plVar4,local_res10);
      iVar2 = DAT_146535870;
      lVar5 = (longlong)DAT_146535870;
      DAT_146535870 = DAT_146535870 + 1;
      if (DAT_146535874 < DAT_146535870) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146535868,iVar2);
      }
      puVar6 = (undefined8 *)(lVar5 * 0x10 + DAT_146535868);
      *puVar6 = plVar4;
      *(undefined4 *)(puVar6 + 1) = 2;
    }
  }
  plVar4 = (longlong *)_guard_xfg_dispatch_icall_nop();
  if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014302dfab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x1d8))(plVar4,0);
    return;
  }
  return;
}



// FUNCTION 14302dfc0 FUN_14302dfc0 body=133 status=ok
// SIG undefined FUN_14302dfc0(void)

void FUN_14302dfc0(undefined8 param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if (((0 < DAT_146b47120) && (lVar2 = *(longlong *)(DAT_146b47118 + 8), lVar2 != 0)) &&
     (*(char *)(lVar2 + 0x458) != '\0')) {
    puVar3 = (undefined8 *)(lVar2 + 0x460);
    iVar1 = *(int *)(lVar2 + 0x468);
    *(undefined4 *)(lVar2 + 0x468) = 0;
    if (*(int *)(lVar2 + 0x46c) != iVar1) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(puVar3);
    }
    if ((0 < param_3) &&
       (param_3 = *(int *)(lVar2 + 0x468) + param_3, *(int *)(lVar2 + 0x468) = param_3,
       *(int *)(lVar2 + 0x46c) < param_3)) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(puVar3);
    }
    *param_2 = *puVar3;
  }
  return;
}



// FUNCTION 14302e050 FUN_14302e050 body=806 status=ok
// SIG undefined FUN_14302e050(void)

void FUN_14302e050(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  int *piVar17;
  undefined8 *puVar18;
  ulonglong uVar16;
  
  if (((0 < DAT_146b47120) && (lVar2 = *(longlong *)(DAT_146b47118 + 8), lVar2 != 0)) &&
     (param_2 != 0)) {
    for (piVar3 = *(int **)(lVar2 + 0x460); piVar3 != (int *)0x0; piVar3 = *(int **)(piVar3 + 4)) {
      uVar16 = 0;
      if (*(int *)(lVar2 + 0x488) != *(int *)(lVar2 + 0x4b4)) {
        lVar11 = *(longlong *)(lVar2 + 0x4c0);
        if (*(longlong *)(lVar2 + 0x4c0) == 0) {
          lVar11 = lVar2 + 0x4b8;
        }
        iVar14 = *(int *)(lVar11 + ((longlong)*(int *)(lVar2 + 0x4c8) - 1U & (longlong)*piVar3) * 4)
        ;
        if (iVar14 != -1) {
          do {
            uVar10 = *(longlong *)(lVar2 + 0x480) + (longlong)iVar14 * 0x14;
            if (*(int *)(*(longlong *)(lVar2 + 0x480) + (longlong)iVar14 * 0x14) == *piVar3) {
              if (iVar14 != -1) goto LAB_14302e133;
              break;
            }
            iVar14 = *(int *)(uVar10 + 0xc);
          } while (iVar14 != -1);
        }
      }
      uVar10 = uVar16;
LAB_14302e133:
      uVar13 = uVar10 + 4;
      if (uVar10 == 0) {
        uVar13 = uVar16;
      }
      if ((uVar13 != 0) && (cVar6 = FWeakObjectPtr::IsValid(uVar13), cVar6 != '\0')) {
        plVar9 = (longlong *)FWeakObjectPtr::Get(uVar13);
        if ((*(byte *)((longlong)plVar9 + 0x92) & 0x40) != 0) {
          (**(code **)(*plVar9 + 0x600))(plVar9);
        }
        plVar1 = plVar9 + 0x91;
        iVar14 = 0;
        if (*(char *)(param_1 + 0xc) == '\0') {
          iVar8 = (int)plVar9[0x92];
        }
        else {
          iVar14 = (int)plVar9[0x92];
          iVar8 = iVar14;
        }
        iVar7 = piVar3[1] * 0x2c + 0x18;
        if (*(char *)(param_1 + 0xc) == '\0') {
          *(undefined4 *)(plVar9 + 0x92) = 0;
          if (*(int *)((longlong)plVar9 + 0x494) != iVar7) {
LAB_14302e1b8:
            TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar1,iVar7);
          }
        }
        else {
          iVar7 = iVar8 + iVar7;
          if (*(int *)((longlong)plVar9 + 0x494) < iVar7) goto LAB_14302e1b8;
        }
        iVar8 = (int)plVar9[0x92] + 0x18;
        *(int *)(plVar9 + 0x92) = iVar8;
        if (*(int *)((longlong)plVar9 + 0x494) < iVar8) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1);
        }
        iVar8 = piVar3[1];
        iVar7 = piVar3[2];
        iVar4 = piVar3[3];
        piVar17 = (int *)((longlong)iVar14 + *plVar1);
        iVar14 = iVar14 + 0x18;
        *piVar17 = *piVar3;
        piVar17[1] = iVar8;
        piVar17[2] = iVar7;
        piVar17[3] = iVar4;
        *(undefined8 *)(piVar17 + 4) = *(undefined8 *)(piVar3 + 4);
        uVar10 = uVar16;
        if (piVar3[1] != 0) {
          do {
            puVar18 = (undefined8 *)(uVar16 * 0x2c + *(longlong *)(piVar3 + 2));
            cVar6 = (**(code **)(**(longlong **)(plVar9[0x9b] + 0xa78) + 0x228))
                              (*(longlong **)(plVar9[0x9b] + 0xa78),*(undefined4 *)puVar18);
            if ((*(char *)(plVar9[0x9b] + 0xb68) == '\0') || (cVar6 == '\0')) {
              iVar8 = (int)plVar9[0x92] + 0x2c;
              *(int *)(plVar9 + 0x92) = iVar8;
              if (*(int *)((longlong)plVar9 + 0x494) < iVar8) {
                TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1);
              }
              uVar5 = puVar18[1];
              lVar11 = (longlong)iVar14;
              iVar14 = iVar14 + 0x2c;
              puVar12 = (undefined8 *)(lVar11 + *plVar1);
              uVar10 = (ulonglong)((int)uVar10 + 1);
              *puVar12 = *puVar18;
              puVar12[1] = uVar5;
              uVar5 = puVar18[3];
              puVar12[2] = puVar18[2];
              puVar12[3] = uVar5;
              puVar12[4] = puVar18[4];
              *(undefined4 *)(puVar12 + 5) = *(undefined4 *)(puVar18 + 5);
            }
            uVar15 = (int)uVar16 + 1;
            uVar16 = (ulonglong)uVar15;
          } while (uVar15 < (uint)piVar3[1]);
          if ((int)uVar10 != 0) {
            piVar17[1] = (int)uVar10;
            *(undefined1 *)((longlong)plVar9 + 0x4e4) = 1;
            *(int *)((longlong)plVar9 + 0x47c) = *(int *)((longlong)plVar9 + 0x47c) + 1;
            lVar11 = (**(code **)(*plVar9 + 0x148))(plVar9);
            if (lVar11 == 0) {
              *(undefined4 *)(plVar9 + 0x90) = 0;
            }
            else {
              lVar11 = (**(code **)(*plVar9 + 0x148))(plVar9);
              *(undefined4 *)(plVar9 + 0x90) = *(undefined4 *)(lVar11 + 0x790);
            }
            goto LAB_14302e33a;
          }
        }
        iVar8 = (int)plVar9[0x92];
        iVar7 = (iVar8 - (iVar14 + -0x18)) + -0x18;
        if (0x17 < iVar7) {
          iVar7 = 0x18;
        }
        if (iVar7 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)(iVar14 + -0x18) + *plVar1),
                     (void *)((longlong)(iVar8 - iVar7) + *plVar1),(longlong)iVar7);
          iVar8 = (int)plVar9[0x92];
        }
        *(int *)(plVar9 + 0x92) = iVar8 + -0x18;
        TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(plVar1);
      }
LAB_14302e33a:
    }
  }
  return;
}



// FUNCTION 14302e380 FUN_14302e380 body=487 status=ok
// SIG undefined FUN_14302e380(void)

void FUN_14302e380(undefined8 param_1,longlong *param_2,int *param_3,char *param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  if ((((DAT_146b47120 < 1) || (lVar1 = *(longlong *)(DAT_146b47118 + 8), lVar1 == 0)) ||
      (*(char *)(lVar1 + 0x458) != '\0')) || (*(int *)(lVar1 + 0x4d8) == 0)) {
    *param_2 = 0;
    *param_3 = 0;
  }
  else {
    iVar3 = *(int *)(lVar1 + 0x4f0);
    if (iVar3 < *(int *)(lVar1 + 0x4d8)) {
      do {
        cVar2 = FWeakObjectPtr::IsValid(*(longlong *)(lVar1 + 0x4d0) + (longlong)iVar3 * 8);
        if (cVar2 != '\0') break;
        iVar3 = *(int *)(lVar1 + 0x4f0) + 1;
        *(int *)(lVar1 + 0x4f0) = iVar3;
      } while (iVar3 < *(int *)(lVar1 + 0x4d8));
    }
    iVar3 = *(int *)(lVar1 + 0x4f0);
    *param_4 = '\0';
    do {
      iVar6 = *(int *)(lVar1 + 0x4d8);
      iVar3 = iVar3 + 1;
      if (iVar6 <= iVar3) goto LAB_14302e467;
      cVar2 = FWeakObjectPtr::IsValid(*(longlong *)(lVar1 + 0x4d0) + (longlong)iVar3 * 8);
    } while (cVar2 == '\0');
    iVar6 = *(int *)(lVar1 + 0x4d8);
    if (iVar3 < iVar6) {
      *param_4 = '\x01';
      iVar6 = *(int *)(lVar1 + 0x4d8);
    }
LAB_14302e467:
    if (*(int *)(lVar1 + 0x4f0) < iVar6) {
      lVar4 = FWeakObjectPtr::Get(*(longlong *)(lVar1 + 0x4d0) +
                                  (longlong)*(int *)(lVar1 + 0x4f0) * 8);
      iVar3 = 0;
      lVar5 = 0;
      if (DAT_14678b6bc == '\0') {
        *(undefined4 *)(lVar4 + 0x4e0) = 0;
      }
      *param_2 = (longlong)*(int *)(lVar4 + 0x4e0) + *(longlong *)(lVar4 + 0x488);
      *param_3 = *(int *)(lVar4 + 0x490) - *(int *)(lVar4 + 0x4e0);
      *(undefined1 *)(lVar4 + 0x4e4) = 0;
      *(longlong *)(*param_2 + 8) = *param_2 + 0x18;
      *(undefined8 *)(*param_2 + 0x10) = 0;
      iVar6 = *(int *)(lVar1 + 0x4f0);
      do {
        iVar6 = iVar6 + -1;
        if (iVar6 < 0) {
          if (lVar5 == 0) goto LAB_14302e527;
          break;
        }
        lVar5 = FWeakObjectPtr::Get(*(longlong *)(lVar1 + 0x4d0) + (longlong)iVar6 * 8);
      } while (lVar5 == 0);
      if (DAT_14678b6bc == '\0') {
        *(undefined4 *)(lVar5 + 0x4e0) = 0;
      }
      else {
        iVar3 = *(int *)(lVar5 + 0x4e0);
      }
      *(longlong *)((longlong)iVar3 + 0x10 + *(longlong *)(lVar5 + 0x488)) = *param_2;
LAB_14302e527:
      *(int *)(lVar1 + 0x4f0) = *(int *)(lVar1 + 0x4f0) + 1;
    }
    else {
      *param_2 = 0;
      *param_3 = 0;
    }
    if (*param_4 == '\0') {
      *(undefined4 *)(lVar1 + 0x4f0) = 0;
    }
  }
  return;
}



// FUNCTION 14302e570 FUN_14302e570 body=177 status=ok
// SIG undefined FUN_14302e570(void)

void FUN_14302e570(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if ((0 < DAT_146b47120) && (lVar1 = *(longlong *)(DAT_146b47118 + 8), lVar1 != 0)) {
    iVar3 = 0;
    if (*(int *)(lVar1 + 0x4d8) != 0) {
      do {
        lVar2 = FWeakObjectPtr::Get(*(longlong *)(lVar1 + 0x4d0) + (longlong)iVar3 * 8);
        if (lVar2 != 0) {
          if (DAT_14678b6bc == '\0') {
            *(undefined4 *)(lVar2 + 0x4e0) = 0;
            *param_2 = *(longlong *)(lVar2 + 0x488);
            return;
          }
          *param_2 = (longlong)*(int *)(lVar2 + 0x4e0) + *(longlong *)(lVar2 + 0x488);
          return;
        }
        iVar3 = iVar3 + 1;
      } while (*(int *)(lVar1 + 0x4d8) != iVar3);
    }
    *param_2 = 0;
  }
  return;
}



// FUNCTION 14302e630 FUN_14302e630 body=235 status=ok
// SIG undefined FUN_14302e630(void)

void FUN_14302e630(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined4 local_res18;
  undefined4 local_res1c;
  
  if ((0 < DAT_146b47120) && (lVar3 = *(longlong *)(DAT_146b47118 + 8), lVar3 != 0)) {
    if (*(char *)(param_1 + 0xc) != '\0') {
      puVar7 = *(undefined4 **)(lVar3 + 0x4d0);
      puVar1 = puVar7 + (longlong)*(int *)(lVar3 + 0x4d8) * 2;
      for (; puVar7 != puVar1; puVar7 = puVar7 + 2) {
        local_res18 = *puVar7;
        local_res1c = puVar7[1];
        cVar4 = FWeakObjectPtr::IsValid(&local_res18);
        if (cVar4 != '\0') {
          lVar5 = FWeakObjectPtr::Get(&local_res18);
          if (DAT_14678b6bc == '\0') {
            *(undefined4 *)(lVar5 + 0x4e0) = 0;
          }
          lVar6 = FWeakObjectPtr::Get(&local_res18);
          *(undefined4 *)(lVar5 + 0x4e0) = *(undefined4 *)(lVar6 + 0x490);
        }
      }
    }
    iVar2 = *(int *)(lVar3 + 0x4d8);
    *(undefined4 *)(lVar3 + 0x4d8) = 0;
    if (*(int *)(lVar3 + 0x4dc) != iVar2) {
      TArray<void_*,FDefaultAllocator>::ResizeTo((undefined8 *)(lVar3 + 0x4d0));
    }
  }
  return;
}



// FUNCTION 14302e720 FUN_14302e720 body=43 status=ok
// SIG undefined FUN_14302e720(void)

undefined8 * FUN_14302e720(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_144147258;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14302e750 FUN_14302e750 body=133 status=ok
// SIG undefined FUN_14302e750(void)

void FUN_14302e750(undefined8 param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if (((0 < DAT_146b47120) && (lVar2 = *(longlong *)(DAT_146b47118 + 8), lVar2 != 0)) &&
     (*(char *)(lVar2 + 0x458) != '\0')) {
    puVar3 = (undefined8 *)(lVar2 + 0x470);
    iVar1 = *(int *)(lVar2 + 0x478);
    *(undefined4 *)(lVar2 + 0x478) = 0;
    if (*(int *)(lVar2 + 0x47c) != iVar1) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(puVar3);
    }
    if ((0 < param_3) &&
       (param_3 = *(int *)(lVar2 + 0x478) + param_3, *(int *)(lVar2 + 0x478) = param_3,
       *(int *)(lVar2 + 0x47c) < param_3)) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(puVar3);
    }
    *param_2 = *puVar3;
  }
  return;
}



// FUNCTION 14302e7e0 FUN_14302e7e0 body=785 status=ok
// SIG undefined FUN_14302e7e0(void)

void FUN_14302e7e0(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  int *piVar20;
  undefined4 *puVar21;
  ulonglong uVar19;
  
  if (((0 < DAT_146b47120) && (lVar2 = *(longlong *)(DAT_146b47118 + 8), lVar2 != 0)) &&
     (param_2 != 0)) {
    for (piVar3 = *(int **)(lVar2 + 0x470); piVar3 != (int *)0x0; piVar3 = *(int **)(piVar3 + 4)) {
      uVar19 = 0;
      if (*(int *)(lVar2 + 0x488) != *(int *)(lVar2 + 0x4b4)) {
        lVar13 = *(longlong *)(lVar2 + 0x4c0);
        if (*(longlong *)(lVar2 + 0x4c0) == 0) {
          lVar13 = lVar2 + 0x4b8;
        }
        iVar17 = *(int *)(lVar13 + ((longlong)*(int *)(lVar2 + 0x4c8) - 1U & (longlong)*piVar3) * 4)
        ;
        if (iVar17 != -1) {
          do {
            uVar15 = *(longlong *)(lVar2 + 0x480) + (longlong)iVar17 * 0x14;
            if (*(int *)(*(longlong *)(lVar2 + 0x480) + (longlong)iVar17 * 0x14) == *piVar3) {
              if (iVar17 != -1) goto LAB_14302e8c3;
              break;
            }
            iVar17 = *(int *)(uVar15 + 0xc);
          } while (iVar17 != -1);
        }
      }
      uVar15 = uVar19;
LAB_14302e8c3:
      uVar16 = uVar15 + 4;
      if (uVar15 == 0) {
        uVar16 = uVar19;
      }
      if ((uVar16 != 0) && (cVar9 = FWeakObjectPtr::IsValid(uVar16), cVar9 != '\0')) {
        plVar12 = (longlong *)FWeakObjectPtr::Get(uVar16);
        if ((*(byte *)((longlong)plVar12 + 0x92) & 0x40) != 0) {
          (**(code **)(*plVar12 + 0x600))(plVar12);
        }
        plVar1 = plVar12 + 0x95;
        iVar17 = 0;
        if (*(char *)(param_1 + 0xc) == '\0') {
          iVar11 = (int)plVar12[0x96];
        }
        else {
          iVar17 = (int)plVar12[0x96];
          iVar11 = iVar17;
        }
        iVar10 = piVar3[1] * 0x20 + 0x18;
        if (*(char *)(param_1 + 0xc) == '\0') {
          *(undefined4 *)(plVar12 + 0x96) = 0;
          if (*(int *)((longlong)plVar12 + 0x4b4) != iVar10) {
LAB_14302e94a:
            TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar1,iVar10);
          }
        }
        else {
          iVar10 = iVar11 + iVar10;
          if (*(int *)((longlong)plVar12 + 0x4b4) < iVar10) goto LAB_14302e94a;
        }
        iVar11 = (int)plVar12[0x96] + 0x18;
        *(int *)(plVar12 + 0x96) = iVar11;
        if (*(int *)((longlong)plVar12 + 0x4b4) < iVar11) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1);
        }
        iVar11 = piVar3[1];
        iVar10 = piVar3[2];
        iVar4 = piVar3[3];
        piVar20 = (int *)((longlong)iVar17 + *plVar1);
        iVar17 = iVar17 + 0x18;
        *piVar20 = *piVar3;
        piVar20[1] = iVar11;
        piVar20[2] = iVar10;
        piVar20[3] = iVar4;
        *(undefined8 *)(piVar20 + 4) = *(undefined8 *)(piVar3 + 4);
        uVar15 = uVar19;
        if (piVar3[1] != 0) {
          do {
            puVar21 = (undefined4 *)(uVar19 * 0x20 + *(longlong *)(piVar3 + 2));
            cVar9 = (**(code **)(**(longlong **)(plVar12[0x9b] + 0xa78) + 0x228))
                              (*(longlong **)(plVar12[0x9b] + 0xa78),*puVar21);
            if ((*(char *)(plVar12[0x9b] + 0xb68) == '\0') || (cVar9 == '\0')) {
              iVar11 = (int)plVar12[0x96] + 0x20;
              *(int *)(plVar12 + 0x96) = iVar11;
              if (*(int *)((longlong)plVar12 + 0x4b4) < iVar11) {
                TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1);
              }
              uVar5 = puVar21[1];
              uVar6 = puVar21[2];
              uVar7 = puVar21[3];
              lVar13 = (longlong)iVar17;
              iVar17 = iVar17 + 0x20;
              puVar14 = (undefined4 *)(lVar13 + *plVar1);
              uVar15 = (ulonglong)((int)uVar15 + 1);
              *puVar14 = *puVar21;
              puVar14[1] = uVar5;
              puVar14[2] = uVar6;
              puVar14[3] = uVar7;
              uVar8 = *(undefined8 *)(puVar21 + 6);
              *(undefined8 *)(puVar14 + 4) = *(undefined8 *)(puVar21 + 4);
              *(undefined8 *)(puVar14 + 6) = uVar8;
            }
            uVar18 = (int)uVar19 + 1;
            uVar19 = (ulonglong)uVar18;
          } while (uVar18 < (uint)piVar3[1]);
          if ((int)uVar15 != 0) {
            piVar20[1] = (int)uVar15;
            *(undefined1 *)((longlong)plVar12 + 0x4ec) = 1;
            *(int *)((longlong)plVar12 + 0x49c) = *(int *)((longlong)plVar12 + 0x49c) + 1;
            lVar13 = (**(code **)(*plVar12 + 0x148))(plVar12);
            if (lVar13 == 0) {
              *(undefined4 *)(plVar12 + 0x90) = 0;
            }
            else {
              lVar13 = (**(code **)(*plVar12 + 0x148))(plVar12);
              *(undefined4 *)(plVar12 + 0x90) = *(undefined4 *)(lVar13 + 0x790);
            }
            goto LAB_14302eab5;
          }
        }
        iVar11 = (int)plVar12[0x96];
        iVar10 = (iVar11 - (iVar17 + -0x18)) + -0x18;
        if (0x17 < iVar10) {
          iVar10 = 0x18;
        }
        if (iVar10 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)(iVar17 + -0x18) + *plVar1),
                     (void *)((longlong)(iVar11 - iVar10) + *plVar1),(longlong)iVar10);
          iVar11 = (int)plVar12[0x96];
        }
        *(int *)(plVar12 + 0x96) = iVar11 + -0x18;
        TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(plVar1);
      }
LAB_14302eab5:
    }
  }
  return;
}



// FUNCTION 14302eb00 FUN_14302eb00 body=487 status=ok
// SIG undefined FUN_14302eb00(void)

void FUN_14302eb00(undefined8 param_1,longlong *param_2,int *param_3,char *param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  if ((((DAT_146b47120 < 1) || (lVar1 = *(longlong *)(DAT_146b47118 + 8), lVar1 == 0)) ||
      (*(char *)(lVar1 + 0x458) != '\0')) || (*(int *)(lVar1 + 0x4e8) == 0)) {
    *param_2 = 0;
    *param_3 = 0;
  }
  else {
    iVar3 = *(int *)(lVar1 + 0x4f0);
    if (iVar3 < *(int *)(lVar1 + 0x4e8)) {
      do {
        cVar2 = FWeakObjectPtr::IsValid(*(longlong *)(lVar1 + 0x4e0) + (longlong)iVar3 * 8);
        if (cVar2 != '\0') break;
        iVar3 = *(int *)(lVar1 + 0x4f0) + 1;
        *(int *)(lVar1 + 0x4f0) = iVar3;
      } while (iVar3 < *(int *)(lVar1 + 0x4e8));
    }
    iVar3 = *(int *)(lVar1 + 0x4f0);
    *param_4 = '\0';
    do {
      iVar6 = *(int *)(lVar1 + 0x4e8);
      iVar3 = iVar3 + 1;
      if (iVar6 <= iVar3) goto LAB_14302ebe7;
      cVar2 = FWeakObjectPtr::IsValid(*(longlong *)(lVar1 + 0x4e0) + (longlong)iVar3 * 8);
    } while (cVar2 == '\0');
    iVar6 = *(int *)(lVar1 + 0x4e8);
    if (iVar3 < iVar6) {
      *param_4 = '\x01';
      iVar6 = *(int *)(lVar1 + 0x4e8);
    }
LAB_14302ebe7:
    if (*(int *)(lVar1 + 0x4f0) < iVar6) {
      lVar4 = FWeakObjectPtr::Get(*(longlong *)(lVar1 + 0x4e0) +
                                  (longlong)*(int *)(lVar1 + 0x4f0) * 8);
      iVar3 = 0;
      lVar5 = 0;
      if (DAT_14678b6cc == '\0') {
        *(undefined4 *)(lVar4 + 0x4e8) = 0;
      }
      *param_2 = (longlong)*(int *)(lVar4 + 0x4e8) + *(longlong *)(lVar4 + 0x4a8);
      *param_3 = *(int *)(lVar4 + 0x4b0) - *(int *)(lVar4 + 0x4e8);
      *(undefined1 *)(lVar4 + 0x4ec) = 0;
      *(longlong *)(*param_2 + 8) = *param_2 + 0x18;
      *(undefined8 *)(*param_2 + 0x10) = 0;
      iVar6 = *(int *)(lVar1 + 0x4f0);
      do {
        iVar6 = iVar6 + -1;
        if (iVar6 < 0) {
          if (lVar5 == 0) goto LAB_14302eca7;
          break;
        }
        lVar5 = FWeakObjectPtr::Get(*(longlong *)(lVar1 + 0x4e0) + (longlong)iVar6 * 8);
      } while (lVar5 == 0);
      if (DAT_14678b6cc == '\0') {
        *(undefined4 *)(lVar5 + 0x4e8) = 0;
      }
      else {
        iVar3 = *(int *)(lVar5 + 0x4e8);
      }
      *(longlong *)((longlong)iVar3 + 0x10 + *(longlong *)(lVar5 + 0x4a8)) = *param_2;
LAB_14302eca7:
      *(int *)(lVar1 + 0x4f0) = *(int *)(lVar1 + 0x4f0) + 1;
    }
    else {
      *param_2 = 0;
      *param_3 = 0;
    }
    if (*param_4 == '\0') {
      *(undefined4 *)(lVar1 + 0x4f0) = 0;
    }
  }
  return;
}



// FUNCTION 14302ecf0 FUN_14302ecf0 body=177 status=ok
// SIG undefined FUN_14302ecf0(void)

void FUN_14302ecf0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if ((0 < DAT_146b47120) && (lVar1 = *(longlong *)(DAT_146b47118 + 8), lVar1 != 0)) {
    iVar3 = 0;
    if (*(int *)(lVar1 + 0x4e8) != 0) {
      do {
        lVar2 = FWeakObjectPtr::Get(*(longlong *)(lVar1 + 0x4e0) + (longlong)iVar3 * 8);
        if (lVar2 != 0) {
          if (DAT_14678b6cc == '\0') {
            *(undefined4 *)(lVar2 + 0x4e8) = 0;
            *param_2 = *(longlong *)(lVar2 + 0x4a8);
            return;
          }
          *param_2 = (longlong)*(int *)(lVar2 + 0x4e8) + *(longlong *)(lVar2 + 0x4a8);
          return;
        }
        iVar3 = iVar3 + 1;
      } while (*(int *)(lVar1 + 0x4e8) != iVar3);
    }
    *param_2 = 0;
  }
  return;
}



// FUNCTION 14302edb0 FUN_14302edb0 body=235 status=ok
// SIG undefined FUN_14302edb0(void)

void FUN_14302edb0(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined4 local_res18;
  undefined4 local_res1c;
  
  if ((0 < DAT_146b47120) && (lVar3 = *(longlong *)(DAT_146b47118 + 8), lVar3 != 0)) {
    if (*(char *)(param_1 + 0xc) != '\0') {
      puVar7 = *(undefined4 **)(lVar3 + 0x4e0);
      puVar1 = puVar7 + (longlong)*(int *)(lVar3 + 0x4e8) * 2;
      for (; puVar7 != puVar1; puVar7 = puVar7 + 2) {
        local_res18 = *puVar7;
        local_res1c = puVar7[1];
        cVar4 = FWeakObjectPtr::IsValid(&local_res18);
        if (cVar4 != '\0') {
          lVar5 = FWeakObjectPtr::Get(&local_res18);
          if (DAT_14678b6cc == '\0') {
            *(undefined4 *)(lVar5 + 0x4e8) = 0;
          }
          lVar6 = FWeakObjectPtr::Get(&local_res18);
          *(undefined4 *)(lVar5 + 0x4e8) = *(undefined4 *)(lVar6 + 0x4b0);
        }
      }
    }
    iVar2 = *(int *)(lVar3 + 0x4e8);
    *(undefined4 *)(lVar3 + 0x4e8) = 0;
    if (*(int *)(lVar3 + 0x4ec) != iVar2) {
      TArray<void_*,FDefaultAllocator>::ResizeTo((undefined8 *)(lVar3 + 0x4e0));
    }
  }
  return;
}



// FUNCTION 14302eea0 FUN_14302eea0 body=631 status=ok
// SIG undefined FUN_14302eea0(void)

int * FUN_14302eea0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  bool bVar11;
  
  iVar8 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x14) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  bVar11 = false;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  puVar1 = (uint *)(*param_1 + (longlong)iVar7 * 0x14);
  puVar3 = (uint *)param_3[1];
  *puVar1 = *(uint *)*param_3;
  puVar1[1] = *puVar3;
  puVar1[2] = puVar3[1];
  puVar1[3] = 0xffffffff;
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar10 != 1) {
    if (uVar10 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar5 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar1) * 4);
      if (iVar6 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar6 * 0x14) == *puVar1) goto LAB_14302effb;
          iVar6 = *(int *)(*param_1 + 0xc + (longlong)iVar6 * 0x14);
        } while (iVar6 != -1);
      }
    }
    iVar6 = -1;
LAB_14302effb:
    bVar11 = iVar6 != -1;
    if (bVar11) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar6 * 0x14),puVar1,0xc);
      TSparseArray<TSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar7,1);
      *param_2 = iVar6;
      goto LAB_14302f0ee;
    }
  }
  if (3 < uVar10) {
    uVar4 = (uVar10 >> 1) + 8;
    iVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    iVar6 = 0x20;
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar8;
    }
    uVar4 = (uVar10 >> 1) + 7;
    iVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar4 == 0) {
      cVar9 = '\0';
    }
    else {
      cVar9 = '\x1f' - (char)iVar8;
    }
    iVar8 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar10 = (int)param_1[9] - 1U & *puVar1;
    puVar1[4] = uVar10;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    puVar1[3] = *(uint *)((longlong)plVar5 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         iVar7;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<unsigned_int,FMeshSectionInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FMeshSectionInfo,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14302f0ee:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 14302f120 FUN_14302f120 body=378 status=ok
// SIG undefined FUN_14302f120(void)

void FUN_14302f120(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  
  iVar6 = (param_2 + -2) / 2;
  if (-1 < iVar6) {
    iVar7 = iVar6 * 2 + 1;
    iVar4 = iVar7;
    iVar9 = iVar6;
joined_r0x00014302f15c:
    do {
      if (iVar7 < param_2) {
        iVar7 = iVar6 * 2;
        iVar13 = iVar7 + 1;
        if (iVar7 + 2 < param_2) {
          cVar5 = FUN_14302fe90(param_4,param_1[(longlong)iVar7 + 2],param_1[iVar13]);
          if (cVar5 != '\0') {
            iVar13 = iVar7;
          }
          iVar13 = iVar13 + 1;
        }
        uVar12 = param_1[iVar13];
        puVar1 = param_1 + iVar13;
        uVar8 = param_1[iVar6];
        puVar2 = param_1 + iVar6;
        cVar5 = FUN_14302fe90(param_4);
        if (cVar5 != '\0') {
          *puVar2 = uVar12;
          iVar7 = iVar13 * 2 + 1;
          *puVar1 = uVar8;
          iVar6 = iVar13;
          goto joined_r0x00014302f15c;
        }
      }
      iVar7 = iVar4 + -2;
      iVar6 = iVar9 + -1;
      iVar4 = iVar7;
      iVar9 = iVar6;
    } while (-1 < iVar6);
  }
  param_2 = param_2 + -1;
  lVar10 = (longlong)param_2;
  if (0 < param_2) {
    do {
      uVar11 = 0;
      uVar12 = *param_1;
      *param_1 = param_1[lVar10];
      param_1[lVar10] = uVar12;
      if (1 < param_2) {
        do {
          iVar6 = (int)uVar11;
          uVar3 = iVar6 * 2;
          uVar14 = uVar3 + 1;
          if ((int)(uVar3 + 2) < param_2) {
            cVar5 = FUN_14302fe90(param_4,param_1[(longlong)(int)uVar3 + 2],param_1[(int)uVar14]);
            if (cVar5 != '\0') {
              uVar14 = uVar3;
            }
            uVar14 = uVar14 + 1;
          }
          uVar15 = (ulonglong)uVar14;
          uVar12 = param_1[(int)uVar14];
          puVar1 = param_1 + (int)uVar14;
          uVar8 = param_1[iVar6];
          puVar2 = param_1 + iVar6;
          cVar5 = FUN_14302fe90(param_4);
          if (cVar5 == '\0') break;
          *puVar2 = uVar12;
          uVar11 = uVar15 & 0xffffffff;
          *puVar1 = uVar8;
        } while ((int)uVar15 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      lVar10 = lVar10 + -1;
    } while (0 < lVar10);
  }
  return;
}



// FUNCTION 14302f2a0 FUN_14302f2a0 body=637 status=ok
// SIG undefined FUN_14302f2a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14302f2a0(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  float fVar13;
  undefined1 auStack_378 [48];
  longlong local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_378;
    lStack_330 = param_1 + (param_2 - 1) * 8;
    fVar13 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar13 = fVar13 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar13 = _guard_xfg_dispatch_icall_nop(fVar13);
    local_328 = (undefined4)(longlong)(fVar13 + fVar13);
    _guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar12 = &local_338;
    do {
      puVar8 = (undefined8 *)*plVar12;
      puVar7 = (undefined8 *)plVar12[1];
      local_348 = plVar12[2];
      lVar4 = ((longlong)puVar7 - (longlong)puVar8 >> 3) + 1;
      iVar6 = (int)local_348;
      if ((int)local_348 != 0) {
LAB_14302f370:
        if (8 < lVar4) {
          if (lVar4 < 0) {
            lVar4 = lVar4 + 1;
          }
          puVar10 = puVar7 + 1;
          uVar5 = puVar8[lVar4 >> 1];
          puVar8[lVar4 >> 1] = *puVar8;
          *puVar8 = uVar5;
          puVar11 = puVar8;
LAB_14302f3a0:
          puVar8 = puVar8 + 1;
          if (puVar8 <= puVar7) goto code_r0x00014302f3a9;
          goto LAB_14302f3c0;
        }
        puVar2 = puVar8;
        puVar11 = puVar8;
        puVar10 = puVar8;
        if (puVar8 < puVar7) {
          do {
            while (puVar9 = puVar2, puVar10 = puVar10 + 1, puVar10 <= puVar7) {
              cVar3 = FUN_14302fe90(param_4,*puVar9,*puVar10);
              puVar2 = puVar10;
              if (cVar3 == '\0') {
                puVar2 = puVar9;
              }
            }
            uVar5 = *puVar9;
            *puVar9 = *puVar7;
            *puVar7 = uVar5;
            puVar7 = puVar7 + -1;
            puVar2 = puVar11;
            puVar10 = puVar8;
          } while (puVar11 < puVar7);
        }
        goto LAB_14302f47f;
      }
LAB_14302f470:
      FUN_14302f120(puVar8,lVar4,param_3,param_4);
LAB_14302f47f:
      plVar12 = plVar12 + -3;
    } while (&local_338 <= plVar12);
  }
  return;
code_r0x00014302f3a9:
  cVar3 = FUN_14302fe90(param_4,*puVar11,*puVar8);
  if (cVar3 == '\0') goto LAB_14302f3a0;
LAB_14302f3c0:
  do {
    uVar5 = puVar10[-1];
    puVar10 = puVar10 + -1;
    if (puVar10 <= puVar11) break;
    cVar3 = FUN_14302fe90(param_4,uVar5,*puVar11);
  } while (cVar3 == '\0');
  if (puVar8 <= puVar10) {
    uVar1 = *puVar8;
    *puVar8 = uVar5;
    *puVar10 = uVar1;
    goto LAB_14302f3a0;
  }
  uVar1 = *puVar11;
  *puVar11 = uVar5;
  *puVar10 = uVar1;
  iVar6 = iVar6 + -1;
  if ((longlong)((longlong)puVar10 + (-8 - (longlong)puVar11) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar7 - (longlong)puVar8 & 0xfffffffffffffff8U)) {
    if (puVar8 < puVar7) {
      *plVar12 = (longlong)puVar8;
      plVar12[1] = (longlong)puVar7;
      *(int *)(plVar12 + 2) = iVar6;
      plVar12 = plVar12 + 3;
    }
    if (puVar10 <= puVar11 + 1) goto LAB_14302f47f;
    puVar7 = puVar10 + -1;
    puVar8 = puVar11;
  }
  else {
    if (puVar11 + 1 < puVar10) {
      *plVar12 = (longlong)puVar11;
      plVar12[1] = (longlong)(puVar10 + -1);
      *(int *)(plVar12 + 2) = iVar6;
      plVar12 = plVar12 + 3;
    }
    if (puVar7 <= puVar8) goto LAB_14302f47f;
  }
  lVar4 = ((longlong)puVar7 - (longlong)puVar8 >> 3) + 1;
  if (iVar6 == 0) goto LAB_14302f470;
  goto LAB_14302f370;
}



// FUNCTION 14302f520 FUN_14302f520 body=80 status=ok
// SIG undefined FUN_14302f520(void)

void FUN_14302f520(longlong *param_1)

{
  longlong lVar1;
  
  *(int *)((longlong)param_1 + 0x47c) = *(int *)((longlong)param_1 + 0x47c) + 1;
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(lVar1 + 0x790);
    return;
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  return;
}



// FUNCTION 14302f570 NewObject<USoundWaveProcedural> body=89 status=ok
// SIG undefined NewObject<USoundWaveProcedural>(void)

void NewObject<USoundWaveProcedural>(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = USoundWaveProcedural::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 14302f5d0 FUN_14302f5d0 body=93 status=ok
// SIG undefined FUN_14302f5d0(void)

undefined8 * FUN_14302f5d0(undefined8 *param_1)

{
  FUN_14221fbd0();
  *param_1 = &PTR__scalar_deleting_destructor__145a52950;
  *(undefined4 *)(param_1 + 0x8b) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x8c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x8d) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x46c) = 0x3f800000;
  return param_1;
}



// FUNCTION 14302f630 FUN_14302f630 body=270 status=ok
// SIG undefined FUN_14302f630(void)

undefined8 * FUN_14302f630(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_145a53f28;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  if (*(int *)((longlong)param_1 + 0x484) < 0x20) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x8f,0x20);
  }
  if (*(int *)((longlong)param_1 + 0x464) < 0x20) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x8b,0x20);
  }
  if (*(int *)((longlong)param_1 + 0x474) < 0x20) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x8d,0x20);
  }
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 6;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"DefaultSceneComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_1429ff160();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x2d] = uVar3;
  *(undefined4 *)(param_1 + 0x93) = 0x46ea6000;
  *(undefined4 *)((longlong)param_1 + 0x49c) = 0x3f000000;
  return param_1;
}



// FUNCTION 14302f740 FUN_14302f740 body=263 status=ok
// SIG undefined FUN_14302f740(void)

undefined8 * FUN_14302f740(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *(undefined4 *)(param_1 + 0x8b) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x8c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x8d) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x46c) = 0x3f800000;
  *param_1 = &PTR_FUN_145a53138;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SkeletalMeshComponent",1);
  uVar1 = *puVar2;
  uVar3 = FUN_142a07000();
  lVar4 = FUN_141789050(param_2,param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x8e] = lVar4;
  *(undefined4 *)(lVar4 + 0xea8) = 0x3f800000;
  *(undefined1 *)(param_1[0x8e] + 0x878) = 4;
  param_1[0x2d] = param_1[0x8e];
  *(undefined1 *)(param_1[0x8e] + 0xc20) = 0;
  *(undefined1 *)(param_1[0x8e] + 0xc21) = 6;
  return param_1;
}



// FUNCTION 14302f850 FUN_14302f850 body=211 status=ok
// SIG undefined FUN_14302f850(void)

undefined8 * FUN_14302f850(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *(undefined4 *)(param_1 + 0x8b) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x8c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x8d) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x46c) = 0x3f800000;
  *param_1 = &PTR__scalar_deleting_destructor__145a53830;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"StaticMeshComponent",1);
  uVar1 = *puVar2;
  uVar3 = FUN_142a232e0();
  lVar4 = FUN_141789050(param_2,param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x8e] = lVar4;
  *(undefined1 *)(lVar4 + 0x14c) = 1;
  param_1[0x2d] = param_1[0x8e];
  return param_1;
}



// FUNCTION 14302f930 FUN_14302f930 body=603 status=ok
// SIG undefined FUN_14302f930(void)

undefined8 * FUN_14302f930(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong local_res8;
  undefined1 local_res10 [8];
  undefined2 *local_38;
  undefined8 local_30;
  
  plVar3 = (longlong *)FName::FName(local_res10,L"DestructibleComponent0",1);
  local_res8 = *plVar3;
  lVar4 = FName::GetComparisonNameEntry(&local_res8);
  uVar12 = 0;
  if (lVar4 == 0) {
    local_38 = (undefined2 *)0x0;
    local_30 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"*INVALID*",0x14);
  }
  else {
    FNameEntry::GetPlainNameString(lVar4,&local_38);
  }
  puVar7 = &DAT_143f3eda8;
  if ((int)local_30 != 0) {
    puVar7 = local_38;
  }
  FUN_141784790(param_2,puVar7);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  lVar5 = FUN_143036a00();
  lVar4 = local_res8;
  uVar8 = param_2 + 0x20;
  iVar1 = *(int *)(param_2 + 0xa8);
  if (0 < iVar1) {
    uVar11 = (ulonglong)(*(ulonglong *)(param_2 + 0xa0) != 0) - 1 & uVar8 |
             *(ulonglong *)(param_2 + 0xa0);
    uVar6 = uVar12;
    uVar10 = uVar12;
    do {
      iVar9 = (int)uVar10;
      if (*(longlong *)(uVar6 + uVar11) == local_res8) {
        if (iVar9 != -1) {
          if ((lVar5 != 0) &&
             (lVar4 = *(longlong *)(uVar11 + 8 + (longlong)iVar9 * 0x10), lVar4 != 0)) {
            FUN_1417905a0(param_2,local_res8,lVar4,lVar5);
          }
          goto LAB_14302fa7c;
        }
        break;
      }
      uVar10 = (ulonglong)(iVar9 + 1U);
      uVar6 = uVar6 + 0x10;
    } while ((int)(iVar9 + 1U) < iVar1);
  }
  *(int *)(param_2 + 0xa8) = iVar1 + 1;
  if (*(int *)(param_2 + 0xac) < iVar1 + 1) {
    TArray<FObjectInitializer::FOverrides::FOverride,TInlineAllocator<8,FDefaultAllocator>_>::
    ResizeGrow(uVar8,iVar1);
  }
  uVar6 = *(ulonglong *)(param_2 + 0xa0);
  if (*(ulonglong *)(param_2 + 0xa0) == 0) {
    uVar6 = uVar8;
  }
  plVar3 = (longlong *)(uVar6 + (longlong)iVar1 * 0x10);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = lVar4;
    plVar3[1] = lVar5;
  }
LAB_14302fa7c:
  FUN_14061e8e0(param_1,param_2);
  *param_1 = &PTR_FUN_145a55180;
  *(undefined1 *)(param_1 + 0x8f) = 1;
  *(undefined8 *)((longlong)param_1 + 0x47c) = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  *(undefined1 *)(param_1 + 0x93) = 1;
  *(undefined8 *)((longlong)param_1 + 0x49c) = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  uVar8 = param_1[0x8b];
  if (uVar8 != 0) {
    lVar4 = FUN_143036a00();
    if ((*(int *)(*(longlong *)(uVar8 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_14302fb48;
  }
  uVar8 = uVar12;
LAB_14302fb48:
  param_1[0x9b] = uVar8;
  *(undefined1 *)(param_1 + 0x93) = 0;
  *(undefined1 *)((longlong)param_1 + 0x129) = 4;
  *(undefined4 *)(param_1 + 0x28) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x3dcccccd;
  return param_1;
}



// FUNCTION 14302fb90 FUN_14302fb90 body=242 status=ok
// SIG undefined FUN_14302fb90(void)

undefined8 * FUN_14302fb90(undefined8 *param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_145a55868;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = 0;
  param_1[0x98] = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  if (*(int *)((longlong)param_1 + 0x46c) < 0x400) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x8c,0x400);
  }
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) & 0xbf;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 8;
  *(undefined4 *)(param_1 + 0x27) = 0;
  lVar2 = AActor::GetWorld(param_1);
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = FUN_1428cfb70(lVar2);
  }
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x800040;
  *(undefined1 *)(param_1 + 0x8b) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0;
  return param_1;
}



// FUNCTION 14302fc90 FUN_14302fc90 body=297 status=ok
// SIG undefined FUN_14302fc90(void)

undefined8 * FUN_14302fc90(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [8];
  
  FUN_14061ee50();
  *param_1 = &PTR_FUN_145a54658;
  param_1[5] = &PTR_LAB_145a550c0;
  param_1[0x5a] = &PTR_LAB_145a550f0;
  param_1[0x146] = &PTR_LAB_145a55148;
  param_1[0x167] = &PTR_LAB_145a55168;
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  *(undefined1 *)((longlong)param_1 + 0xb6a) = 1;
  param_1[0x170] = 0;
  param_1[0x171] = 0;
  FUN_1426aa270(param_1 + 0x76,*(char *)(param_1 + 0x172) == '\x02');
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  *(undefined1 *)((longlong)param_1 + 0xba1) = 1;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"Destructible",1);
  FUN_1426a8ca0(param_1 + 0x76,*puVar1);
  *(undefined1 *)((longlong)param_1 + 0xb91) = 7;
  *(undefined4 *)((longlong)param_1 + 0xbb4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb74) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x16f) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0xbcc) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x168) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xb6c) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0xbac) = 1;
  *(undefined4 *)((longlong)param_1 + 0xbbc) = 0x42c80000;
  return param_1;
}



// FUNCTION 14302fdc0 FUN_14302fdc0 body=201 status=ok
// SIG undefined FUN_14302fdc0(void)

void FUN_14302fdc0(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (*(longlong *)(param_1 + 0xb20) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xaf0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xad0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xaa0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa68) != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0xa60);
  puVar2 = *(undefined8 **)(param_1 + 0xa58);
  if (iVar1 != 0) {
    do {
      *puVar2 = &PTR_FUN_144019aa0;
      puVar2 = puVar2 + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    puVar2 = *(undefined8 **)(param_1 + 0xa58);
  }
  if (puVar2 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa40) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0xa30) = &PTR_FUN_143fce298;
  FUN_14061f9e0(param_1);
  return;
}



// FUNCTION 14302fe90 FUN_14302fe90 body=105 status=ok
// SIG undefined FUN_14302fe90(void)

undefined8 FUN_14302fe90(undefined8 param_1,longlong param_2,longlong param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_2 + 0x470) + 0x830);
  if (iVar3 == 0) {
    iVar3 = *(int *)(*(longlong *)(param_2 + 0x470) + 0x83c);
  }
  else {
    iVar3 = iVar3 + -1;
  }
  fVar2 = *(float *)(*(longlong *)(param_2 + 0x478) + (longlong)iVar3 * 4);
  iVar3 = *(int *)(*(longlong *)(param_3 + 0x470) + 0x830);
  if (iVar3 != 0) {
    pfVar1 = (float *)(*(longlong *)(param_3 + 0x478) + (longlong)(iVar3 + -1) * 4);
    return CONCAT71((int7)((ulonglong)*(longlong *)(param_3 + 0x478) >> 8),
                    *pfVar1 <= fVar2 && fVar2 != *pfVar1);
  }
  pfVar1 = (float *)(*(longlong *)(param_3 + 0x478) +
                    (longlong)*(int *)(*(longlong *)(param_3 + 0x470) + 0x83c) * 4);
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_3 + 0x478) >> 8),
                  *pfVar1 <= fVar2 && fVar2 != *pfVar1);
}



// FUNCTION 14302ff30 FUN_14302ff30 body=124 status=ok
// SIG undefined FUN_14302ff30(void)

longlong FUN_14302ff30(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x488) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x478) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x468) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x458) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4a0);
  }
  return param_1;
}



// FUNCTION 14302ffb0 FUN_14302ffb0 body=73 status=ok
// SIG undefined FUN_14302ffb0(void)

longlong FUN_14302ffb0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x478) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x488);
  }
  return param_1;
}



// FUNCTION 143030000 FUN_143030000 body=107 status=ok
// SIG undefined FUN_143030000(void)

longlong FUN_143030000(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x4a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x488) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x468) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4f8);
  }
  return param_1;
}



// FUNCTION 143030070 FUN_143030070 body=173 status=ok
// SIG undefined FUN_143030070(void)

longlong FUN_143030070(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x4e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4d0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x4c8) = 0;
  if (*(longlong *)(param_1 + 0x4c0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x480);
  if (*(longlong *)(param_1 + 0x470) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x460) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4f8);
  }
  return param_1;
}



// FUNCTION 143030120 FUN_143030120 body=43 status=ok
// SIG undefined FUN_143030120(void)

undefined8 * FUN_143030120(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_144019728;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 143030150 FUN_143030150 body=43 status=ok
// SIG undefined FUN_143030150(void)

undefined8 * FUN_143030150(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145a55f68;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 143030180 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FBattleState::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_142d989f0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1430301c0 FUN_1430301c0 body=87 status=ok
// SIG undefined FUN_1430301c0(void)

longlong FUN_1430301c0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xb80) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0xb38) = &PTR_FUN_143fe0658;
  FUN_14302fdc0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xbd0);
  }
  return param_1;
}



// FUNCTION 143030220 FUN_143030220 body=273 status=ok
// SIG undefined FUN_143030220(void)

void FUN_143030220(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  undefined4 local_res8;
  undefined4 local_resc;
  
  FWeakObjectPtr::operator=(&local_res8);
  iVar2 = *(int *)(param_1 + 0x480);
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 0x480) = iVar2 + 1;
  if (*(int *)(param_1 + 0x484) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x478,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x478);
  *(undefined4 *)(lVar3 + lVar5 * 8) = local_res8;
  *(undefined4 *)(lVar3 + 4 + lVar5 * 8) = local_resc;
  if (param_2 != 0) {
    lVar5 = UUGRichTextBlock::GetPrivateStaticClass(lVar3,lVar3 + lVar5 * 8);
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      FWeakObjectPtr::operator=(&local_res8,param_2);
      iVar2 = *(int *)(param_1 + 0x490);
      *(int *)(param_1 + 0x490) = iVar2 + 1;
      if (*(int *)(param_1 + 0x494) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x488,iVar2);
      }
      puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x488) + (longlong)iVar2 * 8);
      *puVar1 = local_res8;
      puVar1[1] = local_resc;
      *(undefined1 *)(*(longlong *)(param_2 + 0x470) + 0xead) = 1;
    }
  }
  return;
}



// FUNCTION 143030340 FUN_143030340 body=404 status=ok
// SIG undefined FUN_143030340(void)

void FUN_143030340(longlong param_1,undefined8 *param_2,float param_3,float param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 local_48;
  undefined4 local_40;
  
  if (*(int *)(param_1 + 0x460) == 0) {
    plVar3 = (longlong *)NewObject<USoundWaveProcedural>();
  }
  else {
    iVar1 = *(int *)(param_1 + 0x460);
    local_res8 = *(undefined4 *)(*(longlong *)(param_1 + 0x458) + -8 + (longlong)iVar1 * 8);
    local_resc = *(undefined4 *)(*(longlong *)(param_1 + 0x458) + -4 + (longlong)iVar1 * 8);
    *(int *)(param_1 + 0x460) = iVar1 + -1;
    plVar3 = (longlong *)FWeakObjectPtr::Get(&local_res8);
  }
  fVar5 = -1000.0;
  if ((-1000.0 <= param_3) && (fVar5 = param_3, 1000.0 <= param_3)) {
    fVar5 = 1000.0;
  }
  fVar6 = 0.0;
  if ((0.0 <= param_4) && (fVar6 = param_4, 20000.0 <= param_4)) {
    fVar6 = 20000.0;
  }
  (**(code **)(*plVar3 + 0x290))(plVar3,1,0);
  local_48 = *param_2;
  local_40 = *(undefined4 *)(param_2 + 1);
  FUN_1423990b0(plVar3,&local_48,0,0,0);
  UWindDirectionalSourceComponent::SetRadius(plVar3,fVar5 * 0.01);
  SCircularThrobber::SetPeriod(plVar3,fVar5);
  FUN_1428d8260(plVar3,fVar6);
  FWeakObjectPtr::operator=(&local_48,plVar3);
  iVar1 = *(int *)(param_1 + 0x470);
  lVar4 = (longlong)iVar1;
  local_40 = 0x3f800000;
  *(int *)(param_1 + 0x470) = iVar1 + 1;
  if (*(int *)(param_1 + 0x474) < iVar1 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1 + 0x468,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x468);
  *(undefined4 *)(lVar2 + lVar4 * 0xc) = (undefined4)local_48;
  *(undefined4 *)(lVar2 + 4 + lVar4 * 0xc) = local_48._4_4_;
  *(undefined4 *)(lVar2 + 8 + lVar4 * 0xc) = local_40;
  return;
}



// FUNCTION 1430304e0 FUN_1430304e0 body=447 status=ok
// SIG undefined FUN_1430304e0(void)

void FUN_1430304e0(longlong param_1,uint param_2,undefined4 *param_3,float *param_4,float param_5)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  float local_68;
  float local_64;
  float local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_40;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    uVar5 = FUN_143031510(param_1 + -0xa30,param_5);
    local_54 = param_3[1];
    local_58 = *param_3;
    local_50 = param_3[2];
    puVar4 = (undefined8 *)0x0;
    local_60 = param_4[2];
    local_68 = *param_4;
    local_64 = param_4[1];
    lVar1 = *(longlong *)(param_1 + -0x918);
    if (lVar1 != 0) {
      lVar3 = FUN_143036740();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) && (*(char *)(lVar1 + 0x4b8) != '\0')) &&
         (puVar4 = (undefined8 *)0x0, *(char *)(lVar1 + 0x128) == '\x03')) {
        puVar4 = (undefined8 *)(lVar1 + 0x4bc);
        *puVar4 = CONCAT44(local_64 * param_5,local_68 * param_5);
        *(float *)(lVar1 + 0x4c4) = local_60 * param_5;
        local_40 = local_50;
        *(ulonglong *)(lVar1 + 0x4c8) = CONCAT44(local_54,local_58);
        *(uint *)(lVar1 + 0x4d4) = param_2 & 0x7fffffff ^ 0x80000000;
        *(undefined4 *)(lVar1 + 0x4d0) = local_50;
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x188))
              (*(longlong **)(param_1 + 0x48),param_2,uVar5,&local_58,&local_68,0xffffffff,puVar4);
  }
  return;
}



// FUNCTION 1430306a0 FUN_1430306a0 body=403 status=ok
// SIG undefined FUN_1430306a0(void)

void FUN_1430306a0(longlong param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                  undefined4 param_5,byte param_6)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_50;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    uVar5 = FUN_143031510(param_1 + -0xa30,param_5);
    local_60 = param_3[2];
    local_64 = param_3[1];
    local_68 = *param_3;
    puVar4 = (undefined4 *)0x0;
    lVar1 = *(longlong *)(param_1 + -0x918);
    if (lVar1 != 0) {
      lVar3 = FUN_143036740();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) && (*(char *)(lVar1 + 0x4b8) != '\0')) &&
         (puVar4 = (undefined4 *)0x0, *(char *)(lVar1 + 0x128) == '\x03')) {
        puVar4 = (undefined4 *)(lVar1 + 0x4bc);
        *puVar4 = param_5;
        if (param_6 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = 0x3f800000;
        }
        *(undefined4 *)(lVar1 + 0x4c0) = uVar6;
        *(undefined4 *)(lVar1 + 0x4c4) = param_2;
        local_50 = local_60;
        *(ulonglong *)(lVar1 + 0x4c8) = CONCAT44(local_64,local_68);
        *(undefined4 *)(lVar1 + 0x4d0) = local_60;
        *(undefined4 *)(lVar1 + 0x4d4) = param_4;
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x48) + 400))
              (*(longlong **)(param_1 + 0x48),param_2,uVar5,&local_68,param_4,param_6 ^ 1,puVar4);
  }
  return;
}



// FUNCTION 143030840 FUN_143030840 body=430 status=ok
// SIG undefined FUN_143030840(void)

void FUN_143030840(longlong param_1,undefined8 param_2,undefined4 *param_3,float *param_4,
                  float param_5)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_30;
  
  if (*(longlong *)(param_1 + 0xa78) != 0) {
    uVar5 = FUN_143031510(param_1,param_5);
    local_44 = param_3[1];
    local_48 = *param_3;
    local_40 = param_3[2];
    puVar4 = (undefined8 *)0x0;
    local_50 = param_4[2];
    local_58 = *param_4;
    local_54 = param_4[1];
    lVar1 = *(longlong *)(param_1 + 0x118);
    if (lVar1 != 0) {
      lVar3 = FUN_143036740();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) && (*(char *)(lVar1 + 0x4b8) != '\0')) &&
         (puVar4 = (undefined8 *)0x0, *(char *)(lVar1 + 0x128) == '\x03')) {
        puVar4 = (undefined8 *)(lVar1 + 0x4bc);
        *puVar4 = CONCAT44(local_54 * param_5,local_58 * param_5);
        *(float *)(lVar1 + 0x4c4) = local_50 * param_5;
        local_30 = local_40;
        *(ulonglong *)(lVar1 + 0x4c8) = CONCAT44(local_44,local_48);
        *(float *)(lVar1 + 0x4d4) = -ABS(param_5);
        *(undefined4 *)(lVar1 + 0x4d0) = local_40;
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0xa78) + 0x188))
              (*(longlong **)(param_1 + 0xa78),param_5,uVar5,&local_48,&local_58,0xffffffff,puVar4);
  }
  return;
}



// FUNCTION 1430309f0 FUN_1430309f0 body=388 status=ok
// SIG undefined FUN_1430309f0(void)

void FUN_1430309f0(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4,
                  undefined4 param_5,byte param_6)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_40;
  
  if (*(longlong *)(param_1 + 0xa78) != 0) {
    uVar5 = FUN_143031510(param_1,param_5);
    local_50 = param_3[2];
    local_54 = param_3[1];
    local_58 = *param_3;
    puVar4 = (undefined4 *)0x0;
    lVar1 = *(longlong *)(param_1 + 0x118);
    if (lVar1 != 0) {
      lVar3 = FUN_143036740();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) && (*(char *)(lVar1 + 0x4b8) != '\0')) &&
         (puVar4 = (undefined4 *)0x0, *(char *)(lVar1 + 0x128) == '\x03')) {
        puVar4 = (undefined4 *)(lVar1 + 0x4bc);
        *puVar4 = param_5;
        if (param_6 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = 0x3f800000;
        }
        *(undefined4 *)(lVar1 + 0x4c0) = uVar6;
        *(undefined4 *)(lVar1 + 0x4c4) = param_5;
        local_40 = local_50;
        *(ulonglong *)(lVar1 + 0x4c8) = CONCAT44(local_54,local_58);
        *(undefined4 *)(lVar1 + 0x4d0) = local_50;
        *(undefined4 *)(lVar1 + 0x4d4) = param_4;
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0xa78) + 400))
              (*(longlong **)(param_1 + 0xa78),param_5,uVar5,&local_58,param_4,param_6 ^ 1,puVar4);
  }
  return;
}



// FUNCTION 143030b80 FUN_143030b80 body=145 status=ok
// SIG undefined FUN_143030b80(void)

void FUN_143030b80(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  
  FUN_1422235f0();
  lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  if (((lVar2 != 0) && (plVar3 = (longlong *)FUN_142d5ecc0(lVar2), plVar3 != (longlong *)0x0)) &&
     (plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2a0))(plVar3), plVar3 != (longlong *)0x0)) {
    lVar2 = FUN_143036e50();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*plVar3 + 0x6f8))(plVar3,param_1);
    }
  }
  return;
}



// FUNCTION 143030c20 FUN_143030c20 body=168 status=ok
// SIG undefined FUN_143030c20(void)

void FUN_143030c20(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  FUN_1422235f0();
  plVar3 = DAT_146b47118;
  if (DAT_146b47118 != DAT_146b47118 + (longlong)DAT_146b47120 * 2) {
    while (plVar3[1] != param_1) {
      plVar3 = plVar3 + 2;
      if (plVar3 == DAT_146b47118 + (longlong)DAT_146b47120 * 2) {
        return;
      }
    }
    if (DAT_146b47118 != DAT_146b47118 + (longlong)DAT_146b47120 * 2) {
      plVar2 = DAT_146b47118;
      while ((*plVar2 != *plVar3 || (plVar2[1] != plVar3[1]))) {
        plVar2 = plVar2 + 2;
        if (plVar2 == DAT_146b47118 + (longlong)DAT_146b47120 * 2) {
          return;
        }
      }
      iVar1 = (int)((longlong)plVar2 - (longlong)DAT_146b47118 >> 4);
      if (iVar1 != -1) {
        _guard_xfg_dispatch_icall_nop
                  (DAT_146b47118 + (longlong)iVar1 * 2,DAT_146b47118 + (longlong)iVar1 * 2 + 2,
                   (longlong)((DAT_146b47120 - iVar1) + -1) << 4);
        DAT_146b47120 = DAT_146b47120 + -1;
      }
    }
  }
  return;
}



// FUNCTION 143030cd0 FUN_143030cd0 body=125 status=ok
// SIG undefined FUN_143030cd0(void)

void FUN_143030cd0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_142385110();
  if ((*DAT_146b47110 != 0) && (lVar1 = *(longlong *)(param_1 + 0x118), lVar1 != 0)) {
    lVar3 = FUN_143036740();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (0 < *(int *)(lVar1 + 0x490))) {
      FUN_143034560(param_1);
    }
  }
  return;
}



// FUNCTION 143030d50 FUN_143030d50 body=557 status=ok
// SIG undefined FUN_143030d50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143030d50(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar2 = *(longlong *)(param_1 + 0x120);
  if ((lVar2 != 0) || (lVar2 = FUN_1423407b0(), lVar2 != 0)) {
    if (*(longlong *)(lVar2 + 400) == 0) {
      lVar2 = *(longlong *)(lVar2 + 0x3f8);
    }
    else {
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 400) + 0x90);
    }
    if (((lVar2 != 0) && (fVar1 = *(float *)(param_1 + 0xb6c), 1e-08 <= fVar1)) &&
       (*(longlong *)(param_1 + 0xb58) == 0)) {
      local_b8 = FUN_143036370;
      uStack_b0 = 0;
      plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
      if (plVar3 != (longlong *)0x0) {
        *plVar3 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar3 + 1,param_1);
        *(undefined4 *)(plVar3 + 2) = (undefined4)local_b8;
        *(undefined4 *)((longlong)plVar3 + 0x14) = local_b8._4_4_;
        *(undefined4 *)(plVar3 + 3) = uStack_b0;
        *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_ac;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar3[5] = lVar4;
        *plVar3 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_a8 = 0;
      local_a0 = 0;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,&local_a8);
      }
      FWeakObjectPtr::operator=(local_98,0);
      local_c0 = 0xbf800000;
      local_c8 = 1;
      local_90 = 0;
      local_58 = (longlong *)0x0;
      local_48 = 0;
      local_88 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(lVar2,param_1 + 0xb58,&local_a8,fVar1);
      if (local_48 != 0) {
        plVar5 = local_78;
        if (local_58 != (longlong *)0x0) {
          plVar5 = local_58;
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5,0);
        }
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
        lVar2 = FMemory::Realloc(plVar3,0,0);
        if (lVar2 != 0) {
          FMemory::Free(lVar2);
        }
      }
    }
  }
  return;
}



// FUNCTION 143030f80 FUN_143030f80 body=98 status=ok
// SIG undefined FUN_143030f80(void)

undefined8 * FUN_143030f80(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142d97c30(puVar1,param_2,param_3);
    *puVar1 = &PTR_FUN_145a55f80;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143031010 FUN_143031010 body=96 status=ok
// SIG undefined FUN_143031010(void)

void FUN_143031010(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x218) != 0)) {
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar1 = FUN_1430319d0(&DAT_146b47118,uVar2);
    if (lVar1 != 0) {
      TSet<TTuple<unsigned_int,TTuple<unsigned_int,unsigned_int>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TTuple<unsigned_int,unsigned_int>,0>,FDefaultSetAllocator>
      ::Remove(lVar1 + 0x480,(int)param_1[0x9e]);
    }
  }
  FUN_142227880(param_1);
  return;
}



// FUNCTION 143031070 FUN_143031070 body=109 status=ok
// SIG undefined FUN_143031070(void)

void FUN_143031070(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x218) != 0)) {
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar1 = FUN_1430319d0(&DAT_146b47118,uVar2);
    if (lVar1 != 0) {
      TSet<TTuple<unsigned_int,TTuple<unsigned_int,unsigned_int>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TTuple<unsigned_int,unsigned_int>,0>,FDefaultSetAllocator>
      ::Remove(lVar1 + 0x480,(int)param_1[0x9e]);
    }
  }
  FUN_14222a250(param_1,param_2);
  return;
}



// FUNCTION 1430310e0 FUN_1430310e0 body=273 status=ok
// SIG undefined FUN_1430310e0(void)

void FUN_1430310e0(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint local_res8 [2];
  longlong local_res20;
  undefined8 local_28 [2];
  
  if (*(longlong *)(param_1 + 0xa78) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
    }
    uVar5 = 0;
    uVar3 = uVar5;
    if (lVar1 != 0) {
      uVar3 = *(ulonglong *)(lVar1 + 0x218);
    }
    if ((uVar3 != 0) &&
       (plVar2 = (longlong *)FUN_1426e19d0(uVar3,*(byte *)(param_1 + 0x3c2) >> 2 & 2),
       plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x108))
                (plVar2,
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxDestruction\\Private\\GbxDestructibleComponent.cpp"
                 ,0x3a5);
      (**(code **)(**(longlong **)(param_1 + 0xa78) + 0xc0))
                (*(longlong **)(param_1 + 0xa78),&local_res20,local_res8,param_3);
      if (local_res8[0] != 0) {
        do {
          local_28[0] = *(undefined8 *)(local_res20 + uVar5 * 8);
          (*(code *)*param_2)(param_2[1],local_28);
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
        } while (uVar4 < local_res8[0]);
      }
      (**(code **)(**(longlong **)(param_1 + 0xa78) + 200))();
      (**(code **)(*plVar2 + 0x118))(plVar2);
    }
  }
  return;
}



// FUNCTION 143031200 FUN_143031200 body=769 status=ok
// SIG undefined FUN_143031200(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143031200(longlong param_1)

{
  code *pcVar1;
  longlong *plVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  int *piVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  undefined1 auStack_a8 [64];
  int *local_68;
  int local_60 [4];
  longlong *local_50;
  undefined4 local_48;
  int local_40 [2];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)&local_68;
  puVar11 = auStack_a8;
  if (((*(longlong *)(param_1 + 0xa78) == 0) ||
      (puVar11 = auStack_a8, *(longlong *)(param_1 + 0x118) == 0)) ||
     (puVar11 = auStack_a8, *(char *)(*(longlong *)(param_1 + 0x118) + 0x128) != '\x03'))
  goto LAB_1430314d8;
  piVar14 = (int *)0x0;
  iVar13 = (int)(*(float *)(param_1 + 0xb40) + *(float *)(param_1 + 0xb40));
  lVar6 = (longlong)iVar13 * 4;
  piVar10 = piVar14;
  puVar11 = auStack_a8;
  if (lVar6 != 0) {
    uVar9 = lVar6 + 0x1e;
    if (uVar9 <= lVar6 + 0xfU) {
      uVar9 = 0xffffffffffffff0;
    }
    piVar10 = (int *)((longlong)local_60 + -(uVar9 & 0xfffffffffffffff0));
    puVar11 = auStack_a8 + -(uVar9 & 0xfffffffffffffff0);
  }
  local_68 = piVar10;
  local_60[3] = iVar13;
  *(undefined8 *)(puVar11 + -8) = 0x1430312ce;
  lVar6 = FUN_140626d60(param_1);
  iVar12 = 1;
  local_50 = *(longlong **)(lVar6 + 0x440);
  if (iVar13 < 2) {
LAB_1430313f0:
    iVar12 = 0;
    if (0 < iVar13 + -1) {
      *(undefined8 *)(puVar11 + -8) = 0x1430313fd;
      iVar12 = rand();
      iVar5 = (int)((float)iVar12 * 3.051851e-05 * (float)(iVar13 + -1));
      iVar12 = iVar13 + -2;
      if (iVar5 <= iVar13 + -2) {
        iVar12 = iVar5;
      }
    }
    iVar12 = iVar12 + 1;
  }
  else {
    do {
      plVar2 = local_50;
      pcVar1 = *(code **)(*local_50 + 0x140);
      *(undefined8 *)(puVar11 + -8) = 0x1430312fb;
      local_60[2] = (*pcVar1)(plVar2,iVar12);
      iVar5 = DAT_146b46ff4;
      *(undefined8 *)(puVar11 + -8) = 0x14303130d;
      lVar6 = FUN_140626d60(param_1);
      plVar2 = *(longlong **)(lVar6 + 0x440);
      for (iVar13 = iVar12; iVar13 != -1; iVar13 = (*pcVar1)(plVar2,iVar13)) {
        pcVar1 = *(code **)(*plVar2 + 0x148);
        *(undefined8 *)(puVar11 + -8) = 0x14303132f;
        uVar4 = (*pcVar1)(plVar2,iVar13);
        if ((int)(uint)uVar4 <= iVar5) break;
        pcVar1 = *(code **)(*plVar2 + 0x150);
        *(undefined8 *)(puVar11 + -8) = 0x143031345;
      }
      plVar2 = *(longlong **)(param_1 + 0xa78);
      pcVar1 = *(code **)(*plVar2 + 0x228);
      *(undefined8 *)(puVar11 + -8) = 0x14303135e;
      cVar3 = (*pcVar1)(plVar2,iVar12);
      if ((cVar3 == '\0') && ((local_60[2] & 4U) == 0)) {
        plVar2 = *(longlong **)(param_1 + 0xa78);
        pcVar1 = *(code **)(*plVar2 + 0x240);
        *(undefined8 *)(puVar11 + -8) = 0x14303137a;
        cVar3 = (*pcVar1)(plVar2,iVar13);
        if (cVar3 == '\0') {
          piVar14 = (int *)(ulonglong)((int)piVar14 + 1);
          *piVar10 = iVar12;
          piVar10 = piVar10 + 1;
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < local_60[3]);
    iVar12 = (int)piVar14;
    iVar13 = local_60[3];
    if (iVar12 == 0) goto LAB_1430313f0;
    if (iVar12 < 1) {
      iVar12 = *local_68;
    }
    else {
      *(undefined8 *)(puVar11 + -8) = 0x1430313a7;
      iVar13 = rand();
      iVar5 = (int)((float)iVar13 * 3.051851e-05 * (float)iVar12);
      iVar13 = iVar12 + -1;
      if (iVar5 <= iVar12 + -1) {
        iVar13 = iVar5;
      }
      iVar12 = local_68[iVar13];
    }
  }
  lVar6 = 0;
  plVar2 = *(longlong **)(param_1 + 0xa78);
  pcVar1 = *(code **)(*plVar2 + 0xd0);
  *(undefined8 *)(puVar11 + -8) = 0x14303143f;
  lVar7 = (*pcVar1)(plVar2,iVar12);
  if (lVar7 != 0) {
    lVar8 = *(longlong *)(param_1 + 0x120);
    if (lVar8 == 0) {
      *(undefined8 *)(puVar11 + -8) = 0x14303145b;
      lVar8 = FUN_1423407b0(param_1);
      if (lVar8 != 0) goto LAB_143031460;
    }
    else {
LAB_143031460:
      lVar6 = *(longlong *)(lVar8 + 0x218);
    }
    if (lVar6 != 0) {
      *(undefined8 *)(puVar11 + -8) = 0x14303147e;
      TBaseMulticastDelegate<void,FUniqueNetId_const_&,FUniqueNetId_const_&>::Broadcast
                (&DAT_146534a58,lVar6,lVar7);
    }
  }
  plVar2 = *(longlong **)(param_1 + 0xa78);
  *(longlong ***)(puVar11 + 0x30) = &local_50;
  local_40[0] = iVar12;
  *(int ***)(puVar11 + 0x28) = &local_68;
  local_40[1] = 0x14000000;
  local_50 = (longlong *)0x0;
  local_48 = 0;
  local_68 = (int *)0x0;
  local_60[0] = 0;
  lVar6 = *plVar2;
  puVar11[0x20] = 0;
  pcVar1 = *(code **)(lVar6 + 0x200);
  *(undefined8 *)(puVar11 + -8) = 0x1430314d8;
  (*pcVar1)(plVar2,local_40,1);
LAB_1430314d8:
  *(undefined8 *)(puVar11 + -8) = 0x1430314e4;
  return;
}



// FUNCTION 143031510 FUN_143031510 body=146 status=ok
// SIG undefined FUN_143031510(void)

float FUN_143031510(longlong param_1,float param_2)

{
  longlong *plVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
  plVar1 = (longlong *)UGameMapsSettings::GetPrivateStaticClass();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  fVar3 = _guard_xfg_dispatch_icall_nop(param_2 * *(float *)(lVar2 + 0x130),*(float *)(lVar2 + 300))
  ;
  fVar4 = (0.5 / *(float *)(param_1 + 0xb40)) * *(float *)(param_1 + 0xbbc) *
          *(float *)(lVar2 + 0x128);
  if (fVar4 <= fVar3) {
    fVar3 = fVar4;
  }
  return fVar3;
}



// FUNCTION 1430315b0 FUN_1430315b0 body=119 status=ok
// SIG undefined FUN_1430315b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1430315b0(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxDestruction\\Public\\ClothActor.h"
             ,0x1c,L"Pure virtual not implemented (%s)",L"AClothActor::GetClothWindVelocity");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxDestruction\\Public\\ClothActor.h"
             ,0x1c,L"Pure virtual not implemented (%s)",L"AClothActor::GetClothWindVelocity");
  uVar1 = DAT_1468b5d98;
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 143031630 FUN_143031630 body=30 status=ok
// SIG undefined FUN_143031630(void)

undefined8 FUN_143031630(longlong param_1,undefined8 param_2)

{
  FUN_1427dbaf0(*(undefined8 *)(param_1 + 0x470));
  return param_2;
}



// FUNCTION 143031650 FUN_143031650 body=118 status=ok
// SIG undefined FUN_143031650(void)

undefined4 FUN_143031650(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  plVar1 = *(longlong **)(param_1 + 0xa78);
  local_58 = 0;
  if (plVar1 != (longlong *)0x0) {
    local_68 = 0;
    uStack_60 = 0;
    local_48 = 0x3f800000;
    uStack_40 = 0x3f8000003f800000;
    local_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0x3f800000;
    uStack_1c = 0x7f7fffff;
    local_58 = 0x3f800000;
    uStack_54 = 0x3dcccccd;
    uStack_50 = 0;
    uStack_4c = 0x3f800000;
    local_30 = 0;
    local_38 = 0;
    local_18 = 0;
    (**(code **)(*plVar1 + 0x270))(plVar1,&local_68,param_2);
  }
  return local_58;
}



// FUNCTION 1430316d0 FUN_1430316d0 body=124 status=ok
// SIG undefined FUN_1430316d0(void)

ulonglong FUN_1430316d0(undefined8 param_1,uint param_2,int param_3)

{
  longlong *plVar1;
  ushort uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_2;
  lVar3 = FUN_140626d60();
  plVar1 = *(longlong **)(lVar3 + 0x440);
  if (param_2 != 0xffffffff) {
    while (uVar2 = (**(code **)(*plVar1 + 0x148))(plVar1,uVar5), param_3 < (int)(uint)uVar2) {
      uVar4 = (**(code **)(*plVar1 + 0x150))(plVar1,uVar5);
      uVar5 = uVar4 & 0xffffffff;
      if ((int)uVar4 == -1) {
        return uVar4;
      }
    }
  }
  return uVar5;
}



// FUNCTION 143031760 FUN_143031760 body=613 status=ok
// SIG undefined FUN_143031760(void)

void FUN_143031760(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_142231c90();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146b47130) && (_Init_thread_header(&DAT_146b47130), DAT_146b47130 == -1)) {
    uVar1 = FUN_143036740();
    FUN_143036740();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"FractureBuffer",1);
    DAT_146b47128 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47130);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47128 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b47128 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47128 + 0x30));
  }
  if ((*piVar5 < DAT_146b47140) && (_Init_thread_header(&DAT_146b47140), DAT_146b47140 == -1)) {
    uVar1 = FUN_143036740();
    FUN_143036740();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"TransformBuffer",1);
    DAT_146b47138 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47140);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47138 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b47138 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47138 + 0x30));
  }
  if ((*piVar5 < DAT_146b47150) && (_Init_thread_header(&DAT_146b47150), DAT_146b47150 == -1)) {
    uVar1 = FUN_143036740();
    FUN_143036740();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"SyncID",1);
    DAT_146b47148 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47150);
  }
  if (0 < *(int *)(DAT_146b47148 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b47148 + 0x40) + (short)iVar4;
      local_14 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146b47148 + 0x30));
  }
  return;
}



// FUNCTION 1430319d0 FUN_1430319d0 body=221 status=ok
// SIG undefined FUN_1430319d0(void)

longlong FUN_1430319d0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_38 [48];
  
  lVar5 = 0;
  if (((((int)param_1[1] < 1) || (lVar5 = *(longlong *)(*param_1 + 8), lVar5 == 0)) &&
      (param_2 != 0)) &&
     ((((*(uint *)(param_2 + 0x830) & 0x400) == 0 && (*(longlong *)(param_2 + 0x218) != 0)) &&
      (*(char *)(param_2 + 0x70d) == '\0')))) {
    uVar3 = FActorSpawnParameters::FActorSpawnParameters(local_38);
    uVar4 = FUN_143036940();
    lVar5 = UWorld::SpawnActor(param_2,uVar4,0,0,uVar3);
    if (lVar5 != 0) {
      iVar2 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar2);
      }
      plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x10);
      *plVar1 = param_2;
      plVar1[1] = lVar5;
    }
  }
  return lVar5;
}



// FUNCTION 143031ab0 FUN_143031ab0 body=217 status=ok
// SIG undefined FUN_143031ab0(void)

float FUN_143031ab0(longlong param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  
  if ((*(longlong *)(param_1 + 0xa78) != 0) && (fVar5 = *(float *)(param_1 + 0xb40), 1e-08 <= fVar5)
     ) {
    if (*(char *)(param_1 + 0xb68) != '\0') {
      uVar3 = 0;
      iVar4 = 0;
      if (((longlong)fVar5 & 0x7fffffffU) != 0) {
        do {
          cVar1 = (**(code **)(**(longlong **)(param_1 + 0xa78) + 0x140))
                            (*(longlong **)(param_1 + 0xa78),uVar3);
          if ((cVar1 == '\0') &&
             (cVar1 = (**(code **)(**(longlong **)(param_1 + 0xa78) + 0x240))
                                (*(longlong **)(param_1 + 0xa78),uVar3), cVar1 == '\0')) {
            iVar2 = 0;
          }
          else {
            iVar2 = 1;
          }
          fVar5 = *(float *)(param_1 + 0xb40);
          iVar4 = iVar4 + iVar2;
          uVar3 = uVar3 + 1;
        } while (uVar3 < (uint)((int)(longlong)fVar5 * 2));
      }
      return (float)iVar4 / (fVar5 + fVar5);
    }
    return 0.0;
  }
  return -1.0;
}



// FUNCTION 143031b90 FUN_143031b90 body=294 status=ok
// SIG undefined FUN_143031b90(void)

void FUN_143031b90(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  
  FUN_142340f20();
  lVar7 = FUN_140626d60(param_1);
  if ((lVar7 != 0) && (*(longlong **)(lVar7 + 0x440) != (longlong *)0x0)) {
    uVar4 = (**(code **)(**(longlong **)(lVar7 + 0x440) + 0xc0))();
    lVar1 = *(longlong *)(param_1 + 0x118);
    *(float *)(param_1 + 0xb40) = (float)uVar4 * 0.5;
    if (lVar1 != 0) {
      lVar8 = FUN_143036740();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (*(char *)(lVar1 + 0x4b8) == '\0')) {
        iVar9 = 0;
        uVar4 = 0;
        iVar5 = (**(code **)(**(longlong **)(lVar7 + 0x440) + 0xc0))();
        if (iVar5 != 0) {
          do {
            uVar3 = (**(code **)(**(longlong **)(lVar7 + 0x440) + 0x148))
                              (*(longlong **)(lVar7 + 0x440),uVar4);
            if (uVar3 <= DAT_146b46ff4) {
              iVar9 = iVar9 + 1;
            }
            uVar4 = uVar4 + 1;
            uVar6 = (**(code **)(**(longlong **)(lVar7 + 0x440) + 0xc0))();
          } while (uVar4 < uVar6);
        }
        *(int *)(param_1 + 0xb44) = iVar9 * 0x2c + 0x18;
      }
    }
  }
  return;
}



// FUNCTION 143031cc0 FUN_143031cc0 body=47 status=ok
// SIG undefined FUN_143031cc0(void)

void FUN_143031cc0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &PTR_FUN_145a528a0;
    return;
  }
  return;
}



// FUNCTION 143031cf0 FUN_143031cf0 body=2067 status=ok
// SIG undefined FUN_143031cf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143031cf0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  char *pcVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_148 [32];
  float local_128;
  float local_124;
  undefined8 local_120;
  ulonglong local_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong *local_100;
  longlong local_f8;
  ushort local_e8 [2];
  undefined4 local_e4;
  undefined8 local_a0;
  undefined8 local_98;
  longlong *local_90;
  ulonglong local_88;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_100 = param_2;
  lVar8 = FUN_140626d60();
  plVar11 = *(longlong **)(lVar8 + 0x440);
  lVar8 = FUN_142698570(param_1 + 0x3b0);
  local_f8 = lVar8;
  uVar5 = (**(code **)(*plVar11 + 0xc0))(plVar11);
  uVar15 = 0;
  fVar20 = 0.0;
  if (uVar5 != 0) {
    do {
      sVar4 = (**(code **)(*plVar11 + 0x148))(plVar11,uVar15);
      if (sVar4 == 0) {
        uVar6 = (**(code **)(*plVar11 + 0x160))(plVar11,uVar15);
        uVar7 = (**(code **)(*plVar11 + 0x168))(plVar11,uVar6);
        uVar13 = (ulonglong)uVar7;
        puVar9 = (undefined8 *)(**(code **)(*plVar11 + 0x170))(plVar11,uVar6);
        if (uVar7 != 0) {
          do {
            plVar2 = (longlong *)*puVar9;
            local_128 = 0.0;
            local_e4 = 0;
            local_a0 = 0;
            local_98 = 0;
            local_e8[0] = 0x100;
            local_90 = plVar2;
            local_a0 = (**(code **)(*plVar2 + 0x78))(plVar2);
            lVar8 = NvParameterized::findParam(plVar2,"volume",local_e8);
            if (lVar8 != 0) {
              (**(code **)(*local_90 + 0x250))(local_90,local_e8,&local_128);
            }
            fVar20 = fVar20 + local_128;
            puVar9 = puVar9 + 1;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
      }
      uVar15 = uVar15 + 1;
      lVar8 = local_f8;
      param_2 = local_100;
    } while (uVar15 < uVar5);
  }
  *(float *)(param_1 + 0xb48) = fVar20;
  if (*(char *)(param_1 + 3000) == '\0') {
    fVar17 = 0.001;
    if (lVar8 != 0) {
      fVar17 = *(float *)(lVar8 + 0x38) * 0.001;
    }
    *(float *)(param_1 + 0xbbc) = fVar17 * fVar20;
  }
  NvParameterized::setParamBool(param_2,"p3ActorDescTemplate.flags.eSEND_SLEEP_NOTIFIES",1);
  local_e4 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_e8[0] = 0x100;
  local_90 = param_2;
  local_a0 = (**(code **)(*param_2 + 0x78))(param_2);
  lVar8 = NvParameterized::findParam(param_2,"p3BodyDescTemplate.density",local_e8);
  if (lVar8 != 0) {
    (**(code **)(*local_90 + 0x250))(local_90,local_e8,&local_124);
  }
  if (*(char *)(param_1 + 3000) != '\0') {
    local_124 = *(float *)(param_1 + 0xbbc) / *(float *)(param_1 + 0xb48);
    NvParameterized::setParamF32(param_2,"p3BodyDescTemplate.density");
  }
  NvParameterized::setParamF32(param_2,"actorDescTemplate.density",local_124);
  NvParameterized::setParamF32(param_2,"defaultBehaviorGroup.density",local_124);
  if (*(char *)(param_1 + 0xba2) != '\0') {
    lVar10 = FUN_140626d60(param_1);
    plVar11 = (longlong *)UGameMapsSettings::GetPrivateStaticClass();
    lVar8 = plVar11[0x1f];
    if (lVar8 == 0) {
      (**(code **)(*plVar11 + 0x368))(plVar11);
      lVar8 = plVar11[0x1f];
    }
    cVar1 = *(char *)(param_1 + 0xba8);
    if (cVar1 == '\0') {
      fVar20 = *(float *)(lVar8 + 0x134);
    }
    else if (cVar1 == '\x01') {
      fVar20 = *(float *)(lVar8 + 0x138);
    }
    else if (cVar1 == '\x02') {
      fVar20 = *(float *)(lVar8 + 0x13c);
    }
    else if (cVar1 == '\x03') {
      fVar20 = *(float *)(lVar10 + 0x368);
    }
    else {
      fVar20 = 1.0;
    }
    plVar11 = (longlong *)UAudioSettings::GetPrivateStaticClass();
    lVar8 = plVar11[0x1f];
    if (lVar8 == 0) {
      (**(code **)(*plVar11 + 0x368))(plVar11);
      lVar8 = plVar11[0x1f];
    }
    lVar10 = FUN_142698570(param_1 + 0x3b0);
    fVar17 = 0.3;
    if (lVar10 != 0) {
      fVar17 = *(float *)(lVar10 + 0x30);
    }
    if (*(float *)(lVar8 + 0x38) == 0.0) {
      fVar18 = 1.0;
    }
    else {
      fVar18 = ABS(*(float *)(lVar8 + 0x38));
    }
    fVar19 = *(float *)(param_1 + 0xbbc);
    fVar16 = *(float *)(param_1 + 0xba4) * 100.0;
    if (fVar19 <= 0.0) {
      fVar19 = 1.0;
    }
    fVar21 = 0.0;
    fVar18 = SQRT((fVar16 + fVar16) / fVar18) * fVar18;
    iVar3 = 0;
    while ((10.0 < fVar18 && (iVar3 < 10))) {
      fVar21 = fVar21 + fVar18 * fVar19;
      fVar18 = fVar18 * fVar17;
      iVar3 = iVar3 + 1;
    }
    NvParameterized::setParamF32(param_2,"destructibleParameters.forceToDamage",fVar20 / fVar21);
    NvParameterized::setParamF32(param_2,"defaultBehaviorGroup.damageThreshold",fVar20);
    uVar6 = 2;
    if (*(char *)(param_1 + 0xb18) == '\0') {
      uVar6 = *(undefined4 *)(param_1 + 0xbac);
    }
    local_e4 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_e8[0] = 0;
    local_90 = param_2;
    local_a0 = (**(code **)(*param_2 + 0x78))(param_2);
    local_90 = (longlong *)
               NvParameterized::findParam
                         (param_2,"destructibleParameters.impactDamageDefaultDepth",local_e8);
    local_e8[0] = local_e8[0] & 0xff;
    if (local_90 != (longlong *)0x0) {
      (**(code **)(*local_90 + 0x198))(local_90,local_e8,uVar6);
    }
    if (*(char *)(param_1 + 0xbb1) == '\0') {
      pcVar12 = "destructibleParameters.impactVelocityThreshold";
      fVar20 = fVar21;
LAB_1430321b7:
      NvParameterized::setParamF32(param_2,pcVar12,fVar20);
    }
    else {
      fVar20 = *(float *)(param_1 + 0xbb4);
      if (1e-08 < fVar20) {
        pcVar12 = "destructibleParameters.impactVelocityThreshold";
        goto LAB_1430321b7;
      }
    }
    if (*(char *)(param_1 + 0xbb0) != '\0') {
      if (ABS(fVar21) <= 1e-08) {
        fVar21 = 0.0001;
      }
      NvParameterized::setParamF32(param_2,"defaultBehaviorGroup.materialStrength",fVar21 * 1.01);
    }
  }
  if (*(char *)(param_1 + 0xbc0) != '\0') {
    if ((*(float *)(param_1 + 0xbc4) == 0.0) && (*(float *)(param_1 + 0xbc8) == 0.0)) {
      uVar14 = 0;
    }
    else {
      uVar14 = 1;
    }
    NvParameterized::setParamBool(param_2,"destructibleParameters.flags.DEBRIS_TIMEOUT",uVar14);
    NvParameterized::setParamF32
              (param_2,"destructibleParameters.debrisLifetimeMin",*(undefined4 *)(param_1 + 0xbc4));
    NvParameterized::setParamF32
              (param_2,"destructibleParameters.debrisLifetimeMax",*(undefined4 *)(param_1 + 0xbc8));
  }
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_e4 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_e8[0] = 0x100;
  local_90 = param_2;
  local_a0 = (**(code **)(*param_2 + 0x78))(param_2);
  lVar8 = NvParameterized::findParam
                    (param_2,"p3ShapeDescTemplate.simulationFilterData.word1",local_e8);
  if (lVar8 != 0) {
    (**(code **)(*local_90 + 0x210))(local_90,local_e8,(longlong)&local_110 + 4);
  }
  local_e4 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_e8[0] = 0x100;
  local_90 = param_2;
  local_a0 = (**(code **)(*param_2 + 0x78))(param_2);
  lVar8 = NvParameterized::findParam
                    (param_2,"p3ShapeDescTemplate.simulationFilterData.word3",local_e8);
  if (lVar8 != 0) {
    (**(code **)(*local_90 + 0x210))(local_90,local_e8,(longlong)&local_108 + 4);
  }
  local_e4 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_e8[0] = 0x100;
  local_90 = param_2;
  local_a0 = (**(code **)(*param_2 + 0x78))(param_2);
  lVar8 = NvParameterized::findParam(param_2,"p3ShapeDescTemplate.queryFilterData.word1",local_e8);
  if (lVar8 != 0) {
    (**(code **)(*local_90 + 0x210))(local_90,local_e8,(longlong)&local_120 + 4);
  }
  local_e4 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_e8[0] = 0x100;
  local_90 = param_2;
  local_a0 = (**(code **)(*param_2 + 0x78))(param_2);
  lVar8 = NvParameterized::findParam(param_2,"p3ShapeDescTemplate.queryFilterData.word2",local_e8);
  if (lVar8 != 0) {
    (**(code **)(*local_90 + 0x210))(local_90,local_e8,&local_118);
  }
  local_108 = local_108 | 0x800000000;
  uVar5 = local_110._4_4_;
  if (*(char *)(param_1 + 0xb6a) != '\0') {
    uVar5 = local_110._4_4_ | 0x40;
    local_110 = local_110 | 0x4000000000;
  }
  cVar1 = *(char *)(param_1 + 0xb90);
  if (cVar1 == '\0') {
    local_120 = local_120 | 0x400000000;
    local_118 = local_118 | 4;
LAB_143032461:
    uVar5 = ~(~uVar5 | 0x20004);
  }
  else {
    if (cVar1 == '\x01') goto LAB_143032461;
    if (cVar1 != '\x02') goto LAB_143032473;
    uVar5 = uVar5 | 0x20000;
    local_118 = local_118 | 4;
    local_120 = CONCAT44(~(~local_120._4_4_ | 4),(undefined4)local_120);
  }
  local_110 = CONCAT44(uVar5,(undefined4)local_110);
LAB_143032473:
  NvParameterized::setParamU32(param_2,"p3ShapeDescTemplate.simulationFilterData.word1");
  NvParameterized::setParamU32
            (param_2,"p3ShapeDescTemplate.simulationFilterData.word3",local_108._4_4_);
  NvParameterized::setParamU32(param_2,"p3ShapeDescTemplate.queryFilterData.word1",local_120._4_4_);
  NvParameterized::setParamU32
            (param_2,"p3ShapeDescTemplate.queryFilterData.word2",local_118 & 0xffffffff);
  NvParameterized::setParamU32
            (param_2,"p3BodyDescTemplate.solverIterationCount",*(undefined4 *)(param_1 + 0x4a8));
  NvParameterized::setParamU32
            (param_2,"p3BodyDescTemplate.velocityIterationCount",*(undefined4 *)(param_1 + 0x4ac));
  return;
}



// FUNCTION 143032550 FUN_143032550 body=1067 status=ok
// SIG undefined FUN_143032550(void)

ulonglong FUN_143032550(char *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong **pplVar5;
  undefined4 *puVar6;
  ushort *puVar7;
  short *psVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ushort local_res10 [4];
  ushort local_res18 [4];
  short local_res20 [4];
  ushort local_68 [4];
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  ulonglong local_48;
  
  plVar3 = (longlong *)*param_2;
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)param_2[1];
    if (plVar3 != (longlong *)0x0) {
      puVar6 = *(undefined4 **)plVar3[1];
      if ((undefined4 *)((undefined8 *)plVar3[1])[1] < puVar6 + 1) {
        (**(code **)(*plVar3 + 0x50))(plVar3,param_1 + 8,4);
        if ((*(byte *)((longlong)plVar3 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(plVar3,param_1 + 8,4);
        }
      }
      else {
        *(undefined4 *)(param_1 + 8) = *puVar6;
        *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 4;
      }
      puVar7 = *(ushort **)plVar3[1];
      if ((ushort *)((undefined8 *)plVar3[1])[1] < puVar7 + 1) {
        (**(code **)(*plVar3 + 0x50))(plVar3,local_68,2);
        if ((*(byte *)((longlong)plVar3 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(plVar3,local_68,2);
        }
      }
      else {
        local_68[0] = *puVar7;
        *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 2;
      }
      puVar7 = *(ushort **)plVar3[1];
      if ((ushort *)((undefined8 *)plVar3[1])[1] < puVar7 + 1) {
        (**(code **)(*plVar3 + 0x50))(plVar3,local_res18,2);
        if ((*(byte *)((longlong)plVar3 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(plVar3,local_res18,2);
        }
      }
      else {
        local_res18[0] = *puVar7;
        *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 2;
      }
      uVar11 = (ulonglong)local_68[0];
      iVar2 = *(int *)(param_1 + 0x18);
      if (iVar2 < (int)((uint)local_68[0] + (uint)local_res18[0])) {
        if (0 < (int)((uint)local_68[0] - iVar2)) {
          local_50 = 0;
          local_48 = 0;
          if (local_res18[0] != 0) {
            local_48 = (ulonglong)local_res18[0];
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_50,0);
          }
          lVar4 = local_50;
          uVar11 = (**(code **)(*plVar3 + 0x50))(plVar3,local_50,local_res18[0]);
          if (lVar4 != 0) {
            uVar11 = FMemory::Free(lVar4);
          }
          return uVar11 & 0xffffffffffffff00;
        }
        iVar9 = (uint)local_68[0] + (uint)local_res18[0];
        *(int *)(param_1 + 0x18) = iVar9;
        if (*(int *)(param_1 + 0x1c) < iVar9) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x10,iVar2);
          uVar11 = (ulonglong)local_68[0];
        }
      }
      (**(code **)(*plVar3 + 0x50))(plVar3,uVar11 + *(longlong *)(param_1 + 0x10),local_res18[0]);
    }
  }
  else {
    lVar4 = param_2[3];
    if ((0 < *(int *)(param_1 + 0x18)) &&
       ((lVar4 == 0 || (*(int *)(param_1 + 4) != *(int *)(lVar4 + 8))))) {
      plVar12 = (longlong *)0x0;
      local_res10[0] = 0;
      if ((*param_1 != '\0') && (lVar4 != 0)) {
        local_res10[0] = *(ushort *)(lVar4 + 0xc);
      }
      local_res20[0] = (short)*(int *)(param_1 + 0x18) - local_res10[0];
      if (local_res20[0] != 0) {
        plVar10 = (longlong *)operator_new(0x10);
        plVar13 = plVar12;
        if (plVar10 != (longlong *)0x0) {
          *(undefined4 *)(plVar10 + 1) = 0;
          *plVar10 = (longlong)&PTR_FUN_145a55f50;
          *(undefined2 *)((longlong)plVar10 + 0xc) = 0;
          plVar13 = plVar10;
        }
        local_60 = plVar13;
        plVar10 = (longlong *)operator_new(0x18);
        if (plVar10 != (longlong *)0x0) {
          *(undefined4 *)(plVar10 + 1) = 1;
          *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
          *plVar10 = (longlong)&PTR_FUN_143f3f2e0;
          plVar10[2] = (longlong)plVar13;
          plVar12 = plVar10;
        }
        local_58 = plVar12;
        SharedPointerInternals::EnableSharedFromThis(&local_60,plVar13,plVar13);
        pplVar5 = (longlong **)param_2[2];
        if (pplVar5 != &local_60) {
          *pplVar5 = local_60;
          local_60 = (longlong *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(pplVar5 + 1,&local_58);
          plVar12 = local_58;
        }
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar12 + 1;
          lVar4 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
        *(undefined4 *)(plVar13 + 1) = *(undefined4 *)(param_1 + 4);
        *(undefined2 *)((longlong)plVar13 + 0xc) = *(undefined2 *)(param_1 + 0x18);
        puVar6 = *(undefined4 **)plVar3[1];
        if ((undefined4 *)((undefined8 *)plVar3[1])[1] < puVar6 + 1) {
          (**(code **)(*plVar3 + 0x50))(plVar3,param_1 + 8,4);
          if ((*(byte *)((longlong)plVar3 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(plVar3,param_1 + 8,4);
          }
        }
        else {
          *(undefined4 *)(param_1 + 8) = *puVar6;
          *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 4;
        }
        puVar7 = *(ushort **)plVar3[1];
        if ((ushort *)((undefined8 *)plVar3[1])[1] < puVar7 + 1) {
          (**(code **)(*plVar3 + 0x50))(plVar3,local_res10,2);
          if ((*(byte *)((longlong)plVar3 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(plVar3,local_res10,2);
          }
        }
        else {
          local_res10[0] = *puVar7;
          *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 2;
        }
        psVar8 = *(short **)plVar3[1];
        if ((short *)((undefined8 *)plVar3[1])[1] < psVar8 + 1) {
          (**(code **)(*plVar3 + 0x50))(plVar3,local_res20,2);
          if ((*(byte *)((longlong)plVar3 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(plVar3,local_res20,2);
          }
        }
        else {
          local_res20[0] = *psVar8;
          *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 2;
        }
        (**(code **)(*plVar3 + 0x50))
                  (plVar3,(ulonglong)local_res10[0] + *(longlong *)(param_1 + 0x10),local_res20[0]);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143032980 FUN_143032980 body=937 status=ok
// SIG undefined FUN_143032980(void)

void FUN_143032980(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong lVar10;
  
  FUN_140627350();
  if (*(longlong *)(param_1 + 0xb98) != 0) {
    *(byte *)(param_1 + 0x3c0) = *(byte *)(param_1 + 0x3c0) | 2;
  }
  if (*(longlong *)(param_1 + 0xa78) != 0) {
    puVar6 = (undefined8 *)operator_new();
    puVar7 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[0xc] = 0;
      *(undefined8 *)((longlong)puVar6 + 0x5c) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x74) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x7c) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x84) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x8c) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x94) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x9c) = 0;
      *(undefined8 *)((longlong)puVar6 + 0xa4) = 0;
      *(undefined8 *)((longlong)puVar6 + 0xac) = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0xffffffffffffffff;
      *(undefined4 *)(puVar6 + 3) = 0;
      *(undefined4 *)((longlong)puVar6 + 0x1c) = 0x3f800000;
      *(undefined4 *)(puVar6 + 4) = 0x41200000;
      *(undefined4 *)((longlong)puVar6 + 0x24) = 0x3f800000;
      puVar6[5] = 0x41200000;
      *(undefined4 *)(puVar6 + 6) = 0xc61c4000;
      *(undefined4 *)((longlong)puVar6 + 0x34) = 0xc61c4000;
      *(undefined4 *)(puVar6 + 7) = 0xc61c4000;
      *(undefined4 *)((longlong)puVar6 + 0x3c) = 0x461c4000;
      *(undefined4 *)(puVar6 + 8) = 0x461c4000;
      *(undefined8 *)((longlong)puVar6 + 0x44) = 0x461c4000;
      *(undefined8 *)((longlong)puVar6 + 0x4c) = 1;
      *(undefined4 *)((longlong)puVar6 + 0x54) = 0xffffff;
      *(undefined4 *)((longlong)puVar6 + 100) = 0;
      puVar6[0xb] = 0;
      *(undefined4 *)(puVar6 + 0xd) = 0xbf800000;
      *(undefined2 *)((longlong)puVar6 + 0x6c) = 0xffff;
      *(undefined4 *)(puVar6 + 0xe) = 0;
      *(undefined1 *)((longlong)puVar6 + 0xb4) = 1;
      *(undefined4 *)(puVar6 + 0x17) = 2;
      *(undefined1 *)((longlong)puVar6 + 0xbc) = 0;
      *(undefined4 *)(puVar6 + 0x18) = 0x3ca3d70a;
      *(undefined4 *)((longlong)puVar6 + 0xc4) = 0x3f800000;
      *(undefined4 *)(puVar6 + 0x19) = 10;
      *(undefined4 *)((longlong)puVar6 + 0xcc) = 0x3e99999a;
      *(undefined4 *)(puVar6 + 0x1a) = 0x3d75c28f;
      *(undefined4 *)((longlong)puVar6 + 0xd4) = 0x3fb33333;
      puVar6[0x1b] = 0x3e99999a;
      *(undefined2 *)(puVar6 + 0x1c) = 0;
      *(undefined1 *)((longlong)puVar6 + 0xe4) = 0;
      puVar7 = puVar6;
    }
    *(undefined8 **)(param_1 + 0xb50) = puVar7;
    puVar8 = (undefined4 *)(**(code **)(**(longlong **)(param_1 + 0xa78) + 0x68))();
    puVar1 = *(undefined4 **)(param_1 + 0xb50);
    *puVar1 = *puVar8;
    puVar1[1] = puVar8[1];
    puVar1[2] = puVar8[2];
    puVar1[3] = puVar8[3];
    puVar1[4] = puVar8[4];
    puVar1[5] = puVar8[5];
    puVar1[6] = puVar8[6];
    puVar1[7] = puVar8[7];
    puVar1[8] = puVar8[8];
    puVar1[9] = puVar8[9];
    puVar1[10] = puVar8[10];
    puVar1[0xb] = puVar8[0xb];
    puVar1[0xc] = puVar8[0xc];
    puVar1[0xd] = puVar8[0xd];
    puVar1[0xe] = puVar8[0xe];
    puVar1[0xf] = puVar8[0xf];
    puVar1[0x10] = puVar8[0x10];
    puVar1[0x11] = puVar8[0x11];
    puVar1[0x12] = puVar8[0x12];
    puVar1[0x13] = puVar8[0x13];
    puVar1[0x14] = puVar8[0x14];
    *(undefined2 *)(puVar1 + 0x15) = *(undefined2 *)(puVar8 + 0x15);
    *(undefined1 *)((longlong)puVar1 + 0x56) = *(undefined1 *)((longlong)puVar8 + 0x56);
    *(undefined1 *)((longlong)puVar1 + 0x57) = *(undefined1 *)((longlong)puVar8 + 0x57);
    uVar5 = *(undefined8 *)(puVar8 + 0x18);
    *(undefined8 *)(puVar1 + 0x16) = *(undefined8 *)(puVar8 + 0x16);
    *(undefined8 *)(puVar1 + 0x18) = uVar5;
    puVar1[0x1a] = puVar8[0x1a];
    *(undefined1 *)(puVar1 + 0x1b) = *(undefined1 *)(puVar8 + 0x1b);
    *(undefined1 *)((longlong)puVar1 + 0x6d) = *(undefined1 *)((longlong)puVar8 + 0x6d);
    puVar1[0x1c] = puVar8[0x1c];
    puVar1[0x1d] = puVar8[0x1d];
    puVar1[0x1e] = puVar8[0x1e];
    puVar1[0x1f] = puVar8[0x1f];
    puVar1[0x20] = puVar8[0x20];
    puVar1[0x21] = puVar8[0x21];
    puVar1[0x22] = puVar8[0x22];
    puVar1[0x23] = puVar8[0x23];
    puVar1[0x24] = puVar8[0x24];
    puVar1[0x25] = puVar8[0x25];
    puVar1[0x26] = puVar8[0x26];
    puVar1[0x27] = puVar8[0x27];
    puVar1[0x28] = puVar8[0x28];
    puVar1[0x29] = puVar8[0x29];
    puVar1[0x2a] = puVar8[0x2a];
    puVar1[0x2b] = puVar8[0x2b];
    puVar1[0x2c] = puVar8[0x2c];
    uVar5 = *(undefined8 *)(puVar8 + 0x2f);
    *(undefined8 *)(puVar1 + 0x2d) = *(undefined8 *)(puVar8 + 0x2d);
    *(undefined8 *)(puVar1 + 0x2f) = uVar5;
    uVar2 = puVar8[0x32];
    uVar3 = puVar8[0x33];
    uVar4 = puVar8[0x34];
    puVar1[0x31] = puVar8[0x31];
    puVar1[0x32] = uVar2;
    puVar1[0x33] = uVar3;
    puVar1[0x34] = uVar4;
    uVar2 = puVar8[0x36];
    uVar3 = puVar8[0x37];
    uVar4 = puVar8[0x38];
    puVar1[0x35] = puVar8[0x35];
    puVar1[0x36] = uVar2;
    puVar1[0x37] = uVar3;
    puVar1[0x38] = uVar4;
    *(undefined1 *)(puVar1 + 0x39) = *(undefined1 *)(puVar8 + 0x39);
    if ((*(char *)(param_1 + 0xb90) == '\x02') &&
       (lVar9 = (**(code **)(**(longlong **)(param_1 + 0xa78) + 0xd0))
                          (*(longlong **)(param_1 + 0xa78),0), lVar9 != 0)) {
      lVar10 = *(longlong *)(param_1 + 0x120);
      if (lVar10 == 0) {
        lVar10 = FUN_1423407b0(param_1);
      }
      FUN_142db9650(lVar10,lVar9,1);
    }
  }
  return;
}



// FUNCTION 143032d30 FUN_143032d30 body=3378 status=ok
// SIG undefined FUN_143032d30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143032d30(longlong *param_1,undefined8 *param_2)

{
  float fVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  int *piVar13;
  uint uVar14;
  float fVar15;
  char cVar16;
  ushort uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  ulonglong uVar22;
  int *piVar23;
  int **ppiVar24;
  int **ppiVar25;
  float *pfVar26;
  int *piVar27;
  longlong *plVar28;
  undefined1 *puVar29;
  int *piVar30;
  longlong *plVar31;
  ulonglong uVar32;
  uint *puVar33;
  longlong *plVar34;
  int *piVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  float local_1b0 [2];
  longlong *local_1a8;
  float local_1a0;
  undefined8 local_198;
  float fStack_190;
  int iStack_18c;
  undefined4 uStack_188;
  float fStack_184;
  float local_180;
  undefined1 local_17c;
  int local_178;
  int *local_170;
  float local_168;
  uint local_160;
  int *local_158;
  uint local_150;
  int local_14c;
  int *local_148;
  undefined8 *local_140;
  int *local_138;
  longlong *local_130;
  int *local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  float local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  ulonglong local_b8;
  
  puVar29 = auStack_1d8;
  ppiVar25 = (int **)&local_1b8;
  local_b8 = DAT_1468387a8 ^ (ulonglong)ppiVar25;
  if (param_1[0x14f] == 0) goto LAB_1430339ef;
  plVar34 = (longlong *)param_1[0x23];
  local_1a8 = param_1;
  local_140 = param_2;
  if (plVar34 == (longlong *)0x0) {
LAB_143032e10:
    plVar34 = (longlong *)0x0;
    local_130 = (longlong *)0x0;
  }
  else {
    local_130 = plVar34;
    lVar21 = FUN_143036740();
    if ((*(int *)(plVar34[2] + 0x90) < *(int *)(lVar21 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar34[2] + 0x88) + (longlong)*(int *)(lVar21 + 0x90) * 8) !=
        lVar21 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (!bVar10) goto LAB_143032e10;
  }
  local_1b8 = (int *)param_2[10];
  lVar21 = param_1[0x24];
  fVar43 = *(float *)((longlong)param_1 + 0xb74);
  local_1b0[0] = *(float *)(param_2 + 0xb);
  local_168 = *(float *)(param_2 + 2);
  local_170 = (int *)param_2[1];
  if ((lVar21 != 0) || (lVar21 = FUN_1423407b0(param_1), lVar21 != 0)) {
    fVar43 = *(float *)(lVar21 + 0x790) - *(float *)(param_1 + 0x16f);
  }
  bVar10 = true;
  lVar21 = (**(code **)(*(longlong *)param_1[0x14f] + 0x68))();
  fVar1 = local_168;
  fVar15 = local_1b0[0];
  piVar30 = local_1b8;
  uVar2 = *(uint *)(param_2 + 8);
  uVar22 = 0;
  fVar41 = 0.0;
  fVar42 = 0.0;
  fVar36 = *(float *)(lVar21 + 0x14);
  fVar40 = 0.0;
  bVar12 = true;
  if (3 < uVar2) {
    puVar33 = (uint *)(param_2[7] + 0x24);
    pfVar26 = (float *)(param_2[7] + 0x44);
    uVar18 = (uVar2 - 4 >> 2) + 1;
    uVar32 = (ulonglong)uVar18;
    uVar22 = (ulonglong)(uVar18 * 4);
    do {
      bVar11 = false;
      if ((float)puVar33[-8] == fVar36) {
        bVar11 = bVar10;
      }
      if ((*puVar33 & 0x360) == 0) {
        bVar12 = false;
        fVar41 = fVar41 + (pfVar26[-0xc] + (float)puVar33[-7]) * 0.5;
        fVar42 = fVar42 + (pfVar26[-0xe] + pfVar26[-0xb]) * 0.5;
        fVar40 = fVar40 + (pfVar26[-0xd] + pfVar26[-10]) * 0.5;
      }
      bVar10 = false;
      if (pfVar26[-6] == fVar36) {
        bVar10 = bVar11;
      }
      if (((uint)pfVar26[2] & 0x360) == 0) {
        bVar12 = false;
        fVar41 = fVar41 + (pfVar26[-5] + pfVar26[-2]) * 0.5;
        fVar42 = fVar42 + (pfVar26[-4] + pfVar26[-1]) * 0.5;
        fVar40 = fVar40 + (pfVar26[-3] + *pfVar26) * 0.5;
      }
      bVar11 = false;
      if (pfVar26[4] == fVar36) {
        bVar11 = bVar10;
      }
      if (((uint)pfVar26[0xc] & 0x360) == 0) {
        bVar12 = false;
        fVar41 = fVar41 + (pfVar26[8] + pfVar26[5]) * 0.5;
        fVar42 = fVar42 + (pfVar26[9] + pfVar26[6]) * 0.5;
        fVar40 = fVar40 + (pfVar26[10] + pfVar26[7]) * 0.5;
      }
      bVar10 = false;
      if (pfVar26[0xe] == fVar36) {
        bVar10 = bVar11;
      }
      if (((uint)pfVar26[0x16] & 0x360) == 0) {
        bVar12 = false;
        fVar41 = fVar41 + (pfVar26[0x12] + pfVar26[0xf]) * 0.5;
        fVar42 = fVar42 + (pfVar26[0x13] + pfVar26[0x10]) * 0.5;
        fVar40 = fVar40 + (pfVar26[0x14] + pfVar26[0x11]) * 0.5;
      }
      puVar33 = puVar33 + 0x28;
      pfVar26 = pfVar26 + 0x28;
      uVar32 = uVar32 - 1;
    } while (uVar32 != 0);
  }
  if ((uint)uVar22 < uVar2) {
    uVar32 = (ulonglong)(uVar2 - (uint)uVar22);
    pfVar26 = (float *)(param_2[7] + 0x1c + uVar22 * 0x28);
    bVar11 = bVar10;
    do {
      bVar10 = false;
      if (pfVar26[-6] == fVar36) {
        bVar10 = bVar11;
      }
      if (((uint)pfVar26[2] & 0x360) == 0) {
        bVar12 = false;
        fVar41 = fVar41 + (pfVar26[-5] + pfVar26[-2]) * 0.5;
        fVar42 = fVar42 + (pfVar26[-4] + pfVar26[-1]) * 0.5;
        fVar40 = fVar40 + (pfVar26[-3] + *pfVar26) * 0.5;
      }
      pfVar26 = pfVar26 + 10;
      uVar32 = uVar32 - 1;
      bVar11 = bVar10;
    } while (uVar32 != 0);
  }
  if (uVar2 != 0) {
    fVar36 = 1.0 / (float)uVar2;
    fVar41 = fVar41 * fVar36;
    fVar42 = fVar42 * fVar36;
    fVar40 = fVar40 * fVar36;
  }
  if (((((char)param_1[0x174] != '\0') || (!bVar10)) && (!bVar12)) &&
     (*(float *)((longlong)param_1 + 0xb74) <= fVar43 &&
      fVar43 != *(float *)((longlong)param_1 + 0xb74))) {
    local_198 = local_1b8;
    fStack_190 = local_1b0[0];
    iStack_18c = (int)local_170;
    iVar19 = iStack_18c;
    uStack_188 = (undefined4)((ulonglong)local_170 >> 0x20);
    uVar7 = uStack_188;
    fStack_184 = local_168;
    *(float *)(param_1 + 0x16f) = fVar43 + *(float *)(param_1 + 0x16f);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x14d,&local_198);
    local_17c = *(char *)((longlong)param_1 + 0xb6b) != '\0';
    local_198 = (int *)CONCAT44(fVar42,fVar41);
    fStack_184 = fVar1;
    local_180 = (float)*(uint *)((longlong)param_2 + 0x2c) / *(float *)(param_1 + 0x168);
    local_1b0[0] = fVar40;
    fStack_190 = fVar40;
    iStack_18c = iVar19;
    uStack_188 = uVar7;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x170);
    if (plVar34 != (longlong *)0x0) {
      local_198 = piVar30;
      fStack_190 = fVar15;
      fStack_184 = fVar1;
      iStack_18c = iVar19;
      uStack_188 = uVar7;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(plVar34 + 0x8d);
    }
  }
  if (*(char *)((longlong)param_1 + 0xb6b) == '\0') {
    (**(code **)(*param_1 + 0xa30))(param_1);
  }
  if ((((char)param_1[0x16d] != '\0') && ((char)param_1[0x172] == '\0')) &&
     (iVar19 = (**(code **)(*(longlong *)*param_2 + 0x250))(), iVar19 == 0)) {
    if ((param_2[0xc] != 0) && (plVar34 != (longlong *)0x0)) {
      if ((*(byte *)((longlong)plVar34 + 0x92) & 0x40) != 0) {
        (**(code **)(*plVar34 + 0x600))(plVar34);
      }
      iVar19 = (int)plVar34[0x92] + 0x1c;
      *(int *)(plVar34 + 0x92) = iVar19;
      if (*(int *)((longlong)plVar34 + 0x494) < iVar19) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar34 + 0x91);
      }
      puVar3 = (undefined4 *)param_2[0xc];
      puVar4 = (undefined4 *)plVar34[0x91];
      uVar7 = puVar3[1];
      uVar8 = puVar3[2];
      uVar9 = puVar3[3];
      *puVar4 = *puVar3;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(puVar3 + 4);
      puVar4[6] = puVar3[6];
      FUN_14302f520(plVar34);
      param_1 = local_1a8;
    }
    *(undefined1 *)(param_1 + 0x172) = 2;
  }
  puVar29 = auStack_1d8;
  if (((plVar34 != (longlong *)0x0) && (puVar29 = auStack_1d8, (char)param_1[0x172] == '\0')) &&
     (puVar29 = auStack_1d8, (char)plVar34[0x25] == '\x03')) {
    puVar29 = auStack_1d8;
    if (*(char *)((longlong)plVar34 + 0x4e4) == '\0') {
      if ((char)plVar34[0x97] == '\0') {
        lVar21 = FUN_140626d60(param_1);
        if (lVar21 != 0) {
          FUN_140626d60(param_1);
        }
        iVar20 = *(int *)(param_2 + 8) * 0x2c + 0x18;
        iVar19 = *(int *)((longlong)param_1 + 0xb44);
        if (iVar20 <= *(int *)((longlong)param_1 + 0xb44)) {
          iVar19 = iVar20;
        }
        if (iVar19 == 0) {
          local_148 = (int *)0x0;
          puVar29 = auStack_1d8;
        }
        else {
          uVar22 = (longlong)(iVar19 + 0xf) + 0xf;
          if (uVar22 <= (ulonglong)(longlong)(iVar19 + 0xf)) {
            uVar22 = 0xffffffffffffff0;
          }
          puVar29 = auStack_1d8 + -(uVar22 & 0xfffffffffffffff0);
          local_148 = (int *)((longlong)local_1b0 + -(uVar22 & 0xfffffffffffffff0));
        }
        uVar22 = 0;
        if (DAT_14678b6bc == '\0') {
          *(undefined4 *)(plVar34 + 0x9c) = 0;
        }
        local_128 = (int *)((longlong)(int)plVar34[0x92] + plVar34[0x91]);
        *local_148 = (int)plVar34[0x9e];
        local_148[1] = 0;
        local_148[2] = 0;
        local_148[3] = 0;
        local_148[4] = 0;
        local_148[5] = 0;
        local_198 = (int *)0x0;
        local_170 = local_148;
        if ((int *)plVar34[0x91] != (int *)0x0) {
          local_170 = (int *)plVar34[0x91];
        }
        local_1a0 = 0.0;
        local_1b8 = local_148 + 6;
        local_160 = 0;
        iStack_18c = 0;
        piVar30 = local_148;
        local_138 = local_1b8;
        if (*(int *)(param_2 + 8) != 0) {
          piVar35 = local_148 + 10;
          uVar32 = uVar22;
          local_158 = piVar35;
          do {
            iVar19 = *(int *)(param_2[7] + uVar22 * 0x28);
            local_150 = *(uint *)(param_2[7] + 4 + uVar22 * 0x28);
            local_14c = iVar19;
            *(undefined8 *)(puVar29 + -8) = 0x143033415;
            local_178 = FUN_1430316d0(param_1,iVar19,DAT_146b46ff4);
            for (piVar27 = local_198; fVar36 = (float)uVar32, piVar23 = local_170,
                piVar27 != local_198 + (int)(float)uVar32; piVar27 = piVar27 + 1) {
              if (*piVar27 == local_178) goto LAB_1430335b4;
            }
            while (piVar23 != (int *)0x0) {
              uVar2 = piVar23[1];
              piVar35 = piVar23 + 6;
              uVar18 = 0;
              if (uVar2 != 0) {
                do {
                  uVar14 = DAT_146b46ff4;
                  iVar19 = *piVar35;
                  *(undefined8 *)(puVar29 + -8) = 0x143033471;
                  lVar21 = FUN_140626d60(param_1);
                  plVar34 = *(longlong **)(lVar21 + 0x440);
                  for (; iVar19 != -1; iVar19 = (*pcVar5)(plVar34,iVar19)) {
                    pcVar5 = *(code **)(*plVar34 + 0x148);
                    *(undefined8 *)(puVar29 + -8) = 0x14303348e;
                    uVar17 = (*pcVar5)(plVar34,iVar19);
                    if ((int)(uint)uVar17 <= (int)uVar14) break;
                    pcVar5 = *(code **)(*plVar34 + 0x150);
                    *(undefined8 *)(puVar29 + -8) = 0x1430334a3;
                  }
                  piVar30 = local_148;
                  param_2 = local_140;
                  if (iVar19 == local_178) goto LAB_1430335b0;
                  uVar18 = uVar18 + 1;
                  piVar35 = piVar35 + 0xb;
                  param_1 = local_1a8;
                } while (uVar18 < uVar2);
              }
              param_2 = local_140;
              piVar35 = local_158;
              fVar36 = local_1a0;
              if (piVar23 == piVar30) break;
              piVar23 = piVar23 + (ulonglong)(uint)piVar23[1] * 0xb + 6;
              if (piVar23 == local_128) {
                piVar23 = piVar30;
              }
            }
            iVar19 = local_178;
            if (DAT_146b46ff4 <= local_150) {
              local_1a0 = (float)((int)fVar36 + 1);
              fStack_190 = local_1a0;
              if (iStack_18c < (int)local_1a0) {
                *(undefined8 *)(puVar29 + -8) = 0x143033528;
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_198,fVar36);
              }
              local_198[(int)fVar36] = iVar19;
              local_1a0 = fStack_190;
            }
            piVar35[-3] = 0x14000000;
            *local_138 = local_14c;
            local_138 = local_138 + 0xb;
            piVar35[-2] = *(int *)(param_2 + 10);
            piVar35[-1] = *(int *)((longlong)param_2 + 0x54);
            *piVar35 = *(int *)(param_2 + 0xb);
            piVar35[1] = *(int *)(param_2 + 1);
            piVar35[2] = *(int *)((longlong)param_2 + 0xc);
            piVar35[3] = *(int *)(param_2 + 2);
            piVar35[4] = 0;
            piVar35[5] = 0;
            piVar35[6] = 0;
            local_158 = piVar35 + 0xb;
            piVar30[1] = piVar30[1] + 1;
LAB_1430335b0:
            uVar32 = (ulonglong)(uint)local_1a0;
            param_1 = local_1a8;
            piVar35 = local_158;
LAB_1430335b4:
            local_160 = local_160 + 1;
            uVar22 = (ulonglong)local_160;
          } while (local_160 < *(uint *)(param_2 + 8));
          uVar22 = (ulonglong)(uint)piVar30[1];
          plVar34 = local_130;
        }
        piVar27 = local_128;
        piVar35 = local_198;
        iVar19 = (int)uVar22;
        if (iVar19 != 0) {
          if ((*(byte *)((longlong)plVar34 + 0x92) & 0x40) != 0) {
            pcVar5 = *(code **)(*plVar34 + 0x600);
            *(undefined8 *)(puVar29 + -8) = 0x1430335fd;
            (*pcVar5)(plVar34);
            iVar19 = piVar30[1];
          }
          iVar20 = iVar19 * 0x2c;
          plVar6 = plVar34 + 0x91;
          if (fVar43 <= 1e-08) {
            piVar23 = (int *)*plVar6;
            piVar30 = (int *)*plVar6;
            while (piVar13 = piVar23, piVar13 != piVar27) {
              piVar30 = piVar13;
              piVar23 = piVar13 + (ulonglong)(uint)piVar13[1] * 0xb + 6;
            }
            piVar30[1] = piVar30[1] + iVar19;
            piVar30 = local_1b8;
          }
          else {
            iVar20 = iVar20 + 0x18;
          }
          iVar19 = (int)plVar34[0x92];
          *(int *)(plVar34 + 0x92) = iVar19 + iVar20;
          if (*(int *)((longlong)plVar34 + 0x494) < iVar19 + iVar20) {
            *(undefined8 *)(puVar29 + -8) = 0x143033669;
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar6,iVar19);
          }
          lVar21 = *plVar6;
          *(undefined8 *)(puVar29 + -8) = 0x14303367a;
          _guard_xfg_dispatch_icall_nop((void *)(iVar19 + lVar21),piVar30,(longlong)iVar20);
          *(int *)(plVar34 + 0x9c) = (int)plVar34[0x92];
          *(undefined8 *)(puVar29 + -8) = 0x14303368d;
          FUN_14302f520(plVar34);
        }
        param_1 = local_1a8;
        if (piVar35 != (int *)0x0) {
          *(undefined8 *)(puVar29 + -8) = 0x14303369a;
          FMemory::Free(piVar35);
          param_1 = local_1a8;
        }
      }
      else {
        plVar6 = (longlong *)param_2[9];
        puVar29 = auStack_1d8;
        if (plVar6 != (longlong *)0x0) {
          plVar28 = (longlong *)0x0;
          if ((short)plVar6[1] == 6) {
            plVar28 = plVar6;
          }
          cVar16 = (**(code **)(*plVar6 + 0x20))(plVar6,"PxRigidActor");
          plVar31 = (longlong *)0x0;
          if (cVar16 != '\0') {
            plVar31 = plVar6;
          }
          if (plVar28 == (longlong *)0x0) {
            local_1b8 = (int *)0x0;
            local_1b0[0] = 0.0;
            fVar43 = 0.0;
            ppiVar24 = ppiVar25;
          }
          else {
            ppiVar24 = (int **)(**(code **)(*plVar28 + 0x128))(plVar28,ppiVar25);
            fVar43 = *(float *)ppiVar24;
          }
          fVar36 = *(float *)((longlong)ppiVar24 + 4);
          fVar1 = *(float *)(ppiVar24 + 1);
          if (plVar28 == (longlong *)0x0) {
            local_1b8 = (int *)0x0;
            local_1b0[0] = 0.0;
            fVar40 = 0.0;
            ppiVar24 = ppiVar25;
          }
          else {
            ppiVar24 = (int **)(**(code **)(*plVar28 + 0x138))(plVar28,ppiVar25);
            fVar40 = *(float *)ppiVar24;
          }
          fVar41 = *(float *)((longlong)ppiVar24 + 4);
          fVar42 = *(float *)(ppiVar24 + 1);
          if (plVar31 == (longlong *)0x0) {
            fVar38 = 0.0;
            fVar39 = 0.0;
            fVar37 = 0.0;
          }
          else {
            lVar21 = (**(code **)(*plVar31 + 0xa0))(plVar31,&local_198);
            fVar38 = *(float *)((longlong)param_2 + 0x54) - *(float *)(lVar21 + 0x14);
            fVar39 = *(float *)(param_2 + 0xb) - *(float *)(lVar21 + 0x18);
            fVar37 = *(float *)(param_2 + 10) - *(float *)(lVar21 + 0x10);
          }
          param_1 = local_1a8;
          fVar43 = fVar43 + (fVar41 * fVar39 - fVar42 * fVar38);
          fVar36 = fVar36 + (fVar42 * fVar37 - fVar40 * fVar39);
          local_1b0[0] = fVar1 + (fVar40 * fVar38 - fVar41 * fVar37);
          local_1b8 = (int *)CONCAT44(fVar36,fVar43);
          if (((0.0001 < ABS(fVar43)) || (0.0001 < ABS(fVar36))) || (0.0001 < ABS(local_1b0[0]))) {
            bVar10 = false;
          }
          else {
            bVar10 = true;
          }
          if (bVar10) {
            local_1b8 = (int *)0x0;
            local_1b0[0] = 1.0;
          }
          else {
            local_168 = local_1b0[0];
            ppiVar25 = &local_170;
            local_170 = local_1b8;
          }
          local_198 = *ppiVar25;
          fStack_190 = *(float *)(ppiVar25 + 1);
          plVar6 = (longlong *)local_1a8[0x14f];
          iStack_18c = (int)piVar30;
          uStack_188 = (undefined4)((ulonglong)piVar30 >> 0x20);
          fStack_184 = fVar15;
          fVar43 = 0.0;
          if (plVar6 != (longlong *)0x0) {
            local_108 = 1.0;
            uStack_104 = 0x3dcccccd;
            uStack_100 = 0;
            uStack_fc = 0x3f800000;
            local_118 = 0;
            uStack_110 = 0;
            local_f8 = 0x3f800000;
            uStack_f0 = 0x3f8000003f800000;
            local_d8 = 0;
            uStack_d4 = 0;
            uStack_d0 = 0x3f800000;
            uStack_cc = 0x7f7fffff;
            local_e0 = 0;
            local_e8 = 0;
            local_c8 = 0;
            (**(code **)(*plVar6 + 0x270))(plVar6,&local_118,0xffffffff);
            fVar43 = local_108;
          }
          local_180 = fVar43 * -1.1;
          if ((*(byte *)((longlong)plVar34 + 0x92) & 0x40) != 0) {
            (**(code **)(*plVar34 + 0x600))(plVar34);
          }
          iVar19 = (int)plVar34[0x92] + 0x1c;
          *(int *)(plVar34 + 0x92) = iVar19;
          if (*(int *)((longlong)plVar34 + 0x494) < iVar19) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar34 + 0x91);
          }
          puVar3 = (undefined4 *)plVar34[0x91];
          *puVar3 = (undefined4)local_198;
          puVar3[1] = local_198._4_4_;
          puVar3[2] = fStack_190;
          puVar3[3] = iStack_18c;
          *(ulonglong *)(puVar3 + 4) = CONCAT44(fStack_184,uStack_188);
          puVar3[6] = local_180;
          FUN_14302f520(plVar34);
          puVar29 = auStack_1d8;
        }
      }
    }
    *(undefined1 *)((longlong)plVar34 + 0x4e4) = 0;
  }
  plVar34 = local_1a8;
  if (*(char *)((longlong)param_1 + 0xb6b) == '\0') {
    *(undefined8 *)(puVar29 + -8) = 0x1430339ef;
    FUN_143030d50(param_1);
    goto LAB_1430339ef;
  }
  if (param_1[0x16b] != 0) {
    lVar21 = local_1a8[0x24];
    if (lVar21 == 0) {
      *(undefined8 *)(puVar29 + -8) = 0x1430336d9;
      lVar21 = FUN_1423407b0(plVar34);
      if (lVar21 == 0) goto LAB_1430339dd;
    }
    if (*(longlong *)(lVar21 + 400) == 0) {
      lVar21 = *(longlong *)(lVar21 + 0x3f8);
    }
    else {
      lVar21 = *(longlong *)(*(longlong *)(lVar21 + 400) + 0x90);
    }
    if (lVar21 != 0) {
      *(undefined8 *)(puVar29 + -8) = 0x1430339d2;
      FUN_142880530(lVar21,param_1 + 0x16b);
      param_1[0x16b] = 0;
    }
  }
LAB_1430339dd:
  *(undefined8 *)(puVar29 + -8) = 0x1430339e5;
  FUN_143034560(plVar34);
LAB_1430339ef:
  *(undefined8 *)(puVar29 + -8) = 0x1430339fe;
  return;
}



// FUNCTION 143033a70 FUN_143033a70 body=47 status=ok
// SIG undefined FUN_143033a70(void)

void FUN_143033a70(longlong param_1)

{
  FUN_140627f50();
  if (*(longlong *)(param_1 + 0xb50) != 0) {
    FMemory::operator_delete(*(longlong *)(param_1 + 0xb50),0xe8);
    return;
  }
  return;
}



// FUNCTION 143033aa0 FUN_143033aa0 body=1188 status=ok
// SIG undefined FUN_143033aa0(void)

void FUN_143033aa0(longlong *param_1)

{
  int iVar1;
  float *pfVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint in_stack_fffffffffffffea8;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  float local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  float local_88;
  float local_84;
  float local_80;
  undefined8 local_78;
  
  if ((int)param_1[0x92] != (int)param_1[0x9c]) {
    plVar6 = (longlong *)0x0;
    if (param_1[0x9b] != 0) {
      *(undefined1 *)(param_1[0x9b] + 0xb6b) = 0;
      lVar3 = (**(code **)(*param_1 + 0x148))();
      if (lVar3 != 0) {
        plVar6 = *(longlong **)(lVar3 + 0x148);
      }
      if (plVar6 != (longlong *)0x0) {
        fVar7 = (float)(**(code **)(*plVar6 + 0x6f0))();
        *(bool *)(param_1[0x9b] + 0xb6b) = 5.0 < fVar7 - *(float *)(param_1 + 0x90);
      }
    }
    if ((char)param_1[0x97] == '\0') {
      uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar3 = FUN_1430319d0(&DAT_146b47118,uVar4);
      if (((lVar3 != 0) && ((int)param_1[0x9e] != 0)) &&
         (*(char *)((longlong)param_1 + 0x4e4) == '\0')) {
        FWeakObjectPtr::operator=(&local_138,param_1);
        iVar1 = *(int *)(lVar3 + 0x4d8);
        *(int *)(lVar3 + 0x4d8) = iVar1 + 1;
        if (*(int *)(lVar3 + 0x4dc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar3 + 0x4d0,iVar1);
        }
        lVar3 = *(longlong *)(lVar3 + 0x4d0);
        *(undefined4 *)(lVar3 + (longlong)iVar1 * 8) = local_138;
        *(undefined4 *)(lVar3 + 4 + (longlong)iVar1 * 8) = local_134;
        *(undefined1 *)((longlong)param_1 + 0x4e4) = 1;
      }
    }
    else {
      lVar3 = param_1[0x9b];
      plVar6 = *(longlong **)(lVar3 + 0xa78);
      if (plVar6 != (longlong *)0x0) {
        pfVar2 = (float *)param_1[0x91];
        if (*(longlong *)(lVar3 + 0xb50) != 0) {
          (**(code **)(*plVar6 + 0x70))(plVar6);
          lVar3 = param_1[0x9b];
        }
        local_138 = 1;
        local_134 = 0x14000000;
        fVar7 = 0.0;
        local_130 = 0;
        if (*(char *)(lVar3 + 0xb6b) != '\0') {
          local_134 = 0x34000000;
        }
        local_128 = 0;
        local_f8 = 0;
        local_f0 = 0;
        (**(code **)(**(longlong **)(lVar3 + 0xa78) + 0x200))
                  (*(longlong **)(lVar3 + 0xa78),&local_138,1,0,
                   in_stack_fffffffffffffea8 & 0xffffff00,&local_f8,&local_130);
        fVar9 = pfVar2[6];
        fVar10 = 0.0;
        local_100 = *pfVar2;
        if (1e-08 < fVar9) {
          lVar3 = *(longlong *)(param_1[0x9b] + 0xa30);
          (**(code **)(lVar3 + 0x18))
                    ((longlong *)(param_1[0x9b] + 0xa30),lVar3,pfVar2 + 3,fVar9,local_100,
                     0.5 < pfVar2[1]);
        }
        else {
          if (((0.0001 < ABS(local_100)) || (0.0001 < ABS(pfVar2[1]))) || (0.0001 < ABS(pfVar2[2])))
          {
            fVar10 = SQRT(pfVar2[1] * pfVar2[1] + local_100 * local_100 + pfVar2[2] * pfVar2[2]);
            fVar8 = 1.0 / fVar10;
            *pfVar2 = local_100 * fVar8;
            pfVar2[1] = fVar8 * pfVar2[1];
            pfVar2[2] = fVar8 * pfVar2[2];
          }
          if (0.0 <= fVar9) {
            fVar9 = 0.0;
          }
          (**(code **)(*(longlong *)(param_1[0x9b] + 0xa30) + 0x10))
                    ((longlong *)(param_1[0x9b] + 0xa30),-fVar9,pfVar2 + 3,pfVar2,fVar10);
          local_100 = fVar10;
        }
        if ((*(byte *)((longlong)param_1 + 0x94) & 0x18) == 0x10) {
          local_120 = 0;
          local_fc = 8;
          puVar5 = (undefined4 *)
                   (**(code **)(**(longlong **)(param_1[0x9b] + 0xa78) + 0x230))
                             (*(longlong **)(param_1[0x9b] + 0xa78),&local_f8,0);
          plVar6 = (longlong *)param_1[0x9b];
          local_118 = *puVar5;
          local_114 = puVar5[1];
          local_110 = puVar5[2];
          local_10c = puVar5[3];
          local_108 = puVar5[4];
          local_104 = puVar5[5];
          local_78 = 0;
          local_d8 = plVar6[0x14f];
          local_a0 = &local_120;
          local_98 = 1;
          if (1e-08 < pfVar2[6]) {
            local_cc = 0.0;
            local_c8 = 0.0;
          }
          else {
            local_cc = pfVar2[1];
            local_c8 = pfVar2[2];
            fVar7 = *pfVar2;
          }
          local_80 = pfVar2[5];
          local_88 = pfVar2[3];
          local_84 = pfVar2[4];
          local_90 = 0;
          local_ac = 1;
          local_d0 = fVar7;
          local_c4 = local_118;
          local_c0 = local_114;
          local_bc = local_110;
          local_b8 = local_10c;
          local_b4 = local_108;
          local_b0 = local_104;
          (**(code **)(*plVar6 + 0xa38))(plVar6,&local_d8);
        }
      }
    }
  }
  return;
}



// FUNCTION 143033f50 FUN_143033f50 body=66 status=ok
// SIG undefined FUN_143033f50(void)

void FUN_143033f50(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x148))();
  lVar2 = FUN_1430319d0(&DAT_146b47118,uVar1);
  if ((lVar2 != 0) && ((int)param_1[0x9e] != 0)) {
    FUN_143034d40(param_1);
    return;
  }
  return;
}



// FUNCTION 143033fa0 FUN_143033fa0 body=180 status=ok
// SIG undefined FUN_143033fa0(void)

void FUN_143033fa0(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 local_res8;
  undefined4 local_resc;
  
  uVar3 = (**(code **)(*param_1 + 0x148))();
  lVar4 = FUN_1430319d0(&DAT_146b47118,uVar3);
  if ((((lVar4 != 0) && ((int)param_1[0x9e] != 0)) && ((int)param_1[0x9d] != (int)param_1[0x96])) &&
     (*(char *)((longlong)param_1 + 0x4ec) == '\0')) {
    FWeakObjectPtr::operator=(&local_res8,param_1);
    iVar2 = *(int *)(lVar4 + 0x4e8);
    *(int *)(lVar4 + 0x4e8) = iVar2 + 1;
    if (*(int *)(lVar4 + 0x4ec) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar4 + 0x4e0,iVar2);
    }
    puVar1 = (undefined4 *)(*(longlong *)(lVar4 + 0x4e0) + (longlong)iVar2 * 8);
    *puVar1 = local_res8;
    puVar1[1] = local_resc;
    *(undefined1 *)((longlong)param_1 + 0x4ec) = 1;
  }
  return;
}



// FUNCTION 143034060 FUN_143034060 body=424 status=ok
// SIG undefined FUN_143034060(void)

void FUN_143034060(longlong param_1)

{
  longlong lVar1;
  undefined2 *puVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  longlong local_48 [4];
  undefined2 *local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  if ((((param_1 != 0) && (cVar3 = UWorld::IsGameWorld(), cVar3 != '\0')) &&
      (cVar3 = FUN_1428cfb10(param_1), cVar3 == '\0')) && ((*(byte *)(param_1 + 0x830) & 4) == 0)) {
    plVar5 = (longlong *)UGameMapsSettings::GetPrivateStaticClass();
    lVar6 = plVar5[0x1f];
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x368))(plVar5);
      lVar6 = plVar5[0x1f];
    }
    local_48[1] = 2;
    local_28 = (undefined2 *)0x0;
    local_20 = 0;
    local_48[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
    lVar1 = local_48[0];
    FGenericPlatformString::Memcpy(local_48[0],&DAT_143f73c90,4);
    if (*(longlong *)(lVar6 + 0x50) == 0) {
      local_48[2] = 0;
      local_48[3] = 0;
    }
    else {
      FName::ToString((longlong *)(lVar6 + 0x50),local_48 + 2);
    }
    FUN_1404e14f0(local_48 + 2,local_48,0,local_48 + 4,0,0);
    if (local_48[2] != 0) {
      FMemory::Free();
    }
    if (lVar1 != 0) {
      FMemory::Free(lVar1);
    }
    puVar7 = (undefined8 *)FUN_1428cc8c0(param_1,local_18);
    puVar2 = local_28;
    if (*(int *)(puVar7 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar7;
    }
    puVar8 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar8 = local_28;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
    if (puVar2 != (undefined2 *)0x0) {
      FMemory::Free(puVar2);
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (iVar4 != 0) {
      FUN_1430319d0(&DAT_146b47118,param_1);
    }
  }
  return;
}



// FUNCTION 143034210 FUN_143034210 body=846 status=ok
// SIG undefined FUN_143034210(void)

void FUN_143034210(longlong param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  byte *pbVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined4 *puVar11;
  float local_res8 [2];
  undefined1 local_res10 [8];
  float local_res18 [2];
  undefined4 local_res20 [2];
  undefined1 local_68 [4];
  uint local_64;
  uint local_5c;
  undefined1 local_58 [4];
  uint local_54;
  uint local_50;
  
  lVar10 = (longlong)param_2 * 0x20 + *(longlong *)(param_1 + 0xa58);
  *(int *)(lVar10 + 0x10) = param_2;
  FWeakObjectPtr::operator=(lVar10 + 0x14,param_1);
  puVar11 = (undefined4 *)((longlong)param_2 * 0x10 + *(longlong *)(param_1 + 0xaf0));
  *puVar11 = 7;
  *(longlong *)(puVar11 + 2) = lVar10;
  param_3[2] = (longlong)puVar11;
  lVar10 = (**(code **)(*param_3 + 0x80))(param_3);
  *(undefined4 **)(lVar10 + 0x10) = puVar11;
  if (param_2 != 0) {
    lVar10 = FUN_140626d60(param_1);
    plVar8 = *(longlong **)(lVar10 + 0x440);
    (**(code **)(*plVar8 + 0x140))(plVar8,param_2);
    plVar6 = (longlong *)(**(code **)(*param_3 + 0x80))(param_3);
    plVar9 = (longlong *)0x0;
    if ((short)plVar6[1] == 6) {
      plVar9 = plVar6;
    }
    if ((*(char *)(param_1 + 0xba1) == '\0') ||
       (pbVar7 = (byte *)(**(code **)(*plVar9 + 0x178))(plVar9,local_res10), (*pbVar7 & 1) == 0)) {
      if ((*(char *)(param_1 + 0xb18) == '\0') || (*(char *)(param_1 + 0xb19) == '\0')) {
        (**(code **)(*param_3 + 0xa0))(param_3,local_68);
        (**(code **)(*param_3 + 0xb0))(param_3,local_58);
        local_64 = local_64 | 0x20004;
        local_50 = local_50 | 0xc000;
        local_5c = (uint)*(byte *)(param_1 + 0xb91) << 0x17 | local_5c & 0xf07fffff;
        local_54 = ~(~local_54 | 0xc004);
        uVar3 = (**(code **)(*plVar8 + 0x148))(plVar8,param_2);
        iVar4 = (**(code **)(*plVar8 + 200))(plVar8);
        if ((uint)uVar3 == iVar4 - 1U) {
          iVar5 = rand();
          iVar4 = 99;
          if ((int)((float)iVar5 * 0.003051851) < 100) {
            iVar4 = (int)((float)iVar5 * 0.003051851);
          }
          if ((float)iVar4 < *(float *)(param_1 + 0xb70) * 100.0) {
            local_64 = local_64 & 0xfffffffe;
          }
        }
        (**(code **)(*param_3 + 0x98))(param_3,local_68);
        (**(code **)(*param_3 + 0xa8))(param_3,local_58);
        plVar8 = (longlong *)(**(code **)(*param_3 + 0x80))(param_3);
        lVar1 = plVar8[1];
        lVar10 = *(longlong *)(param_1 + 0x120);
        if (lVar10 == 0) {
          lVar10 = FUN_1423407b0(param_1);
        }
        plVar9 = (longlong *)0x0;
        if ((short)lVar1 == 6) {
          plVar9 = plVar8;
        }
        FUN_142db9650(lVar10,plVar9,1);
      }
    }
    else {
      (**(code **)(*param_3 + 0xa0))(param_3,local_68);
      (**(code **)(*param_3 + 0xb0))(param_3,local_58);
      local_5c = (uint)*(byte *)(param_1 + 0xb91) << 0x17 | local_5c & 0xf07fffff;
      uVar2 = local_54 | 4;
      if (*(char *)(param_1 + 0xb6a) != '\0') {
        uVar2 = local_54 | 0x44;
      }
      local_54 = uVar2;
      local_64 = ~(~local_64 | 4);
      (**(code **)(*param_3 + 0x98))(param_3,local_68);
      (**(code **)(*param_3 + 0xa8))(param_3,local_58);
    }
    plVar8 = (longlong *)(**(code **)(*param_3 + 0x80))(param_3);
    (**(code **)(*plVar8 + 0x50))(plVar8,2,~(*(byte *)(param_1 + 0x3c0) >> 5) & 1);
    FUN_1426c5e30(local_res8,local_res18,local_res20);
    plVar8 = (longlong *)(**(code **)(*param_3 + 0x80))(param_3);
    (**(code **)(*plVar8 + 0x48))(plVar8,local_58,0x3f8147ae);
    (**(code **)(*param_3 + 0xd8))(param_3);
  }
  return;
}



// FUNCTION 143034560 FUN_143034560 body=709 status=ok
// SIG undefined FUN_143034560(void)

void FUN_143034560(longlong param_1)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  byte *pbVar9;
  longlong *plVar10;
  uint uVar11;
  longlong *plVar12;
  longlong local_res8;
  uint local_res10 [2];
  longlong *local_res18;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  
  lVar5 = *(longlong *)(param_1 + 0x120);
  if (((lVar5 != 0) || (lVar5 = FUN_1423407b0(), lVar5 != 0)) &&
     (lVar7 = *(longlong *)(param_1 + 0x118), lVar7 != 0)) {
    lVar6 = FUN_143036740();
    lVar7 = *(longlong *)(lVar7 + 0x10);
    if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar7 = FUN_140626d60(param_1);
      plVar12 = (longlong *)0x0;
      plVar10 = plVar12;
      if (lVar7 != 0) {
        plVar10 = *(longlong **)(lVar7 + 0x440);
      }
      if (((*(longlong **)(param_1 + 0xa78) == (longlong *)0x0) ||
          (iVar3 = (**(code **)(**(longlong **)(param_1 + 0xa78) + 0x250))(), iVar3 == 0)) ||
         (plVar10 == (longlong *)0x0)) {
        FUN_142339350(param_1);
        FUN_142398ec0(param_1,0,1);
      }
      else {
        lVar5 = *(longlong *)(lVar5 + 0x218);
        if (lVar5 == 0) {
          plVar8 = (longlong *)0x0;
          local_res18 = (longlong *)0x0;
        }
        else {
          plVar8 = (longlong *)FUN_1426e2530(lVar5,*(byte *)(param_1 + 0x3c2) >> 2 & 2);
          local_res18 = plVar8;
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x358))
                      (plVar8,
                       "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxDestruction\\Private\\GbxDestructibleComponent.cpp"
                       ,0x20e);
          }
        }
        local_res8 = (**(code **)(**(longlong **)(param_1 + 0xa78) + 0xa8))();
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0xa78) + 0xa0))();
        lVar7 = local_res8;
        if (iVar3 != 0) {
          do {
            uVar1 = *(ushort *)(lVar7 + (longlong)plVar12 * 2);
            uVar4 = (**(code **)(*plVar10 + 0x140))(plVar10,uVar1);
            plVar8 = (longlong *)
                     (**(code **)(**(longlong **)(param_1 + 0xa78) + 0xd0))
                               (*(longlong **)(param_1 + 0xa78),uVar1);
            if (((uVar4 & 1) == 0) &&
               ((plVar8 == (longlong *)0x0 ||
                (pbVar9 = (byte *)(**(code **)(*plVar8 + 0x178))(plVar8,&local_res8),
                (*pbVar9 & 1) == 0)))) {
              TBaseMulticastDelegate<void,FUniqueNetId_const_&,FUniqueNetId_const_&>::Broadcast
                        (&DAT_146534a58,lVar5,plVar8);
              local_res10[0] = (uint)uVar1;
              local_res10[1] = 0x34000004;
              local_58 = 0;
              local_50 = 0;
              local_48 = 0;
              local_40 = 0;
              (**(code **)(**(longlong **)(param_1 + 0xa78) + 0x200))
                        (*(longlong **)(param_1 + 0xa78),local_res10,1,1,0,&local_48,&local_58);
            }
            uVar11 = (int)plVar12 + 1;
            plVar12 = (longlong *)(ulonglong)uVar11;
            uVar4 = (**(code **)(**(longlong **)(param_1 + 0xa78) + 0xa0))();
            plVar8 = local_res18;
          } while (uVar11 < uVar4);
        }
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x360))(plVar8);
        }
      }
    }
  }
  return;
}



// FUNCTION 143034830 FUN_143034830 body=269 status=ok
// SIG undefined FUN_143034830(void)

void FUN_143034830(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_res10;
  
  FUN_1422383f0();
  local_res10 = 0;
  lVar5 = 0x20;
  do {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar3 = USoundWaveProcedural::GetPrivateStaticClass();
    plVar4 = (longlong *)FUN_1417985e0(uVar3,param_1,0,0,0,0,0,0,0);
    (**(code **)(*plVar4 + 0x2a8))(plVar4,0);
    (**(code **)(*plVar4 + 0x290))(plVar4,0,0);
    FUN_1428d8290(plVar4,1);
    FWeakObjectPtr::operator=(&local_res10,plVar4);
    iVar2 = *(int *)(param_1 + 0x460);
    *(int *)(param_1 + 0x460) = iVar2 + 1;
    if (*(int *)(param_1 + 0x464) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x458,iVar2);
    }
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x458) + (longlong)iVar2 * 8);
    *puVar1 = (undefined4)local_res10;
    puVar1[1] = local_res10._4_4_;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}



// FUNCTION 143034940 FUN_143034940 body=145 status=ok
// SIG undefined FUN_143034940(void)

void FUN_143034940(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  
  FUN_142238430();
  lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  if (((lVar2 != 0) && (plVar3 = (longlong *)FUN_142d5ecc0(lVar2), plVar3 != (longlong *)0x0)) &&
     (plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2a0))(plVar3), plVar3 != (longlong *)0x0)) {
    lVar2 = FUN_143036e50();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*plVar3 + 0x6f0))(plVar3,param_1);
    }
  }
  return;
}



// FUNCTION 1430349e0 FUN_1430349e0 body=625 status=ok
// SIG undefined FUN_1430349e0(void)

void FUN_1430349e0(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  float fVar10;
  
  FUN_142238430();
  lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  if (((lVar3 != 0) && (plVar4 = (longlong *)FUN_142d5ecc0(lVar3), plVar4 != (longlong *)0x0)) &&
     (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x2a0))(plVar4), plVar4 != (longlong *)0x0)) {
    lVar3 = FUN_143036e50();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*plVar4 + 0x6f0))(plVar4);
    }
  }
  if (((param_1[0x8e] != 0) && (lVar3 = *(longlong *)(param_1[0x8e] + 0x718), lVar3 != 0)) &&
     (0 < *(int *)(lVar3 + 0x2c0))) {
    plVar7 = *(longlong **)(lVar3 + 0x2b8);
    iVar9 = 0;
    plVar4 = plVar7 + *(int *)(lVar3 + 0x2c0);
    for (; plVar7 != plVar4; plVar7 = plVar7 + 1) {
      lVar6 = *plVar7;
      if (lVar6 != 0) {
        lVar5 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (iVar9 < *(int *)(lVar6 + 0x120))) {
          iVar9 = *(int *)(lVar6 + 0x120);
        }
      }
    }
    plVar4 = param_1 + 0x8f;
    lVar6 = param_1[0x90];
    iVar2 = (int)lVar6 + iVar9;
    *(int *)(param_1 + 0x90) = iVar2;
    if (*(int *)((longlong)param_1 + 0x484) < iVar2) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar4);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*plVar4 + (longlong)(int)lVar6 * 4),0,(longlong)iVar9 << 2);
    plVar8 = *(longlong **)(lVar3 + 0x2b8);
    plVar7 = plVar8 + *(int *)(lVar3 + 0x2c0);
    for (; plVar8 != plVar7; plVar8 = plVar8 + 1) {
      lVar3 = *plVar8;
      if (lVar3 == 0) {
LAB_143034ba0:
        lVar3 = 0;
      }
      else {
        lVar6 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_143034ba0;
      }
      iVar9 = 0;
      lVar6 = 0;
      if (0 < (int)param_1[0x90]) {
        lVar5 = 0;
        do {
          if (((lVar3 == 0) || (lVar6 < 0)) || (*(int *)(lVar3 + 0x120) <= iVar9)) {
            fVar10 = 0.0;
          }
          else {
            fVar10 = (float)(*(int *)(lVar5 + 8 + *(longlong *)(lVar3 + 0x118)) -
                            *(int *)(lVar5 + 0x94 + *(longlong *)(lVar3 + 0x118))) *
                     *(float *)(lVar3 + 0xf4);
          }
          iVar9 = iVar9 + 1;
          lVar5 = lVar5 + 0x108;
          *(float *)(*plVar4 + lVar6 * 4) = fVar10 + *(float *)(*plVar4 + lVar6 * 4);
          lVar6 = lVar6 + 1;
        } while (iVar9 < (int)param_1[0x90]);
      }
    }
    if ((*(byte *)(param_1[0x8e] + 0xb1b) & 0x10) != 0) {
      FUN_1427e1cd0();
    }
  }
  return;
}



// FUNCTION 143034c60 FUN_143034c60 body=220 status=ok
// SIG undefined FUN_143034c60(void)

void FUN_143034c60(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  FUN_142238430();
  lVar4 = param_1[0x9b];
  if (lVar4 != 0) {
    if ((char)param_1[0x25] == '\x03') {
      FUN_14223ef90(param_1,*(char *)(lVar4 + 0xb90) == '\0');
    }
    if ((*(char *)(lVar4 + 0xb90) == '\0') && (*(longlong *)(lVar4 + 0xa78) != 0)) {
      uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar4 = FUN_1430319d0(&DAT_146b47118,uVar3);
      if (lVar4 != 0) {
        *(bool *)(param_1 + 0x97) = *(char *)(param_1[0x9b] + 0xb90) == '\0';
        plVar1 = *(longlong **)(param_1[0x9b] + 0xa78);
        if (plVar1 != (longlong *)0x0) {
          iVar2 = (**(code **)(*plVar1 + 0x250))();
          *(byte *)(param_1 + 0x97) = *(byte *)(param_1 + 0x97) & iVar2 == 0;
        }
        if ((char)param_1[0x25] == '\x03') {
          *(int *)(lVar4 + 0x45c) = *(int *)(lVar4 + 0x45c) + 1;
          *(undefined4 *)(param_1 + 0x9e) = *(undefined4 *)(lVar4 + 0x45c);
        }
        FUN_143034d40(param_1);
      }
    }
  }
  return;
}



// FUNCTION 143034d40 FUN_143034d40 body=291 status=ok
// SIG undefined FUN_143034d40(void)

void FUN_143034d40(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined4 *local_18;
  undefined1 *local_10;
  
  if ((int)param_1[0x9e] != 0) {
    uVar1 = (**(code **)(*param_1 + 0x148))();
    lVar2 = FUN_1430319d0(&DAT_146b47118,uVar1);
    if (((lVar2 != 0) && (param_1[0x8b] != 0)) && (*(longlong *)(param_1[0x8b] + 0xa78) != 0)) {
      local_res8[0] = (undefined4)param_1[0x9e];
      (**(code **)(*param_1 + 0x148))(param_1);
      uVar1 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar2 = FUN_1430319d0(&DAT_146b47118,uVar1);
      if (lVar2 != 0) {
        FWeakObjectPtr::operator=(local_res18,param_1);
        local_18 = local_res8;
        local_10 = local_res18;
        FUN_14302eea0(lVar2 + 0x480,local_res10,&local_18,0);
      }
      if ((char)param_1[0x97] == '\0') {
        uVar1 = 4;
        if ((char)param_1[0x25] != '\x03') {
          uVar1 = 8;
        }
        (**(code **)(**(longlong **)(param_1[0x8b] + 0xa78) + 0x1e8))
                  (*(longlong **)(param_1[0x8b] + 0xa78),(int)param_1[0x9e],uVar1,&DAT_146b46ff0,0);
      }
    }
  }
  return;
}



// FUNCTION 143034e70 FUN_143034e70 body=435 status=ok
// SIG undefined FUN_143034e70(void)

void FUN_143034e70(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  
  FWeakObjectPtr::operator=(local_res8);
  plVar1 = (longlong *)(param_1 + 0x478);
  lVar6 = *plVar1;
  iVar7 = *(int *)(param_1 + 0x480);
  lVar8 = lVar6;
  do {
    if (lVar8 == lVar6 + (longlong)iVar7 * 8) {
LAB_143034f2f:
      if (param_2 != 0) {
        lVar6 = UUGRichTextBlock::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          FWeakObjectPtr::operator=(local_res8,param_2);
          plVar1 = (longlong *)(param_1 + 0x488);
          lVar6 = *plVar1;
          iVar7 = *(int *)(param_1 + 0x490);
          for (lVar8 = lVar6; lVar8 != lVar6 + (longlong)iVar7 * 8; lVar8 = lVar8 + 8) {
            cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar8,local_res8);
            if (cVar3 != '\0') {
              iVar7 = (int)(lVar8 - lVar6 >> 3);
              if (iVar7 == -1) {
                return;
              }
              iVar4 = *(int *)(param_1 + 0x490);
              iVar5 = (iVar4 - iVar7) + -1;
              if (0 < iVar5) {
                iVar5 = 1;
              }
              if (iVar5 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(*plVar1 + (longlong)iVar7 * 8),
                           (void *)(*plVar1 + (longlong)(iVar4 - iVar5) * 8),(longlong)iVar5 << 3);
                iVar4 = *(int *)(param_1 + 0x490);
              }
              *(int *)(param_1 + 0x490) = iVar4 + -1;
              TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
              return;
            }
          }
        }
      }
      return;
    }
    cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar8,local_res8);
    if (cVar3 != '\0') {
      iVar7 = (int)(lVar8 - lVar6 >> 3);
      if (iVar7 != -1) {
        iVar4 = *(int *)(param_1 + 0x480);
        iVar5 = (iVar4 - iVar7) + -1;
        if (0 < iVar5) {
          iVar5 = 1;
        }
        if (iVar5 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + (longlong)iVar7 * 8),
                     (void *)(*plVar1 + (longlong)(iVar4 - iVar5) * 8),(longlong)iVar5 << 3);
          iVar4 = *(int *)(param_1 + 0x480);
        }
        *(int *)(param_1 + 0x480) = iVar4 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
      }
      goto LAB_143034f2f;
    }
    lVar8 = lVar8 + 8;
  } while( true );
}



// FUNCTION 143035030 FUN_143035030 body=519 status=ok
// SIG undefined FUN_143035030(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143035030(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined1 local_b2;
  undefined1 local_b1;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined1 local_9b;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined1 local_24;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lVar1 = *(longlong *)(param_1 + 0x4d8);
  plVar3 = *(longlong **)(lVar1 + 0xa78);
  if ((plVar3 != (longlong *)0x0) &&
     (puVar4 = *(undefined4 **)(lVar1 + 0xb50), puVar4 != (undefined4 *)0x0)) {
    lVar2 = *plVar3;
    if (param_2 == '\0') {
      lVar2 = (**(code **)(lVar2 + 0x68))();
      local_104 = *(undefined4 *)(lVar2 + 4);
      local_100 = *(undefined4 *)(lVar2 + 8);
      local_fc = *(undefined4 *)(lVar2 + 0xc);
      local_f8 = *(undefined4 *)(lVar2 + 0x10);
      local_f4 = *(undefined4 *)(lVar2 + 0x14);
      local_f0 = *(undefined4 *)(lVar2 + 0x18);
      local_ec = *(undefined4 *)(lVar2 + 0x1c);
      local_e8 = *(undefined4 *)(lVar2 + 0x20);
      local_e4 = *(undefined4 *)(lVar2 + 0x24);
      local_e0 = *(undefined4 *)(lVar2 + 0x28);
      local_dc = *(undefined4 *)(lVar2 + 0x2c);
      local_d8 = *(undefined4 *)(lVar2 + 0x30);
      local_d4 = *(undefined4 *)(lVar2 + 0x34);
      local_d0 = *(undefined4 *)(lVar2 + 0x38);
      local_cc = *(undefined4 *)(lVar2 + 0x3c);
      local_c8 = *(undefined4 *)(lVar2 + 0x40);
      local_c4 = *(undefined4 *)(lVar2 + 0x44);
      local_c0 = *(undefined4 *)(lVar2 + 0x48);
      local_bc = *(uint *)(lVar2 + 0x4c) & 0xfffffffe;
      local_b8 = *(undefined4 *)(lVar2 + 0x50);
      local_b4 = *(undefined2 *)(lVar2 + 0x54);
      local_b2 = *(undefined1 *)(lVar2 + 0x56);
      local_b1 = *(undefined1 *)(lVar2 + 0x57);
      local_b0 = *(undefined8 *)(lVar2 + 0x58);
      uStack_a8 = *(undefined8 *)(lVar2 + 0x60);
      local_a0 = *(undefined4 *)(lVar2 + 0x68);
      local_9c = *(undefined1 *)(lVar2 + 0x6c);
      local_9b = *(undefined1 *)(lVar2 + 0x6d);
      local_98 = *(undefined4 *)(lVar2 + 0x70);
      local_94 = *(undefined8 *)(lVar2 + 0x74);
      uStack_8c = *(undefined8 *)(lVar2 + 0x7c);
      local_84 = *(undefined8 *)(lVar2 + 0x84);
      uStack_7c = *(undefined8 *)(lVar2 + 0x8c);
      local_74 = *(undefined8 *)(lVar2 + 0x94);
      uStack_6c = *(undefined8 *)(lVar2 + 0x9c);
      local_64 = *(undefined8 *)(lVar2 + 0xa4);
      uStack_5c = *(undefined8 *)(lVar2 + 0xac);
      local_54 = *(undefined8 *)(lVar2 + 0xb4);
      uStack_4c = *(undefined8 *)(lVar2 + 0xbc);
      local_44 = *(undefined4 *)(lVar2 + 0xc4);
      uStack_40 = *(undefined4 *)(lVar2 + 200);
      uStack_3c = *(undefined4 *)(lVar2 + 0xcc);
      uStack_38 = *(undefined4 *)(lVar2 + 0xd0);
      local_34 = *(undefined8 *)(lVar2 + 0xd4);
      uStack_2c = *(undefined8 *)(lVar2 + 0xdc);
      local_24 = *(undefined1 *)(lVar2 + 0xe4);
      plVar3 = *(longlong **)(lVar1 + 0xa78);
      local_108 = 0x322bcc77;
      lVar2 = *plVar3;
      puVar4 = &local_108;
    }
    (**(code **)(lVar2 + 0x70))(plVar3,puVar4);
  }
  return;
}



// FUNCTION 143035240 FUN_143035240 body=515 status=ok
// SIG undefined FUN_143035240(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143035240(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined1 local_b2;
  undefined1 local_b1;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined1 local_9b;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined1 local_24;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  plVar2 = *(longlong **)(param_1 + 0xa78);
  if ((plVar2 != (longlong *)0x0) &&
     (puVar3 = *(undefined4 **)(param_1 + 0xb50), puVar3 != (undefined4 *)0x0)) {
    lVar1 = *plVar2;
    if (param_2 == '\0') {
      lVar1 = (**(code **)(lVar1 + 0x68))();
      local_104 = *(undefined4 *)(lVar1 + 4);
      local_100 = *(undefined4 *)(lVar1 + 8);
      local_fc = *(undefined4 *)(lVar1 + 0xc);
      local_f8 = *(undefined4 *)(lVar1 + 0x10);
      local_f4 = *(undefined4 *)(lVar1 + 0x14);
      local_f0 = *(undefined4 *)(lVar1 + 0x18);
      local_ec = *(undefined4 *)(lVar1 + 0x1c);
      local_e8 = *(undefined4 *)(lVar1 + 0x20);
      local_e4 = *(undefined4 *)(lVar1 + 0x24);
      local_e0 = *(undefined4 *)(lVar1 + 0x28);
      local_dc = *(undefined4 *)(lVar1 + 0x2c);
      local_d8 = *(undefined4 *)(lVar1 + 0x30);
      local_d4 = *(undefined4 *)(lVar1 + 0x34);
      local_d0 = *(undefined4 *)(lVar1 + 0x38);
      local_cc = *(undefined4 *)(lVar1 + 0x3c);
      local_c8 = *(undefined4 *)(lVar1 + 0x40);
      local_c4 = *(undefined4 *)(lVar1 + 0x44);
      local_c0 = *(undefined4 *)(lVar1 + 0x48);
      local_bc = *(uint *)(lVar1 + 0x4c) & 0xfffffffe;
      local_b8 = *(undefined4 *)(lVar1 + 0x50);
      local_b4 = *(undefined2 *)(lVar1 + 0x54);
      local_b2 = *(undefined1 *)(lVar1 + 0x56);
      local_b1 = *(undefined1 *)(lVar1 + 0x57);
      local_b0 = *(undefined8 *)(lVar1 + 0x58);
      uStack_a8 = *(undefined8 *)(lVar1 + 0x60);
      local_a0 = *(undefined4 *)(lVar1 + 0x68);
      local_9c = *(undefined1 *)(lVar1 + 0x6c);
      local_9b = *(undefined1 *)(lVar1 + 0x6d);
      local_98 = *(undefined4 *)(lVar1 + 0x70);
      local_94 = *(undefined8 *)(lVar1 + 0x74);
      uStack_8c = *(undefined8 *)(lVar1 + 0x7c);
      local_84 = *(undefined8 *)(lVar1 + 0x84);
      uStack_7c = *(undefined8 *)(lVar1 + 0x8c);
      local_74 = *(undefined8 *)(lVar1 + 0x94);
      uStack_6c = *(undefined8 *)(lVar1 + 0x9c);
      local_64 = *(undefined8 *)(lVar1 + 0xa4);
      uStack_5c = *(undefined8 *)(lVar1 + 0xac);
      local_54 = *(undefined8 *)(lVar1 + 0xb4);
      uStack_4c = *(undefined8 *)(lVar1 + 0xbc);
      local_44 = *(undefined4 *)(lVar1 + 0xc4);
      uStack_40 = *(undefined4 *)(lVar1 + 200);
      uStack_3c = *(undefined4 *)(lVar1 + 0xcc);
      uStack_38 = *(undefined4 *)(lVar1 + 0xd0);
      local_34 = *(undefined8 *)(lVar1 + 0xd4);
      uStack_2c = *(undefined8 *)(lVar1 + 0xdc);
      local_24 = *(undefined1 *)(lVar1 + 0xe4);
      plVar2 = *(longlong **)(param_1 + 0xa78);
      local_108 = 0x322bcc77;
      lVar1 = *plVar2;
      puVar3 = &local_108;
    }
    (**(code **)(lVar1 + 0x70))(plVar2,puVar3);
  }
  return;
}



// FUNCTION 143035450 FUN_143035450 body=2107 status=ok
// SIG undefined FUN_143035450(void)

void FUN_143035450(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  undefined8 *puVar12;
  float *pfVar13;
  int *piVar14;
  int iVar15;
  longlong *plVar16;
  int *piVar17;
  longlong *plVar18;
  int *piVar19;
  longlong lVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint local_res18;
  ulonglong in_stack_fffffffffffffe38;
  int *local_1a0;
  uint local_198;
  int local_194;
  float *local_190;
  undefined8 local_188;
  undefined8 local_180;
  float local_178;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  float local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  float local_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 local_e8 [12];
  undefined1 local_dc [12];
  undefined1 local_d0 [144];
  
  if (((*(byte *)(param_1 + 0xa38) & 1) != 0) ||
     (plVar16 = (longlong *)(*(longlong *)(param_1 + 0x718) + 0x430),
     *(longlong *)(param_1 + 0x718) == 0)) {
    plVar16 = (longlong *)(param_1 + 0xa40);
  }
  lVar8 = FUN_140626d60();
  if ((lVar8 != 0) && (*(longlong *)(param_1 + 0xa78) != 0)) {
    fVar23 = *(float *)(param_1 + 0xbcc);
    piVar10 = (int *)0x0;
    fVar26 = 0.0;
    local_190 = (float *)0x0;
    local_188 = 0;
    piVar17 = piVar10;
    if (0.0 < fVar23) {
      lVar21 = (longlong)(int)plVar16[1];
      bVar4 = false;
      piVar14 = piVar10;
      piVar19 = piVar10;
      if (3 < lVar21) {
        puVar12 = (undefined8 *)(*plVar16 + 0x10);
        lVar20 = (lVar21 - 4U >> 2) + 1;
        piVar14 = (int *)(lVar20 * 4);
        do {
          piVar11 = (int *)puVar12[-2];
          if ((((piVar11 != (int *)0x0) || (puVar12[-1] != 0)) &&
              (bVar4 = true, piVar11 != (int *)0x0)) &&
             ((piVar11 != piVar19 && ((*(byte *)(piVar11 + 0x26) & 1) != 0)))) {
            fVar25 = ((float)piVar11[0x2b] - (float)piVar11[0x28]) * 0.5;
            fVar22 = ((float)piVar11[0x2a] - (float)piVar11[0x27]) * 0.5;
            fVar24 = ((float)piVar11[0x2c] - (float)piVar11[0x29]) * 0.5;
            if (fVar22 <= fVar25) {
              fVar25 = fVar22;
            }
            if (fVar24 <= fVar25) {
              fVar25 = fVar24;
            }
            piVar19 = piVar11;
            if (fVar26 < fVar25 * fVar23) {
              fVar26 = fVar25 * fVar23;
            }
          }
          piVar11 = (int *)*puVar12;
          if (((piVar11 != (int *)0x0) || (puVar12[1] != 0)) &&
             ((bVar4 = true, piVar11 != (int *)0x0 &&
              ((piVar11 != piVar19 && ((*(byte *)(piVar11 + 0x26) & 1) != 0)))))) {
            fVar25 = ((float)piVar11[0x2b] - (float)piVar11[0x28]) * 0.5;
            fVar22 = ((float)piVar11[0x2a] - (float)piVar11[0x27]) * 0.5;
            fVar24 = ((float)piVar11[0x2c] - (float)piVar11[0x29]) * 0.5;
            if (fVar22 <= fVar25) {
              fVar25 = fVar22;
            }
            if (fVar24 <= fVar25) {
              fVar25 = fVar24;
            }
            piVar19 = piVar11;
            if (fVar26 < fVar25 * fVar23) {
              fVar26 = fVar25 * fVar23;
            }
          }
          piVar11 = (int *)puVar12[2];
          if ((((piVar11 != (int *)0x0) || (puVar12[3] != 0)) &&
              (bVar4 = true, piVar11 != (int *)0x0)) &&
             ((piVar11 != piVar19 && ((*(byte *)(piVar11 + 0x26) & 1) != 0)))) {
            fVar25 = ((float)piVar11[0x2b] - (float)piVar11[0x28]) * 0.5;
            fVar22 = ((float)piVar11[0x2a] - (float)piVar11[0x27]) * 0.5;
            fVar24 = ((float)piVar11[0x2c] - (float)piVar11[0x29]) * 0.5;
            if (fVar22 <= fVar25) {
              fVar25 = fVar22;
            }
            if (fVar24 <= fVar25) {
              fVar25 = fVar24;
            }
            piVar19 = piVar11;
            if (fVar26 < fVar25 * fVar23) {
              fVar26 = fVar25 * fVar23;
            }
          }
          piVar11 = (int *)puVar12[4];
          if (((piVar11 != (int *)0x0) || (puVar12[5] != 0)) &&
             ((bVar4 = true, piVar11 != (int *)0x0 &&
              ((piVar11 != piVar19 && ((*(byte *)(piVar11 + 0x26) & 1) != 0)))))) {
            fVar25 = ((float)piVar11[0x2b] - (float)piVar11[0x28]) * 0.5;
            fVar22 = ((float)piVar11[0x2a] - (float)piVar11[0x27]) * 0.5;
            fVar24 = ((float)piVar11[0x2c] - (float)piVar11[0x29]) * 0.5;
            if (fVar22 <= fVar25) {
              fVar25 = fVar22;
            }
            if (fVar24 <= fVar25) {
              fVar25 = fVar24;
            }
            piVar19 = piVar11;
            if (fVar26 < fVar25 * fVar23) {
              fVar26 = fVar25 * fVar23;
            }
          }
          puVar12 = puVar12 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
      }
      if ((longlong)piVar14 < lVar21) {
        puVar12 = (undefined8 *)((longlong)piVar14 * 0x10 + *plVar16);
        lVar21 = lVar21 - (longlong)piVar14;
        do {
          piVar14 = (int *)*puVar12;
          if ((((piVar14 != (int *)0x0) || (puVar12[1] != 0)) &&
              (bVar4 = true, piVar14 != (int *)0x0)) &&
             ((piVar14 != piVar19 && ((*(byte *)(piVar14 + 0x26) & 1) != 0)))) {
            fVar25 = ((float)piVar14[0x2b] - (float)piVar14[0x28]) * 0.5;
            fVar22 = ((float)piVar14[0x2a] - (float)piVar14[0x27]) * 0.5;
            fVar24 = ((float)piVar14[0x2c] - (float)piVar14[0x29]) * 0.5;
            if (fVar22 <= fVar25) {
              fVar25 = fVar22;
            }
            if (fVar24 <= fVar25) {
              fVar25 = fVar24;
            }
            piVar19 = piVar14;
            if (fVar26 < fVar25 * fVar23) {
              fVar26 = fVar25 * fVar23;
            }
          }
          puVar12 = puVar12 + 2;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
      }
      if (bVar4) {
        if ((fVar26 == 0.0) && (*(longlong *)(param_1 + 0x718) != 0)) {
          lVar21 = USkeletalMesh::GetBounds(*(longlong *)(param_1 + 0x718),&local_108);
          fVar23 = (*(float *)(lVar21 + 0x10) + *(float *)(lVar21 + 0xc) + *(float *)(lVar21 + 0x14)
                   ) * 0.16666667 * *(float *)(param_1 + 0xbcc);
          if (fVar26 < fVar23) {
            fVar26 = fVar23;
          }
        }
        fVar26 = fVar26 * fVar26;
        piVar17 = (int *)0x0;
        if ((0.0 < fVar26) && (*(uint *)(param_2 + 0x2c) >> 2 != 0)) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::
          ResizeTo(&local_190);
          piVar17 = (int *)(local_188 & 0xffffffff);
        }
      }
    }
    local_res18 = 0;
    local_1a0 = (int *)0x0;
    local_194 = 0;
    piVar14 = piVar10;
    piVar19 = piVar10;
    if (*(int *)(param_2 + 0x40) != 0) {
      do {
        lVar21 = *(longlong *)(param_2 + 0x38);
        if (*(uint *)(lVar21 + 4 + (longlong)piVar10 * 0x28) < *(uint *)(plVar16 + 1)) {
          iVar5 = (**(code **)(**(longlong **)(lVar8 + 0x440) + 0x150))
                            (*(longlong **)(lVar8 + 0x440),
                             *(undefined4 *)(lVar21 + (longlong)piVar10 * 0x28));
          uVar2 = *(uint *)(lVar21 + 0x24 + (longlong)piVar10 * 0x28);
          iVar15 = 0;
          if (-1 < iVar5) {
            iVar15 = iVar5;
          }
          iVar5 = (int)piVar14;
          if ((uVar2 & 8) == 0) {
LAB_143035931:
            if (-1 < (char)uVar2) goto LAB_143035be2;
          }
          else {
            for (piVar11 = piVar19; piVar11 != piVar19 + iVar5; piVar11 = piVar11 + 1) {
              if (*piVar11 == iVar15) goto LAB_143035931;
            }
          }
          fVar23 = (*(float *)(lVar21 + 0x14 + (longlong)piVar10 * 0x28) +
                   *(float *)(lVar21 + 8 + (longlong)piVar10 * 0x28)) * 0.5;
          fVar25 = (*(float *)(lVar21 + 0x18 + (longlong)piVar10 * 0x28) +
                   *(float *)(lVar21 + 0xc + (longlong)piVar10 * 0x28)) * 0.5;
          local_178 = (*(float *)(lVar21 + 0x1c + (longlong)piVar10 * 0x28) +
                      *(float *)(lVar21 + 0x10 + (longlong)piVar10 * 0x28)) * 0.5;
          local_180 = CONCAT44(fVar25,fVar23);
          if (0.0 < fVar26) {
            iVar7 = (int)piVar17;
            for (pfVar13 = local_190; pfVar13 != local_190 + (longlong)iVar7 * 3;
                pfVar13 = pfVar13 + 3) {
              if ((fVar25 - pfVar13[1]) * (fVar25 - pfVar13[1]) +
                  (fVar23 - *pfVar13) * (fVar23 - *pfVar13) +
                  (local_178 - pfVar13[2]) * (local_178 - pfVar13[2]) < fVar26) goto LAB_143035bb1;
            }
            local_188 = CONCAT44(local_188._4_4_,iVar7 + 1);
            if (local_188._4_4_ < iVar7 + 1) {
              TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_190,piVar17);
            }
            *(ulonglong *)(local_190 + (longlong)iVar7 * 3) = CONCAT44(fVar25,fVar23);
            local_190[(longlong)iVar7 * 3 + 2] = local_178;
          }
          uVar6 = (**(code **)(**(longlong **)(param_1 + 0xa78) + 0x240))
                            (*(longlong **)(param_1 + 0xa78),
                             *(undefined4 *)(lVar21 + (longlong)piVar10 * 0x28));
          if ((char)uVar6 == '\0') {
            puVar9 = (undefined4 *)
                     (**(code **)(**(longlong **)(param_1 + 0xa78) + 0xe0))
                               (*(longlong **)(param_1 + 0xa78),local_d0,
                                *(undefined4 *)(lVar21 + (longlong)piVar10 * 0x28));
            local_168 = *puVar9;
            uStack_164 = puVar9[1];
            uStack_160 = puVar9[2];
            uStack_15c = puVar9[3];
            puVar12 = (undefined8 *)FQuat::Rotator(&local_168,local_dc);
          }
          else {
            local_108 = *(float *)(param_1 + 0x210);
            fStack_104 = *(float *)(param_1 + 0x214);
            fStack_100 = *(float *)(param_1 + 0x218);
            fStack_fc = *(float *)(param_1 + 0x21c);
            auVar3._4_4_ = -(uint)(*(float *)(param_1 + 0x254) != fStack_104);
            auVar3._0_4_ = -(uint)(*(float *)(param_1 + 0x250) != local_108);
            auVar3._8_4_ = -(uint)(*(float *)(param_1 + 600) != fStack_100);
            auVar3._12_4_ = -(uint)(*(float *)(param_1 + 0x25c) != fStack_fc);
            iVar7 = movmskps(uVar6,auVar3);
            if (iVar7 != 0) {
              *(float *)(param_1 + 0x250) = local_108;
              *(float *)(param_1 + 0x254) = fStack_104;
              *(float *)(param_1 + 600) = fStack_100;
              *(float *)(param_1 + 0x25c) = fStack_fc;
              puVar12 = (undefined8 *)FQuat::Rotator(&local_108,local_e8);
              *(undefined8 *)(param_1 + 0x260) = *puVar12;
              *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(puVar12 + 1);
            }
            local_150 = *(undefined4 *)(param_1 + 0x268);
            puVar12 = &local_158;
            local_158 = *(undefined8 *)(param_1 + 0x260);
          }
          fVar22 = local_178;
          uVar1 = *puVar12;
          uVar6 = *(undefined4 *)(puVar12 + 1);
          plVar18 = (longlong *)
                    ((longlong)*(int *)(lVar21 + 4 + (longlong)piVar10 * 0x28) * 0x10 + *plVar16);
          lVar21 = plVar18[1];
          if (lVar21 != 0) {
            in_stack_fffffffffffffe38 = in_stack_fffffffffffffe38 & 0xffffffff00000000;
            local_138 = CONCAT44(fVar25,fVar23);
            local_130 = local_178;
            local_148 = uVar1;
            local_140 = uVar6;
            FUN_142458510(param_1,lVar21,&local_138,&local_148,0x3f800000,0x3f800000,
                          in_stack_fffffffffffffe38,0,0,0);
          }
          lVar21 = *plVar18;
          if (lVar21 != 0) {
            in_stack_fffffffffffffe38 = 0;
            local_118 = CONCAT44(fVar25,fVar23);
            local_110 = fVar22;
            local_128 = uVar1;
            local_120 = uVar6;
            lVar21 = FUN_14245fbc0(param_1,lVar21,&local_118,&local_128,1,1,0);
            if (lVar21 != 0) {
              *(byte *)(lVar21 + 0x2f1) = *(byte *)(lVar21 + 0x2f1) & 0xef;
            }
          }
LAB_143035bb1:
          local_198 = iVar5 + 1;
          if (local_194 < (int)local_198) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_1a0,piVar14);
            piVar19 = local_1a0;
          }
          piVar14 = (int *)(ulonglong)local_198;
          piVar19[iVar5] = iVar15;
        }
LAB_143035be2:
        local_res18 = local_res18 + 1;
        piVar10 = (int *)(ulonglong)local_res18;
        piVar17 = (int *)(local_188 & 0xffffffff);
      } while (local_res18 < *(uint *)(param_2 + 0x40));
      if (piVar19 != (int *)0x0) {
        FMemory::Free(piVar19);
      }
    }
    if (local_190 != (float *)0x0) {
      FMemory::Free(local_190);
    }
  }
  return;
}



// FUNCTION 143035c90 FUN_143035c90 body=1709 status=ok
// SIG undefined FUN_143035c90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143035c90(longlong *param_1,float param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  longlong *plVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong uVar22;
  bool bVar23;
  float fVar24;
  undefined1 auStack_2c8 [32];
  undefined1 local_2a8 [8];
  longlong *local_2a0;
  longlong local_298;
  longlong local_290;
  longlong local_288 [64];
  longlong *local_88;
  undefined8 local_80;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  local_2a0 = param_1;
  local_290 = (**(code **)(*param_1 + 0x148))();
  plVar12 = local_2a0;
  if (local_290 != 0) {
    uVar20 = 0;
    fVar24 = 0.0;
    plVar8 = param_1;
    if (0 < (int)param_1[0x8e]) {
      plVar19 = param_1 + 0x8d;
      uVar22 = uVar20;
      do {
        iVar21 = (int)uVar22;
        puVar16 = (undefined4 *)(*plVar19 + uVar20);
        puVar16[2] = (float)puVar16[2] - param_2;
        lVar6 = FWeakObjectPtr::Get(puVar16);
        uVar7 = FWeakObjectPtr::Get(puVar16);
        SCircularThrobber::SetPeriod(uVar7,*(float *)(lVar6 + 0x2d4) * 0.5);
        lVar6 = FWeakObjectPtr::Get(puVar16);
        uVar7 = FWeakObjectPtr::Get(puVar16);
        UWindDirectionalSourceComponent::SetRadius(uVar7,*(float *)(lVar6 + 0x2d0) * 0.9);
        if ((float)puVar16[2] <= 0.0 && (float)puVar16[2] != 0.0) {
          plVar8 = (longlong *)FWeakObjectPtr::Get(puVar16);
          (**(code **)(*plVar8 + 0x290))(plVar8,0,0);
          iVar11 = (int)plVar12[0x8c];
          *(int *)(plVar12 + 0x8c) = iVar11 + 1;
          if (*(int *)((longlong)plVar12 + 0x464) < iVar11 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar12 + 0x8b,iVar11)
            ;
          }
          lVar6 = plVar12[0x8b];
          *(undefined4 *)(lVar6 + (longlong)iVar11 * 8) = *puVar16;
          *(undefined4 *)(lVar6 + 4 + (longlong)iVar11 * 8) = puVar16[1];
          lVar13 = *plVar19;
          lVar6 = lVar13 + (longlong)(int)param_1[0x8e] * 0xc;
          local_298 = lVar13;
          for (; lVar13 != lVar6; lVar13 = lVar13 + 0xc) {
            cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar13);
            if (cVar4 != '\0') {
              lVar6 = (lVar13 - local_298) / 6 + (lVar13 - local_298 >> 0x3f);
              iVar11 = (int)(lVar6 >> 1) - (int)(lVar6 >> 0x3f);
              if (iVar11 != -1) {
                iVar5 = (int)param_1[0x8e];
                iVar10 = (iVar5 - iVar11) + -1;
                if (0 < iVar10) {
                  iVar10 = 1;
                }
                if (iVar10 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(*plVar19 + (longlong)iVar11 * 0xc),
                             (void *)(*plVar19 + (longlong)(iVar5 - iVar10) * 0xc),
                             (longlong)iVar10 * 0xc);
                  iVar5 = (int)param_1[0x8e];
                }
                *(int *)(param_1 + 0x8e) = iVar5 + -1;
                TArray<FVector,FDefaultAllocator>::ResizeShrink(plVar19);
              }
              break;
            }
          }
          iVar21 = iVar21 + -1;
          uVar20 = uVar20 - 0xc;
        }
        uVar22 = (ulonglong)(iVar21 + 1U);
        uVar20 = uVar20 + 0xc;
        plVar8 = local_2a0;
      } while ((int)(iVar21 + 1U) < (int)plVar12[0x8e]);
    }
    lVar6 = local_290;
    plVar19 = (longlong *)0x0;
    puVar17 = (undefined8 *)plVar8[0x91];
    local_88 = (longlong *)0x0;
    local_80 = 0;
    puVar1 = puVar17 + (int)plVar8[0x92];
    plVar12 = local_88;
    for (; local_88 = plVar12, puVar17 != puVar1; puVar17 = puVar17 + 1) {
      local_2a0 = (longlong *)*puVar17;
      lVar13 = FWeakObjectPtr::Get(&local_2a0);
      plVar12 = *(longlong **)(lVar13 + 0x470);
      if ((*(char *)((longlong)plVar12 + 0x3d) == '\0') ||
         (cVar4 = (**(code **)(*plVar12 + 0xa78))(plVar12), cVar4 == '\0')) {
        bVar3 = 0;
      }
      else {
        bVar3 = 1;
      }
      lVar13 = FWeakObjectPtr::Get(&local_2a0);
      if ((*(int *)(lVar13 + 0x480) <= *(int *)((longlong)plVar12 + 0x83c)) ||
         (*(float *)((longlong)plVar8 + 0x49c) <=
          *(float *)(lVar6 + 0x790) - *(float *)((longlong)plVar12 + 0x36c))) {
        bVar2 = 0;
      }
      else {
        bVar2 = 1;
      }
      if ((bool)(bVar3 & bVar2)) {
        lVar13 = FWeakObjectPtr::Get(&local_2a0);
        *(undefined4 *)(*(longlong *)(lVar13 + 0x470) + 0x830) = 0;
        lVar13 = FWeakObjectPtr::Get(&local_2a0);
        iVar21 = *(int *)(*(longlong *)(lVar13 + 0x470) + 0x830);
        if (iVar21 == 0) {
          iVar21 = *(int *)(*(longlong *)(lVar13 + 0x470) + 0x83c);
        }
        else {
          iVar21 = iVar21 + -1;
        }
        fVar24 = fVar24 + *(float *)(*(longlong *)(lVar13 + 0x478) + (longlong)iVar21 * 4);
        lVar13 = FWeakObjectPtr::Get(&local_2a0);
        uVar20 = local_80;
        lVar14 = (longlong)(int)local_80;
        iVar21 = (int)local_80 + 1;
        local_80 = CONCAT44(local_80._4_4_,iVar21);
        if (local_80._4_4_ < iVar21) {
          TArray<FChildZOrder,TInlineAllocator<64,FDefaultAllocator>_>::ResizeGrow
                    (local_288,uVar20 & 0xffffffff);
        }
        plVar12 = local_288;
        if (local_88 != (longlong *)0x0) {
          plVar12 = local_88;
        }
        plVar12[lVar14] = lVar13;
      }
      else if (*(char *)((longlong)plVar12 + 0xc25) != '\0') {
        FTickFunction::UnRegisterTickFunction(plVar12 + 0x183);
      }
      plVar12 = local_88;
    }
    fVar24 = fVar24 * param_2;
    if (*(float *)(plVar8 + 0x93) <= fVar24 && fVar24 != *(float *)(plVar8 + 0x93)) {
      local_2a8[0] = 0;
      plVar15 = local_288;
      if (plVar12 != (longlong *)0x0) {
        plVar15 = plVar19;
      }
      FUN_14302f2a0((ulonglong)plVar15 | (ulonglong)plVar12,(longlong)(int)local_80,0,local_2a8);
      plVar12 = local_88;
      plVar15 = plVar19;
      plVar18 = plVar19;
      do {
        if (((int)local_80 <= (int)plVar18) &&
           (bVar23 = plVar15 == (longlong *)0x0, plVar15 = plVar19, plVar18 = plVar19, bVar23))
        break;
        plVar9 = local_288;
        if (plVar12 != (longlong *)0x0) {
          plVar9 = plVar12;
        }
        lVar6 = plVar9[(longlong)plVar15];
        if (lVar6 != 0) {
          lVar13 = *(longlong *)(lVar6 + 0x470);
          iVar11 = *(int *)(lVar13 + 0x830);
          iVar21 = iVar11 + -1;
          if (iVar11 == 0) {
            iVar21 = *(int *)(lVar13 + 0x83c);
          }
          fVar24 = fVar24 - param_2 * *(float *)(*(longlong *)(lVar6 + 0x478) + (longlong)iVar21 * 4
                                                );
          if (iVar11 == 0) {
            iVar11 = *(int *)(lVar13 + 0x83c) + 1;
          }
          iVar21 = iVar11 + 1;
          if (iVar21 < 1) {
            iVar5 = 1;
          }
          else {
            iVar5 = *(int *)(lVar6 + 0x480);
            if (iVar21 < *(int *)(lVar6 + 0x480)) {
              iVar5 = iVar21;
            }
          }
          *(int *)(lVar13 + 0x830) = iVar5;
          iVar21 = *(int *)(*(longlong *)(lVar6 + 0x470) + 0x830);
          if (iVar11 == iVar21) {
            plVar12 = local_288;
            if (local_88 != (longlong *)0x0) {
              plVar12 = local_88;
            }
            plVar12[(longlong)plVar15] = plVar12[(int)local_80 + -1];
            iVar21 = ((int)local_80 - ((int)local_80 + -1)) + -1;
            if (iVar21 != 0) {
              plVar12 = local_288;
              if (local_88 != (longlong *)0x0) {
                plVar12 = local_88;
              }
              _guard_xfg_dispatch_icall_nop
                        (plVar12 + ((int)local_80 + -1),plVar12 + (int)local_80,
                         (longlong)iVar21 << 3);
            }
            local_80 = CONCAT44(local_80._4_4_,(int)local_80 + -1);
            FUN_142d6dbc0(local_288);
            plVar12 = local_88;
          }
          else {
            if (iVar21 == 0) {
              iVar21 = *(int *)(*(longlong *)(lVar6 + 0x470) + 0x83c);
            }
            else {
              iVar21 = iVar21 + -1;
            }
            plVar18 = (longlong *)(ulonglong)((int)plVar18 + 1);
            plVar15 = (longlong *)((longlong)plVar15 + 1);
            fVar24 = fVar24 + param_2 * *(float *)(*(longlong *)(lVar6 + 0x478) +
                                                  (longlong)iVar21 * 4);
            plVar12 = local_88;
          }
        }
      } while (*(float *)(plVar8 + 0x93) <= fVar24 && fVar24 != *(float *)(plVar8 + 0x93));
    }
    plVar8 = local_288;
    if (plVar12 != (longlong *)0x0) {
      plVar8 = plVar12;
    }
    plVar15 = (longlong *)((longlong)(int)local_80 & 0x1fffffffffffffff);
    if (plVar8 + (int)local_80 < plVar8) {
      plVar15 = plVar19;
    }
    if (plVar15 != (longlong *)0x0) {
      do {
        if ((((*plVar8 != 0) && (lVar6 = *(longlong *)(*plVar8 + 0x470), lVar6 != 0)) &&
            (*(char *)(lVar6 + 0xc25) == '\0')) &&
           (cVar4 = FUN_1423521e0(lVar6,lVar6 + 0xc18), cVar4 != '\0')) {
          *(longlong *)(lVar6 + 0xc68) = lVar6;
        }
        plVar8 = plVar8 + 1;
        plVar19 = (longlong *)((longlong)plVar19 + 1);
        plVar12 = local_88;
      } while (plVar19 != plVar15);
    }
    if (plVar12 != (longlong *)0x0) {
      FMemory::Free(plVar12);
    }
  }
  return;
}



// FUNCTION 143036340 FUN_143036340 body=48 status=ok
// SIG undefined FUN_143036340(void)

void FUN_143036340(longlong param_1)

{
  longlong lVar1;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar1 = *(longlong *)(param_1 + 0x4d8);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0xb69) != '\0')) {
    *(undefined1 *)(lVar1 + 0xb69) = 0;
  }
  return;
}



// FUNCTION 143036370 FUN_143036370 body=138 status=ok
// SIG undefined FUN_143036370(void)

void FUN_143036370(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  if ((lVar1 == 0) && (lVar1 = FUN_1423407b0(), lVar1 == 0)) {
    return;
  }
  fVar2 = *(float *)(lVar1 + 0x790) - *(float *)(param_1 + 0xb6c);
  if (*(float *)(param_1 + 0x36c) <= fVar2 && fVar2 != *(float *)(param_1 + 0x36c)) {
    FUN_143034560(param_1);
    if (*(longlong *)(lVar1 + 400) == 0) {
      lVar1 = *(longlong *)(lVar1 + 0x3f8);
    }
    else {
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    if (lVar1 != 0) {
      FUN_142880530(lVar1,param_1 + 0xb58);
      *(undefined8 *)(param_1 + 0xb58) = 0;
    }
  }
  return;
}



// FUNCTION 143036400 IsCommittedAsInstance body=85 status=ok
// SIG undefined IsCommittedAsInstance(void)

undefined1 UEditableMeshAdapter::IsCommittedAsInstance(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxDestruction\\Public\\ClothActor.h"
             ,0x1b,L"Pure virtual not implemented (%s)",L"AClothActor::WasRecentlyRendered");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxDestruction\\Public\\ClothActor.h"
             ,0x1b,L"Pure virtual not implemented (%s)",L"AClothActor::WasRecentlyRendered");
  return 0;
}



// FUNCTION 143036480 FUN_143036480 body=54 status=ok
// SIG undefined FUN_143036480(void)

bool FUN_143036480(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[0x8e];
  lVar2 = (**(code **)(*param_1 + 0x148))();
  return *(float *)(lVar2 + 0x790) - 1.0 < *(float *)(lVar1 + 0x36c);
}



// FUNCTION 1430364d0 FUN_1430364d0 body=135 status=ok
// SIG undefined FUN_1430364d0(void)

void FUN_1430364d0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  bool bVar4;
  longlong lVar5;
  
  piVar1 = *(int **)(*param_2 + 8);
  if (((piVar1 != (int *)0x0) && (*piVar1 == 5)) && (lVar2 = *(longlong *)(piVar1 + 2), lVar2 != 0))
  {
    lVar5 = FUN_143036a00();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (puVar3 = *(undefined8 **)(param_1 + 8), puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)(puVar3,param_2);
    }
  }
  return;
}



// FUNCTION 143036560 FUN_143036560 body=124 status=ok
// SIG undefined FUN_143036560(void)

void FUN_143036560(longlong param_1,longlong *param_2,uint param_3)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_3 != 0) {
    uVar3 = (ulonglong)param_3;
    do {
      piVar1 = *(int **)(*param_2 + 0x10);
      if (((piVar1 == (int *)0x0) || (*piVar1 != 7)) || (*(longlong *)(piVar1 + 2) == 0)) {
        FUN_1426d83f0(*(undefined8 *)(param_1 + 0x18),*param_2,1,*(undefined4 *)(param_1 + 0x20));
      }
      else {
        lVar2 = FWeakObjectPtr::Get(*(longlong *)(piVar1 + 2) + 0x14);
        if (lVar2 != 0) {
          FUN_143036a00();
        }
      }
      param_2 = param_2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



// FUNCTION 1430365e0 FUN_1430365e0 body=212 status=ok
// SIG undefined FUN_1430365e0(void)

void FUN_1430365e0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  piVar2 = *(int **)(*param_2 + 8);
  if (((piVar2 != (int *)0x0) && (*piVar2 == 5)) && (lVar3 = *(longlong *)(piVar2 + 2), lVar3 != 0))
  {
    lVar7 = FUN_143036a00();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      iVar1 = *(int *)(lVar3 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar8 = iVar1 >> 0x1f & 0xffff;
        uVar6 = iVar1 + uVar8;
        lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                (longlong)(int)((uVar6 & 0xffff) - uVar8) * 0x18;
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) >> 0x1d & 1) == 0) {
        uVar5 = (**(code **)(*(longlong *)*param_2 + 0x240))((longlong *)*param_2,0);
        *(undefined1 *)(lVar3 + 0xb68) = uVar5;
        FUN_140628450(lVar3,param_2);
      }
    }
  }
  return;
}



// FUNCTION 1430366c0 FUN_1430366c0 body=121 status=ok
// SIG undefined FUN_1430366c0(void)

void FUN_1430366c0(longlong param_1,longlong *param_2,uint param_3)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_3 != 0) {
    uVar3 = (ulonglong)param_3;
    do {
      piVar1 = *(int **)(*param_2 + 0x10);
      if (((piVar1 == (int *)0x0) || (*piVar1 != 7)) || (*(longlong *)(piVar1 + 2) == 0)) {
        FUN_1426d83f0(*(undefined8 *)(param_1 + 0x18),*param_2,0,*(undefined4 *)(param_1 + 0x20));
      }
      else {
        lVar2 = FWeakObjectPtr::Get(*(longlong *)(piVar1 + 2) + 0x14);
        if (lVar2 != 0) {
          FUN_143036a00();
        }
      }
      param_2 = param_2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



// FUNCTION 143036740 FUN_143036740 body=162 status=ok
// SIG undefined FUN_143036740(void)

longlong FUN_143036740(void)

{
  if (DAT_146b472c8 == 0) {
    FUN_14171ccd0(L"/Script/GbxDestruction",L"GbxDestructibleActor",&DAT_146b472c8,FUN_1430371b0,
                  0x4f8,0x10000004,0,L"Engine",&LAB_143036f80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_14062e7a0
                  ,&LAB_140447700,0);
  }
  return DAT_146b472c8;
}



// FUNCTION 1430367f0 Z_Construct_UClass_UNavAreaMeta body=47 status=ok
// SIG undefined Z_Construct_UClass_UNavAreaMeta(void)

longlong Z_Construct_UClass_UNavAreaMeta(void)

{
  if (DAT_146b472c0 == 0) {
    FUN_141786440(&DAT_146b472c0,&PTR_FUN_145a561e0);
  }
  return DAT_146b472c0;
}



// FUNCTION 143036820 FUN_143036820 body=47 status=ok
// SIG undefined FUN_143036820(void)

longlong FUN_143036820(void)

{
  if (DAT_146b472a0 == 0) {
    FUN_141786a30(&DAT_146b472a0,&PTR_Z_Construct_UClass_UNavAreaMeta_14678b920);
  }
  return DAT_146b472a0;
}



// FUNCTION 143036850 FUN_143036850 body=47 status=ok
// SIG undefined FUN_143036850(void)

longlong FUN_143036850(void)

{
  if (DAT_146b472a8 == 0) {
    FUN_141786a30(&DAT_146b472a8,&PTR_Z_Construct_UClass_UNavAreaMeta_14678b960);
  }
  return DAT_146b472a8;
}



// FUNCTION 143036880 FUN_143036880 body=47 status=ok
// SIG undefined FUN_143036880(void)

longlong FUN_143036880(void)

{
  if (DAT_146b472b0 == 0) {
    FUN_141786a30(&DAT_146b472b0,&PTR_Z_Construct_UClass_UNavAreaMeta_14678b9a0);
  }
  return DAT_146b472b0;
}



// FUNCTION 1430368b0 FUN_1430368b0 body=47 status=ok
// SIG undefined FUN_1430368b0(void)

longlong FUN_1430368b0(void)

{
  if (DAT_146b472b8 == 0) {
    FUN_141786a30(&DAT_146b472b8,&PTR_Z_Construct_UClass_UNavAreaMeta_14678ba50);
  }
  return DAT_146b472b8;
}



// FUNCTION 1430368e0 FUN_1430368e0 body=53 status=ok
// SIG undefined FUN_1430368e0(void)

void FUN_1430368e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_145a572e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 143036940 FUN_143036940 body=162 status=ok
// SIG undefined FUN_143036940(void)

longlong FUN_143036940(void)

{
  if (DAT_146b47320 == 0) {
    FUN_14171ccd0(L"/Script/GbxDestruction",L"GbxUserDestructibleSyncManager",&DAT_146b47320,
                  FUN_140447710,0x4f8,0x10000000,0,L"Engine",&LAB_143036fa0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_146b47320;
}



// FUNCTION 143036a00 FUN_143036a00 body=162 status=ok
// SIG undefined FUN_143036a00(void)

longlong FUN_143036a00(void)

{
  if (DAT_146b47308 == 0) {
    FUN_14171ccd0(L"/Script/GbxDestruction",L"GbxDestructibleComponent",&DAT_146b47308,FUN_1430371e0
                  ,0xbd0,0x10000000,0,L"Engine",&LAB_143036fc0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGGameModeButtonListItemContent::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b47308;
}



// FUNCTION 143036ab0 FUN_143036ab0 body=47 status=ok
// SIG undefined FUN_143036ab0(void)

longlong FUN_143036ab0(void)

{
  if (DAT_146b47300 == 0) {
    FUN_141786440(&DAT_146b47300,&PTR_FUN_145a56910);
  }
  return DAT_146b47300;
}



// FUNCTION 143036ae0 FUN_143036ae0 body=47 status=ok
// SIG undefined FUN_143036ae0(void)

longlong FUN_143036ae0(void)

{
  if (DAT_146b472e0 == 0) {
    FUN_141786a30(&DAT_146b472e0,&PTR_FUN_14678bce0);
  }
  return DAT_146b472e0;
}



// FUNCTION 143036b10 FUN_143036b10 body=47 status=ok
// SIG undefined FUN_143036b10(void)

longlong FUN_143036b10(void)

{
  if (DAT_146b472e8 == 0) {
    FUN_141786a30(&DAT_146b472e8,&PTR_FUN_14678bd90);
  }
  return DAT_146b472e8;
}



// FUNCTION 143036b40 FUN_143036b40 body=47 status=ok
// SIG undefined FUN_143036b40(void)

longlong FUN_143036b40(void)

{
  if (DAT_146b472f0 == 0) {
    FUN_141786a30(&DAT_146b472f0,&PTR_FUN_14678be10);
  }
  return DAT_146b472f0;
}



// FUNCTION 143036b70 FUN_143036b70 body=47 status=ok
// SIG undefined FUN_143036b70(void)

longlong FUN_143036b70(void)

{
  if (DAT_146b472f8 == 0) {
    FUN_141786a30(&DAT_146b472f8,&PTR_FUN_14678bea0);
  }
  return DAT_146b472f8;
}



// FUNCTION 143036ba0 FUN_143036ba0 body=162 status=ok
// SIG undefined FUN_143036ba0(void)

longlong FUN_143036ba0(void)

{
  if (DAT_146b47258 == 0) {
    FUN_14171ccd0(L"/Script/GbxDestruction",L"ClothActor",&DAT_146b47258,FUN_140447710,0x470,
                  0x10000001,0,L"Engine",&LAB_143036f10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_146b47258;
}



// FUNCTION 143036c50 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGRichTextBlock::GetPrivateStaticClass(void)

{
  if (DAT_146b47268 == 0) {
    FUN_14171ccd0(L"/Script/GbxDestruction",L"ClothSkeletalMeshActor",&DAT_146b47268,FUN_140447710,
                  0x488,0x10000000,0,L"Engine",&LAB_143036f40,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_143036ba0
                  ,&LAB_140447700,0);
  }
  return DAT_146b47268;
}



// FUNCTION 143036d00 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong APlayerState::GetPrivateStaticClass(void)

{
  if (DAT_146b47278 == 0) {
    FUN_14171ccd0(L"/Script/GbxDestruction",L"ClothStaticMeshActor",&DAT_146b47278,FUN_140447710,
                  0x478,0x10000000,0,L"Engine",&LAB_143036f60,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_143036ba0
                  ,&LAB_140447700,0);
  }
  return DAT_146b47278;
}



// FUNCTION 143036db0 FUN_143036db0 body=47 status=ok
// SIG undefined FUN_143036db0(void)

longlong FUN_143036db0(void)

{
  if (DAT_146b47250 == 0) {
    FUN_141786440(&DAT_146b47250,&PTR_FUN_145a56a20);
  }
  return DAT_146b47250;
}



// FUNCTION 143036de0 FUN_143036de0 body=47 status=ok
// SIG undefined FUN_143036de0(void)

longlong FUN_143036de0(void)

{
  if (DAT_146b47310 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146b47310,&PTR_s__Script_GbxDestruction_145a574b8);
  }
  return DAT_146b47310;
}



// FUNCTION 143036e50 FUN_143036e50 body=162 status=ok
// SIG undefined FUN_143036e50(void)

longlong FUN_143036e50(void)

{
  if (DAT_146b47288 == 0) {
    FUN_14171ccd0(L"/Script/GbxDestruction",L"ClothManager",&DAT_146b47288,FUN_140447710,0x4a0,
                  0x10000000,0,L"Engine",&LAB_143036f30,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  AXScriptedBotSpawner::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b47288;
}



// FUNCTION 143037000 FUN_143037000 body=198 status=ok
// SIG undefined FUN_143037000(void)

undefined8 FUN_143037000(undefined8 param_1,undefined1 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined4 *)(param_3 + 4);
    do {
      *param_2 = *(undefined1 *)(puVar3 + -1);
      puVar1 = (undefined8 *)(param_2 + 0x10);
      *(undefined4 *)(param_2 + 4) = *puVar3;
      *(undefined4 *)(param_2 + 8) = puVar3[1];
      if (puVar1 != (undefined8 *)(puVar3 + 3)) {
        iVar2 = puVar3[5];
        _Src = *(void **)(puVar3 + 3);
        *(int *)(param_2 + 0x18) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 0x1c) == 0)) {
          *(undefined4 *)(param_2 + 0x1c) = 0;
        }
        else {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2);
        }
      }
      puVar3 = puVar3 + 8;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x20;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1430370d0 FUN_1430370d0 body=85 status=ok
// SIG undefined FUN_1430370d0(void)

void FUN_1430370d0(void)

{
  if (DAT_146b47158 == 0) {
    if (DAT_146b47310 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b47310,&PTR_s__Script_GbxDestruction_145a574b8);
    }
    DAT_146b47158 = GetStaticEnum(FUN_143037380,DAT_146b47310,L"EDestructibleRelevance");
  }
  return;
}



// FUNCTION 143037130 FUN_143037130 body=6 status=ok
// SIG undefined FUN_143037130(void)

undefined8 FUN_143037130(void)

{
  return 0xbcc7d1ba;
}



// FUNCTION 1430371b0 FUN_1430371b0 body=34 status=ok
// SIG undefined FUN_1430371b0(void)

void FUN_1430371b0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143036740();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnRep_FractureBuffer_145a57400,4);
  return;
}



// FUNCTION 1430371e0 FUN_1430371e0 body=34 status=ok
// SIG undefined FUN_1430371e0(void)

void FUN_1430371e0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143036a00();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_FractureRandomChunk_145a57470,4);
  return;
}



// FUNCTION 143037210 FUN_143037210 body=113 status=ok
// SIG undefined FUN_143037210(void)

void FUN_143037210(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b47290 == 0) {
    if (DAT_146b47310 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b47310,&PTR_s__Script_GbxDestruction_145a574b8);
    }
    lVar1 = DAT_146b47310;
    uVar2 = FUN_143037130();
    DAT_146b47290 = GetStaticStruct(FUN_1430373b0,lVar1,L"GbxDestructibleNetBuffer",0x20,uVar2);
  }
  return;
}



// FUNCTION 143037290 FUN_143037290 body=47 status=ok
// SIG undefined FUN_143037290(void)

longlong FUN_143037290(void)

{
  if (DAT_146b47280 == 0) {
    FUN_141786440(&DAT_146b47280,&PTR_FUN_145a570e0);
  }
  return DAT_146b47280;
}



// FUNCTION 1430372c0 FUN_1430372c0 body=47 status=ok
// SIG undefined FUN_1430372c0(void)

longlong FUN_1430372c0(void)

{
  if (DAT_146b47260 == 0) {
    FUN_141786440(&DAT_146b47260,&PTR_GetPrivateStaticClass_145a56d70);
  }
  return DAT_146b47260;
}



// FUNCTION 1430372f0 FUN_1430372f0 body=47 status=ok
// SIG undefined FUN_1430372f0(void)

longlong FUN_1430372f0(void)

{
  if (DAT_146b47270 == 0) {
    FUN_141786440(&DAT_146b47270,&PTR_GetPrivateStaticClass_145a56f90);
  }
  return DAT_146b47270;
}



// FUNCTION 143037320 FUN_143037320 body=47 status=ok
// SIG undefined FUN_143037320(void)

longlong FUN_143037320(void)

{
  if (DAT_146b47318 == 0) {
    FUN_141786440(&DAT_146b47318,&PTR_FUN_145a56450);
  }
  return DAT_146b47318;
}



// FUNCTION 143037350 FUN_143037350 body=47 status=ok
// SIG undefined FUN_143037350(void)

longlong FUN_143037350(void)

{
  if (DAT_146b472d0 == 0) {
    FUN_141786a30(&DAT_146b472d0,&PTR_FUN_14678bca0);
  }
  return DAT_146b472d0;
}



// FUNCTION 143037380 FUN_143037380 body=47 status=ok
// SIG undefined FUN_143037380(void)

longlong FUN_143037380(void)

{
  if (DAT_146b472d8 == 0) {
    FUN_1417866a0(&DAT_146b472d8,&PTR_FUN_14678c550);
  }
  return DAT_146b472d8;
}



// FUNCTION 1430373b0 FUN_1430373b0 body=47 status=ok
// SIG undefined FUN_1430373b0(void)

longlong FUN_1430373b0(void)

{
  if (DAT_146b47298 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b47298,&PTR_FUN_14678b8a0);
  }
  return DAT_146b47298;
}



// FUNCTION 143037400 FUN_143037400 body=143 status=ok
// SIG undefined FUN_143037400(void)

void FUN_143037400(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_res10 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_143031650(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 143037490 FUN_143037490 body=45 status=ok
// SIG undefined FUN_143037490(void)

void FUN_143037490(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_143031ab0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 143037520 FUN_143037520 body=130 status=ok
// SIG undefined FUN_143037520(void)

void FUN_143037520(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_143035030(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1430375b0 FUN_1430375b0 body=130 status=ok
// SIG undefined FUN_1430375b0(void)

void FUN_1430375b0(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_143035240(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 143037640 FUN_143037640 body=493 status=ok
// SIG undefined FUN_143037640(void)

void FUN_143037640(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res10 [24];
  
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_143f4c9a8;
    plVar2[1] = (longlong)FUN_1430563a0;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[3] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143f4c9f0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146535868,1);
    (**(code **)(*plVar2 + 0x20))(plVar2,local_res10);
    iVar1 = DAT_146535870;
    lVar3 = (longlong)DAT_146535870;
    DAT_146535870 = DAT_146535870 + 1;
    if (DAT_146535874 < DAT_146535870) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146535868,iVar1);
    }
    puVar4 = (undefined8 *)(lVar3 * 0x10 + DAT_146535868);
    *puVar4 = plVar2;
    *(undefined4 *)(puVar4 + 1) = 2;
  }
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_1440459e8;
    plVar2[1] = (longlong)FUN_1430563d0;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[3] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_144045a30;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1465357a8,1);
    (**(code **)(*plVar2 + 0x20))(plVar2,local_res10);
    iVar1 = DAT_1465357b0;
    lVar3 = (longlong)DAT_1465357b0;
    DAT_1465357b0 = DAT_1465357b0 + 1;
    if (DAT_1465357b4 < DAT_1465357b0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1465357a8,iVar1);
    }
    puVar4 = (undefined8 *)(lVar3 * 0x10 + DAT_1465357a8);
    *puVar4 = plVar2;
    *(undefined4 *)(puVar4 + 1) = 2;
  }
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_144045a78;
    plVar2[1] = (longlong)FUN_143055be0;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[3] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_144045ac0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146533130,1);
    (**(code **)(*plVar2 + 0x20))(plVar2,local_res10);
    iVar1 = DAT_146533138;
    lVar3 = (longlong)DAT_146533138;
    DAT_146533138 = DAT_146533138 + 1;
    if (DAT_14653313c < DAT_146533138) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146533130,iVar1);
    }
    puVar4 = (undefined8 *)(lVar3 * 0x10 + DAT_146533130);
    *puVar4 = plVar2;
    *(undefined4 *)(puVar4 + 1) = 2;
  }
  return;
}



// FUNCTION 143037830 FUN_143037830 body=719 status=ok
// SIG undefined FUN_143037830(void)

void FUN_143037830(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int local_98;
  uint uStack_94;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_70;
  uint uStack_6c;
  undefined *local_68;
  uint uStack_60;
  int iStack_5c;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  uint uStack_38;
  int iStack_34;
  undefined8 uStack_30;
  
  iVar5 = 0;
  uStack_94 = 1;
  local_98 = 0;
  iStack_84 = 0;
  iStack_80 = 0;
  iVar6 = (int)DAT_14678c6c8;
  if (iVar6 != 0) {
    puVar7 = DAT_14678c6c0;
    if (DAT_14678c6c0 == (uint *)0x0) {
      puVar7 = (uint *)&DAT_14678c6b0;
    }
    uVar1 = *puVar7;
    iStack_80 = iVar5;
    local_98 = iVar5;
    while (uVar1 == 0) {
      lVar4 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar3 = local_98 + 1;
      bVar2 = (int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar3;
      if (bVar2) goto LAB_143037909;
      uVar1 = puVar7[lVar4 + 1];
    }
    uStack_94 = -uVar1 & uVar1;
    iVar3 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar3 = 0x20;
    }
    else {
      iVar3 = 0x1f - iVar3;
    }
    iStack_84 = (iStack_80 - iVar3) + 0x1f;
    if (iVar6 < iStack_84) {
LAB_143037909:
      iStack_84 = iVar6;
    }
  }
  uStack_60 = 0xffffffff;
  iStack_5c = iStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  local_50 = &DAT_14678c6a0;
  puStack_40 = &DAT_14678c6b0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = &DAT_14678c6b0;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  iStack_34 = iStack_5c;
  while ((iStack_5c != iVar6 || (local_68 != &DAT_14678c6b0))) {
    (**(code **)(*param_2 + 0x38))
              (param_2,DAT_14678c6a0 + 8 + (longlong)iStack_5c * 0x18,
               *(undefined8 *)(DAT_14678c6a0 + (longlong)iStack_5c * 0x18));
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  local_98 = 0;
  uStack_94 = 1;
  iStack_84 = 0;
  iStack_80 = 0;
  iVar6 = (int)DAT_14678c718;
  if (iVar6 != 0) {
    puVar7 = DAT_14678c710;
    if (DAT_14678c710 == (uint *)0x0) {
      puVar7 = (uint *)&DAT_14678c700;
    }
    uVar1 = *puVar7;
    iStack_80 = iVar5;
    local_98 = iVar5;
    while (uVar1 == 0) {
      lVar4 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar5 = local_98 + 1;
      bVar2 = (int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar5;
      if (bVar2) goto LAB_143037a45;
      uVar1 = puVar7[lVar4 + 1];
    }
    uStack_94 = -uVar1 & uVar1;
    iVar5 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    iStack_84 = (iStack_80 - iVar5) + 0x1f;
    if (iVar6 < iStack_84) {
LAB_143037a45:
      iStack_84 = iVar6;
    }
  }
  uStack_60 = 0xffffffff;
  iStack_5c = iStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  local_50 = &DAT_14678c6f0;
  puStack_40 = &DAT_14678c700;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = &DAT_14678c700;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  iStack_34 = iStack_5c;
  while ((iStack_5c != iVar6 || (local_68 != &DAT_14678c700))) {
    (**(code **)(*param_2 + 0x38))
              (param_2,DAT_14678c6f0 + 8 + (longlong)iStack_5c * 0x18,
               *(undefined8 *)(DAT_14678c6f0 + (longlong)iStack_5c * 0x18),0);
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return;
}



// FUNCTION 143037b00 FUN_143037b00 body=128 status=ok
// SIG undefined FUN_143037b00(void)

void * FUN_143037b00(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  iVar1 = *(int *)((longlong)param_2 + 0x18);
  _Src = *(void **)((longlong)param_2 + 0x10);
  *(int *)((longlong)param_1 + 0x28) = iVar1;
  if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0x2c) == 0)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    TArray<unsigned_int,TInlineAllocator<8,FDefaultAllocator>_>::ResizeForCopy(param_1,iVar1);
    if (_Src == (void *)0x0) {
      _Src = param_2;
    }
    _Dst = *(void **)((longlong)param_1 + 0x20);
    if (*(void **)((longlong)param_1 + 0x20) == (void *)0x0) {
      _Dst = param_1;
    }
    _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 143037b80 FUN_143037b80 body=537 status=ok
// SIG undefined FUN_143037b80(void)

int * FUN_143037b80(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar5 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar5 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar5);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar5 = (int)param_1[6];
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)(*param_1 + 4 + (longlong)iVar5 * 0x14);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x14) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = iVar5;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  bVar8 = false;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar5 & 0x1f);
  puVar1 = (uint *)(*param_1 + (longlong)iVar5 * 0x14);
  *puVar1 = *(uint *)*param_3;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0xffffffff;
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar7 != 1) {
    if (iVar7 != 0) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar3 = *(int *)((longlong)plVar4 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar1) * 4);
      if (iVar3 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar3 * 0x14) == *puVar1) goto LAB_143037ccb;
          iVar3 = *(int *)(*param_1 + 0xc + (longlong)iVar3 * 0x14);
        } while (iVar3 != -1);
      }
    }
    iVar3 = -1;
LAB_143037ccb:
    bVar8 = iVar3 != -1;
    if (bVar8) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar3 * 0x14),puVar1,0xc);
      TSparseArray<TSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar5,1);
      *param_2 = iVar3;
      goto LAB_143037d70;
    }
  }
  cVar2 = TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
          ConditionalRehash(param_1,iVar7,0);
  if (cVar2 == '\0') {
    uVar6 = (int)param_1[9] - 1U & *puVar1;
    puVar1[4] = uVar6;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    puVar1[3] = *(uint *)((longlong)plVar4 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         *param_2;
  }
LAB_143037d70:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 143037da0 FUN_143037da0 body=945 status=ok
// SIG undefined FUN_143037da0(void)

void FUN_143037da0(undefined8 *param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  int iVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  int iVar25;
  undefined8 *puVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  
  iVar22 = (param_2 + -2) / 2;
  if (-1 < iVar22) {
    iVar25 = iVar22 * 2 + 1;
    iVar30 = iVar25;
    iVar29 = iVar22;
joined_r0x000143037de9:
    do {
      if (iVar25 < param_2) {
        iVar27 = iVar22 * 2 + 1;
        iVar25 = iVar22 * 2 + 2;
        iVar28 = iVar27;
        if ((iVar25 < param_2) &&
           (fVar2 = *(float *)((longlong)param_1 + (longlong)iVar27 * 0x90 + 0xc),
           pfVar1 = (float *)((longlong)param_1 + (longlong)iVar25 * 0x90 + 0xc), iVar28 = iVar25,
           *pfVar1 <= fVar2 && fVar2 != *pfVar1)) {
          iVar28 = iVar27;
        }
        puVar23 = param_1 + (longlong)iVar22 * 0x12;
        puVar26 = param_1 + (longlong)iVar28 * 0x12;
        if (*(float *)((longlong)puVar23 + 0xc) <= *(float *)((longlong)puVar26 + 0xc) &&
            *(float *)((longlong)puVar26 + 0xc) != *(float *)((longlong)puVar23 + 0xc)) {
          if (puVar23 != puVar26) {
            uVar3 = puVar26[1];
            uVar4 = *puVar23;
            uVar5 = puVar23[1];
            uVar6 = puVar23[2];
            uVar7 = puVar23[3];
            uVar8 = puVar23[4];
            uVar9 = puVar23[5];
            uVar10 = puVar23[6];
            uVar11 = puVar23[7];
            uVar12 = puVar23[8];
            uVar13 = puVar23[9];
            uVar14 = puVar23[10];
            uVar15 = puVar23[0xb];
            uVar16 = puVar23[0xc];
            uVar17 = puVar23[0xd];
            uVar18 = puVar23[0xe];
            uVar19 = puVar23[0xf];
            uVar20 = puVar23[0x10];
            uVar21 = puVar23[0x11];
            *puVar23 = *puVar26;
            puVar23[1] = uVar3;
            uVar3 = puVar26[3];
            puVar23[2] = puVar26[2];
            puVar23[3] = uVar3;
            uVar3 = puVar26[5];
            puVar23[4] = puVar26[4];
            puVar23[5] = uVar3;
            uVar3 = puVar26[7];
            puVar23[6] = puVar26[6];
            puVar23[7] = uVar3;
            uVar3 = puVar26[9];
            puVar23[8] = puVar26[8];
            puVar23[9] = uVar3;
            uVar3 = puVar26[0xb];
            puVar23[10] = puVar26[10];
            puVar23[0xb] = uVar3;
            uVar3 = puVar26[0xd];
            puVar23[0xc] = puVar26[0xc];
            puVar23[0xd] = uVar3;
            uVar3 = puVar26[0xf];
            puVar23[0xe] = puVar26[0xe];
            puVar23[0xf] = uVar3;
            uVar3 = puVar26[0x11];
            puVar23[0x10] = puVar26[0x10];
            puVar23[0x11] = uVar3;
            *puVar26 = uVar4;
            puVar26[1] = uVar5;
            puVar26[2] = uVar6;
            puVar26[3] = uVar7;
            puVar26[4] = uVar8;
            puVar26[5] = uVar9;
            puVar26[6] = uVar10;
            puVar26[7] = uVar11;
            puVar26[8] = uVar12;
            puVar26[9] = uVar13;
            puVar26[10] = uVar14;
            puVar26[0xb] = uVar15;
            puVar26[0xc] = uVar16;
            puVar26[0xd] = uVar17;
            puVar26[0xe] = uVar18;
            puVar26[0xf] = uVar19;
            puVar26[0x10] = uVar20;
            puVar26[0x11] = uVar21;
          }
          iVar25 = iVar28 * 2 + 1;
          iVar22 = iVar28;
          goto joined_r0x000143037de9;
        }
      }
      iVar25 = iVar30 + -2;
      iVar22 = iVar29 + -1;
      iVar30 = iVar25;
      iVar29 = iVar22;
    } while (-1 < iVar22);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar26 = param_1 + (longlong)param_2 * 0x12;
    do {
      if (param_1 != puVar26) {
        uVar3 = puVar26[1];
        uVar4 = *param_1;
        uVar5 = param_1[1];
        uVar6 = param_1[2];
        uVar7 = param_1[3];
        uVar8 = param_1[4];
        uVar9 = param_1[5];
        uVar10 = param_1[6];
        uVar11 = param_1[7];
        uVar12 = param_1[8];
        uVar13 = param_1[9];
        uVar14 = param_1[10];
        uVar15 = param_1[0xb];
        uVar16 = param_1[0xc];
        uVar17 = param_1[0xd];
        uVar18 = param_1[0xe];
        uVar19 = param_1[0xf];
        uVar20 = param_1[0x10];
        uVar21 = param_1[0x11];
        *param_1 = *puVar26;
        param_1[1] = uVar3;
        uVar3 = puVar26[3];
        param_1[2] = puVar26[2];
        param_1[3] = uVar3;
        uVar3 = puVar26[5];
        param_1[4] = puVar26[4];
        param_1[5] = uVar3;
        uVar3 = puVar26[7];
        param_1[6] = puVar26[6];
        param_1[7] = uVar3;
        uVar3 = puVar26[9];
        param_1[8] = puVar26[8];
        param_1[9] = uVar3;
        uVar3 = puVar26[0xb];
        param_1[10] = puVar26[10];
        param_1[0xb] = uVar3;
        uVar3 = puVar26[0xd];
        param_1[0xc] = puVar26[0xc];
        param_1[0xd] = uVar3;
        uVar3 = puVar26[0xf];
        param_1[0xe] = puVar26[0xe];
        param_1[0xf] = uVar3;
        uVar3 = puVar26[0x11];
        param_1[0x10] = puVar26[0x10];
        param_1[0x11] = uVar3;
        *puVar26 = uVar4;
        puVar26[1] = uVar5;
        puVar26[2] = uVar6;
        puVar26[3] = uVar7;
        puVar26[4] = uVar8;
        puVar26[5] = uVar9;
        puVar26[6] = uVar10;
        puVar26[7] = uVar11;
        puVar26[8] = uVar12;
        puVar26[9] = uVar13;
        puVar26[10] = uVar14;
        puVar26[0xb] = uVar15;
        puVar26[0xc] = uVar16;
        puVar26[0xd] = uVar17;
        puVar26[0xe] = uVar18;
        puVar26[0xf] = uVar19;
        puVar26[0x10] = uVar20;
        puVar26[0x11] = uVar21;
      }
      iVar22 = 0;
      if (1 < param_2) {
        do {
          iVar29 = iVar22 * 2 + 1;
          iVar25 = iVar22 * 2 + 2;
          iVar30 = iVar29;
          if ((iVar25 < param_2) &&
             (fVar2 = *(float *)((longlong)param_1 + (longlong)iVar29 * 0x90 + 0xc),
             pfVar1 = (float *)((longlong)param_1 + (longlong)iVar25 * 0x90 + 0xc), iVar30 = iVar25,
             *pfVar1 <= fVar2 && fVar2 != *pfVar1)) {
            iVar30 = iVar29;
          }
          puVar24 = param_1 + (longlong)iVar22 * 0x12;
          puVar23 = param_1 + (longlong)iVar30 * 0x12;
          if (*(float *)((longlong)puVar23 + 0xc) < *(float *)((longlong)puVar24 + 0xc) ||
              *(float *)((longlong)puVar23 + 0xc) == *(float *)((longlong)puVar24 + 0xc)) break;
          if (puVar24 != puVar23) {
            uVar3 = puVar23[1];
            uVar4 = *puVar24;
            uVar5 = puVar24[1];
            uVar6 = puVar24[2];
            uVar7 = puVar24[3];
            uVar8 = puVar24[4];
            uVar9 = puVar24[5];
            uVar10 = puVar24[6];
            uVar11 = puVar24[7];
            uVar12 = puVar24[8];
            uVar13 = puVar24[9];
            uVar14 = puVar24[10];
            uVar15 = puVar24[0xb];
            uVar16 = puVar24[0xc];
            uVar17 = puVar24[0xd];
            uVar18 = puVar24[0xe];
            uVar19 = puVar24[0xf];
            uVar20 = puVar24[0x10];
            uVar21 = puVar24[0x11];
            *puVar24 = *puVar23;
            puVar24[1] = uVar3;
            uVar3 = puVar23[3];
            puVar24[2] = puVar23[2];
            puVar24[3] = uVar3;
            uVar3 = puVar23[5];
            puVar24[4] = puVar23[4];
            puVar24[5] = uVar3;
            uVar3 = puVar23[7];
            puVar24[6] = puVar23[6];
            puVar24[7] = uVar3;
            uVar3 = puVar23[9];
            puVar24[8] = puVar23[8];
            puVar24[9] = uVar3;
            uVar3 = puVar23[0xb];
            puVar24[10] = puVar23[10];
            puVar24[0xb] = uVar3;
            uVar3 = puVar23[0xd];
            puVar24[0xc] = puVar23[0xc];
            puVar24[0xd] = uVar3;
            uVar3 = puVar23[0xf];
            puVar24[0xe] = puVar23[0xe];
            puVar24[0xf] = uVar3;
            uVar3 = puVar23[0x11];
            puVar24[0x10] = puVar23[0x10];
            puVar24[0x11] = uVar3;
            *puVar23 = uVar4;
            puVar23[1] = uVar5;
            puVar23[2] = uVar6;
            puVar23[3] = uVar7;
            puVar23[4] = uVar8;
            puVar23[5] = uVar9;
            puVar23[6] = uVar10;
            puVar23[7] = uVar11;
            puVar23[8] = uVar12;
            puVar23[9] = uVar13;
            puVar23[10] = uVar14;
            puVar23[0xb] = uVar15;
            puVar23[0xc] = uVar16;
            puVar23[0xd] = uVar17;
            puVar23[0xe] = uVar18;
            puVar23[0xf] = uVar19;
            puVar23[0x10] = uVar20;
            puVar23[0x11] = uVar21;
          }
          iVar22 = iVar30;
        } while (iVar30 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar26 = puVar26 + -0x12;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 143038160 FUN_143038160 body=349 status=ok
// SIG undefined FUN_143038160(void)

void FUN_143038160(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  iVar5 = (param_2 + -2) / 2;
  if (-1 < iVar5) {
    iVar6 = iVar5 * 2 + 1;
    iVar1 = iVar6;
    iVar8 = iVar5;
joined_r0x00014303818a:
    do {
      if (iVar6 < param_2) {
        iVar6 = iVar5 * 2;
        iVar7 = iVar6 + 1;
        if (iVar6 + 2 < param_2) {
          if (*(uint *)(param_1 + (longlong)iVar7 * 2 + 1) <
              *(uint *)(param_1 + (longlong)iVar6 * 2 + 5)) {
            iVar7 = iVar6;
          }
          iVar7 = iVar7 + 1;
        }
        puVar10 = param_1 + (longlong)iVar5 * 2;
        puVar9 = param_1 + (longlong)iVar7 * 2;
        if (*(uint *)(puVar9 + 1) < *(uint *)(puVar10 + 1)) {
          if (puVar10 != puVar9) {
            uVar2 = puVar9[1];
            uVar3 = *puVar10;
            uVar4 = puVar10[1];
            *puVar10 = *puVar9;
            puVar10[1] = uVar2;
            *puVar9 = uVar3;
            puVar9[1] = uVar4;
          }
          iVar6 = iVar7 * 2 + 1;
          iVar5 = iVar7;
          goto joined_r0x00014303818a;
        }
      }
      iVar6 = iVar1 + -2;
      iVar5 = iVar8 + -1;
      iVar1 = iVar6;
      iVar8 = iVar5;
    } while (-1 < iVar5);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar9 = param_1 + (longlong)param_2 * 2;
    do {
      if (param_1 != puVar9) {
        uVar2 = puVar9[1];
        uVar3 = *param_1;
        uVar4 = param_1[1];
        *param_1 = *puVar9;
        param_1[1] = uVar2;
        *puVar9 = uVar3;
        puVar9[1] = uVar4;
      }
      iVar5 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar5 * 2;
          iVar6 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            if (*(uint *)(param_1 + (longlong)iVar6 * 2 + 1) <
                *(uint *)(param_1 + (longlong)iVar1 * 2 + 5)) {
              iVar6 = iVar1;
            }
            iVar6 = iVar6 + 1;
          }
          puVar11 = param_1 + (longlong)iVar5 * 2;
          puVar10 = param_1 + (longlong)iVar6 * 2;
          if (*(uint *)(puVar11 + 1) <= *(uint *)(puVar10 + 1)) break;
          if (puVar11 != puVar10) {
            uVar2 = puVar10[1];
            uVar3 = *puVar11;
            uVar4 = puVar11[1];
            *puVar11 = *puVar10;
            puVar11[1] = uVar2;
            *puVar10 = uVar3;
            puVar10[1] = uVar4;
          }
          iVar5 = iVar6;
        } while (iVar6 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar9 = puVar9 + -2;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1430382c0 FUN_1430382c0 body=1525 status=ok
// SIG undefined FUN_1430382c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430382c0(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  float *pfVar1;
  longlong lVar2;
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
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  longlong lVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  longlong *plVar36;
  float fVar37;
  undefined1 auStack_3c8 [48];
  longlong local_398;
  longlong local_388;
  longlong lStack_380;
  undefined4 local_378;
  undefined1 local_370 [744];
  ulonglong local_88;
  
  if (1 < param_2) {
    local_88 = DAT_1468387a8 ^ (ulonglong)auStack_3c8;
    lStack_380 = param_2 * 0x90 + -0x90 + param_1;
    fVar37 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar37 = fVar37 + 1.8446744e+19;
    }
    local_388 = param_1;
    fVar37 = _guard_xfg_dispatch_icall_nop(fVar37);
    local_378 = (undefined4)(longlong)(fVar37 + fVar37);
    _guard_xfg_dispatch_icall_nop(local_370,0,0x2e8);
    plVar36 = &local_388;
    do {
      puVar35 = (undefined8 *)*plVar36;
      puVar30 = (undefined8 *)plVar36[1];
      lVar2 = plVar36[2];
      local_398._0_4_ = (int)lVar2;
      lVar29 = ((longlong)puVar30 - (longlong)puVar35) / 0x90 + 1;
      puVar34 = puVar35;
      if ((int)local_398 != 0) {
LAB_1430383d0:
        if (8 < lVar29) {
          if (lVar29 < 0) {
            lVar29 = lVar29 + 1;
          }
          puVar35 = puVar34 + (lVar29 >> 1) * 0x12;
          if (puVar35 != puVar34) {
            uVar10 = puVar34[1];
            uVar3 = *(undefined4 *)puVar35;
            uVar4 = *(undefined4 *)((longlong)puVar35 + 4);
            uVar5 = *(undefined4 *)(puVar35 + 1);
            uVar6 = *(undefined4 *)((longlong)puVar35 + 0xc);
            uVar11 = puVar35[2];
            uVar12 = puVar35[3];
            uVar13 = puVar35[4];
            uVar14 = puVar35[5];
            uVar15 = puVar35[6];
            uVar16 = puVar35[7];
            uVar17 = puVar35[8];
            uVar18 = puVar35[9];
            uVar19 = puVar35[10];
            uVar20 = puVar35[0xb];
            uVar21 = puVar35[0xc];
            uVar22 = puVar35[0xd];
            uVar23 = puVar35[0xe];
            uVar24 = puVar35[0xf];
            uVar25 = puVar35[0x10];
            uVar26 = puVar35[0x11];
            *puVar35 = *puVar34;
            puVar35[1] = uVar10;
            uVar10 = puVar34[3];
            puVar35[2] = puVar34[2];
            puVar35[3] = uVar10;
            uVar10 = puVar34[5];
            puVar35[4] = puVar34[4];
            puVar35[5] = uVar10;
            uVar10 = puVar34[7];
            puVar35[6] = puVar34[6];
            puVar35[7] = uVar10;
            uVar10 = puVar34[9];
            puVar35[8] = puVar34[8];
            puVar35[9] = uVar10;
            uVar10 = puVar34[0xb];
            puVar35[10] = puVar34[10];
            puVar35[0xb] = uVar10;
            uVar10 = puVar34[0xd];
            puVar35[0xc] = puVar34[0xc];
            puVar35[0xd] = uVar10;
            uVar10 = puVar34[0xf];
            puVar35[0xe] = puVar34[0xe];
            puVar35[0xf] = uVar10;
            uVar7 = *(undefined4 *)((longlong)puVar34 + 0x84);
            uVar8 = *(undefined4 *)(puVar34 + 0x11);
            uVar9 = *(undefined4 *)((longlong)puVar34 + 0x8c);
            *(undefined4 *)(puVar35 + 0x10) = *(undefined4 *)(puVar34 + 0x10);
            *(undefined4 *)((longlong)puVar35 + 0x84) = uVar7;
            *(undefined4 *)(puVar35 + 0x11) = uVar8;
            *(undefined4 *)((longlong)puVar35 + 0x8c) = uVar9;
            *(undefined4 *)puVar34 = uVar3;
            *(undefined4 *)((longlong)puVar34 + 4) = uVar4;
            *(undefined4 *)(puVar34 + 1) = uVar5;
            *(undefined4 *)((longlong)puVar34 + 0xc) = uVar6;
            puVar34[2] = uVar11;
            puVar34[3] = uVar12;
            puVar34[4] = uVar13;
            puVar34[5] = uVar14;
            puVar34[6] = uVar15;
            puVar34[7] = uVar16;
            puVar34[8] = uVar17;
            puVar34[9] = uVar18;
            puVar34[10] = uVar19;
            puVar34[0xb] = uVar20;
            puVar34[0xc] = uVar21;
            puVar34[0xd] = uVar22;
            puVar34[0xe] = uVar23;
            puVar34[0xf] = uVar24;
            puVar34[0x10] = uVar25;
            puVar34[0x11] = uVar26;
          }
          puVar31 = puVar30 + 0x12;
          puVar35 = puVar34;
LAB_1430384b0:
          puVar33 = puVar35;
          puVar35 = puVar33 + 0x12;
          if (puVar35 <= puVar30) goto code_r0x0001430384bc;
          goto LAB_1430384d0;
        }
        for (; puVar35 = puVar34, puVar31 = puVar34, puVar34 < puVar30; puVar30 = puVar30 + -0x12) {
          while (puVar33 = puVar31 + 0x12, puVar33 <= puVar30) {
            pfVar1 = (float *)((longlong)puVar31 + 0x9c);
            puVar31 = puVar33;
            if (*(float *)((longlong)puVar35 + 0xc) < *pfVar1) {
              puVar35 = puVar33;
            }
          }
          if (puVar35 != puVar30) {
            uVar10 = puVar30[1];
            uVar11 = *puVar35;
            uVar12 = puVar35[1];
            uVar13 = puVar35[2];
            uVar14 = puVar35[3];
            uVar15 = puVar35[4];
            uVar16 = puVar35[5];
            uVar17 = puVar35[6];
            uVar18 = puVar35[7];
            uVar19 = puVar35[8];
            uVar20 = puVar35[9];
            uVar21 = puVar35[10];
            uVar22 = puVar35[0xb];
            uVar23 = puVar35[0xc];
            uVar24 = puVar35[0xd];
            uVar25 = puVar35[0xe];
            uVar26 = puVar35[0xf];
            uVar27 = puVar35[0x10];
            uVar28 = puVar35[0x11];
            *puVar35 = *puVar30;
            puVar35[1] = uVar10;
            uVar10 = puVar30[3];
            puVar35[2] = puVar30[2];
            puVar35[3] = uVar10;
            uVar10 = puVar30[5];
            puVar35[4] = puVar30[4];
            puVar35[5] = uVar10;
            uVar10 = puVar30[7];
            puVar35[6] = puVar30[6];
            puVar35[7] = uVar10;
            uVar10 = puVar30[9];
            puVar35[8] = puVar30[8];
            puVar35[9] = uVar10;
            uVar10 = puVar30[0xb];
            puVar35[10] = puVar30[10];
            puVar35[0xb] = uVar10;
            uVar10 = puVar30[0xd];
            puVar35[0xc] = puVar30[0xc];
            puVar35[0xd] = uVar10;
            uVar10 = puVar30[0xf];
            puVar35[0xe] = puVar30[0xe];
            puVar35[0xf] = uVar10;
            uVar10 = puVar30[0x11];
            puVar35[0x10] = puVar30[0x10];
            puVar35[0x11] = uVar10;
            *puVar30 = uVar11;
            puVar30[1] = uVar12;
            puVar30[2] = uVar13;
            puVar30[3] = uVar14;
            puVar30[4] = uVar15;
            puVar30[5] = uVar16;
            puVar30[6] = uVar17;
            puVar30[7] = uVar18;
            puVar30[8] = uVar19;
            puVar30[9] = uVar20;
            puVar30[10] = uVar21;
            puVar30[0xb] = uVar22;
            puVar30[0xc] = uVar23;
            puVar30[0xd] = uVar24;
            puVar30[0xe] = uVar25;
            puVar30[0xf] = uVar26;
            puVar30[0x10] = uVar27;
            puVar30[0x11] = uVar28;
          }
        }
        goto LAB_143038746;
      }
LAB_143038737:
      local_398 = lVar2;
      FUN_143037da0(puVar35,lVar29,param_3,param_4);
LAB_143038746:
      plVar36 = plVar36 + -3;
    } while (&local_388 <= plVar36);
  }
  return;
code_r0x0001430384bc:
  if (*(float *)((longlong)puVar33 + 0x9c) < *(float *)((longlong)puVar34 + 0xc) ||
      *(float *)((longlong)puVar33 + 0x9c) == *(float *)((longlong)puVar34 + 0xc))
  goto LAB_1430384b0;
LAB_1430384d0:
  do {
    puVar32 = puVar31;
    puVar31 = puVar32 + -0x12;
    if (puVar31 <= puVar34) break;
  } while (*(float *)((longlong)puVar34 + 0xc) < *(float *)((longlong)puVar32 + -0x84) ||
           *(float *)((longlong)puVar34 + 0xc) == *(float *)((longlong)puVar32 + -0x84));
  if (puVar35 <= puVar31) {
    if (puVar35 != puVar31) {
      uVar10 = puVar32[-0x11];
      uVar3 = *(undefined4 *)puVar35;
      uVar4 = *(undefined4 *)((longlong)puVar33 + 0x94);
      uVar5 = *(undefined4 *)(puVar33 + 0x13);
      uVar6 = *(undefined4 *)((longlong)puVar33 + 0x9c);
      uVar11 = puVar33[0x14];
      uVar12 = puVar33[0x15];
      uVar13 = puVar33[0x16];
      uVar14 = puVar33[0x17];
      uVar15 = puVar33[0x18];
      uVar16 = puVar33[0x19];
      uVar17 = puVar33[0x1a];
      uVar18 = puVar33[0x1b];
      uVar19 = puVar33[0x1c];
      uVar20 = puVar33[0x1d];
      uVar21 = puVar33[0x1e];
      uVar22 = puVar33[0x1f];
      uVar23 = puVar33[0x20];
      uVar24 = puVar33[0x21];
      uVar25 = puVar33[0x22];
      uVar26 = puVar33[0x23];
      *puVar35 = *puVar31;
      puVar33[0x13] = uVar10;
      uVar10 = puVar32[-0xf];
      puVar33[0x14] = puVar32[-0x10];
      puVar33[0x15] = uVar10;
      uVar10 = puVar32[-0xd];
      puVar33[0x16] = puVar32[-0xe];
      puVar33[0x17] = uVar10;
      uVar10 = puVar32[-0xb];
      puVar33[0x18] = puVar32[-0xc];
      puVar33[0x19] = uVar10;
      uVar10 = puVar32[-9];
      puVar33[0x1a] = puVar32[-10];
      puVar33[0x1b] = uVar10;
      uVar10 = puVar32[-7];
      puVar33[0x1c] = puVar32[-8];
      puVar33[0x1d] = uVar10;
      uVar10 = puVar32[-5];
      puVar33[0x1e] = puVar32[-6];
      puVar33[0x1f] = uVar10;
      uVar10 = puVar32[-3];
      puVar33[0x20] = puVar32[-4];
      puVar33[0x21] = uVar10;
      uVar7 = *(undefined4 *)((longlong)puVar32 + -0xc);
      uVar8 = *(undefined4 *)(puVar32 + -1);
      uVar9 = *(undefined4 *)((longlong)puVar32 + -4);
      *(undefined4 *)(puVar33 + 0x22) = *(undefined4 *)(puVar32 + -2);
      *(undefined4 *)((longlong)puVar33 + 0x114) = uVar7;
      *(undefined4 *)(puVar33 + 0x23) = uVar8;
      *(undefined4 *)((longlong)puVar33 + 0x11c) = uVar9;
      *(undefined4 *)puVar31 = uVar3;
      *(undefined4 *)((longlong)puVar32 + -0x8c) = uVar4;
      *(undefined4 *)(puVar32 + -0x11) = uVar5;
      *(undefined4 *)((longlong)puVar32 + -0x84) = uVar6;
      puVar32[-0x10] = uVar11;
      puVar32[-0xf] = uVar12;
      puVar32[-0xe] = uVar13;
      puVar32[-0xd] = uVar14;
      puVar32[-0xc] = uVar15;
      puVar32[-0xb] = uVar16;
      puVar32[-10] = uVar17;
      puVar32[-9] = uVar18;
      puVar32[-8] = uVar19;
      puVar32[-7] = uVar20;
      puVar32[-6] = uVar21;
      puVar32[-5] = uVar22;
      puVar32[-4] = uVar23;
      puVar32[-3] = uVar24;
      puVar32[-2] = uVar25;
      puVar32[-1] = uVar26;
    }
    goto LAB_1430384b0;
  }
  if (puVar34 != puVar31) {
    uVar10 = puVar32[-0x11];
    uVar3 = *(undefined4 *)puVar34;
    uVar4 = *(undefined4 *)((longlong)puVar34 + 4);
    uVar5 = *(undefined4 *)(puVar34 + 1);
    uVar6 = *(undefined4 *)((longlong)puVar34 + 0xc);
    uVar11 = puVar34[2];
    uVar12 = puVar34[3];
    uVar13 = puVar34[4];
    uVar14 = puVar34[5];
    uVar15 = puVar34[6];
    uVar16 = puVar34[7];
    uVar17 = puVar34[8];
    uVar18 = puVar34[9];
    uVar19 = puVar34[10];
    uVar20 = puVar34[0xb];
    uVar21 = puVar34[0xc];
    uVar22 = puVar34[0xd];
    uVar23 = puVar34[0xe];
    uVar24 = puVar34[0xf];
    uVar25 = puVar34[0x10];
    uVar26 = puVar34[0x11];
    *puVar34 = *puVar31;
    puVar34[1] = uVar10;
    uVar10 = puVar32[-0xf];
    puVar34[2] = puVar32[-0x10];
    puVar34[3] = uVar10;
    uVar10 = puVar32[-0xd];
    puVar34[4] = puVar32[-0xe];
    puVar34[5] = uVar10;
    uVar10 = puVar32[-0xb];
    puVar34[6] = puVar32[-0xc];
    puVar34[7] = uVar10;
    uVar10 = puVar32[-9];
    puVar34[8] = puVar32[-10];
    puVar34[9] = uVar10;
    uVar10 = puVar32[-7];
    puVar34[10] = puVar32[-8];
    puVar34[0xb] = uVar10;
    uVar10 = puVar32[-5];
    puVar34[0xc] = puVar32[-6];
    puVar34[0xd] = uVar10;
    uVar10 = puVar32[-3];
    puVar34[0xe] = puVar32[-4];
    puVar34[0xf] = uVar10;
    uVar7 = *(undefined4 *)((longlong)puVar32 + -0xc);
    uVar8 = *(undefined4 *)(puVar32 + -1);
    uVar9 = *(undefined4 *)((longlong)puVar32 + -4);
    *(undefined4 *)(puVar34 + 0x10) = *(undefined4 *)(puVar32 + -2);
    *(undefined4 *)((longlong)puVar34 + 0x84) = uVar7;
    *(undefined4 *)(puVar34 + 0x11) = uVar8;
    *(undefined4 *)((longlong)puVar34 + 0x8c) = uVar9;
    *(undefined4 *)puVar31 = uVar3;
    *(undefined4 *)((longlong)puVar32 + -0x8c) = uVar4;
    *(undefined4 *)(puVar32 + -0x11) = uVar5;
    *(undefined4 *)((longlong)puVar32 + -0x84) = uVar6;
    puVar32[-0x10] = uVar11;
    puVar32[-0xf] = uVar12;
    puVar32[-0xe] = uVar13;
    puVar32[-0xd] = uVar14;
    puVar32[-0xc] = uVar15;
    puVar32[-0xb] = uVar16;
    puVar32[-10] = uVar17;
    puVar32[-9] = uVar18;
    puVar32[-8] = uVar19;
    puVar32[-7] = uVar20;
    puVar32[-6] = uVar21;
    puVar32[-5] = uVar22;
    puVar32[-4] = uVar23;
    puVar32[-3] = uVar24;
    puVar32[-2] = uVar25;
    puVar32[-1] = uVar26;
  }
  local_398._0_4_ = (int)local_398 + -1;
  lVar29 = (longlong)puVar31 + (-0x90 - (longlong)puVar34);
  lVar29 = lVar29 / 0x12 + (lVar29 >> 0x3f);
  if ((lVar29 >> 3) - (lVar29 >> 0x3f) < ((longlong)puVar30 - (longlong)puVar35) / 0x90) {
    if (puVar35 < puVar30) {
      *plVar36 = (longlong)puVar35;
      plVar36[1] = (longlong)puVar30;
      *(int *)(plVar36 + 2) = (int)local_398;
      plVar36 = plVar36 + 3;
    }
    if (puVar31 <= puVar34 + 0x12) goto LAB_143038746;
    puVar30 = puVar32 + -0x24;
    puVar35 = puVar34;
  }
  else {
    if (puVar34 + 0x12 < puVar31) {
      *plVar36 = (longlong)puVar34;
      plVar36[1] = (longlong)(puVar32 + -0x24);
      *(int *)(plVar36 + 2) = (int)local_398;
      plVar36 = plVar36 + 3;
    }
    if (puVar30 <= puVar35) goto LAB_143038746;
  }
  lVar29 = ((longlong)puVar30 - (longlong)puVar35) / 0x90 + 1;
  puVar34 = puVar35;
  if ((int)local_398 == 0) goto LAB_143038737;
  goto LAB_1430383d0;
}



// FUNCTION 1430388c0 FUN_1430388c0 body=637 status=ok
// SIG undefined FUN_1430388c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430388c0(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  float fVar16;
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
    fVar16 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar16 = fVar16 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar16 = _guard_xfg_dispatch_icall_nop(fVar16);
    local_318 = (undefined4)(longlong)(fVar16 + fVar16);
    _guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar10 = &local_328;
    do {
      puVar15 = (undefined8 *)*plVar10;
      puVar13 = (undefined8 *)plVar10[1];
      lVar1 = plVar10[2];
      local_338._0_4_ = (int)lVar1;
      lVar8 = ((longlong)puVar13 - (longlong)puVar15 >> 4) + 1;
      puVar14 = puVar15;
      if ((int)local_338 != 0) {
LAB_143038990:
        if (8 < lVar8) {
          puVar15 = puVar14 + (lVar8 / 2) * 2;
          if (puVar15 != puVar14) {
            uVar2 = *(undefined4 *)((longlong)puVar14 + 4);
            uVar3 = *(undefined4 *)(puVar14 + 1);
            uVar4 = *(undefined4 *)((longlong)puVar14 + 0xc);
            uVar5 = *puVar15;
            uVar6 = puVar15[1];
            *(undefined4 *)puVar15 = *(undefined4 *)puVar14;
            *(undefined4 *)((longlong)puVar15 + 4) = uVar2;
            *(undefined4 *)(puVar15 + 1) = uVar3;
            *(undefined4 *)((longlong)puVar15 + 0xc) = uVar4;
            *puVar14 = uVar5;
            puVar14[1] = uVar6;
          }
          puVar11 = puVar13 + 2;
          puVar15 = puVar14;
LAB_1430389c6:
          puVar9 = puVar15;
          puVar15 = puVar9 + 2;
          if (puVar15 <= puVar13) goto code_r0x0001430389cf;
          goto LAB_1430389e0;
        }
        for (; puVar11 = puVar14, puVar15 = puVar14, puVar14 < puVar13; puVar13 = puVar13 + -2) {
          while (puVar9 = puVar11, puVar15 = puVar15 + 2, puVar15 <= puVar13) {
            puVar11 = puVar15;
            if (*(uint *)(puVar9 + 1) <= *(uint *)(puVar15 + 1)) {
              puVar11 = puVar9;
            }
          }
          if (puVar9 != puVar13) {
            uVar7 = puVar13[1];
            uVar5 = *puVar9;
            uVar6 = puVar9[1];
            *puVar9 = *puVar13;
            puVar9[1] = uVar7;
            *puVar13 = uVar5;
            puVar13[1] = uVar6;
          }
        }
        goto LAB_143038aab;
      }
LAB_143038a9c:
      local_338 = lVar1;
      FUN_143038160(puVar15,lVar8,param_3,param_4);
LAB_143038aab:
      plVar10 = plVar10 + -3;
    } while (&local_328 <= plVar10);
  }
  return;
code_r0x0001430389cf:
  if (*(uint *)(puVar14 + 1) <= *(uint *)(puVar9 + 3)) goto LAB_1430389c6;
LAB_1430389e0:
  do {
    puVar12 = puVar11;
    puVar11 = puVar12 + -2;
    if (puVar11 <= puVar14) break;
  } while (*(uint *)(puVar12 + -1) <= *(uint *)(puVar14 + 1));
  if (puVar15 <= puVar11) {
    if (puVar15 != puVar11) {
      uVar2 = *(undefined4 *)((longlong)puVar12 + -0xc);
      uVar3 = *(undefined4 *)(puVar12 + -1);
      uVar4 = *(undefined4 *)((longlong)puVar12 + -4);
      uVar5 = *puVar15;
      uVar6 = puVar9[3];
      *(undefined4 *)puVar15 = *(undefined4 *)puVar11;
      *(undefined4 *)((longlong)puVar9 + 0x14) = uVar2;
      *(undefined4 *)(puVar9 + 3) = uVar3;
      *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar4;
      *puVar11 = uVar5;
      puVar12[-1] = uVar6;
    }
    goto LAB_1430389c6;
  }
  if (puVar14 != puVar11) {
    uVar2 = *(undefined4 *)((longlong)puVar12 + -0xc);
    uVar3 = *(undefined4 *)(puVar12 + -1);
    uVar4 = *(undefined4 *)((longlong)puVar12 + -4);
    uVar5 = *puVar14;
    uVar6 = puVar14[1];
    *(undefined4 *)puVar14 = *(undefined4 *)puVar11;
    *(undefined4 *)((longlong)puVar14 + 4) = uVar2;
    *(undefined4 *)(puVar14 + 1) = uVar3;
    *(undefined4 *)((longlong)puVar14 + 0xc) = uVar4;
    *puVar11 = uVar5;
    puVar12[-1] = uVar6;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)puVar11 + (-0x10 - (longlong)puVar14) & 0xfffffffffffffff0U) <
      (longlong)((longlong)puVar13 - (longlong)puVar15 & 0xfffffffffffffff0U)) {
    if (puVar15 < puVar13) {
      *plVar10 = (longlong)puVar15;
      plVar10[1] = (longlong)puVar13;
      *(int *)(plVar10 + 2) = (int)local_338;
      plVar10 = plVar10 + 3;
    }
    if (puVar11 <= puVar14 + 2) goto LAB_143038aab;
    puVar13 = puVar12 + -4;
    puVar15 = puVar14;
  }
  else {
    if (puVar14 + 2 < puVar11) {
      *plVar10 = (longlong)puVar14;
      plVar10[1] = (longlong)(puVar12 + -4);
      *(int *)(plVar10 + 2) = (int)local_338;
      plVar10 = plVar10 + 3;
    }
    if (puVar13 <= puVar15) goto LAB_143038aab;
  }
  lVar8 = ((longlong)puVar13 - (longlong)puVar15 >> 4) + 1;
  puVar14 = puVar15;
  if ((int)local_338 == 0) goto LAB_143038a9c;
  goto LAB_143038990;
}



// FUNCTION 143038b40 FUN_143038b40 body=69 status=ok
// SIG undefined FUN_143038b40(void)

ulonglong FUN_143038b40(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_142a232e0();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 143038b90 FUN_143038b90 body=146 status=ok
// SIG undefined FUN_143038b90(void)

undefined8 * FUN_143038b90(undefined8 *param_1)

{
  FUN_143066cd0();
  *param_1 = &PTR__scalar_deleting_destructor__145a5d048;
  param_1[0x8b] = &PTR_LAB_145a5d758;
  param_1[0x8c] = &PTR_LAB_145a5d770;
  *(undefined4 *)(param_1 + 0xde) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6ec) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6f4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xdf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6fc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0xd1,0,0x90);
  *(undefined4 *)((longlong)param_1 + 0x694) = 0x3f800000;
  return param_1;
}



// FUNCTION 143038c30 FUN_143038c30 body=215 status=ok
// SIG undefined FUN_143038c30(void)

undefined8 * FUN_143038c30(undefined8 *param_1)

{
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_145a5ddd8;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  FTickFunction::FTickFunction(param_1 + 0x95);
  param_1[0x95] = &PTR__scalar_deleting_destructor__145a5ddc0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 6;
  *(undefined1 *)(param_1 + 6) = 5;
  *(byte *)((longlong)param_1 + 0x4b4) = *(byte *)((longlong)param_1 + 0x4b4) | 6;
  *(undefined1 *)(param_1 + 0x96) = 6;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 8;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x28) = 0x41f00000;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x41f00000;
  return param_1;
}



// FUNCTION 143038d10 FUN_143038d10 body=363 status=ok
// SIG undefined FUN_143038d10(void)

undefined8 * FUN_143038d10(undefined8 *param_1)

{
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_145a5bf28;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4fc) = 0;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  FTickFunction::FTickFunction(param_1 + 0xa7);
  *(byte *)((longlong)param_1 + 0x544) = *(byte *)((longlong)param_1 + 0x544) | 6;
  param_1[0xa7] = &PTR__scalar_deleting_destructor__145a5bef8;
  *(undefined1 *)(param_1 + 0xa8) = 6;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 6;
  *(undefined1 *)(param_1 + 6) = 1;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 8;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0x41200000;
  *(undefined4 *)(param_1 + 0x28) = 0x41f00000;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x41f00000;
  *(undefined8 *)((longlong)param_1 + 0x594) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x8d) = 0xffffffff;
  return param_1;
}



// FUNCTION 143038e80 FUN_143038e80 body=134 status=ok
// SIG undefined FUN_143038e80(void)

undefined8 *
FUN_143038e80(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  *param_1 = param_2;
  param_1[8] = 0;
  puVar1 = (undefined8 *)param_3[7];
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = (**(code **)*puVar1)(puVar1,param_1 + 1);
    param_1[8] = uVar3;
  }
  *(undefined4 *)(param_1 + 9) = param_4;
  param_1[10] = 0;
  FUN_14303b530(param_1);
  plVar2 = (longlong *)param_3[7];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_3);
    param_3[7] = 0;
  }
  return param_1;
}



// FUNCTION 143038f10 FUN_143038f10 body=33 status=ok
// SIG undefined FUN_143038f10(void)

undefined8 * FUN_143038f10(undefined8 *param_1)

{
  UAnimNotify_WeaponFire::UAnimNotify_WeaponFire();
  *param_1 = &PTR_FUN_145a5a6d8;
  return param_1;
}



// FUNCTION 143038f40 FUN_143038f40 body=37 status=ok
// SIG undefined FUN_143038f40(void)

undefined8 * FUN_143038f40(undefined8 *param_1)

{
  UAnimNotify_WeaponFire::UAnimNotify_WeaponFire();
  *(undefined1 *)(param_1 + 7) = 1;
  *param_1 = &PTR_FUN_145a5a990;
  return param_1;
}



// FUNCTION 143038f70 FUN_143038f70 body=39 status=ok
// SIG undefined FUN_143038f70(void)

undefined8 * FUN_143038f70(undefined8 *param_1)

{
  UAnimNotify_WeaponFire::UAnimNotify_WeaponFire();
  *param_1 = &PTR_FUN_145a5ac48;
  param_1[9] = 0;
  return param_1;
}



// FUNCTION 143038fa0 FUN_143038fa0 body=74 status=ok
// SIG undefined FUN_143038fa0(void)

undefined8 * FUN_143038fa0(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR_FUN_145a5af00;
  param_1[5] = &PTR_LAB_145a5b2f8;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(uint *)((longlong)param_1 + 0xc4) = *(uint *)((longlong)param_1 + 0xc4) | 1;
  return param_1;
}



// FUNCTION 143038ff0 FUN_143038ff0 body=33 status=ok
// SIG undefined FUN_143038ff0(void)

undefined8 * FUN_143038ff0(undefined8 *param_1)

{
  UAIDataProvider::UAIDataProvider();
  *param_1 = &PTR_FUN_145a5b328;
  return param_1;
}



// FUNCTION 143039020 FUN_143039020 body=86 status=ok
// SIG undefined FUN_143039020(void)

undefined8 * FUN_143039020(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142bd6050(param_1,uVar1);
  *param_1 = &PTR_FUN_145a5b850;
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0xc);
  uVar1 = UEnvQueryItemType_Actor::GetPrivateStaticClass();
  param_1[10] = uVar1;
  *(undefined1 *)(param_1 + 0x13) = 1;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 1;
  *(undefined4 *)(param_1 + 0x11) = 0x447a0000;
  return param_1;
}



// FUNCTION 143039080 UEnvQueryItemType_Actor body=42 status=ok
// SIG undefined UEnvQueryItemType_Actor(void)

undefined8 * UEnvQueryItemType_Actor::UEnvQueryItemType_Actor(undefined8 *param_1)

{
  UEnvQueryItemType::UEnvQueryItemType();
  *param_1 = &PTR_FUN_145a5b5a8;
  *(undefined2 *)(param_1 + 5) = 8;
  return param_1;
}



// FUNCTION 1430390b0 FUN_1430390b0 body=61 status=ok
// SIG undefined FUN_1430390b0(void)

undefined8 * FUN_1430390b0(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_1458aeeb8;
  param_1[6] = 0;
  param_1[7] = 0;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x40;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 1;
  return param_1;
}



// FUNCTION 1430390f0 FUN_1430390f0 body=57 status=ok
// SIG undefined FUN_1430390f0(void)

undefined8 * FUN_1430390f0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_144108d88;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 1;
  return param_1;
}



// FUNCTION 143039130 FUN_143039130 body=394 status=ok
// SIG undefined FUN_143039130(void)

undefined8 * FUN_143039130(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong local_res10;
  undefined4 local_28;
  undefined4 local_24;
  longlong local_20;
  
  uVar5 = FUN_14178c940();
  FUN_14237efa0(param_1,uVar5);
  *param_1 = &PTR_FUN_145a5c638;
  param_1[5] = &PTR_LAB_145a5cbe8;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0;
  pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UGbxProjectileMovementComponent::OnBounce",L"::");
  pwVar4 = (wchar_t *)0x0;
  while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
    pwVar4 = pwVar3;
  }
  FName::FName(&local_res10,pwVar4 + 2,1);
  plVar1 = param_1 + 0x3e;
  FWeakObjectPtr::operator=(&local_28,0);
  local_20 = 0;
  FWeakObjectPtr::operator=(&local_28,param_1);
  local_20 = local_res10;
  if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_28), lVar7 != 0)) {
    UObject::FindFunction(lVar7,local_20);
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
  iVar2 = *(int *)(param_1 + 0x3f);
  *(int *)(param_1 + 0x3f) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x1fc) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
  }
  puVar8 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar1);
  *puVar8 = local_28;
  puVar8[1] = local_24;
  *(longlong *)(puVar8 + 2) = local_20;
  *(undefined1 *)((longlong)param_1 + 0x29c) = 1;
  *(undefined4 *)(param_1 + 0x54) = 0x3f000000;
  *(undefined1 *)((longlong)param_1 + 0x2a4) = 1;
  *(undefined4 *)(param_1 + 0x55) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x2b1) = 1;
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0x42b40000;
  return param_1;
}



// FUNCTION 1430392c0 FUN_1430392c0 body=470 status=ok
// SIG undefined FUN_1430392c0(void)

undefined8 * FUN_1430392c0(undefined8 *param_1)

{
  undefined4 uVar1;
  
  FUN_142326e40();
  *param_1 = &PTR_FUN_145a5cc18;
  param_1[5] = &PTR_LAB_145a5d018;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined2 *)(param_1 + 0x39) = 0x10f;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0x41200000;
  *(undefined1 *)(param_1 + 0x3d) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0x3d4ccccd;
  *(undefined4 *)(param_1 + 0x3e) = 0x3f000000;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x2ec) = 0x10f;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0x41200000;
  param_1[0x62] = 0;
  param_1[100] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 6;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 7) = 2;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x5c] = DAT_1464aa7a8;
  uVar1 = DAT_1464aa7b0;
  *(uint *)(param_1 + 0x65) = *(uint *)(param_1 + 0x65) | 0x11;
  *(undefined4 *)(param_1 + 0x5d) = uVar1;
  *(undefined4 *)(param_1 + 0x35) = 0xbf800000;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = DAT_1464aa7a8;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = DAT_1464aa7b0;
  return param_1;
}



// FUNCTION 1430394a0 FUN_1430394a0 body=33 status=ok
// SIG undefined FUN_1430394a0(void)

undefined8 * FUN_1430394a0(undefined8 *param_1)

{
  FUN_140455c90();
  *param_1 = &PTR_FUN_143f3f648;
  return param_1;
}



// FUNCTION 1430394d0 FUN_1430394d0 body=589 status=ok
// SIG undefined FUN_1430394d0(void)

undefined8 * FUN_1430394d0(undefined8 *param_1)

{
  FUN_1417818c0();
  *param_1 = &PTR_FUN_145a5da28;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 2;
  FTickFunction::FTickFunction(param_1 + 0xb);
  param_1[0xb] = &PTR__scalar_deleting_destructor__145a5da10;
  *(undefined1 *)(param_1 + 0xc) = 5;
  *(byte *)((longlong)param_1 + 100) = *(byte *)((longlong)param_1 + 100) & 0xfb | 2;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x3c] = 0;
  *(undefined2 *)((longlong)param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  *(undefined4 *)((longlong)param_1 + 500) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3f) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x46) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x4a] = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)((longlong)param_1 + 0x38c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x72) = 0;
  *(undefined4 *)((longlong)param_1 + 0x394) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x73) = 0;
  *(undefined4 *)((longlong)param_1 + 0x39c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x65,0,0x90);
  *(undefined4 *)((longlong)param_1 + 0x334) = 0x3f800000;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4a4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x95) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4ac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x96) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x97) = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x88,0,0x90);
  *(undefined4 *)((longlong)param_1 + 0x44c) = 0x3f800000;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  FWeakObjectPtr::operator=(param_1 + 0xc0,0);
  param_1[0xc1] = 0;
  *(undefined1 *)(param_1 + 0x77) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
  return param_1;
}



// FUNCTION 143039720 FUN_143039720 body=369 status=ok
// SIG undefined FUN_143039720(void)

undefined8 * FUN_143039720(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1417818c0();
  *param_1 = &PTR_FUN_14473e8d0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x1c);
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x32] = 0;
  param_1[0x34] = 0;
  uVar1 = UScrollBar::GetPrivateStaticClass();
  param_1[5] = uVar1;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 0x37) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x8d) = 0xf;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x3d4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x45ea6000;
  *(undefined4 *)(param_1 + 0x13) = 6;
  *(undefined4 *)(param_1 + 0xd) = 0x3fc00000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x3e4ccccd;
  *(undefined1 *)(param_1 + 0x1b) = 0x10;
  *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) | 0x20;
  *(byte *)(param_1 + 0x2b) = *(byte *)(param_1 + 0x2b) | 1;
  *(byte *)((longlong)param_1 + 0xaa) = *(byte *)((longlong)param_1 + 0xaa) & 0xfd;
  *(byte *)((longlong)param_1 + 0x8c) = *(byte *)((longlong)param_1 + 0x8c) | 3;
  *(byte *)(param_1 + 0x2f) = *(byte *)(param_1 + 0x2f) | 1;
  *(undefined1 *)((longlong)param_1 + 0xa9) = 2;
  *(undefined4 *)(param_1 + 0x11) = 0x3f4ccccd;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 1;
  *(undefined4 *)(param_1 + 0x36) = 0x457a0000;
  *(undefined4 *)(param_1 + 0x35) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x3f000000;
  uVar1 = DAT_146b47540;
  *(byte *)(param_1 + 0x2b) = *(byte *)(param_1 + 0x2b) | 2;
  *(byte *)((longlong)param_1 + 0xaa) = *(byte *)((longlong)param_1 + 0xaa) | 8;
  param_1[0x34] = uVar1;
  *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) & 0xfb | 2;
  return param_1;
}



// FUNCTION 1430398a0 FUN_1430398a0 body=526 status=ok
// SIG undefined FUN_1430398a0(void)

undefined8 * FUN_1430398a0(undefined8 *param_1)

{
  FUN_1417818c0();
  *param_1 = &PTR_FUN_145a5bb08;
  param_1[5] = &PTR_LAB_145a5bed0;
  FTickFunction::FTickFunction(param_1 + 9);
  param_1[9] = &PTR__scalar_deleting_destructor__145a5baf0;
  *(undefined2 *)(param_1 + 10) = 0x502;
  *(byte *)((longlong)param_1 + 0x54) = *(byte *)((longlong)param_1 + 0x54) & 0xfb | 2;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  *(undefined2 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x3f800000;
  param_1[0x22] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x35) = 0x3f800000;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x264) = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  FUN_140590080(param_1 + 100);
  FUN_140590080(param_1 + 0x68);
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x8b) = 0;
  FWeakObjectPtr::operator=(param_1 + 0x8c,0);
  param_1[0x8d] = 0;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0xc2c80000;
  *(undefined4 *)(param_1 + 0x71) = 0x3f800000;
  return param_1;
}



// FUNCTION 143039ab0 UODAnimNotifyState_OverlayOverride body=51 status=ok
// SIG undefined UODAnimNotifyState_OverlayOverride(void)

undefined8 *
UODAnimNotifyState_OverlayOverride::UODAnimNotifyState_OverlayOverride(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = &PTR_FUN_145a5e8e0;
  return param_1;
}



// FUNCTION 143039af0 FUN_143039af0 body=51 status=ok
// SIG undefined FUN_143039af0(void)

undefined8 * FUN_143039af0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  *param_1 = &PTR_FUN_145a5eb88;
  return param_1;
}



// FUNCTION 143039b30 FUN_143039b30 body=712 status=ok
// SIG undefined FUN_143039b30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143039b30(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  FUN_1417818c0();
  uVar8 = uRam0000000146b4739c;
  uVar6 = uRam0000000146b47398;
  uVar4 = uRam0000000146b47394;
  uVar1 = _DAT_146b47390;
  *param_1 = &PTR_FUN_145a5d798;
  param_1[5] = 0;
  uVar3 = uRam0000000146b4738c;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(uint *)((longlong)param_1 + 0x4c) = uVar3;
  uVar3 = uRam0000000146b47384 & uVar4;
  uVar5 = uRam0000000146b47388 & uVar6;
  uVar7 = uRam0000000146b4738c & uVar8;
  *(uint *)(param_1 + 0xc) = _DAT_146b47380 & uVar1;
  *(uint *)((longlong)param_1 + 100) = uVar3;
  *(uint *)(param_1 + 0xd) = uVar5;
  *(uint *)((longlong)param_1 + 0x6c) = uVar7;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  uVar3 = uRam0000000146b4738c;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(uint *)((longlong)param_1 + 0xac) = uVar3;
  uVar3 = uRam0000000146b47384 & uVar4;
  uVar5 = uRam0000000146b47388 & uVar6;
  uVar7 = uRam0000000146b4738c & uVar8;
  *(uint *)(param_1 + 0x18) = _DAT_146b47380 & uVar1;
  *(uint *)((longlong)param_1 + 0xc4) = uVar3;
  *(uint *)(param_1 + 0x19) = uVar5;
  *(uint *)((longlong)param_1 + 0xcc) = uVar7;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  uVar3 = uRam0000000146b4738c;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(uint *)((longlong)param_1 + 0x11c) = uVar3;
  uVar4 = uRam0000000146b47384 & uVar4;
  uVar6 = uRam0000000146b47388 & uVar6;
  uVar8 = uRam0000000146b4738c & uVar8;
  *(uint *)(param_1 + 0x26) = _DAT_146b47380 & uVar1;
  *(uint *)((longlong)param_1 + 0x134) = uVar4;
  *(uint *)(param_1 + 0x27) = uVar6;
  *(uint *)((longlong)param_1 + 0x13c) = uVar8;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0x3f800000;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0x3f800000;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x54] = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0x43340000;
  *(undefined4 *)(param_1 + 0x5e) = 8;
  *(undefined2 *)((longlong)param_1 + 0x2f4) = 0;
  param_1[0x5f] = 1;
  *(undefined4 *)(param_1 + 0x60) = 0x43fa0000;
  *(undefined1 *)(param_1 + 0x65) = 1;
  uVar2 = UParticleModuleTypeDataGpu::GetPrivateStaticClass();
  param_1[5] = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x464b2000;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x31) = 0x40a00000;
  *(undefined1 *)((longlong)param_1 + 0x18c) = 0xf;
  *(undefined1 *)(param_1 + 0x35) = 0x10;
  *(undefined4 *)(param_1 + 0x32) = 0x3e4ccccd;
  *(undefined1 *)(param_1 + 0x38) = 1;
  *(byte *)((longlong)param_1 + 0x1d4) = *(byte *)((longlong)param_1 + 0x1d4) | 3;
  *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xfe;
  *(byte *)(param_1 + 0x5b) = *(byte *)(param_1 + 0x5b) | 1;
  *(byte *)((longlong)param_1 + 0x1a9) = *(byte *)((longlong)param_1 + 0x1a9) & 0xfb | 3;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0x3f000000;
  *(undefined1 *)(param_1 + 0x39) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x34) = 1;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x28) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x47) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x45) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0x43b40000;
  *(undefined4 *)(param_1 + 0x5c) = 0x43b40000;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0x40800000;
  uVar2 = DAT_146b475e8;
  *(byte *)((longlong)param_1 + 0x22c) = *(byte *)((longlong)param_1 + 0x22c) | 2;
  param_1[0xe] = uVar2;
  *(undefined1 *)(param_1 + 0xf) = 3;
  return param_1;
}



// FUNCTION 143039e00 FUN_143039e00 body=114 status=ok
// SIG undefined FUN_143039e00(void)

undefined8 * FUN_143039e00(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  *param_1 = &PTR_FUN_145a5ee30;
  *(undefined4 *)(param_1 + 6) = 0x41f00000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0x41f00000;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f800000;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x40000000;
  *(undefined4 *)(param_1 + 10) = 2;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 1;
  *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x40000000;
  *(undefined8 *)((longlong)param_1 + 100) = 2;
  return param_1;
}



// FUNCTION 143039e80 FUN_143039e80 body=83 status=ok
// SIG undefined FUN_143039e80(void)

undefined8 * FUN_143039e80(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  *param_1 = &PTR_FUN_145a5f0f8;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x40000000;
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 9) = 0x44bb8000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x42340000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f800000;
  return param_1;
}



// FUNCTION 143039ee0 FUN_143039ee0 body=204 status=ok
// SIG undefined FUN_143039ee0(void)

void FUN_143039ee0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)*param_1;
  for (iVar4 = (int)param_1[1]; iVar4 != 0; iVar4 = iVar4 + -1) {
    lVar3 = *plVar5;
    if (*(longlong *)(lVar3 + 0x90) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(lVar3 + 0x90) + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle();
      }
    }
    FTickFunction::~FTickFunction(lVar3 + 0x30);
    if (*(longlong *)(lVar3 + 0x20) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar3 + 0x10) != 0) {
      FMemory::Free();
    }
    FMemory::Free(*plVar5);
    plVar5 = plVar5 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 143039fb0 FUN_143039fb0 body=171 status=ok
// SIG undefined FUN_143039fb0(void)

void FUN_143039fb0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x248);
  iVar4 = *(int *)(param_1 + 0x250);
  if (iVar4 != 0) {
    plVar3 = (longlong *)(lVar2 + 0x30);
    do {
      if ((int)plVar3[2] != 0) {
        plVar1 = (longlong *)*plVar3;
        if ((longlong *)*plVar3 == (longlong *)0x0) {
          plVar1 = plVar3 + -4;
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))(plVar1,0);
        }
      }
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 10;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    lVar2 = *(longlong *)(param_1 + 0x248);
  }
  if (lVar2 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  return;
}



// FUNCTION 14303a060 FUN_14303a060 body=24 status=ok
// SIG undefined FUN_14303a060(void)

ulonglong FUN_14303a060(ulonglong *param_1)

{
  ulonglong in_RAX;
  
  if ((-1 < (int)param_1[9]) && (in_RAX = *param_1, (int)param_1[9] < *(int *)(in_RAX + 0x460))) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14303a080 FUN_14303a080 body=866 status=ok
// SIG undefined FUN_14303a080(void)

void FUN_14303a080(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  char cVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  int *piVar12;
  longlong *plVar13;
  longlong local_res20;
  int local_88;
  int local_84;
  longlong local_80;
  longlong local_70;
  longlong local_68;
  undefined1 local_60 [16];
  undefined4 local_50;
  undefined4 local_48;
  
  if (param_2 != 0) {
    lVar7 = AGFreezeCharacterCue::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
         ) != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((bVar3) && (*(longlong *)(param_2 + 0x6f0) != 0)) &&
       ((*(uint *)(*(longlong *)(param_2 + 0x6f0) + 0x14c) >> 1 & 1) != 0)) {
      pwVar8 = _guard_xfg_dispatch_icall_nop
                         (L"&ULightBeam::OnTrackedImpactParticleSystemFinished",L"::");
      pwVar5 = (wchar_t *)0x0;
      while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar5 = pwVar4;
      }
      FName::FName(&local_res20,pwVar5 + 2,1);
      lVar7 = *param_1;
      plVar13 = (longlong *)(param_2 + 0x8a8);
      FWeakObjectPtr::operator=(&local_88,0);
      local_80 = 0;
      FWeakObjectPtr::operator=(&local_88,lVar7);
      local_80 = local_res20;
      if ((local_res20 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_88), lVar7 != 0)) {
        UObject::FindFunction(lVar7,local_80);
      }
      piVar11 = (int *)*plVar13;
      iVar1 = *(int *)(param_2 + 0x8b0);
      for (piVar12 = piVar11; piVar12 != piVar11 + (longlong)iVar1 * 4; piVar12 = piVar12 + 4) {
        if (((*piVar12 == local_88) && (piVar12[1] == local_84)) ||
           ((cVar6 = FWeakObjectPtr::IsValid(piVar12), cVar6 == '\0' &&
            (cVar6 = FWeakObjectPtr::IsValid(&local_88), cVar6 == '\0')))) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if ((bVar3) && (*(longlong *)(piVar12 + 2) == local_80)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) {
          if ((int)((longlong)piVar12 - (longlong)piVar11 >> 4) != -1) goto LAB_14303a265;
          break;
        }
      }
      iVar1 = *(int *)(param_2 + 0x8b0);
      *(int *)(param_2 + 0x8b0) = iVar1 + 1;
      if (*(int *)(param_2 + 0x8b4) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar13,iVar1);
      }
      piVar11 = (int *)((longlong)iVar1 * 0x10 + *plVar13);
      *piVar11 = local_88;
      piVar11[1] = local_84;
      *(longlong *)(piVar11 + 2) = local_80;
LAB_14303a265:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar13);
      uVar2 = *(undefined4 *)param_1[1];
      local_70 = param_2;
      local_68 = param_3;
      FUN_140590080(local_60);
      lVar7 = *param_1;
      local_48 = uVar2;
      if (((local_70 != 0) && (*(longlong *)(lVar7 + 0xb0) != 0)) &&
         ((lVar10 = *(longlong *)(lVar7 + 0x170), lVar10 != 0 ||
          (lVar10 = *(longlong *)(*(longlong *)(lVar7 + 0xb0) + 0x58), lVar10 != 0)))) {
        lVar9 = 0;
        if (local_68 != 0) {
          lVar9 = FUN_142db9220(*(undefined1 *)(local_68 + 0x50));
        }
        lVar7 = FUN_1405ab470(*(undefined8 *)(lVar7 + 0x140),0,1,local_70);
        if (lVar7 != 0) {
          if (lVar9 != 0) {
            FUN_1405aaf50(lVar7,lVar9);
          }
          lVar10 = FUN_1405a3150(lVar7,&local_88,lVar10,0);
          FUN_1405913a0(local_60,lVar10);
          local_50 = *(undefined4 *)(lVar10 + 0x10);
          FUN_140591060(&local_88);
          FUN_1405a9420(lVar7,0x42480000);
        }
      }
      lVar7 = *param_1;
      iVar1 = *(int *)(lVar7 + 0x408);
      *(int *)(lVar7 + 0x408) = iVar1 + 1;
      if (*(int *)(lVar7 + 0x40c) < iVar1 + 1) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(lVar7 + 0x400,iVar1);
      }
      plVar13 = (longlong *)((longlong)iVar1 * 0x30 + *(longlong *)(lVar7 + 0x400));
      *plVar13 = local_70;
      plVar13[1] = local_68;
      FUN_14058f8f0(plVar13 + 2,local_60);
      *(undefined4 *)(plVar13 + 4) = local_50;
      *(undefined4 *)(plVar13 + 5) = local_48;
      FUN_140591060(local_60);
    }
  }
  return;
}



// FUNCTION 14303a3f0 FUN_14303a3f0 body=258 status=ok
// SIG undefined FUN_14303a3f0(void)

void FUN_14303a3f0(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  char *pcVar4;
  longlong *plVar5;
  
  if ((*(char *)*param_1 == '\0') || (*(char *)(*(longlong *)(param_1[1] + 0xa8) + 0x328) == '\0'))
  {
    *(char *)*param_1 = '\x01';
    if (*(longlong *)(param_2 + 0x2b0) == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)(*(longlong *)(param_2 + 0x2b0) + 0x118);
      *(undefined1 *)param_1[2] = 0;
    }
    (**(code **)(*(longlong *)param_1[1] + 0x3a8))((longlong *)param_1[1],param_1[3],param_2);
    pcVar4 = (char *)(param_2 + 0x218);
    cVar1 = *pcVar4;
    if (cVar1 != '\0') {
      if (cVar1 != '\x02') {
        if (cVar1 != '\x01') {
          if (cVar1 != '\x03') {
            return;
          }
          (**(code **)(*(longlong *)param_1[1] + 0x360))
                    ((longlong *)param_1[1],param_1[3],plVar5,pcVar4);
          return;
        }
        plVar5 = *(longlong **)(param_1[1] + 0x140);
      }
      if (plVar5 != (longlong *)0x0) {
        uVar2 = FUN_142e79d90();
        lVar3 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar2);
        if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014303a4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(longlong *)param_1[1] + 0x350))
                    ((longlong *)param_1[1],param_1[3],lVar3,pcVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14303a540 FUN_14303a540 body=43 status=ok
// SIG undefined FUN_14303a540(void)

undefined8 * FUN_14303a540(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 14303a570 FUN_14303a570 body=97 status=ok
// SIG undefined FUN_14303a570(void)

undefined8 * FUN_14303a570(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145a5e4d8;
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



// FUNCTION 14303a5e0 FUN_14303a5e0 body=97 status=ok
// SIG undefined FUN_14303a5e0(void)

undefined8 * FUN_14303a5e0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145a5e4c8;
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



// FUNCTION 14303a650 FUN_14303a650 body=97 status=ok
// SIG undefined FUN_14303a650(void)

undefined8 * FUN_14303a650(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145a5f0e8;
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



// FUNCTION 14303a6c0 FUN_14303a6c0 body=97 status=ok
// SIG undefined FUN_14303a6c0(void)

undefined8 * FUN_14303a6c0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145a5f0d8;
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



// FUNCTION 14303a730 FUN_14303a730 body=97 status=ok
// SIG undefined FUN_14303a730(void)

undefined8 * FUN_14303a730(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145a5e8d0;
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



// FUNCTION 14303a7a0 FUN_14303a7a0 body=97 status=ok
// SIG undefined FUN_14303a7a0(void)

undefined8 * FUN_14303a7a0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145a5e8c0;
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



// FUNCTION 14303a810 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
AFGBuildableAutomatedWorkBench::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140b4e670();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x718);
  }
  return param_1;
}



// FUNCTION 14303a850 FUN_14303a850 body=136 status=ok
// SIG undefined FUN_14303a850(void)

longlong FUN_14303a850(longlong param_1,ulonglong param_2)

{
  FTickFunction::~FTickFunction(param_1 + 0x4a8);
  if (*(longlong *)(param_1 + 0x488) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x478) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x468) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x458) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x508);
  }
  return param_1;
}



// FUNCTION 14303a8e0 FUN_14303a8e0 body=265 status=ok
// SIG undefined FUN_14303a8e0(void)

longlong FUN_14303a8e0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5a0) != 0) {
    FMemory::Free();
  }
  FTickFunction::~FTickFunction(param_1 + 0x538);
  if (*(longlong *)(param_1 + 0x520) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x510) = 0;
  if (*(longlong *)(param_1 + 0x508) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x4c8);
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x490) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  FUN_143039ee0(param_1 + 0x470);
  if (*(longlong *)(param_1 + 0x458) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x5c0);
  }
  return param_1;
}



// FUNCTION 14303a9f0 FUN_14303a9f0 body=52 status=ok
// SIG undefined FUN_14303a9f0(void)

undefined8 FUN_14303a9f0(undefined8 param_1,ulonglong param_2)

{
  FTickFunction::~FTickFunction();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 14303aa30 FUN_14303aa30 body=73 status=ok
// SIG undefined FUN_14303aa30(void)

longlong FUN_14303aa30(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x198);
  }
  return param_1;
}



// FUNCTION 14303aa80 FUN_14303aa80 body=95 status=ok
// SIG undefined FUN_14303aa80(void)

longlong FUN_14303aa80(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x60) = &PTR_ValueToString_14407aff8;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 14303aae0 FUN_14303aae0 body=73 status=ok
// SIG undefined FUN_14303aae0(void)

longlong FUN_14303aae0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 600) != 0) {
    FMemory::Free();
  }
  FUN_143039fb0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2c8);
  }
  return param_1;
}



// FUNCTION 14303ab30 FUN_14303ab30 body=90 status=ok
// SIG undefined FUN_14303ab30(void)

longlong FUN_14303ab30(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x330) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x340);
  }
  return param_1;
}



// FUNCTION 14303ab90 FUN_14303ab90 body=301 status=ok
// SIG undefined FUN_14303ab90(void)

longlong FUN_14303ab90(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x5f0) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x5f0) + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  if (*(longlong *)(param_1 + 0x5e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x430) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x408);
  lVar3 = *(longlong *)(param_1 + 0x400);
  if (iVar2 != 0) {
    lVar3 = lVar3 + 0x10;
    do {
      FUN_140591060(lVar3);
      lVar3 = lVar3 + 0x30;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar3 = *(longlong *)(param_1 + 0x400);
  }
  if (lVar3 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  FTickFunction::~FTickFunction(param_1 + 0x58);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x610);
  }
  return param_1;
}



// FUNCTION 14303acc0 FUN_14303acc0 body=285 status=ok
// SIG undefined FUN_14303acc0(void)

longlong FUN_14303acc0(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x410) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x410) + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  if (*(longlong *)(param_1 + 0x400) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x368) != 0) {
    FMemory::Free();
  }
  FUN_140591060(param_1 + 0x340);
  FUN_140591060(param_1 + 800);
  if (*(longlong *)(param_1 + 0x310) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x298) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x278) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  FTickFunction::~FTickFunction(param_1 + 0x48);
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_143fcb7e0;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x470);
  }
  return param_1;
}



// FUNCTION 14303ade0 FUN_14303ade0 body=107 status=ok
// SIG undefined FUN_14303ade0(void)

longlong FUN_14303ade0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x270) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x330);
  }
  return param_1;
}



// FUNCTION 14303ae50 FUN_14303ae50 body=190 status=ok
// SIG undefined FUN_14303ae50(void)

undefined8 FUN_14303ae50(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)param_3[1];
  if (plVar1 != (longlong *)0x0) {
    if (plVar1[0x1f] == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      if (plVar1[0x1f] == 0) goto LAB_14303aeec;
    }
    plVar1 = (longlong *)param_3[1];
    if (plVar1 == (longlong *)0x0) {
      lVar2 = 0;
    }
    else {
      lVar2 = plVar1[0x1f];
      if (lVar2 == 0) {
        (**(code **)(*plVar1 + 0x368))(plVar1);
        lVar2 = plVar1[0x1f];
      }
    }
    lVar2 = FUN_143040340(param_1,lVar2 + 0x28);
    if (lVar2 != 0) {
      (**(code **)(*param_3 + 8))(param_3,lVar2);
      goto LAB_14303aeee;
    }
  }
LAB_14303aeec:
  lVar2 = 0;
LAB_14303aeee:
  FWeakObjectPtr::operator=(param_2,lVar2);
  return param_2;
}



// FUNCTION 14303af10 FUN_14303af10 body=342 status=ok
// SIG undefined FUN_14303af10(void)

undefined8 FUN_14303af10(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  float fVar4;
  LARGE_INTEGER local_res18;
  uint local_14;
  uint *local_10;
  
  plVar1 = (longlong *)param_3[1];
  if (plVar1 != (longlong *)0x0) {
    if (plVar1[0x1f] == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      if (plVar1[0x1f] == 0) goto LAB_14303b044;
    }
    plVar1 = (longlong *)param_3[1];
    if (plVar1 == (longlong *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = plVar1[0x1f];
      if (lVar3 == 0) {
        (**(code **)(*plVar1 + 0x368))(plVar1);
        lVar3 = plVar1[0x1f];
      }
    }
    lVar3 = FUN_1430411c0(param_1,lVar3 + 0x28);
    if (lVar3 != 0) {
      QueryPerformanceCounter(&local_res18);
      uVar2 = local_res18.s.LowPart;
      local_10 = &local_14;
      local_14 = 0;
      (**(code **)(*param_3 + 8))(param_3,lVar3);
      QueryPerformanceCounter(&local_res18);
      if (local_10 != (uint *)0x0) {
        *local_10 = *local_10 + (local_res18.s.LowPart - uVar2);
      }
      if (local_10 == (uint *)0x0) {
        fVar4 = 0.0;
      }
      else {
        fVar4 = (float)(DAT_1468b02f8 * 1000.0 * (double)*local_10);
      }
      *(float *)(param_1 + 0x598) = fVar4 + *(float *)(param_1 + 0x598);
      goto LAB_14303b046;
    }
  }
LAB_14303b044:
  lVar3 = 0;
LAB_14303b046:
  FWeakObjectPtr::operator=(param_2,lVar3);
  return param_2;
}



// FUNCTION 14303b070 FUN_14303b070 body=575 status=ok
// SIG undefined FUN_14303b070(void)

ulonglong FUN_14303b070(longlong *param_1,longlong *param_2,float param_3)

{
  int iVar1;
  ulonglong in_RAX;
  undefined8 uVar2;
  undefined7 uVar7;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 local_res10 [8];
  
  plVar6 = (longlong *)param_2[1];
  if (plVar6 == (longlong *)0x0) {
LAB_14303b29e:
    return in_RAX & 0xffffffffffffff00;
  }
  if (plVar6[0x1f] == 0) {
    (**(code **)(*plVar6 + 0x368))(plVar6);
    in_RAX = 0;
    if (plVar6[0x1f] == 0) goto LAB_14303b29e;
  }
  fVar12 = 3.4028235e+38;
  if ((int)param_1[0xb5] == 0) {
    fVar11 = *(float *)(param_1 + 0xb3);
    if (fVar11 <= 0.0) {
      fVar10 = 3.4028235e+38;
    }
    else {
      fVar10 = (float)FUN_14304cb80(param_1);
      fVar11 = *(float *)(param_1 + 0xb3);
    }
    if (fVar11 < fVar10) {
      uVar2 = FUN_14303af10(param_1,local_res10,param_2);
      uVar7 = (undefined7)((ulonglong)uVar2 >> 8);
      goto LAB_14303b118;
    }
  }
  if (0.0 < param_3) {
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    fVar12 = param_3 + *(float *)(lVar3 + 0x8c8);
  }
  iVar9 = 0;
  if (0 < (int)param_1[0xb7]) {
    lVar3 = 0;
    do {
      plVar6 = *(longlong **)(lVar3 + param_1[0xb6]);
      lVar4 = (**(code **)(*param_2 + 0x28))(param_2);
      lVar5 = (**(code **)(*plVar6 + 0x28))(plVar6);
      if (lVar5 == lVar4) {
        lVar3 = param_1[0xb6];
        iVar8 = (int)param_1[0xb7];
        plVar6 = *(longlong **)(lVar3 + (longlong)iVar9 * 8);
        iVar1 = (iVar8 - iVar9) + -1;
        if (0 < iVar1) {
          iVar1 = 1;
        }
        if (iVar1 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar3 + (longlong)iVar9 * 8),
                     (void *)(lVar3 + (longlong)(iVar8 - iVar1) * 8),(longlong)iVar1 << 3);
          iVar8 = (int)param_1[0xb7];
        }
        *(int *)(param_1 + 0xb7) = iVar8 + -1;
        if (plVar6 != (longlong *)0x0) goto LAB_14303b219;
        break;
      }
      iVar9 = iVar9 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar9 < (int)param_1[0xb7]);
  }
  plVar6 = (longlong *)(**(code **)(*param_2 + 0x30))(param_2);
LAB_14303b219:
  (**(code **)(*plVar6 + 0x38))(plVar6,param_2);
  iVar9 = (int)param_1[0xb5];
  *(int *)(param_1 + 0xb5) = iVar9 + 1;
  if (*(int *)((longlong)param_1 + 0x5ac) < iVar9 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0xb4,iVar9);
  }
  lVar4 = param_1[0xb4];
  lVar3 = (longlong)iVar9 * 3 + 1;
  *(undefined4 *)(lVar4 + lVar3 * 8) = 0;
  *(float *)(lVar4 + 4 + lVar3 * 8) = fVar12;
  *(longlong **)(lVar4 + -8 + lVar3 * 8) = plVar6;
  *(undefined4 *)(lVar4 + 8 + lVar3 * 8) = 0;
  uVar2 = (**(code **)(*plVar6 + 0x18))(plVar6,lVar4 + lVar3 * 8);
  uVar7 = (undefined7)((ulonglong)uVar2 >> 8);
LAB_14303b118:
  return CONCAT71(uVar7,1);
}



// FUNCTION 14303b2b0 FUN_14303b2b0 body=110 status=ok
// SIG undefined FUN_14303b2b0(void)

void FUN_14303b2b0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x5a0);
  plVar1 = plVar3 + (longlong)*(int *)(param_1 + 0x5a8) * 3;
  for (; plVar3 != plVar1; plVar3 = plVar3 + 3) {
    plVar2 = (longlong *)*plVar3;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
    }
  }
  AActor::AddReferencedObjects(param_1,param_2);
  return;
}



// FUNCTION 14303b320 FUN_14303b320 body=518 status=ok
// SIG undefined FUN_14303b320(void)

void FUN_14303b320(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_res8;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = FUN_1430aef40();
    local_res8 = *(longlong *)(param_1 + 8);
    for (lVar3 = local_res8; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
      if (lVar3 == lVar1) goto LAB_14303b358;
    }
  }
  local_res8 = 0;
LAB_14303b358:
  (**(code **)(*param_2 + 0x38))(param_2,&local_res8,0,0);
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar2 = FUN_1430aef40();
    lVar3 = *(longlong *)(param_1 + 8);
    for (lVar1 = lVar3; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) goto LAB_14303b3a0;
    }
  }
  lVar3 = 0;
LAB_14303b3a0:
  if (local_res8 != lVar3) {
    *(longlong *)(param_1 + 8) = local_res8;
  }
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x38,0,0);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x40,0,0);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x48,0,0);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x60,0,0);
  if (*(longlong *)(param_1 + 0x68) != 0) {
    lVar1 = FUN_142e49950();
    local_res8 = *(longlong *)(param_1 + 0x68);
    for (lVar3 = local_res8; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
      if (lVar3 == lVar1) goto LAB_14303b422;
    }
  }
  local_res8 = 0;
LAB_14303b422:
  (**(code **)(*param_2 + 0x38))(param_2,&local_res8,0,0);
  if (*(longlong *)(param_1 + 0x68) != 0) {
    lVar2 = FUN_142e49950();
    lVar3 = *(longlong *)(param_1 + 0x68);
    for (lVar1 = lVar3; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) goto LAB_14303b463;
    }
  }
  lVar3 = 0;
LAB_14303b463:
  if (local_res8 != lVar3) {
    *(longlong *)(param_1 + 0x68) = local_res8;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    lVar1 = FUN_142e0d0b0();
    local_res8 = *(longlong *)(param_1 + 0x70);
    for (lVar3 = local_res8; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
      if (lVar3 == lVar1) goto LAB_14303b4a0;
    }
  }
  local_res8 = 0;
LAB_14303b4a0:
  (**(code **)(*param_2 + 0x38))(param_2,&local_res8,0,0);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    lVar2 = FUN_142e0d0b0();
    lVar3 = *(longlong *)(param_1 + 0x70);
    for (lVar1 = lVar3; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) goto LAB_14303b4e1;
    }
  }
  lVar3 = 0;
LAB_14303b4e1:
  if (local_res8 != lVar3) {
    *(longlong *)(param_1 + 0x70) = local_res8;
  }
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0xa0,0,0);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0xb8,0,0);
  return;
}



// FUNCTION 14303b530 FUN_14303b530 body=110 status=ok
// SIG undefined FUN_14303b530(void)

void FUN_14303b530(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong local_res8 [4];
  
  iVar3 = (int)param_1[9];
  param_1[10] = 0;
  do {
    if (iVar3 < 0) {
      return;
    }
    if (*(int *)(*param_1 + 0x460) <= iVar3) {
      return;
    }
    local_res8[0] = *(longlong *)(*(longlong *)(*param_1 + 0x458) + (longlong)iVar3 * 8);
    param_1[10] = local_res8[0];
    if ((local_res8[0] != 0) && (*(char *)(local_res8[0] + 0xe0) != '\0')) {
      plVar1 = (longlong *)param_1[8];
      if (plVar1 == (longlong *)0x0) {
        return;
      }
      cVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,local_res8);
      if (cVar2 != '\0') {
        return;
      }
    }
    *(int *)(param_1 + 9) = (int)param_1[9] + 1;
    iVar3 = (int)param_1[9];
  } while( true );
}



// FUNCTION 14303b5a0 FUN_14303b5a0 body=172 status=ok
// SIG undefined FUN_14303b5a0(void)

undefined8 * FUN_14303b5a0(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong local_48 [7];
  longlong *local_10;
  
  puVar1 = (undefined8 *)param_3[7];
  local_10 = (longlong *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    local_10 = (longlong *)(**(code **)*puVar1)(puVar1,local_48);
  }
  *param_2 = param_1;
  param_2[8] = 0;
  if (local_10 != (longlong *)0x0) {
    uVar3 = (**(code **)*local_10)(local_10,param_2 + 1);
    param_2[8] = uVar3;
    if (local_10 != (longlong *)0x0) {
      (**(code **)(*local_10 + 0x20))
                (local_10,CONCAT71((int7)((ulonglong)local_48 >> 8),local_10 != local_48));
      local_10 = (longlong *)0x0;
    }
  }
  plVar2 = (longlong *)param_3[7];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_3);
    param_3[7] = 0;
  }
  return param_2;
}



// FUNCTION 14303b650 FUN_14303b650 body=55 status=ok
// SIG undefined FUN_14303b650(void)

undefined8 FUN_14303b650(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **local_48;
  undefined8 local_40;
  undefined ***local_10;
  
  local_48 = &PTR_LAB_145a5f460;
  local_10 = &local_48;
  local_40 = param_3;
  FUN_14303b5a0(param_1,param_2,&local_48);
  return param_2;
}



// FUNCTION 14303b690 FUN_14303b690 body=1461 status=ok
// SIG undefined FUN_14303b690(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14303b690(longlong *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_328 [32];
  longlong local_308;
  longlong local_300;
  longlong **local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  undefined4 *local_2e0;
  undefined4 local_2d8;
  byte local_2d0;
  longlong local_2c8;
  undefined8 local_2c0;
  undefined1 local_2b8;
  undefined8 local_2a8;
  undefined4 local_2a0;
  longlong *local_298;
  int local_290;
  int iStack_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 local_268 [32];
  undefined1 local_248 [16];
  byte local_238;
  undefined1 local_234 [8];
  undefined1 local_22c [24];
  undefined1 local_214 [20];
  longlong local_200;
  int local_1f8;
  int local_1f4;
  undefined4 local_140;
  undefined1 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined1 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined1 local_11c;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined1 local_b8 [8];
  longlong local_b0;
  int local_a8;
  int local_a4;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_328;
  if (((*(uint *)((longlong)param_1 + 0xe4) & 0x4000) != 0) &&
     (lVar3 = param_1[0x15], *(longlong *)(lVar3 + 0x220) != 0)) {
    lVar2 = UCelLightData::GetPrivateStaticClass();
    lVar3 = *(longlong *)(lVar3 + 0x220);
    for (lVar9 = lVar3; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
      if (lVar9 == lVar2) {
        if (lVar3 != 0) {
          FUN_142d0a300(local_248);
          plVar8 = (longlong *)param_1[0x32];
          uVar10 = 0;
          local_140 = (undefined4)param_1[0x16];
          local_13c = 1;
          if (plVar8 == (longlong *)0x0) {
            lVar3 = 0;
          }
          else {
            lVar3 = plVar8[0x1f];
            if (lVar3 == 0) {
              (**(code **)(*plVar8 + 0x368))(plVar8);
              lVar3 = plVar8[0x1f];
            }
          }
          FWeakObjectPtr::operator=(local_22c,lVar3);
          plVar8 = (longlong *)param_1[0x33];
          if (plVar8 == (longlong *)0x0) {
            lVar3 = 0;
          }
          else {
            lVar3 = plVar8[0x1f];
            if (lVar3 == 0) {
              (**(code **)(*plVar8 + 0x368))(plVar8);
              lVar3 = plVar8[0x1f];
            }
          }
          FWeakObjectPtr::operator=(local_234,lVar3);
          if (param_2 != &local_138) {
            local_138 = *param_2;
            local_130 = *(undefined4 *)(param_2 + 1);
            local_12c = 1;
          }
          puVar4 = (undefined8 *)FVector::Rotation(param_1 + 0x5e,&local_2a8);
          if (puVar4 != &local_128) {
            local_128 = *puVar4;
            local_120 = *(undefined4 *)(puVar4 + 1);
            local_11c = 1;
          }
          if ((undefined4 *)((longlong)param_1 + 0xb4) != &local_e8) {
            local_e8 = *(undefined4 *)((longlong)param_1 + 0xb4);
            local_e4 = 1;
          }
          local_238 = ((byte)(*(uint *)((longlong)param_1 + 0xe4) >> 0x12) & 1) << 5 |
                      local_238 & 0xd7;
          if (param_1 + 0x19 != (longlong *)&local_d0) {
            local_d0 = (undefined4)param_1[0x19];
            local_cc = 1;
          }
          FWeakObjectPtr::operator=(local_214,*(undefined8 *)(param_1[0x15] + 0xe0));
          local_238 = local_238 | 0x10;
          FWeakObjectPtr::operator=(local_b8,param_1[0x6f]);
          puVar4 = *(undefined8 **)(param_1[0x15] + 0x270);
          uVar5 = (ulonglong)*(int *)(param_1[0x15] + 0x278);
          uVar11 = uVar5 & 0x1fffffffffffffff;
          if (puVar4 + uVar5 < puVar4) {
            uVar11 = uVar10;
          }
          if (uVar11 != 0) {
            do {
              FWeakObjectPtr::operator=(&local_2a8,*puVar4);
              iVar1 = local_a8;
              lVar3 = (longlong)local_a8;
              local_a8 = local_a8 + 1;
              if (local_a4 < local_a8) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_b0,iVar1);
              }
              puVar4 = puVar4 + 1;
              uVar10 = uVar10 + 1;
              *(undefined4 *)(local_b0 + lVar3 * 8) = (undefined4)local_2a8;
              *(undefined4 *)(local_b0 + 4 + lVar3 * 8) = local_2a8._4_4_;
            } while (uVar10 != uVar11);
          }
          if ((param_3 != 0) && ((*(byte *)(param_3 + 0x91) & 0x40) != 0)) {
            FWeakObjectPtr::operator=(&local_2a8,param_3);
            iVar1 = local_1f8;
            lVar3 = (longlong)local_1f8;
            local_1f8 = local_1f8 + 1;
            if (local_1f4 < local_1f8) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_200,iVar1);
            }
            *(undefined4 *)(local_200 + lVar3 * 8) = (undefined4)local_2a8;
            *(undefined4 *)(local_200 + 4 + lVar3 * 8) = local_2a8._4_4_;
            lVar3 = FUN_142d39be0(param_3);
            if (lVar3 != 0) {
              FWeakObjectPtr::operator=(&local_2a8,lVar3);
              iVar1 = local_1f8;
              lVar3 = (longlong)local_1f8;
              local_1f8 = local_1f8 + 1;
              if (local_1f4 < local_1f8) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_200,iVar1);
              }
              *(undefined4 *)(local_200 + lVar3 * 8) = (undefined4)local_2a8;
              *(undefined4 *)(local_200 + 4 + lVar3 * 8) = local_2a8._4_4_;
            }
          }
          FUN_142d34f80(param_1[0x2d],*(undefined8 *)(param_1[0x15] + 0x220),0,local_248);
          FUN_1409c53c0(local_248);
          return;
        }
        break;
      }
    }
  }
  if (0.0 < *(float *)((longlong)param_1 + 0xb4)) {
    local_298 = (longlong *)0x0;
    local_290 = 0;
    iStack_28c = 0;
    if ((param_3 != 0) && ((*(byte *)(param_3 + 0x91) & 0x40) != 0)) {
      local_290 = 1;
      iStack_28c = 0;
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_298,0);
      *local_298 = param_3;
      lVar3 = FUN_142d39be0(param_3);
      iVar1 = local_290;
      if (lVar3 != 0) {
        lVar9 = (longlong)local_290;
        local_290 = local_290 + 1;
        if (iStack_28c < local_290) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_298,iVar1);
        }
        local_298[lVar9] = lVar3;
      }
    }
    plVar8 = (longlong *)param_1[0x28];
    if (plVar8 == (longlong *)0x0) {
      local_2e8 = 0;
    }
    else {
      local_2e8 = plVar8[0x92];
      if (local_2e8 == 0) {
        local_2e8 = (**(code **)(*plVar8 + 0x668))();
      }
    }
    puVar6 = (undefined4 *)FUN_142d979a0(local_268,(int)param_1[0x19]);
    local_2b8 = 0;
    local_278 = *(undefined8 *)(puVar6 + 4);
    uStack_270 = *(undefined8 *)(puVar6 + 6);
    local_288 = *puVar6;
    uStack_284 = puVar6[1];
    uStack_280 = puVar6[2];
    uStack_27c = puVar6[3];
    local_2c0 = *(undefined8 *)(param_1[0x15] + 0xe8);
    local_2d0 = *(byte *)(param_1[0x15] + 0x22c) & 1;
    local_2c8 = param_1[0x6f];
    local_2e0 = &local_288;
    local_2d8 = 3;
    local_2f0 = param_1[0x2d];
    local_2f8 = &local_298;
    local_300 = param_1[0x18];
    local_308 = param_1[0x17];
    FUN_142d32d50(param_1[4],(int)param_1[0x16],param_2,*(undefined4 *)((longlong)param_1 + 0xb4));
    if (*(longlong *)(param_1[0x15] + 0xe0) != 0) {
      local_2a8 = *param_2;
      local_2a0 = *(undefined4 *)(param_2 + 1);
      lVar3 = 0;
      if (param_1[0x17] != 0) {
        lVar2 = FUN_142e49950();
        for (lVar9 = param_1[0x17];
            (lVar3 = 0, lVar9 != 0 && (lVar3 = param_1[0x17], lVar9 != lVar2));
            lVar9 = *(longlong *)(lVar9 + 0x30)) {
        }
      }
      local_308 = param_1[0x2d];
      local_300 = lVar3;
      FUN_142d41800(*(undefined8 *)(param_1[0x15] + 0xe0),*(undefined4 *)((longlong)param_1 + 0xb4),
                    param_4,&local_2a8);
      uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
      plVar8 = (longlong *)FUN_142d5ecc0(uVar7);
      if ((plVar8 != (longlong *)0x0) &&
         (plVar8 = (longlong *)(**(code **)(*plVar8 + 0x2a0))(plVar8), plVar8 != (longlong *)0x0)) {
        (**(code **)(*plVar8 + 0x6e8))
                  (plVar8,param_2,(int)param_1[0x19],*(undefined4 *)((longlong)param_1 + 0xb4));
      }
    }
    if (local_298 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14303bc50 FUN_14303bc50 body=2370 status=ok
// SIG undefined FUN_14303bc50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14303bc50(longlong *param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  uint5 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_488 [32];
  longlong local_468;
  longlong local_460;
  undefined8 local_458;
  undefined4 local_450;
  undefined4 local_44c;
  undefined2 local_448;
  longlong local_440;
  undefined8 local_438;
  undefined1 local_428 [56];
  undefined8 local_3f0;
  longlong *local_3e8;
  longlong *local_3e0;
  undefined1 local_3d8 [144];
  longlong local_348;
  undefined8 local_328;
  float local_320;
  float local_31c;
  float fStack_318;
  float local_314;
  undefined8 local_310;
  float local_308;
  longlong local_2d8 [4];
  longlong *local_2b8;
  int local_2a8;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  longlong local_288;
  int local_280;
  int local_27c;
  undefined1 local_278 [4];
  undefined4 uStack_274;
  float local_270;
  undefined1 local_268 [20];
  undefined1 local_254 [8];
  undefined1 local_24c [24];
  undefined1 local_234 [8];
  undefined1 local_22c [36];
  undefined1 local_208 [144];
  undefined8 local_178;
  float local_170;
  undefined1 local_16c;
  float local_160;
  undefined1 local_15c;
  undefined8 local_158;
  float local_150;
  undefined1 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined1 local_13c;
  undefined8 local_138;
  float local_130;
  undefined1 local_12c;
  undefined4 local_108;
  undefined1 local_104;
  undefined4 local_f0;
  undefined1 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong local_d0;
  int local_c8;
  int local_c4;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_488;
  if (((0.0 < *(float *)((longlong)param_1 + 0x17c)) &&
      (lVar5 = FWeakObjectPtr::Get(param_2 + 0x6c), lVar5 != 0)) &&
     (lVar5 = param_1[0x29], lVar5 != 0)) {
    fVar14 = *(float *)(param_1 + 0x4b);
    if (param_1[0x33] != 0) {
      lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
      fVar15 = *(float *)(lVar5 + 0x790) - *(float *)((longlong)param_1 + 0x1fc);
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      fVar15 = (float)UCurveFloat::GetFloatValue(param_1[0x33],fVar15);
      lVar5 = param_1[0x29];
      fVar14 = (fVar15 * *(float *)(param_1 + 0x34) + 1.0) * fVar14;
    }
    uVar13 = 0;
    uVar7 = uVar13;
    if (lVar5 != 0) {
      lVar6 = FUN_1430b3b80();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        uVar7 = FUN_1430777a0(lVar5);
      }
    }
    lVar5 = param_1[0x29];
    uVar8 = FWeakObjectPtr::Get(param_2 + 0x6c);
    FUN_142d0aa70(local_428,uVar8,lVar5,uVar7);
    if (param_1[0x28] == 0) {
      local_3f0 = 0;
    }
    else {
      local_3f0 = *(undefined8 *)(param_1[0x28] + 0x490);
    }
    local_3e0 = (longlong *)param_1[0x30];
    local_3e8 = (longlong *)param_1[0x31];
    FUN_140729f20(local_3d8,param_2);
    local_320 = *(float *)(param_2 + 0x28);
    local_328 = *(undefined8 *)(param_2 + 0x20);
    lVar5 = param_1[0x16];
    local_31c = -*(float *)(param_2 + 0x38);
    fStack_318 = -*(float *)(param_2 + 0x3c);
    local_314 = -*(float *)(param_2 + 0x40);
    fVar15 = *(float *)((longlong)param_1 + 0x1a4);
    local_308 = local_314 * fVar15;
    local_310 = CONCAT44(fStack_318 * fVar15,local_31c * fVar15);
    local_348 = param_1[0x2a];
    if (local_348 == 0) {
      if (lVar5 == 0) {
        local_348 = 0;
      }
      else {
        local_348 = *(longlong *)(lVar5 + 0x80);
      }
    }
    local_290 = *(undefined4 *)((longlong)param_1 + 500);
    local_28c = (undefined4)param_1[0x3f];
    local_298 = *(undefined8 *)((longlong)param_1 + 0x1ec);
    puVar11 = *(undefined8 **)(lVar5 + 0xc0);
    uVar7 = (longlong)*(int *)(lVar5 + 200) & 0x1fffffffffffffff;
    if (puVar11 + *(int *)(lVar5 + 200) < puVar11) {
      uVar7 = uVar13;
    }
    local_270 = local_308;
    if (uVar7 != 0) {
      do {
        FWeakObjectPtr::operator=(local_278,*puVar11);
        iVar1 = local_280;
        lVar5 = (longlong)local_280;
        local_280 = local_280 + 1;
        if (local_27c < local_280) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_288,iVar1);
        }
        puVar11 = puVar11 + 1;
        uVar13 = uVar13 + 1;
        *(undefined1 (*) [4])(local_288 + lVar5 * 8) = local_278;
        *(undefined4 *)(local_288 + 4 + lVar5 * 8) = uStack_274;
      } while (uVar13 != uVar7);
      lVar5 = param_1[0x16];
    }
    if (*(longlong *)(lVar5 + 0xb8) != 0) {
      lVar9 = UCelLightData::GetPrivateStaticClass();
      lVar5 = *(longlong *)(lVar5 + 0xb8);
      lVar6 = lVar5;
      if (lVar5 != 0) {
LAB_14303bf70:
        if (lVar6 != lVar9) goto code_r0x00014303bf79;
        if (lVar5 != 0) {
          FUN_142d0a300(local_268);
          plVar10 = local_3e0;
          local_15c = 1;
          local_160 = fVar14;
          if (local_3e0 == (longlong *)0x0) {
            lVar5 = 0;
          }
          else {
            lVar5 = local_3e0[0x1f];
            if (lVar5 == 0) {
              (**(code **)(*local_3e0 + 0x368))(local_3e0);
              lVar5 = plVar10[0x1f];
            }
          }
          FWeakObjectPtr::operator=(local_24c,lVar5);
          plVar10 = local_3e8;
          if (local_3e8 == (longlong *)0x0) {
            lVar5 = 0;
          }
          else {
            lVar5 = local_3e8[0x1f];
            if (lVar5 == 0) {
              (**(code **)(*local_3e8 + 0x368))(local_3e8);
              lVar5 = plVar10[0x1f];
            }
          }
          uVar7 = 0;
          FWeakObjectPtr::operator=(local_254,lVar5);
          if (*(float *)(param_1 + 0x32) <= 0.0) {
            _local_278 = (uint5)(uint)local_278;
            uVar3 = _local_278;
          }
          else {
            _local_278 = CONCAT14(1,*(float *)(param_1 + 0x32));
            uVar3 = _local_278;
          }
          _local_278 = CONCAT35(uStack_274._1_3_,uVar3);
          uVar8 = _local_278;
          uStack_274._0_1_ = (char)(uVar3 >> 0x20);
          local_104 = (char)uStack_274 != '\0';
          if ((bool)local_104) {
            local_278 = SUB54(uVar3,0);
            local_108 = local_278;
          }
          local_158 = local_328;
          local_150 = local_320;
          local_14c = 1;
          _local_278 = uVar8;
          puVar11 = (undefined8 *)FVector::Rotation(&local_31c,local_278);
          if (puVar11 != &local_148) {
            local_148 = *puVar11;
            local_140 = *(undefined4 *)(puVar11 + 1);
            local_13c = 1;
          }
          local_130 = local_320;
          local_138 = local_328;
          local_12c = 1;
          if ((undefined4 *)((longlong)param_1 + 0x1a4) != &local_f0) {
            local_f0 = *(undefined4 *)((longlong)param_1 + 0x1a4);
            local_ec = 1;
          }
          FWeakObjectPtr::operator=(local_234,*(undefined8 *)(param_1[0x16] + 0x78));
          FWeakObjectPtr::operator=(local_22c,local_348);
          local_e8 = *(undefined8 *)((longlong)param_1 + 0x1ec);
          local_e0 = *(undefined4 *)((longlong)param_1 + 500);
          local_dc = (undefined4)param_1[0x3f];
          FUN_140729f20(local_208,param_2);
          local_178 = CONCAT44(fStack_318,local_31c);
          local_170 = local_314;
          local_16c = 1;
          puVar11 = *(undefined8 **)(param_1[0x16] + 0xc0);
          uVar12 = (ulonglong)*(int *)(param_1[0x16] + 200);
          uVar13 = uVar12 & 0x1fffffffffffffff;
          if (puVar11 + uVar12 < puVar11) {
            uVar13 = uVar7;
          }
          if (uVar13 != 0) {
            do {
              FWeakObjectPtr::operator=(local_278,*puVar11);
              iVar1 = local_c8;
              lVar5 = (longlong)local_c8;
              local_c8 = local_c8 + 1;
              if (local_c4 < local_c8) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_d0,iVar1);
              }
              puVar11 = puVar11 + 1;
              uVar7 = uVar7 + 1;
              *(undefined1 (*) [4])(local_d0 + lVar5 * 8) = local_278;
              *(undefined4 *)(local_d0 + 4 + lVar5 * 8) = uStack_274;
            } while (uVar7 != uVar13);
          }
          uVar8 = FWeakObjectPtr::Get(param_2 + 0x6c);
          FUN_142d34f80(param_1[0x29],*(undefined8 *)(param_1[0x16] + 0xb8),uVar8,local_268);
          FUN_1409c53c0(local_268);
          goto LAB_14303c3ae;
        }
      }
    }
LAB_14303bf82:
    if ((*(byte *)(param_1 + 0x3d) & 2) == 0) {
      FUN_142d32ae0(local_428,fVar14,0);
    }
    else {
      local_458 = *(undefined8 *)(param_2 + 0x20);
      local_450 = *(undefined4 *)(param_2 + 0x28);
      local_44c = (undefined4)param_1[0x32];
      local_448 = 0x300;
      local_440 = 0;
      local_438 = 0;
      local_468 = 0;
      FUN_142d33bd0(local_428,fVar14,&local_458,1);
      if (*(longlong *)(param_1[0x16] + 0x78) != 0) {
        _local_278 = local_328;
        local_270 = local_320;
        local_460 = 0;
        if (param_1[0x30] != 0) {
          lVar6 = FUN_142e49950();
          for (lVar5 = param_1[0x30];
              (local_460 = 0, lVar5 != 0 && (local_460 = param_1[0x30], lVar5 != lVar6));
              lVar5 = *(longlong *)(lVar5 + 0x30)) {
          }
        }
        local_468 = param_1[0x29];
        FUN_142d41800(*(undefined8 *)(param_1[0x16] + 0x78),(int)param_1[0x32],param_2,local_278);
        uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
        plVar10 = (longlong *)FUN_142d5ecc0(uVar8);
        if ((plVar10 != (longlong *)0x0) &&
           (plVar10 = (longlong *)(**(code **)(*plVar10 + 0x2a0))(plVar10),
           plVar10 != (longlong *)0x0)) {
          (**(code **)(*plVar10 + 0x6e8))
                    (plVar10,&local_328,*(undefined4 *)((longlong)param_1 + 0x1a4),
                     (int)param_1[0x32]);
        }
      }
      if (local_440 != 0) {
        FMemory::Free();
      }
    }
LAB_14303c3ae:
    uVar8 = FWeakObjectPtr::Get(param_2 + 0x6c);
    FWeakObjectPtr::operator=(local_278,uVar8);
    plVar10 = param_1 + 0x47;
    lVar5 = *plVar10;
    lVar9 = param_1[0x48];
    for (lVar6 = lVar5; lVar6 != lVar5 + (longlong)(int)lVar9 * 8; lVar6 = lVar6 + 8) {
      cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar6,local_278);
      if (cVar4 != '\0') {
        if ((int)(lVar6 - lVar5 >> 3) != -1) goto LAB_14303c449;
        break;
      }
    }
    iVar1 = (int)param_1[0x48];
    *(int *)(param_1 + 0x48) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0x244) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar10,iVar1);
    }
    lVar5 = *plVar10;
    *(undefined1 (*) [4])(lVar5 + (longlong)iVar1 * 8) = local_278;
    *(undefined4 *)(lVar5 + 4 + (longlong)iVar1 * 8) = uStack_274;
LAB_14303c449:
    uVar8 = FWeakObjectPtr::Get(param_2 + 0x6c);
    lVar5 = FUN_142d39be0(uVar8);
    if (lVar5 != 0) {
      FWeakObjectPtr::operator=(local_278,lVar5);
      lVar5 = *plVar10;
      lVar9 = param_1[0x48];
      for (lVar6 = lVar5; lVar6 != lVar5 + (longlong)(int)lVar9 * 8; lVar6 = lVar6 + 8) {
        cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar6,local_278);
        if (cVar4 != '\0') {
          if ((int)(lVar6 - lVar5 >> 3) != -1) goto LAB_14303c4da;
          break;
        }
      }
      iVar1 = (int)param_1[0x48];
      *(int *)(param_1 + 0x48) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0x244) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar10,iVar1);
      }
      lVar5 = *plVar10;
      *(undefined1 (*) [4])(lVar5 + (longlong)iVar1 * 8) = local_278;
      *(undefined4 *)(lVar5 + 4 + (longlong)iVar1 * 8) = uStack_274;
    }
LAB_14303c4da:
    lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    *(undefined4 *)(param_1 + 0x41) = *(undefined4 *)(lVar5 + 0x790);
    if (local_288 != 0) {
      FMemory::Free();
    }
    if (local_2a8 != 0) {
      plVar10 = local_2d8;
      if (local_2b8 != (longlong *)0x0) {
        plVar10 = local_2b8;
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10,0);
      }
    }
    if (local_2b8 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
code_r0x00014303bf79:
  lVar6 = *(longlong *)(lVar6 + 0x30);
  if (lVar6 == 0) goto LAB_14303bf82;
  goto LAB_14303bf70;
}



// FUNCTION 14303c5a0 FUN_14303c5a0 body=3143 status=ok
// SIG undefined FUN_14303c5a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14303c5a0(longlong param_1,byte *param_2,undefined4 param_3,undefined8 param_4,byte param_5
                  ,longlong param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  uint5 uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  byte bVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [4];
  undefined1 auStack_4c8 [32];
  longlong local_4a8;
  undefined8 local_498;
  undefined4 local_490;
  undefined4 local_48c;
  undefined2 local_488;
  longlong local_480 [7];
  undefined8 local_448 [7];
  longlong local_410;
  longlong *local_408;
  longlong *local_400;
  byte local_3f8;
  undefined4 local_3f4;
  uint local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined8 local_3e4;
  undefined4 local_3dc;
  undefined8 local_3d8;
  undefined4 local_3d0;
  undefined8 local_3cc;
  undefined4 local_3c4;
  undefined8 local_3c0;
  undefined4 local_3b8;
  undefined8 local_3b4;
  undefined4 local_3ac;
  undefined8 local_3a8;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined4 local_394;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined4 local_384;
  undefined4 local_380;
  undefined8 local_378;
  undefined8 local_370;
  longlong local_368;
  undefined8 local_360;
  uint local_358;
  undefined8 local_348;
  undefined4 local_340;
  undefined8 local_33c;
  float local_334;
  undefined8 local_330;
  float local_328;
  undefined1 local_308 [16];
  longlong local_2f8 [4];
  longlong *local_2d8;
  int local_2c8;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  longlong local_2a8;
  int local_2a0;
  int local_29c;
  undefined1 local_298 [4];
  float fStack_294;
  float local_290;
  undefined1 local_288 [16];
  byte local_278;
  undefined1 local_274 [8];
  undefined1 local_26c [24];
  undefined1 local_254 [8];
  undefined1 local_24c [36];
  byte local_228;
  undefined4 local_224;
  uint local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined8 local_214;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1fc;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e4;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  float local_190;
  undefined1 local_18c;
  undefined4 local_180;
  undefined1 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined1 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined1 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined1 local_14c;
  undefined4 local_128;
  undefined1 local_124;
  undefined4 local_110;
  undefined1 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined1 local_f8 [8];
  longlong local_f0;
  int local_e8;
  int local_e4;
  undefined1 local_d8 [80];
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_4c8;
  plVar12 = *(longlong **)(param_1 + 0x140);
  if (plVar12 == (longlong *)0x0) {
    local_410 = 0;
  }
  else {
    local_410 = plVar12[0x92];
    if (local_410 == 0) {
      local_410 = (**(code **)(*plVar12 + 0x668))();
    }
  }
  uVar11 = *(undefined8 *)(param_1 + 0x168);
  uVar7 = FWeakObjectPtr::Get(param_2 + 0x6c);
  FUN_142d0aa70(local_448,uVar7,uVar11,*(undefined8 *)(param_1 + 0x378));
  local_400 = *(longlong **)(param_1 + 0xb8);
  local_3ec = *(undefined4 *)(param_2 + 0xc);
  local_3e8 = *(undefined4 *)(param_2 + 0x10);
  fVar1 = *(float *)(param_1 + 0x2f4);
  fVar2 = *(float *)(param_1 + 0x2f0);
  local_408 = *(longlong **)(param_1 + 0xc0);
  local_3e4 = *(undefined8 *)(param_2 + 0x14);
  local_3f8 = local_3f8 ^ (local_3f8 ^ *param_2) & 3;
  local_3f4 = *(undefined4 *)(param_2 + 4);
  local_3d8 = *(undefined8 *)(param_2 + 0x20);
  local_3cc = *(undefined8 *)(param_2 + 0x2c);
  local_3c0 = *(undefined8 *)(param_2 + 0x38);
  local_3b4 = *(undefined8 *)(param_2 + 0x44);
  local_3a8 = *(undefined8 *)(param_2 + 0x50);
  local_3f0 = local_3f0 ^ (local_3f0 ^ *(uint *)(param_2 + 8)) & 1;
  local_3dc = *(undefined4 *)(param_2 + 0x1c);
  local_3d0 = *(undefined4 *)(param_2 + 0x28);
  local_3c4 = *(undefined4 *)(param_2 + 0x34);
  local_3b8 = *(undefined4 *)(param_2 + 0x40);
  local_3ac = *(undefined4 *)(param_2 + 0x4c);
  local_3a0 = *(undefined4 *)(param_2 + 0x58);
  local_398 = *(undefined4 *)(param_2 + 0x60);
  local_394 = *(undefined4 *)(param_2 + 100);
  local_390 = *(undefined4 *)(param_2 + 0x68);
  local_38c = *(undefined4 *)(param_2 + 0x6c);
  local_388 = *(undefined4 *)(param_2 + 0x70);
  local_384 = *(undefined4 *)(param_2 + 0x74);
  local_380 = *(undefined4 *)(param_2 + 0x78);
  local_378 = *(undefined8 *)(param_2 + 0x80);
  local_39c = *(undefined4 *)(param_2 + 0x5c);
  local_370 = *(undefined8 *)(param_2 + 0x88);
  local_348 = *(undefined8 *)(param_2 + 0x14);
  local_340 = *(undefined4 *)(param_2 + 0x1c);
  fVar3 = *(float *)(param_1 + 0x2f8);
  fVar20 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
  if (fVar20 == 1.0) {
    _local_298 = *(undefined8 *)(param_1 + 0x2f0);
    local_334 = *(float *)(param_1 + 0x2f8);
    fVar19 = (float)((ulonglong)_local_298 >> 0x20);
    auVar23 = local_298;
  }
  else {
    fVar19 = DAT_1468b5d94;
    local_334 = DAT_1468b5d98;
    auVar23 = (undefined1  [4])DAT_1468b5d90;
    if (1e-08 <= fVar20) {
      auVar22 = rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
      fVar21 = auVar22._0_4_;
      fVar21 = fVar21 + fVar21 * (0.5 - fVar20 * 0.5 * fVar21 * fVar21);
      fVar21 = fVar21 + fVar21 * (0.5 - fVar20 * 0.5 * fVar21 * fVar21);
      fVar19 = fVar1 * fVar21;
      local_334 = fVar3 * fVar21;
      auVar23 = (undefined1  [4])(fVar2 * fVar21);
    }
    _local_298 = CONCAT44(fVar19,auVar23);
  }
  lVar16 = *(longlong *)(param_1 + 0xa8);
  local_33c = _local_298;
  fVar1 = *(float *)(param_1 + 200);
  local_328 = local_334 * fVar1;
  local_330 = CONCAT44(fVar19 * fVar1,(float)auVar23 * fVar1);
  local_2ac = *(undefined4 *)(param_1 + 0x104);
  local_358 = (uint)param_5 * 2 | local_358 & 0xfffffffd;
  local_2b0 = *(undefined4 *)(param_1 + 0x100);
  local_360 = *(undefined8 *)(lVar16 + 0xe8);
  local_2b8 = *(undefined8 *)(param_1 + 0xf8);
  local_368 = *(longlong *)(param_1 + 0x170);
  if (local_368 == 0) {
    if (lVar16 == 0) {
      local_368 = 0;
    }
    else {
      local_368 = *(longlong *)(lVar16 + 0xd0);
    }
  }
  local_358 = (*(uint *)(param_1 + 0xe4) >> 0xe ^ local_358) & 0x10 ^ local_358;
  uVar17 = 0;
  puVar9 = *(undefined8 **)(lVar16 + 0x270);
  uVar18 = (longlong)*(int *)(lVar16 + 0x278) & 0x1fffffffffffffff;
  if (puVar9 + *(int *)(lVar16 + 0x278) < puVar9) {
    uVar18 = 0;
  }
  local_290 = local_328;
  if (uVar18 != 0) {
    do {
      FWeakObjectPtr::operator=(local_298,*puVar9);
      iVar6 = local_2a0;
      lVar16 = (longlong)local_2a0;
      local_2a0 = local_2a0 + 1;
      if (local_29c < local_2a0) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_2a8,iVar6);
      }
      puVar9 = puVar9 + 1;
      uVar17 = uVar17 + 1;
      *(undefined1 (*) [4])(local_2a8 + lVar16 * 8) = local_298;
      *(float *)(local_2a8 + 4 + lVar16 * 8) = fStack_294;
    } while (uVar17 != uVar18);
  }
  lVar16 = 0;
  if (param_6 != 0) {
    if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
      lVar16 = *(longlong *)(param_1 + 0x20);
    }
    if (*(char *)(lVar16 + 0x128) == '\x03') {
      lVar16 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(&local_498,param_6);
      FGenericPlatformMemory::MemswapGreaterThan8(lVar16,local_308,0x50);
      if (*(int *)(lVar16 + 0x40) != 0) {
        plVar12 = *(longlong **)(lVar16 + 0x30);
        if (*(longlong **)(lVar16 + 0x30) == (longlong *)0x0) {
          plVar12 = (longlong *)(lVar16 + 0x10);
        }
        if (plVar12 != (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x10))(plVar12,0);
        }
      }
      if (*(longlong *)(lVar16 + 0x30) != 0) {
        FMemory::Free();
      }
    }
  }
  lVar14 = 0;
  lVar16 = *(longlong *)(param_1 + 0xa8);
  if ((*(uint *)(param_1 + 0xe4) & 0x4000) != 0) {
    bVar15 = *(byte *)(lVar16 + 0x1d4) >> 1 & 1;
    if (bVar15 != 0) {
      uVar11 = FWeakObjectPtr::Get(param_2 + 0x74);
      lVar16 = FUN_142d46e70(local_448[0],uVar11,*(undefined8 *)(param_2 + 0x80));
      if ((lVar16 != 0) && ((*(byte *)(lVar16 + 0x48) & 0x10) == 0)) {
        bVar15 = 0;
      }
    }
    local_498 = local_348;
    local_48c = *(undefined4 *)(param_1 + 0xb4);
    local_480[0] = 0;
    local_480[1] = 1;
    local_490 = local_340;
    local_488 = 0x301;
    TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(local_480,0);
    FUN_140729f20(local_480[0],param_2);
    lVar16 = thunk_FUN_142d54de0();
    if (lVar16 != 0) {
      local_4a8 = lVar16;
      FUN_142d33bd0(local_448,param_3,&local_498,bVar15 + 1);
      plVar12 = *(longlong **)(*(longlong *)(param_1 + 0xa8) + 0x220);
      if (plVar12 != (longlong *)0x0) {
        plVar13 = (longlong *)plVar12[0x1f];
        if (plVar13 == (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x368))(plVar12);
          plVar13 = (longlong *)plVar12[0x1f];
          if (plVar13 == (longlong *)0x0) goto LAB_14303d142;
        }
        (**(code **)(*plVar13 + 0x278))(plVar13,lVar16,0);
      }
LAB_14303d142:
      FUN_142d266f0(lVar16);
    }
    if (local_480[0] != 0) {
      FMemory::Free();
    }
    goto LAB_14303d159;
  }
  if (*(longlong *)(lVar16 + 0x220) != 0) {
    lVar8 = UCelLightData::GetPrivateStaticClass();
    for (lVar4 = *(longlong *)(lVar16 + 0x220); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
      if (lVar4 == lVar8) {
        if (*(longlong *)(lVar16 + 0x220) != 0) {
          FUN_142d0a300(local_288);
          plVar12 = local_400;
          local_17c = 1;
          local_180 = param_3;
          if ((local_400 != (longlong *)0x0) && (lVar14 = local_400[0x1f], lVar14 == 0)) {
            (**(code **)(*local_400 + 0x368))(local_400);
            lVar14 = plVar12[0x1f];
          }
          FWeakObjectPtr::operator=(local_26c,lVar14);
          plVar12 = local_408;
          if (local_408 == (longlong *)0x0) {
            lVar16 = 0;
          }
          else {
            lVar16 = local_408[0x1f];
            if (lVar16 == 0) {
              (**(code **)(*local_408 + 0x368))(local_408);
              lVar16 = plVar12[0x1f];
            }
          }
          uVar18 = 0;
          FWeakObjectPtr::operator=(local_274,lVar16);
          if (*(float *)(param_1 + 0xb4) <= 0.0) {
            _local_298 = (uint5)(uint)local_298;
            uVar5 = _local_298;
          }
          else {
            _local_298 = CONCAT14(1,*(float *)(param_1 + 0xb4));
            uVar5 = _local_298;
          }
          _local_298 = CONCAT35(fStack_294._1_3_,uVar5);
          uVar11 = _local_298;
          fStack_294._0_1_ = (char)(uVar5 >> 0x20);
          local_124 = fStack_294._0_1_ != '\0';
          if ((bool)local_124) {
            local_298 = SUB54(uVar5,0);
            local_128 = local_298;
          }
          local_178 = local_348;
          local_170 = local_340;
          local_16c = 1;
          _local_298 = uVar11;
          puVar9 = (undefined8 *)FVector::Rotation(param_1 + 0x2f0,local_298);
          if (puVar9 != &local_168) {
            local_168 = *puVar9;
            local_160 = *(undefined4 *)(puVar9 + 1);
            local_15c = 1;
          }
          local_150 = local_340;
          local_158 = local_348;
          local_14c = 1;
          if ((undefined4 *)(param_1 + 200) != &local_110) {
            local_110 = *(undefined4 *)(param_1 + 200);
            local_10c = 1;
          }
          FWeakObjectPtr::operator=(local_254,*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe0))
          ;
          FWeakObjectPtr::operator=(local_24c,local_368);
          local_108 = *(undefined8 *)(param_1 + 0xf8);
          local_100 = *(undefined4 *)(param_1 + 0x100);
          local_fc = *(undefined4 *)(param_1 + 0x104);
          local_21c = *(undefined4 *)(param_2 + 0xc);
          local_228 = local_228 ^ (local_228 ^ *param_2) & 3;
          local_224 = *(undefined4 *)(param_2 + 4);
          local_214 = *(undefined8 *)(param_2 + 0x14);
          local_208 = *(undefined8 *)(param_2 + 0x20);
          local_1fc = *(undefined8 *)(param_2 + 0x2c);
          local_1f0 = *(undefined8 *)(param_2 + 0x38);
          local_1e4 = *(undefined8 *)(param_2 + 0x44);
          local_1d8 = *(undefined8 *)(param_2 + 0x50);
          local_220 = local_220 ^ (local_220 ^ *(uint *)(param_2 + 8)) & 1;
          local_20c = *(undefined4 *)(param_2 + 0x1c);
          local_200 = *(undefined4 *)(param_2 + 0x28);
          local_1f4 = *(undefined4 *)(param_2 + 0x34);
          local_1e8 = *(undefined4 *)(param_2 + 0x40);
          local_1dc = *(undefined4 *)(param_2 + 0x4c);
          local_1d0 = *(undefined4 *)(param_2 + 0x58);
          local_1c8 = *(undefined4 *)(param_2 + 0x60);
          local_1c4 = *(undefined4 *)(param_2 + 100);
          local_1c0 = *(undefined4 *)(param_2 + 0x68);
          local_1bc = *(undefined4 *)(param_2 + 0x6c);
          local_1b8 = *(undefined4 *)(param_2 + 0x70);
          local_1b4 = *(undefined4 *)(param_2 + 0x74);
          local_1b0 = *(undefined4 *)(param_2 + 0x78);
          local_1a8 = *(undefined8 *)(param_2 + 0x80);
          local_1cc = *(undefined4 *)(param_2 + 0x5c);
          local_1a0 = *(undefined8 *)(param_2 + 0x88);
          local_218 = *(undefined4 *)(param_2 + 0x10);
          local_190 = local_334;
          local_198 = local_33c;
          local_18c = 1;
          local_278 = ((byte)(*(uint *)(param_1 + 0xe4) >> 0x12) & 1 | param_5 * '\x02') << 5 |
                      local_278 & 0x9f;
          FWeakObjectPtr::operator=(local_f8,*(undefined8 *)(param_1 + 0x378));
          puVar9 = *(undefined8 **)(*(longlong *)(param_1 + 0xa8) + 0x270);
          uVar10 = (ulonglong)*(int *)(*(longlong *)(param_1 + 0xa8) + 0x278);
          uVar17 = uVar10 & 0x1fffffffffffffff;
          if (puVar9 + uVar10 < puVar9) {
            uVar17 = uVar18;
          }
          if (uVar17 != 0) {
            do {
              FWeakObjectPtr::operator=(local_298,*puVar9);
              iVar6 = local_e8;
              lVar16 = (longlong)local_e8;
              local_e8 = local_e8 + 1;
              if (local_e4 < local_e8) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_f0,iVar6);
              }
              puVar9 = puVar9 + 1;
              uVar18 = uVar18 + 1;
              *(undefined1 (*) [4])(local_f0 + lVar16 * 8) = local_298;
              *(float *)(local_f0 + 4 + lVar16 * 8) = fStack_294;
            } while (uVar18 != uVar17);
          }
          lVar16 = 0;
          if (param_6 != 0) {
            if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
              lVar16 = *(longlong *)(param_1 + 0x20);
            }
            if (*(char *)(lVar16 + 0x128) == '\x03') {
              lVar16 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
                                 (&local_498,param_6);
              FGenericPlatformMemory::MemswapGreaterThan8(lVar16,local_d8,0x50);
              if (*(int *)(lVar16 + 0x40) != 0) {
                plVar12 = *(longlong **)(lVar16 + 0x30);
                if (*(longlong **)(lVar16 + 0x30) == (longlong *)0x0) {
                  plVar12 = (longlong *)(lVar16 + 0x10);
                }
                if (plVar12 != (longlong *)0x0) {
                  (**(code **)(*plVar12 + 0x10))(plVar12,0);
                }
              }
              if (*(longlong *)(lVar16 + 0x30) != 0) {
                FMemory::Free();
              }
              local_278 = local_278 & 0xfe;
            }
          }
          uVar11 = FWeakObjectPtr::Get(param_2 + 0x6c);
          FUN_142d34f80(*(undefined8 *)(param_1 + 0x168),
                        *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x220),uVar11,local_288);
          FUN_1409c53c0(local_288);
          goto LAB_14303d159;
        }
        break;
      }
    }
  }
  lVar16 = thunk_FUN_142d54de0();
  if (lVar16 == 0) goto LAB_14303d159;
  FUN_142d32ae0(local_448,param_3,lVar16);
  plVar12 = *(longlong **)(*(longlong *)(param_1 + 0xa8) + 0x220);
  if (plVar12 != (longlong *)0x0) {
    plVar13 = (longlong *)plVar12[0x1f];
    if (plVar13 == (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x368))(plVar12);
      plVar13 = (longlong *)plVar12[0x1f];
      if (plVar13 == (longlong *)0x0) goto LAB_14303cb36;
    }
    (**(code **)(*plVar13 + 0x278))(plVar13,lVar16,0);
  }
LAB_14303cb36:
  FUN_142d266f0(lVar16);
LAB_14303d159:
  if (local_2a8 != 0) {
    FMemory::Free();
  }
  if (local_2c8 != 0) {
    plVar12 = local_2f8;
    if (local_2d8 != (longlong *)0x0) {
      plVar12 = local_2d8;
    }
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x10))(plVar12,0);
    }
  }
  if (local_2d8 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14303d1f0 FUN_14303d1f0 body=357 status=ok
// SIG undefined FUN_14303d1f0(void)

void FUN_14303d1f0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_48 [4];
  undefined4 local_28;
  
  lVar3 = FWeakObjectPtr::Get(param_3 + 0x6c);
  if (lVar3 == 0) {
    return;
  }
  if (*(char *)(param_1[0x16] + 0xa9) == '\0') {
    return;
  }
  if (((((*(byte *)((longlong)param_1 + 0x1de) >> 1 & 1) == 0) &&
       (*(char *)(param_1[0x16] + 0xa9) == '\x02')) &&
      (lVar4 = FWeakObjectPtr::Get(param_1 + 0x46), lVar4 != 0)) &&
     (((lVar4 = FWeakObjectPtr::Get(param_1 + 0x46), lVar3 == lVar4 &&
       (fVar1 = *(float *)((longlong)param_1 + 0xcc), 0.0 < fVar1)) &&
      (fVar1 < *(float *)(param_1 + 0x49) || fVar1 == *(float *)(param_1 + 0x49))))) {
    uVar5 = FWeakObjectPtr::Get(param_1 + 0x46);
    cVar2 = FUN_1430ab5f0(param_1[0x16],param_1,uVar5);
    if (cVar2 != '\0') {
      local_48[2] = 0;
      local_48[0] = 0;
      local_48[1] = 0;
      local_48[3] = 0;
      local_28 = 0;
      local_48[0] = FWeakObjectPtr::Get(param_1 + 0x46);
      local_48[2] = param_1[0x4a];
      goto LAB_14303d32f;
    }
  }
  if (lVar3 == param_1[0x23]) {
    return;
  }
  if (*(float *)((longlong)param_1 + 0xcc) != 0.0) {
    return;
  }
  cVar2 = FUN_1430ab5f0(param_1[0x16],param_1,lVar3);
  if (cVar2 == '\0') {
    return;
  }
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  local_28 = 0;
  local_48[0] = lVar3;
  FUN_14305cce0(param_1);
LAB_14303d32f:
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  return;
}



// FUNCTION 14303d360 FUN_14303d360 body=68 status=ok
// SIG undefined FUN_14303d360(void)

void FUN_14303d360(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x680);
  if (((plVar1 != (longlong *)0x0) && (plVar1[4] == param_1)) && (plVar1 != param_2)) {
    (**(code **)(*plVar1 + 0x3b0))(plVar1,0);
  }
  *(longlong **)(param_1 + 0x680) = param_2;
  return;
}



// FUNCTION 14303d3b0 FUN_14303d3b0 body=2104 status=ok
// SIG undefined FUN_14303d3b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14303d3b0(longlong param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar23;
  float fVar24;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined8 local_f8;
  float fStack_f0;
  float fStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  
  if (*(int *)(param_1 + 0x318) != 0) {
    plVar13 = (longlong *)0x0;
    if ((*(longlong *)(param_1 + 0x1c0) == 0) && (*(longlong *)(param_1 + 0x1c8) == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    plVar10 = plVar13;
    if (bVar1) {
      plVar15 = *(longlong **)(param_1 + 0x1c8);
      if ((((plVar15 != (longlong *)0x0) ||
           (plVar15 = *(longlong **)(*(longlong *)(param_1 + 0x1c0) + 0x168), plVar10 = plVar15,
           plVar15 != (longlong *)0x0)) && (plVar10 = plVar15, *(longlong *)(param_1 + 0x1d0) != 0))
         && ((cVar7 = (**(code **)(*plVar15 + 0x440))(plVar15,*(undefined8 *)(param_1 + 0x1d0)),
             cVar7 == '\0' &&
             (iVar8 = UWorld::GetNumPlayerControllers(plVar15), plVar14 = plVar13, 0 < iVar8)))) {
        do {
          plVar10 = (longlong *)UKWMeshArray::GetMeshByIndex(plVar15,plVar14);
          if ((plVar10 != (longlong *)0x0) &&
             (cVar7 = (**(code **)(*plVar10 + 0x440))(plVar10,*(undefined8 *)(param_1 + 0x1d0)),
             cVar7 != '\0')) break;
          uVar12 = (int)plVar14 + 1;
          plVar14 = (longlong *)(ulonglong)uVar12;
          plVar10 = plVar15;
        } while ((int)uVar12 < iVar8);
      }
      plVar15 = *(longlong **)(param_1 + 0x1c0);
      if (plVar15 != (longlong *)0x0) {
        lVar11 = FUN_1429d7ab0();
        if ((*(int *)(plVar15[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar15[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
            != lVar11 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        plVar13 = (longlong *)0x0;
        if ((bVar1) && (cVar7 = (**(code **)(*plVar15 + 0x780))(plVar15), cVar7 != '\0')) {
          plVar13 = plVar15;
        }
      }
    }
    uVar17 = 0;
    FUN_14305abd0(param_1,0);
    uVar9 = FRotator::Quaternion(param_1 + 0x1e4,&local_108);
    fVar6 = fRam0000000146b473e8;
    fVar5 = fRam0000000146b473e4;
    fVar49 = _DAT_146b473e0;
    fVar47 = fRam0000000146b47388;
    fVar45 = fRam0000000146b47384;
    fVar32 = _DAT_146b47380;
    fVar31 = DAT_1464aa790;
    fVar40 = DAT_1464aa788._4_4_;
    fVar39 = (float)DAT_1464aa788;
    fVar53 = *(float *)(param_1 + 0x1e0);
    fVar54 = *(float *)(param_1 + 0x1dc);
    fVar55 = *(float *)(param_1 + 0x1d8);
    lVar11 = *(longlong *)(param_1 + 0xa8);
    auVar22 = *(undefined1 (*) [16])(lVar11 + 0x60);
    fVar28 = auVar22._0_4_;
    fVar35 = auVar22._4_4_;
    fVar37 = auVar22._8_4_;
    auVar18._4_4_ = DAT_1464aa788._4_4_;
    auVar18._0_4_ = (float)DAT_1464aa788;
    auVar18._8_4_ = DAT_1464aa790;
    auVar18._12_4_ = 0;
    auVar18 = minps(auVar22,auVar18);
    auVar19._4_4_ = -(uint)(auVar18._4_4_ < fRam0000000146b473e4);
    auVar19._0_4_ = -(uint)(auVar18._0_4_ < _DAT_146b473e0);
    auVar19._8_4_ = -(uint)(auVar18._8_4_ < fRam0000000146b473e8);
    auVar19._12_4_ = -(uint)(auVar18._12_4_ < fRam0000000146b473ec);
    iVar8 = movmskps(uVar9,auVar19);
    if (iVar8 == 0) {
      fVar28 = *(float *)(lVar11 + 0x40);
      fVar35 = *(float *)(lVar11 + 0x44);
      fVar37 = *(float *)(lVar11 + 0x48);
      fVar39 = *(float *)(lVar11 + 0x4c);
      fVar40 = *(float *)(lVar11 + 0x50) * (float)DAT_1464aa788;
      fVar31 = *(float *)(lVar11 + 0x54) * DAT_1464aa788._4_4_;
      fVar32 = *(float *)(lVar11 + 0x58) * DAT_1464aa790;
      fVar45 = local_108 * fVar39 * _DAT_146b473c0 + fVar28 * fStack_fc +
               fStack_104 * fVar37 * _DAT_146b473b0 + fStack_100 * fVar35 * _DAT_146b473a0;
      fVar47 = local_108 * fVar37 * fRam0000000146b473c4 + fVar35 * fStack_fc +
               fStack_104 * fVar39 * fRam0000000146b473b4 +
               fStack_100 * fVar28 * fRam0000000146b473a4;
      fVar49 = local_108 * fVar35 * fRam0000000146b473c8 + fVar37 * fStack_fc +
               fStack_104 * fVar28 * fRam0000000146b473b8 +
               fStack_100 * fVar39 * fRam0000000146b473a8;
      fVar39 = local_108 * fVar28 * fRam0000000146b473cc + fVar39 * fStack_fc +
               fStack_104 * fVar35 * fRam0000000146b473bc +
               fStack_100 * fVar37 * fRam0000000146b473ac;
      fVar28 = fVar32 * fStack_104 - fVar31 * fStack_100;
      fVar35 = fVar40 * fStack_100 - fVar32 * local_108;
      fVar37 = fVar31 * local_108 - fVar40 * fStack_104;
      fVar28 = fVar28 + fVar28;
      fVar35 = fVar35 + fVar35;
      fVar37 = fVar37 + fVar37;
      fVar55 = (fVar37 * fStack_104 - fVar35 * fStack_100) + fVar28 * fStack_fc + fVar40 + fVar55;
      fVar54 = (fVar28 * fStack_100 - fVar37 * local_108) + fVar35 * fStack_fc + fVar31 + fVar54;
      fVar53 = (fVar35 * local_108 - fVar28 * fStack_104) + fVar37 * fStack_fc + fVar32 + fVar53;
    }
    else {
      fVar25 = fStack_104 + fStack_104;
      fVar27 = fStack_100 + fStack_100;
      fVar29 = local_108 * (local_108 + local_108);
      fVar2 = *(float *)(lVar11 + 0x40);
      fVar3 = *(float *)(lVar11 + 0x44);
      fVar4 = *(float *)(lVar11 + 0x48);
      fVar20 = *(float *)(lVar11 + 0x4c);
      fVar26 = (local_108 + local_108) * fStack_fc;
      fVar50 = (fVar27 * fStack_fc + fVar25 * local_108) * (float)DAT_1464aa788;
      fVar51 = (fVar26 + fVar27 * fStack_104) * DAT_1464aa788._4_4_;
      fVar52 = (fVar25 * fStack_fc + fVar27 * local_108) * DAT_1464aa790;
      fVar33 = DAT_1464aa788._4_4_ * (fVar25 * local_108 - fVar27 * fStack_fc);
      fVar36 = DAT_1464aa790 * (fVar27 * fStack_104 - fVar26);
      fVar38 = (float)DAT_1464aa788 * (fVar27 * local_108 - fVar25 * fStack_fc);
      fVar26 = (float)((uint)((_DAT_146b47380 - (fStack_100 * fVar27 + fStack_104 * fVar25)) *
                             (float)DAT_1464aa788) & _DAT_146b47390);
      fVar27 = (float)((uint)((fRam0000000146b47384 - (fStack_100 * fVar27 + fVar29)) *
                             DAT_1464aa788._4_4_) & uRam0000000146b47394);
      fVar23 = (float)((uint)((fRam0000000146b47388 - (fStack_104 * fVar25 + fVar29)) *
                             DAT_1464aa790) & uRam0000000146b47398);
      fVar24 = (float)((uint)((fRam0000000146b4738c - (fVar29 + fVar29)) * 0.0) &
                      uRam0000000146b4739c);
      fVar25 = fVar3 + fVar3;
      fVar29 = fVar4 + fVar4;
      fVar34 = (fVar2 + fVar2) * fVar2;
      fVar30 = fVar20 * (fVar2 + fVar2);
      fVar44 = (fVar20 * fVar29 + fVar2 * fVar25) * fVar28;
      fVar46 = (fVar30 + fVar3 * fVar29) * fVar35;
      fVar48 = (fVar20 * fVar25 + fVar2 * fVar29) * fVar37;
      fVar41 = fVar35 * (fVar2 * fVar25 - fVar20 * fVar29);
      fVar42 = fVar37 * (fVar3 * fVar29 - fVar30);
      fVar43 = fVar28 * (fVar2 * fVar29 - fVar20 * fVar25);
      fVar20 = (float)((uint)((_DAT_146b47380 - (fVar29 * fVar4 + fVar25 * fVar3)) * fVar28) &
                      _DAT_146b47390);
      fVar29 = (float)((uint)((fRam0000000146b47384 - (fVar29 * fVar4 + fVar34)) * fVar35) &
                      uRam0000000146b47394);
      fVar25 = (float)((uint)((fRam0000000146b47388 - (fVar25 * fVar3 + fVar34)) * fVar37) &
                      uRam0000000146b47398);
      fVar30 = (float)((uint)((fRam0000000146b4738c - (fVar34 + fVar34)) * auVar22._12_4_) &
                      uRam0000000146b4739c);
      fVar2 = *(float *)(lVar11 + 0x50);
      fVar3 = *(float *)(lVar11 + 0x54);
      fVar4 = *(float *)(lVar11 + 0x58);
      local_148 = fVar44 * fVar33 + fVar20 * fVar26 + fVar43 * fVar52 + fVar30 * fVar55;
      fStack_144 = fVar44 * fVar27 + fVar20 * fVar50 + fVar43 * fVar36 + fVar30 * fVar54;
      fStack_140 = fVar44 * fVar51 + fVar20 * fVar38 + fVar43 * fVar23 + fVar30 * fVar53;
      fStack_13c = fVar44 * fVar24 + fVar20 * fVar24 + fVar43 * fVar24 +
                   fVar30 * fRam0000000146b4738c;
      local_138 = fVar29 * fVar33 + fVar41 * fVar26 + fVar46 * fVar52 + fVar30 * fVar55;
      fStack_134 = fVar29 * fVar27 + fVar41 * fVar50 + fVar46 * fVar36 + fVar30 * fVar54;
      fStack_130 = fVar29 * fVar51 + fVar41 * fVar38 + fVar46 * fVar23 + fVar30 * fVar53;
      fStack_12c = fVar29 * fVar24 + fVar41 * fVar24 + fVar46 * fVar24 +
                   fVar30 * fRam0000000146b4738c;
      local_128 = fVar42 * fVar33 + fVar48 * fVar26 + fVar25 * fVar52 + fVar30 * fVar55;
      fStack_124 = fVar42 * fVar27 + fVar48 * fVar50 + fVar25 * fVar36 + fVar30 * fVar54;
      fStack_120 = fVar42 * fVar51 + fVar48 * fVar38 + fVar25 * fVar23 + fVar30 * fVar53;
      fStack_11c = fVar42 * fVar24 + fVar48 * fVar24 + fVar25 * fVar24 +
                   fVar30 * fRam0000000146b4738c;
      local_118 = fVar3 * fVar33 + fVar2 * fVar26 + fVar4 * fVar52 + fRam0000000146b4738c * fVar55;
      fStack_114 = fVar3 * fVar27 + fVar2 * fVar50 + fVar4 * fVar36 + fRam0000000146b4738c * fVar54;
      fStack_110 = fVar3 * fVar51 + fVar2 * fVar38 + fVar4 * fVar23 + fRam0000000146b4738c * fVar53;
      fStack_10c = fVar3 * fVar24 + fVar2 * fVar24 + fVar4 * fVar24 +
                   fRam0000000146b4738c * fRam0000000146b4738c;
      FMatrix::RemoveScaling(&local_148);
      fVar53 = (float)(-(uint)(fVar49 <= fVar39 * fVar28) & (_DAT_146b473d0 ^ (uint)fVar32) ^
                      _DAT_146b473d0);
      fVar54 = (float)(-(uint)(fVar5 <= fVar40 * fVar35) & (uRam0000000146b473d4 ^ (uint)fVar45) ^
                      uRam0000000146b473d4);
      fVar55 = (float)(-(uint)(fVar6 <= fVar31 * fVar37) & (uRam0000000146b473d8 ^ (uint)fVar47) ^
                      uRam0000000146b473d8);
      local_148 = local_148 * fVar53;
      fStack_144 = fStack_144 * fVar53;
      fStack_140 = fStack_140 * fVar53;
      fStack_134 = fStack_134 * fVar54;
      fStack_130 = fStack_130 * fVar54;
      local_138 = local_138 * fVar54;
      fStack_124 = fStack_124 * fVar55;
      fStack_120 = fStack_120 * fVar55;
      local_128 = local_128 * fVar55;
      FQuat::FQuat(&local_f8,&local_148);
      auVar21._0_4_ = (float)local_f8 * (float)local_f8 + fStack_f0 * fStack_f0;
      auVar21._4_4_ = local_f8._4_4_ * local_f8._4_4_ + fStack_ec * fStack_ec;
      auVar21._8_4_ = fStack_f0 * fStack_f0 + (float)local_f8 * (float)local_f8;
      auVar21._12_4_ = fStack_ec * fStack_ec + local_f8._4_4_ * local_f8._4_4_;
      fVar35 = auVar21._4_4_ + auVar21._0_4_;
      fVar37 = auVar21._8_4_ + auVar21._4_4_;
      fVar39 = auVar21._12_4_ + auVar21._8_4_;
      fVar40 = auVar21._0_4_ + auVar21._12_4_;
      auVar22._4_4_ = fVar37;
      auVar22._0_4_ = fVar35;
      auVar22._8_4_ = fVar39;
      auVar22._12_4_ = fVar40;
      auVar22 = rsqrtps(auVar21,auVar22);
      fVar53 = auVar22._0_4_;
      fVar54 = auVar22._4_4_;
      fVar55 = auVar22._8_4_;
      fVar28 = auVar22._12_4_;
      fVar53 = (_DAT_146b47370 - fVar53 * fVar53 * fVar35 * _DAT_146b47370) * fVar53 + fVar53;
      fVar54 = (fRam0000000146b47374 - fVar54 * fVar54 * fVar37 * fRam0000000146b47374) * fVar54 +
               fVar54;
      fVar55 = (fRam0000000146b47378 - fVar55 * fVar55 * fVar39 * fRam0000000146b47378) * fVar55 +
               fVar55;
      fVar28 = (fRam0000000146b4737c - fVar28 * fVar28 * fVar40 * fRam0000000146b4737c) * fVar28 +
               fVar28;
      fVar45 = (float)(((uint)(((_DAT_146b47370 - fVar53 * fVar53 * fVar35 * _DAT_146b47370) *
                                fVar53 + fVar53) * (float)local_f8) ^ _DAT_146b47360) &
                       -(uint)(1e-08 <= fVar35) ^ _DAT_146b47360);
      fVar47 = (float)(((uint)(((fRam0000000146b47374 -
                                fVar54 * fVar54 * fVar37 * fRam0000000146b47374) * fVar54 + fVar54)
                              * local_f8._4_4_) ^ uRam0000000146b47364) & -(uint)(1e-08 <= fVar37) ^
                      uRam0000000146b47364);
      fVar49 = (float)(((uint)(((fRam0000000146b47378 -
                                fVar55 * fVar55 * fVar39 * fRam0000000146b47378) * fVar55 + fVar55)
                              * fStack_f0) ^ uRam0000000146b47368) & -(uint)(1e-08 <= fVar39) ^
                      uRam0000000146b47368);
      fVar39 = (float)(((uint)(((fRam0000000146b4737c -
                                fVar28 * fVar28 * fVar40 * fRam0000000146b4737c) * fVar28 + fVar28)
                              * fStack_ec) ^ uRam0000000146b4736c) & -(uint)(1e-08 <= fVar40) ^
                      uRam0000000146b4736c);
      fVar55 = local_118;
      fVar54 = fStack_114;
      fVar53 = fStack_110;
    }
    local_108 = fVar45;
    fStack_104 = fVar47;
    fStack_100 = fVar49;
    fStack_fc = fVar39;
    FQuat::Rotator(&local_108,&local_e8);
    plVar15 = *(longlong **)(param_1 + 0x310);
    uVar16 = (longlong)*(int *)(param_1 + 0x318) & 0x1fffffffffffffff;
    if (plVar15 + *(int *)(param_1 + 0x318) < plVar15) {
      uVar16 = uVar17;
    }
    if (uVar16 != 0) {
      do {
        lVar11 = *plVar15;
        if (*(longlong *)(lVar11 + 400) == 0) {
          FUN_142397000(lVar11,0,0,1);
          local_d8 = local_e8;
          local_d0 = local_e0;
          local_f8 = CONCAT44(fVar54,fVar55);
          fStack_100 = fVar53;
          fStack_f0 = fVar53;
          FUN_1423982b0(lVar11,&local_f8,&local_d8,0,0,1);
          if (plVar10 != (longlong *)0x0) {
            FUN_142382f60(lVar11,plVar10,&DAT_146af29ec,*(undefined8 *)(param_1 + 0x1d0));
            if (plVar13 != (longlong *)0x0) {
              FUN_142398e60(lVar11,2);
              FUN_142398ea0(lVar11);
            }
          }
        }
        plVar15 = plVar15 + 1;
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar16);
    }
  }
  return;
}



// FUNCTION 14303dbf0 FUN_14303dbf0 body=960 status=ok
// SIG undefined FUN_14303dbf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14303dbf0(longlong *param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  float fVar10;
  float fVar12;
  float fVar13;
  undefined1 auVar11 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  float local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  float local_130;
  longlong local_128;
  longlong *plStack_120;
  longlong local_118;
  longlong lStack_110;
  undefined4 local_108;
  undefined8 uStack_104;
  undefined4 uStack_fc;
  undefined8 local_f8;
  float fStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  uint uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  lVar9 = 0;
  lVar7 = lVar9;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    lVar7 = param_1[4];
  }
  if (*(char *)(lVar7 + 0x128) == '\x03') {
    local_128 = FWeakObjectPtr::Get(param_2 + 0x6c);
    plVar5 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x74);
    local_118 = *(longlong *)(param_2 + 0x80);
    local_158 = 0;
    plStack_120 = plVar5;
    if (local_118 == 0) {
      local_d8 = plVar5[0x42];
      uStack_d0 = plVar5[0x43];
      local_c8 = (undefined4)plVar5[0x44];
      uStack_c4 = *(undefined4 *)((longlong)plVar5 + 0x224);
      uStack_c0 = (undefined4)plVar5[0x45];
      uStack_bc = *(undefined4 *)((longlong)plVar5 + 0x22c);
      local_b8 = *(float *)(plVar5 + 0x46);
      fStack_b4 = *(float *)((longlong)plVar5 + 0x234);
      fStack_b0 = *(float *)(plVar5 + 0x47);
      uStack_ac = *(uint *)((longlong)plVar5 + 0x23c);
    }
    else {
      plVar6 = (longlong *)(**(code **)(*plVar5 + 0x420))(plVar5,&local_a8,local_118,0);
      local_d8 = *plVar6;
      uStack_d0 = plVar6[1];
      local_c8 = (undefined4)plVar6[2];
      uStack_c4 = *(undefined4 *)((longlong)plVar6 + 0x14);
      uStack_c0 = (undefined4)plVar6[3];
      uStack_bc = *(undefined4 *)((longlong)plVar6 + 0x1c);
      local_b8 = *(float *)(plVar6 + 4);
      fStack_b4 = *(float *)((longlong)plVar6 + 0x24);
      fStack_b0 = *(float *)(plVar6 + 5);
      uStack_ac = *(uint *)((longlong)plVar6 + 0x2c);
    }
    local_140 = *(undefined4 *)(param_2 + 0x1c);
    local_148 = *(undefined8 *)(param_2 + 0x14);
    local_138 = *(undefined8 *)(param_2 + 0x38);
    local_130 = *(float *)(param_2 + 0x40);
    if (plVar5 != (longlong *)0x0) {
      lVar7 = FUN_142e5c1e0();
      if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_142dd6830(plVar5,param_2 + 0x80,&local_148,&local_138);
      }
    }
    puVar8 = (undefined8 *)FVector4::ToOrientationQuat(param_1 + 0x5e,&local_e8);
    local_a8 = *puVar8;
    uStack_a0 = puVar8[1];
    local_98._8_4_ = local_140;
    local_98._0_8_ = local_148;
    local_98._12_4_ = 0;
    local_88._4_4_ = DAT_1464aa788._4_4_;
    local_88._0_4_ = (undefined4)DAT_1464aa788;
    local_88._8_4_ = DAT_1464aa790;
    local_88._12_4_ = 0;
    FUN_14162bcf0(&local_a8,&local_78,&local_d8);
    local_150 = local_68._8_4_;
    lStack_110 = local_68._0_8_;
    local_e8 = local_78;
    uStack_e4 = uStack_74;
    uStack_e0 = uStack_70;
    uStack_dc = uStack_6c;
    local_108 = local_150;
    FQuat::Rotator(&local_e8,&local_158);
    auVar1._4_4_ = fStack_b4;
    auVar1._0_4_ = local_b8;
    auVar1._8_4_ = fStack_b0;
    auVar1._12_4_ = uStack_ac;
    uStack_104 = local_158;
    uVar3 = uStack_104;
    uStack_fc = local_150;
    auVar11._4_4_ = -(uint)(fRam0000000146b474c4 < (float)((uint)fStack_b4 & uRam0000000146b47414));
    auVar11._0_4_ = -(uint)(_DAT_146b474c0 < (float)((uint)local_b8 & _DAT_146b47410));
    auVar11._8_4_ = -(uint)(fRam0000000146b474c8 < (float)((uint)fStack_b0 & uRam0000000146b47418));
    auVar11._12_4_ = -(uint)(fRam0000000146b474cc < (float)(uStack_ac & uRam0000000146b4741c));
    iVar4 = movmskps(local_150,auVar11);
    fVar10 = _DAT_1468b5b90;
    fVar12 = fRam00000001468b5b94;
    fVar13 = fRam00000001468b5b98;
    fVar17 = _DAT_1468b5b70;
    fVar18 = fRam00000001468b5b74;
    fVar19 = fRam00000001468b5b78;
    fVar20 = fRam00000001468b5b7c;
    if (iVar4 != 0) {
      auVar11 = rcpps(local_68,auVar1);
      fVar10 = auVar11._0_4_;
      fVar12 = auVar11._4_4_;
      fVar13 = auVar11._8_4_;
      fVar10 = (fVar10 + fVar10) - fVar10 * fVar10 * local_b8;
      fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fStack_b4;
      fVar13 = (fVar13 + fVar13) - fVar13 * fVar13 * fStack_b0;
      fVar10 = (fVar10 + fVar10) - fVar10 * fVar10 * local_b8;
      fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fStack_b4;
      fVar13 = (fVar13 + fVar13) - fVar13 * fVar13 * fStack_b0;
      fVar10 = (float)((-(uint)((float)((uint)local_b8 & _DAT_146b47410) <= _DAT_146b474c0) &
                        (uint)fVar10 ^ (uint)fVar10) & _DAT_146b47390);
      fVar12 = (float)((-(uint)((float)((uint)fStack_b4 & uRam0000000146b47414) <=
                               fRam0000000146b474c4) & (uint)fVar12 ^ (uint)fVar12) &
                      uRam0000000146b47394);
      fVar13 = (float)((-(uint)((float)((uint)fStack_b0 & uRam0000000146b47418) <=
                               fRam0000000146b474c8) & (uint)fVar13 ^ (uint)fVar13) &
                      uRam0000000146b47398);
      fVar17 = (float)local_d8 * _DAT_146b474d0;
      fVar18 = local_d8._4_4_ * fRam0000000146b474d4;
      fVar19 = (float)uStack_d0 * fRam0000000146b474d8;
      fVar20 = uStack_d0._4_4_ * fRam0000000146b474dc;
    }
    fVar10 = (float)local_138 * fVar10;
    fVar12 = local_138._4_4_ * fVar12;
    fVar13 = local_130 * fVar13;
    fVar14 = fVar13 * fVar18 - fVar12 * fVar19;
    fVar15 = fVar10 * fVar19 - fVar13 * fVar17;
    fVar16 = fVar12 * fVar17 - fVar10 * fVar18;
    fVar14 = fVar14 + fVar14;
    fVar15 = fVar15 + fVar15;
    fVar16 = fVar16 + fVar16;
    fVar10 = (fVar16 * fVar18 - fVar15 * fVar19) + fVar20 * fVar14 + fVar10;
    fVar12 = (fVar14 * fVar19 - fVar16 * fVar17) + fVar20 * fVar15 + fVar12;
    fStack_f0 = (fVar15 * fVar17 - fVar14 * fVar18) + fVar20 * fVar16 + fVar13;
    local_f8 = CONCAT44(fVar12,fVar10);
    if ((*(byte *)((longlong)param_1 + 0xe4) & 0x10) == 0) {
      if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
        lVar9 = param_1[4];
      }
      if (*(char *)(lVar9 + 0x128) == '\x03') {
        param_1[0x38] = local_128;
        param_1[0x39] = (longlong)plStack_120;
        uStack_104._0_4_ = (undefined4)local_158;
        uStack_104._4_4_ = (undefined4)((ulonglong)local_158 >> 0x20);
        param_1[0x3a] = local_118;
        param_1[0x3b] = lStack_110;
        *(undefined4 *)(param_1 + 0x3c) = local_108;
        *(undefined4 *)((longlong)param_1 + 0x1e4) = (undefined4)uStack_104;
        *(undefined4 *)(param_1 + 0x3d) = uStack_104._4_4_;
        *(float *)((longlong)param_1 + 0x1ec) = local_150;
        *(float *)(param_1 + 0x3e) = fVar10;
        *(float *)((longlong)param_1 + 500) = fVar12;
        *(float *)(param_1 + 0x3f) = fStack_f0;
        *(undefined4 *)((longlong)param_1 + 0x1fc) = uStack_ec;
        local_150 = fStack_f0;
        uStack_104 = uVar3;
        (**(code **)(*param_1 + 0x260))(param_1);
        (**(code **)(*param_1 + 0x378))(param_1);
      }
    }
  }
  return;
}



// FUNCTION 14303dfb0 FUN_14303dfb0 body=146 status=ok
// SIG undefined FUN_14303dfb0(void)

void FUN_14303dfb0(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x478))) {
    uVar5 = 0;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x470) + (longlong)param_2 * 8);
    uVar3 = (ulonglong)*(int *)(lVar1 + 0x28);
    plVar4 = *(longlong **)(lVar1 + 0x20);
    uVar6 = uVar3 & 0x1fffffffffffffff;
    if (plVar4 + uVar3 < plVar4) {
      uVar6 = uVar5;
    }
    if (uVar6 != 0) {
      do {
        plVar2 = (longlong *)*plVar4;
        if ((plVar2 != (longlong *)0x0) && ((int)plVar2[0x14] == param_2)) {
          (**(code **)(*plVar2 + 0x2b0))();
        }
        plVar4 = plVar4 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar6);
    }
  }
  return;
}



// FUNCTION 14303e050 FUN_14303e050 body=463 status=ok
// SIG undefined FUN_14303e050(void)

void FUN_14303e050(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong local_res10;
  
  local_res10 = param_2;
  lVar3 = (**(code **)(*param_1 + 0x148))();
  iVar2 = FUN_14304a7b0(param_1,*(undefined4 *)(lVar3 + 0x5e4));
  if ((-1 < iVar2) && (iVar2 < (int)param_1[0x8f])) {
    lVar3 = *(longlong *)(param_1[0x8e] + (longlong)iVar2 * 8);
    *(int *)(param_2 + 0xa0) = iVar2;
    if (*(char *)(param_2 + 0x55) != '\0') {
      FUN_14288e3d0(param_2 + 0x48,0);
      FTickFunction::UnRegisterTickFunction(param_2 + 0x48);
      uVar6 = 0;
      plVar5 = *(longlong **)(param_2 + 0x310);
      uVar7 = (longlong)*(int *)(param_2 + 0x318) & 0x1fffffffffffffff;
      if (plVar5 + *(int *)(param_2 + 0x318) < plVar5) {
        uVar7 = uVar6;
      }
      if (uVar7 != 0) {
        do {
          lVar1 = *plVar5;
          if ((lVar1 != 0) && (*(longlong *)(lVar1 + 400) == 0)) {
            FTickFunction::RemovePrerequisite(lVar1 + 0x30,param_2,param_2 + 0x48);
          }
          plVar5 = plVar5 + 1;
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar7);
      }
    }
    FUN_14288e3d0(lVar3 + 0x30,1);
    iVar2 = *(int *)(lVar3 + 0x18);
    *(int *)(lVar3 + 0x18) = iVar2 + 1;
    if (*(int *)(lVar3 + 0x1c) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                ((longlong *)(lVar3 + 0x10),iVar2);
    }
    *(longlong *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar2 * 8) = param_2;
    FUN_14305b2c0(param_2,lVar3 + 0x30);
    TArray<AOnlineBeaconClient_*,FDefaultAllocator>::RemoveSingleSwap(param_1 + 0x90,&local_res10,1)
    ;
    return;
  }
  *(longlong *)(param_2 + 0x98) = param_2;
  FUN_14288e3d0(param_2 + 0x48,1);
  if (*(char *)(param_2 + 0x55) == '\0') {
    if ((*(uint *)(param_2 + 8) >> 4 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_2 + 0x20);
    }
    else {
      uVar4 = 0;
    }
    uVar4 = AActor::GetLevel(uVar4);
    FTickFunction::RegisterTickFunction(param_2 + 0x48,uVar4);
  }
  FUN_14305b2c0(param_2,param_2 + 0x48);
  iVar2 = (int)param_1[0x91];
  *(int *)(param_1 + 0x91) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x48c) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x90,iVar2);
  }
  *(longlong *)(param_1[0x90] + (longlong)iVar2 * 8) = param_2;
  return;
}



// FUNCTION 14303e220 FUN_14303e220 body=793 status=ok
// SIG undefined FUN_14303e220(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14303e220(longlong param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_108 [40];
  longlong local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  longlong local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_c0;
  longlong local_b8;
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  longlong local_80 [4];
  longlong *local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  if (param_3 < 0) {
    return;
  }
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if (*(int *)(param_1 + 0x478) <= param_3) {
    return;
  }
  uVar5 = *(undefined4 *)(param_1 + 0x468);
  *(int *)(param_1 + 0x468) = param_3;
  uVar14 = 0;
  puVar6 = *(undefined4 **)(*(longlong *)(param_1 + 0x470) + (longlong)param_3 * 8);
  *puVar6 = DAT_1464aaa8c;
  plVar10 = *(longlong **)(puVar6 + 4);
  uVar15 = (longlong)(int)puVar6[6] & 0x1fffffffffffffff;
  if (plVar10 + (int)puVar6[6] < plVar10) {
    uVar15 = uVar14;
  }
  if (uVar15 != 0) {
    do {
      plVar12 = (longlong *)*plVar10;
      if ((plVar12 != (longlong *)0x0) && ((int)plVar12[0x14] == param_3)) {
        (**(code **)(*plVar12 + 0x2a8))(plVar12,param_2,puVar6 + 0xc);
      }
      plVar10 = plVar10 + 1;
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar15);
  }
  puVar6[1] = puVar6[10];
  if ((int)puVar6[10] < 1) goto LAB_14303e4ea;
  plVar10 = (longlong *)FUN_143042460(local_b0,0,2);
  lVar13 = *plVar10;
  FWeakObjectPtr::operator=(&local_d8,param_1);
  *(undefined4 *)(lVar13 + 0x10) = local_d8;
  *(undefined4 *)(lVar13 + 0x14) = local_d4;
  *(int *)(lVar13 + 0x18) = param_3;
  lVar13 = *plVar10;
  lVar9 = plVar10[2];
  lVar7 = plVar10[1];
  lVar8 = *(longlong *)(lVar13 + 0x20);
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 0x48) = *(int *)(lVar8 + 0x48) + 1;
    UNLOCK();
  }
  local_d0 = lVar8;
  FUN_14305c3b0(lVar13,lVar7,(int)lVar9,1);
  plVar10 = (longlong *)(puVar6 + 0x24);
  if (plVar10 == &local_d0) {
    if (lVar8 != 0) {
      LOCK();
      piVar1 = (int *)(lVar8 + 0x48);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      lVar13 = local_d0;
      goto joined_r0x00014303e38e;
    }
  }
  else {
    lVar13 = *plVar10;
    *plVar10 = lVar8;
    if (lVar13 != 0) {
      LOCK();
      piVar1 = (int *)(lVar13 + 0x48);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
joined_r0x00014303e38e:
      if (iVar3 == 1) {
        FGraphEvent::Recycle(lVar13);
      }
    }
  }
  local_58 = 1;
  local_60 = (longlong *)0x0;
  TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(local_80,0);
  plVar12 = local_80;
  if (local_60 != (longlong *)0x0) {
    plVar12 = local_60;
  }
  lVar13 = *plVar10;
  *plVar12 = lVar13;
  if (lVar13 != 0) {
    LOCK();
    *(int *)(lVar13 + 0x48) = *(int *)(lVar13 + 0x48) + 1;
    UNLOCK();
  }
  plVar10 = (longlong *)FUN_1430422e0(local_98,local_80,2);
  lVar13 = *plVar10;
  FWeakObjectPtr::operator=(&local_c8,param_1);
  *(undefined4 *)(lVar13 + 0x10) = local_c8;
  *(undefined4 *)(lVar13 + 0x14) = local_c4;
  *(int *)(lVar13 + 0x18) = param_3;
  lVar13 = *plVar10;
  lVar8 = plVar10[2];
  lVar7 = plVar10[1];
  local_c0 = *(longlong *)(lVar13 + 0x20);
  piVar1 = (int *)(local_c0 + 0x48);
  if (local_c0 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_e0 = local_c0;
  FUN_14305c140(lVar13,lVar7,(int)lVar8,1);
  lVar13 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    lVar13 = local_e0;
  }
  puVar11 = (undefined8 *)FTickFunction::GetCompletionHandle(puVar6 + 0xc,&local_b8);
  FGraphEvent::DontCompleteUntil(*puVar11,&local_c0);
  if (local_b8 != 0) {
    LOCK();
    piVar2 = (int *)(local_b8 + 0x48);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    lVar13 = local_e0;
    if (iVar3 == 1) {
      FGraphEvent::Recycle();
      lVar13 = local_e0;
    }
  }
  if (lVar13 != 0) {
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FGraphEvent::Recycle(local_e0);
    }
  }
  plVar10 = local_80;
  iVar3 = (int)local_58;
  if (local_60 != (longlong *)0x0) {
    plVar10 = local_60;
  }
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar10 != 0) {
      LOCK();
      piVar1 = (int *)(*plVar10 + 0x48);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        FGraphEvent::Recycle();
      }
    }
    plVar10 = plVar10 + 1;
  }
  if (local_60 != (longlong *)0x0) {
    FMemory::Free();
  }
LAB_14303e4ea:
  *(undefined4 *)(param_1 + 0x468) = uVar5;
  return;
}



// FUNCTION 14303e540 FUN_14303e540 body=80 status=ok
// SIG undefined FUN_14303e540(void)

void FUN_14303e540(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 800);
    *(longlong *)(lVar1 + 800) = param_1;
    FUN_1430af1c0(*(undefined8 *)(param_1 + 0xa8),param_1);
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 800) = uVar2;
  }
  return;
}



// FUNCTION 14303e590 FUN_14303e590 body=184 status=ok
// SIG undefined FUN_14303e590(void)

void FUN_14303e590(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  FUN_1422235f0();
  uVar3 = 0;
  uVar5 = uVar3;
  uVar6 = uVar3;
  if (0 < *(int *)(param_1 + 0x5a8)) {
    do {
      lVar2 = *(longlong *)(param_1 + 0x5a0);
      puVar1 = *(undefined8 **)(uVar6 + lVar2);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
        lVar2 = *(longlong *)(param_1 + 0x5a0);
      }
      *(undefined8 *)(uVar6 + lVar2) = 0;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar6 = uVar6 + 0x18;
    } while ((int)uVar4 < *(int *)(param_1 + 0x5a8));
  }
  uVar5 = uVar3;
  if (0 < *(int *)(param_1 + 0x5b8)) {
    do {
      lVar2 = *(longlong *)(param_1 + 0x5b0);
      puVar1 = *(undefined8 **)(uVar5 + lVar2);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
        lVar2 = *(longlong *)(param_1 + 0x5b0);
      }
      *(undefined8 *)(uVar5 + lVar2) = 0;
      uVar4 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar4;
      uVar5 = uVar5 + 8;
    } while ((int)uVar4 < *(int *)(param_1 + 0x5b8));
  }
  return;
}



// FUNCTION 14303e650 FUN_14303e650 body=111 status=ok
// SIG undefined FUN_14303e650(void)

void FUN_14303e650(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_14306c180();
  FUN_14223c460(param_1,0);
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 != 0) {
    lVar3 = FUN_1429f11d0();
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
      FUN_1423974f0(lVar1,0);
      return;
    }
  }
  return;
}



// FUNCTION 14303e6c0 FUN_14303e6c0 body=101 status=ok
// SIG undefined FUN_14303e6c0(void)

void FUN_14303e6c0(longlong *param_1)

{
  undefined1 local_res8 [8];
  longlong local_res10;
  longlong *local_res18 [2];
  longlong *local_18;
  longlong **local_10;
  
  FUN_142223710();
  if ((char)param_1[0x25] != '\x03') {
    local_res18[0] = param_1;
    local_res10 = (**(code **)(*param_1 + 0x148))(param_1);
    if (local_res10 != 0) {
      local_18 = &local_res10;
      local_10 = local_res18;
      FUN_1405c0510(&DAT_14678c6a0,local_res8,&local_18,0);
    }
  }
  return;
}



// FUNCTION 14303e730 FUN_14303e730 body=125 status=ok
// SIG undefined FUN_14303e730(void)

void FUN_14303e730(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
  FUN_142330a70();
  lVar1 = *(longlong *)(param_1 + 0x118);
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x400) & 8) != 0)) {
    if (*(char *)(lVar1 + 0x128) == '\x03') {
      plVar2 = (longlong *)FUN_140a63ba0(lVar1);
      if ((plVar2 != (longlong *)0x0) && ((char)plVar2[0x25] == '\x03')) {
        uVar3 = (**(code **)(*plVar2 + 0x6e0))(plVar2);
        *(undefined4 *)(param_1 + 0x270) = uVar3;
      }
    }
    if (*(float *)(param_1 + 0x270) <= 0.0001 && *(float *)(param_1 + 0x270) != 0.0001) {
      *(byte *)(lVar1 + 0x400) = *(byte *)(lVar1 + 0x400) & 0xf7;
    }
  }
  return;
}



// FUNCTION 14303e7b0 FUN_14303e7b0 body=44 status=ok
// SIG undefined FUN_14303e7b0(void)

void FUN_14303e7b0(longlong param_1)

{
  FUN_142330a70();
  if (*(char *)(param_1 + 0x1e8) != '\0') {
    FUN_14305b430(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14303e810 FUN_14303e810 body=1292 status=ok
// SIG undefined FUN_14303e810(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14303e810(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_1f8 [32];
  float local_1d8;
  uint local_1d0;
  ulonglong local_1c8;
  undefined1 local_1c0;
  float local_1b8;
  float local_1b0;
  undefined1 local_1a8;
  undefined4 local_1a0;
  undefined1 local_198 [8];
  longlong local_190 [3];
  float local_178;
  undefined1 local_168 [12];
  float local_15c;
  undefined1 local_fc [36];
  undefined8 local_d8;
  float local_d0;
  undefined8 local_cc;
  float local_c4;
  undefined8 local_c0;
  float local_b8;
  undefined8 local_b4;
  float local_ac;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  if (((*(byte *)((longlong)param_1 + 0x1de) >> 1 & 1) == 0) ||
     (*(char *)(param_1[0x16] + 0xa9) != '\x01')) {
    lVar6 = param_1[0x16];
    iVar13 = *(int *)(lVar6 + 0x98);
    if (*(int *)(lVar6 + 0x98) < 3) {
      iVar13 = 2;
    }
    local_d0 = *(float *)((longlong)param_1 + 0x27c);
    local_cc._0_4_ = (float)param_1[0x50];
    uVar10 = 0;
    local_ac = *(float *)((longlong)param_1 + 0x2c4);
    uVar8 = *(undefined8 *)((longlong)param_1 + 0x274);
    uVar1 = *(undefined8 *)((longlong)param_1 + 700);
    local_b4._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    fVar16 = (float)uVar1 - (float)uVar8;
    local_190[0] = 0;
    local_d8._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
    local_190[1] = 0;
    fVar16 = SQRT((local_b4._4_4_ - local_d8._4_4_) * (local_b4._4_4_ - local_d8._4_4_) +
                  fVar16 * fVar16 + (local_ac - local_d0) * (local_ac - local_d0));
    local_cc._4_4_ = (float)((ulonglong)param_1[0x50] >> 0x20);
    fVar17 = fVar16 * *(float *)(lVar6 + 0x6c);
    fVar16 = fVar16 * *(float *)(lVar6 + 0x68);
    local_c0._0_4_ = (float)*(undefined8 *)((longlong)param_1 + 0x2d4);
    local_c4 = *(float *)(param_1 + 0x51) * fVar16 * 0.333 + local_d0;
    local_cc = CONCAT44(local_cc._4_4_ * fVar16 * 0.333 + local_d8._4_4_,
                        (float)local_cc * fVar16 * 0.333 + (float)uVar8);
    local_c0._4_4_ = (float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x2d4) >> 0x20);
    local_178 = *(float *)((longlong)param_1 + 0x2dc) * fVar17 * 0.333 + local_ac;
    local_c0 = CONCAT44(local_c0._4_4_ * fVar17 * 0.333 + local_b4._4_4_,
                        (float)local_c0 * fVar17 * 0.333 + (float)uVar1);
    local_d8 = uVar8;
    local_b8 = local_178;
    local_b4 = uVar1;
    FVector::EvaluateBezier(&local_d8,iVar13,local_190);
    iVar13 = iVar13 + -1;
    fVar16 = 1.0 / (float)iVar13;
    _guard_xfg_dispatch_icall_nop(local_168,0,0x90);
    local_15c = 1.0;
    iVar11 = (int)param_2[1] + -1;
    uVar5 = uVar10;
    if ((-1 < iVar11) &&
       (uVar5 = 0, (*(byte *)(*param_2 + -0x90 + (longlong)(int)param_2[1] * 0x90) & 1) != 0)) {
      FUN_140729f20(local_168);
      uVar5 = FWeakObjectPtr::Get(local_fc);
    }
    if (0 < iVar13) {
      while( true ) {
        iVar9 = (int)uVar10;
        if (local_15c < (float)iVar9 * fVar16) break;
        fVar17 = *(float *)(param_1[0x16] + 0xd4);
        lVar6 = FRuntimeFloatCurve::GetRichCurve(param_1[0x16] + 0xe0);
        fVar15 = fVar17;
        if (lVar6 != 0) {
          plVar7 = (longlong *)FRuntimeFloatCurve::GetRichCurve(param_1[0x16] + 0xe0);
          iVar4 = (**(code **)(*plVar7 + 8))(plVar7);
          if (0 < iVar4) {
            uVar8 = FRuntimeFloatCurve::GetRichCurve(param_1[0x16] + 0xe0);
            fVar15 = (float)FRichCurve::Eval(uVar8,(float)(iVar9 + 1) * fVar16,0x3f800000);
            if ((*(byte *)(param_1[0x16] + 0x158) & 1) != 0) {
              fVar15 = fVar17 * fVar15;
            }
          }
        }
        uVar12 = iVar9 + 1;
        local_1a0 = 0;
        local_1a8 = 0;
        local_1c0 = 0;
        local_1d0 = (uint)*(byte *)(param_1[0x16] + 0xd8);
        local_1d8 = fVar15;
        local_1c8 = uVar5;
        local_1b8 = (float)iVar9 * fVar16;
        local_1b0 = fVar16;
        cVar3 = (**(code **)(*param_1 + 0x330))
                          (param_1,param_2,local_190[0] + (longlong)iVar9 * 0xc,
                           local_190[0] + (longlong)(int)uVar12 * 0xc);
        if ((cVar3 != '\0') || (uVar10 = (ulonglong)uVar12, iVar13 <= (int)uVar12)) break;
      }
    }
    iVar13 = (int)param_2[1];
    if ((iVar11 < iVar13) && (local_15c < 1.0)) {
      iVar9 = iVar13 + -1;
      lVar6 = (longlong)iVar9;
      if (iVar11 <= lVar6) {
        lVar14 = lVar6 * 0x90;
        lVar6 = (lVar6 - iVar11) + 1;
        do {
          lVar2 = *param_2;
          if (local_15c < *(float *)(lVar2 + 0xc + lVar14)) {
            iVar11 = (int)param_2[1];
            iVar4 = (iVar11 - iVar9) + -1;
            if (iVar4 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar9 * 0x90 + lVar2),
                         (void *)((longlong)iVar13 * 0x90 + lVar2),(longlong)iVar4 * 0x90);
              iVar11 = (int)param_2[1];
            }
            *(int *)(param_2 + 1) = iVar11 + -1;
          }
          iVar9 = iVar9 + -1;
          iVar13 = iVar13 + -1;
          lVar14 = lVar14 + -0x90;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      local_198[0] = 0;
      FUN_1430382c0(param_1[0x9a],(longlong)(int)param_1[0x9b],0,local_198);
    }
    if (local_190[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14303ed20 FUN_14303ed20 body=2621 status=ok
// SIG undefined FUN_14303ed20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14303ed20(longlong *param_1,longlong *param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  byte *_Dst;
  void *pvVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  uint local_120;
  undefined8 local_118;
  undefined1 local_110;
  float local_108;
  float local_100;
  undefined1 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  float local_e0;
  longlong local_d8 [2];
  undefined8 local_c8;
  float local_c0;
  undefined8 local_bc;
  float local_b4;
  undefined8 local_b0;
  float local_a8;
  undefined8 local_a4;
  float local_9c;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  bVar9 = *(byte *)((longlong)param_1 + 0x1de) >> 1 & 1;
  lVar7 = (**(code **)(*param_1 + 0x148))();
  if (((*(float *)(lVar7 + 0x790) < *(float *)(param_1 + 0x42)) && (bVar9 != 0)) &&
     ((*(byte *)(param_1 + 0x3d) & 1) == 0)) {
    iVar6 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
      TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
    }
    lVar7 = (longlong)iVar6 * 0x90 + *param_2;
    FUN_140729f20(lVar7,param_1 + 0x65);
    uVar2 = *(undefined8 *)((longlong)param_1 + 700);
    uVar3 = *(undefined4 *)((longlong)param_1 + 0x2c4);
    *(undefined8 *)(lVar7 + 0x20) = uVar2;
    *(undefined8 *)(lVar7 + 0x14) = uVar2;
    *(undefined4 *)(lVar7 + 0x28) = uVar3;
    *(undefined4 *)(lVar7 + 0x1c) = uVar3;
    fVar16 = *(float *)((longlong)param_1 + 0x274) - *(float *)((longlong)param_1 + 700);
    fVar17 = *(float *)(param_1 + 0x4f) - *(float *)(param_1 + 0x58);
    local_e0 = *(float *)((longlong)param_1 + 0x27c) - *(float *)((longlong)param_1 + 0x2c4);
    fVar13 = fVar17 * fVar17 + fVar16 * fVar16 + local_e0 * local_e0;
    if (fVar13 == 1.0) {
      local_e8 = CONCAT44(fVar17,fVar16);
    }
    else {
      if (1e-08 <= fVar13) {
        auVar15 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
        fVar14 = auVar15._0_4_;
        fVar14 = fVar14 + fVar14 * (0.5 - fVar13 * 0.5 * fVar14 * fVar14);
        fVar14 = fVar14 + fVar14 * (0.5 - fVar13 * 0.5 * fVar14 * fVar14);
        fVar16 = fVar14 * fVar16;
        local_e0 = fVar14 * local_e0;
        fVar14 = fVar14 * fVar17;
      }
      else {
        local_e0 = DAT_1468b5d98;
        fVar14 = DAT_1468b5d94;
        fVar16 = DAT_1468b5d90;
      }
      local_e8 = CONCAT44(fVar14,fVar16);
    }
    *(undefined8 *)(lVar7 + 0x38) = local_e8;
    *(undefined8 *)(lVar7 + 0x2c) = local_e8;
    *(float *)(lVar7 + 0x40) = local_e0;
    *(float *)(lVar7 + 0x34) = local_e0;
    *(undefined4 *)(lVar7 + 0xc) = 0x3f800000;
    return;
  }
  cVar5 = (**(code **)(*param_1 + 0x318))(param_1);
  if ((bVar9 == 0) || (*(char *)(param_1[0x16] + 0xa9) != '\x01')) {
    lVar7 = param_1[0x16];
    if (cVar5 == '\0') {
      pfVar1 = (float *)((longlong)param_1 + 700);
      local_f0 = 0;
      local_f8 = 0;
      local_100 = 1.0;
      local_108 = 0.0;
      local_128 = *(undefined4 *)(lVar7 + 0x90);
      local_110 = 0;
      local_118 = 0;
      local_120 = (uint)*(byte *)(lVar7 + 0x8d);
      cVar5 = (**(code **)(*param_1 + 0x330))(param_1,param_2,(longlong)param_1 + 0x25c,pfVar1);
      if (cVar5 != '\0') goto LAB_14303f6fb;
      lVar7 = param_2[1];
      iVar6 = (int)lVar7 + 1;
      *(int *)(param_2 + 1) = iVar6;
      if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
        TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(param_2);
      }
      pvVar10 = (void *)((longlong)(int)lVar7 * 0x90 + *param_2);
      _guard_xfg_dispatch_icall_nop(pvVar10,0,0x90);
      *(undefined4 *)((longlong)pvVar10 + 0xc) = 0x3f800000;
      uVar2 = *(undefined8 *)pfVar1;
      uVar3 = *(undefined4 *)((longlong)param_1 + 0x2c4);
      *(undefined8 *)((longlong)pvVar10 + 0x20) = uVar2;
      *(undefined8 *)((longlong)pvVar10 + 0x14) = uVar2;
      *(undefined4 *)((longlong)pvVar10 + 0x28) = uVar3;
      *(undefined4 *)((longlong)pvVar10 + 0x1c) = uVar3;
      fVar13 = *(float *)((longlong)param_1 + 0x25c) - *pfVar1;
      fVar17 = *(float *)(param_1 + 0x4c) - *(float *)(param_1 + 0x58);
      local_e0 = *(float *)((longlong)param_1 + 0x264) - *(float *)((longlong)param_1 + 0x2c4);
      fVar16 = fVar13 * fVar13 + fVar17 * fVar17 + local_e0 * local_e0;
      if (fVar16 == 1.0) {
LAB_14303f6b5:
        local_e8 = CONCAT44(fVar17,fVar13);
      }
      else {
        if (1e-08 <= fVar16) {
          auVar15 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
          fVar14 = auVar15._0_4_;
          fVar14 = fVar14 + fVar14 * (0.5 - fVar16 * 0.5 * fVar14 * fVar14);
          fVar14 = fVar14 + fVar14 * (0.5 - fVar16 * 0.5 * fVar14 * fVar14);
          fVar13 = fVar13 * fVar14;
          fVar17 = fVar17 * fVar14;
          local_e0 = local_e0 * fVar14;
          goto LAB_14303f6b5;
        }
        local_e0 = DAT_1468b5d98;
        local_e8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      }
      *(undefined8 *)((longlong)pvVar10 + 0x38) = local_e8;
      *(undefined8 *)((longlong)pvVar10 + 0x2c) = local_e8;
      *(float *)((longlong)pvVar10 + 0x40) = local_e0;
      *(float *)((longlong)pvVar10 + 0x34) = local_e0;
      goto LAB_14303f6fb;
    }
    iVar6 = *(int *)(lVar7 + 0x98);
    if (*(int *)(lVar7 + 0x98) < 3) {
      iVar6 = 2;
    }
    iVar11 = 0;
    local_d8[0] = 0;
    local_d8[1] = 0;
    if (bVar9 == 0) {
      local_c8 = *(undefined8 *)((longlong)param_1 + 0x25c);
      local_c0 = *(float *)((longlong)param_1 + 0x264);
      lVar8 = param_1[0x4d];
      fVar16 = *(float *)(param_1 + 0x4e);
    }
    else {
      local_c8 = *(undefined8 *)((longlong)param_1 + 0x274);
      local_c0 = *(float *)((longlong)param_1 + 0x27c);
      lVar8 = param_1[0x50];
      fVar16 = *(float *)(param_1 + 0x51);
    }
    uVar2 = *(undefined8 *)((longlong)param_1 + 700);
    fVar13 = (float)uVar2 - (float)local_c8;
    local_bc._4_4_ = (float)((ulonglong)lVar8 >> 0x20);
    local_9c = *(float *)((longlong)param_1 + 0x2c4);
    local_a4._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
    local_bc._0_4_ = (float)lVar8;
    fVar13 = SQRT((local_a4._4_4_ - local_c8._4_4_) * (local_a4._4_4_ - local_c8._4_4_) +
                  fVar13 * fVar13 + (local_9c - local_c0) * (local_9c - local_c0));
    fVar17 = fVar13 * *(float *)(lVar7 + 0x6c);
    fVar13 = fVar13 * *(float *)(lVar7 + 0x68);
    local_b4 = fVar16 * fVar13 * 0.333 + local_c0;
    local_e0 = *(float *)((longlong)param_1 + 0x2dc) * fVar17 * 0.333 + local_9c;
    local_b0._4_4_ = (float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x2d4) >> 0x20);
    local_bc = CONCAT44(local_bc._4_4_ * fVar13 * 0.333 + local_c8._4_4_,
                        (float)local_c8 + (float)local_bc * fVar13 * 0.333);
    local_b0._0_4_ = (float)*(undefined8 *)((longlong)param_1 + 0x2d4);
    local_b0 = CONCAT44(local_b0._4_4_ * fVar17 * 0.333 + local_a4._4_4_,
                        (float)uVar2 + (float)local_b0 * fVar17 * 0.333);
    local_a8 = local_e0;
    local_a4 = uVar2;
    FVector::EvaluateBezier(&local_c8,iVar6,local_d8);
    iVar6 = iVar6 + -1;
    if (0 < iVar6) {
      do {
        iVar12 = iVar11 + 1;
        lVar7 = param_1[0x16];
        local_f0 = 0;
        local_f8 = 0;
        local_108 = (float)iVar11 * (1.0 / (float)iVar6);
        local_128 = *(undefined4 *)(lVar7 + 0x90);
        local_110 = 0;
        local_118 = 0;
        local_120 = (uint)*(byte *)(lVar7 + 0x8d);
        local_100 = 1.0 / (float)iVar6;
        cVar5 = (**(code **)(*param_1 + 0x330))
                          (param_1,param_2,local_d8[0] + (longlong)iVar11 * 0xc,
                           local_d8[0] + (longlong)iVar12 * 0xc);
        if (cVar5 != '\0') goto LAB_14303f4e4;
        iVar11 = iVar12;
      } while (iVar12 < iVar6);
    }
    lVar7 = param_2[1];
    iVar6 = (int)lVar7 + 1;
    *(int *)(param_2 + 1) = iVar6;
    if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
      TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(param_2);
    }
    pvVar10 = (void *)((longlong)(int)lVar7 * 0x90 + *param_2);
    _guard_xfg_dispatch_icall_nop(pvVar10,0,0x90);
    *(undefined4 *)((longlong)pvVar10 + 0xc) = 0x3f800000;
    *(undefined8 *)((longlong)pvVar10 + 0x20) = local_a4;
    *(undefined8 *)((longlong)pvVar10 + 0x14) = local_a4;
    *(float *)((longlong)pvVar10 + 0x28) = local_9c;
    *(float *)((longlong)pvVar10 + 0x1c) = local_9c;
    fVar13 = (float)local_b0 - (float)local_a4;
    fVar17 = local_b0._4_4_ - local_a4._4_4_;
    local_e0 = local_a8 - local_9c;
    fVar16 = fVar13 * fVar13 + fVar17 * fVar17 + local_e0 * local_e0;
    if (fVar16 == 1.0) {
LAB_14303f4b7:
      local_e8 = CONCAT44(fVar17,fVar13);
    }
    else {
      if (1e-08 <= fVar16) {
        auVar15 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
        fVar14 = auVar15._0_4_;
        fVar14 = fVar14 + fVar14 * (0.5 - fVar16 * 0.5 * fVar14 * fVar14);
        fVar14 = fVar14 + fVar14 * (0.5 - fVar16 * 0.5 * fVar14 * fVar14);
        fVar13 = fVar13 * fVar14;
        fVar17 = fVar17 * fVar14;
        local_e0 = local_e0 * fVar14;
        goto LAB_14303f4b7;
      }
      local_e0 = DAT_1468b5d98;
      local_e8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    }
    *(undefined8 *)((longlong)pvVar10 + 0x38) = local_e8;
    *(undefined8 *)((longlong)pvVar10 + 0x2c) = local_e8;
    *(float *)((longlong)pvVar10 + 0x40) = local_e0;
    *(float *)((longlong)pvVar10 + 0x34) = local_e0;
LAB_14303f4e4:
    if (local_d8[0] != 0) {
      FMemory::Free();
    }
    goto LAB_14303f6fb;
  }
  lVar7 = param_2[1];
  iVar6 = (int)lVar7 + 1;
  *(int *)(param_2 + 1) = iVar6;
  if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
    TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(param_2);
  }
  _Dst = (byte *)((longlong)(int)lVar7 * 0x90 + *param_2);
  _guard_xfg_dispatch_icall_nop(_Dst,0,0x90);
  _Dst[0xc] = 0;
  _Dst[0xd] = 0;
  _Dst[0xe] = 0x80;
  _Dst[0xf] = 0x3f;
  uVar2 = *(undefined8 *)((longlong)param_1 + 700);
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x2c4);
  *(undefined8 *)(_Dst + 0x20) = uVar2;
  *(undefined8 *)(_Dst + 0x14) = uVar2;
  *(undefined4 *)(_Dst + 0x28) = uVar3;
  *(undefined4 *)(_Dst + 0x1c) = uVar3;
  local_e0 = -*(float *)((longlong)param_1 + 0x2dc);
  *(ulonglong *)(_Dst + 0x2c) = *(ulonglong *)((longlong)param_1 + 0x2d4) ^ 0x8000000080000000;
  *(float *)(_Dst + 0x34) = local_e0;
  if (param_1[0x23] == 0) {
    FWeakObjectPtr::operator=(&local_e8);
    *(undefined4 *)(_Dst + 0x6c) = (undefined4)local_e8;
    *(undefined4 *)(_Dst + 0x70) = local_e8._4_4_;
    FWeakObjectPtr::operator=(&local_e8,0);
    lVar7 = 0;
    *(undefined4 *)(_Dst + 0x74) = (undefined4)local_e8;
    *(undefined4 *)(_Dst + 0x78) = local_e8._4_4_;
    local_e8 = 0;
  }
  else {
    FWeakObjectPtr::operator=(_Dst + 0x6c);
    lVar7 = param_1[0x24];
    if (lVar7 == 0) {
LAB_14303f057:
      lVar7 = 0;
    }
    else {
      lVar8 = FUN_1429f11d0();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_14303f057;
    }
    FWeakObjectPtr::operator=(_Dst + 0x74,lVar7);
    lVar7 = param_1[0x5c];
  }
  *_Dst = *_Dst | 1;
  *(longlong *)(_Dst + 0x80) = lVar7;
  *(undefined8 *)(_Dst + 0x38) = *(undefined8 *)(_Dst + 0x2c);
  *(undefined4 *)(_Dst + 0x40) = *(undefined4 *)(_Dst + 0x34);
  _Dst[0xc] = 0;
  _Dst[0xd] = 0;
  _Dst[0xe] = 0x80;
  _Dst[0xf] = 0x3f;
LAB_14303f6fb:
  lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
  *(float *)(param_1 + 0x42) = *(float *)(lVar7 + 0x790) + *(float *)(param_1[0x16] + 0x94);
  return;
}



// FUNCTION 14303f780 FUN_14303f780 body=133 status=ok
// SIG undefined FUN_14303f780(void)

ulonglong FUN_14303f780(longlong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  longlong lVar2;
  byte bVar3;
  
  if ((*(uint *)(param_1 + 0xe4) & 0x4000) != 0) {
    bVar3 = *(byte *)(*(longlong *)(param_1 + 0xa8) + 0x1d4) >> 1 & 1;
    if (bVar3 != 0) {
      uVar1 = FWeakObjectPtr::Get(param_3 + 0x74);
      lVar2 = FUN_142d46e70(param_2,uVar1,*(undefined8 *)(param_3 + 0x80));
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x48) & 0x10) == 0)) {
        bVar3 = 0;
      }
    }
    return (ulonglong)bVar3;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14303f810 FUN_14303f810 body=293 status=ok
// SIG undefined FUN_14303f810(void)

undefined8 FUN_14303f810(longlong param_1,longlong *param_2,longlong *param_3)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  
  if (((*(byte *)(param_1 + 0xe4) & 0x10) != 0) ||
     ((bVar1 = *(byte *)(*(longlong *)(param_1 + 0xa8) + 0x2c8), (bVar1 & 4) == 0 &&
      ((bVar1 & 1) == 0)))) {
    return 0;
  }
  lVar5 = FUN_142d29780(param_2);
  bVar7 = lVar5 != 0;
  if ((lVar5 == 0) && (param_3 != (longlong *)0x0)) {
    lVar5 = FUN_143036a00();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      iVar4 = (**(code **)(*param_3 + 0x4f8))(param_3);
      bVar7 = iVar4 != 0;
      if ((iVar4 != 0) && ((char)param_3[0x16d] != '\0')) {
        return 0;
      }
    }
  }
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0xa8) + 0x2c8);
  if (((bVar1 & 4) == 0) || (bVar7)) {
    if ((bVar1 & 1) == 0) {
      return 0;
    }
    if (!bVar7) {
      return 0;
    }
    if ((bVar1 & 2) == 0) {
      uVar6 = UCircularThrobber::GetPrivateStaticClass();
      lVar5 = (**(code **)(*param_2 + 0x628))(param_2,uVar6);
      if ((lVar5 != 0) &&
         (cVar3 = FUN_142dee8a0(lVar5,*(undefined8 *)(param_1 + 0x140)), cVar3 != '\0')) {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 14303f940 FUN_14303f940 body=138 status=ok
// SIG undefined FUN_14303f940(void)

undefined8 FUN_14303f940(longlong param_1,longlong param_2,longlong *param_3,undefined1 *param_4)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  
  *param_4 = 0;
  if ((param_2 != 0) && ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 0x1a9) & 0x20) == 0)) {
    lVar3 = FUN_142d29780(param_2);
    if (lVar3 != 0) {
      return 0;
    }
    if (param_3 != (longlong *)0x0) {
      lVar3 = UGGameModeButtonListItemContent::GetPrivateStaticClass();
      if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (iVar2 = (**(code **)(*param_3 + 0x4f8))(param_3), iVar2 != 0)) {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 14303fa30 FUN_14303fa30 body=150 status=ok
// SIG undefined FUN_14303fa30(void)

undefined1 FUN_14303fa30(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  
  if ((param_3 != (longlong *)0x0) && (*(char *)(param_1 + 0xa9) != '\0')) {
    uVar1 = FUN_142e79d90();
    lVar3 = (**(code **)(*param_3 + 0x628))(param_3,uVar1);
    if ((lVar3 != 0) &&
       (cVar2 = FUN_142dd3a70(lVar3,*(undefined8 *)(param_2 + 0x140)), cVar2 != '\0')) {
      if (((*(byte *)(param_1 + 0xaa) & 4) == 0) &&
         (cVar2 = FUN_142dee8a0(lVar3,*(undefined8 *)(param_2 + 0x140)), cVar2 != '\0')) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14303fad0 FUN_14303fad0 body=144 status=ok
// SIG undefined FUN_14303fad0(void)

bool FUN_14303fad0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_142d29780(param_2);
  if ((lVar3 == 0) && (param_3 != (longlong *)0x0)) {
    lVar4 = UGGameModeButtonListItemContent::GetPrivateStaticClass();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar2 = (**(code **)(*param_3 + 0x4f8))(param_3);
      return iVar2 != 0;
    }
  }
  return lVar3 != 0;
}



// FUNCTION 14303fb60 FUN_14303fb60 body=27 status=ok
// SIG undefined FUN_14303fb60(void)

undefined1 FUN_14303fb60(longlong param_1)

{
  if (((*(byte *)(param_1 + 0x2d8) & 2) != 0) && (*(float *)(param_1 + 0x2e4) <= 0.0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 14303fb80 FUN_14303fb80 body=181 status=ok
// SIG undefined FUN_14303fb80(void)

void FUN_14303fb80(longlong param_1)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FTickFunction::RemovePrerequisite(*(longlong *)(param_1 + 0xb8) + 0x30,param_1,param_1 + 0x58);
    FUN_142600fa0(*(undefined8 *)(param_1 + 0xb8));
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FTickFunction::RemovePrerequisite(*(longlong *)(param_1 + 0xc0) + 0x30,param_1,param_1 + 0x58);
    FUN_142600fa0(*(undefined8 *)(param_1 + 0xc0));
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  FUN_14305a2e0(param_1);
  local_28 = 0;
  local_20 = 0;
  uStack_18 = 2;
  FUN_1407af220(param_1 + 0x28,&local_28);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&local_28);
  return;
}



// FUNCTION 14303fc40 FUN_14303fc40 body=85 status=ok
// SIG undefined FUN_14303fc40(void)

void FUN_14303fc40(longlong *param_1,ushort param_2,char param_3)

{
  longlong lVar1;
  
  *(ushort *)(param_1 + 0x1d) = *(ushort *)(param_1 + 0x1d) & ~param_2;
  if ((param_3 != '\0') && ((param_2 & *(ushort *)(param_1 + 0x30)) != 0)) {
    if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
      lVar1 = param_1[4];
    }
    else {
      lVar1 = 0;
    }
    if (*(char *)(lVar1 + 0x128) == '\x03') {
      *(ushort *)(param_1 + 0x30) = *(ushort *)(param_1 + 0x30) & ~param_2;
                    /* WARNING: Could not recover jumptable at 0x00014303fc8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x260))();
      return;
    }
  }
  return;
}



// FUNCTION 14303fca0 FUN_14303fca0 body=180 status=ok
// SIG undefined FUN_14303fca0(void)

void FUN_14303fca0(longlong *param_1)

{
  longlong lVar1;
  uint uStack_14;
  
  *(ushort *)((longlong)param_1 + 0x1de) = *(ushort *)((longlong)param_1 + 0x1de) & 0xfffd;
  lVar1 = 0;
  if ((*(ushort *)((longlong)param_1 + 0x15c) & 2) != 0) {
    if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
      lVar1 = param_1[4];
    }
    if (*(char *)(lVar1 + 0x128) == '\x03') {
      *(ushort *)((longlong)param_1 + 0x15c) = *(ushort *)((longlong)param_1 + 0x15c) & 0xfffd;
      (**(code **)(*param_1 + 0x260))(param_1);
    }
  }
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x27] = (ulonglong)uStack_14 << 0x20;
  *(undefined4 *)(param_1 + 0x43) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014303fd4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x260))(param_1);
  return;
}



// FUNCTION 14303fd80 FUN_14303fd80 body=753 status=ok
// SIG undefined FUN_14303fd80(void)

float * FUN_14303fd80(longlong param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float local_78;
  
  FUN_1423869c0();
  fVar8 = *(float *)(param_1 + 0x268);
  if ((fVar8 != 0.0) &&
     ((*(int *)(param_1 + 0x294) < *(int *)(param_1 + 0x28c) || (*(int *)(param_1 + 0x28c) == 0))))
  {
    fVar1 = param_3[2];
    fVar2 = *param_3;
    fVar3 = param_3[1];
    fVar5 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
    if (fVar8 <= 0.0) {
      fVar6 = *(float *)(param_1 + 0x26c);
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      fVar6 = (SQRT(fVar5) - fVar6) * (-1.0 / param_4);
      if (fVar6 <= fVar8) {
        fVar6 = fVar8;
      }
      if (fVar5 == 1.0) {
        local_78 = (float)*(undefined8 *)param_3;
        fVar4 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20);
        fVar8 = param_3[2];
      }
      else {
        fVar4 = DAT_1468b5d94;
        fVar8 = DAT_1468b5d98;
        local_78 = DAT_1468b5d90;
        if (1e-08 <= fVar5) {
          auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
          fVar8 = auVar7._0_4_;
          fVar8 = fVar8 + fVar8 * (0.5 - fVar5 * 0.5 * fVar8 * fVar8);
          fVar8 = fVar8 + fVar8 * (0.5 - fVar5 * 0.5 * fVar8 * fVar8);
          local_78 = fVar2 * fVar8;
          fVar4 = fVar3 * fVar8;
          fVar8 = fVar1 * fVar8;
        }
      }
      local_78 = local_78 * fVar6;
      fVar4 = fVar4 * fVar6;
      fVar8 = fVar8 * fVar6;
    }
    else if (fVar5 == 1.0) {
      local_78 = (float)*(undefined8 *)param_3;
      fVar4 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20) * fVar8;
      local_78 = local_78 * fVar8;
      fVar8 = param_3[2] * fVar8;
    }
    else if (1e-08 <= fVar5) {
      auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar6 = auVar7._0_4_;
      fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
      fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
      fVar4 = fVar3 * fVar6 * fVar8;
      local_78 = fVar2 * fVar6 * fVar8;
      fVar8 = fVar1 * fVar6 * fVar8;
    }
    else {
      local_78 = DAT_1468b5d90 * fVar8;
      fVar4 = DAT_1468b5d94 * fVar8;
      fVar8 = DAT_1468b5d98 * fVar8;
    }
    param_2[2] = fVar8 + param_2[2];
    *param_2 = local_78 + *param_2;
    param_2[1] = fVar4 + param_2[1];
  }
  return param_2;
}



// FUNCTION 143040080 FUN_143040080 body=522 status=ok
// SIG undefined FUN_143040080(void)

undefined8 *
FUN_143040080(longlong param_1,undefined8 *param_2,longlong param_3,undefined4 param_4,
             undefined8 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (*(char *)(param_1 + 0x290) == '\0') {
    FUN_142386a80(param_1,param_2,param_3,param_4,param_5);
    return param_2;
  }
  fVar5 = *(float *)(param_1 + 0x194);
  fVar6 = *(float *)(param_1 + 0x18c);
  fVar8 = *(float *)(param_1 + 400);
  fVar9 = SQRT(fVar6 * fVar6 + fVar8 * fVar8 + fVar5 * fVar5);
  fVar2 = *(float *)(param_3 + 0x2c) * fVar6 + *(float *)(param_3 + 0x30) * fVar8 +
          *(float *)(param_3 + 0x34) * fVar5;
  fVar6 = fVar6 - *(float *)(param_3 + 0x2c) * fVar2;
  fVar8 = fVar8 - *(float *)(param_3 + 0x30) * fVar2;
  fVar5 = fVar5 - *(float *)(param_3 + 0x34) * fVar2;
  fVar1 = fVar8 * fVar8 + fVar6 * fVar6 + fVar5 * fVar5;
  fVar2 = fVar5;
  fVar7 = fVar6;
  fVar3 = fVar8;
  if ((fVar1 != 1.0) &&
     (fVar2 = DAT_1468b5d98, fVar7 = DAT_1468b5d90, fVar3 = DAT_1468b5d94, 1e-08 <= fVar1)) {
    auVar4 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
    fVar3 = auVar4._0_4_;
    fVar3 = fVar3 + fVar3 * (0.5 - fVar1 * 0.5 * fVar3 * fVar3);
    fVar3 = fVar3 + fVar3 * (0.5 - fVar1 * 0.5 * fVar3 * fVar3);
    fVar2 = fVar5 * fVar3;
    fVar7 = fVar6 * fVar3;
    fVar3 = fVar8 * fVar3;
  }
  fVar6 = 1.0 - *(float *)(param_1 + 0x1e8);
  fVar5 = 0.0;
  if ((0.0 <= fVar6) && (fVar5 = fVar6, 1.0 <= fVar6)) {
    fVar5 = 1.0;
  }
  *(uint *)(param_1 + 0x1c8) = *(uint *)(param_1 + 0x1c8) | 0x40;
  *param_2 = CONCAT44(fVar3 * fVar9 * fVar5,fVar7 * fVar9 * fVar5);
  *(float *)(param_2 + 1) = fVar2 * fVar9 * fVar5;
  return param_2;
}



// FUNCTION 143040290 FUN_143040290 body=68 status=ok
// SIG undefined FUN_143040290(void)

void FUN_143040290(longlong param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x200) = 0;
  if (((*(byte *)(param_1 + 0x1de) >> 4 & 1) != 0) &&
     (*(longlong **)(param_1 + 0x140) != (longlong *)0x0)) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x6e0))();
    *(undefined4 *)(param_1 + 0x200) = uVar1;
  }
  return;
}



// FUNCTION 1430402e0 FUN_1430402e0 body=94 status=ok
// SIG undefined FUN_1430402e0(void)

void FUN_1430402e0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa8) + 0x220);
  if (plVar1 != (longlong *)0x0) {
    plVar2 = (longlong *)plVar1[0x1f];
    if (plVar2 == (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      plVar2 = (longlong *)plVar1[0x1f];
      if (plVar2 == (longlong *)0x0) {
        return;
      }
    }
    (**(code **)(*plVar2 + 0x278))(plVar2,param_2,0);
  }
  return;
}



// FUNCTION 143040340 FUN_143040340 body=461 status=ok
// SIG undefined FUN_143040340(void)

longlong FUN_143040340(longlong *param_1,ulonglong *param_2)

{
  float fVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if ((char)param_1[0x25] != '\x03') {
    return 0;
  }
  lVar3 = (**(code **)(*param_1 + 0x148))();
  uVar9 = 0;
  fVar1 = *(float *)(lVar3 + 0x790);
  if (0 < (int)param_1[0x8e]) {
    uVar7 = uVar9;
    uVar8 = uVar9;
    do {
      lVar3 = *(longlong *)(uVar8 + param_1[0x8d]);
      iVar6 = (int)uVar7;
      if (((lVar3 != 0) && (*(char *)(lVar3 + 0x48) != '\0')) && (*(float *)(lVar3 + 0x4c) <= fVar1)
         ) {
        uVar7 = *(ulonglong *)(lVar3 + 0x10);
        uVar5 = uVar9;
        if (*param_2 != 0) {
          uVar4 = UScrollBar::GetPrivateStaticClass();
          for (uVar2 = *param_2; (uVar5 = uVar9, uVar2 != 0 && (uVar5 = *param_2, uVar2 != uVar4));
              uVar2 = *(ulonglong *)(uVar2 + 0x30)) {
          }
        }
        if (uVar7 == uVar5) {
          if (iVar6 != -1) goto LAB_1430404ce;
          break;
        }
      }
      uVar7 = (ulonglong)(iVar6 + 1U);
      uVar8 = uVar8 + 8;
    } while ((int)(iVar6 + 1U) < (int)param_1[0x8e]);
  }
  uVar7 = uVar9;
  if (*param_2 != 0) {
    uVar5 = UScrollBar::GetPrivateStaticClass();
    for (uVar8 = *param_2; (uVar7 = uVar9, uVar8 != 0 && (uVar7 = *param_2, uVar8 != uVar5));
        uVar8 = *(ulonglong *)(uVar8 + 0x30)) {
    }
  }
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  lVar3 = FUN_1417985e0(uVar7,param_1,0,0,0,0,0,0,0);
  *(undefined1 *)(lVar3 + 0x48) = 1;
  *(int *)(param_1 + 0x94) = (int)param_1[0x94] + 1;
  *(int *)(lVar3 + 0x40) = (int)param_1[0x94];
  iVar6 = (int)param_1[0x8e];
  *(int *)(param_1 + 0x8e) = iVar6 + 1;
  if (*(int *)((longlong)param_1 + 0x474) < iVar6 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x8d,iVar6);
  }
  *(longlong *)(param_1[0x8d] + (longlong)iVar6 * 8) = lVar3;
LAB_1430404ce:
  lVar3 = *(longlong *)(param_1[0x8d] + (longlong)iVar6 * 8);
  if (lVar3 != 0) {
    *(undefined1 *)(lVar3 + 0x48) = 0;
  }
  return lVar3;
}



// FUNCTION 143040510 FUN_143040510 body=201 status=ok
// SIG undefined FUN_143040510(void)

void FUN_143040510(longlong param_1)

{
  char cVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\0') {
    *(ulonglong *)(param_1 + 0x10) = (ulonglong)uStack_14 << 0x20;
    *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_c,uStack_10);
  }
  else {
    if (cVar1 == '\x01') {
      *(undefined4 *)(param_1 + 0x10) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 4);
      *(undefined4 *)(param_1 + 0x18) = uStack_10;
      *(undefined4 *)(param_1 + 0x1c) = uStack_c;
      return;
    }
    if (cVar1 == '\x02') {
      *(undefined4 *)(param_1 + 0x10) = 3;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 4);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(param_1 + 0x1c) = uStack_c;
      return;
    }
    if (cVar1 == '\x03') {
      *(undefined4 *)(param_1 + 0x10) = 1;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 4);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0xc);
      return;
    }
  }
  return;
}



// FUNCTION 1430405e0 FUN_1430405e0 body=109 status=ok
// SIG undefined FUN_1430405e0(void)

void FUN_1430405e0(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)operator_new(0xb8);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_145a5f3a0;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar4 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar3 = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar4 + 0x14) = uVar1;
    *(undefined4 *)(puVar4 + 3) = uVar2;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar3;
    FUN_140729f20(puVar4 + 4,param_1 + 0x20);
    puVar4[0x16] = *(undefined8 *)(param_1 + 0xb0);
    *puVar4 = &PTR_FUN_145a5f3e8;
  }
  return;
}



// FUNCTION 143040650 FUN_143040650 body=168 status=ok
// SIG undefined FUN_143040650(void)

undefined8 * FUN_143040650(longlong *param_1,undefined8 *param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  lVar1 = operator_new(0x140);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140a25850(lVar1);
  }
  puVar3 = (undefined8 *)operator_new(0x18);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    puVar3[2] = uVar2;
  }
  *param_2 = uVar2;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,uVar2,uVar2);
  if (param_3 != '\0') {
    (**(code **)(*param_1 + 0x2c8))(param_1,*param_2);
  }
  return param_2;
}



// FUNCTION 143040700 FUN_143040700 body=235 status=ok
// SIG undefined FUN_143040700(void)

void FUN_143040700(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 == 0) {
    return;
  }
  uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar2 = FUN_14304c8c0(uVar3);
  if (lVar2 == 0) {
    return;
  }
  plVar1 = (longlong *)param_2[1];
  if ((plVar1 != (longlong *)0x0) &&
     ((plVar1[0x1f] != 0 || ((**(code **)(*plVar1 + 0x368))(plVar1), plVar1[0x1f] != 0)))) {
    plVar1 = (longlong *)param_2[1];
    if (plVar1 == (longlong *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = plVar1[0x1f];
      if (lVar4 == 0) {
        (**(code **)(*plVar1 + 0x368))(plVar1);
        lVar4 = plVar1[0x1f];
      }
    }
    lVar2 = FUN_143040340(lVar2,lVar4 + 0x28);
    if (lVar2 != 0) {
      (**(code **)(*param_2 + 8))(param_2,lVar2);
      goto LAB_1430407d1;
    }
  }
  lVar2 = 0;
LAB_1430407d1:
  FWeakObjectPtr::operator=(local_res8,lVar2);
  return;
}



// FUNCTION 1430407f0 FUN_1430407f0 body=441 status=ok
// SIG undefined FUN_1430407f0(void)

void FUN_1430407f0(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4,
                  char param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10,longlong param_11,undefined8 param_12,
                  undefined4 *param_13,undefined4 param_14,char param_15)

{
  longlong lVar1;
  longlong lVar2;
  undefined **local_148;
  longlong local_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  longlong lStack_120;
  longlong local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  uint local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined4 local_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_6c;
  longlong local_60;
  undefined1 local_30 [8];
  undefined8 local_28;
  
  if (param_1 != 0) {
    lVar1 = UMapBuildDataRegistry::GetPrivateStaticClass();
    lVar2 = param_1;
    do {
      if (lVar2 == lVar1) {
        if (*param_3 == 0) {
          return;
        }
        lVar2 = *param_3;
        if (param_2 != 0) {
          lVar2 = param_2;
        }
        if (lVar2 == 0) {
          return;
        }
        FUN_140aec950(&local_148);
        local_128 = param_3[2];
        lStack_120 = param_3[3];
        local_78 = param_6;
        local_d0 = param_7;
        local_a8 = param_10;
        local_138 = *param_3;
        lStack_130 = param_3[1];
        local_b8 = param_8;
        local_118 = param_3[4];
        local_b0 = param_9;
        local_110 = *param_4;
        uStack_108 = param_4[1];
        local_d8 = param_2;
        if (param_11 != 0) {
          local_d8 = param_11;
        }
        local_100 = param_4[2];
        uStack_f8 = param_4[3];
        local_f0 = param_4[4];
        if (param_5 != '\0') {
          local_e8 = local_e8 | 2;
        }
        if (param_15 != '\0') {
          local_e8 = local_e8 | 1;
        }
        local_80 = param_12;
        local_6c = param_14;
        local_a0 = *param_13;
        uStack_9c = param_13[1];
        uStack_98 = param_13[2];
        uStack_94 = param_13[3];
        local_90 = param_13[4];
        uStack_8c = param_13[5];
        uStack_88 = param_13[6];
        uStack_84 = param_13[7];
        local_140 = param_1;
        local_e0 = param_2;
        FUN_143040700(lVar2,&local_148);
        local_148 = &PTR_FUN_14422f7d8;
        FWeakObjectPtr::operator=(local_30,0);
        local_28 = 0;
        if (local_60 == 0) {
          return;
        }
        FMemory::Free();
        return;
      }
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1430409b0 FUN_1430409b0 body=97 status=ok
// SIG undefined FUN_1430409b0(void)

void FUN_1430409b0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = UMapBuildDataRegistry::GetPrivateStaticClass();
    lVar2 = *(longlong *)(param_1 + 8);
    lVar3 = lVar2;
    if (lVar2 != 0) {
      while (lVar3 != lVar1) {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        if (lVar3 == 0) {
          return;
        }
      }
      if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
        lVar2 = *(longlong *)(param_1 + 0x10);
        if (*(longlong *)(param_1 + 0x68) != 0) {
          lVar2 = *(longlong *)(param_1 + 0x68);
        }
        FUN_143040700(lVar2,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143040a20 FUN_143040a20 body=288 status=ok
// SIG undefined FUN_143040a20(void)

void FUN_143040a20(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 local_res8;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  
  if (((param_1 != (longlong *)0x0) && (lVar3 = (**(code **)(*param_1 + 0x148))(), lVar3 != 0)) &&
     (iVar2 = FUN_1428cf800(lVar3), iVar2 != 3)) {
    local_res8 = 0;
    if ((((*(longlong *)(param_2 + 0x130) == 0) ||
         (lVar4 = FWeakObjectPtr::Get((undefined4 *)(param_2 + 0x128)), lVar4 == 0)) ||
        (lVar4 = UObject::FindFunction(lVar4,*(undefined8 *)(param_2 + 0x130)), lVar4 == 0)) &&
       (lVar4 = *(longlong *)(param_2 + 0x38), lVar4 != 0)) {
      uVar5 = UDamageableInterface::GetPrivateStaticClass();
      plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar5);
      if (plVar6 != (longlong *)0x0) {
        FWeakObjectPtr::operator=(&local_28,0);
        local_20 = 0;
        cVar1 = (**(code **)(*plVar6 + 0xa8))(plVar6,&local_28);
        if (cVar1 != '\0') {
          *(undefined4 *)(param_2 + 0x128) = local_28;
          *(undefined4 *)(param_2 + 300) = local_24;
          *(undefined8 *)(param_2 + 0x130) = local_20;
        }
      }
    }
    lVar3 = FUN_14304ca20(lVar3);
    if (lVar3 != 0) {
      FUN_14303af10(lVar3,&local_res8,param_2);
    }
  }
  return;
}



// FUNCTION 143040b40 FUN_143040b40 body=685 status=ok
// SIG undefined FUN_143040b40(void)

void FUN_143040b40(longlong param_1,float *param_2,float *param_3,longlong param_4,longlong param_5,
                  undefined8 param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float local_1a8;
  undefined **local_198;
  longlong local_190;
  undefined8 local_188;
  float local_180;
  undefined8 local_17c;
  float local_174;
  undefined4 local_170;
  longlong local_160;
  longlong local_158;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong local_c8;
  undefined1 local_70 [8];
  undefined8 local_68;
  
  if (param_1 != 0) {
    lVar4 = FUN_1430aef40();
    lVar5 = param_1;
    while (lVar5 != lVar4) {
      lVar5 = *(longlong *)(lVar5 + 0x30);
      if (lVar5 == 0) {
        return;
      }
    }
    lVar5 = param_5;
    if (param_4 != 0) {
      lVar5 = param_4;
    }
    if (lVar5 != 0) {
      FUN_140a25850(&local_198);
      fVar1 = param_3[1];
      fVar2 = *param_3;
      fVar3 = param_3[2];
      local_130 = param_8;
      local_13c = param_7;
      local_188 = *(undefined8 *)param_2;
      local_128 = param_9;
      local_138 = param_6;
      local_f8 = param_10;
      local_180 = param_2[2];
      local_158 = param_5;
      fVar7 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
      if (fVar7 == 1.0) {
        local_1a8 = (float)*(undefined8 *)param_3;
        fVar6 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20);
        fVar8 = param_3[2];
      }
      else {
        fVar6 = DAT_1468b5d94;
        fVar8 = DAT_1468b5d98;
        local_1a8 = DAT_1468b5d90;
        if (1e-08 <= fVar7) {
          auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
          fVar8 = auVar9._0_4_;
          fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
          fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
          local_1a8 = fVar2 * fVar8;
          fVar6 = fVar1 * fVar8;
          fVar8 = fVar3 * fVar8;
        }
      }
      local_170 = 0;
      local_f0 = 0x3f800000;
      local_174 = fVar8 * 10000.0 + param_2[2];
      local_17c = CONCAT44(fVar6 * 10000.0 + param_2[1],local_1a8 * 10000.0 + *param_2);
      local_190 = param_1;
      local_160 = param_4;
      FUN_143040a20(lVar5,&local_198);
      local_198 = &PTR_FUN_1441f17f0;
      FWeakObjectPtr::operator=(local_70,0);
      local_68 = 0;
      if (local_c8 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 143040df0 FUN_143040df0 body=90 status=ok
// SIG undefined FUN_143040df0(void)

void FUN_143040df0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = FUN_1430aef40();
    lVar2 = *(longlong *)(param_1 + 8);
    lVar3 = lVar2;
    if (lVar2 != 0) {
      while (lVar3 != lVar1) {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        if (lVar3 == 0) {
          return;
        }
      }
      if (lVar2 != 0) {
        lVar2 = *(longlong *)(param_1 + 0x40);
        if (lVar2 == 0) {
          lVar2 = *(longlong *)(param_1 + 0x38);
        }
        FUN_143040a20(lVar2,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143040e50 FUN_143040e50 body=174 status=ok
// SIG undefined FUN_143040e50(void)

void FUN_143040e50(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar2 = FUN_1430aef40();
    lVar3 = *(longlong *)(param_1 + 8);
    lVar5 = lVar3;
    if (lVar3 != 0) {
      while (lVar5 != lVar2) {
        lVar5 = *(longlong *)(lVar5 + 0x30);
        if (lVar5 == 0) {
          return;
        }
      }
      if (((lVar3 != 0) &&
          (((plVar4 = *(longlong **)(param_1 + 0x40), plVar4 != (longlong *)0x0 ||
            (plVar4 = *(longlong **)(param_1 + 0x38), plVar4 != (longlong *)0x0)) &&
           (lVar3 = (**(code **)(*plVar4 + 0x148))(), lVar3 != 0)))) &&
         ((iVar1 = FUN_1428cf800(lVar3), iVar1 != 3 && (lVar3 = FUN_14304ca20(lVar3), lVar3 != 0))))
      {
        FUN_14303b070(lVar3,param_1,param_2);
      }
    }
  }
  return;
}



// FUNCTION 143040f00 FUN_143040f00 body=316 status=ok
// SIG undefined FUN_143040f00(void)

void FUN_143040f00(longlong *param_1,longlong param_2,float *param_3,float *param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_18;
  longlong *local_10;
  
  if ((param_1 != (longlong *)0x0) && (param_2 != 0)) {
    lVar10 = FUN_1430aef40();
    lVar11 = param_2;
    do {
      if (lVar11 == lVar10) {
        (**(code **)(*param_1 + 0x2c0))(param_1,&local_18,1);
        fVar3 = *param_4;
        fVar4 = param_4[1];
        *(longlong *)(local_18 + 8) = param_2;
        fVar5 = *param_3;
        *(undefined4 *)(local_18 + 0x5c) = param_5;
        fVar9 = param_3[2];
        fVar6 = param_3[1];
        *(undefined8 *)(local_18 + 0x10) = *(undefined8 *)param_3;
        fVar7 = param_4[2];
        *(float *)(local_18 + 0x18) = fVar9;
        fVar9 = param_3[2];
        *(ulonglong *)(local_18 + 0x1c) = CONCAT44(fVar4 * 10000.0 + fVar6,fVar3 * 10000.0 + fVar5);
        *(float *)(local_18 + 0x24) = fVar7 * 10000.0 + fVar9;
        FUN_143040a20(param_1,local_18);
        if (local_10 == (longlong *)0x0) {
          return;
        }
        LOCK();
        plVar1 = local_10 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 != 1) {
          return;
        }
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)local_10 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 != 1) {
          return;
        }
        (**(code **)(*local_10 + 8))(local_10,1);
        return;
      }
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  return;
}



// FUNCTION 143041040 FUN_143041040 body=160 status=ok
// SIG undefined FUN_143041040(void)

longlong FUN_143041040(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      char param_5)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((param_2 == 0) || (iVar1 = FUN_142235230(), iVar1 == 1)) {
    lVar3 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar3 = FUN_14304cd30(param_1,param_2,uVar2,param_3,param_4);
    if ((lVar3 != 0) && (FUN_14234b270(lVar3,uVar2), param_5 != '\0')) {
      FUN_1425fcab0(lVar3,0);
    }
  }
  return lVar3;
}



// FUNCTION 1430410e0 FUN_1430410e0 body=216 status=ok
// SIG undefined FUN_1430410e0(void)

longlong FUN_1430410e0(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
                      undefined8 param_5,undefined8 param_6,char param_7)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((param_2 == 0) || (iVar1 = FUN_142235230(), iVar1 == 1)) {
    lVar3 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar3 = FUN_14304d170(param_1,param_2,uVar2,param_5,param_6);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x1ec) = *param_3;
      *(undefined4 *)(lVar3 + 500) = *(undefined4 *)(param_3 + 1);
      *(undefined8 *)(lVar3 + 0x1f8) = *param_4;
      *(undefined4 *)(lVar3 + 0x200) = *(undefined4 *)(param_4 + 1);
      FUN_14234b270(lVar3,uVar2);
      if (param_7 != '\0') {
        FUN_1425fcab0(lVar3,0);
      }
    }
  }
  return lVar3;
}



// FUNCTION 1430411c0 FUN_1430411c0 body=461 status=ok
// SIG undefined FUN_1430411c0(void)

longlong FUN_1430411c0(longlong *param_1,ulonglong *param_2)

{
  float fVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if ((char)param_1[0x25] != '\x03') {
    return 0;
  }
  lVar3 = (**(code **)(*param_1 + 0x148))();
  uVar9 = 0;
  fVar1 = *(float *)(lVar3 + 0x790);
  if (0 < (int)param_1[0x93]) {
    uVar7 = uVar9;
    uVar8 = uVar9;
    do {
      lVar3 = *(longlong *)(uVar8 + param_1[0x92]);
      iVar6 = (int)uVar7;
      if (((lVar3 != 0) && (*(char *)(lVar3 + 0x38) != '\0')) && (*(float *)(lVar3 + 0x3c) <= fVar1)
         ) {
        uVar7 = *(ulonglong *)(lVar3 + 0x10);
        uVar5 = uVar9;
        if (*param_2 != 0) {
          uVar4 = UParticleModuleTypeDataGpu::GetPrivateStaticClass();
          for (uVar2 = *param_2; (uVar5 = uVar9, uVar2 != 0 && (uVar5 = *param_2, uVar2 != uVar4));
              uVar2 = *(ulonglong *)(uVar2 + 0x30)) {
          }
        }
        if (uVar7 == uVar5) {
          if (iVar6 != -1) goto LAB_14304134e;
          break;
        }
      }
      uVar7 = (ulonglong)(iVar6 + 1U);
      uVar8 = uVar8 + 8;
    } while ((int)(iVar6 + 1U) < (int)param_1[0x93]);
  }
  uVar7 = uVar9;
  if (*param_2 != 0) {
    uVar5 = UParticleModuleTypeDataGpu::GetPrivateStaticClass();
    for (uVar8 = *param_2; (uVar7 = uVar9, uVar8 != 0 && (uVar7 = *param_2, uVar8 != uVar5));
        uVar8 = *(ulonglong *)(uVar8 + 0x30)) {
    }
  }
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  lVar3 = FUN_1417985e0(uVar7,param_1,0,0,0,0,0,0,0);
  *(undefined1 *)(lVar3 + 0x38) = 1;
  *(int *)((longlong)param_1 + 0x534) = *(int *)((longlong)param_1 + 0x534) + 1;
  *(undefined4 *)(lVar3 + 0x30) = *(undefined4 *)((longlong)param_1 + 0x534);
  iVar6 = (int)param_1[0x93];
  *(int *)(param_1 + 0x93) = iVar6 + 1;
  if (*(int *)((longlong)param_1 + 0x49c) < iVar6 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x92,iVar6);
  }
  *(longlong *)(param_1[0x92] + (longlong)iVar6 * 8) = lVar3;
LAB_14304134e:
  lVar3 = *(longlong *)(param_1[0x92] + (longlong)iVar6 * 8);
  if (lVar3 != 0) {
    *(undefined1 *)(lVar3 + 0x38) = 0;
  }
  return lVar3;
}



// FUNCTION 143041390 FUN_143041390 body=3152 status=ok
// SIG undefined FUN_143041390(void)

void FUN_143041390(longlong *param_1)

{
  float *pfVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 *puVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  float *pfVar12;
  longlong lVar13;
  uint uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 local_res10 [8];
  undefined8 local_298;
  float local_290;
  undefined8 local_288;
  float local_280;
  float local_278;
  float fStack_274;
  float fStack_270;
  undefined8 local_268;
  float local_260;
  undefined1 local_258 [8];
  float local_250;
  undefined1 local_24c [8];
  float local_244;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  undefined1 local_218 [16];
  undefined **local_208;
  longlong local_200;
  undefined8 local_1f8;
  float local_1f0;
  undefined8 local_1ec;
  float local_1e4;
  uint local_1e0;
  undefined8 local_1dc;
  undefined4 local_1d4;
  longlong local_138;
  undefined1 local_e0 [8];
  undefined8 local_d8;
  
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    lVar13 = param_1[4];
  }
  else {
    lVar13 = 0;
  }
  if (lVar13 == 0) {
    return;
  }
  lVar10 = param_1[0x15];
  pfVar12 = (float *)(lVar10 + 0x2e8);
  lVar9 = param_1[0x29];
  *(undefined1 *)(param_1 + 0x8b) = 1;
  if ((lVar9 == 0) && (lVar9 = param_1[0x28], lVar9 == 0)) {
    lVar9 = param_1[0x2d];
  }
  if (((0.0001 < ABS(*(float *)((longlong)param_1 + 0x2e4))) ||
      (0.0001 < ABS(*(float *)(param_1 + 0x5d)))) ||
     (0.0001 < ABS(*(float *)((longlong)param_1 + 0x2ec)))) {
    uVar15 = *(undefined8 *)((longlong)param_1 + 0x2e4);
    fVar17 = *(float *)((longlong)param_1 + 0x2ec);
  }
  else if (lVar9 == 0) {
    local_278 = 1.0;
    fStack_274 = 0.0;
    fStack_270 = 0.0;
    uVar15 = 0x3f800000;
    fVar17 = 0.0;
  }
  else {
    if (*(longlong *)(lVar9 + 0x168) == 0) {
      local_280 = DAT_1464aa7b0;
      puVar7 = &local_288;
      local_288 = DAT_1464aa7a8;
    }
    else {
      puVar7 = (undefined8 *)FUN_142369f10(*(longlong *)(lVar9 + 0x168),local_258);
    }
    uVar15 = *puVar7;
    fVar17 = *(float *)(puVar7 + 1);
    local_260 = fVar17;
    local_268 = uVar15;
  }
  if (*(char *)(lVar10 + 0x314) == '\0') {
    local_278 = 0.0;
    fStack_274 = 0.0;
    pfVar8 = &local_278;
    fStack_270 = 0.0;
  }
  else {
    local_280 = *(float *)(lVar10 + 0x310);
    pfVar8 = (float *)&local_288;
    local_288 = *(undefined8 *)(lVar10 + 0x308);
  }
  pfVar1 = (float *)((longlong)param_1 + 0x434);
  fVar16 = pfVar8[2];
  local_298._4_4_ = (float)((ulonglong)uVar15 >> 0x20);
  fVar2 = local_298._4_4_;
  local_298._0_4_ = (float)uVar15;
  fVar19 = (float)local_298;
  *(undefined8 *)pfVar1 = *(undefined8 *)pfVar8;
  *(float *)((longlong)param_1 + 0x43c) = fVar16;
  if (((0.0001 < ABS(*pfVar1)) || (0.0001 < ABS(*(float *)(param_1 + 0x87)))) ||
     (0.0001 < ABS(*(float *)((longlong)param_1 + 0x43c)))) {
    local_298 = uVar15;
    local_290 = fVar17;
    if (lVar9 != 0) {
      lVar9 = *(longlong *)(lVar9 + 0x168);
      fVar21 = DAT_1468b5da8;
      uVar15 = DAT_1468b5da0;
      if (lVar9 != 0) {
        local_238 = *(float *)(lVar9 + 0x210);
        fStack_234 = *(float *)(lVar9 + 0x214);
        fStack_230 = *(float *)(lVar9 + 0x218);
        fStack_22c = *(float *)(lVar9 + 0x21c);
        auVar20._4_4_ = -(uint)(*(float *)(lVar9 + 0x254) != fStack_234);
        auVar20._0_4_ = -(uint)(*(float *)(lVar9 + 0x250) != local_238);
        auVar20._8_4_ = -(uint)(*(float *)(lVar9 + 600) != fStack_230);
        auVar20._12_4_ = -(uint)(*(float *)(lVar9 + 0x25c) != fStack_22c);
        iVar6 = movmskps(fVar16,auVar20);
        if (iVar6 != 0) {
          *(float *)(lVar9 + 0x250) = local_238;
          *(float *)(lVar9 + 0x254) = fStack_234;
          *(float *)(lVar9 + 600) = fStack_230;
          *(float *)(lVar9 + 0x25c) = fStack_22c;
          puVar7 = (undefined8 *)FQuat::Rotator(&local_238,local_258);
          *(undefined8 *)(lVar9 + 0x260) = *puVar7;
          *(undefined4 *)(lVar9 + 0x268) = *(undefined4 *)(puVar7 + 1);
        }
        fVar21 = *(float *)(lVar9 + 0x268);
        uVar15 = *(undefined8 *)(lVar9 + 0x260);
      }
      local_288 = uVar15;
      local_280 = fVar21;
      local_268 = uVar15;
      local_260 = fVar21;
      pfVar8 = (float *)FRotator::RotateVector(&local_268,local_24c,pfVar1);
LAB_14304191f:
      *(undefined8 *)pfVar1 = *(undefined8 *)pfVar8;
      *(float *)((longlong)param_1 + 0x43c) = pfVar8[2];
    }
  }
  else {
    fVar21 = -(fVar17 * local_298._4_4_);
    fVar23 = fVar17 * -(float)local_298;
    local_290 = local_298._4_4_ * local_298._4_4_ - (float)local_298 * -(float)local_298;
    fVar16 = fVar21 * fVar21 + fVar23 * fVar23 + local_290 * local_290;
    if (fVar16 == 1.0) {
LAB_1430416ed:
      local_298 = CONCAT44(fVar21,fVar23);
    }
    else {
      if (1e-08 <= fVar16) {
        auVar20 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
        fVar18 = auVar20._0_4_;
        fVar18 = fVar18 + fVar18 * (0.5 - fVar16 * 0.5 * fVar18 * fVar18);
        fVar18 = fVar18 + fVar18 * (0.5 - fVar16 * 0.5 * fVar18 * fVar18);
        fVar23 = fVar23 * fVar18;
        fVar21 = fVar21 * fVar18;
        local_290 = local_290 * fVar18;
        goto LAB_1430416ed;
      }
      local_290 = DAT_1468b5d98;
      local_298 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    }
    *(undefined8 *)pfVar1 = local_298;
    *(float *)((longlong)param_1 + 0x43c) = local_290;
    if (((ABS(*pfVar1) <= 0.0001) && (ABS(*(float *)(param_1 + 0x87)) <= 0.0001)) &&
       (ABS(*(float *)((longlong)param_1 + 0x43c)) <= 0.0001)) {
      if (lVar9 == 0) {
        local_278 = 1.0;
        fStack_274 = 0.0;
        pfVar8 = &local_278;
        fStack_270 = 0.0;
      }
      else {
        if (*(longlong *)(lVar9 + 0x168) == 0) {
          local_280 = DAT_1464aa7b0;
          puVar7 = &local_288;
          local_288 = DAT_1464aa7a8;
        }
        else {
          puVar7 = (undefined8 *)FUN_142369f10(*(longlong *)(lVar9 + 0x168),local_258);
        }
        local_260 = *(float *)(puVar7 + 1);
        pfVar8 = (float *)&local_268;
        local_268 = *puVar7;
      }
      fVar16 = pfVar8[2];
      *(undefined8 *)pfVar1 = *(undefined8 *)pfVar8;
      *(float *)((longlong)param_1 + 0x43c) = fVar16;
      if (((ABS(*pfVar1 - fVar19) <= 0.0001) && (ABS(*(float *)(param_1 + 0x87) - fVar2) <= 0.0001))
         && (ABS(*(float *)((longlong)param_1 + 0x43c) - fVar17) <= 0.0001)) {
        if (lVar9 == 0) {
          local_278 = 0.0;
          pfVar8 = &local_278;
          fStack_274 = 1.0;
          fStack_270 = 0.0;
        }
        else {
          if (*(longlong *)(lVar9 + 0x168) == 0) {
            local_280 = DAT_1464aa7a0;
            puVar7 = &local_288;
            local_288 = DAT_1464aa798;
          }
          else {
            puVar7 = (undefined8 *)FUN_14238db80(*(longlong *)(lVar9 + 0x168),local_258);
          }
          local_260 = *(float *)(puVar7 + 1);
          pfVar8 = (float *)&local_268;
          local_268 = *puVar7;
        }
        goto LAB_14304191f;
      }
    }
  }
  uVar14 = 1;
  iVar6 = 1;
  if (0 < *(int *)(lVar10 + 0x2f0)) {
    iVar6 = *(int *)(lVar10 + 0x2f0);
  }
  fVar16 = (*(float *)(lVar10 + 0x2ec) + *(float *)(lVar10 + 0x2ec)) / (float)iVar6;
  if (fVar16 == 0.0) {
    iVar6 = 1;
  }
  if (*(char *)(lVar10 + 0x304) != '\0') {
    *(float *)(param_1 + 0x89) = fVar16;
    iVar4 = *(int *)(lVar10 + 0x2fc);
    if (iVar4 == 0) {
      fVar21 = *(float *)(lVar10 + 0x300) + *pfVar12;
    }
    else {
      if (iVar4 != 1) {
        if (iVar4 == 2) {
          *(undefined4 *)((longlong)param_1 + 0x444) = *(undefined4 *)(lVar10 + 0x300);
        }
        else {
          *(undefined4 *)((longlong)param_1 + 0x444) = 0;
        }
        goto LAB_1430419c3;
      }
      lVar9 = (**(code **)(*param_1 + 0x148))(param_1);
      fVar21 = *(float *)(lVar9 + 0x790) + *(float *)(lVar10 + 0x300);
    }
    *(float *)((longlong)param_1 + 0x444) = fVar21;
  }
LAB_1430419c3:
  if (param_1[0x60] == 0) {
    plVar5 = (longlong *)param_1[0x61];
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x4a8))(plVar5,&local_238,&DAT_1468b5b70);
      *(float *)((longlong)param_1 + 0x44c) = (fStack_234 + local_228) - (fStack_234 - local_228);
    }
  }
  else {
    FUN_1423d28d0(param_1[0x60],&local_268,&local_288);
    *(float *)((longlong)param_1 + 0x44c) =
         (local_288._4_4_ - local_268._4_4_) * *(float *)(param_1[0x15] + 100);
  }
  fVar21 = *(float *)((longlong)param_1 + 0x44c);
  if (fVar21 <= 0.0) {
    fVar21 = *(float *)(param_1[0x15] + 0x194) + *(float *)(param_1[0x15] + 0x194);
    *(float *)((longlong)param_1 + 0x44c) = fVar21;
  }
  if (((*(char *)(lVar10 + 0x2f4) != '\0') && (2 < iVar6)) && (0.0 < fVar21)) {
    fVar23 = _guard_xfg_dispatch_icall_nop(fVar16 * 0.008726646);
    fVar21 = (fVar23 + fVar23) / fVar21;
    *(float *)(param_1 + 0x8a) = fVar21 * *pfVar12;
    *(float *)((longlong)param_1 + 0x454) = fVar21 * *(float *)(param_1[0x15] + 0x144);
  }
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    lVar10 = param_1[4];
  }
  else {
    lVar10 = 0;
  }
  cVar3 = *(char *)(lVar10 + 0x128);
  if (cVar3 == '\x03') {
    param_1[0x85] = param_1[0x55];
    *(int *)(param_1 + 0x86) = (int)param_1[0x56];
    fVar21 = *pfVar12;
    if (0.0 < fVar21) {
      fVar18 = fVar2 * fVar21;
      fVar23 = fVar19 * fVar21;
      fVar21 = fVar17 * fVar21;
      *(float *)((longlong)param_1 + 0x2ac) = fVar18 + *(float *)((longlong)param_1 + 0x2ac);
      *(float *)(param_1 + 0x55) = fVar23 + *(float *)(param_1 + 0x55);
      *(float *)(param_1 + 0x56) = fVar21 + *(float *)(param_1 + 0x56);
      *(float *)(param_1 + 0x5b) = fVar23 + *(float *)(param_1 + 0x5b);
      *(float *)((longlong)param_1 + 0x2dc) = fVar18 + *(float *)((longlong)param_1 + 0x2dc);
      *(float *)(param_1 + 0x5c) = fVar21 + *(float *)(param_1 + 0x5c);
      *(float *)(param_1 + 0x23) = fVar23 + *(float *)(param_1 + 0x23);
      *(float *)((longlong)param_1 + 0x11c) = fVar18 + *(float *)((longlong)param_1 + 0x11c);
      *(float *)(param_1 + 0x24) = fVar21 + *(float *)(param_1 + 0x24);
      *(float *)((longlong)param_1 + 0x124) = fVar23 + *(float *)((longlong)param_1 + 0x124);
      *(float *)(param_1 + 0x25) = fVar18 + *(float *)(param_1 + 0x25);
      *(float *)((longlong)param_1 + 300) = fVar21 + *(float *)((longlong)param_1 + 300);
    }
  }
  else {
    fVar21 = *pfVar12;
    local_280 = *(float *)(param_1 + 0x56) - fVar17 * fVar21;
    param_1[0x85] =
         CONCAT44(*(float *)((longlong)param_1 + 0x2ac) - fVar2 * fVar21,
                  *(float *)(param_1 + 0x55) - fVar19 * fVar21);
    *(float *)(param_1 + 0x86) = local_280;
  }
  if ((1 < iVar6) && (cVar3 == '\x03')) {
    FUN_140a25850(&local_208);
    (**(code **)(*param_1 + 0x2c8))(param_1,&local_208);
    fVar21 = *pfVar12;
    local_1e0 = local_1e0 | 1;
    local_200 = param_1[0x22];
    local_278 = fVar19 * fVar21;
    fStack_274 = fVar2 * fVar21;
    fStack_270 = fVar17 * fVar21;
    fVar21 = fVar21 + 10000.0;
    local_280 = fVar17 * fVar21;
    local_288 = CONCAT44(fVar2 * fVar21,fVar19 * fVar21);
    if (1 < iVar6) {
      do {
        uVar11 = uVar14 + 1;
        fVar22 = (float)(int)((~uVar14 & 1) * 2 + -1) * (float)((int)uVar11 / 2) * fVar16;
        FVector::RotateAngleAxis(&local_278,&local_268,fVar22,pfVar1);
        fVar18 = local_260;
        fVar17 = *(float *)(param_1 + 0x86);
        fVar19 = *(float *)(param_1 + 0x85);
        fVar21 = (float)local_268;
        local_244 = fVar17 + local_260;
        fVar2 = *(float *)((longlong)param_1 + 0x42c);
        fVar23 = local_268._4_4_;
        local_1f8 = CONCAT44(fVar2 + local_268._4_4_,fVar19 + (float)local_268);
        local_1f0 = local_244;
        pfVar12 = (float *)FVector::RotateAngleAxis(&local_288,local_218,fVar22,pfVar1);
        local_250 = fVar17 + pfVar12[2];
        local_1ec = CONCAT44(fVar2 + pfVar12[1],fVar19 + *pfVar12);
        fVar17 = fVar21 * fVar21 + fVar23 * fVar23 + fVar18 * fVar18;
        if (fVar17 == 1.0) {
LAB_143041ec8:
          local_298 = CONCAT44(fVar23,fVar21);
          local_290 = fVar18;
        }
        else {
          if (1e-08 <= fVar17) {
            auVar20 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
            fVar19 = auVar20._0_4_;
            fVar19 = fVar19 + fVar19 * (0.5 - fVar17 * 0.5 * fVar19 * fVar19);
            fVar19 = fVar19 + fVar19 * (0.5 - fVar17 * 0.5 * fVar19 * fVar19);
            fVar21 = fVar21 * fVar19;
            fVar23 = fVar23 * fVar19;
            fVar18 = fVar18 * fVar19;
            goto LAB_143041ec8;
          }
          local_290 = DAT_1468b5d98;
          local_298 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        }
        local_1e4 = local_250;
        puVar7 = (undefined8 *)FVector::Rotation(&local_298,&local_238);
        local_1dc = *puVar7;
        local_1d4 = *(undefined4 *)(puVar7 + 1);
        FUN_14303af10(lVar13,local_res10,&local_208);
        uVar14 = uVar11;
      } while ((int)uVar11 < iVar6);
    }
    local_208 = &PTR_FUN_1441f17f0;
    FWeakObjectPtr::operator=(local_e0,0);
    local_d8 = 0;
    if (local_138 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 143041fe0 FUN_143041fe0 body=372 status=ok
// SIG undefined FUN_143041fe0(void)

undefined8 * FUN_143041fe0(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar8 = (longlong)&PTR_FUN_145a5e4d8;
  *(undefined1 *)(plVar8 + 3) = 0;
  plVar8[4] = local_res10;
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



// FUNCTION 143042160 FUN_143042160 body=372 status=ok
// SIG undefined FUN_143042160(void)

undefined8 * FUN_143042160(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar8 = (longlong)&PTR_FUN_145a5e4c8;
  *(undefined1 *)(plVar8 + 3) = 0;
  plVar8[4] = local_res10;
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



// FUNCTION 1430422e0 FUN_1430422e0 body=372 status=ok
// SIG undefined FUN_1430422e0(void)

undefined8 * FUN_1430422e0(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar8 = (longlong)&PTR_FUN_145a5f0e8;
  *(undefined1 *)((longlong)plVar8 + 0x1c) = 0;
  plVar8[4] = local_res10;
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



// FUNCTION 143042460 FUN_143042460 body=372 status=ok
// SIG undefined FUN_143042460(void)

undefined8 * FUN_143042460(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar8 = (longlong)&PTR_FUN_145a5f0d8;
  *(undefined1 *)((longlong)plVar8 + 0x1c) = 0;
  plVar8[4] = local_res10;
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



// FUNCTION 1430425e0 FUN_1430425e0 body=372 status=ok
// SIG undefined FUN_1430425e0(void)

undefined8 * FUN_1430425e0(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar8 = (longlong)&PTR_FUN_145a5e8d0;
  *(undefined1 *)(plVar8 + 3) = 0;
  plVar8[4] = local_res10;
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



// FUNCTION 143042760 FUN_143042760 body=372 status=ok
// SIG undefined FUN_143042760(void)

undefined8 * FUN_143042760(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar8 = (longlong)&PTR_FUN_145a5e8c0;
  *(undefined1 *)(plVar8 + 3) = 0;
  plVar8[4] = local_res10;
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



// FUNCTION 1430428e0 FUN_1430428e0 body=394 status=ok
// SIG undefined FUN_1430428e0(void)

void FUN_1430428e0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  uint *puVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x188);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x3b0))(plVar3,0);
    lVar4 = *(longlong *)(param_1 + 0x180);
    *(undefined8 *)(param_1 + 0x188) = 0;
    if (lVar4 != 0) {
      plVar3 = *(longlong **)(lVar4 + 0x680);
      if ((plVar3 != (longlong *)0x0) && (plVar3[4] == lVar4)) {
        (**(code **)(*plVar3 + 0x3b0))(plVar3,0);
      }
      *(undefined8 *)(lVar4 + 0x680) = 0;
    }
  }
  if (param_2 != 0) {
    lVar4 = FUN_1409bff40(param_1);
    *(longlong *)(param_1 + 0x188) = lVar4;
    if (lVar4 != 0) {
      *(byte *)(lVar4 + 0x2f0) = *(byte *)(lVar4 + 0x2f0) | 0x40;
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x188) + 0x71a);
      *pbVar1 = *pbVar1 | 0x40;
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x188) + 0xba);
      *pbVar1 = *pbVar1 | 1;
      *(undefined4 *)(*(longlong *)(param_1 + 0x188) + 0x794) = 0;
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x188) + 0xba);
      *pbVar1 = *pbVar1 & 0xfd;
      FUN_14260f940(*(undefined8 *)(param_1 + 0x188),param_2);
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x188) + 0x71a);
      *pbVar1 = *pbVar1 & 0xfe;
      puVar2 = (uint *)(*(longlong *)(param_1 + 0x188) + 0x398);
      *puVar2 = *puVar2 & 0xfffffffe;
      if (*(longlong *)(param_1 + 0x180) != 0) {
        FUN_142399e30(*(undefined8 *)(param_1 + 0x188),
                      *(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x168),0);
        FUN_14303d360(*(undefined8 *)(param_1 + 0x180),*(undefined8 *)(param_1 + 0x188));
      }
      lVar4 = *(longlong *)(param_1 + 0x188);
      *(undefined8 *)(lVar4 + 0x1ec) = 0;
      *(undefined4 *)(lVar4 + 500) = 0;
      lVar4 = *(longlong *)(param_1 + 0x120);
      if (lVar4 == 0) {
        lVar4 = FUN_1423407b0(param_1);
      }
      FUN_14234b270(*(undefined8 *)(param_1 + 0x188),lVar4);
    }
  }
  return;
}



// FUNCTION 143042ab0 FUN_143042ab0 body=946 status=ok
// SIG undefined FUN_143042ab0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143042ab0(longlong *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  undefined **local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined ***local_158;
  undefined8 local_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined8 uStack_138;
  longlong local_128;
  longlong local_120 [7];
  longlong *local_e8;
  int local_e0;
  longlong local_d8;
  longlong local_c8;
  longlong local_c0 [7];
  longlong *local_88;
  int local_80;
  longlong local_78;
  longlong local_68;
  longlong local_60 [7];
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  lVar4 = (**(code **)(*param_1 + 0x148))();
  if (((lVar4 != 0) && (iVar3 = FUN_1428cf800(lVar4), iVar3 != 3)) &&
     (lVar4 = FUN_14304ca20(lVar4), lVar4 != 0)) {
    local_140 = 0;
    local_190 = &PTR_LAB_145a5f4c0;
    local_158 = &local_190;
    uStack_138 = 0;
    uStack_148 = CONCAT31(uStack_148._1_3_,5);
    local_150._0_4_ = SUB84(param_1,0);
    local_150._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
    local_178 = 0;
    uStack_174 = 0;
    uStack_170 = 0;
    uStack_16c = 0;
    local_188 = (undefined4)local_150;
    uStack_184 = local_150._4_4_;
    uStack_180 = uStack_148;
    uStack_17c = uStack_144;
    local_150 = param_1;
    FUN_14303b5a0(lVar4,&local_68,&local_190);
    local_158 = (undefined ***)0x0;
    if (local_28 != (longlong *)0x0) {
      local_158 = (undefined ***)(**(code **)*local_28)(local_28,&local_190);
    }
    local_128 = local_68;
    local_e8 = (longlong *)0x0;
    if (local_158 != (undefined ***)0x0) {
      local_e8 = (longlong *)(*(code *)**local_158)(local_158,local_120);
    }
    local_e0 = 0;
    local_d8 = 0;
    plVar5 = local_e8;
    lVar4 = local_128;
    while (((-1 < local_e0 && (local_e0 < *(int *)(lVar4 + 0x460))) &&
           (((local_d8 = *(longlong *)(*(longlong *)(lVar4 + 0x458) + (longlong)local_e0 * 8),
             local_d8 == 0 || ((*(byte *)(local_d8 + 0xe4) & 1) == 0)) ||
            ((plVar5 != (longlong *)0x0 &&
             (local_198 = local_d8, cVar1 = (**(code **)(*plVar5 + 0x10))(plVar5,&local_198),
             plVar5 = local_e8, lVar4 = local_128, cVar1 == '\0'))))))) {
      local_e0 = local_e0 + 1;
    }
    if (local_158 != (undefined ***)0x0) {
      (*(code *)(*local_158)[4])
                (local_158,CONCAT71((int7)((ulonglong)&local_190 >> 8),local_158 != &local_190));
    }
    local_158 = (undefined ***)0x0;
    if (local_28 != (longlong *)0x0) {
      local_158 = (undefined ***)(**(code **)*local_28)(local_28,&local_190);
    }
    local_c8 = local_68;
    local_88 = (longlong *)0x0;
    if (local_158 != (undefined ***)0x0) {
      local_88 = (longlong *)(*(code *)**local_158)(local_158,local_c0);
    }
    local_80 = -1;
    local_78 = 0;
    plVar5 = local_88;
    while (((-1 < local_80 && (local_80 < *(int *)(local_c8 + 0x460))) &&
           (((local_78 = *(longlong *)(*(longlong *)(local_c8 + 0x458) + (longlong)local_80 * 8),
             local_78 == 0 || ((*(byte *)(local_78 + 0xe4) & 1) == 0)) ||
            ((plVar5 != (longlong *)0x0 &&
             (local_198 = local_78, cVar1 = (**(code **)(*plVar5 + 0x10))(plVar5,&local_198),
             plVar5 = local_88, cVar1 == '\0'))))))) {
      local_80 = local_80 + 1;
    }
    lVar4 = local_128;
    if (local_158 != (undefined ***)0x0) {
      (*(code *)(*local_158)[4])
                (local_158,CONCAT71((int7)((ulonglong)&local_190 >> 8),local_158 != &local_190));
      lVar4 = local_128;
    }
LAB_143042d20:
    if (local_e0 != local_80) {
      if ((local_e0 < 0) || (*(int *)(lVar4 + 0x460) <= local_e0)) {
        cVar1 = '\0';
      }
      else {
        cVar1 = '\x01';
      }
      if ((local_80 < 0) || (*(int *)(local_c8 + 0x460) <= local_80)) {
        cVar2 = '\0';
      }
      else {
        cVar2 = '\x01';
      }
      if (cVar1 == cVar2) goto LAB_143042ded;
      FUN_1430491b0(local_d8,0);
      local_d8 = 0;
      lVar4 = local_128;
      do {
        local_e0 = local_e0 + 1;
        if ((local_e0 < 0) || (*(int *)(lVar4 + 0x460) <= local_e0)) break;
        local_d8 = *(longlong *)(*(longlong *)(lVar4 + 0x458) + (longlong)local_e0 * 8);
      } while (((local_d8 == 0) || ((*(byte *)(local_d8 + 0xe4) & 1) == 0)) ||
              ((local_e8 != (longlong *)0x0 &&
               (local_198 = local_d8, cVar1 = (**(code **)(*local_e8 + 0x10))(local_e8,&local_198),
               lVar4 = local_128, cVar1 == '\0'))));
      goto LAB_143042d20;
    }
LAB_143042ded:
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 0x20))
                (local_88,CONCAT71((int7)((ulonglong)local_c0 >> 8),local_88 != local_c0));
      local_88 = (longlong *)0x0;
    }
    if (local_e8 != (longlong *)0x0) {
      (**(code **)(*local_e8 + 0x20))(local_e8,local_e8 != local_120);
      local_e8 = (longlong *)0x0;
    }
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 0x20))
                (local_28,CONCAT71((int7)((ulonglong)local_60 >> 8),local_28 != local_60));
    }
  }
  return;
}



// FUNCTION 143042e70 FUN_143042e70 body=2226 status=ok
// SIG undefined FUN_143042e70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143042e70(longlong *param_1,float param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  longlong *plVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  float fVar18;
  undefined1 auStack_a38 [32];
  undefined1 local_a18 [8];
  ulonglong local_a10;
  int local_a08;
  uint local_a04;
  undefined **local_a00;
  longlong local_9f8;
  longlong lStack_9f0;
  longlong local_9e8;
  longlong lStack_9e0;
  undefined ***local_9c8;
  ulonglong local_9c0;
  undefined4 uStack_9b8;
  undefined4 uStack_9b4;
  longlong local_9a8;
  longlong local_9a0 [7];
  longlong *local_968;
  int local_960;
  ulonglong local_958;
  longlong local_948;
  longlong local_940 [7];
  longlong *local_908;
  int local_900;
  ulonglong local_8f8;
  longlong local_8e8;
  longlong local_8e0 [7];
  longlong *local_8a8;
  undefined1 local_898 [1024];
  undefined1 *local_498;
  uint local_490;
  undefined4 local_48c;
  undefined1 local_488 [1024];
  undefined1 *local_88;
  undefined8 local_80;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_a38;
  if (((((longlong *)*param_1 != (longlong *)0x0) &&
       (lVar5 = (**(code **)(*(longlong *)*param_1 + 0x148))(), lVar5 != 0)) &&
      (iVar3 = FUN_1428cf800(lVar5), iVar3 != 3)) && (lVar5 = FUN_14304ca20(lVar5), lVar5 != 0)) {
    local_9f8 = *param_1;
    lStack_9f0 = param_1[1];
    local_9e8 = param_1[2];
    lStack_9e0 = param_1[3];
    local_a00 = &PTR_LAB_145a5f4c0;
    local_9c8 = &local_a00;
    puVar12 = (undefined1 *)0x0;
    local_88 = (undefined1 *)0x0;
    local_80 = 0;
    FUN_14303b5a0(lVar5,&local_8e8,&local_a00);
    local_9c8 = (undefined ***)0x0;
    if (local_8a8 != (longlong *)0x0) {
      local_9c8 = (undefined ***)(**(code **)*local_8a8)(local_8a8,&local_a00);
    }
    local_9a8 = local_8e8;
    local_968 = (longlong *)0x0;
    if (local_9c8 != (undefined ***)0x0) {
      local_968 = (longlong *)(*(code *)**local_9c8)(local_9c8,local_9a0);
    }
    local_958 = 0;
    puVar11 = puVar12;
    plVar13 = local_968;
    lVar5 = local_9a8;
    while (((local_960 = (int)puVar11, -1 < local_960 && (local_960 < *(int *)(lVar5 + 0x460))) &&
           (((local_958 = *(ulonglong *)(*(longlong *)(lVar5 + 0x458) + (longlong)local_960 * 8),
             local_958 == 0 || ((*(byte *)(local_958 + 0xe4) & 1) == 0)) ||
            ((plVar13 != (longlong *)0x0 &&
             (local_a10 = local_958, cVar1 = (**(code **)(*plVar13 + 0x10))(plVar13,&local_a10),
             plVar13 = local_968, lVar5 = local_9a8, cVar1 == '\0'))))))) {
      puVar11 = (undefined1 *)(ulonglong)(local_960 + 1);
    }
    if (local_9c8 != (undefined ***)0x0) {
      (*(code *)(*local_9c8)[4])
                (local_9c8,CONCAT71((int7)((ulonglong)&local_a00 >> 8),local_9c8 != &local_a00));
    }
    local_9c8 = (undefined ***)0x0;
    if (local_8a8 != (longlong *)0x0) {
      local_9c8 = (undefined ***)(**(code **)*local_8a8)(local_8a8,&local_a00);
    }
    local_948 = local_8e8;
    local_908 = (longlong *)0x0;
    if (local_9c8 != (undefined ***)0x0) {
      local_908 = (longlong *)(*(code *)**local_9c8)(local_9c8,local_940);
    }
    local_900 = -1;
    local_8f8 = 0;
    plVar13 = local_908;
    while (((-1 < local_900 && (local_900 < *(int *)(local_948 + 0x460))) &&
           (((local_8f8 = *(ulonglong *)(*(longlong *)(local_948 + 0x458) + (longlong)local_900 * 8)
             , local_8f8 == 0 || ((*(byte *)(local_8f8 + 0xe4) & 1) == 0)) ||
            ((plVar13 != (longlong *)0x0 &&
             (local_a10 = local_8f8, cVar1 = (**(code **)(*plVar13 + 0x10))(plVar13,&local_a10),
             plVar13 = local_908, cVar1 == '\0'))))))) {
      local_900 = local_900 + 1;
    }
    plVar13 = local_968;
    lVar5 = local_9a8;
    if (local_9c8 != (undefined ***)0x0) {
      (*(code *)(*local_9c8)[4])
                (local_9c8,CONCAT71((int7)((ulonglong)&local_a00 >> 8),local_9c8 != &local_a00));
      plVar13 = local_968;
      lVar5 = local_9a8;
    }
LAB_143043100:
    if (local_960 != local_900) {
      if ((local_960 < 0) || (*(int *)(lVar5 + 0x460) <= local_960)) {
        cVar1 = '\0';
      }
      else {
        cVar1 = '\x01';
      }
      if ((local_900 < 0) || (*(int *)(local_948 + 0x460) <= local_900)) {
        cVar2 = '\0';
      }
      else {
        cVar2 = '\x01';
      }
      if (cVar1 == cVar2) goto LAB_14304325c;
      if (((*(uint *)(local_958 + 0xe4) >> 4 & 1) != 0) &&
         (((*(uint *)(local_958 + 0xe4) & 4) != 0 || (*(float *)(local_958 + 0x240) <= 0.0)))) {
        lVar5 = *(longlong *)(local_958 + 0x1c0);
        uVar4 = 0;
        local_9c0 = local_958;
        if (lVar5 != 0) {
          lVar6 = FUN_142d39be0(lVar5);
          if (lVar6 != 0) {
            lVar5 = lVar6;
          }
          if (lVar5 != 0) {
            uVar4 = *(undefined4 *)(lVar5 + 0xc);
          }
        }
        uVar7 = local_80;
        lVar5 = (longlong)(int)(uint)local_80;
        iVar3 = (uint)local_80 + 1;
        local_80 = CONCAT44(local_80._4_4_,iVar3);
        uStack_9b8 = uVar4;
        if (local_80._4_4_ < iVar3) {
          TArray<FLinearColor,TInlineAllocator<64,TSizedDefaultAllocator<32>_>_>::ResizeGrow
                    (local_488,uVar7 & 0xffffffff);
        }
        puVar11 = local_488;
        if (local_88 != (undefined1 *)0x0) {
          puVar11 = local_88;
        }
        *(ulonglong *)(puVar11 + lVar5 * 0x10) = local_9c0;
        *(ulonglong *)((longlong)(puVar11 + lVar5 * 0x10) + 8) = CONCAT44(uStack_9b4,uStack_9b8);
        plVar13 = local_968;
        lVar5 = local_9a8;
      }
      local_958 = 0;
      do {
        local_960 = local_960 + 1;
        if ((local_960 < 0) || (*(int *)(lVar5 + 0x460) <= local_960)) break;
        local_958 = *(ulonglong *)(*(longlong *)(lVar5 + 0x458) + (longlong)local_960 * 8);
      } while (((local_958 == 0) || ((*(byte *)(local_958 + 0xe4) & 1) == 0)) ||
              ((plVar13 != (longlong *)0x0 &&
               (local_a10 = local_958, cVar1 = (**(code **)(*plVar13 + 0x10))(plVar13,&local_a10),
               plVar13 = local_968, lVar5 = local_9a8, cVar1 == '\0'))));
      goto LAB_143043100;
    }
LAB_14304325c:
    if (local_908 != (longlong *)0x0) {
      (**(code **)(*local_908 + 0x20))
                (local_908,CONCAT71((int7)((ulonglong)local_940 >> 8),local_908 != local_940));
      local_908 = (longlong *)0x0;
      plVar13 = local_968;
    }
    if (plVar13 != (longlong *)0x0) {
      (**(code **)(*plVar13 + 0x20))(plVar13,plVar13 != local_9a0);
      local_968 = (longlong *)0x0;
    }
    if (local_8a8 != (longlong *)0x0) {
      (**(code **)(*local_8a8 + 0x20))
                (local_8a8,CONCAT71((int7)((ulonglong)local_8e0 >> 8),local_8a8 != local_8e0));
    }
    puVar11 = local_88;
    lVar5 = (longlong)(int)(uint)local_80;
    if ((1 < (int)(uint)local_80) && (0.0 < param_2)) {
      local_498 = (undefined1 *)0x0;
      local_490 = (uint)local_80;
      if ((uint)local_80 == 0) {
        local_48c = 0;
      }
      else {
        FUN_14305a570(local_898,local_80 & 0xffffffff,0);
        puVar14 = local_488;
        if (puVar11 != (undefined1 *)0x0) {
          puVar14 = puVar11;
        }
        puVar11 = local_898;
        if (local_498 != (undefined1 *)0x0) {
          puVar11 = local_498;
        }
        _guard_xfg_dispatch_icall_nop(puVar11,puVar14,lVar5 << 4);
      }
      local_a18[0] = 0;
      puVar11 = local_898;
      if (local_498 != (undefined1 *)0x0) {
        puVar11 = puVar12;
      }
      FUN_1430388c0((ulonglong)puVar11 | (ulonglong)local_498,(longlong)(int)local_490,0,local_a18);
      uVar7 = (ulonglong)(int)local_490;
      local_a08 = 0;
      local_a04 = local_490;
      puVar11 = local_498;
      local_a10 = uVar7;
      if (0 < (int)local_490) {
        iVar3 = 1;
        puVar14 = puVar12;
        uVar15 = uVar7;
        puVar16 = puVar12;
        puVar17 = puVar12;
        do {
          if (iVar3 == (int)uVar7) {
LAB_1430433eb:
            puVar8 = local_898;
            if (puVar11 != (undefined1 *)0x0) {
              puVar8 = puVar11;
            }
            lVar5 = *(longlong *)(puVar8 + (longlong)puVar17);
            if (((*(byte *)(lVar5 + 0xe4) & 0x10) != 0) &&
               (plVar13 = *(longlong **)(lVar5 + 0x1c0), plVar13 != (longlong *)0x0)) {
              plVar9 = (longlong *)FUN_142d39be0(plVar13);
              if (plVar9 != (longlong *)0x0) {
                plVar13 = plVar9;
              }
              puVar11 = local_498;
              uVar15 = local_a10;
              if (plVar13 != (longlong *)0x0) {
                uVar10 = UCircularThrobber::GetPrivateStaticClass();
                lVar6 = (**(code **)(*plVar13 + 0x628))(plVar13,uVar10);
                puVar11 = local_498;
                uVar15 = local_a10;
                if (((lVar6 != 0) &&
                    (((cVar1 = FUN_142dee910(lVar6,*(undefined8 *)(lVar5 + 0x140)), cVar1 != '\0' ||
                      (cVar1 = FUN_142deeb90(lVar6,*(undefined8 *)(lVar5 + 0x140)),
                      puVar11 = local_498, uVar15 = local_a10, cVar1 != '\0')) &&
                     (fVar18 = (float)((iVar3 - local_a08) + -1) * param_2, puVar11 = local_498,
                     uVar15 = local_a10, 0.0 < fVar18)))) &&
                   ((longlong)puVar14 <= (longlong)puVar12)) {
                  if (3 < (longlong)(puVar12 + (1 - (longlong)puVar14))) {
                    lVar5 = ((ulonglong)(puVar12 + (-3 - (longlong)puVar14)) >> 2) + 1;
                    puVar14 = puVar14 + lVar5 * 4;
                    do {
                      puVar8 = local_898;
                      if (local_498 != (undefined1 *)0x0) {
                        puVar8 = local_498;
                      }
                      *(float *)(*(longlong *)(puVar8 + (longlong)puVar17) + 0xb0) =
                           fVar18 + *(float *)(*(longlong *)(puVar8 + (longlong)puVar17) + 0xb0);
                      puVar8 = local_898;
                      if (local_498 != (undefined1 *)0x0) {
                        puVar8 = local_498;
                      }
                      *(float *)(*(longlong *)(puVar8 + 0x10 + (longlong)puVar17) + 0xb0) =
                           fVar18 + *(float *)(*(longlong *)(puVar8 + 0x10 + (longlong)puVar17) +
                                              0xb0);
                      puVar8 = local_898;
                      if (local_498 != (undefined1 *)0x0) {
                        puVar8 = local_498;
                      }
                      *(float *)(*(longlong *)(puVar8 + 0x20 + (longlong)puVar17) + 0xb0) =
                           fVar18 + *(float *)(*(longlong *)(puVar8 + 0x20 + (longlong)puVar17) +
                                              0xb0);
                      puVar8 = local_898;
                      if (local_498 != (undefined1 *)0x0) {
                        puVar8 = local_498;
                      }
                      plVar13 = (longlong *)(puVar8 + 0x30 + (longlong)puVar17);
                      puVar17 = puVar17 + 0x40;
                      *(float *)(*plVar13 + 0xb0) = fVar18 + *(float *)(*plVar13 + 0xb0);
                      lVar5 = lVar5 + -1;
                    } while (lVar5 != 0);
                  }
                  if ((longlong)puVar14 <= (longlong)puVar12) {
                    lVar5 = (longlong)puVar14 << 4;
                    puVar14 = puVar12 + (1 - (longlong)puVar14);
                    do {
                      puVar17 = local_898;
                      if (local_498 != (undefined1 *)0x0) {
                        puVar17 = local_498;
                      }
                      plVar13 = (longlong *)(puVar17 + lVar5);
                      lVar5 = lVar5 + 0x10;
                      *(float *)(*plVar13 + 0xb0) = fVar18 + *(float *)(*plVar13 + 0xb0);
                      puVar14 = puVar14 + -1;
                    } while (puVar14 != (undefined1 *)0x0);
                  }
                }
              }
            }
            puVar14 = puVar12 + 1;
            puVar17 = puVar16 + 0x10;
            local_a08 = iVar3;
          }
          else {
            puVar8 = local_898;
            if (puVar11 != (undefined1 *)0x0) {
              puVar8 = puVar11;
            }
            if (*(int *)(puVar8 + 0x18 + (longlong)puVar16) !=
                *(int *)(puVar17 + 8 + (longlong)puVar8)) goto LAB_1430433eb;
          }
          uVar7 = (ulonglong)local_a04;
          iVar3 = iVar3 + 1;
          puVar12 = puVar12 + 1;
          puVar16 = puVar16 + 0x10;
        } while ((longlong)puVar12 < (longlong)uVar15);
      }
      if (puVar11 != (undefined1 *)0x0) {
        FMemory::Free(puVar11);
      }
    }
    lVar5 = 0;
    lVar6 = (longlong)(int)(uint)local_80;
    if (0 < (int)(uint)local_80) {
      do {
        puVar12 = local_488;
        if (local_88 != (undefined1 *)0x0) {
          puVar12 = local_88;
        }
        FUN_1430491b0(*(undefined8 *)(puVar12 + lVar5));
        rand();
        lVar5 = lVar5 + 0x10;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (local_88 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 143043730 DiagnosticMessage body=266 status=ok
// SIG undefined DiagnosticMessage(void)

longlong * FActorComponentTickFunction::DiagnosticMessage(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong local_28;
  int local_20;
  int local_1c;
  longlong local_18 [2];
  
  plVar1 = (longlong *)UObjectBaseUtility::GetFullName(*(undefined8 *)(param_1 + 0x50),local_18,0);
  lVar2 = plVar1[1];
  local_28 = *plVar1;
  *plVar1 = 0;
  local_20 = (int)plVar1[1];
  local_1c = *(int *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  iVar3 = local_20;
  if (local_1c < (int)((0x10 - (uint)((int)lVar2 != 0)) + local_20)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
    iVar3 = local_20;
  }
  local_20 = (0x10 - (uint)(iVar3 != 0)) + iVar3;
  if (local_1c < local_20) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,iVar3);
  }
  lVar2 = (longlong)iVar3 - (ulonglong)(iVar3 != 0);
  builtin_wcsncpy((wchar_t *)(local_28 + lVar2 * 2),L"[TickLig",8);
  lVar2 = local_28 + lVar2 * 2;
  builtin_wcsncpy((wchar_t *)(lVar2 + 0x10),L"htBe",4);
  *(undefined4 *)(lVar2 + 0x18) = 0x6d0061;
  *(undefined2 *)(lVar2 + 0x1c) = 0x5d;
  *(undefined2 *)(lVar2 + 0x1e) = 0;
  *param_2 = local_28;
  *(int *)(param_2 + 1) = local_20;
  *(int *)((longlong)param_2 + 0xc) = local_1c;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}


