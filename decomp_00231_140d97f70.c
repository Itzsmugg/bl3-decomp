// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140d97f70 FUN_140d97f70 body=247 status=ok
// SIG undefined FUN_140d97f70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d97f70(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_18;
  int local_10;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    return;
  }
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_10 = 3;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    plVar1[1] = param_1;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[2] = (longlong)FUN_140da0a10;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  uVar3 = FUN_14164ab60();
  puVar4 = (undefined8 *)FUN_14158f860(uVar3,local_res8,&local_18,L"FFriendsRefreshTimer_Tick",0);
  *(undefined8 *)(param_1 + 0x20) = *puVar4;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140d9805b;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_140d9805b:
  _DAT_14686e820 = _DAT_14686e820 + 1;
  return;
}



// FUNCTION 140d98070 FUN_140d98070 body=127 status=ok
// SIG undefined FUN_140d98070(void)

longlong FUN_140d98070(longlong param_1)

{
  uint uVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FUN_140d60360(*(undefined8 *)(param_1 + 0x38),(longlong)*(int *)(param_1 + 0x40),0,local_res8);
  uVar1 = *(uint *)(param_1 + 0x30);
  if ((int)uVar1 < *(int *)(param_1 + 0x34)) {
    do {
      *(int *)(param_1 + 0x34) =
           *(int *)(param_1 + 0x34) -
           *(int *)(*(longlong *)
                     (*(longlong *)(param_1 + 0x38) + -0x10 +
                     (longlong)*(int *)(param_1 + 0x40) * 0x10) + 0x18);
      TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                (param_1 + 0x38,*(int *)(param_1 + 0x40) + -1,1,1);
      uVar1 = *(uint *)(param_1 + 0x30);
    } while ((int)uVar1 < *(int *)(param_1 + 0x34));
  }
  *(undefined8 *)(param_1 + 0x100) = 0;
  return (ulonglong)(uVar1 >> 8) << 8;
}



// FUNCTION 140d980f0 FUN_140d980f0 body=629 status=ok
// SIG undefined FUN_140d980f0(void)

void FUN_140d980f0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  char cVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong local_78;
  longlong *local_70;
  undefined **local_68 [2];
  longlong *local_58;
  longlong local_50;
  
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  cVar9 = (**(code **)(*(longlong *)*param_2 + 0x30))();
  if ((cVar9 != '\0') && (*param_1 != 0)) {
    plVar10 = (longlong *)UListView::OnItemSelectionChanged();
    plVar13 = (longlong *)*plVar10;
    plVar14 = plVar13 + (int)plVar10[1];
    plVar10 = param_2;
    plVar15 = param_2;
    for (; plVar13 != plVar14; plVar13 = plVar13 + 1) {
      if (*plVar13 == 0) {
        bVar5 = true;
        plVar15 = (longlong *)0x0;
        lVar11 = 0;
        plVar12 = (longlong *)0x0;
      }
      else {
        bVar7 = true;
        bVar6 = true;
        lVar11 = FUN_142547b50(*plVar13,local_68);
        plVar12 = *(longlong **)(lVar11 + 0x10);
        lVar11 = *(longlong *)(lVar11 + 8);
        plVar10 = plVar12;
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
      local_78 = lVar11;
      local_70 = plVar12;
      if ((bVar5) && (bVar5 = false, plVar15 != (longlong *)0x0)) {
        LOCK();
        plVar1 = plVar15 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar2 = (int *)((longlong)plVar15 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
      if ((bVar6) && (bVar6 = false, plVar10 != (longlong *)0x0)) {
        LOCK();
        plVar1 = plVar10 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      if (bVar7) {
        bVar7 = false;
        local_68[0] = &PTR_FUN_143f740c8;
        if (local_50 != 0) {
          FMemory::Free();
        }
        plVar1 = local_58;
        local_68[0] = &PTR_FUN_143f73d18;
        if (local_58 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_58 + 1;
          lVar8 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_58)(local_58);
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
      if (lVar11 != 0) {
        FUN_140d98370(param_1,param_2,&local_78);
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar12 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
    }
    FUN_140da4e60(param_1);
  }
  return;
}



// FUNCTION 140d98370 FUN_140d98370 body=440 status=ok
// SIG undefined FUN_140d98370(void)

void FUN_140d98370(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  int local_30;
  longlong local_28;
  longlong local_20;
  
  if (((*param_1 != 0) && (*param_3 != 0)) &&
     (cVar5 = (**(code **)(*(longlong *)*param_2 + 0x30))(), cVar5 != '\0')) {
    local_58 = *(undefined8 *)(*param_2 + 0x10);
    local_50 = *(longlong **)(*param_2 + 0x18);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    local_48 = *param_3;
    local_40 = (longlong *)param_3[1];
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    uVar7 = FUN_140bb74b0(*param_1);
    cVar5 = FUN_140d89890(uVar7,&local_48,&local_58,0);
    plVar4 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_40)(local_40);
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
    plVar4 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    local_28 = *param_3;
    local_20 = param_3[1];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    cVar6 = FUN_140bca7d0(*param_1,&local_28);
    if (((cVar5 != '\0') || (cVar6 != '\0')) && (lVar8 = FUN_140d84560(param_1,param_3), lVar8 != 0)
       ) {
      FUN_140d83080(*param_2,&local_38,1,*param_1);
      if (1 < local_30) {
        FUN_140d27010(lVar8,&local_38);
      }
      if (local_38 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140d98530 FUN_140d98530 body=518 status=ok
// SIG undefined FUN_140d98530(void)

void FUN_140d98530(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_18;
  longlong *local_10;
  
  if (((((*(char *)(param_1 + 0x8c) != '\0') && (*(longlong *)(param_1 + 0x10) != 0)) &&
       (lVar5 = FUN_140bba5e0(), *(longlong *)(param_1 + 0x10) != 0)) &&
      ((cVar4 = (**(code **)(*(longlong *)*param_2 + 0x20))(), cVar4 != '\0' && (lVar5 != 0)))) &&
     ((*(longlong **)(param_4 + 8) != (longlong *)0x0 &&
      ((cVar4 = (**(code **)(**(longlong **)(param_4 + 8) + 0x20))(), cVar4 != '\0' &&
       (1 < *(int *)(param_3 + 8))))))) {
    lVar5 = operator_new(0x188);
    if (lVar5 == 0) {
      local_18 = 0;
    }
    else {
      local_18 = FUN_140d63a10(lVar5);
    }
    local_10 = (longlong *)operator_new(0x18);
    if (local_10 != (longlong *)0x0) {
      *(undefined4 *)(local_10 + 1) = 1;
      *local_10 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)local_10 + 0xc) = 1;
      local_10[2] = local_18;
    }
    SharedPointerInternals::EnableSharedFromThis(&local_18,local_18,local_18);
    FUN_140d87ff0(local_18,param_2,*(undefined8 *)(param_1 + 0x10));
    FUN_1404c0940(local_18 + 0x30,param_4);
    FString::operator=(local_18 + 0x178,param_3);
    plVar3 = local_10;
    lVar5 = local_18;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_10 + 1) = (int)local_10[1] + 1;
      UNLOCK();
    }
    iVar2 = *(int *)(param_1 + 0xb0);
    *(int *)(param_1 + 0xb0) = iVar2 + 1;
    if (*(int *)(param_1 + 0xb4) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xa8,iVar2);
    }
    plVar6 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0xa8));
    *plVar6 = lVar5;
    plVar6[1] = (longlong)plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar6 = plVar3 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    plVar3 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_10 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140d98740 FUN_140d98740 body=846 status=ok
// SIG undefined FUN_140d98740(void)

void FUN_140d98740(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  int local_70;
  undefined **local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if (((((*(char *)(param_1 + 0x8c) != '\0') && (*(longlong *)(param_1 + 0x10) != 0)) &&
       (lVar7 = FUN_140bba5e0(), *(longlong *)(param_1 + 0x10) != 0)) &&
      ((cVar4 = (**(code **)(*(longlong *)*param_2 + 0x20))(), cVar4 != '\0' && (lVar7 != 0)))) &&
     (lVar7 = FUN_140d3a750(lVar7,param_2), lVar7 != 0)) {
    uVar8 = FUN_140bb73a0(*(undefined8 *)(param_1 + 0x10));
    FUN_140d79000(uVar8,&local_78,param_2);
    if (local_70 != 0) {
      lVar7 = *param_3;
      lVar11 = (longlong)(int)param_3[1] * 0x10 + lVar7;
      iVar2 = local_70;
      for (; lVar7 != lVar11; lVar7 = lVar7 + 0x10) {
        local_70 = iVar2;
        if (iVar2 < 1) {
          iVar5 = 0;
        }
        else {
          iVar5 = rand();
          iVar6 = (int)((float)iVar5 * 3.051851e-05 * (float)iVar2);
          iVar5 = iVar2 + -1;
          if (iVar6 <= iVar2 + -1) {
            iVar5 = iVar6;
          }
        }
        local_58 = *(longlong *)(local_78 + 0x10 + (longlong)iVar5 * 0x28);
        local_60 = *(longlong **)(local_78 + 8 + (longlong)iVar5 * 0x28);
        if (local_58 != 0) {
          LOCK();
          *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
          UNLOCK();
        }
        local_68 = &PTR_FUN_143f740c8;
        local_50 = 0;
        local_48 = 0;
        if ((local_60 != (longlong *)0x0) &&
           (cVar4 = (**(code **)(*local_60 + 0x20))(local_60), cVar4 != '\0')) {
          lVar9 = operator_new(0x188);
          if (lVar9 == 0) {
            lVar9 = 0;
          }
          else {
            lVar9 = FUN_140d63a90(lVar9);
          }
          local_80 = (longlong *)operator_new(0x18);
          if (local_80 != (longlong *)0x0) {
            *(undefined4 *)(local_80 + 1) = 1;
            *(undefined4 *)((longlong)local_80 + 0xc) = 1;
            *local_80 = (longlong)&PTR_FUN_143f3f2e0;
            local_80[2] = lVar9;
          }
          local_88 = lVar9;
          SharedPointerInternals::EnableSharedFromThis(&local_88,lVar9,lVar9);
          FUN_140d87ff0(local_88,param_2,*(undefined8 *)(param_1 + 0x10));
          FUN_1404c0940(local_88 + 0x30,&local_68);
          FString::operator=(local_88 + 0x178,lVar7);
          plVar3 = local_80;
          lVar9 = local_88;
          if (local_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_80 + 1) = (int)local_80[1] + 1;
            UNLOCK();
          }
          iVar2 = *(int *)(param_1 + 0xb0);
          *(int *)(param_1 + 0xb0) = iVar2 + 1;
          if (*(int *)(param_1 + 0xb4) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xa8,iVar2);
          }
          plVar10 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0xa8));
          *plVar10 = lVar9;
          plVar10[1] = (longlong)plVar3;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
            LOCK();
            plVar10 = plVar3 + 1;
            lVar9 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
          plVar3 = local_80;
          if (local_80 != (longlong *)0x0) {
            LOCK();
            plVar10 = local_80 + 1;
            lVar9 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_80)(local_80);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
        }
        FUN_1404bf980();
        iVar2 = local_70;
      }
    }
    FUN_1404bebc0(&local_78);
  }
  return;
}



// FUNCTION 140d98a90 FUN_140d98a90 body=566 status=ok
// SIG undefined FUN_140d98a90(void)

void FUN_140d98a90(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *local_48;
  longlong *local_40;
  undefined **local_38;
  undefined8 local_30;
  longlong *local_28;
  longlong local_20;
  undefined8 local_18;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x20))(), cVar4 != '\0')) {
    plVar5 = (longlong *)operator_new(0x178);
    plVar6 = (longlong *)0x0;
    plVar8 = plVar6;
    if (plVar5 != (longlong *)0x0) {
      FUN_140d63580(plVar5);
      *(undefined1 *)(plVar5 + 0xb) = 0x13;
      *plVar5 = (longlong)&PTR_FUN_144530b88;
      plVar8 = plVar5;
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      plVar5[2] = (longlong)plVar8;
      plVar6 = plVar5;
    }
    local_48 = plVar8;
    local_40 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_48,plVar8,plVar8);
    FUN_140d87ff0(local_48,param_2,*(undefined8 *)(param_1 + 0x10));
    local_30 = *param_3;
    local_28 = (longlong *)param_3[1];
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
    }
    local_38 = &PTR_FUN_143f740c8;
    local_20 = 0;
    local_18 = 0;
    FUN_1404c0940(local_48 + 6,&local_38);
    if (local_20 != 0) {
      FMemory::Free();
    }
    plVar6 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_28 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_28 + 8))(local_28,1);
        }
      }
    }
    plVar8 = local_40;
    plVar6 = local_48;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    iVar2 = *(int *)(param_1 + 0xb0);
    *(int *)(param_1 + 0xb0) = iVar2 + 1;
    if (*(int *)(param_1 + 0xb4) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xa8,iVar2);
    }
    puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0xa8));
    *puVar7 = plVar6;
    puVar7[1] = plVar8;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar8 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
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
    }
    plVar6 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_40 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_40)(local_40);
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
  }
  return;
}



// FUNCTION 140d98cd0 FUN_140d98cd0 body=629 status=ok
// SIG undefined FUN_140d98cd0(void)

void FUN_140d98cd0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  short *psVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined1 local_res8 [8];
  longlong local_68;
  ulonglong local_60;
  undefined8 local_58;
  longlong *local_50;
  longlong local_48 [2];
  longlong *local_38;
  
  if ((((*(longlong *)(param_1 + 0x10) != 0) && (*(longlong **)(*param_2 + 0x10) != (longlong *)0x0)
       ) && (cVar5 = (**(code **)(**(longlong **)(*param_2 + 0x10) + 0x20))(), cVar5 != '\0')) &&
     (lVar13 = *(longlong *)(param_1 + 0x18), lVar13 != 0)) {
    plVar1 = (longlong *)(lVar13 + 0x28);
    plVar6 = (longlong *)FMemory::Realloc(0,0x30);
    local_38 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      plVar6[1] = param_1;
      *plVar6 = (longlong)&DAT_143f3ed00;
      plVar6[2] = (longlong)FUN_140dcce10;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar6[4] = lVar7;
      *plVar6 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    uVar12 = 0;
    if (plVar6 != (longlong *)0x0) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
      puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x20))(plVar6,local_res8);
      iVar3 = *(int *)(lVar13 + 0x30);
      uVar12 = *puVar8;
      *(int *)(lVar13 + 0x30) = iVar3 + 1;
      if (*(int *)(lVar13 + 0x34) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar3);
      }
      puVar8 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar1);
      *puVar8 = plVar6;
      *(undefined4 *)(puVar8 + 1) = 3;
    }
    *(undefined8 *)(param_1 + 0x48) = uVar12;
    lVar13 = *param_2;
    local_58 = *(undefined8 *)(lVar13 + 0x10);
    local_50 = *(longlong **)(lVar13 + 0x18);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
      lVar13 = *param_2;
    }
    uVar12 = *(undefined8 *)(lVar13 + 0x38);
    psVar9 = (short *)FUN_140d7f0c0(*(undefined1 *)(lVar13 + 0x58));
    local_68 = 0;
    local_60 = 0;
    if ((psVar9 != (short *)0x0) && (*psVar9 != 0)) {
      lVar13 = -1;
      do {
        lVar13 = lVar13 + 1;
      } while (psVar9[lVar13] != 0);
      uVar11 = (int)lVar13 + 1;
      local_60 = (ulonglong)uVar11;
      if (0 < (int)uVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      }
      FGenericPlatformString::Memcpy(local_68,psVar9,(longlong)(int)uVar11 * 2);
    }
    lVar13 = *param_2;
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar10 = FUN_140d83080(lVar13,local_48,0,*(undefined8 *)(param_1 + 0x10));
    FUN_142b76140(uVar4,&local_58,&local_68,lVar13 + 0x68,uVar10,uVar12,lVar13 + 0xa8);
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    if (local_68 != 0) {
      FMemory::Free();
    }
    plVar1 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_50 + 1;
      lVar13 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar1 + 8))(plVar1,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140d98f50 FUN_140d98f50 body=1488 status=ok
// SIG undefined FUN_140d98f50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d98f50(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong *plVar8;
  char cVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong *plVar18;
  undefined1 auStack_388 [32];
  undefined8 local_368;
  longlong *local_358;
  undefined **local_350;
  longlong *local_348;
  longlong *local_340;
  longlong local_338;
  undefined8 local_330;
  longlong local_328 [2];
  longlong *local_318;
  longlong *local_310;
  longlong *local_308;
  longlong local_300;
  longlong *local_2f8;
  longlong *local_2f0;
  undefined1 local_2e8 [8];
  undefined1 local_2e0 [8];
  longlong local_2d8 [2];
  undefined **local_2c8 [2];
  longlong *local_2b8;
  longlong local_2b0;
  undefined1 local_2a0 [24];
  undefined1 local_288 [8];
  undefined1 local_280 [40];
  undefined8 local_258;
  undefined1 local_250 [16];
  longlong local_240;
  longlong local_230;
  undefined1 local_1f8 [280];
  undefined1 local_e0 [56];
  longlong local_a8;
  undefined1 local_88 [16];
  longlong local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_388;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  local_358 = (longlong *)((ulonglong)local_358 & 0xffffffff00000000);
  if ((*(longlong *)(param_1 + 0x10) != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
    local_300 = param_1;
    plVar10 = (longlong *)UListView::OnItemSelectionChanged();
    plVar13 = (longlong *)*plVar10;
    plVar10 = plVar13 + (int)plVar10[1];
    local_308 = plVar10;
    if (plVar13 != plVar10) {
      do {
        local_310 = plVar13;
        if (*plVar13 == 0) {
          bVar5 = true;
          local_358 = (longlong *)0x0;
          local_318 = (longlong *)0x0;
          plVar18 = (longlong *)0x0;
        }
        else {
          bVar7 = true;
          bVar6 = true;
          lVar11 = FUN_142547b50(*plVar13,local_2c8);
          plVar18 = *(longlong **)(lVar11 + 0x10);
          local_318 = *(longlong **)(lVar11 + 8);
          plVar10 = plVar18;
          if (plVar18 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
            UNLOCK();
          }
        }
        plVar8 = local_318;
        plVar3 = local_358;
        if ((bVar5) && (bVar5 = false, local_358 != (longlong *)0x0)) {
          LOCK();
          plVar1 = local_358 + 1;
          lVar11 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_358)(local_358);
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
        if ((bVar6) && (bVar6 = false, plVar10 != (longlong *)0x0)) {
          LOCK();
          plVar3 = plVar10 + 1;
          lVar11 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar2 = (int *)((longlong)plVar10 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
        if (bVar7) {
          bVar7 = false;
          local_2c8[0] = &PTR_FUN_143f740c8;
          if (local_2b0 != 0) {
            FMemory::Free();
          }
          plVar3 = local_2b8;
          local_2c8[0] = &PTR_FUN_143f73d18;
          if (local_2b8 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_2b8 + 1;
            lVar11 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*local_2b8)(local_2b8);
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
        }
        if (plVar8 != (longlong *)0x0) {
          FUN_140d63d70(local_288);
          if (plVar18 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
            UNLOCK();
          }
          lVar11 = *(longlong *)(param_1 + 0x10);
          local_350 = &PTR_FUN_143f740c8;
          local_338 = 0;
          local_330 = 0;
          local_348 = plVar8;
          local_340 = plVar18;
          if (((lVar11 != 0) && (plVar8 != (longlong *)0x0)) &&
             (cVar9 = (**(code **)(*plVar8 + 0x20))(plVar8), cVar9 != '\0')) {
            FUN_1404c0940(local_280,&local_350);
            FUN_140d88d60(local_250,&local_350,lVar11);
            FUN_140d88960(local_1f8,&local_350,lVar11,1);
            FUN_140d89120(local_e0,&local_350,lVar11);
            if (local_348 != (longlong *)0x0) {
              (**(code **)(*local_348 + 0x20))();
            }
            FUN_140d88800(local_58,&local_350,lVar11);
            puVar12 = (undefined8 *)FDateTime::UtcNow(local_2e8);
            local_258 = *puVar12;
          }
          local_350 = &PTR_FUN_143f740c8;
          if (local_338 != 0) {
            FMemory::Free();
          }
          plVar13 = local_340;
          local_350 = &PTR_FUN_143f73d18;
          if (local_340 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_340 + 1;
            lVar11 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*local_340)(local_340);
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
          lVar11 = *(longlong *)(param_1 + 0x18);
          plVar13 = (longlong *)FMemory::Realloc(0,0x30);
          if (plVar13 != (longlong *)0x0) {
            plVar13[1] = param_1;
            *plVar13 = (longlong)&DAT_143f3ed00;
            plVar13[2] = (longlong)FUN_140dcce10;
            lVar14 = FDelegateHandle::GenerateNewID();
            plVar13[4] = lVar14;
            *plVar13 = (longlong)&PTR_GetPoolName_143f3ed48;
          }
          uVar17 = 0;
          if (plVar13 != (longlong *)0x0) {
            FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar11 + 0x28,1);
            puVar12 = (undefined8 *)(**(code **)(*plVar13 + 0x20))(plVar13,local_2e0);
            iVar4 = *(int *)(lVar11 + 0x30);
            uVar17 = *puVar12;
            *(int *)(lVar11 + 0x30) = iVar4 + 1;
            if (*(int *)(lVar11 + 0x34) < iVar4 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar11 + 0x28,iVar4);
            }
            puVar12 = (undefined8 *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar11 + 0x28));
            *puVar12 = plVar13;
            *(undefined4 *)(puVar12 + 1) = 3;
            param_1 = local_300;
          }
          local_2f8 = local_318;
          *(undefined8 *)(param_1 + 0x48) = uVar17;
          if (plVar18 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
            UNLOCK();
          }
          local_328[0] = 0;
          local_328[1] = 0xd;
          local_2f0 = plVar18;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_328,0);
          FGenericPlatformString::Memcpy(local_328[0],L"FriendStatus",0x1a);
          uVar17 = *(undefined8 *)(param_1 + 0x18);
          uVar15 = FUN_140d83260(local_288,local_2d8,0,*(undefined8 *)(param_1 + 0x10));
          uVar16 = FGuid::NewGuid(local_2a0);
          local_368 = uVar15;
          FUN_142b75ff0(uVar17,&local_2f8,local_328,uVar16);
          if (local_2d8[0] != 0) {
            FMemory::Free();
          }
          if (local_328[0] != 0) {
            FMemory::Free();
          }
          plVar13 = local_2f0;
          *(undefined4 *)(param_1 + 0x9c) = 0;
          *(undefined1 *)(param_1 + 0xa0) = 0;
          if (local_2f0 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_2f0 + 1;
            lVar11 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*local_2f0)(local_2f0);
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
          FUN_140ce1610(local_68);
          if (local_78 != 0) {
            FMemory::Free();
          }
          TArray<FNamedInterfaceDef,FDefaultAllocator>::
          ~TArray<FNamedInterfaceDef,FDefaultAllocator>(local_88);
          if (local_a8 != 0) {
            FMemory::Free();
          }
          FUN_140d65960(local_1f8);
          if (local_230 != 0) {
            FMemory::Free();
          }
          if (local_240 != 0) {
            FMemory::Free();
          }
          FUN_1404bf980(local_280);
          plVar13 = local_310;
        }
        if (plVar18 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar18 + 1;
          lVar11 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plVar18)(plVar18);
            LOCK();
            piVar2 = (int *)((longlong)plVar18 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar18 + 8))(plVar18,1);
            }
          }
        }
        plVar13 = plVar13 + 1;
      } while (plVar13 != local_308);
    }
  }
  return;
}



// FUNCTION 140d99520 FUN_140d99520 body=231 status=ok
// SIG undefined FUN_140d99520(void)

void FUN_140d99520(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_res18 [2];
  
  if ((param_3 != 0) && (*(int *)(param_1 + 0x58) != 0)) {
    FUN_1404c0940(param_1 + 8,param_2 + 8);
    FUN_1404c0940(param_1 + 0x30,param_2 + 0x30);
    if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
       (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(), cVar1 != '\0')) {
      if (*(char *)(param_2 + 0x58) == '\0') {
        if ((*(longlong **)(param_1 + 0x38) != (longlong *)0x0) &&
           (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))(), cVar1 != '\0')) {
          local_res18[0] = *(undefined4 *)(param_1 + 0x58);
          uVar2 = FUN_140bb7630(param_3);
          FUN_140d61ce0(uVar2,param_1 + 0x30,1,0x22,local_res18,param_1);
        }
      }
      else {
        local_res18[0] = *(undefined4 *)(param_1 + 0x58);
        uVar2 = FUN_140bb7630(param_3);
        FUN_140d62380(uVar2,0,0x22,local_res18,param_1);
      }
    }
  }
  return;
}



// FUNCTION 140d99610 FUN_140d99610 body=1675 status=ok
// SIG undefined FUN_140d99610(void)

void FUN_140d99610(longlong param_1,int *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  char local_res10 [8];
  char local_res18;
  char local_res19;
  int local_res20 [2];
  int local_1d8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  longlong local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  longlong *local_1b0;
  longlong local_1a8;
  longlong *local_1a0;
  int *local_198;
  int *local_190;
  undefined **local_188;
  undefined **local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined **local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  int local_128;
  undefined **local_118;
  undefined **local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined **local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  char local_b8;
  undefined **local_a8;
  undefined **local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined **local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  
  plVar1 = (longlong *)(param_2 + 4);
  piVar3 = param_2 + 2;
  if (((longlong *)*plVar1 != (longlong *)0x0) &&
     (cVar4 = (**(code **)(*(longlong *)*plVar1 + 0x20))(), cVar4 != '\0')) {
    FUN_140d76a00(param_1 + 0xf0,&local_1d4,piVar3);
    if ((local_1d4 == -1) ||
       (lVar7 = (longlong)local_1d4 * 0x90 + *(longlong *)(param_1 + 0xf0), lVar7 == 0)) {
      local_198 = piVar3;
      FUN_140d5d290(param_1 + 0xf0,&local_1d0,&local_198,0);
      lVar7 = (longlong)local_1d0 * 0x90 + *(longlong *)(param_1 + 0xf0);
    }
    plVar2 = (longlong *)(lVar7 + 0x38);
    iVar6 = 0;
    if (*(int *)(lVar7 + 0x40) != *(int *)(lVar7 + 0x6c)) {
      lVar8 = *(longlong *)(lVar7 + 0x78);
      if (*(longlong *)(lVar7 + 0x78) == 0) {
        lVar8 = lVar7 + 0x70;
      }
      iVar5 = *(int *)(lVar8 + ((longlong)*(int *)(lVar7 + 0x80) - 1U & (longlong)*param_2) * 4);
      if (iVar5 != -1) {
        do {
          lVar7 = *plVar2 + (longlong)iVar5 * 0x28;
          if (*(int *)(*plVar2 + (longlong)iVar5 * 0x28) == *param_2) {
            if ((iVar5 != -1) && (lVar7 != 0)) goto LAB_140d9975f;
            break;
          }
          iVar5 = *(int *)(lVar7 + 0x20);
        } while (iVar5 != -1);
      }
    }
    local_190 = param_2;
    FUN_140d5cca0(plVar2,&local_1cc,&local_190,0);
    lVar7 = *plVar2 + (longlong)local_1cc * 0x28;
LAB_140d9975f:
    lVar7 = lVar7 + 8;
    switch(*param_2) {
    case 6:
      FUN_140d9a130(param_1,param_2,lVar7);
      break;
    case 7:
      FUN_140d9c4b0(param_1,param_2,lVar7);
      break;
    case 8:
      FUN_140d9c8e0(param_1,param_2,lVar7);
      break;
    case 9:
      FUN_140d9d040(param_1,param_2,lVar7);
      break;
    case 10:
      if (((*(longlong *)(param_1 + 0x10) != 0) && ((longlong *)*plVar1 != (longlong *)0x0)) &&
         (cVar4 = (**(code **)(*(longlong *)*plVar1 + 0x20))(), cVar4 != '\0')) {
        iVar6 = FUN_140bba270(*(undefined8 *)(param_1 + 0x10));
        local_res20[0] = 0;
        FVariantData::GetValue(lVar7,local_res20);
        if ((iVar6 != 0) && (iVar6 != local_res20[0])) {
          FVariantData::SetValue(lVar7,iVar6);
          local_180 = &PTR_FUN_143f740c8;
          local_158 = &PTR_FUN_143f740c8;
          *(undefined1 *)(param_1 + 0xa0) = 1;
          local_188 = &PTR_FUN_144531300;
          local_130 = 10;
          local_178 = 0;
          uStack_170 = 0;
          local_168 = 0;
          local_160 = 0;
          local_150 = 0;
          local_148 = 0;
          local_140 = 0;
          local_138 = 0;
          local_128 = iVar6;
          FUN_140d99520(&local_188,param_2,*(undefined8 *)(param_1 + 0x10));
          if ((char)param_2[0x16] != '\0') {
            FUN_140d84110(param_1,&local_1c8,piVar3);
            *(int *)(local_1c8 + 0x68) = iVar6;
            FUN_140d9d620(param_1,piVar3,10);
            plVar1 = local_1c0;
            if (local_1c0 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_1c0 + 1;
              lVar7 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*local_1c0)(local_1c0);
                LOCK();
                piVar3 = (int *)((longlong)plVar1 + 0xc);
                iVar6 = *piVar3;
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*local_1c0 + 8))(local_1c0,1);
                }
              }
            }
          }
          FUN_1404bf980(&local_158);
          FUN_1404bf980(&local_180);
        }
      }
      break;
    case 0xb:
      FUN_140d9cd20(param_1,param_2,lVar7);
      break;
    case 0xc:
      FUN_140d9cb40(param_1,param_2,lVar7);
      break;
    case 0xe:
      if (((*(longlong *)(param_1 + 0x10) != 0) && ((longlong *)*plVar1 != (longlong *)0x0)) &&
         (cVar4 = (**(code **)(*(longlong *)*plVar1 + 0x20))(), cVar4 != '\0')) {
        FUN_140dbc5d0(*(longlong *)(param_1 + 0x10) + 0x5f0,&local_res18);
        cVar4 = '\0';
        if ((local_res18 == '\x02') && (cVar4 = '\0', local_res19 != '\x01')) {
          cVar4 = '\x01';
        }
        FVariantData::GetValue(lVar7,local_res10);
        if (cVar4 != local_res10[0]) {
          FVariantData::SetValue(lVar7,cVar4);
          local_110 = &PTR_FUN_143f740c8;
          local_e8 = &PTR_FUN_143f740c8;
          *(undefined1 *)(param_1 + 0xa0) = 1;
          local_118 = &PTR_FUN_144530de0;
          local_c0 = 0xe;
          local_108 = 0;
          uStack_100 = 0;
          local_f8 = 0;
          local_f0 = 0;
          local_e0 = 0;
          local_d8 = 0;
          local_d0 = 0;
          local_c8 = 0;
          local_b8 = cVar4;
          FUN_140d99520(&local_118,param_2,*(undefined8 *)(param_1 + 0x10));
          if ((char)param_2[0x16] != '\0') {
            FUN_140d84110(param_1,&local_1b8,piVar3);
            *(char *)(local_1b8 + 0x80) = cVar4;
            FUN_140d9d620(param_1,piVar3,0xe);
            plVar1 = local_1b0;
            if (local_1b0 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_1b0 + 1;
              lVar7 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*local_1b0)(local_1b0);
                LOCK();
                piVar3 = (int *)((longlong)plVar1 + 0xc);
                iVar6 = *piVar3;
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*local_1b0 + 8))(local_1b0,1);
                }
              }
            }
          }
          FUN_1404bf980(&local_e8);
          FUN_1404bf980(&local_110);
        }
      }
      break;
    case 0xf:
      FUN_140d9c6b0(param_1,param_2,lVar7);
      break;
    case 0x10:
      FUN_140d99e90(param_1,param_2,lVar7);
      break;
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
      FUN_140d9bd50(param_1,param_2,lVar7);
      break;
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
      FUN_140d99d00(param_1,param_2,lVar7);
      break;
    case 0x1d:
      FUN_140d9c2a0(param_1,param_2,lVar7);
      break;
    case 0x1e:
      if (((*(longlong *)(param_1 + 0x10) != 0) && ((longlong *)*plVar1 != (longlong *)0x0)) &&
         (cVar4 = (**(code **)(*(longlong *)*plVar1 + 0x20))(), cVar4 != '\0')) {
        local_1d8 = 0;
        lVar8 = FUN_140bbb190(*(undefined8 *)(param_1 + 0x10),plVar1);
        if (lVar8 != 0) {
          iVar6 = FUN_140d00180(lVar8);
        }
        FVariantData::GetValue(lVar7,&local_1d8);
        if ((iVar6 != local_1d8) && (iVar6 != 0)) {
          FVariantData::SetValue(lVar7,iVar6);
          local_a0 = &PTR_FUN_143f740c8;
          local_78 = &PTR_FUN_143f740c8;
          *(undefined1 *)(param_1 + 0xa0) = 1;
          local_a8 = &PTR_FUN_144531418;
          local_50 = 0x1e;
          local_98 = 0;
          uStack_90 = 0;
          local_88 = 0;
          local_80 = 0;
          local_70 = 0;
          local_68 = 0;
          local_60 = 0;
          local_58 = 0;
          local_48 = iVar6;
          FUN_140d99520(&local_a8,param_2,*(undefined8 *)(param_1 + 0x10));
          if ((char)param_2[0x16] != '\0') {
            FUN_140d84110(param_1,&local_1a8,piVar3);
            *(int *)(local_1a8 + 0x8c) = iVar6;
            FUN_140d9d620(param_1,piVar3,0x1e);
            plVar1 = local_1a0;
            if (local_1a0 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_1a0 + 1;
              lVar7 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*local_1a0)(local_1a0);
                LOCK();
                piVar3 = (int *)((longlong)plVar1 + 0xc);
                iVar6 = *piVar3;
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*local_1a0 + 8))(local_1a0,1);
                }
              }
            }
          }
          FUN_1404bf980(&local_78);
          FUN_1404bf980(&local_a0);
        }
      }
    }
  }
  return;
}



// FUNCTION 140d99d00 FUN_140d99d00 body=395 status=ok
// SIG undefined FUN_140d99d00(void)

void FUN_140d99d00(longlong param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int local_res8 [2];
  undefined **local_88;
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  undefined4 local_2c;
  int local_28;
  
  if ((((*(longlong *)(param_1 + 0x10) != 0) && (*(longlong **)(param_2 + 4) != (longlong *)0x0)) &&
      (cVar2 = (**(code **)(**(longlong **)(param_2 + 4) + 0x20))(), cVar2 != '\0')) &&
     (lVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x148))(), lVar4 != 0)) {
    iVar1 = *param_2;
    iVar3 = 0;
    if (iVar1 == 0x19) {
      iVar3 = FUN_140b27f60(param_2 + 2,lVar4);
    }
    else if (iVar1 == 0x1a) {
      iVar3 = FUN_140b27ea0(param_2 + 2,lVar4);
    }
    else if (iVar1 == 0x1b) {
      iVar3 = FUN_140b27fc0(param_2 + 2,lVar4);
    }
    else if (iVar1 == 0x1c) {
      iVar3 = FUN_140b27f00(param_2 + 2,lVar4);
    }
    FVariantData::GetValue(param_3,local_res8);
    if (iVar3 != local_res8[0]) {
      FVariantData::SetValue(param_3,iVar3);
      *(undefined1 *)(param_1 + 0xa0) = 1;
      local_2c = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_80 = &PTR_FUN_143f740c8;
      local_58 = &PTR_FUN_143f740c8;
      local_88 = &PTR_FUN_144530e38;
      local_30 = *param_2;
      local_68 = 0;
      local_60 = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      local_38 = 0;
      local_28 = iVar3;
      FUN_140d99520(&local_88,param_2,*(undefined8 *)(param_1 + 0x10));
      FUN_1404bf980(&local_58);
      FUN_1404bf980(&local_80);
    }
  }
  return;
}



// FUNCTION 140d99e90 FUN_140d99e90 body=662 status=ok
// SIG undefined FUN_140d99e90(void)

void FUN_140d99e90(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  void **ppvVar12;
  uint local_res8 [2];
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  longlong *local_a0;
  undefined **local_98;
  undefined **local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined **local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  uint local_38;
  
  uVar9 = 0;
  local_res8[0] = 0;
  if (((*(longlong *)(param_1 + 0x10) != 0) && (*(longlong **)(param_2 + 0x10) != (longlong *)0x0))
     && (cVar8 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))(), cVar8 != '\0')) {
    lVar10 = FUN_140bbb190(*(undefined8 *)(param_1 + 0x10),param_2 + 0x10);
    if (lVar10 != 0) {
      uVar9 = FUN_140cfd6b0(lVar10);
    }
    FVariantData::GetValue(param_3,local_res8);
    if (local_res8[0] != uVar9) {
      local_res8[0] = uVar9 & 0xff;
      FVariantData::SetValue(param_3);
      *(undefined1 *)(param_1 + 0xa0) = 1;
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      lVar10 = *(longlong *)(DAT_146b33f38 + 0x98);
      if (lVar10 == 0) {
        local_b8 = (void *)0x0;
        ppvVar12 = &local_b8;
        local_b0 = 0;
        bVar6 = false;
        bVar5 = true;
      }
      else if ((((int)uVar9 < 0) || (*(int *)(lVar10 + 0x48) <= (int)uVar9)) ||
              (lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x40) + (longlong)(int)uVar9 * 8),
              lVar10 == 0)) {
        local_c8 = (void *)0x0;
        ppvVar12 = &local_c8;
        local_c0 = 0;
        bVar6 = true;
        bVar5 = false;
      }
      else {
        puVar11 = (undefined8 *)FText::ToString(lVar10 + 0x30);
        local_c8 = (void *)0x0;
        iVar3 = *(int *)(puVar11 + 1);
        pvVar4 = (void *)*puVar11;
        local_c0 = CONCAT44(local_c0._4_4_,iVar3);
        if (iVar3 == 0) {
          local_c0 = 0;
          ppvVar12 = &local_c8;
          bVar6 = true;
          bVar5 = false;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c8,iVar3,0);
          _guard_xfg_dispatch_icall_nop(local_c8,pvVar4,(longlong)iVar3 * 2);
          ppvVar12 = &local_c8;
          bVar6 = true;
          bVar5 = false;
        }
      }
      pvVar4 = *ppvVar12;
      *ppvVar12 = (void *)0x0;
      ppvVar12[1] = (void *)0x0;
      if ((bVar5) && (local_b8 != (void *)0x0)) {
        FMemory::Free();
      }
      if ((bVar6) && (local_c8 != (void *)0x0)) {
        FMemory::Free();
      }
      local_90 = &PTR_FUN_143f740c8;
      local_68 = &PTR_FUN_143f740c8;
      local_40 = 0x10;
      local_98 = &PTR_FUN_144530e70;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      local_70 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      local_38 = uVar9;
      FUN_140d99520(&local_98,param_2,*(undefined8 *)(param_1 + 0x10));
      if (*(char *)(param_2 + 0x58) != '\0') {
        FUN_140d84110(param_1,&local_a8,param_2 + 8);
        *(uint *)((longlong)local_a8 + 0x84) = uVar9;
        FUN_140d9d620(param_1,param_2 + 8,0x10);
        plVar7 = local_a0;
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_a0 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_a0)(local_a0);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_a0 + 8))(local_a0,1);
            }
          }
        }
      }
      FUN_1404bf980(&local_68);
      FUN_1404bf980(&local_90);
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
    }
  }
  return;
}



// FUNCTION 140d9a130 FUN_140d9a130 body=512 status=ok
// SIG undefined FUN_140d9a130(void)

void FUN_140d9a130(longlong param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int local_res8 [2];
  undefined **local_a8;
  undefined8 local_a0;
  undefined **local_98;
  undefined **local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined **local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined **local_38;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  byte local_2b;
  byte local_2a;
  byte local_29;
  
  if (((*(longlong *)(param_1 + 0x10) != 0) && (*(longlong **)(param_2 + 0x10) != (longlong *)0x0))
     && (cVar4 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))(), cVar4 != '\0')) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if ((*(longlong *)(DAT_146b33f38 + 0x58) != 0) &&
       (*(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x5e0) != 0)) {
      local_a8 = &PTR_FUN_1445306f0;
      local_a0 = 0;
      FUN_140d88800(&local_a8,param_2 + 8,*(undefined8 *)(param_1 + 0x10));
      bVar3 = local_a0._7_1_;
      bVar2 = local_a0._6_1_;
      bVar1 = local_a0._5_1_;
      local_res8[0] = 0;
      iVar5 = (uint)local_a0._6_1_ + (uint)local_a0._7_1_ + (uint)local_a0._5_1_ +
              (uint)local_a0._4_1_ + (uint)local_a0._2_1_ + (uint)local_a0._3_1_ +
              (uint)(byte)local_a0 + (uint)local_a0._1_1_;
      FVariantData::GetValue(param_3,local_res8);
      if ((iVar5 != local_res8[0]) ||
         (((*(char *)(param_2 + 0x58) == '\0' && (*(longlong **)(param_2 + 0x38) != (longlong *)0x0)
           ) && (cVar4 = (**(code **)(**(longlong **)(param_2 + 0x38) + 0x20))(), cVar4 != '\0'))))
      {
        FVariantData::SetValue(param_3,iVar5);
        local_90 = &PTR_FUN_143f740c8;
        local_68 = &PTR_FUN_143f740c8;
        local_78 = 0;
        local_98 = &PTR_FUN_144530ee8;
        local_70 = 0;
        local_38 = &PTR_FUN_1445306f0;
        local_30 = (byte)local_a0;
        local_2f = local_a0._1_1_;
        local_2e = local_a0._2_1_;
        local_2d = local_a0._3_1_;
        local_60 = 0;
        local_58 = 0;
        local_50 = 0;
        local_48 = 0;
        local_2c = local_a0._4_1_;
        local_40 = 6;
        local_88 = 0;
        uStack_80 = 0;
        local_2b = bVar1;
        local_2a = bVar2;
        local_29 = bVar3;
        FUN_140d99520(&local_98,param_2,*(undefined8 *)(param_1 + 0x10));
        FUN_1404bf980(&local_68);
        FUN_1404bf980(&local_90);
      }
    }
  }
  return;
}



// FUNCTION 140d9a330 FUN_140d9a330 body=3569 status=ok
// SIG undefined FUN_140d9a330(void)

void FUN_140d9a330(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int local_res8 [4];
  longlong local_res18;
  longlong *local_res20;
  void *local_1c8;
  undefined8 local_1c0;
  undefined **local_1b8;
  undefined **local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined **local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined1 local_158 [8];
  void *local_150;
  int local_148;
  void *local_140;
  int local_138;
  void *local_130;
  int local_128;
  void *local_120;
  int local_118;
  void *local_110;
  int local_108;
  void *local_100;
  int local_f8;
  void *local_f0;
  int local_e8;
  void *local_e0;
  int local_d8;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar4 = param_2 + 8;
    if ((*(longlong **)(param_2 + 0x10) != (longlong *)0x0) &&
       (cVar1 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))(), cVar1 != '\0')) {
      local_15c = 0;
      local_1b0 = &PTR_FUN_143f740c8;
      local_188 = &PTR_FUN_143f740c8;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_1b8 = &PTR_FUN_144531008;
      local_198 = 0;
      local_190 = 0;
      local_180 = 0;
      local_178 = 0;
      local_170 = 0;
      local_168 = 0;
      FUN_140d63c90(local_158);
      local_160 = 3;
      FUN_140d88960(local_158,lVar4,*(undefined8 *)(param_1 + 0x10),0);
      FUN_140d76a00(param_1 + 0xf0,local_res8,lVar4);
      if ((local_res8[0] == -1) ||
         (lVar3 = (longlong)local_res8[0] * 0x90 + *(longlong *)(param_1 + 0xf0), lVar3 == 0)) {
        local_res18 = lVar4;
        FUN_140d5d290(param_1 + 0xf0,local_res8,&local_res18,0);
        lVar3 = (longlong)local_res8[0] * 0x90 + *(longlong *)(param_1 + 0xf0);
      }
      lVar4 = lVar3 + 0x28;
      local_1c8 = (void *)0x0;
      if (*(char *)(param_2 + 0x58) == '\0') {
        local_1c0 = 0;
        cVar1 = FUN_140d5f730(lVar4,0x11,&local_1c8);
        if (cVar1 != '\0') {
          FString::operator=(&local_150,&local_1c8);
        }
        cVar1 = FUN_140d5f730(lVar4,0x12,&local_1c8);
        if (cVar1 != '\0') {
          FString::operator=(&local_140,&local_1c8);
        }
        cVar1 = FUN_140d5f730(lVar4,0x13,&local_1c8);
        if (cVar1 != '\0') {
          FString::operator=(&local_130,&local_1c8);
        }
        cVar1 = FUN_140d5f730(lVar4,0x14,&local_1c8);
        if (cVar1 != '\0') {
          FString::operator=(&local_120,&local_1c8);
        }
        cVar1 = FUN_140d5f730(lVar4,0x15,&local_1c8);
        if (cVar1 != '\0') {
          FString::operator=(&local_110,&local_1c8);
        }
        cVar1 = FUN_140d5f730(lVar4,0x16,&local_1c8);
        if (cVar1 != '\0') {
          FString::operator=(&local_100,&local_1c8);
        }
        cVar1 = FUN_140d5f730(lVar4,0x17,&local_1c8);
        if (cVar1 != '\0') {
          FString::operator=(&local_f0,&local_1c8);
        }
        cVar1 = FUN_140d5f730(lVar4,0x18,&local_1c8);
        if (cVar1 != '\0') {
          FString::operator=(&local_e0,&local_1c8);
        }
        local_res8[0] = 0;
        cVar1 = FUN_140d5f660(lVar4,0x19,local_res8);
        if (cVar1 != '\0') {
          local_d0 = local_res8[0];
        }
        cVar1 = FUN_140d5f660(lVar4,0x1a,local_res8);
        if (cVar1 != '\0') {
          local_cc = local_res8[0];
        }
        cVar1 = FUN_140d5f660(lVar4,0x1b,local_res8);
        if (cVar1 != '\0') {
          local_c8 = local_res8[0];
        }
        cVar1 = FUN_140d5f660(lVar4,0x1c,local_res8);
        if (cVar1 != '\0') {
          local_c4 = local_res8[0];
        }
        if (local_1c8 != (void *)0x0) {
          FMemory::Free();
        }
      }
      else {
        local_res8[0] = 0x11;
        local_1c0 = CONCAT44(local_1c0._4_4_,local_148);
        if (local_148 == 0) {
          local_1c0 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1c8,local_148,0);
          _guard_xfg_dispatch_icall_nop(local_1c8,local_150,(longlong)local_148 * 2);
        }
        plVar5 = (longlong *)(lVar3 + 0x38);
        if (*(int *)(lVar3 + 0x40) != *(int *)(lVar3 + 0x6c)) {
          lVar4 = *(longlong *)(lVar3 + 0x78);
          if (*(longlong *)(lVar3 + 0x78) == 0) {
            lVar4 = lVar3 + 0x70;
          }
          iVar2 = *(int *)(lVar4 + ((longlong)*(int *)(lVar3 + 0x80) - 1U & (longlong)local_res8[0])
                                   * 4);
          if (iVar2 != -1) {
            do {
              lVar4 = *plVar5 + (longlong)iVar2 * 0x28;
              if (*(int *)(*plVar5 + (longlong)iVar2 * 0x28) == local_res8[0]) {
                if ((iVar2 != -1) && (lVar4 != 0)) goto LAB_140d9a56e;
                break;
              }
              iVar2 = *(int *)(lVar4 + 0x20);
            } while (iVar2 != -1);
          }
        }
        local_res20 = (longlong *)local_res8;
        FUN_140d5cca0(plVar5,&local_res18,&local_res20,0);
        lVar4 = *plVar5 + (longlong)(int)local_res18 * 0x28;
LAB_140d9a56e:
        FVariantData::SetValue(lVar4 + 8,&local_1c8);
        if (local_1c8 != (void *)0x0) {
          FMemory::Free();
        }
        local_res8[0] = 0x12;
        local_1c8 = (void *)0x0;
        local_1c0 = CONCAT44(local_1c0._4_4_,local_138);
        if (local_138 == 0) {
          local_1c0 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1c8,local_138,0);
          _guard_xfg_dispatch_icall_nop(local_1c8,local_140,(longlong)local_138 * 2);
        }
        if (*(int *)(lVar3 + 0x40) != *(int *)(lVar3 + 0x6c)) {
          lVar4 = *(longlong *)(lVar3 + 0x78);
          if (*(longlong *)(lVar3 + 0x78) == 0) {
            lVar4 = lVar3 + 0x70;
          }
          iVar2 = *(int *)(lVar4 + ((longlong)*(int *)(lVar3 + 0x80) - 1U & (longlong)local_res8[0])
                                   * 4);
          if (iVar2 != -1) {
            do {
              lVar4 = *plVar5 + (longlong)iVar2 * 0x28;
              if (*(int *)(*plVar5 + (longlong)iVar2 * 0x28) == local_res8[0]) {
                if ((iVar2 != -1) && (lVar4 != 0)) goto LAB_140d9a67e;
                break;
              }
              iVar2 = *(int *)(lVar4 + 0x20);
            } while (iVar2 != -1);
          }
        }
        local_res20 = (longlong *)local_res8;
        FUN_140d5cca0(plVar5,&local_res18,&local_res20,0);
        lVar4 = *plVar5 + (longlong)(int)local_res18 * 0x28;
LAB_140d9a67e:
        FVariantData::SetValue(lVar4 + 8,&local_1c8);
        if (local_1c8 != (void *)0x0) {
          FMemory::Free();
        }
        local_res8[0] = 0x13;
        local_1c8 = (void *)0x0;
        local_1c0 = CONCAT44(local_1c0._4_4_,local_128);
        if (local_128 == 0) {
          local_1c0 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1c8,local_128,0);
          _guard_xfg_dispatch_icall_nop(local_1c8,local_130,(longlong)local_128 * 2);
        }
        if (*(int *)(lVar3 + 0x40) != *(int *)(lVar3 + 0x6c)) {
          lVar4 = *(longlong *)(lVar3 + 0x78);
          if (*(longlong *)(lVar3 + 0x78) == 0) {
            lVar4 = lVar3 + 0x70;
          }
          iVar2 = *(int *)(lVar4 + ((longlong)*(int *)(lVar3 + 0x80) - 1U & (longlong)local_res8[0])
                                   * 4);
          if (iVar2 != -1) {
            do {
              lVar4 = *plVar5 + (longlong)iVar2 * 0x28;
              if (*(int *)(*plVar5 + (longlong)iVar2 * 0x28) == local_res8[0]) {
                if ((iVar2 != -1) && (lVar4 != 0)) goto LAB_140d9a78e;
                break;
              }
              iVar2 = *(int *)(lVar4 + 0x20);
            } while (iVar2 != -1);
          }
        }
        local_res20 = (longlong *)local_res8;
        FUN_140d5cca0(plVar5,&local_res18,&local_res20,0);
        lVar4 = *plVar5 + (longlong)(int)local_res18 * 0x28;
LAB_140d9a78e:
        FVariantData::SetValue(lVar4 + 8,&local_1c8);
        if (local_1c8 != (void *)0x0) {
          FMemory::Free();
        }
        local_res8[0] = 0x14;
        local_1c8 = (void *)0x0;
        local_1c0 = CONCAT44(local_1c0._4_4_,local_118);
        if (local_118 == 0) {
          local_1c0 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1c8,local_118,0);
          _guard_xfg_dispatch_icall_nop(local_1c8,local_120,(longlong)local_118 * 2);
        }
        if (*(int *)(lVar3 + 0x40) != *(int *)(lVar3 + 0x6c)) {
          lVar4 = *(longlong *)(lVar3 + 0x78);
          if (*(longlong *)(lVar3 + 0x78) == 0) {
            lVar4 = lVar3 + 0x70;
          }
          iVar2 = *(int *)(lVar4 + ((longlong)*(int *)(lVar3 + 0x80) - 1U & (longlong)local_res8[0])
                                   * 4);
          if (iVar2 != -1) {
            do {
              lVar4 = *plVar5 + (longlong)iVar2 * 0x28;
              if (*(int *)(*plVar5 + (longlong)iVar2 * 0x28) == local_res8[0]) {
                if ((iVar2 != -1) && (lVar4 != 0)) goto LAB_140d9a89e;
                break;
              }
              iVar2 = *(int *)(lVar4 + 0x20);
            } while (iVar2 != -1);
          }
        }
        local_res20 = (longlong *)local_res8;
        FUN_140d5cca0(plVar5,&local_res18,&local_res20,0);
        lVar4 = *plVar5 + (longlong)(int)local_res18 * 0x28;
LAB_140d9a89e:
        FVariantData::SetValue(lVar4 + 8,&local_1c8);
        if (local_1c8 != (void *)0x0) {
          FMemory::Free();
        }
        local_res8[0] = 0x15;
        local_1c8 = (void *)0x0;
        local_1c0 = CONCAT44(local_1c0._4_4_,local_108);
        if (local_108 == 0) {
          local_1c0 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1c8,local_108,0);
          _guard_xfg_dispatch_icall_nop(local_1c8,local_110,(longlong)local_108 * 2);
        }
        if (*(int *)(lVar3 + 0x40) != *(int *)(lVar3 + 0x6c)) {
          lVar4 = *(longlong *)(lVar3 + 0x78);
          if (*(longlong *)(lVar3 + 0x78) == 0) {
            lVar4 = lVar3 + 0x70;
          }
          iVar2 = *(int *)(lVar4 + ((longlong)*(int *)(lVar3 + 0x80) - 1U & (longlong)local_res8[0])
                                   * 4);
          if (iVar2 != -1) {
            do {
              lVar4 = *plVar5 + (longlong)iVar2 * 0x28;
              if (*(int *)(*plVar5 + (longlong)iVar2 * 0x28) == local_res8[0]) {
                if ((iVar2 != -1) && (lVar4 != 0)) goto LAB_140d9a9ae;
                break;
              }
              iVar2 = *(int *)(lVar4 + 0x20);
            } while (iVar2 != -1);
          }
        }
        local_res20 = (longlong *)local_res8;
        FUN_140d5cca0(plVar5,&local_res18,&local_res20,0);
        lVar4 = *plVar5 + (longlong)(int)local_res18 * 0x28;
LAB_140d9a9ae:
        FVariantData::SetValue(lVar4 + 8,&local_1c8);
        if (local_1c8 != (void *)0x0) {
          FMemory::Free();
        }
        local_res8[0] = 0x16;
        local_1c8 = (void *)0x0;
        local_1c0 = CONCAT44(local_1c0._4_4_,local_f8);
        if (local_f8 == 0) {
          local_1c0 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1c8,local_f8,0);
          _guard_xfg_dispatch_icall_nop(local_1c8,local_100,(longlong)local_f8 * 2);
        }
        if (*(int *)(lVar3 + 0x40) != *(int *)(lVar3 + 0x6c)) {
          lVar4 = *(longlong *)(lVar3 + 0x78);
          if (*(longlong *)(lVar3 + 0x78) == 0) {
            lVar4 = lVar3 + 0x70;
          }
          iVar2 = *(int *)(lVar4 + ((longlong)*(int *)(lVar3 + 0x80) - 1U & (longlong)local_res8[0])
                                   * 4);
          if (iVar2 != -1) {
            do {
              lVar4 = *plVar5 + (longlong)iVar2 * 0x28;
              if (*(int *)(*plVar5 + (longlong)iVar2 * 0x28) == local_res8[0]) {
                if ((iVar2 != -1) && (lVar4 != 0)) goto LAB_140d9aabe;
                break;
              }
              iVar2 = *(int *)(lVar4 + 0x20);
            } while (iVar2 != -1);
          }
        }
        local_res20 = (longlong *)local_res8;
        FUN_140d5cca0(plVar5,&local_res18,&local_res20,0);
        lVar4 = *plVar5 + (longlong)(int)local_res18 * 0x28;
LAB_140d9aabe:
        FVariantData::SetValue(lVar4 + 8,&local_1c8);
        if (local_1c8 != (void *)0x0) {
          FMemory::Free();
        }
        local_res8[0] = 0x17;
        local_1c8 = (void *)0x0;
        local_1c0 = CONCAT44(local_1c0._4_4_,local_e8);
        if (local_e8 == 0) {
          local_1c0 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1c8,local_e8,0);
          _guard_xfg_dispatch_icall_nop(local_1c8,local_f0,(longlong)local_e8 * 2);
        }
        if (*(int *)(lVar3 + 0x40) != *(int *)(lVar3 + 0x6c)) {
          lVar4 = *(longlong *)(lVar3 + 0x78);
          if (*(longlong *)(lVar3 + 0x78) == 0) {
            lVar4 = lVar3 + 0x70;
          }
          iVar2 = *(int *)(lVar4 + ((longlong)*(int *)(lVar3 + 0x80) - 1U & (longlong)local_res8[0])
                                   * 4);
          if (iVar2 != -1) {
            do {
              lVar4 = *plVar5 + (longlong)iVar2 * 0x28;
              if (*(int *)(*plVar5 + (longlong)iVar2 * 0x28) == local_res8[0]) {
                if ((iVar2 != -1) && (lVar4 != 0)) goto LAB_140d9abce;
                break;
              }
              iVar2 = *(int *)(lVar4 + 0x20);
            } while (iVar2 != -1);
          }
        }
        local_res20 = (longlong *)local_res8;
        FUN_140d5cca0(plVar5,&local_res18,&local_res20,0);
        lVar4 = *plVar5 + (longlong)(int)local_res18 * 0x28;
LAB_140d9abce:
        FVariantData::SetValue(lVar4 + 8,&local_1c8);
        if (local_1c8 != (void *)0x0) {
          FMemory::Free();
        }
        local_res8[0] = 0x18;
        local_1c8 = (void *)0x0;
        local_1c0 = CONCAT44(local_1c0._4_4_,local_d8);
        if (local_d8 == 0) {
          local_1c0 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1c8,local_d8,0);
          _guard_xfg_dispatch_icall_nop(local_1c8,local_e0,(longlong)local_d8 * 2);
        }
        if (*(int *)(lVar3 + 0x40) != *(int *)(lVar3 + 0x6c)) {
          lVar4 = *(longlong *)(lVar3 + 0x78);
          if (*(longlong *)(lVar3 + 0x78) == 0) {
            lVar4 = lVar3 + 0x70;
          }
          iVar2 = *(int *)(lVar4 + ((longlong)*(int *)(lVar3 + 0x80) - 1U & (longlong)local_res8[0])
                                   * 4);
          if (iVar2 != -1) {
            do {
              lVar4 = *plVar5 + (longlong)iVar2 * 0x28;
              if (*(int *)(*plVar5 + (longlong)iVar2 * 0x28) == local_res8[0]) {
                if ((iVar2 != -1) && (lVar4 != 0)) goto LAB_140d9acde;
                break;
              }
              iVar2 = *(int *)(lVar4 + 0x20);
            } while (iVar2 != -1);
          }
        }
        local_res20 = (longlong *)local_res8;
        FUN_140d5cca0(plVar5,&local_res18,&local_res20,0);
        lVar4 = *plVar5 + (longlong)(int)local_res18 * 0x28;
LAB_140d9acde:
        FVariantData::SetValue(lVar4 + 8,&local_1c8);
        if (local_1c8 != (void *)0x0) {
          FMemory::Free();
        }
        iVar2 = local_d0;
        local_res18 = CONCAT44(local_res18._4_4_,0x19);
        FUN_140d76d30(plVar5,local_res8,0x19);
        if ((local_res8[0] == -1) || (lVar4 = *plVar5 + (longlong)local_res8[0] * 0x28, lVar4 == 0))
        {
          local_res20 = &local_res18;
          FUN_140d5cca0(plVar5,local_res8,&local_res20,0);
          lVar4 = *plVar5 + (longlong)local_res8[0] * 0x28;
        }
        FVariantData::SetValue(lVar4 + 8,iVar2);
        iVar2 = local_cc;
        local_res18 = CONCAT44(local_res18._4_4_,0x1a);
        FUN_140d76d30(plVar5,local_res8,0x1a);
        if ((local_res8[0] == -1) || (lVar4 = *plVar5 + (longlong)local_res8[0] * 0x28, lVar4 == 0))
        {
          local_res20 = &local_res18;
          FUN_140d5cca0(plVar5,local_res8,&local_res20,0);
          lVar4 = *plVar5 + (longlong)local_res8[0] * 0x28;
        }
        FVariantData::SetValue(lVar4 + 8,iVar2);
        iVar2 = local_c8;
        local_res18 = CONCAT44(local_res18._4_4_,0x1b);
        FUN_140d76d30(plVar5,local_res8,0x1b);
        if ((local_res8[0] == -1) || (lVar4 = *plVar5 + (longlong)local_res8[0] * 0x28, lVar4 == 0))
        {
          local_res20 = &local_res18;
          FUN_140d5cca0(plVar5,local_res8,&local_res20,0);
          lVar4 = *plVar5 + (longlong)local_res8[0] * 0x28;
        }
        FVariantData::SetValue(lVar4 + 8,iVar2);
        iVar2 = local_c4;
        local_res18 = CONCAT44(local_res18._4_4_,0x1c);
        FUN_140d76d30(plVar5,local_res8,0x1c);
        if ((local_res8[0] == -1) || (lVar4 = *plVar5 + (longlong)local_res8[0] * 0x28, lVar4 == 0))
        {
          local_res20 = &local_res18;
          FUN_140d5cca0(plVar5,local_res8,&local_res20,0);
          lVar4 = *plVar5 + (longlong)local_res8[0] * 0x28;
        }
        FVariantData::SetValue(lVar4 + 8,iVar2);
      }
      FUN_140d99520(&local_1b8,param_2,*(undefined8 *)(param_1 + 0x10));
      FUN_140d65960(local_158);
      FUN_1404bf980(&local_188);
      FUN_1404bf980(&local_1b0);
    }
  }
  return;
}



// FUNCTION 140d9b130 FUN_140d9b130 body=3099 status=ok
// SIG undefined FUN_140d9b130(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_140d9b130(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  void *pvVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20 [2];
  int local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  int local_208;
  int local_204 [3];
  int local_1f8;
  int local_1f4 [3];
  undefined4 local_1e8;
  int local_1e4 [3];
  int local_1d8;
  int local_1d4 [3];
  int local_1c8;
  int local_1c4 [3];
  int local_1b8 [4];
  void *local_1a8;
  int local_1a0;
  undefined4 local_19c;
  void *local_198;
  int local_190;
  undefined4 local_18c;
  undefined **local_188;
  undefined **local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined **local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined **local_128;
  undefined4 local_120;
  void *local_118;
  ulonglong local_110;
  void *local_108;
  ulonglong local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined2 local_e0;
  undefined1 local_de;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8 [5];
  longlong *local_a0;
  longlong local_98;
  int *local_90;
  int *local_88;
  int *local_80;
  int *local_78;
  int *local_70;
  int *local_68;
  int *local_60;
  int *local_58;
  int *local_50;
  undefined4 *local_48;
  int *local_40;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar1 = param_2 + 8;
    if ((*(longlong **)(param_2 + 0x10) != (longlong *)0x0) &&
       (cVar6 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))(), cVar6 != '\0')) {
      local_180 = &PTR_FUN_143f740c8;
      local_158 = &PTR_FUN_143f740c8;
      local_188 = &PTR_FUN_144531070;
      local_128 = &PTR_FUN_144530650;
      local_130 = 2;
      local_178 = 0;
      uStack_170 = 0;
      local_168 = 0;
      local_160 = 0;
      local_150 = 0;
      local_148 = 0;
      local_140 = 0;
      local_138 = 0;
      local_120 = 1;
      local_118 = (void *)0x0;
      local_110 = 0;
      local_108 = (void *)0x0;
      local_100 = 0;
      local_f8 = 1;
      local_f0 = 0;
      local_e0 = 0;
      local_de = 0;
      local_dc = 0;
      local_d4 = 0;
      FUN_140d88d60(&local_128,lVar1,*(undefined8 *)(param_1 + 0x10));
      FUN_140d76a00(param_1 + 0xf0,&local_208,lVar1);
      if ((local_208 == -1) ||
         (lVar8 = (longlong)local_208 * 0x90 + *(longlong *)(param_1 + 0xf0), lVar8 == 0)) {
        local_98 = lVar1;
        FUN_140d5d290(param_1 + 0xf0,local_204,&local_98,0);
        lVar8 = (longlong)local_204[0] * 0x90 + *(longlong *)(param_1 + 0xf0);
      }
      uVar9 = local_120;
      lVar12 = lVar8 + 0x28;
      if (*(char *)(param_2 + 0x58) == '\0') {
        local_224 = 1;
        cVar6 = FUN_140d5f590(lVar12,7,&local_224);
        local_c8[2] = 0;
        local_c8[3] = 0;
        if (cVar6 != '\0') {
          local_120 = local_224;
        }
        cVar6 = FUN_140d5f730(lVar12,8,local_c8 + 2);
        if (cVar6 != '\0') {
          FString::operator=(&local_118,local_c8 + 2);
        }
        local_c8[0] = 0;
        local_c8[1] = 0;
        cVar6 = FUN_140d5f730(lVar12,9,local_c8);
        if (cVar6 != '\0') {
          FString::operator=(&local_108,local_c8);
        }
        local_220 = 1;
        cVar6 = FUN_140d5f590(lVar12,10,&local_220);
        local_21c = 0;
        uVar9 = (undefined4)local_f8;
        if (cVar6 != '\0') {
          uVar9 = local_220;
        }
        local_f8._0_4_ = uVar9;
        cVar6 = FUN_140d5f660(lVar12,0xb,&local_21c);
        local_218 = 0;
        if (cVar6 != '\0') {
          local_f8._4_4_ = local_21c;
        }
        cVar6 = FUN_140d5f660(lVar12,0xc,&local_218);
        local_res8[0] = 0;
        if (cVar6 != '\0') {
          local_f0 = local_218;
        }
        cVar6 = FUN_140d5f800(lVar12,0xe,local_res8);
        local_res18[0] = 0;
        uVar10 = (undefined1)local_e0;
        if (cVar6 != '\0') {
          uVar10 = local_res8[0];
        }
        local_e0._0_1_ = uVar10;
        cVar6 = FUN_140d5f800(lVar12,0xf,local_res18);
        local_214 = 0;
        if (cVar6 != '\0') {
          local_e0._1_1_ = local_res18[0];
        }
        cVar6 = FUN_140d5f590(lVar12,0x10,&local_214);
        local_210 = 0;
        uVar9 = (undefined4)local_dc;
        if (cVar6 != '\0') {
          uVar9 = local_214;
        }
        local_dc._0_4_ = uVar9;
        cVar6 = FUN_140d5f660(lVar12,0x1d,&local_210);
        local_20c = 0;
        if (cVar6 != '\0') {
          local_dc._4_4_ = local_210;
        }
        cVar6 = FUN_140d5f660(lVar12,0x1e,&local_20c);
        if (cVar6 != '\0') {
          local_d4 = local_20c;
        }
        if (local_c8[0] != 0) {
          FMemory::Free();
        }
        if (local_c8[2] != 0) {
          FMemory::Free();
        }
      }
      else {
        plVar11 = (longlong *)(lVar8 + 0x38);
        local_204[1] = 7;
        if (*(int *)(lVar8 + 0x40) != *(int *)(lVar8 + 0x6c)) {
          lVar12 = *(longlong *)(lVar8 + 0x78);
          if (*(longlong *)(lVar8 + 0x78) == 0) {
            lVar12 = lVar8 + 0x70;
          }
          iVar7 = *(int *)(lVar12 + (ulonglong)(*(int *)(lVar8 + 0x80) - 1U & 7) * 4);
          if (iVar7 != -1) {
            do {
              lVar12 = *plVar11 + (longlong)iVar7 * 0x28;
              if (*(int *)(*plVar11 + (longlong)iVar7 * 0x28) == 7) {
                if ((iVar7 != -1) && (lVar12 != 0)) goto LAB_140d9b349;
                break;
              }
              iVar7 = *(int *)(lVar12 + 0x20);
            } while (iVar7 != -1);
          }
        }
        local_90 = local_204 + 1;
        FUN_140d5cca0(plVar11,local_204 + 2,&local_90,0);
        lVar12 = *plVar11 + (longlong)local_204[2] * 0x28;
LAB_140d9b349:
        FVariantData::SetValue(lVar12 + 8,uVar9);
        pvVar4 = local_118;
        lVar12 = (longlong)(int)local_110;
        local_res20[0] = 8;
        local_1a8 = (void *)0x0;
        local_1a0 = (int)local_110;
        if ((int)local_110 == 0) {
          local_19c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1a8,local_110 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_1a8,pvVar4,lVar12 * 2);
        }
        if (*(int *)(lVar8 + 0x40) != *(int *)(lVar8 + 0x6c)) {
          lVar12 = *(longlong *)(lVar8 + 0x78);
          if (*(longlong *)(lVar8 + 0x78) == 0) {
            lVar12 = lVar8 + 0x70;
          }
          iVar7 = *(int *)(lVar12 + ((longlong)*(int *)(lVar8 + 0x80) - 1U &
                                    (longlong)local_res20[0]) * 4);
          if (iVar7 != -1) {
            do {
              lVar12 = *plVar11 + (longlong)iVar7 * 0x28;
              if (*(int *)(*plVar11 + (longlong)iVar7 * 0x28) == local_res20[0]) {
                if ((iVar7 != -1) && (lVar12 != 0)) goto LAB_140d9b43a;
                break;
              }
              iVar7 = *(int *)(lVar12 + 0x20);
            } while (iVar7 != -1);
          }
        }
        local_88 = local_res20;
        FUN_140d5cca0(plVar11,&local_1f8,&local_88,0);
        lVar12 = *plVar11 + (longlong)local_1f8 * 0x28;
LAB_140d9b43a:
        FVariantData::SetValue(lVar12 + 8,&local_1a8);
        if (local_1a8 != (void *)0x0) {
          FMemory::Free();
        }
        pvVar4 = local_108;
        lVar12 = (longlong)(int)local_100;
        local_228 = 9;
        local_198 = (void *)0x0;
        local_190 = (int)local_100;
        if ((int)local_100 == 0) {
          local_18c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_198,local_100 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_198,pvVar4,lVar12 * 2);
        }
        if (*(int *)(lVar8 + 0x40) != *(int *)(lVar8 + 0x6c)) {
          lVar12 = *(longlong *)(lVar8 + 0x78);
          if (*(longlong *)(lVar8 + 0x78) == 0) {
            lVar12 = lVar8 + 0x70;
          }
          iVar7 = *(int *)(lVar12 + ((longlong)*(int *)(lVar8 + 0x80) - 1U & (longlong)local_228) *
                                    4);
          if (iVar7 != -1) {
            do {
              lVar12 = *plVar11 + (longlong)iVar7 * 0x28;
              if (*(int *)(*plVar11 + (longlong)iVar7 * 0x28) == local_228) {
                if ((iVar7 != -1) && (lVar12 != 0)) goto LAB_140d9b538;
                break;
              }
              iVar7 = *(int *)(lVar12 + 0x20);
            } while (iVar7 != -1);
          }
        }
        local_80 = &local_228;
        FUN_140d5cca0(plVar11,local_1f4,&local_80,0);
        lVar12 = *plVar11 + (longlong)local_1f4[0] * 0x28;
LAB_140d9b538:
        FVariantData::SetValue(lVar12 + 8,&local_198);
        if (local_198 != (void *)0x0) {
          FMemory::Free();
        }
        uVar5 = local_f8;
        local_1f4[1] = 10;
        if (*(int *)(lVar8 + 0x40) != *(int *)(lVar8 + 0x6c)) {
          lVar12 = *(longlong *)(lVar8 + 0x78);
          if (*(longlong *)(lVar8 + 0x78) == 0) {
            lVar12 = lVar8 + 0x70;
          }
          iVar7 = *(int *)(lVar12 + (ulonglong)(*(int *)(lVar8 + 0x80) - 1U & 10) * 4);
          if (iVar7 != -1) {
            do {
              lVar12 = *plVar11 + (longlong)iVar7 * 0x28;
              if (*(int *)(*plVar11 + (longlong)iVar7 * 0x28) == 10) {
                if ((iVar7 != -1) && (lVar12 != 0)) goto LAB_140d9b5e9;
                break;
              }
              iVar7 = *(int *)(lVar12 + 0x20);
            } while (iVar7 != -1);
          }
        }
        local_78 = local_1f4 + 1;
        FUN_140d5cca0(plVar11,local_1f4 + 2,&local_78,0);
        lVar12 = *plVar11 + (longlong)local_1f4[2] * 0x28;
LAB_140d9b5e9:
        FVariantData::SetValue(lVar12 + 8,uVar5 & 0xffffffff);
        uVar9 = local_f8._4_4_;
        local_1e8 = 0xb;
        if (*(int *)(lVar8 + 0x40) != *(int *)(lVar8 + 0x6c)) {
          lVar12 = *(longlong *)(lVar8 + 0x78);
          if (*(longlong *)(lVar8 + 0x78) == 0) {
            lVar12 = lVar8 + 0x70;
          }
          iVar7 = *(int *)(lVar12 + (ulonglong)(*(int *)(lVar8 + 0x80) - 1U & 0xb) * 4);
          if (iVar7 != -1) {
            do {
              lVar12 = *plVar11 + (longlong)iVar7 * 0x28;
              if (*(int *)(*plVar11 + (longlong)iVar7 * 0x28) == 0xb) {
                if ((iVar7 != -1) && (lVar12 != 0)) goto LAB_140d9b699;
                break;
              }
              iVar7 = *(int *)(lVar12 + 0x20);
            } while (iVar7 != -1);
          }
        }
        local_48 = &local_1e8;
        FUN_140d5cca0(plVar11,local_1e4,&local_48,0);
        lVar12 = *plVar11 + (longlong)local_1e4[0] * 0x28;
LAB_140d9b699:
        FVariantData::SetValue(lVar12 + 8,uVar9);
        uVar9 = local_f0;
        local_1e4[1] = 0xc;
        if (*(int *)(lVar8 + 0x40) != *(int *)(lVar8 + 0x6c)) {
          lVar12 = *(longlong *)(lVar8 + 0x78);
          if (*(longlong *)(lVar8 + 0x78) == 0) {
            lVar12 = lVar8 + 0x70;
          }
          iVar7 = *(int *)(lVar12 + (ulonglong)(*(int *)(lVar8 + 0x80) - 1U & 0xc) * 4);
          if (iVar7 != -1) {
            do {
              lVar12 = *plVar11 + (longlong)iVar7 * 0x28;
              if (*(int *)(*plVar11 + (longlong)iVar7 * 0x28) == 0xc) {
                if ((iVar7 != -1) && (lVar12 != 0)) goto LAB_140d9b749;
                break;
              }
              iVar7 = *(int *)(lVar12 + 0x20);
            } while (iVar7 != -1);
          }
        }
        local_70 = local_1e4 + 1;
        FUN_140d5cca0(plVar11,local_1e4 + 2,&local_70,0);
        lVar12 = *plVar11 + (longlong)local_1e4[2] * 0x28;
LAB_140d9b749:
        FVariantData::SetValue(lVar12 + 8,uVar9);
        uVar10 = (undefined1)local_e0;
        local_1d8 = 0xe;
        if (*(int *)(lVar8 + 0x40) != *(int *)(lVar8 + 0x6c)) {
          lVar12 = *(longlong *)(lVar8 + 0x78);
          if (*(longlong *)(lVar8 + 0x78) == 0) {
            lVar12 = lVar8 + 0x70;
          }
          iVar7 = *(int *)(lVar12 + (ulonglong)(*(int *)(lVar8 + 0x80) - 1U & 0xe) * 4);
          if (iVar7 != -1) {
            do {
              lVar12 = *plVar11 + (longlong)iVar7 * 0x28;
              if (*(int *)(*plVar11 + (longlong)iVar7 * 0x28) == 0xe) {
                if ((iVar7 != -1) && (lVar12 != 0)) goto LAB_140d9b7f9;
                break;
              }
              iVar7 = *(int *)(lVar12 + 0x20);
            } while (iVar7 != -1);
          }
        }
        local_68 = &local_1d8;
        FUN_140d5cca0(plVar11,local_1d4,&local_68,0);
        lVar12 = *plVar11 + (longlong)local_1d4[0] * 0x28;
LAB_140d9b7f9:
        FVariantData::SetValue(lVar12 + 8,uVar10);
        uVar10 = local_e0._1_1_;
        local_1d4[1] = 0xf;
        if (*(int *)(lVar8 + 0x40) != *(int *)(lVar8 + 0x6c)) {
          lVar12 = *(longlong *)(lVar8 + 0x78);
          if (*(longlong *)(lVar8 + 0x78) == 0) {
            lVar12 = lVar8 + 0x70;
          }
          iVar7 = *(int *)(lVar12 + (ulonglong)(*(int *)(lVar8 + 0x80) - 1U & 0xf) * 4);
          if (iVar7 != -1) {
            do {
              lVar12 = *plVar11 + (longlong)iVar7 * 0x28;
              if (*(int *)(*plVar11 + (longlong)iVar7 * 0x28) == 0xf) {
                if ((iVar7 != -1) && (lVar12 != 0)) goto LAB_140d9b8a9;
                break;
              }
              iVar7 = *(int *)(lVar12 + 0x20);
            } while (iVar7 != -1);
          }
        }
        local_60 = local_1d4 + 1;
        FUN_140d5cca0(plVar11,local_1d4 + 2,&local_60,0);
        lVar12 = *plVar11 + (longlong)local_1d4[2] * 0x28;
LAB_140d9b8a9:
        FVariantData::SetValue(lVar12 + 8,uVar10);
        uVar5 = local_dc;
        local_1c8 = 0x10;
        if (*(int *)(lVar8 + 0x40) != *(int *)(lVar8 + 0x6c)) {
          lVar12 = *(longlong *)(lVar8 + 0x78);
          if (*(longlong *)(lVar8 + 0x78) == 0) {
            lVar12 = lVar8 + 0x70;
          }
          iVar7 = *(int *)(lVar12 + (ulonglong)(*(int *)(lVar8 + 0x80) - 1U & 0x10) * 4);
          if (iVar7 != -1) {
            do {
              lVar12 = *plVar11 + (longlong)iVar7 * 0x28;
              if (*(int *)(*plVar11 + (longlong)iVar7 * 0x28) == 0x10) {
                if ((iVar7 != -1) && (lVar12 != 0)) goto LAB_140d9b956;
                break;
              }
              iVar7 = *(int *)(lVar12 + 0x20);
            } while (iVar7 != -1);
          }
        }
        local_58 = &local_1c8;
        FUN_140d5cca0(plVar11,local_1c4,&local_58,0);
        lVar12 = *plVar11 + (longlong)local_1c4[0] * 0x28;
LAB_140d9b956:
        FVariantData::SetValue(lVar12 + 8,uVar5 & 0xffffffff);
        uVar9 = local_dc._4_4_;
        local_1c4[1] = 0x1d;
        if (*(int *)(lVar8 + 0x40) != *(int *)(lVar8 + 0x6c)) {
          lVar12 = *(longlong *)(lVar8 + 0x78);
          if (*(longlong *)(lVar8 + 0x78) == 0) {
            lVar12 = lVar8 + 0x70;
          }
          iVar7 = *(int *)(lVar12 + (ulonglong)(*(int *)(lVar8 + 0x80) - 1U & 0x1d) * 4);
          if (iVar7 != -1) {
            do {
              lVar8 = *plVar11 + (longlong)iVar7 * 0x28;
              if (*(int *)(*plVar11 + (longlong)iVar7 * 0x28) == 0x1d) {
                if ((iVar7 != -1) && (lVar8 != 0)) goto LAB_140d9b9f6;
                break;
              }
              iVar7 = *(int *)(lVar8 + 0x20);
            } while (iVar7 != -1);
          }
        }
        local_50 = local_1c4 + 1;
        FUN_140d5cca0(plVar11,local_1c4 + 2,&local_50,0);
        lVar8 = *plVar11 + (longlong)local_1c4[2] * 0x28;
LAB_140d9b9f6:
        FVariantData::SetValue(lVar8 + 8,uVar9);
        uVar9 = local_d4;
        local_1b8[1] = 0x1e;
        FUN_140d76d30(plVar11,local_1b8,0x1e);
        if ((local_1b8[0] == -1) || (lVar8 = *plVar11 + (longlong)local_1b8[0] * 0x28, lVar8 == 0))
        {
          local_40 = local_1b8 + 1;
          FUN_140d5cca0(plVar11,local_1b8 + 2,&local_40,0);
          lVar8 = *plVar11 + (longlong)local_1b8[2] * 0x28;
        }
        FVariantData::SetValue(lVar8 + 8,uVar9);
      }
      FUN_140d99520(&local_188,param_2,*(undefined8 *)(param_1 + 0x10));
      if (*(char *)(param_2 + 0x58) != '\0') {
        FUN_140d84110(param_1,local_c8 + 4,lVar1);
        FUN_140d66de0(local_c8[4] + 0x38,&local_128);
        FUN_140d9d620(param_1,lVar1,2);
        plVar11 = local_a0;
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_a0 + 1;
          lVar1 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar1 == 1) {
            (**(code **)*local_a0)(local_a0);
            LOCK();
            piVar3 = (int *)((longlong)plVar11 + 0xc);
            iVar7 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_a0 + 8))(local_a0,1);
            }
          }
        }
      }
      if (local_108 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_118 != (void *)0x0) {
        FMemory::Free();
      }
      FUN_1404bf980(&local_158);
      FUN_1404bf980(&local_180);
    }
  }
  return;
}



// FUNCTION 140d9bd50 FUN_140d9bd50 body=1326 status=ok
// SIG undefined FUN_140d9bd50(void)

void FUN_140d9bd50(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined2 **ppuVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined8 in_stack_fffffffffffffeb8;
  uint7 uVar10;
  undefined2 *local_138;
  undefined2 *local_130;
  undefined8 local_128;
  longlong *plStack_120;
  undefined2 *local_118;
  undefined8 local_110;
  undefined **local_108;
  undefined **local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined **local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  longlong local_98 [2];
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38 [2];
  longlong local_28 [2];
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  if (*(longlong **)(param_2 + 4) == (longlong *)0x0) {
    return;
  }
  cVar4 = (**(code **)(**(longlong **)(param_2 + 4) + 0x20))();
  if (cVar4 == '\0') {
    return;
  }
  lVar6 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x148))();
  if (lVar6 == 0) {
    return;
  }
  local_138 = (undefined2 *)0x0;
  local_130 = (undefined2 *)0x0;
  local_128 = 0;
  plStack_120 = (longlong *)0x0;
  uVar10 = (uint7)((ulonglong)in_stack_fffffffffffffeb8 >> 8);
  switch(*param_2) {
  case 0x11:
    ppuVar7 = (undefined2 **)
              FUN_140b28f40(local_98,param_2 + 2,1,lVar6,(ulonglong)uVar10 << 8,&local_128);
    local_28[0] = local_98[0];
    if (&local_138 != ppuVar7) {
      if (local_138 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_138 = *ppuVar7;
      *ppuVar7 = (undefined2 *)0x0;
      local_130 = ppuVar7[1];
      ppuVar7[1] = (undefined2 *)0x0;
      local_28[0] = local_98[0];
    }
    break;
  case 0x12:
    ppuVar7 = (undefined2 **)
              FUN_140b28f40(local_88,param_2 + 2,2,lVar6,(ulonglong)uVar10 << 8,&local_128);
    local_28[0] = local_88[0];
    if (&local_138 != ppuVar7) {
      if (local_138 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_138 = *ppuVar7;
      *ppuVar7 = (undefined2 *)0x0;
      local_130 = ppuVar7[1];
      ppuVar7[1] = (undefined2 *)0x0;
      local_28[0] = local_88[0];
    }
    break;
  case 0x13:
    ppuVar7 = (undefined2 **)
              FUN_140b28f40(local_78,param_2 + 2,3,lVar6,(ulonglong)uVar10 << 8,&local_128);
    local_28[0] = local_78[0];
    if (&local_138 != ppuVar7) {
      if (local_138 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_138 = *ppuVar7;
      *ppuVar7 = (undefined2 *)0x0;
      local_130 = ppuVar7[1];
      ppuVar7[1] = (undefined2 *)0x0;
      local_28[0] = local_78[0];
    }
    break;
  case 0x14:
    ppuVar7 = (undefined2 **)
              FUN_140b28f40(local_68,param_2 + 2,4,lVar6,(ulonglong)uVar10 << 8,&local_128);
    local_28[0] = local_68[0];
    if (&local_138 != ppuVar7) {
      if (local_138 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_138 = *ppuVar7;
      *ppuVar7 = (undefined2 *)0x0;
      local_130 = ppuVar7[1];
      ppuVar7[1] = (undefined2 *)0x0;
      local_28[0] = local_68[0];
    }
    break;
  case 0x15:
    ppuVar7 = (undefined2 **)FUN_140b28e80(local_58,param_2 + 2,lVar6,0,&local_128);
    local_28[0] = local_58[0];
    if (&local_138 != ppuVar7) {
      if (local_138 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_138 = *ppuVar7;
      *ppuVar7 = (undefined2 *)0x0;
      local_130 = ppuVar7[1];
      ppuVar7[1] = (undefined2 *)0x0;
      local_28[0] = local_58[0];
    }
    break;
  case 0x16:
    ppuVar7 = (undefined2 **)FUN_140b28ee0(local_48,param_2 + 2,lVar6,0,&local_128);
    local_28[0] = local_48[0];
    if (&local_138 != ppuVar7) {
      if (local_138 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_138 = *ppuVar7;
      *ppuVar7 = (undefined2 *)0x0;
      local_130 = ppuVar7[1];
      ppuVar7[1] = (undefined2 *)0x0;
      local_28[0] = local_48[0];
    }
    break;
  case 0x17:
    ppuVar7 = (undefined2 **)FUN_140b28a80(local_38,param_2 + 2,lVar6,0,&local_128);
    local_28[0] = local_38[0];
    if (&local_138 != ppuVar7) {
      if (local_138 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_138 = *ppuVar7;
      *ppuVar7 = (undefined2 *)0x0;
      local_130 = ppuVar7[1];
      ppuVar7[1] = (undefined2 *)0x0;
      local_28[0] = local_38[0];
    }
    break;
  case 0x18:
    ppuVar7 = (undefined2 **)FUN_140b28a20(local_28,param_2 + 2,lVar6,0,&local_128);
    if (&local_138 != ppuVar7) {
      if (local_138 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_138 = *ppuVar7;
      *ppuVar7 = (undefined2 *)0x0;
      local_130 = ppuVar7[1];
      ppuVar7[1] = (undefined2 *)0x0;
    }
    break;
  default:
    goto switchD_140d9bdf5_default;
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
switchD_140d9bdf5_default:
  local_118 = (undefined2 *)0x0;
  local_110 = 0;
  FUN_1404b0a70(param_3,&local_118);
  puVar9 = &DAT_143f3eda8;
  if ((int)local_110 != 0) {
    puVar9 = local_118;
  }
  puVar8 = &DAT_143f3eda8;
  if ((int)local_130 != 0) {
    puVar8 = local_138;
  }
  iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
  if (iVar5 != 0) {
    FVariantData::SetValue(param_3,&local_138);
    puVar9 = local_138;
    lVar6 = (longlong)(int)local_130;
    local_ac = 0;
    local_100 = &PTR_FUN_143f740c8;
    local_d8 = &PTR_FUN_143f740c8;
    local_108 = &PTR_FUN_144531148;
    *(undefined1 *)(param_1 + 0xa0) = 1;
    local_b0 = *param_2;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_a8 = (void *)0x0;
    local_9c = 0;
    local_a0 = (int)local_130;
    if ((int)local_130 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                (&local_a8,(ulonglong)local_130 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop(local_a8,puVar9,lVar6 * 2);
    }
    FUN_140d99520(&local_108,param_2,*(undefined8 *)(param_1 + 0x10));
    if (local_a8 != (void *)0x0) {
      FMemory::Free();
    }
    FUN_1404bf980(&local_d8);
    FUN_1404bf980(&local_100);
  }
  if (local_118 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  plVar3 = plStack_120;
  if (plStack_120 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_120 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_120)(plStack_120);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if (local_138 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140d9c2a0 FUN_140d9c2a0 body=524 status=ok
// SIG undefined FUN_140d9c2a0(void)

void FUN_140d9c2a0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int local_res8 [2];
  longlong local_b8;
  longlong *local_b0;
  undefined **local_a8;
  undefined **local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined **local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    if ((*(longlong **)(param_2 + 0x10) == (longlong *)0x0) ||
       (cVar4 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))(), cVar4 == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      iVar5 = 0;
      local_res8[0] = 0;
      lVar6 = FUN_140bbb190(*(undefined8 *)(param_1 + 0x10),param_2 + 0x10);
      if (lVar6 != 0) {
        uVar7 = FUN_1414b0d60();
        plVar8 = (longlong *)AGameStateBase::OnRep_GameModeClass(lVar6,uVar7);
        if (plVar8 != (longlong *)0x0) {
          lVar6 = FUN_1414b0d60();
          if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
              != lVar6 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            iVar5 = (**(code **)(*plVar8 + 0x468))(plVar8);
          }
        }
      }
      FVariantData::GetValue(param_3,local_res8);
      if (iVar5 != local_res8[0]) {
        FVariantData::SetValue(param_3,iVar5);
        local_a0 = &PTR_FUN_143f740c8;
        local_78 = &PTR_FUN_143f740c8;
        *(undefined1 *)(param_1 + 0xa0) = 1;
        local_a8 = &PTR_FUN_144531180;
        local_50 = 0x1d;
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0;
        local_80 = 0;
        local_70 = 0;
        local_68 = 0;
        local_60 = 0;
        local_58 = 0;
        local_48 = iVar5;
        FUN_140d99520(&local_a8,param_2,*(undefined8 *)(param_1 + 0x10));
        if (*(char *)(param_2 + 0x58) != '\0') {
          FUN_140d84110(param_1,&local_b8,param_2 + 8);
          *(int *)(local_b8 + 0x88) = iVar5;
          FUN_140d9d620(param_1,param_2 + 8,0x1d);
          plVar8 = local_b0;
          if (local_b0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_b0 + 1;
            lVar6 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_b0)(local_b0);
              LOCK();
              piVar2 = (int *)((longlong)plVar8 + 0xc);
              iVar5 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*local_b0 + 8))(local_b0,1);
              }
            }
          }
        }
        FUN_1404bf980(&local_78);
        FUN_1404bf980(&local_a0);
      }
    }
  }
  return;
}



// FUNCTION 140d9c4b0 FUN_140d9c4b0 body=509 status=ok
// SIG undefined FUN_140d9c4b0(void)

void FUN_140d9c4b0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  int local_res8 [2];
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined **local_98;
  undefined **local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined **local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  
  if (((*(longlong *)(param_1 + 0x10) != 0) && (*(longlong **)(param_2 + 0x10) != (longlong *)0x0))
     && (cVar6 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))(), cVar6 != '\0')) {
    local_a8 = *(undefined8 *)(param_2 + 0x10);
    local_a0 = *(longlong **)(param_2 + 0x18);
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
      UNLOCK();
    }
    iVar7 = FUN_140bb6e30(*(undefined8 *)(param_1 + 0x10),&local_a8);
    plVar5 = local_a0;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_a0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_a0)(local_a0);
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
    local_res8[0] = 1;
    FVariantData::GetValue(param_3,local_res8);
    if ((iVar7 != 0) && (iVar7 != local_res8[0])) {
      FVariantData::SetValue(param_3,iVar7);
      local_90 = &PTR_FUN_143f740c8;
      local_68 = &PTR_FUN_143f740c8;
      local_78 = 0;
      local_70 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      local_98 = &PTR_FUN_1445311d0;
      *(undefined1 *)(param_1 + 0xa0) = 1;
      local_40 = 7;
      local_88 = 0;
      uStack_80 = 0;
      local_38 = iVar7;
      FUN_140d99520(&local_98,param_2,*(undefined8 *)(param_1 + 0x10));
      if (*(char *)(param_2 + 0x58) != '\0') {
        FUN_140d84110(param_1,&local_b8,param_2 + 8);
        *(int *)(local_b8 + 0x40) = iVar7;
        FUN_140d9d620(param_1,param_2 + 8,7);
        plVar5 = local_b0;
        if (local_b0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_b0 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_b0)(local_b0);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar7 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_b0 + 8))(local_b0,1);
            }
          }
        }
      }
      FUN_1404bf980(&local_68);
      FUN_1404bf980(&local_90);
    }
  }
  return;
}



// FUNCTION 140d9c6b0 FUN_140d9c6b0 body=553 status=ok
// SIG undefined FUN_140d9c6b0(void)

void FUN_140d9c6b0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  char local_res8 [8];
  longlong local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined **local_88;
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  char local_28;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  if ((*(longlong **)(param_2 + 0x10) == (longlong *)0x0) ||
     (cVar6 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))(), cVar6 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return;
  }
  lVar7 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x148))();
  if (lVar7 == 0) {
    return;
  }
  lVar8 = *(longlong *)(param_1 + 0x10);
  if (lVar8 != 0) {
    local_98 = *(undefined8 *)(param_2 + 0x10);
    local_90 = *(longlong *)(param_2 + 0x18);
    if (local_90 != 0) {
      LOCK();
      *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
      UNLOCK();
      lVar8 = *(longlong *)(param_1 + 0x10);
    }
    lVar8 = FUN_14244c070(lVar8,&local_98);
    if ((lVar8 != 0) && (lVar7 = UPlayer::GetPlayerController(lVar8,lVar7), lVar7 != 0)) {
      lVar8 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        cVar6 = SVirtualWindow::SupportsKeyboardFocus(lVar7);
        goto LAB_140d9c7b3;
      }
    }
  }
  cVar6 = '\0';
LAB_140d9c7b3:
  FVariantData::GetValue(param_3,local_res8);
  *(undefined1 *)(param_1 + 0xa0) = 1;
  if (cVar6 != local_res8[0]) {
    FVariantData::SetValue(param_3,cVar6);
    local_80 = &PTR_FUN_143f740c8;
    local_58 = &PTR_FUN_143f740c8;
    local_68 = 0;
    local_60 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_88 = &PTR_FUN_144531210;
    local_30 = 0xf;
    local_78 = 0;
    uStack_70 = 0;
    local_28 = cVar6;
    FUN_140d99520(&local_88,param_2,*(undefined8 *)(param_1 + 0x10));
    if (*(char *)(param_2 + 0x58) != '\0') {
      FUN_140d84110(param_1,&local_a8,param_2 + 8);
      *(char *)(local_a8 + 0x81) = cVar6;
      FUN_140d9d620(param_1,param_2 + 8,0xf);
      plVar5 = local_a0;
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_a0 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_a0 + 8))(local_a0,1);
          }
        }
      }
    }
    FUN_1404bf980(&local_58);
    FUN_1404bf980(&local_80);
  }
  return;
}



// FUNCTION 140d9c8e0 FUN_140d9c8e0 body=607 status=ok
// SIG undefined FUN_140d9c8e0(void)

void FUN_140d9c8e0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 **ppuVar9;
  undefined2 *local_b8;
  int local_b0;
  undefined2 *local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_90;
  undefined **local_88;
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  void *local_28;
  undefined4 local_1c;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    if ((*(longlong **)(param_2 + 0x10) != (longlong *)0x0) &&
       (cVar5 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))(), cVar5 != '\0')) {
      FUN_140bb7110(*(undefined8 *)(param_1 + 0x10),&local_b8);
      local_a8 = (undefined2 *)0x0;
      local_a0 = 0;
      FUN_1404b0a70(param_3,&local_a8);
      puVar8 = &DAT_143f3eda8;
      if ((int)local_a0 != 0) {
        puVar8 = local_a8;
      }
      puVar7 = &DAT_143f3eda8;
      if (local_b0 != 0) {
        puVar7 = local_b8;
      }
      iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar8);
      if (iVar6 != 0) {
        FVariantData::SetValue(param_3,&local_b8);
        iVar6 = local_b0;
        puVar8 = local_b8;
        local_80 = &PTR_FUN_143f740c8;
        local_58 = &PTR_FUN_143f740c8;
        local_88 = &PTR_FUN_144531268;
        *(undefined1 *)(param_1 + 0xa0) = 1;
        local_30 = 8;
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 0;
        local_60 = 0;
        local_50 = 0;
        local_48 = 0;
        local_40 = 0;
        local_38 = 0;
        local_28 = (void *)0x0;
        local_1c = 0;
        if (local_b0 != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_b0,0);
          _guard_xfg_dispatch_icall_nop(local_28,puVar8,(longlong)iVar6 * 2);
        }
        FUN_140d99520(&local_88,param_2,*(undefined8 *)(param_1 + 0x10));
        if (*(char *)(param_2 + 0x58) != '\0') {
          FUN_140d84110(param_1,&local_98,param_2 + 8);
          puVar8 = local_b8;
          ppuVar9 = (undefined2 **)(local_98 + 0x48);
          if (ppuVar9 != &local_b8) {
            *(int *)(local_98 + 0x50) = local_b0;
            if ((local_b0 == 0) && (*(int *)(local_98 + 0x54) == 0)) {
              *(undefined4 *)(local_98 + 0x54) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppuVar9,local_b0);
              _guard_xfg_dispatch_icall_nop(*ppuVar9,puVar8,(longlong)local_b0 * 2);
            }
          }
          FUN_140d9d620(param_1,param_2 + 8,8);
          plVar4 = local_90;
          if (local_90 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_90 + 1;
            lVar3 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)*local_90)(local_90);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              iVar6 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*local_90 + 8))(local_90,1);
              }
            }
          }
        }
        if (local_28 != (void *)0x0) {
          FMemory::Free();
        }
        FUN_1404bf980(&local_58);
        FUN_1404bf980(&local_80);
      }
      if (local_a8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_b8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140d9cb40 FUN_140d9cb40 body=471 status=ok
// SIG undefined FUN_140d9cb40(void)

void FUN_140d9cb40(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  int local_res8 [2];
  longlong local_c8;
  longlong *local_c0;
  undefined **local_b8;
  undefined **local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined **local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  int local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  
  if (((*(longlong *)(param_1 + 0x10) != 0) && (*(longlong **)(param_2 + 0x10) != (longlong *)0x0))
     && (cVar5 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))(), cVar5 != '\0')) {
    uVar7 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x148))();
    iVar6 = FUN_140c12b10(uVar7);
    local_res8[0] = 0;
    FVariantData::GetValue(param_3,local_res8);
    if (iVar6 != local_res8[0]) {
      FVariantData::SetValue(param_3,iVar6);
      *(undefined1 *)(param_1 + 0xa0) = 1;
      FUN_140c14280(local_48,iVar6);
      local_b0 = &PTR_FUN_143f740c8;
      local_88 = &PTR_FUN_143f740c8;
      local_60 = 0xc;
      local_b8 = &PTR_FUN_1445312b0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      local_58 = iVar6;
      FUN_140d99520(&local_b8,param_2,*(undefined8 *)(param_1 + 0x10));
      if (*(char *)(param_2 + 0x58) != '\0') {
        FUN_140d84110(param_1,&local_c8,param_2 + 8);
        *(int *)(local_c8 + 0x70) = iVar6;
        FUN_140d9d620(param_1,param_2 + 8,0xc);
        plVar3 = local_c0;
        if (local_c0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_c0 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_c0)(local_c0);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_c0 + 8))(local_c0,1);
            }
          }
        }
      }
      FUN_1404bf980(&local_88);
      FUN_1404bf980(&local_b0);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_40 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)local_40 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140d9cd20 FUN_140d9cd20 body=573 status=ok
// SIG undefined FUN_140d9cd20(void)

void FUN_140d9cd20(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int local_res8 [2];
  longlong local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  undefined **local_b8;
  undefined **local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined **local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  int local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  
  if (((*(longlong *)(param_1 + 0x10) != 0) && (*(longlong **)(param_2 + 0x10) != (longlong *)0x0))
     && (cVar6 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))(), cVar6 != '\0')) {
    local_c8 = *(undefined8 *)(param_2 + 0x10);
    local_c0 = *(longlong **)(param_2 + 0x18);
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
      UNLOCK();
    }
    iVar7 = FUN_140bb6bd0(*(undefined8 *)(param_1 + 0x10),&local_c8);
    plVar3 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c0 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_c0)(local_c0);
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
    local_res8[0] = 0;
    FVariantData::GetValue(param_3,local_res8);
    if ((iVar7 != 0) && (iVar7 != local_res8[0])) {
      FVariantData::SetValue(param_3,iVar7);
      *(undefined1 *)(param_1 + 0xa0) = 1;
      FUN_140bbae80(*(undefined8 *)(param_1 + 0x10),local_48,iVar7);
      local_b0 = &PTR_FUN_143f740c8;
      local_88 = &PTR_FUN_143f740c8;
      local_60 = 0xb;
      local_b8 = &PTR_FUN_144531368;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      local_58 = iVar7;
      FUN_140d99520(&local_b8,param_2,*(undefined8 *)(param_1 + 0x10));
      if (*(char *)(param_2 + 0x58) != '\0') {
        FUN_140d84110(param_1,&local_d8,param_2 + 8);
        *(int *)(local_d8 + 0x6c) = iVar7;
        FUN_140d9d620(param_1,param_2 + 8,0xb);
        plVar3 = local_d0;
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_d0 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_d0)(local_d0);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar7 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_d0 + 8))(local_d0,1);
            }
          }
        }
      }
      FUN_1404bf980(&local_88);
      FUN_1404bf980(&local_b0);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_40 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)local_40 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140d9cf60 FUN_140d9cf60 body=220 status=ok
// SIG undefined FUN_140d9cf60(void)

void FUN_140d9cf60(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined **local_78;
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_18;
  
  if (*(longlong **)(param_2 + 4) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_2 + 4) + 0x20))();
    if ((cVar1 != '\0') && (*(longlong **)(param_2 + 0xe) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(param_2 + 0xe) + 0x20))();
      if ((cVar1 != '\0') && (*(char *)((longlong)param_2 + 0x59) != '\0')) {
        local_70 = &PTR_FUN_143f740c8;
        local_48 = &PTR_FUN_143f740c8;
        local_58 = 0;
        local_78 = &PTR_FUN_144530d68;
        local_18 = *param_2;
        local_50 = 0;
        local_40 = 0;
        local_38 = 0;
        local_30 = 0;
        local_28 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_20 = 1;
        FUN_140d99520(&local_78,param_2,*(undefined8 *)(param_1 + 0x10));
        FUN_1404bf980(&local_48);
        FUN_1404bf980(&local_70);
      }
    }
  }
  return;
}



// FUNCTION 140d9d040 FUN_140d9d040 body=607 status=ok
// SIG undefined FUN_140d9d040(void)

void FUN_140d9d040(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 **ppuVar9;
  undefined2 *local_b8;
  int local_b0;
  undefined2 *local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_90;
  undefined **local_88;
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  void *local_28;
  undefined4 local_1c;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    if ((*(longlong **)(param_2 + 0x10) != (longlong *)0x0) &&
       (cVar5 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))(), cVar5 != '\0')) {
      FUN_140bb7010(*(undefined8 *)(param_1 + 0x10),&local_b8);
      local_a8 = (undefined2 *)0x0;
      local_a0 = 0;
      FUN_1404b0a70(param_3,&local_a8);
      puVar8 = &DAT_143f3eda8;
      if ((int)local_a0 != 0) {
        puVar8 = local_a8;
      }
      puVar7 = &DAT_143f3eda8;
      if (local_b0 != 0) {
        puVar7 = local_b8;
      }
      iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar8);
      if (iVar6 != 0) {
        FVariantData::SetValue(param_3,&local_b8);
        iVar6 = local_b0;
        puVar8 = local_b8;
        local_80 = &PTR_FUN_143f740c8;
        local_58 = &PTR_FUN_143f740c8;
        local_88 = &PTR_FUN_1445313c0;
        *(undefined1 *)(param_1 + 0xa0) = 1;
        local_30 = 9;
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 0;
        local_60 = 0;
        local_50 = 0;
        local_48 = 0;
        local_40 = 0;
        local_38 = 0;
        local_28 = (void *)0x0;
        local_1c = 0;
        if (local_b0 != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_b0,0);
          _guard_xfg_dispatch_icall_nop(local_28,puVar8,(longlong)iVar6 * 2);
        }
        FUN_140d99520(&local_88,param_2,*(undefined8 *)(param_1 + 0x10));
        if (*(char *)(param_2 + 0x58) != '\0') {
          FUN_140d84110(param_1,&local_98,param_2 + 8);
          puVar8 = local_b8;
          ppuVar9 = (undefined2 **)(local_98 + 0x58);
          if (ppuVar9 != &local_b8) {
            *(int *)(local_98 + 0x60) = local_b0;
            if ((local_b0 == 0) && (*(int *)(local_98 + 100) == 0)) {
              *(undefined4 *)(local_98 + 100) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppuVar9,local_b0);
              _guard_xfg_dispatch_icall_nop(*ppuVar9,puVar8,(longlong)local_b0 * 2);
            }
          }
          FUN_140d9d620(param_1,param_2 + 8,9);
          plVar4 = local_90;
          if (local_90 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_90 + 1;
            lVar3 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)*local_90)(local_90);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              iVar6 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*local_90 + 8))(local_90,1);
              }
            }
          }
        }
        if (local_28 != (void *)0x0) {
          FMemory::Free();
        }
        FUN_1404bf980(&local_58);
        FUN_1404bf980(&local_80);
      }
      if (local_a8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_b8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140d9d2a0 FUN_140d9d2a0 body=886 status=ok
// SIG undefined FUN_140d9d2a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d9d2a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined1 auStack_1f8 [32];
  int local_1d8 [2];
  undefined **local_1d0;
  longlong *local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined **local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined1 local_180;
  char local_17f;
  undefined **local_178;
  undefined **local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined **local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined **local_118;
  undefined8 local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined **local_d8;
  undefined **local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined **local_78 [7];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  if (0 < *(int *)(param_1 + 0x198)) {
    plVar1 = (longlong *)(param_1 + 400);
    piVar2 = (int *)*plVar1;
    local_1d8[0] = *piVar2;
    local_1c8 = *(longlong **)(piVar2 + 4);
    local_1c0 = *(longlong *)(piVar2 + 6);
    if (local_1c0 != 0) {
      LOCK();
      *(int *)(local_1c0 + 8) = *(int *)(local_1c0 + 8) + 1;
      UNLOCK();
    }
    local_1b8 = 0;
    local_1d0 = &PTR_FUN_143f740c8;
    local_1b0 = 0;
    local_1a0 = *(undefined8 *)(piVar2 + 0xe);
    local_198 = *(longlong *)(piVar2 + 0x10);
    if (local_198 != 0) {
      LOCK();
      *(int *)(local_198 + 8) = *(int *)(local_198 + 8) + 1;
      UNLOCK();
    }
    local_1a8 = &PTR_FUN_143f740c8;
    local_190 = 0;
    local_188 = 0;
    local_180 = (undefined1)piVar2[0x16];
    local_17f = *(char *)((longlong)piVar2 + 0x59);
    if (local_17f == '\0') {
      if (local_1d8[0] == 2) {
        FUN_140d9b130(param_1,local_1d8);
      }
      else if (local_1d8[0] == 3) {
        FUN_140d9a330(param_1,local_1d8);
      }
      else if (local_1d8[0] == 4) {
        if ((*(longlong *)(param_1 + 0x10) != 0) && (local_1c8 != (longlong *)0x0)) {
          cVar4 = (**(code **)(*local_1c8 + 0x20))();
          if (cVar4 != '\0') {
            local_d8 = &PTR_FUN_1445310d8;
            local_80 = 4;
            local_78[0] = &PTR_FUN_1445306a0;
            local_c8 = 0;
            uStack_c0 = 0;
            local_d0 = &PTR_FUN_143f740c8;
            local_b8 = 0;
            local_b0 = 0;
            local_a0 = 0;
            local_98 = 0;
            local_a8 = &PTR_FUN_143f740c8;
            local_90 = 0;
            local_88 = 0;
            local_40 = 0;
            local_38 = 0;
            FUN_140d89120(local_78,&local_1d0,*(undefined8 *)(param_1 + 0x10));
            FUN_140d99520(&local_d8,local_1d8,*(undefined8 *)(param_1 + 0x10));
            if (local_40 != 0) {
              FMemory::Free();
            }
            FUN_1404bf980(&local_a8);
            FUN_1404bf980(&local_d0);
          }
        }
      }
      else if (local_1d8[0] == 5) {
        if ((*(longlong *)(param_1 + 0x10) != 0) && (local_1c8 != (longlong *)0x0)) {
          cVar4 = (**(code **)(*local_1c8 + 0x20))();
          if (cVar4 != '\0') {
            local_178 = &PTR_FUN_144530f98;
            local_118 = &PTR_FUN_1445306c8;
            local_120 = 5;
            local_168 = 0;
            uStack_160 = 0;
            local_170 = &PTR_FUN_143f740c8;
            local_158 = 0;
            local_150 = 0;
            local_140 = 0;
            local_138 = 0;
            local_148 = &PTR_FUN_143f740c8;
            local_130 = 0;
            local_128 = 0;
            local_108 = 0;
            local_100 = 0;
            local_f8 = 0;
            local_f0 = 0;
            local_e8 = 0;
            local_e0 = 0;
            if (local_1c8 != (longlong *)0x0) {
              (**(code **)(*local_1c8 + 0x20))();
            }
            FUN_140d99520(&local_178,local_1d8,*(undefined8 *)(param_1 + 0x10));
            FUN_140ce1610(&local_e8);
            if (local_f8 != 0) {
              FMemory::Free();
            }
            TArray<FNamedInterfaceDef,FDefaultAllocator>::
            ~TArray<FNamedInterfaceDef,FDefaultAllocator>(&local_108);
            FUN_1404bf980(&local_148);
            FUN_1404bf980(&local_170);
          }
        }
      }
      else {
        FUN_140d99610(param_1,local_1d8);
      }
    }
    else {
      FUN_140d9cf60(param_1,local_1d8);
    }
    lVar3 = *plVar1;
    FUN_1404bf980(lVar3 + 0x30);
    FUN_1404bf980(lVar3 + 8);
    iVar5 = *(int *)(param_1 + 0x198);
    if (iVar5 + -1 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)*plVar1,(void *)(*plVar1 + 0x60),(longlong)(iVar5 + -1) * 0x60);
      iVar5 = *(int *)(param_1 + 0x198);
    }
    *(int *)(param_1 + 0x198) = iVar5 + -1;
    TArray<FInspectStat,FDefaultAllocator>::ResizeShrink(plVar1);
    *(undefined4 *)(param_1 + 0xb4) = 0;
    FUN_1404bf980(&local_1a8);
    FUN_1404bf980(&local_1d0);
  }
  return;
}



// FUNCTION 140d9d620 FUN_140d9d620 body=1883 status=ok
// SIG undefined FUN_140d9d620(void)

void FUN_140d9d620(longlong param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  undefined4 local_res8 [2];
  undefined4 local_res20 [2];
  int local_228;
  int local_224;
  int local_220 [2];
  longlong local_218 [3];
  undefined8 local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  longlong *plStack_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined **local_1d0;
  longlong local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  undefined8 *local_1a8;
  undefined8 local_1a0;
  longlong *local_198;
  longlong local_190;
  longlong *local_188;
  undefined8 local_180;
  longlong *local_178;
  undefined8 local_170;
  longlong *local_168;
  longlong local_160;
  longlong *local_158;
  undefined8 local_150;
  longlong *local_148;
  longlong local_140;
  longlong *local_138;
  longlong local_130 [2];
  undefined1 local_120 [8];
  longlong *local_118;
  undefined **local_108;
  longlong *local_100;
  byte local_df;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  
  lVar12 = 0;
  local_res8[0] = 0;
  lVar11 = *(longlong *)(param_1 + 0x10);
  if (lVar11 == 0) {
    plVar10 = &local_1f0;
    local_1f0 = 0;
    plStack_1e8 = (longlong *)0x0;
    bVar8 = false;
    bVar7 = false;
    bVar6 = true;
  }
  else {
    local_1a0 = *(undefined8 *)(param_2 + 8);
    local_198 = *(longlong **)(param_2 + 0x10);
    if (local_198 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_198 + 1) = (int)local_198[1] + 1;
      UNLOCK();
      lVar11 = *(longlong *)(param_1 + 0x10);
    }
    plVar10 = (longlong *)FUN_140bbc690(lVar11,local_120,&local_1a0);
    bVar8 = true;
    bVar7 = true;
    bVar6 = false;
    lVar12 = *plVar10;
  }
  plVar4 = (longlong *)plVar10[1];
  plVar10[1] = 0;
  *plVar10 = 0;
  plVar10 = plStack_1e8;
  if ((bVar6) && (plStack_1e8 != (longlong *)0x0)) {
    LOCK();
    plVar5 = plStack_1e8 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_1e8)(plStack_1e8);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_1e8 + 8))(plStack_1e8,1);
      }
    }
  }
  if ((bVar7) && (local_118 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_118 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_118)(local_118);
      LOCK();
      piVar1 = (int *)((longlong)local_118 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_118 + 8))(local_118,1);
      }
    }
  }
  plVar10 = local_198;
  if ((bVar8) && (local_198 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_198 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_198)(local_198);
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
  if (lVar12 != 0) {
    local_180 = *(undefined8 *)(param_2 + 8);
    local_178 = *(longlong **)(param_2 + 0x10);
    if (local_178 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_178 + 1) = (int)local_178[1] + 1;
      UNLOCK();
    }
    fVar13 = 5.0;
    lVar11 = FUN_142b45e90();
    FUN_142b4a990(*(undefined8 *)(lVar11 + 0x18),&local_160,&local_180);
    if (local_160 != 0) {
      FUN_142b4a0e0(local_160,&local_190,&DAT_146b2ace8);
      if (local_190 != 0) {
        local_218[1] = 0x23;
        local_218[0] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_218,0);
        FGenericPlatformString::Memcpy(local_218[0],L"SendXmppPresenceUpdateDelaySeconds",0x46);
        fVar13 = (float)FUN_142afb1f0(local_190,local_218,0x40a00000,0,0x461c3c00);
        if (local_218[0] != 0) {
          FMemory::Free();
        }
      }
      if (local_188 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_188 + 1;
        lVar11 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_188)(local_188);
          LOCK();
          piVar1 = (int *)((longlong)local_188 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_188 + 8))(local_188,1);
          }
        }
      }
    }
    if (local_158 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_158 + 1;
      lVar11 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_158)(local_158);
        LOCK();
        piVar1 = (int *)((longlong)local_158 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_158 + 8))(local_158,1);
        }
      }
    }
    plVar10 = local_178;
    if (local_178 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_178 + 1;
      lVar11 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_178)(local_178);
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
    if (0.0 < fVar13) {
      local_1e0 = *(undefined8 *)(param_2 + 8);
      local_1d8 = *(longlong **)(param_2 + 0x10);
      if (local_1d8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1d8 + 1) = (int)local_1d8[1] + 1;
        UNLOCK();
      }
      FUN_1405499a0(param_1 + 0x218,&local_228,&local_1e0);
      if ((local_228 == -1) ||
         (lVar11 = (longlong)local_228 * 0x20 + *(longlong *)(param_1 + 0x218), lVar11 == 0)) {
        local_1a8 = &local_1e0;
        FUN_140d5c590(param_1 + 0x218,&local_224,&local_1a8,0);
        lVar11 = (longlong)local_224 * 0x20 + *(longlong *)(param_1 + 0x218);
      }
      plVar10 = local_1d8;
      if (local_1d8 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_1d8 + 1;
        lVar9 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_1d8)(local_1d8);
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
      if (0.0 < *(float *)(lVar11 + 0x10)) {
        *(undefined4 *)(lVar11 + 0x14) = param_3;
      }
      else {
        *(float *)(lVar11 + 0x10) = fVar13;
        plVar10 = *(longlong **)(param_2 + 0x10);
        local_150 = *(undefined8 *)(param_2 + 8);
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        local_148 = plVar10;
        FUN_140549810(param_1 + 0x1c0,local_220,&local_150);
        if (local_220[0] == -1) {
          lVar11 = 0;
        }
        else {
          lVar11 = *(longlong *)(param_1 + 0x1c0) + (longlong)local_220[0] * 0x28;
        }
        lVar9 = *(longlong *)(lVar11 + 0x10);
        plVar5 = *(longlong **)(lVar11 + 0x18);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar10 + 1;
          lVar11 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plVar10)(plVar10);
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
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        local_1d0 = &PTR_FUN_143f740c8;
        local_1b8 = 0;
        local_1b0 = 0;
        local_1c8 = lVar12;
        local_1c0 = plVar4;
        FUN_1404c0940(lVar9 + 8,&local_1d0);
        if (local_1b8 != 0) {
          FMemory::Free();
        }
        plVar10 = local_1c0;
        if (local_1c0 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_1c0 + 1;
          lVar11 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_1c0)(local_1c0);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_1c0 + 8))(local_1c0,1);
            }
          }
        }
        local_218[2] = 0;
        local_200 = 0;
        local_1f8 = 0;
        FArchive::FArchive(&local_108);
        local_78 = 0;
        local_108 = &PTR_FUN_143f4a100;
        local_70 = local_218 + 2;
        local_68 = 0;
        FArchive::SetIsSaving(&local_108,1);
        FArchive::SetIsPersistent(&local_108,0);
        local_res20[0] = FUN_1404b0120();
        if ((undefined4 *)local_100[1] < (undefined4 *)*local_100 + 1) {
          (*(code *)local_108[10])(&local_108,local_res20,4);
          if ((local_df & 0x10) != 0) {
            FArchive::ByteSwap(&local_108,local_res20,4);
          }
        }
        else {
          local_res20[0] = *(undefined4 *)*local_100;
          *local_100 = *local_100 + 4;
        }
        local_res8[0] = CONCAT31(local_res8[0]._1_3_,1);
        if ((undefined1 *)local_100[1] < (undefined1 *)*local_100 + 1) {
          (*(code *)local_108[10])(&local_108,local_res8,1);
        }
        else {
          local_res8[0] = CONCAT31(local_res8[0]._1_3_,*(undefined1 *)*local_100);
          *local_100 = *local_100 + 1;
        }
        (**(code **)(*(longlong *)(lVar9 + 0x38) + 0x10))(lVar9 + 0x38,&local_108);
        if (0 < (int)local_200) {
          FBase64::Encode(local_130,local_218 + 2);
          local_170 = *(undefined8 *)(param_2 + 8);
          local_168 = *(longlong **)(param_2 + 0x10);
          if (local_168 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_168 + 1) = (int)local_168[1] + 1;
            UNLOCK();
          }
          lVar11 = FUN_142b45e90();
          FUN_142b4a990(*(undefined8 *)(lVar11 + 0x18),&local_140,&local_170);
          plVar10 = local_168;
          if (local_168 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_168 + 1;
            lVar11 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*local_168)(local_168);
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
          if (local_140 != 0) {
            FUN_142b6b080(local_140,local_130);
          }
          if (local_138 != (longlong *)0x0) {
            LOCK();
            plVar10 = local_138 + 1;
            lVar11 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*local_138)(local_138);
              LOCK();
              piVar1 = (int *)((longlong)local_138 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_138 + 8))(local_138,1);
              }
            }
          }
          if (local_130[0] != 0) {
            FMemory::Free();
          }
        }
        FArchive::~FArchive(&local_108);
        if (local_218[2] != 0) {
          FMemory::Free();
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar5 + 1;
          lVar11 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
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
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar4 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  return;
}



// FUNCTION 140d9dd80 FUN_140d9dd80 body=443 status=ok
// SIG undefined FUN_140d9dd80(void)

void FUN_140d9dd80(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,(undefined1 *)(param_1 + 8),1);
  }
  else {
    *(undefined1 *)(param_1 + 8) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 9,1);
  }
  else {
    *(undefined1 *)(param_1 + 9) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 10,1);
  }
  else {
    *(undefined1 *)(param_1 + 10) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xb,1);
  }
  else {
    *(undefined1 *)(param_1 + 0xb) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xc,1);
  }
  else {
    *(undefined1 *)(param_1 + 0xc) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xd,1);
  }
  else {
    *(undefined1 *)(param_1 + 0xd) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xe,1);
  }
  else {
    *(undefined1 *)(param_1 + 0xe) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar1 = *(undefined1 **)param_2[1];
  if (puVar1 + 1 <= (undefined1 *)((undefined8 *)param_2[1])[1]) {
    *(undefined1 *)(param_1 + 0xf) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140d9df37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x50))(param_2,(undefined1 *)(param_1 + 0xf),1);
  return;
}



// FUNCTION 140d9df40 WinMainCRTStartup body=18 status=ok
// SIG undefined WinMainCRTStartup(void)

void WinMainCRTStartup(void)

{
  FUN_1412fd2d0();
  FMovieSceneEventPayloadVariable::StaticStruct();
  return;
}



// FUNCTION 140d9df60 FUN_140d9df60 body=1377 status=ok
// SIG undefined FUN_140d9df60(void)

void FUN_140d9df60(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int local_res10 [2];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90 [16];
  undefined1 *local_80;
  undefined1 **local_78;
  undefined **local_70;
  undefined8 local_68;
  longlong *plStack_60;
  longlong local_58;
  undefined8 local_50;
  
  FUN_1425da060(param_2,param_1 + 8);
  FUN_1425da060(param_2,param_1 + 0x30);
  puVar5 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x58,1);
  }
  else {
    *(undefined1 *)(param_1 + 0x58) = *puVar5;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  FUN_1404c11e0(param_2,param_1 + 0x60);
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_90,param_2);
  local_80 = local_90;
  local_78 = &local_80;
  FUN_141661f40(&local_80,param_1 + 0x68);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_90);
  puVar10 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar10 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x78,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x78,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x78) = *puVar10;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar10 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar10 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x7c,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x7c,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x7c) = *puVar10;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_14158ce90(param_2,param_1 + 0x88);
  FUN_1406da970(param_2,param_1 + 0x98);
  plVar6 = (longlong *)param_2[1];
  if ((*(byte *)(param_2 + 5) & 2) == 0) {
    iVar12 = 0;
    local_res10[0] = 0;
    if ((int *)plVar6[1] < (int *)*plVar6 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res10,4);
      }
    }
    else {
      local_res10[0] = *(int *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    if (0 < local_res10[0]) {
      iVar11 = iVar12;
      do {
        local_70 = &PTR_FUN_143f740c8;
        local_58 = 0;
        local_50 = 0;
        local_68 = 0;
        plStack_60 = (longlong *)0x0;
        FUN_1425da060(param_2,&local_70);
        iVar4 = *(int *)(param_1 + 0x150);
        lVar9 = (longlong)iVar4;
        *(int *)(param_1 + 0x150) = iVar4 + 1;
        if (*(int *)(param_1 + 0x154) < iVar4 + 1) {
          TArray<FGPUSortManager::FSortBatch,TInlineAllocator<4,TSizedDefaultAllocator<32>_>_>::
          ResizeGrow(param_1 + 0xa8,iVar4);
        }
        lVar8 = *(longlong *)(param_1 + 0x148);
        if (*(longlong *)(param_1 + 0x148) == 0) {
          lVar8 = param_1 + 0xa8;
        }
        *(undefined ***)(lVar8 + lVar9 * 0x28) = &PTR_FUN_143f73d18;
        *(undefined8 *)(lVar8 + 8 + lVar9 * 0x28) = local_68;
        *(longlong **)(lVar8 + 0x10 + lVar9 * 0x28) = plStack_60;
        if (plStack_60 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
          UNLOCK();
        }
        *(undefined ***)(lVar8 + lVar9 * 0x28) = &PTR_FUN_143f740c8;
        *(undefined8 *)(lVar8 + 0x18 + lVar9 * 0x28) = 0;
        *(undefined8 *)(lVar8 + 0x20 + lVar9 * 0x28) = 0;
        local_70 = &PTR_FUN_143f740c8;
        if (local_58 != 0) {
          FMemory::Free();
        }
        plVar6 = plStack_60;
        local_70 = &PTR_FUN_143f73d18;
        if (plStack_60 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_60 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plStack_60)(plStack_60);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < local_res10[0]);
    }
    plVar6 = (longlong *)param_2[1];
    local_res18[0] = 0;
    if ((int *)plVar6[1] < (int *)*plVar6 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res18,4);
      }
    }
    else {
      local_res18[0] = *(int *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    if (0 < local_res18[0]) {
      do {
        plVar6 = (longlong *)param_2[1];
        if ((undefined4 *)plVar6[1] < (undefined4 *)*plVar6 + 1) {
          (**(code **)(*param_2 + 0x50))(param_2,&local_94,4);
          if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_2,&local_94,4);
          }
        }
        else {
          local_94 = *(undefined4 *)*plVar6;
          *plVar6 = *plVar6 + 4;
        }
        iVar11 = *(int *)(param_1 + 0x170);
        *(int *)(param_1 + 0x170) = iVar11 + 1;
        if (*(int *)(param_1 + 0x174) < iVar11 + 1) {
          TArray<enum_D3D12_RESOURCE_STATES,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                    (param_1 + 0x158,iVar11);
        }
        lVar9 = *(longlong *)(param_1 + 0x168);
        if (*(longlong *)(param_1 + 0x168) == 0) {
          lVar9 = param_1 + 0x158;
        }
        iVar12 = iVar12 + 1;
        *(undefined4 *)(lVar9 + (longlong)iVar11 * 4) = local_94;
      } while (iVar12 < local_res18[0]);
    }
  }
  else {
    local_res20[0] = *(undefined4 *)(param_1 + 0x150);
    if ((undefined4 *)plVar6[1] < (undefined4 *)*plVar6 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res20,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res20,4);
      }
    }
    else {
      local_res20[0] = *(undefined4 *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    lVar9 = *(longlong *)(param_1 + 0x148);
    if (*(longlong *)(param_1 + 0x148) == 0) {
      lVar9 = param_1 + 0xa8;
    }
    lVar8 = lVar9 + (longlong)*(int *)(param_1 + 0x150) * 0x28;
    for (; lVar9 != lVar8; lVar9 = lVar9 + 0x28) {
      FUN_1425da060(param_2,lVar9);
    }
    plVar6 = (longlong *)param_2[1];
    local_98 = *(undefined4 *)(param_1 + 0x170);
    if ((undefined4 *)plVar6[1] < (undefined4 *)*plVar6 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,&local_98,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,&local_98,4);
      }
    }
    else {
      local_98 = *(undefined4 *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    puVar10 = *(undefined4 **)(param_1 + 0x168);
    if (*(undefined4 **)(param_1 + 0x168) == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)(param_1 + 0x158);
    }
    puVar3 = puVar10 + *(int *)(param_1 + 0x170);
    for (; puVar10 != puVar3; puVar10 = puVar10 + 1) {
      puVar7 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar7 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,puVar10,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,puVar10,4);
        }
      }
      else {
        *puVar10 = *puVar7;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
    }
  }
  return;
}



// FUNCTION 140d9e4d0 FUN_140d9e4d0 body=125 status=ok
// SIG undefined FUN_140d9e4d0(void)

void FUN_140d9e4d0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  FUN_140d9df60();
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *(undefined4 *)(param_1 + 0x178) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return;
  }
  (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x178,4);
  if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_2,param_1 + 0x178,4);
  }
  return;
}



// FUNCTION 140d9e550 FUN_140d9e550 body=308 status=ok
// SIG undefined FUN_140d9e550(void)

void FUN_140d9e550(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  FUN_140d9df60();
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x178,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x178,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x178) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x17c,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x17c,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x17c) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *(undefined4 *)(param_1 + 0x180) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return;
  }
  (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x180,4);
  if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_2,param_1 + 0x180,4);
  }
  return;
}



// FUNCTION 140d9e690 FUN_140d9e690 body=430 status=ok
// SIG undefined FUN_140d9e690(void)

void FUN_140d9e690(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *_Dst;
  longlong *plVar3;
  longlong *plVar4;
  int local_res10 [2];
  
  FUN_140d9df60();
  plVar4 = (longlong *)param_2[1];
  if ((*(byte *)(param_2 + 5) & 2) == 0) {
    if ((int *)plVar4[1] < (int *)*plVar4 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res10,4);
      }
    }
    else {
      local_res10[0] = *(int *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    plVar4 = (longlong *)(param_1 + 0x178);
    FUN_140d73ef0(plVar4);
    while (0 < local_res10[0]) {
      iVar1 = *(int *)(param_1 + 0x180);
      local_res10[0] = local_res10[0] + -1;
      iVar2 = iVar1 + 1;
      *(int *)(param_1 + 0x180) = iVar2;
      if (*(int *)(param_1 + 0x184) < iVar2) {
        TArray<FEnvQueryInstanceCache,FDefaultAllocator>::ResizeGrow(plVar4);
      }
      _Dst = (undefined8 *)((longlong)iVar1 * 0x188 + *plVar4);
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x188);
      FUN_140d63580(_Dst);
      *(undefined4 *)(_Dst + 0x2f) = 0;
      *(undefined8 *)((longlong)_Dst + 0x17c) = 0xffffffffffffffff;
      *_Dst = &PTR_FUN_144530608;
      *(undefined1 *)(_Dst + 0xb) = 0xb;
      FUN_140d9e550(_Dst);
    }
  }
  else {
    local_res10[0] = *(int *)(param_1 + 0x180);
    if ((int *)plVar4[1] < (int *)*plVar4 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res10,4);
      }
    }
    else {
      local_res10[0] = *(int *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    plVar4 = *(longlong **)(param_1 + 0x178);
    plVar3 = plVar4 + (longlong)*(int *)(param_1 + 0x180) * 0x31;
    if (plVar4 != plVar3) {
      do {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
        plVar4 = plVar4 + 0x31;
      } while (plVar4 != plVar3);
      return;
    }
  }
  return;
}



// FUNCTION 140d9e840 FUN_140d9e840 body=110 status=ok
// SIG undefined FUN_140d9e840(void)

void FUN_140d9e840(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  
  FUN_140d9df60();
  FUN_14158ce90(param_2,param_1 + 0x178);
  puVar1 = *(undefined1 **)param_2[1];
  if (puVar1 + 1 <= (undefined1 *)((undefined8 *)param_2[1])[1]) {
    *(undefined1 *)(param_1 + 0x188) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140d9e8aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x50))(param_2,(undefined1 *)(param_1 + 0x188),1);
  return;
}



// FUNCTION 140d9e8b0 FUN_140d9e8b0 body=46 status=ok
// SIG undefined FUN_140d9e8b0(void)

void FUN_140d9e8b0(longlong param_1,undefined8 param_2)

{
  FUN_140d9df60();
  FUN_14158ce90(param_2,param_1 + 0x178);
  return;
}



// FUNCTION 140d9e8e0 FUN_140d9e8e0 body=392 status=ok
// SIG undefined FUN_140d9e8e0(void)

void FUN_140d9e8e0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  FUN_140d9df60();
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x178,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x178,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x178) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x184,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x184,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x184) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x17c,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x17c,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x17c) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *(undefined4 *)(param_1 + 0x180) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return;
  }
  (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x180,4);
  if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_2,param_1 + 0x180,4);
  }
  return;
}



// FUNCTION 140d9ea70 FUN_140d9ea70 body=92 status=ok
// SIG undefined FUN_140d9ea70(void)

void FUN_140d9ea70(longlong param_1,undefined8 param_2)

{
  undefined1 local_28 [16];
  undefined1 *local_18;
  undefined1 **local_10;
  
  FUN_140d9df60();
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_28,param_2);
  local_18 = local_28;
  local_10 = &local_18;
  FUN_141661f40(&local_18,param_1 + 0x178);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_28);
  return;
}



// FUNCTION 140d9eae0 FUN_140d9eae0 body=483 status=ok
// SIG undefined FUN_140d9eae0(void)

void FUN_140d9eae0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  FUN_14158ce90(param_2,param_1 + 8);
  FUN_14158ce90(param_2,param_1 + 0x18);
  FUN_14158ce90(param_2,param_1 + 0x28);
  FUN_14158ce90(param_2,param_1 + 0x38);
  FUN_14158ce90(param_2,param_1 + 0x48);
  FUN_14158ce90(param_2,param_1 + 0x58);
  FUN_14158ce90(param_2,param_1 + 0x68);
  FUN_14158ce90(param_2,param_1 + 0x78);
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
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x8c,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x8c,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x8c) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x90,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x90,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x90) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *(undefined4 *)(param_1 + 0x94) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return;
  }
  (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x94,4);
  if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_2,param_1 + 0x94,4);
  }
  return;
}



// FUNCTION 140d9ecd0 FUN_140d9ecd0 body=651 status=ok
// SIG undefined FUN_140d9ecd0(void)

void FUN_140d9ecd0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 8,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 8,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 8) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_14158ce90(param_2,param_1 + 0x10);
  FUN_14158ce90(param_2,param_1 + 0x20);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x30,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x30,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x34,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x34,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x34) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x38,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x38,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x48);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x49);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x4a);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x4c,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x4c,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x4c) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_1406da970(param_2,param_1 + 0x3c);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x50,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x50,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x50) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *(undefined4 *)(param_1 + 0x54) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return;
  }
  (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x54,4);
  if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_2,param_1 + 0x54,4);
  }
  return;
}



// FUNCTION 140d9ef70 FUN_140d9ef70 body=129 status=ok
// SIG undefined FUN_140d9ef70(void)

void FUN_140d9ef70(longlong param_1,undefined8 param_2)

{
  FUN_1425da060(param_2,param_1 + 8);
  FUN_1404c11e0(param_2,param_1 + 0x30);
  (**(code **)(*(longlong *)(param_1 + 0x38) + 0x10))(param_1 + 0x38,param_2);
  (**(code **)(*(longlong *)(param_1 + 0x90) + 0x10))((longlong *)(param_1 + 0x90),param_2);
  (**(code **)(*(longlong *)(param_1 + 0x1a8) + 0x10))((longlong *)(param_1 + 0x1a8),param_2);
  (**(code **)(*(longlong *)(param_1 + 0x1f0) + 0x10))((longlong *)(param_1 + 0x1f0),param_2);
                    /* WARNING: Could not recover jumptable at 0x000140d9efed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x230) + 0x10))((longlong *)(param_1 + 0x230),param_2);
  return;
}



// FUNCTION 140d9f000 FUN_140d9f000 body=135 status=ok
// SIG undefined FUN_140d9f000(void)

void FUN_140d9f000(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  FUN_1425da060(param_2,param_1 + 8);
  FUN_1425da060(param_2,param_1 + 0x30);
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *(undefined4 *)(param_1 + 0x58) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return;
  }
  (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x58,4);
  if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_2,param_1 + 0x58,4);
  }
  return;
}



// FUNCTION 140d9f090 FUN_140d9f090 body=45 status=ok
// SIG undefined FUN_140d9f090(void)

void FUN_140d9f090(longlong param_1,longlong *param_2)

{
  FUN_140d9f000();
                    /* WARNING: Could not recover jumptable at 0x000140d9f0b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x60);
  return;
}



// FUNCTION 140d9f0c0 FUN_140d9f0c0 body=116 status=ok
// SIG undefined FUN_140d9f0c0(void)

void FUN_140d9f0c0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  FUN_140d9f000();
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *(undefined4 *)(param_1 + 0x60) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return;
  }
  (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x60,4);
  if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_2,param_1 + 0x60,4);
  }
  return;
}



// FUNCTION 140d9f140 FUN_140d9f140 body=46 status=ok
// SIG undefined FUN_140d9f140(void)

void FUN_140d9f140(longlong param_1,undefined8 param_2)

{
  FUN_140d9f000();
                    /* WARNING: Could not recover jumptable at 0x000140d9f16a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x60) + 0x10))(param_1 + 0x60,param_2);
  return;
}



// FUNCTION 140d9f170 FUN_140d9f170 body=43 status=ok
// SIG undefined FUN_140d9f170(void)

void FUN_140d9f170(longlong param_1,undefined8 param_2)

{
  FUN_140d9f000();
  FUN_14158ce90(param_2,param_1 + 0x60);
  return;
}



// FUNCTION 140d9f1a0 FUN_140d9f1a0 body=43 status=ok
// SIG undefined FUN_140d9f1a0(void)

void FUN_140d9f1a0(longlong param_1,undefined8 param_2)

{
  FUN_140d9f000();
  FUN_1406da970(param_2,param_1 + 0x60);
  return;
}



// FUNCTION 140d9f1d0 FUN_140d9f1d0 body=242 status=ok
// SIG undefined FUN_140d9f1d0(void)

void FUN_140d9f1d0(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  plVar1 = (longlong *)(param_1 + 0x178);
  FUN_140d73ef0(plVar1,(int)param_2[1]);
  uVar4 = 0;
  plVar6 = (longlong *)*param_2;
  uVar7 = (longlong)(int)param_2[1] & 0x1fffffffffffffff;
  if (plVar6 + (int)param_2[1] < plVar6) {
    uVar7 = uVar4;
  }
  if (uVar7 != 0) {
    do {
      iVar2 = *(int *)(param_1 + 0x180);
      lVar3 = *plVar6;
      *(int *)(param_1 + 0x180) = iVar2 + 1;
      if (*(int *)(param_1 + 0x184) < iVar2 + 1) {
        TArray<FEnvQueryInstanceCache,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar5 = (undefined8 *)((longlong)iVar2 * 0x188 + *plVar1);
      FUN_140d63650(puVar5,lVar3);
      *puVar5 = &PTR_FUN_1445305c0;
      plVar6 = plVar6 + 1;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(puVar5 + 0x2f) = *(undefined4 *)(lVar3 + 0x178);
      *(undefined4 *)((longlong)puVar5 + 0x17c) = *(undefined4 *)(lVar3 + 0x17c);
      *(undefined4 *)(puVar5 + 0x30) = *(undefined4 *)(lVar3 + 0x180);
      *puVar5 = &PTR_FUN_144530608;
    } while (uVar4 != uVar7);
  }
  return;
}



// FUNCTION 140d9f2d0 FUN_140d9f2d0 body=808 status=ok
// SIG undefined FUN_140d9f2d0(void)

void FUN_140d9f2d0(longlong param_1)

{
  wchar_t **ppwVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  int iVar8;
  wchar_t *pwVar9;
  wchar_t *_Source;
  wchar_t *local_38;
  uint local_30;
  int local_2c;
  
  FString::operator=(param_1 + 0x10);
  local_30 = *(int *)(param_1 + 0x18);
  lVar6 = (longlong)(int)local_30;
  pwVar7 = (wchar_t *)0x0;
  iVar8 = 0;
  pvVar3 = *(void **)(param_1 + 0x10);
  local_38 = (wchar_t *)0x0;
  if (local_30 == 0) {
    local_2c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
    _guard_xfg_dispatch_icall_nop(local_38,pvVar3,lVar6 * 2);
  }
  FString::ReplaceInline(&local_38,&DAT_144512a14,L"&lt;",1);
  FString::ReplaceInline(&local_38,&DAT_144512be4,L"&gt;",1);
  ppwVar1 = (wchar_t **)(param_1 + 0x20);
  if (ppwVar1 == &local_38) {
    if (local_38 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  else {
    if (*ppwVar1 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    *ppwVar1 = local_38;
    *(uint *)(param_1 + 0x28) = local_30;
    *(int *)(param_1 + 0x2c) = local_2c;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  uVar5 = iVar2 - 1;
  uVar4 = iVar2 - 1;
  if (iVar2 == 0) {
    uVar5 = 0xffffffff;
    uVar4 = 0;
  }
  if (uVar4 < 0x11) {
    FString::operator=(param_1 + 0x30,param_1 + 0x10);
  }
  else {
    if (iVar2 == 0) {
      _Source = L"";
    }
    else {
      _Source = *(wchar_t **)(param_1 + 0x10);
    }
    local_38 = (wchar_t *)0x0;
    local_2c = 0;
    if (iVar2 == 0) {
      uVar5 = 0;
    }
    if (0x10 < (int)uVar5) {
      uVar5 = 0x10;
    }
    pwVar9 = (wchar_t *)(ulonglong)(uVar5 + 1);
    if (uVar5 == 0) {
      pwVar9 = pwVar7;
    }
    local_30 = (uint)pwVar9;
    if (0 < (int)local_30) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      iVar8 = local_2c;
      pwVar7 = local_38;
      pwVar9 = (wchar_t *)(ulonglong)local_30;
      if (0 < (int)local_30) {
        wcsncpy(local_38,_Source,(longlong)(int)uVar5);
        pwVar7[(int)uVar5] = L'\0';
      }
    }
    local_30 = (uint)pwVar9;
    local_38 = pwVar7;
    local_2c = iVar8;
    if (iVar8 < (int)(local_30 + 3 + (uint)(local_30 == 0))) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38);
      pwVar9 = (wchar_t *)(ulonglong)local_30;
    }
    iVar8 = (int)pwVar9;
    local_30 = (4 - (uint)(iVar8 != 0)) + iVar8;
    if (local_2c < (int)local_30) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,pwVar9);
    }
    iVar2 = local_2c;
    uVar5 = local_30;
    pwVar7 = local_38;
    ppwVar1 = (wchar_t **)(param_1 + 0x30);
    builtin_wcsncpy(local_38 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)),L"...",4);
    if (ppwVar1 == &local_38) {
      if (local_38 != (wchar_t *)0x0) {
        FMemory::Free(local_38);
      }
    }
    else {
      if (*ppwVar1 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      *ppwVar1 = pwVar7;
      *(uint *)(param_1 + 0x38) = uVar5;
      *(int *)(param_1 + 0x3c) = iVar2;
    }
  }
  local_30 = *(int *)(param_1 + 0x38);
  lVar6 = (longlong)(int)local_30;
  pvVar3 = *(void **)(param_1 + 0x30);
  local_38 = (wchar_t *)0x0;
  if (local_30 == 0) {
    local_2c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
    _guard_xfg_dispatch_icall_nop(local_38,pvVar3,lVar6 * 2);
  }
  FString::ReplaceInline(&local_38,&DAT_144512a14,L"&lt;",1);
  FString::ReplaceInline(&local_38,&DAT_144512be4,L"&gt;",1);
  ppwVar1 = (wchar_t **)(param_1 + 0x40);
  if (ppwVar1 == &local_38) {
    if (local_38 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    return;
  }
  if (*ppwVar1 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  *ppwVar1 = local_38;
  *(uint *)(param_1 + 0x48) = local_30;
  *(int *)(param_1 + 0x4c) = local_2c;
  return;
}



// FUNCTION 140d9f600 FUN_140d9f600 body=609 status=ok
// SIG undefined FUN_140d9f600(void)

void FUN_140d9f600(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong local_78;
  longlong *local_70;
  undefined **local_68 [2];
  longlong *local_58;
  longlong local_50;
  
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  if (param_1[2] != 0) {
    plVar9 = (longlong *)UListView::OnItemSelectionChanged();
    plVar12 = (longlong *)*plVar9;
    plVar13 = plVar12 + (int)plVar9[1];
    plVar9 = param_1;
    plVar14 = param_1;
    for (; plVar12 != plVar13; plVar12 = plVar12 + 1) {
      if (*plVar12 == 0) {
        bVar5 = true;
        plVar14 = (longlong *)0x0;
        lVar10 = 0;
        plVar11 = (longlong *)0x0;
      }
      else {
        bVar7 = true;
        bVar6 = true;
        lVar10 = FUN_142547b50(*plVar12,local_68);
        plVar11 = *(longlong **)(lVar10 + 0x10);
        lVar10 = *(longlong *)(lVar10 + 8);
        plVar9 = plVar11;
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
        }
      }
      if ((bVar5) && (bVar5 = false, plVar14 != (longlong *)0x0)) {
        LOCK();
        plVar1 = plVar14 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar2 = (int *)((longlong)plVar14 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
      }
      if ((bVar6) && (bVar6 = false, plVar9 != (longlong *)0x0)) {
        LOCK();
        plVar1 = plVar9 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      if (bVar7) {
        bVar7 = false;
        local_68[0] = &PTR_FUN_143f740c8;
        if (local_50 != 0) {
          FMemory::Free();
        }
        plVar1 = local_58;
        local_68[0] = &PTR_FUN_143f73d18;
        if (local_58 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_58 + 1;
          lVar8 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_58)(local_58);
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
      if (lVar10 != 0) {
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
        }
        local_78 = lVar10;
        local_70 = plVar11;
        FUN_140d9f870(param_1,&local_78,param_2);
      }
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar11 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140d9f870 FUN_140d9f870 body=961 status=ok
// SIG undefined FUN_140d9f870(void)

void FUN_140d9f870(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  undefined ***local_98;
  undefined1 local_90 [8];
  longlong *local_88;
  int local_80;
  undefined **local_78;
  longlong *local_70;
  longlong *local_68;
  longlong local_60;
  undefined8 local_58;
  
  local_res18[0] = param_3;
  cVar4 = (**(code **)(*(longlong *)*param_2 + 0x20))();
  if (cVar4 == '\0') goto LAB_140d9fbdf;
  local_res20 = 0;
  plVar6 = (longlong *)FUN_1404b0000(&local_res20);
  if ((plVar6 == (longlong *)0x0) ||
     (cVar4 = (**(code **)(*plVar6 + 0xf8))(plVar6,param_2), cVar4 == '\0')) goto LAB_140d9fbdf;
  local_68 = (longlong *)param_2[1];
  local_70 = (longlong *)*param_2;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_68 + 1) = (int)local_68[1] + 1;
    UNLOCK();
  }
  plVar6 = (longlong *)(param_1 + 0xf0);
  local_78 = &PTR_FUN_143f740c8;
  local_60 = 0;
  local_58 = 0;
  if (*(int *)(param_1 + 0xf8) != *(int *)(param_1 + 0x124)) {
    if ((local_70 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*local_70 + 0x20))(local_70), cVar4 == '\0')) {
      iVar5 = -1;
    }
    else {
      iVar5 = GetTypeHash(local_70);
    }
    lVar7 = *(longlong *)(param_1 + 0x130);
    if (*(longlong *)(param_1 + 0x130) == 0) {
      lVar7 = param_1 + 0x128;
    }
    iVar5 = *(int *)(lVar7 + ((longlong)*(int *)(param_1 + 0x138) - 1U & (longlong)iVar5) * 4);
    if (iVar5 != -1) {
      lVar7 = *plVar6;
      do {
        lVar10 = (longlong)iVar5 * 0x90;
        plVar2 = *(longlong **)(lVar10 + 8 + lVar7);
        if ((((plVar2 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar2 + 0x20))(), cVar4 == '\0')) ||
            (local_70 == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(*local_70 + 0x20))(local_70), cVar4 == '\0')) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        plVar2 = *(longlong **)(lVar10 + 8 + lVar7);
        if ((((plVar2 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar2 + 0x20))(), cVar4 == '\0')) &&
            ((local_70 == (longlong *)0x0 ||
             (cVar4 = (**(code **)(*local_70 + 0x20))(local_70), cVar4 == '\0')))) ||
           ((bVar3 && (cVar4 = (**(code **)*local_70)(local_70,*(undefined8 *)(lVar10 + 8 + lVar7)),
                      cVar4 != '\0')))) {
          if ((iVar5 != -1) && (lVar10 = *plVar6 + lVar10, lVar10 != 0)) goto LAB_140d9fa75;
          break;
        }
        lVar7 = *plVar6;
        iVar5 = *(int *)(lVar10 + 0x88 + lVar7);
      } while (iVar5 != -1);
    }
  }
  local_98 = &local_78;
  FUN_140d5d290(plVar6,local_res10,&local_98,0);
  lVar10 = (longlong)local_res10[0] * 0x90 + *plVar6;
LAB_140d9fa75:
  TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
            (lVar10 + 0x28,local_res18);
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    local_88 = (longlong *)0x0;
    plVar6 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_80 = 3;
    local_88 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      plVar6[1] = param_1;
      *plVar6 = (longlong)&PTR_GetPoolName_143f3f4f8;
      plVar6[2] = (longlong)FUN_140d6cf60;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar6[4] = lVar7;
    }
    uVar8 = FUN_14164ab60();
    puVar9 = (undefined8 *)
             FUN_14158f860(uVar8,local_90,&local_88,
                           L"FFriendStatusSystem_BroadcastOutstandingStatusUpdates",
                           *(undefined4 *)(param_1 + 0xb0));
    *(undefined8 *)(param_1 + 0xa8) = *puVar9;
    if (local_80 != 0) {
      if (local_88 == (longlong *)0x0) goto LAB_140d9fb5e;
      (**(code **)(*local_88 + 0x28))(local_88,0);
      if (local_88 != (longlong *)0x0) {
        local_88 = (longlong *)FMemory::Realloc(local_88,0,0);
      }
      local_80 = 0;
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free(local_88);
    }
  }
LAB_140d9fb5e:
  TBaseMulticastDelegate<void,FPhysScene_*,enum_EPhysicsSceneType>::Broadcast
            (param_1 + 0xd8,&local_78,local_res18[0]);
  local_78 = &PTR_FUN_143f740c8;
  if (local_60 != 0) {
    FMemory::Free();
  }
  plVar6 = local_68;
  local_78 = &PTR_FUN_143f73d18;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_68 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_68)(local_68);
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
LAB_140d9fbdf:
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  return;
}



// FUNCTION 140d9fc40 FUN_140d9fc40 body=123 status=ok
// SIG undefined FUN_140d9fc40(void)

void FUN_140d9fc40(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  longlong local_18;
  longlong *local_10;
  
  if (((*(longlong *)(param_1 + 0x10) != 0) && (*param_2 != 0)) &&
     (plVar1 = *(longlong **)(*param_2 + 0x10), plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x20))();
    if (cVar2 != '\0') {
      local_18 = *param_2 + 8;
      local_10 = param_2;
      FUN_140d5e980(param_1 + 0x140,local_res8,&local_18,0);
      uVar3 = FUN_140bb73a0(*(undefined8 *)(param_1 + 0x10));
      FUN_140d6e2a0(uVar3,param_2);
    }
  }
  return;
}



// FUNCTION 140d9fcc0 FUN_140d9fcc0 body=7 status=ok
// SIG undefined FUN_140d9fcc0(void)

void FUN_140d9fcc0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xcc) = param_2;
  return;
}



// FUNCTION 140d9fcd0 FUN_140d9fcd0 body=478 status=ok
// SIG undefined FUN_140d9fcd0(void)

undefined8 FUN_140d9fcd0(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  bool bVar12;
  ulonglong local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  bVar12 = false;
  local_res10 = local_res10 & 0xffffffff00000000;
  puVar7 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_68);
  plVar9 = (longlong *)*puVar7;
  plVar8 = (longlong *)FName::FName(local_res18,L"SPARK",1);
  plVar9 = (longlong *)(**(code **)(*plVar9 + 8))(plVar9,local_res20);
  lVar10 = *plVar8;
  lVar3 = *plVar9;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_60 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  if (lVar3 == lVar10) {
    return 0;
  }
  if (*(char *)(*param_2 + 9) == '\0') {
    return 0;
  }
  lVar10 = (**(code **)(*(longlong *)*param_2 + 0x38))();
  if ((*(byte *)(lVar10 + 0x10) & 4) == 0) {
    return 0;
  }
  uVar11 = (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_58);
  cVar6 = FUN_140d89800(param_1,uVar11);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_50 + 1;
    lVar10 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  if (cVar6 != '\0') {
    return 0;
  }
  cVar6 = FUN_140d89b30(param_1,param_2);
  if (cVar6 != '\0') {
    return 0;
  }
  local_res10 = 0;
  plVar9 = (longlong *)FUN_1404b0000(&local_res10);
  if (plVar9 != (longlong *)0x0) {
    lVar10 = *plVar9;
    bVar12 = true;
    uVar11 = (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_48);
    cVar6 = (**(code **)(lVar10 + 0xf8))(plVar9,uVar11);
    if (cVar6 != '\0') {
      bVar4 = true;
      goto LAB_140d9fe4e;
    }
  }
  bVar4 = false;
LAB_140d9fe4e:
  if ((bVar12) && (local_40 != (longlong *)0x0)) {
    LOCK();
    plVar9 = local_40 + 1;
    lVar10 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (bVar4) {
    return 0;
  }
  return 1;
}



// FUNCTION 140d9feb0 FUN_140d9feb0 body=62 status=ok
// SIG undefined FUN_140d9feb0(void)

void FUN_140d9feb0(longlong *param_1)

{
  longlong lVar1;
  
  if (*param_1 != 0) {
    lVar1 = FUN_140bb7630();
    TBaseMulticastDelegate<void>::Remove(lVar1 + 0x120,param_1[0xe]);
  }
  FUN_140d74020(param_1 + 1,0);
  *param_1 = 0;
  return;
}



// FUNCTION 140d9fef0 FUN_140d9fef0 body=106 status=ok
// SIG undefined FUN_140d9fef0(void)

void FUN_140d9fef0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_1[2] != 0) {
    lVar1 = FUN_140bb7630();
    TBaseMulticastDelegate<void>::Remove(lVar1 + 0x180,param_1[0x27]);
    plVar2 = (longlong *)FUN_140bba5e0(param_1[2]);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 200))(plVar2,param_1 + 0x28);
    }
  }
  param_1[8] = 0;
  (**(code **)(*param_1 + 0x18))(param_1);
  FUN_140dd2370(param_1);
  return;
}



// FUNCTION 140d9ff60 FUN_140d9ff60 body=81 status=ok
// SIG undefined FUN_140d9ff60(void)

void FUN_140d9ff60(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (*param_1 != 0) {
    lVar1 = FUN_140bb7630();
    TBaseMulticastDelegate<void>::Remove(lVar1 + 0x120,param_1[0xf]);
    plVar2 = (longlong *)FUN_140bba5e0(*param_1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 200))(plVar2,param_1 + 0xe);
    }
  }
  *param_1 = 0;
  return;
}



// FUNCTION 140d9ffc0 FUN_140d9ffc0 body=381 status=ok
// SIG undefined FUN_140d9ffc0(void)

void FUN_140d9ffc0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  
  FUN_140d98f50();
  if (param_1[2] != 0) {
    lVar2 = FUN_140bb7630();
    TBaseMulticastDelegate<void>::Remove(lVar2 + 0x120,param_1[0x34]);
    lVar2 = FUN_140bb7630(param_1[2]);
    TBaseMulticastDelegate<void>::Remove(lVar2 + 0x168,param_1[0x37]);
    lVar2 = FUN_140bb7630(param_1[2]);
    TBaseMulticastDelegate<void>::Remove(lVar2 + 0x138,param_1[0x35]);
    lVar2 = FUN_140bb7630(param_1[2]);
    TBaseMulticastDelegate<void>::Remove(lVar2 + 0x150,param_1[0x36]);
  }
  lVar3 = FUN_142b45e90();
  lVar2 = param_1[0x42];
  iVar6 = 0;
  lVar3 = *(longlong *)(lVar3 + 0x18);
  if (0 < *(int *)(lVar3 + 0xa8)) {
    lVar7 = 0;
    do {
      lVar1 = *(longlong *)(lVar3 + 0xa0);
      if (((*(int *)(lVar7 + 8 + lVar1) != 0) &&
          (plVar4 = *(longlong **)(lVar7 + lVar1), plVar4 != (longlong *)0x0)) &&
         (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8), *plVar4 == lVar2))
      {
        if ((*(int *)(lVar7 + 8 + lVar1) != 0) &&
           (plVar4 = *(longlong **)(lVar7 + lVar1), plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 0x28))(plVar4,0);
          if (*(longlong *)(lVar7 + lVar1) != 0) {
            uVar5 = FMemory::Realloc(*(longlong *)(lVar7 + lVar1),0,0);
            *(undefined8 *)(lVar7 + lVar1) = uVar5;
          }
          *(undefined4 *)(lVar7 + 8 + lVar1) = 0;
        }
        break;
      }
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while (iVar6 < *(int *)(lVar3 + 0xa8));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar3 + 0xa0,0);
  uVar5 = FUN_14164ab60();
  FUN_141597530(uVar5,param_1[0x15]);
  (**(code **)(*param_1 + 0x18))(param_1);
  FUN_140dd2370(param_1);
  return;
}



// FUNCTION 140da0140 FUN_140da0140 body=64 status=ok
// SIG undefined FUN_140da0140(void)

void FUN_140da0140(longlong param_1)

{
  TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x18,0);
  TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x68,0);
  TSet<TTuple<TSharedPtr<SWidget_const_,0>,TSharedPtr<FMenuBase,0>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget_const_,0>,TSharedPtr<FMenuBase,0>,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0xd0,0);
  TSet<TTuple<TSharedPtr<SWidget_const_,0>,TSharedPtr<FMenuBase,0>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget_const_,0>,TSharedPtr<FMenuBase,0>,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x120,0);
  return;
}



// FUNCTION 140da0180 FUN_140da0180 body=313 status=ok
// SIG undefined FUN_140da0180(void)

void FUN_140da0180(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  if (*(longlong *)(param_1 + 0x198) != 0) {
    uVar3 = FUN_14164ab60();
    FUN_141597530(uVar3,*(undefined8 *)(param_1 + 0x198));
    *(undefined8 *)(param_1 + 0x198) = 0;
  }
  FUN_140d709d0(param_1);
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 != 0) {
    if (*(longlong *)(lVar4 + 0xae8) != 0) {
      FUN_1404c9880(*(longlong *)(lVar4 + 0xae8),DAT_14686e880);
      lVar4 = *(longlong *)(param_1 + 8);
    }
    if (lVar4 != 0) {
      if (*(longlong *)(lVar4 + 0xae8) != 0) {
        puVar5 = *(undefined8 **)(param_1 + 0x30);
        puVar1 = puVar5 + *(int *)(param_1 + 0x38);
        if (puVar5 != puVar1) {
          do {
            FUN_1404c9880(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xae8),*puVar5);
            puVar5 = puVar5 + 1;
          } while (puVar5 != puVar1);
          lVar4 = *(longlong *)(param_1 + 8);
        }
      }
      if ((lVar4 != 0) && (plVar2 = *(longlong **)(lVar4 + 0xae8), plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x80))(plVar2,param_1 + 0x88);
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + 0xae8);
        (**(code **)(*plVar2 + 0x20))(plVar2,param_1 + 0x90);
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + 0xae8);
        (**(code **)(*plVar2 + 0xe0))(plVar2,param_1 + 0x98);
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + 0xae8);
        (**(code **)(*plVar2 + 0x220))(plVar2,param_1 + 0xa0);
      }
    }
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 140da02c0 FUN_140da02c0 body=185 status=ok
// SIG undefined FUN_140da02c0(void)

void FUN_140da02c0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  local_10 = (longlong *)param_2[1];
  local_18 = *param_2;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
  }
  if ((undefined8 *)(param_1 + 0x58) != &local_18) {
    *(undefined8 *)(param_1 + 0x58) = local_18;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x60,&local_10);
  }
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
  FUN_140d715b0(param_1);
  return;
}



// FUNCTION 140da0380 FUN_140da0380 body=512 status=ok
// SIG undefined FUN_140da0380(void)

void FUN_140da0380(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong local_48 [3];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar7 = FUN_142b45e90();
  plVar8 = (longlong *)FUN_142b4a990(*(undefined8 *)(lVar7 + 0x18),local_28,param_1 + 0x10);
  plVar1 = (longlong *)(param_1 + 0x38);
  if (plVar1 != plVar8) {
    *plVar1 = *plVar8;
    *plVar8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x40);
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_20 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20);
      }
    }
  }
  if (*plVar1 != 0) {
    FUN_142b45fe0();
    if (local_48[2] != 0) {
      lVar7 = *(longlong *)(local_48[2] + 8);
      plVar1 = *(longlong **)(local_48[2] + 0x10);
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
        UNLOCK();
      }
      if (lVar7 != 0) {
        local_48[0] = 0;
        local_48[1] = 0x2e;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
        FGenericPlatformString::Memcpy
                  (local_48[0],L"UserSearchByFirstPartyMaxServiceIdsPerRequest",0x5c);
        uVar5 = FUN_142afb390(lVar7,local_48,*(undefined4 *)(param_1 + 0x34),1,9999);
        *(undefined4 *)(param_1 + 0x34) = uVar5;
        if (local_48[0] != 0) {
          FMemory::Free(local_48[0]);
        }
      }
      plVar8 = plVar1 + 1;
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar1 + 8))(plVar1);
          }
        }
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_30 + 8))(local_30);
        }
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 0x50);
  iVar6 = iVar4 + iVar3;
  *(int *)(param_1 + 0x50) = iVar6;
  if (*(int *)(param_1 + 0x54) < iVar6) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x48);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0x48)),0,(longlong)iVar3 << 4
            );
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_140d83b00(param_1);
  return;
}



// FUNCTION 140da0580 FUN_140da0580 body=272 status=ok
// SIG undefined FUN_140da0580(void)

void FUN_140da0580(longlong param_1)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  float fVar7;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  if (*(longlong *)(param_1 + 0x198) == 0) {
    fVar7 = (float)FGenericPlatformMath::SRand();
    local_28 = (longlong *)0x0;
    fVar1 = *(float *)(param_1 + 0x2c);
    fVar2 = *(float *)(param_1 + 0x28);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    local_20 = 3;
    local_28 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      plVar3[1] = param_1;
      *plVar3 = (longlong)&PTR_GetPoolName_143f3f4f8;
      plVar3[2] = (longlong)FUN_140da3ee0;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
    }
    uVar5 = FUN_14164ab60();
    puVar6 = (undefined8 *)
             FUN_14158f860(uVar5,local_res8,&local_28,L"FFriendsMesh_TryReconnectTimerComplete",
                           fVar7 * fVar1 + fVar2);
    *(undefined8 *)(param_1 + 0x198) = *puVar6;
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



// FUNCTION 140da0690 FUN_140da0690 body=110 status=ok
// SIG undefined FUN_140da0690(void)

void FUN_140da0690(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_2 + *(float *)(param_1 + 0xbc);
  fVar1 = param_2 + *(float *)(param_1 + 0x70);
  *(float *)(param_1 + 0xc0) = param_2 + *(float *)(param_1 + 0xc0);
  *(float *)(param_1 + 0xbc) = fVar2;
  *(float *)(param_1 + 0x70) = fVar1;
  if ((*(float *)(param_1 + 0xb8) <= fVar2 && fVar2 != *(float *)(param_1 + 0xb8)) &&
     (0 < *(int *)(param_1 + 0xb0))) {
    FUN_140d6d680();
    fVar1 = *(float *)(param_1 + 0x70);
  }
  if (*(float *)(param_1 + 0x7c) <= fVar1 && fVar1 != *(float *)(param_1 + 0x7c)) {
    FUN_140d75b20(param_1);
    return;
  }
  return;
}



// FUNCTION 140da0700 FUN_140da0700 body=770 status=ok
// SIG undefined FUN_140da0700(void)

void FUN_140da0700(longlong param_1,float param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  int iVar7;
  longlong lVar8;
  uint *puVar9;
  float fVar10;
  float fVar11;
  int local_c8;
  uint uStack_c4;
  int iStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined **local_a8;
  undefined8 uStack_a0;
  uint *puStack_98;
  longlong lStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined **local_78;
  undefined8 uStack_70;
  uint *local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  undefined **local_48;
  undefined2 local_40;
  
  fVar10 = param_2 + *(float *)(param_1 + 0x9c);
  fVar11 = param_2 + *(float *)(param_1 + 0x70);
  *(float *)(param_1 + 0x9c) = fVar10;
  *(float *)(param_1 + 0x70) = fVar11;
  *(float *)(param_1 + 0xb4) = param_2 + *(float *)(param_1 + 0xb4);
  if ((*(float *)(param_1 + 0x98) <= fVar10 && fVar10 != *(float *)(param_1 + 0x98)) &&
     (*(char *)(param_1 + 0xa0) != '\0')) {
    FUN_140d98f50();
    fVar11 = *(float *)(param_1 + 0x70);
  }
  if (*(float *)(param_1 + 0x94) <= fVar11 && fVar11 != *(float *)(param_1 + 0x94)) {
    FUN_140d76060(param_1);
  }
  if (*(float *)(param_1 + 0xb8) < *(float *)(param_1 + 0xb4)) {
    FUN_140d9d2a0(param_1);
  }
  uStack_c4 = 1;
  local_a8 = (undefined **)(param_1 + 0x218);
  iVar2 = *(int *)(param_1 + 0x240);
  puStack_98 = (uint *)(param_1 + 0x228);
  local_c8 = 0;
  iStack_b4 = 0;
  iStack_b0 = 0;
  if (iVar2 != 0) {
    puVar9 = *(uint **)(param_1 + 0x238);
    if (*(uint **)(param_1 + 0x238) == (uint *)0x0) {
      puVar9 = puStack_98;
    }
    uVar3 = *puVar9;
    local_c8 = 0;
    iStack_b0 = 0;
    while (uVar3 == 0) {
      lVar8 = (longlong)local_c8;
      iStack_b0 = iStack_b0 + 0x20;
      iVar7 = local_c8 + 1;
      bVar5 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_c8;
      local_c8 = iVar7;
      if (bVar5) goto LAB_140da0852;
      uVar3 = puVar9[lVar8 + 1];
    }
    uStack_c4 = -uVar3 & uVar3;
    iVar7 = 0x1f;
    if (uStack_c4 != 0) {
      for (; uStack_c4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_c4 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_b4 = (iStack_b0 - iVar7) + 0x1f;
    if (iVar2 < iStack_b4) {
LAB_140da0852:
      iStack_b4 = iVar2;
    }
  }
  lStack_90 = CONCAT44(iStack_b4,0xffffffff);
  auVar6._8_4_ = iStack_b0;
  auVar6._0_8_ = lStack_90;
  auVar6._12_4_ = uStack_ac;
  local_80._0_4_ = SUB84(local_a8,0);
  local_80._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
  uStack_a0 = CONCAT44(uStack_c4,local_c8);
  local_40 = 0;
  uStack_88 = auVar6._8_8_;
  local_58._8_4_ = (undefined4)local_80;
  local_58._0_8_ = uStack_88;
  local_58._12_4_ = local_80._4_4_;
  local_78 = local_a8;
  uStack_70 = uStack_a0;
  local_68 = puStack_98;
  uStack_60 = lStack_90;
  local_48 = local_a8;
  local_80 = local_a8;
  if (iStack_b4 < *(int *)(param_1 + 0x240)) {
    do {
      lVar8 = (longlong)iStack_b4 * 0x20;
      puVar4 = *local_78;
      if (((0.0 < *(float *)(puVar4 + lVar8 + 0x10)) &&
          (fVar11 = *(float *)(puVar4 + lVar8 + 0x10) - param_2,
          *(float *)(puVar4 + lVar8 + 0x10) = fVar11, fVar11 <= 0.0)) &&
         (*(int *)(puVar4 + lVar8 + 0x14) != 0)) {
        *(undefined4 *)(puVar4 + lVar8 + 0x14) = 0;
        uStack_a0 = *(undefined8 *)(*local_78 + lVar8);
        puStack_98 = *(uint **)(*local_78 + lVar8 + 8);
        if (puStack_98 != (uint *)0x0) {
          LOCK();
          puStack_98[2] = puStack_98[2] + 1;
          UNLOCK();
        }
        local_a8 = &PTR_FUN_143f740c8;
        lStack_90 = 0;
        uStack_88 = 0;
        FUN_140d9d620(param_1,&local_a8);
        if (lStack_90 != 0) {
          FMemory::Free();
        }
        puVar9 = puStack_98;
        if (puStack_98 != (uint *)0x0) {
          LOCK();
          puVar1 = puStack_98 + 2;
          uVar3 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if (uVar3 == 1) {
            (*(code *)**(undefined8 **)puStack_98)(puStack_98);
            LOCK();
            puVar9 = puVar9 + 3;
            uVar3 = *puVar9;
            *puVar9 = *puVar9 - 1;
            UNLOCK();
            if (uVar3 == 1) {
              (**(code **)(*(longlong *)puStack_98 + 8))(puStack_98,1);
            }
          }
        }
      }
      uStack_60 = CONCAT44(uStack_60._4_4_,(uint)uStack_60 & ~uStack_70._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
      iStack_b4 = uStack_60._4_4_;
    } while (uStack_60._4_4_ < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<EOS_EpicAccountIdDetails_*,TSharedRef<IAttributeAccessInterface,0>_>,TDefaultMapHashableKeyFuncs<EOS_EpicAccountIdDetails_*,TSharedRef<IAttributeAccessInterface,0>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,*(int *)(local_48 + 1) - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 140da0a10 FUN_140da0a10 body=43 status=ok
// SIG undefined FUN_140da0a10(void)

undefined1 FUN_140da0a10(longlong param_1,float param_2)

{
  if (0.0 < *(float *)(param_1 + 0x18)) {
    param_2 = *(float *)(param_1 + 0x18) - param_2;
    *(float *)(param_1 + 0x18) = param_2;
    if (param_2 <= 0.0) {
      FUN_140d817d0();
    }
  }
  return 1;
}



// FUNCTION 140da0a40 FUN_140da0a40 body=124 status=ok
// SIG undefined FUN_140da0a40(void)

undefined8 FUN_140da0a40(longlong param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,
                      L"GameCompletion: %u, Weapon: %u, Enemy: %u, Crew: %u, Exploration: %u, ProvingGround: %u, Slaughter: %u, Raid: %u\n"
                      ,*(undefined1 *)(param_1 + 8),*(undefined1 *)(param_1 + 9),
                      *(undefined1 *)(param_1 + 10),*(undefined1 *)(param_1 + 0xb),
                      *(undefined1 *)(param_1 + 0xc),*(undefined1 *)(param_1 + 0xd),
                      *(undefined1 *)(param_1 + 0xe),*(undefined1 *)(param_1 + 0xf));
  return param_2;
}



// FUNCTION 140da0ac0 FUN_140da0ac0 body=41 status=ok
// SIG undefined FUN_140da0ac0(void)

undefined8 FUN_140da0ac0(longlong param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,L"RoomInfoLength: %d, GunRackInfoLength: %d,\n",
                      *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x38));
  return param_2;
}



// FUNCTION 140da0af0 FUN_140da0af0 body=1116 status=ok
// SIG undefined FUN_140da0af0(void)

undefined8 FUN_140da0af0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  short *psVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined2 **ppuVar12;
  longlong *plVar13;
  wchar_t *pwVar14;
  undefined2 *puVar15;
  uint uVar16;
  longlong lVar17;
  undefined2 *puVar18;
  undefined2 *puVar19;
  undefined2 *puVar20;
  undefined2 *puVar21;
  undefined2 *puVar22;
  undefined2 *puVar23;
  undefined4 local_res8 [2];
  undefined2 *local_f8;
  undefined8 local_f0;
  undefined2 *local_e8;
  ulonglong local_e0;
  longlong local_d8 [2];
  undefined2 *local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong *local_b0;
  undefined2 *local_a8;
  int local_a0;
  undefined2 *local_98;
  int local_90;
  undefined2 *local_88;
  int local_80;
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [2];
  undefined1 local_48 [8];
  longlong *local_40;
  
  local_res8[0] = 0;
  psVar9 = (short *)FUN_140d7f0c0(*(undefined1 *)(param_1 + 0x58));
  local_e8 = (undefined2 *)0x0;
  local_e0 = 0;
  lVar17 = -1;
  if ((psVar9 != (short *)0x0) && (*psVar9 != 0)) {
    do {
      lVar17 = lVar17 + 1;
    } while (psVar9[lVar17] != 0);
    uVar16 = (int)lVar17 + 1;
    local_e0 = (ulonglong)uVar16;
    if (0 < (int)uVar16) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
    }
    FGenericPlatformString::Memcpy(local_e8,psVar9,(longlong)(int)uVar16 * 2);
  }
  if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
     (cVar8 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(), cVar8 == '\0')) {
    local_d8[0] = 0;
    local_d8[1] = 8;
    bVar7 = false;
    bVar6 = false;
    bVar5 = false;
    bVar4 = true;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8,0);
    FGenericPlatformString::Memcpy(local_d8[0],L"INVALID",0x10);
    plVar13 = local_d8;
  }
  else {
    plVar13 = *(longlong **)(param_1 + 0x10);
    puVar10 = (undefined8 *)(**(code **)(*plVar13 + 0x30))(plVar13,local_58);
    if (*(int *)(puVar10 + 1) == 0) {
      puVar23 = &DAT_143f3eda8;
    }
    else {
      puVar23 = (undefined2 *)*puVar10;
    }
    uVar11 = (**(code **)(*plVar13 + 8))(plVar13,local_res8);
    puVar10 = (undefined8 *)FName::ToString(uVar11,local_68);
    if (*(int *)(puVar10 + 1) == 0) {
      puVar19 = &DAT_143f3eda8;
    }
    else {
      puVar19 = (undefined2 *)*puVar10;
    }
    FString::PrintfImpl(local_78,L"%s:%s",puVar19,puVar23);
    plVar13 = local_78;
    bVar7 = true;
    bVar6 = true;
    bVar5 = true;
    bVar4 = false;
  }
  puVar23 = (undefined2 *)*plVar13;
  *plVar13 = 0;
  local_c8 = puVar23;
  local_c0 = (int)plVar13[1];
  local_bc = *(undefined4 *)((longlong)plVar13 + 0xc);
  plVar13[1] = 0;
  if ((bVar4) && (local_d8[0] != 0)) {
    FMemory::Free();
  }
  if ((bVar5) && (local_78[0] != 0)) {
    FMemory::Free();
  }
  if ((bVar6) && (local_68[0] != 0)) {
    FMemory::Free();
  }
  if ((bVar7) && (local_58[0] != 0)) {
    FMemory::Free();
  }
  local_f8 = (undefined2 *)0x0;
  local_f0 = 0;
  FDateTime::ToString(param_1 + 0x60,&local_88);
  FUN_141682af0(param_1 + 0x68,&local_98,0);
  if (param_3 != 0) {
    local_b8 = *(undefined8 *)(param_1 + 0x10);
    local_b0 = *(longlong **)(param_1 + 0x18);
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
      UNLOCK();
    }
    FUN_140d79f00(*(undefined8 *)(param_3 + 0x478),&local_b8,1,0,local_d8 + 2);
    plVar13 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b0 + 1;
      lVar17 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
    uVar11 = FUN_140bbae80(param_3,local_48,*(undefined4 *)(param_1 + 0x7c));
    ppuVar12 = (undefined2 **)FText::ToString(uVar11);
    if (&local_f8 != ppuVar12) {
      iVar3 = *(int *)(ppuVar12 + 1);
      puVar23 = *ppuVar12;
      local_f0 = CONCAT44(local_f0._4_4_,iVar3);
      if (iVar3 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_f8,iVar3,0);
        _guard_xfg_dispatch_icall_nop(local_f8,puVar23,(longlong)iVar3 * 2);
      }
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_40 + 1;
      lVar17 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
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
  }
  FString::PrintfImpl(&local_a8,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)*(float *)(param_1 + 0x98),
                      (double)*(float *)(param_1 + 0x9c),(double)*(float *)(param_1 + 0xa0));
  puVar23 = &DAT_143f3eda8;
  if (local_a0 != 0) {
    puVar23 = local_a8;
  }
  if (*(int *)(param_1 + 0x90) == 0) {
    puVar19 = &DAT_143f3eda8;
  }
  else {
    puVar19 = *(undefined2 **)(param_1 + 0x88);
  }
  pwVar14 = L"false";
  puVar22 = &DAT_143f3eda8;
  if (local_90 != 0) {
    puVar22 = local_98;
  }
  puVar21 = &DAT_143f3eda8;
  if (local_80 != 0) {
    puVar21 = local_88;
  }
  puVar15 = &DAT_143f3eda8;
  if ((int)local_f0 != 0) {
    puVar15 = local_f8;
  }
  puVar20 = &DAT_143f3eda8;
  if (local_c0 != 0) {
    puVar20 = local_c8;
  }
  puVar18 = &DAT_143f3eda8;
  if ((int)local_e0 != 0) {
    puVar18 = local_e8;
  }
  if (*(char *)(param_1 + 0x80) != '\0') {
    pwVar14 = L"true";
  }
  FString::PrintfImpl(param_2,
                      L"EventType:%s, PlayerName:%s, Level:%d, ClassName:%s, Date:%s, Guid:%s, MapName:%s, Location:%s, Liked:%s, NumLikes:%d"
                      ,puVar18,puVar20,*(undefined4 *)(param_1 + 0x78),puVar15,puVar21,puVar22,
                      puVar19,puVar23,pwVar14,*(undefined4 *)(param_1 + 0x84));
  if (local_a8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_98 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_88 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_f8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_c8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_e8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140da0f50 FUN_140da0f50 body=258 status=ok
// SIG undefined FUN_140da0f50(void)

undefined8 FUN_140da0f50(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  
  puVar5 = &DAT_143f3eda8;
  if (*(int *)(param_1 + 0x80) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 0x78);
  }
  if (*(int *)(param_1 + 0x70) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = *(undefined2 **)(param_1 + 0x68);
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = *(undefined2 **)(param_1 + 0x58);
  }
  if (*(int *)(param_1 + 0x50) == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = *(undefined2 **)(param_1 + 0x48);
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = *(undefined2 **)(param_1 + 0x38);
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    puVar1 = &DAT_143f3eda8;
  }
  else {
    puVar1 = *(undefined2 **)(param_1 + 0x28);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = *(undefined2 **)(param_1 + 0x18);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar5 = *(undefined2 **)(param_1 + 8);
  }
  FString::PrintfImpl(param_2,
                      L"Weapon1: %s, Weapon2: %s, Weapon3: %s, Weapon4: %s, Grenade: %s, Shield: %s, ClassItem: %s, Artifact: %s, Head: %u, Body: %u, Skin: %u, Emote: %u,\n"
                      ,puVar5,puVar6,puVar1,puVar7,puVar8,puVar2,puVar3,puVar4,
                      *(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),
                      *(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94));
  return param_2;
}



// FUNCTION 140da1060 FUN_140da1060 body=1071 status=ok
// SIG undefined FUN_140da1060(void)

undefined8 FUN_140da1060(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  void *_Src;
  undefined2 *puVar7;
  bool bVar8;
  bool bVar9;
  undefined8 *puVar10;
  void **ppvVar11;
  undefined8 uVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  int iVar17;
  undefined2 *puVar18;
  wchar_t *pwVar19;
  undefined2 *puVar20;
  undefined2 *puVar21;
  undefined2 *puVar22;
  int local_res8;
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  int local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  
  iVar17 = 0;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar6 = *(longlong *)(DAT_146b33f38 + 0x98);
  if (lVar6 == 0) {
    local_b8 = (void *)0x0;
    ppvVar11 = &local_b8;
    local_b0 = 0;
    bVar9 = false;
    bVar8 = true;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x4c);
    if (((iVar4 < 0) || (*(int *)(lVar6 + 0x48) <= iVar4)) ||
       (lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x40) + (longlong)iVar4 * 8), lVar6 == 0)) {
      local_c8 = (void *)0x0;
      ppvVar11 = &local_c8;
      local_c0 = 0;
      bVar9 = true;
      bVar8 = false;
    }
    else {
      puVar10 = (undefined8 *)FText::ToString(lVar6 + 0x30);
      local_c8 = (void *)0x0;
      iVar4 = *(int *)(puVar10 + 1);
      _Src = (void *)*puVar10;
      local_c0 = CONCAT44(local_c0._4_4_,iVar4);
      if (iVar4 == 0) {
        local_c0 = 0;
        ppvVar11 = &local_c8;
        bVar9 = true;
        bVar8 = false;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c8,iVar4,0);
        _guard_xfg_dispatch_icall_nop(local_c8,_Src,(longlong)iVar4 * 2);
        ppvVar11 = &local_c8;
        bVar9 = true;
        bVar8 = false;
      }
    }
  }
  puVar7 = *ppvVar11;
  *ppvVar11 = (void *)0x0;
  iVar4 = *(int *)(ppvVar11 + 1);
  ppvVar11[1] = (void *)0x0;
  if (bVar8) {
    if (local_b8 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if ((bVar9) && (local_c8 != (void *)0x0)) {
    FMemory::Free();
  }
  FText::FText(local_80);
  FText::FText(local_98);
  if (param_3 != 0) {
    uVar12 = FUN_140bbae80(param_3,local_68,*(undefined4 *)(param_1 + 0x34));
    FText::operator=(local_80,uVar12);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)local_60 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
    uVar12 = FUN_140c14280(local_50,*(undefined4 *)(param_1 + 0x38));
    FText::operator=(local_98,uVar12);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
  }
  uVar5 = *(uint *)(param_1 + 0x54);
  local_res8 = 0;
  if (uVar5 != 0) {
    iVar17 = (int)(float)((ulonglong)uVar5 / 0xe10);
    local_res8 = (int)(float)((ulonglong)(uVar5 + iVar17 * -0xe10) / 0x3c);
  }
  puVar18 = &DAT_143f3eda8;
  puVar13 = &DAT_143f3eda8;
  if (iVar4 != 0) {
    puVar13 = puVar7;
  }
  FString::PrintfImpl(&local_a8,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)*(float *)(param_1 + 0x3c),
                      (double)*(float *)(param_1 + 0x40),(double)*(float *)(param_1 + 0x44));
  puVar14 = &DAT_143f3eda8;
  if (local_a0 != 0) {
    puVar14 = local_a8;
  }
  puVar10 = (undefined8 *)FText::ToString(local_98);
  if (*(int *)(puVar10 + 1) == 0) {
    puVar22 = &DAT_143f3eda8;
  }
  else {
    puVar22 = (undefined2 *)*puVar10;
  }
  puVar10 = (undefined8 *)FText::ToString(local_80);
  if (*(int *)(puVar10 + 1) == 0) {
    puVar21 = &DAT_143f3eda8;
  }
  else {
    puVar21 = (undefined2 *)*puVar10;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    puVar20 = &DAT_143f3eda8;
  }
  else {
    puVar20 = *(undefined2 **)(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar18 = *(undefined2 **)(param_1 + 0x10);
  }
  pwVar19 = L"false";
  if (*(char *)(param_1 + 0x4a) != '\0') {
    pwVar19 = L"true";
  }
  pwVar16 = L"false";
  pwVar15 = L"false";
  if (*(char *)(param_1 + 0x49) != '\0') {
    pwVar16 = L"true";
  }
  if (*(char *)(param_1 + 0x48) != '\0') {
    pwVar15 = L"true";
  }
  FString::PrintfImpl(param_2,
                      L"Level: %d\n, Map: %s\n, SessionId: %s\n, PartyCount: %d\n, PlayerClass: %u (%s)\n, Mission: %u (%s)\n, TimePlayed: %u:%u\n, Location: %s\n, CanJoin: %s\n, LookingForHelp: %s\n, SelectedCharacter: %s\n, ActivityStatus: %s\n, GuardianRank: %d\n\n"
                      ,*(undefined4 *)(param_1 + 8),puVar18,puVar20,*(undefined4 *)(param_1 + 0x30),
                      *(undefined4 *)(param_1 + 0x34),puVar21,*(undefined4 *)(param_1 + 0x38),
                      puVar22,iVar17,local_res8,puVar14,pwVar15,pwVar16,pwVar19,puVar13,
                      *(undefined4 *)(param_1 + 0x50));
  if (local_a8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_90 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar2 = (int *)((longlong)local_90 + 0xc);
      iVar17 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar17 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_78 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)local_78 + 0xc);
      iVar17 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar17 == 1) {
        (**(code **)(*local_78 + 8))(local_78,1);
      }
    }
  }
  if (puVar7 != (undefined2 *)0x0) {
    FMemory::Free(puVar7);
  }
  return param_2;
}



// FUNCTION 140da1490 FUN_140da1490 body=225 status=ok
// SIG undefined FUN_140da1490(void)

undefined8 FUN_140da1490(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  longlong local_38 [2];
  longlong local_28 [2];
  longlong local_18 [2];
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)(param_1 + 0x38) + 8))(param_1 + 0x38,local_18);
  puVar3 = &DAT_143f3eda8;
  if (*(int *)(puVar2 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar2;
  }
  puVar2 = (undefined8 *)FDateTime::ToString(param_1 + 0x30,local_28);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*puVar2;
  }
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1,local_38);
  if (*(int *)(puVar2 + 1) != 0) {
    puVar3 = (undefined2 *)*puVar2;
  }
  FString::PrintfImpl(param_2,L"PlayerId: %s, DateTime: %s, %s",puVar3,puVar5,puVar4);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140da1580 FUN_140da1580 body=117 status=ok
// SIG undefined FUN_140da1580(void)

undefined8 FUN_140da1580(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  wchar_t *pwVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)FUN_140d79d20(param_1,local_18,param_1 + 8,param_3);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  pwVar3 = L"false";
  if (*(char *)(param_1 + 0x60) != '\0') {
    pwVar3 = L"true";
  }
  FString::PrintfImpl(param_2,L"%s changed bCanJoin \'%s;",puVar2,pwVar3);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140da1600 FUN_140da1600 body=126 status=ok
// SIG undefined FUN_140da1600(void)

undefined8 FUN_140da1600(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)FUN_140d79d20(param_1,local_18,param_1 + 8,param_3);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*puVar1;
  }
  uVar2 = FUN_140d84aa0(*(undefined4 *)(param_1 + 0x58));
  FString::PrintfImpl(param_2,L"%s %s \'%u;",puVar3,uVar2,*(undefined4 *)(param_1 + 0x60));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140da1680 FUN_140da1680 body=421 status=ok
// SIG undefined FUN_140da1680(void)

undefined8 FUN_140da1680(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  undefined2 *puVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  void **ppvVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  void *local_48;
  undefined8 local_40;
  void *local_38;
  undefined8 local_30;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar2 = *(longlong *)(DAT_146b33f38 + 0x98);
  if (lVar2 == 0) {
    local_38 = (void *)0x0;
    ppvVar7 = &local_38;
    local_30 = 0;
    bVar5 = false;
    bVar4 = true;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x60);
    if (((iVar1 < 0) || (*(int *)(lVar2 + 0x48) <= iVar1)) ||
       (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x40) + (longlong)iVar1 * 8), lVar2 == 0)) {
      local_48 = (void *)0x0;
      ppvVar7 = &local_48;
      local_40 = 0;
      bVar5 = true;
      bVar4 = false;
    }
    else {
      puVar6 = (undefined8 *)FText::ToString(lVar2 + 0x30);
      local_48 = (void *)0x0;
      iVar1 = *(int *)(puVar6 + 1);
      _Src = (void *)*puVar6;
      local_40 = CONCAT44(local_40._4_4_,iVar1);
      if (iVar1 == 0) {
        local_40 = 0;
        ppvVar7 = &local_48;
        bVar5 = true;
        bVar4 = false;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,iVar1,0);
        _guard_xfg_dispatch_icall_nop(local_48,_Src,(longlong)iVar1 * 2);
        ppvVar7 = &local_48;
        bVar5 = true;
        bVar4 = false;
      }
    }
  }
  puVar3 = *ppvVar7;
  *ppvVar7 = (void *)0x0;
  iVar1 = *(int *)(ppvVar7 + 1);
  ppvVar7[1] = (void *)0x0;
  if (bVar4) {
    if (local_38 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if ((bVar5) && (local_48 != (void *)0x0)) {
    FMemory::Free();
  }
  puVar8 = &DAT_143f3eda8;
  puVar9 = &DAT_143f3eda8;
  if (iVar1 != 0) {
    puVar9 = puVar3;
  }
  puVar6 = (undefined8 *)FUN_140d79d20(param_1,&local_38,param_1 + 8,param_3);
  if (*(int *)(puVar6 + 1) != 0) {
    puVar8 = (undefined2 *)*puVar6;
  }
  FString::PrintfImpl(param_2,L"%s changed their FriendActivityStatus to %s",puVar8,puVar9);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  if (puVar3 != (undefined2 *)0x0) {
    FMemory::Free(puVar3);
  }
  return param_2;
}



// FUNCTION 140da1830 FUN_140da1830 body=238 status=ok
// SIG undefined FUN_140da1830(void)

undefined8 FUN_140da1830(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  longlong local_38 [2];
  
  uVar1 = *(undefined1 *)(param_1 + 0x68);
  uVar2 = *(undefined1 *)(param_1 + 0x6f);
  uVar3 = *(undefined1 *)(param_1 + 0x6e);
  uVar4 = *(undefined1 *)(param_1 + 0x6d);
  uVar5 = *(undefined1 *)(param_1 + 0x6c);
  uVar6 = *(undefined1 *)(param_1 + 0x6b);
  uVar7 = *(undefined1 *)(param_1 + 0x6a);
  uVar8 = *(undefined1 *)(param_1 + 0x69);
  puVar9 = (undefined8 *)FUN_140d79d20(param_1,local_38,param_1 + 8,param_3);
  if (*(int *)(puVar9 + 1) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*puVar9;
  }
  FString::PrintfImpl(param_2,L"%s sent their FriendChallengeInfo (%u, %u, %u, %u, %u, %u, %u, %u)",
                      puVar10,uVar1,uVar8,uVar7,uVar6,uVar5,uVar4,uVar3,uVar2);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140da1920 FUN_140da1920 body=83 status=ok
// SIG undefined FUN_140da1920(void)

undefined8 FUN_140da1920(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)FUN_140d79d20(param_1,local_18,param_1 + 8,param_3);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"%s sent their FriendCrewQuarterInfo",puVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140da1980 FUN_140da1980 body=83 status=ok
// SIG undefined FUN_140da1980(void)

undefined8 FUN_140da1980(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)FUN_140d79d20(param_1,local_18,param_1 + 8,param_3);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"%s sent their FriendLoadOutInfo",puVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140da19e0 FUN_140da19e0 body=83 status=ok
// SIG undefined FUN_140da19e0(void)

undefined8 FUN_140da19e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)FUN_140d79d20(param_1,local_18,param_1 + 8,param_3);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"%s sent their FriendPresenceInfo",puVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140da1a40 FUN_140da1a40 body=83 status=ok
// SIG undefined FUN_140da1a40(void)

undefined8 FUN_140da1a40(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)FUN_140d79d20(param_1,local_18,param_1 + 8,param_3);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"%s sent their FriendSkillTreeInfo",puVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140da1aa0 FUN_140da1aa0 body=147 status=ok
// SIG undefined FUN_140da1aa0(void)

undefined8 FUN_140da1aa0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  longlong local_18 [2];
  
  puVar4 = &DAT_143f3eda8;
  if (*(int *)(param_1 + 0x68) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = *(undefined2 **)(param_1 + 0x60);
  }
  puVar1 = (undefined8 *)FUN_140d79d20(param_1,local_18,param_1 + 8,param_3);
  if (*(int *)(puVar1 + 1) != 0) {
    puVar4 = (undefined2 *)*puVar1;
  }
  uVar2 = FUN_140d84aa0(*(undefined4 *)(param_1 + 0x58));
  FString::PrintfImpl(param_2,L"%s %s \'%s\'",puVar4,uVar2,puVar3);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140da1b40 FUN_140da1b40 body=99 status=ok
// SIG undefined FUN_140da1b40(void)

undefined8 FUN_140da1b40(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)FUN_140d79d20(param_1,local_18,param_1 + 8,param_3);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"%s is GuardianRank %d",puVar2,*(undefined4 *)(param_1 + 0x60));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140da1bb0 FUN_140da1bb0 body=99 status=ok
// SIG undefined FUN_140da1bb0(void)

undefined8 FUN_140da1bb0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)FUN_140d79d20(param_1,local_18,param_1 + 8,param_3);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"%s is level %d",puVar2,*(undefined4 *)(param_1 + 0x60));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140da1c20 FUN_140da1c20 body=136 status=ok
// SIG undefined FUN_140da1c20(void)

undefined8 FUN_140da1c20(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)FUN_140d79d20(param_1,local_18,param_1 + 8,param_3);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"%s has location %f,%f,%f",puVar2,(double)*(float *)(param_1 + 0x60),
                      (double)*(float *)(param_1 + 100),(double)*(float *)(param_1 + 0x68));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140da1cb0 FUN_140da1cb0 body=117 status=ok
// SIG undefined FUN_140da1cb0(void)

undefined8 FUN_140da1cb0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  wchar_t *pwVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)FUN_140d79d20(param_1,local_18,param_1 + 8,param_3);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  pwVar3 = L"false";
  if (*(char *)(param_1 + 0x60) != '\0') {
    pwVar3 = L"true";
  }
  FString::PrintfImpl(param_2,L"%s set bLookingForHelp %s",puVar2,pwVar3);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140da1d30 FUN_140da1d30 body=121 status=ok
// SIG undefined FUN_140da1d30(void)

undefined8 FUN_140da1d30(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  longlong local_18 [2];
  
  puVar3 = &DAT_143f3eda8;
  if (*(int *)(param_1 + 0x68) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = *(undefined2 **)(param_1 + 0x60);
  }
  puVar1 = (undefined8 *)FUN_140d79d20(param_1,local_18,param_1 + 8,param_3);
  if (*(int *)(puVar1 + 1) != 0) {
    puVar3 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"%s changed Map \'%s\'",puVar3,puVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140da1db0 FUN_140da1db0 body=99 status=ok
// SIG undefined FUN_140da1db0(void)

undefined8 FUN_140da1db0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)FUN_140d79d20(param_1,local_18,param_1 + 8,param_3);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"%s changed Mission \'%u\'",puVar2,*(undefined4 *)(param_1 + 0x60));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140da1e20 FUN_140da1e20 body=99 status=ok
// SIG undefined FUN_140da1e20(void)

undefined8 FUN_140da1e20(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)FUN_140d79d20(param_1,local_18,param_1 + 8,param_3);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"%s changed PartyPlayerCount \'%d\'",puVar2,
                      *(undefined4 *)(param_1 + 0x60));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140da1e90 FUN_140da1e90 body=99 status=ok
// SIG undefined FUN_140da1e90(void)

undefined8 FUN_140da1e90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)FUN_140d79d20(param_1,local_18,param_1 + 8,param_3);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"%s changed PlayerClass \'%u\'",puVar2,
                      *(undefined4 *)(param_1 + 0x60));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140da1f00 FUN_140da1f00 body=189 status=ok
// SIG undefined FUN_140da1f00(void)

undefined8 FUN_140da1f00(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  longlong local_28 [2];
  longlong local_18 [2];
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x38) + 0x30))
                     (*(longlong **)(param_1 + 0x38),local_18);
  puVar5 = &DAT_143f3eda8;
  if (*(int *)(puVar2 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar2;
  }
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1,local_28);
  if (*(int *)(puVar2 + 1) != 0) {
    puVar5 = (undefined2 *)*puVar2;
  }
  uVar3 = FUN_140d84aa0(*(undefined4 *)(param_1 + 0x60));
  FString::PrintfImpl(param_2,L"%s requested \'%s\' from %s",puVar5,uVar3,puVar4);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140da1fc0 FUN_140da1fc0 body=121 status=ok
// SIG undefined FUN_140da1fc0(void)

undefined8 FUN_140da1fc0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  longlong local_18 [2];
  
  puVar3 = &DAT_143f3eda8;
  if (*(int *)(param_1 + 0x68) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = *(undefined2 **)(param_1 + 0x60);
  }
  puVar1 = (undefined8 *)FUN_140d79d20(param_1,local_18,param_1 + 8,param_3);
  if (*(int *)(puVar1 + 1) != 0) {
    puVar3 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"%s changed SessionId \'%s\'",puVar3,puVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140da2040 FUN_140da2040 body=97 status=ok
// SIG undefined FUN_140da2040(void)

undefined8 FUN_140da2040(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                     (*(longlong **)(param_1 + 0x10),local_18);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"%s TimePlayed is \'%u\' seconds",puVar2,
                      *(undefined4 *)(param_1 + 0x60));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140da20b0 FUN_140da20b0 body=540 status=ok
// SIG undefined FUN_140da20b0(void)

longlong ** FUN_140da20b0(longlong param_1,longlong **param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *local_28;
  longlong *local_20;
  
  plVar5 = (longlong *)0x0;
  *param_2 = (longlong *)0x0;
  param_2[1] = (longlong *)0x0;
  if (param_4 != 0) {
    plVar4 = (longlong *)operator_new(0x50);
    plVar6 = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[4] = 0;
      plVar4[5] = 0;
      *(undefined4 *)(plVar4 + 6) = 0xffffffff;
      *(undefined4 *)((longlong)plVar4 + 0x34) = 0;
      plVar4[8] = 0;
      *(undefined4 *)(plVar4 + 9) = 0;
      plVar6 = plVar4;
    }
    plVar4 = (longlong *)operator_new(0x18);
    if (plVar4 != (longlong *)0x0) {
      *(undefined4 *)(plVar4 + 1) = 1;
      *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
      *plVar4 = (longlong)&PTR_FUN_143f60d28;
      plVar4[2] = (longlong)plVar6;
      plVar5 = plVar4;
    }
    local_28 = plVar6;
    local_20 = plVar5;
    SharedPointerInternals::EnableSharedFromThis(&local_28,plVar6,plVar6);
    if (param_2 != &local_28) {
      *param_2 = plVar6;
      local_28 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_20);
      plVar5 = local_20;
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar5 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    if (*param_2 != (longlong *)0x0) {
      FUN_1416b32b0(*param_2,&DAT_14629b170,(double)*(byte *)(param_1 + 8));
      FUN_1416b32b0(*param_2,&DAT_14629b180,(double)*(byte *)(param_1 + 9));
      FUN_1416b32b0(*param_2,&DAT_14629b190,(double)*(byte *)(param_1 + 10));
      FUN_1416b32b0(*param_2,&DAT_14629b1a0,(double)*(byte *)(param_1 + 0xb));
      FUN_1416b32b0(*param_2,&DAT_14629b1b0,(double)*(byte *)(param_1 + 0xc));
      FUN_1416b32b0(*param_2,&DAT_14629b1c0,(double)*(byte *)(param_1 + 0xd));
      FUN_1416b32b0(*param_2,&DAT_14629b1d0,(double)*(byte *)(param_1 + 0xe));
      FUN_1416b32b0(*param_2,&DAT_14629b1e0,(double)*(byte *)(param_1 + 0xf));
    }
  }
  return param_2;
}



// FUNCTION 140da22d0 FUN_140da22d0 body=304 status=ok
// SIG undefined FUN_140da22d0(void)

longlong ** FUN_140da22d0(undefined8 param_1,longlong **param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *local_28;
  longlong *local_20;
  
  plVar5 = (longlong *)0x0;
  *param_2 = (longlong *)0x0;
  param_2[1] = (longlong *)0x0;
  if (param_4 == 0) {
    return param_2;
  }
  plVar4 = (longlong *)operator_new(0x50);
  plVar6 = plVar5;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = 0;
    plVar4[1] = 0;
    plVar4[4] = 0;
    plVar4[5] = 0;
    *(undefined4 *)(plVar4 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 0x34) = 0;
    plVar4[8] = 0;
    *(undefined4 *)(plVar4 + 9) = 0;
    plVar6 = plVar4;
  }
  plVar4 = (longlong *)operator_new(0x18);
  if (plVar4 != (longlong *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 1;
    *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
    *plVar4 = (longlong)&PTR_FUN_143f60d28;
    plVar4[2] = (longlong)plVar6;
    plVar5 = plVar4;
  }
  local_28 = plVar6;
  local_20 = plVar5;
  SharedPointerInternals::EnableSharedFromThis(&local_28,plVar6,plVar6);
  if (param_2 != &local_28) {
    *param_2 = plVar6;
    local_28 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_20);
    plVar5 = local_20;
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 140da2400 FUN_140da2400 body=1525 status=ok
// SIG undefined FUN_140da2400(void)

longlong * FUN_140da2400(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  int *piVar15;
  longlong lVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong in_stack_ffffffffffffff38;
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong local_80 [2];
  longlong local_70 [2];
  longlong local_60 [2];
  longlong local_50 [2];
  longlong local_40 [3];
  
  puVar17 = (undefined8 *)0x0;
  puVar6 = (undefined8 *)
           operator_new(0x50,param_2,param_3,param_4,in_stack_ffffffffffffff38 & 0xffffffff00000000)
  ;
  puVar11 = puVar17;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar11 = puVar6;
  }
  puVar7 = (undefined8 *)operator_new(0x18);
  puVar6 = puVar17;
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar7 + 1) = 1;
    *puVar7 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar7 + 0xc) = 1;
    puVar7[2] = puVar11;
    puVar6 = puVar7;
  }
  *param_2 = (longlong)puVar11;
  param_2[1] = (longlong)puVar6;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar11,puVar11);
  if (*param_2 != 0) {
    if ((char)param_3 == '\x01') {
      if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
         (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(), cVar4 != '\0')) {
        lVar16 = *param_2;
        uVar8 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))
                          (*(longlong **)(param_1 + 0x10),local_70);
        FJsonObject::SetStringField(lVar16,&DAT_14629ac50,uVar8);
        if (local_70[0] != 0) {
          FMemory::Free();
        }
      }
      if ((*(longlong **)(param_1 + 0x38) != (longlong *)0x0) &&
         (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))(), cVar4 != '\0')) {
        lVar16 = *param_2;
        uVar8 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x28))
                          (*(longlong **)(param_1 + 0x38),local_60);
        FJsonObject::SetStringField(lVar16,&DAT_14629ade0,uVar8);
        if (local_60[0] != 0) {
          FMemory::Free();
        }
      }
    }
    FUN_1416b32b0(*param_2,&DAT_14629ac60,(double)*(byte *)(param_1 + 0x58));
    lVar16 = *param_2;
    uVar8 = FDateTime::ToString(param_1 + 0x60,local_50);
    FJsonObject::SetStringField(lVar16,&DAT_14629ac70,uVar8);
    if (local_50[0] != 0) {
      FMemory::Free();
    }
    FUN_141682af0(param_1 + 0x68,local_80,0);
    FJsonObject::SetStringField(*param_2,&DAT_14629ac80,local_80);
    if (local_80[0] != 0) {
      FMemory::Free();
    }
    FUN_1416b32b0(*param_2,&DAT_14629ac90,(double)*(int *)(param_1 + 0x78));
    FUN_1416b32b0(*param_2,&DAT_14629aca0,(double)*(uint *)(param_1 + 0x7c));
    FJsonObject::SetStringField(*param_2,&DAT_14629acc0,param_1 + 0x88);
    if ((char)param_3 == '\x01') {
      if (0 < *(int *)(param_1 + 0x150)) {
        local_c0 = 0;
        local_b8 = 0;
        lVar16 = *(longlong *)(param_1 + 0x148);
        if (*(longlong *)(param_1 + 0x148) == 0) {
          lVar16 = param_1 + 0xa8;
        }
        lVar12 = lVar16 + (longlong)*(int *)(param_1 + 0x150) * 0x28;
        lVar14 = lVar12;
        if (lVar16 != lVar12) {
          do {
            plVar10 = (longlong *)0x0;
            if ((*(longlong **)(lVar16 + 8) != (longlong *)0x0) &&
               (lVar12 = lVar14, cVar4 = (**(code **)(**(longlong **)(lVar16 + 8) + 0x20))(),
               lVar14 = lVar12, cVar4 != '\0')) {
              plVar9 = (longlong *)operator_new(0x20);
              plVar13 = plVar10;
              if (plVar9 != (longlong *)0x0) {
                puVar17 = (undefined8 *)0x1;
                uVar8 = (**(code **)(**(longlong **)(lVar16 + 8) + 0x28))
                                  (*(longlong **)(lVar16 + 8),local_40);
                *(undefined4 *)(plVar9 + 1) = 0;
                *plVar9 = (longlong)&PTR_AsObject_143f605c8;
                FString::FString(plVar9 + 2,uVar8);
                *(undefined4 *)(plVar9 + 1) = 2;
                plVar13 = plVar9;
              }
              plVar9 = (longlong *)operator_new(0x18);
              if (plVar9 != (longlong *)0x0) {
                *(undefined4 *)(plVar9 + 1) = 1;
                *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
                *plVar9 = (longlong)&PTR_FUN_143f60d18;
                plVar9[2] = (longlong)plVar13;
                plVar10 = plVar9;
              }
              local_a0 = plVar13;
              local_98 = plVar10;
              SharedPointerInternals::EnableSharedFromThis(&local_a0,plVar13,plVar13);
              if ((puVar17 != (undefined8 *)0x0) && (puVar17 = (undefined8 *)0x0, local_40[0] != 0))
              {
                FMemory::Free();
              }
              plVar13 = local_98;
              plVar10 = local_a0;
              uVar19 = local_b8;
              if (local_98 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_98 + 1) = (int)local_98[1] + 1;
                UNLOCK();
              }
              lVar14 = (longlong)(int)local_b8;
              iVar5 = (int)local_b8 + 1;
              local_b8 = CONCAT44(local_b8._4_4_,iVar5);
              if (local_b8._4_4_ < iVar5) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_c0,uVar19 & 0xffffffff);
              }
              plVar9 = local_98;
              puVar11 = (undefined8 *)(lVar14 * 0x10 + local_c0);
              *puVar11 = plVar10;
              puVar11[1] = plVar13;
              lVar14 = lVar12;
              if (local_98 != (longlong *)0x0) {
                LOCK();
                plVar10 = local_98 + 1;
                lVar2 = *plVar10;
                *(int *)plVar10 = (int)*plVar10 + -1;
                UNLOCK();
                if ((int)lVar2 == 1) {
                  (**(code **)*local_98)(local_98);
                  LOCK();
                  piVar15 = (int *)((longlong)plVar9 + 0xc);
                  iVar5 = *piVar15;
                  *piVar15 = *piVar15 + -1;
                  UNLOCK();
                  lVar14 = lVar12;
                  if (iVar5 == 1) {
                    (**(code **)(*plVar9 + 8))(plVar9,1);
                    lVar14 = lVar12;
                  }
                }
              }
            }
            lVar16 = lVar16 + 0x28;
          } while (lVar16 != lVar12);
        }
        FJsonObject::SetArrayField(*param_2,&DAT_14629ad40,&local_c0);
        TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
        ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_c0);
      }
      FUN_1416b3150(*param_2,&DAT_14629aea0,*(undefined1 *)(param_1 + 0x80));
      FUN_1416b32b0(*param_2,&DAT_14629aeb0,(double)*(uint *)(param_1 + 0x84));
    }
    uVar19 = 0;
    if (0 < *(int *)(param_1 + 0x170)) {
      local_b0 = 0;
      local_a8 = 0;
      piVar15 = *(int **)(param_1 + 0x168);
      if (*(int **)(param_1 + 0x168) == (int *)0x0) {
        piVar15 = (int *)(param_1 + 0x158);
      }
      uVar18 = (longlong)*(int *)(param_1 + 0x170) & 0x3fffffffffffffff;
      if (piVar15 + *(int *)(param_1 + 0x170) < piVar15) {
        uVar18 = uVar19;
      }
      if (uVar18 != 0) {
        do {
          plVar10 = (longlong *)0x0;
          iVar5 = *piVar15;
          plVar9 = (longlong *)operator_new(0x18);
          plVar13 = plVar10;
          if (plVar9 != (longlong *)0x0) {
            *plVar9 = (longlong)&PTR_AsObject_143f60608;
            *(undefined4 *)(plVar9 + 1) = 3;
            plVar9[2] = (longlong)(double)iVar5;
            plVar13 = plVar9;
          }
          plVar9 = (longlong *)operator_new(0x18);
          if (plVar9 != (longlong *)0x0) {
            *(undefined4 *)(plVar9 + 1) = 1;
            *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
            *plVar9 = (longlong)&PTR_FUN_143f60d18;
            plVar9[2] = (longlong)plVar13;
            plVar10 = plVar9;
          }
          local_90 = plVar13;
          local_88 = plVar10;
          SharedPointerInternals::EnableSharedFromThis(&local_90,plVar13,plVar13);
          plVar13 = local_88;
          plVar10 = local_90;
          uVar3 = local_a8;
          if (local_88 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_88 + 1) = (int)local_88[1] + 1;
            UNLOCK();
          }
          lVar16 = (longlong)(int)local_a8;
          iVar5 = (int)local_a8 + 1;
          local_a8 = CONCAT44(local_a8._4_4_,iVar5);
          if (local_a8._4_4_ < iVar5) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_b0,uVar3 & 0xffffffff);
          }
          plVar9 = local_88;
          puVar11 = (undefined8 *)(lVar16 * 0x10 + local_b0);
          *puVar11 = plVar10;
          puVar11[1] = plVar13;
          if (local_88 != (longlong *)0x0) {
            LOCK();
            plVar10 = local_88 + 1;
            lVar16 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar16 == 1) {
              (**(code **)*local_88)(local_88);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
          }
          piVar15 = piVar15 + 1;
          uVar19 = uVar19 + 1;
        } while (uVar19 != uVar18);
      }
      FJsonObject::SetArrayField(*param_2,&DAT_14629ad50,&local_b0);
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_b0);
    }
  }
  return param_2;
}



// FUNCTION 140da2a00 FUN_140da2a00 body=67 status=ok
// SIG undefined FUN_140da2a00(void)

longlong * FUN_140da2a00(longlong param_1,longlong *param_2)

{
  FUN_140da2400();
  if (*param_2 != 0) {
    FUN_1416b32b0(*param_2,&DAT_14629ae30,(double)*(int *)(param_1 + 0x178));
  }
  return param_2;
}



// FUNCTION 140da2a50 FUN_140da2a50 body=123 status=ok
// SIG undefined FUN_140da2a50(void)

longlong * FUN_140da2a50(longlong param_1,longlong *param_2)

{
  FUN_140da2400();
  if (*param_2 != 0) {
    FUN_1416b32b0(*param_2,&DAT_14629ada0,(double)*(uint *)(param_1 + 0x178));
    FUN_1416b32b0(*param_2,&DAT_14629adc0,(double)*(int *)(param_1 + 0x17c));
    FUN_1416b32b0(*param_2,&DAT_14629add0,(double)*(int *)(param_1 + 0x180));
  }
  return param_2;
}



// FUNCTION 140da2ad0 FUN_140da2ad0 body=875 status=ok
// SIG undefined FUN_140da2ad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_140da2ad0(longlong param_1,longlong *param_2,undefined1 param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_248 [32];
  longlong local_228;
  undefined8 local_220;
  longlong local_218;
  longlong *local_210;
  undefined8 *local_208;
  undefined8 *local_200;
  undefined4 local_1f8;
  longlong *local_1f0;
  undefined1 local_1e8 [8];
  longlong *local_1e0;
  undefined **local_1d8;
  undefined1 local_1d0 [40];
  undefined1 local_1a8 [88];
  longlong local_150;
  undefined1 local_130 [192];
  longlong local_70;
  uint local_60;
  int local_5c;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  bVar10 = false;
  *param_2 = 0;
  param_2[1] = 0;
  local_1f8 = 0;
  if (param_4 != 0) {
    local_1f0 = param_2;
    plVar5 = (longlong *)FUN_140da2400(param_1,local_1e8);
    if (param_2 != plVar5) {
      *param_2 = *plVar5;
      *plVar5 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,plVar5 + 1);
    }
    if (local_1e0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_1e0 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_1e0)(local_1e0);
        LOCK();
        piVar1 = (int *)((longlong)local_1e0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1e0 + 8))(local_1e0,1);
        }
      }
    }
    lVar7 = *param_2;
    if (lVar7 != 0) {
      local_228 = 0;
      local_220 = 0;
      lVar9 = *(longlong *)(param_1 + 0x178);
      lVar8 = (longlong)*(int *)(param_1 + 0x180) * 0x188 + lVar9;
      if (lVar9 != lVar8) {
        do {
          FUN_140d63650(&local_1d8,lVar9);
          local_60 = *(uint *)(lVar9 + 0x178);
          local_5c = *(int *)(lVar9 + 0x17c);
          local_58 = *(int *)(lVar9 + 0x180);
          local_1d8 = &PTR_FUN_144530608;
          puVar6 = (undefined8 *)operator_new(0x20);
          if (puVar6 == (undefined8 *)0x0) {
            puVar6 = (undefined8 *)0x0;
          }
          else {
            bVar10 = true;
            FUN_140da2400(&local_1d8,&local_218,param_3,param_4);
            if (local_218 != 0) {
              FUN_1416b32b0(local_218,&DAT_14629ada0,(double)local_60);
              FUN_1416b32b0(local_218,&DAT_14629adc0,(double)local_5c);
              FUN_1416b32b0(local_218,&DAT_14629add0,(double)local_58);
            }
            *(undefined4 *)(puVar6 + 1) = 0;
            *puVar6 = &PTR_AsObject_143f606d8;
            puVar6[2] = local_218;
            puVar6[3] = local_210;
            if (local_210 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_210 + 1) = (int)local_210[1] + 1;
              UNLOCK();
            }
            *(undefined4 *)(puVar6 + 1) = 6;
          }
          local_200 = (undefined8 *)operator_new(0x18);
          if (local_200 != (undefined8 *)0x0) {
            *(undefined4 *)(local_200 + 1) = 1;
            *(undefined4 *)((longlong)local_200 + 0xc) = 1;
            *local_200 = &PTR_FUN_143f60d18;
            local_200[2] = puVar6;
          }
          local_208 = puVar6;
          SharedPointerInternals::EnableSharedFromThis(&local_208,puVar6,puVar6);
          uVar3 = local_220;
          lVar7 = (longlong)(int)local_220;
          iVar4 = (int)local_220 + 1;
          local_220 = CONCAT44(local_220._4_4_,iVar4);
          if (local_220._4_4_ < iVar4) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_228,uVar3 & 0xffffffff);
          }
          plVar5 = local_210;
          puVar6 = (undefined8 *)(lVar7 * 0x10 + local_228);
          *puVar6 = local_208;
          puVar6[1] = local_200;
          local_200 = (undefined8 *)0x0;
          local_208 = (undefined8 *)0x0;
          if ((bVar10) && (bVar10 = false, local_210 != (longlong *)0x0)) {
            LOCK();
            plVar2 = local_210 + 1;
            lVar7 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_210)(local_210);
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          if (local_70 != 0) {
            FMemory::Free();
          }
          FUN_140d64c40(local_130);
          if (local_150 != 0) {
            FMemory::Free();
          }
          FUN_1404bf980(local_1a8);
          FUN_1404bf980(local_1d0);
          lVar9 = lVar9 + 0x188;
        } while (lVar9 != lVar8);
        lVar7 = *local_1f0;
        param_2 = local_1f0;
      }
      FJsonObject::SetArrayField(lVar7,&DAT_14629ae50,&local_228);
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_228);
    }
  }
  return param_2;
}



// FUNCTION 140da2e40 FUN_140da2e40 body=277 status=ok
// SIG undefined FUN_140da2e40(void)

longlong * FUN_140da2e40(longlong param_1,longlong *param_2,char param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_28;
  longlong local_20;
  undefined8 local_18;
  longlong *plStack_10;
  
  if (param_4 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_140da2400(param_1,&local_28,param_3);
    if (local_28 != 0) {
      if (param_3 == '\0') {
        local_18 = 0;
        plStack_10 = (longlong *)0x0;
        FUN_140b24210(&local_28,&DAT_14629ad70,param_1 + 0x178,param_4,&local_18);
        plVar5 = plStack_10;
        if (plStack_10 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_10 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plStack_10)(plStack_10);
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
      }
      else {
        FJsonObject::SetStringField(local_28,&DAT_14629ad60,param_1 + 0x178);
      }
      FUN_1416b32b0(local_28,&DAT_14629ad80,(double)*(byte *)(param_1 + 0x188));
    }
    *param_2 = local_28;
    param_2[1] = local_20;
  }
  return param_2;
}



// FUNCTION 140da2f60 FUN_140da2f60 body=194 status=ok
// SIG undefined FUN_140da2f60(void)

longlong * FUN_140da2f60(longlong param_1,longlong *param_2,char param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *plStack_10;
  
  FUN_140da2400();
  if ((*param_2 != 0) && (param_4 != 0)) {
    if (param_3 == '\0') {
      local_18 = 0;
      plStack_10 = (longlong *)0x0;
      FUN_140b24210(param_2,&DAT_14629ad70,param_1 + 0x178,param_4,&local_18);
      plVar5 = plStack_10;
      if (plStack_10 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_10 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_10)(plStack_10);
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
    }
    else {
      FJsonObject::SetStringField(*param_2,&DAT_14629ad60,param_1 + 0x178);
    }
  }
  return param_2;
}



// FUNCTION 140da3030 FUN_140da3030 body=148 status=ok
// SIG undefined FUN_140da3030(void)

longlong * FUN_140da3030(longlong param_1,longlong *param_2)

{
  FUN_140da2400();
  if (*param_2 != 0) {
    FUN_1416b32b0(*param_2,&DAT_14629adf0,(double)*(int *)(param_1 + 0x178));
    FUN_1416b32b0(*param_2,&DAT_14629ae10,(double)*(int *)(param_1 + 0x184));
    FUN_1416b32b0(*param_2,&DAT_14629ae00,(double)*(int *)(param_1 + 0x17c));
    FUN_1416b32b0(*param_2,&DAT_14629ae20,(double)*(int *)(param_1 + 0x180));
  }
  return param_2;
}



// FUNCTION 140da30d0 FUN_140da30d0 body=69 status=ok
// SIG undefined FUN_140da30d0(void)

longlong * FUN_140da30d0(longlong param_1,longlong *param_2)

{
  FUN_140da2400();
  if (*param_2 != 0) {
    FUN_1416b32b0(*param_2,&DAT_14629ad20,(double)*(uint *)(param_1 + 0x178));
  }
  return param_2;
}



// FUNCTION 140da3120 FUN_140da3120 body=96 status=ok
// SIG undefined FUN_140da3120(void)

longlong * FUN_140da3120(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  FUN_140da2400();
  if (*param_2 != 0) {
    FUN_141682af0(param_1 + 0x178,local_18,0);
    FJsonObject::SetStringField(*param_2,&DAT_14629ae90,local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 140da3180 FUN_140da3180 body=67 status=ok
// SIG undefined FUN_140da3180(void)

longlong * FUN_140da3180(longlong param_1,longlong *param_2)

{
  FUN_140da2400();
  if (*param_2 != 0) {
    FUN_1416b32b0(*param_2,&DAT_14629ad10,(double)*(int *)(param_1 + 0x178));
  }
  return param_2;
}



// FUNCTION 140da31d0 FUN_140da31d0 body=23 status=ok
// SIG undefined FUN_140da31d0(void)

undefined8 FUN_140da31d0(undefined8 param_1,undefined8 param_2)

{
  FUN_140da2400();
  return param_2;
}



// FUNCTION 140da31f0 FUN_140da31f0 body=903 status=ok
// SIG undefined FUN_140da31f0(void)

undefined8 ** FUN_140da31f0(longlong param_1,undefined8 **param_2,char param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *local_38;
  longlong *local_30;
  
  puVar8 = (undefined8 *)0x0;
  puVar5 = puVar8;
  if (param_4 != (longlong *)0x0) {
    puVar5 = (undefined8 *)(**(code **)(*param_4 + 0x148))(param_4);
  }
  *param_2 = (undefined8 *)0x0;
  param_2[1] = (undefined8 *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)operator_new(0x50);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      *(undefined4 *)(puVar6 + 6) = 0xffffffff;
      *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
      puVar6[8] = 0;
      *(undefined4 *)(puVar6 + 9) = 0;
      puVar8 = puVar6;
    }
    plVar7 = (longlong *)operator_new(0x18);
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar7 + 1) = 1;
      *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
      *plVar7 = (longlong)&PTR_FUN_143f60d28;
      plVar7[2] = (longlong)puVar8;
    }
    local_38 = puVar8;
    local_30 = plVar7;
    SharedPointerInternals::EnableSharedFromThis(&local_38,puVar8,puVar8);
    if (param_2 != &local_38) {
      *param_2 = puVar8;
      local_38 = (undefined8 *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_30);
      plVar7 = local_30;
    }
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
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    if (*param_2 != (undefined8 *)0x0) {
      if (param_3 == '\0') {
        FUN_140b24210(param_2,&DAT_14629b090,param_1 + 8,puVar5,param_1 + 0x98);
        FUN_140b24210(param_2,&DAT_14629b0a0,param_1 + 0x18,puVar5,param_1 + 0xa8);
        FUN_140b24210(param_2,&DAT_14629b0b0,param_1 + 0x28,puVar5,param_1 + 0xb8);
        FUN_140b24210(param_2,&DAT_14629b0c0,param_1 + 0x38,puVar5,param_1 + 200);
        FUN_140b24210(param_2,&DAT_14629b0d0,param_1 + 0x48,puVar5,param_1 + 0xd8);
        FUN_140b24210(param_2,&DAT_14629b0e0,param_1 + 0x58,puVar5,param_1 + 0xe8);
        FUN_140b24210(param_2,&DAT_14629b0f0,param_1 + 0x68,puVar5,param_1 + 0xf8);
        FUN_140b24210(param_2,&DAT_14629b100,param_1 + 0x78,puVar5,param_1 + 0x108);
      }
      else {
        FJsonObject::SetStringField(*param_2,&DAT_14629b010,param_1 + 8);
        FJsonObject::SetStringField(*param_2,&DAT_14629b020,param_1 + 0x18);
        FJsonObject::SetStringField(*param_2,&DAT_14629b030,param_1 + 0x28);
        FJsonObject::SetStringField(*param_2,&DAT_14629b040,param_1 + 0x38);
        FJsonObject::SetStringField(*param_2,&DAT_14629b050,param_1 + 0x48);
        FJsonObject::SetStringField(*param_2,&DAT_14629b060,param_1 + 0x58);
        FJsonObject::SetStringField(*param_2,&DAT_14629b070,param_1 + 0x68);
        FJsonObject::SetStringField(*param_2,&DAT_14629b080,param_1 + 0x78);
      }
      FUN_1416b32b0(*param_2,&DAT_14629b110,(double)*(uint *)(param_1 + 0x88));
      FUN_1416b32b0(*param_2,&DAT_14629b120,(double)*(uint *)(param_1 + 0x8c));
      FUN_1416b32b0(*param_2,&DAT_14629b130,(double)*(uint *)(param_1 + 0x90));
      FUN_1416b32b0(*param_2,&DAT_14629b140,(double)*(uint *)(param_1 + 0x94));
    }
  }
  return param_2;
}



// FUNCTION 140da3580 FUN_140da3580 body=560 status=ok
// SIG undefined FUN_140da3580(void)

longlong ** FUN_140da3580(longlong param_1,longlong **param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *local_28;
  longlong *local_20;
  
  plVar5 = (longlong *)0x0;
  *param_2 = (longlong *)0x0;
  param_2[1] = (longlong *)0x0;
  if (param_4 != 0) {
    plVar4 = (longlong *)operator_new(0x50);
    plVar6 = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[4] = 0;
      plVar4[5] = 0;
      *(undefined4 *)(plVar4 + 6) = 0xffffffff;
      *(undefined4 *)((longlong)plVar4 + 0x34) = 0;
      plVar4[8] = 0;
      *(undefined4 *)(plVar4 + 9) = 0;
      plVar6 = plVar4;
    }
    plVar4 = (longlong *)operator_new(0x18);
    if (plVar4 != (longlong *)0x0) {
      *(undefined4 *)(plVar4 + 1) = 1;
      *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
      *plVar4 = (longlong)&PTR_FUN_143f60d28;
      plVar4[2] = (longlong)plVar6;
      plVar5 = plVar4;
    }
    local_28 = plVar6;
    local_20 = plVar5;
    SharedPointerInternals::EnableSharedFromThis(&local_28,plVar6,plVar6);
    if (param_2 != &local_28) {
      *param_2 = plVar6;
      local_28 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_20);
      plVar5 = local_20;
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar5 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    if (*param_2 != (longlong *)0x0) {
      FUN_1416b32b0(*param_2,&DAT_14629af20,(double)*(int *)(param_1 + 8));
      FJsonObject::SetStringField(*param_2,&DAT_14629af30,param_1 + 0x10);
      FUN_1416b32b0(*param_2,&DAT_14629af60,(double)*(uint *)(param_1 + 0x34));
      FUN_1416b32b0(*param_2,&DAT_14629af70,(double)*(uint *)(param_1 + 0x38));
      FUN_1416b32b0(*param_2,&DAT_14629aff0,(double)*(uint *)(param_1 + 0x50));
      FUN_1416b32b0(*param_2,&DAT_14629b000,(double)*(uint *)(param_1 + 0x54));
      FUN_1416b3150(*param_2,&DAT_14629afd0,*(undefined1 *)(param_1 + 0x4a));
      FUN_1416b32b0(*param_2,&DAT_14629af80,(double)*(float *)(param_1 + 0x3c));
      FUN_1416b32b0(*param_2,&DAT_14629af90,(double)*(float *)(param_1 + 0x40));
      FUN_1416b32b0(*param_2,&DAT_14629afa0,(double)*(float *)(param_1 + 0x44));
    }
  }
  return param_2;
}



// FUNCTION 140da37b0 FUN_140da37b0 body=826 status=ok
// SIG undefined FUN_140da37b0(void)

longlong ** FUN_140da37b0(longlong param_1,longlong **param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  ulonglong uVar2;
  void *_Src;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong local_78;
  undefined8 local_70;
  longlong *local_68;
  longlong *local_60;
  undefined8 *local_58;
  longlong *local_50;
  void *local_48;
  int local_40;
  
  plVar11 = (longlong *)0x0;
  *param_2 = (longlong *)0x0;
  param_2[1] = (longlong *)0x0;
  if (param_4 == 0) {
    return param_2;
  }
  plVar4 = (longlong *)operator_new(0x50);
  plVar7 = plVar11;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = 0;
    plVar4[1] = 0;
    plVar4[4] = 0;
    plVar4[5] = 0;
    *(undefined4 *)(plVar4 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 0x34) = 0;
    plVar4[8] = 0;
    *(undefined4 *)(plVar4 + 9) = 0;
    plVar7 = plVar4;
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar4 = plVar11;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f60d28;
    plVar5[2] = (longlong)plVar7;
    plVar4 = plVar5;
  }
  local_68 = plVar7;
  local_60 = plVar4;
  SharedPointerInternals::EnableSharedFromThis(&local_68,plVar7,plVar7);
  if (param_2 != &local_68) {
    *param_2 = plVar7;
    local_68 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_60);
    plVar4 = local_60;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
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
  plVar7 = *param_2;
  if (plVar7 != (longlong *)0x0) {
    local_78 = 0;
    local_70 = 0;
    puVar8 = *(undefined4 **)(param_1 + 0x38);
    if (*(undefined4 **)(param_1 + 0x38) == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)(param_1 + 8);
    }
    puVar9 = puVar8 + (longlong)*(int *)(param_1 + 0x40) * 4;
    if (puVar8 != puVar9) {
      do {
        puVar6 = (undefined8 *)operator_new(0x20);
        if (puVar6 == (undefined8 *)0x0) {
          puVar6 = (undefined8 *)0x0;
        }
        else {
          plVar11 = (longlong *)0x1;
          FString::PrintfImpl(&local_48,L"%d:%.2f",*puVar8,(double)(float)puVar8[1]);
          _Src = local_48;
          *puVar6 = &PTR_AsObject_143f605c8;
          *(undefined4 *)(puVar6 + 1) = 0;
          puVar6[2] = 0;
          lVar10 = (longlong)local_40;
          *(int *)(puVar6 + 3) = local_40;
          if (local_40 == 0) {
            *(undefined4 *)((longlong)puVar6 + 0x1c) = 0;
            *(undefined4 *)(puVar6 + 1) = 2;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar6 + 2,local_40,0);
            _guard_xfg_dispatch_icall_nop((void *)puVar6[2],_Src,lVar10 * 2);
            *(undefined4 *)(puVar6 + 1) = 2;
          }
        }
        local_50 = (longlong *)operator_new(0x18);
        if (local_50 != (longlong *)0x0) {
          *(undefined4 *)(local_50 + 1) = 1;
          *(undefined4 *)((longlong)local_50 + 0xc) = 1;
          *local_50 = (longlong)&PTR_FUN_143f60d18;
          local_50[2] = (longlong)puVar6;
        }
        local_58 = puVar6;
        SharedPointerInternals::EnableSharedFromThis(&local_58,puVar6,puVar6);
        if ((plVar11 != (longlong *)0x0) && (plVar11 = (longlong *)0x0, local_48 != (void *)0x0)) {
          FMemory::Free();
        }
        plVar7 = local_50;
        puVar6 = local_58;
        uVar2 = local_70;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
        }
        lVar10 = (longlong)(int)local_70;
        iVar3 = (int)local_70 + 1;
        local_70 = CONCAT44(local_70._4_4_,iVar3);
        if (local_70._4_4_ < iVar3) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_78,uVar2 & 0xffffffff);
        }
        plVar4 = local_50;
        plVar5 = (longlong *)(lVar10 * 0x10 + local_78);
        *plVar5 = (longlong)puVar6;
        plVar5[1] = (longlong)plVar7;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_50 + 1;
          lVar10 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_50)(local_50);
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
        puVar8 = puVar8 + 4;
      } while (puVar8 != puVar9);
      plVar7 = *param_2;
    }
    FJsonObject::SetArrayField(plVar7,&DAT_14629b150,&local_78);
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_78);
  }
  return param_2;
}



// FUNCTION 140da3af0 FUN_140da3af0 body=994 status=ok
// SIG undefined FUN_140da3af0(void)

undefined8 ** FUN_140da3af0(longlong param_1,undefined8 **param_2,char param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *local_a8;
  longlong *local_a0;
  longlong local_98 [2];
  longlong local_88 [2];
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
  
  puVar9 = (undefined8 *)0x0;
  *param_2 = (undefined8 *)0x0;
  param_2[1] = (undefined8 *)0x0;
  if (((param_4 != 0) && (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(), cVar5 != '\0')) {
    puVar6 = (undefined8 *)operator_new(0x50);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      *(undefined4 *)(puVar6 + 6) = 0xffffffff;
      *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
      puVar6[8] = 0;
      *(undefined4 *)(puVar6 + 9) = 0;
      puVar9 = puVar6;
    }
    plVar7 = (longlong *)operator_new(0x18);
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar7 + 1) = 1;
      *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
      *plVar7 = (longlong)&PTR_FUN_143f60d28;
      plVar7[2] = (longlong)puVar9;
    }
    local_a8 = puVar9;
    local_a0 = plVar7;
    SharedPointerInternals::EnableSharedFromThis(&local_a8,puVar9,puVar9);
    if (param_2 != &local_a8) {
      *param_2 = puVar9;
      local_a8 = (undefined8 *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_a0);
      plVar7 = local_a0;
    }
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
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    puVar9 = *param_2;
    if (puVar9 != (undefined8 *)0x0) {
      if (param_3 == '\x01') {
        uVar8 = FUniqueNetIdWrapper::ToString(param_1 + 8,local_98);
        FJsonObject::SetStringField(puVar9,&DAT_14629b1f0,uVar8);
        if (local_98[0] != 0) {
          FMemory::Free();
        }
      }
      puVar9 = *param_2;
      uVar8 = FDateTime::ToString(param_1 + 0x30,local_88);
      FJsonObject::SetStringField(puVar9,&DAT_14629b200,uVar8);
      if (local_88[0] != 0) {
        FMemory::Free();
      }
      puVar9 = *param_2;
      uVar8 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x18))
                        (param_1 + 0x38,local_78,param_3,param_4);
      FUN_1416b33f0(puVar9,&DAT_14629b210,uVar8);
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_70 + 1;
        lVar4 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar2 = (int *)((longlong)local_70 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_70 + 8))(local_70,1);
          }
        }
      }
      puVar9 = *param_2;
      uVar8 = (**(code **)(*(longlong *)(param_1 + 0x90) + 0x18))
                        ((longlong *)(param_1 + 0x90),local_68,param_3,param_4);
      FUN_1416b33f0(puVar9,&DAT_14629b220,uVar8);
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_60 + 1;
        lVar4 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)local_60 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
      puVar9 = *param_2;
      uVar8 = (**(code **)(*(longlong *)(param_1 + 0x1a8) + 0x18))
                        ((longlong *)(param_1 + 0x1a8),local_58,param_3,param_4);
      FUN_1416b33f0(puVar9,&DAT_14629b230,uVar8);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_50 + 1;
        lVar4 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
      puVar9 = *param_2;
      uVar8 = (**(code **)(*(longlong *)(param_1 + 0x1f0) + 0x18))
                        ((longlong *)(param_1 + 0x1f0),local_48,param_3,param_4);
      FUN_1416b33f0(puVar9,&DAT_14629b240,uVar8);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_40 + 1;
        lVar4 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
      puVar9 = *param_2;
      uVar8 = (**(code **)(*(longlong *)(param_1 + 0x230) + 0x18))
                        ((longlong *)(param_1 + 0x230),local_38,param_3,param_4);
      FUN_1416b33f0(puVar9,&DAT_14629b250,uVar8);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_30 + 1;
        lVar4 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
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
    }
  }
  return param_2;
}



// FUNCTION 140da3ee0 FUN_140da3ee0 body=238 status=ok
// SIG undefined FUN_140da3ee0(void)

ulonglong FUN_140da3ee0(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined1 local_res8 [32];
  
  if (*(longlong *)(param_1 + 0x198) != 0) {
    uVar4 = FUN_14164ab60();
    FUN_141597530(uVar4,*(undefined8 *)(param_1 + 0x198));
    *(undefined8 *)(param_1 + 0x198) = 0;
  }
  plVar5 = (longlong *)FDateTime::UtcNow(local_res8);
  dVar3 = (double)*(float *)(param_1 + 0x28) * 10000000.0 + 0.5;
  lVar8 = (longlong)dVar3;
  uVar9 = (undefined4)((ulonglong)dVar3 >> 0x20);
  if (0.0 <= dVar3) {
    if ((lVar8 == -0x8000000000000000) || ((double)lVar8 == dVar3)) goto LAB_140da3fa7;
    auVar2._8_4_ = SUB84(dVar3,0);
    auVar2._0_8_ = dVar3;
    auVar2._12_4_ = uVar9;
    uVar7 = movmskpd(0,auVar2);
    uVar6 = -(ulonglong)(uVar7 & 1);
  }
  else {
    if ((lVar8 == -0x8000000000000000) || ((double)lVar8 == dVar3)) goto LAB_140da3fa7;
    auVar1._8_4_ = SUB84(dVar3,0);
    auVar1._0_8_ = dVar3;
    auVar1._12_4_ = uVar9;
    uVar7 = movmskpd(0,auVar1);
    uVar6 = (ulonglong)(uVar7 & 1 ^ 1);
  }
  dVar3 = (double)(longlong)(lVar8 + uVar6);
LAB_140da3fa7:
  if (*plVar5 - *(longlong *)(param_1 + 0x1a0) < (longlong)dVar3) {
    uVar6 = FUN_140d6a1a0();
    return uVar6 & 0xffffffffffffff00;
  }
  uVar6 = FUN_140d6fa20(param_1);
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 140da3fd0 FUN_140da3fd0 body=1862 status=ok
// SIG undefined FUN_140da3fd0(void)

/* WARNING: Removing unreachable block (ram,0x000140da458f) */
/* WARNING: Removing unreachable block (ram,0x000140da4594) */
/* WARNING: Removing unreachable block (ram,0x000140da45a8) */

void FUN_140da3fd0(longlong param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5,
                  undefined4 param_6,char param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 in_stack_fffffffffffffed8;
  undefined4 uVar16;
  longlong *local_118;
  int local_110;
  undefined8 *local_108;
  int local_100;
  undefined4 local_fc;
  int local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8 [2];
  longlong *local_e0;
  longlong *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 *local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong *local_98;
  longlong *local_90;
  undefined8 *local_88;
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  
  uVar16 = (undefined4)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
  iVar5 = FUN_140d844e0();
  lVar13 = (longlong)iVar5;
  if (iVar5 < 0) {
    return;
  }
  if (*(int *)(param_1 + 0x40) <= iVar5) {
    return;
  }
  Online::GetSessionInterface(&local_e0,*(undefined8 *)(param_1 + 0x28));
  plVar15 = local_e0;
  if (local_e0 != (longlong *)0x0) {
    if (param_3 == 1) {
      if (param_7 == '\0') {
        lVar14 = 0;
        local_cc = 0xffffffff;
        local_d0 = 0;
        if (param_4 == 3) {
          lVar12 = 0x10;
        }
        else if (param_4 == 4) {
          lVar12 = 0x20;
        }
        else {
          lVar12 = lVar14;
          if (param_4 == 5) {
            lVar12 = 0x30;
          }
        }
        (**(code **)(*local_e0 + 0x138))
                  (local_e0,param_2,param_4,
                   *(longlong *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x38) + lVar13 * 0x10) + 0x10) + lVar12,
                   &local_d0);
        if (param_4 == 3) {
          lVar14 = 0x10;
        }
        else if (param_4 == 4) {
          lVar14 = 0x20;
        }
        else if (param_4 == 5) {
          lVar14 = 0x30;
        }
        local_f8 = param_4;
        FUN_140d61350(*(longlong *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x38) + lVar13 * 0x10) + 0x10) +
                      lVar14,&local_f8);
        FUN_140d91d00(param_1,param_2);
      }
      else {
        local_c4 = 0xffffffff;
        local_c8 = 0;
        lVar13 = lVar13 * 0x10;
        local_a8 = lVar13;
        (**(code **)(*local_e0 + 0x138))
                  (local_e0,param_2,0,
                   *(undefined8 *)(*(longlong *)(lVar13 + *(longlong *)(param_1 + 0x38)) + 0x10),
                   &local_c8);
        local_f4 = 0;
        FUN_140d61350(*(undefined8 *)(*(longlong *)(lVar13 + *(longlong *)(param_1 + 0x38)) + 0x10),
                      &local_f4);
        local_c0 = 0;
        local_bc = 0xffffffff;
        (**(code **)(*plVar15 + 0x138))
                  (plVar15,param_2,3,
                   *(longlong *)(*(longlong *)(lVar13 + *(longlong *)(param_1 + 0x38)) + 0x10) +
                   0x10,&local_c0);
        local_f0 = 3;
        FUN_140d61350(*(longlong *)(*(longlong *)(lVar13 + *(longlong *)(param_1 + 0x38)) + 0x10) +
                      0x10,&local_f0);
        lVar14 = *(longlong *)(param_1 + 0x38);
        local_108 = (undefined8 *)0x0;
        lVar13 = *(longlong *)(*(longlong *)(lVar13 + lVar14) + 0x10);
        iVar5 = *(int *)(lVar13 + 0x38);
        lVar13 = *(longlong *)(lVar13 + 0x30);
        local_100 = iVar5;
        if (iVar5 == 0) {
          local_fc = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_108,iVar5,0);
          lVar13 = lVar13 - (longlong)local_108;
          puVar11 = local_108;
          do {
            *puVar11 = *(undefined8 *)(lVar13 + (longlong)puVar11);
            lVar14 = *(longlong *)(lVar13 + 8 + (longlong)puVar11);
            puVar11[1] = lVar14;
            if (lVar14 != 0) {
              LOCK();
              *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
              UNLOCK();
            }
            puVar11 = puVar11 + 2;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          lVar14 = *(longlong *)(param_1 + 0x38);
          plVar15 = local_e0;
        }
        iVar5 = local_100;
        local_b8 = 0;
        local_b4 = 0xffffffff;
        lVar13 = *(longlong *)(*(longlong *)(local_a8 + lVar14) + 0x10);
        (**(code **)(*plVar15 + 0x138))(plVar15,param_2,5,lVar13 + 0x30,&local_b8);
        local_ec = 5;
        FUN_140d61350(lVar13 + 0x30,&local_ec);
        if (*(char *)(param_1 + 0x59) != '\0') {
          local_b0 = *(undefined8 **)(lVar13 + 0x30);
          local_88 = local_b0 + (longlong)*(int *)(lVar13 + 0x38) * 2;
          if (local_b0 != local_88) {
            puVar11 = local_108 + (longlong)iVar5 * 2;
            do {
              plVar15 = (longlong *)local_b0[1];
              plVar10 = (longlong *)*local_b0;
              puVar8 = local_108;
              if (plVar15 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                UNLOCK();
              }
              for (; puVar8 != puVar11; puVar8 = puVar8 + 2) {
                plVar3 = (longlong *)*puVar8;
                puVar6 = (undefined8 *)(**(code **)(*plVar10 + 8))(plVar10,local_60);
                puVar6 = (undefined8 *)*puVar6;
                puVar7 = (undefined8 *)(**(code **)(*plVar3 + 8))(plVar3,local_70);
                cVar4 = (**(code **)*puVar6)(puVar6,*puVar7);
                plVar3 = local_68;
                if (local_68 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_68 + 1;
                  lVar13 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar13 == 1) {
                    (**(code **)*local_68)(local_68);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar3 + 0xc);
                    iVar5 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar5 == 1) {
                      (**(code **)(*plVar3 + 8))(plVar3,1);
                    }
                  }
                }
                plVar3 = local_58;
                if (local_58 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_58 + 1;
                  lVar13 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar13 == 1) {
                    (**(code **)*local_58)(local_58);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar3 + 0xc);
                    iVar5 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar5 == 1) {
                      (**(code **)(*plVar3 + 8))(plVar3,1);
                    }
                  }
                }
                if (cVar4 != '\0') {
                  if ((int)((longlong)puVar8 - (longlong)local_108 >> 4) != -1) goto LAB_140da4460;
                  break;
                }
              }
              puVar8 = (undefined8 *)FName::FName(local_80,L"SPARK",1);
              Online::GetSessionInterface(&local_98,*puVar8);
              plVar3 = local_98;
              if (local_98 != (longlong *)0x0) {
                lVar13 = *local_98;
                uVar9 = (**(code **)(*plVar10 + 8))(plVar10,local_50);
                (**(code **)(lVar13 + 0x68))(plVar3,param_2,uVar9);
                plVar10 = local_48;
                if (local_48 != (longlong *)0x0) {
                  LOCK();
                  plVar3 = local_48 + 1;
                  lVar13 = *plVar3;
                  *(int *)plVar3 = (int)*plVar3 + -1;
                  UNLOCK();
                  if ((int)lVar13 == 1) {
                    (**(code **)*local_48)(local_48);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar10 + 0xc);
                    iVar5 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar5 == 1) {
                      (**(code **)(*plVar10 + 8))(plVar10,1);
                    }
                  }
                }
              }
              plVar10 = local_90;
              if (local_90 != (longlong *)0x0) {
                LOCK();
                plVar3 = local_90 + 1;
                lVar13 = *plVar3;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)lVar13 == 1) {
                  (**(code **)*local_90)(local_90);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar10 + 0xc);
                  iVar5 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar5 == 1) {
                    (**(code **)(*local_90 + 8))(local_90,1);
                  }
                }
              }
LAB_140da4460:
              if (plVar15 != (longlong *)0x0) {
                LOCK();
                plVar10 = plVar15 + 1;
                lVar13 = *plVar10;
                *(int *)plVar10 = (int)*plVar10 + -1;
                UNLOCK();
                if ((int)lVar13 == 1) {
                  (**(code **)*plVar15)(plVar15);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar15 + 0xc);
                  iVar5 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar5 == 1) {
                    (**(code **)(*plVar15 + 8))(plVar15,1);
                  }
                }
              }
              local_b0 = local_b0 + 2;
              plVar15 = local_e0;
            } while (local_b0 != local_88);
          }
        }
        lVar13 = local_a8;
        *(undefined1 *)(param_1 + 0x59) = 1;
        local_a0 = 0;
        local_9c = 0xffffffff;
        (**(code **)(*plVar15 + 0x138))
                  (plVar15,param_2,4,
                   *(longlong *)(*(longlong *)(local_a8 + *(longlong *)(param_1 + 0x38)) + 0x10) +
                   0x20,&local_a0);
        local_e8[0] = 4;
        FUN_140d61350(*(longlong *)(*(longlong *)(lVar13 + *(longlong *)(param_1 + 0x38)) + 0x10) +
                      0x20,local_e8);
        TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
        ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_108);
        FUN_140d91d00(param_1,param_2);
      }
    }
    else if ((param_3 == 4) &&
            (lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x38) + lVar13 * 0x10),
            *(char *)(lVar14 + 0x20) == '\0')) {
      *(undefined1 *)(lVar14 + 0x20) = 1;
      local_118 = (longlong *)0x0;
      local_110 = 0;
      plVar15 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 8 + lVar13 * 0x10);
      lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x38) + lVar13 * 0x10);
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
        UNLOCK();
      }
      plVar10 = (longlong *)FMemory::Realloc(0,0x30);
      local_110 = 3;
      local_118 = plVar10;
      if (plVar10 != (longlong *)0x0) {
        *plVar10 = (longlong)&PTR_GetPoolName_1445316f0;
        plVar10[1] = lVar14;
        plVar10[2] = (longlong)plVar15;
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
          UNLOCK();
        }
        plVar10[3] = (longlong)&LAB_140d8d860;
        lVar14 = FDelegateHandle::GenerateNewID();
        plVar10[5] = lVar14;
      }
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar15 + 1;
        lVar14 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar2 = (int *)((longlong)plVar15 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
      lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x38) + lVar13 * 0x10);
      uVar9 = FUN_14164ab60();
      puVar11 = (undefined8 *)
                FUN_14158f860(uVar9,local_78,&local_118,L"FFriendsCache_OnRateLimitEnded",
                              CONCAT44(uVar16,param_6));
      *(undefined8 *)(lVar13 + 0x80) = *puVar11;
      if (local_110 != 0) {
        if (local_118 == (longlong *)0x0) goto LAB_140da46bb;
        (**(code **)(*local_118 + 0x28))(local_118,0);
        if (local_118 != (longlong *)0x0) {
          local_118 = (longlong *)FMemory::Realloc(local_118,0,0);
        }
        local_110 = 0;
      }
      if (local_118 != (longlong *)0x0) {
        FMemory::Free(local_118);
      }
    }
  }
LAB_140da46bb:
  plVar15 = local_d8;
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_d8 + 1;
    lVar13 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_d8 + 8))(local_d8,1);
      }
    }
  }
  return;
}



// FUNCTION 140da4720 FUN_140da4720 body=914 status=ok
// SIG undefined FUN_140da4720(void)

void FUN_140da4720(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar17;
  longlong local_res8;
  longlong local_res10;
  undefined1 local_res18 [8];
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  longlong *plStack_a0;
  longlong local_98;
  longlong *plStack_90;
  longlong local_88 [2];
  longlong *local_78;
  undefined **local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong uVar16;
  
  if ((((*(longlong *)(param_1 + 0x58) == 0) && (0.0 < *(float *)(param_1 + 0x78))) &&
      (iVar8 = *(int *)(param_1 + 0x80), iVar8 != 0)) &&
     ((*(int *)(param_1 + 0x88) != 0 && (*(int *)(param_1 + 0x84) != 0)))) {
    iVar7 = *(int *)(param_1 + 0x38);
    if (iVar8 < iVar7) {
      FUN_1404de5f0(param_1 + 0x30,iVar8,iVar7 - iVar8,1);
      iVar7 = *(int *)(param_1 + 0x38);
    }
    if (iVar7 == 0) {
      FUN_140dd4350();
      return;
    }
    FUN_140dbc800(param_1,&local_a8);
    if ((local_a8 != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
      uVar14 = 0;
      local_b8 = 0;
      local_b0 = 0;
      if (0 < *(int *)(param_1 + 0x84)) {
        local_res8 = 0;
        local_res10 = 0;
        uVar16 = uVar14;
        do {
          if ((local_res8 < 0) || (*(int *)(param_1 + 0x38) <= (int)uVar16)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar4) break;
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10 + local_res10);
          plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8 + local_res10);
          if (lVar2 != 0) {
            LOCK();
            *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
            UNLOCK();
          }
          local_68 = &PTR_FUN_143f740c8;
          local_50 = 0;
          local_48 = 0;
          local_60 = plVar10;
          local_58 = lVar2;
          if ((plVar10 != (longlong *)0x0) &&
             (cVar6 = (**(code **)(*plVar10 + 0x20))(), uVar5 = local_b0, cVar6 != '\0')) {
            lVar17 = (longlong)(int)local_b0;
            iVar8 = (int)local_b0 + 1;
            local_b0 = CONCAT44(local_b0._4_4_,iVar8);
            if (local_b0._4_4_ < iVar8) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_b8,uVar5 & 0xffffffff);
            }
            plVar9 = (longlong *)(lVar17 * 0x10 + local_b8);
            *plVar9 = (longlong)plVar10;
            plVar9[1] = lVar2;
            if (lVar2 != 0) {
              LOCK();
              *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
              UNLOCK();
            }
          }
          FUN_1404bf980(&local_68);
          uVar15 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar15;
          local_res8 = local_res8 + 1;
          local_res10 = local_res10 + 0x28;
        } while ((int)uVar15 < *(int *)(param_1 + 0x84));
        if ((int)local_b0 != 0) {
          lVar2 = *(longlong *)(param_1 + 0x18);
          plVar10 = (longlong *)FMemory::Realloc(0,0x30,0);
          local_78 = plVar10;
          if (plVar10 != (longlong *)0x0) {
            plVar10[1] = param_1;
            *plVar10 = (longlong)&DAT_143f3ed00;
            plVar10[2] = (longlong)&LAB_140d67e34;
            lVar17 = FDelegateHandle::GenerateNewID();
            plVar10[4] = lVar17;
            *plVar10 = (longlong)&PTR_GetPoolName_143f3ed48;
            FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar2 + 0x40,1);
            puVar11 = (ulonglong *)(**(code **)(*plVar10 + 0x20))(plVar10,local_res18);
            iVar8 = *(int *)(lVar2 + 0x48);
            uVar14 = *puVar11;
            *(int *)(lVar2 + 0x48) = iVar8 + 1;
            if (*(int *)(lVar2 + 0x4c) < iVar8 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar2 + 0x40,iVar8);
            }
            puVar12 = (undefined8 *)((longlong)iVar8 * 0x10 + *(longlong *)(lVar2 + 0x40));
            *puVar12 = plVar10;
            *(undefined4 *)(puVar12 + 1) = 3;
          }
          local_98 = local_a8;
          plStack_90 = plStack_a0;
          *(ulonglong *)(param_1 + 0x58) = uVar14;
          if (plStack_a0 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
            UNLOCK();
          }
          uVar3 = *(undefined8 *)(param_1 + 0x18);
          uVar13 = FDateTime::ToIso8601(param_1 + 0x40,local_88);
          FUN_142b769c0(uVar3,&local_98,&local_b8,uVar13,*(undefined4 *)(param_1 + 0x88));
          if (local_88[0] != 0) {
            FMemory::Free();
          }
          plVar10 = plStack_90;
          if (plStack_90 != (longlong *)0x0) {
            LOCK();
            plVar9 = plStack_90 + 1;
            lVar2 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*plStack_90)(plStack_90);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar10 + 8))(plVar10,1);
              }
            }
          }
        }
      }
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_b8);
    }
    if (plStack_a0 != (longlong *)0x0) {
      LOCK();
      plVar10 = plStack_a0 + 1;
      lVar2 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*plStack_a0)(plStack_a0);
        LOCK();
        piVar1 = (int *)((longlong)plStack_a0 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_a0 + 8))(plStack_a0,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140da4ac0 FUN_140da4ac0 body=924 status=ok
// SIG undefined FUN_140da4ac0(void)

void FUN_140da4ac0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined1 local_res8 [8];
  longlong *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  longlong *plStack_a0;
  longlong *local_98;
  longlong *local_90;
  undefined **local_88;
  longlong *local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_58;
  longlong *plStack_50;
  longlong local_48 [2];
  longlong *local_38;
  
  if ((*(longlong *)(param_1 + 0x58) == 0) && (0.0 < *(float *)(param_1 + 0x94))) {
    if (*(int *)(param_1 + 0x38) == 0) {
      FUN_140dd4350();
      return;
    }
    FUN_140dbc800(param_1,&local_a8);
    if ((local_a8 != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
      plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x10);
      local_80 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      uVar10 = 0;
      local_88 = &PTR_FUN_143f740c8;
      local_70 = 0;
      local_68 = 0;
      local_78 = plVar11;
      if ((local_80 != (longlong *)0x0) &&
         (cVar4 = (**(code **)(*local_80 + 0x20))(), cVar4 != '\0')) {
        lVar2 = *(longlong *)(param_1 + 0x18);
        plVar6 = (longlong *)FMemory::Realloc(0,0x30,0);
        local_38 = plVar6;
        if (plVar6 != (longlong *)0x0) {
          plVar6[1] = param_1;
          *plVar6 = (longlong)&DAT_143f3ed00;
          plVar6[2] = (longlong)&LAB_140d67e34;
          lVar7 = FDelegateHandle::GenerateNewID();
          plVar6[4] = lVar7;
          *plVar6 = (longlong)&PTR_GetPoolName_143f3ed48;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar2 + 0x40,1);
          puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x20))(plVar6,local_res8);
          iVar5 = *(int *)(lVar2 + 0x48);
          uVar10 = *puVar8;
          *(int *)(lVar2 + 0x48) = iVar5 + 1;
          if (*(int *)(lVar2 + 0x4c) < iVar5 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar2 + 0x40,iVar5);
          }
          puVar8 = (undefined8 *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar2 + 0x40));
          *puVar8 = plVar6;
          *(undefined4 *)(puVar8 + 1) = 3;
        }
        *(undefined8 *)(param_1 + 0x58) = uVar10;
        local_c8 = (longlong *)0x0;
        local_c0 = 0;
        local_b8 = 0;
        local_b0 = 0xd;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
        lVar2 = local_b8;
        FGenericPlatformString::Memcpy(local_b8,L"FriendStatus",0x1a);
        uVar3 = local_c0;
        lVar7 = (longlong)(int)local_c0;
        iVar5 = (int)local_c0 + 1;
        local_c0 = CONCAT44(local_c0._4_4_,iVar5);
        if (local_c0._4_4_ < iVar5) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_c8,uVar3 & 0xffffffff);
        }
        plVar6 = local_c8 + lVar7 * 2;
        *plVar6 = lVar2;
        *(undefined4 *)(plVar6 + 1) = (undefined4)local_b0;
        *(undefined4 *)((longlong)plVar6 + 0xc) = local_b0._4_4_;
        local_58 = local_a8;
        plStack_50 = plStack_a0;
        local_90 = plVar11;
        if (plStack_a0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
          UNLOCK();
          local_90 = local_78;
        }
        local_98 = local_80;
        if (local_90 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_90 + 1) = (int)local_90[1] + 1;
          UNLOCK();
        }
        uVar10 = *(undefined8 *)(param_1 + 0x18);
        uVar9 = FDateTime::ToIso8601(param_1 + 0x40,local_48);
        FUN_142b76910(uVar10,&local_58,&local_98,uVar9,1,&local_c8);
        if (local_48[0] != 0) {
          FMemory::Free();
        }
        plVar11 = local_90;
        if (local_90 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_90 + 1;
          lVar2 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)*local_90)(local_90);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
        plVar11 = plStack_50;
        if (plStack_50 != (longlong *)0x0) {
          LOCK();
          plVar6 = plStack_50 + 1;
          lVar2 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)*plStack_50)(plStack_50);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
        plVar11 = local_c8;
        for (iVar5 = (int)local_c0; iVar5 != 0; iVar5 = iVar5 + -1) {
          if (*plVar11 != 0) {
            FMemory::Free();
          }
          plVar11 = plVar11 + 2;
        }
        if (local_c8 != (longlong *)0x0) {
          FMemory::Free(local_c8);
        }
      }
      FUN_1404bf980(&local_88);
    }
    if (plStack_a0 != (longlong *)0x0) {
      LOCK();
      plVar11 = plStack_a0 + 1;
      lVar2 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*plStack_a0)(plStack_a0);
        LOCK();
        piVar1 = (int *)((longlong)plStack_a0 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plStack_a0 + 8))(plStack_a0,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140da4e60 FUN_140da4e60 body=535 status=ok
// SIG undefined FUN_140da4e60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140da4e60(longlong *param_1)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  float fVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  longlong local_a8 [2];
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (((longlong *)*param_1 != (longlong *)0x0) &&
     (lVar2 = (**(code **)(*(longlong *)*param_1 + 0x148))(), lVar2 != 0)) {
    if (*(longlong *)(lVar2 + 400) == 0) {
      uVar4 = *(undefined8 *)(lVar2 + 0x3f8);
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
    }
    local_a8[0] = param_1[0xc];
    lVar2 = FTimerManager::FindTimer(uVar4,local_a8,0);
    if ((lVar2 == 0) || (*(char *)(lVar2 + 1) == '\x02')) {
      fVar6 = (float)FGenericPlatformMath::SRand();
      fVar1 = *(float *)(param_1 + 0xd);
      plVar3 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar3 != (longlong *)0x0) {
        plVar3[1] = (longlong)param_1;
        *plVar3 = (longlong)&DAT_143f3ed00;
        plVar3[2] = (longlong)FUN_140da5080;
        lVar2 = FDelegateHandle::GenerateNewID();
        plVar3[4] = lVar2;
        *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
      }
      local_98 = 0;
      local_90 = 0;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,&local_98);
      }
      FWeakObjectPtr::operator=(local_88,0);
      local_b0 = 0xbf800000;
      local_b8 = 1;
      local_80 = 0;
      local_48 = (longlong *)0x0;
      local_38 = 0;
      local_78 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar4,param_1 + 0xc,&local_98,(fVar6 + 1.0) * fVar1);
      if (local_38 != 0) {
        plVar5 = local_68;
        if (local_48 != (longlong *)0x0) {
          plVar5 = local_48;
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5,0);
        }
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
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



// FUNCTION 140da5080 FUN_140da5080 body=112 status=ok
// SIG undefined FUN_140da5080(void)

void FUN_140da5080(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*param_1 != 0) {
    cVar1 = FUN_140bca6c0();
    if (cVar1 == '\0') {
      lVar2 = (**(code **)(*(longlong *)*param_1 + 0x148))();
      if (lVar2 != 0) {
        if (*(longlong *)(lVar2 + 400) == 0) {
          uVar3 = *(undefined8 *)(lVar2 + 0x3f8);
        }
        else {
          uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
        }
        FUN_142880530(uVar3,param_1 + 0xc);
        param_1[0xc] = 0;
        FUN_140bf8330(*param_1);
      }
    }
  }
  return;
}



// FUNCTION 140da50f0 FUN_140da50f0 body=156 status=ok
// SIG undefined FUN_140da50f0(void)

undefined8 * FUN_140da50f0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_1445541a0;
  param_1[1] = *param_2;
  param_1[9] = 0;
  plVar1 = (longlong *)param_2[8];
  if (plVar1 != (longlong *)0x0) {
    if (plVar1 == param_2 + 1) {
      uVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_1 + 2);
      param_1[9] = uVar2;
      plVar1 = (longlong *)param_2[8];
      if (plVar1 == (longlong *)0x0) goto LAB_140da5166;
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2 + 1);
    }
    else {
      param_1[9] = plVar1;
    }
    param_2[8] = 0;
  }
LAB_140da5166:
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 9);
  param_1[0xb] = param_2[10];
  return param_1;
}



// FUNCTION 140da5190 FUN_140da5190 body=289 status=ok
// SIG undefined FUN_140da5190(void)

undefined8 *
FUN_140da5190(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 local_res10 [8];
  longlong *local_28;
  int local_20;
  
  plVar2 = (longlong *)FUN_1405317f0(&local_28,param_3,param_4);
  *param_2 = 0;
  if (((int)plVar2[1] != 0) && (*plVar2 != 0)) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,1);
    uVar5 = 0;
    if (((int)plVar2[1] != 0) &&
       (plVar4 = (longlong *)*plVar2, uVar5 = 0, plVar4 != (longlong *)0x0)) {
      puVar3 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res10);
      uVar5 = *puVar3;
    }
    iVar1 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
    }
    *param_2 = uVar5;
    plVar4 = (longlong *)((longlong)iVar1 * 0x10 + *param_1);
    *plVar4 = 0;
    *plVar4 = *plVar2;
    *plVar2 = 0;
    *(int *)(plVar4 + 1) = (int)plVar2[1];
    *(undefined4 *)(plVar2 + 1) = 0;
  }
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return param_2;
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
  return param_2;
}



// FUNCTION 140da52c0 FUN_140da52c0 body=169 status=ok
// SIG undefined FUN_140da52c0(void)

void FUN_140da52c0(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  puVar2 = (undefined1 *)*param_1;
  if (param_3 != 0) {
    puVar1 = (undefined4 *)(param_2 + 4);
    do {
      *puVar2 = *(undefined1 *)(puVar1 + -1);
      puVar2[1] = *(undefined1 *)((longlong)puVar1 + -3);
      *(undefined4 *)(puVar2 + 4) = *puVar1;
      FString::FString(puVar2 + 8,puVar1 + 1);
      FText::FText(puVar2 + 0x18,puVar1 + 5);
      puVar2 = puVar2 + 0x30;
      puVar1 = puVar1 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140da5370 FUN_140da5370 body=260 status=ok
// SIG undefined FUN_140da5370(void)

void FUN_140da5370(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  longlong lVar6;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy
            (param_1,param_3 + param_5,param_4);
  lVar6 = *param_1;
  if (param_3 != 0) {
    puVar5 = (undefined1 *)(param_2 + 0x10);
    do {
      FString::FString(lVar6,puVar5 + -0x10);
      *(undefined1 *)(lVar6 + 0x10) = *puVar5;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      iVar4 = *(int *)(puVar5 + 0x10);
      lVar1 = *(longlong *)(puVar5 + 8);
      *(int *)(lVar6 + 0x20) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(lVar6 + 0x24) = 0;
      }
      else {
        TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(lVar6 + 0x18,iVar4,0);
        puVar2 = (undefined1 *)(lVar1 + 0x10);
        puVar3 = *(undefined8 **)(lVar6 + 0x18);
        do {
          *puVar3 = *(undefined8 *)(puVar2 + -0x10);
          puVar3[1] = *(undefined8 *)(puVar2 + -8);
          *(undefined1 *)(puVar3 + 2) = *puVar2;
          *(undefined4 *)((longlong)puVar3 + 0x14) = *(undefined4 *)(puVar2 + 4);
          iVar4 = iVar4 + -1;
          puVar2 = puVar2 + 0x18;
          puVar3 = puVar3 + 3;
        } while (iVar4 != 0);
      }
      lVar6 = lVar6 + 0x28;
      puVar5 = puVar5 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140da5480 FUN_140da5480 body=423 status=ok
// SIG undefined FUN_140da5480(void)

longlong FUN_140da5480(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar7 = *(longlong **)(param_1 + 0x238);
  plVar2 = plVar7 + *(int *)(param_1 + 0x240);
  for (; plVar7 != plVar2; plVar7 = plVar7 + 1) {
    if ((*plVar7 != 0) && (*(longlong *)(*plVar7 + 0xc0) == param_2)) goto LAB_140da54fb;
  }
  plVar7 = *(longlong **)(param_1 + 0x248);
  plVar2 = plVar7 + *(int *)(param_1 + 0x250);
  for (; (plVar7 != plVar2 && ((*plVar7 == 0 || (*(longlong *)(*plVar7 + 0xc0) != param_2))));
      plVar7 = plVar7 + 1) {
  }
LAB_140da54fb:
  lVar3 = FWeakObjectPtr::Get(param_1 + 600);
  if (lVar3 == 0) {
    return 0;
  }
  uVar4 = ULocalPlayer::GetPrivateStaticClass();
  uVar5 = FWeakObjectPtr::Get(param_1 + 600);
  FUN_1417846f0(uVar5,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  lVar3 = FUN_1417985e0(uVar4,uVar5,0,0,0,0,0,0,0);
  *(longlong *)(lVar3 + 0xc0) = param_2;
  FUN_1404c3560(param_1,lVar3);
  plVar6 = (longlong *)(param_1 + 0x248);
  plVar2 = (longlong *)*plVar6;
  iVar1 = *(int *)(param_1 + 0x250);
  plVar7 = plVar2;
  do {
    if (plVar7 == plVar2 + iVar1) {
LAB_140da55ec:
      *(int *)(param_1 + 0x250) = iVar1 + 1;
      if (*(int *)(param_1 + 0x254) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6,iVar1);
      }
      *(longlong *)((longlong)iVar1 * 8 + *plVar6) = lVar3;
      return lVar3;
    }
    if (*plVar7 == lVar3) {
      if ((int)((longlong)plVar7 - (longlong)plVar2 >> 3) != -1) {
        return lVar3;
      }
      goto LAB_140da55ec;
    }
    plVar7 = plVar7 + 1;
  } while( true );
}



// FUNCTION 140da5630 FUN_140da5630 body=472 status=ok
// SIG undefined FUN_140da5630(void)

longlong * FUN_140da5630(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  
  plVar1 = (longlong *)(param_1 + 0x238);
  plVar10 = (longlong *)*plVar1;
  plVar8 = plVar10 + *(int *)(param_1 + 0x240);
  for (; plVar10 != plVar8; plVar10 = plVar10 + 1) {
    if ((*plVar10 != 0) && (*(longlong *)(*plVar10 + 0xc0) == param_2)) goto LAB_140da56b1;
  }
  plVar10 = *(longlong **)(param_1 + 0x248);
  plVar8 = plVar10 + *(int *)(param_1 + 0x250);
  for (; (plVar10 != plVar8 && ((*plVar10 == 0 || (*(longlong *)(*plVar10 + 0xc0) != param_2))));
      plVar10 = plVar10 + 1) {
  }
LAB_140da56b1:
  lVar5 = FWeakObjectPtr::Get(param_1 + 600);
  if (lVar5 == 0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    uVar6 = FUN_14142ad10();
    uVar7 = FWeakObjectPtr::Get(param_1 + 600);
    FUN_1417846f0(uVar7,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    plVar8 = (longlong *)FUN_1417985e0(uVar6,uVar7,0,0,0,0,0,0,0);
    plVar8[0x18] = param_2;
    FUN_1404c3b70(param_1,plVar8);
    cVar4 = (**(code **)(*plVar8 + 0x2d0))(plVar8,param_3,param_4);
    if (cVar4 == '\0') {
      (**(code **)(*plVar8 + 0x288))(plVar8);
    }
    else {
      puVar3 = (undefined8 *)*plVar1;
      iVar2 = *(int *)(param_1 + 0x240);
      for (puVar9 = puVar3; puVar9 != puVar3 + iVar2; puVar9 = puVar9 + 1) {
        if ((longlong *)*puVar9 == plVar8) {
          if ((int)((longlong)puVar9 - (longlong)puVar3 >> 3) != -1) {
            return plVar8;
          }
          break;
        }
      }
      *(int *)(param_1 + 0x240) = iVar2 + 1;
      if (*(int *)(param_1 + 0x244) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
      }
      *(longlong **)((longlong)iVar2 * 8 + *plVar1) = plVar8;
    }
  }
  return plVar8;
}



// FUNCTION 140da5810 FUN_140da5810 body=347 status=ok
// SIG undefined FUN_140da5810(void)

undefined8 * FUN_140da5810(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined1 local_28 [8];
  longlong *local_20;
  
  puVar5 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2,local_28);
  plVar3 = (longlong *)puVar5[1];
  uVar6 = *puVar5;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  puVar5 = (undefined8 *)operator_new(0x30,param_1);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_GetPoolName_1445542e0;
    puVar5[1] = uVar6;
    puVar5[2] = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
    }
    puVar5[3] = param_3;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[5] = uVar6;
    *puVar5 = &PTR_GetPoolName_144554328;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      piVar7 = (int *)((longlong)plVar3 + 0xc);
      LOCK();
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
    piVar7 = (int *)((longlong)plVar3 + 0xc);
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
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
      piVar7 = (int *)((longlong)local_20 + 0xc);
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140da5970 FUN_140da5970 body=347 status=ok
// SIG undefined FUN_140da5970(void)

undefined8 * FUN_140da5970(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined1 local_28 [8];
  longlong *local_20;
  
  puVar5 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2,local_28);
  plVar3 = (longlong *)puVar5[1];
  uVar6 = *puVar5;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  puVar5 = (undefined8 *)operator_new(0x30,param_1);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_GetPoolName_144554250;
    puVar5[1] = uVar6;
    puVar5[2] = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
    }
    puVar5[3] = param_3;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[5] = uVar6;
    *puVar5 = &PTR_GetPoolName_144554298;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      piVar7 = (int *)((longlong)plVar3 + 0xc);
      LOCK();
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
    piVar7 = (int *)((longlong)plVar3 + 0xc);
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
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
      piVar7 = (int *)((longlong)local_20 + 0xc);
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140da5ad0 FUN_140da5ad0 body=347 status=ok
// SIG undefined FUN_140da5ad0(void)

undefined8 * FUN_140da5ad0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined1 local_28 [8];
  longlong *local_20;
  
  puVar5 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2,local_28);
  plVar3 = (longlong *)puVar5[1];
  uVar6 = *puVar5;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  puVar5 = (undefined8 *)operator_new(0x30,param_1);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_GetPoolName_144553e70;
    puVar5[1] = uVar6;
    puVar5[2] = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
    }
    puVar5[3] = param_3;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[5] = uVar6;
    *puVar5 = &PTR_GetPoolName_144553eb8;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      piVar7 = (int *)((longlong)plVar3 + 0xc);
      LOCK();
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
    piVar7 = (int *)((longlong)plVar3 + 0xc);
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
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
      piVar7 = (int *)((longlong)local_20 + 0xc);
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140da5c30 FUN_140da5c30 body=347 status=ok
// SIG undefined FUN_140da5c30(void)

undefined8 * FUN_140da5c30(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined1 local_28 [8];
  longlong *local_20;
  
  puVar5 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2,local_28);
  plVar3 = (longlong *)puVar5[1];
  uVar6 = *puVar5;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  puVar5 = (undefined8 *)operator_new(0x30,param_1);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_GetPoolName_144553f90;
    puVar5[1] = uVar6;
    puVar5[2] = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
    }
    puVar5[3] = param_3;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[5] = uVar6;
    *puVar5 = &PTR_GetPoolName_144553fd8;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      piVar7 = (int *)((longlong)plVar3 + 0xc);
      LOCK();
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
    piVar7 = (int *)((longlong)plVar3 + 0xc);
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
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
      piVar7 = (int *)((longlong)local_20 + 0xc);
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140da5d90 FUN_140da5d90 body=347 status=ok
// SIG undefined FUN_140da5d90(void)

undefined8 * FUN_140da5d90(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined1 local_28 [8];
  longlong *local_20;
  
  puVar5 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2,local_28);
  plVar3 = (longlong *)puVar5[1];
  uVar6 = *puVar5;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  puVar5 = (undefined8 *)operator_new(0x30,param_1);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_GetPoolName_144553f00;
    puVar5[1] = uVar6;
    puVar5[2] = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
    }
    puVar5[3] = param_3;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[5] = uVar6;
    *puVar5 = &PTR_GetPoolName_144553f48;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      piVar7 = (int *)((longlong)plVar3 + 0xc);
      LOCK();
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
    piVar7 = (int *)((longlong)plVar3 + 0xc);
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
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
      piVar7 = (int *)((longlong)local_20 + 0xc);
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140da5ef0 FUN_140da5ef0 body=347 status=ok
// SIG undefined FUN_140da5ef0(void)

undefined8 * FUN_140da5ef0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined1 local_28 [8];
  longlong *local_20;
  
  puVar5 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2,local_28);
  plVar3 = (longlong *)puVar5[1];
  uVar6 = *puVar5;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  puVar5 = (undefined8 *)operator_new(0x30,param_1);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_GetPoolName_144554020;
    puVar5[1] = uVar6;
    puVar5[2] = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
    }
    puVar5[3] = param_3;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[5] = uVar6;
    *puVar5 = &PTR_GetPoolName_144554068;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      piVar7 = (int *)((longlong)plVar3 + 0xc);
      LOCK();
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
    piVar7 = (int *)((longlong)plVar3 + 0xc);
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
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
      piVar7 = (int *)((longlong)local_20 + 0xc);
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140da6050 FUN_140da6050 body=337 status=ok
// SIG undefined FUN_140da6050(void)

undefined8 * FUN_140da6050(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined1 local_28 [8];
  longlong *local_20;
  
  puVar5 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2,local_28);
  plVar3 = (longlong *)puVar5[1];
  uVar6 = *puVar5;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  puVar5 = (undefined8 *)operator_new(0x30,param_1);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_GetPoolName_1445316f0;
    puVar5[1] = uVar6;
    puVar5[2] = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
    }
    puVar5[3] = param_3;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[5] = uVar6;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      piVar7 = (int *)((longlong)plVar3 + 0xc);
      LOCK();
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
    piVar7 = (int *)((longlong)plVar3 + 0xc);
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
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
      piVar7 = (int *)((longlong)local_20 + 0xc);
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140da61b0 FUN_140da61b0 body=794 status=ok
// SIG undefined FUN_140da61b0(void)

int * FUN_140da61b0(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  void *_Dst;
  uint uVar13;
  undefined8 *_Src;
  bool bVar14;
  
  iVar12 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar7 * 0x38 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + *param_1) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar10 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  lVar11 = *param_3;
  _Src = (undefined8 *)((longlong)iVar7 * 0x38 + *param_1);
  puVar3 = (undefined8 *)param_3[1];
  *_Src = &PTR_FUN_143f73d18;
  _Src[1] = *(undefined8 *)(lVar11 + 8);
  lVar11 = *(longlong *)(lVar11 + 0x10);
  _Src[2] = lVar11;
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
  }
  bVar14 = false;
  *_Src = &PTR_FUN_143f740c8;
  _Src[3] = 0;
  _Src[4] = 0;
  _Src[5] = *puVar3;
  *(undefined4 *)(_Src + 6) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      if (((longlong *)_Src[1] == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*(longlong *)_Src[1] + 0x20))(), cVar5 == '\0')) {
        bVar14 = false;
      }
      else {
        bVar14 = true;
      }
      if (bVar14) {
        iVar7 = GetTypeHash(_Src[1]);
      }
      else {
        iVar7 = -1;
      }
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar7) * 4);
      if (iVar7 != -1) {
        lVar11 = *param_1;
        do {
          cVar5 = FUniqueNetIdWrapper::operator==(lVar11 + (longlong)iVar7 * 0x38,_Src);
          if (cVar5 != '\0') goto LAB_140da6367;
          lVar11 = *param_1;
          iVar7 = *(int *)((longlong)iVar7 * 0x38 + 0x30 + lVar11);
        } while (iVar7 != -1);
      }
    }
    iVar7 = -1;
LAB_140da6367:
    bVar14 = iVar7 != -1;
    if (bVar14) {
      _Dst = (void *)((longlong)iVar7 * 0x38 + *param_1);
      FUN_1404bf980(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x30);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar7;
      goto LAB_140da649d;
    }
  }
  uVar9 = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar13) {
    uVar8 = (uVar13 >> 1) + 8;
    iVar12 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar5 = '\0';
    if (uVar8 != 0) {
      iVar7 = 0x1f - iVar12;
    }
    uVar8 = (uVar13 >> 1) + 7;
    iVar12 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar8 != 0) {
      cVar5 = '\x1f' - (char)iVar12;
    }
    iVar12 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar5 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar12 <= (int)param_1[9])))) {
    iVar12 = *param_2;
    if (((longlong *)_Src[1] == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*(longlong *)_Src[1] + 0x20))(), cVar5 == '\0')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      uVar9 = GetTypeHash(_Src[1]);
    }
    uVar9 = (int)param_1[9] - 1U & uVar9;
    *(uint *)((longlong)_Src + 0x34) = uVar9;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 6) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         iVar12;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    FUN_140d480d0(param_1);
  }
LAB_140da649d:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar14;
  }
  return param_2;
}



// FUNCTION 140da64d0 FUN_140da64d0 body=51 status=ok
// SIG undefined FUN_140da64d0(void)

longlong FUN_140da64d0(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)ULevelSequenceBurnInOptions::GetPrivateStaticClass();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  return lVar2;
}



// FUNCTION 140da6510 FUN_140da6510 body=809 status=ok
// SIG undefined FUN_140da6510(void)

int FUN_140da6510(longlong *param_1,undefined8 param_2)

{
  wchar_t _C;
  int iVar1;
  char cVar2;
  wint_t wVar3;
  wint_t wVar4;
  int iVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  bool bVar9;
  undefined8 *puVar10;
  wchar_t *pwVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  int iVar14;
  longlong lVar15;
  void *_Src;
  longlong lVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  longlong lVar20;
  bool bVar21;
  int local_res20;
  undefined2 *local_50;
  undefined8 local_48;
  
  iVar1 = (int)param_1[1];
  lVar15 = (longlong)iVar1;
  bVar19 = false;
  if (iVar1 == 0) {
    return 0;
  }
  local_res20 = 0;
  cVar2 = FUN_140dae110(param_2,*param_1);
  bVar21 = cVar2 == '\0';
  lVar20 = 0;
  puVar8 = local_50;
  iVar17 = 0;
  while( true ) {
    lVar20 = lVar20 + 1;
    iVar18 = iVar17 + 1;
    if (lVar20 < lVar15) break;
LAB_140da6760:
    iVar14 = iVar18 - iVar17;
    if (bVar21 == false) {
      plVar12 = (longlong *)((longlong)iVar17 * 0x10 + *param_1);
      for (; iVar14 != 0; iVar14 = iVar14 + -1) {
        if (*plVar12 != 0) {
          FMemory::Free();
        }
        plVar12 = plVar12 + 2;
      }
    }
    else {
      if (local_res20 != iVar17) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)local_res20 * 0x10 + *param_1),
                   (void *)((longlong)iVar17 * 0x10 + *param_1),(longlong)iVar14 << 4);
      }
      local_res20 = local_res20 + iVar14;
    }
    bVar21 = (bool)(bVar21 ^ 1);
    iVar17 = iVar18;
    if (lVar15 <= lVar20) {
      *(int *)(param_1 + 1) = local_res20;
      return iVar1 - local_res20;
    }
  }
  lVar16 = lVar20 * 0x10;
LAB_140da65d0:
  puVar13 = (undefined2 *)0x0;
  puVar10 = (undefined8 *)(*param_1 + lVar16);
  lVar6 = FUN_140db9720(puVar10);
  if ((lVar6 != 0) && (cVar2 = FUN_140dc18f0(lVar6), cVar2 != '\0')) {
    bVar19 = true;
    lVar6 = FUN_140db9720(puVar10);
    if (lVar6 == 0) {
      puVar8 = &DAT_143f3eda8;
      if (DAT_14686f3c8 != 0) {
        puVar8 = DAT_14686f3c0;
      }
      if (*(int *)(puVar10 + 1) == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = (undefined2 *)*puVar10;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar8);
      _Src = DAT_14686f400;
      iVar14 = DAT_14686f408;
      if (iVar5 == 0) goto LAB_140da6661;
      local_48 = 0;
    }
    else {
      _Src = *(void **)(lVar6 + 0x40);
      iVar14 = *(int *)(lVar6 + 0x48);
LAB_140da6661:
      local_50 = (undefined2 *)0x0;
      local_48 = CONCAT44(local_48._4_4_,iVar14);
      if (iVar14 == 0) {
        local_48 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_50,iVar14,0);
        puVar13 = local_50;
        _guard_xfg_dispatch_icall_nop(local_50,_Src,(longlong)iVar14 * 2);
      }
      puVar7 = puVar13;
      if ((int)local_48 != 0) goto LAB_140da66b4;
    }
    puVar7 = &DAT_143f3eda8;
LAB_140da66b4:
    pwVar11 = L"campaign";
    do {
      _C = *(wchar_t *)((longlong)(puVar7 + -0xa22a9868) + (longlong)pwVar11);
      puVar8 = puVar13;
      if ((_C == L'\0') && (*pwVar11 == L'\0')) goto LAB_140da66fb;
      if (_C != *pwVar11) {
        wVar3 = towlower(_C);
        wVar4 = towlower(*pwVar11);
        if (wVar3 != wVar4) goto LAB_140da66f1;
      }
      pwVar11 = pwVar11 + 1;
    } while( true );
  }
  goto LAB_140da670f;
LAB_140da66f1:
  if (wVar3 == wVar4) {
LAB_140da66fb:
    bVar9 = true;
  }
  else {
LAB_140da670f:
    bVar9 = false;
  }
  if ((bVar19) && (bVar19 = false, puVar8 != (undefined2 *)0x0)) {
    FMemory::Free(puVar8);
  }
  if (bVar21 != bVar9) goto LAB_140da6760;
  iVar18 = iVar18 + 1;
  lVar20 = lVar20 + 1;
  lVar16 = lVar16 + 0x10;
  if (lVar15 <= lVar20) goto LAB_140da6760;
  goto LAB_140da65d0;
}



// FUNCTION 140da6840 FUN_140da6840 body=643 status=ok
// SIG undefined FUN_140da6840(void)

int FUN_140da6840(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  bool bVar17;
  
  iVar3 = (int)param_1[1];
  lVar12 = (longlong)iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  uVar10 = 0;
  iVar9 = 0;
  cVar8 = FUN_140dae290(param_2,*param_1);
  bVar17 = cVar8 == '\0';
  uVar16 = uVar10;
  do {
    iVar15 = (int)uVar10;
    uVar16 = uVar16 + 1;
    uVar10 = (ulonglong)(iVar15 + 1);
    if ((longlong)uVar16 < lVar12) {
      lVar11 = uVar16 * 0x30;
      do {
        lVar4 = *param_1;
        plVar5 = (longlong *)((longlong *)*param_2)[1];
        plVar6 = *(longlong **)*param_2;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        lVar2 = lVar4 + lVar11;
        plVar7 = *(longlong **)(lVar4 + 0x10 + lVar11);
        if ((((plVar7 == (longlong *)0x0) ||
             (cVar8 = (**(code **)(*plVar7 + 0x20))(), cVar8 == '\0')) ||
            (plVar6 == (longlong *)0x0)) ||
           (cVar8 = (**(code **)(*plVar6 + 0x20))(plVar6), cVar8 == '\0')) {
          bVar13 = false;
        }
        else {
          bVar13 = true;
        }
        plVar7 = *(longlong **)(lVar2 + 0x10);
        if ((((plVar7 == (longlong *)0x0) ||
             (cVar8 = (**(code **)(*plVar7 + 0x20))(), cVar8 == '\0')) &&
            ((plVar6 == (longlong *)0x0 ||
             (cVar8 = (**(code **)(*plVar6 + 0x20))(plVar6), cVar8 == '\0')))) ||
           ((bVar13 &&
            (cVar8 = (**(code **)*plVar6)(plVar6,*(undefined8 *)(lVar2 + 0x10)), cVar8 != '\0')))) {
          bVar13 = false;
        }
        else {
          bVar13 = true;
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar5 + 1;
          lVar4 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        if (bVar17 != bVar13) break;
        uVar10 = (ulonglong)((int)uVar10 + 1);
        uVar16 = uVar16 + 1;
        lVar11 = lVar11 + 0x30;
      } while ((longlong)uVar16 < lVar12);
    }
    iVar14 = (int)uVar10 - iVar15;
    if (bVar17 == false) {
      if (iVar14 != 0) {
        lVar11 = (longlong)iVar15 * 0x30 + 8 + *param_1;
        do {
          FUN_1404bf980(lVar11);
          lVar11 = lVar11 + 0x30;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
    }
    else {
      if (iVar9 != iVar15) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar9 * 0x30 + *param_1),
                   (void *)((longlong)iVar15 * 0x30 + *param_1),(longlong)iVar14 * 0x30);
      }
      iVar9 = iVar9 + iVar14;
    }
    bVar17 = (bool)(bVar17 ^ 1);
    if (lVar12 <= (longlong)uVar16) {
      *(int *)(param_1 + 1) = iVar9;
      return iVar3 - iVar9;
    }
  } while( true );
}



// FUNCTION 140da6ad0 FUN_140da6ad0 body=287 status=ok
// SIG undefined FUN_140da6ad0(void)

void FUN_140da6ad0(longlong *param_1,char param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 local_res8 [8];
  undefined4 local_res18 [2];
  longlong local_118;
  longlong *local_110;
  byte local_ef;
  longlong local_88;
  byte local_30;
  longlong local_28;
  longlong local_18;
  
  local_res18[0] = param_3;
  FUN_1423e4ec0(&local_118,param_1,0);
  local_30 = local_30 & 0xdf | param_2 << 5;
  if ((undefined4 *)local_110[1] < (undefined4 *)*local_110 + 1) {
    (**(code **)(local_118 + 0x50))(&local_118,local_res18,4);
    if ((local_ef & 0x10) != 0) {
      FArchive::ByteSwap(&local_118,local_res18,4);
    }
  }
  else {
    local_res18[0] = *(undefined4 *)*local_110;
    *local_110 = *local_110 + 4;
  }
  FUN_14158ce90(&local_118,param_4);
  (**(code **)(*param_1 + 0x2c8))(param_1,local_res8,&local_118,0);
  if (local_18 != 0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(&local_118);
  return;
}



// FUNCTION 140da6bf0 FUN_140da6bf0 body=324 status=ok
// SIG undefined FUN_140da6bf0(void)

void FUN_140da6bf0(longlong *param_1,char param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined1 local_res8 [8];
  undefined4 local_res18 [2];
  longlong local_118;
  longlong *local_110;
  byte local_ef;
  longlong local_88;
  byte local_30;
  longlong local_28;
  longlong local_18;
  
  local_res18[0] = param_3;
  FUN_1423e4ec0(&local_118,param_1,0);
  local_30 = local_30 & 0xdf | param_2 << 5;
  if ((undefined4 *)local_110[1] < (undefined4 *)*local_110 + 1) {
    (**(code **)(local_118 + 0x50))(&local_118,local_res18,4);
    if ((local_ef & 0x10) != 0) {
      FArchive::ByteSwap(&local_118,local_res18,4);
    }
  }
  else {
    local_res18[0] = *(undefined4 *)*local_110;
    *local_110 = *local_110 + 4;
  }
  if ((undefined1 *)local_110[1] < (undefined1 *)*local_110 + 1) {
    (**(code **)(local_118 + 0x50))(&local_118,param_4,1);
  }
  else {
    *param_4 = *(undefined1 *)*local_110;
    *local_110 = *local_110 + 1;
  }
  (**(code **)(*param_1 + 0x2c8))(param_1,local_res8,&local_118,0);
  if (local_18 != 0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(&local_118);
  return;
}



// FUNCTION 140da6d40 FUN_140da6d40 body=515 status=ok
// SIG undefined FUN_140da6d40(void)

void FUN_140da6d40(longlong param_1,char param_2,undefined4 param_3,undefined4 *param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 local_res8 [2];
  undefined1 local_148 [16];
  longlong local_138;
  longlong *local_130;
  byte local_10f;
  longlong local_a8;
  byte local_50;
  longlong local_48;
  longlong local_38;
  
  if ((*(longlong **)(param_1 + 0x48) != (longlong *)0x0) &&
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x390))(), cVar3 != '\0')) {
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x98);
    plVar1 = plVar6 + *(int *)(*(longlong *)(param_1 + 0x48) + 0xa0);
    for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      if ((*plVar6 != 0) &&
         (plVar4 = (longlong *)FUN_1425bd330(*plVar6,6), plVar4 != (longlong *)0x0)) {
        lVar5 = FUN_1404e6fc0();
        if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          local_res8[0] = param_3;
          FUN_1423e4ec0(&local_138,plVar4,0);
          local_50 = local_50 & 0xdf | param_2 << 5;
          if ((undefined4 *)local_130[1] < (undefined4 *)*local_130 + 1) {
            (**(code **)(local_138 + 0x50))(&local_138,local_res8,4);
            if ((local_10f & 0x10) != 0) {
              FArchive::ByteSwap(&local_138,local_res8,4);
            }
          }
          else {
            local_res8[0] = *(undefined4 *)*local_130;
            *local_130 = *local_130 + 4;
          }
          if ((undefined4 *)local_130[1] < (undefined4 *)*local_130 + 1) {
            (**(code **)(local_138 + 0x50))(&local_138,param_4,4);
            if ((local_10f & 0x10) != 0) {
              FArchive::ByteSwap(&local_138,param_4,4);
            }
          }
          else {
            *param_4 = *(undefined4 *)*local_130;
            *local_130 = *local_130 + 4;
          }
          (**(code **)(*plVar4 + 0x2c8))(plVar4,local_148,&local_138,0);
          if (local_38 != 0) {
            FMemory::Free();
          }
          if (local_48 != 0) {
            FMemory::Free();
          }
          if (local_a8 != 0) {
            FMemory::Free();
          }
          FArchive::~FArchive(&local_138);
        }
      }
    }
  }
  return;
}



// FUNCTION 140da6f50 FUN_140da6f50 body=493 status=ok
// SIG undefined FUN_140da6f50(void)

void FUN_140da6f50(longlong param_1,char param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 local_res8 [2];
  undefined1 local_138 [16];
  longlong local_128;
  longlong *local_120;
  byte local_ff;
  longlong local_98;
  byte local_40;
  longlong local_38;
  longlong local_28;
  
  if ((*(longlong **)(param_1 + 0x48) != (longlong *)0x0) &&
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x390))(), cVar3 != '\0')) {
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x98);
    plVar1 = plVar6 + *(int *)(*(longlong *)(param_1 + 0x48) + 0xa0);
    for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      if ((*plVar6 != 0) &&
         (plVar4 = (longlong *)FUN_1425bd330(*plVar6,6), plVar4 != (longlong *)0x0)) {
        lVar5 = FUN_1404e6fc0();
        if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          local_res8[0] = param_3;
          FUN_1423e4ec0(&local_128,plVar4,0);
          local_40 = param_2 << 5 | local_40 & 0xdf;
          if ((undefined4 *)local_120[1] < (undefined4 *)*local_120 + 1) {
            (**(code **)(local_128 + 0x50))(&local_128,local_res8,4);
            if ((local_ff & 0x10) != 0) {
              FArchive::ByteSwap(&local_128,local_res8,4);
            }
          }
          else {
            local_res8[0] = *(undefined4 *)*local_120;
            *local_120 = *local_120 + 4;
          }
          FUN_1425da060(&local_128,param_4);
          (**(code **)(*plVar4 + 0x2c8))(plVar4,local_138,&local_128,0);
          if (local_28 != 0) {
            FMemory::Free();
          }
          if (local_38 != 0) {
            FMemory::Free();
          }
          if (local_98 != 0) {
            FMemory::Free();
          }
          FArchive::~FArchive(&local_128);
        }
      }
    }
  }
  return;
}



// FUNCTION 140da7140 FUN_140da7140 body=493 status=ok
// SIG undefined FUN_140da7140(void)

void FUN_140da7140(longlong param_1,char param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 local_res8 [2];
  undefined1 local_138 [16];
  longlong local_128;
  longlong *local_120;
  byte local_ff;
  longlong local_98;
  byte local_40;
  longlong local_38;
  longlong local_28;
  
  if ((*(longlong **)(param_1 + 0x48) != (longlong *)0x0) &&
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x390))(), cVar3 != '\0')) {
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x98);
    plVar1 = plVar6 + *(int *)(*(longlong *)(param_1 + 0x48) + 0xa0);
    for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      if ((*plVar6 != 0) &&
         (plVar4 = (longlong *)FUN_1425bd330(*plVar6,6), plVar4 != (longlong *)0x0)) {
        lVar5 = FUN_1404e6fc0();
        if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          local_res8[0] = param_3;
          FUN_1423e4ec0(&local_128,plVar4,0);
          local_40 = param_2 << 5 | local_40 & 0xdf;
          if ((undefined4 *)local_120[1] < (undefined4 *)*local_120 + 1) {
            (**(code **)(local_128 + 0x50))(&local_128,local_res8,4);
            if ((local_ff & 0x10) != 0) {
              FArchive::ByteSwap(&local_128,local_res8,4);
            }
          }
          else {
            local_res8[0] = *(undefined4 *)*local_120;
            *local_120 = *local_120 + 4;
          }
          FUN_140daa0d0(&local_128,param_4);
          (**(code **)(*plVar4 + 0x2c8))(plVar4,local_138,&local_128,0);
          if (local_28 != 0) {
            FMemory::Free();
          }
          if (local_38 != 0) {
            FMemory::Free();
          }
          if (local_98 != 0) {
            FMemory::Free();
          }
          FArchive::~FArchive(&local_128);
        }
      }
    }
  }
  return;
}



// FUNCTION 140da7330 FUN_140da7330 body=545 status=ok
// SIG undefined FUN_140da7330(void)

void FUN_140da7330(longlong param_1,char param_2,undefined4 param_3,longlong param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 local_res8 [2];
  undefined1 local_138 [16];
  longlong local_128;
  longlong *local_120;
  byte local_ff;
  longlong local_98;
  byte local_40;
  longlong local_38;
  longlong local_28;
  
  if ((*(longlong **)(param_1 + 0x48) != (longlong *)0x0) &&
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x390))(), cVar3 != '\0')) {
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x98);
    plVar1 = plVar6 + *(int *)(*(longlong *)(param_1 + 0x48) + 0xa0);
    for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      if ((*plVar6 != 0) &&
         (plVar4 = (longlong *)FUN_1425bd330(*plVar6,6), plVar4 != (longlong *)0x0)) {
        lVar5 = FUN_1404e6fc0();
        if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          local_res8[0] = param_3;
          FUN_1423e4ec0(&local_128,plVar4,0);
          local_40 = param_2 << 5 | local_40 & 0xdf;
          if ((undefined4 *)local_120[1] < (undefined4 *)*local_120 + 1) {
            (**(code **)(local_128 + 0x50))(&local_128,local_res8,4);
            if ((local_ff & 0x10) != 0) {
              FArchive::ByteSwap(&local_128,local_res8,4);
            }
          }
          else {
            local_res8[0] = *(undefined4 *)*local_120;
            *local_120 = *local_120 + 4;
          }
          FUN_1425da060(&local_128,param_4);
          if ((undefined1 *)local_120[1] < (undefined1 *)*local_120 + 1) {
            (**(code **)(local_128 + 0x50))(&local_128,(undefined1 *)(param_4 + 0x28),1);
          }
          else {
            *(undefined1 *)(param_4 + 0x28) = *(undefined1 *)*local_120;
            *local_120 = *local_120 + 1;
          }
          (**(code **)(*plVar4 + 0x2c8))(plVar4,local_138,&local_128,0);
          if (local_28 != 0) {
            FMemory::Free();
          }
          if (local_38 != 0) {
            FMemory::Free();
          }
          if (local_98 != 0) {
            FMemory::Free();
          }
          FArchive::~FArchive(&local_128);
        }
      }
    }
  }
  return;
}



// FUNCTION 140da7560 FUN_140da7560 body=617 status=ok
// SIG undefined FUN_140da7560(void)

void FUN_140da7560(longlong param_1,char param_2,undefined4 param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 local_res8 [2];
  undefined1 local_148 [16];
  longlong local_138;
  longlong *local_130;
  byte local_10f;
  longlong local_a8;
  byte local_50;
  longlong local_48;
  longlong local_38;
  
  if ((*(longlong **)(param_1 + 0x48) != (longlong *)0x0) &&
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x390))(), cVar3 != '\0')) {
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x98);
    plVar1 = plVar6 + *(int *)(*(longlong *)(param_1 + 0x48) + 0xa0);
    for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      if ((*plVar6 != 0) &&
         (plVar4 = (longlong *)FUN_1425bd330(*plVar6,6), plVar4 != (longlong *)0x0)) {
        lVar5 = FUN_1404e6fc0();
        if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          local_res8[0] = param_3;
          FUN_1423e4ec0(&local_138,plVar4,0);
          local_50 = local_50 & 0xdf | param_2 << 5;
          if ((undefined4 *)local_130[1] < (undefined4 *)*local_130 + 1) {
            (**(code **)(local_138 + 0x50))(&local_138,local_res8,4);
            if ((local_10f & 0x10) != 0) {
              FArchive::ByteSwap(&local_138,local_res8,4);
            }
          }
          else {
            local_res8[0] = *(undefined4 *)*local_130;
            *local_130 = *local_130 + 4;
          }
          if ((undefined4 *)local_130[1] < (undefined4 *)*local_130 + 1) {
            (**(code **)(local_138 + 0x50))(&local_138,param_4,4);
            if ((local_10f & 0x10) != 0) {
              FArchive::ByteSwap(&local_138,param_4,4);
            }
          }
          else {
            *param_4 = *(undefined4 *)*local_130;
            *local_130 = *local_130 + 4;
          }
          if ((undefined4 *)local_130[1] < (undefined4 *)*local_130 + 1) {
            (**(code **)(local_138 + 0x50))(&local_138,param_5,4);
            if ((local_10f & 0x10) != 0) {
              FArchive::ByteSwap(&local_138,param_5,4);
            }
          }
          else {
            *param_5 = *(undefined4 *)*local_130;
            *local_130 = *local_130 + 4;
          }
          (**(code **)(*plVar4 + 0x2c8))(plVar4,local_148,&local_138,0);
          if (local_38 != 0) {
            FMemory::Free();
          }
          if (local_48 != 0) {
            FMemory::Free();
          }
          if (local_a8 != 0) {
            FMemory::Free();
          }
          FArchive::~FArchive(&local_138);
        }
      }
    }
  }
  return;
}



// FUNCTION 140da77d0 FUN_140da77d0 body=148 status=ok
// SIG undefined FUN_140da77d0(void)

void FUN_140da77d0(longlong param_1,undefined1 param_2,undefined4 param_3,undefined8 param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 200) != 0) &&
     (lVar2 = FUN_1425bd330(*(longlong *)(param_1 + 200),6), lVar2 != 0)) {
    lVar3 = FUN_1404e6fc0();
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
      FUN_1404bbf80(lVar2,param_2,param_3,param_4);
    }
  }
  return;
}



// FUNCTION 140da7870 FUN_140da7870 body=305 status=ok
// SIG undefined FUN_140da7870(void)

void FUN_140da7870(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined2 local_res8 [4];
  
  if ((((int)param_1[4] - 2U & 0xfffffff5) != 0) || ((int)param_1[4] == 10)) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  }
  FUN_140dd77d0(param_1[1]);
  plVar1 = (longlong *)param_1[1];
  if (0 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    uVar2 = (ulonglong)*(uint *)((longlong)param_1 + 0x24);
    do {
      local_res8[0] = 9;
      (**(code **)(*plVar1 + 0x50))(plVar1,local_res8,2);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  (**(code **)(*param_1 + 0x18))(param_1,param_3);
  *(undefined4 *)(param_1 + 4) = 7;
  if (*param_3 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 140da79b0 FAtomCueNameTrackKeyframe body=16 status=ok
// SIG undefined FAtomCueNameTrackKeyframe(void)

undefined4 * FAtomCueNameTrackKeyframe::FAtomCueNameTrackKeyframe(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  return param_1;
}



// FUNCTION 140da79c0 FUN_140da79c0 body=543 status=ok
// SIG undefined FUN_140da79c0(void)

undefined8 *
FUN_140da79c0(undefined8 *param_1,undefined8 *param_2,undefined1 param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144550eb0;
  puVar3 = (undefined8 *)0x0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  iVar4 = *(int *)(param_2 + 1);
  param_2 = (undefined8 *)*param_2;
  *(int *)(param_1 + 5) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 4,iVar4,0);
    puVar2 = (undefined8 *)param_1[4];
    do {
      *puVar2 = *param_2;
      lVar5 = param_2[1];
      puVar2[1] = lVar5;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      puVar2 = puVar2 + 2;
      param_2 = param_2 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined1 *)((longlong)param_1 + 0x32) = param_5;
  param_1[7] = param_6;
  *(undefined1 *)(param_1 + 6) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x31) = param_4;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  param_1[0x2b] = 0;
  uVar1 = (**(code **)(*(longlong *)param_1[7] + 0x148))();
  uVar1 = FUN_140d3a420(uVar1);
  param_1[8] = uVar1;
  puVar2 = (undefined8 *)operator_new(0x20);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar3 = puVar2;
  }
  iVar4 = DAT_14686f4b0;
  lVar5 = (longlong)DAT_14686f4b0;
  DAT_14686f4b0 = DAT_14686f4b0 + 1;
  if (DAT_14686f4b4 < DAT_14686f4b0) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_14686f4a8,iVar4);
  }
  *(undefined8 **)(DAT_14686f4a8 + lVar5 * 8) = puVar3;
  param_1[9] = puVar3;
  *(undefined4 *)(param_1 + 10) = 9;
  return param_1;
}



// FUNCTION 140da7be0 FUN_140da7be0 body=151 status=ok
// SIG undefined FUN_140da7be0(void)

undefined8 * FUN_140da7be0(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  iVar3 = *(int *)(param_2 + 1);
  param_2 = (undefined8 *)*param_2;
  *(int *)(param_1 + 3) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    param_1[4] = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 2,iVar3,0);
    puVar2 = (undefined8 *)param_1[2];
    do {
      *puVar2 = *param_2;
      lVar1 = param_2[1];
      puVar2[1] = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      puVar2 = puVar2 + 2;
      param_2 = param_2 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    param_1[4] = 0;
  }
  return param_1;
}



// FUNCTION 140da7c80 FUN_140da7c80 body=673 status=ok
// SIG undefined FUN_140da7c80(void)

undefined8 * FUN_140da7c80(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong *local_38;
  int local_30;
  longlong *local_28;
  longlong *local_20;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 2;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 2;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 2;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 2;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 2;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 2;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 2;
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
  puVar4 = (undefined8 *)FName::FName(local_res8,L"SPARK",1);
  FUN_1404d0c50(&local_28,*puVar4);
  if (local_28 != (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_30 = 3;
    local_38 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      plVar5[1] = (longlong)param_1;
      *plVar5 = (longlong)&DAT_143f3ed00;
      plVar5[2] = (longlong)&LAB_140dca180;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar5[4] = lVar6;
      *plVar5 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    puVar4 = (undefined8 *)(**(code **)(*local_28 + 0x1e8))(local_28,local_res10,&local_38);
    param_1[0x35] = *puVar4;
    if (local_30 != 0) {
      if (local_38 == (longlong *)0x0) goto LAB_140da7ed2;
      (**(code **)(*local_38 + 0x28))(local_38,0);
      if (local_38 != (longlong *)0x0) {
        local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
      }
      local_30 = 0;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
LAB_140da7ed2:
  plVar5 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140da7f30 FUN_140da7f30 body=1019 status=ok
// SIG undefined FUN_140da7f30(void)

undefined8 * FUN_140da7f30(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0xffffffff;
  *(undefined2 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = &PTR_FUN_143f769a8;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = &PTR_FUN_143f769a0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined2 *)(param_1 + 0x2d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 9999;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = &PTR_FUN_143f769a8;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = &PTR_FUN_143f769a0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined2 *)(param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 9999;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined2 *)(param_1 + 0x5b) = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  param_1[0x5e] = 0;
  *(undefined1 *)(param_1 + 0x5f) = 1;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 2;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 2;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x8e) = 0;
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  param_1[0x91] = 0;
  *(undefined4 *)(param_1 + 0x92) = 0;
  FWeakObjectPtr::operator=();
  return param_1;
}



// FUNCTION 140da8330 FUN_140da8330 body=289 status=ok
// SIG undefined FUN_140da8330(void)

undefined8 * FUN_140da8330(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_144550a58;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = &PTR_FUN_143f769a8;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = &PTR_FUN_143f769a0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 9999;
  FWeakObjectPtr::operator=(param_1 + 0x1d,0);
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *param_1 = &PTR_FUN_144550a58;
  FWeakObjectPtr::operator=(param_1 + 0x1d,param_2);
  param_1[0x1e] = param_3;
  return param_1;
}



// FUNCTION 140da8460 FUN_140da8460 body=180 status=ok
// SIG undefined FUN_140da8460(void)

longlong FUN_140da8460(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_140da85c0();
  FText::FText(param_1 + 0xb8);
  FText::FText(param_1 + 0xd0);
  FUN_141606040(&DAT_14629b790,param_1 + 0x20,param_1 + 0xb8,0);
  FUN_141606040(&DAT_14629b790,param_1 + 0x30,param_1 + 0xd0,0);
  lVar1 = *(longlong *)(param_1 + 0x90);
  lVar2 = (longlong)*(int *)(param_1 + 0x98) * 0x30 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x30) {
    FUN_141606040(&DAT_14629b790,lVar1 + 8,lVar1 + 0x18,0);
  }
  return param_1;
}



// FUNCTION 140da8520 FUN_140da8520 body=151 status=ok
// SIG undefined FUN_140da8520(void)

void * FUN_140da8520(void *param_1)

{
  _guard_xfg_dispatch_icall_nop(param_1,0,0xb8);
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  FText::FText((longlong)param_1 + 0xb8);
  FText::FText((longlong)param_1 + 0xd0);
  return param_1;
}



// FUNCTION 140da85c0 FUN_140da85c0 body=512 status=ok
// SIG undefined FUN_140da85c0(void)

longlong FUN_140da85c0(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  
  FString::FString();
  FString::FString(param_1 + 0x10,param_2 + 0x10);
  FString::FString(param_1 + 0x20,param_2 + 0x20);
  FString::FString(param_1 + 0x30,param_2 + 0x30);
  FString::FString(param_1 + 0x40,param_2 + 0x40);
  FString::FString(param_1 + 0x50,param_2 + 0x50);
  FString::FString(param_1 + 0x60,param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x70) = 0;
  FUN_140da5370((undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_2 + 0x70),
                *(undefined4 *)(param_2 + 0x78),0,0);
  *(undefined8 *)(param_1 + 0x80) = 0;
  iVar5 = *(int *)(param_2 + 0x88);
  puVar6 = *(undefined8 **)(param_2 + 0x80);
  *(int *)(param_1 + 0x88) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x80,iVar5,0);
    puVar3 = *(undefined8 **)(param_1 + 0x80);
    do {
      *puVar3 = 0;
      iVar1 = *(int *)(puVar6 + 1);
      _Src = (void *)*puVar6;
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar3,_Src,(longlong)iVar1 * 2);
      }
      puVar3 = puVar3 + 2;
      puVar6 = puVar6 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  iVar5 = *(int *)(param_2 + 0x98);
  lVar2 = *(longlong *)(param_2 + 0x90);
  *(int *)(param_1 + 0x98) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  else {
    TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(param_1 + 0x90,iVar5,0);
    puVar4 = *(undefined1 **)(param_1 + 0x90);
    puVar7 = (undefined4 *)(lVar2 + 4);
    do {
      *puVar4 = *(undefined1 *)(puVar7 + -1);
      puVar4[1] = *(undefined1 *)((longlong)puVar7 + -3);
      *(undefined4 *)(puVar4 + 4) = *puVar7;
      FString::FString(puVar4 + 8,puVar7 + 1);
      FText::FText(puVar4 + 0x18,puVar7 + 5);
      puVar4 = puVar4 + 0x30;
      puVar7 = puVar7 + 0xc;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  FUN_140b945a0((undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_2 + 0xa8),
                *(undefined4 *)(param_2 + 0xb0),0,0);
  return param_1;
}



// FUNCTION 140da87c0 FUN_140da87c0 body=234 status=ok
// SIG undefined FUN_140da87c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140da87c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_143f740c8;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = &PTR_FUN_143f740c8;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 1;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined2 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa2) = 0;
  uVar1 = _DAT_1464aa6e8;
  *(undefined8 *)((longlong)param_1 + 0xa4) = _DAT_1464aa6e0;
  *(undefined8 *)((longlong)param_1 + 0xac) = uVar1;
  uVar1 = _DAT_1464aa6e8;
  *(undefined8 *)((longlong)param_1 + 0xb4) = _DAT_1464aa6e0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = uVar1;
  uVar2 = _DAT_1464aa6e8;
  uVar1 = _DAT_1464aa6e0;
  *(undefined2 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0xcc) = uVar2;
  uVar1 = _DAT_1464aa6e8;
  param_1[0x1b] = _DAT_1464aa6e0;
  param_1[0x1c] = uVar1;
  uVar1 = _DAT_1464aa6e8;
  param_1[0x1d] = _DAT_1464aa6e0;
  param_1[0x1e] = uVar1;
  uVar1 = _DAT_1464aa6e8;
  param_1[0x1f] = _DAT_1464aa6e0;
  param_1[0x20] = uVar1;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  return param_1;
}



// FUNCTION 140da88b0 FUN_140da88b0 body=85 status=ok
// SIG undefined FUN_140da88b0(void)

undefined8 * FUN_140da88b0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  param_1[4] = &PTR_FUN_14452f998;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14452f9a0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  return param_1;
}



// FUNCTION 140da8910 FUN_140da8910 body=289 status=ok
// SIG undefined FUN_140da8910(void)

undefined8 * FUN_140da8910(undefined8 *param_1,char *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  longlong local_18 [2];
  
  *(undefined4 *)(param_1 + 2) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x15) = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined1 *)((longlong)param_1 + 0x19) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_143f769a0;
  param_1[1] = 4;
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  *(bool *)(param_1 + 2) = *param_2 == '\x01';
  *(bool *)((longlong)param_1 + 0x12) = *param_2 == '\x01';
  *(bool *)((longlong)param_1 + 0x15) = *param_2 == '\x02';
  cVar1 = param_2[1];
  if (cVar1 == '\0') {
    *(undefined2 *)((longlong)param_1 + 0x17) = 1;
  }
  else if (cVar1 == '\x01') {
    *(undefined2 *)((longlong)param_1 + 0x17) = 0;
  }
  else if (cVar1 == '\x02') {
    *(undefined2 *)((longlong)param_1 + 0x17) = 0x101;
  }
  local_18[0] = 0;
  local_18[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xb,"OakSession",0xb,0x3f);
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SESSIONTEMPLATENAME",1);
  FUN_1404ab4c0(param_1,*puVar2,local_18,0);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140da8a40 FUN_140da8a40 body=33 status=ok
// SIG undefined FUN_140da8a40(void)

undefined8 * FUN_140da8a40(undefined8 *param_1)

{
  FUN_1404e8890();
  *param_1 = &PTR_FUN_143f769a0;
  return param_1;
}



// FUNCTION 140da8a70 FUN_140da8a70 body=225 status=ok
// SIG undefined FUN_140da8a70(void)

undefined8 *
FUN_140da8a70(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_144550e68;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  iVar3 = *(int *)(param_2 + 1);
  param_2 = (undefined8 *)*param_2;
  *(int *)(param_1 + 5) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 4,iVar3,0);
    puVar2 = (undefined8 *)param_1[4];
    do {
      *puVar2 = *param_2;
      lVar1 = param_2[1];
      puVar2[1] = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      puVar2 = puVar2 + 2;
      param_2 = param_2 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined1 *)((longlong)param_1 + 0x34) = param_4;
  *(undefined4 *)(param_1 + 6) = param_3;
  *(undefined4 *)(param_1 + 7) = 1;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 140da8b60 FUN_140da8b60 body=170 status=ok
// SIG undefined FUN_140da8b60(void)

undefined8 * FUN_140da8b60(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_144551c30;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  return param_1;
}



// FUNCTION 140da8c10 FUN_140da8c10 body=92 status=ok
// SIG undefined FUN_140da8c10(void)

undefined8 * FUN_140da8c10(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1404be420();
  *param_1 = &PTR__scalar_deleting_destructor__1445530e8;
  param_1[5] = &PTR_LAB_143f75da8;
  param_1[6] = &PTR_StartProfileThreadUsage_1445533c8;
  uVar1 = UXSparseGridManager::GetPrivateStaticClass();
  param_1[0x1c] = uVar1;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    FUN_1404cccc0(param_1,L"OakClientFriendBeaconDriver");
  }
  return param_1;
}



// FUNCTION 140da8c70 FUN_140da8c70 body=154 status=ok
// SIG undefined FUN_140da8c70(void)

undefined8 * FUN_140da8c70(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1404be420();
  *(undefined1 *)(param_1 + 0x33) = 0;
  *param_1 = &PTR_FUN_144551290;
  param_1[5] = &PTR_LAB_143f75da8;
  param_1[6] = &PTR_StartProfileThreadUsage_144551570;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  uVar1 = FUN_14142a8f0();
  param_1[0x1c] = uVar1;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    FUN_1404cccc0(param_1,L"OakClientLobbyBeaconDriver");
  }
  return param_1;
}



// FUNCTION 140da8d10 FUN_140da8d10 body=134 status=ok
// SIG undefined FUN_140da8d10(void)

undefined8 * FUN_140da8d10(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1404be420();
  *param_1 = &PTR_FUN_144551908;
  param_1[5] = &PTR_LAB_143f75da8;
  param_1[6] = &PTR_StartProfileThreadUsage_144551be8;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  uVar1 = FUN_14142ad10();
  param_1[0x1c] = uVar1;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    FUN_1404cccc0(param_1,L"OakClientMatchmakingBeaconDriver");
  }
  return param_1;
}



// FUNCTION 140da8da0 FUN_140da8da0 body=154 status=ok
// SIG undefined FUN_140da8da0(void)

undefined8 * FUN_140da8da0(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  
  FUN_1417818c0();
  puVar1 = param_1 + 5;
  *puVar1 = &PTR__purecall_143f740d8;
  plVar3 = (longlong *)FUN_1404cfca0();
  iVar2 = (int)plVar3[1];
  *(int *)(plVar3 + 1) = iVar2 + 1;
  if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar2);
  }
  *(undefined8 **)(*plVar3 + (longlong)iVar2 * 8) = puVar1;
  *param_1 = &PTR_FUN_144553750;
  *puVar1 = &PTR_FUN_1445539c8;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return param_1;
}



// FUNCTION 140da8e40 FUN_140da8e40 body=80 status=ok
// SIG undefined FUN_140da8e40(void)

undefined8 * FUN_140da8e40(undefined8 *param_1)

{
  FUN_1404be540();
  *param_1 = &PTR_FUN_144553410;
  param_1[5] = &PTR_LAB_143f75a60;
  param_1[6] = &PTR_FUN_144553708;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    FUN_1404cccc0(param_1,L"OakHostFriendBeaconDriver");
  }
  return param_1;
}



// FUNCTION 140da8e90 FUN_140da8e90 body=128 status=ok
// SIG undefined FUN_140da8e90(void)

undefined8 * FUN_140da8e90(undefined8 *param_1)

{
  FUN_1404be540();
  *param_1 = &PTR_FUN_144550f50;
  param_1[5] = &PTR_LAB_143f75a60;
  param_1[6] = &PTR_FUN_144551248;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    FUN_1404cccc0(param_1,L"OakHostLobbyBeaconDriver");
  }
  return param_1;
}



// FUNCTION 140da8f10 FUN_140da8f10 body=109 status=ok
// SIG undefined FUN_140da8f10(void)

undefined8 * FUN_140da8f10(undefined8 *param_1)

{
  FUN_1404be540();
  *param_1 = &PTR_FUN_1445515c8;
  param_1[5] = &PTR_LAB_143f75a60;
  param_1[6] = &PTR_FUN_1445518c0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    FUN_1404cccc0(param_1,L"OakHostMatchmakingBeaconDriver");
  }
  return param_1;
}



// FUNCTION 140da8f80 FUN_140da8f80 body=143 status=ok
// SIG undefined FUN_140da8f80(void)

undefined8 * FUN_140da8f80(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_1404be810(param_1,uVar1);
  *param_1 = &PTR_FUN_144553a10;
  FText::FText(param_1 + 0x33);
  FText::FText(param_1 + 0x36);
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  uVar1 = FUN_1404b03b0();
  FText::operator=(param_1 + 0x33,uVar1);
  uVar1 = FUN_1404b03b0();
  FText::operator=(param_1 + 0x36,uVar1);
  return param_1;
}



// FUNCTION 140da9010 FUN_140da9010 body=307 status=ok
// SIG undefined FUN_140da9010(void)

void FUN_140da9010(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      FUN_140b9c620(plVar4 + 0x15);
      TArray<FCommandListCommandItem,TSizedDefaultAllocator<32>_>::
      ~TArray<FCommandListCommandItem,TSizedDefaultAllocator<32>_>(plVar4 + 0x12);
      iVar3 = (int)plVar4[0x11];
      plVar1 = (longlong *)plVar4[0x10];
      if (iVar3 != 0) {
        do {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          plVar1 = plVar1 + 2;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        plVar1 = (longlong *)plVar4[0x10];
      }
      if (plVar1 != (longlong *)0x0) {
        FMemory::Free(plVar1);
      }
      FUN_140b9c8c0(plVar4 + 0xe);
      if (plVar4[0xc] != 0) {
        FMemory::Free();
      }
      if (plVar4[10] != 0) {
        FMemory::Free();
      }
      if (plVar4[8] != 0) {
        FMemory::Free();
      }
      if (plVar4[6] != 0) {
        FMemory::Free();
      }
      if (plVar4[4] != 0) {
        FMemory::Free();
      }
      if (plVar4[2] != 0) {
        FMemory::Free();
      }
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 0x17;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar4 = (longlong *)*param_1;
  }
  if (plVar4 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar4);
  return;
}



// FUNCTION 140da9150 FUN_140da9150 body=354 status=ok
// SIG undefined FUN_140da9150(void)

void FUN_140da9150(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__144550eb0;
  if (param_1[9] != 0) {
    FUN_140db7f10();
    param_1[9] = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x27] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<TSharedRef<FString,1>,unsigned_short>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x1f,0);
  if (param_1[0x23] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1f] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<TSharedRef<FString,1>,unsigned_short>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x15,0);
  if (param_1[0x19] != 0) {
    FMemory::Free();
  }
  if (param_1[0x15] != 0) {
    FMemory::Free();
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x13);
  plVar4 = (longlong *)param_1[0xe];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
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
  plVar4 = (longlong *)param_1[0xc];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
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
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 4);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 2);
  *param_1 = &PTR_FUN_144550e08;
  return;
}



// FUNCTION 140da92c0 FUN_140da92c0 body=31 status=ok
// SIG undefined FUN_140da92c0(void)

void FUN_140da92c0(longlong param_1)

{
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x10);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1);
  return;
}



// FUNCTION 140da92e0 FUN_140da92e0 body=381 status=ok
// SIG undefined FUN_140da92e0(void)

void FUN_140da92e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  longlong *local_18;
  longlong *local_10;
  
  puVar6 = (undefined8 *)FName::FName(local_res8,L"SPARK",1);
  FUN_1404d0c50(&local_18,*puVar6);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x1f0))(local_18,param_1 + 0x1a8);
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
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  FUN_140d22d30(param_1 + 0x158);
  *(undefined4 *)(param_1 + 0x150) = 0;
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FMemory::Free();
  }
  FUN_140d22d30(param_1 + 0x108);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0xd0);
  plVar4 = *(longlong **)(param_1 + 200);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
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
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xa8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x90);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x78);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x60);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x48);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x30);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x18);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1);
  return;
}



// FUNCTION 140da9460 FUN_140da9460 body=115 status=ok
// SIG undefined FUN_140da9460(void)

void FUN_140da9460(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x20);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
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
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 140da94e0 FUN_140da94e0 body=205 status=ok
// SIG undefined FUN_140da94e0(void)

void FUN_140da94e0(longlong param_1)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x188);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x178);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x168);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x158);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x148);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x138);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x128);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x118);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x108);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xf8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xe8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x98);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x88);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x78);
  FUN_1404bec90(param_1 + 0x60);
  FUN_1404bf750(param_1 + 0x30);
  FUN_141782120(param_1);
  return;
}



// FUNCTION 140da95b0 FUN_140da95b0 body=193 status=ok
// SIG undefined FUN_140da95b0(void)

void FUN_140da95b0(longlong param_1)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x160);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x150);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x140);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x130);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x120);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x110);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x100);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xf0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xe0);
  FUN_1404bed10(param_1 + 0xd0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x98);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x88);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x78);
  FUN_1404bec90(param_1 + 0x60);
  FUN_1404bf750(param_1 + 0x30);
  FUN_141782120(param_1);
  return;
}



// FUNCTION 140da9680 FUN_140da9680 body=269 status=ok
// SIG undefined FUN_140da9680(void)

longlong * FUN_140da9680(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  if (param_1 != param_2) {
    iVar6 = (int)param_1[1];
    if (iVar6 != 0) {
      plVar7 = (longlong *)(*param_1 + 0x28);
      do {
        if (plVar7[2] != 0) {
          FMemory::Free();
        }
        plVar4 = (longlong *)*plVar7;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
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
        plVar4 = (longlong *)plVar7[-3];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
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
        plVar7 = plVar7 + 9;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    FUN_140b945a0(param_1,*param_2,(int)param_2[1],*(undefined4 *)((longlong)param_1 + 0xc),0);
  }
  return param_1;
}



// FUNCTION 140da9790 FUN_140da9790 body=468 status=ok
// SIG undefined FUN_140da9790(void)

longlong * FUN_140da9790(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int *piVar9;
  
  if (param_1 != param_2) {
    puVar4 = (undefined8 *)*param_1;
    for (iVar6 = (int)param_1[1]; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar4 = &PTR_FUN_143f74338;
      FUN_1404bebc0(puVar4 + 6);
      FUN_1404bf980(puVar4 + 1);
      puVar4 = puVar4 + 8;
    }
    iVar6 = (int)param_2[1];
    lVar1 = *param_2;
    *(int *)(param_1 + 1) = iVar6;
    if ((iVar6 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(param_1,iVar6);
      puVar4 = (undefined8 *)*param_1;
      if (iVar6 != 0) {
        piVar9 = (int *)(lVar1 + 0x38);
        puVar7 = puVar4 + 5;
        do {
          *puVar4 = &PTR_FUN_143f74338;
          puVar7[-4] = &PTR_FUN_143f73d18;
          puVar7[-3] = *(undefined8 *)(piVar9 + -10);
          lVar1 = *(longlong *)(piVar9 + -8);
          puVar7[-2] = lVar1;
          if (lVar1 != 0) {
            LOCK();
            *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
            UNLOCK();
          }
          puVar7[-4] = &PTR_FUN_143f740c8;
          puVar7[-1] = 0;
          *puVar7 = 0;
          puVar7[1] = 0;
          iVar5 = *piVar9;
          lVar1 = *(longlong *)(piVar9 + -2);
          *(int *)(puVar7 + 2) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)((longlong)puVar7 + 0x14) = 0;
          }
          else {
            TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy
                      (puVar7 + 1,iVar5,0);
            puVar3 = (undefined8 *)puVar7[1];
            puVar8 = (undefined8 *)(lVar1 + 8);
            puVar2 = puVar3 + 4;
            do {
              *puVar3 = &PTR_FUN_143f73d18;
              puVar2[-3] = *puVar8;
              lVar1 = puVar8[1];
              puVar2[-2] = lVar1;
              if (lVar1 != 0) {
                LOCK();
                *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
                UNLOCK();
              }
              *puVar3 = &PTR_FUN_143f740c8;
              puVar8 = puVar8 + 5;
              puVar2[-1] = 0;
              puVar3 = puVar3 + 5;
              *puVar2 = 0;
              puVar2 = puVar2 + 5;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          puVar4 = puVar4 + 8;
          puVar7 = puVar7 + 8;
          piVar9 = piVar9 + 0x10;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 140da9970 FUN_140da9970 body=1059 status=ok
// SIG undefined FUN_140da9970(void)

longlong * FUN_140da9970(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  plVar1 = param_2 + 2;
  plVar2 = param_1 + 2;
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
  }
  plVar1 = param_2 + 4;
  plVar2 = param_1 + 4;
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
  }
  plVar1 = param_2 + 6;
  plVar2 = param_1 + 6;
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 7) = (int)param_2[7];
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
    param_2[7] = 0;
  }
  plVar1 = param_2 + 8;
  plVar2 = param_1 + 8;
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 9) = (int)param_2[9];
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
    param_2[9] = 0;
  }
  plVar1 = param_2 + 10;
  plVar2 = param_1 + 10;
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 0xb) = (int)param_2[0xb];
    *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
    param_2[0xb] = 0;
  }
  plVar1 = param_2 + 0xc;
  plVar2 = param_1 + 0xc;
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 0xd) = (int)param_2[0xd];
    *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
    param_2[0xd] = 0;
  }
  plVar1 = param_2 + 0xe;
  plVar2 = param_1 + 0xe;
  if (plVar2 != plVar1) {
    iVar9 = (int)param_1[0xf];
    plVar8 = (longlong *)*plVar2;
    if (iVar9 != 0) {
      do {
        if (plVar8[3] != 0) {
          FMemory::Free();
        }
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 5;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      plVar8 = (longlong *)*plVar2;
    }
    if (plVar8 != (longlong *)0x0) {
      FMemory::Free(plVar8);
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 0xf) = (int)param_2[0xf];
    *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
    param_2[0xf] = 0;
  }
  plVar1 = param_2 + 0x10;
  plVar2 = param_1 + 0x10;
  if (plVar2 != plVar1) {
    iVar9 = (int)param_1[0x11];
    plVar8 = (longlong *)*plVar2;
    if (iVar9 != 0) {
      do {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 2;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      plVar8 = (longlong *)*plVar2;
    }
    if (plVar8 != (longlong *)0x0) {
      FMemory::Free(plVar8);
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 0x11) = (int)param_2[0x11];
    *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x8c);
    param_2[0x11] = 0;
  }
  plVar1 = param_2 + 0x12;
  plVar2 = param_1 + 0x12;
  if (plVar2 != plVar1) {
    iVar9 = (int)param_1[0x13];
    lVar7 = *plVar2;
    if (iVar9 != 0) {
      plVar8 = (longlong *)(lVar7 + 8);
      do {
        plVar6 = (longlong *)plVar8[3];
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar6 + 1;
          lVar7 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar4 = (int *)((longlong)plVar6 + 0xc);
            iVar5 = *piVar4;
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 6;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      lVar7 = *plVar2;
    }
    if (lVar7 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 0x13) = (int)param_2[0x13];
    *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x9c);
    param_2[0x13] = 0;
  }
  plVar1 = param_2 + 0x15;
  plVar2 = param_1 + 0x15;
  *(int *)(param_1 + 0x14) = (int)param_2[0x14];
  *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_2 + 0xa4);
  if (plVar2 != plVar1) {
    iVar9 = (int)param_1[0x16];
    lVar7 = *plVar2;
    if (iVar9 != 0) {
      plVar8 = (longlong *)(lVar7 + 0x28);
      do {
        if (plVar8[2] != 0) {
          FMemory::Free();
        }
        plVar6 = (longlong *)*plVar8;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar6 + 1;
          lVar7 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar4 = (int *)((longlong)plVar6 + 0xc);
            iVar5 = *piVar4;
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
        plVar6 = (longlong *)plVar8[-3];
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar6 + 1;
          lVar7 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar4 = (int *)((longlong)plVar6 + 0xc);
            iVar5 = *piVar4;
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
        plVar8 = plVar8 + 9;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      lVar7 = *plVar2;
    }
    if (lVar7 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 0x16) = (int)param_2[0x16];
    *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)((longlong)param_2 + 0xb4);
    param_2[0x16] = 0;
  }
  return param_1;
}



// FUNCTION 140da9da0 FUN_140da9da0 body=451 status=ok
// SIG undefined FUN_140da9da0(void)

longlong FUN_140da9da0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  
  FString::operator=();
  FString::operator=(param_1 + 0x10,param_2 + 0x10);
  FString::operator=(param_1 + 0x20,param_2 + 0x20);
  FString::operator=(param_1 + 0x30,param_2 + 0x30);
  FString::operator=(param_1 + 0x40,param_2 + 0x40);
  FString::operator=(param_1 + 0x50,param_2 + 0x50);
  FString::operator=(param_1 + 0x60,param_2 + 0x60);
  puVar1 = (undefined8 *)(param_1 + 0x70);
  if (puVar1 != (undefined8 *)(param_2 + 0x70)) {
    plVar7 = (longlong *)*puVar1;
    for (iVar8 = *(int *)(param_1 + 0x78); iVar8 != 0; iVar8 = iVar8 + -1) {
      if (plVar7[3] != 0) {
        FMemory::Free();
      }
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 5;
    }
    FUN_140da5370(puVar1,*(undefined8 *)(param_2 + 0x70),*(undefined4 *)(param_2 + 0x78),
                  *(undefined4 *)(param_1 + 0x7c),0);
  }
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_1 + 0x80,param_2 + 0x80);
  plVar7 = (longlong *)(param_1 + 0x90);
  if (plVar7 != (longlong *)(param_2 + 0x90)) {
    iVar8 = *(int *)(param_1 + 0x98);
    if (iVar8 != 0) {
      plVar9 = (longlong *)(*plVar7 + 8);
      do {
        plVar5 = (longlong *)plVar9[3];
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          lVar6 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 6;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    FUN_140da52c0(plVar7,*(longlong *)(param_2 + 0x90),*(undefined4 *)(param_2 + 0x98),
                  *(undefined4 *)(param_1 + 0x9c),0);
  }
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  FUN_140da9680(param_1 + 0xa8,param_2 + 0xa8);
  return param_1;
}



// FUNCTION 140da9f70 FUN_140da9f70 body=351 status=ok
// SIG undefined FUN_140da9f70(void)

longlong * FUN_140da9f70(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2,4);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 1,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 1,4);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 2,4);
    }
  }
  else {
    param_2[2] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
    param_2[3] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 3,4);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2 + 3,4);
  }
  return param_1;
}



// FUNCTION 140daa0d0 FUN_140daa0d0 body=335 status=ok
// SIG undefined FUN_140daa0d0(void)

longlong * FUN_140daa0d0(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  FUN_1425da060();
  FUN_1425da060(param_1,param_2 + 0x28);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x50,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x50,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x50) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x54,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x54,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x54) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x58,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x58,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x58) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  (**(code **)(*param_1 + 8))(param_1,param_2 + 0x5c);
  (**(code **)(*param_1 + 8))(param_1,param_2 + 0x5d);
  FUN_140daa220(param_1,param_2 + 0x60);
  FUN_14158ce90(param_1,param_2 + 0x108);
  return param_1;
}



// FUNCTION 140daa220 FUN_140daa220 body=739 status=ok
// SIG undefined FUN_140daa220(void)

longlong * FUN_140daa220(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2,4);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 1,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 1,4);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_14158ce90(param_1,param_2 + 2);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 6,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 6,4);
    }
  }
  else {
    param_2[6] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_14158ce90(param_1,param_2 + 8);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0xc,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0xc,4);
    }
  }
  else {
    param_2[0xc] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0xd,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0xd,4);
    }
  }
  else {
    param_2[0xd] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0xe,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0xe,4);
    }
  }
  else {
    param_2[0xe] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0xf,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0xf,4);
    }
  }
  else {
    param_2[0xf] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  (**(code **)(*param_1 + 8))(param_1,param_2 + 0x10);
  FUN_140da9f70(param_1,param_2 + 0x11);
  (**(code **)(*param_1 + 8))(param_1,(longlong)param_2 + 0x41);
  FUN_140da9f70(param_1,param_2 + 0x15);
  (**(code **)(*param_1 + 8))(param_1,(longlong)param_2 + 0x42);
  FUN_140da9f70(param_1,param_2 + 0x19);
  (**(code **)(*param_1 + 8))(param_1,param_2 + 0x1d);
  FUN_140da9f70(param_1,param_2 + 0x1e);
  (**(code **)(*param_1 + 8))(param_1,(longlong)param_2 + 0x75);
  FUN_140da9f70(param_1,param_2 + 0x22);
  (**(code **)(*param_1 + 8))(param_1,(longlong)param_2 + 0x76);
  FUN_140da9f70(param_1,param_2 + 0x26);
  return param_1;
}



// FUNCTION 140daa510 FUN_140daa510 body=98 status=ok
// SIG undefined FUN_140daa510(void)

longlong * FUN_140daa510(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  
  FUN_1425da060();
  puVar1 = *(undefined1 **)param_1[1];
  if (puVar1 + 1 <= (undefined1 *)((undefined8 *)param_1[1])[1]) {
    *(undefined1 *)(param_2 + 0x28) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x28,1);
  return param_1;
}



// FUNCTION 140daa580 FUN_140daa580 body=274 status=ok
// SIG undefined FUN_140daa580(void)

undefined8 FUN_140daa580(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  
  if (*param_1 == *param_2) {
    puVar2 = (undefined8 *)FText::ToString(param_2 + 1);
    puVar3 = (undefined8 *)FText::ToString(param_1 + 1);
    puVar8 = &DAT_143f3eda8;
    if (*(int *)(puVar2 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*puVar2;
    }
    if (*(int *)(puVar3 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*puVar3;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar6);
    if (iVar1 == 0) {
      puVar2 = (undefined8 *)FText::ToString(param_2 + 4);
      puVar3 = (undefined8 *)FText::ToString(param_1 + 4);
      if (*(int *)(puVar2 + 1) == 0) {
        puVar6 = &DAT_143f3eda8;
      }
      else {
        puVar6 = (undefined2 *)*puVar2;
      }
      if (*(int *)(puVar3 + 1) != 0) {
        puVar8 = (undefined2 *)*puVar3;
      }
      iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar6);
      if ((iVar1 == 0) && (iVar1 = (int)param_1[8], iVar1 == (int)param_2[8])) {
        plVar7 = (longlong *)param_2[7];
        if (iVar1 != 0) {
          plVar5 = (longlong *)(param_1[7] + 0x10);
          do {
            if (plVar5[-2] != *plVar7) {
              return 0;
            }
            if (plVar5[-1] != plVar7[1]) {
              return 0;
            }
            if (*plVar5 != plVar7[2]) {
              return 0;
            }
            if (*(float *)(plVar7 + 3) != *(float *)(plVar5 + 1)) {
              return 0;
            }
            plVar7 = plVar7 + 4;
            plVar5 = plVar5 + 4;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140daa6a0 FUN_140daa6a0 body=624 status=ok
// SIG undefined FUN_140daa6a0(void)

undefined8 FUN_140daa6a0(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  longlong lVar9;
  longlong lVar10;
  
  puVar8 = &DAT_143f3eda8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*param_2;
  }
  if (*(int *)(param_1 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*param_1;
  }
  iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar7);
  if (iVar2 == 0) {
    if (*(int *)(param_2 + 0xb) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)param_2[10];
    }
    if (*(int *)(param_1 + 0xb) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)param_1[10];
    }
    iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar7);
    if (iVar2 == 0) {
      if (*(int *)(param_2 + 9) == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = (undefined2 *)param_2[8];
      }
      if (*(int *)(param_1 + 9) == 0) {
        puVar6 = &DAT_143f3eda8;
      }
      else {
        puVar6 = (undefined2 *)param_1[8];
      }
      iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar7);
      if (iVar2 == 0) {
        if (*(int *)(param_2 + 0xd) == 0) {
          puVar7 = &DAT_143f3eda8;
        }
        else {
          puVar7 = (undefined2 *)param_2[0xc];
        }
        if (*(int *)(param_1 + 0xd) == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = (undefined2 *)param_1[0xc];
        }
        iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar7);
        if ((((iVar2 == 0) &&
             (*(int *)((longlong)param_1 + 0xa4) == *(int *)((longlong)param_2 + 0xa4))) &&
            (*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14))) &&
           (iVar2 = *(int *)(param_1 + 0x11), iVar2 == *(int *)(param_2 + 0x11))) {
          puVar4 = (undefined8 *)param_2[0x10];
          puVar5 = (undefined8 *)param_1[0x10];
          for (; iVar2 != 0; iVar2 = iVar2 + -1) {
            if (*(int *)(puVar4 + 1) == 0) {
              puVar7 = &DAT_143f3eda8;
            }
            else {
              puVar7 = (undefined2 *)*puVar4;
            }
            if (*(int *)(puVar5 + 1) == 0) {
              puVar6 = &DAT_143f3eda8;
            }
            else {
              puVar6 = (undefined2 *)*puVar5;
            }
            iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar7);
            if (iVar3 != 0) {
              return 0;
            }
            puVar5 = puVar5 + 2;
            puVar4 = puVar4 + 2;
          }
          iVar2 = *(int *)(param_1 + 0xf);
          if (iVar2 == *(int *)(param_2 + 0xf)) {
            lVar10 = param_2[0xe];
            lVar9 = param_1[0xe];
            for (; iVar2 != 0; iVar2 = iVar2 + -1) {
              cVar1 = FUN_140daa910(lVar9,lVar10);
              if (cVar1 == '\0') {
                return 0;
              }
              lVar9 = lVar9 + 0x28;
              lVar10 = lVar10 + 0x28;
            }
            puVar4 = (undefined8 *)FText::ToString(param_2 + 0x17);
            puVar5 = (undefined8 *)FText::ToString(param_1 + 0x17);
            if (*(int *)(puVar4 + 1) == 0) {
              puVar7 = &DAT_143f3eda8;
            }
            else {
              puVar7 = (undefined2 *)*puVar4;
            }
            if (*(int *)(puVar5 + 1) == 0) {
              puVar6 = &DAT_143f3eda8;
            }
            else {
              puVar6 = (undefined2 *)*puVar5;
            }
            iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar7);
            if (iVar2 == 0) {
              puVar4 = (undefined8 *)FText::ToString(param_2 + 0x1a);
              puVar5 = (undefined8 *)FText::ToString(param_1 + 0x1a);
              if (*(int *)(puVar4 + 1) == 0) {
                puVar7 = &DAT_143f3eda8;
              }
              else {
                puVar7 = (undefined2 *)*puVar4;
              }
              if (*(int *)(puVar5 + 1) != 0) {
                puVar8 = (undefined2 *)*puVar5;
              }
              iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar7);
              if ((iVar2 == 0) &&
                 (iVar2 = *(int *)(param_1 + 0x16), iVar2 == *(int *)(param_2 + 0x16))) {
                lVar10 = param_2[0x15];
                lVar9 = param_1[0x15];
                while( true ) {
                  if (iVar2 == 0) {
                    return 1;
                  }
                  cVar1 = FUN_140daa580(lVar9,lVar10);
                  if (cVar1 == '\0') break;
                  lVar9 = lVar9 + 0x48;
                  lVar10 = lVar10 + 0x48;
                  iVar2 = iVar2 + -1;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140daa910 FUN_140daa910 body=171 status=ok
// SIG undefined FUN_140daa910(void)

ulonglong FUN_140daa910(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  longlong *plVar4;
  int iVar5;
  
  puVar2 = &DAT_143f3eda8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  if (*(int *)(param_1 + 1) != 0) {
    puVar2 = (undefined2 *)*param_1;
  }
  plVar1 = (longlong *)FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
  if ((((int)plVar1 == 0) &&
      (plVar1 = (longlong *)0x0, *(char *)(param_1 + 2) == *(char *)(param_2 + 2))) &&
     (iVar5 = *(int *)(param_1 + 4), iVar5 == *(int *)(param_2 + 4))) {
    plVar4 = (longlong *)param_2[3];
    if (iVar5 != 0) {
      plVar1 = (longlong *)(param_1[3] + 8);
      do {
        if ((((char)plVar1[1] != (char)plVar4[2]) || (plVar1[-1] != *plVar4)) ||
           ((*plVar1 != plVar4[1] ||
            (*(int *)((longlong)plVar1 + 0xc) != *(int *)((longlong)plVar4 + 0x14)))))
        goto LAB_140daa9ae;
        plVar4 = plVar4 + 3;
        plVar1 = plVar1 + 3;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    return CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
  }
LAB_140daa9ae:
  return (ulonglong)plVar1 & 0xffffffffffffff00;
}



// FUNCTION 140daa9c0 FUN_140daa9c0 body=180 status=ok
// SIG undefined FUN_140daa9c0(void)

void FUN_140daa9c0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_140db06a0(*param_1,param_3);
  local_28[3] = 0x23;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"FALSE: IOnlineSessionPtr not valid",0x46);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140daaa80 FUN_140daaa80 body=180 status=ok
// SIG undefined FUN_140daaa80(void)

void FUN_140daaa80(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_140db06a0(*param_1,param_3);
  local_28[3] = 0x2f;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"Waiting for matchmaking connection to complete",0x5e)
  ;
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140daab40 FUN_140daab40 body=365 status=ok
// SIG undefined FUN_140daab40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140daab40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_e8 [32];
  undefined2 local_c8;
  int local_b8 [2];
  int local_b0 [2];
  longlong local_a8 [2];
  undefined8 local_98;
  undefined8 uStack_90;
  int local_88;
  int iStack_84;
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_b8[0] = -1;
  local_b0[0] = param_4;
  cVar1 = FUN_1404a9610(param_2,param_3,local_b8);
  if ((cVar1 == '\0') || (local_b8[0] != local_b0[0])) {
    FUN_1404ab210(param_2,param_3,local_b0,2);
    local_98 = *param_1;
    local_88 = local_b8[0];
    iStack_84 = local_b0[0];
    local_48 = (longlong *)0x0;
    local_38 = 0;
    uStack_90 = param_3;
    puVar3 = (undefined8 *)FUN_140438ef0(0x20,local_68);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar3 + 1) = (undefined4)local_98;
      *(undefined4 *)((longlong)puVar3 + 0xc) = local_98._4_4_;
      *(undefined4 *)(puVar3 + 2) = (undefined4)uStack_90;
      *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_90._4_4_;
      *puVar3 = &PTR_FUN_143f4d0b0;
      puVar3[3] = CONCAT44(iStack_84,local_88);
    }
    local_a8[0] = 0;
    local_78[0] = &LAB_140db2cf0;
    local_a8[1] = 0x1a;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8,0);
    local_c8 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_a8[0],0x1a,"update_advertised_setting");
    FUN_140dcdc50(*param_1,local_a8,local_78);
    if (local_a8[0] != 0) {
      FMemory::Free();
    }
    if (local_38 != 0) {
      plVar4 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar4 = local_48;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 140daacb0 FUN_140daacb0 body=249 status=ok
// SIG undefined FUN_140daacb0(void)

void FUN_140daacb0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  short *psVar1;
  uint uVar2;
  longlong lVar3;
  longlong local_28;
  ulonglong local_20;
  longlong local_18 [2];
  
  FUN_140db06a0(*param_1,param_3);
  psVar1 = (short *)FUN_140dd57a0(*(undefined4 *)(param_1 + 1));
  local_20 = 0;
  local_28 = 0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (psVar1[lVar3] != 0);
    uVar2 = (int)lVar3 + 1;
    local_20 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    FGenericPlatformString::Memcpy(local_28,psVar1,(longlong)(int)uVar2 * 2);
  }
  local_18[0] = 0;
  local_18[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_18,&local_28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140daadb0 FUN_140daadb0 body=812 status=ok
// SIG undefined FUN_140daadb0(void)

void FUN_140daadb0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 local_res8 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40 [2];
  longlong local_38 [4];
  
  FUN_140db06a0(*param_1,param_3);
  local_38[3] = 0x17;
  local_38[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
  FGenericPlatformString::Memcpy(local_38[2],L"TRUE: Creating session",0x2e);
  local_38[0] = 0;
  local_38[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_38,local_38 + 2);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  param_1 = param_1 + 1;
  local_res8[0] = 0xffffffff;
  FUN_1404a9610(param_1,DAT_14686f260,local_res8);
  local_res18[0] = 0xffffffff;
  FUN_1404a9610(param_1,DAT_14686f278,local_res18);
  local_res20[0] = 0xffffffff;
  FUN_1404a9610(param_1,DAT_14686f290,local_res20);
  local_48 = 0xffffffff;
  FUN_1404a9610(param_1,DAT_14686f258,&local_48);
  local_44 = 0xffffffff;
  FUN_1404a9610(param_1,DAT_14686f250,&local_44);
  local_40[0] = 0xffffffff;
  puVar1 = (undefined8 *)FName::FName(local_38,L"SEARCHCROSSPLAY",1);
  FUN_1404a9610(param_1,*puVar1,local_40);
  local_38[2] = 0;
  local_38[3] = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
  FGenericPlatformString::Memcpy(local_38[2],L"setting_player_level",0x2a);
  (**(code **)(*param_3 + 0x18))(param_3,local_38 + 2,local_res8[0]);
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  local_38[2] = 0;
  local_38[3] = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
  FGenericPlatformString::Memcpy(local_38[2],L"setting_plot_mission",0x2a);
  (**(code **)(*param_3 + 0x18))(param_3,local_38 + 2,local_res18[0]);
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  local_38[2] = 0;
  local_38[3] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
  FGenericPlatformString::Memcpy(local_38[2],L"setting_region",0x1e);
  (**(code **)(*param_3 + 0x18))(param_3,local_38 + 2,local_res20[0]);
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  local_38[2] = 0;
  local_38[3] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
  FGenericPlatformString::Memcpy(local_38[2],L"setting_open_slots",0x26);
  (**(code **)(*param_3 + 0x18))(param_3,local_38 + 2,local_48);
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  local_38[2] = 0;
  local_38[3] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
  FGenericPlatformString::Memcpy(local_38[2],L"setting_game_settings",0x2c);
  (**(code **)(*param_3 + 0x18))(param_3,local_38 + 2,local_44);
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  local_38[2] = 0;
  local_38[3] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
  FGenericPlatformString::Memcpy(local_38[2],L"setting_crossplay",0x24);
  (**(code **)(*param_3 + 0x18))(param_3,local_38 + 2,local_40[0]);
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dab0e0 FUN_140dab0e0 body=249 status=ok
// SIG undefined FUN_140dab0e0(void)

void FUN_140dab0e0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  short *psVar1;
  uint uVar2;
  longlong lVar3;
  longlong local_28;
  ulonglong local_20;
  longlong local_18 [2];
  
  FUN_140db06a0(*param_1,param_3);
  psVar1 = (short *)FUN_140dd55c0(*(undefined1 *)(param_1 + 1));
  local_20 = 0;
  local_28 = 0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (psVar1[lVar3] != 0);
    uVar2 = (int)lVar3 + 1;
    local_20 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    FGenericPlatformString::Memcpy(local_28,psVar1,(longlong)(int)uVar2 * 2);
  }
  local_18[0] = 0;
  local_18[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"error",0xc);
  (**(code **)(*param_3 + 8))(param_3,local_18,&local_28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dab1e0 FUN_140dab1e0 body=180 status=ok
// SIG undefined FUN_140dab1e0(void)

void FUN_140dab1e0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_140db06a0(*param_1,param_3);
  local_28[3] = 0x1a;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"TRUE: Already in progress",0x34);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dab2a0 FUN_140dab2a0 body=180 status=ok
// SIG undefined FUN_140dab2a0(void)

void FUN_140dab2a0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_140db06a0(*param_1,param_3);
  local_28[3] = 0x12;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"Starting gameplay",0x24);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dab360 FUN_140dab360 body=180 status=ok
// SIG undefined FUN_140dab360(void)

void FUN_140dab360(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_140db06a0(*param_1,param_3);
  local_28[3] = 0x21;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"Failed to start MatchmakingRound",0x42);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dab420 FUN_140dab420 body=180 status=ok
// SIG undefined FUN_140dab420(void)

void FUN_140dab420(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_140db06a0(*param_1,param_3);
  local_28[3] = 0x1c;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"IOnlineSessionPtr not valid",0x38);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dab4e0 FUN_140dab4e0 body=346 status=ok
// SIG undefined FUN_140dab4e0(void)

void FUN_140dab4e0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_140db06a0(*param_1,param_3);
  local_28[3] = 0xe;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"Start hosting",0x1c);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  local_28[2] = 0;
  local_28[3] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"num_local_players",0x24);
  (**(code **)(*param_3 + 0x18))(param_3,local_28 + 2,*(undefined4 *)(param_1 + 1));
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  local_28[2] = 0;
  local_28[3] = 0x19;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"num_remote_lobby_players",0x32);
  (**(code **)(*param_3 + 0x18))(param_3,local_28 + 2,*(undefined4 *)((longlong)param_1 + 0xc));
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dab640 FUN_140dab640 body=180 status=ok
// SIG undefined FUN_140dab640(void)

void FUN_140dab640(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_140db06a0(*param_1,param_3);
  local_28[3] = 0x19;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"Wait for Pending Clients",0x32);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dab700 FUN_140dab700 body=550 status=ok
// SIG undefined FUN_140dab700(void)

void FUN_140dab700(undefined4 *param_1,undefined8 param_2,longlong *param_3)

{
  short *psVar1;
  uint uVar2;
  longlong lVar3;
  longlong local_38;
  ulonglong local_30;
  longlong local_28 [2];
  
  FUN_140db06a0(*(undefined8 *)(param_1 + 2),param_3);
  psVar1 = (short *)FUN_140dd56a0(param_1[4]);
  local_30 = 0;
  local_38 = 0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (psVar1[lVar3] != 0);
    uVar2 = (int)lVar3 + 1;
    local_30 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    FGenericPlatformString::Memcpy(local_38,psVar1,(longlong)(int)uVar2 * 2);
  }
  local_28[0] = 0;
  local_28[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"search_state",0x1a);
  (**(code **)(*param_3 + 8))(param_3,local_28,&local_38);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  local_38 = 0;
  local_30 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"Retrying search",0x20);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,&local_38);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x1b;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"num_expansions_this_search",0x36);
  (**(code **)(*param_3 + 0x18))(param_3,local_28,*param_1);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x27;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"num_search_results_checked_this_search",0x4e);
  (**(code **)(*param_3 + 0x18))(param_3,local_28,param_1[1]);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dab930 FUN_140dab930 body=212 status=ok
// SIG undefined FUN_140dab930(void)

void FUN_140dab930(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_18 [2];
  
  FUN_140db06a0(*param_1,param_3);
  local_18[1] = 0xc;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"beacon_name",0x18);
  (**(code **)(*param_3 + 8))(param_3,local_18,param_1 + 1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"beacon_guid",0x18);
  (**(code **)(*param_3 + 8))(param_3,local_18,param_1 + 3);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140daba10 FUN_140daba10 body=180 status=ok
// SIG undefined FUN_140daba10(void)

void FUN_140daba10(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_140db06a0(*param_1,param_3);
  local_28[3] = 5;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"TRUE",10);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dabad0 FUN_140dabad0 body=180 status=ok
// SIG undefined FUN_140dabad0(void)

void FUN_140dabad0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_140db06a0(*param_1,param_3);
  local_28[3] = 0x1b;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"FALSE: Already in progress",0x36);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dabb90 FUN_140dabb90 body=325 status=ok
// SIG undefined FUN_140dabb90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dabb90(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_b8 [32];
  longlong local_98 [3];
  longlong local_80 [3];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_98[2] = *param_1;
  FString::FString(local_80);
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_144553d08;
    puVar1[1] = local_98[2];
    FString::FString(puVar1 + 2,local_80);
  }
  local_98[0] = 0;
  local_68[0] = &LAB_140db2d10;
  local_98[1] = 0x22;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_98,0);
  FGenericPlatformString::Memcpy(local_98[0],L"check_pending_matchmaking_parties",0x44);
  FUN_140dcdc50(*param_1,local_98,local_68);
  if (local_98[0] != 0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    plVar2 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar2 = local_38;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_80[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dabce0 FUN_140dabce0 body=180 status=ok
// SIG undefined FUN_140dabce0(void)

void FUN_140dabce0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_140db06a0(*param_1,param_3);
  local_28[3] = 6;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"FALSE",0xc);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dabda0 FUN_140dabda0 body=579 status=ok
// SIG undefined FUN_140dabda0(void)

void FUN_140dabda0(undefined4 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_140db06a0(*(undefined8 *)(param_1 + 4),param_3);
  local_28[3] = 0x38;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy
            (local_28[2],L"Skipping retry because matchmaking round is nearly over",0x70);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  local_28[2] = 0;
  local_28[3] = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"retry_delay_seconds",0x28);
  (**(code **)(*param_3 + 0x38))(param_3,local_28 + 2,*param_1);
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  local_28[2] = 0;
  local_28[3] = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"retry_jitter_seconds",0x2a);
  (**(code **)(*param_3 + 0x38))(param_3,local_28 + 2,param_1[1]);
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  local_28[2] = 0;
  local_28[3] = 0x19;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"search_threshold_seconds",0x32);
  (**(code **)(*param_3 + 0x38))(param_3,local_28 + 2,param_1[2]);
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  local_28[2] = 0;
  local_28[3] = 0x20;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"retry_matchmaking_delay_seconds",0x40);
  (**(code **)(*param_3 + 0x38))(param_3,local_28 + 2,param_1[6]);
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  local_28[2] = 0;
  local_28[3] = 0x1d;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"remaining_round_time_seconds",0x3a);
  (**(code **)(*param_3 + 0x38))(param_3,local_28 + 2,param_1[7]);
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dabff0 FUN_140dabff0 body=366 status=ok
// SIG undefined FUN_140dabff0(void)

void FUN_140dabff0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_18 [2];
  
  FUN_140db06a0(*param_1,param_3);
  local_18[1] = 0x11;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"selected_content",0x22);
  (**(code **)(*param_3 + 8))(param_3,local_18,param_1[1]);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x17;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"matchmaking_total_time",0x2e);
  (**(code **)(*param_3 + 0x38))(param_3,local_18,*(undefined4 *)(param_1 + 2));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"player_count",0x1a);
  (**(code **)(*param_3 + 0x18))(param_3,local_18,*(undefined4 *)((longlong)param_1 + 0x14));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"found_player_count",0x26);
  (**(code **)(*param_3 + 0x18))(param_3,local_18,*(undefined4 *)(param_1 + 3));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dac160 FUN_140dac160 body=180 status=ok
// SIG undefined FUN_140dac160(void)

void FUN_140dac160(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_140db06a0(*param_1,param_3);
  local_28[3] = 0x23;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"FALSE: MatchmakingSearch not valid",0x46);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dac220 FUN_140dac220 body=402 status=ok
// SIG undefined FUN_140dac220(void)

void FUN_140dac220(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_28 [4];
  
  FUN_140db06a0(*param_1,param_3);
  local_28[1] = 0xc;
  local_28[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"beacon_name",0x18);
  (**(code **)(*param_3 + 8))(param_3,local_28,param_1 + 1);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"beacon_guid",0x18);
  (**(code **)(*param_3 + 8))(param_3,local_28,param_1 + 3);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"new_beacon_name",0x20);
  lVar1 = *param_3;
  uVar2 = FName::ToString(param_1 + 5,local_28 + 2);
  (**(code **)(lVar1 + 8))(param_3,local_28,uVar2);
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"new_beacon_url",0x1e);
  (**(code **)(*param_3 + 8))(param_3,local_28,param_1 + 6);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dac3c0 FUN_140dac3c0 body=180 status=ok
// SIG undefined FUN_140dac3c0(void)

void FUN_140dac3c0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_140db06a0(*param_1,param_3);
  local_28[3] = 0x20;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"Wait for splitscreen join/leave",0x40);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dac480 FUN_140dac480 body=322 status=ok
// SIG undefined FUN_140dac480(void)

void FUN_140dac480(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_28 [4];
  
  FUN_140db06a0(*param_1,param_3);
  local_28[1] = 0xc;
  local_28[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"beacon_name",0x18);
  (**(code **)(*param_3 + 8))(param_3,local_28,param_1 + 1);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"beacon_guid",0x18);
  (**(code **)(*param_3 + 8))(param_3,local_28,param_1 + 3);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"session_name",0x1a);
  lVar1 = *param_3;
  uVar2 = FName::ToString(param_1 + 5,local_28 + 2);
  (**(code **)(lVar1 + 8))(param_3,local_28,uVar2);
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dac5d0 FUN_140dac5d0 body=180 status=ok
// SIG undefined FUN_140dac5d0(void)

void FUN_140dac5d0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_140db06a0(*param_1,param_3);
  local_28[3] = 0x20;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"FALSE: No HostMatchmakingBeacon",0x40);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dac690 FUN_140dac690 body=603 status=ok
// SIG undefined FUN_140dac690(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dac690(undefined8 *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  longlong *plVar7;
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  void *local_c0;
  int local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  void *local_a8;
  ulonglong local_a0;
  void *local_98;
  ulonglong local_90;
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_e8 = *(longlong *)(*(longlong *)param_1[1] + 0xc0);
  FName::ToString(&local_e8,&local_98);
  local_e8 = *(longlong *)(*(longlong *)param_1[1] + 0xac);
  uStack_e0 = *(undefined8 *)(*(longlong *)param_1[1] + 0xb4);
  FUN_141682af0(&local_e8,&local_a8,0);
  pvVar2 = local_98;
  pvVar5 = (void *)0x0;
  local_d8 = *param_1;
  puVar1 = (undefined4 *)param_1[2];
  local_d0 = (void *)0x0;
  iVar4 = (int)local_90;
  local_c8 = iVar4;
  if (iVar4 == 0) {
    local_c4 = 0;
    pvVar6 = pvVar5;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_d0,local_90 & 0xffffffff,0);
    pvVar6 = local_d0;
    _guard_xfg_dispatch_icall_nop(local_d0,pvVar2,(longlong)iVar4 * 2);
  }
  pvVar2 = local_a8;
  local_c0 = (void *)0x0;
  iVar4 = (int)local_a0;
  local_b8 = iVar4;
  if (iVar4 == 0) {
    local_b4 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c0,local_a0 & 0xffffffff,0);
    pvVar5 = local_c0;
    _guard_xfg_dispatch_icall_nop(local_c0,pvVar2,(longlong)iVar4 * 2);
    pvVar6 = local_d0;
  }
  local_b0 = *puVar1;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x38,local_78);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_144553d68;
    puVar3[1] = local_d8;
    FString::FString(puVar3 + 2,&local_d0);
    FString::FString(puVar3 + 4,&local_c0);
    *(undefined4 *)(puVar3 + 6) = local_b0;
    pvVar5 = local_c0;
    pvVar6 = local_d0;
  }
  local_e8 = 0;
  local_88[0] = &LAB_140db2d20;
  uStack_e0 = 0x1e;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
  FGenericPlatformString::Memcpy(local_e8,L"on_any_beacon_network_failure",0x3c);
  FUN_140dcdc50(*param_1,&local_e8,local_88);
  if (local_e8 != 0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    plVar7 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar7 = local_58;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dac8f0 FUN_140dac8f0 body=817 status=ok
// SIG undefined FUN_140dac8f0(void)

void FUN_140dac8f0(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  char cVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  longlong lVar14;
  undefined2 *puVar15;
  longlong lVar16;
  longlong lVar17;
  undefined4 local_res10 [2];
  longlong local_res18;
  undefined1 local_res20 [8];
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8 [2];
  longlong local_98 [2];
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [3];
  
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  lVar17 = *(longlong *)(param_2 + 0x60);
  lVar16 = (longlong)*(int *)(param_2 + 0x68) * 0x40 + lVar17;
  local_res18 = lVar16;
  if (lVar17 != lVar16) {
    do {
      uVar1 = *(undefined4 *)(lVar17 + 0x38);
      local_res10[0] = 0;
      if ((*(longlong **)(lVar17 + 0x10) == (longlong *)0x0) ||
         (cVar9 = (**(code **)(**(longlong **)(lVar17 + 0x10) + 0x20))(), cVar9 == '\0')) {
        local_c8 = 0;
        local_c0 = 8;
        bVar2 = true;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
        FGenericPlatformString::Memcpy(local_c8,L"INVALID",0x10);
        plVar12 = &local_c8;
      }
      else {
        plVar12 = *(longlong **)(lVar17 + 0x10);
        bVar5 = true;
        bVar4 = true;
        bVar3 = true;
        puVar10 = (undefined8 *)(**(code **)(*plVar12 + 0x30))(plVar12,local_68);
        if (*(int *)(puVar10 + 1) == 0) {
          puVar13 = &DAT_143f3eda8;
        }
        else {
          puVar13 = (undefined2 *)*puVar10;
        }
        uVar11 = (**(code **)(*plVar12 + 8))(plVar12,local_res20);
        puVar10 = (undefined8 *)FName::ToString(uVar11,local_78);
        if (*(int *)(puVar10 + 1) == 0) {
          puVar15 = &DAT_143f3eda8;
        }
        else {
          puVar15 = (undefined2 *)*puVar10;
        }
        FString::PrintfImpl(local_a8,L"%s:%s",puVar15,puVar13);
        plVar12 = local_a8;
      }
      puVar13 = (undefined2 *)*plVar12;
      *plVar12 = 0;
      lVar8 = plVar12[1];
      plVar12[1] = 0;
      if ((bVar2) && (bVar2 = false, local_c8 != 0)) {
        FMemory::Free();
      }
      if ((bVar3) && (bVar3 = false, local_a8[0] != 0)) {
        FMemory::Free();
      }
      if ((bVar4) && (bVar4 = false, local_78[0] != 0)) {
        FMemory::Free();
      }
      if ((bVar5) && (bVar5 = false, local_68[0] != 0)) {
        FMemory::Free();
      }
      puVar15 = &DAT_143f3eda8;
      if ((int)lVar8 != 0) {
        puVar15 = puVar13;
      }
      FString::PrintfImpl(local_98,L"  Host: %s, AdditionalPlayers (%d):",puVar15,uVar1);
      FUN_1428a6fb0(*(longlong *)*param_1 + 0x98,local_98,local_res10);
      if (local_98[0] != 0) {
        FMemory::Free();
      }
      if (puVar13 != (undefined2 *)0x0) {
        FMemory::Free(puVar13);
      }
      lVar14 = *(longlong *)(lVar17 + 0x30);
      lVar8 = lVar14 + (longlong)*(int *)(lVar17 + 0x38) * 0x28;
      for (; lVar14 != lVar8; lVar14 = lVar14 + 0x28) {
        local_res10[0] = 0;
        if ((*(longlong **)(lVar14 + 8) == (longlong *)0x0) ||
           (cVar9 = (**(code **)(**(longlong **)(lVar14 + 8) + 0x20))(), cVar9 == '\0')) {
          local_b0 = 8;
          local_b8 = 0;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
          FGenericPlatformString::Memcpy(local_b8,L"INVALID",0x10);
          plVar12 = &local_b8;
          bVar7 = false;
          bVar6 = true;
        }
        else {
          plVar12 = (longlong *)
                    (**(code **)(**(longlong **)(lVar14 + 8) + 0x28))
                              (*(longlong **)(lVar14 + 8),local_58);
          bVar7 = true;
          bVar6 = false;
        }
        puVar13 = (undefined2 *)*plVar12;
        *plVar12 = 0;
        lVar16 = plVar12[1];
        plVar12[1] = 0;
        if ((bVar6) && (local_b8 != 0)) {
          FMemory::Free();
        }
        if ((bVar7) && (local_58[0] != 0)) {
          FMemory::Free();
        }
        puVar15 = &DAT_143f3eda8;
        if ((int)lVar16 != 0) {
          puVar15 = puVar13;
        }
        FString::PrintfImpl(local_88,L"    %s",puVar15);
        FUN_1428a6fb0(*(longlong *)*param_1 + 0x98,local_88,local_res10);
        if (local_88[0] != 0) {
          FMemory::Free();
        }
        if (puVar13 != (undefined2 *)0x0) {
          FMemory::Free(puVar13);
        }
        lVar16 = local_res18;
      }
      lVar17 = lVar17 + 0x40;
    } while (lVar17 != lVar16);
  }
  return;
}



// FUNCTION 140dacc30 FUN_140dacc30 body=170 status=ok
// SIG undefined FUN_140dacc30(void)

void FUN_140dacc30(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  undefined4 local_res18 [4];
  longlong local_28 [2];
  longlong local_18 [2];
  
  local_res8[0] = 0xffffffff;
  local_res10 = param_2;
  cVar1 = FUN_1404a9610(*(undefined8 *)*param_1,param_2,local_res8);
  if (cVar1 != '\0') {
    local_res18[0] = 0;
    puVar2 = (undefined8 *)FName::ToString(&local_res10,local_18);
    if (*(int *)(puVar2 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*puVar2;
    }
    FString::PrintfImpl(local_28,L"  %s: %d",puVar3,local_res8[0]);
    FUN_1428a6fb0(*(longlong *)param_1[1] + 0x98,local_28,local_res18);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140dacce0 FUN_140dacce0 body=180 status=ok
// SIG undefined FUN_140dacce0(void)

void FUN_140dacce0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_140db06a0(*param_1,param_3);
  local_28[3] = 0x10;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"Joining session",0x20);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dacda0 FUN_140dacda0 body=180 status=ok
// SIG undefined FUN_140dacda0(void)

void FUN_140dacda0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_140db06a0(*param_1,param_3);
  local_28[3] = 0x26;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"FALSE: Session transition in progress",0x4c);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dace60 FUN_140dace60 body=180 status=ok
// SIG undefined FUN_140dace60(void)

void FUN_140dace60(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_140db06a0(*param_1,param_3);
  local_28[3] = 0x1f;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"Starting new matchmaking round",0x3e);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dacf20 FUN_140dacf20 body=214 status=ok
// SIG undefined FUN_140dacf20(void)

void FUN_140dacf20(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_18 [2];
  
  FUN_140db06a0(*param_1,param_3);
  local_18[1] = 0xf;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"was_successful",0x1e);
  (**(code **)(*param_3 + 0x40))(param_3,local_18,*(undefined1 *)(param_1 + 1));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"total_time_seconds",0x26);
  (**(code **)(*param_3 + 0x38))(param_3,local_18,*(undefined4 *)((longlong)param_1 + 0xc));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dad000 FUN_140dad000 body=385 status=ok
// SIG undefined FUN_140dad000(void)

void FUN_140dad000(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  short *psVar1;
  uint uVar2;
  longlong lVar3;
  longlong local_28;
  ulonglong local_20;
  longlong local_18 [2];
  
  FUN_140db06a0(*param_1,param_3);
  psVar1 = (short *)FUN_140dd56a0(*(undefined4 *)(param_1 + 1));
  local_20 = 0;
  local_28 = 0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (psVar1[lVar3] != 0);
    uVar2 = (int)lVar3 + 1;
    local_20 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    FGenericPlatformString::Memcpy(local_28,psVar1,(longlong)(int)uVar2 * 2);
  }
  local_18[0] = 0;
  local_18[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"search_state",0x1a);
  (**(code **)(*param_3 + 8))(param_3,local_18,&local_28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  local_28 = 0;
  local_20 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"Evaluating state",0x22);
  local_18[0] = 0;
  local_18[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_18,&local_28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dad190 FUN_140dad190 body=180 status=ok
// SIG undefined FUN_140dad190(void)

void FUN_140dad190(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_140db06a0(*param_1,param_3);
  local_28[3] = 0x13;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"FALSE: Is a client",0x26);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dad250 FUN_140dad250 body=385 status=ok
// SIG undefined FUN_140dad250(void)

void FUN_140dad250(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  short *psVar1;
  uint uVar2;
  longlong lVar3;
  longlong local_28;
  ulonglong local_20;
  longlong local_18 [2];
  
  FUN_140db06a0(*param_1,param_3);
  psVar1 = (short *)FUN_140dd56a0(*(undefined4 *)(param_1 + 1));
  local_20 = 0;
  local_28 = 0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (psVar1[lVar3] != 0);
    uVar2 = (int)lVar3 + 1;
    local_20 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    FGenericPlatformString::Memcpy(local_28,psVar1,(longlong)(int)uVar2 * 2);
  }
  local_18[0] = 0;
  local_18[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"search_state",0x1a);
  (**(code **)(*param_3 + 8))(param_3,local_18,&local_28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  local_28 = 0;
  local_20 = 0x1a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"Attempting new connection",0x34);
  local_18[0] = 0;
  local_18[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_18,&local_28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dad3e0 FUN_140dad3e0 body=180 status=ok
// SIG undefined FUN_140dad3e0(void)

void FUN_140dad3e0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_140db06a0(*param_1,param_3);
  local_28[3] = 0x23;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"Waiting for splitscreen join/leave",0x46);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dad4a0 FUN_140dad4a0 body=575 status=ok
// SIG undefined FUN_140dad4a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dad4a0(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  longlong *plVar6;
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  void *local_c0;
  int local_b8;
  undefined4 local_b4;
  void *local_b0;
  ulonglong local_a8;
  void *local_a0;
  ulonglong local_98;
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_e8 = *(longlong *)(*(longlong *)param_1[1] + 0xc0);
  FName::ToString(&local_e8,&local_a0);
  local_e8 = *(longlong *)(*(longlong *)param_1[1] + 0xac);
  uStack_e0 = *(undefined8 *)(*(longlong *)param_1[1] + 0xb4);
  FUN_141682af0(&local_e8,&local_b0,0);
  pvVar1 = local_a0;
  pvVar4 = (void *)0x0;
  local_d8 = *param_1;
  local_d0 = (void *)0x0;
  iVar3 = (int)local_98;
  local_c8 = iVar3;
  if (iVar3 == 0) {
    local_c4 = 0;
    pvVar5 = pvVar4;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_d0,local_98 & 0xffffffff,0);
    pvVar5 = local_d0;
    _guard_xfg_dispatch_icall_nop(local_d0,pvVar1,(longlong)iVar3 * 2);
  }
  pvVar1 = local_b0;
  local_c0 = (void *)0x0;
  iVar3 = (int)local_a8;
  local_b8 = iVar3;
  if (iVar3 == 0) {
    local_b4 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c0,local_a8 & 0xffffffff,0);
    pvVar4 = local_c0;
    _guard_xfg_dispatch_icall_nop(local_c0,pvVar1,(longlong)iVar3 * 2);
    pvVar5 = local_d0;
  }
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x30,local_78);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143f77c30;
    puVar2[1] = local_d8;
    FString::FString(puVar2 + 2,&local_d0);
    FString::FString(puVar2 + 4,&local_c0);
    pvVar4 = local_c0;
    pvVar5 = local_d0;
  }
  local_e8 = 0;
  local_88[0] = &LAB_140db2aa0;
  uStack_e0 = 0x29;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
  FGenericPlatformString::Memcpy(local_e8,L"on_any_beacon_new_remote_party_connected",0x52);
  FUN_140dcdc50(*param_1,&local_e8,local_88);
  if (local_e8 != 0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    plVar6 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar6 = local_58;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  if (local_b0 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_a0 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dad6e0 FUN_140dad6e0 body=180 status=ok
// SIG undefined FUN_140dad6e0(void)

void FUN_140dad6e0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_140db06a0(*param_1,param_3);
  local_28[3] = 0x14;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"Already in progress",0x28);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dad7a0 FUN_140dad7a0 body=517 status=ok
// SIG undefined FUN_140dad7a0(void)

void FUN_140dad7a0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  short *psVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong local_38;
  ulonglong local_30;
  longlong local_28 [2];
  
  FUN_140db06a0(*param_1,param_3);
  psVar1 = (short *)FUN_140dd5730(*(undefined1 *)(*param_1 + 0x10));
  local_30 = 0;
  local_38 = 0;
  lVar2 = -1;
  if ((psVar1 != (short *)0x0) && (lVar4 = lVar2, *psVar1 != 0)) {
    do {
      lVar4 = lVar4 + 1;
    } while (psVar1[lVar4] != 0);
    uVar3 = (int)lVar4 + 1;
    local_30 = (ulonglong)uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    FGenericPlatformString::Memcpy(local_38,psVar1,(longlong)(int)uVar3 * 2);
  }
  local_28[0] = 0;
  local_28[1] = 0x1a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"current_matchmaking_state",0x34);
  (**(code **)(*param_3 + 8))(param_3,local_28,&local_38);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  psVar1 = (short *)FUN_140dd5730((char)param_1[1]);
  local_30 = 0;
  local_38 = 0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    do {
      lVar2 = lVar2 + 1;
    } while (psVar1[lVar2] != 0);
    uVar3 = (int)lVar2 + 1;
    local_30 = (ulonglong)uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    FGenericPlatformString::Memcpy(local_38,psVar1,(longlong)(int)uVar3 * 2);
  }
  local_28[0] = 0;
  local_28[1] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"new_matchmaking_state",0x2c);
  (**(code **)(*param_3 + 8))(param_3,local_28,&local_38);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x19;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"total_state_time_seconds",0x32);
  (**(code **)(*param_3 + 0x38))(param_3,local_28,*(undefined4 *)((longlong)param_1 + 0xc));
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dad9b0 FUN_140dad9b0 body=180 status=ok
// SIG undefined FUN_140dad9b0(void)

void FUN_140dad9b0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_140db06a0(*param_1,param_3);
  local_28[3] = 0x1c;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"Waiting for Pending Clients",0x38);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dada70 FUN_140dada70 body=180 status=ok
// SIG undefined FUN_140dada70(void)

void FUN_140dada70(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_140db06a0(*param_1,param_3);
  local_28[3] = 0x29;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"FALSE: RemotePlayer not found in session",0x52);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dadb30 FUN_140dadb30 body=180 status=ok
// SIG undefined FUN_140dadb30(void)

void FUN_140dadb30(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_140db06a0(*param_1,param_3);
  local_28[3] = 0x1d;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"TRUE: Session already exists",0x3a);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dadbf0 FUN_140dadbf0 body=180 status=ok
// SIG undefined FUN_140dadbf0(void)

void FUN_140dadbf0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_140db06a0(*param_1,param_3);
  local_28[3] = 0x21;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"FALSE: IOnlineSessionPtr invalid",0x42);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dadcb0 FUN_140dadcb0 body=180 status=ok
// SIG undefined FUN_140dadcb0(void)

void FUN_140dadcb0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_140db06a0(*param_1,param_3);
  local_28[3] = 0x25;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"FALSE: NamedOnlineSession is nullptr",0x4a);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dadd70 FUN_140dadd70 body=180 status=ok
// SIG undefined FUN_140dadd70(void)

void FUN_140dadd70(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_140db06a0(*param_1,param_3);
  local_28[3] = 0x1c;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"FALSE: Invalid RemotePlayer",0x38);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dade30 FUN_140dade30 body=322 status=ok
// SIG undefined FUN_140dade30(void)

undefined8 FUN_140dade30(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *(longlong *)*param_1;
  lVar6 = (longlong)(int)((longlong *)*param_1)[1] * 0x40 + lVar5;
  while( true ) {
    if (lVar5 == lVar6) {
      return 0;
    }
    if (((*(longlong **)(lVar5 + 0x10) == (longlong *)0x0) ||
        (cVar3 = (**(code **)(**(longlong **)(lVar5 + 0x10) + 0x20))(), cVar3 == '\0')) ||
       (cVar3 = (**(code **)(*(longlong *)*param_2 + 0x20))(), cVar3 == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((((*(longlong **)(lVar5 + 0x10) == (longlong *)0x0) ||
         (cVar3 = (**(code **)(**(longlong **)(lVar5 + 0x10) + 0x20))(), cVar3 == '\0')) &&
        (cVar3 = (**(code **)(*(longlong *)*param_2 + 0x20))(), cVar3 == '\0')) ||
       ((bVar2 && (cVar3 = (**(code **)**(undefined8 **)(lVar5 + 0x10))
                                     (*(undefined8 **)(lVar5 + 0x10),*param_2), cVar3 != '\0'))))
    break;
    lVar4 = *(longlong *)(lVar5 + 0x30);
    lVar1 = lVar4 + (longlong)*(int *)(lVar5 + 0x38) * 0x28;
    for (; lVar4 != lVar1; lVar4 = lVar4 + 0x28) {
      if (((*(longlong **)(lVar4 + 8) == (longlong *)0x0) ||
          (cVar3 = (**(code **)(**(longlong **)(lVar4 + 8) + 0x20))(), cVar3 == '\0')) ||
         (cVar3 = (**(code **)(*(longlong *)*param_2 + 0x20))(), cVar3 == '\0')) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((*(longlong **)(lVar4 + 8) == (longlong *)0x0) ||
          (cVar3 = (**(code **)(**(longlong **)(lVar4 + 8) + 0x20))(), cVar3 == '\0')) &&
         (cVar3 = (**(code **)(*(longlong *)*param_2 + 0x20))(), cVar3 == '\0')) {
        return 1;
      }
      if ((bVar2) &&
         (cVar3 = (**(code **)**(undefined8 **)(lVar4 + 8))(*(undefined8 **)(lVar4 + 8),*param_2),
         cVar3 != '\0')) {
        return 1;
      }
    }
    lVar5 = lVar5 + 0x40;
  }
  return 1;
}



// FUNCTION 140dadf80 FUN_140dadf80 body=385 status=ok
// SIG undefined FUN_140dadf80(void)

void FUN_140dadf80(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  short *psVar1;
  uint uVar2;
  longlong lVar3;
  longlong local_28;
  ulonglong local_20;
  longlong local_18 [2];
  
  FUN_140db06a0(*param_1,param_3);
  psVar1 = (short *)FUN_140dd56a0(*(undefined4 *)(param_1 + 1));
  local_20 = 0;
  local_28 = 0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (psVar1[lVar3] != 0);
    uVar2 = (int)lVar3 + 1;
    local_20 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    FGenericPlatformString::Memcpy(local_28,psVar1,(longlong)(int)uVar2 * 2);
  }
  local_18[0] = 0;
  local_18[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"search_state",0x1a);
  (**(code **)(*param_3 + 8))(param_3,local_18,&local_28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  local_28 = 0;
  local_20 = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"Canceling matchmaking",0x2c);
  local_18[0] = 0;
  local_18[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_18,&local_28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dae110 FUN_140dae110 body=383 status=ok
// SIG undefined FUN_140dae110(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140dae110(undefined8 param_1,undefined8 *param_2)

{
  wchar_t _C;
  char cVar1;
  wint_t wVar2;
  wint_t wVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  wchar_t *pwVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  void *_Src;
  undefined2 *local_28;
  int local_20;
  
  puVar9 = (undefined2 *)0x0;
  iVar6 = 0;
  lVar5 = FUN_140db9720(param_2);
  puVar11 = local_28;
  if ((lVar5 != 0) && (cVar1 = FUN_140dc18f0(lVar5), puVar11 = local_28, cVar1 != '\0')) {
    lVar5 = FUN_140db9720(param_2);
    puVar10 = &DAT_143f3eda8;
    if (lVar5 == 0) {
      puVar11 = &DAT_143f3eda8;
      if (DAT_14686f3c8 != 0) {
        puVar11 = DAT_14686f3c0;
      }
      if (*(int *)(param_2 + 1) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)*param_2;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar11);
      _Src = DAT_14686f400;
      puVar11 = (undefined2 *)0x0;
      if (iVar4 != 0) goto LAB_140dae206;
      local_28 = (undefined2 *)0x0;
      iVar4 = (int)_DAT_14686f408;
      local_20 = iVar4;
      if (iVar4 == 0) goto LAB_140dae206;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,_DAT_14686f408 & 0xffffffff,0);
    }
    else {
      iVar4 = *(int *)(lVar5 + 0x48);
      _Src = *(void **)(lVar5 + 0x40);
      local_28 = (undefined2 *)0x0;
      puVar11 = puVar9;
      local_20 = iVar4;
      if (iVar4 == 0) goto LAB_140dae206;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,iVar4,0);
    }
    puVar11 = local_28;
    _guard_xfg_dispatch_icall_nop(local_28,_Src,(longlong)iVar4 * 2);
    if (local_20 != 0) {
      puVar10 = puVar11;
    }
LAB_140dae206:
    pwVar7 = L"campaign";
    do {
      _C = *(wchar_t *)((longlong)(puVar10 + -0xa22a9868) + (longlong)pwVar7);
      if ((_C == L'\0') && (*pwVar7 == L'\0')) goto LAB_140dae24f;
      if (_C != *pwVar7) {
        wVar2 = towlower(_C);
        wVar3 = towlower(*pwVar7);
        if (wVar2 != wVar3) goto LAB_140dae246;
      }
      pwVar7 = pwVar7 + 1;
    } while( true );
  }
  goto LAB_140dae26b;
LAB_140dae246:
  iVar6 = (uint)wVar2 - (uint)wVar3;
LAB_140dae24f:
  puVar9 = (undefined2 *)0x1;
  if (iVar6 == 0) {
    uVar8 = 0;
    goto LAB_140dae26d;
  }
LAB_140dae26b:
  uVar8 = 1;
LAB_140dae26d:
  if ((puVar9 != (undefined2 *)0x0) && (puVar11 != (undefined2 *)0x0)) {
    FMemory::Free(puVar11);
  }
  return uVar8;
}



// FUNCTION 140dae290 FUN_140dae290 body=270 status=ok
// SIG undefined FUN_140dae290(void)

undefined8 FUN_140dae290(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  
  plVar3 = *(longlong **)*param_1;
  plVar4 = (longlong *)((longlong *)*param_1)[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (*(longlong **)(param_2 + 0x10) == (longlong *)0x0) {
LAB_140dae2ff:
    bVar5 = false;
  }
  else {
    cVar7 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))();
    if ((cVar7 == '\0') || (plVar3 == (longlong *)0x0)) goto LAB_140dae2ff;
    cVar7 = (**(code **)(*plVar3 + 0x20))(plVar3);
    if (cVar7 == '\0') goto LAB_140dae2ff;
    bVar5 = true;
  }
  if (*(longlong **)(param_2 + 0x10) == (longlong *)0x0) {
LAB_140dae315:
    if (plVar3 != (longlong *)0x0) {
      cVar7 = (**(code **)(*plVar3 + 0x20))(plVar3);
      if (cVar7 != '\0') goto LAB_140dae327;
    }
LAB_140dae341:
    uVar8 = 1;
  }
  else {
    cVar7 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))();
    if (cVar7 == '\0') goto LAB_140dae315;
LAB_140dae327:
    if (bVar5) {
      cVar7 = (**(code **)*plVar3)(plVar3,*(undefined8 *)(param_2 + 0x10));
      if (cVar7 != '\0') goto LAB_140dae341;
    }
    uVar8 = 0;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
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
  return uVar8;
}



// FUNCTION 140dae3a0 FUN_140dae3a0 body=218 status=ok
// SIG undefined FUN_140dae3a0(void)

void FUN_140dae3a0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*(char *)param_1[1] != '\0') {
    puVar3 = (undefined8 *)**(longlong **)param_1[2];
    puVar4 = puVar3 + (longlong)(int)(*(longlong **)param_1[2])[1] * 2;
    for (; puVar3 != puVar4; puVar3 = puVar3 + 2) {
      if (((*(longlong **)(param_2 + 8) == (longlong *)0x0) ||
          (cVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar2 == '\0')) ||
         (cVar2 = (**(code **)(*(longlong *)*puVar3 + 0x20))(), cVar2 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (((*(longlong **)(param_2 + 8) == (longlong *)0x0) ||
          (cVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar2 == '\0')) &&
         (cVar2 = (**(code **)(*(longlong *)*puVar3 + 0x20))(), cVar2 == '\0')) {
        return;
      }
      if ((bVar1) &&
         (cVar2 = (**(code **)**(undefined8 **)(param_2 + 8))(*(undefined8 **)(param_2 + 8),*puVar3)
         , cVar2 != '\0')) {
        return;
      }
    }
  }
  FUN_1404b8a10(*param_1 + 0x358,param_2);
  return;
}



// FUNCTION 140dae480 FUN_140dae480 body=180 status=ok
// SIG undefined FUN_140dae480(void)

void FUN_140dae480(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_140db06a0(*param_1,param_3);
  local_28[3] = 0x27;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"Failed to create HostMatchmakingBeacon",0x4e);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dae540 FUN_140dae540 body=385 status=ok
// SIG undefined FUN_140dae540(void)

void FUN_140dae540(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  short *psVar1;
  uint uVar2;
  longlong lVar3;
  longlong local_28;
  ulonglong local_20;
  longlong local_18 [2];
  
  FUN_140db06a0(*param_1,param_3);
  psVar1 = (short *)FUN_140dd56a0(*(undefined4 *)(param_1 + 1));
  local_20 = 0;
  local_28 = 0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (psVar1[lVar3] != 0);
    uVar2 = (int)lVar3 + 1;
    local_20 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    FGenericPlatformString::Memcpy(local_28,psVar1,(longlong)(int)uVar2 * 2);
  }
  local_18[0] = 0;
  local_18[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"search_state",0x1a);
  (**(code **)(*param_3 + 8))(param_3,local_18,&local_28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  local_28 = 0;
  local_20 = 0x26;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"Has Pending Clients, canceling search",0x4c);
  local_18[0] = 0;
  local_18[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_18,&local_28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dae6d0 FUN_140dae6d0 body=180 status=ok
// SIG undefined FUN_140dae6d0(void)

void FUN_140dae6d0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_140db06a0(*param_1,param_3);
  local_28[3] = 0x25;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"FALSE: No playlist content available",0x4a);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dae790 FUN_140dae790 body=366 status=ok
// SIG undefined FUN_140dae790(void)

void FUN_140dae790(undefined4 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_18 [2];
  
  FUN_140db06a0(*(undefined8 *)(param_1 + 4),param_3);
  local_18[1] = 0x17;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"matchmaking_total_time",0x2e);
  (**(code **)(*param_3 + 0x38))(param_3,local_18,param_1[6]);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"num_searches",0x1a);
  (**(code **)(*param_3 + 0x18))(param_3,local_18,*param_1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x1f;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"num_expansions_in_final_search",0x3e);
  (**(code **)(*param_3 + 0x18))(param_3,local_18,param_1[1]);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x2b;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"num_search_results_checked_in_final_search",0x56);
  (**(code **)(*param_3 + 0x18))(param_3,local_18,param_1[2]);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dae900 FUN_140dae900 body=180 status=ok
// SIG undefined FUN_140dae900(void)

void FUN_140dae900(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_140db06a0(*param_1,param_3);
  local_28[3] = 8;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"SUCCESS",0x10);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dae9c0 FUN_140dae9c0 body=180 status=ok
// SIG undefined FUN_140dae9c0(void)

void FUN_140dae9c0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_140db06a0(*param_1,param_3);
  local_28[3] = 0x23;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"FAILED: MatchmakingRound not valid",0x46);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140daea80 FUN_140daea80 body=356 status=ok
// SIG undefined FUN_140daea80(void)

void FUN_140daea80(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  short *psVar1;
  uint uVar2;
  longlong lVar3;
  longlong local_28;
  ulonglong local_20;
  longlong local_18 [2];
  
  FUN_140db06a0(*param_1,param_3);
  psVar1 = (short *)FUN_140dd57a0(*(undefined4 *)(param_1 + 1));
  local_20 = 0;
  local_28 = 0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (psVar1[lVar3] != 0);
    uVar2 = (int)lVar3 + 1;
    local_20 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    FGenericPlatformString::Memcpy(local_28,psVar1,(longlong)(int)uVar2 * 2);
  }
  local_18[0] = 0;
  local_18[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_18,&local_28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"session_id",0x16);
  (**(code **)(*param_3 + 8))(param_3,local_18,param_1 + 2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140daebf0 FUN_140daebf0 body=579 status=ok
// SIG undefined FUN_140daebf0(void)

void FUN_140daebf0(undefined4 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_140db06a0(*(undefined8 *)(param_1 + 4),param_3);
  local_28[3] = 0x15;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"Retrying matchmaking",0x2a);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  local_28[2] = 0;
  local_28[3] = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"retry_delay_seconds",0x28);
  (**(code **)(*param_3 + 0x38))(param_3,local_28 + 2,*param_1);
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  local_28[2] = 0;
  local_28[3] = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"retry_jitter_seconds",0x2a);
  (**(code **)(*param_3 + 0x38))(param_3,local_28 + 2,param_1[1]);
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  local_28[2] = 0;
  local_28[3] = 0x19;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"search_threshold_seconds",0x32);
  (**(code **)(*param_3 + 0x38))(param_3,local_28 + 2,param_1[2]);
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  local_28[2] = 0;
  local_28[3] = 0x20;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"retry_matchmaking_delay_seconds",0x40);
  (**(code **)(*param_3 + 0x38))(param_3,local_28 + 2,param_1[6]);
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  local_28[2] = 0;
  local_28[3] = 0x1d;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"remaining_round_time_seconds",0x3a);
  (**(code **)(*param_3 + 0x38))(param_3,local_28 + 2,param_1[7]);
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140daee40 FUN_140daee40 body=385 status=ok
// SIG undefined FUN_140daee40(void)

void FUN_140daee40(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  short *psVar1;
  uint uVar2;
  longlong lVar3;
  longlong local_28;
  ulonglong local_20;
  longlong local_18 [2];
  
  FUN_140db06a0(*param_1,param_3);
  psVar1 = (short *)FUN_140dd56a0(*(undefined4 *)(param_1 + 1));
  local_20 = 0;
  local_28 = 0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (psVar1[lVar3] != 0);
    uVar2 = (int)lVar3 + 1;
    local_20 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    FGenericPlatformString::Memcpy(local_28,psVar1,(longlong)(int)uVar2 * 2);
  }
  local_18[0] = 0;
  local_18[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"search_state",0x1a);
  (**(code **)(*param_3 + 8))(param_3,local_18,&local_28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  local_28 = 0;
  local_20 = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"We are the new host",0x28);
  local_18[0] = 0;
  local_18[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_18,&local_28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140daefd0 FUN_140daefd0 body=379 status=ok
// SIG undefined FUN_140daefd0(void)

void FUN_140daefd0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_28 [4];
  
  FUN_140db06a0(*param_1,param_3);
  local_28[1] = 0xd;
  local_28[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_28[0],0xd,"setting_name",0xd,0x3f);
  lVar1 = *param_3;
  uVar2 = FName::ToString(param_1 + 1,local_28 + 2);
  (**(code **)(lVar1 + 8))(param_3,local_28,uVar2);
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_28[0],10,"old_value",10,0x3f);
  (**(code **)(*param_3 + 0x18))(param_3,local_28,*(undefined4 *)(param_1 + 2));
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_28[0],10,"new_value",10,0x3f);
  (**(code **)(*param_3 + 0x18))(param_3,local_28,*(undefined4 *)((longlong)param_1 + 0x14));
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140daf150 FUN_140daf150 body=548 status=ok
// SIG undefined FUN_140daf150(void)

void FUN_140daf150(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong local_28 [2];
  
  FUN_140db06a0(*param_1,param_3);
  local_28[1] = 0x24;
  local_28[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Convert<char,wchar_t>
            (local_28[0],0x24,"host_travel_delay_seconds_remaining",0x24,0x3f);
  (**(code **)(*param_3 + 0x38))(param_3,local_28,*(undefined4 *)(*param_1 + 0x2e8));
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x1a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Convert<char,wchar_t>
            (local_28[0],0x1a,"host_travel_delay_seconds",0x1a,0x3f);
  plVar3 = (longlong *)ULevelSequenceBurnInOptions::GetPrivateStaticClass();
  lVar4 = plVar3[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar4 = plVar3[0x1f];
  }
  (**(code **)(*param_3 + 0x38))(param_3,local_28,*(undefined4 *)(lVar4 + 0x3c));
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x22;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Convert<char,wchar_t>
            (local_28[0],0x22,"host_travel_delay_seconds_elapsed",0x22,0x3f);
  plVar3 = (longlong *)ULevelSequenceBurnInOptions::GetPrivateStaticClass();
  lVar4 = plVar3[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar4 = plVar3[0x1f];
  }
  (**(code **)(*param_3 + 0x38))
            (param_3,local_28,*(float *)(lVar4 + 0x3c) - *(float *)(*param_1 + 0x2e8));
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x1e;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Convert<char,wchar_t>
            (local_28[0],0x1e,"host_travel_delay_num_clients",0x1e,0x3f);
  lVar4 = *param_1;
  iVar1 = FUN_140bba270(*(undefined8 *)(lVar4 + 0x88));
  iVar2 = FUN_14046e5c0(*(undefined8 *)(lVar4 + 0x88));
  (**(code **)(*param_3 + 0x18))(param_3,local_28,iVar1 - iVar2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140daf380 FUN_140daf380 body=552 status=ok
// SIG undefined FUN_140daf380(void)

void FUN_140daf380(longlong *param_1,char param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *local_res8;
  char local_res10 [8];
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  char *local_40;
  longlong **local_38;
  
  local_58 = 0;
  local_50 = 0;
  local_res10[0] = param_2;
  if (param_2 != '\0') {
    uVar5 = FWeakObjectPtr::Get(*param_1 + 0x14);
    FUN_140bb7680(uVar5,&local_58);
  }
  local_res8 = &local_58;
  lVar1 = *param_1;
  local_40 = local_res10;
  local_38 = &local_res8;
  local_48 = lVar1;
  iVar4 = FUN_1404cc400(*(undefined8 *)param_1[1],param_1[2]);
  if ((iVar4 < 0) || (*(int *)(*(longlong *)param_1[1] + 0x68) <= iVar4)) {
    if ((*(longlong **)(param_1[2] + 8) != (longlong *)0x0) &&
       (cVar3 = (**(code **)(**(longlong **)(param_1[2] + 8) + 0x20))(), cVar3 != '\0')) {
      FUN_140dae3a0(&local_48,param_1[2]);
    }
  }
  else {
    lVar6 = (longlong)iVar4 * 0x40 + *(longlong *)(*(longlong *)param_1[1] + 0x60);
    if ((*(longlong **)(lVar6 + 0x10) != (longlong *)0x0) &&
       (cVar3 = (**(code **)(**(longlong **)(lVar6 + 0x10) + 0x20))(), cVar3 != '\0')) {
      FUN_140dae3a0(&local_48,lVar6 + 8);
    }
    lVar9 = *(longlong *)(lVar6 + 0x30);
    lVar6 = lVar9 + (longlong)*(int *)(lVar6 + 0x38) * 0x28;
    for (; lVar9 != lVar6; lVar9 = lVar9 + 0x28) {
      if ((*(longlong **)(lVar9 + 8) != (longlong *)0x0) &&
         (cVar3 = (**(code **)(**(longlong **)(lVar9 + 8) + 0x20))(), cVar3 != '\0')) {
        if (local_res10[0] != '\0') {
          puVar7 = (undefined8 *)*local_res8;
          puVar8 = puVar7 + (longlong)(int)local_res8[1] * 2;
          for (; puVar7 != puVar8; puVar7 = puVar7 + 2) {
            if (((*(longlong **)(lVar9 + 8) == (longlong *)0x0) ||
                (cVar3 = (**(code **)(**(longlong **)(lVar9 + 8) + 0x20))(), cVar3 == '\0')) ||
               (cVar3 = (**(code **)(*(longlong *)*puVar7 + 0x20))(), cVar3 == '\0')) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if ((((*(longlong **)(lVar9 + 8) == (longlong *)0x0) ||
                 (cVar3 = (**(code **)(**(longlong **)(lVar9 + 8) + 0x20))(), cVar3 == '\0')) &&
                (cVar3 = (**(code **)(*(longlong *)*puVar7 + 0x20))(), cVar3 == '\0')) ||
               ((bVar2 && (cVar3 = (**(code **)**(undefined8 **)(lVar9 + 8))
                                             (*(undefined8 **)(lVar9 + 8),*puVar7), cVar3 != '\0')))
               ) goto LAB_140daf52c;
          }
        }
        FUN_1404b8a10(lVar1 + 0x358,lVar9);
      }
LAB_140daf52c:
    }
  }
  FUN_140dd67c0(*param_1,*(undefined8 *)(*(longlong *)param_1[1] + 0xc0));
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_58);
  return;
}



// FUNCTION 140daf5b0 FUN_140daf5b0 body=122 status=ok
// SIG undefined FUN_140daf5b0(void)

void FUN_140daf5b0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_18 [2];
  
  FUN_140db06a0(*param_1,param_3);
  local_18[1] = 7;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_18,param_1 + 1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140daf630 FUN_140daf630 body=386 status=ok
// SIG undefined FUN_140daf630(void)

void FUN_140daf630(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  longlong local_28;
  longlong *local_20;
  
  local_28 = *param_2;
  if (local_28 != 0) {
    plVar3 = (longlong *)param_2[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_20 = plVar3;
    cVar6 = FUN_140dade30(param_1[1],&local_28);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar3 + 1;
      lVar5 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    lVar5 = *param_2;
    plVar3 = (longlong *)param_2[1];
    if (cVar6 == '\0') {
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      lVar4 = *param_1;
      iVar2 = *(int *)(lVar4 + 0xd8);
      *(int *)(lVar4 + 0xd8) = iVar2 + 1;
      if (*(int *)(lVar4 + 0xdc) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar4 + 0xd0,iVar2);
      }
      plVar7 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar4 + 0xd0));
    }
    else {
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      lVar4 = *param_1;
      iVar2 = *(int *)(lVar4 + 0xe8);
      *(int *)(lVar4 + 0xe8) = iVar2 + 1;
      if (*(int *)(lVar4 + 0xec) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar4 + 0xe0,iVar2);
      }
      plVar7 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar4 + 0xe0));
    }
    *plVar7 = lVar5;
    plVar7[1] = (longlong)plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar3 + 1;
        lVar5 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140daf7c0 FUN_140daf7c0 body=403 status=ok
// SIG undefined FUN_140daf7c0(void)

void FUN_140daf7c0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  short *psVar1;
  uint uVar2;
  longlong lVar3;
  longlong local_28;
  ulonglong local_20;
  longlong local_18 [2];
  
  FUN_140db06a0(*param_1,param_3);
  local_20 = 0xc;
  local_28 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"beacon_name",0x18);
  (**(code **)(*param_3 + 8))(param_3,&local_28,param_1 + 1);
  if (local_28 != 0) {
    FMemory::Free();
  }
  local_28 = 0;
  local_20 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"beacon_guid",0x18);
  (**(code **)(*param_3 + 8))(param_3,&local_28,param_1 + 3);
  if (local_28 != 0) {
    FMemory::Free();
  }
  psVar1 = (short *)FUN_1404e45c0(*(undefined4 *)(param_1 + 5));
  local_20 = 0;
  local_28 = 0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (psVar1[lVar3] != 0);
    uVar2 = (int)lVar3 + 1;
    local_20 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    FGenericPlatformString::Memcpy(local_28,psVar1,(longlong)(int)uVar2 * 2);
  }
  local_18[0] = 0;
  local_18[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"failure_type",0x1a);
  (**(code **)(*param_3 + 8))(param_3,local_18,&local_28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140daf960 FUN_140daf960 body=180 status=ok
// SIG undefined FUN_140daf960(void)

void FUN_140daf960(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_140db06a0(*param_1,param_3);
  local_28[3] = 0x1c;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"MatchmakingSearch not valid",0x38);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dafa20 FUN_140dafa20 body=180 status=ok
// SIG undefined FUN_140dafa20(void)

void FUN_140dafa20(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28 [4];
  
  FUN_140db06a0(*param_1,param_3);
  local_28[3] = 0x17;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"Destroying old session",0x2e);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"result",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140dafb80 FUN_140dafb80 body=142 status=ok
// SIG undefined FUN_140dafb80(void)

undefined8 * FUN_140dafb80(undefined8 *param_1,ulonglong param_2)

{
  param_1[2] = &PTR_FUN_143f769a0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 7,0);
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 140dafc10 FUN_140dafc10 body=100 status=ok
// SIG undefined FUN_140dafc10(void)

undefined8 * FUN_140dafc10(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}


