// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140d75b20 FUN_140d75b20 body=1342 status=ok
// SIG undefined FUN_140d75b20(void)

void FUN_140d75b20(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *local_res18;
  longlong *local_res20;
  longlong local_110;
  undefined **local_100;
  longlong local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong *local_98;
  int local_90;
  longlong local_88;
  longlong *local_80;
  undefined1 local_78 [8];
  undefined **local_70 [2];
  longlong *local_60;
  longlong local_58;
  
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  if ((((*(longlong *)(param_1 + 0x50) == 0) && (*(longlong *)(param_1 + 0x10) != 0)) &&
      (local_c0 = FUN_140bba5e0(), *(longlong *)(param_1 + 0x10) != 0)) &&
     ((local_c0 != 0 && (lVar9 = FUN_140bb7630(), *(char *)(lVar9 + 0xd8) != '\0')))) {
    local_d0 = (longlong *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x70) = 0;
    FUN_140bafce0(local_d0,0);
    puVar10 = (undefined8 *)FDateTime::UtcNow(local_78);
    *(undefined8 *)(param_1 + 0x40) = *puVar10;
    FUN_140dd4350(param_1);
    plVar11 = (longlong *)UListView::OnItemSelectionChanged(*(undefined8 *)(param_1 + 0x10));
    plVar15 = (longlong *)*plVar11;
    local_b0 = plVar15 + (int)plVar11[1];
    if (plVar15 != local_b0) {
      do {
        if (*plVar15 == 0) {
          bVar3 = true;
          local_res18 = (longlong *)0x0;
          local_110 = 0;
          local_res20 = (longlong *)0x0;
        }
        else {
          bVar5 = true;
          bVar4 = true;
          lVar9 = FUN_142547b50(*plVar15,local_70);
          local_res20 = *(longlong **)(lVar9 + 0x10);
          local_110 = *(longlong *)(lVar9 + 8);
          local_d8 = local_res20;
          if (local_res20 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_res20 + 1) = (int)local_res20[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(local_res20 + 1) = (int)local_res20[1] + 1;
            UNLOCK();
          }
        }
        plVar11 = local_d8;
        if ((bVar3) && (bVar3 = false, local_res18 != (longlong *)0x0)) {
          LOCK();
          plVar17 = local_res18 + 1;
          lVar9 = *plVar17;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_res18)(local_res18);
            LOCK();
            piVar1 = (int *)((longlong)local_res18 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_res18 + 8))(local_res18,1);
            }
          }
        }
        if ((bVar4) && (bVar4 = false, plVar11 != (longlong *)0x0)) {
          LOCK();
          plVar17 = plVar11 + 1;
          lVar9 = *plVar17;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
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
        if (bVar5) {
          bVar5 = false;
          local_70[0] = &PTR_FUN_143f740c8;
          if (local_58 != 0) {
            FMemory::Free();
          }
          plVar11 = local_60;
          local_70[0] = &PTR_FUN_143f73d18;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar17 = local_60 + 1;
            lVar9 = *plVar17;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_60)(local_60);
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
        if (local_110 != 0) {
          plVar11 = local_res20 + 1;
          if (local_res20 != (longlong *)0x0) {
            LOCK();
            *(int *)plVar11 = (int)*plVar11 + 1;
            UNLOCK();
          }
          local_88 = local_110;
          local_80 = local_res20;
          uVar12 = FUN_140bb73a0(*(undefined8 *)(param_1 + 0x10));
          FUN_140d79000(uVar12,&local_98,&local_88);
          if (local_res20 != (longlong *)0x0) {
            LOCK();
            lVar9 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_res20)(local_res20);
              LOCK();
              piVar1 = (int *)((longlong)local_res20 + 0xc);
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*local_res20 + 8))(local_res20,1);
              }
            }
          }
          plVar7 = local_d0;
          plVar17 = local_98 + (longlong)local_90 * 5;
          local_c8 = plVar17;
          if (local_98 != plVar17) {
            plVar14 = local_98 + 2;
            do {
              plVar13 = (longlong *)*plVar14;
              lVar9 = plVar14[-1];
              if (plVar13 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                UNLOCK();
              }
              local_100 = &PTR_FUN_143f740c8;
              local_e8 = 0;
              local_e0 = 0;
              local_f8 = lVar9;
              local_f0 = plVar13;
              iVar8 = FUN_1404cc060(plVar7,&local_100);
              if (iVar8 == -1) {
                iVar8 = *(int *)(param_1 + 0x38);
                lVar16 = (longlong)iVar8;
                *(int *)(param_1 + 0x38) = iVar8 + 1;
                if (*(int *)(param_1 + 0x3c) < iVar8 + 1) {
                  TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar7,iVar8);
                }
                lVar2 = *plVar7;
                *(undefined ***)(lVar2 + lVar16 * 0x28) = &PTR_FUN_143f73d18;
                *(longlong *)(lVar2 + 8 + lVar16 * 0x28) = lVar9;
                *(longlong **)(lVar2 + 0x10 + lVar16 * 0x28) = plVar13;
                if (plVar13 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                  UNLOCK();
                  plVar13 = local_f0;
                }
                *(undefined ***)(lVar2 + lVar16 * 0x28) = &PTR_FUN_143f740c8;
                *(undefined8 *)(lVar2 + 0x18 + lVar16 * 0x28) = 0;
                *(undefined8 *)(lVar2 + 0x20 + lVar16 * 0x28) = 0;
                plVar17 = local_c8;
              }
              plVar6 = local_f0;
              if (plVar13 != (longlong *)0x0) {
                LOCK();
                plVar13 = plVar13 + 1;
                lVar9 = *plVar13;
                *(int *)plVar13 = (int)*plVar13 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)*local_f0)(local_f0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar6 + 0xc);
                  iVar8 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar8 == 1) {
                    (**(code **)(*local_f0 + 8))(local_f0,1);
                  }
                }
              }
              plVar13 = plVar14 + 3;
              plVar14 = plVar14 + 5;
            } while (plVar13 != plVar17);
          }
          local_a8 = local_110;
          if (local_res20 != (longlong *)0x0) {
            LOCK();
            *(int *)plVar11 = (int)*plVar11 + 1;
            UNLOCK();
          }
          local_a0 = local_res20;
          lVar9 = FUN_140d3a750(local_c0,&local_a8);
          plVar11 = local_a0;
          if (local_a0 != (longlong *)0x0) {
            LOCK();
            plVar17 = local_a0 + 1;
            lVar16 = *plVar17;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)lVar16 == 1) {
              (**(code **)*local_a0)(local_a0);
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
          if (((lVar9 != 0) && (FUN_140d3b390(lVar9,&local_b8), local_b8 != 0)) &&
             (local_b8 < *(longlong *)(param_1 + 0x40))) {
            *(longlong *)(param_1 + 0x40) = local_b8;
          }
          FUN_1404bebc0(&local_98);
        }
        if (local_res20 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_res20 + 1;
          lVar9 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_res20)(local_res20);
            LOCK();
            piVar1 = (int *)((longlong)local_res20 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_res20 + 8))(local_res20,1);
            }
          }
        }
        plVar15 = plVar15 + 1;
      } while (plVar15 != local_b0);
    }
    FUN_140dd2be0(param_1);
  }
  return;
}



// FUNCTION 140d76060 FUN_140d76060 body=1780 status=ok
// SIG undefined FUN_140d76060(void)

void FUN_140d76060(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  ulonglong uVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *local_res18;
  longlong *local_res20;
  longlong *local_128;
  undefined8 local_120;
  longlong *local_118;
  longlong local_110;
  longlong *local_108;
  undefined **local_100;
  longlong local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong *local_98;
  int local_90;
  longlong local_88;
  longlong *local_80;
  undefined1 local_78 [8];
  undefined **local_70 [2];
  longlong *local_60;
  longlong local_58;
  
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  if ((((*(longlong *)(param_1 + 0x50) == 0) && (*(longlong *)(param_1 + 0x10) != 0)) &&
      (local_c0 = FUN_140bba5e0(), *(longlong *)(param_1 + 0x10) != 0)) &&
     ((local_c0 != 0 && (lVar11 = FUN_140bb7630(), *(char *)(lVar11 + 0xd8) != '\0')))) {
    local_d0 = (longlong *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x70) = 0;
    FUN_140bafce0(local_d0,0);
    puVar12 = (undefined8 *)FDateTime::UtcNow(local_78);
    *(undefined8 *)(param_1 + 0x40) = *puVar12;
    FUN_140dd4350(param_1);
    plVar13 = (longlong *)UListView::OnItemSelectionChanged(*(undefined8 *)(param_1 + 0x10));
    plVar15 = (longlong *)*plVar13;
    local_b0 = plVar15 + (int)plVar13[1];
    local_108 = plVar15;
    if (plVar15 != local_b0) {
      do {
        local_108 = plVar15;
        if (*plVar15 == 0) {
          bVar5 = true;
          local_res18 = (longlong *)0x0;
          local_110 = 0;
          local_res20 = (longlong *)0x0;
        }
        else {
          bVar7 = true;
          bVar6 = true;
          lVar11 = FUN_142547b50(*plVar15,local_70);
          local_res20 = *(longlong **)(lVar11 + 0x10);
          local_110 = *(longlong *)(lVar11 + 8);
          local_d8 = local_res20;
          if (local_res20 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_res20 + 1) = (int)local_res20[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(local_res20 + 1) = (int)local_res20[1] + 1;
            UNLOCK();
          }
        }
        plVar13 = local_d8;
        lVar11 = local_110;
        if ((bVar5) && (bVar5 = false, local_res18 != (longlong *)0x0)) {
          LOCK();
          plVar4 = local_res18 + 1;
          lVar16 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar16 == 1) {
            (**(code **)*local_res18)(local_res18);
            LOCK();
            piVar1 = (int *)((longlong)local_res18 + 0xc);
            iVar10 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*local_res18 + 8))(local_res18,1);
            }
          }
        }
        if ((bVar6) && (bVar6 = false, plVar13 != (longlong *)0x0)) {
          LOCK();
          plVar4 = plVar13 + 1;
          lVar16 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar16 == 1) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            iVar10 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar13 + 8))(plVar13,1);
            }
          }
        }
        if (bVar7) {
          bVar7 = false;
          local_70[0] = &PTR_FUN_143f740c8;
          if (local_58 != 0) {
            FMemory::Free();
          }
          plVar13 = local_60;
          local_70[0] = &PTR_FUN_143f73d18;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_60 + 1;
            lVar16 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar16 == 1) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar1 = (int *)((longlong)plVar13 + 0xc);
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
          }
        }
        if (lVar11 != 0) {
          plVar15 = local_res20 + 1;
          if (local_res20 != (longlong *)0x0) {
            LOCK();
            *(int *)plVar15 = (int)*plVar15 + 1;
            UNLOCK();
          }
          local_118 = plVar15;
          local_88 = lVar11;
          local_80 = local_res20;
          uVar14 = FUN_140bb73a0(*(undefined8 *)(param_1 + 0x10));
          FUN_140d79000(uVar14,&local_98,&local_88);
          if (local_res20 != (longlong *)0x0) {
            LOCK();
            lVar11 = *plVar15;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*local_res20)(local_res20);
              LOCK();
              piVar1 = (int *)((longlong)local_res20 + 0xc);
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*local_res20 + 8))(local_res20,1);
              }
            }
          }
          local_128 = (longlong *)0x0;
          local_120 = 0;
          lVar11 = FUN_140bb7630(*(undefined8 *)(param_1 + 0x10));
          plVar13 = *(longlong **)(lVar11 + 0x40);
          plVar18 = plVar13 + (longlong)*(int *)(lVar11 + 0x48) * 2;
          uVar8 = local_120;
          plVar4 = local_d0;
          for (; local_120._0_4_ = (int)uVar8, local_d0 = plVar4, plVar13 != plVar18;
              plVar13 = plVar13 + 2) {
            plVar4 = (longlong *)plVar13[1];
            lVar11 = *plVar13;
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
            }
            lVar16 = (longlong)(int)local_120;
            local_120._0_4_ = (int)local_120 + 1;
            local_120._4_4_ = (int)(uVar8 >> 0x20);
            if (local_120._4_4_ < (int)local_120) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_128,uVar8 & 0xffffffff);
            }
            local_128[lVar16 * 2] = lVar11;
            (local_128 + lVar16 * 2)[1] = (longlong)plVar4;
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
              LOCK();
              plVar17 = plVar4 + 1;
              lVar11 = *plVar17;
              *(int *)plVar17 = (int)*plVar17 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*plVar4)(plVar4);
                LOCK();
                piVar1 = (int *)((longlong)plVar4 + 0xc);
                iVar10 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if ((iVar10 == 1) && (plVar4 != (longlong *)0x0)) {
                  (**(code **)(*plVar4 + 8))(plVar4,1);
                }
              }
            }
            uVar8 = local_120;
            plVar4 = local_d0;
          }
          local_c8 = local_98 + (longlong)local_90 * 5;
          if (local_98 != local_c8) {
            plVar18 = local_128 + (longlong)(int)local_120 * 2;
            plVar13 = local_98 + 2;
            local_120 = uVar8;
            do {
              plVar15 = (longlong *)*plVar13;
              local_f8 = plVar13[-1];
              if (plVar15 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                UNLOCK();
              }
              local_100 = &PTR_FUN_143f740c8;
              local_e8 = 0;
              local_e0 = 0;
              for (plVar17 = local_128; local_f0 = plVar15, plVar17 != plVar18;
                  plVar17 = plVar17 + 2) {
                plVar15 = (longlong *)((undefined8 *)*plVar17)[1];
                puVar12 = *(undefined8 **)*plVar17;
                if (plVar15 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                  UNLOCK();
                }
                cVar9 = (**(code **)*puVar12)(puVar12,local_f8);
                if (plVar15 != (longlong *)0x0) {
                  LOCK();
                  plVar2 = plVar15 + 1;
                  lVar11 = *plVar2;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*plVar15)(plVar15);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar15 + 0xc);
                    iVar10 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar10 == 1) {
                      (**(code **)(*plVar15 + 8))(plVar15);
                    }
                  }
                }
                plVar15 = local_f0;
                if (cVar9 != '\0') goto LAB_140d76562;
              }
              iVar10 = FUN_1404cc060(plVar4,&local_100);
              if (iVar10 == -1) {
                iVar10 = *(int *)(param_1 + 0x38);
                lVar11 = (longlong)iVar10;
                *(int *)(param_1 + 0x38) = iVar10 + 1;
                if (*(int *)(param_1 + 0x3c) < iVar10 + 1) {
                  TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar4,iVar10);
                }
                lVar16 = *plVar4;
                *(undefined ***)(lVar16 + lVar11 * 0x28) = &PTR_FUN_143f73d18;
                *(longlong *)(lVar16 + 8 + lVar11 * 0x28) = local_f8;
                *(longlong **)(lVar16 + 0x10 + lVar11 * 0x28) = plVar15;
                if (plVar15 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                  UNLOCK();
                  plVar15 = local_f0;
                }
                *(undefined ***)(lVar16 + lVar11 * 0x28) = &PTR_FUN_143f740c8;
                *(undefined8 *)(lVar16 + 0x18 + lVar11 * 0x28) = 0;
                *(undefined8 *)(lVar16 + 0x20 + lVar11 * 0x28) = 0;
              }
LAB_140d76562:
              plVar17 = local_f0;
              if (plVar15 != (longlong *)0x0) {
                LOCK();
                plVar15 = plVar15 + 1;
                lVar11 = *plVar15;
                *(int *)plVar15 = (int)*plVar15 + -1;
                UNLOCK();
                if ((int)lVar11 == 1) {
                  (**(code **)*local_f0)(local_f0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar17 + 0xc);
                  iVar10 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar10 == 1) {
                    (**(code **)(*local_f0 + 8))(local_f0,1);
                  }
                }
              }
              plVar17 = plVar13 + 3;
              plVar15 = local_118;
              plVar13 = plVar13 + 5;
              uVar8 = local_120;
            } while (plVar17 != local_c8);
          }
          local_120 = uVar8;
          local_a8 = local_110;
          if (local_res20 != (longlong *)0x0) {
            LOCK();
            *(int *)plVar15 = (int)*plVar15 + 1;
            UNLOCK();
          }
          local_a0 = local_res20;
          lVar11 = FUN_140d3a750(local_c0,&local_a8);
          plVar15 = local_a0;
          if (local_a0 != (longlong *)0x0) {
            LOCK();
            plVar13 = local_a0 + 1;
            lVar16 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar16 == 1) {
              (**(code **)*local_a0)(local_a0);
              LOCK();
              piVar1 = (int *)((longlong)plVar15 + 0xc);
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*plVar15 + 8))(plVar15,1);
              }
            }
          }
          if (((lVar11 != 0) && (AController::GetStateName(lVar11,&local_b8), local_b8 != 0)) &&
             (local_b8 < *(longlong *)(param_1 + 0x40))) {
            *(longlong *)(param_1 + 0x40) = local_b8;
          }
          if ((int)local_120 != 0) {
            plVar15 = local_128 + 1;
            iVar10 = (int)local_120;
            do {
              plVar13 = (longlong *)*plVar15;
              if (plVar13 != (longlong *)0x0) {
                LOCK();
                plVar4 = plVar13 + 1;
                lVar11 = *plVar4;
                *(int *)plVar4 = (int)*plVar4 + -1;
                UNLOCK();
                if ((int)lVar11 == 1) {
                  (**(code **)*plVar13)(plVar13);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar13 + 0xc);
                  iVar3 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*plVar13 + 8))(plVar13,1);
                  }
                }
              }
              plVar15 = plVar15 + 2;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
          if (local_128 != (longlong *)0x0) {
            FMemory::Free();
          }
          FUN_1404bebc0(&local_98);
          plVar15 = local_108;
        }
        if (local_res20 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_res20 + 1;
          lVar11 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_res20)(local_res20);
            LOCK();
            piVar1 = (int *)((longlong)local_res20 + 0xc);
            iVar10 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*local_res20 + 8))(local_res20,1);
            }
          }
        }
        plVar15 = plVar15 + 1;
        local_108 = plVar15;
      } while (plVar15 != local_b0);
    }
    FUN_140dd2be0(param_1);
  }
  return;
}



// FUNCTION 140d76760 FUN_140d76760 body=665 status=ok
// SIG undefined FUN_140d76760(void)

void FUN_140d76760(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  int local_res8 [2];
  undefined1 local_res20 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar4 = FUN_140bb74b0();
    local_50 = param_1;
    local_48 = param_2;
    local_40 = lVar4;
    FUN_140d61560(param_3,&local_50);
    iVar10 = 0;
    if (0 < (int)param_3[1]) {
      lVar12 = 0;
      do {
        plVar6 = *(longlong **)(*(longlong *)(lVar12 + *param_3) + 0x10);
        plVar5 = (longlong *)FName::FName(local_res20,L"SPARK",1);
        plVar6 = (longlong *)(**(code **)(*plVar6 + 8))(plVar6,local_78);
        if (*plVar6 == *plVar5) {
          plVar6 = *(longlong **)(*(longlong *)(lVar12 + *param_3) + 0x18);
          plVar5 = *(longlong **)(*(longlong *)(lVar12 + *param_3) + 0x10);
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
          }
          local_60 = plVar5;
          local_58 = plVar6;
          plVar7 = (longlong *)FName::FName(local_70,L"SPARK",1);
          plVar8 = (longlong *)(**(code **)(*plVar5 + 8))(plVar5,local_68);
          if (*plVar8 == *plVar7) {
            FUN_140549810(lVar4 + 0xd0,local_res8,&local_60);
            if (local_res8[0] == -1) {
              lVar9 = 0;
            }
            else {
              lVar9 = *(longlong *)(lVar4 + 0xd0) + (longlong)local_res8[0] * 0x28;
            }
            puVar11 = (undefined8 *)(lVar9 + 0x10);
            if (lVar9 == 0) {
              puVar11 = (undefined8 *)0x0;
            }
            if (puVar11 == (undefined8 *)0x0) {
              plVar5 = (longlong *)0x0;
              plVar6 = (longlong *)0x0;
            }
            else {
              plVar5 = (longlong *)*puVar11;
              plVar6 = (longlong *)puVar11[1];
              if (plVar6 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
                UNLOCK();
              }
            }
          }
          else if (plVar6 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
          }
          plVar7 = local_58;
          if (local_58 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_58 + 1;
            lVar9 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_58)(local_58);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*local_58 + 8))(local_58,1);
              }
            }
          }
          if (plVar5 != (longlong *)0x0) {
            plVar7 = (longlong *)*param_3;
            plVar8 = plVar7 + (longlong)(int)param_3[1] * 2;
            for (; plVar7 != plVar8; plVar7 = plVar7 + 2) {
              cVar3 = (**(code **)*plVar5)(plVar5,*(undefined8 *)(*plVar7 + 0x10));
              if (cVar3 != '\0') {
                TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::
                RemoveAtImpl(param_3,iVar10,1,1);
                iVar10 = iVar10 + -1;
                lVar12 = lVar12 + -0x10;
                break;
              }
            }
          }
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar5 = plVar6 + 1;
            lVar9 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
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
        }
        iVar10 = iVar10 + 1;
        lVar12 = lVar12 + 0x10;
      } while (iVar10 < (int)param_3[1]);
    }
  }
  return;
}



// FUNCTION 140d76a00 FUN_140d76a00 body=211 status=ok
// SIG undefined FUN_140d76a00(void)

int * FUN_140d76a00(longlong *param_1,int *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    if ((*(longlong **)(param_3 + 8) == (longlong *)0x0) ||
       (cVar1 = (**(code **)(**(longlong **)(param_3 + 8) + 0x20))(), cVar1 == '\0')) {
      iVar2 = -1;
    }
    else {
      iVar2 = GetTypeHash(*(undefined8 *)(param_3 + 8));
    }
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar2) * 4);
    if (iVar2 != -1) {
      lVar4 = *param_1;
      do {
        cVar1 = FUniqueNetIdWrapper::operator==(lVar4 + (longlong)iVar2 * 0x90,param_3);
        if (cVar1 != '\0') {
          *param_2 = iVar2;
          return param_2;
        }
        lVar4 = *param_1;
        iVar2 = *(int *)((longlong)iVar2 * 0x90 + 0x88 + lVar4);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 140d76ae0 FUN_140d76ae0 body=208 status=ok
// SIG undefined FUN_140d76ae0(void)

int * FUN_140d76ae0(longlong *param_1,int *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    if ((*(longlong **)(param_3 + 8) == (longlong *)0x0) ||
       (cVar1 = (**(code **)(**(longlong **)(param_3 + 8) + 0x20))(), cVar1 == '\0')) {
      iVar2 = -1;
    }
    else {
      iVar2 = GetTypeHash(*(undefined8 *)(param_3 + 8));
    }
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar2) * 4);
    if (iVar2 != -1) {
      lVar4 = *param_1;
      do {
        cVar1 = FUniqueNetIdWrapper::operator==(lVar4 + (longlong)iVar2 * 0x50,param_3);
        if (cVar1 != '\0') {
          *param_2 = iVar2;
          return param_2;
        }
        lVar4 = *param_1;
        iVar2 = *(int *)((longlong)iVar2 * 0x50 + 0x48 + lVar4);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 140d76bb0 FUN_140d76bb0 body=381 status=ok
// SIG undefined FUN_140d76bb0(void)

int * FUN_140d76bb0(longlong *param_1,int *param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  byte *pbVar8;
  uint *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar11 = (longlong *)*param_3;
    uVar7 = (**(code **)(*plVar11 + 0x18))(plVar11);
    if (uVar7 < 4) {
      pbVar8 = (byte *)(**(code **)(*plVar11 + 0x10))(plVar11);
      uVar7 = (uint)*pbVar8;
    }
    else {
      pcVar3 = *(code **)(*plVar11 + 0x10);
      if (uVar7 < 8) {
        puVar9 = (uint *)(*pcVar3)();
        uVar7 = *puVar9;
      }
      else {
        puVar10 = (undefined8 *)(*pcVar3)(plVar11);
        uVar7 = (int)((ulonglong)*puVar10 >> 0x20) * 0x17 + (int)*puVar10;
      }
    }
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    iVar13 = *(int *)((longlong)plVar11 +
                     ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    if (iVar13 != -1) {
      lVar12 = *param_1;
      do {
        lVar14 = (longlong)iVar13 * 0x80;
        plVar4 = *(longlong **)(lVar14 + 8 + lVar12);
        puVar10 = *(undefined8 **)(lVar14 + lVar12);
        plVar11 = plVar4 + 1;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)plVar11 = (int)*plVar11 + 1;
          UNLOCK();
        }
        if ((puVar10 == (undefined8 *)*param_3) ||
           (cVar6 = (*(code *)**(undefined8 **)*param_3)(), cVar6 != '\0')) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          lVar12 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
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
        if (bVar5) {
          *param_2 = iVar13;
          return param_2;
        }
        lVar12 = *param_1;
        iVar13 = *(int *)(lVar14 + 0x78 + lVar12);
      } while (iVar13 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 140d76d30 FUN_140d76d30 body=113 status=ok
// SIG undefined FUN_140d76d30(void)

int * FUN_140d76d30(longlong *param_1,int *param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)param_3) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x28) == param_3) {
          *param_2 = iVar1;
          return param_2;
        }
        iVar1 = *(int *)(*param_1 + 0x20 + (longlong)iVar1 * 0x28);
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 140d76db0 FUN_140d76db0 body=383 status=ok
// SIG undefined FUN_140d76db0(void)

void FUN_140d76db0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  longlong *local_18;
  longlong *local_10;
  
  (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,&local_res8);
  local_res10 = *param_2;
  uVar5 = FUN_140d84850(param_1,local_res8);
  FUN_1404bb3d0(uVar5,&local_res10);
  iVar4 = FUN_1404bb3d0(param_1 + 0x1c0,&local_res10);
  if (0 < iVar4) {
    FUN_140d94190(param_1 + 0x1f8,param_2);
  }
  lVar6 = FUN_140d84850(param_1,local_res8);
  if (*(int *)(lVar6 + 8) == 0) {
    FUN_1404cf890(&local_18,local_res8);
    if (local_18 != (longlong *)0x0) {
      local_res18 = 0;
      if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
        lVar6 = *(longlong *)(param_1 + 0xe8);
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          lVar6 = param_1 + 0xe0;
        }
        iVar4 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)local_res8 >> 0x20) + (int)local_res8)
                                 & (longlong)*(int *)(param_1 + 0xf0) - 1U) * 4);
        if (iVar4 != -1) {
          lVar6 = *(longlong *)(param_1 + 0xa8);
          do {
            lVar7 = (longlong)iVar4;
            if (*(longlong *)(lVar6 + lVar7 * 0x18) == local_res8) {
              if (iVar4 != -1) {
                local_res18 = *(undefined8 *)(lVar6 + 8 + lVar7 * 0x18);
                TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
                ::Remove((longlong *)(param_1 + 0xa8));
                (**(code **)(*local_18 + 0x1b0))(local_18,&local_res18);
              }
              break;
            }
            iVar4 = *(int *)(lVar6 + 0x10 + lVar7 * 0x18);
          } while (iVar4 != -1);
        }
      }
    }
    plVar3 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
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



// FUNCTION 140d76f30 FUN_140d76f30 body=225 status=ok
// SIG undefined FUN_140d76f30(void)

void FUN_140d76f30(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int local_res8 [2];
  longlong *local_res20;
  
  plVar1 = param_1 + 1;
  FUN_140da3fd0(*param_1,plVar1,2,0,0,param_3,(char)param_1[3]);
  lVar2 = *param_1;
  lVar3 = *(longlong *)(lVar2 + 0x30);
  FUN_140549690(lVar3 + 0x18,local_res8,plVar1);
  if ((local_res8[0] == -1) ||
     (lVar5 = (longlong)local_res8[0] * 0x68 + *(longlong *)(lVar3 + 0x18), lVar5 == 0)) {
    local_res20 = plVar1;
    FUN_140d5d8e0(lVar3 + 0x18,local_res8,&local_res20,0);
    lVar5 = (longlong)local_res8[0] * 0x68 + *(longlong *)(lVar3 + 0x18);
  }
  FUN_140d95b80(lVar5 + 0x10,*(undefined8 *)(lVar2 + 0x28));
  iVar4 = FUN_140d844e0(lVar2,plVar1);
  if ((-1 < iVar4) && (iVar4 < *(int *)(lVar2 + 0x40))) {
    TBaseMulticastDelegate<void,FUniqueNetId_const_&,FUniqueNetId_const_&>::Broadcast
              (lVar2 + 0x10,plVar1,
               *(undefined8 *)
                (*(longlong *)(*(longlong *)(lVar2 + 0x38) + (longlong)iVar4 * 0x10) + 0x10));
  }
  return;
}



// FUNCTION 140d77020 FUN_140d77020 body=1454 status=ok
// SIG undefined FUN_140d77020(void)

void FUN_140d77020(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  void *_Src;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  int local_res18 [2];
  int local_res20 [2];
  undefined8 in_stack_fffffffffffffec8;
  uint uVar16;
  longlong *local_128;
  undefined8 local_120;
  undefined2 *local_118;
  int local_110;
  undefined8 *local_108;
  undefined8 local_100;
  undefined1 local_f8 [8];
  longlong *local_f0;
  int local_e8;
  undefined4 uStack_e4;
  undefined **local_e0;
  undefined8 *local_d8;
  int local_cc;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  longlong *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  longlong local_60 [4];
  
  lVar5 = FUN_142b45e90();
  FUN_142b4a990(*(undefined8 *)(lVar5 + 0x18),&local_98,param_2);
  if (local_98 != 0) {
    FUN_142b47dc0(local_98,&local_a8);
    if (local_a8 != 0) {
      plVar6 = (longlong *)(**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_88);
      plVar15 = (longlong *)0x0;
      lVar5 = *plVar6;
      if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
        lVar14 = *(longlong *)(param_1 + 0xa8);
        if (*(longlong *)(param_1 + 0xa8) == 0) {
          lVar14 = param_1 + 0xa0;
        }
        iVar4 = *(int *)(lVar14 + ((longlong)((int)((ulonglong)lVar5 >> 0x20) + (int)lVar5) &
                                  (longlong)*(int *)(param_1 + 0xb0) - 1U) * 4);
        if (iVar4 != -1) {
          do {
            plVar6 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x68));
            if (*plVar6 == lVar5) {
              if (iVar4 != -1) goto LAB_140d77100;
              break;
            }
            iVar4 = (int)plVar6[3];
          } while (iVar4 != -1);
        }
      }
      plVar6 = plVar15;
LAB_140d77100:
      plVar10 = plVar6 + 1;
      if (plVar6 == (longlong *)0x0) {
        plVar10 = plVar15;
      }
      if (plVar10 != (longlong *)0x0) {
        local_108 = (undefined8 *)0x0;
        local_100 = 0;
        FUN_140d81f00(*plVar10,param_2,&local_108,0);
        local_c0 = local_108 + (longlong)(int)local_100 * 2;
        local_128 = (longlong *)0x0;
        local_120 = 0;
        if (local_108 != local_c0) {
          plVar6 = (longlong *)(param_1 + 0x170);
          puVar8 = local_108;
          do {
            puVar7 = (undefined8 *)
                     (**(code **)(*(longlong *)*puVar8 + 8))((longlong *)*puVar8,local_80);
            (**(code **)(*(longlong *)*puVar7 + 0x28))((longlong *)*puVar7,&local_118);
            plVar10 = local_78;
            if (local_78 != (longlong *)0x0) {
              LOCK();
              plVar15 = local_78 + 1;
              lVar5 = *plVar15;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              plVar15 = local_128;
              if ((int)lVar5 == 1) {
                (**(code **)*local_78)(local_78);
                LOCK();
                piVar1 = (int *)((longlong)plVar10 + 0xc);
                iVar4 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                plVar15 = local_128;
                if (iVar4 == 1) {
                  (**(code **)(*plVar10 + 8))(plVar10,1);
                  plVar15 = local_128;
                }
              }
            }
            FUN_140549810(plVar6,local_res18,param_2);
            if ((local_res18[0] == -1) ||
               (lVar5 = *plVar6 + (longlong)local_res18[0] * 0x28, lVar5 == 0)) {
              local_c8 = param_2;
              FUN_140d5d500(plVar6,local_res20,&local_c8,0);
              lVar5 = *plVar6 + (longlong)local_res20[0] * 0x28;
            }
            puVar7 = *(undefined8 **)(lVar5 + 0x10);
            iVar4 = *(int *)(lVar5 + 0x18);
            for (puVar13 = puVar7; puVar13 != puVar7 + (longlong)iVar4 * 2; puVar13 = puVar13 + 2) {
              puVar12 = &DAT_143f3eda8;
              if (local_110 != 0) {
                puVar12 = local_118;
              }
              if (*(int *)(puVar13 + 1) == 0) {
                puVar11 = &DAT_143f3eda8;
              }
              else {
                puVar11 = (undefined2 *)*puVar13;
              }
              iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar12);
              if (iVar3 == 0) {
                if ((int)((longlong)puVar13 - (longlong)puVar7 >> 4) != -1) goto LAB_140d77353;
                break;
              }
            }
            uVar2 = local_120;
            lVar14 = (longlong)(int)local_120;
            iVar4 = (int)local_120 + 1;
            local_120 = CONCAT44(local_120._4_4_,iVar4);
            if (local_120._4_4_ < iVar4) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_128,uVar2 & 0xffffffff);
              plVar15 = local_128;
            }
            puVar12 = local_118;
            plVar10 = plVar15 + lVar14 * 2;
            *plVar10 = 0;
            lVar14 = (longlong)local_110;
            *(int *)(plVar10 + 1) = local_110;
            if (local_110 == 0) {
              *(undefined4 *)((longlong)plVar10 + 0xc) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar10,local_110,0);
              _guard_xfg_dispatch_icall_nop((void *)*plVar10,puVar12,lVar14 * 2);
            }
            iVar4 = *(int *)(lVar5 + 0x18);
            *(int *)(lVar5 + 0x18) = iVar4 + 1;
            if (*(int *)(lVar5 + 0x1c) < iVar4 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(lVar5 + 0x10),iVar4);
            }
            puVar12 = local_118;
            puVar7 = (undefined8 *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar5 + 0x10));
            *puVar7 = 0;
            lVar5 = (longlong)local_110;
            *(int *)(puVar7 + 1) = local_110;
            if (local_110 == 0) {
              *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar7,local_110,0);
              _guard_xfg_dispatch_icall_nop((void *)*puVar7,puVar12,lVar5 * 2);
            }
LAB_140d77353:
            if (local_118 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            puVar8 = puVar8 + 2;
          } while (puVar8 != local_c0);
          if ((int)local_120 != 0) {
            FTickAnimationPlayers::FTickAnimationPlayers(local_f8);
            uVar16 = (uint)((ulonglong)in_stack_fffffffffffffec8 >> 0x20);
            plVar6 = local_f0;
            for (iVar4 = local_e8; iVar4 != 0; iVar4 = iVar4 + -1) {
              if (*plVar6 != 0) {
                FMemory::Free();
              }
              uVar16 = (uint)((ulonglong)in_stack_fffffffffffffec8 >> 0x20);
              plVar6 = plVar6 + 2;
            }
            TArray<FString,FDefaultAllocator>::CopyToEmpty<FString>
                      (&local_f0,plVar15,local_120 & 0xffffffff,uStack_e4,(ulonglong)uVar16 << 0x20)
            ;
            local_b8 = 0;
            local_b0 = 0;
            local_70 = 0;
            uStack_68 = 0;
            puVar8 = (undefined8 *)operator_new(0x28,&local_b8);
            if (puVar8 != (undefined8 *)0x0) {
              *puVar8 = &DAT_143f3ed00;
              puVar8[1] = param_1;
              puVar8[2] = FUN_140d8b8b0;
              uVar9 = FDelegateHandle::GenerateNewID();
              puVar8[4] = uVar9;
              *puVar8 = &PTR_GetPoolName_143f3ed48;
            }
            local_d8 = (undefined8 *)0x0;
            local_e0 = &PTR_FUN_144530c58;
            if (local_e8 == 0) {
              local_cc = local_e8;
            }
            else {
              TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_d8,local_e8,0);
              puVar8 = local_d8;
              do {
                *puVar8 = 0;
                iVar4 = (int)local_f0[1];
                _Src = (void *)*local_f0;
                *(int *)(puVar8 + 1) = iVar4;
                if (iVar4 == 0) {
                  *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
                }
                else {
                  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar8,iVar4,0);
                  _guard_xfg_dispatch_icall_nop((void *)*puVar8,_Src,(longlong)iVar4 * 2);
                }
                puVar8 = puVar8 + 2;
                local_f0 = local_f0 + 2;
                local_e8 = local_e8 + -1;
              } while (local_e8 != 0);
            }
            uVar9 = FUN_142b46360(local_98,local_60);
            FUN_142ae3440(local_a8,uVar9,&local_e0,&local_b8,&local_70);
            if (local_60[0] != 0) {
              FMemory::Free();
            }
            FUN_142b1e040(local_f8);
          }
        }
        plVar6 = plVar15;
        for (iVar4 = (int)local_120; iVar4 != 0; iVar4 = iVar4 + -1) {
          if (*plVar6 != 0) {
            FMemory::Free();
          }
          plVar6 = plVar6 + 2;
        }
        if (plVar15 != (longlong *)0x0) {
          FMemory::Free(plVar15);
        }
        TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
        ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_108);
      }
    }
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_a0 + 1;
      lVar5 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
  }
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_90 + 1;
    lVar5 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return;
}



// FUNCTION 140d775d0 FUN_140d775d0 body=344 status=ok
// SIG undefined FUN_140d775d0(void)

void FUN_140d775d0(longlong param_1,longlong *param_2)

{
  undefined4 local_res10 [2];
  
  if (*param_2 != 0) {
    local_res10[0] = 0;
    FUN_1416b3bf0(*param_2,&DAT_14629b170,local_res10);
    *(undefined1 *)(param_1 + 8) = (undefined1)local_res10[0];
    if (*param_2 != 0) {
      local_res10[0] = 0;
      FUN_1416b3bf0(*param_2,&DAT_14629b180,local_res10);
      *(undefined1 *)(param_1 + 9) = (undefined1)local_res10[0];
      if (*param_2 != 0) {
        local_res10[0] = 0;
        FUN_1416b3bf0(*param_2,&DAT_14629b190,local_res10);
        *(undefined1 *)(param_1 + 10) = (undefined1)local_res10[0];
        if (*param_2 != 0) {
          local_res10[0] = 0;
          FUN_1416b3bf0(*param_2,&DAT_14629b1a0,local_res10);
          *(undefined1 *)(param_1 + 0xb) = (undefined1)local_res10[0];
          if (*param_2 != 0) {
            local_res10[0] = 0;
            FUN_1416b3bf0(*param_2,&DAT_14629b1b0,local_res10);
            *(undefined1 *)(param_1 + 0xc) = (undefined1)local_res10[0];
            if (*param_2 != 0) {
              local_res10[0] = 0;
              FUN_1416b3bf0(*param_2,&DAT_14629b1c0,local_res10);
              *(undefined1 *)(param_1 + 0xd) = (undefined1)local_res10[0];
              if (*param_2 != 0) {
                local_res10[0] = 0;
                FUN_1416b3bf0(*param_2,&DAT_14629b1d0,local_res10);
                *(undefined1 *)(param_1 + 0xe) = (undefined1)local_res10[0];
                if (*param_2 != 0) {
                  local_res10[0] = 0;
                  FUN_1416b3bf0(*param_2,&DAT_14629b1e0,local_res10);
                  *(undefined1 *)(param_1 + 0xf) = (undefined1)local_res10[0];
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



// FUNCTION 140d77730 FUN_140d77730 body=1715 status=ok
// SIG undefined FUN_140d77730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d77730(longlong param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  double dVar14;
  undefined1 auStack_1a8 [32];
  undefined4 local_188 [2];
  longlong local_180;
  undefined8 local_178;
  float local_170;
  undefined8 local_168;
  undefined8 local_160;
  double local_158;
  longlong *local_150;
  longlong *local_148;
  longlong local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  longlong local_110;
  undefined8 local_108;
  undefined **local_100;
  undefined8 local_f8;
  longlong *plStack_f0;
  longlong local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d8 [16];
  double local_c8;
  double local_c0;
  longlong *local_b8;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  longlong local_78 [2];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  if (*param_2 != 0) {
    local_110 = 0;
    local_108 = 0;
    local_180 = param_1;
    local_b8 = param_2;
    FUN_1416b40a0(*param_2,&DAT_14629ac50,&local_110);
    plVar6 = (longlong *)UOnlineEngineInterface::Get();
    local_168 = 0;
    (**(code **)(*plVar6 + 0x2b8))(plVar6,local_88,&local_110,0);
    (**(code **)(*(longlong *)(param_1 + 8) + 8))(param_1 + 8,local_88);
    local_120 = 0;
    local_118 = 0;
    FUN_1416b40a0(*param_2,&DAT_14629ade0,&local_120);
    plVar6 = (longlong *)UOnlineEngineInterface::Get();
    local_160 = 0;
    (**(code **)(*plVar6 + 0x2b8))(plVar6,local_98,&local_120,0);
    (**(code **)(*(longlong *)(param_1 + 0x30) + 8))(param_1 + 0x30,local_98);
    local_188[0] = 0;
    FUN_1416b3b00(*param_2,&DAT_14629ac60,local_188);
    *(undefined1 *)(param_1 + 0x58) = (undefined1)local_188[0];
    local_130 = 0;
    local_128 = 0;
    FUN_1416b40a0(*param_2,&DAT_14629ac70,&local_130);
    FDateTime::Parse(&local_130,param_1 + 0x60);
    local_140 = 0;
    local_138 = 0;
    FUN_1416b40a0(*param_2,&DAT_14629ac80,&local_140);
    FUN_141678c50(&local_140,param_1 + 0x68);
    FUN_1416b3b00(*param_2,&DAT_14629ac90,param_1 + 0x78);
    FUN_1416b3bf0(*param_2,&DAT_14629aca0,param_1 + 0x7c);
    FUN_1416b40a0(*param_2,&DAT_14629acc0,param_1 + 0x88);
    local_158 = 0.0;
    FUN_1416b3cc0(*param_2,&DAT_14629aec0,&local_c8);
    FUN_1416b3cc0(*param_2,&DAT_14629aed0,&local_c0);
    FUN_1416b3cc0(*param_2,&DAT_14629aee0,&local_158);
    local_170 = (float)local_158;
    *(ulonglong *)(param_1 + 0x98) = CONCAT44((float)local_c0,(float)local_c8);
    *(float *)(param_1 + 0xa0) = local_170;
    if (param_3 == '\x02') {
      FUN_1416b3900(*param_2,&DAT_14629aea0,param_1 + 0x80);
      FUN_1416b3bf0(*param_2,&DAT_14629aeb0,param_1 + 0x84);
    }
    local_150 = (longlong *)0x0;
    cVar5 = FUN_1416b3850(*param_2,&DAT_14629ad40,&local_150);
    if (cVar5 != '\0') {
      plVar6 = (longlong *)*local_150;
      plVar13 = plVar6 + (longlong)(int)local_150[1] * 2;
      for (; plVar6 != plVar13; plVar6 = plVar6 + 2) {
        plVar4 = (longlong *)plVar6[1];
        lVar10 = *plVar6;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        if (lVar10 != 0) {
          local_100 = &PTR_FUN_143f740c8;
          local_e8 = 0;
          local_f8 = 0;
          plStack_f0 = (undefined8 *)0x0;
          local_dc = 0;
          plVar7 = (longlong *)UOnlineEngineInterface::Get();
          local_178 = 0;
          lVar11 = *plVar7;
          uVar8 = FJsonValue::AsString(lVar10,local_78);
          (**(code **)(lVar11 + 0x2b8))(plVar7,&local_a8,uVar8,local_178);
          if (local_78[0] != 0) {
            FMemory::Free();
          }
          local_68 = (undefined4)local_a8;
          uStack_64 = (undefined4)((ulonglong)local_a8 >> 0x20);
          uStack_60 = SUB84(plStack_a0,0);
          uStack_5c = (undefined4)((ulonglong)plStack_a0 >> 0x20);
          local_e0 = 0;
          local_d8._0_8_ = 0;
          plVar7 = (undefined8 *)0x0;
          if (plStack_a0 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
            UNLOCK();
            local_d8._0_8_ = local_f8;
            plVar7 = plStack_f0;
          }
          local_d8._8_8_ = plVar7;
          local_f8 = local_a8;
          plStack_f0 = plStack_a0;
          if (plVar7 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(plVar7 + 1);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*(longlong *)local_d8._8_8_ + 8))(local_d8._8_8_,1);
              }
            }
          }
          lVar10 = local_180;
          lVar11 = local_180 + 0xa8;
          iVar3 = *(int *)(local_180 + 0x150);
          lVar12 = (longlong)iVar3;
          *(int *)(local_180 + 0x150) = iVar3 + 1;
          if (*(int *)(local_180 + 0x154) < iVar3 + 1) {
            TArray<FGPUSortManager::FSortBatch,TInlineAllocator<4,TSizedDefaultAllocator<32>_>_>::
            ResizeGrow(lVar11,iVar3);
          }
          plVar7 = plStack_a0;
          lVar9 = *(longlong *)(lVar10 + 0x148);
          if (*(longlong *)(lVar10 + 0x148) == 0) {
            lVar9 = lVar11;
          }
          *(undefined ***)(lVar9 + lVar12 * 0x28) = &PTR_FUN_143f73d18;
          *(undefined8 *)(lVar9 + 8 + lVar12 * 0x28) = local_f8;
          *(longlong **)(lVar9 + 0x10 + lVar12 * 0x28) = plStack_f0;
          if (plStack_f0 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_f0 + 1) = (int)plStack_f0[1] + 1;
            UNLOCK();
          }
          *(undefined ***)(lVar9 + lVar12 * 0x28) = &PTR_FUN_143f740c8;
          *(undefined8 *)(lVar9 + 0x18 + lVar12 * 0x28) = 0;
          *(undefined8 *)(lVar9 + 0x20 + lVar12 * 0x28) = 0;
          if (plStack_a0 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_a0 + 1;
            lVar10 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plStack_a0)(plStack_a0);
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
          plVar7 = plStack_f0;
          if (local_e8 != 0) {
            FMemory::Free();
          }
          plVar2 = plStack_f0;
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar7 + 1;
            lVar10 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plStack_f0)(plStack_f0);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plStack_f0 + 8))(plStack_f0,1);
              }
            }
          }
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
        param_1 = local_180;
        param_2 = local_b8;
      }
    }
    local_148 = (longlong *)0x0;
    cVar5 = FUN_1416b3850(*param_2,&DAT_14629ad50,&local_148);
    if (cVar5 != '\0') {
      plVar6 = (longlong *)*local_148;
      plVar13 = plVar6 + (longlong)(int)local_148[1] * 2;
      for (; plVar6 != plVar13; plVar6 = plVar6 + 2) {
        plVar4 = (longlong *)plVar6[1];
        lVar10 = *plVar6;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        if (lVar10 != 0) {
          dVar14 = (double)FJsonValue::AsNumber();
          iVar3 = *(int *)(param_1 + 0x170);
          *(int *)(param_1 + 0x170) = iVar3 + 1;
          if (*(int *)(param_1 + 0x174) < iVar3 + 1) {
            TArray<enum_D3D12_RESOURCE_STATES,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                      (param_1 + 0x158,iVar3);
          }
          lVar10 = *(longlong *)(param_1 + 0x168);
          if (*(longlong *)(param_1 + 0x168) == 0) {
            lVar10 = param_1 + 0x158;
          }
          *(int *)(lVar10 + (longlong)iVar3 * 4) = (int)(longlong)dVar14;
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
            if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        param_1 = local_180;
      }
    }
    if (local_140 != 0) {
      FMemory::Free();
    }
    if (local_130 != 0) {
      FMemory::Free();
    }
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_90 + 1;
      lVar10 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    if (local_120 != 0) {
      FMemory::Free();
    }
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_80 + 1;
      lVar10 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    if (local_110 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140d77df0 FUN_140d77df0 body=59 status=ok
// SIG undefined FUN_140d77df0(void)

void FUN_140d77df0(longlong param_1,longlong *param_2)

{
  FUN_140d77730();
  if (*param_2 != 0) {
    FUN_1416b3b00(*param_2,&DAT_14629ae30,param_1 + 0x178);
  }
  return;
}



// FUNCTION 140d77e30 FUN_140d77e30 body=103 status=ok
// SIG undefined FUN_140d77e30(void)

void FUN_140d77e30(longlong param_1,longlong *param_2)

{
  FUN_140d77730();
  if (*param_2 != 0) {
    FUN_1416b3bf0(*param_2,&DAT_14629ada0,param_1 + 0x178);
    FUN_1416b3b00(*param_2,&DAT_14629adc0,param_1 + 0x17c);
    FUN_1416b3b00(*param_2,&DAT_14629add0,param_1 + 0x180);
  }
  return;
}



// FUNCTION 140d77ea0 FUN_140d77ea0 body=404 status=ok
// SIG undefined FUN_140d77ea0(void)

void FUN_140d77ea0(longlong param_1,longlong *param_2,undefined1 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *local_res20;
  undefined8 local_38;
  longlong *local_30;
  
  if (param_4 != 0) {
    FUN_140d77730();
    if ((*param_2 != 0) &&
       (cVar6 = FUN_1416b3850(*param_2,&DAT_14629ae50,&local_res20), cVar6 != '\0')) {
      plVar10 = (longlong *)(param_1 + 0x178);
      FUN_140d73ef0(plVar10);
      puVar11 = (undefined8 *)*local_res20;
      puVar9 = puVar11 + (longlong)(int)local_res20[1] * 2;
      for (; puVar11 != puVar9; puVar11 = puVar11 + 2) {
        puVar8 = (undefined8 *)(*(code *)**(undefined8 **)*puVar11)();
        local_38 = *puVar8;
        local_30 = (longlong *)puVar8[1];
        if (local_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
        }
        iVar3 = *(int *)(param_1 + 0x180);
        iVar7 = iVar3 + 1;
        *(int *)(param_1 + 0x180) = iVar7;
        if (*(int *)(param_1 + 0x184) < iVar7) {
          TArray<FEnvQueryInstanceCache,FDefaultAllocator>::ResizeGrow(plVar10);
        }
        puVar8 = (undefined8 *)((longlong)iVar3 * 0x188 + *plVar10);
        _guard_xfg_dispatch_icall_nop(puVar8,0,0x188);
        FUN_140d63580(puVar8);
        *(undefined4 *)(puVar8 + 0x2f) = 0;
        *(undefined8 *)((longlong)puVar8 + 0x17c) = 0xffffffffffffffff;
        *puVar8 = &PTR_FUN_144530608;
        *(undefined1 *)(puVar8 + 0xb) = 0xb;
        FUN_140d77e30(puVar8,&local_38,param_3,param_4);
        plVar5 = local_30;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_30 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140d78040 FUN_140d78040 body=135 status=ok
// SIG undefined FUN_140d78040(void)

void FUN_140d78040(longlong param_1,longlong *param_2,char param_3)

{
  undefined4 local_res10 [2];
  
  FUN_140d77730();
  if (*param_2 != 0) {
    if (param_3 == '\x01') {
      FUN_140b26200(param_2,&DAT_14629ad70);
    }
    else {
      FUN_1416b40a0(*param_2,&DAT_14629ad60,param_1 + 0x178);
    }
    local_res10[0] = 0;
    FUN_1416b3b00(*param_2,&DAT_14629ad80,local_res10);
    *(undefined1 *)(param_1 + 0x188) = (undefined1)local_res10[0];
  }
  return;
}



// FUNCTION 140d780d0 FUN_140d780d0 body=109 status=ok
// SIG undefined FUN_140d780d0(void)

void FUN_140d780d0(longlong param_1,longlong *param_2,char param_3)

{
  FUN_140d77730();
  if (*param_2 != 0) {
    if (param_3 == '\x01') {
      FUN_140b26200(param_2,&DAT_14629ad70);
      return;
    }
    FUN_1416b40a0(*param_2,&DAT_14629ad60,param_1 + 0x178);
  }
  return;
}



// FUNCTION 140d78140 FUN_140d78140 body=125 status=ok
// SIG undefined FUN_140d78140(void)

void FUN_140d78140(longlong param_1,longlong *param_2)

{
  FUN_140d77730();
  if (*param_2 != 0) {
    FUN_1416b3b00(*param_2,&DAT_14629adf0,param_1 + 0x178);
    FUN_1416b3b00(*param_2,&DAT_14629ae10,param_1 + 0x184);
    FUN_1416b3b00(*param_2,&DAT_14629ae00,param_1 + 0x17c);
    FUN_1416b3b00(*param_2,&DAT_14629ae20,param_1 + 0x180);
  }
  return;
}



// FUNCTION 140d781c0 FUN_140d781c0 body=59 status=ok
// SIG undefined FUN_140d781c0(void)

void FUN_140d781c0(longlong param_1,longlong *param_2)

{
  FUN_140d77730();
  if (*param_2 != 0) {
    FUN_1416b3bf0(*param_2,&DAT_14629ad20,param_1 + 0x178);
  }
  return;
}



// FUNCTION 140d78200 FUN_140d78200 body=101 status=ok
// SIG undefined FUN_140d78200(void)

void FUN_140d78200(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  FUN_140d77730();
  if (*param_2 != 0) {
    local_18[0] = 0;
    local_18[1] = 0;
    FUN_1416b40a0(*param_2,&DAT_14629ae90,local_18);
    FUN_141678c50(local_18,param_1 + 0x178);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140d78270 FUN_140d78270 body=59 status=ok
// SIG undefined FUN_140d78270(void)

void FUN_140d78270(longlong param_1,longlong *param_2)

{
  FUN_140d77730();
  if (*param_2 != 0) {
    FUN_1416b3b00(*param_2,&DAT_14629ad10,param_1 + 0x178);
  }
  return;
}



// FUNCTION 140d782c0 FUN_140d782c0 body=518 status=ok
// SIG undefined FUN_140d782c0(void)

void FUN_140d782c0(longlong param_1,longlong *param_2,char param_3,longlong *param_4)

{
  longlong lVar1;
  
  if (param_4 == (longlong *)0x0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(*param_4 + 0x148))(param_4);
  }
  if ((*param_2 != 0) && (lVar1 != 0)) {
    if (param_3 == '\x01') {
      FUN_140b26200(param_2,&DAT_14629b090);
      FUN_140b26200(param_2,&DAT_14629b0a0,param_1 + 0x18);
      FUN_140b26200(param_2,&DAT_14629b0b0,param_1 + 0x28);
      FUN_140b26200(param_2,&DAT_14629b0c0,param_1 + 0x38);
      FUN_140b26200(param_2,&DAT_14629b0d0,param_1 + 0x48);
      FUN_140b26200(param_2,&DAT_14629b0e0,param_1 + 0x58);
      FUN_140b26200(param_2,&DAT_14629b0f0,param_1 + 0x68);
      FUN_140b26200(param_2,&DAT_14629b100,param_1 + 0x78);
    }
    else {
      FUN_1416b40a0(*param_2,&DAT_14629b010,param_1 + 8);
      FUN_1416b40a0(*param_2,&DAT_14629b020,param_1 + 0x18);
      FUN_1416b40a0(*param_2,&DAT_14629b030,param_1 + 0x28);
      FUN_1416b40a0(*param_2,&DAT_14629b040,param_1 + 0x38);
      FUN_1416b40a0(*param_2,&DAT_14629b050,param_1 + 0x48);
      FUN_1416b40a0(*param_2,&DAT_14629b060,param_1 + 0x58);
      FUN_1416b40a0(*param_2,&DAT_14629b070,param_1 + 0x68);
      FUN_1416b40a0(*param_2,&DAT_14629b080,param_1 + 0x78);
    }
    FUN_1416b3bf0(*param_2,&DAT_14629b110,param_1 + 0x88);
    FUN_1416b3bf0(*param_2,&DAT_14629b120,param_1 + 0x8c);
    FUN_1416b3bf0(*param_2,&DAT_14629b130,param_1 + 0x90);
    FUN_1416b3bf0(*param_2,&DAT_14629b140,param_1 + 0x94);
  }
  return;
}



// FUNCTION 140d784d0 FUN_140d784d0 body=298 status=ok
// SIG undefined FUN_140d784d0(void)

void FUN_140d784d0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  double local_res10 [3];
  double local_28;
  double local_20 [3];
  
  if ((*param_2 != 0) && (param_4 != 0)) {
    FUN_1416b3b00(*param_2,&DAT_14629af20,param_1 + 8);
    FUN_1416b40a0(*param_2,&DAT_14629af30,param_1 + 0x10);
    FUN_1416b3bf0(*param_2,&DAT_14629af60,param_1 + 0x34);
    FUN_1416b3bf0(*param_2,&DAT_14629af70,param_1 + 0x38);
    FUN_1416b3bf0(*param_2,&DAT_14629aff0,param_1 + 0x50);
    FUN_1416b3bf0(*param_2,&DAT_14629b000,param_1 + 0x54);
    FUN_1416b3900(*param_2,&DAT_14629afd0,param_1 + 0x4a);
    local_res10[0] = 0.0;
    FUN_1416b3cc0(*param_2,&DAT_14629af80,&local_28);
    FUN_1416b3cc0(*param_2,&DAT_14629af90,local_20);
    FUN_1416b3cc0(*param_2,&DAT_14629afa0,local_res10);
    *(ulonglong *)(param_1 + 0x3c) = CONCAT44((float)local_20[0],(float)local_28);
    *(float *)(param_1 + 0x44) = (float)local_res10[0];
  }
  return;
}



// FUNCTION 140d78600 FUN_140d78600 body=520 status=ok
// SIG undefined FUN_140d78600(void)

void FUN_140d78600(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ulong *puVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  double dVar10;
  longlong *local_res10;
  longlong *local_78;
  undefined8 local_70;
  ulong local_68;
  float fStack_64;
  undefined8 uStack_60;
  longlong local_58;
  int local_50;
  
  if (*param_2 != 0) {
    lVar1 = param_1 + 8;
    *(undefined4 *)(param_1 + 0x40) = 0;
    if (*(int *)(param_1 + 0x44) != 0) {
      FUN_140d97d10(lVar1,0);
    }
    local_res10 = (longlong *)0x0;
    cVar5 = FUN_1416b3850(*param_2,&DAT_14629b150,&local_res10);
    if (cVar5 != '\0') {
      puVar8 = (undefined8 *)*local_res10;
      puVar9 = puVar8 + (longlong)(int)local_res10[1] * 2;
      for (; puVar8 != puVar9; puVar8 = puVar8 + 2) {
        FJsonValue::AsString(*puVar8,&local_58);
        if (1 < local_50) {
          local_78 = (longlong *)0x0;
          local_70 = 0;
          FUN_141594550(&local_58,&local_78,&DAT_144511ebc,0);
          iVar3 = (int)local_70;
          plVar4 = local_78;
          if ((int)local_70 == 2) {
            uStack_60 = 0;
            if ((int)local_78[1] == 0) {
              pwVar6 = L"";
            }
            else {
              pwVar6 = (wchar_t *)*local_78;
            }
            local_68 = wcstoul(pwVar6,(wchar_t **)0x0,10);
            if ((int)local_78[3] == 0) {
              pwVar6 = L"";
            }
            else {
              pwVar6 = (wchar_t *)local_78[2];
            }
            dVar10 = _wtof(pwVar6);
            fStack_64 = (float)dVar10;
            if (0.0 <= fStack_64) {
              if (1.0 <= fStack_64) {
                fStack_64 = 1.0;
              }
            }
            else {
              fStack_64 = 0.0;
            }
            iVar3 = *(int *)(param_1 + 0x40);
            *(int *)(param_1 + 0x40) = iVar3 + 1;
            if (*(int *)(param_1 + 0x44) < iVar3 + 1) {
              TArray<FCurveHandle,TInlineAllocator<3,FDefaultAllocator>_>::ResizeGrow(lVar1,iVar3);
            }
            lVar7 = *(longlong *)(param_1 + 0x38);
            if (*(longlong *)(param_1 + 0x38) == 0) {
              lVar7 = lVar1;
            }
            puVar2 = (ulong *)(lVar7 + (longlong)iVar3 * 0x10);
            *puVar2 = local_68;
            puVar2[1] = (ulong)fStack_64;
            puVar2[2] = (ulong)uStack_60;
            puVar2[3] = uStack_60._4_4_;
            iVar3 = (int)local_70;
            plVar4 = local_78;
          }
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            if (*plVar4 != 0) {
              FMemory::Free();
            }
            plVar4 = plVar4 + 2;
          }
          if (local_78 != (longlong *)0x0) {
            FMemory::Free(local_78);
          }
        }
        if (local_58 != 0) {
          FMemory::Free();
        }
      }
    }
  }
  return;
}



// FUNCTION 140d78810 FUN_140d78810 body=554 status=ok
// SIG undefined FUN_140d78810(void)

void FUN_140d78810(longlong param_1,longlong *param_2,undefined1 param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50 [4];
  undefined1 local_30 [8];
  longlong *local_28;
  
  if ((*param_2 != 0) && (param_4 != 0)) {
    local_50[2] = 0;
    local_50[3] = 0;
    FUN_1416b40a0(*param_2,&DAT_14629b1f0,local_50 + 2);
    plVar4 = (longlong *)UOnlineEngineInterface::Get();
    (**(code **)(*plVar4 + 0x2b8))(plVar4,local_30,local_50 + 2,0);
    (**(code **)(*(longlong *)(param_1 + 8) + 8))(param_1 + 8,local_30);
    local_50[0] = 0;
    local_50[1] = 0;
    FUN_1416b40a0(*param_2,&DAT_14629b200,local_50);
    FDateTime::Parse(local_50,param_1 + 0x30);
    local_78 = 0;
    FUN_1416b3e60(*param_2,&DAT_14629b210,&local_78);
    if (local_78 != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))(param_1 + 0x38,local_78,param_3,param_4);
    }
    local_70 = 0;
    FUN_1416b3e60(*param_2,&DAT_14629b220,&local_70);
    if (local_70 != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x90) + 0x20))
                ((longlong *)(param_1 + 0x90),local_70,param_3,param_4);
    }
    local_68 = 0;
    FUN_1416b3e60(*param_2,&DAT_14629b230,&local_68);
    if (local_68 != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x1a8) + 0x20))
                ((longlong *)(param_1 + 0x1a8),local_68,param_3,param_4);
    }
    local_60 = 0;
    FUN_1416b3e60(*param_2,&DAT_14629b240,&local_60);
    if (local_60 != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x1f0) + 0x20))
                ((longlong *)(param_1 + 0x1f0),local_60,param_3,param_4);
    }
    local_58 = 0;
    FUN_1416b3e60(*param_2,&DAT_14629b250,&local_58);
    if (local_58 != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x230) + 0x20))
                ((longlong *)(param_1 + 0x230),local_58,param_3,param_4);
    }
    if (local_50[0] != 0) {
      FMemory::Free();
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_28 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)local_28 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_28 + 8))(local_28,1);
        }
      }
    }
    if (local_50[2] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140d78a40 FUN_140d78a40 body=129 status=ok
// SIG undefined FUN_140d78a40(void)

void FUN_140d78a40(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_18;
  longlong *local_10;
  
  Online::GetSessionInterface(&local_18,*(undefined8 *)(param_1 + 0x20));
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x110))(local_18,param_1 + 8,param_2);
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
  return;
}



// FUNCTION 140d78ad0 FUN_140d78ad0 body=232 status=ok
// SIG undefined FUN_140d78ad0(void)

longlong * FUN_140d78ad0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  char cVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  plVar10 = (longlong *)*param_1;
  plVar9 = plVar10 + (longlong)(int)param_1[1] * 2;
  while( true ) {
    if (plVar10 == plVar9) {
      *param_2 = 0;
      param_2[1] = 0;
      return param_2;
    }
    puVar4 = (undefined8 *)*param_3;
    uVar5 = *(undefined8 *)*plVar10;
    plVar6 = (longlong *)((undefined8 *)*plVar10)[1];
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    cVar8 = (**(code **)*puVar4)(puVar4,uVar5);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    if (cVar8 != '\0') break;
    plVar10 = plVar10 + 2;
  }
  *param_2 = *plVar10;
  lVar7 = plVar10[1];
  param_2[1] = lVar7;
  if (lVar7 == 0) {
    return param_2;
  }
  LOCK();
  *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
  UNLOCK();
  return param_2;
}



// FUNCTION 140d78bc0 FUN_140d78bc0 body=388 status=ok
// SIG undefined FUN_140d78bc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140d78bc0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_38 [2];
  longlong local_28;
  longlong local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14686edf0) {
    _Init_thread_header(&DAT_14686edf0);
    if (DAT_14686edf0 == -1) {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"FriendEvents",1);
      uVar2 = FUN_14217c7e0(local_38,L"gbxtelemetry",L"FriendEvents",&DAT_144511424);
      FUN_14217c110(&DAT_14686edd8,*puVar1,uVar2);
      if (local_18 != 0) {
        FMemory::Free();
      }
      if (local_28 != 0) {
        FMemory::Free();
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      FUN_14217bd20(&DAT_14686ede0);
      FUN_14217bd20(&DAT_14686ede8);
      uVar2 = DAT_14686edd8;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"player_id",1);
      puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
      uVar2 = DAT_14686edd8;
      _DAT_14686ede0 = *puVar1;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"player_character_guid",1);
      puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
      _DAT_14686ede8 = *puVar1;
      _Init_thread_footer(&DAT_14686edf0);
      return &DAT_14686edd8;
    }
  }
  return &DAT_14686edd8;
}



// FUNCTION 140d78d50 FUN_140d78d50 body=676 status=ok
// SIG undefined FUN_140d78d50(void)

longlong * FUN_140d78d50(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  uint *puVar12;
  int local_a8;
  uint uStack_a4;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  uint uStack_74;
  int iStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
  uStack_a4 = 1;
  uVar2 = *(uint *)(param_1 + 0x38);
  puVar1 = (uint *)(param_1 + 0x20);
  local_a8 = 0;
  uStack_94 = 0;
  iStack_90 = 0;
  if (uVar2 != 0) {
    puVar12 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar11 = *puVar12;
    iStack_90 = 0;
    local_a8 = 0;
    while (uVar11 == 0) {
      lVar8 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar6 = local_a8 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar6;
      if (bVar4) goto LAB_140d78e1f;
      uVar11 = puVar12[lVar8 + 1];
    }
    uStack_a4 = -uVar11 & uVar11;
    iVar6 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_94 = (iStack_90 - iVar6) + 0x1f;
    if ((int)uVar2 < (int)uStack_94) {
LAB_140d78e1f:
      uStack_94 = uVar2;
    }
  }
  uStack_74 = *(uint *)(param_1 + 0x38);
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_94;
  local_40 = CONCAT44(uStack_8c,iStack_90);
  uVar11 = uStack_74 & 0xffffffe0;
  iStack_58 = local_a8;
  uStack_54 = uStack_a4;
  local_50 = puVar1;
  if (uStack_74 != uVar2) {
    puVar12 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar7 = puVar12[(int)uStack_74 >> 5] & -1 << ((byte)uStack_74 & 0x1f);
    iVar6 = (int)uStack_74 >> 5;
    while (uVar7 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_140d78efd;
      uVar7 = puVar12[(longlong)iVar6 + 1];
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
    uStack_74 = (uVar11 - iVar6) + 0x1f;
    if ((int)uVar2 < (int)uStack_74) {
LAB_140d78efd:
      uStack_74 = uVar2;
    }
  }
  do {
    if ((uStack_44 == uStack_74) && (local_50 == puVar1)) {
      *param_2 = 0;
      param_2[1] = 0;
      return param_2;
    }
    plVar9 = *(longlong **)((longlong)(int)uStack_44 * 0x40 + 0x28 + *(longlong *)(param_1 + 0x10));
    plVar10 = plVar9 + (longlong)
                       *(int *)((longlong)(int)uStack_44 * 0x40 + 0x30 +
                               *(longlong *)(param_1 + 0x10)) * 2;
    for (; plVar9 != plVar10; plVar9 = plVar9 + 2) {
      if ((((*plVar9 != 0) && (plVar3 = *(longlong **)(*plVar9 + 0x10), plVar3 != (longlong *)0x0))
          && (cVar5 = (**(code **)(*plVar3 + 0x20))(), cVar5 != '\0')) &&
         (((*(longlong **)(*plVar9 + 0x10) != (longlong *)0x0 &&
           (cVar5 = (**(code **)(**(longlong **)(*plVar9 + 0x10) + 0x20))(), cVar5 != '\0')) &&
          (cVar5 = (*(code *)**(undefined8 **)*param_3)
                             ((undefined8 *)*param_3,*(undefined8 *)(*plVar9 + 0x10)), cVar5 != '\0'
          )))) {
        *param_2 = *plVar9;
        lVar8 = plVar9[1];
        param_2[1] = lVar8;
        if (lVar8 == 0) {
          return param_2;
        }
        LOCK();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        UNLOCK();
        return param_2;
      }
    }
    uStack_48 = uStack_48 & ~uStack_54;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_58);
  } while( true );
}



// FUNCTION 140d79000 FUN_140d79000 body=676 status=ok
// SIG undefined FUN_140d79000(void)

longlong * FUN_140d79000(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  int local_res8 [2];
  undefined ***local_res10;
  undefined **local_68;
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  undefined8 local_48;
  
  *param_2 = 0;
  param_2[1] = 0;
  local_58 = (longlong *)param_3[1];
  local_60 = (longlong *)*param_3;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
  }
  plVar8 = (longlong *)(param_1 + 0x10);
  local_68 = &PTR_FUN_143f740c8;
  local_50 = 0;
  local_48 = 0;
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    if ((local_60 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*local_60 + 0x20))(local_60), cVar5 == '\0')) {
      iVar6 = -1;
    }
    else {
      iVar6 = GetTypeHash(local_60);
    }
    lVar7 = *(longlong *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      lVar7 = param_1 + 0x48;
    }
    iVar6 = *(int *)(lVar7 + ((longlong)*(int *)(param_1 + 0x58) - 1U & (longlong)iVar6) * 4);
    if (iVar6 != -1) {
      lVar7 = *plVar8;
      do {
        lVar9 = (longlong)iVar6 * 0x40;
        plVar10 = *(longlong **)(lVar7 + 8 + lVar9);
        if ((((plVar10 == (longlong *)0x0) ||
             (cVar5 = (**(code **)(*plVar10 + 0x20))(), cVar5 == '\0')) ||
            (local_60 == (longlong *)0x0)) ||
           (cVar5 = (**(code **)(*local_60 + 0x20))(local_60), cVar5 == '\0')) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        plVar10 = *(longlong **)(lVar7 + lVar9 + 8);
        if ((((plVar10 == (longlong *)0x0) ||
             (cVar5 = (**(code **)(*plVar10 + 0x20))(), cVar5 == '\0')) &&
            ((local_60 == (longlong *)0x0 ||
             (cVar5 = (**(code **)(*local_60 + 0x20))(local_60), cVar5 == '\0')))) ||
           ((bVar4 && (cVar5 = (**(code **)*local_60)(local_60,*(undefined8 *)(lVar7 + lVar9 + 8)),
                      cVar5 != '\0')))) {
          if ((iVar6 != -1) && (lVar9 = lVar9 + *plVar8, lVar9 != 0)) goto LAB_140d7919c;
          break;
        }
        lVar7 = *plVar8;
        iVar6 = *(int *)(lVar7 + 0x38 + lVar9);
      } while (iVar6 != -1);
    }
  }
  local_res10 = &local_68;
  FUN_140d5c380(plVar8,local_res8,&local_res10,0);
  lVar9 = (longlong)local_res8[0] * 0x40 + *plVar8;
LAB_140d7919c:
  local_68 = &PTR_FUN_143f740c8;
  if (local_50 != 0) {
    FMemory::Free();
  }
  plVar8 = local_58;
  local_68 = &PTR_FUN_143f73d18;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_58 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  plVar8 = *(longlong **)(lVar9 + 0x28);
  plVar10 = plVar8 + (longlong)*(int *)(lVar9 + 0x30) * 2;
  for (; plVar8 != plVar10; plVar8 = plVar8 + 2) {
    if (((*plVar8 != 0) && (plVar3 = *(longlong **)(*plVar8 + 0x10), plVar3 != (longlong *)0x0)) &&
       (cVar5 = (**(code **)(*plVar3 + 0x20))(), cVar5 != '\0')) {
      iVar6 = (int)param_2[1];
      lVar7 = *plVar8;
      *(int *)(param_2 + 1) = iVar6 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
      }
      lVar9 = *param_2;
      *(undefined ***)(lVar9 + (longlong)iVar6 * 0x28) = &PTR_FUN_143f73d18;
      puVar2 = (undefined8 *)(lVar9 + (longlong)iVar6 * 0x28);
      puVar2[1] = *(undefined8 *)(lVar7 + 0x10);
      lVar7 = *(longlong *)(lVar7 + 0x18);
      puVar2[2] = lVar7;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
      }
      *puVar2 = &PTR_FUN_143f740c8;
      puVar2[3] = 0;
      puVar2[4] = 0;
    }
  }
  return param_2;
}



// FUNCTION 140d792b0 FUN_140d792b0 body=415 status=ok
// SIG undefined FUN_140d792b0(void)

undefined8 FUN_140d792b0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  
  FText::FText(param_2);
  if ((param_3 < 1) || (*(longlong *)(param_1 + 0x30) == 0)) {
    return param_2;
  }
  plVar3 = (longlong *)UListView::OnItemSelectionChanged();
  lVar7 = *plVar3;
  lVar1 = lVar7 + (longlong)(int)plVar3[1] * 0x28;
  do {
    if (lVar7 == lVar1) {
      return param_2;
    }
    plVar3 = (longlong *)FWeakObjectPtr::Get(lVar7);
    if (plVar3 == (longlong *)0x0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(lVar7 + 8)) && (*(longlong *)(lVar7 + 0x10) != 0)) {
        lVar4 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar7,lVar4);
        if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar7 + 8) = DAT_1464b56f4;
        }
        plVar3 = (longlong *)FWeakObjectPtr::Get(lVar7);
        if (plVar3 != (longlong *)0x0) goto LAB_140d7938a;
      }
    }
    else {
LAB_140d7938a:
      lVar4 = FUN_14171bfe0();
      if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        plVar5 = (longlong *)FUN_142dfdfe0();
        plVar6 = plVar3;
        do {
          if (plVar6 == plVar5) {
            lVar4 = plVar3[0x1f];
            if (lVar4 == 0) {
              (**(code **)(*plVar3 + 0x368))(plVar3);
              lVar4 = plVar3[0x1f];
              if (lVar4 == 0) break;
            }
            if ((0 < *(int *)(lVar4 + 0xf0)) && (*(int *)(lVar4 + 0xf0) == param_3)) {
              FText::operator=(param_2,lVar4 + 0x40);
              return param_2;
            }
            break;
          }
          plVar6 = (longlong *)plVar6[6];
        } while (plVar6 != (longlong *)0x0);
      }
    }
    lVar7 = lVar7 + 0x28;
  } while( true );
}



// FUNCTION 140d79450 FUN_140d79450 body=395 status=ok
// SIG undefined FUN_140d79450(void)

longlong FUN_140d79450(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 *local_38;
  undefined8 local_30;
  
  if (((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(*(longlong *)(param_1 + 8) + 0xae8) != 0)
      ) && (*param_2 != 0)) {
    puVar14 = *(undefined8 **)(param_1 + 0x30);
    puVar3 = puVar14 + *(int *)(param_1 + 0x38);
    for (; puVar14 != puVar3; puVar14 = puVar14 + 1) {
      lVar7 = FUN_140d5f520(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xae8),*puVar14);
      if (lVar7 != 0) {
        local_38 = (undefined8 *)0x0;
        local_30 = 0;
        FUN_140d795e0(lVar7,&local_38);
        puVar9 = local_38;
        iVar4 = (int)local_30;
        uVar11 = (ulonglong)(int)local_30;
        puVar12 = local_38 + uVar11 * 2;
        for (puVar8 = local_38; puVar8 != puVar12; puVar8 = puVar8 + 2) {
          cVar6 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,*puVar8);
          if (cVar6 != '\0') {
            TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
            ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_38);
            return lVar7;
          }
        }
        if (iVar4 != 0) {
          plVar13 = puVar9 + 1;
          do {
            plVar5 = (longlong *)*plVar13;
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar5 + 1;
              lVar7 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
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
            plVar13 = plVar13 + 2;
            uVar10 = (int)uVar11 - 1;
            uVar11 = (ulonglong)uVar10;
            puVar9 = local_38;
          } while (uVar10 != 0);
        }
        if (puVar9 != (undefined8 *)0x0) {
          FMemory::Free(puVar9);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140d795e0 FUN_140d795e0 body=452 status=ok
// SIG undefined FUN_140d795e0(void)

void FUN_140d795e0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  undefined8 *puVar9;
  longlong lVar10;
  
  if ((param_1 != 0) && (0 < *(int *)(param_1 + 0x68))) {
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0x10);
    if ((plVar4 != (longlong *)0x0) && (cVar8 = (**(code **)(*plVar4 + 0x20))(), cVar8 != '\0')) {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0x18);
      uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x10);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      iVar3 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar3 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar3);
      }
      puVar9 = (undefined8 *)((longlong)iVar3 * 0x10 + *param_2);
      *puVar9 = uVar5;
      puVar9[1] = plVar4;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
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
      }
    }
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x30);
    lVar6 = lVar10 + (longlong)*(int *)(*(longlong *)(param_1 + 0x60) + 0x38) * 0x28;
    for (; lVar10 != lVar6; lVar10 = lVar10 + 0x28) {
      if ((*(longlong **)(lVar10 + 8) != (longlong *)0x0) &&
         (cVar8 = (**(code **)(**(longlong **)(lVar10 + 8) + 0x20))(), cVar8 != '\0')) {
        plVar4 = *(longlong **)(lVar10 + 0x10);
        uVar5 = *(undefined8 *)(lVar10 + 8);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        iVar3 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar3);
        }
        puVar9 = (undefined8 *)((longlong)iVar3 * 0x10 + *param_2);
        *puVar9 = uVar5;
        puVar9[1] = plVar4;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          LOCK();
          plVar1 = plVar4 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140d797b0 FUN_140d797b0 body=213 status=ok
// SIG undefined FUN_140d797b0(void)

void FUN_140d797b0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar8 = *(undefined8 **)(param_1 + 0x40);
  puVar9 = puVar8 + (longlong)*(int *)(param_1 + 0x48) * 2;
  for (; puVar8 != puVar9; puVar8 = puVar8 + 2) {
    plVar4 = (longlong *)puVar8[1];
    uVar5 = *puVar8;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    iVar3 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar3);
    }
    puVar7 = (undefined8 *)((longlong)iVar3 * 0x10 + *param_2);
    *puVar7 = uVar5;
    puVar7[1] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
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
        if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140d79890 FUN_140d79890 body=853 status=ok
// SIG undefined FUN_140d79890(void)

/* WARNING: Removing unreachable block (ram,0x000140d79af0) */
/* WARNING: Removing unreachable block (ram,0x000140d79a03) */
/* WARNING: Removing unreachable block (ram,0x000140d7997b) */
/* WARNING: Removing unreachable block (ram,0x000140d79a8d) */
/* WARNING: Removing unreachable block (ram,0x000140d79bb9) */

void FUN_140d79890(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  wchar_t *pwVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28 [2];
  
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 0:
    pwVar5 = L"Idle";
    break;
  case 1:
    pwVar5 = L"Searching";
    break;
  case 2:
    pwVar5 = L"ResultFound";
    break;
  case 3:
    pwVar5 = L"Failed";
    break;
  case 4:
    pwVar5 = L"FailedRateLimit";
    break;
  case 5:
    pwVar5 = L"Expired";
    break;
  case 6:
    pwVar5 = L"Canceling";
    break;
  case 7:
    pwVar5 = L"Canceled";
    break;
  default:
    pwVar5 = L"";
  }
  FString::PrintfImpl(&local_38,L"SearchState: %s",pwVar5);
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_2);
  *puVar3 = 0;
  *puVar3 = local_38;
  *(undefined4 *)(puVar3 + 1) = (undefined4)local_30;
  *(undefined4 *)((longlong)puVar3 + 0xc) = local_30._4_4_;
  local_30 = 0;
  local_38 = 0;
  plVar4 = *(longlong **)(param_1 + 0x58);
  if (plVar4 != (longlong *)0x0) {
    puVar3 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,local_28);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*puVar3;
    }
    FString::PrintfImpl(&local_38,L"User: %s",puVar6);
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
    }
    puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_2);
    *puVar3 = 0;
    *puVar3 = local_38;
    *(undefined4 *)(puVar3 + 1) = (undefined4)local_30;
    *(undefined4 *)((longlong)puVar3 + 0xc) = local_30._4_4_;
    local_30 = 0;
    local_38 = 0;
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  FString::PrintfImpl(&local_38,L"SearchIndex: %d/%d, ResultIndex: %d/%d, Retries: %d",
                      *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x28),
                      *(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x38),
                      *(undefined4 *)(param_1 + 0x68));
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_2);
  *puVar3 = 0;
  *puVar3 = local_38;
  *(undefined4 *)(puVar3 + 1) = (undefined4)local_30;
  *(undefined4 *)((longlong)puVar3 + 0xc) = local_30._4_4_;
  local_30 = 0;
  local_38 = 0;
  FString::PrintfImpl(&local_38,L"Rejected: %d",*(undefined4 *)(param_1 + 0x48));
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_2);
  *puVar3 = 0;
  *puVar3 = local_38;
  *(undefined4 *)(puVar3 + 1) = (undefined4)local_30;
  *(undefined4 *)((longlong)puVar3 + 0xc) = local_30._4_4_;
  plVar4 = *(longlong **)(param_1 + 0x20);
  plVar7 = plVar4 + (longlong)*(int *)(param_1 + 0x28) * 2;
  while( true ) {
    local_30 = 0;
    local_38 = 0;
    if (plVar4 == plVar7) break;
    lVar2 = *plVar4;
    iVar1 = *(int *)(lVar2 + 0x18);
    if (iVar1 == 0) {
      pwVar5 = L"NotStarted";
    }
    else if (iVar1 == 1) {
      pwVar5 = L"InProgress";
    }
    else if (iVar1 == 2) {
      pwVar5 = L"Done";
    }
    else if (iVar1 == 3) {
      pwVar5 = L"Failed";
    }
    else {
      pwVar5 = L"";
    }
    FString::PrintfImpl(&local_38,L"SearchSettings: State:%s, Results:%d/%d",pwVar5,
                        *(undefined4 *)(lVar2 + 0x10),*(undefined4 *)(lVar2 + 0x1c));
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
    }
    puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_2);
    *puVar3 = 0;
    *puVar3 = local_38;
    *(undefined4 *)(puVar3 + 1) = (undefined4)local_30;
    *(undefined4 *)((longlong)puVar3 + 0xc) = local_30._4_4_;
    plVar4 = plVar4 + 2;
  }
  return;
}



// FUNCTION 140d79c10 FUN_140d79c10 body=235 status=ok
// SIG undefined FUN_140d79c10(void)

/* WARNING: Removing unreachable block (ram,0x000140d79ceb) */

void FUN_140d79c10(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  wchar_t *pwVar4;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 uStack_c;
  
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 0:
    pwVar4 = L"Idle";
    break;
  case 1:
    pwVar4 = L"Searching";
    break;
  case 2:
    pwVar4 = L"ResultFound";
    break;
  case 3:
    pwVar4 = L"Failed";
    break;
  case 4:
    pwVar4 = L"FailedRateLimit";
    break;
  case 5:
    pwVar4 = L"Expired";
    break;
  case 6:
    pwVar4 = L"Canceling";
    break;
  case 7:
    pwVar4 = L"Canceled";
    break;
  default:
    pwVar4 = L"";
  }
  FString::PrintfImpl(&local_18,L"SearchState: %s",pwVar4);
  lVar1 = param_2[1];
  iVar2 = (int)lVar1 + 1;
  *(int *)(param_2 + 1) = iVar2;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2);
  }
  puVar3 = (undefined8 *)((longlong)(int)lVar1 * 0x10 + *param_2);
  *puVar3 = 0;
  *puVar3 = local_18;
  *(undefined4 *)(puVar3 + 1) = local_10;
  *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_c;
  return;
}



// FUNCTION 140d79d20 FUN_140d79d20 body=303 status=ok
// SIG undefined FUN_140d79d20(void)

longlong * FUN_140d79d20(undefined8 param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 local_28;
  longlong *local_20;
  longlong local_18 [2];
  
  *param_2 = 0;
  param_2[1] = 0;
  if (((*(longlong **)(param_3 + 8) != (longlong *)0x0) &&
      (cVar5 = (**(code **)(**(longlong **)(param_3 + 8) + 0x20))(), cVar5 != '\0')) &&
     (param_4 != 0)) {
    plVar6 = (longlong *)
             (**(code **)(**(longlong **)(param_3 + 8) + 0x30))
                       (*(longlong **)(param_3 + 8),local_18);
    if (param_2 != plVar6) {
      if (*param_2 != 0) {
        FMemory::Free();
      }
      *param_2 = *plVar6;
      *plVar6 = 0;
      *(int *)(param_2 + 1) = (int)plVar6[1];
      *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar6 + 0xc);
      plVar6[1] = 0;
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    local_28 = *(undefined8 *)(param_3 + 8);
    local_20 = *(longlong **)(param_3 + 0x10);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    FUN_140d79f00(*(undefined8 *)(param_4 + 0x478),&local_28,1,0,param_2);
    plVar6 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
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
  return param_2;
}



// FUNCTION 140d79e50 GetDefaultSessionSettings body=175 status=ok
// SIG undefined GetDefaultSessionSettings(void)

longlong * FOnlineSessionSearch::GetDefaultSessionSettings(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_18;
  longlong *local_10;
  
  local_10 = (longlong *)FUN_140d60650();
  local_18 = local_10 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_18,local_18,local_18);
  plVar5 = local_10;
  *param_2 = (longlong)local_18;
  param_2[1] = (longlong)local_10;
  if (local_10 == (longlong *)0x0) {
    return param_2;
  }
  LOCK();
  *(int *)(local_10 + 1) = (int)local_10[1] + 1;
  UNLOCK();
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
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 140d79f00 FUN_140d79f00 body=712 status=ok
// SIG undefined FUN_140d79f00(void)

undefined1
FUN_140d79f00(longlong *param_1,undefined8 *param_2,char param_3,char param_4,longlong param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  int local_res8 [2];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  longlong local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *plStack_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  FUN_140d76bb0(param_1 + 1,local_res8,param_2);
  lVar5 = 0;
  if (local_res8[0] != -1) {
    lVar5 = (longlong)local_res8[0] * 0x80 + param_1[1];
  }
  lVar9 = lVar5 + 0x10;
  if (lVar5 == 0) {
    lVar9 = 0;
  }
  if (lVar9 == 0) {
    return 0;
  }
  if (param_3 == '\0') {
    lVar5 = 0x10;
    lVar10 = 0x20;
  }
  else {
    lVar5 = 0x30;
    lVar10 = 0x40;
  }
  if (param_4 != '\0') {
    lVar5 = lVar10;
  }
  FString::operator=(param_5,lVar9 + lVar5);
  if (*(int *)(param_5 + 8) < 2) {
    plVar7 = (longlong *)*param_2;
    plVar6 = (longlong *)FName::FName(local_88,L"SPARK",1);
    plVar7 = (longlong *)(**(code **)(*plVar7 + 8))(plVar7,local_80);
    if (*plVar7 == *plVar6) {
      if (*param_1 != 0) {
        FUN_140bbb2b0(*param_1,&local_78,param_2);
        if (local_78 != 0) {
          local_58 = local_78;
          plStack_50 = plStack_70;
          if (plStack_70 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
            UNLOCK();
          }
          cVar3 = FUN_140bca7d0(*param_1,&local_58);
          if (cVar3 != '\0') {
            local_68 = local_78;
            plStack_60 = plStack_70;
            if (plStack_70 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
              UNLOCK();
            }
            uVar4 = FUN_140d79f00(param_1,&local_68,param_3,param_4,param_5);
            plVar7 = plStack_60;
            if (plStack_60 != (longlong *)0x0) {
              LOCK();
              plVar6 = plStack_60 + 1;
              lVar5 = *plVar6;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*plStack_60)(plStack_60);
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
            if (plStack_70 == (longlong *)0x0) {
              return uVar4;
            }
            LOCK();
            plVar7 = plStack_70 + 1;
            lVar5 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar5 != 1) {
              return uVar4;
            }
            (**(code **)*plStack_70)(plStack_70);
            LOCK();
            piVar1 = (int *)((longlong)plStack_70 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 != 1) {
              return uVar4;
            }
            (**(code **)(*plStack_70 + 8))(plStack_70,1);
            return uVar4;
          }
        }
        if (plStack_70 != (longlong *)0x0) {
          LOCK();
          plVar7 = plStack_70 + 1;
          lVar5 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plStack_70)(plStack_70);
            LOCK();
            piVar1 = (int *)((longlong)plStack_70 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plStack_70 + 8))(plStack_70,1);
            }
          }
        }
      }
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_48,L"DefaultSHiFTPlayer",L"DisplayDataCache",
                         L"DefaultDisplayName_Spark");
      uVar8 = FText::ToString(uVar8);
      FString::operator=(param_5,uVar8);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_40 + 1;
        lVar5 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
    }
  }
  return 1;
}



// FUNCTION 140d7a1d0 FUN_140d7a1d0 body=1151 status=ok
// SIG undefined FUN_140d7a1d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_140d7a1d0(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6,float param_7)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined2 *puVar12;
  char *pcVar13;
  longlong lVar15;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  longlong local_1c8 [2];
  undefined4 *local_1b8;
  ulonglong *puStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  longlong local_190;
  longlong local_188 [2];
  undefined1 local_178 [16];
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [16];
  undefined1 local_f8 [24];
  undefined1 local_e0 [24];
  undefined4 local_c8 [4];
  undefined1 local_b8 [24];
  undefined1 local_a0;
  undefined4 local_98;
  undefined1 local_88 [24];
  undefined1 local_70;
  ulonglong local_68 [5];
  char *pcVar14;
  
  local_68[0] = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  local_1a0 = param_6;
  local_1d8 = local_1c8;
  local_1c8[0] = 0;
  local_1c8[1] = 0;
  cVar5 = FUN_140d79f00(param_1,param_2,param_4,param_5);
  if (cVar5 == '\0') {
    uVar7 = 0;
  }
  else {
    if ((param_7 < 0.0) && (param_3 != 0)) {
      uVar7 = FUN_142f30760();
      plVar8 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_3,uVar7);
      if (plVar8 != (longlong *)0x0) {
        lVar9 = (**(code **)(*plVar8 + 0x10))(plVar8);
        if (lVar9 != 0) {
          param_7 = *(float *)(lVar9 + 0x40);
        }
      }
    }
    uVar6 = FUN_140bbd2a0(*param_1,param_2);
    puVar10 = (undefined8 *)FUN_1411f1490(local_188,uVar6);
    if (*(int *)(puVar10 + 1) == 0) {
      puVar12 = &DAT_143f3eda8;
    }
    else {
      puVar12 = (undefined2 *)*puVar10;
    }
    FName::FName(&local_1a8,puVar12,1);
    if (local_188[0] != 0) {
      FMemory::Free();
    }
    local_1d8 = (longlong *)((ulonglong)local_1d8 & 0xffffffff00000000);
    FUN_142eff210(local_150,local_1a8,param_3,param_7);
    lVar9 = FText::FromString(local_f8,local_1c8);
    lVar11 = FText::FText(local_e0,local_150);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_120,L"{0}{1}",L"DisplayDataCache",L"HostNameWithPlatformIcon");
    puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_108,uVar7);
    local_c8[0] = 4;
    FText::FText(local_b8,lVar11);
    local_a0 = 1;
    local_98 = 4;
    FText::FText(local_88,lVar9);
    local_1b8 = local_c8;
    local_70 = 1;
    puStack_1b0 = local_68;
    local_198 = *puVar10;
    local_190 = puVar10[1];
    if (local_190 != 0) {
      LOCK();
      *(int *)(local_190 + 8) = *(int *)(local_190 + 8) + 1;
      UNLOCK();
    }
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_178,&local_1b8);
    uVar7 = FText::Format(local_138,&local_198,uVar7);
    FText::FText(local_168,uVar7);
    if (local_130 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_130 + 1;
      lVar15 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*local_130)(local_130);
        LOCK();
        piVar1 = (int *)((longlong)local_130 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_130 + 8))(local_130,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_178);
    lVar15 = 2;
    pcVar14 = &stack0xffffffffffffffc0;
    do {
      pcVar13 = pcVar14 + -0x30;
      lVar15 = lVar15 + -1;
      if (*pcVar13 != '\0') {
        *pcVar13 = '\0';
        plVar8 = *(longlong **)(pcVar14 + -0x40);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar8 + 1;
          lVar4 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
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
      pcVar14 = pcVar13;
    } while (lVar15 != 0);
    plVar8 = (longlong *)puVar10[1];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar8 + 1;
      lVar15 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
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
    plVar8 = *(longlong **)(lVar11 + 8);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar8 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
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
    plVar8 = *(longlong **)(lVar9 + 8);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar8 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
    uVar7 = FText::ToString(local_168);
    FString::operator=(local_1a0,uVar7);
    if (local_160 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_160 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_160)(local_160);
        LOCK();
        piVar1 = (int *)((longlong)local_160 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_160 + 8))(local_160,1);
        }
      }
    }
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_118 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
    uVar7 = 1;
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_148 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar1 = (int *)((longlong)local_148 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_148 + 8))(local_148,1);
        }
      }
    }
  }
  if (local_1c8[0] != 0) {
    FMemory::Free();
  }
  return uVar7;
}



// FUNCTION 140d7a650 FUN_140d7a650 body=1130 status=ok
// SIG undefined FUN_140d7a650(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140d7a650(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [4];
  undefined1 local_1f4 [4];
  undefined1 local_1f0 [8];
  undefined8 *local_1e8;
  undefined4 *local_1e0;
  undefined8 *local_1d8;
  undefined4 *local_1d0;
  undefined8 *local_1c8;
  undefined4 *local_1c0;
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  undefined1 local_1a0 [8];
  longlong *local_198;
  undefined1 local_188 [8];
  longlong *local_180;
  undefined1 local_170 [8];
  longlong *local_168;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_140 [24];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  longlong local_e8;
  undefined4 local_e0;
  undefined4 local_d8 [4];
  undefined1 local_c8 [8];
  longlong *local_c0;
  char local_b0;
  undefined4 local_a8 [4];
  undefined1 local_98 [8];
  longlong *local_90;
  char local_80;
  undefined4 local_78 [4];
  undefined1 local_68 [8];
  longlong *local_60;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  FText::FText(param_2);
  if (0 < *(int *)(param_1 + 0x178)) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar4 = *(longlong *)(DAT_146b33f38 + 0x98);
    if ((lVar4 != 0) && (lVar6 = FUN_140d7ee70(param_1), lVar6 != 0)) {
      FUN_140d792b0(lVar4,local_1a0,*(undefined4 *)(param_1 + 0x178));
      cVar5 = FText::IsEmpty(local_1a0);
      if (cVar5 == '\0') {
        FText::FText(local_1b8);
        uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_188,L"unlocked Achievement",L"FriendEventAchievementUnlocked",
                           L"AchievementsText");
        FText::operator=(local_1b8,uVar7);
        if (local_180 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_180 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_180)(local_180);
            LOCK();
            piVar2 = (int *)((longlong)local_180 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_180 + 8))(local_180,1);
            }
          }
        }
        local_f8 = 0xffffffff;
        local_128 = 0;
        local_120 = 0;
        local_108 = 0;
        local_100 = 0;
        local_f4 = 0;
        local_e8 = 0;
        local_e0 = 0;
        uVar7 = FText::FromString(local_170,param_3);
        local_d8[0] = 4;
        FText::FText(local_c8,uVar7);
        local_b0 = '\x01';
        local_1e8 = &DAT_14629ace0;
        local_1e0 = local_d8;
        FUN_1405df450(&local_128,local_1f8,&local_1e8,0);
        if ((local_b0 != '\0') && (local_b0 = '\0', local_c0 != (longlong *)0x0)) {
          LOCK();
          plVar1 = local_c0 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
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
        if (local_168 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_168 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_168)(local_168);
            LOCK();
            piVar2 = (int *)((longlong)local_168 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_168 + 8))(local_168,1);
            }
          }
        }
        local_a8[0] = 4;
        FText::FText(local_98,local_1b8);
        local_80 = '\x01';
        local_1d8 = &DAT_14629ae40;
        local_1d0 = local_a8;
        FUN_1405df450(&local_128,local_1f4,&local_1d8,0);
        if ((local_80 != '\0') && (local_80 = '\0', local_90 != (longlong *)0x0)) {
          LOCK();
          plVar1 = local_90 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
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
        local_78[0] = 4;
        FText::FText(local_68,local_1a0);
        local_50 = '\x01';
        local_1c8 = &DAT_14629adb0;
        local_1c0 = local_78;
        FUN_1405df450(&local_128,local_1f0,&local_1c8,0);
        if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
          LOCK();
          plVar1 = local_60 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
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
        uVar7 = FTextFormat::FTextFormat(local_140,lVar6 + 0x30);
        uVar7 = FText::Format(local_158,uVar7,&local_128);
        FText::operator=(param_2,uVar7);
        if (local_150 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_150 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_150)(local_150);
            LOCK();
            piVar2 = (int *)((longlong)local_150 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_150 + 8))(local_150,1);
            }
          }
        }
        local_e0 = 0;
        if (local_e8 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_128);
        if (local_1b0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_1b0 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_1b0)(local_1b0);
            LOCK();
            piVar2 = (int *)((longlong)local_1b0 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_1b0 + 8))(local_1b0,1);
            }
          }
        }
      }
      if (local_198 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_198 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_198)(local_198);
          LOCK();
          piVar2 = (int *)((longlong)local_198 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_198 + 8))(local_198,1);
          }
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 140d7aac0 FUN_140d7aac0 body=888 status=ok
// SIG undefined FUN_140d7aac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140d7aac0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8 [4];
  undefined1 local_1c4 [4];
  undefined1 local_1c0 [8];
  undefined8 *local_1b8;
  undefined4 *local_1b0;
  undefined8 *local_1a8;
  undefined4 *local_1a0;
  undefined8 *local_198;
  undefined4 *local_190;
  undefined1 local_188 [8];
  longlong *local_180;
  undefined1 local_170 [8];
  longlong *local_168;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_140 [24];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  longlong local_e8;
  undefined4 local_e0;
  undefined4 local_d8 [4];
  undefined1 local_c8 [8];
  longlong *local_c0;
  char local_b0;
  undefined4 local_a8 [4];
  undefined1 local_98 [8];
  longlong *local_90;
  char local_80;
  undefined4 local_78 [2];
  longlong local_70;
  longlong *local_60;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FText::FText(param_2);
  if (((param_4 != 0) && (lVar6 = FUN_140d7ee70(param_1), lVar6 != 0)) &&
     (1 < *(int *)(param_3 + 8))) {
    FUN_140c126b0(local_188,*(undefined4 *)(param_1 + 0x178),param_4);
    cVar5 = FText::IsEmpty(local_188);
    if (cVar5 == '\0') {
      local_f8 = 0xffffffff;
      local_128 = 0;
      local_120 = 0;
      local_108 = 0;
      local_100 = 0;
      local_f4 = 0;
      local_e8 = 0;
      local_e0 = 0;
      uVar7 = FText::FromString(local_170,param_3);
      local_d8[0] = 4;
      FText::FText(local_c8,uVar7);
      local_b0 = '\x01';
      local_1b8 = &DAT_14629ace0;
      local_1b0 = local_d8;
      FUN_1405df450(&local_128,local_1c8,&local_1b8,0);
      if ((local_b0 != '\0') && (local_b0 = '\0', local_c0 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_c0 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
      if (local_168 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_168 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_168)(local_168);
          LOCK();
          piVar2 = (int *)((longlong)local_168 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_168 + 8))(local_168,1);
          }
        }
      }
      local_a8[0] = 4;
      FText::FText(local_98,local_188);
      local_80 = '\x01';
      local_1a8 = &DAT_14629adb0;
      local_1a0 = local_a8;
      FUN_1405df450(&local_128,local_1c4,&local_1a8,0);
      if ((local_80 != '\0') && (local_80 = '\0', local_90 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_90 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
      local_70 = (longlong)*(int *)(param_1 + 0x180);
      local_78[0] = 0;
      local_198 = &DAT_14629add0;
      local_190 = local_78;
      local_50 = '\0';
      FUN_1405df450(&local_128,local_1c0,&local_198,0);
      if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_60 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
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
      uVar7 = FTextFormat::FTextFormat(local_140,lVar6 + 0x30);
      uVar7 = FText::Format(local_158,uVar7,&local_128);
      FText::operator=(param_2,uVar7);
      if (local_150 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_150 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_150)(local_150);
          LOCK();
          piVar2 = (int *)((longlong)local_150 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_150 + 8))(local_150,1);
          }
        }
      }
      local_e0 = 0;
      if (local_e8 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_128);
    }
    if (local_180 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_180 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_180)(local_180);
        LOCK();
        piVar2 = (int *)((longlong)local_180 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_180 + 8))(local_180,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 140d7ae40 FUN_140d7ae40 body=1115 status=ok
// SIG undefined FUN_140d7ae40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140d7ae40(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 auStack_228 [32];
  undefined1 local_208 [4];
  undefined1 local_204 [4];
  undefined1 local_200 [4];
  undefined1 local_1fc [4];
  undefined8 *local_1f8;
  undefined4 *local_1f0;
  undefined8 *local_1e8;
  undefined4 *local_1e0;
  undefined8 *local_1d8;
  undefined4 *local_1d0;
  undefined8 *local_1c8;
  undefined4 *local_1c0;
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  undefined1 local_1a0 [8];
  longlong *local_198;
  undefined1 local_188 [8];
  longlong *local_180;
  undefined1 local_170 [24];
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  longlong local_118;
  undefined4 local_110;
  undefined4 local_108 [4];
  undefined1 local_f8 [8];
  longlong *local_f0;
  char local_e0;
  undefined4 local_d8 [4];
  undefined1 local_c8 [8];
  longlong *local_c0;
  char local_b0;
  undefined4 local_a8 [2];
  longlong local_a0;
  longlong *local_90;
  char local_80;
  undefined4 local_78 [2];
  longlong local_70;
  longlong *local_60;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  FText::FText(param_2);
  if ((((param_4 != 0) && (lVar6 = FUN_140d7ee70(param_1), lVar6 != 0)) &&
      (1 < *(int *)(param_3 + 8))) &&
     (lVar7 = FUN_140c12700(*(undefined4 *)(param_1 + 0x178),param_4), lVar7 != 0)) {
    FText::FText(local_1b8,lVar7 + 0x40);
    iVar4 = FUN_142dce050(lVar7);
    if (iVar4 == -1) {
      iVar4 = 1;
      iVar5 = 1;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x17c);
    }
    iVar9 = 0;
    if ((-1 < iVar5) && (iVar9 = iVar4, iVar5 < iVar4)) {
      iVar9 = iVar5;
    }
    *(int *)(param_1 + 0x17c) = iVar9;
    cVar3 = FText::IsEmpty(local_1b8);
    if (cVar3 == '\0') {
      local_158 = 0;
      local_150 = 0;
      local_138 = 0;
      local_130 = 0;
      local_128 = 0xffffffff;
      local_124 = 0;
      local_118 = 0;
      local_110 = 0;
      uVar8 = FText::FromString(local_1a0,param_3);
      local_108[0] = 4;
      FText::FText(local_f8,uVar8);
      local_e0 = '\x01';
      local_1f8 = &DAT_14629ace0;
      local_1f0 = local_108;
      FUN_1405df450(&local_158,local_208,&local_1f8,0);
      if ((local_e0 != '\0') && (local_e0 = '\0', local_f0 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_f0 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar2 = (int *)((longlong)local_f0 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_f0 + 8))(local_f0,1);
          }
        }
      }
      if (local_198 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_198 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_198)(local_198);
          LOCK();
          piVar2 = (int *)((longlong)local_198 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_198 + 8))(local_198,1);
          }
        }
      }
      local_d8[0] = 4;
      FText::FText(local_c8,local_1b8);
      local_b0 = '\x01';
      local_1e8 = &DAT_14629adb0;
      local_1e0 = local_d8;
      FUN_1405df450(&local_158,local_204,&local_1e8,0);
      if ((local_b0 != '\0') && (local_b0 = '\0', local_c0 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_c0 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_c0)(local_c0);
          LOCK();
          piVar2 = (int *)((longlong)local_c0 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_c0 + 8))(local_c0,1);
          }
        }
      }
      local_a0 = (longlong)*(int *)(param_1 + 0x17c);
      local_a8[0] = 0;
      local_1d8 = &DAT_14629adc0;
      local_1d0 = local_a8;
      local_80 = '\0';
      FUN_1405df450(&local_158,local_200,&local_1d8,0);
      if ((local_80 != '\0') && (local_80 = '\0', local_90 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_90 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar2 = (int *)((longlong)local_90 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_90 + 8))(local_90,1);
          }
        }
      }
      local_70 = (longlong)*(int *)(param_1 + 0x180);
      local_78[0] = 0;
      local_1c8 = &DAT_14629add0;
      local_1c0 = local_78;
      local_50 = '\0';
      FUN_1405df450(&local_158,local_1fc,&local_1c8,0);
      if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_60 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)local_60 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
      uVar8 = FTextFormat::FTextFormat(local_170,lVar6 + 0x30);
      uVar8 = FText::Format(local_188,uVar8,&local_158);
      FText::operator=(param_2,uVar8);
      if (local_180 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_180 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_180)(local_180);
          LOCK();
          piVar2 = (int *)((longlong)local_180 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_180 + 8))(local_180,1);
          }
        }
      }
      local_110 = 0;
      if (local_118 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_158);
    }
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1b0 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_1b0)(local_1b0);
        LOCK();
        piVar2 = (int *)((longlong)local_1b0 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1b0 + 8))(local_1b0,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 140d7b2a0 FUN_140d7b2a0 body=166 status=ok
// SIG undefined FUN_140d7b2a0(void)

undefined8 FUN_140d7b2a0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FText::FText(param_2);
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x50))(param_1);
  if (plVar4 != (longlong *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 8))(plVar4,local_28,param_3,param_4);
    FText::operator=(param_2,uVar5);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_20 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
  }
  return param_2;
}



// FUNCTION 140d7b350 FUN_140d7b350 body=999 status=ok
// SIG undefined FUN_140d7b350(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140d7b350(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined1 local_1a4 [4];
  undefined8 *local_1a0;
  undefined4 *local_198;
  undefined8 *local_190;
  undefined4 *local_188;
  undefined1 local_180 [8];
  longlong *local_178;
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 local_a8 [4];
  undefined1 local_98 [8];
  longlong *local_90;
  char local_80;
  undefined4 local_78 [4];
  undefined1 local_68 [8];
  longlong *local_60;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_1a8 = 0;
  FText::FText(param_2);
  lVar5 = FUN_140d7ee70(param_1);
  if ((lVar5 != 0) && (lVar6 = FUN_140c14b40(*(undefined4 *)(param_1 + 0x178)), lVar6 != 0)) {
    lVar7 = AGBlizzard::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) {
      cVar4 = FText::IsEmpty(lVar6 + 0x4f8);
      bVar9 = cVar4 != '\0';
      if (bVar9) {
        uVar8 = FUN_142dea370(lVar6 + 0x38,local_168);
      }
      else {
        uVar8 = FText::FText(local_150,lVar6 + 0x4f8);
      }
      FText::FText(local_180,uVar8);
      if ((bVar9) && (local_160 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_160 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_160)(local_160);
          LOCK();
          piVar2 = (int *)((longlong)local_160 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_160 + 8))(local_160,1);
          }
        }
      }
      if ((!bVar9) && (local_148 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_148 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_148)(local_148);
          LOCK();
          piVar2 = (int *)((longlong)local_148 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_148 + 8))(local_148,1);
          }
        }
      }
      cVar4 = FText::IsEmpty(local_180);
      if (cVar4 == '\0') {
        local_f8 = 0;
        local_f0 = 0;
        local_d8 = 0;
        local_d0 = 0;
        local_c8 = 0xffffffff;
        local_c4 = 0;
        local_b8 = 0;
        local_b0 = 0;
        uVar8 = FText::FromString(local_138,param_3);
        local_a8[0] = 4;
        FText::FText(local_98,uVar8);
        local_80 = '\x01';
        local_1a0 = &DAT_14629ace0;
        local_198 = local_a8;
        FUN_1405df450(&local_f8,&local_1a8,&local_1a0,0);
        if ((local_80 != '\0') && (local_80 = '\0', local_90 != (longlong *)0x0)) {
          LOCK();
          plVar1 = local_90 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
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
        if (local_130 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_130 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_130)(local_130);
            LOCK();
            piVar2 = (int *)((longlong)local_130 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_130 + 8))(local_130,1);
            }
          }
        }
        local_78[0] = 4;
        FText::FText(local_68,local_180);
        local_50 = '\x01';
        local_190 = &DAT_14629ad00;
        local_188 = local_78;
        FUN_1405df450(&local_f8,local_1a4,&local_190,0);
        if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
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
        uVar8 = FTextFormat::FTextFormat(local_108,lVar5 + 0x30);
        uVar8 = FText::Format(local_120,uVar8,&local_f8);
        FText::operator=(param_2,uVar8);
        if (local_118 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_118 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_118)(local_118);
            LOCK();
            piVar2 = (int *)((longlong)local_118 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_118 + 8))(local_118,1);
            }
          }
        }
        local_b0 = 0;
        if (local_b8 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_f8);
      }
      if (local_178 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_178 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_178)(local_178);
          LOCK();
          piVar2 = (int *)((longlong)local_178 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_178 + 8))(local_178,1);
          }
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 140d7b740 FUN_140d7b740 body=1387 status=ok
// SIG undefined FUN_140d7b740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140d7b740(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_288 [32];
  undefined1 local_268 [8];
  longlong *local_260;
  undefined1 local_250 [4];
  undefined1 local_24c [4];
  undefined1 local_248 [8];
  undefined8 *local_240;
  undefined4 *local_238;
  undefined8 *local_230;
  undefined4 *local_228;
  undefined8 *local_220;
  undefined4 *local_218;
  undefined1 local_210 [8];
  longlong *local_208;
  undefined1 local_1f8 [8];
  longlong *local_1f0;
  undefined1 local_1e0 [8];
  longlong *local_1d8;
  undefined1 local_1c8 [8];
  longlong *local_1c0;
  undefined1 local_1b0 [8];
  longlong *local_1a8;
  undefined1 local_198 [8];
  longlong *local_190;
  undefined1 local_180 [8];
  longlong *local_178;
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_150 [24];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  longlong local_f8;
  undefined4 local_f0;
  undefined4 local_e8 [4];
  undefined1 local_d8 [8];
  longlong *local_d0;
  char local_c0;
  undefined4 local_b8 [4];
  undefined1 local_a8 [8];
  longlong *local_a0;
  char local_90;
  undefined4 local_88 [4];
  undefined1 local_78 [8];
  longlong *local_70;
  char local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  FText::FText(param_2);
  if (param_4 == 0) {
    return param_2;
  }
  lVar6 = FUN_140d7ee70(param_1);
  if (lVar6 == 0) {
    return param_2;
  }
  FText::FText(local_268);
  cVar5 = *(char *)(param_1 + 0x188);
  if (cVar5 == '\0') {
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_198,L"found",L"FriendEventGearReceived",L"FoundText");
    FText::operator=(local_268,uVar7);
  }
  else if (cVar5 == '\x01') {
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_1b0,L"purchased",L"FriendEventGearReceived",L"PurchasedText");
    FText::operator=(local_268,uVar7);
    local_190 = local_1a8;
  }
  else if (cVar5 == '\x02') {
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_1c8,L"received",L"FriendEventGearReceived",L"ReceivedText");
    FText::operator=(local_268,uVar7);
    local_190 = local_1c0;
  }
  else if (cVar5 == '\x03') {
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_1e0,L"traded for",L"FriendEventGearReceived",L"TradedText");
    FText::operator=(local_268,uVar7);
    local_190 = local_1d8;
  }
  else {
    if (cVar5 != '\x04') goto LAB_140d7b919;
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_1f8,L"unlocked",L"FriendEventGearReceived",L"UnlockedText");
    FText::operator=(local_268,uVar7);
    local_190 = local_1f0;
  }
  if (local_190 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_190 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_190)(local_190);
      LOCK();
      piVar2 = (int *)((longlong)local_190 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_190 + 8))(local_190,1);
      }
    }
  }
LAB_140d7b919:
  FUN_140b29410(local_210,param_1 + 0x178,param_4);
  cVar5 = FText::IsEmpty(local_210);
  if (cVar5 == '\0') {
    local_108 = 0xffffffff;
    local_138 = 0;
    local_130 = 0;
    local_118 = 0;
    local_110 = 0;
    local_104 = 0;
    local_f8 = 0;
    local_f0 = 0;
    uVar7 = FText::FromString(local_180,param_3);
    local_e8[0] = 4;
    FText::FText(local_d8,uVar7);
    local_c0 = '\x01';
    local_240 = &DAT_14629ace0;
    local_238 = local_e8;
    FUN_1405df450(&local_138,local_250,&local_240,0);
    if ((local_c0 != '\0') && (local_c0 = '\0', local_d0 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_d0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    if (local_178 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_178 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_178)(local_178);
        LOCK();
        piVar2 = (int *)((longlong)local_178 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_178 + 8))(local_178,1);
        }
      }
    }
    local_b8[0] = 4;
    FText::FText(local_a8,local_268);
    local_90 = '\x01';
    local_230 = &DAT_14629ad80;
    local_228 = local_b8;
    FUN_1405df450(&local_138,local_24c,&local_230,0);
    if ((local_90 != '\0') && (local_90 = '\0', local_a0 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_a0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    local_88[0] = 4;
    FText::FText(local_78,local_210);
    local_60 = '\x01';
    local_220 = &DAT_14629acf0;
    local_218 = local_88;
    FUN_1405df450(&local_138,local_248,&local_220,0);
    if ((local_60 != '\0') && (local_60 = '\0', local_70 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_70 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
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
    uVar7 = FTextFormat::FTextFormat(local_150,lVar6 + 0x30);
    uVar7 = FText::Format(local_168,uVar7,&local_138);
    FText::operator=(param_2,uVar7);
    if (local_160 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_160 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_160)(local_160);
        LOCK();
        piVar2 = (int *)((longlong)local_160 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_160 + 8))(local_160,1);
        }
      }
    }
    local_f0 = 0;
    if (local_f8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_138);
  }
  if (local_208 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_208 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_208)(local_208);
      LOCK();
      piVar2 = (int *)((longlong)local_208 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_208 + 8))(local_208,1);
      }
    }
  }
  if (local_260 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_260 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_260)(local_260);
      LOCK();
      piVar2 = (int *)((longlong)local_260 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_260 + 8))(local_260,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 140d7bcb0 FUN_140d7bcb0 body=732 status=ok
// SIG undefined FUN_140d7bcb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140d7bcb0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_198 [32];
  undefined1 local_178 [4];
  undefined1 local_174 [4];
  undefined8 *local_170;
  undefined4 *local_168;
  undefined8 *local_160;
  undefined4 *local_158;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 local_a8 [4];
  undefined1 local_98 [8];
  longlong *local_90;
  char local_80;
  undefined4 local_78 [4];
  undefined1 local_68 [8];
  longlong *local_60;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  FText::FText(param_2);
  if ((param_4 != 0) && (lVar6 = FUN_140d7ee70(param_1), lVar6 != 0)) {
    FUN_140b29410(local_150,param_1 + 0x178,param_4);
    cVar5 = FText::IsEmpty(local_150);
    if (cVar5 == '\0') {
      local_c8 = 0xffffffff;
      local_f8 = 0;
      local_f0 = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_c4 = 0;
      local_b8 = 0;
      local_b0 = 0;
      uVar7 = FText::FromString(local_138,param_3);
      local_a8[0] = 4;
      FText::FText(local_98,uVar7);
      local_80 = '\x01';
      local_170 = &DAT_14629ace0;
      local_168 = local_a8;
      FUN_1405df450(&local_f8,local_178,&local_170,0);
      if ((local_80 != '\0') && (local_80 = '\0', local_90 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_90 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
      if (local_130 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_130 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_130)(local_130);
          LOCK();
          piVar2 = (int *)((longlong)local_130 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_130 + 8))(local_130,1);
          }
        }
      }
      local_78[0] = 4;
      FText::FText(local_68,local_150);
      local_50 = '\x01';
      local_160 = &DAT_14629acf0;
      local_158 = local_78;
      FUN_1405df450(&local_f8,local_174,&local_160,0);
      if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_60 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
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
      uVar7 = FTextFormat::FTextFormat(local_108,lVar6 + 0x30);
      uVar7 = FText::Format(local_120,uVar7,&local_f8);
      FText::operator=(param_2,uVar7);
      if (local_118 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_118 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_118)(local_118);
          LOCK();
          piVar2 = (int *)((longlong)local_118 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_118 + 8))(local_118,1);
          }
        }
      }
      local_b0 = 0;
      if (local_b8 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_f8);
    }
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_148 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar2 = (int *)((longlong)local_148 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_148 + 8))(local_148,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 140d7bf90 FUN_140d7bf90 body=765 status=ok
// SIG undefined FUN_140d7bf90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140d7bf90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [4];
  undefined1 local_184 [4];
  undefined8 *local_180;
  undefined4 *local_178;
  undefined8 *local_170;
  undefined4 *local_168;
  undefined8 local_160;
  longlong *plStack_158;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 local_a8 [4];
  undefined1 local_98 [8];
  longlong *local_90;
  char local_80;
  undefined4 local_78 [4];
  undefined1 local_68 [8];
  longlong *local_60;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  FText::FText(param_2);
  lVar6 = FUN_140d7ee70(param_1);
  if (lVar6 != 0) {
    local_c8 = 0xffffffff;
    local_f8 = 0;
    local_f0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c4 = 0;
    local_b8 = 0;
    local_b0 = 0;
    uVar7 = FText::FromString(local_150,param_3);
    local_a8[0] = 4;
    FText::FText(local_98,uVar7);
    local_80 = '\x01';
    local_180 = &DAT_14629ace0;
    local_178 = local_a8;
    FUN_1405df450(&local_f8,local_188,&local_180,0);
    if (local_80 != '\0') {
      local_80 = '\0';
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_90 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar2 = (int *)((longlong)local_90 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_90 + 8))(local_90,1);
          }
        }
      }
    }
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_148 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar2 = (int *)((longlong)local_148 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_148 + 8))(local_148,1);
        }
      }
    }
    local_160 = 0;
    plStack_158 = (longlong *)0x0;
    uVar7 = FText::AsNumber(local_138,*(undefined4 *)(param_1 + 0x178),0,&local_160);
    local_78[0] = 4;
    FText::FText(local_68,uVar7);
    local_50 = '\x01';
    local_170 = &DAT_14629adf0;
    local_168 = local_78;
    FUN_1405df450(&local_f8,local_184,&local_170,0);
    if (local_50 != '\0') {
      local_50 = '\0';
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)local_60 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
    }
    if (local_130 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_130 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_130)(local_130);
        LOCK();
        piVar2 = (int *)((longlong)local_130 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_130 + 8))(local_130,1);
        }
      }
    }
    plVar1 = plStack_158;
    if (plStack_158 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_158 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_158)(plStack_158);
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
    uVar7 = FTextFormat::FTextFormat(local_108,lVar6 + 0x30);
    uVar7 = FText::Format(local_120,uVar7,&local_f8);
    FText::operator=(param_2,uVar7);
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_118 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar2 = (int *)((longlong)local_118 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_118 + 8))(local_118,1);
        }
      }
    }
    local_b0 = 0;
    if (local_b8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_f8);
  }
  return param_2;
}



// FUNCTION 140d7c290 FUN_140d7c290 body=649 status=ok
// SIG undefined FUN_140d7c290(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140d7c290(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_188 [32];
  undefined1 local_168 [4];
  undefined1 local_164 [4];
  undefined8 *local_160;
  undefined4 *local_158;
  undefined8 *local_150;
  undefined4 *local_148;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_110 [24];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 local_a8 [4];
  undefined1 local_98 [8];
  longlong *local_90;
  char local_80;
  undefined4 local_78 [4];
  undefined1 local_68 [8];
  longlong *local_60;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  FText::FText(param_2);
  lVar5 = FUN_140d7ee70(param_1);
  if ((lVar5 != 0) && (lVar6 = FUN_140c15eb0(*(undefined4 *)(param_1 + 0x178)), lVar6 != 0)) {
    local_f8 = 0;
    local_f0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c4 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_c8 = 0xffffffff;
    uVar7 = FText::FromString(local_140,param_3);
    local_a8[0] = 4;
    FText::FText(local_98,uVar7);
    local_80 = '\x01';
    local_160 = &DAT_14629ace0;
    local_158 = local_a8;
    FUN_1405df450(&local_f8,local_168,&local_160,0);
    if ((local_80 != '\0') && (local_80 = '\0', local_90 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_90 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    if (local_138 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_138 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_138)(local_138);
        LOCK();
        piVar2 = (int *)((longlong)local_138 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_138 + 8))(local_138,1);
        }
      }
    }
    local_78[0] = 4;
    FText::FText(local_68,lVar6 + 0x38);
    local_50 = '\x01';
    local_150 = &DAT_14629acd0;
    local_148 = local_78;
    FUN_1405df450(&local_f8,local_164,&local_150,0);
    if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
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
    uVar7 = FTextFormat::FTextFormat(local_110,lVar5 + 0x30);
    uVar7 = FText::Format(local_128,uVar7,&local_f8);
    FText::operator=(param_2,uVar7);
    if (local_120 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_120 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    local_b0 = 0;
    if (local_b8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_f8);
  }
  return param_2;
}



// FUNCTION 140d7c520 FUN_140d7c520 body=762 status=ok
// SIG undefined FUN_140d7c520(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140d7c520(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [4];
  undefined1 local_184 [4];
  undefined8 *local_180;
  undefined4 *local_178;
  undefined8 *local_170;
  undefined4 *local_168;
  undefined8 local_160;
  longlong *plStack_158;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 local_a8 [4];
  undefined1 local_98 [8];
  longlong *local_90;
  char local_80;
  undefined4 local_78 [4];
  undefined1 local_68 [8];
  longlong *local_60;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  FText::FText(param_2);
  lVar6 = FUN_140d7ee70(param_1);
  if (lVar6 != 0) {
    local_c8 = 0xffffffff;
    local_f8 = 0;
    local_f0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c4 = 0;
    local_b8 = 0;
    local_b0 = 0;
    uVar7 = FText::FromString(local_150,param_3);
    local_a8[0] = 4;
    FText::FText(local_98,uVar7);
    local_80 = '\x01';
    local_180 = &DAT_14629ace0;
    local_178 = local_a8;
    FUN_1405df450(&local_f8,local_188,&local_180,0);
    if (local_80 != '\0') {
      local_80 = '\0';
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_90 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar2 = (int *)((longlong)local_90 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_90 + 8))(local_90,1);
          }
        }
      }
    }
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_148 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar2 = (int *)((longlong)local_148 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_148 + 8))(local_148,1);
        }
      }
    }
    local_160 = 0;
    plStack_158 = (longlong *)0x0;
    uVar7 = FText::AsNumber(local_138,*(undefined4 *)(param_1 + 0x78),0,&local_160);
    local_78[0] = 4;
    FText::FText(local_68,uVar7);
    local_50 = '\x01';
    local_170 = &DAT_14629ac90;
    local_168 = local_78;
    FUN_1405df450(&local_f8,local_184,&local_170,0);
    if (local_50 != '\0') {
      local_50 = '\0';
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)local_60 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
    }
    if (local_130 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_130 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_130)(local_130);
        LOCK();
        piVar2 = (int *)((longlong)local_130 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_130 + 8))(local_130,1);
        }
      }
    }
    plVar1 = plStack_158;
    if (plStack_158 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_158 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_158)(plStack_158);
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
    uVar7 = FTextFormat::FTextFormat(local_108,lVar6 + 0x30);
    uVar7 = FText::Format(local_120,uVar7,&local_f8);
    FText::operator=(param_2,uVar7);
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_118 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar2 = (int *)((longlong)local_118 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_118 + 8))(local_118,1);
        }
      }
    }
    local_b0 = 0;
    if (local_b8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_f8);
  }
  return param_2;
}



// FUNCTION 140d7c820 FUN_140d7c820 body=491 status=ok
// SIG undefined FUN_140d7c820(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140d7c820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_148 [32];
  undefined1 local_128 [8];
  undefined8 *local_120;
  undefined4 *local_118;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [24];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_78 [4];
  undefined1 local_68 [8];
  longlong *local_60;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  FText::FText(param_2);
  lVar5 = FUN_140d7ee70(param_1);
  if (lVar5 != 0) {
    local_98 = 0xffffffff;
    local_c8 = 0;
    local_c0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_94 = 0;
    local_88 = 0;
    local_80 = 0;
    uVar6 = FText::FromString(local_110,param_3);
    local_78[0] = 4;
    FText::FText(local_68,uVar6);
    local_50 = '\x01';
    local_120 = &DAT_14629ace0;
    local_118 = local_78;
    FUN_1405df450(&local_c8,local_128,&local_120,0);
    if (local_50 != '\0') {
      local_50 = '\0';
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
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
    }
    if (local_108 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_108 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_108)(local_108);
        LOCK();
        piVar2 = (int *)((longlong)local_108 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_108 + 8))(local_108,1);
        }
      }
    }
    uVar6 = FTextFormat::FTextFormat(local_e0,lVar5 + 0x30);
    uVar6 = FText::Format(local_f8,uVar6,&local_c8);
    FText::operator=(param_2,uVar6);
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_f0 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    local_80 = 0;
    if (local_88 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_c8);
  }
  return param_2;
}



// FUNCTION 140d7ca10 FUN_140d7ca10 body=677 status=ok
// SIG undefined FUN_140d7ca10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140d7ca10(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_188 [32];
  undefined1 local_168 [4];
  undefined1 local_164 [4];
  undefined8 *local_160;
  undefined4 *local_158;
  undefined8 *local_150;
  undefined4 *local_148;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 local_98 [4];
  undefined1 local_88 [8];
  longlong *local_80;
  char local_70;
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  FText::FText(param_2);
  lVar5 = FUN_140d7ee70(param_1);
  if (lVar5 != 0) {
    FUN_140c14280(local_140,*(undefined4 *)(param_1 + 0x178));
    local_e8 = 0;
    local_e0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0xffffffff;
    local_b4 = 0;
    local_a8 = 0;
    local_a0 = 0;
    uVar6 = FText::FromString(local_128,param_3);
    local_98[0] = 4;
    FText::FText(local_88,uVar6);
    local_70 = '\x01';
    local_160 = &DAT_14629ace0;
    local_158 = local_98;
    FUN_1405df450(&local_e8,local_168,&local_160,0);
    if (local_70 != '\0') {
      local_70 = '\0';
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_80 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar2 = (int *)((longlong)local_80 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_80 + 8))(local_80,1);
          }
        }
      }
    }
    if (local_120 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_120 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    local_68[0] = 4;
    FText::FText(local_58,local_140);
    local_40 = '\x01';
    local_150 = &DAT_14629acb0;
    local_148 = local_68;
    FUN_1405df450(&local_e8,local_164,&local_150,0);
    if (local_40 != '\0') {
      local_40 = '\0';
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
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
    }
    uVar6 = FTextFormat::FTextFormat(local_f8,lVar5 + 0x30);
    uVar6 = FText::Format(local_110,uVar6,&local_e8);
    FText::operator=(param_2,uVar6);
    if (local_108 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_108 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_108)(local_108);
        LOCK();
        piVar2 = (int *)((longlong)local_108 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_108 + 8))(local_108,1);
        }
      }
    }
    local_a0 = 0;
    if (local_a8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_e8);
    if (local_138 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_138 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_138)(local_138);
        LOCK();
        piVar2 = (int *)((longlong)local_138 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_138 + 8))(local_138,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 140d7ccc0 FUN_140d7ccc0 body=999 status=ok
// SIG undefined FUN_140d7ccc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140d7ccc0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined1 local_1a4 [4];
  undefined8 *local_1a0;
  undefined4 *local_198;
  undefined8 *local_190;
  undefined4 *local_188;
  undefined1 local_180 [8];
  longlong *local_178;
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 local_a8 [4];
  undefined1 local_98 [8];
  longlong *local_90;
  char local_80;
  undefined4 local_78 [4];
  undefined1 local_68 [8];
  longlong *local_60;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_1a8 = 0;
  FText::FText(param_2);
  lVar5 = FUN_140d7ee70(param_1);
  if ((lVar5 != 0) && (lVar6 = FUN_140c14b40(*(undefined4 *)(param_1 + 0x178)), lVar6 != 0)) {
    lVar7 = USpinBox::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) {
      cVar4 = FText::IsEmpty(lVar6 + 0x500);
      bVar9 = cVar4 != '\0';
      if (bVar9) {
        uVar8 = FUN_142dea370(lVar6 + 0x38,local_168);
      }
      else {
        uVar8 = FText::FText(local_150,lVar6 + 0x500);
      }
      FText::FText(local_180,uVar8);
      if ((bVar9) && (local_160 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_160 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_160)(local_160);
          LOCK();
          piVar2 = (int *)((longlong)local_160 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_160 + 8))(local_160,1);
          }
        }
      }
      if ((!bVar9) && (local_148 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_148 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_148)(local_148);
          LOCK();
          piVar2 = (int *)((longlong)local_148 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_148 + 8))(local_148,1);
          }
        }
      }
      cVar4 = FText::IsEmpty(local_180);
      if (cVar4 == '\0') {
        local_f8 = 0;
        local_f0 = 0;
        local_d8 = 0;
        local_d0 = 0;
        local_c8 = 0xffffffff;
        local_c4 = 0;
        local_b8 = 0;
        local_b0 = 0;
        uVar8 = FText::FromString(local_138,param_3);
        local_a8[0] = 4;
        FText::FText(local_98,uVar8);
        local_80 = '\x01';
        local_1a0 = &DAT_14629ace0;
        local_198 = local_a8;
        FUN_1405df450(&local_f8,&local_1a8,&local_1a0,0);
        if ((local_80 != '\0') && (local_80 = '\0', local_90 != (longlong *)0x0)) {
          LOCK();
          plVar1 = local_90 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
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
        if (local_130 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_130 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_130)(local_130);
            LOCK();
            piVar2 = (int *)((longlong)local_130 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_130 + 8))(local_130,1);
            }
          }
        }
        local_78[0] = 4;
        FText::FText(local_68,local_180);
        local_50 = '\x01';
        local_190 = &DAT_14629acd0;
        local_188 = local_78;
        FUN_1405df450(&local_f8,local_1a4,&local_190,0);
        if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
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
        uVar8 = FTextFormat::FTextFormat(local_108,lVar5 + 0x30);
        uVar8 = FText::Format(local_120,uVar8,&local_f8);
        FText::operator=(param_2,uVar8);
        if (local_118 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_118 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_118)(local_118);
            LOCK();
            piVar2 = (int *)((longlong)local_118 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_118 + 8))(local_118,1);
            }
          }
        }
        local_b0 = 0;
        if (local_b8 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_f8);
      }
      if (local_178 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_178 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_178)(local_178);
          LOCK();
          piVar2 = (int *)((longlong)local_178 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_178 + 8))(local_178,1);
          }
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 140d7d0b0 FUN_140d7d0b0 body=999 status=ok
// SIG undefined FUN_140d7d0b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140d7d0b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined1 local_1a4 [4];
  undefined8 *local_1a0;
  undefined4 *local_198;
  undefined8 *local_190;
  undefined4 *local_188;
  undefined1 local_180 [8];
  longlong *local_178;
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 local_a8 [4];
  undefined1 local_98 [8];
  longlong *local_90;
  char local_80;
  undefined4 local_78 [4];
  undefined1 local_68 [8];
  longlong *local_60;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_1a8 = 0;
  FText::FText(param_2);
  lVar5 = FUN_140d7ee70(param_1);
  if ((lVar5 != 0) && (lVar6 = FUN_140c14b40(*(undefined4 *)(param_1 + 0x178)), lVar6 != 0)) {
    lVar7 = AGBlizzard::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) {
      cVar4 = FText::IsEmpty(lVar6 + 0x4f8);
      bVar9 = cVar4 != '\0';
      if (bVar9) {
        uVar8 = FUN_142dea370(lVar6 + 0x38,local_168);
      }
      else {
        uVar8 = FText::FText(local_150,lVar6 + 0x4f8);
      }
      FText::FText(local_180,uVar8);
      if ((bVar9) && (local_160 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_160 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_160)(local_160);
          LOCK();
          piVar2 = (int *)((longlong)local_160 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_160 + 8))(local_160,1);
          }
        }
      }
      if ((!bVar9) && (local_148 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_148 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_148)(local_148);
          LOCK();
          piVar2 = (int *)((longlong)local_148 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_148 + 8))(local_148,1);
          }
        }
      }
      cVar4 = FText::IsEmpty(local_180);
      if (cVar4 == '\0') {
        local_f8 = 0;
        local_f0 = 0;
        local_d8 = 0;
        local_d0 = 0;
        local_c8 = 0xffffffff;
        local_c4 = 0;
        local_b8 = 0;
        local_b0 = 0;
        uVar8 = FText::FromString(local_138,param_3);
        local_a8[0] = 4;
        FText::FText(local_98,uVar8);
        local_80 = '\x01';
        local_1a0 = &DAT_14629ace0;
        local_198 = local_a8;
        FUN_1405df450(&local_f8,&local_1a8,&local_1a0,0);
        if ((local_80 != '\0') && (local_80 = '\0', local_90 != (longlong *)0x0)) {
          LOCK();
          plVar1 = local_90 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
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
        if (local_130 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_130 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_130)(local_130);
            LOCK();
            piVar2 = (int *)((longlong)local_130 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_130 + 8))(local_130,1);
            }
          }
        }
        local_78[0] = 4;
        FText::FText(local_68,local_180);
        local_50 = '\x01';
        local_190 = &DAT_14629ad00;
        local_188 = local_78;
        FUN_1405df450(&local_f8,local_1a4,&local_190,0);
        if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
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
        uVar8 = FTextFormat::FTextFormat(local_108,lVar5 + 0x30);
        uVar8 = FText::Format(local_120,uVar8,&local_f8);
        FText::operator=(param_2,uVar8);
        if (local_118 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_118 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_118)(local_118);
            LOCK();
            piVar2 = (int *)((longlong)local_118 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_118 + 8))(local_118,1);
            }
          }
        }
        local_b0 = 0;
        if (local_b8 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_f8);
      }
      if (local_178 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_178 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_178)(local_178);
          LOCK();
          piVar2 = (int *)((longlong)local_178 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_178 + 8))(local_178,1);
          }
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 140d7d4a0 FUN_140d7d4a0 body=999 status=ok
// SIG undefined FUN_140d7d4a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140d7d4a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined1 local_1a4 [4];
  undefined8 *local_1a0;
  undefined4 *local_198;
  undefined8 *local_190;
  undefined4 *local_188;
  undefined1 local_180 [8];
  longlong *local_178;
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 local_a8 [4];
  undefined1 local_98 [8];
  longlong *local_90;
  char local_80;
  undefined4 local_78 [4];
  undefined1 local_68 [8];
  longlong *local_60;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_1a8 = 0;
  FText::FText(param_2);
  lVar5 = FUN_140d7ee70(param_1);
  if ((lVar5 != 0) && (lVar6 = FUN_140c14b40(*(undefined4 *)(param_1 + 0x178)), lVar6 != 0)) {
    lVar7 = AGBlizzard::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) {
      cVar4 = FText::IsEmpty(lVar6 + 0x4f8);
      bVar9 = cVar4 != '\0';
      if (bVar9) {
        uVar8 = FUN_142dea370(lVar6 + 0x38,local_168);
      }
      else {
        uVar8 = FText::FText(local_150,lVar6 + 0x4f8);
      }
      FText::FText(local_180,uVar8);
      if ((bVar9) && (local_160 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_160 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_160)(local_160);
          LOCK();
          piVar2 = (int *)((longlong)local_160 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_160 + 8))(local_160,1);
          }
        }
      }
      if ((!bVar9) && (local_148 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_148 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_148)(local_148);
          LOCK();
          piVar2 = (int *)((longlong)local_148 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_148 + 8))(local_148,1);
          }
        }
      }
      cVar4 = FText::IsEmpty(local_180);
      if (cVar4 == '\0') {
        local_f8 = 0;
        local_f0 = 0;
        local_d8 = 0;
        local_d0 = 0;
        local_c8 = 0xffffffff;
        local_c4 = 0;
        local_b8 = 0;
        local_b0 = 0;
        uVar8 = FText::FromString(local_138,param_3);
        local_a8[0] = 4;
        FText::FText(local_98,uVar8);
        local_80 = '\x01';
        local_1a0 = &DAT_14629ace0;
        local_198 = local_a8;
        FUN_1405df450(&local_f8,&local_1a8,&local_1a0,0);
        if ((local_80 != '\0') && (local_80 = '\0', local_90 != (longlong *)0x0)) {
          LOCK();
          plVar1 = local_90 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
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
        if (local_130 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_130 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_130)(local_130);
            LOCK();
            piVar2 = (int *)((longlong)local_130 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_130 + 8))(local_130,1);
            }
          }
        }
        local_78[0] = 4;
        FText::FText(local_68,local_180);
        local_50 = '\x01';
        local_190 = &DAT_14629ad00;
        local_188 = local_78;
        FUN_1405df450(&local_f8,local_1a4,&local_190,0);
        if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
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
        uVar8 = FTextFormat::FTextFormat(local_108,lVar5 + 0x30);
        uVar8 = FText::Format(local_120,uVar8,&local_f8);
        FText::operator=(param_2,uVar8);
        if (local_118 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_118 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_118)(local_118);
            LOCK();
            piVar2 = (int *)((longlong)local_118 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_118 + 8))(local_118,1);
            }
          }
        }
        local_b0 = 0;
        if (local_b8 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_f8);
      }
      if (local_178 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_178 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_178)(local_178);
          LOCK();
          piVar2 = (int *)((longlong)local_178 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_178 + 8))(local_178,1);
          }
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 140d7d890 FUN_140d7d890 body=250 status=ok
// SIG undefined FUN_140d7d890(void)

undefined8 * FUN_140d7d890(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 local_res10;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar7 = 0;
  local_res10 = param_2;
  plVar5 = (longlong *)FUN_1404b0000(&local_res10);
  bVar8 = plVar5 != (longlong *)0x0;
  if (bVar8) {
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x60))(plVar5,local_28);
    uVar7 = *puVar6;
  }
  else {
    puVar6 = &local_38;
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
  }
  *param_1 = uVar7;
  param_1[1] = puVar6[1];
  puVar6[1] = 0;
  *puVar6 = 0;
  if (bVar8) {
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_20 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  plVar5 = plStack_30;
  if ((!bVar8) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140d7d990 FUN_140d7d990 body=214 status=ok
// SIG undefined FUN_140d7d990(void)

undefined8 * FUN_140d7d990(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 local_28 [16];
  
  plVar2 = (longlong *)*param_3;
  plVar1 = (longlong *)FName::FName(local_res20,L"SPARK",1);
  plVar2 = (longlong *)(**(code **)(*plVar2 + 8))(plVar2,local_28);
  if (*plVar2 == *plVar1) {
    FUN_140549810(param_1 + 0xd0,local_res18,param_3);
    puVar5 = (undefined8 *)0x0;
    if (local_res18[0] != -1) {
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0xd0) + (longlong)local_res18[0] * 0x28);
    }
    puVar4 = puVar5 + 2;
    if (puVar5 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    if (puVar4 == (undefined8 *)0x0) {
      *param_2 = 0;
      param_2[1] = 0;
      return param_2;
    }
    *param_2 = *puVar4;
    lVar3 = puVar4[1];
  }
  else {
    *param_2 = *param_3;
    lVar3 = param_3[1];
  }
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 140d7da70 FUN_140d7da70 body=235 status=ok
// SIG undefined FUN_140d7da70(void)

undefined8 *
FUN_140d7da70(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined4 param_5)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  
  plVar3 = (longlong *)(**(code **)(*(longlong *)*param_4 + 8))((longlong *)*param_4,local_res8);
  lVar1 = *plVar3;
  if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
    lVar4 = *(longlong *)(param_1 + 0xa8);
    if (*(longlong *)(param_1 + 0xa8) == 0) {
      lVar4 = param_1 + 0xa0;
    }
    iVar2 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                             (longlong)*(int *)(param_1 + 0xb0) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        plVar3 = (longlong *)((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x68));
        if (*plVar3 == lVar1) {
          if (iVar2 != -1) goto LAB_140d7db11;
          break;
        }
        iVar2 = (int)plVar3[3];
      } while (iVar2 != -1);
    }
  }
  plVar3 = (longlong *)0x0;
LAB_140d7db11:
  plVar5 = plVar3 + 1;
  if (plVar3 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  if (plVar5 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_140d7db60(*plVar5,param_2,param_3,param_4,param_5);
  }
  return param_2;
}



// FUNCTION 140d7db60 FUN_140d7db60 body=321 status=ok
// SIG undefined FUN_140d7db60(void)

undefined8 *
FUN_140d7db60(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             int param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 local_28 [8];
  longlong *local_20;
  
  iVar7 = FUN_140d844e0();
  if ((-1 < iVar7) && (iVar7 < *(int *)(param_1 + 0x40))) {
    if (param_5 == 3) {
      lVar9 = 0x10;
    }
    else if (param_5 == 4) {
      lVar9 = 0x20;
    }
    else if (param_5 == 5) {
      lVar9 = 0x30;
    }
    else {
      lVar9 = 0;
    }
    lVar3 = *(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar7 * 0x10) + 0x10);
    puVar11 = *(undefined8 **)(lVar9 + lVar3);
    puVar10 = puVar11 + (longlong)*(int *)(lVar9 + 8 + lVar3) * 2;
    for (; puVar11 != puVar10; puVar11 = puVar11 + 2) {
      puVar4 = (undefined8 *)*param_4;
      puVar8 = (undefined8 *)(**(code **)(*(longlong *)*puVar11 + 8))((longlong *)*puVar11,local_28)
      ;
      cVar6 = (**(code **)*puVar4)(puVar4,*puVar8);
      plVar5 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      if (cVar6 != '\0') {
        *param_2 = *puVar11;
        lVar9 = puVar11[1];
        param_2[1] = lVar9;
        if (lVar9 == 0) {
          return param_2;
        }
        LOCK();
        *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
        UNLOCK();
        return param_2;
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140d7dcb0 FUN_140d7dcb0 body=24 status=ok
// SIG undefined FUN_140d7dcb0(void)

undefined8 FUN_140d7dcb0(longlong param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x48))) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x40) + (longlong)param_2 * 8);
  }
  return 0;
}



// FUNCTION 140d7dcd0 FUN_140d7dcd0 body=331 status=ok
// SIG undefined FUN_140d7dcd0(void)

undefined8 * FUN_140d7dcd0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  void **ppvVar6;
  void *local_28;
  undefined8 local_20;
  void *local_18;
  undefined8 local_10;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar2 = *(longlong *)(DAT_146b33f38 + 0x98);
  if (lVar2 == 0) {
    local_18 = (void *)0x0;
    ppvVar6 = &local_18;
    local_10 = 0;
    bVar4 = false;
    bVar3 = true;
  }
  else if (((iVar1 < 0) || (*(int *)(lVar2 + 0x48) <= iVar1)) ||
          (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x40) + (longlong)iVar1 * 8), lVar2 == 0)) {
    ppvVar6 = &local_28;
    local_28 = (void *)0x0;
    bVar4 = true;
    bVar3 = false;
    local_20 = 0;
  }
  else {
    puVar5 = (undefined8 *)FText::ToString(lVar2 + 0x30);
    local_28 = (void *)0x0;
    iVar1 = *(int *)(puVar5 + 1);
    _Src = (void *)*puVar5;
    local_20 = CONCAT44(local_20._4_4_,iVar1);
    if (iVar1 == 0) {
      ppvVar6 = &local_28;
      local_20 = 0;
      bVar4 = true;
      bVar3 = false;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,iVar1,0);
      _guard_xfg_dispatch_icall_nop(local_28,_Src,(longlong)iVar1 * 2);
      ppvVar6 = &local_28;
      bVar4 = true;
      bVar3 = false;
    }
  }
  *param_2 = *ppvVar6;
  *ppvVar6 = (void *)0x0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(ppvVar6 + 1);
  ppvVar6[1] = (void *)0x0;
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)ppvVar6 + 0xc);
  if (bVar3) {
    if (local_18 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if ((bVar4) && (local_28 != (void *)0x0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140d7de20 FUN_140d7de20 body=4071 status=ok
// SIG undefined FUN_140d7de20(void)

longlong ** FUN_140d7de20(undefined8 param_1,longlong **param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  longlong *local_190;
  longlong *local_188;
  longlong *local_180;
  longlong *local_178;
  longlong *local_170;
  longlong *local_168;
  longlong *local_160;
  longlong *local_158;
  longlong *local_150;
  longlong *local_148;
  longlong *local_140;
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  longlong *local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  plVar6 = (longlong *)0x0;
  *param_2 = (longlong *)0x0;
  param_2[1] = (longlong *)0x0;
  switch(param_3) {
  case 1:
    plVar5 = (longlong *)operator_new(0x178);
    plVar4 = plVar6;
    if (plVar5 != (longlong *)0x0) {
      FUN_140d63580(plVar5);
      *(undefined1 *)(plVar5 + 0xb) = 1;
      *plVar5 = (longlong)&PTR_FUN_144530990;
      plVar4 = plVar5;
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
      plVar5[2] = (longlong)plVar4;
      plVar6 = plVar5;
    }
    local_1a8 = plVar4;
    local_1a0 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_1a8,plVar4,plVar4);
    if (param_2 != &local_1a8) {
      *param_2 = plVar4;
      local_1a8 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_1a0);
      plVar6 = local_1a0;
    }
    break;
  case 2:
    lVar3 = operator_new(0x188);
    plVar4 = plVar6;
    if (lVar3 != 0) {
      plVar4 = (longlong *)FUN_140d63a90(lVar3);
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
      plVar5[2] = (longlong)plVar4;
      plVar6 = plVar5;
    }
    local_118 = plVar4;
    local_110 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_118,plVar4,plVar4);
    if (param_2 != &local_118) {
      *param_2 = plVar4;
      local_118 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_110);
      plVar6 = local_110;
    }
    break;
  case 3:
    lVar3 = operator_new(400);
    plVar4 = plVar6;
    if (lVar3 != 0) {
      plVar4 = (longlong *)FUN_140d63a50(lVar3);
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
      plVar5[2] = (longlong)plVar4;
      plVar6 = plVar5;
    }
    local_108 = plVar4;
    local_100 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_108,plVar4,plVar4);
    if (param_2 != &local_108) {
      *param_2 = plVar4;
      local_108 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_100);
      plVar6 = local_100;
    }
    break;
  case 4:
    lVar3 = operator_new(0x180);
    plVar4 = plVar6;
    if (lVar3 != 0) {
      plVar4 = (longlong *)FUN_140d63b50(lVar3);
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
      plVar5[2] = (longlong)plVar4;
      plVar6 = plVar5;
    }
    local_148 = plVar4;
    local_140 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_148,plVar4,plVar4);
    if (param_2 != &local_148) {
      *param_2 = plVar4;
      local_148 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_140);
      plVar6 = local_140;
    }
    break;
  case 5:
    lVar3 = operator_new(0x180);
    plVar4 = plVar6;
    if (lVar3 != 0) {
      plVar4 = (longlong *)FUN_140d63c50(lVar3);
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
      plVar5[2] = (longlong)plVar4;
      plVar6 = plVar5;
    }
    local_138 = plVar4;
    local_130 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_138,plVar4,plVar4);
    if (param_2 != &local_138) {
      *param_2 = plVar4;
      local_138 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_130);
      plVar6 = local_130;
    }
    break;
  case 6:
    lVar3 = operator_new(0x180);
    plVar4 = plVar6;
    if (lVar3 != 0) {
      plVar4 = (longlong *)FUN_140d63b90(lVar3);
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
      plVar5[2] = (longlong)plVar4;
      plVar6 = plVar5;
    }
    local_128 = plVar4;
    local_120 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_128,plVar4,plVar4);
    if (param_2 != &local_128) {
      *param_2 = plVar4;
      local_128 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_120);
      plVar6 = local_120;
    }
    break;
  case 7:
    plVar5 = (longlong *)operator_new(0x180);
    plVar4 = plVar6;
    if (plVar5 != (longlong *)0x0) {
      FUN_140d63580(plVar5);
      *(undefined1 *)(plVar5 + 0xb) = 7;
      *plVar5 = (longlong)&PTR_FUN_144530948;
      plVar4 = plVar5;
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
      plVar5[2] = (longlong)plVar4;
      plVar6 = plVar5;
    }
    local_178 = plVar4;
    local_170 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_178,plVar4,plVar4);
    if (param_2 != &local_178) {
      *param_2 = plVar4;
      local_178 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_170);
      plVar6 = local_170;
    }
    break;
  case 8:
    plVar5 = (longlong *)operator_new(0x180);
    plVar4 = plVar6;
    if (plVar5 != (longlong *)0x0) {
      FUN_140d63580(plVar5);
      *(undefined1 *)(plVar5 + 0xb) = 8;
      *plVar5 = (longlong)&PTR_FUN_144530948;
      plVar4 = plVar5;
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
      plVar5[2] = (longlong)plVar4;
      plVar6 = plVar5;
    }
    local_168 = plVar4;
    local_160 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_168,plVar4,plVar4);
    if (param_2 != &local_168) {
      *param_2 = plVar4;
      local_168 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_160);
      plVar6 = local_160;
    }
    break;
  case 9:
    plVar5 = (longlong *)operator_new(0x180);
    plVar4 = plVar6;
    if (plVar5 != (longlong *)0x0) {
      FUN_140d63580(plVar5);
      *(undefined1 *)(plVar5 + 0xb) = 9;
      *plVar5 = (longlong)&PTR_FUN_144530948;
      plVar4 = plVar5;
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
      plVar5[2] = (longlong)plVar4;
      plVar6 = plVar5;
    }
    local_158 = plVar4;
    local_150 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_158,plVar4,plVar4);
    if (param_2 != &local_158) {
      *param_2 = plVar4;
      local_158 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_150);
      plVar6 = local_150;
    }
    break;
  case 10:
    lVar3 = operator_new(0x188);
    plVar4 = plVar6;
    if (lVar3 != 0) {
      plVar4 = (longlong *)FUN_140d63ad0(lVar3);
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
      plVar5[2] = (longlong)plVar4;
      plVar6 = plVar5;
    }
    local_b8 = plVar4;
    local_b0 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_b8,plVar4,plVar4);
    if (param_2 != &local_b8) {
      *param_2 = plVar4;
      local_b8 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_b0);
      plVar6 = local_b0;
    }
    break;
  case 0xb:
    lVar3 = operator_new(0x188);
    plVar4 = plVar6;
    if (lVar3 != 0) {
      plVar4 = (longlong *)FUN_140d63900(lVar3);
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
      plVar5[2] = (longlong)plVar4;
      plVar6 = plVar5;
    }
    local_e8 = plVar4;
    local_e0 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_e8,plVar4,plVar4);
    if (param_2 != &local_e8) {
      *param_2 = plVar4;
      local_e8 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_e0);
      plVar6 = local_e0;
    }
    break;
  case 0xc:
    lVar3 = operator_new(0x188);
    plVar4 = plVar6;
    if (lVar3 != 0) {
      plVar4 = (longlong *)FUN_140d638b0(lVar3);
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
      plVar5[2] = (longlong)plVar4;
      plVar6 = plVar5;
    }
    local_f8 = plVar4;
    local_f0 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_f8,plVar4,plVar4);
    if (param_2 != &local_f8) {
      *param_2 = plVar4;
      local_f8 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_f0);
      plVar6 = local_f0;
    }
    break;
  case 0xd:
    lVar3 = operator_new(0x180);
    plVar4 = plVar6;
    if (lVar3 != 0) {
      plVar4 = (longlong *)FUN_140d63bd0(lVar3);
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
      plVar5[2] = (longlong)plVar4;
      plVar6 = plVar5;
    }
    local_78 = plVar4;
    local_70 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_78,plVar4,plVar4);
    if (param_2 != &local_78) {
      *param_2 = plVar4;
      local_78 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_70);
      plVar6 = local_70;
    }
    break;
  case 0xe:
    lVar3 = operator_new(0x180);
    plVar4 = plVar6;
    if (lVar3 != 0) {
      plVar4 = (longlong *)FUN_140d63990(lVar3);
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
      plVar5[2] = (longlong)plVar4;
      plVar6 = plVar5;
    }
    local_98 = plVar4;
    local_90 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_98,plVar4,plVar4);
    if (param_2 != &local_98) {
      *param_2 = plVar4;
      local_98 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_90);
      plVar6 = local_90;
    }
    break;
  case 0xf:
    lVar3 = operator_new(0x180);
    plVar4 = plVar6;
    if (lVar3 != 0) {
      plVar4 = (longlong *)FUN_140d63c10(lVar3);
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
      plVar5[2] = (longlong)plVar4;
      plVar6 = plVar5;
    }
    local_88 = plVar4;
    local_80 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_88,plVar4,plVar4);
    if (param_2 != &local_88) {
      *param_2 = plVar4;
      local_88 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_80);
      plVar6 = local_80;
    }
    break;
  case 0x10:
    plVar5 = (longlong *)operator_new(0x178);
    plVar4 = plVar6;
    if (plVar5 != (longlong *)0x0) {
      FUN_140d63580(plVar5);
      *(undefined1 *)(plVar5 + 0xb) = 0x10;
      *plVar5 = (longlong)&PTR_FUN_144530a20;
      plVar4 = plVar5;
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
      plVar5[2] = (longlong)plVar4;
      plVar6 = plVar5;
    }
    local_48 = plVar4;
    local_40 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_48,plVar4,plVar4);
    if (param_2 != &local_48) {
      *param_2 = plVar4;
      local_48 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_40);
      plVar6 = local_40;
    }
    break;
  case 0x11:
    plVar5 = (longlong *)operator_new(0x178);
    plVar4 = plVar6;
    if (plVar5 != (longlong *)0x0) {
      FUN_140d63580(plVar5);
      *(undefined1 *)(plVar5 + 0xb) = 0x11;
      *plVar5 = (longlong)&PTR_FUN_144530bd0;
      plVar4 = plVar5;
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
      plVar5[2] = (longlong)plVar4;
      plVar6 = plVar5;
    }
    local_198 = plVar4;
    local_190 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_198,plVar4,plVar4);
    if (param_2 != &local_198) {
      *param_2 = plVar4;
      local_198 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_190);
      plVar6 = local_190;
    }
    break;
  case 0x12:
    plVar5 = (longlong *)operator_new(0x178);
    plVar4 = plVar6;
    if (plVar5 != (longlong *)0x0) {
      FUN_140d63580(plVar5);
      *(undefined1 *)(plVar5 + 0xb) = 0x12;
      *plVar5 = (longlong)&PTR_FUN_144530a20;
      plVar4 = plVar5;
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
      plVar5[2] = (longlong)plVar4;
      plVar6 = plVar5;
    }
    local_188 = plVar4;
    local_180 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_188,plVar4,plVar4);
    if (param_2 != &local_188) {
      *param_2 = plVar4;
      local_188 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_180);
      plVar6 = local_180;
    }
    break;
  case 0x13:
    plVar5 = (longlong *)operator_new(0x178);
    plVar4 = plVar6;
    if (plVar5 != (longlong *)0x0) {
      FUN_140d63580(plVar5);
      *(undefined1 *)(plVar5 + 0xb) = 0x13;
      *plVar5 = (longlong)&PTR_FUN_144530b88;
      plVar4 = plVar5;
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
      plVar5[2] = (longlong)plVar4;
      plVar6 = plVar5;
    }
    local_c8 = plVar4;
    local_c0 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_c8,plVar4,plVar4);
    if (param_2 != &local_c8) {
      *param_2 = plVar4;
      local_c8 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_c0);
      plVar6 = local_c0;
    }
    break;
  case 0x14:
    lVar3 = operator_new(0x188);
    plVar4 = plVar6;
    if (lVar3 != 0) {
      plVar4 = (longlong *)FUN_140d63a10(lVar3);
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
      plVar5[2] = (longlong)plVar4;
      plVar6 = plVar5;
    }
    local_68 = plVar4;
    local_60 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_68,plVar4,plVar4);
    if (param_2 != &local_68) {
      *param_2 = plVar4;
      local_68 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_60);
      plVar6 = local_60;
    }
    break;
  case 0x15:
    plVar5 = (longlong *)operator_new(0x178);
    plVar4 = plVar6;
    if (plVar5 != (longlong *)0x0) {
      FUN_140d63580(plVar5);
      *(undefined1 *)(plVar5 + 0xb) = 0x15;
      *plVar5 = (longlong)&PTR_FUN_144530990;
      plVar4 = plVar5;
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
      plVar5[2] = (longlong)plVar4;
      plVar6 = plVar5;
    }
    local_58 = plVar4;
    local_50 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_58,plVar4,plVar4);
    if (param_2 != &local_58) {
      *param_2 = plVar4;
      local_58 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_50);
      plVar6 = local_50;
    }
    break;
  case 0x16:
    lVar3 = operator_new(0x180);
    plVar4 = plVar6;
    if (lVar3 != 0) {
      plVar4 = (longlong *)FUN_140d63880(lVar3);
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
      plVar5[2] = (longlong)plVar4;
      plVar6 = plVar5;
    }
    local_38 = plVar4;
    local_30 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_38,plVar4,plVar4);
    if (param_2 != &local_38) {
      *param_2 = plVar4;
      local_38 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_30);
      plVar6 = local_30;
    }
    break;
  case 0x17:
    lVar3 = operator_new(0x188);
    plVar4 = plVar6;
    if (lVar3 != 0) {
      plVar4 = (longlong *)FUN_140d63950(lVar3);
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
      plVar5[2] = (longlong)plVar4;
      plVar6 = plVar5;
    }
    local_d8 = plVar4;
    local_d0 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_d8,plVar4,plVar4);
    if (param_2 != &local_d8) {
      *param_2 = plVar4;
      local_d8 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_d0);
      plVar6 = local_d0;
    }
    break;
  case 0x18:
    lVar3 = operator_new(0x188);
    plVar4 = plVar6;
    if (lVar3 != 0) {
      plVar4 = (longlong *)FUN_140d63b10(lVar3);
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
      plVar5[2] = (longlong)plVar4;
      plVar6 = plVar5;
    }
    local_28 = plVar4;
    local_20 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_28,plVar4,plVar4);
    if (param_2 != &local_28) {
      *param_2 = plVar4;
      local_28 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_20);
      plVar6 = local_20;
    }
    break;
  case 0x19:
    lVar3 = operator_new(400);
    plVar4 = plVar6;
    if (lVar3 != 0) {
      plVar4 = (longlong *)FUN_140d639d0(lVar3);
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
      plVar5[2] = (longlong)plVar4;
      plVar6 = plVar5;
    }
    local_a8 = plVar4;
    local_a0 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_a8,plVar4,plVar4);
    if (param_2 != &local_a8) {
      *param_2 = plVar4;
      local_a8 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_a0);
      plVar6 = local_a0;
    }
    break;
  default:
    goto switchD_140d7de71_default;
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar6 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
switchD_140d7de71_default:
  return param_2;
}



// FUNCTION 140d7ee70 FUN_140d7ee70 body=305 status=ok
// SIG undefined FUN_140d7ee70(void)

undefined8 * FUN_140d7ee70(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar11;
  undefined1 local_res20 [8];
  undefined8 *puVar10;
  
  puVar10 = (undefined8 *)0x0;
  puVar9 = (undefined8 *)0x0;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar1 = *(longlong *)(DAT_146b33f38 + 0x98);
  puVar11 = puVar10;
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x38) != 0)) {
    uVar4 = FUN_140d7f0c0(*(undefined1 *)(param_1 + 0x58));
    plVar5 = (longlong *)FName::FName(local_res20,uVar4,1);
    lVar1 = *(longlong *)(lVar1 + 0x38);
    lVar2 = *plVar5;
    if (*(longlong *)(lVar1 + 0x28) != 0) {
      lVar6 = FUN_141314610();
      lVar7 = *(longlong *)(lVar1 + 0x28);
      puVar11 = puVar9;
      if (lVar7 != 0) {
        while (lVar7 != lVar6) {
          lVar7 = *(longlong *)(lVar7 + 0x30);
          if (lVar7 == 0) {
            return (undefined8 *)0x0;
          }
        }
        if (lVar2 != 0) {
          if (*(int *)(lVar1 + 0x38) != *(int *)(lVar1 + 100)) {
            lVar7 = *(longlong *)(lVar1 + 0x70);
            if (*(longlong *)(lVar1 + 0x70) == 0) {
              lVar7 = lVar1 + 0x68;
            }
            iVar3 = *(int *)(lVar7 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                                     (longlong)*(int *)(lVar1 + 0x78) - 1U) * 4);
            if (iVar3 != -1) {
              do {
                puVar9 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar3 * 0x18);
                if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar3 * 0x18) == lVar2) {
                  if (iVar3 != -1) goto LAB_140d7ef83;
                  break;
                }
                iVar3 = *(int *)(puVar9 + 2);
              } while (iVar3 != -1);
            }
          }
          puVar9 = puVar10;
LAB_140d7ef83:
          puVar8 = puVar9 + 1;
          if (puVar9 == (undefined8 *)0x0) {
            puVar8 = puVar10;
          }
          if (puVar8 != (undefined8 *)0x0) {
            puVar11 = (undefined8 *)*puVar8;
          }
        }
      }
    }
  }
  return puVar11;
}



// FUNCTION 140d7efb0 FUN_140d7efb0 body=261 status=ok
// SIG undefined FUN_140d7efb0(void)

undefined8 FUN_140d7efb0(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 local_res20 [8];
  
  if (*(longlong *)(param_1 + 0x38) == 0) {
    return 0;
  }
  uVar4 = FUN_140d7f0c0(param_2);
  plVar5 = (longlong *)FName::FName(local_res20,uVar4,1);
  lVar1 = *(longlong *)(param_1 + 0x38);
  lVar2 = *plVar5;
  if (*(longlong *)(lVar1 + 0x28) == 0) {
    return 0;
  }
  lVar6 = FUN_141314610();
  lVar7 = *(longlong *)(lVar1 + 0x28);
  while( true ) {
    if (lVar7 == 0) {
      return 0;
    }
    if (lVar7 == lVar6) break;
    lVar7 = *(longlong *)(lVar7 + 0x30);
  }
  if (lVar2 == 0) {
    return 0;
  }
  if (*(int *)(lVar1 + 0x38) != *(int *)(lVar1 + 100)) {
    lVar7 = *(longlong *)(lVar1 + 0x70);
    if (*(longlong *)(lVar1 + 0x70) == 0) {
      lVar7 = lVar1 + 0x68;
    }
    iVar3 = *(int *)(lVar7 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                             (longlong)*(int *)(lVar1 + 0x78) - 1U) * 4);
    if (iVar3 != -1) {
      do {
        puVar9 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar3 * 0x18);
        if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar3 * 0x18) == lVar2) {
          if (iVar3 != -1) goto LAB_140d7f093;
          break;
        }
        iVar3 = *(int *)(puVar9 + 2);
      } while (iVar3 != -1);
    }
  }
  puVar9 = (undefined8 *)0x0;
LAB_140d7f093:
  puVar8 = puVar9 + 1;
  if (puVar9 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  if (puVar8 == (undefined8 *)0x0) {
    return 0;
  }
  return *puVar8;
}



// FUNCTION 140d7f0c0 FUN_140d7f0c0 body=243 status=ok
// SIG undefined FUN_140d7f0c0(void)

wchar_t * FUN_140d7f0c0(undefined1 param_1)

{
  switch(param_1) {
  case 1:
    return L"LevelUp";
  case 2:
    return L"GearSold";
  case 3:
    return L"GearReceived";
  case 4:
    return L"PlotMissionCompletion";
  case 5:
    return L"SideMissionCompletion";
  case 6:
    return L"PropagateRareSpawnMission";
  case 7:
    return L"KilledEnemy";
  case 8:
    return L"KilledNamedEnemy";
  case 9:
    return L"KilledBoss";
  case 10:
    return L"GuardianRankMilestone";
  case 0xb:
    return L"ChallengeUpdate";
  case 0xc:
    return L"ChallengeCompletion";
  case 0xd:
    return L"ProvingGroundCompletion";
  case 0xe:
    return L"CircleOfSlaughterCompletion";
  case 0xf:
    return L"RaidCompletion";
  case 0x10:
    return L"UnlockedTrueVaultHunterMode";
  case 0x11:
    return L"SlotMachineJackpot";
  case 0x12:
    return L"OpenedGoldenChest";
  case 0x13:
    return L"SentMail";
  case 0x14:
    return L"FriendGearPurchased";
  case 0x15:
    return L"LookingForHelp";
  case 0x16:
    return L"AchievementUnlocked";
  case 0x17:
    return L"ChallengeUpdatesMerged";
  case 0x18:
    return L"LikedEvent";
  case 0x19:
    return L"CustomizationAcquired";
  default:
    return L"UnknownFriendEventType";
  }
}



// FUNCTION 140d7f220 FUN_140d7f220 body=5264 status=ok
// SIG undefined FUN_140d7f220(void)

longlong ** FUN_140d7f220(undefined8 param_1,longlong **param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  longlong *local_190;
  longlong *local_188;
  longlong *local_180;
  longlong *local_178;
  longlong *local_170;
  longlong *local_168;
  longlong *local_160;
  longlong *local_158;
  longlong *local_150;
  longlong *local_148;
  longlong *local_140;
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  longlong *local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  plVar6 = (longlong *)0x0;
  *param_2 = (longlong *)0x0;
  param_2[1] = (longlong *)0x0;
  switch(param_3) {
  case 1:
    plVar3 = (longlong *)operator_new(0x68);
    plVar5 = plVar6;
    if (plVar3 != (longlong *)0x0) {
      plVar3[2] = 0;
      plVar3[3] = 0;
      plVar3[1] = (longlong)&PTR_FUN_143f740c8;
      plVar3[4] = 0;
      plVar3[5] = 0;
      plVar3[7] = 0;
      plVar3[8] = 0;
      plVar3[6] = (longlong)&PTR_FUN_143f740c8;
      plVar3[9] = 0;
      plVar3[10] = 0;
      *plVar3 = (longlong)&PTR_FUN_144530d68;
      *(undefined4 *)(plVar3 + 0xc) = 0;
      *(undefined4 *)(plVar3 + 0xb) = 1;
      plVar5 = plVar3;
    }
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *(undefined4 *)(plVar3 + 1) = 1;
      *(undefined4 *)((longlong)plVar3 + 0xc) = 1;
      *plVar3 = (longlong)&PTR_FUN_143f3f2e0;
      plVar3[2] = (longlong)plVar5;
      plVar6 = plVar3;
    }
    local_1f8 = plVar5;
    local_1f0 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_1f8,plVar5,plVar5);
    if (param_2 != &local_1f8) {
      *param_2 = plVar5;
      local_1f8 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_1f0);
      plVar6 = local_1f0;
    }
    break;
  case 2:
    lVar4 = operator_new(0xb8);
    plVar5 = plVar6;
    if (lVar4 != 0) {
      plVar5 = (longlong *)FUN_140d64060(lVar4);
    }
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *(undefined4 *)(plVar3 + 1) = 1;
      *(undefined4 *)((longlong)plVar3 + 0xc) = 1;
      *plVar3 = (longlong)&PTR_FUN_143f3f2e0;
      plVar3[2] = (longlong)plVar5;
      plVar6 = plVar3;
    }
    local_1e8 = plVar5;
    local_1e0 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_1e8,plVar5,plVar5);
    if (param_2 != &local_1e8) {
      *param_2 = plVar5;
      local_1e8 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_1e0);
      plVar6 = local_1e0;
    }
    break;
  case 3:
    lVar4 = operator_new(0x178);
    plVar5 = plVar6;
    if (lVar4 != 0) {
      plVar5 = (longlong *)FUN_140d63ff0(lVar4);
    }
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *(undefined4 *)(plVar3 + 1) = 1;
      *(undefined4 *)((longlong)plVar3 + 0xc) = 1;
      *plVar3 = (longlong)&PTR_FUN_143f3f2e0;
      plVar3[2] = (longlong)plVar5;
      plVar6 = plVar3;
    }
    local_1d8 = plVar5;
    local_1d0 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_1d8,plVar5,plVar5);
    if (param_2 != &local_1d8) {
      *param_2 = plVar5;
      local_1d8 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_1d0);
      plVar6 = local_1d0;
    }
    break;
  case 4:
    lVar4 = operator_new(0xa8);
    plVar5 = plVar6;
    if (lVar4 != 0) {
      plVar5 = (longlong *)FUN_140d64120(lVar4);
    }
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *(undefined4 *)(plVar3 + 1) = 1;
      *(undefined4 *)((longlong)plVar3 + 0xc) = 1;
      *plVar3 = (longlong)&PTR_FUN_143f3f2e0;
      plVar3[2] = (longlong)plVar5;
      plVar6 = plVar3;
    }
    local_1c8 = plVar5;
    local_1c0 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_1c8,plVar5,plVar5);
    if (param_2 != &local_1c8) {
      *param_2 = plVar5;
      local_1c8 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_1c0);
      plVar6 = local_1c0;
    }
    break;
  case 5:
    lVar4 = operator_new(0xa0);
    plVar5 = plVar6;
    if (lVar4 != 0) {
      plVar5 = (longlong *)FUN_140d63f60(lVar4);
    }
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *(undefined4 *)(plVar3 + 1) = 1;
      *(undefined4 *)((longlong)plVar3 + 0xc) = 1;
      *plVar3 = (longlong)&PTR_FUN_143f3f2e0;
      plVar3[2] = (longlong)plVar5;
      plVar6 = plVar3;
    }
    local_1b8 = plVar5;
    local_1b0 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_1b8,plVar5,plVar5);
    if (param_2 != &local_1b8) {
      *param_2 = plVar5;
      local_1b8 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_1b0);
      plVar6 = local_1b0;
    }
    break;
  case 6:
    lVar4 = operator_new(0x70);
    plVar5 = plVar6;
    if (lVar4 != 0) {
      plVar5 = (longlong *)FUN_140d63ef0(lVar4);
    }
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *(undefined4 *)(plVar3 + 1) = 1;
      *(undefined4 *)((longlong)plVar3 + 0xc) = 1;
      *plVar3 = (longlong)&PTR_FUN_143f3f2e0;
      plVar3[2] = (longlong)plVar5;
      plVar6 = plVar3;
    }
    local_1a8 = plVar5;
    local_1a0 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_1a8,plVar5,plVar5);
    if (param_2 != &local_1a8) {
      *param_2 = plVar5;
      local_1a8 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_1a0);
      plVar6 = local_1a0;
    }
    break;
  case 7:
    plVar3 = (longlong *)operator_new(0x68);
    plVar5 = plVar6;
    if (plVar3 != (longlong *)0x0) {
      _guard_xfg_dispatch_icall_nop(plVar3,0,0x60);
      plVar3[2] = 0;
      plVar3[3] = 0;
      plVar3[1] = (longlong)&PTR_FUN_143f740c8;
      plVar3[4] = 0;
      plVar3[5] = 0;
      plVar3[7] = 0;
      plVar3[8] = 0;
      plVar3[6] = (longlong)&PTR_FUN_143f740c8;
      plVar3[9] = 0;
      plVar3[10] = 0;
      *plVar3 = (longlong)&PTR_FUN_1445311d0;
      *(undefined4 *)(plVar3 + 0xb) = 7;
      plVar5 = plVar3;
    }
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *(undefined4 *)(plVar3 + 1) = 1;
      *(undefined4 *)((longlong)plVar3 + 0xc) = 1;
      *plVar3 = (longlong)&PTR_FUN_143f3f2e0;
      plVar3[2] = (longlong)plVar5;
      plVar6 = plVar3;
    }
    local_198 = plVar5;
    local_190 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_198,plVar5,plVar5);
    if (param_2 != &local_198) {
      *param_2 = plVar5;
      local_198 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_190);
      plVar6 = local_190;
    }
    break;
  case 8:
    lVar4 = operator_new(0x70);
    plVar5 = plVar6;
    if (lVar4 != 0) {
      plVar5 = (longlong *)FUN_140d64210(lVar4);
    }
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *(undefined4 *)(plVar3 + 1) = 1;
      *(undefined4 *)((longlong)plVar3 + 0xc) = 1;
      *plVar3 = (longlong)&PTR_FUN_143f3f2e0;
      plVar3[2] = (longlong)plVar5;
      plVar6 = plVar3;
    }
    local_188 = plVar5;
    local_180 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_188,plVar5,plVar5);
    if (param_2 != &local_188) {
      *param_2 = plVar5;
      local_188 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_180);
      plVar6 = local_180;
    }
    break;
  case 9:
    lVar4 = operator_new(0x70);
    plVar5 = plVar6;
    if (lVar4 != 0) {
      plVar5 = (longlong *)FUN_140d64280(lVar4);
    }
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *(undefined4 *)(plVar3 + 1) = 1;
      *(undefined4 *)((longlong)plVar3 + 0xc) = 1;
      *plVar3 = (longlong)&PTR_FUN_143f3f2e0;
      plVar3[2] = (longlong)plVar5;
      plVar6 = plVar3;
    }
    local_178 = plVar5;
    local_170 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_178,plVar5,plVar5);
    if (param_2 != &local_178) {
      *param_2 = plVar5;
      local_178 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_170);
      plVar6 = local_170;
    }
    break;
  case 10:
    plVar3 = (longlong *)operator_new(0x68);
    plVar5 = plVar6;
    if (plVar3 != (longlong *)0x0) {
      _guard_xfg_dispatch_icall_nop(plVar3,0,0x60);
      plVar3[2] = 0;
      plVar3[3] = 0;
      plVar3[1] = (longlong)&PTR_FUN_143f740c8;
      plVar3[4] = 0;
      plVar3[5] = 0;
      plVar3[7] = 0;
      plVar3[8] = 0;
      plVar3[6] = (longlong)&PTR_FUN_143f740c8;
      plVar3[9] = 0;
      plVar3[10] = 0;
      *plVar3 = (longlong)&PTR_FUN_144531300;
      *(undefined4 *)(plVar3 + 0xb) = 10;
      plVar5 = plVar3;
    }
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *(undefined4 *)(plVar3 + 1) = 1;
      *(undefined4 *)((longlong)plVar3 + 0xc) = 1;
      *plVar3 = (longlong)&PTR_FUN_143f3f2e0;
      plVar3[2] = (longlong)plVar5;
      plVar6 = plVar3;
    }
    local_168 = plVar5;
    local_160 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_168,plVar5,plVar5);
    if (param_2 != &local_168) {
      *param_2 = plVar5;
      local_168 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_160);
      plVar6 = local_160;
    }
    break;
  case 0xb:
    plVar3 = (longlong *)operator_new(0x68);
    plVar5 = plVar6;
    if (plVar3 != (longlong *)0x0) {
      _guard_xfg_dispatch_icall_nop(plVar3,0,0x60);
      plVar3[2] = 0;
      plVar3[3] = 0;
      plVar3[1] = (longlong)&PTR_FUN_143f740c8;
      plVar3[4] = 0;
      plVar3[5] = 0;
      plVar3[7] = 0;
      plVar3[8] = 0;
      plVar3[6] = (longlong)&PTR_FUN_143f740c8;
      plVar3[9] = 0;
      plVar3[10] = 0;
      *plVar3 = (longlong)&PTR_FUN_144531368;
      *(undefined4 *)(plVar3 + 0xc) = 0;
      *(undefined4 *)(plVar3 + 0xb) = 0xb;
      plVar5 = plVar3;
    }
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *(undefined4 *)(plVar3 + 1) = 1;
      *(undefined4 *)((longlong)plVar3 + 0xc) = 1;
      *plVar3 = (longlong)&PTR_FUN_143f3f2e0;
      plVar3[2] = (longlong)plVar5;
      plVar6 = plVar3;
    }
    local_158 = plVar5;
    local_150 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_158,plVar5,plVar5);
    if (param_2 != &local_158) {
      *param_2 = plVar5;
      local_158 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_150);
      plVar6 = local_150;
    }
    break;
  case 0xc:
    plVar3 = (longlong *)operator_new(0x68);
    plVar5 = plVar6;
    if (plVar3 != (longlong *)0x0) {
      _guard_xfg_dispatch_icall_nop(plVar3,0,0x60);
      plVar3[2] = 0;
      plVar3[3] = 0;
      plVar3[1] = (longlong)&PTR_FUN_143f740c8;
      plVar3[4] = 0;
      plVar3[5] = 0;
      plVar3[7] = 0;
      plVar3[8] = 0;
      plVar3[6] = (longlong)&PTR_FUN_143f740c8;
      plVar3[9] = 0;
      plVar3[10] = 0;
      *plVar3 = (longlong)&PTR_FUN_1445312b0;
      *(undefined4 *)(plVar3 + 0xc) = 0;
      *(undefined4 *)(plVar3 + 0xb) = 0xc;
      plVar5 = plVar3;
    }
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *(undefined4 *)(plVar3 + 1) = 1;
      *(undefined4 *)((longlong)plVar3 + 0xc) = 1;
      *plVar3 = (longlong)&PTR_FUN_143f3f2e0;
      plVar3[2] = (longlong)plVar5;
      plVar6 = plVar3;
    }
    local_148 = plVar5;
    local_140 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_148,plVar5,plVar5);
    if (param_2 != &local_148) {
      *param_2 = plVar5;
      local_148 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_140);
      plVar6 = local_140;
    }
    break;
  case 0xd:
    plVar3 = (longlong *)operator_new(0x70);
    plVar5 = plVar6;
    if (plVar3 != (longlong *)0x0) {
      _guard_xfg_dispatch_icall_nop(plVar3,0,0x60);
      plVar3[2] = 0;
      plVar3[3] = 0;
      plVar3[1] = (longlong)&PTR_FUN_143f740c8;
      plVar3[4] = 0;
      plVar3[5] = 0;
      plVar3[7] = 0;
      plVar3[8] = 0;
      plVar3[6] = (longlong)&PTR_FUN_143f740c8;
      plVar3[9] = 0;
      plVar3[10] = 0;
      *plVar3 = (longlong)&PTR_FUN_144530d88;
      *(undefined4 *)(plVar3 + 0xb) = 0xd;
      plVar5 = plVar3;
    }
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *(undefined4 *)(plVar3 + 1) = 1;
      *(undefined4 *)((longlong)plVar3 + 0xc) = 1;
      *plVar3 = (longlong)&PTR_FUN_143f3f2e0;
      plVar3[2] = (longlong)plVar5;
      plVar6 = plVar3;
    }
    local_138 = plVar5;
    local_130 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_138,plVar5,plVar5);
    if (param_2 != &local_138) {
      *param_2 = plVar5;
      local_138 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_130);
      plVar6 = local_130;
    }
    break;
  case 0xe:
    plVar3 = (longlong *)operator_new(0x68);
    plVar5 = plVar6;
    if (plVar3 != (longlong *)0x0) {
      _guard_xfg_dispatch_icall_nop(plVar3,0,0x60);
      plVar3[2] = 0;
      plVar3[3] = 0;
      plVar3[1] = (longlong)&PTR_FUN_143f740c8;
      plVar3[4] = 0;
      plVar3[5] = 0;
      plVar3[7] = 0;
      plVar3[8] = 0;
      plVar3[6] = (longlong)&PTR_FUN_143f740c8;
      plVar3[9] = 0;
      plVar3[10] = 0;
      *plVar3 = (longlong)&PTR_FUN_144530de0;
      *(undefined4 *)(plVar3 + 0xb) = 0xe;
      plVar5 = plVar3;
    }
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *(undefined4 *)(plVar3 + 1) = 1;
      *(undefined4 *)((longlong)plVar3 + 0xc) = 1;
      *plVar3 = (longlong)&PTR_FUN_143f3f2e0;
      plVar3[2] = (longlong)plVar5;
      plVar6 = plVar3;
    }
    local_128 = plVar5;
    local_120 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_128,plVar5,plVar5);
    if (param_2 != &local_128) {
      *param_2 = plVar5;
      local_128 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_120);
      plVar6 = local_120;
    }
    break;
  case 0xf:
    plVar3 = (longlong *)operator_new(0x68);
    plVar5 = plVar6;
    if (plVar3 != (longlong *)0x0) {
      _guard_xfg_dispatch_icall_nop(plVar3,0,0x60);
      plVar3[2] = 0;
      plVar3[3] = 0;
      plVar3[1] = (longlong)&PTR_FUN_143f740c8;
      plVar3[4] = 0;
      plVar3[5] = 0;
      plVar3[7] = 0;
      plVar3[8] = 0;
      plVar3[6] = (longlong)&PTR_FUN_143f740c8;
      plVar3[9] = 0;
      plVar3[10] = 0;
      *plVar3 = (longlong)&PTR_FUN_144531210;
      *(undefined4 *)(plVar3 + 0xb) = 0xf;
      plVar5 = plVar3;
    }
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *(undefined4 *)(plVar3 + 1) = 1;
      *(undefined4 *)((longlong)plVar3 + 0xc) = 1;
      *plVar3 = (longlong)&PTR_FUN_143f3f2e0;
      plVar3[2] = (longlong)plVar5;
      plVar6 = plVar3;
    }
    local_118 = plVar5;
    local_110 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_118,plVar5,plVar5);
    if (param_2 != &local_118) {
      *param_2 = plVar5;
      local_118 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_110);
      plVar6 = local_110;
    }
    break;
  case 0x10:
    plVar3 = (longlong *)operator_new(0x68);
    plVar5 = plVar6;
    if (plVar3 != (longlong *)0x0) {
      _guard_xfg_dispatch_icall_nop(plVar3,0,0x60);
      plVar3[2] = 0;
      plVar3[3] = 0;
      plVar3[1] = (longlong)&PTR_FUN_143f740c8;
      plVar3[4] = 0;
      plVar3[5] = 0;
      plVar3[7] = 0;
      plVar3[8] = 0;
      plVar3[6] = (longlong)&PTR_FUN_143f740c8;
      plVar3[9] = 0;
      plVar3[10] = 0;
      *plVar3 = (longlong)&PTR_FUN_144530e70;
      *(undefined4 *)(plVar3 + 0xc) = 0;
      *(undefined4 *)(plVar3 + 0xb) = 0x10;
      plVar5 = plVar3;
    }
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *(undefined4 *)(plVar3 + 1) = 1;
      *(undefined4 *)((longlong)plVar3 + 0xc) = 1;
      *plVar3 = (longlong)&PTR_FUN_143f3f2e0;
      plVar3[2] = (longlong)plVar5;
      plVar6 = plVar3;
    }
    local_108 = plVar5;
    local_100 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_108,plVar5,plVar5);
    if (param_2 != &local_108) {
      *param_2 = plVar5;
      local_108 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_100);
      plVar6 = local_100;
    }
    break;
  case 0x11:
    plVar3 = (longlong *)operator_new(0x70);
    plVar5 = plVar6;
    if (plVar3 != (longlong *)0x0) {
      _guard_xfg_dispatch_icall_nop(plVar3,0,0x60);
      plVar3[2] = 0;
      plVar3[3] = 0;
      plVar3[1] = (longlong)&PTR_FUN_143f740c8;
      plVar3[4] = 0;
      plVar3[5] = 0;
      plVar3[7] = 0;
      plVar3[8] = 0;
      plVar3[6] = (longlong)&PTR_FUN_143f740c8;
      plVar3[9] = 0;
      plVar3[10] = 0;
      *plVar3 = (longlong)&PTR_FUN_144531148;
      plVar3[0xc] = 0;
      plVar3[0xd] = 0;
      *(undefined4 *)(plVar3 + 0xb) = 0x11;
      plVar5 = plVar3;
    }
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *(undefined4 *)(plVar3 + 1) = 1;
      *(undefined4 *)((longlong)plVar3 + 0xc) = 1;
      *plVar3 = (longlong)&PTR_FUN_143f3f2e0;
      plVar3[2] = (longlong)plVar5;
      plVar6 = plVar3;
    }
    local_d8 = plVar5;
    local_d0 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_d8,plVar5,plVar5);
    if (param_2 != &local_d8) {
      *param_2 = plVar5;
      local_d8 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_d0);
      plVar6 = local_d0;
    }
    break;
  case 0x12:
    lVar4 = operator_new(0x70);
    plVar5 = plVar6;
    if (lVar4 != 0) {
      plVar5 = (longlong *)FUN_140d641a0(lVar4,0x12);
    }
    plVar6 = (longlong *)FUN_1404f6ae0(plVar5);
    local_c8 = plVar5;
    local_c0 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_c8,plVar5,plVar5);
    if (param_2 != &local_c8) {
      *param_2 = plVar5;
      local_c8 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_c0);
      plVar6 = local_c0;
    }
    break;
  case 0x13:
    lVar4 = operator_new(0x70);
    plVar5 = plVar6;
    if (lVar4 != 0) {
      plVar5 = (longlong *)FUN_140d641a0(lVar4,0x13);
    }
    plVar6 = (longlong *)FUN_1404f6ae0(plVar5);
    local_b8 = plVar5;
    local_b0 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_b8,plVar5,plVar5);
    if (param_2 != &local_b8) {
      *param_2 = plVar5;
      local_b8 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_b0);
      plVar6 = local_b0;
    }
    break;
  case 0x14:
    lVar4 = operator_new(0x70);
    plVar5 = plVar6;
    if (lVar4 != 0) {
      plVar5 = (longlong *)FUN_140d641a0(lVar4,0x14);
    }
    plVar6 = (longlong *)FUN_1404f6ae0(plVar5);
    local_a8 = plVar5;
    local_a0 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_a8,plVar5,plVar5);
    if (param_2 != &local_a8) {
      *param_2 = plVar5;
      local_a8 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_a0);
      plVar6 = local_a0;
    }
    break;
  case 0x15:
    lVar4 = operator_new(0x70);
    plVar5 = plVar6;
    if (lVar4 != 0) {
      plVar5 = (longlong *)FUN_140d641a0(lVar4,0x15);
    }
    plVar6 = (longlong *)FUN_1404f6ae0(plVar5);
    local_98 = plVar5;
    local_90 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_98,plVar5,plVar5);
    if (param_2 != &local_98) {
      *param_2 = plVar5;
      local_98 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_90);
      plVar6 = local_90;
    }
    break;
  case 0x16:
    lVar4 = operator_new(0x70);
    plVar5 = plVar6;
    if (lVar4 != 0) {
      plVar5 = (longlong *)FUN_140d641a0(lVar4,0x16);
    }
    plVar6 = (longlong *)FUN_1404f6ae0(plVar5);
    local_88 = plVar5;
    local_80 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_88,plVar5,plVar5);
    if (param_2 != &local_88) {
      *param_2 = plVar5;
      local_88 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_80);
      plVar6 = local_80;
    }
    break;
  case 0x17:
    lVar4 = operator_new(0x70);
    plVar5 = plVar6;
    if (lVar4 != 0) {
      plVar5 = (longlong *)FUN_140d641a0(lVar4,0x17);
    }
    plVar6 = (longlong *)FUN_1404f6ae0(plVar5);
    local_78 = plVar5;
    local_70 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_78,plVar5,plVar5);
    if (param_2 != &local_78) {
      *param_2 = plVar5;
      local_78 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_70);
      plVar6 = local_70;
    }
    break;
  case 0x18:
    lVar4 = operator_new(0x70);
    plVar5 = plVar6;
    if (lVar4 != 0) {
      plVar5 = (longlong *)FUN_140d641a0(lVar4,0x18);
    }
    plVar6 = (longlong *)FUN_1404f6ae0(plVar5);
    local_68 = plVar5;
    local_60 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_68,plVar5,plVar5);
    if (param_2 != &local_68) {
      *param_2 = plVar5;
      local_68 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_60);
      plVar6 = local_60;
    }
    break;
  case 0x19:
    lVar4 = operator_new(0x68);
    plVar5 = plVar6;
    if (lVar4 != 0) {
      plVar5 = (longlong *)FUN_140d63e80(lVar4,0x19);
    }
    plVar6 = (longlong *)FUN_1404f6ae0(plVar5);
    local_58 = plVar5;
    local_50 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_58,plVar5,plVar5);
    if (param_2 != &local_58) {
      *param_2 = plVar5;
      local_58 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_50);
      plVar6 = local_50;
    }
    break;
  case 0x1a:
    lVar4 = operator_new(0x68);
    plVar5 = plVar6;
    if (lVar4 != 0) {
      plVar5 = (longlong *)FUN_140d63e80(lVar4,0x1a);
    }
    plVar6 = (longlong *)FUN_1404f6ae0(plVar5);
    local_48 = plVar5;
    local_40 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_48,plVar5,plVar5);
    if (param_2 != &local_48) {
      *param_2 = plVar5;
      local_48 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_40);
      plVar6 = local_40;
    }
    break;
  case 0x1b:
    lVar4 = operator_new(0x68);
    plVar5 = plVar6;
    if (lVar4 != 0) {
      plVar5 = (longlong *)FUN_140d63e80(lVar4,0x1b);
    }
    plVar6 = (longlong *)FUN_1404f6ae0(plVar5);
    local_38 = plVar5;
    local_30 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_38,plVar5,plVar5);
    if (param_2 != &local_38) {
      *param_2 = plVar5;
      local_38 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_30);
      plVar6 = local_30;
    }
    break;
  case 0x1c:
    lVar4 = operator_new(0x68);
    plVar5 = plVar6;
    if (lVar4 != 0) {
      plVar5 = (longlong *)FUN_140d63e80(lVar4,0x1c);
    }
    plVar6 = (longlong *)FUN_1404f6ae0(plVar5);
    local_28 = plVar5;
    local_20 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_28,plVar5,plVar5);
    if (param_2 != &local_28) {
      *param_2 = plVar5;
      local_28 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_20);
      plVar6 = local_20;
    }
    break;
  case 0x1d:
    plVar3 = (longlong *)operator_new(0x68);
    plVar5 = plVar6;
    if (plVar3 != (longlong *)0x0) {
      _guard_xfg_dispatch_icall_nop(plVar3,0,0x60);
      plVar3[2] = 0;
      plVar3[3] = 0;
      plVar3[1] = (longlong)&PTR_FUN_143f740c8;
      plVar3[4] = 0;
      plVar3[5] = 0;
      plVar3[7] = 0;
      plVar3[8] = 0;
      plVar3[6] = (longlong)&PTR_FUN_143f740c8;
      plVar3[9] = 0;
      plVar3[10] = 0;
      *plVar3 = (longlong)&PTR_FUN_144531180;
      *(undefined4 *)(plVar3 + 0xc) = 0;
      *(undefined4 *)(plVar3 + 0xb) = 0x1d;
      plVar5 = plVar3;
    }
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *(undefined4 *)(plVar3 + 1) = 1;
      *(undefined4 *)((longlong)plVar3 + 0xc) = 1;
      *plVar3 = (longlong)&PTR_FUN_143f3f2e0;
      plVar3[2] = (longlong)plVar5;
      plVar6 = plVar3;
    }
    local_f8 = plVar5;
    local_f0 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_f8,plVar5,plVar5);
    if (param_2 != &local_f8) {
      *param_2 = plVar5;
      local_f8 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_f0);
      plVar6 = local_f0;
    }
    break;
  case 0x1e:
    plVar3 = (longlong *)operator_new(0x68);
    plVar5 = plVar6;
    if (plVar3 != (longlong *)0x0) {
      _guard_xfg_dispatch_icall_nop(plVar3,0,0x60);
      plVar3[2] = 0;
      plVar3[3] = 0;
      plVar3[1] = (longlong)&PTR_FUN_143f740c8;
      plVar3[4] = 0;
      plVar3[5] = 0;
      plVar3[7] = 0;
      plVar3[8] = 0;
      plVar3[6] = (longlong)&PTR_FUN_143f740c8;
      plVar3[9] = 0;
      plVar3[10] = 0;
      *plVar3 = (longlong)&PTR_FUN_144531418;
      *(undefined4 *)(plVar3 + 0xc) = 0;
      *(undefined4 *)(plVar3 + 0xb) = 0x1e;
      plVar5 = plVar3;
    }
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *(undefined4 *)(plVar3 + 1) = 1;
      *(undefined4 *)((longlong)plVar3 + 0xc) = 1;
      *plVar3 = (longlong)&PTR_FUN_143f3f2e0;
      plVar3[2] = (longlong)plVar5;
      plVar6 = plVar3;
    }
    local_e8 = plVar5;
    local_e0 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_e8,plVar5,plVar5);
    if (param_2 != &local_e8) {
      *param_2 = plVar5;
      local_e8 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_e0);
      plVar6 = local_e0;
    }
    break;
  default:
    goto switchD_140d7f26f_default;
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar6 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
switchD_140d7f26f_default:
  return param_2;
}



// FUNCTION 140d80730 FUN_140d80730 body=1180 status=ok
// SIG undefined FUN_140d80730(void)

longlong * FUN_140d80730(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  int local_res8 [2];
  longlong *local_res10;
  longlong local_b8;
  longlong *plStack_b0;
  longlong local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  longlong *plStack_90;
  undefined8 local_88;
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined **local_68;
  longlong *local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  plVar12 = (longlong *)0x0;
  local_res8[0] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if ((*(longlong *)(param_1 + 0x10) != 0) && (*(longlong **)(param_3 + 8) != (longlong *)0x0)) {
    cVar7 = (**(code **)(**(longlong **)(param_3 + 8) + 0x20))();
    if (cVar7 != '\0') {
      plVar3 = (longlong *)(param_1 + 0x140);
      local_res10 = plVar3;
      FUN_140d2cd70(plVar3,local_res8,param_3);
      if ((local_res8[0] == -1) || (lVar11 = (longlong)local_res8[0] * 0x40 + *plVar3, lVar11 == 0))
      {
        local_b8 = 0;
        plStack_b0 = (longlong *)0x0;
      }
      else {
        local_b8 = *(longlong *)(lVar11 + 0x28);
        plStack_b0 = *(longlong **)(lVar11 + 0x30);
        if (plStack_b0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
          UNLOCK();
        }
      }
      if (param_2 != &local_b8) {
        *param_2 = local_b8;
        local_b8 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&plStack_b0);
      }
      plVar3 = plStack_b0;
      if (plStack_b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_b0 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plStack_b0)(plStack_b0);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plStack_b0 + 8))(plStack_b0,1);
          }
        }
      }
      if (*param_2 == 0) {
        lVar11 = *(longlong *)(param_1 + 0x10);
        if (lVar11 == 0) {
          puVar9 = &local_98;
          local_98 = 0;
          plStack_90 = (longlong *)0x0;
          bVar6 = false;
          bVar5 = false;
          bVar4 = true;
        }
        else {
          local_88 = *(undefined8 *)(param_3 + 8);
          local_80 = *(longlong **)(param_3 + 0x10);
          if (local_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_80 + 1) = (int)local_80[1] + 1;
            UNLOCK();
            lVar11 = *(longlong *)(param_1 + 0x10);
          }
          puVar9 = (undefined8 *)FUN_140bbb2b0(lVar11,local_78,&local_88);
          bVar6 = true;
          bVar5 = true;
          bVar4 = false;
          plVar12 = (longlong *)*puVar9;
        }
        plVar3 = (longlong *)puVar9[1];
        puVar9[1] = 0;
        *puVar9 = 0;
        plVar1 = plStack_90;
        if (bVar4) {
          if (plStack_90 != (longlong *)0x0) {
            LOCK();
            plVar10 = plStack_90 + 1;
            lVar11 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plStack_90)(plStack_90);
              LOCK();
              piVar2 = (int *)((longlong)plVar1 + 0xc);
              iVar8 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plStack_90 + 8))(plStack_90,1);
              }
            }
          }
        }
        if (bVar5) {
          if (local_70 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_70 + 1;
            lVar11 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*local_70)(local_70);
              LOCK();
              piVar2 = (int *)((longlong)local_70 + 0xc);
              iVar8 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*local_70 + 8))(local_70,1);
              }
            }
          }
        }
        plVar1 = local_80;
        if ((bVar6) && (local_80 != (longlong *)0x0)) {
          LOCK();
          plVar10 = local_80 + 1;
          lVar11 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            iVar8 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar1 + 8))(plVar1,1);
            }
          }
        }
        if (plVar12 != (longlong *)0x0) {
          cVar7 = (**(code **)**(undefined8 **)(param_3 + 8))(*(undefined8 **)(param_3 + 8),plVar12)
          ;
          plVar1 = local_res10;
          if (cVar7 == '\0') {
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
            }
            local_68 = &PTR_FUN_143f740c8;
            local_50 = 0;
            local_48 = 0;
            local_60 = plVar12;
            local_58 = plVar3;
            if ((int)local_res10[1] != *(int *)((longlong)local_res10 + 0x34)) {
              cVar7 = (**(code **)(*plVar12 + 0x20))(plVar12);
              if (cVar7 == '\0') {
                iVar8 = -1;
              }
              else {
                iVar8 = GetTypeHash(plVar12);
              }
              plVar10 = (longlong *)plVar1[8];
              if ((longlong *)plVar1[8] == (longlong *)0x0) {
                plVar10 = plVar1 + 7;
              }
              iVar8 = *(int *)((longlong)plVar10 +
                              ((longlong)(int)plVar1[9] - 1U & (longlong)iVar8) * 4);
              if (iVar8 != -1) {
                lVar11 = *plVar1;
                do {
                  lVar13 = (longlong)iVar8 * 0x40;
                  lVar11 = lVar11 + lVar13;
                  if (*(longlong **)(lVar11 + 8) == (longlong *)0x0) {
LAB_140d80a53:
                    bVar4 = false;
                  }
                  else {
                    cVar7 = (**(code **)(**(longlong **)(lVar11 + 8) + 0x20))();
                    if (cVar7 == '\0') goto LAB_140d80a53;
                    cVar7 = (**(code **)(*plVar12 + 0x20))(plVar12);
                    if (cVar7 == '\0') goto LAB_140d80a53;
                    bVar4 = true;
                  }
                  if (*(longlong **)(lVar11 + 8) == (longlong *)0x0) {
LAB_140d80a6d:
                    cVar7 = (**(code **)(*plVar12 + 0x20))();
                    if (cVar7 != '\0') goto LAB_140d80a7e;
LAB_140d80b7d:
                    if ((iVar8 != -1) && (lVar13 = *local_res10 + lVar13, lVar13 != 0)) {
                      local_a8 = *(longlong *)(lVar13 + 0x28);
                      plStack_a0 = *(longlong **)(lVar13 + 0x30);
                      if (plStack_a0 != (longlong *)0x0) {
                        LOCK();
                        *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
                        UNLOCK();
                      }
                      goto LAB_140d80ab8;
                    }
                    break;
                  }
                  cVar7 = (**(code **)(**(longlong **)(lVar11 + 8) + 0x20))();
                  if (cVar7 == '\0') goto LAB_140d80a6d;
LAB_140d80a7e:
                  if (bVar4) {
                    cVar7 = (**(code **)*plVar12)(plVar12,*(undefined8 *)(lVar11 + 8));
                    if (cVar7 != '\0') goto LAB_140d80b7d;
                  }
                  lVar11 = *local_res10;
                  iVar8 = *(int *)(lVar13 + 0x38 + lVar11);
                } while (iVar8 != -1);
              }
            }
            local_a8 = 0;
            plStack_a0 = (longlong *)0x0;
LAB_140d80ab8:
            if (param_2 != &local_a8) {
              *param_2 = local_a8;
              local_a8 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&plStack_a0);
            }
            plVar12 = plStack_a0;
            if (plStack_a0 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_a0 + 1;
              lVar11 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*plStack_a0)(plStack_a0);
                LOCK();
                piVar2 = (int *)((longlong)plVar12 + 0xc);
                iVar8 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  (**(code **)(*plStack_a0 + 8))(plStack_a0,1);
                }
              }
            }
            FUN_1404bf980(&local_68);
          }
        }
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar12 = plVar3 + 1;
          lVar11 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar8 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
      }
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 140d80bd0 FUN_140d80bd0 body=185 status=ok
// SIG undefined FUN_140d80bd0(void)

undefined8 FUN_140d80bd0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined **local_38;
  undefined8 local_30;
  longlong *local_28;
  longlong local_20;
  undefined8 local_18;
  
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
  FUN_140d80730(param_1,param_2,&local_38);
  if (local_20 != 0) {
    FMemory::Free();
  }
  plVar5 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_28 + 8))(local_28,1);
      }
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 140d80c90 FUN_140d80c90 body=731 status=ok
// SIG undefined FUN_140d80c90(void)

void FUN_140d80c90(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  int local_a8;
  uint uStack_a4;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  uint uStack_74;
  int iStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
  uStack_a4 = 1;
  uVar3 = *(uint *)(param_1 + 0x168);
  puVar1 = (uint *)(param_1 + 0x150);
  local_a8 = 0;
  uStack_94 = 0;
  iStack_90 = 0;
  if (uVar3 != 0) {
    puVar11 = *(uint **)(param_1 + 0x160);
    if (*(uint **)(param_1 + 0x160) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar10 = *puVar11;
    iStack_90 = 0;
    local_a8 = 0;
    while (uVar10 == 0) {
      lVar9 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar7 = local_a8 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar7;
      if (bVar5) goto LAB_140d80d5f;
      uVar10 = puVar11[lVar9 + 1];
    }
    uStack_a4 = -uVar10 & uVar10;
    iVar7 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_94 = (iStack_90 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_94) {
LAB_140d80d5f:
      uStack_94 = uVar3;
    }
  }
  uStack_74 = *(uint *)(param_1 + 0x168);
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_94;
  local_40 = CONCAT44(uStack_8c,iStack_90);
  uVar10 = uStack_74 & 0xffffffe0;
  iStack_58 = local_a8;
  uStack_54 = uStack_a4;
  local_50 = puVar1;
  if (uStack_74 != uVar3) {
    puVar11 = *(uint **)(param_1 + 0x160);
    if (*(uint **)(param_1 + 0x160) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar8 = puVar11[(int)uStack_74 >> 5] & -1 << ((byte)uStack_74 & 0x1f);
    iVar7 = (int)uStack_74 >> 5;
    while (uVar8 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_140d80e3d;
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
LAB_140d80e3d:
      uStack_74 = uVar3;
    }
  }
  do {
    if ((uStack_44 == uStack_74) && (local_50 == puVar1)) {
      return;
    }
    plVar4 = *(longlong **)((longlong)(int)uStack_44 * 0x40 + 0x30 + *(longlong *)(param_1 + 0x140))
    ;
    lVar9 = *(longlong *)((longlong)(int)uStack_44 * 0x40 + 0x28 + *(longlong *)(param_1 + 0x140));
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (lVar9 == 0) {
LAB_140d80efd:
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar4 + 1;
        lVar9 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
    }
    else {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      iVar7 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar7 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar7);
      }
      plVar6 = (longlong *)((longlong)iVar7 * 0x10 + *param_2);
      *plVar6 = lVar9;
      plVar6[1] = (longlong)plVar4;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        plVar6 = plVar4 + 1;
        lVar9 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
        goto LAB_140d80efd;
      }
    }
    uStack_48 = uStack_48 & ~uStack_54;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_58);
  } while( true );
}



// FUNCTION 140d80f70 FUN_140d80f70 body=8 status=ok
// SIG undefined FUN_140d80f70(void)

void FUN_140d80f70(undefined8 param_1,undefined8 param_2)

{
  FUN_140d82050(param_1,param_2,0);
  return;
}



// FUNCTION 140d80f80 FUN_140d80f80 body=2121 status=ok
// SIG undefined FUN_140d80f80(void)

void FUN_140d80f80(longlong param_1,undefined8 param_2,longlong *param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  undefined1 auVar3 [12];
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined2 *puVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined2 *puVar16;
  int iVar17;
  longlong *plVar18;
  longlong *plVar19;
  uint *puVar20;
  undefined1 auVar21 [16];
  longlong local_188;
  longlong *plStack_180;
  undefined8 *local_178;
  undefined8 local_170;
  int local_168;
  undefined2 *local_160;
  undefined8 local_158;
  undefined8 *local_150;
  undefined8 local_148;
  longlong local_140;
  undefined8 local_138;
  undefined8 *local_130;
  undefined8 local_128;
  uint local_120;
  uint uStack_11c;
  uint *puStack_118;
  undefined4 local_110;
  int iStack_10c;
  uint uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
  uint *local_d8;
  uint uStack_d0;
  int iStack_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  longlong *local_98;
  longlong local_88;
  longlong *plStack_80;
  longlong local_78 [2];
  longlong *local_68;
  undefined8 uStack_60;
  uint *puStack_58;
  undefined4 uStack_50;
  int iStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  
  plVar14 = (longlong *)0x0;
  local_168 = 0;
  FUN_14055f6d0(param_3,0);
  if ((param_4 < 3) && (1 < *(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x9c))) {
    local_100 = 0;
    plVar7 = (longlong *)FUN_1404b0000(&local_100);
    if (plVar7 != (longlong *)0x0) {
      plVar7 = (longlong *)(**(code **)(*plVar7 + 8))(plVar7,local_b0);
      lVar9 = *plVar7;
      if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
        lVar8 = *(longlong *)(param_1 + 0xa8);
        if (*(longlong *)(param_1 + 0xa8) == 0) {
          lVar8 = param_1 + 0xa0;
        }
        iVar17 = *(int *)(lVar8 + ((longlong)((int)((ulonglong)lVar9 >> 0x20) + (int)lVar9) &
                                  (longlong)*(int *)(param_1 + 0xb0) - 1U) * 4);
        if (iVar17 != -1) {
          do {
            plVar7 = (longlong *)((longlong)iVar17 * 0x20 + *(longlong *)(param_1 + 0x68));
            if (*plVar7 == lVar9) {
              if (iVar17 != -1) goto LAB_140d81082;
              break;
            }
            iVar17 = (int)plVar7[3];
          } while (iVar17 != -1);
        }
      }
      plVar7 = plVar14;
LAB_140d81082:
      plVar19 = plVar7 + 1;
      if (plVar7 == (longlong *)0x0) {
        plVar19 = plVar14;
      }
      if (plVar19 != (longlong *)0x0) {
        local_150 = (undefined8 *)0x0;
        local_148 = 0;
        local_b8 = plVar19;
        FUN_140d81f00(*plVar19,param_2,&local_150,param_4);
        iVar17 = (int)local_148;
        if ((int)local_148 != 0) {
          iVar6 = (int)param_3[1];
          if (*(int *)((longlong)param_3 + 0xc) < iVar6 + (int)local_148) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_3);
            iVar6 = (int)param_3[1];
          }
          puVar11 = (undefined8 *)((longlong)iVar6 * 0x10 + *param_3);
          puVar15 = local_150;
          do {
            *puVar11 = *puVar15;
            lVar9 = puVar15[1];
            puVar11[1] = lVar9;
            if (lVar9 != 0) {
              LOCK();
              *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
              UNLOCK();
            }
            puVar11 = puVar11 + 2;
            puVar15 = puVar15 + 2;
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
          *(int *)(param_3 + 1) = (int)param_3[1] + (int)local_148;
        }
        if (*(char *)(param_1 + 0xcc) != '\0') {
          plVar7 = (longlong *)FName::FName(local_a8,L"SPARK",1);
          lVar9 = *plVar7;
          if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
            lVar8 = *(longlong *)(param_1 + 0xa8);
            if (*(longlong *)(param_1 + 0xa8) == 0) {
              lVar8 = param_1 + 0xa0;
            }
            iVar17 = *(int *)(lVar8 + ((longlong)((int)((ulonglong)lVar9 >> 0x20) + (int)lVar9) &
                                      (longlong)*(int *)(param_1 + 0xb0) - 1U) * 4);
            if (iVar17 != -1) {
              do {
                plVar7 = (longlong *)((longlong)iVar17 * 0x20 + *(longlong *)(param_1 + 0x68));
                if (*plVar7 == lVar9) {
                  if (iVar17 != -1) goto LAB_140d811b2;
                  break;
                }
                iVar17 = (int)plVar7[3];
              } while (iVar17 != -1);
            }
          }
          plVar7 = (longlong *)0x0;
LAB_140d811b2:
          plVar18 = plVar7 + 1;
          if (plVar7 == (longlong *)0x0) {
            plVar18 = (longlong *)0x0;
          }
          if (plVar18 != (longlong *)0x0) {
            lVar9 = FUN_142b45e90();
            local_c0 = *(undefined8 *)(lVar9 + 0x18);
            local_130 = (undefined8 *)0x0;
            local_128 = 0;
            FUN_140d81f00(*plVar18,param_2,&local_130,param_4);
            puVar11 = local_130 + (longlong)(int)local_128 * 2;
            for (puVar15 = local_130; puVar15 != puVar11; puVar15 = puVar15 + 2) {
              uVar10 = (**(code **)(*(longlong *)*puVar15 + 8))((longlong *)*puVar15,local_a0);
              FUN_140d7d990(param_1,&local_188,uVar10);
              plVar7 = local_98;
              if (local_98 != (longlong *)0x0) {
                LOCK();
                plVar18 = local_98 + 1;
                lVar9 = *plVar18;
                *(int *)plVar18 = (int)*plVar18 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)*local_98)(local_98);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar7 + 0xc);
                  iVar17 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar17 == 1) {
                    (**(code **)(*plVar7 + 8))(plVar7,1);
                  }
                }
              }
              plVar7 = plStack_180;
              if (local_188 == 0) {
                iVar17 = (int)param_3[1];
                *(int *)(param_3 + 1) = iVar17 + 1;
                if (*(int *)((longlong)param_3 + 0xc) < iVar17 + 1) {
                  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar17);
                }
                puVar12 = (undefined8 *)((longlong)iVar17 * 0x10 + *param_3);
                *puVar12 = *puVar15;
                lVar9 = puVar15[1];
                puVar12[1] = lVar9;
                plVar7 = plStack_180;
                if (lVar9 != 0) {
                  LOCK();
                  *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
                  UNLOCK();
                }
              }
              else {
                local_88 = local_188;
                plStack_80 = plStack_180;
                if (plStack_180 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plStack_180 + 1) = (int)plStack_180[1] + 1;
                  UNLOCK();
                }
                FUN_140d7db60(*plVar19,&local_f8,param_2,&local_88,param_4);
                plVar19 = plStack_180;
                if (plVar7 != (longlong *)0x0) {
                  LOCK();
                  plVar7 = plVar7 + 1;
                  lVar9 = *plVar7;
                  *(int *)plVar7 = (int)*plVar7 + -1;
                  UNLOCK();
                  plVar7 = plStack_180;
                  if ((int)lVar9 == 1) {
                    (**(code **)*plStack_180)(plStack_180);
                    plVar7 = plStack_180;
                    LOCK();
                    piVar1 = (int *)((longlong)plVar19 + 0xc);
                    iVar17 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar17 == 1) {
                      (**(code **)(*plStack_180 + 8))(plStack_180,1);
                    }
                  }
                }
                if (local_f8 == (longlong *)0x0) {
                  iVar17 = (int)param_3[1];
                  *(int *)(param_3 + 1) = iVar17 + 1;
                  if (*(int *)((longlong)param_3 + 0xc) < iVar17 + 1) {
                    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar17);
                  }
                  puVar12 = (undefined8 *)((longlong)iVar17 * 0x10 + *param_3);
                  *puVar12 = *puVar15;
                  lVar9 = puVar15[1];
                  puVar12[1] = lVar9;
                  if (lVar9 != 0) {
                    LOCK();
                    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
                    UNLOCK();
                    plVar7 = plStack_180;
                  }
                }
                else {
                  bVar4 = false;
                  local_160 = (undefined2 *)0x0;
                  local_158 = 0;
                  lVar9 = (**(code **)(*local_f8 + 0x38))();
                  if (((*(byte *)(lVar9 + 0x10) & 4) == 0) &&
                     (lVar9 = (**(code **)(*(longlong *)*puVar15 + 0x38))(),
                     (*(byte *)(lVar9 + 0x10) & 4) != 0)) {
LAB_140d81450:
                    bVar4 = true;
                  }
                  else {
                    local_140 = 0;
                    local_138 = 0x14;
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_140,0);
                    FGenericPlatformString::Memcpy(local_140,L"active_service_name",0x28);
                    plVar14 = (longlong *)(ulonglong)((uint)plVar14 | 1);
                    cVar5 = (**(code **)(*(longlong *)*puVar15 + 0x20))
                                      ((longlong *)*puVar15,&local_140,&local_160);
                    if ((cVar5 != '\0') && (1 < (int)local_158)) {
                      plVar14 = (longlong *)0x3;
                      puVar12 = (undefined8 *)FUN_142b495d0(local_c0,local_78);
                      if (*(int *)(puVar12 + 1) == 0) {
                        puVar16 = &DAT_143f3eda8;
                      }
                      else {
                        puVar16 = (undefined2 *)*puVar12;
                      }
                      puVar13 = &DAT_143f3eda8;
                      if ((int)local_158 != 0) {
                        puVar13 = local_160;
                      }
                      iVar17 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar13,puVar16);
                      if (iVar17 != 0) goto LAB_140d81450;
                    }
                  }
                  if ((((ulonglong)plVar14 & 2) != 0) &&
                     (plVar14 = (longlong *)(ulonglong)((uint)plVar14 & 0xfffffffd),
                     local_78[0] != 0)) {
                    FMemory::Free();
                  }
                  if ((((ulonglong)plVar14 & 1) != 0) &&
                     (plVar14 = (longlong *)(ulonglong)((uint)plVar14 & 0xfffffffe), local_140 != 0)
                     ) {
                    FMemory::Free();
                  }
                  if (bVar4) {
                    iVar17 = (int)param_3[1];
                    *(int *)(param_3 + 1) = iVar17 + 1;
                    if (*(int *)((longlong)param_3 + 0xc) < iVar17 + 1) {
                      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar17);
                    }
                    puVar12 = (undefined8 *)((longlong)iVar17 * 0x10 + *param_3);
                    *puVar12 = *puVar15;
                    lVar9 = puVar15[1];
                    puVar12[1] = lVar9;
                    if (lVar9 != 0) {
                      LOCK();
                      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
                      UNLOCK();
                      plVar7 = plStack_180;
                    }
                  }
                  if (local_160 != (undefined2 *)0x0) {
                    FMemory::Free();
                  }
                }
                plVar19 = local_f0;
                if (local_f0 != (longlong *)0x0) {
                  LOCK();
                  plVar7 = local_f0 + 1;
                  lVar9 = *plVar7;
                  *(int *)plVar7 = (int)*plVar7 + -1;
                  UNLOCK();
                  plVar7 = plStack_180;
                  if ((int)lVar9 == 1) {
                    (**(code **)*local_f0)(local_f0);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar19 + 0xc);
                    iVar17 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    plVar7 = plStack_180;
                    if (iVar17 == 1) {
                      (**(code **)(*local_f0 + 8))(local_f0,1);
                      plVar7 = plStack_180;
                    }
                  }
                }
              }
              plVar19 = plStack_180;
              if (plVar7 != (longlong *)0x0) {
                LOCK();
                plVar7 = plVar7 + 1;
                lVar9 = *plVar7;
                *(int *)plVar7 = (int)*plVar7 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)*plStack_180)(plStack_180);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar19 + 0xc);
                  iVar17 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar17 == 1) {
                    (**(code **)(*plStack_180 + 8))(plStack_180,1);
                  }
                }
              }
              plVar19 = local_b8;
            }
            TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
            ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_130);
          }
        }
        TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
        ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_150);
      }
    }
  }
  else {
    local_e8 = (longlong *)(param_1 + 0x68);
    uStack_11c = 1;
    iVar17 = *(int *)(param_1 + 0x90);
    puStack_118 = (uint *)(param_1 + 0x78);
    local_120 = 0;
    iStack_10c = 0;
    uStack_108 = 0;
    if (iVar17 != 0) {
      puVar20 = *(uint **)(param_1 + 0x88);
      if (*(uint **)(param_1 + 0x88) == (uint *)0x0) {
        puVar20 = puStack_118;
      }
      uVar2 = *puVar20;
      plVar7 = plVar14;
      while (uVar2 == 0) {
        iVar6 = (int)plVar14;
        uStack_108 = (int)plVar7 + 0x20;
        plVar7 = (longlong *)(ulonglong)uStack_108;
        local_120 = iVar6 + 1;
        plVar14 = (longlong *)(ulonglong)local_120;
        if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_140d81643;
        uVar2 = puVar20[(longlong)iVar6 + 1];
      }
      uStack_11c = -uVar2 & uVar2;
      local_168 = 0x1f;
      if (uStack_11c != 0) {
        for (; uStack_11c >> local_168 == 0; local_168 = local_168 + -1) {
        }
      }
      if (uStack_11c == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - local_168;
      }
      iStack_10c = (uStack_108 - iVar6) + 0x1f;
      if (iVar17 < iStack_10c) {
LAB_140d81643:
        iStack_10c = iVar17;
      }
    }
    local_110 = 0xffffffff;
    uStack_e0 = CONCAT44(uStack_11c,local_120);
    uStack_50 = 0xffffffff;
    iStack_4c = iStack_10c;
    uStack_48 = uStack_108;
    uStack_44 = uStack_104;
    uStack_d0 = 0xffffffff;
    iStack_cc = iStack_10c;
    auVar3._4_8_ = uStack_e0;
    auVar3._0_4_ = iStack_10c;
    auVar21._0_8_ = auVar3._0_8_ << 0x20;
    auVar21._8_4_ = uStack_108;
    auVar21._12_4_ = uStack_104;
    local_c8 = auVar21._8_8_;
    local_d8 = puStack_118;
    local_68 = local_e8;
    uStack_60 = uStack_e0;
    puStack_58 = puStack_118;
    if (iStack_10c < iVar17) {
      do {
        local_178 = (undefined8 *)0x0;
        local_170 = 0;
        FUN_140d81f00(*(undefined8 *)((longlong)iStack_cc * 0x20 + 8 + *local_e8),param_2,&local_178
                      ,param_4);
        iVar17 = (int)local_170;
        if ((int)local_170 != 0) {
          iVar6 = (int)param_3[1];
          if (*(int *)((longlong)param_3 + 0xc) < (int)local_170 + iVar6) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_3);
            iVar6 = (int)param_3[1];
          }
          puVar11 = (undefined8 *)((longlong)iVar6 * 0x10 + *param_3);
          puVar15 = local_178;
          do {
            *puVar11 = *puVar15;
            lVar9 = puVar15[1];
            puVar11[1] = lVar9;
            if (lVar9 != 0) {
              LOCK();
              *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
              UNLOCK();
            }
            puVar11 = puVar11 + 2;
            puVar15 = puVar15 + 2;
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
          *(int *)(param_3 + 1) = (int)param_3[1] + (int)local_170;
          if ((int)local_170 != 0) {
            plVar14 = local_178 + 1;
            iVar17 = (int)local_170;
            do {
              plVar7 = (longlong *)*plVar14;
              if (plVar7 != (longlong *)0x0) {
                LOCK();
                plVar19 = plVar7 + 1;
                lVar9 = *plVar19;
                *(int *)plVar19 = (int)*plVar19 + -1;
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
              plVar14 = plVar14 + 2;
              iVar17 = iVar17 + -1;
            } while (iVar17 != 0);
          }
        }
        if (local_178 != (undefined8 *)0x0) {
          FMemory::Free();
        }
        uStack_d0 = uStack_d0 & ~uStack_e0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_e0);
      } while (iStack_cc < (int)local_d8[6]);
    }
  }
  return;
}



// FUNCTION 140d817d0 FUN_140d817d0 body=283 status=ok
// SIG undefined FUN_140d817d0(void)

void FUN_140d817d0(longlong param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    cVar2 = FUN_14044af00(param_1,0);
    if (cVar2 != '\0') {
      uVar3 = FWeakObjectPtr::Get(param_1);
      plVar4 = (longlong *)FUN_140bb74b0(uVar3);
      plVar5 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar5 != (longlong *)0x0) {
        plVar5[1] = param_1;
        *plVar5 = (longlong)&DAT_143f3ed00;
        plVar5[2] = (longlong)FUN_140d8caa0;
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar5[4] = lVar6;
        *plVar5 = (longlong)&PTR_GetPoolName_143f3ed48;
      }
      uVar3 = 0;
      if (plVar5 != (longlong *)0x0) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar4,1);
        puVar7 = (undefined8 *)(**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
        iVar1 = (int)plVar4[1];
        uVar3 = *puVar7;
        *(int *)(plVar4 + 1) = iVar1 + 1;
        if (*(int *)((longlong)plVar4 + 0xc) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar1);
        }
        puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar4);
        *puVar7 = plVar5;
        *(undefined4 *)(puVar7 + 1) = 3;
      }
      *(undefined8 *)(param_1 + 0x28) = uVar3;
      uVar3 = FWeakObjectPtr::Get(param_1);
      uVar3 = FUN_140bb74b0(uVar3);
      FUN_140d82050(uVar3,param_1 + 8,0);
    }
  }
  return;
}



// FUNCTION 140d818f0 FUN_140d818f0 body=1547 status=ok
// SIG undefined FUN_140d818f0(void)

void FUN_140d818f0(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  float fVar9;
  double dVar10;
  int local_res10;
  int local_res20 [2];
  undefined4 *puVar11;
  undefined4 uVar12;
  longlong local_d8 [2];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 *local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  LARGE_INTEGER local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  undefined1 local_58 [24];
  
  bVar8 = *(char *)(param_1 + 0x58) == '\0';
  local_res10 = FUN_140d844e0();
  puVar4 = (undefined8 *)0x0;
  if (local_res10 == -1) {
    puVar3 = (undefined8 *)operator_new(0x88);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = *param_2;
      lVar6 = param_2[1];
      puVar3[1] = lVar6;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined1 *)(puVar3 + 4) = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      *(undefined4 *)(puVar3 + 0xc) = 0xffffffff;
      *(undefined4 *)((longlong)puVar3 + 100) = 0;
      puVar3[0xe] = 0;
      *(undefined4 *)(puVar3 + 0xf) = 0;
      puVar3[0x10] = 0;
      iVar2 = *(int *)(puVar3 + 3);
      *(int *)(puVar3 + 3) = iVar2 + 4;
      if (*(int *)((longlong)puVar3 + 0x1c) < iVar2 + 4) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(puVar3 + 2,iVar2);
      }
      puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + puVar3[2]);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4 = puVar3;
    }
    plVar7 = (longlong *)0x0;
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *plVar5 = (longlong)&PTR_FUN_144531920;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      plVar5[2] = (longlong)puVar4;
      plVar7 = plVar5;
    }
    local_c0 = puVar4;
    local_b8 = plVar7;
    SharedPointerInternals::EnableSharedFromThis(&local_c0,puVar4,puVar4);
    plVar7 = local_b8;
    puVar4 = local_c0;
    if (local_c0 != (undefined8 *)0x0) {
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
        UNLOCK();
      }
      local_res10 = *(int *)(param_1 + 0x40);
      *(int *)(param_1 + 0x40) = local_res10 + 1;
      if (*(int *)(param_1 + 0x44) < local_res10 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x38,local_res10);
      }
      puVar3 = (undefined8 *)((longlong)local_res10 * 0x10 + *(longlong *)(param_1 + 0x38));
      *puVar3 = puVar4;
      puVar3[1] = plVar7;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        LOCK();
        plVar5 = plVar7 + 1;
        lVar6 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
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
      bVar8 = true;
    }
    plVar7 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_b8 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_b8)(local_b8);
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
  }
  if (local_res10 < 0) {
    return;
  }
  if (*(int *)(param_1 + 0x40) <= local_res10) {
    return;
  }
  FUN_1404cf890(&local_90,*(undefined8 *)(param_1 + 0x28));
  if ((local_90 == (longlong *)0x0) ||
     (iVar2 = (**(code **)(*local_90 + 0x78))(local_90,param_2), iVar2 != 2)) {
    TBaseMulticastDelegate<void,FUniqueNetId_const_&,FUniqueNetId_const_&>::Broadcast
              (param_1 + 0x10,param_2,
               *(undefined8 *)
                (*(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)local_res10 * 0x10) + 0x10)
              );
    goto LAB_140d81eac;
  }
  Online::GetSessionInterface(&local_a0,*(undefined8 *)(param_1 + 0x28));
  if (local_a0 == (longlong *)0x0) {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)local_res10 * 0x10);
LAB_140d81e3e:
    TBaseMulticastDelegate<void,FUniqueNetId_const_&,FUniqueNetId_const_&>::Broadcast
              (param_1 + 0x10,param_2,*(undefined8 *)(lVar6 + 0x10));
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)local_res10 * 0x10);
    if ((*(char *)(lVar6 + 0x20) != '\0') || (!bVar8)) goto LAB_140d81e3e;
    lVar6 = *(longlong *)(param_1 + 0x30);
    FUN_140549690(lVar6 + 0x18,local_res20,param_2);
    if (local_res20[0] == -1) {
      lVar6 = 0;
    }
    else {
      lVar6 = (longlong)local_res20[0] * 0x68 + *(longlong *)(lVar6 + 0x18);
    }
    plVar7 = (longlong *)(lVar6 + 0x10);
    if (lVar6 == 0) {
      plVar7 = (longlong *)0x0;
    }
    if ((plVar7 != (longlong *)0x0) &&
       (lVar6 = *(longlong *)(param_1 + 0x28), (int)plVar7[1] != *(int *)((longlong)plVar7 + 0x34)))
    {
      plVar5 = (longlong *)plVar7[8];
      if ((longlong *)plVar7[8] == (longlong *)0x0) {
        plVar5 = plVar7 + 7;
      }
      iVar2 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)lVar6 >> 0x20) + (int)lVar6) &
                      (longlong)(int)plVar7[9] - 1U) * 4);
      if (iVar2 != -1) {
        do {
          if (*(longlong *)(*plVar7 + (longlong)iVar2 * 0x50) == lVar6) {
            if (iVar2 != -1) goto LAB_140d81e4e;
            break;
          }
          iVar2 = *(int *)(*plVar7 + 0x48 + (longlong)iVar2 * 0x50);
        } while (iVar2 != -1);
      }
    }
    puVar11 = &local_c8;
    local_b0 = 0;
    local_a8 = 0;
    local_c8 = 0;
    local_c4 = 0xffffffff;
    iVar2 = (**(code **)(*local_a0 + 0x138))(local_a0,param_2,param_3,&local_b0,puVar11);
    uVar12 = (undefined4)((ulonglong)puVar11 >> 0x20);
    if (iVar2 == 1) {
LAB_140d81e0e:
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_b0);
    }
    else {
      if (*(double *)(param_1 + 0x60) <= 0.0) {
LAB_140d81e03:
        FUN_140d93fa0(param_1,param_2);
        goto LAB_140d81e0e;
      }
      QueryPerformanceCounter(&local_80);
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)local_res10 * 0x10);
      dVar10 = (double)local_80.QuadPart * DAT_1468b02f8 + 16777216.0;
      if (*(double *)(lVar6 + 0x28) <= dVar10) {
        *(double *)(lVar6 + 0x28) = dVar10 + *(double *)(param_1 + 0x60);
        plVar7 = (longlong *)FName::FName(local_58,L"SPARK",1);
        if (*(longlong *)(param_1 + 0x28) == *plVar7) {
          lVar6 = FUN_142b45e90();
          FUN_142b4a990(*(undefined8 *)(lVar6 + 0x18),&local_68,param_2);
          if (local_68 != 0) {
            FUN_142b4a0e0(local_68,&local_78,&DAT_146b2acc8);
            if (local_78 != 0) {
              local_d8[0] = 0;
              local_d8[1] = 0x1c;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8,0);
              FGenericPlatformString::Memcpy(local_d8[0],L"ReadFriendsListDelaySeconds",0x38);
              fVar9 = (float)FUN_142afb1f0(local_78,local_d8,(float)*(double *)(param_1 + 0x60),
                                           0x41f00000,CONCAT44(uVar12,0x44e10000));
              *(double *)(param_1 + 0x60) = (double)fVar9;
              if (local_d8[0] != 0) {
                FMemory::Free();
              }
            }
            if (local_70 != (longlong *)0x0) {
              LOCK();
              plVar7 = local_70 + 1;
              lVar6 = *plVar7;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*local_70)(local_70);
                LOCK();
                piVar1 = (int *)((longlong)local_70 + 0xc);
                iVar2 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*local_70 + 8))(local_70,1);
                }
              }
            }
          }
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar7 = local_60 + 1;
            lVar6 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
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
        }
        goto LAB_140d81e03;
      }
      TBaseMulticastDelegate<void,FUniqueNetId_const_&,FUniqueNetId_const_&>::Broadcast
                (param_1 + 0x10,param_2,*(undefined8 *)(lVar6 + 0x10));
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_b0);
    }
  }
LAB_140d81e4e:
  plVar7 = local_98;
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_98 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_98 + 8))(local_98,1);
      }
    }
  }
LAB_140d81eac:
  plVar7 = local_88;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_88 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_88 + 8))(local_88,1);
      }
    }
  }
  return;
}



// FUNCTION 140d81f00 FUN_140d81f00 body=330 status=ok
// SIG undefined FUN_140d81f00(void)

void FUN_140d81f00(longlong param_1,undefined8 param_2,longlong *param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  iVar5 = FUN_140d844e0();
  if ((-1 < iVar5) && (iVar5 < *(int *)(param_1 + 0x40))) {
    if (param_4 == 3) {
      lVar7 = 0x10;
    }
    else if (param_4 == 4) {
      lVar7 = 0x20;
    }
    else if (param_4 == 5) {
      lVar7 = 0x30;
    }
    else {
      lVar7 = 0;
    }
    plVar10 = (longlong *)
              (*(longlong *)
                (*(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar5 * 0x10) + 0x10) +
              lVar7);
    if (param_3 != plVar10) {
      iVar5 = (int)param_3[1];
      if (iVar5 != 0) {
        plVar9 = (longlong *)(*param_3 + 8);
        do {
          plVar4 = (longlong *)*plVar9;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar4 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
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
          plVar9 = plVar9 + 2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      iVar5 = (int)plVar10[1];
      puVar8 = (undefined8 *)*plVar10;
      *(int *)(param_3 + 1) = iVar5;
      if ((iVar5 == 0) && (*(int *)((longlong)param_3 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_3 + 0xc) = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(param_3,iVar5);
        puVar6 = (undefined8 *)*param_3;
        for (; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar6 = *puVar8;
          lVar7 = puVar8[1];
          puVar6[1] = lVar7;
          if (lVar7 != 0) {
            LOCK();
            *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
            UNLOCK();
          }
          puVar6 = puVar6 + 2;
          puVar8 = puVar8 + 2;
        }
      }
    }
  }
  return;
}



// FUNCTION 140d82050 FUN_140d82050 body=724 status=ok
// SIG undefined FUN_140d82050(void)

void FUN_140d82050(longlong param_1,undefined8 param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  int iVar9;
  LARGE_INTEGER local_res8;
  undefined1 local_res20 [8];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  uint uStack_b0;
  int iStack_ac;
  undefined1 local_a8 [16];
  longlong *local_98;
  undefined2 local_90;
  longlong *local_88;
  int iStack_80;
  uint uStack_7c;
  uint *puStack_78;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  
  local_98 = (longlong *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 200) = 0;
  iVar4 = *(int *)(param_1 + 0x90);
  puStack_78 = (uint *)(param_1 + 0x78);
  local_c8._0_4_ = 0;
  local_c8._4_4_ = 1;
  local_b8._4_4_ = 0;
  uStack_b0 = 0;
  if (iVar4 != 0) {
    puVar8 = *(uint **)(param_1 + 0x88);
    if (*(uint **)(param_1 + 0x88) == (uint *)0x0) {
      puVar8 = puStack_78;
    }
    uVar1 = *puVar8;
    while (uVar1 == 0) {
      lVar6 = (longlong)(int)local_c8;
      uStack_b0 = uStack_b0 + 0x20;
      iVar9 = (int)local_c8 + 1;
      bVar3 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_c8;
      local_c8._0_4_ = iVar9;
      if (bVar3) goto LAB_140d8212d;
      uVar1 = puVar8[lVar6 + 1];
    }
    local_c8._4_4_ = -uVar1 & uVar1;
    iVar9 = 0x1f;
    if (local_c8._4_4_ != 0) {
      for (; local_c8._4_4_ >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (local_c8._4_4_ == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    local_b8._4_4_ = (uStack_b0 - iVar9) + 0x1f;
    if (iVar4 < local_b8._4_4_) {
LAB_140d8212d:
      local_b8._4_4_ = iVar4;
    }
  }
  auStack_70._4_4_ = local_b8._4_4_;
  auStack_70._0_4_ = 0xffffffff;
  auStack_70._8_4_ = uStack_b0;
  auStack_70._12_4_ = iStack_ac;
  iStack_80 = (int)local_c8;
  uStack_7c = local_c8._4_4_;
  local_90 = 0;
  local_60._0_4_ = SUB84(local_98,0);
  local_60._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
  uStack_b0 = 0xffffffff;
  iStack_ac = local_b8._4_4_;
  uStack_c0._0_4_ = (int)local_c8;
  uStack_c0._4_4_ = local_c8._4_4_;
  local_a8._8_4_ = (undefined4)local_60;
  local_a8._0_8_ = auStack_70._8_8_;
  local_a8._12_4_ = local_60._4_4_;
  bVar3 = local_b8._4_4_ < *(int *)(param_1 + 0x90);
  local_c8 = local_98;
  local_88 = local_98;
  local_60 = local_98;
  local_b8 = puStack_78;
  if (bVar3) {
    do {
      lVar7 = (longlong)iStack_ac * 0x20;
      lVar6 = *local_c8;
      if (param_3 != '\0') {
        plVar5 = (longlong *)FName::FName(local_res20,L"SPARK",1);
        if ((*(longlong *)(lVar7 + lVar6) == *plVar5) &&
           (lVar2 = *(longlong *)(lVar6 + 8 + lVar7), 0.0 < *(double *)(lVar2 + 0x60))) {
          iVar4 = FUN_140d844e0(lVar2,param_2);
          if ((-1 < iVar4) && (iVar4 < *(int *)(lVar2 + 0x40))) {
            QueryPerformanceCounter(&local_res8);
            *(double *)(*(longlong *)(*(longlong *)(lVar2 + 0x38) + (longlong)iVar4 * 0x10) + 0x28)
                 = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
          }
        }
      }
      *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
      FUN_140d818f0(*(undefined8 *)(lVar6 + 8 + lVar7),param_2,0);
      uStack_b0 = uStack_b0 & ~uStack_c0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c0);
    } while (iStack_ac < (int)local_b8[6]);
    if (((char)local_90 != '\0') && (local_90._1_1_ != '\0')) {
      TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_98,(int)local_98[1] - *(int *)((longlong)local_98 + 0x34),1);
    }
  }
  if (*(int *)(param_1 + 200) == 0) {
    local_c8 = (longlong *)0x0;
    uStack_c0 = 0;
    FUN_140d80f80(param_1,param_2,&local_c8,0);
    TBaseMulticastDelegate<void,FUniqueNetId_const_&,FUniqueNetId_const_&>::Broadcast
              (param_1,param_2,&local_c8);
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_c8);
  }
  *(undefined4 *)(param_1 + 200) = 0;
  return;
}



// FUNCTION 140d82330 FUN_140d82330 body=784 status=ok
// SIG undefined FUN_140d82330(void)

void FUN_140d82330(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  int local_b8;
  uint uStack_b4;
  uint uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  uint uStack_84;
  int iStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
  uStack_b4 = 1;
  local_b8 = 0;
  uVar3 = *(uint *)(param_1 + 0x168);
  puVar1 = (uint *)(param_1 + 0x150);
  uStack_a4 = 0;
  iStack_a0 = 0;
  if (uVar3 != 0) {
    puVar10 = *(uint **)(param_1 + 0x160);
    if (*(uint **)(param_1 + 0x160) == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar12 = *puVar10;
    iStack_a0 = 0;
    local_b8 = 0;
    while (uVar12 == 0) {
      lVar9 = (longlong)local_b8;
      iStack_a0 = iStack_a0 + 0x20;
      iVar11 = local_b8 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_b8;
      local_b8 = iVar11;
      if (bVar5) goto LAB_140d8240c;
      uVar12 = puVar10[lVar9 + 1];
    }
    uStack_b4 = -uVar12 & uVar12;
    iVar11 = 0x1f;
    if (uStack_b4 != 0) {
      for (; uStack_b4 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uStack_b4 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    uStack_a4 = (iStack_a0 - iVar11) + 0x1f;
    if ((int)uVar3 < (int)uStack_a4) {
LAB_140d8240c:
      uStack_a4 = uVar3;
    }
  }
  uStack_84 = *(uint *)(param_1 + 0x168);
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_a4;
  local_40 = CONCAT44(uStack_9c,iStack_a0);
  uVar12 = uStack_84 & 0xffffffe0;
  iStack_58 = local_b8;
  uStack_54 = uStack_b4;
  local_50 = puVar1;
  if (uStack_84 != uVar3) {
    puVar10 = *(uint **)(param_1 + 0x160);
    if (*(uint **)(param_1 + 0x160) == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar8 = puVar10[(int)uStack_84 >> 5] & -1 << ((byte)uStack_84 & 0x1f);
    iVar11 = (int)uStack_84 >> 5;
    while (uVar8 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
      goto LAB_140d824db;
      uVar8 = puVar10[(longlong)iVar11 + 1];
      iVar11 = iVar11 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar11 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    uStack_84 = (uVar12 - iVar11) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_140d824db:
      uStack_84 = uVar3;
    }
  }
  do {
    if ((uStack_44 == uStack_84) && (local_50 == puVar1)) {
      FUN_140d76760(param_1,param_2,param_3);
      return;
    }
    plVar4 = *(longlong **)((longlong)(int)uStack_44 * 0x40 + 0x30 + *(longlong *)(param_1 + 0x140))
    ;
    lVar9 = *(longlong *)((longlong)(int)uStack_44 * 0x40 + 0x28 + *(longlong *)(param_1 + 0x140));
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if ((((lVar9 == 0) || (*(longlong **)(lVar9 + 0x10) == (longlong *)0x0)) ||
        (cVar6 = (**(code **)(**(longlong **)(lVar9 + 0x10) + 0x20))(), cVar6 == '\0')) ||
       (*(char *)(lVar9 + 0x81) == '\0')) {
LAB_140d825c3:
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar4 + 1;
        lVar9 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
    }
    else {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      iVar11 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar11 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar11 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar11);
      }
      plVar7 = (longlong *)((longlong)iVar11 * 0x10 + *param_3);
      *plVar7 = lVar9;
      plVar7[1] = (longlong)plVar4;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        plVar7 = plVar4 + 1;
        lVar9 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
        goto LAB_140d825c3;
      }
    }
    uStack_48 = uStack_48 & ~uStack_54;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_58);
  } while( true );
}



// FUNCTION 140d82640 FUN_140d82640 body=711 status=ok
// SIG undefined FUN_140d82640(void)

void FUN_140d82640(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined4 local_res18 [2];
  int local_res20 [2];
  undefined8 *local_78;
  undefined8 local_70;
  undefined4 local_68;
  int local_64 [3];
  undefined4 local_58;
  int local_54;
  undefined4 *local_50;
  undefined4 *local_48;
  int *local_40;
  undefined4 *local_38 [2];
  
  FUN_140d746d0(param_3,4);
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  FUN_140d80f80(param_1,param_2,&local_78,0);
  local_50 = local_res18;
  local_res18[0] = 0;
  FUN_140d5ce60(param_3,local_res20,&local_50,0);
  iVar5 = (int)local_70;
  lVar6 = (longlong)local_res20[0] * 0x20 + *param_3;
  if ((int)local_70 != 0) {
    iVar2 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x14) < iVar2 + (int)local_70) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar6 + 8);
      iVar2 = *(int *)(lVar6 + 0x10);
    }
    puVar3 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar6 + 8));
    puVar4 = local_78;
    do {
      *puVar3 = *puVar4;
      lVar1 = puVar4[1];
      puVar3[1] = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      puVar3 = puVar3 + 2;
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + (int)local_70;
  }
  FUN_140d80f80(param_1,param_2,&local_78,3);
  local_48 = &local_68;
  local_68 = 3;
  FUN_140d5ce60(param_3,local_64,&local_48,0);
  iVar5 = (int)local_70;
  lVar6 = (longlong)local_64[0] * 0x20 + *param_3;
  if ((int)local_70 != 0) {
    iVar2 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x14) < iVar2 + (int)local_70) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar6 + 8);
      iVar2 = *(int *)(lVar6 + 0x10);
    }
    puVar3 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar6 + 8));
    puVar4 = local_78;
    do {
      *puVar3 = *puVar4;
      lVar1 = puVar4[1];
      puVar3[1] = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      puVar3 = puVar3 + 2;
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + (int)local_70;
  }
  FUN_140d80f80(param_1,param_2,&local_78,5);
  local_40 = local_64 + 1;
  local_64[1] = 5;
  FUN_140d5ce60(param_3,local_64 + 2,&local_40,0);
  iVar5 = (int)local_70;
  lVar6 = (longlong)local_64[2] * 0x20 + *param_3;
  if ((int)local_70 != 0) {
    iVar2 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x14) < iVar2 + (int)local_70) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar6 + 8);
      iVar2 = *(int *)(lVar6 + 0x10);
    }
    puVar3 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar6 + 8));
    puVar4 = local_78;
    do {
      *puVar3 = *puVar4;
      lVar1 = puVar4[1];
      puVar3[1] = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      puVar3 = puVar3 + 2;
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + (int)local_70;
  }
  FUN_140d80f80(param_1,param_2,&local_78,4);
  local_38[0] = &local_58;
  local_58 = 4;
  FUN_140d5ce60(param_3,&local_54,local_38,0);
  iVar5 = (int)local_70;
  lVar6 = (longlong)local_54 * 0x20 + *param_3;
  if ((int)local_70 != 0) {
    iVar2 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x14) < iVar2 + (int)local_70) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar6 + 8);
      iVar2 = *(int *)(lVar6 + 0x10);
    }
    puVar3 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar6 + 8));
    puVar4 = local_78;
    do {
      *puVar3 = *puVar4;
      lVar1 = puVar4[1];
      puVar3[1] = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      puVar3 = puVar3 + 2;
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + (int)local_70;
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_78);
  return;
}



// FUNCTION 140d82910 FUN_140d82910 body=836 status=ok
// SIG undefined FUN_140d82910(void)

void FUN_140d82910(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  longlong *plVar6;
  int *piVar7;
  uint uVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  int local_b0;
  uint uStack_ac;
  uint uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  uint uStack_7c;
  int iStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
  uStack_ac = 1;
  puVar2 = (uint *)(param_1 + 0x150);
  local_b0 = 0;
  uVar3 = *(uint *)(param_1 + 0x168);
  uStack_9c = 0;
  iStack_98 = 0;
  if (uVar3 != 0) {
    puVar10 = *(uint **)(param_1 + 0x160);
    if (*(uint **)(param_1 + 0x160) == (uint *)0x0) {
      puVar10 = puVar2;
    }
    uVar11 = *puVar10;
    iStack_98 = 0;
    local_b0 = 0;
    while (uVar11 == 0) {
      lVar9 = (longlong)local_b0;
      iStack_98 = iStack_98 + 0x20;
      iVar12 = local_b0 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_b0;
      local_b0 = iVar12;
      if (bVar5) goto LAB_140d829fc;
      uVar11 = puVar10[lVar9 + 1];
    }
    uStack_ac = -uVar11 & uVar11;
    iVar12 = 0x1f;
    if (uStack_ac != 0) {
      for (; uStack_ac >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uStack_ac == 0) {
      iVar12 = 0x20;
    }
    else {
      iVar12 = 0x1f - iVar12;
    }
    uStack_9c = (iStack_98 - iVar12) + 0x1f;
    if ((int)uVar3 < (int)uStack_9c) {
LAB_140d829fc:
      uStack_9c = uVar3;
    }
  }
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_9c;
  local_40 = CONCAT44(uStack_94,iStack_98);
  uStack_7c = *(uint *)(param_1 + 0x168);
  uVar11 = uStack_7c & 0xffffffe0;
  iStack_58 = local_b0;
  uStack_54 = uStack_ac;
  local_50 = puVar2;
  if (uStack_7c != uVar3) {
    puVar10 = *(uint **)(param_1 + 0x160);
    if (*(uint **)(param_1 + 0x160) == (uint *)0x0) {
      puVar10 = puVar2;
    }
    uVar8 = puVar10[(int)uStack_7c >> 5] & -1 << ((byte)uStack_7c & 0x1f);
    iVar12 = (int)uStack_7c >> 5;
    while (uVar8 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar12)
      goto LAB_140d82adb;
      uVar8 = puVar10[(longlong)iVar12 + 1];
      iVar12 = iVar12 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar12 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar12 = 0x20;
    }
    else {
      iVar12 = 0x1f - iVar12;
    }
    uStack_7c = (uVar11 - iVar12) + 0x1f;
    if ((int)uVar3 < (int)uStack_7c) {
LAB_140d82adb:
      uStack_7c = uVar3;
    }
  }
  do {
    if ((uStack_44 == uStack_7c) && (local_50 == puVar2)) {
      FUN_140d76760(param_1,param_2,param_4);
      return;
    }
    plVar4 = *(longlong **)((longlong)(int)uStack_44 * 0x40 + 0x30 + *(longlong *)(param_1 + 0x140))
    ;
    lVar9 = *(longlong *)((longlong)(int)uStack_44 * 0x40 + 0x28 + *(longlong *)(param_1 + 0x140));
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (lVar9 != 0) {
      piVar7 = (int *)*param_3;
      piVar1 = piVar7 + *(int *)(param_3 + 1);
      for (; piVar7 != piVar1; piVar7 = piVar7 + 1) {
        if (*piVar7 == *(int *)(lVar9 + 0x70)) {
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          iVar12 = (int)param_4[1];
          *(int *)(param_4 + 1) = iVar12 + 1;
          if (*(int *)((longlong)param_4 + 0xc) < iVar12 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_4,iVar12);
          }
          plVar6 = (longlong *)((longlong)iVar12 * 0x10 + *param_4);
          *plVar6 = lVar9;
          plVar6[1] = (longlong)plVar4;
          if (plVar4 == (longlong *)0x0) goto LAB_140d82c10;
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          LOCK();
          plVar6 = plVar4 + 1;
          lVar9 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar12 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              if (plVar4 == (longlong *)0x0) goto LAB_140d82c10;
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
          break;
        }
      }
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      lVar9 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
LAB_140d82c10:
    uStack_48 = uStack_48 & ~uStack_54;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_58);
  } while( true );
}



// FUNCTION 140d82c60 FUN_140d82c60 body=129 status=ok
// SIG undefined FUN_140d82c60(void)

void FUN_140d82c60(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *local_18;
  undefined8 local_10;
  
  local_10 = 1;
  local_18 = (undefined4 *)0x0;
  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_18,0);
  puVar1 = local_18;
  *local_18 = param_3;
  FUN_140d82910(param_1,param_2,&local_18,param_4);
  if (puVar1 != (undefined4 *)0x0) {
    FMemory::Free(puVar1);
  }
  return;
}



// FUNCTION 140d82cf0 FUN_140d82cf0 body=135 status=ok
// SIG undefined FUN_140d82cf0(void)

longlong FUN_140d82cf0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((*(longlong *)(param_1 + 8) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xae8), lVar2 != 0)) {
    plVar4 = *(longlong **)(lVar2 + 0x238);
    plVar1 = plVar4 + *(int *)(lVar2 + 0x240);
    while( true ) {
      if (plVar4 == plVar1) {
        plVar4 = *(longlong **)(lVar2 + 0x248);
        plVar1 = plVar4 + *(int *)(lVar2 + 0x250);
        while( true ) {
          if (plVar4 == plVar1) {
            return 0;
          }
          lVar2 = *plVar4;
          if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xc0) == DAT_14686e880)) break;
          plVar4 = plVar4 + 1;
        }
        return lVar2;
      }
      lVar3 = *plVar4;
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0xc0) == DAT_14686e880)) break;
      plVar4 = plVar4 + 1;
    }
    return lVar3;
  }
  return 0;
}



// FUNCTION 140d82d80 FUN_140d82d80 body=476 status=ok
// SIG undefined FUN_140d82d80(void)

void FUN_140d82d80(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (param_1 != 0) {
    lVar12 = *(longlong *)(param_1 + 0x60);
    lVar9 = (longlong)*(int *)(param_1 + 0x68) * 0x40 + lVar12;
    for (; lVar12 != lVar9; lVar12 = lVar12 + 0x40) {
      if ((*(longlong **)(lVar12 + 0x10) != (longlong *)0x0) &&
         (cVar8 = (**(code **)(**(longlong **)(lVar12 + 0x10) + 0x20))(), cVar8 != '\0')) {
        plVar4 = *(longlong **)(lVar12 + 0x18);
        uVar5 = *(undefined8 *)(lVar12 + 0x10);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        iVar3 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar3);
        }
        puVar10 = (undefined8 *)((longlong)iVar3 * 0x10 + *param_2);
        *puVar10 = uVar5;
        puVar10[1] = plVar4;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
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
            if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
      }
      lVar11 = *(longlong *)(lVar12 + 0x30);
      lVar6 = lVar11 + (longlong)*(int *)(lVar12 + 0x38) * 0x28;
      for (; lVar11 != lVar6; lVar11 = lVar11 + 0x28) {
        if ((*(longlong **)(lVar11 + 8) != (longlong *)0x0) &&
           (cVar8 = (**(code **)(**(longlong **)(lVar11 + 8) + 0x20))(), cVar8 != '\0')) {
          plVar4 = *(longlong **)(lVar11 + 0x10);
          uVar5 = *(undefined8 *)(lVar11 + 8);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          iVar3 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar3 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar3);
          }
          puVar10 = (undefined8 *)((longlong)iVar3 * 0x10 + *param_2);
          *puVar10 = uVar5;
          puVar10[1] = plVar4;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
            LOCK();
            plVar1 = plVar4 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140d82f60 FUN_140d82f60 body=277 status=ok
// SIG undefined FUN_140d82f60(void)

undefined8 * FUN_140d82f60(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((param_2 != 0) && (*param_3 != 0)) {
    lVar5 = *(longlong *)(param_2 + 0x60);
    lVar4 = (longlong)*(int *)(param_2 + 0x68) * 0x40 + lVar5;
    for (; lVar5 != lVar4; lVar5 = lVar5 + 0x40) {
      if (((*(longlong **)(lVar5 + 0x10) != (longlong *)0x0) &&
          (cVar2 = (**(code **)(**(longlong **)(lVar5 + 0x10) + 0x20))(), cVar2 != '\0')) &&
         (cVar2 = (*(code *)**(undefined8 **)*param_3)
                            ((undefined8 *)*param_3,*(undefined8 *)(lVar5 + 0x10)), cVar2 != '\0'))
      {
LAB_140d8304e:
        *param_1 = &PTR_FUN_143f73d18;
        param_1[1] = *(undefined8 *)(lVar5 + 0x10);
        lVar5 = *(longlong *)(lVar5 + 0x18);
        param_1[2] = lVar5;
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          UNLOCK();
        }
        goto LAB_140d83020;
      }
      lVar3 = *(longlong *)(lVar5 + 0x30);
      lVar1 = lVar3 + (longlong)*(int *)(lVar5 + 0x38) * 0x28;
      for (; lVar3 != lVar1; lVar3 = lVar3 + 0x28) {
        if (((*(longlong **)(lVar3 + 8) != (longlong *)0x0) &&
            (cVar2 = (**(code **)(**(longlong **)(lVar3 + 8) + 0x20))(), cVar2 != '\0')) &&
           (cVar2 = (*(code *)**(undefined8 **)*param_3)
                              ((undefined8 *)*param_3,*(undefined8 *)(lVar3 + 8)), cVar2 != '\0'))
        goto LAB_140d8304e;
      }
    }
  }
  param_1[1] = 0;
  param_1[2] = 0;
LAB_140d83020:
  *param_1 = &PTR_FUN_143f740c8;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 140d83080 FUN_140d83080 body=479 status=ok
// SIG undefined FUN_140d83080(void)

undefined8 *
FUN_140d83080(longlong *param_1,undefined8 *param_2,undefined1 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (param_4 != (longlong *)0x0) {
    lVar6 = *param_1;
    uVar7 = (**(code **)(*param_4 + 0x148))(param_4);
    (**(code **)(lVar6 + 0x10))(param_1,&local_28,param_3,uVar7);
    if (local_28 != 0) {
      FUN_1404ae740(local_38,param_2,0);
      plVar4 = plStack_20;
      local_18 = local_28;
      plStack_10 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
        UNLOCK();
      }
      local_40 = (longlong *)FUN_1404a9830(&local_18);
      local_48 = local_40 + 2;
      SharedPointerInternals::EnableSharedFromThis(&local_48,local_48,local_48);
      FUN_1406c30a0(&local_48,local_38,1);
      plVar3 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_40)(local_40);
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
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar4 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
      plVar4 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_30 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
    }
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar4 = plStack_20 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plStack_20 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 140d83260 FUN_140d83260 body=433 status=ok
// SIG undefined FUN_140d83260(void)

undefined8 *
FUN_140d83260(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong *local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (param_4 != 0) {
    (**(code **)(*param_1 + 0x18))(param_1,&local_28);
    if (local_28 != 0) {
      FUN_1404ae740(local_38,param_2,0);
      plVar4 = plStack_20;
      local_18 = local_28;
      plStack_10 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
        UNLOCK();
      }
      local_40 = (longlong *)FUN_1404a9830(&local_18);
      local_48 = local_40 + 2;
      SharedPointerInternals::EnableSharedFromThis(&local_48,local_48,local_48);
      FUN_1406c30a0(&local_48,local_38,1);
      plVar3 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_40)(local_40);
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
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar4 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
      plVar4 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_30 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
    }
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar4 = plStack_20 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plStack_20 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 140d83420 FUN_140d83420 body=472 status=ok
// SIG undefined FUN_140d83420(void)

longlong * FUN_140d83420(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong local_28;
  int local_20;
  undefined8 *local_18;
  longlong *local_10;
  
  if (param_2 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  if ((*(longlong **)(param_1 + 0x38) == (longlong *)0x0) ||
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))(), cVar5 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((bVar4) && (lVar6 = (**(code **)(*param_2 + 0x148))(param_2), lVar6 != 0)) {
    UWorld::GetPlayerControllerIterator(lVar6,&local_28);
    while( true ) {
      if ((local_20 < 0) || (*(int *)(local_28 + 8) <= local_20)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) break;
      plVar7 = (longlong *)FWeakObjectPtr::Get();
      if (plVar7 != (longlong *)0x0) {
        lVar6 = FUN_14145f370();
        if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          if (((*(uint *)((longlong)plVar7 + 0x4cc) >> 1 & 1) == 0) ||
             (cVar5 = (**(code **)(*plVar7 + 0x768))(), cVar5 == '\0')) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            FUN_142dcf3a0(plVar7,&local_18);
            if ((local_18 != (undefined8 *)0x0) &&
               (cVar5 = (**(code **)*local_18)(local_18,*(undefined8 *)(param_1 + 0x38)),
               cVar5 != '\0')) {
              if (local_10 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_10 + 1;
                lVar6 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar6 == 1) {
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
              return plVar7;
            }
            plVar7 = local_10;
            if (local_10 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_10 + 1;
              lVar6 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*local_10)();
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
      local_20 = local_20 + 1;
    }
    return (longlong *)0x0;
  }
  return (longlong *)0x0;
}



// FUNCTION 140d83600 FUN_140d83600 body=7 status=ok
// SIG undefined FUN_140d83600(void)

int FUN_140d83600(longlong param_1)

{
  return *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x20);
}



// FUNCTION 140d83670 FUN_140d83670 body=985 status=ok
// SIG undefined FUN_140d83670(void)

void FUN_140d83670(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  void *_Src;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined2 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint *puVar14;
  int iVar15;
  bool bVar16;
  longlong lVar17;
  undefined2 *local_e0;
  int local_d8;
  undefined4 local_d4;
  int local_d0;
  uint uStack_cc;
  uint *puStack_c8;
  undefined4 local_c0;
  uint uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  uint uStack_98;
  uint uStack_94;
  undefined8 uStack_90;
  int local_88;
  ulonglong local_80;
  uint *local_78;
  longlong *local_70;
  longlong *local_68;
  int iStack_60;
  uint uStack_5c;
  uint *local_58;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  
  local_70 = (longlong *)(param_1 + 0x140);
  puStack_c8 = (uint *)(param_1 + 0x150);
  bVar16 = false;
  uVar2 = *(uint *)(param_1 + 0x168);
  local_d0 = 0;
  uStack_cc = 1;
  uStack_bc = 0;
  iStack_b8 = 0;
  if (uVar2 != 0) {
    puVar14 = *(uint **)(param_1 + 0x160);
    if (*(uint **)(param_1 + 0x160) == (uint *)0x0) {
      puVar14 = puStack_c8;
    }
    uVar3 = *puVar14;
    iStack_b8 = 0;
    local_d0 = 0;
    while (uVar3 == 0) {
      lVar9 = (longlong)local_d0;
      iStack_b8 = iStack_b8 + 0x20;
      iVar15 = local_d0 + 1;
      bVar5 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_d0;
      local_d0 = iVar15;
      if (bVar5) goto LAB_140d8375e;
      uVar3 = puVar14[lVar9 + 1];
    }
    uStack_cc = -uVar3 & uVar3;
    iVar15 = 0x1f;
    if (uStack_cc != 0) {
      for (; uStack_cc >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uStack_cc == 0) {
      iVar15 = 0x20;
    }
    else {
      iVar15 = 0x1f - iVar15;
    }
    uStack_bc = (iStack_b8 - iVar15) + 0x1f;
    if ((int)uVar2 < (int)uStack_bc) {
LAB_140d8375e:
      uStack_bc = uVar2;
    }
  }
  local_c0 = 0xffffffff;
  uVar3 = *(uint *)(param_1 + 0x168);
  uStack_a8 = CONCAT44(uStack_cc,local_d0);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_bc;
  uStack_90 = CONCAT44(uStack_b4,iStack_b8);
  local_b0 = (int)uVar3 >> 5;
  uStack_ac = (undefined4)((ulonglong)local_70 >> 0x20);
  uVar11 = -1 << ((byte)uVar3 & 0x1f);
  uStack_98 = uVar3 & 0xffffffe0;
  uStack_a0 = CONCAT44(uVar3,uVar11);
  uStack_94 = uStack_bc;
  iStack_60 = local_d0;
  uStack_5c = uStack_cc;
  if (uVar3 != uVar2) {
    puVar14 = *(uint **)(param_1 + 0x160);
    if (*(uint **)(param_1 + 0x160) == (uint *)0x0) {
      puVar14 = puStack_c8;
    }
    uVar11 = puVar14[local_b0] & uVar11;
    while (uVar11 == 0) {
      lVar9 = (longlong)local_b0;
      uStack_98 = uStack_98 + 0x20;
      iVar15 = local_b0 + 1;
      bVar5 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_b0;
      local_b0 = iVar15;
      if (bVar5) goto LAB_140d8383c;
      uVar11 = puVar14[lVar9 + 1];
      uStack_a0 = 0xffffffff;
    }
    uVar11 = -uVar11 & uVar11;
    local_88 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> local_88 == 0; local_88 = local_88 + -1) {
      }
    }
    if (uVar11 == 0) {
      iVar15 = 0x20;
    }
    else {
      iVar15 = 0x1f - local_88;
    }
    iVar15 = (uStack_98 - iVar15) + 0x1f;
    uStack_a0 = CONCAT44(iVar15,(undefined4)uStack_a0);
    if ((int)uVar2 < iVar15) {
LAB_140d8383c:
      uStack_a0 = CONCAT44(uVar2,(undefined4)uStack_a0);
    }
  }
  local_80 = uStack_a0 >> 0x20;
  local_78 = puStack_c8;
  local_58 = puStack_c8;
  local_48 = uStack_90;
  local_68 = local_70;
  do {
    if (((uStack_4c == (uint)local_80) && (local_58 == local_78)) && (local_68 == local_70)) {
      FUN_140d76760(param_1,param_2,param_4);
      return;
    }
    plVar4 = *(longlong **)((longlong)(int)uStack_4c * 0x40 + 0x30 + *local_68);
    lVar9 = *(longlong *)((longlong)(int)uStack_4c * 0x40 + 0x28 + *local_68);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (lVar9 != 0) {
      local_d8 = *(int *)(lVar9 + 0x50);
      lVar17 = (longlong)local_d8;
      _Src = *(void **)(lVar9 + 0x48);
      bVar16 = true;
      local_e0 = (undefined2 *)0x0;
      if (local_d8 == 0) {
        local_d4 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e0,local_d8,0);
        _guard_xfg_dispatch_icall_nop(local_e0,_Src,lVar17 * 2);
      }
      iVar15 = local_d8;
      puVar13 = (undefined8 *)*param_3;
      puVar12 = puVar13 + (longlong)*(int *)(param_3 + 1) * 2;
      for (; puVar13 != puVar12; puVar13 = puVar13 + 2) {
        puVar10 = &DAT_143f3eda8;
        if (iVar15 != 0) {
          puVar10 = local_e0;
        }
        if (*(int *)(puVar13 + 1) == 0) {
          puVar8 = &DAT_143f3eda8;
        }
        else {
          puVar8 = (undefined2 *)*puVar13;
        }
        iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar10);
        if (iVar6 == 0) {
          bVar5 = true;
          goto LAB_140d8392b;
        }
      }
    }
    bVar5 = false;
LAB_140d8392b:
    if ((bVar16) && (bVar16 = false, local_e0 != (undefined2 *)0x0)) {
      FMemory::Free();
    }
    if (bVar5) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      iVar15 = (int)param_4[1];
      *(int *)(param_4 + 1) = iVar15 + 1;
      if (*(int *)((longlong)param_4 + 0xc) < iVar15 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_4,iVar15);
      }
      plVar7 = (longlong *)((longlong)iVar15 * 0x10 + *param_4);
      *plVar7 = lVar9;
      plVar7[1] = (longlong)plVar4;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        plVar7 = plVar4 + 1;
        lVar9 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar15 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
        goto LAB_140d839bc;
      }
    }
    else {
LAB_140d839bc:
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar4 + 1;
        lVar9 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar15 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  } while( true );
}



// FUNCTION 140d83a50 FUN_140d83a50 body=174 status=ok
// SIG undefined FUN_140d83a50(void)

void FUN_140d83a50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *local_18;
  undefined8 local_10;
  
  local_10 = 1;
  local_18 = (longlong *)0x0;
  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_18,0);
  plVar1 = local_18;
  FString::FString(local_18,param_3);
  FUN_140d83670(param_1,param_2,&local_18,param_4);
  plVar2 = plVar1;
  for (iVar3 = (int)local_10; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 140d83b00 FUN_140d83b00 body=1010 status=ok
// SIG undefined FUN_140d83b00(void)

void FUN_140d83b00(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int iVar13;
  uint uVar14;
  longlong *plVar15;
  int iVar16;
  ulonglong local_res8;
  undefined8 in_stack_ffffffffffffff08;
  longlong *local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [8];
  longlong *local_d0;
  int local_c8;
  undefined4 uStack_c4;
  undefined **local_c0;
  undefined8 *local_b8;
  undefined4 local_ac;
  longlong local_a8;
  longlong *local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78 [2];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [16];
  
  iVar13 = *(int *)(param_1 + 0x30) * *(int *)(param_1 + 0x34);
  if ((iVar13 < 0) || (*(int *)(param_1 + 0x28) <= iVar13)) {
    *(undefined1 *)(param_1 + 0x58) = 1;
    uVar9 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_58);
    TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x60,uVar9);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_50 + 1;
      lVar6 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
          return;
        }
      }
    }
  }
  else {
    plVar12 = (longlong *)0x0;
    iVar5 = 0;
    lVar6 = FUN_142b45e90();
    plVar7 = (longlong *)FUN_142b4a990(*(undefined8 *)(lVar6 + 0x18),local_98,param_1 + 0x10);
    plVar15 = (longlong *)(param_1 + 0x38);
    if (plVar15 != plVar7) {
      *plVar15 = *plVar7;
      *plVar7 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x40,plVar7 + 1);
    }
    iVar16 = -1;
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_90 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    if ((*plVar15 != 0) && (cVar4 = FUN_142b54900(), cVar4 != '\0')) {
      FUN_142b45fe0(*plVar15,&local_a8);
      if (local_a8 != 0) {
        uVar10 = *(int *)(param_1 + 0x28) - iVar13;
        local_e8 = (longlong *)0x0;
        if (*(int *)(param_1 + 0x34) <= (int)uVar10) {
          uVar10 = *(uint *)(param_1 + 0x34);
        }
        local_res8 = (ulonglong)uVar10;
        local_e0 = 0;
        plVar15 = plVar12;
        if (0 < (int)uVar10) {
          local_e0._4_4_ = 0;
          lVar6 = (longlong)iVar13 << 4;
          iVar13 = local_e0._4_4_;
          do {
            lVar3 = *(longlong *)(param_1 + 0x20);
            iVar5 = (int)plVar15;
            uVar10 = iVar5 + 1;
            local_e0 = CONCAT44(local_e0._4_4_,uVar10);
            if (iVar13 < (int)uVar10) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_e8,plVar15);
              plVar12 = local_e8;
              iVar13 = local_e0._4_4_;
              uVar10 = (uint)local_e0;
            }
            plVar15 = (longlong *)(ulonglong)uVar10;
            FString::FString(plVar12 + (longlong)iVar5 * 2,lVar3 + lVar6);
            lVar6 = lVar6 + 0x10;
            local_res8 = local_res8 - 1;
          } while (local_res8 != 0);
        }
        iVar16 = -1;
        FTickAnimationPlayers::FTickAnimationPlayers(local_d8);
        uVar10 = (uint)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
        plVar7 = local_d0;
        for (iVar13 = local_c8; iVar13 != 0; iVar13 = iVar13 + -1) {
          if (*plVar7 != 0) {
            FMemory::Free();
          }
          uVar10 = (uint)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
          plVar7 = plVar7 + 2;
        }
        uVar14 = (uint)plVar15;
        TArray<FString,FDefaultAllocator>::CopyToEmpty<FString>
                  (&local_d0,plVar12,plVar15,uStack_c4,(ulonglong)uVar10 << 0x20);
        local_c0 = &PTR_FUN_144530c38;
        local_b8 = (undefined8 *)0x0;
        local_88 = 0;
        uStack_80 = 0;
        if (local_c8 == 0) {
          local_ac = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_b8,local_c8,0);
          puVar11 = local_b8;
          do {
            iVar16 = local_c8;
            *puVar11 = 0;
            iVar13 = (int)local_d0[1];
            _Src = (void *)*local_d0;
            *(int *)(puVar11 + 1) = iVar13;
            if (iVar13 == 0) {
              *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar11,iVar13,0);
              _guard_xfg_dispatch_icall_nop((void *)*puVar11,_Src,(longlong)iVar13 * 2);
            }
            puVar11 = puVar11 + 2;
            local_d0 = local_d0 + 2;
            local_c8 = iVar16 + -1;
          } while (local_c8 != 0);
          iVar16 = iVar16 + -2;
        }
        uVar9 = *(undefined8 *)(param_1 + 0x38);
        uVar8 = FUN_140531690(local_48,param_1,FUN_140d8f400);
        uVar9 = FUN_142b46360(uVar9,local_78);
        iVar5 = FUN_142ad4e80(local_a8,uVar9,&local_c0,uVar8,&local_88);
        if (local_78[0] != 0) {
          FMemory::Free();
        }
        FUN_142b0f4f0(local_d8);
        plVar7 = local_e8;
        plVar12 = local_e8;
        while (uVar14 != 0) {
          if (*plVar12 != 0) {
            FMemory::Free();
          }
          plVar12 = plVar12 + 2;
          uVar14 = (int)plVar15 - 1;
          plVar15 = (longlong *)(ulonglong)uVar14;
        }
        if (plVar7 != (longlong *)0x0) {
          FMemory::Free(plVar7);
        }
      }
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_a0 + 1;
        lVar6 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + iVar16;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)local_a0 + 0xc);
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + iVar16;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*local_a0 + 8))(local_a0,1);
          }
        }
      }
      if (0 < iVar5) {
        return;
      }
    }
    uVar9 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_68);
    TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x60,uVar9);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_60 + 1;
      lVar6 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + iVar16;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + iVar16;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140d83f00 FUN_140d83f00 body=288 status=ok
// SIG undefined FUN_140d83f00(void)

uint FUN_140d83f00(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  uVar6 = 0;
  if (*(longlong *)(param_1 + 8) == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xae8);
  if (lVar1 == 0) {
    return 0;
  }
  plVar8 = *(longlong **)(param_1 + 0x30);
  uVar9 = (longlong)*(int *)(param_1 + 0x38) & 0x1fffffffffffffff;
  if (plVar8 + *(int *)(param_1 + 0x38) < plVar8) {
    uVar9 = uVar6;
  }
  if (uVar9 == 0) {
    return 0;
  }
  uVar7 = uVar6;
  do {
    for (plVar4 = *(longlong **)(lVar1 + 0x238);
        plVar4 != *(longlong **)(lVar1 + 0x238) + *(int *)(lVar1 + 0x240); plVar4 = plVar4 + 1) {
      lVar2 = *plVar4;
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xc0) == *plVar8)) goto LAB_140d83fce;
    }
    plVar5 = *(longlong **)(lVar1 + 0x248);
    plVar4 = plVar5 + *(int *)(lVar1 + 0x250);
    for (; plVar5 != plVar4; plVar5 = plVar5 + 1) {
      lVar2 = *plVar5;
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xc0) == *plVar8)) goto LAB_140d83fce;
    }
    lVar2 = 0;
LAB_140d83fce:
    uVar3 = (uint)uVar7 + 1;
    if (lVar2 == 0) {
      uVar3 = (uint)uVar7;
    }
    plVar8 = plVar8 + 1;
    uVar6 = uVar6 + 1;
    uVar7 = (ulonglong)uVar3;
    if (uVar6 == uVar9) {
      return uVar3;
    }
  } while( true );
}



// FUNCTION 140d84020 FUN_140d84020 body=4 status=ok
// SIG undefined FUN_140d84020(void)

undefined4 FUN_140d84020(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}



// FUNCTION 140d84030 FUN_140d84030 body=50 status=ok
// SIG undefined FUN_140d84030(void)

ulonglong FUN_140d84030(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 local_18;
  ulonglong local_10;
  
  local_18 = 0;
  local_10 = 0;
  FUN_140d82330(param_1,param_2,&local_18);
  uVar1 = local_10;
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_18);
  return uVar1 & 0xffffffff;
}



// FUNCTION 140d84070 FUN_140d84070 body=154 status=ok
// SIG undefined FUN_140d84070(void)

ulonglong FUN_140d84070(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined4 *local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_20 = 1;
  local_28 = (undefined4 *)0x0;
  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_28,0);
  puVar1 = local_28;
  local_18 = 0;
  local_10 = 0;
  *local_28 = param_3;
  FUN_140d82910(param_1,param_2,&local_28,&local_18);
  uVar2 = local_10;
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_18);
  if (puVar1 != (undefined4 *)0x0) {
    FMemory::Free(puVar1);
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 140d84110 FUN_140d84110 body=745 status=ok
// SIG undefined FUN_140d84110(void)

longlong * FUN_140d84110(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  void *_Dst;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  int local_res8;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong local_88;
  longlong *plStack_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 *local_58;
  longlong *local_50;
  longlong local_48;
  longlong *plStack_40;
  
  plVar3 = *(longlong **)(param_3 + 0x10);
  local_68 = *(undefined8 *)(param_3 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_60 = plVar3;
  FUN_140549810(param_1 + 0x1c0);
  plVar6 = (longlong *)0x0;
  if (local_res8 != -1) {
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0x1c0) + (longlong)local_res8 * 0x28);
  }
  plVar7 = plVar6 + 2;
  if (plVar6 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
    }
  }
  if (plVar7 == (longlong *)0x0) {
    _Dst = (void *)operator_new(0x248);
    if (_Dst == (void *)0x0) {
      local_88 = 0;
    }
    else {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x248);
      local_88 = FUN_140d63d70(_Dst);
    }
    plStack_80 = (longlong *)operator_new(0x18);
    if (plStack_80 != (longlong *)0x0) {
      *(undefined4 *)(plStack_80 + 1) = 1;
      *plStack_80 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)plStack_80 + 0xc) = 1;
      plStack_80[2] = local_88;
    }
    SharedPointerInternals::EnableSharedFromThis(&local_88,local_88,local_88);
    plVar3 = plStack_80;
    if (local_88 != 0) {
      FUN_1404c0940(local_88 + 8,param_3);
      FUN_140d88d60(local_88 + 0x38,param_3,*(undefined8 *)(param_1 + 0x10));
      lVar4 = local_88;
      puVar5 = (undefined8 *)FDateTime::UtcNow(local_res20);
      *(undefined8 *)(lVar4 + 0x30) = *puVar5;
      local_48 = local_88;
      plStack_40 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
        UNLOCK();
      }
      local_78 = *(undefined8 *)(param_3 + 8);
      local_70 = *(longlong **)(param_3 + 0x10);
      if (local_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_70 + 1) = (int)local_70[1] + 1;
        UNLOCK();
      }
      local_58 = &local_78;
      local_50 = &local_48;
      FUN_140532370(param_1 + 0x1c0,local_res18,&local_58,0);
      plVar3 = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_70 + 1;
        lVar4 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_70)(local_70);
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
      plVar3 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        plVar6 = plStack_40 + 1;
        lVar4 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_40)(plStack_40);
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
      plVar3 = plStack_80;
      *param_2 = local_88;
      param_2[1] = (longlong)plStack_80;
      if (plStack_80 == (longlong *)0x0) {
        return param_2;
      }
      LOCK();
      *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
      UNLOCK();
      if (plStack_80 == (longlong *)0x0) {
        return param_2;
      }
      LOCK();
      plVar6 = plStack_80 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 != 1) {
        return param_2;
      }
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 != 1) {
        return param_2;
      }
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return param_2;
    }
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar6 = plStack_80 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_80)(plStack_80);
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
  *param_2 = *plVar7;
  lVar4 = plVar7[1];
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 140d84400 FUN_140d84400 body=177 status=ok
// SIG undefined FUN_140d84400(void)

longlong * FUN_140d84400(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int local_res8 [2];
  longlong local_res10;
  longlong *local_res18 [2];
  
  plVar1 = (longlong *)(param_1 + 0x120);
  if (*(int *)(param_1 + 0x128) != *(int *)(param_1 + 0x154)) {
    lVar3 = *(longlong *)(param_1 + 0x160);
    if (*(longlong *)(param_1 + 0x160) == 0) {
      lVar3 = param_1 + 0x158;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x168) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        plVar4 = (longlong *)((longlong)iVar2 * 0x20 + *plVar1);
        if (*plVar4 == param_2) {
          if ((iVar2 != -1) && (plVar4 != (longlong *)0x0)) {
            return plVar4 + 1;
          }
          break;
        }
        iVar2 = (int)plVar4[3];
      } while (iVar2 != -1);
    }
  }
  local_res18[0] = &local_res10;
  local_res10 = param_2;
  FUN_140d5dc30(plVar1,local_res8,local_res18,0);
  return (longlong *)((longlong)local_res8[0] * 0x20 + 8 + *plVar1);
}



// FUNCTION 140d844c0 GetRelativeAnchorWidget body=27 status=ok
// SIG undefined GetRelativeAnchorWidget(void)

undefined8 * FToolTipLayout::GetRelativeAnchorWidget(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = *param_1;
  lVar1 = param_1[1];
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 140d844e0 FUN_140d844e0 body=114 status=ok
// SIG undefined FUN_140d844e0(void)

ulonglong FUN_140d844e0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 0x38);
  iVar1 = *(int *)(param_1 + 0x40);
  puVar4 = puVar2;
  while( true ) {
    if (puVar4 == puVar2 + (longlong)iVar1 * 2) {
      return 0xffffffff;
    }
    cVar3 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,*(undefined8 *)*puVar4);
    if (cVar3 != '\0') break;
    puVar4 = puVar4 + 2;
  }
  return (longlong)puVar4 - (longlong)puVar2 >> 4 & 0xffffffff;
}



// FUNCTION 140d84560 FUN_140d84560 body=188 status=ok
// SIG undefined FUN_140d84560(void)

undefined8 FUN_140d84560(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong local_18;
  longlong *local_10;
  
  if ((*param_2 != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
    uVar5 = (**(code **)(*(longlong *)*param_1 + 0x148))();
    lVar6 = FUN_140d3a420(uVar5);
    if (lVar6 != 0) {
      local_18 = *param_2;
      local_10 = (longlong *)param_2[1];
      if (local_10 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_10 + 1) = (int)local_10[1] + 1;
        UNLOCK();
      }
      uVar5 = FUN_140d3a750(lVar6,&local_18);
      plVar4 = local_10;
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_10 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_10)(local_10);
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
      return uVar5;
    }
  }
  return 0;
}



// FUNCTION 140d84620 FUN_140d84620 body=220 status=ok
// SIG undefined FUN_140d84620(void)

undefined8 * FUN_140d84620(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 local_28 [8];
  longlong *local_20;
  
  puVar10 = *(undefined8 **)(param_1 + 0x38);
  puVar9 = puVar10 + (longlong)*(int *)(param_1 + 0x40) * 2;
  while( true ) {
    if (puVar10 == puVar9) {
      *param_2 = 0;
      param_2[1] = 0;
      return param_2;
    }
    puVar4 = (undefined8 *)*param_3;
    puVar8 = (undefined8 *)(**(code **)(*(longlong *)*puVar10 + 8))((longlong *)*puVar10,local_28);
    cVar7 = (**(code **)*puVar4)(puVar4,*puVar8);
    plVar6 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_20)(local_20);
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
    if (cVar7 != '\0') break;
    puVar10 = puVar10 + 2;
  }
  *param_2 = *puVar10;
  lVar5 = puVar10[1];
  param_2[1] = lVar5;
  if (lVar5 == 0) {
    return param_2;
  }
  LOCK();
  *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
  UNLOCK();
  return param_2;
}



// FUNCTION 140d84700 FUN_140d84700 body=181 status=ok
// SIG undefined FUN_140d84700(void)

longlong * FUN_140d84700(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar5 = *(longlong **)(param_1 + 0x48);
  plVar8 = (longlong *)0x0;
  plVar7 = plVar5 + (longlong)*(int *)(param_1 + 0x50) * 2;
  do {
    plVar6 = plVar8;
    if (plVar5 == plVar7) {
LAB_140d8474f:
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar6 + 1;
        lVar3 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
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
      return plVar8;
    }
    cVar4 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,*(undefined8 *)*plVar5);
    if (cVar4 != '\0') {
      lVar3 = *plVar5;
      plVar6 = (longlong *)plVar5[1];
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      if (lVar3 != 0) {
        plVar8 = (longlong *)(ulonglong)*(uint *)(lVar3 + 0x10);
      }
      goto LAB_140d8474f;
    }
    plVar5 = plVar5 + 2;
  } while( true );
}



// FUNCTION 140d847c0 FUN_140d847c0 body=135 status=ok
// SIG undefined FUN_140d847c0(void)

undefined8 * FUN_140d847c0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 0x48);
  puVar4 = puVar3 + (longlong)*(int *)(param_1 + 0x50) * 2;
  while( true ) {
    if (puVar3 == puVar4) {
      *param_2 = 0;
      param_2[1] = 0;
      return param_2;
    }
    cVar2 = (*(code *)**(undefined8 **)*param_3)((undefined8 *)*param_3,*(undefined8 *)*puVar3);
    if (cVar2 != '\0') break;
    puVar3 = puVar3 + 2;
  }
  *param_2 = *puVar3;
  lVar1 = puVar3[1];
  param_2[1] = lVar1;
  if (lVar1 == 0) {
    return param_2;
  }
  LOCK();
  *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  UNLOCK();
  return param_2;
}



// FUNCTION 140d84850 FUN_140d84850 body=177 status=ok
// SIG undefined FUN_140d84850(void)

longlong * FUN_140d84850(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int local_res8 [2];
  longlong local_res10;
  longlong *local_res18 [2];
  
  plVar1 = (longlong *)(param_1 + 0x170);
  if (*(int *)(param_1 + 0x178) != *(int *)(param_1 + 0x1a4)) {
    lVar3 = *(longlong *)(param_1 + 0x1b0);
    if (*(longlong *)(param_1 + 0x1b0) == 0) {
      lVar3 = param_1 + 0x1a8;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x1b8) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        plVar4 = (longlong *)((longlong)iVar2 * 0x20 + *plVar1);
        if (*plVar4 == param_2) {
          if ((iVar2 != -1) && (plVar4 != (longlong *)0x0)) {
            return plVar4 + 1;
          }
          break;
        }
        iVar2 = (int)plVar4[3];
      } while (iVar2 != -1);
    }
  }
  local_res18[0] = &local_res10;
  local_res10 = param_2;
  FUN_140d5dc30(plVar1,local_res8,local_res18,0);
  return (longlong *)((longlong)local_res8[0] * 0x20 + 8 + *plVar1);
}



// FUNCTION 140d84910 FUN_140d84910 body=79 status=ok
// SIG undefined FUN_140d84910(void)

void FUN_140d84910(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x18) == 2) {
    iVar1 = *(int *)(param_1 + 0x54);
    if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x38))) {
      lVar2 = (longlong)iVar1 * 0xc0 + *(longlong *)(param_1 + 0x30);
      FUN_1404c0750(param_2,lVar2);
      *(undefined4 *)(param_2 + 0xb8) = *(undefined4 *)(lVar2 + 0xb8);
    }
  }
  return;
}



// FUNCTION 140d84960 FUN_140d84960 body=214 status=ok
// SIG undefined FUN_140d84960(void)

undefined8 * FUN_140d84960(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 local_28 [16];
  
  plVar2 = (longlong *)*param_3;
  plVar1 = (longlong *)FName::FName(local_res20,L"SPARK",1);
  plVar2 = (longlong *)(**(code **)(*plVar2 + 8))(plVar2,local_28);
  if (*plVar2 == *plVar1) {
    *param_2 = *param_3;
    lVar3 = param_3[1];
  }
  else {
    FUN_140549810(param_1 + 0x120,local_res18,param_3);
    puVar5 = (undefined8 *)0x0;
    if (local_res18[0] != -1) {
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x120) + (longlong)local_res18[0] * 0x28);
    }
    puVar4 = puVar5 + 2;
    if (puVar5 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    if (puVar4 == (undefined8 *)0x0) {
      *param_2 = 0;
      param_2[1] = 0;
      return param_2;
    }
    *param_2 = *puVar4;
    lVar3 = puVar4[1];
  }
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 140d84a40 FUN_140d84a40 body=86 status=ok
// SIG undefined FUN_140d84a40(void)

int FUN_140d84a40(longlong param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x38);
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    piVar3 = (int *)(param_1 + 8);
  }
  piVar2 = piVar3;
  while( true ) {
    if (piVar2 == piVar3 + (longlong)*(int *)(param_1 + 0x40) * 4) {
      return 0;
    }
    if (*piVar2 == param_2) break;
    piVar2 = piVar2 + 4;
  }
  if (piVar2 == piVar3 + (longlong)*(int *)(param_1 + 0x40) * 4) {
    return 0;
  }
  iVar1 = (int)((longlong)piVar2 - (longlong)piVar3 >> 4);
  if (iVar1 < 0) {
    return 0;
  }
  return piVar3[(longlong)iVar1 * 4 + 1];
}



// FUNCTION 140d84aa0 FUN_140d84aa0 body=281 status=ok
// SIG undefined FUN_140d84aa0(void)

wchar_t * FUN_140d84aa0(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    return L"Request";
  case 2:
    return L"FullFriendPresenceInfo";
  case 3:
    return L"FullFriendLoadOutInfo";
  case 4:
    return L"FullFriendSkillTreeInfo";
  case 5:
    return L"FullFriendCrewQuarterInfo";
  case 6:
    return L"FullFriendChallengeInfo";
  case 7:
    return L"LevelUp";
  case 8:
    return L"MapChange";
  case 9:
    return L"SessionIdChange";
  case 10:
    return L"PartyPlayerCountChange";
  case 0xb:
    return L"PlayerClassChange";
  case 0xc:
    return L"MissionChange";
  case 0xd:
    return L"LocationChange";
  case 0xe:
    return L"CanJoinChange";
  case 0xf:
    return L"LookingForHelpChange";
  case 0x10:
    return L"FriendActivityStatusChange";
  case 0x11:
    return L"Weapon1Change";
  case 0x12:
    return L"Weapon2Change";
  case 0x13:
    return L"Weapon3Change";
  case 0x14:
    return L"Weapon4Change";
  case 0x15:
    return L"GrenadeChange";
  case 0x16:
    return L"ShieldChange";
  case 0x17:
    return L"ClassItemChange";
  case 0x18:
    return L"ArtifactChange";
  case 0x19:
    return L"HeadChange";
  case 0x1a:
    return L"BodyChange";
  case 0x1b:
    return L"SkinChange";
  case 0x1c:
    return L"EmoteChange";
  case 0x1d:
    return L"GuardianRankChange";
  case 0x1e:
    return L"TimePlayedChange";
  default:
    return L"UnknownMessageType";
  }
}



// FUNCTION 140d84c40 FUN_140d84c40 body=641 status=ok
// SIG undefined FUN_140d84c40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140d84c40(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *local_38;
  int local_30;
  longlong *local_28;
  int local_20;
  
  if ((DAT_14686ed28 == '\0') && (puVar2 = (undefined8 *)FUN_140d78bc0(), puVar2 != &DAT_14686ed10))
  {
    DAT_14686ed10._0_4_ = *(undefined4 *)puVar2;
    DAT_14686ed10._4_4_ = *(undefined4 *)((longlong)puVar2 + 4);
    uRam000000014686ed18 = *(undefined4 *)(puVar2 + 1);
    uRam000000014686ed1c = *(undefined4 *)((longlong)puVar2 + 0xc);
    _DAT_14686ed20 = puVar2[2];
    DAT_14686ed28 = '\x01';
  }
  lVar3 = FUN_14218c3f0(L"FriendEvents",CONCAT44(DAT_14686ed10._4_4_,(undefined4)DAT_14686ed10));
  if (*(longlong *)(lVar3 + 0x70) != 0) {
    return lVar3;
  }
  plVar4 = (longlong *)operator_new(0xe8);
  plVar7 = (longlong *)0x0;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = lVar3;
    *(longlong **)(lVar3 + 0x70) = plVar4;
    FUN_14217bd20(plVar4 + 1);
    FUN_14217bd20(plVar4 + 2);
    plVar5 = plVar4 + 3;
    lVar6 = 0x1a;
    do {
      FUN_14217bd20(plVar5);
      plVar5 = plVar5 + 1;
      lVar6 = lVar6 + -1;
      plVar7 = plVar4;
    } while (lVar6 != 0);
  }
  if ((DAT_14686ed28 == '\0') && (puVar2 = (undefined8 *)FUN_140d78bc0(), puVar2 != &DAT_14686ed10))
  {
    DAT_14686ed10._0_4_ = *(undefined4 *)puVar2;
    DAT_14686ed10._4_4_ = *(undefined4 *)((longlong)puVar2 + 4);
    uRam000000014686ed18 = *(undefined4 *)(puVar2 + 1);
    uRam000000014686ed1c = *(undefined4 *)((longlong)puVar2 + 0xc);
    _DAT_14686ed20 = puVar2[2];
    DAT_14686ed28 = '\x01';
  }
  uVar1 = CONCAT44(DAT_14686ed10._4_4_,(undefined4)DAT_14686ed10);
  local_28 = (longlong *)0x0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)IDelegateInstance::vftable;
    *plVar4 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar4[2] = (longlong)FUN_140d86090;
    plVar4[1] = (longlong)plVar7;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar6;
  }
  local_38 = (longlong *)0x0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  local_30 = 3;
  local_38 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)IDelegateInstance::vftable;
    *plVar4 = (longlong)&DAT_143f3ed00;
    plVar4[2] = (longlong)&LAB_140d86080;
    plVar4[1] = (longlong)plVar7;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar6;
    *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  FUN_1421872f0(L"FriendEvents",uVar1,&local_38,&local_28);
  if (local_30 != 0) {
    if (local_38 == (longlong *)0x0) goto LAB_140d84e65;
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
LAB_140d84e65:
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return lVar3;
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
  return lVar3;
}



// FUNCTION 140d84ed0 FUN_140d84ed0 body=378 status=ok
// SIG undefined FUN_140d84ed0(void)

void FUN_140d84ed0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint local_res18 [2];
  longlong *local_28;
  longlong *plStack_20;
  longlong *local_18;
  longlong *plStack_10;
  
  plVar6 = (longlong *)param_3[1];
  if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
    (**(code **)(*param_3 + 0x50))(param_3,local_res18,4);
    if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_3,local_res18,4);
    }
  }
  else {
    local_res18[0] = *(uint *)*plVar6;
    *plVar6 = *plVar6 + 4;
  }
  uVar4 = local_res18[0];
  FUN_140d7de20(param_1,&local_28,local_res18[0] & 0xff);
  plVar6 = plStack_20;
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x20))(local_28,param_3);
    plVar6 = plStack_20;
    local_18 = local_28;
    plStack_10 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
      UNLOCK();
    }
    FUN_140d92c70(param_1,&local_18,uVar4 & 0xff,0);
    plVar5 = plStack_20;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar6 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      plVar6 = plStack_20;
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        plVar6 = plStack_20;
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
          TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x120);
          goto LAB_140d85000;
        }
      }
    }
    TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x120);
  }
LAB_140d85000:
  plVar5 = plStack_20;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar6 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_20 + 8))(plStack_20,1);
      }
    }
  }
  return;
}



// FUNCTION 140d85050 FUN_140d85050 body=67 status=ok
// SIG undefined FUN_140d85050(void)

undefined1 FUN_140d85050(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  if (param_3 == 0x22) {
    TBaseMulticastDelegate<void,FUniqueNetId_const_&,FUniqueNetId_const_&>::Broadcast
              (param_1 + 0x168,param_2,param_4);
    return 1;
  }
  if (param_3 != 0x23) {
    return 0;
  }
  TBaseMulticastDelegate<void,FUniqueNetId_const_&,FUniqueNetId_const_&>::Broadcast
            (param_1 + 0x180,param_2,param_4);
  return 1;
}



// FUNCTION 140d850a0 FUN_140d850a0 body=725 status=ok
// SIG undefined FUN_140d850a0(void)

void FUN_140d850a0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined **local_78;
  undefined8 local_70;
  longlong *local_68;
  longlong local_60;
  undefined8 local_58;
  undefined **local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong local_38;
  undefined8 local_30;
  
  lVar7 = FUN_140d82cf0();
  if (lVar7 != 0) {
    uVar8 = FUN_140d82cf0(param_1);
    thunk_FUN_1404d2ae0(uVar8);
  }
  uVar14 = 0;
  if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(*(longlong *)(param_1 + 8) + 0xae8) != 0))
  {
    plVar13 = *(longlong **)(param_1 + 0x30);
    uVar10 = (longlong)*(int *)(param_1 + 0x38) & 0x1fffffffffffffff;
    if (plVar13 + *(int *)(param_1 + 0x38) < plVar13) {
      uVar10 = uVar14;
    }
    if (uVar10 != 0) {
      do {
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xae8);
        plVar12 = *(longlong **)(lVar7 + 0x238);
        plVar2 = plVar12 + *(int *)(lVar7 + 0x240);
        for (; plVar12 != plVar2; plVar12 = plVar12 + 1) {
          lVar11 = *plVar12;
          if ((lVar11 != 0) && (*(longlong *)(lVar11 + 0xc0) == *plVar13)) goto LAB_140d851b3;
        }
        plVar12 = *(longlong **)(lVar7 + 0x248);
        plVar2 = plVar12 + *(int *)(lVar7 + 0x250);
        for (; plVar12 != plVar2; plVar12 = plVar12 + 1) {
          lVar11 = *plVar12;
          if ((lVar11 != 0) && (*(longlong *)(lVar11 + 0xc0) == *plVar13)) goto LAB_140d851b3;
        }
        lVar11 = 0;
LAB_140d851b3:
        if (lVar11 != 0) {
          local_70 = *param_2;
          local_68 = (longlong *)param_2[1];
          if (local_68 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_68 + 1) = (int)local_68[1] + 1;
            UNLOCK();
          }
          local_78 = &PTR_FUN_143f740c8;
          local_60 = 0;
          local_58 = 0;
          FUN_1404df4b0(lVar11,&local_78);
          local_78 = &PTR_FUN_143f740c8;
          if (local_60 != 0) {
            FMemory::Free();
          }
          plVar2 = local_68;
          local_78 = &PTR_FUN_143f73d18;
          if (local_68 != (longlong *)0x0) {
            LOCK();
            plVar12 = local_68 + 1;
            lVar7 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_68)(local_68);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar2 + 8))(plVar2,1);
              }
            }
          }
        }
        plVar13 = plVar13 + 1;
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar10);
    }
  }
  local_48 = *param_2;
  local_40 = (longlong *)param_2[1];
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  local_50 = &PTR_FUN_143f740c8;
  *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 1;
  bVar4 = false;
  iVar9 = *(int *)(param_1 + 0x11c);
  iVar6 = *(int *)(param_1 + 0x110) + -1;
  lVar7 = (longlong)iVar6;
  local_38 = 0;
  local_30 = 0;
  if (-1 < iVar6) {
    lVar11 = lVar7 << 4;
    bVar4 = false;
    do {
      lVar3 = *(longlong *)(param_1 + 0x108);
      if (((*(int *)(lVar11 + 8 + lVar3) == 0) ||
          (plVar13 = *(longlong **)(lVar11 + lVar3), plVar13 == (longlong *)0x0)) ||
         (cVar5 = (**(code **)(*plVar13 + 0x40))(plVar13,&local_50), cVar5 == '\0')) {
        bVar4 = true;
      }
      lVar11 = lVar11 + -0x10;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
    iVar9 = *(int *)(param_1 + 0x11c);
  }
  *(int *)(param_1 + 0x11c) = iVar9 + -1;
  if (bVar4) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x108),0);
  }
  local_50 = &PTR_FUN_143f740c8;
  if (local_38 != 0) {
    FMemory::Free(local_38);
  }
  plVar13 = local_40;
  local_50 = &PTR_FUN_143f73d18;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  return;
}



// FUNCTION 140d85380 FUN_140d85380 body=725 status=ok
// SIG undefined FUN_140d85380(void)

void FUN_140d85380(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined **local_78;
  undefined8 local_70;
  longlong *local_68;
  longlong local_60;
  undefined8 local_58;
  undefined **local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong local_38;
  undefined8 local_30;
  
  lVar7 = FUN_140d82cf0();
  if (lVar7 != 0) {
    uVar8 = FUN_140d82cf0(param_1);
    thunk_FUN_1404d2ae0(uVar8);
  }
  uVar14 = 0;
  if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(*(longlong *)(param_1 + 8) + 0xae8) != 0))
  {
    plVar13 = *(longlong **)(param_1 + 0x30);
    uVar10 = (longlong)*(int *)(param_1 + 0x38) & 0x1fffffffffffffff;
    if (plVar13 + *(int *)(param_1 + 0x38) < plVar13) {
      uVar10 = uVar14;
    }
    if (uVar10 != 0) {
      do {
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xae8);
        plVar12 = *(longlong **)(lVar7 + 0x238);
        plVar2 = plVar12 + *(int *)(lVar7 + 0x240);
        for (; plVar12 != plVar2; plVar12 = plVar12 + 1) {
          lVar11 = *plVar12;
          if ((lVar11 != 0) && (*(longlong *)(lVar11 + 0xc0) == *plVar13)) goto LAB_140d85493;
        }
        plVar12 = *(longlong **)(lVar7 + 0x248);
        plVar2 = plVar12 + *(int *)(lVar7 + 0x250);
        for (; plVar12 != plVar2; plVar12 = plVar12 + 1) {
          lVar11 = *plVar12;
          if ((lVar11 != 0) && (*(longlong *)(lVar11 + 0xc0) == *plVar13)) goto LAB_140d85493;
        }
        lVar11 = 0;
LAB_140d85493:
        if (lVar11 != 0) {
          local_70 = *param_2;
          local_68 = (longlong *)param_2[1];
          if (local_68 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_68 + 1) = (int)local_68[1] + 1;
            UNLOCK();
          }
          local_78 = &PTR_FUN_143f740c8;
          local_60 = 0;
          local_58 = 0;
          FUN_1404df4c0(lVar11,&local_78);
          local_78 = &PTR_FUN_143f740c8;
          if (local_60 != 0) {
            FMemory::Free();
          }
          plVar2 = local_68;
          local_78 = &PTR_FUN_143f73d18;
          if (local_68 != (longlong *)0x0) {
            LOCK();
            plVar12 = local_68 + 1;
            lVar7 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_68)(local_68);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar2 + 8))(plVar2,1);
              }
            }
          }
        }
        plVar13 = plVar13 + 1;
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar10);
    }
  }
  local_48 = *param_2;
  local_40 = (longlong *)param_2[1];
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  local_50 = &PTR_FUN_143f740c8;
  *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + 1;
  bVar4 = false;
  iVar9 = *(int *)(param_1 + 0x134);
  iVar6 = *(int *)(param_1 + 0x128) + -1;
  lVar7 = (longlong)iVar6;
  local_38 = 0;
  local_30 = 0;
  if (-1 < iVar6) {
    lVar11 = lVar7 << 4;
    bVar4 = false;
    do {
      lVar3 = *(longlong *)(param_1 + 0x120);
      if (((*(int *)(lVar11 + 8 + lVar3) == 0) ||
          (plVar13 = *(longlong **)(lVar11 + lVar3), plVar13 == (longlong *)0x0)) ||
         (cVar5 = (**(code **)(*plVar13 + 0x40))(plVar13,&local_50), cVar5 == '\0')) {
        bVar4 = true;
      }
      lVar11 = lVar11 + -0x10;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
    iVar9 = *(int *)(param_1 + 0x134);
  }
  *(int *)(param_1 + 0x134) = iVar9 + -1;
  if (bVar4) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x120),0);
  }
  local_50 = &PTR_FUN_143f740c8;
  if (local_38 != 0) {
    FMemory::Free(local_38);
  }
  plVar13 = local_40;
  local_50 = &PTR_FUN_143f73d18;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  return;
}



// FUNCTION 140d85660 FUN_140d85660 body=58 status=ok
// SIG undefined FUN_140d85660(void)

void FUN_140d85660(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res10 [24];
  
  if (*param_2 != 0) {
    *(undefined1 *)(*param_2 + 0x80) = *(undefined1 *)(param_1 + 0x60);
    lVar1 = *param_2;
    puVar2 = (undefined8 *)FDateTime::UtcNow(local_res10);
    *(undefined8 *)(lVar1 + 0x30) = *puVar2;
  }
  return;
}



// FUNCTION 140d856a0 FUN_140d856a0 body=121 status=ok
// SIG undefined FUN_140d856a0(void)

void FUN_140d856a0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res10 [24];
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 == 0x19) {
      *(undefined4 *)(lVar2 + 0x118) = *(undefined4 *)(param_1 + 0x60);
    }
    else if (iVar1 == 0x1a) {
      *(undefined4 *)(lVar2 + 0x11c) = *(undefined4 *)(param_1 + 0x60);
    }
    else if (iVar1 == 0x1b) {
      *(undefined4 *)(lVar2 + 0x120) = *(undefined4 *)(param_1 + 0x60);
    }
    else if (iVar1 == 0x1c) {
      *(undefined4 *)(lVar2 + 0x124) = *(undefined4 *)(param_1 + 0x60);
    }
    lVar2 = *param_2;
    puVar3 = (undefined8 *)FDateTime::UtcNow(local_res10);
    *(undefined8 *)(lVar2 + 0x30) = *puVar3;
  }
  return;
}



// FUNCTION 140d85720 FUN_140d85720 body=57 status=ok
// SIG undefined FUN_140d85720(void)

void FUN_140d85720(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res10 [24];
  
  if (*param_2 != 0) {
    *(undefined4 *)(*param_2 + 0x84) = *(undefined4 *)(param_1 + 0x60);
    lVar1 = *param_2;
    puVar2 = (undefined8 *)FDateTime::UtcNow(local_res10);
    *(undefined8 *)(lVar1 + 0x30) = *puVar2;
  }
  return;
}



// FUNCTION 140d85760 FUN_140d85760 body=135 status=ok
// SIG undefined FUN_140d85760(void)

void FUN_140d85760(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res10 [24];
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x238) = *(undefined1 *)(param_1 + 0x68);
    *(undefined1 *)(lVar1 + 0x239) = *(undefined1 *)(param_1 + 0x69);
    *(undefined1 *)(lVar1 + 0x23a) = *(undefined1 *)(param_1 + 0x6a);
    *(undefined1 *)(lVar1 + 0x23b) = *(undefined1 *)(param_1 + 0x6b);
    *(undefined1 *)(lVar1 + 0x23c) = *(undefined1 *)(param_1 + 0x6c);
    *(undefined1 *)(lVar1 + 0x23d) = *(undefined1 *)(param_1 + 0x6d);
    *(undefined1 *)(lVar1 + 0x23e) = *(undefined1 *)(param_1 + 0x6e);
    *(undefined1 *)(lVar1 + 0x23f) = *(undefined1 *)(param_1 + 0x6f);
    lVar1 = *param_2;
    puVar2 = (undefined8 *)FDateTime::UtcNow(local_res10);
    *(undefined8 *)(lVar1 + 0x30) = *puVar2;
  }
  return;
}



// FUNCTION 140d857f0 FUN_140d857f0 body=100 status=ok
// SIG undefined FUN_140d857f0(void)

void FUN_140d857f0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res10 [8];
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    FUN_140a52100(lVar1 + 0x1f8,param_1 + 0x68);
    FUN_140a51f90(lVar1 + 0x220,param_1 + 0x90);
    lVar1 = *param_2;
    puVar2 = (undefined8 *)FDateTime::UtcNow(local_res10);
    *(undefined8 *)(lVar1 + 0x30) = *puVar2;
  }
  return;
}



// FUNCTION 140d85860 FUN_140d85860 body=62 status=ok
// SIG undefined FUN_140d85860(void)

void FUN_140d85860(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res10 [24];
  
  if (*param_2 != 0) {
    FUN_140d668a0(*param_2 + 0x90,param_1 + 0x60);
    lVar1 = *param_2;
    puVar2 = (undefined8 *)FDateTime::UtcNow(local_res10);
    *(undefined8 *)(lVar1 + 0x30) = *puVar2;
  }
  return;
}



// FUNCTION 140d858a0 FUN_140d858a0 body=382 status=ok
// SIG undefined FUN_140d858a0(void)

void FUN_140d858a0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 *puVar7;
  void *_Dst;
  undefined8 uVar8;
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  longlong local_18;
  longlong *local_10;
  
  if (*param_2 != 0) {
    FUN_140d66de0(*param_2 + 0x38,param_1 + 0x60);
    lVar4 = *param_2;
    puVar7 = (undefined8 *)FDateTime::UtcNow(local_res10);
    *(undefined8 *)(lVar4 + 0x30) = *puVar7;
    return;
  }
  _Dst = (void *)operator_new(0x248);
  if (_Dst == (void *)0x0) {
    local_18 = 0;
  }
  else {
    _guard_xfg_dispatch_icall_nop(_Dst,0,0x248);
    local_18 = FUN_140d63d70(_Dst);
  }
  local_10 = (longlong *)operator_new(0x18);
  if (local_10 != (longlong *)0x0) {
    *(undefined4 *)(local_10 + 1) = 1;
    *local_10 = (longlong)&PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)local_10 + 0xc) = 1;
    local_10[2] = local_18;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_18,local_18,local_18);
  if (((local_18 != 0) && (param_3 != 0)) && (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)) {
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))();
    if (cVar6 != '\0') {
      FUN_1404c0940(local_18 + 8,param_1 + 8);
      FUN_140d66de0(local_18 + 0x38,param_1 + 0x60);
      lVar4 = local_18;
      puVar7 = (undefined8 *)FDateTime::UtcNow(local_res20);
      *(undefined8 *)(lVar4 + 0x30) = *puVar7;
      uVar8 = FUN_140bb7440(param_3);
      FUN_140d9fc40(uVar8,&local_18);
    }
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
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 140d85a20 FUN_140d85a20 body=62 status=ok
// SIG undefined FUN_140d85a20(void)

void FUN_140d85a20(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res10 [24];
  
  if (*param_2 != 0) {
    FUN_140d66e70(*param_2 + 0x1a8,param_1 + 0x60);
    lVar1 = *param_2;
    puVar2 = (undefined8 *)FDateTime::UtcNow(local_res10);
    *(undefined8 *)(lVar1 + 0x30) = *puVar2;
  }
  return;
}



// FUNCTION 140d85a60 FUN_140d85a60 body=192 status=ok
// SIG undefined FUN_140d85a60(void)

void FUN_140d85a60(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 local_res10 [24];
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x58)) {
  case 0x11:
    lVar2 = lVar2 + 0x98;
    break;
  case 0x12:
    lVar2 = lVar2 + 0xa8;
    break;
  case 0x13:
    lVar2 = lVar2 + 0xb8;
    break;
  case 0x14:
    lVar2 = lVar2 + 200;
    break;
  case 0x15:
    lVar2 = lVar2 + 0xd8;
    break;
  case 0x16:
    lVar2 = lVar2 + 0xe8;
    break;
  case 0x17:
    lVar2 = lVar2 + 0xf8;
    break;
  case 0x18:
    lVar2 = lVar2 + 0x108;
    break;
  default:
    goto switchD_140d85a98_default;
  }
  FString::operator=(lVar2,param_1 + 0x60);
switchD_140d85a98_default:
  lVar2 = *param_2;
  puVar1 = (undefined8 *)FDateTime::UtcNow(local_res10);
  *(undefined8 *)(lVar2 + 0x30) = *puVar1;
  return;
}



// FUNCTION 140d85b40 FUN_140d85b40 body=57 status=ok
// SIG undefined FUN_140d85b40(void)

void FUN_140d85b40(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res10 [24];
  
  if (*param_2 != 0) {
    *(undefined4 *)(*param_2 + 0x88) = *(undefined4 *)(param_1 + 0x60);
    lVar1 = *param_2;
    puVar2 = (undefined8 *)FDateTime::UtcNow(local_res10);
    *(undefined8 *)(lVar1 + 0x30) = *puVar2;
  }
  return;
}



// FUNCTION 140d85b80 FUN_140d85b80 body=58 status=ok
// SIG undefined FUN_140d85b80(void)

void FUN_140d85b80(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res10 [24];
  
  if ((*param_2 != 0) && (*(int *)(param_1 + 0x60) != 0)) {
    *(int *)(*param_2 + 0x40) = *(int *)(param_1 + 0x60);
    lVar1 = *param_2;
    puVar2 = (undefined8 *)FDateTime::UtcNow(local_res10);
    *(undefined8 *)(lVar1 + 0x30) = *puVar2;
  }
  return;
}



// FUNCTION 140d85bc0 FUN_140d85bc0 body=65 status=ok
// SIG undefined FUN_140d85bc0(void)

void FUN_140d85bc0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res10 [24];
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x74) = *(undefined8 *)(param_1 + 0x60);
    *(undefined4 *)(lVar1 + 0x7c) = *(undefined4 *)(param_1 + 0x68);
    lVar1 = *param_2;
    puVar2 = (undefined8 *)FDateTime::UtcNow(local_res10);
    *(undefined8 *)(lVar1 + 0x30) = *puVar2;
  }
  return;
}



// FUNCTION 140d85c10 FUN_140d85c10 body=58 status=ok
// SIG undefined FUN_140d85c10(void)

void FUN_140d85c10(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res10 [24];
  
  if (*param_2 != 0) {
    *(undefined1 *)(*param_2 + 0x81) = *(undefined1 *)(param_1 + 0x60);
    lVar1 = *param_2;
    puVar2 = (undefined8 *)FDateTime::UtcNow(local_res10);
    *(undefined8 *)(lVar1 + 0x30) = *puVar2;
  }
  return;
}



// FUNCTION 140d85c50 FUN_140d85c50 body=62 status=ok
// SIG undefined FUN_140d85c50(void)

void FUN_140d85c50(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res10 [24];
  
  if ((*param_2 != 0) && (1 < *(int *)(param_1 + 0x68))) {
    FString::operator=(*param_2 + 0x48,param_1 + 0x60);
    lVar1 = *param_2;
    puVar2 = (undefined8 *)FDateTime::UtcNow(local_res10);
    *(undefined8 *)(lVar1 + 0x30) = *puVar2;
  }
  return;
}



// FUNCTION 140d85c90 FUN_140d85c90 body=54 status=ok
// SIG undefined FUN_140d85c90(void)

void FUN_140d85c90(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res10 [24];
  
  if (*param_2 != 0) {
    *(undefined4 *)(*param_2 + 0x70) = *(undefined4 *)(param_1 + 0x60);
    lVar1 = *param_2;
    puVar2 = (undefined8 *)FDateTime::UtcNow(local_res10);
    *(undefined8 *)(lVar1 + 0x30) = *puVar2;
  }
  return;
}



// FUNCTION 140d85cd0 FUN_140d85cd0 body=58 status=ok
// SIG undefined FUN_140d85cd0(void)

void FUN_140d85cd0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res10 [24];
  
  if ((*param_2 != 0) && (*(int *)(param_1 + 0x60) != 0)) {
    *(int *)(*param_2 + 0x68) = *(int *)(param_1 + 0x60);
    lVar1 = *param_2;
    puVar2 = (undefined8 *)FDateTime::UtcNow(local_res10);
    *(undefined8 *)(lVar1 + 0x30) = *puVar2;
  }
  return;
}



// FUNCTION 140d85d10 FUN_140d85d10 body=58 status=ok
// SIG undefined FUN_140d85d10(void)

void FUN_140d85d10(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res10 [24];
  
  if ((*param_2 != 0) && (*(int *)(param_1 + 0x60) != 0)) {
    *(int *)(*param_2 + 0x6c) = *(int *)(param_1 + 0x60);
    lVar1 = *param_2;
    puVar2 = (undefined8 *)FDateTime::UtcNow(local_res10);
    *(undefined8 *)(lVar1 + 0x30) = *puVar2;
  }
  return;
}



// FUNCTION 140d85d50 FUN_140d85d50 body=686 status=ok
// SIG undefined FUN_140d85d50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d85d50(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined1 local_f8 [8];
  undefined **local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined **local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  ushort local_a0;
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
  undefined8 local_28;
  undefined4 local_20;
  
  if (param_3 != (longlong *)0x0) {
    if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
       (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(), cVar4 == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar1 = param_1 + 0x30;
      if ((*(longlong **)(param_1 + 0x38) == (longlong *)0x0) ||
         (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))(), cVar4 == '\0')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (iVar2 = *(int *)(param_1 + 0x60), iVar2 != 1)) {
        if (iVar2 == 0xd) {
          uVar5 = (**(code **)(*param_3 + 0x148))(param_3);
          local_98 = *(undefined8 *)(param_1 + 0x38);
          local_90 = *(longlong *)(param_1 + 0x40);
          if (local_90 != 0) {
            LOCK();
            *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
            UNLOCK();
          }
          lVar6 = FUN_14244c070(param_3,&local_98);
          lVar9 = 0;
          if ((lVar6 != 0) && (lVar6 = UPlayer::GetPlayerController(lVar6,uVar5), lVar6 != 0)) {
            lVar7 = FUN_14145f370();
            if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              lVar9 = *(longlong *)(lVar6 + 0x488);
            }
          }
          if (lVar9 != 0) {
            local_d8 = 0;
            local_e8 = 0;
            uStack_e0 = 0;
            local_f0 = &PTR_FUN_143f740c8;
            local_c8 = &PTR_FUN_143f740c8;
            local_d0 = 0;
            local_c0 = 0;
            local_b8 = 0;
            local_b0 = 0;
            local_a8 = 0;
            local_a0 = 1;
            FUN_1404c0940(&local_f0,lVar1);
            FUN_1404c0940(&local_c8,param_1 + 8);
            local_a0 = local_a0 & 0xff00;
            local_78 = 0;
            uStack_70 = 0;
            local_88 = &PTR_FUN_144530d88;
            local_30 = 0xd;
            local_80 = &PTR_FUN_143f740c8;
            local_68 = 0;
            local_60 = 0;
            local_50 = 0;
            local_48 = 0;
            local_58 = &PTR_FUN_143f740c8;
            local_40 = 0;
            local_38 = 0;
            FUN_1404c0940(&local_80,lVar1);
            lVar1 = *(longlong *)(lVar9 + 0x168);
            if (lVar1 == 0) {
              local_104 = DAT_1468b5d98;
              puVar8 = &local_10c;
              local_10c = _DAT_1468b5d90;
            }
            else {
              puVar8 = (undefined8 *)&local_118;
              local_118 = *(undefined4 *)(lVar1 + 0x220);
              local_110 = *(undefined4 *)(lVar1 + 0x228);
              uStack_114 = *(undefined4 *)(lVar1 + 0x224);
            }
            local_28 = *puVar8;
            local_20 = *(undefined4 *)(puVar8 + 1);
            FUN_140d99520(&local_88,local_f8,param_3);
            FUN_1404bf980(&local_58);
            FUN_1404bf980(&local_80);
            FUN_1404bf980(&local_c8);
            FUN_1404bf980(&local_f0);
          }
        }
        else {
          uVar5 = FUN_140bb7440();
          FUN_140d750c0(uVar5,iVar2,lVar1,param_1 + 8);
        }
      }
    }
  }
  return;
}



// FUNCTION 140d86000 FUN_140d86000 body=59 status=ok
// SIG undefined FUN_140d86000(void)

void FUN_140d86000(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res10 [24];
  
  if (*param_2 != 0) {
    FString::operator=(*param_2 + 0x58,param_1 + 0x60);
    lVar1 = *param_2;
    puVar2 = (undefined8 *)FDateTime::UtcNow(local_res10);
    *(undefined8 *)(lVar1 + 0x30) = *puVar2;
  }
  return;
}



// FUNCTION 140d86040 FUN_140d86040 body=57 status=ok
// SIG undefined FUN_140d86040(void)

void FUN_140d86040(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res10 [24];
  
  if (*param_2 != 0) {
    *(undefined4 *)(*param_2 + 0x8c) = *(undefined4 *)(param_1 + 0x60);
    lVar1 = *param_2;
    puVar2 = (undefined8 *)FDateTime::UtcNow(local_res10);
    *(undefined8 *)(lVar1 + 0x30) = *puVar2;
  }
  return;
}



// FUNCTION 140d86090 FUN_140d86090 body=191 status=ok
// SIG undefined FUN_140d86090(void)

undefined8 FUN_140d86090(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)(param_3 + 0x88);
  if (*(longlong *)(param_3 + 0x88) == 0) {
    lVar1 = param_3 + 8;
  }
  if ((*(int *)(param_3 + 0x90) == 1) && (*(short *)(lVar1 + 0x18) == 0xb)) {
    FUN_1421923f0(local_48,DAT_14686ece0,lVar1);
    FUN_140bfa350(param_3,param_1 + 8,local_48);
    FUN_14217f430(local_48);
    FUN_1421923f0(local_28,DAT_14686ece8,lVar1);
    FUN_140bfa350(param_3,param_1 + 0x10,local_28);
    FUN_14217f430(local_28);
    return 1;
  }
  return 0;
}



// FUNCTION 140d86150 FUN_140d86150 body=1752 status=ok
// SIG undefined FUN_140d86150(void)

void FUN_140d86150(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  int *piVar10;
  longlong lVar11;
  int *piVar12;
  longlong *plVar13;
  int local_res20 [2];
  longlong local_e0;
  longlong *local_d8;
  undefined **local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  undefined **local_70;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48 [2];
  
  if (((*(longlong **)(param_2 + 8) != (longlong *)0x0) &&
      (cVar4 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar4 != '\0')) &&
     (*(longlong *)(param_1 + 0x10) != 0)) {
    plVar8 = (longlong *)param_3[1];
    if ((int *)plVar8[1] < (int *)*plVar8 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,local_res20,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,local_res20,4);
      }
    }
    else {
      local_res20[0] = *(int *)*plVar8;
      *plVar8 = *plVar8 + 4;
    }
    iVar2 = local_res20[0];
    FUN_140d7f220(param_1,&local_a0,local_res20[0]);
    plVar8 = local_a0;
    if (local_a0 != (longlong *)0x0) {
      (**(code **)(*local_a0 + 8))(local_a0,param_3);
      local_c8 = (longlong *)plVar8[2];
      local_c0 = (longlong *)plVar8[3];
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
        UNLOCK();
        plVar8 = local_a0;
      }
      plVar9 = (longlong *)0x0;
      local_d0 = &PTR_FUN_143f740c8;
      local_b8 = 0;
      local_b0 = 0;
      if ((local_c8 != (longlong *)0x0) &&
         (cVar4 = (**(code **)(*local_c8 + 0x20))(), cVar4 != '\0')) {
        (**(code **)(*plVar8 + 0x18))(plVar8,local_48,*(undefined8 *)(param_1 + 0x10));
        FUN_140d80730(param_1,&local_e0,&local_d0);
        (**(code **)(*plVar8 + 0x10))(plVar8,&local_e0,*(undefined8 *)(param_1 + 0x10));
        if (iVar2 != 1) {
          if (local_e0 == 0) {
            piVar10 = *(int **)(param_1 + 400);
            piVar12 = piVar10 + (longlong)*(int *)(param_1 + 0x198) * 0x18;
            for (; piVar10 != piVar12; piVar10 = piVar10 + 0x18) {
              if (((*(longlong **)(piVar10 + 0xe) == (longlong *)0x0) ||
                  (cVar4 = (**(code **)(**(longlong **)(piVar10 + 0xe) + 0x20))(), cVar4 == '\0'))
                 || ((local_c8 == (longlong *)0x0 ||
                     (cVar4 = (**(code **)(*local_c8 + 0x20))(), cVar4 == '\0')))) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (((((*(longlong **)(piVar10 + 0xe) == (longlong *)0x0) ||
                    (cVar4 = (**(code **)(**(longlong **)(piVar10 + 0xe) + 0x20))(), cVar4 == '\0'))
                   && ((local_c8 == (longlong *)0x0 ||
                       (cVar4 = (**(code **)(*local_c8 + 0x20))(), cVar4 == '\0')))) ||
                  ((bVar3 && (cVar4 = (**(code **)*local_c8)
                                                (local_c8,*(undefined8 *)(piVar10 + 0xe)),
                             cVar4 != '\0')))) && (*piVar10 == 2)) goto LAB_140d8671a;
            }
            FUN_140d96a80(param_1,&local_d0);
          }
          else {
            local_90 = local_c8;
            local_88 = local_c0;
            if (local_c0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
              UNLOCK();
            }
            FUN_140bbc6f0(*(undefined8 *)(param_1 + 0x10),&local_80,&local_90);
            plVar8 = local_88;
            if (local_88 != (longlong *)0x0) {
              LOCK();
              plVar13 = local_88 + 1;
              lVar6 = *plVar13;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*local_88)(local_88);
                LOCK();
                piVar10 = (int *)((longlong)plVar8 + 0xc);
                iVar5 = *piVar10;
                *piVar10 = *piVar10 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*plVar8 + 8))(plVar8,1);
                }
              }
            }
            plVar8 = local_78;
            if (local_80 != (longlong *)0x0) {
              if (local_78 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_78 + 1) = (int)local_78[1] + 1;
                UNLOCK();
              }
              local_68 = local_80;
              local_60 = local_78;
              if (local_78 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_78 + 1) = (int)local_78[1] + 1;
                UNLOCK();
              }
              local_70 = &PTR_FUN_143f740c8;
              local_58 = 0;
              local_50 = 0;
              plVar13 = plVar9;
              if (*(int *)(param_1 + 0x148) != *(int *)(param_1 + 0x174)) {
                if ((local_80 == (longlong *)0x0) ||
                   (cVar4 = (**(code **)(*local_80 + 0x20))(local_80), cVar4 == '\0')) {
                  iVar5 = -1;
                }
                else {
                  iVar5 = GetTypeHash(local_80);
                }
                lVar6 = *(longlong *)(param_1 + 0x180);
                if (*(longlong *)(param_1 + 0x180) == 0) {
                  lVar6 = param_1 + 0x178;
                }
                iVar5 = *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0x188) - 1U & (longlong)iVar5
                                         ) * 4);
                if (iVar5 != -1) {
                  lVar6 = *(longlong *)(param_1 + 0x140);
                  do {
                    lVar11 = (longlong)iVar5 * 0x40;
                    local_a8 = lVar6 + lVar11;
                    if (((*(longlong **)(local_a8 + 8) == (longlong *)0x0) ||
                        (cVar4 = (**(code **)(**(longlong **)(local_a8 + 8) + 0x20))(),
                        cVar4 == '\0')) || (local_80 == (longlong *)0x0)) {
LAB_140d86417:
                      bVar3 = false;
                    }
                    else {
                      cVar4 = (**(code **)(*local_80 + 0x20))(local_80);
                      bVar3 = true;
                      if (cVar4 == '\0') goto LAB_140d86417;
                    }
                    if ((((*(longlong **)(local_a8 + 8) == (longlong *)0x0) ||
                         (cVar4 = (**(code **)(**(longlong **)(local_a8 + 8) + 0x20))(),
                         cVar4 == '\0')) &&
                        ((local_80 == (longlong *)0x0 ||
                         (cVar4 = (**(code **)(*local_80 + 0x20))(local_80), cVar4 == '\0')))) ||
                       ((bVar3 && (cVar4 = (**(code **)*local_80)
                                                     (local_80,*(undefined8 *)(local_a8 + 8)),
                                  cVar4 != '\0')))) {
                      if ((iVar5 != -1) &&
                         (lVar11 = *(longlong *)(param_1 + 0x140) + lVar11, lVar11 != 0)) {
                        plVar13 = *(longlong **)(lVar11 + 0x28);
                        plVar9 = *(longlong **)(lVar11 + 0x30);
                        if (plVar9 != (longlong *)0x0) {
                          LOCK();
                          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
                          UNLOCK();
                        }
                      }
                      break;
                    }
                    lVar6 = *(longlong *)(param_1 + 0x140);
                    iVar5 = *(int *)(lVar6 + 0x38 + lVar11);
                  } while (iVar5 != -1);
                }
              }
              FUN_1404bf980(&local_70);
              if (plVar8 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar8 + 1;
                lVar6 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar6 == 1) {
                  (**(code **)*plVar8)(plVar8);
                  LOCK();
                  piVar10 = (int *)((longlong)plVar8 + 0xc);
                  iVar5 = *piVar10;
                  *piVar10 = *piVar10 + -1;
                  UNLOCK();
                  if (iVar5 == 1) {
                    (**(code **)(*plVar8 + 8))(plVar8,1);
                  }
                }
              }
              if (plVar13 != (longlong *)0x0) {
                *(undefined1 *)(plVar13 + 0x47) = *(undefined1 *)(local_e0 + 0x238);
                *(undefined1 *)((longlong)plVar13 + 0x239) = *(undefined1 *)(local_e0 + 0x239);
                *(undefined1 *)((longlong)plVar13 + 0x23a) = *(undefined1 *)(local_e0 + 0x23a);
                *(undefined1 *)((longlong)plVar13 + 0x23b) = *(undefined1 *)(local_e0 + 0x23b);
                *(undefined1 *)((longlong)plVar13 + 0x23c) = *(undefined1 *)(local_e0 + 0x23c);
                *(undefined1 *)((longlong)plVar13 + 0x23d) = *(undefined1 *)(local_e0 + 0x23d);
                *(undefined1 *)((longlong)plVar13 + 0x23e) = *(undefined1 *)(local_e0 + 0x23e);
                *(undefined1 *)((longlong)plVar13 + 0x23f) = *(undefined1 *)(local_e0 + 0x23f);
                FUN_140d66860(plVar13 + 0x3e,local_e0 + 0x1f0);
                FUN_140d668a0(plVar13 + 0x12,local_e0 + 0x90);
                FUN_140d66e70(plVar13 + 0x35,local_e0 + 0x1a8);
              }
              if (plVar9 != (longlong *)0x0) {
                LOCK();
                plVar8 = plVar9 + 1;
                lVar6 = *plVar8;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)lVar6 == 1) {
                  (**(code **)*plVar9)(plVar9);
                  LOCK();
                  piVar10 = (int *)((longlong)plVar9 + 0xc);
                  iVar5 = *piVar10;
                  *piVar10 = *piVar10 + -1;
                  UNLOCK();
                  if (iVar5 == 1) {
                    (**(code **)(*plVar9 + 8))(plVar9,1);
                  }
                }
              }
            }
            TBaseMulticastDelegate<void>::Broadcast(param_1 + 0xc0);
            TBaseMulticastDelegate<void,FPhysScene_*,enum_EPhysicsSceneType>::Broadcast
                      (param_1 + 0xd8,&local_d0,iVar2);
            uVar7 = FUN_140bb73a0(*(undefined8 *)(param_1 + 0x10));
            FUN_140d6e2a0(uVar7,&local_e0);
            if (local_78 != (longlong *)0x0) {
              LOCK();
              plVar8 = local_78 + 1;
              lVar6 = *plVar8;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*local_78)(local_78);
                LOCK();
                piVar10 = (int *)((longlong)local_78 + 0xc);
                iVar2 = *piVar10;
                *piVar10 = *piVar10 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*local_78 + 8))(local_78,1);
                }
              }
            }
          }
        }
LAB_140d8671a:
        if (local_d8 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_d8 + 1;
          lVar6 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_d8)(local_d8);
            LOCK();
            piVar10 = (int *)((longlong)local_d8 + 0xc);
            iVar2 = *piVar10;
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_d8 + 8))(local_d8,1);
            }
          }
        }
        if (local_48[0] != 0) {
          FMemory::Free();
        }
      }
      local_d0 = &PTR_FUN_143f740c8;
      if (local_b8 != 0) {
        FMemory::Free(local_b8);
      }
      plVar8 = local_c0;
      local_d0 = &PTR_FUN_143f73d18;
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_c0 + 1;
        lVar6 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_c0)(local_c0);
          LOCK();
          piVar10 = (int *)((longlong)plVar8 + 0xc);
          iVar2 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
    }
    plVar8 = local_98;
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_98 + 1;
      lVar6 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar10 = (int *)((longlong)plVar8 + 0xc);
        iVar2 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_98 + 8))(local_98,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140d86830 FUN_140d86830 body=32 status=ok
// SIG undefined FUN_140d86830(void)

bool FUN_140d86830(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 local_res8 [32];
  
  piVar1 = (int *)FUN_140d76bb0(param_1 + 8,local_res8,param_2);
  return *piVar1 != -1;
}



// FUNCTION 140d86850 FUN_140d86850 body=98 status=ok
// SIG undefined FUN_140d86850(void)

ulonglong FUN_140d86850(longlong param_1)

{
  uint uVar1;
  ulonglong in_RAX;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    in_RAX = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))();
    if ((char)in_RAX != '\0') {
      in_RAX = 0;
      if (((*(char *)(param_1 + 0x58) != '\0') && (*(char *)(param_1 + 0x58) != '\x1a')) &&
         (*(longlong *)(param_1 + 0x60) != 0)) {
        uVar1 = *(uint *)(param_1 + 0x74) | *(uint *)(param_1 + 0x70) | *(uint *)(param_1 + 0x6c) |
                *(uint *)(param_1 + 0x68);
        in_RAX = (ulonglong)uVar1;
        if (((uVar1 != 0) && (0 < *(int *)(param_1 + 0x78))) &&
           ((*(int *)(param_1 + 0x7c) != 0 && (1 < *(int *)(param_1 + 0x90))))) {
          return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
        }
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140d868c0 FUN_140d868c0 body=43 status=ok
// SIG undefined FUN_140d868c0(void)

undefined1 FUN_140d868c0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_140d86850();
  if ((cVar1 != '\0') && (*(int *)(param_1 + 0x178) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 140d868f0 FUN_140d868f0 body=67 status=ok
// SIG undefined FUN_140d868f0(void)

undefined1 FUN_140d868f0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_140d86850();
  if ((((cVar1 != '\0') && (*(int *)(param_1 + 0x178) != 0)) &&
      ((*(int *)(param_1 + 0x17c) != -1 || (*(char *)(param_1 + 0x58) != '\v')))) &&
     (*(int *)(param_1 + 0x180) != -1)) {
    return 1;
  }
  return 0;
}



// FUNCTION 140d86940 FUN_140d86940 body=43 status=ok
// SIG undefined FUN_140d86940(void)

undefined1 FUN_140d86940(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_140d86850();
  if ((cVar1 != '\0') && (*(int *)(param_1 + 0x180) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 140d86970 FUN_140d86970 body=43 status=ok
// SIG undefined FUN_140d86970(void)

undefined1 FUN_140d86970(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_140d86850();
  if ((cVar1 != '\0') && (1 < *(int *)(param_1 + 0x180))) {
    return 1;
  }
  return 0;
}



// FUNCTION 140d869a0 FUN_140d869a0 body=62 status=ok
// SIG undefined FUN_140d869a0(void)

undefined8 FUN_140d869a0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_140d86850();
  if ((cVar1 != '\0') && (*(longlong **)(param_1 + 0x38) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))();
    if ((cVar1 != '\0') && (1 < *(int *)(param_1 + 0x180))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140d869e0 FUN_140d869e0 body=70 status=ok
// SIG undefined FUN_140d869e0(void)

undefined1 FUN_140d869e0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_140d86850();
  if ((((cVar1 != '\0') && (*(int *)(param_1 + 0x178) != -1)) && (*(int *)(param_1 + 0x184) != -1))
     && ((*(int *)(param_1 + 0x17c) != -1 && (*(int *)(param_1 + 0x180) != -1)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 140d86a30 FUN_140d86a30 body=79 status=ok
// SIG undefined FUN_140d86a30(void)

ulonglong FUN_140d86a30(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_140d86850();
  if (((char)uVar2 != '\0') && (*(longlong **)(param_1 + 0x38) != (longlong *)0x0)) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))();
    if ((char)uVar2 != '\0') {
      uVar1 = *(uint *)(param_1 + 0x184) | *(uint *)(param_1 + 0x180) | *(uint *)(param_1 + 0x17c) |
              *(uint *)(param_1 + 0x178);
      uVar2 = (ulonglong)uVar1;
      if (uVar1 != 0) {
        return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
      }
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 140d86a80 FUN_140d86a80 body=53 status=ok
// SIG undefined FUN_140d86a80(void)

undefined8 FUN_140d86a80(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_140d86850();
  if ((cVar1 != '\0') && (*(longlong **)(param_1 + 0x38) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140d86ac0 FUN_140d86ac0 body=274 status=ok
// SIG undefined FUN_140d86ac0(void)

void FUN_140d86ac0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  
  *param_1 = param_2;
  FConfigCacheIni::GetInt
            (DAT_1468b6148,L"FFriendEventSystem",L"MaxCachedFriendEvents",param_1 + 0xb,
             &DAT_1468e2410);
  if (*param_1 != 0) {
    lVar3 = FUN_140bb7630();
    plVar1 = (longlong *)(lVar3 + 0x120);
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar4 != (longlong *)0x0) {
      plVar4[1] = (longlong)param_1;
      *plVar4 = (longlong)&DAT_143f3ed00;
      plVar4[2] = (longlong)FUN_140d8d370;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[4] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    lVar5 = 0;
    if (plVar4 != (longlong *)0x0) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
      plVar6 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
      iVar2 = *(int *)(lVar3 + 0x128);
      lVar5 = *plVar6;
      *(int *)(lVar3 + 0x128) = iVar2 + 1;
      if (*(int *)(lVar3 + 300) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar7 = plVar4;
      *(undefined4 *)(puVar7 + 1) = 3;
    }
    param_1[0xe] = lVar5;
  }
  return;
}



// FUNCTION 140d86be0 FUN_140d86be0 body=586 status=ok
// SIG undefined FUN_140d86be0(void)

void FUN_140d86be0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  FUN_140dbfcf0();
  FConfigCacheIni::GetFloat
            (DAT_1468b6148,L"FFriendEventSystem",L"NotificationThrottleTime",param_1 + 0xc4,
             &DAT_1468e2410);
  FConfigCacheIni::GetFloat
            (DAT_1468b6148,L"FFriendEventSystem",L"MergedChallengeUpdatesBaseTimeout",param_1 + 200,
             &DAT_1468e2410);
  FConfigCacheIni::GetFloat
            (DAT_1468b6148,L"FFriendEventSystem",L"MergedChallengeUpdatesTimeoutExponent",
             param_1 + 0xcc,&DAT_1468e2410);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    return;
  }
  lVar2 = FUN_140bb7630();
  plVar6 = (longlong *)(lVar2 + 0x180);
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    plVar3[1] = param_1;
    *plVar3 = (longlong)&DAT_143f3ed00;
    plVar3[2] = (longlong)FUN_140d84ed0;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  uVar7 = 0;
  if (plVar3 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar6,1);
    puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
    iVar1 = *(int *)(lVar2 + 0x188);
    uVar7 = *puVar5;
    *(int *)(lVar2 + 0x188) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x18c) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar1);
    }
    puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar6);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 3;
  }
  *(undefined8 *)(param_1 + 0x138) = uVar7;
  plVar6 = (longlong *)FUN_140bba5e0(*(undefined8 *)(param_1 + 0x10));
  if (plVar6 != (longlong *)0x0) {
    local_28 = (longlong *)0x0;
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    local_20 = 3;
    local_28 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      plVar3[1] = param_1;
      *plVar3 = (longlong)&DAT_143f3ed00;
      plVar3[2] = (longlong)FUN_140d8e820;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar2;
      *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0xc0))(plVar6,local_res8,&local_28);
    *(undefined8 *)(param_1 + 0x140) = *puVar5;
    if (local_20 != 0) {
      if (local_28 == (longlong *)0x0) goto LAB_140d86e0d;
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
LAB_140d86e0d:
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 140d86e30 FUN_140d86e30 body=494 status=ok
// SIG undefined FUN_140d86e30(void)

void FUN_140d86e30(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  *param_1 = param_2;
  FConfigCacheIni::GetInt
            (DAT_1468b6148,L"FFriendStatusCache",L"MaxCachedFriendStatuses",param_1 + 1,
             &DAT_1468e2410);
  if (*param_1 != 0) {
    lVar2 = FUN_140bb7630();
    plVar7 = (longlong *)(lVar2 + 0x120);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      plVar3[1] = (longlong)param_1;
      *plVar3 = (longlong)&DAT_143f3ed00;
      plVar3[2] = (longlong)FUN_140d8d3b0;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    lVar4 = 0;
    if (plVar3 != (longlong *)0x0) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar7,1);
      plVar5 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
      iVar1 = *(int *)(lVar2 + 0x128);
      lVar4 = *plVar5;
      *(int *)(lVar2 + 0x128) = iVar1 + 1;
      if (*(int *)(lVar2 + 300) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar1);
      }
      puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar7);
      *puVar6 = plVar3;
      *(undefined4 *)(puVar6 + 1) = 3;
    }
    param_1[0xf] = lVar4;
    plVar7 = (longlong *)FUN_140bba5e0(*param_1);
    if (plVar7 != (longlong *)0x0) {
      local_28 = (longlong *)0x0;
      plVar3 = (longlong *)FMemory::Realloc(0,0x30);
      local_20 = 3;
      local_28 = plVar3;
      if (plVar3 != (longlong *)0x0) {
        plVar3[1] = (longlong)param_1;
        *plVar3 = (longlong)&DAT_143f3ed00;
        plVar3[2] = (longlong)FUN_140d8ea60;
        lVar2 = FDelegateHandle::GenerateNewID();
        plVar3[4] = lVar2;
        *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
      }
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0xc0))(plVar7,local_res8,&local_28);
      param_1[0xe] = *plVar7;
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
  }
  return;
}



// FUNCTION 140d87020 FUN_140d87020 body=552 status=ok
// SIG undefined FUN_140d87020(void)

void FUN_140d87020(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 local_res8 [8];
  
  FUN_140dbfcf0();
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar2 = FUN_140bb7630();
    puVar3 = (undefined8 *)FUN_1406ac210(lVar2 + 0x120,local_res8,param_1,FUN_140d8d3f0);
    *(undefined8 *)(param_1 + 0x1a0) = *puVar3;
    lVar2 = FUN_140bb7630(*(undefined8 *)(param_1 + 0x10));
    plVar6 = (longlong *)(lVar2 + 0x168);
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar4 != (longlong *)0x0) {
      plVar4[1] = param_1;
      *plVar4 = (longlong)&DAT_143f3ed00;
      plVar4[2] = (longlong)FUN_140d86150;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[4] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    uVar7 = 0;
    if (plVar4 != (longlong *)0x0) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar6,1);
      puVar3 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
      iVar1 = *(int *)(lVar2 + 0x170);
      uVar7 = *puVar3;
      *(int *)(lVar2 + 0x170) = iVar1 + 1;
      if (*(int *)(lVar2 + 0x174) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar1);
      }
      puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar6);
      *puVar3 = plVar4;
      *(undefined4 *)(puVar3 + 1) = 3;
    }
    *(undefined8 *)(param_1 + 0x1b8) = uVar7;
    lVar2 = FUN_140bb7630(*(undefined8 *)(param_1 + 0x10));
    puVar3 = (undefined8 *)FUN_1406ac210(lVar2 + 0x138,local_res8,param_1,&LAB_140d8bc30);
    *(undefined8 *)(param_1 + 0x1a8) = *puVar3;
    lVar2 = FUN_140bb7630(*(undefined8 *)(param_1 + 0x10));
    puVar3 = (undefined8 *)FUN_1406ac210(lVar2 + 0x150,local_res8,param_1,FUN_140d8bc40);
    *(undefined8 *)(param_1 + 0x1b0) = *puVar3;
  }
  lVar2 = FUN_142b45e90();
  lVar2 = *(longlong *)(lVar2 + 0x18);
  plVar4 = (longlong *)(lVar2 + 0xa0);
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar6 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x210) = 0;
  }
  else {
    plVar6[1] = param_1;
    *plVar6 = (longlong)&DAT_143f3ed00;
    plVar6[2] = (longlong)FUN_140d903a0;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar6[4] = lVar5;
    *plVar6 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar4,1);
    puVar3 = (undefined8 *)(**(code **)(*plVar6 + 0x20))(plVar6,local_res8);
    iVar1 = *(int *)(lVar2 + 0xa8);
    uVar7 = *puVar3;
    *(int *)(lVar2 + 0xa8) = iVar1 + 1;
    if (*(int *)(lVar2 + 0xac) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar1);
    }
    puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar4);
    *puVar3 = plVar6;
    *(undefined4 *)(puVar3 + 1) = 3;
    *(undefined8 *)(param_1 + 0x210) = uVar7;
  }
  *(undefined4 *)(param_1 + 0x28) = 1;
  return;
}



// FUNCTION 140d87250 FUN_140d87250 body=1722 status=ok
// SIG undefined FUN_140d87250(void)

void FUN_140d87250(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 local_res10;
  undefined1 local_res18 [8];
  longlong local_res20;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong **local_c0;
  undefined8 local_b8;
  longlong **local_b0;
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  longlong *local_50;
  
  plVar11 = (longlong *)0x0;
  local_res10 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146852c60) && (_Init_thread_header(&DAT_146852c60), DAT_146852c60 == -1))
  {
    FName::FName(&DAT_146852c58,L"OnlineSubsystem",1);
    _Init_thread_footer(&DAT_146852c60);
  }
  uVar10 = DAT_146852c58;
  uVar6 = FUN_14168dc80();
  plVar7 = (longlong *)FModuleManager::GetModule(uVar6,uVar10);
  plVar8 = (longlong *)(**(code **)(*plVar7 + 0x50))(plVar7,local_res10);
  plVar7 = plVar11;
  if (plVar8 == (longlong *)0x0) {
LAB_140d872f1:
    bVar3 = false;
  }
  else {
    plVar9 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,local_70);
    plVar7 = (longlong *)0x1;
    if (*plVar9 == 0) goto LAB_140d872f1;
    bVar3 = true;
  }
  if ((plVar7 != (longlong *)0x0) && (local_68 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_68 + 1;
    lVar13 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  bVar4 = false;
  if (bVar3) {
    (**(code **)(*plVar8 + 8))(plVar8,&local_res20);
    plVar9 = (longlong *)operator_new(0x70);
    plVar7 = plVar11;
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = 0;
      plVar9[1] = 0;
      plVar9[2] = 0;
      plVar9[3] = 0;
      plVar9[4] = 2;
      plVar9[5] = local_res20;
      plVar9[6] = param_1;
      plVar9[7] = 0;
      plVar9[8] = 0;
      plVar9[9] = 0;
      plVar9[10] = 0;
      *(undefined2 *)(plVar9 + 0xb) = 0;
      plVar9[0xc] = 0;
      plVar9[0xd] = 0;
      plVar7 = plVar9;
    }
    plVar9 = (longlong *)operator_new(0x18);
    if (plVar9 != (longlong *)0x0) {
      *(undefined4 *)(plVar9 + 1) = 1;
      *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
      *plVar9 = (longlong)&PTR_FUN_144531930;
      plVar9[2] = (longlong)plVar7;
      plVar11 = plVar9;
    }
    if (plVar7 != (longlong *)0x0) {
      if ((*plVar7 == 0) || (plVar7[1] == 0)) {
LAB_140d873fc:
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
        }
        *plVar7 = (longlong)plVar7;
        plVar9 = (longlong *)plVar7[1];
        if (plVar11 != plVar9) {
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
            UNLOCK();
            plVar9 = (longlong *)plVar7[1];
          }
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
          plVar7[1] = (longlong)plVar11;
        }
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar11 + 1;
          lVar13 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plVar11)(plVar11);
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
      }
      else {
        piVar1 = (int *)(plVar7[1] + 8);
        LOCK();
        iVar5 = *piVar1;
        if (iVar5 == 0) {
          *piVar1 = 0;
          iVar5 = 0;
        }
        UNLOCK();
        if (iVar5 < 1) goto LAB_140d873fc;
      }
      FUN_140d87de0(plVar7);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      local_c8 = &local_res20;
      local_c0 = &local_e8;
      local_e8 = plVar7;
      local_e0 = plVar11;
      FUN_14068d7f0(param_1 + 0x68,&local_res10,&local_c8,0);
      plVar9 = local_e0;
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_e0 + 1;
        lVar13 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_e0)(local_e0);
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
      FUN_140d5ba30(plVar7 + 2,local_a8,param_1,FUN_140d8cb30,local_res20);
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar11 + 1;
      lVar13 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plVar11)(plVar11);
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
  }
  uVar10 = FName::FName(local_a0,L"SPARK",1);
  plVar11 = (longlong *)FUN_1404b0000(uVar10);
  if ((plVar11 == (longlong *)0x0) || (plVar11 == plVar8)) {
LAB_140d87586:
    bVar3 = false;
  }
  else {
    bVar4 = true;
    plVar11 = (longlong *)(**(code **)(*plVar11 + 0x20))(plVar11,local_60);
    if (*plVar11 == 0) goto LAB_140d87586;
    bVar3 = true;
  }
  if ((bVar4) && (local_58 != (longlong *)0x0)) {
    LOCK();
    plVar11 = local_58 + 1;
    lVar13 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
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
  if (!bVar3) {
    return;
  }
  plVar11 = (longlong *)operator_new(0x70);
  if (plVar11 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  else {
    plVar7 = (longlong *)FName::FName(local_98,L"SPARK",1);
    lVar13 = *plVar7;
    *plVar11 = 0;
    plVar11[1] = 0;
    plVar11[2] = 0;
    plVar11[3] = 0;
    plVar11[4] = 2;
    plVar11[5] = lVar13;
    plVar11[6] = param_1;
    plVar11[7] = 0;
    plVar11[8] = 0;
    plVar11[9] = 0;
    plVar11[10] = 0;
    *(undefined2 *)(plVar11 + 0xb) = 0;
    plVar11[0xc] = 0x4066800000000000;
    plVar11[0xd] = 0;
  }
  plVar7 = (longlong *)operator_new(0x18);
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_FUN_144531930;
    plVar7[2] = (longlong)plVar11;
  }
  if (plVar11 == (longlong *)0x0) goto LAB_140d8787e;
  if ((*plVar11 == 0) || (plVar11[1] == 0)) {
LAB_140d876a9:
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    *plVar11 = (longlong)plVar11;
    plVar8 = (longlong *)plVar11[1];
    if (plVar7 != plVar8) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar8 = (longlong *)plVar11[1];
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      plVar11[1] = (longlong)plVar7;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar7 + 1;
      lVar13 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
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
    }
  }
  else {
    piVar1 = (int *)(plVar11[1] + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (iVar5 < 1) goto LAB_140d876a9;
  }
  FUN_140d87de0(plVar11);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  local_d8 = plVar11;
  local_d0 = plVar7;
  local_b8 = FName::FName(local_90,L"SPARK",1);
  local_b0 = &local_d8;
  FUN_14068d7f0(param_1 + 0x68,local_res18,&local_b8,0);
  plVar8 = local_d0;
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_d0 + 1;
    lVar13 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  puVar12 = (undefined8 *)FName::FName(local_88,L"SPARK",1);
  FUN_140d5ba30(plVar11 + 2,local_80,param_1,FUN_140d8cb30,*puVar12);
  lVar13 = FUN_142b45e90();
  lVar13 = *(longlong *)(lVar13 + 0x18);
  plVar8 = (longlong *)(lVar13 + 0xe8);
  plVar11 = (longlong *)FMemory::Realloc(0,0x30);
  local_50 = plVar11;
  if (plVar11 != (longlong *)0x0) {
    plVar11[1] = param_1;
    *plVar11 = (longlong)&DAT_143f3ed00;
    plVar11[2] = (longlong)FUN_140d8d760;
    lVar14 = FDelegateHandle::GenerateNewID();
    plVar11[4] = lVar14;
    *plVar11 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
    (**(code **)(*plVar11 + 0x20))(plVar11,local_78);
    iVar5 = *(int *)(lVar13 + 0xf0);
    *(int *)(lVar13 + 0xf0) = iVar5 + 1;
    if (*(int *)(lVar13 + 0xf4) < iVar5 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar5);
    }
    puVar12 = (undefined8 *)((longlong)iVar5 * 0x10 + *plVar8);
    *puVar12 = plVar11;
    *(undefined4 *)(puVar12 + 1) = 3;
  }
LAB_140d8787e:
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar7 + 1;
    lVar13 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
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
  }
  return;
}



// FUNCTION 140d87910 FUN_140d87910 body=1229 status=ok
// SIG undefined FUN_140d87910(void)

void FUN_140d87910(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 local_res18 [2];
  longlong *local_38;
  int local_30;
  
  lVar2 = FUN_140d82cf0();
  if (lVar2 != 0) {
    return;
  }
  param_1[1] = param_2;
  FConfigCacheIni::GetString
            (DAT_1468b6148,L"FFriendsMesh",L"FriendBeaconTemplateName",param_1 + 2,&DAT_1468e2410);
  FConfigCacheIni::GetInt
            (DAT_1468b6148,L"FFriendsMesh",L"MaxClientFriendBeacons",param_1 + 4,&DAT_1468e2410);
  FConfigCacheIni::GetInt
            (DAT_1468b6148,L"FFriendsMesh",L"MaxHostFriendBeaconConnections",
             (longlong)param_1 + 0x24,&DAT_1468e2410);
  FConfigCacheIni::GetFloat
            (DAT_1468b6148,L"FFriendsMesh",L"FriendReconnectDelaySeconds",param_1 + 5,&DAT_1468e2410
            );
  FConfigCacheIni::GetFloat
            (DAT_1468b6148,L"FFriendsMesh",L"FriendReconnectDelaySecondsJitter",
             (longlong)param_1 + 0x2c,&DAT_1468e2410);
  iVar6 = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  if (*(int *)((longlong)param_1 + 0x3c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 6,0);
  }
  if (0 < *(int *)(param_1 + 4)) {
    do {
      FString::PrintfImpl(&local_38,L"%s%d",*param_1,iVar6);
      plVar5 = (longlong *)&DAT_143f3eda8;
      if (local_30 != 0) {
        plVar5 = local_38;
      }
      FName::FName(local_res18,plVar5,1);
      if (local_38 != (longlong *)0x0) {
        FMemory::Free();
      }
      iVar1 = *(int *)(param_1 + 7);
      *(int *)(param_1 + 7) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0x3c) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 6,iVar1);
      }
      iVar6 = iVar6 + 1;
      *(undefined8 *)(param_1[6] + (longlong)iVar1 * 8) = local_res18[0];
    } while (iVar6 < *(int *)(param_1 + 4));
  }
  if ((param_1[1] == 0) || (plVar5 = *(longlong **)(param_1[1] + 0xae8), plVar5 == (longlong *)0x0))
  goto LAB_140d87dbe;
  local_38 = (longlong *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  local_30 = 3;
  local_38 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)IDelegateInstance::vftable;
    *plVar3 = (longlong)&DAT_143f3ed00;
    plVar3[2] = (longlong)FUN_140d8a200;
    plVar3[1] = (longlong)param_1;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar2;
    *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  puVar4 = (undefined8 *)(**(code **)(*plVar5 + 0x78))(plVar5,local_res18,&local_38);
  param_1[0x11] = *puVar4;
  if (local_30 == 0) {
LAB_140d87b65:
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  else if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
    goto LAB_140d87b65;
  }
  plVar5 = *(longlong **)(param_1[1] + 0xae8);
  local_38 = (longlong *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  local_30 = 3;
  local_38 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)IDelegateInstance::vftable;
    *plVar3 = (longlong)&DAT_143f3ed00;
    plVar3[2] = (longlong)FUN_140d8a5a0;
    plVar3[1] = (longlong)param_1;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar2;
    *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  puVar4 = (undefined8 *)(**(code **)(*plVar5 + 0x18))(plVar5,local_res18,&local_38);
  param_1[0x12] = *puVar4;
  if (local_30 == 0) {
LAB_140d87c27:
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  else if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
    goto LAB_140d87c27;
  }
  plVar5 = *(longlong **)(param_1[1] + 0xae8);
  local_38 = (longlong *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  local_30 = 3;
  local_38 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)IDelegateInstance::vftable;
    *plVar3 = (longlong)&DAT_143f3ed00;
    plVar3[2] = (longlong)FUN_140d8a3c0;
    plVar3[1] = (longlong)param_1;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar2;
    *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  puVar4 = (undefined8 *)(**(code **)(*plVar5 + 0xd8))(plVar5,local_res18,&local_38);
  param_1[0x13] = *puVar4;
  if (local_30 == 0) {
LAB_140d87cec:
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  else if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
    goto LAB_140d87cec;
  }
  plVar5 = *(longlong **)(param_1[1] + 0xae8);
  local_38 = (longlong *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  local_30 = 3;
  local_38 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)IDelegateInstance::vftable;
    *plVar3 = (longlong)&DAT_143f3ed00;
    plVar3[2] = (longlong)FUN_140d8a1c0;
    plVar3[1] = (longlong)param_1;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar2;
    *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  puVar4 = (undefined8 *)(**(code **)(*plVar5 + 0x218))(plVar5,local_res18,&local_38);
  param_1[0x14] = *puVar4;
  if (local_30 != 0) {
    if (local_38 == (longlong *)0x0) goto LAB_140d87dbe;
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
LAB_140d87dbe:
  FUN_140d703a0(param_1);
  return;
}



// FUNCTION 140d87de0 FUN_140d87de0 body=398 status=ok
// SIG undefined FUN_140d87de0(void)

void FUN_140d87de0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  longlong *local_38;
  int local_30;
  longlong *local_28;
  longlong *local_20;
  
  plVar5 = (longlong *)FName::FName(local_res8,&DAT_14451a8a8,1);
  if ((*(longlong *)(param_1 + 0x28) == *plVar5) ||
     (plVar5 = (longlong *)FName::FName(local_res10,L"EPIC",1),
     *(longlong *)(param_1 + 0x28) == *plVar5)) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  *(undefined1 *)(param_1 + 0x58) = uVar4;
  *(undefined1 *)(param_1 + 0x59) = 0;
  Online::GetSessionInterface(&local_28,*(undefined8 *)(param_1 + 0x28));
  if (local_28 != (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    local_30 = 3;
    local_38 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      plVar5[1] = param_1;
      *plVar5 = (longlong)&DAT_143f3ed00;
      plVar5[2] = (longlong)FUN_140d8bc90;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar5[4] = lVar6;
      *plVar5 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    puVar7 = (undefined8 *)(**(code **)(*local_28 + 0x10))(local_28,local_res18,&local_38);
    *(undefined8 *)(param_1 + 0x68) = *puVar7;
    if (local_30 != 0) {
      if (local_38 == (longlong *)0x0) goto LAB_140d87f1f;
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
LAB_140d87f1f:
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
  return;
}



// FUNCTION 140d87f70 FUN_140d87f70 body=125 status=ok
// SIG undefined FUN_140d87f70(void)

void FUN_140d87f70(undefined8 *param_1)

{
  undefined8 local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14686ee00) {
    _Init_thread_header(&DAT_14686ee00);
    if (DAT_14686ee00 == -1) {
      DAT_14686edf8 = FUN_140d84c40();
      _Init_thread_footer(&DAT_14686ee00);
    }
  }
  if (local_res8 != param_1) {
    *param_1 = *(undefined8 *)(DAT_14686edf8 + 0x70);
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}



// FUNCTION 140d87ff0 FUN_140d87ff0 body=2060 status=ok
// SIG undefined FUN_140d87ff0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d87ff0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  ulonglong *puVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  longlong *plVar23;
  ulonglong uVar24;
  undefined1 local_res20 [8];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined **local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong local_f0;
  undefined **local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined **local_a8;
  longlong *local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80 [2];
  undefined1 local_70 [24];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  if ((param_3 != (longlong *)0x0) &&
     (lVar11 = (**(code **)(*param_3 + 0x148))(param_3), lVar11 != 0)) {
    local_d0 = (longlong *)param_2[1];
    local_d8 = *param_2;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
      UNLOCK();
    }
    local_e0 = &PTR_FUN_143f740c8;
    local_c8 = 0;
    local_c0 = 0;
    FUN_1404c0940(param_1 + 8,&local_e0);
    if (local_c8 != 0) {
      FMemory::Free();
    }
    plVar18 = local_d0;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar23 = local_d0 + 1;
      lVar16 = *plVar23;
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        iVar21 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar21 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
    puVar12 = (undefined8 *)FDateTime::UtcNow(local_res20);
    *(undefined8 *)(param_1 + 0x60) = *puVar12;
    puVar13 = (undefined4 *)FGuid::NewGuid(local_70);
    uVar9 = puVar13[1];
    uVar10 = puVar13[2];
    uVar5 = puVar13[3];
    *(undefined4 *)(param_1 + 0x68) = *puVar13;
    *(undefined4 *)(param_1 + 0x6c) = uVar9;
    *(undefined4 *)(param_1 + 0x70) = uVar10;
    *(undefined4 *)(param_1 + 0x74) = uVar5;
    uVar14 = FUN_1428cc8c0(lVar11,local_80);
    FString::operator=(param_1 + 0x88,uVar14);
    if (local_80[0] != 0) {
      FMemory::Free();
    }
    cVar8 = FUN_140bca8a0(param_3);
    if (cVar8 == '\0') {
      lVar11 = *(longlong *)(lVar11 + 0x148);
      if (lVar11 != 0) {
        plVar23 = *(longlong **)(lVar11 + 0x470);
        plVar18 = plVar23 + *(int *)(lVar11 + 0x478);
        for (; plVar23 != plVar18; plVar23 = plVar23 + 1) {
          uVar9 = 0;
          plVar3 = (longlong *)*plVar23;
          if (plVar3 != (longlong *)0x0) {
            lVar11 = UInputKeySelector::GetPrivateStaticClass();
            if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
                lVar11 + 0x88)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (((bVar6) && ((*(uint *)((longlong)plVar3 + 0x484) & 0x10) == 0)) &&
               ((*(uint *)((longlong)plVar3 + 0x484) & 4) == 0)) {
              lVar11 = plVar3[0x98];
              plVar4 = (longlong *)plVar3[0x97];
              if (lVar11 != 0) {
                LOCK();
                *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
                UNLOCK();
              }
              local_90 = 0;
              local_a8 = &PTR_FUN_143f740c8;
              local_88 = 0;
              local_a0 = plVar4;
              local_98 = lVar11;
              if ((plVar4 == (longlong *)0x0) ||
                 (cVar8 = (**(code **)(*plVar4 + 0x20))(plVar4), cVar8 == '\0')) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              if (bVar6) {
                if (plVar3[0xae] != 0) {
                  uVar9 = FUN_1409ac010();
                }
                cVar8 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,plVar4);
                if (cVar8 == '\0') {
                  lVar16 = param_1 + 0xa8;
                  cVar8 = FUN_140d5bc10(lVar16,&local_a8);
                  if (cVar8 == '\0') {
                    iVar21 = *(int *)(param_1 + 0x150);
                    lVar17 = (longlong)iVar21;
                    *(int *)(param_1 + 0x150) = iVar21 + 1;
                    if (*(int *)(param_1 + 0x154) < iVar21 + 1) {
                      TArray<FGPUSortManager::FSortBatch,TInlineAllocator<4,TSizedDefaultAllocator<32>_>_>
                      ::ResizeGrow(lVar16,iVar21);
                    }
                    lVar20 = *(longlong *)(param_1 + 0x148);
                    if (*(longlong *)(param_1 + 0x148) == 0) {
                      lVar20 = lVar16;
                    }
                    *(undefined ***)(lVar20 + lVar17 * 0x28) = &PTR_FUN_143f73d18;
                    *(longlong **)(lVar20 + 8 + lVar17 * 0x28) = plVar4;
                    *(longlong *)(lVar20 + 0x10 + lVar17 * 0x28) = lVar11;
                    if (lVar11 != 0) {
                      LOCK();
                      *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
                      UNLOCK();
                    }
                    *(undefined ***)(lVar20 + lVar17 * 0x28) = &PTR_FUN_143f740c8;
                    *(undefined8 *)(lVar20 + 0x18 + lVar17 * 0x28) = 0;
                    *(undefined8 *)(lVar20 + 0x20 + lVar17 * 0x28) = 0;
                    iVar21 = *(int *)(param_1 + 0x170);
                    *(int *)(param_1 + 0x170) = iVar21 + 1;
                    if (*(int *)(param_1 + 0x174) < iVar21 + 1) {
                      TArray<enum_D3D12_RESOURCE_STATES,TInlineAllocator<4,FDefaultAllocator>_>::
                      ResizeGrow(param_1 + 0x158,iVar21);
                    }
                    lVar11 = *(longlong *)(param_1 + 0x168);
                    if (*(longlong *)(param_1 + 0x168) == 0) {
                      lVar11 = param_1 + 0x158;
                    }
                    *(undefined4 *)(lVar11 + (longlong)iVar21 * 4) = uVar9;
                  }
                }
                else {
                  *(int *)(param_1 + 0x78) = (int)plVar3[0xad];
                  *(undefined4 *)(param_1 + 0x7c) = uVar9;
                  lVar11 = (**(code **)(*plVar3 + 0x678))(plVar3);
                  if (lVar11 != 0) {
                    lVar11 = *(longlong *)(lVar11 + 0x168);
                    if (lVar11 == 0) {
                      local_b0 = DAT_1468b5d98;
                      puVar12 = &local_b8;
                      local_b8 = _DAT_1468b5d90;
                    }
                    else {
                      local_58 = *(undefined4 *)(lVar11 + 0x220);
                      uStack_54 = *(undefined4 *)(lVar11 + 0x224);
                      uStack_50 = *(undefined4 *)(lVar11 + 0x228);
                      uStack_4c = *(undefined4 *)(lVar11 + 0x22c);
                      puVar12 = (undefined8 *)&local_118;
                      local_118 = local_58;
                      local_110 = uStack_50;
                      uStack_114 = uStack_54;
                    }
                    uVar9 = *(undefined4 *)(puVar12 + 1);
                    *(undefined8 *)(param_1 + 0x98) = *puVar12;
                    *(undefined4 *)(param_1 + 0xa0) = uVar9;
                  }
                }
              }
              FUN_1404bf980(&local_a8);
            }
          }
        }
      }
    }
    else {
      puVar15 = (ulonglong *)UListView::OnItemSelectionChanged();
      uVar24 = 0;
      plVar18 = (longlong *)*puVar15;
      uVar22 = (longlong)(int)puVar15[1] & 0x1fffffffffffffff;
      if (plVar18 + (int)puVar15[1] < plVar18) {
        uVar22 = uVar24;
      }
      if (uVar22 != 0) {
        do {
          if (*plVar18 != 0) {
            FUN_142547b50(*plVar18,&local_108);
            cVar8 = (**(code **)(*local_100 + 0x20))();
            if ((cVar8 != '\0') && (lVar16 = FUN_140c125c0(&local_108,lVar11), lVar16 != 0)) {
              uVar9 = 0;
              lVar17 = FUN_140d3b710(lVar16);
              if (lVar17 != 0) {
                uVar9 = FUN_1409ac010(lVar17);
              }
              cVar8 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,local_100);
              if (cVar8 == '\0') {
                lVar16 = param_1 + 0xa8;
                cVar8 = FUN_140d5bc10(lVar16,&local_108);
                if (cVar8 == '\0') {
                  iVar21 = *(int *)(param_1 + 0x150);
                  lVar17 = (longlong)iVar21;
                  *(int *)(param_1 + 0x150) = iVar21 + 1;
                  if (*(int *)(param_1 + 0x154) < iVar21 + 1) {
                    TArray<FGPUSortManager::FSortBatch,TInlineAllocator<4,TSizedDefaultAllocator<32>_>_>
                    ::ResizeGrow(lVar16,iVar21);
                  }
                  lVar20 = *(longlong *)(param_1 + 0x148);
                  if (*(longlong *)(param_1 + 0x148) == 0) {
                    lVar20 = lVar16;
                  }
                  *(undefined ***)(lVar20 + lVar17 * 0x28) = &PTR_FUN_143f73d18;
                  *(longlong **)(lVar20 + 8 + lVar17 * 0x28) = local_100;
                  *(longlong **)(lVar20 + 0x10 + lVar17 * 0x28) = local_f8;
                  if (local_f8 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
                    UNLOCK();
                  }
                  *(undefined ***)(lVar20 + lVar17 * 0x28) = &PTR_FUN_143f740c8;
                  *(undefined8 *)(lVar20 + 0x18 + lVar17 * 0x28) = 0;
                  *(undefined8 *)(lVar20 + 0x20 + lVar17 * 0x28) = 0;
                  iVar21 = *(int *)(param_1 + 0x170);
                  *(int *)(param_1 + 0x170) = iVar21 + 1;
                  if (*(int *)(param_1 + 0x174) < iVar21 + 1) {
                    TArray<enum_D3D12_RESOURCE_STATES,TInlineAllocator<4,FDefaultAllocator>_>::
                    ResizeGrow(param_1 + 0x158,iVar21);
                  }
                  lVar16 = *(longlong *)(param_1 + 0x168);
                  if (*(longlong *)(param_1 + 0x168) == 0) {
                    lVar16 = param_1 + 0x158;
                  }
                  *(undefined4 *)(lVar16 + (longlong)iVar21 * 4) = uVar9;
                }
              }
              else {
                uVar10 = FUN_140c10350(*(undefined4 *)(lVar16 + 0xa0));
                *(undefined4 *)(param_1 + 0x78) = uVar10;
                *(undefined4 *)(param_1 + 0x7c) = uVar9;
              }
            }
            local_108 = &PTR_FUN_143f740c8;
            if (local_f0 != 0) {
              FMemory::Free();
            }
            plVar23 = local_f8;
            local_108 = &PTR_FUN_143f73d18;
            if (local_f8 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_f8 + 1;
              lVar16 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar16 == 1) {
                (**(code **)*local_f8)(local_f8);
                LOCK();
                piVar1 = (int *)((longlong)plVar23 + 0xc);
                iVar21 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar21 == 1) {
                  (**(code **)(*plVar23 + 8))(plVar23,1);
                }
              }
            }
          }
          plVar18 = plVar18 + 1;
          uVar24 = uVar24 + 1;
        } while (uVar24 != uVar22);
      }
      plVar18 = (longlong *)ULandscapeComponent::GetWeightmapTextures(param_3);
      lVar11 = *plVar18;
      lVar16 = (longlong)(int)plVar18[1] * 0x118 + lVar11;
      if (lVar11 != lVar16) {
        lVar17 = param_1 + 0xa8;
        do {
          iVar21 = *(int *)(param_1 + 0x150);
          lVar20 = *(longlong *)(param_1 + 0x148);
          if (*(longlong *)(param_1 + 0x148) == 0) {
            lVar20 = lVar17;
          }
          lVar2 = lVar20 + (longlong)iVar21 * 0x28;
          if (lVar20 != lVar2) {
            do {
              if ((*(longlong **)(lVar20 + 8) == (longlong *)0x0) ||
                 (cVar8 = (**(code **)(**(longlong **)(lVar20 + 8) + 0x20))(), cVar8 == '\0')) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              if (bVar6) {
                if ((*(longlong **)(lVar11 + 8) == (longlong *)0x0) ||
                   (cVar8 = (**(code **)(**(longlong **)(lVar11 + 8) + 0x20))(), cVar8 == '\0')) {
                  bVar6 = false;
                }
                else {
                  bVar6 = true;
                }
                if (!bVar6) goto LAB_140d883ff;
                bVar6 = true;
              }
              else {
LAB_140d883ff:
                bVar6 = false;
              }
              if ((*(longlong **)(lVar20 + 8) == (longlong *)0x0) ||
                 (cVar8 = (**(code **)(**(longlong **)(lVar20 + 8) + 0x20))(), cVar8 == '\0')) {
                bVar7 = false;
              }
              else {
                bVar7 = true;
              }
              if (bVar7) {
LAB_140d8843c:
                if ((bVar6) &&
                   (cVar8 = (**(code **)**(undefined8 **)(lVar11 + 8))
                                      (*(undefined8 **)(lVar11 + 8),*(undefined8 *)(lVar20 + 8)),
                   cVar8 != '\0')) goto LAB_140d88452;
                bVar6 = false;
              }
              else {
                if ((*(longlong **)(lVar11 + 8) == (longlong *)0x0) ||
                   (cVar8 = (**(code **)(**(longlong **)(lVar11 + 8) + 0x20))(), cVar8 == '\0')) {
                  bVar7 = false;
                }
                else {
                  bVar7 = true;
                }
                if (bVar7) goto LAB_140d8843c;
LAB_140d88452:
                bVar6 = true;
              }
              if (bVar6) goto LAB_140d88526;
              lVar20 = lVar20 + 0x28;
            } while (lVar20 != lVar2);
            iVar21 = *(int *)(param_1 + 0x150);
          }
          *(int *)(param_1 + 0x150) = iVar21 + 1;
          if (*(int *)(param_1 + 0x154) < iVar21 + 1) {
            TArray<FGPUSortManager::FSortBatch,TInlineAllocator<4,TSizedDefaultAllocator<32>_>_>::
            ResizeGrow(lVar17,iVar21);
          }
          lVar20 = *(longlong *)(param_1 + 0x148);
          if (*(longlong *)(param_1 + 0x148) == 0) {
            lVar20 = lVar17;
          }
          lVar19 = (longlong)iVar21;
          *(undefined ***)(lVar20 + lVar19 * 0x28) = &PTR_FUN_143f73d18;
          *(undefined8 *)(lVar20 + 8 + lVar19 * 0x28) = *(undefined8 *)(lVar11 + 8);
          lVar2 = *(longlong *)(lVar11 + 0x10);
          *(longlong *)(lVar20 + 0x10 + lVar19 * 0x28) = lVar2;
          if (lVar2 != 0) {
            LOCK();
            *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
            UNLOCK();
          }
          *(undefined ***)(lVar20 + lVar19 * 0x28) = &PTR_FUN_143f740c8;
          *(undefined8 *)(lVar20 + 0x18 + lVar19 * 0x28) = 0;
          *(undefined8 *)(lVar20 + 0x20 + lVar19 * 0x28) = 0;
          iVar21 = *(int *)(param_1 + 0x170);
          *(int *)(param_1 + 0x170) = iVar21 + 1;
          if (*(int *)(param_1 + 0x174) < iVar21 + 1) {
            TArray<enum_D3D12_RESOURCE_STATES,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                      (param_1 + 0x158,iVar21);
          }
          lVar20 = *(longlong *)(param_1 + 0x168);
          if (*(longlong *)(param_1 + 0x168) == 0) {
            lVar20 = param_1 + 0x158;
          }
          *(undefined4 *)(lVar20 + (longlong)iVar21 * 4) = *(undefined4 *)(lVar11 + 0x54);
LAB_140d88526:
          lVar11 = lVar11 + 0x118;
        } while (lVar11 != lVar16);
      }
    }
  }
  return;
}



// FUNCTION 140d88800 FUN_140d88800 body=351 status=ok
// SIG undefined FUN_140d88800(void)

void FUN_140d88800(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 uVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  longlong local_28 [2];
  undefined8 local_18 [2];
  
  if ((*(longlong **)(param_2 + 8) == (longlong *)0x0) ||
     (cVar3 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  puVar7 = (undefined1 *)0x0;
  iVar8 = 0;
  lVar4 = FUN_14244bf10(param_3,*(undefined8 *)(param_2 + 8));
  if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x30), lVar4 != 0)) {
    lVar5 = FUN_14145f370();
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
      lVar4 = *(longlong *)(lVar4 + 0xc98);
      goto LAB_140d888bb;
    }
  }
  lVar4 = 0;
LAB_140d888bb:
  if (lVar4 != 0) {
    puVar6 = (undefined8 *)FUN_140e20c40(lVar4,local_28);
    if (local_18 != puVar6) {
      puVar7 = (undefined1 *)*puVar6;
      *puVar6 = 0;
      iVar8 = *(int *)(puVar6 + 1);
      puVar6[1] = 0;
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    if (iVar8 == 8) {
      *(undefined1 *)(param_1 + 8) = *puVar7;
      *(undefined1 *)(param_1 + 10) = puVar7[1];
      *(undefined1 *)(param_1 + 9) = puVar7[2];
      *(undefined1 *)(param_1 + 0xb) = puVar7[3];
      *(undefined1 *)(param_1 + 0xc) = puVar7[4];
      *(undefined1 *)(param_1 + 0xd) = puVar7[7];
      *(undefined1 *)(param_1 + 0xe) = puVar7[5];
      uVar1 = puVar7[6];
      *(undefined1 *)(param_1 + 0xe) = uVar1;
      *(undefined1 *)(param_1 + 0xf) = uVar1;
    }
    if (puVar7 != (undefined1 *)0x0) {
      FMemory::Free(puVar7);
    }
  }
  return;
}



// FUNCTION 140d88960 FUN_140d88960 body=1009 status=ok
// SIG undefined FUN_140d88960(void)

void FUN_140d88960(longlong param_1,longlong param_2,longlong *param_3,undefined1 param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_28 [2];
  
  lVar4 = 0;
  if (param_3 != (longlong *)0x0) {
    lVar4 = (**(code **)(*param_3 + 0x148))(param_3);
  }
  if (((*(longlong **)(param_2 + 8) != (longlong *)0x0) &&
      (cVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar2 != '\0')) && (lVar4 != 0)
     ) {
    plVar5 = (longlong *)FUN_140b28f40(local_28,param_2,1,lVar4,param_4,param_1 + 0x98);
    plVar1 = (longlong *)(param_1 + 8);
    if (plVar1 != plVar5) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = *plVar5;
      *plVar5 = 0;
      *(int *)(param_1 + 0x10) = (int)plVar5[1];
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((longlong)plVar5 + 0xc);
      plVar5[1] = 0;
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    plVar5 = (longlong *)FUN_140b28f40(local_28,param_2,2,lVar4,param_4,param_1 + 0xa8);
    plVar1 = (longlong *)(param_1 + 0x18);
    if (plVar1 != plVar5) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = *plVar5;
      *plVar5 = 0;
      *(int *)(param_1 + 0x20) = (int)plVar5[1];
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((longlong)plVar5 + 0xc);
      plVar5[1] = 0;
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    plVar5 = (longlong *)FUN_140b28f40(local_28,param_2,3,lVar4,param_4,param_1 + 0xb8);
    plVar1 = (longlong *)(param_1 + 0x28);
    if (plVar1 != plVar5) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = *plVar5;
      *plVar5 = 0;
      *(int *)(param_1 + 0x30) = (int)plVar5[1];
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)((longlong)plVar5 + 0xc);
      plVar5[1] = 0;
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    plVar5 = (longlong *)FUN_140b28f40(local_28,param_2,4,lVar4,param_4,param_1 + 200);
    plVar1 = (longlong *)(param_1 + 0x38);
    if (plVar1 != plVar5) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = *plVar5;
      *plVar5 = 0;
      *(int *)(param_1 + 0x40) = (int)plVar5[1];
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)((longlong)plVar5 + 0xc);
      plVar5[1] = 0;
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    plVar5 = (longlong *)FUN_140b28e80(local_28,param_2,lVar4,param_4,param_1 + 0xd8);
    plVar1 = (longlong *)(param_1 + 0x48);
    if (plVar1 != plVar5) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = *plVar5;
      *plVar5 = 0;
      *(int *)(param_1 + 0x50) = (int)plVar5[1];
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)((longlong)plVar5 + 0xc);
      plVar5[1] = 0;
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    plVar5 = (longlong *)FUN_140b28ee0(local_28,param_2,lVar4,param_4,param_1 + 0xe8);
    plVar1 = (longlong *)(param_1 + 0x58);
    if (plVar1 != plVar5) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = *plVar5;
      *plVar5 = 0;
      *(int *)(param_1 + 0x60) = (int)plVar5[1];
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)((longlong)plVar5 + 0xc);
      plVar5[1] = 0;
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    plVar5 = (longlong *)FUN_140b28a20(local_28,param_2,lVar4,param_4,param_1 + 0x108);
    plVar1 = (longlong *)(param_1 + 0x78);
    if (plVar1 != plVar5) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = *plVar5;
      *plVar5 = 0;
      *(int *)(param_1 + 0x80) = (int)plVar5[1];
      *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)((longlong)plVar5 + 0xc);
      plVar5[1] = 0;
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    plVar5 = (longlong *)FUN_140b28a80(local_28,param_2,lVar4,param_4,param_1 + 0xf8);
    plVar1 = (longlong *)(param_1 + 0x68);
    if (plVar1 != plVar5) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = *plVar5;
      *plVar5 = 0;
      *(int *)(param_1 + 0x70) = (int)plVar5[1];
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)((longlong)plVar5 + 0xc);
      plVar5[1] = 0;
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    uVar3 = FUN_140b27f60(param_2,lVar4);
    *(undefined4 *)(param_1 + 0x88) = uVar3;
    uVar3 = FUN_140b27ea0(param_2,lVar4);
    *(undefined4 *)(param_1 + 0x8c) = uVar3;
    uVar3 = FUN_140b27fc0(param_2,lVar4);
    *(undefined4 *)(param_1 + 0x90) = uVar3;
    uVar3 = FUN_140b27f00(param_2,lVar4);
    *(undefined4 *)(param_1 + 0x94) = uVar3;
  }
  return;
}



// FUNCTION 140d88d60 FUN_140d88d60 body=955 status=ok
// SIG undefined FUN_140d88d60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d88d60(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  char local_res18;
  char local_res19;
  undefined8 local_res20;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58 [2];
  longlong local_48 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (param_3 != (longlong *)0x0) {
    if ((*(longlong **)(param_2 + 8) == (longlong *)0x0) ||
       (cVar5 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar5 == '\0')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      uVar11 = *(undefined8 *)(param_2 + 8);
      plVar13 = *(longlong **)(param_2 + 0x10);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
      }
      local_78._0_4_ = (undefined4)uVar11;
      local_78._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
      uStack_70._0_4_ = SUB84(plVar13,0);
      uStack_70._4_4_ = (undefined4)((ulonglong)plVar13 >> 0x20);
      local_68 = (undefined4)local_78;
      uStack_64 = local_78._4_4_;
      uStack_60 = (undefined4)uStack_70;
      uStack_5c = uStack_70._4_4_;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
      }
      local_78 = uVar11;
      uStack_70 = plVar13;
      lVar8 = FUN_14244c070(param_3,&local_68);
      if (((lVar8 != 0) && (lVar9 = (**(code **)(*param_3 + 0x148))(param_3), lVar9 != 0)) &&
         (lVar8 = UPlayer::GetPlayerController(lVar8,lVar9), lVar8 != 0)) {
        lVar10 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if ((bVar4) && (lVar10 = FUN_140bba5e0(param_3), lVar10 != 0)) {
          uVar7 = FUN_140bb6e30(param_3,&local_78);
          *(undefined4 *)(param_1 + 8) = uVar7;
          uVar11 = FUN_140bb7110(param_3,local_58);
          FString::operator=(param_1 + 0x10,uVar11);
          if (local_58[0] != 0) {
            FMemory::Free();
          }
          uVar11 = FUN_140bb7010(param_3,local_48);
          FString::operator=(param_1 + 0x20,uVar11);
          if (local_48[0] != 0) {
            FMemory::Free();
          }
          uVar7 = FUN_140bba270(param_3);
          *(undefined4 *)(param_1 + 0x30) = uVar7;
          uVar7 = FUN_140bb6bd0(param_3,&local_78);
          *(undefined4 *)(param_1 + 0x34) = uVar7;
          uVar7 = FUN_140c12b10(lVar9);
          *(undefined4 *)(param_1 + 0x38) = uVar7;
          uVar7 = FUN_140d3adc0(lVar10,param_2);
          *(undefined4 *)(param_1 + 0x4c) = uVar7;
          uVar6 = SVirtualWindow::SupportsKeyboardFocus(lVar8);
          *(undefined1 *)(param_1 + 0x49) = uVar6;
          FUN_140dbc5d0(param_3 + 0xbe,&local_res18);
          if ((local_res18 == '\x02') && (local_res19 != '\x01')) {
            *(undefined1 *)(param_1 + 0x48) = 1;
          }
          cVar5 = FUN_140bca8a0(param_3);
          if (cVar5 == '\0') {
            uVar7 = FUN_140d00180(lVar8);
            *(undefined4 *)(param_1 + 0x54) = uVar7;
            if (*(longlong *)(lVar8 + 0x488) != 0) {
              lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x488) + 0x168);
              if (lVar9 == 0) {
                local_84 = DAT_1468b5d98;
                puVar12 = &local_8c;
                local_8c = _DAT_1468b5d90;
              }
              else {
                local_38 = *(undefined4 *)(lVar9 + 0x220);
                uStack_34 = *(undefined4 *)(lVar9 + 0x224);
                uStack_30 = *(undefined4 *)(lVar9 + 0x228);
                uStack_2c = *(undefined4 *)(lVar9 + 0x22c);
                puVar12 = (undefined8 *)&local_98;
                local_98 = local_38;
                local_90 = uStack_30;
                uStack_94 = uStack_34;
              }
              uVar7 = *(undefined4 *)(puVar12 + 1);
              *(undefined8 *)(param_1 + 0x3c) = *puVar12;
              *(undefined4 *)(param_1 + 0x44) = uVar7;
            }
            local_res20 = FUN_1414b0d60();
            plVar13 = (longlong *)AGameStateBase::OnRep_GameModeClass(lVar8,local_res20);
            if (plVar13 != (longlong *)0x0) {
              lVar9 = FUN_1414b0d60();
              if ((*(int *)(plVar13[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar13[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
                  lVar9 + 0x88)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (bVar4) {
                uVar7 = (**(code **)(*plVar13 + 0x468))(plVar13);
                *(undefined4 *)(param_1 + 0x50) = uVar7;
              }
            }
            lVar8 = *(longlong *)(lVar8 + 0x460);
            if (lVar8 != 0) {
              lVar9 = UInputKeySelector::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (bVar4) {
                *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)(lVar8 + 0x5d6);
              }
            }
          }
          else {
            lVar8 = FUN_140d3a960(lVar10,&local_78);
            if (lVar8 != 0) {
              cVar5 = FWebMMovieStreamer::IsLastMovieInPlaylist(lVar8);
              if ((cVar5 == '\0') && (cVar5 = FUN_140d3db00(lVar8), cVar5 != '\0')) {
                uVar6 = 1;
              }
              else {
                uVar6 = 0;
              }
              *(undefined1 *)(param_1 + 0x4a) = uVar6;
              *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(lVar8 + 0x38);
            }
            lVar8 = FUN_140d3a750(lVar10,&local_78);
            if (lVar8 != 0) {
              *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(lVar8 + 0x428);
            }
          }
        }
      }
      plVar13 = uStack_70;
      if (uStack_70 != (longlong *)0x0) {
        LOCK();
        plVar1 = uStack_70 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*uStack_70)(uStack_70);
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
    }
  }
  return;
}



// FUNCTION 140d89120 FUN_140d89120 body=1551 status=ok
// SIG undefined FUN_140d89120(void)

ulonglong FUN_140d89120(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  void *_Src;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int *piVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  int *piVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  int *piVar14;
  longlong *plVar15;
  uint *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  longlong *plVar21;
  float fVar22;
  longlong *local_98;
  undefined8 local_90;
  longlong *local_88;
  int local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined1 local_50 [24];
  
  plVar15 = (longlong *)0x0;
  if ((*(longlong **)(param_2 + 8) == (longlong *)0x0) ||
     (cVar3 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar3 == '\0')) {
    uVar13 = 0;
  }
  else {
    uVar13 = 1;
  }
  if (((char)uVar13 != '\0') && (param_3 != (longlong *)0x0)) {
    local_98 = (longlong *)0x0;
    local_90 = 0;
    cVar3 = FUN_140bca8a0(param_3);
    plVar21 = plVar15;
    if (cVar3 == '\0') {
      local_68 = *(undefined8 *)(param_2 + 8);
      local_60 = *(longlong *)(param_2 + 0x10);
      if (local_60 != 0) {
        LOCK();
        *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
        UNLOCK();
        plVar21 = local_98;
      }
      uVar8 = FUN_14244c070(param_3,&local_68);
      (**(code **)(*param_3 + 0x148))(param_3);
      lVar4 = UPlayer::GetPlayerController(uVar8);
      if (lVar4 != 0) {
        lVar20 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar20 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar20 + 0x90) * 8) != lVar20 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) && (plVar5 = *(longlong **)(lVar4 + 0x848), plVar5 != (longlong *)0x0)) {
          lVar4 = FUN_1413f82e0();
          if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
              != lVar4 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            AGFireballProjectile::GetPrivateStaticClass();
            lVar4 = (**(code **)(*plVar5 + 0x628))(plVar5);
            if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x3b0), lVar4 != 0)) {
              local_80 = *(int *)(lVar4 + 0xb8);
              lVar20 = (longlong)local_80;
              _Src = *(void **)(lVar4 + 0xb0);
              local_88 = (longlong *)0x0;
              if (local_80 != 0) {
                TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(&local_88,local_80,0);
                plVar15 = local_88;
                _guard_xfg_dispatch_icall_nop(local_88,_Src,lVar20 * 0x30);
              }
              lVar4 = (longlong)local_80;
              if (plVar15 != plVar15 + lVar4 * 6) {
                plVar5 = plVar15 + 1;
                do {
                  uVar13 = local_90;
                  lVar20 = *plVar5;
                  if (lVar20 != 0) {
                    lVar18 = (longlong)(int)local_90;
                    lVar9 = plVar5[4];
                    iVar19 = (int)local_90 + 1;
                    local_90 = CONCAT44(local_90._4_4_,iVar19);
                    if (local_90._4_4_ < iVar19) {
                      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>
                      ::ResizeGrow(&local_98,uVar13 & 0xffffffff);
                      lVar20 = *plVar5;
                      plVar21 = local_98;
                    }
                    FUN_140d1fc10(plVar21 + lVar18 * 7,lVar20,(int)lVar9,(int)plVar5[3]);
                  }
                  plVar1 = plVar5 + 5;
                  plVar5 = plVar5 + 6;
                } while (plVar1 != plVar15 + lVar4 * 6);
              }
              if (plVar15 != (longlong *)0x0) {
                FMemory::Free(plVar15);
              }
            }
          }
        }
      }
    }
    else {
      lVar4 = FUN_140bba5e0(param_3);
      plVar5 = plVar15;
      if (lVar4 != 0) {
        local_78 = *(undefined8 *)(param_2 + 8);
        local_70 = *(longlong **)(param_2 + 0x10);
        if (local_70 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_70 + 1) = (int)local_70[1] + 1;
          UNLOCK();
          plVar21 = local_98;
        }
        plVar5 = (longlong *)FUN_140d3a960(lVar4);
        plVar15 = (longlong *)0x1;
      }
      plVar1 = local_70;
      if ((plVar15 != (longlong *)0x0) && (local_70 != (longlong *)0x0)) {
        LOCK();
        plVar15 = local_70 + 1;
        lVar4 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        plVar21 = local_98;
        if ((int)lVar4 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar7 = (int *)((longlong)plVar1 + 0xc);
          iVar19 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          plVar21 = local_98;
          if (iVar19 == 1) {
            (**(code **)(*plVar1 + 8))(plVar1);
            plVar21 = local_98;
          }
        }
      }
      if ((plVar5 != (longlong *)0x0) && (&local_98 != (longlong **)(plVar5 + 0x20))) {
        iVar19 = (int)plVar5[0x21];
        plVar15 = (longlong *)plVar5[0x20];
        local_90 = CONCAT44(local_90._4_4_,iVar19);
        if (iVar19 != 0) {
          TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy(&local_98,iVar19,0);
          plVar21 = local_98;
          puVar16 = (uint *)((longlong)local_98 + 0x24);
          do {
            puVar16[-3] = 0;
            puVar16[-2] = 0;
            puVar16[-1] = 0;
            puVar16[0] = 0;
            puVar16[-9] = 0xffffffff;
            puVar16[-8] = 0;
            puVar16[-5] = 0;
            puVar16[-4] = 0;
            puVar16[-1] = 0;
            if (0x7fffffff < *puVar16) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar16 + -3,0);
            }
            if (*(undefined2 **)(puVar16 + -3) != (undefined2 *)0x0) {
              **(undefined2 **)(puVar16 + -3) = 0;
            }
            puVar16[-7] = 0;
            puVar16[-9] = *(uint *)((longlong)plVar15 + (-0x24 - (longlong)plVar21) +
                                   (longlong)puVar16);
            puVar16[-8] = *(uint *)((longlong)plVar15 + (-0x20 - (longlong)plVar21) +
                                   (longlong)puVar16);
            puVar16[-7] = *(uint *)((longlong)plVar15 + (-0x1c - (longlong)plVar21) +
                                   (longlong)puVar16);
            local_58 = *(undefined8 *)
                        ((longlong)plVar15 + (-0x14 - (longlong)plVar21) + (longlong)puVar16);
            FString::FString(local_50,(longlong)puVar16 +
                                      (longlong)plVar15 + (-0xc - (longlong)plVar21));
            FSoftObjectPath::operator=(puVar16 + -5);
            puVar16[1] = *(uint *)((longlong)plVar15 + (4 - (longlong)plVar21) + (longlong)puVar16);
            puVar16[2] = *(uint *)((longlong)plVar15 + (8 - (longlong)plVar21) + (longlong)puVar16);
            puVar16[3] = *(uint *)((longlong)plVar15 + (0xc - (longlong)plVar21) + (longlong)puVar16
                                  );
            puVar16 = puVar16 + 0xe;
            iVar19 = iVar19 + -1;
          } while (iVar19 != 0);
        }
      }
    }
    uVar17 = param_1 + 8;
    uVar13 = (ulonglong)(*(longlong *)(param_1 + 0x38) != 0) - 1 & uVar17 |
             *(ulonglong *)(param_1 + 0x38);
    uVar6 = (longlong)*(int *)(param_1 + 0x40) * 0x10 + uVar13;
    for (; uVar13 != uVar6; uVar13 = uVar13 + 0x10) {
      *(undefined8 *)(uVar13 + 8) = 0;
      *(undefined4 *)(uVar13 + 4) = 0;
    }
    lVar4 = (longlong)(int)local_90;
    if (plVar21 != plVar21 + lVar4 * 7) {
      plVar15 = plVar21 + 6;
      do {
        iVar19 = *(int *)(param_1 + 0x40);
        piVar14 = (int *)((ulonglong)(*(longlong *)(param_1 + 0x38) != 0) - 1 & uVar17 |
                         *(ulonglong *)(param_1 + 0x38));
        piVar7 = piVar14 + (longlong)iVar19 * 4;
        if (piVar14 != piVar7) {
          piVar11 = piVar14;
          do {
            if (*piVar11 == (int)*plVar15) {
              if ((piVar11 != piVar7) &&
                 (iVar10 = (int)((longlong)piVar11 - (longlong)piVar14 >> 4), -1 < iVar10))
              goto LAB_140d895f1;
              break;
            }
            piVar11 = piVar11 + 4;
          } while (piVar11 != piVar7);
        }
        *(int *)(param_1 + 0x40) = iVar19 + 1;
        if (*(int *)(param_1 + 0x44) < iVar19 + 1) {
          TArray<FCurveHandle,TInlineAllocator<3,FDefaultAllocator>_>::ResizeGrow(uVar17);
        }
        uVar13 = *(ulonglong *)(param_1 + 0x38);
        if (*(ulonglong *)(param_1 + 0x38) == 0) {
          uVar13 = uVar17;
        }
        puVar12 = (undefined8 *)(uVar13 + (longlong)iVar19 * 0x10);
        *puVar12 = 0;
        puVar12[1] = 0;
        iVar10 = iVar19;
LAB_140d895f1:
        lVar20 = (longlong)iVar10;
        uVar13 = *(ulonglong *)(param_1 + 0x38);
        if (*(ulonglong *)(param_1 + 0x38) == 0) {
          uVar13 = uVar17;
        }
        *(int *)(uVar13 + lVar20 * 0x10) = (int)*plVar15;
        uVar13 = *(ulonglong *)(param_1 + 0x38);
        if (*(ulonglong *)(param_1 + 0x38) == 0) {
          uVar13 = uVar17;
        }
        piVar7 = (int *)(uVar13 + 8 + lVar20 * 0x10);
        *piVar7 = *piVar7 + (int)plVar15[-1];
        lVar9 = FUN_140d3b240(plVar15 + -6);
        if (lVar9 != 0) {
          uVar13 = *(ulonglong *)(param_1 + 0x38);
          if (*(ulonglong *)(param_1 + 0x38) == 0) {
            uVar13 = uVar17;
          }
          iVar19 = FUN_1409aa830(lVar9);
          piVar7 = (int *)(uVar13 + 0xc + lVar20 * 0x10);
          *piVar7 = *piVar7 + iVar19;
        }
        plVar5 = plVar15 + 1;
        plVar15 = plVar15 + 7;
      } while (plVar5 != plVar21 + lVar4 * 7);
    }
    uVar13 = -*(longlong *)(param_1 + 0x38);
    uVar6 = (ulonglong)(*(longlong *)(param_1 + 0x38) != 0) - 1 & uVar17 |
            *(ulonglong *)(param_1 + 0x38);
    uVar17 = (longlong)*(int *)(param_1 + 0x40) * 0x10 + uVar6;
    for (; uVar6 != uVar17; uVar6 = uVar6 + 0x10) {
      uVar13 = (ulonglong)*(uint *)(uVar6 + 0xc);
      fVar22 = (float)uVar13;
      if (fVar22 <= 0.0) {
LAB_140d896da:
        fVar22 = 0.0;
      }
      else {
        uVar13 = (ulonglong)*(uint *)(uVar6 + 8);
        fVar22 = (float)uVar13 / fVar22;
        if (fVar22 < 0.0) goto LAB_140d896da;
        if (1.0 <= fVar22) {
          fVar22 = 1.0;
        }
      }
      *(float *)(uVar6 + 4) = fVar22;
    }
    if ((int)local_90 != 0) {
      plVar15 = plVar21 + 3;
      iVar19 = (int)local_90;
      do {
        if (*plVar15 != 0) {
          uVar13 = FMemory::Free();
        }
        plVar15 = plVar15 + 7;
        iVar19 = iVar19 + -1;
      } while (iVar19 != 0);
    }
    if (plVar21 != (longlong *)0x0) {
      uVar13 = FMemory::Free(plVar21);
    }
  }
  return uVar13;
}



// FUNCTION 140d89730 FUN_140d89730 body=199 status=ok
// SIG undefined FUN_140d89730(void)

void FUN_140d89730(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 local_res18 [8];
  
  if (((param_3 != 0) && (*(longlong **)(param_2 + 8) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar1 != '\0')) {
    FUN_1404c0940(param_1 + 8,param_2);
    FUN_140d88d60(param_1 + 0x38,param_2,param_3);
    FUN_140d88960(param_1 + 0x90,param_2,param_3,param_4);
    FUN_140d89120(param_1 + 0x1a8,param_2,param_3);
    if (*(longlong **)(param_2 + 8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 8) + 0x20))();
    }
    FUN_140d88800(param_1 + 0x230,param_2,param_3);
    puVar2 = (undefined8 *)FDateTime::UtcNow(local_res18);
    *(undefined8 *)(param_1 + 0x30) = *puVar2;
  }
  return;
}



// FUNCTION 140d89800 FUN_140d89800 body=132 status=ok
// SIG undefined FUN_140d89800(void)

bool FUN_140d89800(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar5 = (longlong *)FUN_140d78ad0(param_1 + 0x40,local_18,param_2);
  lVar3 = *plVar5;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_10 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
    return lVar3 != 0;
  }
  return lVar3 != 0;
}



// FUNCTION 140d89890 FUN_140d89890 body=311 status=ok
// SIG undefined FUN_140d89890(void)

bool FUN_140d89890(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  longlong *local_18;
  longlong *local_10;
  
  plVar4 = (longlong *)(**(code **)(*(longlong *)*param_3 + 8))((longlong *)*param_3,local_res8);
  plVar7 = (longlong *)0x0;
  lVar2 = *plVar4;
  if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
    lVar5 = *(longlong *)(param_1 + 0xa8);
    if (*(longlong *)(param_1 + 0xa8) == 0) {
      lVar5 = param_1 + 0xa0;
    }
    iVar3 = *(int *)(lVar5 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                             (longlong)*(int *)(param_1 + 0xb0) - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)((longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 0x68));
        if (*plVar4 == lVar2) {
          if (iVar3 != -1) goto LAB_140d89931;
          break;
        }
        iVar3 = (int)plVar4[3];
      } while (iVar3 != -1);
    }
  }
  plVar4 = plVar7;
LAB_140d89931:
  plVar6 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar6 = plVar7;
  }
  if (plVar6 == (longlong *)0x0) {
    local_10 = (longlong *)0x0;
  }
  else {
    FUN_140d7db60(*plVar6,&local_18,param_2,param_3,param_4);
    plVar7 = local_18;
  }
  plVar4 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_10 + 1;
    lVar2 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return plVar7 != (longlong *)0x0;
}



// FUNCTION 140d899d0 FUN_140d899d0 body=46 status=ok
// SIG undefined FUN_140d899d0(void)

undefined1 FUN_140d899d0(void)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_140d82cf0();
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x68) == 0)) {
    cVar1 = FUN_1404d2e60(lVar2);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140d89a00 FUN_140d89a00 body=289 status=ok
// SIG undefined FUN_140d89a00(void)

undefined8 FUN_140d89a00(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  puVar9 = puVar10 + (longlong)*(int *)(param_1 + 0x68) * 2;
  while( true ) {
    if (puVar10 == puVar9) {
      return 0;
    }
    puVar7 = (undefined8 *)(**(code **)(*(longlong *)*puVar10 + 8))((longlong *)*puVar10,local_38);
    cVar6 = (*(code *)**(undefined8 **)*puVar7)((undefined8 *)*puVar7,*param_2);
    plVar3 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_30)(local_30);
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
    if (cVar6 != '\0') break;
    puVar10 = puVar10 + 2;
  }
  uVar8 = (**(code **)(*(longlong *)*puVar10 + 8))((longlong *)*puVar10,local_28);
  cVar6 = FUN_140d89800(param_1,uVar8);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  if (cVar6 != '\0') {
    return 0;
  }
  return 1;
}



// FUNCTION 140d89b30 FUN_140d89b30 body=259 status=ok
// SIG undefined FUN_140d89b30(void)

bool FUN_140d89b30(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  char cVar4;
  undefined8 *puVar5;
  int iVar6;
  bool bVar7;
  longlong lVar8;
  LARGE_INTEGER local_res8;
  undefined1 local_28 [8];
  longlong *local_20;
  
  fVar3 = *(float *)(param_1 + 0x28);
  puVar5 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_28);
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x58)) {
    lVar8 = 0;
    do {
      cVar4 = (*(code *)**(undefined8 **)*puVar5)
                        ((undefined8 *)*puVar5,
                         *(undefined8 *)(lVar8 + 8 + *(longlong *)(param_1 + 0x50)));
      if (cVar4 != '\0') {
        QueryPerformanceCounter(&local_res8);
        bVar7 = ((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0) -
                *(double *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar6 * 0x18) < (double)fVar3;
        goto LAB_140d89b93;
      }
      iVar6 = iVar6 + 1;
      lVar8 = lVar8 + 0x18;
    } while (iVar6 < *(int *)(param_1 + 0x58));
  }
  bVar7 = false;
LAB_140d89b93:
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return bVar7;
}



// FUNCTION 140d89c40 FUN_140d89c40 body=1404 status=ok
// SIG undefined FUN_140d89c40(void)

void FUN_140d89c40(longlong *param_1,longlong param_2,longlong param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  int local_e8 [2];
  undefined **local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined ***local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  undefined **local_78 [2];
  longlong *local_68;
  longlong local_60;
  
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  local_e8[0] = 0;
  if ((((*(longlong **)(param_2 + 8) != (longlong *)0x0) &&
       (cVar8 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar8 != '\0')) &&
      (*(longlong **)(param_3 + 8) != (longlong *)0x0)) &&
     (((cVar8 = (**(code **)(**(longlong **)(param_3 + 8) + 0x20))(), cVar8 != '\0' &&
       (((param_4[1] != 0 || param_4[2] != 0) || *param_4 != 0) || param_4[3] != 0)) &&
      (*param_1 != 0)))) {
    plVar10 = (longlong *)UListView::OnItemSelectionChanged();
    plVar12 = (longlong *)*plVar10;
    local_90 = plVar12 + (int)plVar10[1];
    if (plVar12 != local_90) {
      do {
        local_b8 = plVar12;
        if (*plVar12 == 0) {
          local_a8 = (longlong *)0x0;
          bVar4 = true;
          local_b0 = (longlong *)0x0;
          plVar10 = (longlong *)0x0;
        }
        else {
          bVar6 = true;
          bVar5 = true;
          lVar11 = FUN_142547b50(*plVar12,local_78);
          plVar10 = *(longlong **)(lVar11 + 0x10);
          local_b0 = *(longlong **)(lVar11 + 8);
          local_a0 = plVar10;
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
          }
        }
        plVar15 = local_a0;
        plVar3 = local_a8;
        plVar13 = local_b0;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        local_88 = local_b0;
        local_80 = plVar10;
        if ((bVar4) && (bVar4 = false, local_a8 != (longlong *)0x0)) {
          LOCK();
          plVar1 = local_a8 + 1;
          lVar11 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_a8)(local_a8);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar9 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        if ((bVar5) && (bVar5 = false, plVar15 != (longlong *)0x0)) {
          LOCK();
          plVar3 = plVar15 + 1;
          lVar11 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            iVar9 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15,1);
            }
          }
        }
        if (bVar6) {
          bVar6 = false;
          local_78[0] = &PTR_FUN_143f740c8;
          if (local_60 != 0) {
            FMemory::Free();
          }
          plVar3 = local_68;
          local_78[0] = &PTR_FUN_143f73d18;
          if (local_68 != (longlong *)0x0) {
            LOCK();
            plVar15 = local_68 + 1;
            lVar11 = *plVar15;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*local_68)(local_68);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              iVar9 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
        }
        if (plVar13 != (longlong *)0x0) {
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
          }
          local_e0 = &PTR_FUN_143f740c8;
          local_c8 = 0;
          local_c0 = 0;
          local_d8 = plVar13;
          local_d0 = plVar10;
          if ((int)param_1[2] != *(int *)((longlong)param_1 + 0x3c)) {
            if ((plVar13 == (longlong *)0x0) ||
               (cVar8 = (**(code **)(*plVar13 + 0x20))(plVar13), cVar8 == '\0')) {
              iVar9 = -1;
            }
            else {
              iVar9 = GetTypeHash(local_d8);
            }
            plVar12 = (longlong *)param_1[9];
            if ((longlong *)param_1[9] == (longlong *)0x0) {
              plVar12 = param_1 + 8;
            }
            iVar9 = *(int *)((longlong)plVar12 +
                            ((longlong)(int)param_1[10] - 1U & (longlong)iVar9) * 4);
            if (iVar9 != -1) {
              lVar11 = param_1[1];
              do {
                lVar14 = (longlong)iVar9 * 0x50;
                plVar12 = *(longlong **)(lVar14 + 8 + lVar11);
                if ((((plVar12 == (longlong *)0x0) ||
                     (cVar8 = (**(code **)(*plVar12 + 0x20))(), cVar8 == '\0')) ||
                    (local_d8 == (longlong *)0x0)) ||
                   (cVar8 = (**(code **)(*local_d8 + 0x20))(local_d8), cVar8 == '\0')) {
                  bVar7 = false;
                }
                else {
                  bVar7 = true;
                }
                plVar12 = *(longlong **)(lVar14 + lVar11 + 8);
                if ((((plVar12 == (longlong *)0x0) ||
                     (cVar8 = (**(code **)(*plVar12 + 0x20))(), cVar8 == '\0')) &&
                    ((local_d8 == (longlong *)0x0 ||
                     (cVar8 = (**(code **)(*local_d8 + 0x20))(local_d8), cVar8 == '\0')))) ||
                   ((bVar7 && (cVar8 = (**(code **)*local_d8)
                                                 (local_d8,*(undefined8 *)(lVar14 + lVar11 + 8)),
                              cVar8 != '\0')))) {
                  if ((iVar9 != -1) && (lVar14 = param_1[1] + lVar14, lVar14 != 0))
                  goto LAB_140d89fef;
                  break;
                }
                lVar11 = param_1[1];
                iVar9 = *(int *)(lVar14 + 0x48 + lVar11);
              } while (iVar9 != -1);
            }
          }
          local_98 = &local_e0;
          FUN_140d5c150(param_1 + 1,local_e8,&local_98,0);
          lVar14 = (longlong)local_e8[0] * 0x50 + param_1[1];
LAB_140d89fef:
          local_e0 = &PTR_FUN_143f740c8;
          if (local_c8 != 0) {
            FMemory::Free();
          }
          plVar12 = local_d0;
          local_e0 = &PTR_FUN_143f73d18;
          if (local_d0 != (longlong *)0x0) {
            LOCK();
            plVar13 = local_d0 + 1;
            lVar11 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*local_d0)(local_d0);
              LOCK();
              piVar2 = (int *)((longlong)plVar12 + 0xc);
              iVar9 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar12 + 8))(plVar12,1);
              }
            }
          }
          plVar3 = local_b0;
          plVar13 = *(longlong **)(lVar14 + 0x28);
          plVar15 = plVar13 + (longlong)*(int *)(lVar14 + 0x30) * 2;
          plVar12 = local_b8;
          for (; local_b8 = plVar12, plVar13 != plVar15; plVar13 = plVar13 + 2) {
            if (((((longlong *)*plVar13 != (longlong *)0x0) &&
                 (cVar8 = (**(code **)(*(longlong *)*plVar13 + 0x30))(), cVar8 != '\0')) &&
                (lVar11 = *plVar13,
                ((*(int *)(lVar11 + 0x70) == param_4[2] && *(int *)(lVar11 + 0x6c) == param_4[1]) &&
                *(int *)(lVar11 + 0x74) == param_4[3]) && *(int *)(lVar11 + 0x68) == *param_4)) &&
               (cVar8 = FUniqueNetIdWrapper::operator==(lVar11 + 8,param_3), cVar8 != '\0')) {
              cVar8 = (**(code **)**(undefined8 **)(param_2 + 8))
                                (*(undefined8 **)(param_2 + 8),plVar3);
              if (cVar8 != '\0') {
                *(undefined1 *)(*plVar13 + 0x80) = 1;
LAB_140d8a158:
                FUN_140d96ee0(param_1,&local_88);
                if (plVar10 == (longlong *)0x0) {
                  return;
                }
                LOCK();
                plVar12 = plVar10 + 1;
                lVar11 = *plVar12;
                *(int *)plVar12 = (int)*plVar12 + -1;
                UNLOCK();
                if ((int)lVar11 != 1) {
                  return;
                }
                (**(code **)*plVar10)(plVar10);
                LOCK();
                piVar2 = (int *)((longlong)plVar10 + 0xc);
                iVar9 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar9 != 1) {
                  return;
                }
                (**(code **)(*plVar10 + 8))(plVar10,1);
                return;
              }
              cVar8 = (**(code **)**(undefined8 **)(param_3 + 8))
                                (*(undefined8 **)(param_3 + 8),plVar3);
              if (cVar8 != '\0') {
                *(int *)(*plVar13 + 0x84) = *(int *)(*plVar13 + 0x84) + 1;
                goto LAB_140d8a158;
              }
            }
            plVar12 = local_b8;
          }
        }
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar13 = plVar10 + 1;
          lVar11 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar2 = (int *)((longlong)plVar10 + 0xc);
            iVar9 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
        plVar12 = plVar12 + 1;
      } while (plVar12 != local_90);
    }
  }
  return;
}



// FUNCTION 140d8a1c0 FUN_140d8a1c0 body=62 status=ok
// SIG undefined FUN_140d8a1c0(void)

void FUN_140d8a1c0(undefined8 param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  
  if ((((param_2 != 0) && (*(longlong *)(param_2 + 0xc0) == DAT_14686e880)) &&
      (*(longlong **)(param_3 + 8) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_3 + 8) + 0x20))(), cVar1 != '\0')) {
    FUN_140da0580(param_1);
  }
  return;
}



// FUNCTION 140d8a200 FUN_140d8a200 body=435 status=ok
// SIG undefined FUN_140d8a200(void)

void FUN_140d8a200(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 local_res10;
  undefined8 local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38 [2];
  
  if (param_2 != 0) {
    local_res10 = *(undefined8 *)(param_2 + 0xc0);
    uVar7 = FName::ToString(&local_res10,local_38);
    cVar6 = FString::StartsWith(uVar7,*param_1,1);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    if (cVar6 != '\0') {
      lVar4 = param_1[0xe];
      if (lVar4 != 0) {
        plVar5 = (longlong *)param_1[0xf];
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        local_48 = lVar4;
        local_40 = plVar5;
        FUN_140d696a0(param_1 + 8,&local_48);
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
        local_50 = (longlong *)0x0;
        if (param_1 + 0xe != &local_58) {
          param_1[0xe] = 0;
          local_58 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xf,&local_50);
          plVar5 = local_50;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_50 + 1;
            lVar4 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_50 + 8))(local_50,1);
              }
            }
          }
        }
      }
      local_res10 = 0;
      param_1[0x10] = 0;
      if ((param_1[1] != 0) && (lVar4 = *(longlong *)(param_1[1] + 0xae8), lVar4 != 0)) {
        FUN_1404c9620(lVar4,param_2);
      }
      FUN_140d6a1a0(param_1);
    }
  }
  return;
}



// FUNCTION 140d8a3c0 FUN_140d8a3c0 body=473 status=ok
// SIG undefined FUN_140d8a3c0(void)

void FUN_140d8a3c0(undefined8 *param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  undefined8 uVar8;
  undefined8 local_68;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  longlong local_40 [3];
  
  if (param_2 != 0) {
    local_68 = *(undefined8 *)(param_2 + 0xc0);
    uVar8 = FName::ToString(&local_68,local_40);
    cVar7 = FString::StartsWith(uVar8,*param_1,1);
    if (local_40[0] != 0) {
      FMemory::Free();
    }
    if (cVar7 != '\0') {
      if (*(longlong *)(param_2 + 0xc0) == param_1[0x10]) {
        plVar1 = param_1 + 0xe;
        param_1[0x10] = 0;
        lVar5 = *plVar1;
        if (lVar5 != 0) {
          plVar6 = (longlong *)param_1[0xf];
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
          }
          local_50 = lVar5;
          local_48 = plVar6;
          FUN_140d696a0(param_1 + 8,&local_50);
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar6 + 1;
            lVar5 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar3 = (int *)((longlong)plVar6 + 0xc);
              iVar4 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
            }
          }
          local_58 = (longlong *)0x0;
          if (plVar1 != &local_60) {
            *plVar1 = 0;
            local_60 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xf,&local_58);
            plVar1 = local_58;
            if (local_58 != (longlong *)0x0) {
              LOCK();
              plVar6 = local_58 + 1;
              lVar5 = *plVar6;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*local_58)(local_58);
                LOCK();
                piVar3 = (int *)((longlong)plVar1 + 0xc);
                iVar4 = *piVar3;
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*local_58 + 8))(local_58,1);
                }
              }
            }
          }
        }
      }
      else if (param_3 == 4) {
        FUN_140da0580(param_1);
      }
      if ((param_1[1] != 0) && (lVar5 = *(longlong *)(param_1[1] + 0xae8), lVar5 != 0)) {
        FUN_1404c9620(lVar5,param_2);
      }
      FUN_140d95ed0(param_1);
      FUN_140d6a1a0(param_1);
    }
  }
  return;
}



// FUNCTION 140d8a5a0 FUN_140d8a5a0 body=1296 status=ok
// SIG undefined FUN_140d8a5a0(void)

void FUN_140d8a5a0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 local_res20;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined **local_98;
  undefined8 local_90;
  longlong *local_88;
  longlong local_80;
  undefined8 local_78;
  undefined **local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48 [2];
  
  if (param_2 != 0) {
    local_res20 = *(undefined8 *)(param_2 + 0xc0);
    uVar7 = FName::ToString(&local_res20,local_48);
    cVar5 = FString::StartsWith(uVar7,*param_1,1);
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    if (cVar5 == '\0') {
      if ((*(longlong *)(param_2 + 0xc0) == DAT_14686e880) &&
         (FUN_140d95ed0(param_1), 0 < *(int *)(param_2 + 0x68))) {
        local_b8 = (undefined8 *)0x0;
        local_b0 = 0;
        lVar8 = UXSparseGridManager::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) {
          param_2 = 0;
        }
        FUN_140d82d80(param_2,&local_b8);
        puVar11 = local_b8 + (longlong)(int)local_b0 * 2;
        for (puVar10 = local_b8; puVar10 != puVar11; puVar10 = puVar10 + 2) {
          cVar5 = FUN_140d89a00(param_1,puVar10);
          if (cVar5 != '\0') {
            FUN_140d68c50(param_1 + 8,puVar10);
            TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x1e);
            local_68 = *puVar10;
            local_60 = (longlong *)puVar10[1];
            if (local_60 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_60 + 1) = (int)local_60[1] + 1;
              UNLOCK();
            }
            local_70 = &PTR_FUN_143f740c8;
            local_58 = 0;
            local_50 = 0;
            TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x27,&local_70);
            local_70 = &PTR_FUN_143f740c8;
            if (local_58 != 0) {
              FMemory::Free();
            }
            plVar4 = local_60;
            local_70 = &PTR_FUN_143f73d18;
            if (local_60 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_60 + 1;
              lVar8 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*local_60)(local_60);
                LOCK();
                piVar2 = (int *)((longlong)plVar4 + 0xc);
                iVar6 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*plVar4 + 8))(plVar4,1);
                }
              }
            }
          }
        }
        TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
        ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_b8);
      }
    }
    else {
      if (*(longlong *)(param_2 + 0xc0) == param_1[0x10]) {
        local_a8 = 0;
        plStack_a0 = (longlong *)0x0;
        if (param_1 + 0xe != &local_a8) {
          param_1[0xe] = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xf,&plStack_a0);
          plVar4 = plStack_a0;
          if (plStack_a0 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_a0 + 1;
            lVar8 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plStack_a0)(plStack_a0);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              iVar6 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plStack_a0 + 8))(plStack_a0,1);
              }
            }
          }
        }
        param_1[0x10] = 0;
      }
      FUN_140d95ed0(param_1);
      if (0 < *(int *)(param_2 + 0x68)) {
        local_d8 = (undefined8 *)0x0;
        local_d0 = 0;
        lVar8 = FUN_1404e6f10();
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        lVar8 = param_2;
        if (!bVar3) {
          lVar8 = 0;
        }
        FUN_140d795e0(lVar8,&local_d8);
        puVar13 = local_d8 + (longlong)(int)local_d0 * 2;
        puVar11 = local_d8;
        for (puVar10 = local_d8; local_d8 = puVar11, puVar10 != puVar13; puVar10 = puVar10 + 2) {
          cVar5 = FUN_140d89a00(param_1,puVar10);
          if (cVar5 != '\0') {
            FUN_140d68c50(param_1 + 8,puVar10);
            TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x1e);
            local_90 = *puVar10;
            local_88 = (longlong *)puVar10[1];
            if (local_88 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_88 + 1) = (int)local_88[1] + 1;
              UNLOCK();
            }
            local_98 = &PTR_FUN_143f740c8;
            local_80 = 0;
            local_78 = 0;
            TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x27,&local_98);
            local_98 = &PTR_FUN_143f740c8;
            if (local_80 != 0) {
              FMemory::Free();
            }
            plVar4 = local_88;
            local_98 = &PTR_FUN_143f73d18;
            if (local_88 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_88 + 1;
              lVar8 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*local_88)(local_88);
                LOCK();
                piVar2 = (int *)((longlong)plVar4 + 0xc);
                iVar6 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*plVar4 + 8))(plVar4,1);
                }
              }
            }
          }
          puVar11 = local_d8;
        }
        local_c8 = (undefined8 *)0x0;
        local_c0 = 0;
        uVar7 = FUN_140d82cf0(param_1);
        FUN_140d82d80(uVar7,&local_c8);
        puVar10 = local_c8;
        if (puVar11 != puVar13) {
          lVar8 = (longlong)(int)local_c0;
          do {
            cVar5 = FUN_140d89800(param_1,puVar11);
            if (cVar5 != '\0') {
              puVar9 = puVar10;
              while( true ) {
                if (puVar9 == puVar10 + lVar8 * 2) goto LAB_140d8a892;
                cVar5 = (*(code *)**(undefined8 **)*puVar11)((undefined8 *)*puVar11,*puVar9);
                if (cVar5 != '\0') break;
                puVar9 = puVar9 + 2;
              }
            }
            puVar11 = puVar11 + 2;
          } while (puVar11 != puVar13);
        }
        if ((param_1[1] != 0) && (lVar8 = *(longlong *)(param_1[1] + 0xae8), lVar8 != 0)) {
          FUN_1404c9620(lVar8,param_2);
        }
LAB_140d8a892:
        TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
        ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_c8);
        TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
        ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_d8);
      }
      iVar6 = FUN_140d83f00(param_1);
      if (iVar6 != *(int *)(param_1 + 4)) {
        if ((param_1[0xe] == 0) && (param_1[0x16] == 0)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) {
          lVar8 = param_1[0xc];
          lVar12 = (longlong)*(int *)(param_1 + 0xd) * 0x10 + lVar8;
          for (; lVar8 != lVar12; lVar8 = lVar8 + 0x10) {
            cVar5 = FUN_140d9fcd0(param_1,lVar8);
            if (cVar5 != '\0') {
              FUN_140d69ab0(param_1,lVar8);
              return;
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140d8aab0 FUN_140d8aab0 body=247 status=ok
// SIG undefined FUN_140d8aab0(void)

void FUN_140d8aab0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_18;
  int local_10;
  
  if (*(longlong *)(param_1 + 0x118) == 0) {
    local_18 = (longlong *)0x0;
    plVar1 = (longlong *)FMemory::Realloc(0,0x30);
    local_10 = 3;
    local_18 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      plVar1[1] = param_1;
      *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
      plVar1[2] = (longlong)FUN_140d94bd0;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar1[4] = lVar2;
    }
    uVar3 = FUN_14164ab60();
    puVar4 = (undefined8 *)
             FUN_14158f860(uVar3,local_res8,&local_18,L"FDisplayDataCache_RefreshAfterResume",0);
    *(undefined8 *)(param_1 + 0x118) = *puVar4;
    if (local_10 != 0) {
      if (local_18 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_18 + 0x28))(local_18,0);
      if (local_18 != (longlong *)0x0) {
        local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
      }
      local_10 = 0;
    }
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
    }
  }
  return;
}



// FUNCTION 140d8abf0 FUN_140d8abf0 body=691 status=ok
// SIG undefined FUN_140d8abf0(void)

void FUN_140d8abf0(longlong *param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint *puVar10;
  longlong *local_78;
  uint local_70;
  int local_6c;
  undefined8 local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  uint local_48;
  undefined4 uStack_44;
  longlong *local_40;
  uint uStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  plVar8 = (longlong *)0x0;
  local_70 = 0;
  local_78 = (longlong *)0x0;
  local_6c = 0;
  plVar7 = plVar8;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&local_78);
    plVar7 = (longlong *)(ulonglong)local_70;
  }
  iVar6 = (int)param_1[5];
  puStack_30 = (uint *)(param_1 + 2);
  local_68._0_4_ = 0;
  local_68._4_4_ = 1;
  local_58._4_4_ = 0;
  uStack_50 = 0;
  if (iVar6 != 0) {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puStack_30;
    }
    uVar1 = *puVar10;
    plVar5 = plVar8;
    plVar9 = plVar8;
    while (uVar1 == 0) {
      iVar4 = (int)plVar5;
      uStack_50 = (int)plVar9 + 0x20;
      plVar9 = (longlong *)(ulonglong)uStack_50;
      local_68._0_4_ = iVar4 + 1;
      plVar5 = (longlong *)(ulonglong)(uint)local_68;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_140d8acef;
      uVar1 = puVar10[(longlong)iVar4 + 1];
    }
    local_68._4_4_ = -uVar1 & uVar1;
    iVar4 = 0x1f;
    if (local_68._4_4_ != 0) {
      for (; local_68._4_4_ >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (local_68._4_4_ == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    local_58._4_4_ = (uStack_50 - iVar4) + 0x1f;
    if (iVar6 < local_58._4_4_) {
LAB_140d8acef:
      local_58._4_4_ = iVar6;
    }
  }
  uStack_28 = 0xffffffff;
  iStack_24 = local_58._4_4_;
  uStack_20 = uStack_50;
  uStack_1c = iStack_4c;
  uStack_38 = (uint)local_68;
  uStack_34 = local_68._4_4_;
  uStack_60 = (uint)local_68;
  uStack_5c = local_68._4_4_;
  local_48 = uStack_50;
  uStack_44 = iStack_4c;
  uStack_50 = 0xffffffff;
  iStack_4c = local_58._4_4_;
  bVar2 = local_58._4_4_ < iVar6;
  plVar5 = local_78;
  local_68 = param_1;
  local_40 = param_1;
  local_58 = puStack_30;
  if (bVar2) {
    do {
      iVar6 = iStack_4c;
      iVar4 = (int)plVar7;
      local_70 = iVar4 + 1;
      if (local_6c < (int)local_70) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_78,plVar7);
        plVar5 = local_78;
      }
      plVar7 = (longlong *)(ulonglong)local_70;
      if (plVar5 + iVar4 != (longlong *)0x0) {
        plVar5[iVar4] = *(longlong *)(*local_68 + 8 + (longlong)iVar6 * 0x18);
      }
      uStack_50 = uStack_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
    } while (iStack_4c < (int)local_58[6]);
  }
  local_78 = (longlong *)0x0;
  iVar6 = (int)plVar7;
  plVar9 = plVar8;
  local_70 = iVar6;
  if (iVar6 != 0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_78,plVar7,0);
    plVar9 = local_78;
    _guard_xfg_dispatch_icall_nop(local_78,plVar5,(longlong)iVar6 << 3);
  }
  uVar1 = local_70;
  if (((int)param_1[0x12] != 0) && ((longlong *)param_1[0x11] != (longlong *)0x0)) {
    cVar3 = (**(code **)(*(longlong *)param_1[0x11] + 0x18))();
    if (cVar3 != '\0') {
      if ((int)param_1[0x12] != 0) {
        plVar8 = (longlong *)param_1[0x11];
      }
      local_78 = (longlong *)0x0;
      local_70 = uVar1;
      if (uVar1 == 0) {
        local_6c = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_78,uVar1,0);
        _guard_xfg_dispatch_icall_nop(local_78,plVar9,(longlong)(int)uVar1 << 3);
      }
      (**(code **)(*plVar8 + 0x40))(plVar8,&local_78);
    }
  }
  if (plVar9 != (longlong *)0x0) {
    FMemory::Free(plVar9);
  }
  TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>::
  Empty(param_1,0);
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  return;
}



// FUNCTION 140d8aeb0 FUN_140d8aeb0 body=155 status=ok
// SIG undefined FUN_140d8aeb0(void)

void FUN_140d8aeb0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_18;
  longlong *local_10;
  
  FUN_1404d0c50(&local_18,*(undefined8 *)(param_1 + 0x78));
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x138))(local_18,param_1 + 0x88);
  }
  if (*(int *)(param_1 + 0x18) != 7) {
    *(undefined4 *)(param_1 + 0x18) = 7;
    TBaseDelegate<void,enum_EPartyReservationResult::Type>::ExecuteIfBound(param_1 + 8,7);
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
  return;
}



// FUNCTION 140d8af50 FUN_140d8af50 body=626 status=ok
// SIG undefined FUN_140d8af50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d8af50(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined1 local_a8 [32];
  undefined1 local_88 [96];
  ulonglong local_28;
  ulonglong uVar6;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_b8,L"player_id");
  param_1[1] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_b8,L"player_character_guid");
  param_1[2] = *puVar1;
  FUN_14217ddb0(local_a8,&DAT_144512ec8,0);
  uVar4 = 0;
  uVar6 = uVar4;
  do {
    switch((uint)uVar6 & 0xff) {
    case 1:
      pwVar3 = L"LevelUp";
      break;
    case 2:
      pwVar3 = L"GearSold";
      break;
    case 3:
      pwVar3 = L"GearReceived";
      break;
    case 4:
      pwVar3 = L"PlotMissionCompletion";
      break;
    case 5:
      pwVar3 = L"SideMissionCompletion";
      break;
    case 6:
      pwVar3 = L"PropagateRareSpawnMission";
      break;
    case 7:
      pwVar3 = L"KilledEnemy";
      break;
    case 8:
      pwVar3 = L"KilledNamedEnemy";
      break;
    case 9:
      pwVar3 = L"KilledBoss";
      break;
    case 10:
      pwVar3 = L"GuardianRankMilestone";
      break;
    case 0xb:
      pwVar3 = L"ChallengeUpdate";
      break;
    case 0xc:
      pwVar3 = L"ChallengeCompletion";
      break;
    case 0xd:
      pwVar3 = L"ProvingGroundCompletion";
      break;
    case 0xe:
      pwVar3 = L"CircleOfSlaughterCompletion";
      break;
    case 0xf:
      pwVar3 = L"RaidCompletion";
      break;
    case 0x10:
      pwVar3 = L"UnlockedTrueVaultHunterMode";
      break;
    case 0x11:
      pwVar3 = L"SlotMachineJackpot";
      break;
    case 0x12:
      pwVar3 = L"OpenedGoldenChest";
      break;
    case 0x13:
      pwVar3 = L"SentMail";
      break;
    case 0x14:
      pwVar3 = L"FriendGearPurchased";
      break;
    case 0x15:
      pwVar3 = L"LookingForHelp";
      break;
    case 0x16:
      pwVar3 = L"AchievementUnlocked";
      break;
    case 0x17:
      pwVar3 = L"ChallengeUpdatesMerged";
      break;
    case 0x18:
      pwVar3 = L"LikedEvent";
      break;
    case 0x19:
      pwVar3 = L"CustomizationAcquired";
      break;
    default:
      pwVar3 = L"UnknownFriendEventType";
    }
    puVar1 = (undefined8 *)FName::FName(local_b0,L"Count",1);
    uVar2 = FUN_14218d440(local_a8,local_b8,pwVar3);
    uVar2 = X509_get_issuer_name(uVar2);
    uVar2 = FUN_142186cb0(*param_1,local_88,(longlong)param_1 + uVar4 + 0x18,uVar2);
    FUN_1421837f0(uVar2,*puVar1,0);
    FUN_14217f320(local_88);
    FUN_14217ef90(local_b8);
    uVar5 = (uint)uVar6 + 1;
    uVar6 = (ulonglong)uVar5;
    uVar4 = uVar4 + 8;
  } while ((int)uVar5 < 0x1a);
  FUN_14217f3c0(local_a8);
  FUN_142195000(*param_1);
  return;
}



// FUNCTION 140d8b230 FUN_140d8b230 body=1107 status=ok
// SIG undefined FUN_140d8b230(void)

void FUN_140d8b230(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  void *_Dst;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *local_res10;
  longlong *local_d8;
  longlong *local_d0;
  longlong local_c8;
  undefined8 *local_c0;
  longlong local_b8;
  longlong *local_b0;
  undefined8 *local_a8;
  longlong local_a0;
  undefined1 local_98 [16];
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  plVar8 = *(longlong **)(param_1 + 0x48);
  plVar11 = plVar8 + (longlong)*(int *)(param_1 + 0x50) * 2;
  while( true ) {
    if (plVar8 == plVar11) {
      return;
    }
    lVar3 = *plVar8;
    if (*(int *)(lVar3 + 0x14) == *(int *)(*param_2 + 8)) break;
    plVar8 = plVar8 + 2;
  }
  plVar8 = (longlong *)plVar8[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  if ((lVar3 == 0) || (*(int *)(lVar3 + 0x10) != 2)) goto LAB_140d8b62c;
  cVar5 = FUN_142b01f90(*param_2);
  if ((cVar5 != '\0') && (0 < *(int *)(*param_2 + 0xa0))) {
    puVar9 = (undefined8 *)FName::FName(local_98,"ImageWrapper",1);
    uVar4 = *puVar9;
    uVar10 = FUN_14168dc80();
    plVar11 = (longlong *)FUN_141690010(uVar10,uVar4);
    cVar5 = (**(code **)(*plVar11 + 0x48))
                      (plVar11,*(undefined8 *)(*param_2 + 0x98),*(undefined4 *)(*param_2 + 0xa0));
    if (cVar5 != -1) {
      (**(code **)(*plVar11 + 0x40))(plVar11,&local_d8,cVar5,2,0);
      if ((local_d8 != (longlong *)0x0) &&
         (cVar5 = (**(code **)*local_d8)
                            (local_d8,*(undefined8 *)(*param_2 + 0x98),
                             *(undefined4 *)(*param_2 + 0xa0)), cVar5 != '\0')) {
        local_res10 = (undefined8 *)0x0;
        cVar5 = (**(code **)(*local_d8 + 0x18))(local_d8,2,8,&local_res10);
        if (cVar5 != '\0') {
          puVar9 = (undefined8 *)0x0;
          local_a8 = (undefined8 *)0x0;
          uVar6 = (**(code **)(*local_d8 + 0x28))(local_d8);
          uVar7 = (**(code **)(*local_d8 + 0x20))(local_d8);
          lVar12 = FUN_142851030(uVar7,uVar6,2);
          if (lVar12 != 0) {
            puVar9 = (undefined8 *)operator_new(0x18);
            if (puVar9 == (undefined8 *)0x0) {
              puVar9 = (undefined8 *)0x0;
            }
            else {
              FGCObject::FGCObject(puVar9);
              *puVar9 = &PTR__scalar_deleting_destructor__1440f8f50;
              puVar9[2] = lVar12;
            }
            local_a8 = puVar9;
            if (puVar9 == (undefined8 *)0x0) goto LAB_140d8b5d3;
            lVar12 = puVar9[2];
            if (((lVar12 != 0) && (*(longlong *)(lVar12 + 0xd8) != 0)) &&
               (0 < *(int *)(*(longlong *)(lVar12 + 0xd8) + 0x18))) {
              *(byte *)(lVar12 + 0x4b) = *(byte *)(lVar12 + 0x4b) | 4;
              *(byte *)(puVar9[2] + 0x4b) = *(byte *)(puVar9[2] + 0x4b) & 0xfe;
              _Dst = (void *)FUN_14171efb0(**(longlong **)(*(longlong *)(puVar9[2] + 0xd8) + 0x10) +
                                           8,2);
              if (_Dst != (void *)0x0) {
                _guard_xfg_dispatch_icall_nop
                          (_Dst,(void *)*local_res10,(longlong)*(int *)(local_res10 + 1));
                FUntypedBulkData::Unlock
                          (**(longlong **)(*(longlong *)(puVar9[2] + 0xd8) + 0x10) + 8);
                (**(code **)(*(longlong *)puVar9[2] + 0x278))();
                lVar12 = puVar9[2];
                local_c0 = (undefined8 *)0x0;
                local_c8 = param_1;
                if (lVar12 != 0) {
                  puVar13 = (undefined8 *)operator_new(0x18);
                  if (puVar13 == (undefined8 *)0x0) {
                    local_c0 = (undefined8 *)0x0;
                  }
                  else {
                    FGCObject::FGCObject(puVar13);
                    puVar13[2] = lVar12;
                    *puVar13 = &PTR__scalar_deleting_destructor__1440f8f50;
                    local_c0 = puVar13;
                  }
                }
                puVar13 = local_c0;
                if (plVar8 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
                  UNLOCK();
                }
                local_58 = 0;
                local_48 = 0;
                local_b8 = lVar3;
                local_b0 = plVar8;
                puVar14 = (undefined8 *)FUN_140438ef0(0x28,local_78);
                if (puVar14 != (undefined8 *)0x0) {
                  local_c0 = (undefined8 *)0x0;
                  *puVar14 = &PTR_FUN_144531638;
                  puVar14[1] = param_1;
                  puVar14[2] = puVar13;
                  puVar14[3] = lVar3;
                  puVar14[4] = plVar8;
                  local_b0 = (longlong *)0x0;
                  local_b8 = 0;
                }
                local_88[0] = &LAB_140d6ef30;
                FUN_14158fcd0(3,local_88);
                FUN_140d64bc0(&local_c8);
                (**(code **)*puVar9)(puVar9,1);
                if (local_d0 != (longlong *)0x0) {
                  LOCK();
                  plVar11 = local_d0 + 1;
                  lVar3 = *plVar11;
                  *(int *)plVar11 = (int)*plVar11 + -1;
                  UNLOCK();
                  if ((int)lVar3 == 1) {
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
                goto LAB_140d8b62c;
              }
            }
          }
          if (puVar9 != (undefined8 *)0x0) {
            (**(code **)*puVar9)(puVar9,1);
          }
        }
      }
LAB_140d8b5d3:
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_d0 + 1;
        lVar12 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
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
    }
  }
  local_a0 = lVar3;
  FUN_140d60b10((longlong *)(param_1 + 0x48),&local_a0);
LAB_140d8b62c:
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  LOCK();
  plVar11 = plVar8 + 1;
  lVar3 = *plVar11;
  *(int *)plVar11 = (int)*plVar11 + -1;
  UNLOCK();
  if ((int)lVar3 != 1) {
    return;
  }
  (**(code **)*plVar8)(plVar8);
  LOCK();
  piVar1 = (int *)((longlong)plVar8 + 0xc);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 != 1) {
    return;
  }
  (**(code **)(*plVar8 + 8))(plVar8,1);
  return;
}



// FUNCTION 140d8b690 FUN_140d8b690 body=535 status=ok
// SIG undefined FUN_140d8b690(void)

void FUN_140d8b690(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  int iVar12;
  undefined1 *puVar13;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong local_108;
  longlong *local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_c8 [8];
  undefined1 local_c0 [128];
  undefined1 *local_40;
  undefined8 local_38;
  
  lVar10 = *param_2;
  if ((byte)(*(char *)(lVar10 + 0x58) - 1U) < 0x19) {
    local_108 = *(longlong *)(lVar10 + 0x10);
    local_100 = *(longlong **)(lVar10 + 0x18);
    if (local_100 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
    }
    if (local_108 != 0) {
      FUN_14218ed00(&local_f8,&local_108);
      bVar3 = *(byte *)(*param_2 + 0x58);
      uVar4 = *param_1;
      cVar7 = FUN_14218fd10(uVar4,param_1 + (ulonglong)bVar3 + 3);
      if (cVar7 != '\0') {
        cVar7 = FUN_14218fd60(uVar4);
        if (cVar7 == '\0') {
          lVar10 = FUN_142191860();
        }
        else {
          uVar8 = FCrc::MemCrc_DEPRECATED(&local_f8,0x10);
          FUN_14217c550(local_res10,uVar8);
          uVar11 = icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=
                             (local_res18,local_res10);
          lVar10 = FUN_14218b3a0(uVar4,uVar11);
          if (lVar10 == 0) {
            uVar11 = icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=
                               (local_res20,local_res10);
            icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(local_c8,uVar11);
            local_40 = (undefined1 *)0x0;
            local_38 = 0;
            FUN_14217e740(&local_e8);
            FUN_142194380(&local_e8,0xb,0,0,0);
            local_e8 = local_f8;
            uStack_e4 = uStack_f4;
            uStack_e0 = uStack_f0;
            uStack_dc = uStack_ec;
            iVar12 = local_38._4_4_;
            if (local_38._4_4_ < 1) {
              FUN_140a70170(local_c0,1);
              iVar12 = local_38._4_4_;
            }
            uVar6 = local_38;
            lVar10 = (longlong)(int)local_38;
            iVar9 = (int)local_38 + 1;
            local_38 = CONCAT44(local_38._4_4_,iVar9);
            if (iVar12 < iVar9) {
              TArray<FBlendedCurve,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                        (local_c0,uVar6 & 0xffffffff);
            }
            puVar13 = local_c0;
            if (local_40 != (undefined1 *)0x0) {
              puVar13 = local_40;
            }
            FUN_14217e5b0(puVar13 + lVar10 * 0x20,&local_e8);
            FUN_14217f430(&local_e8);
            lVar10 = FUN_1421912a0(uVar4,local_c8);
          }
        }
        cVar7 = FUN_1407ce070(lVar10);
        if (cVar7 != '\0') {
          FUN_142182fa0(lVar10,param_1 + (ulonglong)bVar3 + 3);
        }
      }
    }
    plVar5 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_100 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140d8b8b0 FUN_140d8b8b0 body=376 status=ok
// SIG undefined FUN_140d8b8b0(void)

void FUN_140d8b8b0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  longlong *local_30;
  uint uStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_3 == 0xca) {
    iVar5 = 0;
    iVar1 = *(int *)(param_1 + 0x198);
    puStack_20 = (uint *)(param_1 + 0x180);
    local_58 = 0;
    uStack_54 = 1;
    local_48._4_4_ = 0;
    uStack_40 = uStack_40 & 0xffffffff00000000;
    if (iVar1 != 0) {
      puVar7 = *(uint **)(param_1 + 400);
      if (*(uint **)(param_1 + 400) == (uint *)0x0) {
        puVar7 = puStack_20;
      }
      uVar6 = *puVar7;
      local_58 = 0;
      while (uVar6 == 0) {
        lVar4 = (longlong)(int)local_58;
        iVar5 = iVar5 + 0x20;
        uVar6 = local_58 + 1;
        uStack_40._4_4_ = (int)(uStack_40 >> 0x20);
        uStack_40 = CONCAT44(uStack_40._4_4_,iVar5);
        bVar2 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_58;
        local_58 = uVar6;
        if (bVar2) goto LAB_140d8b98d;
        uVar6 = puVar7[lVar4 + 1];
      }
      uStack_54 = -uVar6 & uVar6;
      iVar3 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar3 = 0x20;
      }
      else {
        iVar3 = 0x1f - iVar3;
      }
      local_48._4_4_ = (iVar5 - iVar3) + 0x1f;
      if (iVar1 < local_48._4_4_) {
LAB_140d8b98d:
        local_48._4_4_ = iVar1;
      }
    }
    uStack_28 = local_58;
    uStack_24 = uStack_54;
    uStack_18 = 0xffffffff;
    iStack_14 = local_48._4_4_;
    uStack_10 = (uint)uStack_40;
    uStack_c = uStack_40._4_4_;
    iVar5 = local_48._4_4_;
    uStack_50 = local_58;
    uStack_4c = uStack_54;
    local_38 = (uint)uStack_40;
    uStack_34 = uStack_40._4_4_;
    bVar2 = local_48._4_4_ < iVar1;
    local_48 = puStack_20;
    local_30 = (longlong *)(param_1 + 0x170);
    uStack_40._0_4_ = 0xffffffff;
    uStack_40._4_4_ = iVar5;
    if (bVar2) {
      do {
        FUN_140d82050(param_1,*(longlong *)(param_1 + 0x170) + (longlong)uStack_40._4_4_ * 0x28,1);
        uStack_40._0_4_ = (uint)uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      } while (uStack_40._4_4_ < (int)local_48[6]);
    }
  }
  return;
}



// FUNCTION 140d8ba30 FUN_140d8ba30 body=502 status=ok
// SIG undefined FUN_140d8ba30(void)

void FUN_140d8ba30(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong *local_28;
  longlong *local_20;
  
  FUN_1404d0c50(&local_28,*(undefined8 *)(param_1 + 0x78));
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x110))(local_28,param_1 + 0x80);
  }
  if (param_2 == 1) {
    lVar5 = *(longlong *)(param_1 + 0x30);
    for (iVar9 = *(int *)(param_1 + 0x38); iVar9 != 0; iVar9 = iVar9 + -1) {
      FUN_1404bf650(lVar5);
      lVar5 = lVar5 + 0xc0;
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    if (*(int *)(param_1 + 0x3c) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<192,16>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 0x30,0);
    }
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(param_1 + 0x50) * 0x10)
    ;
    lVar7 = *(longlong *)(lVar5 + 8);
    lVar5 = (longlong)*(int *)(lVar5 + 0x10) * 0xc0 + lVar7;
    for (; lVar7 != lVar5; lVar7 = lVar7 + 0xc0) {
      lVar6 = *(longlong *)(param_1 + 0x40);
      lVar8 = (longlong)*(int *)(param_1 + 0x48) * 0xc0 + lVar6;
      for (; lVar6 != lVar8; lVar6 = lVar6 + 0xc0) {
        cVar4 = FUN_140d69880(param_1,lVar7,lVar6);
        if (cVar4 != '\0') goto LAB_140d8bb8c;
      }
      iVar9 = *(int *)(param_1 + 0x38);
      *(int *)(param_1 + 0x38) = iVar9 + 1;
      if (*(int *)(param_1 + 0x3c) < iVar9 + 1) {
        FUN_1404852a0(param_1 + 0x30,iVar9);
      }
      FUN_140b9a900((longlong)iVar9 * 0xc0 + *(longlong *)(param_1 + 0x30),lVar7);
LAB_140d8bb8c:
    }
    if (*(int *)(param_1 + 0x38) < 1) {
      FUN_140d75a80(param_1);
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = 0;
      if (*(int *)(param_1 + 0x18) != 2) {
        *(undefined4 *)(param_1 + 0x18) = 2;
        TBaseDelegate<void,enum_EPartyReservationResult::Type>::ExecuteIfBound(param_1 + 8,2);
      }
    }
  }
  else {
    iVar9 = (param_2 == 4) + 3;
    if (iVar9 != *(int *)(param_1 + 0x18)) {
      *(int *)(param_1 + 0x18) = iVar9;
      TBaseDelegate<void,enum_EPartyReservationResult::Type>::ExecuteIfBound(param_1 + 8,iVar9);
    }
  }
  plVar3 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar9 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return;
}



// FUNCTION 140d8bc40 FUN_140d8bc40 body=71 status=ok
// SIG undefined FUN_140d8bc40(void)

void FUN_140d8bc40(longlong param_1,undefined8 param_2)

{
  FUN_140d48c00(param_1 + 0x140);
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 0xc0);
  TBaseMulticastDelegate<void,FPhysScene_*,enum_EPhysicsSceneType>::Broadcast
            (param_1 + 0xd8,param_2,2);
  return;
}



// FUNCTION 140d8bc90 FUN_140d8bc90 body=515 status=ok
// SIG undefined FUN_140d8bc90(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_140d8bc90(longlong param_1,undefined8 param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int local_78 [4];
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  iVar4 = FUN_140d844e0();
  if ((-1 < iVar4) && (iVar4 < *(int *)(param_1 + 0x40))) {
    Online::GetSessionInterface(&local_50,*(undefined8 *)(param_1 + 0x28));
    if (local_50 != (longlong *)0x0) {
      local_78[1] = 0;
      local_78[2] = 0xffffffff;
      if (param_3 == 3) {
        lVar6 = 0x10;
      }
      else if (param_3 == 4) {
        lVar6 = 0x20;
      }
      else {
        lVar6 = 0x30;
        if (param_3 != 5) {
          lVar6 = 0;
        }
      }
      (**(code **)(*local_50 + 0x138))
                (local_50,param_2,param_3,
                 *(longlong *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar4 * 0x10) + 0x10) +
                 lVar6,local_78 + 1);
      if (param_3 == 3) {
        lVar6 = 0x10;
      }
      else if (param_3 == 4) {
        lVar6 = 0x20;
      }
      else {
        lVar6 = 0x30;
        if (param_3 != 5) {
          lVar6 = 0;
        }
      }
      local_78[0] = param_3;
      FUN_140d61350(*(longlong *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar4 * 0x10) + 0x10)
                    + lVar6,local_78);
      plVar5 = (longlong *)FName::FName(local_68,L"SPARK",1);
      if (*(longlong *)(param_1 + 0x28) == *plVar5) {
        FUN_140d91d00(param_1,param_2);
      }
      else {
        local_40 = 0;
        local_38 = 0;
        FUN_140d943a0(param_1,param_2,&local_40);
      }
      if (param_4 != '\0') {
        uVar3 = *(undefined8 *)(param_1 + 0x30);
        local_60 = 0;
        local_58 = 0;
        FUN_140d80f80(uVar3,param_2,&local_60,0);
        TBaseMulticastDelegate<void,FUniqueNetId_const_&,FUniqueNetId_const_&>::Broadcast
                  (uVar3,param_2,&local_60);
        TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
        ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_60);
      }
    }
    plVar5 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140d8bea0 FUN_140d8bea0 body=3069 status=ok
// SIG undefined FUN_140d8bea0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d8bea0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  longlong *plVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined1 auStack_228 [32];
  undefined1 **local_208;
  longlong local_1f8;
  undefined1 local_1f0;
  undefined1 local_1ef [7];
  undefined8 *local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8 [2];
  longlong *local_1d0;
  longlong *local_1c8;
  undefined8 *local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  undefined **local_190;
  undefined8 local_188;
  longlong *local_180;
  longlong local_178;
  undefined8 local_170;
  longlong *local_160;
  longlong *local_150;
  undefined8 local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  longlong local_128;
  longlong *plStack_120;
  longlong *local_118;
  undefined4 *puStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  longlong local_f8;
  longlong *plStack_f0;
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined **local_c8 [2];
  longlong *local_b8;
  longlong local_b0;
  undefined1 *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  plVar16 = (longlong *)0x0;
  local_1d8[0] = 0;
  local_1f8 = param_1;
  local_138 = param_2;
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar11 = UGameInstance::GetFirstGamePlayer();
    if (lVar11 == 0) {
      bVar5 = false;
      bVar4 = false;
      bVar3 = true;
      local_160 = (longlong *)0x0;
      local_1c8 = plVar16;
      local_1d0 = plVar16;
    }
    else {
      bVar5 = true;
      bVar4 = true;
      bVar3 = false;
      lVar11 = FUN_142547b50(lVar11,local_c8);
      local_1c8 = *(longlong **)(lVar11 + 0x10);
      local_1d0 = *(longlong **)(lVar11 + 8);
      local_150 = local_1c8;
      if (local_1c8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1c8 + 1) = (int)local_1c8[1] + 1;
        UNLOCK();
      }
    }
    plVar23 = local_160;
    if (local_1c8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1c8 + 1) = (int)local_1c8[1] + 1;
      UNLOCK();
    }
    if ((bVar3) && (local_160 != (longlong *)0x0)) {
      LOCK();
      plVar20 = local_160 + 1;
      lVar11 = *plVar20;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_160)(local_160);
        LOCK();
        piVar1 = (int *)((longlong)plVar23 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_160 + 8))(local_160,1);
        }
      }
    }
    plVar23 = local_150;
    if ((bVar4) && (local_150 != (longlong *)0x0)) {
      LOCK();
      plVar20 = local_150 + 1;
      lVar11 = *plVar20;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_150)(local_150);
        LOCK();
        piVar1 = (int *)((longlong)plVar23 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_150 + 8))(local_150,1);
        }
      }
    }
    if (bVar5) {
      local_c8[0] = &PTR_FUN_143f740c8;
      if (local_b0 != 0) {
        FMemory::Free();
      }
      local_c8[0] = &PTR_FUN_143f73d18;
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        plVar23 = local_b8 + 1;
        lVar11 = *plVar23;
        *(int *)plVar23 = (int)*plVar23 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_b8)(local_b8);
          LOCK();
          piVar1 = (int *)((longlong)local_b8 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_b8 + 8))(local_b8,1);
          }
        }
      }
    }
    if ((local_1d0 == (longlong *)0x0) ||
       (cVar6 = (*(code *)**(undefined8 **)*param_2)(), plVar23 = local_1c8, cVar6 == '\0')) {
      plVar16 = local_1c8;
      if (local_1c8 == (longlong *)0x0) {
        return;
      }
      LOCK();
      plVar23 = local_1c8 + 1;
      lVar11 = *plVar23;
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      if ((int)lVar11 != 1) {
        return;
      }
      (**(code **)*local_1c8)(local_1c8);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 != 1) {
        return;
      }
      (**(code **)(*local_1c8 + 8))(local_1c8,1);
      return;
    }
    if (local_1c8 != (longlong *)0x0) {
      LOCK();
      plVar20 = local_1c8 + 1;
      lVar11 = *plVar20;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_1c8)(local_1c8);
        LOCK();
        piVar1 = (int *)((longlong)plVar23 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_1c8 + 8))(local_1c8,1);
        }
      }
    }
  }
  lVar11 = local_1f8;
  local_1d8[0] = *(undefined4 *)(local_1f8 + 0x48);
  puStack_110 = local_1d8;
  uStack_104 = *(undefined4 *)(local_1f8 + 0x24);
  local_108 = *(undefined4 *)(local_1f8 + 0x20);
  local_68 = (longlong *)0x0;
  local_58 = 0;
  local_118 = param_3;
  puVar12 = (undefined8 *)FUN_140438ef0(0x20,local_88);
  if (puVar12 != (undefined8 *)0x0) {
    puVar12[1] = local_118;
    puVar12[2] = puStack_110;
    *puVar12 = &PTR_FUN_143f4d0b0;
    puVar12[3] = CONCAT44(uStack_104,local_108);
  }
  local_1a0 = 0;
  local_98[0] = &LAB_140d6ef20;
  local_198 = 0x19;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a0,0);
  FGenericPlatformString::Memcpy(local_1a0,L"friends_mesh_get_friends",0x32);
  local_1b0 = 0;
  local_1a8 = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b0,0);
  FGenericPlatformString::Memcpy(local_1b0,&DAT_144514a94,6);
  uVar13 = FUN_142b45ee0();
  local_208 = local_98;
  FUN_142b63240(uVar13,param_2,&local_1b0,&local_1a0);
  if (local_1b0 != 0) {
    FMemory::Free();
  }
  if (local_1a0 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    plVar23 = local_88;
    if (local_68 != (longlong *)0x0) {
      plVar23 = local_68;
    }
    if (plVar23 != (longlong *)0x0) {
      (**(code **)(*plVar23 + 0x10))(plVar23,0);
    }
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(longlong *)(lVar11 + 8) != 0) {
    lVar14 = FUN_1424503b0();
    if (lVar14 != 0) {
      lVar15 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar15 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar15 + 0x90) * 8) != lVar15 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (plVar16 = (longlong *)FUN_140cff230(lVar14), plVar16 != (longlong *)0x0))
      goto LAB_140d8c373;
    }
    lVar14 = FUN_140bba5e0(*(undefined8 *)(lVar11 + 8));
    FUN_142450450(*(undefined8 *)(lVar11 + 8),&local_128);
    if ((local_128 != 0) && (lVar14 != 0)) {
      local_f8 = local_128;
      plStack_f0 = plStack_120;
      if (plStack_120 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_120 + 1) = (int)plStack_120[1] + 1;
        UNLOCK();
      }
      plVar16 = (longlong *)FUN_140d3a750(lVar14,&local_f8);
      plVar23 = plStack_f0;
      if (plStack_f0 != (longlong *)0x0) {
        LOCK();
        plVar20 = plStack_f0 + 1;
        lVar14 = *plVar20;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plStack_f0)(plStack_f0);
          LOCK();
          piVar1 = (int *)((longlong)plVar23 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar23 + 8))(plVar23,1);
          }
        }
      }
    }
    if (plStack_120 != (longlong *)0x0) {
      LOCK();
      plVar23 = plStack_120 + 1;
      lVar14 = *plVar23;
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*plStack_120)(plStack_120);
        LOCK();
        piVar1 = (int *)((longlong)plStack_120 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_120 + 8))(plStack_120,1);
        }
      }
    }
  }
LAB_140d8c373:
  puVar12 = (undefined8 *)FDateTime::Now(local_e8);
  local_1e8 = (undefined8 *)0x0;
  local_1e0 = 0;
  local_148 = *puVar12;
  iVar8 = 0;
  if ((int)param_3[1] != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(&local_1e8,(int)param_3[1]);
    iVar8 = (int)param_3[1];
  }
  puVar12 = (undefined8 *)*param_3;
  local_140 = puVar12 + (longlong)iVar8 * 2;
  if (puVar12 != local_140) {
    do {
      uVar25 = local_1e0;
      lVar14 = (longlong)(int)local_1e0;
      iVar8 = (int)local_1e0 + 1;
      local_1e0 = CONCAT44(local_1e0._4_4_,iVar8);
      if (local_1e0._4_4_ < iVar8) {
        FUN_140d979d0(&local_1e8,uVar25 & 0xffffffff);
      }
      puVar19 = local_1e8;
      local_1e8[lVar14 * 5] = *puVar12;
      lVar15 = puVar12[1];
      local_1e8[lVar14 * 5 + 1] = lVar15;
      if (lVar15 != 0) {
        LOCK();
        *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
        UNLOCK();
      }
      local_1e8[lVar14 * 5 + 3] = 0;
      puVar17 = (undefined8 *)
                (**(code **)(*(longlong *)*puVar12 + 8))((longlong *)*puVar12,local_d8);
      puVar22 = *(undefined8 **)(lVar11 + 0x50);
      puVar18 = puVar22 + (longlong)*(int *)(lVar11 + 0x58) * 3;
      for (; puVar22 != puVar18; puVar22 = puVar22 + 3) {
        if ((puVar22[1] != 0) && (cVar6 = (*(code *)**(undefined8 **)*puVar17)(), cVar6 != '\0')) {
          puVar19[lVar14 * 5 + 3] = *puVar22;
          uVar7 = 1;
          goto LAB_140d8c451;
        }
      }
      uVar7 = 0;
LAB_140d8c451:
      plVar23 = local_d0;
      *(undefined1 *)(puVar19 + lVar14 * 5 + 2) = uVar7;
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar20 = local_d0 + 1;
        lVar11 = *plVar20;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar1 = (int *)((longlong)plVar23 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar23 + 8))(plVar23,1);
          }
        }
      }
      if (plVar16 == (longlong *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_140d67180(local_1ef,puVar12,plVar16,local_148);
      }
      puVar12 = puVar12 + 2;
      *(undefined4 *)(puVar19 + lVar14 * 5 + 4) = uVar9;
      lVar11 = local_1f8;
    } while (puVar12 != local_140);
  }
  puVar19 = local_1e8;
  uVar25 = 0;
  lVar14 = (longlong)(int)local_1e0;
  local_1f0 = 0;
  FUN_140d5fea0(local_1e8,lVar14,local_1ef[0],&local_1f0);
  lVar11 = local_1f8;
  plVar16 = (longlong *)(local_1f8 + 0x60);
  FUN_14055f6d0(plVar16,0);
  puVar12 = puVar19 + lVar14 * 5;
  for (; puVar19 != puVar12; puVar19 = puVar19 + 5) {
    iVar8 = *(int *)(lVar11 + 0x68);
    *(int *)(lVar11 + 0x68) = iVar8 + 1;
    if (*(int *)(lVar11 + 0x6c) < iVar8 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar16,iVar8);
    }
    puVar18 = (undefined8 *)((longlong)iVar8 * 0x10 + *plVar16);
    *puVar18 = *puVar19;
    lVar14 = puVar19[1];
    puVar18[1] = lVar14;
    if (lVar14 != 0) {
      LOCK();
      *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
      UNLOCK();
    }
  }
  local_1c0 = (undefined8 *)0x0;
  local_1b8 = 0;
  if ((*(longlong *)(lVar11 + 8) != 0) &&
     (lVar14 = *(longlong *)(*(longlong *)(lVar11 + 8) + 0xae8), lVar14 != 0)) {
    plVar20 = *(longlong **)(lVar14 + 0x238);
    plVar23 = plVar20 + *(int *)(lVar14 + 0x240);
    for (; plVar20 != plVar23; plVar20 = plVar20 + 1) {
      lVar15 = *plVar20;
      if ((lVar15 != 0) && (*(longlong *)(lVar15 + 0xc0) == DAT_14686e880)) goto LAB_140d8c5f5;
    }
    plVar20 = *(longlong **)(lVar14 + 0x248);
    plVar23 = plVar20 + *(int *)(lVar14 + 0x250);
    for (; plVar20 != plVar23; plVar20 = plVar20 + 1) {
      lVar15 = *plVar20;
      if ((lVar15 != 0) && (*(longlong *)(lVar15 + 0xc0) == DAT_14686e880)) goto LAB_140d8c5f5;
    }
  }
  lVar15 = 0;
LAB_140d8c5f5:
  FUN_140d82d80(lVar15,&local_1c0);
  if ((*(longlong *)(lVar11 + 8) != 0) && (*(longlong *)(*(longlong *)(lVar11 + 8) + 0xae8) != 0)) {
    plVar23 = *(longlong **)(lVar11 + 0x30);
    uVar24 = (longlong)*(int *)(lVar11 + 0x38) & 0x1fffffffffffffff;
    if (plVar23 + *(int *)(lVar11 + 0x38) < plVar23) {
      uVar24 = uVar25;
    }
    if (uVar24 != 0) {
      do {
        lVar14 = *(longlong *)(*(longlong *)(lVar11 + 8) + 0xae8);
        plVar21 = *(longlong **)(lVar14 + 0x238);
        plVar20 = plVar21 + *(int *)(lVar14 + 0x240);
        for (; plVar21 != plVar20; plVar21 = plVar21 + 1) {
          lVar15 = *plVar21;
          if ((lVar15 != 0) && (*(longlong *)(lVar15 + 0xc0) == *plVar23)) goto LAB_140d8c6c3;
        }
        plVar21 = *(longlong **)(lVar14 + 0x248);
        plVar20 = plVar21 + *(int *)(lVar14 + 0x250);
        for (; plVar21 != plVar20; plVar21 = plVar21 + 1) {
          lVar15 = *plVar21;
          if ((lVar15 != 0) && (*(longlong *)(lVar15 + 0xc0) == *plVar23)) goto LAB_140d8c6c3;
        }
        lVar15 = 0;
LAB_140d8c6c3:
        FUN_140d795e0(lVar15,&local_1c0);
        plVar23 = plVar23 + 1;
        uVar25 = uVar25 + 1;
      } while (uVar25 != uVar24);
    }
  }
  puVar19 = local_1c0 + (longlong)(int)local_1b8 * 2;
  puVar12 = local_1c0;
  if (local_1c0 != puVar19) {
    do {
      cVar6 = FUN_140d89a00(lVar11,puVar12);
      if (cVar6 != '\0') {
        FUN_140d68c50(lVar11 + 0x40,puVar12);
        bVar3 = false;
        *(int *)(lVar11 + 0x104) = *(int *)(lVar11 + 0x104) + 1;
        iVar8 = *(int *)(lVar11 + 0x104);
        iVar10 = *(int *)(lVar11 + 0xf8) + -1;
        lVar14 = (longlong)iVar10;
        if (-1 < iVar10) {
          lVar15 = lVar14 << 4;
          bVar3 = false;
          do {
            lVar2 = *(longlong *)(lVar11 + 0xf0);
            if (((*(int *)(lVar15 + 8 + lVar2) == 0) ||
                (plVar16 = *(longlong **)(lVar15 + lVar2), plVar16 == (longlong *)0x0)) ||
               (cVar6 = (**(code **)(*plVar16 + 0x40))(), cVar6 == '\0')) {
              bVar3 = true;
            }
            lVar15 = lVar15 + -0x10;
            lVar14 = lVar14 + -1;
          } while (-1 < lVar14);
          iVar8 = *(int *)(lVar11 + 0x104);
        }
        *(int *)(lVar11 + 0x104) = iVar8 + -1;
        if (bVar3) {
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList
                    ((longlong *)(lVar11 + 0xf0),0);
        }
        lVar11 = local_1f8;
        local_188 = *puVar12;
        local_180 = (longlong *)puVar12[1];
        if (local_180 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_180 + 1) = (int)local_180[1] + 1;
          UNLOCK();
        }
        local_190 = &PTR_FUN_143f740c8;
        plVar16 = (longlong *)(local_1f8 + 0x138);
        local_178 = 0;
        local_170 = 0;
        bVar3 = false;
        *(int *)(local_1f8 + 0x14c) = *(int *)(local_1f8 + 0x14c) + 1;
        iVar8 = *(int *)(local_1f8 + 0x14c);
        iVar10 = *(int *)(local_1f8 + 0x140) + -1;
        lVar14 = (longlong)iVar10;
        if (-1 < iVar10) {
          lVar15 = lVar14 << 4;
          bVar3 = false;
          do {
            lVar2 = *plVar16;
            if (((*(int *)(lVar15 + 8 + lVar2) == 0) ||
                (plVar23 = *(longlong **)(lVar15 + lVar2), plVar23 == (longlong *)0x0)) ||
               (cVar6 = (**(code **)(*plVar23 + 0x40))(plVar23,&local_190), cVar6 == '\0')) {
              bVar3 = true;
            }
            lVar15 = lVar15 + -0x10;
            lVar14 = lVar14 + -1;
          } while (-1 < lVar14);
          iVar8 = *(int *)(lVar11 + 0x14c);
        }
        *(int *)(lVar11 + 0x14c) = iVar8 + -1;
        if (bVar3) {
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar16,0);
        }
        local_190 = &PTR_FUN_143f740c8;
        if (local_178 != 0) {
          FMemory::Free();
        }
        plVar16 = local_180;
        local_190 = &PTR_FUN_143f73d18;
        lVar11 = local_1f8;
        if (local_180 != (longlong *)0x0) {
          LOCK();
          plVar23 = local_180 + 1;
          lVar14 = *plVar23;
          *(int *)plVar23 = (int)*plVar23 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*local_180)(local_180);
            LOCK();
            piVar1 = (int *)((longlong)plVar16 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            lVar11 = local_1f8;
            if (iVar8 == 1) {
              (**(code **)(*plVar16 + 8))(plVar16,1);
              lVar11 = local_1f8;
            }
          }
        }
      }
      puVar12 = puVar12 + 2;
    } while (puVar12 != puVar19);
    plVar16 = (longlong *)(lVar11 + 0x60);
  }
  iVar8 = FUN_140d83f00(lVar11);
  if (iVar8 != *(int *)(lVar11 + 0x20)) {
    if ((*(longlong *)(lVar11 + 0x70) == 0) && (*(longlong *)(lVar11 + 0xb0) == 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      lVar14 = *plVar16;
      lVar15 = (longlong)(int)plVar16[1] * 0x10 + lVar14;
      for (; lVar14 != lVar15; lVar14 = lVar14 + 0x10) {
        cVar6 = FUN_140d9fcd0(lVar11,lVar14);
        if (cVar6 != '\0') {
          FUN_140d69ab0(lVar11,lVar14);
          break;
        }
      }
    }
  }
  lVar14 = lVar11;
  if (((*(longlong *)(lVar11 + 8) != 0) &&
      (lVar15 = FUN_140bba5e0(), puVar12 = local_138, lVar15 != 0)) &&
     (lVar15 = FUN_140d3a750(lVar15,local_138), lVar15 != 0)) {
    uVar13 = *puVar12;
    plVar16 = (longlong *)(lVar11 + 0xe0);
    puVar19 = (undefined8 *)*plVar16;
    puVar18 = puVar19 + (longlong)*(int *)(lVar11 + 0xe8) * 2;
    for (; puVar19 != puVar18; puVar19 = puVar19 + 2) {
      cVar6 = (*(code *)**(undefined8 **)*puVar19)((undefined8 *)*puVar19,uVar13);
      if (cVar6 != '\0') goto LAB_140d8c97a;
    }
    puVar19 = (undefined8 *)0x0;
LAB_140d8c97a:
    lVar14 = local_1f8;
    if ((*(char *)(lVar15 + 0x1e3) == '\x01') && (puVar19 == (undefined8 *)0x0)) {
      uVar13 = FUN_140bb74b0(*(undefined8 *)(local_1f8 + 8));
      FUN_140d77020(uVar13,puVar12);
      iVar8 = *(int *)(lVar11 + 0xe8);
      *(int *)(lVar11 + 0xe8) = iVar8 + 1;
      if (*(int *)(lVar11 + 0xec) < iVar8 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar16,iVar8);
      }
      puVar19 = (undefined8 *)((longlong)iVar8 * 0x10 + *plVar16);
      *puVar19 = *puVar12;
      lVar11 = puVar12[1];
      puVar19[1] = lVar11;
      lVar14 = local_1f8;
      if (lVar11 != 0) {
        LOCK();
        *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
        UNLOCK();
      }
    }
  }
  puVar12 = (undefined8 *)FDateTime::UtcNow(local_e0);
  *(undefined8 *)(lVar14 + 0x1a0) = *puVar12;
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_1c0);
  if ((int)local_1e0 != 0) {
    plVar16 = local_1e8 + 1;
    iVar8 = (int)local_1e0;
    do {
      plVar23 = (longlong *)*plVar16;
      if (plVar23 != (longlong *)0x0) {
        LOCK();
        plVar20 = plVar23 + 1;
        lVar11 = *plVar20;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar23)(plVar23);
          LOCK();
          piVar1 = (int *)((longlong)plVar23 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar23 + 8))(plVar23,1);
          }
        }
      }
      plVar16 = plVar16 + 5;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if (local_1e8 != (undefined8 *)0x0) {
    FMemory::Free(local_1e8);
  }
  return;
}



// FUNCTION 140d8caa0 FUN_140d8caa0 body=134 status=ok
// SIG undefined FUN_140d8caa0(void)

void FUN_140d8caa0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),*param_2);
  if (cVar1 != '\0') {
    cVar1 = FUN_14044af00(param_1,0);
    if (cVar1 != '\0') {
      uVar2 = FWeakObjectPtr::Get(param_1);
      uVar2 = FUN_140bb74b0(uVar2);
      TBaseMulticastDelegate<void>::Remove(uVar2,*(undefined8 *)(param_1 + 0x28));
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    cVar1 = FConfigCacheIni::GetFloat
                      (DAT_1468b6148,L"FFriendsRefreshTimer",L"FriendsRefreshDelaySeconds",
                       param_1 + 0x18,&DAT_1468e2410);
    if (cVar1 == '\0') {
      *(undefined4 *)(param_1 + 0x18) = 0x41f00000;
    }
  }
  return;
}



// FUNCTION 140d8cb30 FUN_140d8cb30 body=215 status=ok
// SIG undefined FUN_140d8cb30(void)

void FUN_140d8cb30(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int local_res8 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  FUN_140549690(param_1 + 0x18,local_res8,param_2);
  if ((local_res8[0] == -1) ||
     (lVar1 = (longlong)local_res8[0] * 0x68 + *(longlong *)(param_1 + 0x18), lVar1 == 0)) {
    local_18 = param_2;
    FUN_140d5d8e0(param_1 + 0x18,local_res8,&local_18,0);
    lVar1 = (longlong)local_res8[0] * 0x68 + *(longlong *)(param_1 + 0x18);
  }
  if (0 < *(int *)(param_1 + 200)) {
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + -1;
    return;
  }
  if (*(int *)(lVar1 + 0x18) == *(int *)(lVar1 + 0x44)) {
    local_18 = 0;
    local_10 = 0;
    FUN_140d80f80(param_1,param_2,&local_18,0);
    TBaseMulticastDelegate<void,FUniqueNetId_const_&,FUniqueNetId_const_&>::Broadcast
              (param_1,param_2,&local_18);
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_18);
  }
  return;
}



// FUNCTION 140d8cc10 FUN_140d8cc10 body=1886 status=ok
// SIG undefined FUN_140d8cc10(void)

void FUN_140d8cc10(longlong *param_1,longlong *param_2,int param_3,undefined8 *param_4)

{
  int *piVar1;
  void *_Src;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 *puVar14;
  int iVar15;
  longlong *plVar16;
  undefined2 *puVar17;
  undefined2 *puVar18;
  longlong *plVar19;
  int iVar20;
  undefined2 *local_150;
  int local_148;
  int local_144;
  undefined8 *local_140;
  longlong *local_138;
  undefined8 *local_130;
  undefined8 local_128;
  longlong local_120;
  longlong *plStack_118;
  longlong local_110;
  longlong *plStack_108;
  undefined2 *local_100;
  int local_f8;
  longlong *local_f0;
  longlong *local_e8;
  undefined8 *local_e0;
  longlong *local_d8;
  undefined1 local_d0 [8];
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a8 [32];
  undefined4 local_88;
  
  plVar8 = param_1 + 0x17;
  if (*plVar8 == 0) {
    return;
  }
  cVar4 = (*(code *)**(undefined8 **)*param_2)();
  if (cVar4 == '\0') {
    return;
  }
  local_120 = 0;
  plStack_118 = (longlong *)0x0;
  if (plVar8 != &local_120) {
    *plVar8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x18,&plStack_118);
    plVar8 = plStack_118;
    if (plStack_118 != (longlong *)0x0) {
      LOCK();
      plVar16 = plStack_118 + 1;
      lVar10 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_118)(plStack_118);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*plStack_118 + 8))(plStack_118,1);
        }
      }
    }
  }
  plVar8 = param_1 + 0x19;
  local_130 = (undefined8 *)*plVar8;
  if (local_130 == (undefined8 *)0x0) {
    local_130 = (undefined8 *)*param_2;
    plVar16 = (longlong *)param_2[1];
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
    }
    bVar3 = false;
    bVar2 = true;
    plVar12 = param_1;
    plVar19 = plVar16;
  }
  else {
    plVar12 = (longlong *)param_1[0x1a];
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    bVar3 = true;
    bVar2 = false;
    plVar16 = param_1;
    plVar19 = plVar12;
  }
  if (plVar19 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
    UNLOCK();
  }
  local_e0 = local_130;
  local_d8 = plVar19;
  if ((bVar2) && (plVar16 != (longlong *)0x0)) {
    LOCK();
    plVar11 = plVar16 + 1;
    lVar10 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar20 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar20 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  if ((bVar3) && (plVar12 != (longlong *)0x0)) {
    LOCK();
    plVar16 = plVar12 + 1;
    lVar10 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar20 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar20 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  local_110 = 0;
  plStack_108 = (longlong *)0x0;
  if (plVar8 != &local_110) {
    *plVar8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1a,&plStack_108);
    plVar8 = plStack_108;
    if (plStack_108 != (longlong *)0x0) {
      LOCK();
      plVar16 = plStack_108 + 1;
      lVar10 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_108)(plStack_108);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*plStack_108 + 8))(plStack_108,1);
        }
      }
    }
  }
  puVar6 = (undefined8 *)FName::FName(local_d0,L"SPARK",1);
  FUN_1404d0c50(&local_f0,*puVar6);
  if (local_f0 != (longlong *)0x0) {
    (**(code **)(*local_f0 + 0x2b0))(local_f0,param_1 + 0x16);
    param_1[0x16] = 0;
  }
  puVar6 = (undefined8 *)param_1[0xc];
  puVar14 = puVar6 + (longlong)(int)param_1[0xd] * 2;
  for (; puVar6 != puVar14; puVar6 = puVar6 + 2) {
    puVar7 = (undefined8 *)(**(code **)(*(longlong *)*puVar6 + 8))((longlong *)*puVar6,local_c8);
    cVar4 = (**(code **)*local_130)(local_130,*puVar7);
    plVar8 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_c0 + 1;
      lVar10 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    if (cVar4 != '\0') {
      cVar4 = FUN_140d9fcd0(param_1,puVar6);
      if ((cVar4 != '\0') && (param_3 == 1)) {
        local_128 = 0;
        if (param_1[1] != 0) {
          lVar10 = *(longlong *)(param_1[1] + 0xae8);
          if (lVar10 == 0) goto LAB_140d8d0db;
          plVar16 = (longlong *)param_1[6];
          plVar8 = plVar16 + (int)param_1[7];
          if (plVar16 == plVar8) goto LAB_140d8d0db;
          goto LAB_140d8d070;
        }
      }
      break;
    }
  }
  goto LAB_140d8cf01;
  while (plVar16 = plVar16 + 1, plVar16 != plVar8) {
LAB_140d8d070:
    lVar13 = *plVar16;
    for (plVar12 = *(longlong **)(lVar10 + 0x238);
        plVar12 != *(longlong **)(lVar10 + 0x238) + *(int *)(lVar10 + 0x240); plVar12 = plVar12 + 1)
    {
      lVar9 = *plVar12;
      if ((lVar9 != 0) && (*(longlong *)(lVar9 + 0xc0) == lVar13)) goto LAB_140d8d0cd;
    }
    plVar11 = *(longlong **)(lVar10 + 0x248);
    plVar12 = plVar11 + *(int *)(lVar10 + 0x250);
    while( true ) {
      if (plVar11 == plVar12) goto LAB_140d8d0e0;
      lVar9 = *plVar11;
      if ((lVar9 != 0) && (*(longlong *)(lVar9 + 0xc0) == lVar13)) break;
      plVar11 = plVar11 + 1;
    }
LAB_140d8d0cd:
    if (lVar9 == 0) goto LAB_140d8d0e0;
  }
LAB_140d8d0db:
  lVar13 = 0;
LAB_140d8d0e0:
  if ((lVar10 != 0) && (lVar10 = FUN_140d5bdc0(lVar10,lVar13), lVar10 != 0)) {
    FString::PrintfImpl(&local_100,L"?Template=%s");
    iVar20 = *(int *)(param_4 + 1);
    puVar18 = local_100;
    if (1 < iVar20) {
      puVar18 = (undefined2 *)0x0;
      iVar15 = local_f8 + -1;
      if (local_f8 == 0) {
        iVar15 = 0;
      }
      if ((iVar20 != 0) || (iVar5 = 1, iVar15 == 0)) {
        iVar5 = 0;
      }
      _Src = (void *)*param_4;
      local_150 = (undefined2 *)0x0;
      local_148 = iVar20;
      if ((iVar20 == 0) && (iVar5 + iVar15 == 0)) {
        local_144 = 0;
        iVar20 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_150,iVar20 + iVar5 + iVar15,0);
        puVar18 = local_150;
        _guard_xfg_dispatch_icall_nop(local_150,_Src,(longlong)iVar20 * 2);
        iVar20 = local_148;
      }
      puVar17 = local_100;
      iVar5 = iVar20;
      if (iVar15 != 0) {
        local_148 = iVar20 + (uint)(iVar20 == 0) + iVar15;
        if (local_144 < local_148) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_150,iVar20,0);
          puVar18 = local_150;
        }
        iVar5 = local_148;
        _guard_xfg_dispatch_icall_nop
                  (puVar18 + ((longlong)iVar20 - (ulonglong)(iVar20 != 0)),puVar17,
                   (longlong)iVar15 * 2);
        (puVar18 + ((longlong)iVar20 - (ulonglong)(iVar20 != 0)))[iVar15] = 0;
      }
      local_f8 = iVar5;
      if (local_100 != (undefined2 *)0x0) {
        FMemory::Free(local_100);
      }
    }
    puVar17 = &DAT_143f3eda8;
    if (local_f8 != 0) {
      puVar17 = puVar18;
    }
    FUN_14289aca0(local_a8,0,puVar17,0);
    local_88 = 0;
    cVar4 = FUN_1404d3a70(lVar10,local_a8);
    if (cVar4 != '\0') {
      FUN_1404c9e30(lVar10);
      param_1[0x10] = lVar13;
      local_140 = local_130;
      if (plVar19 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
        UNLOCK();
      }
      local_138 = plVar19;
      if ((undefined8 **)(param_1 + 0xe) != &local_140) {
        param_1[0xe] = (longlong)local_130;
        local_140 = (undefined8 *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xf,&local_138);
      }
      plVar8 = local_138;
      if (local_138 != (longlong *)0x0) {
        LOCK();
        plVar16 = local_138 + 1;
        lVar10 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_138)(local_138);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*local_138 + 8))(local_138,1);
          }
        }
      }
      FURL::~FURL(local_a8);
      if (puVar18 != (undefined2 *)0x0) {
        FMemory::Free(puVar18);
      }
      goto LAB_140d8cf6e;
    }
    FUN_1404c9880(*(undefined8 *)(param_1[1] + 0xae8),lVar13);
    FURL::~FURL(local_a8);
    if (puVar18 != (undefined2 *)0x0) {
      FMemory::Free(puVar18);
    }
  }
LAB_140d8cf01:
  plVar8 = (longlong *)FUN_140d78ad0(param_1 + 8,local_b8,&local_e0);
  lVar10 = *plVar8;
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_b0 + 1;
    lVar13 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)local_b0 + 0xc);
      iVar20 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar20 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  if (lVar10 == 0) {
    FUN_140d696a0(param_1 + 8,&local_e0);
  }
  FUN_140d6a1a0(param_1);
LAB_140d8cf6e:
  plVar8 = local_e8;
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_e8 + 1;
    lVar10 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_e8)(local_e8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar20 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar20 == 1) {
        (**(code **)(*local_e8 + 8))(local_e8,1);
      }
    }
  }
  if (plVar19 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar19 + 1;
    lVar10 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar19)(plVar19);
      LOCK();
      piVar1 = (int *)((longlong)plVar19 + 0xc);
      iVar20 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar20 == 1) {
        (**(code **)(*plVar19 + 8))(plVar19,1);
      }
    }
  }
  return;
}



// FUNCTION 140d8d370 FUN_140d8d370 body=58 status=ok
// SIG undefined FUN_140d8d370(void)

void FUN_140d8d370(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (*(longlong **)(param_2 + 8) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))();
    if (cVar1 != '\0') {
      FUN_140d95770(param_1 + 8,param_2);
    }
  }
  return;
}



// FUNCTION 140d8d3b0 FUN_140d8d3b0 body=58 status=ok
// SIG undefined FUN_140d8d3b0(void)

void FUN_140d8d3b0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (*(longlong **)(param_2 + 8) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))();
    if (cVar1 != '\0') {
      FUN_140d95910(param_1 + 0x10,param_2);
    }
  }
  return;
}



// FUNCTION 140d8d3f0 FUN_140d8d3f0 body=163 status=ok
// SIG undefined FUN_140d8d3f0(void)

void FUN_140d8d3f0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 local_18;
  longlong *local_10;
  
  FUN_140d955b0(param_1 + 0xf0);
  if ((*(longlong **)(param_2 + 8) != (longlong *)0x0) &&
     (cVar6 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar6 != '\0')) {
    local_18 = *(undefined8 *)(param_2 + 8);
    plVar4 = *(longlong **)(param_2 + 0x10);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_10 = plVar4;
    FUN_14055e740(param_1 + 0x1c0,&local_18);
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
  }
  return;
}



// FUNCTION 140d8d4a0 FUN_140d8d4a0 body=700 status=ok
// SIG undefined FUN_140d8d4a0(void)

void FUN_140d8d4a0(longlong param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  uint *puVar11;
  int local_d8;
  uint uStack_d4;
  int iStack_c4;
  int iStack_c0;
  longlong local_b0 [2];
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 uStack_88;
  uint *local_80;
  undefined8 uStack_78;
  int local_70;
  longlong local_68 [2];
  undefined1 local_58 [8];
  longlong *local_50;
  longlong *local_48;
  undefined8 uStack_40;
  uint *puStack_38;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  FUN_1404cf890(&local_a0,0);
  if ((local_a0 != (longlong *)0x0) && (param_3 != 0)) {
    uVar7 = (**(code **)(*local_a0 + 0xa0))(local_a0,local_68,param_2);
    local_b0[0] = 0;
    local_b0[1] = 0;
    FUN_140d68fa0(param_1,param_2,uVar7,local_b0,0);
    if (local_b0[0] != 0) {
      FMemory::Free();
    }
    if (local_68[0] != 0) {
      FMemory::Free();
    }
    local_90 = (longlong *)(param_1 + 8);
    local_d8 = 0;
    iVar2 = *(int *)(param_1 + 0x30);
    local_80 = (uint *)(param_1 + 0x18);
    uStack_d4 = 1;
    iStack_c4 = 0;
    iStack_c0 = 0;
    if (iVar2 != 0) {
      puVar11 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar11 = local_80;
      }
      uVar3 = *puVar11;
      iStack_c0 = 0;
      local_d8 = 0;
      while (uVar3 == 0) {
        lVar9 = (longlong)local_d8;
        iStack_c0 = iStack_c0 + 0x20;
        iVar10 = local_d8 + 1;
        bVar5 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_d8;
        local_d8 = iVar10;
        if (bVar5) goto LAB_140d8d5de;
        uVar3 = puVar11[lVar9 + 1];
      }
      uStack_d4 = -uVar3 & uVar3;
      iVar10 = 0x1f;
      if (uStack_d4 != 0) {
        for (; uStack_d4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      if (uStack_d4 == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0x1f - iVar10;
      }
      iStack_c4 = (iStack_c0 - iVar10) + 0x1f;
      if (iVar2 < iStack_c4) {
LAB_140d8d5de:
        iStack_c4 = iVar2;
      }
    }
    uStack_88 = CONCAT44(uStack_d4,local_d8);
    uStack_30 = 0xffffffff;
    iStack_2c = iStack_c4;
    iStack_28 = iStack_c0;
    uStack_78 = CONCAT44(iStack_c4,0xffffffff);
    local_70 = iStack_c0;
    local_48 = local_90;
    uStack_40 = uStack_88;
    puStack_38 = local_80;
    if (iStack_c4 < iVar2) {
      do {
        if (*(char *)((longlong)iStack_c4 * 0x80 + *local_90 + 0x70) != '\0') {
          FUN_140d94a80(param_1);
        }
        uStack_78 = CONCAT44(uStack_78._4_4_,(uint)uStack_78 & ~uStack_88._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_88);
        iStack_c4 = uStack_78._4_4_;
      } while (uStack_78._4_4_ < (int)local_80[6]);
    }
  }
  plVar8 = (longlong *)FUN_140d84620(param_1 + 0x1f8,local_58,param_2);
  plVar4 = (longlong *)plVar8[1];
  lVar9 = *plVar8;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_50 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  if (lVar9 != 0) {
    *(bool *)(lVar9 + 0x30) = param_3 != 0;
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
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = local_98;
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_98 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_98 + 8))(local_98,1);
      }
    }
  }
  return;
}



// FUNCTION 140d8d760 FUN_140d8d760 body=182 status=ok
// SIG undefined FUN_140d8d760(void)

void FUN_140d8d760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_141592950(param_4,L"SPARK_FRIEND_INVITE_MESSAGE",1,0,0xffffffff);
  if (iVar1 == -1) {
    iVar1 = FUN_141592950(param_4,L"SPARK_FRIEND_REMOVED_MESSAGE",1,0,0xffffffff);
    if (iVar1 == -1) {
      iVar1 = FUN_141592950(param_4,L"SPARK_FRIEND_REQUEST_ACCEPTED_MESSAGE",1,0,0xffffffff);
      if (iVar1 == -1) {
        iVar1 = FUN_141592950(param_4,L"SPARK_FRIEND_REQUEST_REJECTED_MESSAGE",1,0,0xffffffff);
        if (iVar1 == -1) {
          return;
        }
      }
    }
  }
  FUN_140d82050(param_1,param_2,1);
  return;
}



// FUNCTION 140d8d820 FUN_140d8d820 body=54 status=ok
// SIG undefined FUN_140d8d820(void)

/* WARNING: Removing unreachable block (ram,0x000140d8d848) */

void FUN_140d8d820(void)

{
  FUN_140d68fa0();
  return;
}



// FUNCTION 140d8d880 FUN_140d8d880 body=128 status=ok
// SIG undefined FUN_140d8d880(void)

void FUN_140d8d880(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  longlong *plVar2;
  
  if ((*(int *)(param_1 + 0x38) != 0) && (*(longlong **)(param_1 + 0x30) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x38) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x30);
      }
      (**(code **)(*plVar2 + 0x40))(param_6,param_2,param_3,param_4,param_5,param_6);
    }
  }
  return;
}



// FUNCTION 140d8d900 FUN_140d8d900 body=2908 status=ok
// SIG undefined FUN_140d8d900(void)

/* WARNING: Removing unreachable block (ram,0x000140d8dc71) */
/* WARNING: Removing unreachable block (ram,0x000140d8dc7f) */
/* WARNING: Removing unreachable block (ram,0x000140d8dc8b) */
/* WARNING: Removing unreachable block (ram,0x000140d8dca3) */

void FUN_140d8d900(longlong *param_1,char param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong *plVar18;
  bool bVar19;
  longlong *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  longlong *local_1a8;
  int local_1a0;
  undefined1 local_198 [8];
  longlong *local_190;
  longlong *local_188;
  longlong *local_180;
  longlong *local_178;
  longlong *local_170;
  longlong local_168;
  uint local_160;
  undefined4 local_15c;
  undefined8 local_158;
  longlong *plStack_150;
  longlong *local_140;
  longlong *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong local_c8;
  int local_c0;
  longlong local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined **local_60 [2];
  longlong *local_50;
  longlong local_48;
  
  plVar11 = (longlong *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146852c60) && (_Init_thread_header(&DAT_146852c60), DAT_146852c60 == -1))
  {
    FName::FName(&DAT_146852c58,L"OnlineSubsystem",1);
    _Init_thread_footer(&DAT_146852c60);
  }
  uVar6 = DAT_146852c58;
  uVar7 = FUN_14168dc80();
  plVar8 = (longlong *)FModuleManager::GetModule(uVar7,uVar6);
  plVar8 = (longlong *)(**(code **)(*plVar8 + 0x50))(plVar8,0);
  bVar19 = plVar8 == (longlong *)0x0;
  if (bVar19) {
    puVar9 = &local_158;
    local_158 = 0;
    plStack_150 = (longlong *)0x0;
  }
  else {
    puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x50))(plVar8,local_80);
    plVar11 = (longlong *)*puVar9;
  }
  local_178 = (longlong *)puVar9[1];
  puVar9[1] = 0;
  *puVar9 = 0;
  plVar18 = plStack_150;
  local_180 = plVar11;
  if ((bVar19) && (plStack_150 != (longlong *)0x0)) {
    LOCK();
    plVar11 = plStack_150 + 1;
    lVar10 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_150)(plStack_150);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*plStack_150 + 8))(plStack_150,1);
      }
    }
  }
  if ((!bVar19) && (local_78 != (longlong *)0x0)) {
    LOCK();
    plVar11 = local_78 + 1;
    lVar10 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)local_78 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*local_78 + 8))(local_78,1);
      }
    }
  }
  if ((*param_1 == 0) || (lVar10 = UGameInstance::GetFirstGamePlayer(), lVar10 == 0)) {
    uStack_1b0 = (longlong *)0x0;
    bVar5 = false;
    bVar4 = false;
    bVar19 = true;
    local_140 = (longlong *)0x0;
    local_1b8 = 0;
  }
  else {
    lVar10 = FUN_142547b50(lVar10,local_60);
    uStack_1b0 = *(longlong **)(lVar10 + 0x10);
    local_1b8 = *(longlong *)(lVar10 + 8);
    local_130 = uStack_1b0;
    if (uStack_1b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_1b0 + 1) = (int)uStack_1b0[1] + 1;
      UNLOCK();
    }
    bVar5 = true;
    bVar4 = true;
    bVar19 = false;
  }
  plVar11 = local_140;
  if (uStack_1b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_1b0 + 1) = (int)uStack_1b0[1] + 1;
    UNLOCK();
  }
  if ((bVar19) && (local_140 != (longlong *)0x0)) {
    LOCK();
    plVar18 = local_140 + 1;
    lVar10 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_140)(local_140);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*local_140 + 8))(local_140,1);
      }
    }
  }
  plVar11 = local_130;
  if ((bVar4) && (local_130 != (longlong *)0x0)) {
    LOCK();
    plVar18 = local_130 + 1;
    lVar10 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_130)(local_130);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*local_130 + 8))(local_130,1);
      }
    }
  }
  if (bVar5) {
    local_60[0] = &PTR_FUN_143f740c8;
    if (local_48 != 0) {
      FMemory::Free();
    }
    local_60[0] = &PTR_FUN_143f73d18;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_50 + 1;
      lVar10 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  if (local_180 == (longlong *)0x0) goto LAB_140d8e370;
  bVar19 = true;
  if (param_2 != '\0') {
    local_190 = (longlong *)0x0;
    local_118 = 0;
    local_110 = 0;
    if ((plVar8 == (longlong *)0x0) || (local_1b8 == 0)) {
      puVar9 = &local_128;
      local_128 = 0;
      uStack_120 = 0;
      bVar5 = false;
      bVar4 = false;
    }
    else {
      local_a8 = (undefined4)local_1b8;
      uStack_a4 = local_1b8._4_4_;
      uStack_a0 = (undefined4)uStack_1b0;
      uStack_9c = uStack_1b0._4_4_;
      if (uStack_1b0 != (longlong *)0x0) {
        LOCK();
        *(int *)(uStack_1b0 + 1) = (int)uStack_1b0[1] + 1;
        UNLOCK();
      }
      puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x28))(plVar8,local_70,&local_a8,&local_118);
      bVar5 = true;
      bVar4 = true;
      local_190 = (longlong *)*puVar9;
    }
    local_188 = (longlong *)puVar9[1];
    puVar9[1] = 0;
    *puVar9 = 0;
    if ((bVar4) && (local_68 != (longlong *)0x0)) {
      LOCK();
      plVar11 = local_68 + 1;
      lVar10 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)local_68 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_68 + 8))(local_68,1);
        }
      }
    }
    if ((bVar5) && (plVar11 = (longlong *)CONCAT44(uStack_9c,uStack_a0), plVar11 != (longlong *)0x0)
       ) {
      LOCK();
      plVar8 = plVar11 + 1;
      lVar10 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    if ((local_190 == (longlong *)0x0) ||
       (plVar11 = (longlong *)FName::FName(local_88,L"SPARK",1), param_4 != *plVar11)) {
      iVar14 = 0;
      if (0 < (int)param_3[1]) {
        lVar10 = 0;
        do {
          lVar17 = *param_3;
          local_f8 = *(undefined8 *)(lVar17 + lVar10);
          local_f0 = *(longlong **)(lVar17 + 8 + lVar10);
          if (local_f0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
            UNLOCK();
          }
          lVar17 = (longlong)iVar14 * 0x30 + lVar17;
          FUN_140d68fa0(param_1,&local_f8,lVar17 + 0x10,lVar17 + 0x20,0);
          plVar11 = local_f0;
          if (local_f0 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_f0 + 1;
            lVar17 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar17 == 1) {
              (**(code **)*local_f0)(local_f0);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              iVar13 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*plVar11 + 8))(plVar11,1);
              }
            }
          }
          iVar14 = iVar14 + 1;
          lVar10 = lVar10 + 0x30;
        } while (iVar14 < (int)param_3[1]);
      }
    }
    else {
      bVar19 = false;
      local_1c8 = (longlong *)0x0;
      local_1c0 = 0;
      lVar10 = *param_3;
      uVar16 = (ulonglong)(int)param_3[1];
      lVar17 = uVar16 * 0x30 + lVar10;
      iVar14 = 0;
      iVar13 = 0;
      if (lVar10 != lVar17) {
        while( true ) {
          local_1c0 = CONCAT44(local_1c0._4_4_,iVar13 + 1);
          if (iVar14 < iVar13 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_1c8,iVar13);
          }
          FString::FString(local_1c8 + (longlong)iVar13 * 2,lVar10 + 0x10);
          lVar10 = lVar10 + 0x30;
          if (lVar10 == lVar17) break;
          iVar14 = local_1c0._4_4_;
          iVar13 = (int)local_1c0;
        }
        uVar16 = (ulonglong)*(uint *)(param_3 + 1);
        lVar10 = *param_3;
      }
      local_160 = (uint)uVar16;
      local_168 = 0;
      local_170 = param_1;
      if (local_160 == 0) {
        local_15c = 0;
      }
      else {
        TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy
                  (&local_168,uVar16 & 0xffffffff,0);
        lVar10 = lVar10 - local_168;
        lVar17 = local_168 + 0x10;
        do {
          *(undefined8 *)(lVar17 + -0x10) = *(undefined8 *)(lVar10 + -0x10 + lVar17);
          lVar3 = *(longlong *)(lVar10 + -8 + lVar17);
          *(longlong *)(lVar17 + -8) = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          FString::FString(lVar17,lVar10 + lVar17);
          FString::FString(lVar17 + 0x10,lVar17 + 0x10 + lVar10);
          lVar17 = lVar17 + 0x30;
          uVar15 = (int)uVar16 - 1;
          uVar16 = (ulonglong)uVar15;
        } while (uVar15 != 0);
        uVar16 = (ulonglong)local_160;
      }
      lVar10 = local_168;
      plVar11 = local_170;
      local_1a8 = (longlong *)0x0;
      plVar8 = (longlong *)FMemory::Realloc(0,0x30);
      local_1a0 = 3;
      local_1a8 = plVar8;
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = (longlong)&PTR_GetPoolName_1445315a8;
        plVar8[1] = (longlong)plVar11;
        plVar8[2] = 0;
        *(int *)(plVar8 + 3) = (int)uVar16;
        if ((int)uVar16 == 0) {
          *(undefined4 *)((longlong)plVar8 + 0x1c) = 0;
        }
        else {
          TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy
                    (plVar8 + 2,uVar16 & 0xffffffff,0);
          lVar10 = lVar10 - plVar8[2];
          lVar17 = plVar8[2] + 0x10;
          do {
            *(undefined8 *)(lVar17 + -0x10) = *(undefined8 *)(lVar10 + -0x10 + lVar17);
            lVar3 = *(longlong *)(lVar10 + -8 + lVar17);
            *(longlong *)(lVar17 + -8) = lVar3;
            if (lVar3 != 0) {
              LOCK();
              *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
              UNLOCK();
            }
            FString::FString(lVar17,lVar10 + lVar17);
            FString::FString(lVar17 + 0x10,lVar17 + 0x10 + lVar10);
            lVar17 = lVar17 + 0x30;
            uVar15 = (int)uVar16 - 1;
            uVar16 = (ulonglong)uVar15;
          } while (uVar15 != 0);
        }
        lVar10 = FDelegateHandle::GenerateNewID();
        plVar8[5] = lVar10;
        *plVar8 = (longlong)&PTR_GetPoolName_1445315f0;
      }
      (**(code **)(*local_190 + 0x10))(local_190,&local_1c8,&local_1a8);
      if (local_1a0 == 0) {
LAB_140d8df8d:
        if (local_1a8 != (longlong *)0x0) {
          FMemory::Free(local_1a8);
        }
      }
      else if (local_1a8 != (longlong *)0x0) {
        (**(code **)(*local_1a8 + 0x28))(local_1a8,0);
        if (local_1a8 != (longlong *)0x0) {
          local_1a8 = (longlong *)FMemory::Realloc(local_1a8,0,0);
        }
        local_1a0 = 0;
        goto LAB_140d8df8d;
      }
      TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>::
      ~TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>(&local_168);
      plVar11 = local_1c8;
      for (iVar14 = (int)local_1c0; iVar14 != 0; iVar14 = iVar14 + -1) {
        if (*plVar11 != 0) {
          FMemory::Free();
        }
        plVar11 = plVar11 + 2;
      }
      if (local_1c8 != (longlong *)0x0) {
        FMemory::Free(local_1c8);
      }
    }
    plVar11 = local_188;
    if (local_188 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_188 + 1;
      lVar10 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_188)(local_188);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_188 + 8))(local_188,1);
        }
      }
    }
    if (local_118 != 0) {
      FMemory::Free();
    }
  }
  plVar11 = (longlong *)*param_3;
  plVar18 = plVar11 + (longlong)(int)param_3[1] * 6;
  plVar8 = uStack_1b0;
  for (; uStack_1b0 = plVar8, plVar11 != plVar18; plVar11 = plVar11 + 6) {
    if (*plVar11 != 0) {
      if (((param_2 == '\0') && (*param_1 != 0)) && (local_1b8 != 0)) {
        local_1b8._4_4_ = (undefined4)((ulonglong)local_1b8 >> 0x20);
        uStack_1b0._0_4_ = SUB84(plVar8,0);
        uStack_1b0._4_4_ = (undefined4)((ulonglong)plVar8 >> 0x20);
        local_98 = (undefined4)local_1b8;
        uStack_94 = local_1b8._4_4_;
        uStack_90 = (undefined4)uStack_1b0;
        uStack_8c = uStack_1b0._4_4_;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        iVar14 = (**(code **)(*local_180 + 0x78))(local_180,&local_98);
        plVar8 = (longlong *)CONCAT44(uStack_8c,uStack_90);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar8 + 1;
          lVar10 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar13 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
        }
        pcVar12 = (char *)FUN_140dbc5d0(*param_1 + 0x5f0,local_198);
        if ((iVar14 != 2) || (*pcVar12 == '\x01')) {
          local_e8 = *plVar11;
          local_e0 = (longlong *)plVar11[1];
          if (local_e0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
            UNLOCK();
          }
          lVar10 = FUN_140bbb8d0(*param_1,&local_e8);
          if (lVar10 == 0) {
LAB_140d8e215:
            lVar10 = 0;
          }
          else {
            lVar17 = UInputKeySelector::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar17 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar17 + 0x90) * 8) != lVar17 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (!bVar4) goto LAB_140d8e215;
          }
          plVar8 = local_e0;
          if (local_e0 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_e0 + 1;
            lVar17 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar17 == 1) {
              (**(code **)*local_e0)(local_e0);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              iVar14 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar14 == 1) {
                (**(code **)(*plVar8 + 8))(plVar8,1);
              }
            }
          }
          if (lVar10 != 0) {
            FUN_14270d290(lVar10,&local_c8);
            if (1 < local_c0) {
              local_d8 = *plVar11;
              local_d0 = (longlong *)plVar11[1];
              if (local_d0 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
                UNLOCK();
              }
              local_108 = 0;
              local_100 = 0;
              FUN_140d68fa0(param_1,&local_d8,&local_c8,&local_108,1);
              if (local_108 != 0) {
                FMemory::Free();
              }
              plVar8 = local_d0;
              if (local_d0 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_d0 + 1;
                lVar10 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar10 == 1) {
                  (**(code **)*local_d0)(local_d0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar8 + 0xc);
                  iVar14 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar14 == 1) {
                    (**(code **)(*plVar8 + 8))(plVar8,1);
                  }
                }
              }
              param_2 = '\x01';
            }
            if (local_c8 != 0) {
              FMemory::Free();
            }
          }
        }
      }
      if (bVar19) {
        local_b8 = *plVar11;
        local_b0 = (longlong *)plVar11[1];
        if (local_b0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
          UNLOCK();
        }
        FUN_140d76db0(param_1,&local_b8);
        plVar8 = local_b0;
        if (local_b0 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_b0 + 1;
          lVar10 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_b0)(local_b0);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
        }
      }
    }
    plVar8 = uStack_1b0;
  }
LAB_140d8e370:
  FUN_140d8e460(param_1 + 0x3f,param_2,param_3);
  plVar11 = uStack_1b0;
  if (uStack_1b0 != (longlong *)0x0) {
    LOCK();
    plVar8 = uStack_1b0 + 1;
    lVar10 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*uStack_1b0)(uStack_1b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*uStack_1b0 + 8))(uStack_1b0,1);
      }
    }
  }
  plVar11 = local_178;
  if (local_178 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_178 + 1;
    lVar10 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_178)(local_178);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*local_178 + 8))(local_178,1);
      }
    }
  }
  return;
}



// FUNCTION 140d8e460 FUN_140d8e460 body=958 status=ok
// SIG undefined FUN_140d8e460(void)

void FUN_140d8e460(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined8 *local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  plVar14 = (longlong *)*param_3;
  plVar15 = plVar14 + (longlong)(int)param_3[1] * 6;
  do {
    if (plVar14 == plVar15) {
      return;
    }
    puVar4 = (undefined8 *)*plVar14;
    if (puVar4 != (undefined8 *)0x0) {
      plVar5 = (longlong *)plVar14[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      plVar10 = *(longlong **)(param_1 + 0x48);
      plVar16 = plVar10 + (longlong)*(int *)(param_1 + 0x50) * 2;
      for (; plVar10 != plVar16; plVar10 = plVar10 + 2) {
        cVar7 = (**(code **)*puVar4)(puVar4,*(undefined8 *)*plVar10);
        if (cVar7 != '\0') {
          lVar6 = *plVar10;
          plVar10 = (longlong *)plVar10[1];
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
          }
          if (lVar6 != 0) {
            iVar11 = *(int *)(lVar6 + 0x10);
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              plVar16 = plVar10 + 1;
              lVar6 = *plVar16;
              *(int *)plVar16 = (int)*plVar16 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
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
            goto LAB_140d8e59f;
          }
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar16 = plVar10 + 1;
            lVar6 = *plVar16;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
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
          break;
        }
      }
      iVar11 = 0;
LAB_140d8e59f:
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar5 + 1;
        lVar6 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
      puVar4 = (undefined8 *)*plVar14;
      plVar5 = (longlong *)plVar14[1];
      if (iVar11 == 1) {
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        local_58 = puVar4;
        local_50 = plVar5;
        FUN_140d6fbb0(param_1,&local_58,plVar14 + 4);
        plVar10 = local_50;
      }
      else {
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        puVar13 = *(undefined8 **)(param_1 + 0x38);
        puVar12 = puVar13 + (longlong)*(int *)(param_1 + 0x40) * 2;
        for (; puVar13 != puVar12; puVar13 = puVar13 + 2) {
          puVar8 = (undefined8 *)
                   (**(code **)(*(longlong *)*puVar13 + 8))((longlong *)*puVar13,local_48);
          cVar7 = (**(code **)*puVar4)(puVar4,*puVar8);
          plVar10 = local_40;
          if (local_40 != (longlong *)0x0) {
            LOCK();
            plVar16 = local_40 + 1;
            lVar6 = *plVar16;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_40)(local_40);
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
          if (cVar7 != '\0') {
            plVar10 = (longlong *)puVar13[1];
            plVar16 = (longlong *)*puVar13;
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
              UNLOCK();
              if (plVar10 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
                UNLOCK();
                LOCK();
                plVar2 = plVar10 + 1;
                lVar6 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar6 == 1) {
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
            }
            goto LAB_140d8e6a5;
          }
        }
        plVar16 = (longlong *)0x0;
        plVar10 = (longlong *)0x0;
LAB_140d8e6a5:
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          lVar6 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        if ((plVar16 != (longlong *)0x0) && (*(char *)((longlong)plVar16 + 0x31) != '\0')) {
          uVar9 = (**(code **)(*plVar16 + 8))(plVar16,local_38);
          FUN_140d94190(param_1,uVar9);
          plVar5 = local_30;
          if (local_30 != (longlong *)0x0) {
            LOCK();
            plVar16 = local_30 + 1;
            lVar6 = *plVar16;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_30)(local_30);
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              iVar11 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
        }
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar10 + 1;
        lVar6 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
    }
    plVar14 = plVar14 + 6;
  } while( true );
}



// FUNCTION 140d8e820 FUN_140d8e820 body=565 status=ok
// SIG undefined FUN_140d8e820(void)

void FUN_140d8e820(longlong param_1,undefined8 *param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  int local_30;
  longlong local_28;
  longlong *plStack_20;
  
  if ((((param_3 != '\0') && (*(longlong *)(param_1 + 0x10) != 0)) &&
      (lVar4 = FUN_140bba5e0(), lVar4 != 0)) && (lVar4 = FUN_140d3a750(lVar4,param_2), lVar4 != 0))
  {
    FUN_140d3ae50(lVar4,&local_38);
    plVar8 = local_38 + (longlong)local_30 * 2;
    for (plVar7 = local_38; plVar7 != plVar8; plVar7 = plVar7 + 2) {
      FUN_140d6d860(param_1,&local_58,plVar7,2);
      plVar6 = plStack_50;
      if (local_58 != 0) {
        local_48 = *param_2;
        local_40 = (longlong *)param_2[1];
        if (local_40 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_40 + 1) = (int)local_40[1] + 1;
          UNLOCK();
        }
        local_28 = local_58;
        plStack_20 = plStack_50;
        if (plStack_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
          UNLOCK();
        }
        uVar5 = FUN_140bb7190(*(undefined8 *)(param_1 + 0x10));
        FUN_140d6e030(uVar5,&local_28,&local_48);
        plVar3 = plStack_50;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar6 + 1;
          lVar4 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          plVar6 = plStack_50;
          if ((int)lVar4 == 1) {
            (**(code **)*plStack_50)(plStack_50);
            plVar6 = plStack_50;
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plStack_50 + 8))(plStack_50,1);
            }
          }
        }
        plVar3 = local_40;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_40 + 1;
          lVar4 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          plVar6 = plStack_50;
          if ((int)lVar4 == 1) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar6 = plStack_50;
            if (iVar2 == 1) {
              (**(code **)(*local_40 + 8))(local_40,1);
              plVar6 = plStack_50;
            }
          }
        }
      }
      plVar3 = plStack_50;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar6 + 1;
        lVar4 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_50)(plStack_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plStack_50 + 8))(plStack_50,1);
          }
        }
      }
    }
    TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x120);
    plVar7 = local_38;
    for (; local_30 != 0; local_30 = local_30 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  return;
}



// FUNCTION 140d8ea60 FUN_140d8ea60 body=1236 status=ok
// SIG undefined FUN_140d8ea60(void)

void FUN_140d8ea60(longlong *param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  void *_Dst;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  int local_res18 [2];
  undefined ***local_res20;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  ulonglong local_90;
  longlong local_88;
  longlong *plStack_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined **local_68;
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  undefined8 local_48;
  
  if ((((param_3 != '\0') && (*param_1 != 0)) && (lVar5 = FUN_140bba5e0(), lVar5 != 0)) &&
     (lVar5 = FUN_140d3a750(lVar5,param_2), lVar5 != 0)) {
    local_58 = (longlong *)param_2[1];
    local_60 = (longlong *)*param_2;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
    }
    local_68 = &PTR_FUN_143f740c8;
    local_50 = 0;
    local_48 = 0;
    if ((int)param_1[3] != *(int *)((longlong)param_1 + 0x44)) {
      if ((local_60 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*local_60 + 0x20))(local_60), cVar3 == '\0')) {
        iVar4 = -1;
      }
      else {
        iVar4 = GetTypeHash(local_60);
      }
      plVar6 = (longlong *)param_1[10];
      if ((longlong *)param_1[10] == (longlong *)0x0) {
        plVar6 = param_1 + 9;
      }
      iVar4 = *(int *)((longlong)plVar6 + ((longlong)(int)param_1[0xb] - 1U & (longlong)iVar4) * 4);
      if (iVar4 != -1) {
        lVar7 = param_1[2];
        do {
          lVar13 = (longlong)iVar4 * 0x40;
          plVar6 = *(longlong **)(lVar13 + 8 + lVar7);
          if (((plVar6 == (longlong *)0x0) ||
              (cVar3 = (**(code **)(*plVar6 + 0x20))(), cVar3 == '\0')) ||
             ((local_60 == (longlong *)0x0 ||
              (cVar3 = (**(code **)(*local_60 + 0x20))(local_60), cVar3 == '\0')))) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          plVar6 = *(longlong **)(lVar13 + lVar7 + 8);
          if ((((plVar6 == (longlong *)0x0) ||
               (cVar3 = (**(code **)(*plVar6 + 0x20))(), cVar3 == '\0')) &&
              ((local_60 == (longlong *)0x0 ||
               (cVar3 = (**(code **)(*local_60 + 0x20))(local_60), cVar3 == '\0')))) ||
             ((bVar2 && (cVar3 = (**(code **)*local_60)
                                           (local_60,*(undefined8 *)(lVar13 + lVar7 + 8)),
                        cVar3 != '\0')))) {
            if ((iVar4 != -1) && (lVar13 = param_1[2] + lVar13, lVar13 != 0)) goto LAB_140d8ec50;
            break;
          }
          lVar7 = param_1[2];
          iVar4 = *(int *)(lVar13 + 0x38 + lVar7);
        } while (iVar4 != -1);
      }
    }
    local_res20 = &local_68;
    FUN_140d5c380(param_1 + 2,local_res18,&local_res20,0);
    lVar13 = (longlong)local_res18[0] * 0x40 + param_1[2];
LAB_140d8ec50:
    local_68 = &PTR_FUN_143f740c8;
    if (local_50 != 0) {
      FMemory::Free();
    }
    plVar6 = local_58;
    local_68 = &PTR_FUN_143f73d18;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_58 + 1;
      lVar7 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_58)(local_58);
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
    local_98 = (longlong *)0x0;
    local_90 = 0;
    FUN_140d3af20(lVar5,&local_98);
    uVar12 = (ulonglong)(int)local_90;
    plVar14 = local_98 + uVar12 * 2;
    plVar6 = local_98;
    if (local_98 != plVar14) {
      do {
        TJsonReaderFactory<wchar_t>::Create(local_78,plVar6);
        local_88 = 0;
        plStack_80 = (longlong *)0x0;
        cVar3 = FUN_1404a7f60(local_78);
        if ((cVar3 != '\0') && (local_88 != 0)) {
          _Dst = (void *)operator_new(0x248);
          plVar8 = (longlong *)0x0;
          if (_Dst != (void *)0x0) {
            _guard_xfg_dispatch_icall_nop(_Dst,0,0x248);
            plVar8 = (longlong *)FUN_140d63d70(_Dst);
          }
          plVar9 = (longlong *)operator_new(0x18);
          local_a0 = (longlong *)0x0;
          if (plVar9 != (longlong *)0x0) {
            *(undefined4 *)(plVar9 + 1) = 1;
            *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
            *plVar9 = (longlong)&PTR_FUN_143f3f2e0;
            plVar9[2] = (longlong)plVar8;
            local_a0 = plVar9;
          }
          local_a8 = plVar8;
          SharedPointerInternals::EnableSharedFromThis(&local_a8,plVar8,plVar8);
          if (local_a8 != (longlong *)0x0) {
            (**(code **)(*local_a8 + 0x20))(local_a8,&local_88,2,*param_1);
            if (((longlong *)local_a8[2] != (longlong *)0x0) &&
               (cVar3 = (**(code **)(*(longlong *)local_a8[2] + 0x20))(), cVar3 != '\0')) {
              iVar4 = *(int *)(lVar13 + 0x30);
              *(int *)(lVar13 + 0x30) = iVar4 + 1;
              if (*(int *)(lVar13 + 0x34) < iVar4 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(lVar13 + 0x28),iVar4);
              }
              puVar10 = (undefined8 *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar13 + 0x28));
              *puVar10 = local_a8;
              puVar10[1] = local_a0;
              if (local_a0 == (longlong *)0x0) goto LAB_140d8ee42;
              LOCK();
              *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
              UNLOCK();
            }
          }
          plVar8 = local_a0;
          if (local_a0 != (longlong *)0x0) {
            LOCK();
            plVar9 = local_a0 + 1;
            lVar5 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*local_a0)(local_a0);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar8 + 8))(plVar8,1);
              }
            }
          }
        }
LAB_140d8ee42:
        plVar8 = plStack_80;
        if (plStack_80 != (longlong *)0x0) {
          LOCK();
          plVar9 = plStack_80 + 1;
          lVar5 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plStack_80)(plStack_80);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
        }
        plVar8 = local_70;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_70 + 1;
          lVar5 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_70 + 8))(local_70,1);
            }
          }
        }
        plVar6 = plVar6 + 2;
      } while (plVar6 != plVar14);
      uVar12 = local_90 & 0xffffffff;
    }
    uVar11 = (uint)uVar12;
    plVar6 = local_98;
    while (uVar11 != 0) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
      uVar11 = (int)uVar12 - 1;
      uVar12 = (ulonglong)uVar11;
    }
    if (local_98 != (longlong *)0x0) {
      FMemory::Free(local_98);
    }
  }
  return;
}



// FUNCTION 140d8ef40 FUN_140d8ef40 body=545 status=ok
// SIG undefined FUN_140d8ef40(void)

void FUN_140d8ef40(longlong param_1,undefined8 *param_2,char param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 local_58;
  undefined8 *local_50;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  longlong *local_30;
  longlong *local_28;
  
  iVar4 = FUN_140d84700();
  if (iVar4 == 3) {
    plVar5 = (longlong *)(**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_48);
    lVar3 = *plVar5;
    if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
      lVar6 = *(longlong *)(param_1 + 0x98);
      if (*(longlong *)(param_1 + 0x98) == 0) {
        lVar6 = param_1 + 0x90;
      }
      iVar4 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                               (longlong)*(int *)(param_1 + 0xa0) - 1U) * 4);
      if (iVar4 != -1) {
        do {
          lVar6 = *(longlong *)(param_1 + 0x58) + (longlong)iVar4 * 0x18;
          if (*(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar4 * 0x18) == lVar3) {
            if (iVar4 != -1) goto LAB_140d8eff3;
            break;
          }
          iVar4 = *(int *)(lVar6 + 0x10);
        } while (iVar4 != -1);
      }
    }
    lVar6 = 0;
LAB_140d8eff3:
    piVar1 = (int *)(lVar6 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      puVar7 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_40)
      ;
      FUN_1404cf890(&local_30,*puVar7);
      if (local_30 != (longlong *)0x0) {
        local_58 = 0;
        plVar5 = (longlong *)(**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_38)
        ;
        lVar3 = *plVar5;
        if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
          lVar6 = *(longlong *)(param_1 + 0xe8);
          if (*(longlong *)(param_1 + 0xe8) == 0) {
            lVar6 = param_1 + 0xe0;
          }
          iVar4 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                                   (longlong)*(int *)(param_1 + 0xf0) - 1U) * 4);
          if (iVar4 != -1) {
            lVar6 = *(longlong *)(param_1 + 0xa8);
            do {
              lVar8 = (longlong)iVar4;
              if (*(longlong *)(lVar6 + lVar8 * 0x18) == lVar3) {
                if (iVar4 != -1) {
                  local_58 = *(undefined8 *)(lVar6 + 8 + lVar8 * 0x18);
                  TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
                  ::Remove((longlong *)(param_1 + 0xa8));
                  (**(code **)(*local_30 + 0x100))(local_30,&local_58);
                }
                break;
              }
              iVar4 = *(int *)(lVar6 + 0x10 + lVar8 * 0x18);
            } while (iVar4 != -1);
          }
        }
      }
      plVar5 = local_28;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_28 + 1;
        lVar3 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_28 + 8))(local_28,1);
          }
        }
      }
    }
    if ((param_3 != '\0') && (param_4 != 0)) {
      FUN_140d69230(param_1,param_2,param_4);
    }
    local_50 = param_2;
    FUN_140d60b10(param_1 + 0x48,&local_50);
  }
  return;
}



// FUNCTION 140d8f170 FUN_140d8f170 body=182 status=ok
// SIG undefined FUN_140d8f170(void)

void FUN_140d8f170(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int local_res8 [2];
  longlong *local_res18;
  
  lVar1 = *param_1;
  param_1 = param_1 + 1;
  lVar2 = *(longlong *)(lVar1 + 0x30);
  FUN_140549690(lVar2 + 0x18,local_res8,param_1);
  if ((local_res8[0] == -1) ||
     (lVar4 = (longlong)local_res8[0] * 0x68 + *(longlong *)(lVar2 + 0x18), lVar4 == 0)) {
    local_res18 = param_1;
    FUN_140d5d8e0(lVar2 + 0x18,local_res8,&local_res18,0);
    lVar4 = (longlong)local_res8[0] * 0x68 + *(longlong *)(lVar2 + 0x18);
  }
  FUN_140d95b80(lVar4 + 0x10,*(undefined8 *)(lVar1 + 0x28));
  iVar3 = FUN_140d844e0(lVar1,param_1);
  if ((-1 < iVar3) && (iVar3 < *(int *)(lVar1 + 0x40))) {
    TBaseMulticastDelegate<void,FUniqueNetId_const_&,FUniqueNetId_const_&>::Broadcast
              (lVar1 + 0x10,param_1,
               *(undefined8 *)
                (*(longlong *)(*(longlong *)(lVar1 + 0x38) + (longlong)iVar3 * 0x10) + 0x10));
  }
  return;
}



// FUNCTION 140d8f230 FUN_140d8f230 body=457 status=ok
// SIG undefined FUN_140d8f230(void)

void FUN_140d8f230(undefined8 *param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 local_68 [8];
  longlong *local_60;
  longlong *local_58;
  longlong local_50 [3];
  longlong local_38;
  longlong *plStack_30;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18 [2];
  
  puVar5 = (undefined8 *)FName::FName(local_68,L"SPARK",1);
  FUN_1404cf890(&local_60,*puVar5);
  plVar7 = local_60;
  if ((local_60 != (longlong *)0x0) && (param_3 != 0)) {
    FUN_140bbc690(*param_1,&local_38,param_2);
    if (local_38 != 0) {
      local_28 = local_38;
      plStack_20 = plStack_30;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
        UNLOCK();
        plVar7 = local_60;
      }
      uVar6 = (**(code **)(*plVar7 + 0xa0))(plVar7,local_18,param_2);
      local_50[0] = 0;
      local_50[1] = 0;
      FUN_140d68fa0(param_1,&local_28,uVar6,local_50,0);
      if (local_50[0] != 0) {
        FMemory::Free();
      }
      plVar7 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_20 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_20)(plStack_20);
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
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar7 = plStack_30 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plStack_30 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_30 + 8))(plStack_30,1);
        }
      }
    }
  }
  plVar7 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  return;
}



// FUNCTION 140d8f400 FUN_140d8f400 body=505 status=ok
// SIG undefined FUN_140d8f400(void)

void FUN_140d8f400(longlong param_1,undefined8 param_2,int param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  void *_Src;
  int iVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  int *piVar11;
  int *piVar12;
  longlong lVar13;
  undefined1 local_40 [8];
  longlong *local_38;
  
  if ((param_3 == 200) && (lVar2 = *param_4, lVar2 != 0)) {
    plVar3 = (longlong *)param_4[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    lVar13 = *(longlong *)(lVar2 + 8);
    lVar2 = lVar13 + (longlong)*(int *)(lVar2 + 0x10) * 0x28;
    if (lVar13 != lVar2) {
      piVar12 = (int *)(lVar13 + 0x20);
      do {
        puVar4 = *(undefined8 **)(param_1 + 0x20);
        iVar9 = *(int *)(param_1 + 0x28);
        for (puVar10 = puVar4; puVar10 != puVar4 + (longlong)iVar9 * 2; puVar10 = puVar10 + 2) {
          if (piVar12[-4] == 0) {
            puVar8 = &DAT_143f3eda8;
          }
          else {
            puVar8 = *(undefined2 **)(piVar12 + -6);
          }
          if (*(int *)(puVar10 + 1) == 0) {
            puVar7 = &DAT_143f3eda8;
          }
          else {
            puVar7 = (undefined2 *)*puVar10;
          }
          iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar8);
          if (iVar5 == 0) {
            iVar9 = (int)((longlong)puVar10 - (longlong)puVar4 >> 4);
            goto LAB_140d8f4d1;
          }
        }
        iVar9 = -1;
LAB_140d8f4d1:
        piVar11 = (int *)((longlong)iVar9 * 0x10 + *(longlong *)(param_1 + 0x48));
        if (piVar11 != piVar12 + -2) {
          iVar9 = *piVar12;
          _Src = *(void **)(piVar12 + -2);
          piVar11[2] = iVar9;
          if ((iVar9 == 0) && (piVar11[3] == 0)) {
            piVar11[3] = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(piVar11,iVar9);
            _guard_xfg_dispatch_icall_nop(*(void **)piVar11,_Src,(longlong)iVar9 * 2);
          }
        }
        lVar13 = lVar13 + 0x28;
        piVar12 = piVar12 + 10;
      } while (lVar13 != lVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    FUN_140d83b00(param_1);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar12 = (int *)((longlong)plVar3 + 0xc);
        iVar9 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
  }
  else {
    uVar6 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_40);
    TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x60,uVar6);
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_38 + 1;
      lVar2 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar12 = (int *)((longlong)local_38 + 0xc);
        iVar9 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140d8f600 FUN_140d8f600 body=1049 status=ok
// SIG undefined FUN_140d8f600(void)

void FUN_140d8f600(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
  int local_b8 [2];
  longlong *local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong *local_98;
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  longlong *local_88;
  longlong local_80;
  longlong local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  longlong *local_58;
  
  iVar4 = FUN_140d844e0(param_1,*param_2 + 0x10);
  if ((-1 < iVar4) && (iVar4 < *(int *)(param_1 + 0x40))) {
    lVar6 = *param_2;
    if (*(char *)(lVar6 + 0x58) == '\0') {
      lVar13 = *(longlong *)(lVar6 + 0x20);
      lVar6 = (longlong)*(int *)(lVar6 + 0x28) * 0x10 + lVar13;
      for (; lVar13 != lVar6; lVar13 = lVar13 + 0x10) {
        FUN_140d95c80(*(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar4 * 0x10) + 0x30,
                      lVar13);
      }
    }
    else {
      puVar5 = (undefined8 *)FName::FName(local_68,L"SPARK",1);
      FUN_1404cf890(&local_b0,*puVar5);
      if (local_b0 != (longlong *)0x0) {
        lVar6 = *param_2;
        iVar9 = 0;
        if (0 < *(int *)(lVar6 + 0x28)) {
          lVar13 = 0;
          do {
            lVar10 = *(longlong *)(lVar6 + 0x48) + lVar13;
            if (1 < *(int *)(lVar10 + 8)) {
              lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar4 * 0x10);
              TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
              ::FindId(lVar3 + 0x30,local_b8,(longlong)iVar9 * 0x10 + *(longlong *)(lVar6 + 0x20));
              if (local_b8[0] == -1) {
                lVar6 = 0;
              }
              else {
                lVar6 = (longlong)local_b8[0] * 0x38 + *(longlong *)(lVar3 + 0x30);
              }
              plVar7 = (longlong *)(**(code **)(*local_b0 + 0x60))(local_b0,local_60,lVar10);
              plVar8 = (longlong *)(lVar6 + 0x20);
              if (plVar8 != plVar7) {
                *plVar8 = *plVar7;
                *plVar7 = 0;
                SharedPointerInternals::FSharedReferencer<1>::operator=(lVar6 + 0x28,plVar7 + 1);
              }
              plVar7 = local_58;
              if (local_58 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_58 + 1;
                lVar10 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar10 == 1) {
                  (**(code **)*local_58)(local_58);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar7 + 0xc);
                  iVar12 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar12 == 1) {
                    (**(code **)(*plVar7 + 8))(plVar7,1);
                  }
                }
              }
              lVar10 = *plVar8;
              if (lVar10 != 0) {
                local_98 = *(longlong **)(lVar6 + 0x28);
                if (local_98 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_98 + 1) = (int)local_98[1] + 1;
                  UNLOCK();
                }
                lVar3 = *(longlong *)(param_1 + 0x30);
                local_88 = &local_a0;
                local_a0 = lVar10;
                local_80 = lVar6 + 0x10;
                FUN_140d5ebd0(lVar3 + 0xd0,local_90,&local_88,0);
                local_70 = &local_a0;
                local_78 = lVar6 + 0x10;
                FUN_140d5ebd0(lVar3 + 0x120,local_8c,&local_78);
                plVar8 = local_98;
                if (local_98 != (longlong *)0x0) {
                  LOCK();
                  plVar7 = local_98 + 1;
                  lVar6 = *plVar7;
                  *(int *)plVar7 = (int)*plVar7 + -1;
                  UNLOCK();
                  if ((int)lVar6 == 1) {
                    (**(code **)*local_98)(local_98);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar8 + 0xc);
                    iVar12 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar12 == 1) {
                      (**(code **)(*plVar8 + 8))(plVar8,1);
                    }
                  }
                }
              }
            }
            lVar6 = *param_2;
            iVar9 = iVar9 + 1;
            lVar13 = lVar13 + 0x10;
          } while (iVar9 < *(int *)(lVar6 + 0x28));
        }
      }
      plVar8 = local_a8;
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_a8 + 1;
        lVar6 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_a8)(local_a8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_a8 + 8))(local_a8,1);
          }
        }
      }
    }
  }
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_3,*param_2 + 0x10);
  lVar6 = (longlong)*(int *)(param_1 + 0x50);
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar9 = 0;
    bVar14 = **(longlong **)(param_1 + 0x48) != *param_2;
    lVar13 = 0;
    iVar4 = 0;
    do {
      lVar13 = lVar13 + 1;
      iVar12 = iVar4 + 1;
      if (lVar13 < lVar6) {
        plVar8 = (longlong *)(lVar13 * 0x10 + *(longlong *)(param_1 + 0x48));
        do {
          if (bVar14 != (*plVar8 != *param_2)) break;
          iVar12 = iVar12 + 1;
          lVar13 = lVar13 + 1;
          plVar8 = plVar8 + 2;
        } while (lVar13 < lVar6);
      }
      iVar11 = iVar12 - iVar4;
      if (bVar14 == false) {
        if (iVar11 != 0) {
          plVar8 = (longlong *)((longlong)iVar4 * 0x10 + 8 + *(longlong *)(param_1 + 0x48));
          do {
            plVar7 = (longlong *)*plVar8;
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar7 + 1;
              lVar10 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*plVar7)(plVar7);
                LOCK();
                piVar2 = (int *)((longlong)plVar7 + 0xc);
                iVar4 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar7 + 8))(plVar7,1);
                }
              }
            }
            plVar8 = plVar8 + 2;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
      }
      else {
        if (iVar9 != iVar4) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar9 * 0x10 + *(longlong *)(param_1 + 0x48)),
                     (void *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0x48)),
                     (longlong)iVar11 << 4);
        }
        iVar9 = iVar9 + iVar11;
      }
      bVar14 = (bool)(bVar14 ^ 1);
      iVar4 = iVar12;
    } while (lVar13 < lVar6);
    *(int *)(param_1 + 0x50) = iVar9;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
  return;
}



// FUNCTION 140d8fa20 FUN_140d8fa20 body=1068 status=ok
// SIG undefined FUN_140d8fa20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d8fa20(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  wchar_t _C;
  undefined8 uVar5;
  longlong lVar6;
  wint_t wVar7;
  wint_t wVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  longlong *plVar11;
  int iVar12;
  undefined2 *puVar13;
  longlong lVar14;
  int *piVar15;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  longlong local_d8;
  longlong *plStack_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  undefined8 *local_b8;
  undefined **local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_88 = param_1;
  local_80 = param_2;
  FUN_140dcda70(param_1,*(undefined4 *)(param_1 + 0x84));
  lVar14 = *param_4;
  local_78 = (longlong)(int)param_4[1] * 0x70 + lVar14;
  if (lVar14 == local_78) {
LAB_140d8fe25:
    TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x120);
    return;
  }
  piVar15 = (int *)(lVar14 + 0x30);
LAB_140d8faa0:
  if (*piVar15 == 0) {
    puVar13 = &DAT_143f3eda8;
  }
  else {
    puVar13 = *(undefined2 **)(piVar15 + -2);
  }
  pwVar10 = L"FriendStatus";
  do {
    _C = *(wchar_t *)((longlong)(puVar13 + -0xa229668c) + (longlong)pwVar10);
    if ((_C == L'\0') && (*pwVar10 == L'\0')) goto LAB_140d8fdec;
    if (_C != *pwVar10) {
      wVar7 = towlower(_C);
      wVar8 = towlower(*pwVar10);
      if (wVar7 != wVar8) break;
    }
    pwVar10 = pwVar10 + 1;
  } while( true );
  if (wVar7 != wVar8) {
    FUN_140d6d860(param_1,&local_d8,piVar15 + 2,1);
    lVar9 = local_d8;
    plVar11 = plStack_d0;
    if (local_d8 != 0) {
      if (lVar14 != local_d8 + 8) {
        plVar11 = *(longlong **)(piVar15 + -8);
        puVar1 = (undefined8 *)(local_d8 + 0x10);
        uVar5 = *(undefined8 *)(piVar15 + -10);
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
        }
        local_c8 = uVar5;
        plStack_c0 = plVar11;
        if (&local_c8 != puVar1) {
          local_c8 = *puVar1;
          plStack_c0 = *(longlong **)(local_d8 + 0x18);
          *puVar1 = uVar5;
          *(longlong **)(local_d8 + 0x18) = plVar11;
          local_58 = uVar5;
          plStack_50 = plVar11;
        }
        plVar11 = plStack_c0;
        if (plStack_c0 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_c0 + 1;
          lVar6 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plStack_c0)(plStack_c0);
            LOCK();
            piVar3 = (int *)((longlong)plVar11 + 0xc);
            iVar12 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
            }
          }
        }
      }
      TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(lVar9 + 0x20,piVar15 + -6)
      ;
      local_b8 = (undefined8 *)(local_d8 + 0xa8);
      iVar12 = *(int *)(local_d8 + 0x150);
      puVar1 = *(undefined8 **)(local_d8 + 0x148);
      if (*(undefined8 **)(local_d8 + 0x148) == (undefined8 *)0x0) {
        puVar1 = local_b8;
      }
      for (; iVar12 != 0; iVar12 = iVar12 + -1) {
        *puVar1 = &PTR_FUN_143f740c8;
        if (puVar1[3] != 0) {
          FMemory::Free();
        }
        *puVar1 = &PTR_FUN_143f73d18;
        plVar11 = (longlong *)puVar1[2];
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar11 + 1;
          lVar9 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar3 = (int *)((longlong)plVar11 + 0xc);
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
        puVar1 = puVar1 + 5;
        param_1 = local_88;
      }
      local_e8 = 0;
      FUN_140d5bce0(local_b8,*(undefined8 *)(piVar15 + 0xc),piVar15[0xe],
                    *(undefined4 *)((longlong)local_b8 + 0xac));
      lVar9 = FUN_140d7ee70(local_d8);
      if (((lVar9 != 0) && (*(char *)(lVar9 + 0x11) != '\0')) && (lVar9 = *local_80, lVar9 != 0)) {
        local_a0 = (longlong *)local_80[1];
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
          UNLOCK();
        }
        local_b0 = &PTR_FUN_143f740c8;
        local_98 = 0;
        local_90 = 0;
        local_a8 = lVar9;
        FUN_1404c0940(local_d8 + 0x30,&local_b0);
        if (local_98 != 0) {
          FMemory::Free();
        }
        plVar11 = local_a0;
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_a0 + 1;
          lVar9 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_a0)(local_a0);
            LOCK();
            piVar3 = (int *)((longlong)plVar11 + 0xc);
            iVar12 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*local_a0 + 8))(local_a0,1);
            }
          }
        }
      }
      plVar11 = plStack_d0;
      local_68 = local_d8;
      plStack_60 = plStack_d0;
      if (plStack_d0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_d0 + 1) = (int)plStack_d0[1] + 1;
        UNLOCK();
      }
      FUN_140d92c70(param_1,&local_68,*(undefined1 *)(local_d8 + 0x58),1);
      plVar2 = plStack_d0;
      if (plVar11 == (longlong *)0x0) goto LAB_140d8fdec;
      LOCK();
      plVar11 = plVar11 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      plVar11 = plStack_d0;
      if ((int)lVar9 == 1) {
        (**(code **)*plStack_d0)(plStack_d0);
        plVar11 = plStack_d0;
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        iVar12 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
        }
      }
    }
    plVar2 = plStack_d0;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar11 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plStack_d0)(plStack_d0);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        iVar12 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
        }
      }
    }
  }
LAB_140d8fdec:
  lVar14 = lVar14 + 0x70;
  piVar15 = piVar15 + 0x1c;
  if (lVar14 == local_78) goto LAB_140d8fe25;
  goto LAB_140d8faa0;
}



// FUNCTION 140d8fe50 FUN_140d8fe50 body=1347 status=ok
// SIG undefined FUN_140d8fe50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d8fe50(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  wchar_t _C;
  char cVar3;
  wint_t wVar4;
  wint_t wVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  void *_Dst;
  undefined8 uVar9;
  wchar_t *pwVar10;
  undefined2 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [8];
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong local_c0;
  longlong *plStack_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong *plStack_98;
  longlong local_90;
  longlong *plStack_88;
  longlong *local_78;
  longlong *plStack_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong local_50;
  longlong *plStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  FUN_140dcda70(param_1,1);
  lVar6 = *(longlong *)(param_1 + 0x10);
  if (lVar6 == 0) {
    return;
  }
  lVar13 = *param_4;
  lVar14 = (longlong)(int)param_4[1] * 0x70 + lVar13;
  if (lVar13 != lVar14) {
    plVar12 = (longlong *)0x0;
LAB_140d8fed5:
    if (*(int *)(lVar13 + 0x30) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = *(undefined2 **)(lVar13 + 0x28);
    }
    pwVar10 = L"FriendStatus";
    do {
      _C = *(wchar_t *)((longlong)(puVar11 + -0xa228bb98) + (longlong)pwVar10);
      if ((_C == L'\0') && (*pwVar10 == L'\0')) goto LAB_140d8ff2f;
      if (_C != *pwVar10) {
        wVar4 = towlower(_C);
        wVar5 = towlower(*pwVar10);
        if (wVar4 != wVar5) goto LAB_140d8ff21;
      }
      pwVar10 = pwVar10 + 1;
    } while( true );
  }
LAB_140d90366:
  FUN_140bf8330(lVar6);
  return;
LAB_140d8ff21:
  if (wVar4 == wVar5) {
LAB_140d8ff2f:
    lVar6 = operator_new(0x88);
    plVar7 = plVar12;
    if (lVar6 != 0) {
      plVar7 = (longlong *)FJsonStringReader::FJsonStringReader(lVar6,lVar13 + 0x38);
    }
    plVar8 = (longlong *)operator_new(0x18);
    plStack_70 = plVar12;
    if (plVar8 != (longlong *)0x0) {
      *(undefined4 *)(plVar8 + 1) = 1;
      *plVar8 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
      plVar8[2] = (longlong)plVar7;
      plStack_70 = plVar8;
    }
    local_78 = plVar7;
    SharedPointerInternals::EnableSharedFromThis(&local_78,plVar7,plVar7);
    plVar7 = plStack_70;
    local_68 = local_78;
    plStack_60 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
      UNLOCK();
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar8 = plStack_70 + 1;
        lVar6 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_70)(plStack_70);
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
    }
    local_e0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_90 = 0;
    plStack_88 = (longlong *)0x0;
    local_c8 = 0;
    local_c0 = 0;
    plStack_b8 = (longlong *)0x0;
    cVar3 = FUN_1404a6f40(&local_68,local_e8);
    plVar8 = plStack_88;
    plVar7 = plStack_b8;
    if (cVar3 == '\0') {
      if (plStack_b8 != (longlong *)0x0) {
        LOCK();
        plVar8 = plStack_b8 + 1;
        lVar6 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_b8)(plStack_b8);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plStack_b8 + 8))(plStack_b8,1);
          }
        }
      }
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_d0);
      if (local_e0 != 0) {
        FMemory::Free();
      }
    }
    else if (local_c0 == 0) {
      if (plStack_b8 != (longlong *)0x0) {
        LOCK();
        plVar8 = plStack_b8 + 1;
        lVar6 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_b8)(plStack_b8);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plStack_b8 + 8))(plStack_b8,1);
          }
        }
      }
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_d0);
      if (local_e0 != 0) {
        FMemory::Free();
      }
    }
    else {
      if (plStack_b8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_b8 + 1) = (int)plStack_b8[1] + 1;
        UNLOCK();
      }
      local_a0 = local_90;
      plStack_98 = plStack_88;
      local_50 = local_c0;
      plStack_48 = plStack_b8;
      local_90 = local_c0;
      plStack_88 = plStack_b8;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar8 + 1;
        lVar6 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plStack_98 + 8))();
          }
        }
      }
      plVar7 = plStack_b8;
      if (plStack_b8 != (longlong *)0x0) {
        LOCK();
        plVar8 = plStack_b8 + 1;
        lVar6 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_b8)(plStack_b8);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plStack_b8 + 8))();
          }
        }
      }
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_d0);
      if (local_e0 != 0) {
        FMemory::Free();
      }
      if (local_90 != 0) {
        _Dst = (void *)operator_new(0x248);
        plVar7 = plVar12;
        if (_Dst != (void *)0x0) {
          _guard_xfg_dispatch_icall_nop(_Dst,0,0x248);
          plVar7 = (longlong *)FUN_140d63d70(_Dst);
        }
        plVar8 = (longlong *)operator_new(0x18);
        local_a8 = plVar12;
        if (plVar8 != (longlong *)0x0) {
          *(undefined4 *)(plVar8 + 1) = 1;
          *plVar8 = (longlong)&PTR_FUN_143f3f2e0;
          *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
          plVar8[2] = (longlong)plVar7;
          local_a8 = plVar8;
        }
        local_b0 = plVar7;
        SharedPointerInternals::EnableSharedFromThis(&local_b0,plVar7,plVar7);
        if (local_b0 != (longlong *)0x0) {
          (**(code **)(*local_b0 + 0x20))(local_b0,&local_90,1,*(undefined8 *)(param_1 + 0x10));
          FUN_1404c0940(local_b0 + 1,lVar13);
          uVar9 = FUN_140bb73a0(*(undefined8 *)(param_1 + 0x10));
          FUN_140d6e2a0(uVar9,&local_b0);
        }
        plVar7 = local_a8;
        if (local_a8 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_a8 + 1;
          lVar6 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_a8)(local_a8);
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
      }
    }
    plVar7 = plStack_88;
    if (plStack_88 != (longlong *)0x0) {
      LOCK();
      plVar8 = plStack_88 + 1;
      lVar6 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_88)(plStack_88);
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
    plVar7 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar8 = plStack_60 + 1;
      lVar6 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_60 + 8))(plStack_60,1);
        }
      }
    }
  }
  lVar13 = lVar13 + 0x70;
  if (lVar13 == lVar14) goto code_r0x000140d9034a;
  goto LAB_140d8fed5;
code_r0x000140d9034a:
  lVar6 = *(longlong *)(param_1 + 0x10);
  goto LAB_140d90366;
}



// FUNCTION 140d903a0 FUN_140d903a0 body=5150 status=ok
// SIG undefined FUN_140d903a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d903a0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  undefined2 *puVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  void *pvVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 uVar14;
  undefined2 *puVar15;
  uint uVar16;
  longlong *plVar17;
  undefined4 *puVar18;
  longlong lVar19;
  undefined4 *puVar20;
  longlong *plVar21;
  longlong *plVar22;
  bool bVar23;
  undefined1 auStack_5d8 [32];
  char local_5b8;
  undefined4 *local_5b0;
  uint local_5a8;
  int local_5a4;
  char local_5a0 [8];
  longlong *local_598;
  longlong lStack_590;
  longlong *local_588;
  longlong local_580;
  undefined8 local_578;
  float local_570;
  int local_568;
  int local_564;
  longlong local_560;
  undefined8 local_558;
  longlong *local_548;
  longlong *plStack_540;
  longlong *local_538;
  int local_530;
  undefined2 *local_528;
  int local_520;
  longlong *local_518;
  longlong *local_510;
  undefined8 local_508;
  longlong *plStack_500;
  undefined8 local_4f8;
  longlong *local_4f0;
  undefined2 *local_4e8;
  int local_4e0;
  undefined2 *local_4d8;
  int local_4d0;
  undefined1 local_4c8 [8];
  longlong *local_4c0;
  longlong *local_4b8;
  longlong *local_4b0;
  longlong local_4a8;
  longlong lStack_4a0;
  undefined **local_498;
  longlong *local_490;
  longlong *local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined **local_470;
  longlong *local_468;
  longlong *local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined **local_448;
  longlong *local_440;
  longlong *local_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined **local_420;
  longlong *local_418;
  longlong *local_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined **local_3f8;
  longlong *local_3f0;
  longlong *local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  longlong *local_3d0;
  longlong **local_3c8;
  undefined **local_3c0;
  longlong *local_3b8;
  longlong *local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined **local_398;
  longlong *local_390;
  longlong *local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined1 local_370 [8];
  undefined1 local_368 [8];
  longlong *local_360;
  longlong *local_358;
  longlong *plStack_350;
  undefined **local_348;
  longlong *local_340;
  byte local_31f;
  undefined8 local_2b8;
  longlong *local_2b0;
  undefined8 local_2a8;
  undefined1 local_298 [8];
  undefined1 local_290 [8];
  longlong *local_288;
  undefined1 local_260 [8];
  int local_258;
  void *local_250;
  int local_248;
  void *local_240;
  int local_238;
  int local_230;
  int local_22c;
  int local_228;
  float local_224;
  float local_220;
  float local_21c;
  char local_218;
  char local_217;
  int local_214;
  int local_210;
  int local_20c;
  undefined1 local_208 [280];
  undefined1 local_f0 [80];
  undefined1 local_a0 [40];
  undefined1 local_78 [24];
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_5d8;
  plVar21 = (longlong *)0x0;
  local_564 = 0;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  local_588 = param_3;
  local_580 = param_1;
  puVar9 = (undefined8 *)FName::FName(&local_4c0,L"SPARK",1);
  FUN_1404cf890(&local_518,*puVar9);
  bVar23 = local_518 == (longlong *)0x0;
  if (bVar23) {
    puVar9 = &local_508;
    local_508 = 0;
    plStack_500 = (longlong *)0x0;
    plVar17 = plVar21;
  }
  else {
    puVar9 = (undefined8 *)(**(code **)(*local_518 + 0x60))(local_518,local_368,param_3 + 2);
    plVar17 = (longlong *)*puVar9;
  }
  plVar2 = (longlong *)puVar9[1];
  puVar9[1] = 0;
  *puVar9 = 0;
  plVar22 = plStack_500;
  if ((bVar23) && (plStack_500 != (longlong *)0x0)) {
    LOCK();
    plVar12 = plStack_500 + 1;
    lVar10 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_500)(plStack_500);
      LOCK();
      piVar1 = (int *)((longlong)plVar22 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_500 + 8))(plStack_500,1);
      }
    }
  }
  if ((!bVar23) && (local_360 != (longlong *)0x0)) {
    LOCK();
    plVar22 = local_360 + 1;
    lVar10 = *plVar22;
    *(int *)plVar22 = (int)*plVar22 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_360)(local_360);
      LOCK();
      piVar1 = (int *)((longlong)local_360 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_360 + 8))(local_360,1);
      }
    }
  }
  bVar3 = false;
  bVar23 = false;
  if (plVar17 == (longlong *)0x0) goto LAB_140d9161e;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  local_4b8 = plVar17;
  local_4b0 = plVar2;
  FUN_140bbb2b0(*(undefined8 *)(param_1 + 0x10),&local_548,&local_4b8);
  plVar22 = local_4b0;
  if (local_4b0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_4b0 + 1;
    lVar10 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_4b0)(local_4b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar22 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar22 + 8))(plVar22,1);
      }
    }
  }
  if (local_548 == (longlong *)0x0) {
LAB_140d90588:
    if ((int)local_588[9] < 2) {
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
      }
      local_408 = 0;
      local_420 = &PTR_FUN_143f740c8;
      local_400 = 0;
      local_418 = plVar17;
      local_410 = plVar2;
      FUN_140d2cd70(param_1 + 0x140,&local_564,&local_420);
      if ((local_564 == -1) ||
         (lVar10 = (longlong)local_564 * 0x40 + *(longlong *)(param_1 + 0x140), lVar10 == 0)) {
        local_4a8 = 0;
        lStack_4a0 = 0;
      }
      else {
        lStack_4a0 = *(longlong *)(lVar10 + 0x30);
        local_4a8 = *(longlong *)(lVar10 + 0x28);
        if (lStack_4a0 != 0) {
          LOCK();
          *(int *)(lStack_4a0 + 8) = *(int *)(lStack_4a0 + 8) + 1;
          UNLOCK();
        }
      }
      lVar10 = local_4a8;
      FUN_1404bf980(&local_420);
      if (lVar10 != 0) {
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
        }
        local_3f8 = &PTR_FUN_143f740c8;
        local_3e0 = 0;
        local_3d8 = 0;
        local_3f0 = plVar17;
        local_3e8 = plVar2;
        FUN_140d8bc40(param_1,&local_3f8);
        FUN_1404bf980(&local_3f8);
      }
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_4a8);
    }
    else {
      lVar10 = FUN_140bb7630(*(undefined8 *)(param_1 + 0x10));
      iVar7 = *(int *)(lVar10 + 0x24);
      iVar8 = *(int *)(lVar10 + 0x20);
      lVar10 = FUN_140bb7630(*(undefined8 *)(param_1 + 0x10));
      if ((iVar7 + iVar8) - *(int *)(lVar10 + 0x48) < 1) {
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
        }
        local_3c0 = &PTR_FUN_143f740c8;
        bVar3 = true;
        bVar23 = true;
        local_3a8 = 0;
        local_3a0 = 0;
        plVar22 = plVar21;
        local_4c0 = plVar21;
        param_1 = param_1;
        local_3b8 = plVar17;
        local_3b0 = plVar2;
        if (*(int *)(param_1 + 0x148) != *(int *)(param_1 + 0x174)) {
          cVar6 = (**(code **)(*plVar17 + 0x20))(plVar17);
          if (cVar6 == '\0') {
            iVar7 = -1;
          }
          else {
            iVar7 = GetTypeHash(plVar17);
          }
          lVar10 = *(longlong *)(param_1 + 0x180);
          if (*(longlong *)(param_1 + 0x180) == 0) {
            lVar10 = param_1 + 0x178;
          }
          iVar7 = *(int *)(lVar10 + ((longlong)*(int *)(param_1 + 0x188) - 1U & (longlong)iVar7) * 4
                          );
          param_1 = param_1;
          if (iVar7 != -1) {
            lVar10 = *(longlong *)(param_1 + 0x140);
            do {
              lVar19 = (longlong)iVar7 * 0x40;
              plVar12 = *(longlong **)(lVar19 + 8 + lVar10);
              if ((plVar12 == (longlong *)0x0) ||
                 (cVar6 = (**(code **)(*plVar12 + 0x20))(), cVar6 == '\0')) {
LAB_140d9068d:
                local_5b8 = '\0';
              }
              else {
                cVar6 = (**(code **)(*plVar17 + 0x20))(plVar17);
                local_5b8 = '\x01';
                if (cVar6 == '\0') goto LAB_140d9068d;
              }
              plVar12 = *(longlong **)(lVar19 + 8 + lVar10);
              if ((((plVar12 == (longlong *)0x0) ||
                   (cVar6 = (**(code **)(*plVar12 + 0x20))(), cVar6 == '\0')) &&
                  (cVar6 = (**(code **)(*plVar17 + 0x20))(plVar17), cVar6 == '\0')) ||
                 ((local_5b8 != '\0' &&
                  (cVar6 = (**(code **)*plVar17)(plVar17,*(undefined8 *)(lVar19 + 8 + lVar10)),
                  cVar6 != '\0')))) {
                param_1 = local_580;
                if ((iVar7 != -1) &&
                   (lVar19 = *(longlong *)(local_580 + 0x140) + lVar19, lVar19 != 0)) {
                  plVar22 = *(longlong **)(lVar19 + 0x28);
                  local_4c0 = *(longlong **)(lVar19 + 0x30);
                  if (local_4c0 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_4c0 + 1) = (int)local_4c0[1] + 1;
                    UNLOCK();
                  }
                }
                break;
              }
              lVar10 = *(longlong *)(local_580 + 0x140);
              iVar7 = *(int *)(lVar19 + 0x38 + lVar10);
              param_1 = local_580;
            } while (iVar7 != -1);
          }
        }
        if (plVar22 != (longlong *)0x0) goto LAB_140d90725;
        bVar4 = false;
        plVar22 = local_4c0;
      }
      else {
LAB_140d90725:
        bVar4 = true;
        plVar22 = local_4c0;
      }
      if ((bVar23) && (plVar22 != (longlong *)0x0)) {
        LOCK();
        plVar12 = plVar22 + 1;
        lVar10 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar22)(plVar22);
          LOCK();
          piVar1 = (int *)((longlong)plVar22 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar22 + 8))(plVar22,1);
          }
        }
      }
      if (bVar3) {
        FUN_1404bf980(&local_3c0);
      }
      if (bVar4) {
        local_560 = 0;
        local_558 = 0;
        cVar6 = FBase64::Decode(local_588 + 8,&local_560);
        if ((cVar6 != '\0') && (0 < (int)local_558)) {
          FArchive::FArchive(&local_348);
          local_2b8 = 0;
          local_348 = &PTR_FUN_143f4a3a0;
          local_2b0 = &local_560;
          local_2a8 = 0x7fffffffffffffff;
          FArchive::SetIsLoading(&local_348,1);
          FArchive::SetIsPersistent(&local_348,0);
          if ((int *)local_340[1] < (int *)*local_340 + 1) {
            (*(code *)local_348[10])(&local_348,&local_568,4);
            if ((local_31f & 0x10) != 0) {
              FArchive::ByteSwap(&local_348,&local_568,4);
            }
          }
          else {
            local_568 = *(int *)*local_340;
            *local_340 = *local_340 + 4;
          }
          iVar7 = FUN_1404b0120();
          if (local_568 == iVar7) {
            if ((char *)local_340[1] < (char *)*local_340 + 1) {
              (*(code *)local_348[10])(&local_348,local_5a0,1);
            }
            else {
              local_5a0[0] = *(char *)*local_340;
              *local_340 = *local_340 + 1;
            }
            if (local_5a0[0] == '\x01') {
              FUN_140d63d70(local_298);
              FUN_140d9ecd0(local_260,&local_348);
              if (plVar2 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
                UNLOCK();
              }
              local_480 = 0;
              local_498 = &PTR_FUN_143f740c8;
              local_478 = 0;
              local_490 = plVar17;
              local_488 = plVar2;
              FUN_1404c0940(local_290);
              FUN_1404bf980(&local_498);
              if (local_548 != (longlong *)0x0) {
                local_468 = local_548;
                local_460 = plStack_540;
                if (plStack_540 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plStack_540 + 1) = (int)plStack_540[1] + 1;
                  UNLOCK();
                }
                local_470 = &PTR_FUN_143f740c8;
                local_458 = 0;
                local_450 = 0;
                plVar12 = plVar21;
                plVar22 = plVar21;
                if (*(int *)(param_1 + 0x148) != *(int *)(param_1 + 0x174)) {
                  if ((local_548 == (longlong *)0x0) ||
                     (cVar6 = (**(code **)(*local_548 + 0x20))(local_548), cVar6 == '\0')) {
                    iVar7 = -1;
                  }
                  else {
                    iVar7 = GetTypeHash(local_548);
                  }
                  lVar10 = *(longlong *)(param_1 + 0x180);
                  if (*(longlong *)(param_1 + 0x180) == 0) {
                    lVar10 = param_1 + 0x178;
                  }
                  iVar7 = *(int *)(lVar10 + ((longlong)*(int *)(param_1 + 0x188) - 1U &
                                            (longlong)iVar7) * 4);
                  if (iVar7 != -1) {
                    lVar10 = *(longlong *)(param_1 + 0x140);
                    do {
                      lVar19 = (longlong)iVar7 * 0x40;
                      plVar13 = *(longlong **)(lVar19 + 8 + lVar10);
                      if (((plVar13 == (longlong *)0x0) ||
                          (cVar6 = (**(code **)(*plVar13 + 0x20))(), cVar6 == '\0')) ||
                         (local_548 == (longlong *)0x0)) {
LAB_140d90a02:
                        local_5b8 = '\0';
                      }
                      else {
                        cVar6 = (**(code **)(*local_548 + 0x20))(local_548);
                        local_5b8 = '\x01';
                        if (cVar6 == '\0') goto LAB_140d90a02;
                      }
                      plVar13 = *(longlong **)(lVar19 + 8 + lVar10);
                      if ((((plVar13 == (longlong *)0x0) ||
                           (cVar6 = (**(code **)(*plVar13 + 0x20))(), cVar6 == '\0')) &&
                          ((local_548 == (longlong *)0x0 ||
                           (cVar6 = (**(code **)(*local_548 + 0x20))(local_548), cVar6 == '\0'))))
                         || ((local_5b8 != '\0' &&
                             (cVar6 = (**(code **)*local_548)(local_548), cVar6 != '\0')))) {
                        if ((iVar7 != -1) &&
                           (lVar19 = *(longlong *)(local_580 + 0x140) + lVar19, lVar19 != 0)) {
                          plVar22 = *(longlong **)(lVar19 + 0x28);
                          plVar12 = *(longlong **)(lVar19 + 0x30);
                          if (plVar12 != (longlong *)0x0) {
                            LOCK();
                            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
                            UNLOCK();
                          }
                        }
                        break;
                      }
                      lVar10 = *(longlong *)(local_580 + 0x140);
                      iVar7 = *(int *)(lVar19 + 0x38 + lVar10);
                    } while (iVar7 != -1);
                  }
                }
                FUN_1404bf980(&local_470);
                if (plVar22 != (longlong *)0x0) {
                  FUN_140d668a0(local_208,plVar22 + 0x12);
                  FUN_140d66e70(local_f0,plVar22 + 0x35);
                  local_60 = (undefined1)plVar22[0x47];
                  local_5f = *(undefined1 *)((longlong)plVar22 + 0x239);
                  local_5e = *(undefined1 *)((longlong)plVar22 + 0x23a);
                  local_5d = *(undefined1 *)((longlong)plVar22 + 0x23b);
                  local_5c = *(undefined1 *)((longlong)plVar22 + 0x23c);
                  local_5b = *(undefined1 *)((longlong)plVar22 + 0x23d);
                  local_5a = *(undefined1 *)((longlong)plVar22 + 0x23e);
                  local_59 = *(undefined1 *)((longlong)plVar22 + 0x23f);
                  FUN_140a52100(local_a0,plVar22 + 0x3f);
                  FUN_140a51f90(local_78);
                }
                if (plVar12 != (longlong *)0x0) {
                  LOCK();
                  plVar22 = plVar12 + 1;
                  lVar10 = *plVar22;
                  *(int *)plVar22 = (int)*plVar22 + -1;
                  UNLOCK();
                  if ((int)lVar10 == 1) {
                    (**(code **)*plVar12)(plVar12);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar12 + 0xc);
                    iVar7 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar7 == 1) {
                      (**(code **)(*plVar12 + 8))(plVar12);
                    }
                  }
                }
              }
              lVar10 = local_580;
              if (plVar2 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
                UNLOCK();
              }
              plVar22 = (longlong *)(local_580 + 0x140);
              local_398 = &PTR_FUN_143f740c8;
              local_380 = 0;
              local_378 = 0;
              local_588 = plVar22;
              local_390 = plVar17;
              local_388 = plVar2;
              if (*(int *)(local_580 + 0x148) != *(int *)(local_580 + 0x174)) {
                cVar6 = (**(code **)(*plVar17 + 0x20))(plVar17);
                if (cVar6 == '\0') {
                  iVar7 = -1;
                }
                else {
                  iVar7 = GetTypeHash(plVar17);
                }
                lVar19 = *(longlong *)(lVar10 + 0x180);
                if (*(longlong *)(lVar10 + 0x180) == 0) {
                  lVar19 = lVar10 + 0x178;
                }
                iVar7 = *(int *)(lVar19 + ((longlong)*(int *)(lVar10 + 0x188) - 1U & (longlong)iVar7
                                          ) * 4);
                if (iVar7 != -1) {
                  lVar10 = *plVar22;
                  do {
                    lVar19 = (longlong)iVar7 * 0x40;
                    plVar22 = *(longlong **)(lVar10 + 8 + lVar19);
                    if (((plVar22 == (longlong *)0x0) ||
                        (cVar6 = (**(code **)(*plVar22 + 0x20))(), cVar6 == '\0')) ||
                       (cVar6 = (**(code **)(*plVar17 + 0x20))(plVar17), cVar6 == '\0')) {
                      bVar23 = false;
                    }
                    else {
                      bVar23 = true;
                    }
                    plVar22 = *(longlong **)(lVar10 + 8 + lVar19);
                    if ((((plVar22 == (longlong *)0x0) ||
                         (cVar6 = (**(code **)(*plVar22 + 0x20))(), cVar6 == '\0')) &&
                        (cVar6 = (**(code **)(*plVar17 + 0x20))(plVar17), cVar6 == '\0')) ||
                       ((bVar23 && (cVar6 = (**(code **)*plVar17)(plVar17), cVar6 != '\0')))) {
                      plVar22 = local_588;
                      if ((iVar7 != -1) && (lVar19 = lVar19 + *local_588, lVar19 != 0)) {
                        local_598 = *(longlong **)(lVar19 + 0x28);
                        lStack_590 = *(longlong *)(lVar19 + 0x30);
                        if (lStack_590 != 0) {
                          LOCK();
                          *(int *)(lStack_590 + 8) = *(int *)(lStack_590 + 8) + 1;
                          UNLOCK();
                        }
                        goto LAB_140d90ce3;
                      }
                      break;
                    }
                    lVar10 = *(longlong *)(local_580 + 0x140);
                    iVar7 = *(int *)(lVar10 + 0x38 + lVar19);
                    plVar22 = local_588;
                  } while (iVar7 != -1);
                }
              }
              local_598 = (longlong *)0x0;
              lStack_590 = 0;
LAB_140d90ce3:
              FUN_1404bf980(&local_398);
              if (local_598 == (longlong *)0x0) {
                pvVar11 = (void *)operator_new(0x248);
                plVar12 = plVar21;
                if (pvVar11 != (void *)0x0) {
                  _guard_xfg_dispatch_icall_nop(pvVar11,0,0x248);
                  plVar12 = (longlong *)FUN_140d63d70(pvVar11);
                }
                plVar13 = (longlong *)operator_new(0x18);
                local_4f0 = plVar21;
                if (plVar13 != (longlong *)0x0) {
                  *(undefined4 *)(plVar13 + 1) = 1;
                  *plVar13 = (longlong)&PTR_FUN_143f3f2e0;
                  *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
                  plVar13[2] = (longlong)plVar12;
                  local_4f0 = plVar13;
                }
                SharedPointerInternals::EnableSharedFromThis(&local_4f8,plVar12,plVar12);
                local_4f8 = 0;
                local_598 = plVar12;
                SharedPointerInternals::FSharedReferencer<1>::operator=(&lStack_590,&local_4f0);
                plVar12 = local_4f0;
                if (local_4f0 != (longlong *)0x0) {
                  LOCK();
                  plVar13 = local_4f0 + 1;
                  lVar10 = *plVar13;
                  *(int *)plVar13 = (int)*plVar13 + -1;
                  UNLOCK();
                  if ((int)lVar10 == 1) {
                    (**(code **)*local_4f0)(local_4f0);
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
                if (plVar2 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
                  UNLOCK();
                }
                local_448 = &PTR_FUN_143f740c8;
                local_430 = 0;
                local_428 = 0;
                local_440 = plVar17;
                local_438 = plVar2;
                FUN_1404c0940(local_598 + 1,&local_448);
                FUN_1404bf980(&local_448);
                lVar10 = local_580;
                if ((((*(longlong *)(local_580 + 0x10) != 0) && (local_598 != (longlong *)0x0)) &&
                    (plVar17 = (longlong *)local_598[2], plVar17 != (longlong *)0x0)) &&
                   (cVar6 = (**(code **)(*plVar17 + 0x20))(plVar17), cVar6 != '\0')) {
                  local_3d0 = local_598 + 1;
                  local_3c8 = &local_598;
                  FUN_140d5e980(plVar22,local_4c8,&local_3d0,0);
                  uVar14 = FUN_140bb73a0(*(undefined8 *)(lVar10 + 0x10));
                  FUN_140d6e2a0(uVar14,&local_598);
                }
                bVar23 = true;
                if (local_598 != (longlong *)0x0) goto LAB_140d90ed3;
              }
              else {
                bVar23 = false;
LAB_140d90ed3:
                local_5b0 = (undefined4 *)0x0;
                local_5a8 = 0;
                local_5a4 = 0;
                if (bVar23) {
                  local_5a8 = 1;
                  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_5b0,0);
                  *local_5b0 = 2;
                  puVar20 = local_5b0;
                  uVar16 = local_5a8;
                }
                else {
                  plVar17 = plVar21;
                  if ((int)local_598[8] != local_258) {
                    local_5a8 = 1;
                    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_5b0,0);
                    plVar17 = (longlong *)(ulonglong)local_5a8;
                    *local_5b0 = 7;
                  }
                  iVar7 = local_5a4;
                  puVar20 = local_5b0;
                  local_4e8 = (undefined2 *)0x0;
                  local_4e0 = local_248;
                  if (local_248 == 0) {
                    local_588 = (longlong *)0x0;
                  }
                  else {
                    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_4e8,local_248,0);
                    local_588 = (longlong *)local_4e8;
                    _guard_xfg_dispatch_icall_nop(local_4e8,local_250,(longlong)local_248 * 2);
                  }
                  iVar8 = local_4e0;
                  local_4d0 = (int)local_598[10];
                  lVar10 = (longlong)local_4d0;
                  local_578 = (undefined2 *)local_598[9];
                  local_4d8 = (undefined2 *)0x0;
                  if (local_4d0 == 0) {
                    local_578 = (undefined2 *)0x0;
                  }
                  else {
                    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_4d8,local_4d0,0);
                    pvVar11 = local_578;
                    local_578 = local_4d8;
                    _guard_xfg_dispatch_icall_nop(local_4d8,pvVar11,lVar10 * 2);
                  }
                  puVar5 = local_578;
                  plVar22 = local_588;
                  plVar12 = (longlong *)&DAT_143f3eda8;
                  if (iVar8 != 0) {
                    plVar12 = local_588;
                  }
                  puVar15 = &DAT_143f3eda8;
                  if (local_4d0 != 0) {
                    puVar15 = local_578;
                  }
                  iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar15,plVar12);
                  local_5b8 = iVar8 != 0;
                  if (puVar5 != (undefined2 *)0x0) {
                    FMemory::Free(puVar5);
                  }
                  if (plVar22 != (longlong *)0x0) {
                    FMemory::Free(plVar22);
                  }
                  if (local_5b8 != '\0') {
                    iVar8 = (int)plVar17;
                    local_5a8 = iVar8 + 1;
                    if (iVar7 < (int)local_5a8) {
                      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_5b0,plVar17);
                      puVar20 = local_5b0;
                      iVar7 = local_5a4;
                    }
                    plVar17 = (longlong *)(ulonglong)local_5a8;
                    puVar20[iVar8] = 8;
                  }
                  local_538 = (longlong *)0x0;
                  local_530 = local_238;
                  plVar22 = plVar21;
                  if (local_238 != 0) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_538,local_238,0);
                    plVar22 = local_538;
                    _guard_xfg_dispatch_icall_nop(local_538,local_240,(longlong)local_238 * 2);
                  }
                  iVar8 = local_530;
                  local_528 = (undefined2 *)0x0;
                  local_520 = (int)local_598[0xc];
                  local_578 = (undefined2 *)local_598[0xb];
                  local_588 = (longlong *)CONCAT44(local_588._4_4_,local_520);
                  if (local_520 == 0) {
                    local_578 = (undefined2 *)0x0;
                  }
                  else {
                    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_528,local_520,0);
                    pvVar11 = local_578;
                    local_578 = local_528;
                    _guard_xfg_dispatch_icall_nop(local_528,pvVar11,(longlong)(int)local_588 * 2);
                  }
                  puVar5 = local_578;
                  plVar12 = (longlong *)&DAT_143f3eda8;
                  if (iVar8 != 0) {
                    plVar12 = plVar22;
                  }
                  puVar15 = &DAT_143f3eda8;
                  if (local_520 != 0) {
                    puVar15 = local_578;
                  }
                  iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar15,plVar12);
                  local_5b8 = iVar8 != 0;
                  if (puVar5 != (undefined2 *)0x0) {
                    FMemory::Free(puVar5);
                  }
                  if (plVar22 != (longlong *)0x0) {
                    FMemory::Free(plVar22);
                  }
                  if (local_5b8 != '\0') {
                    iVar8 = (int)plVar17;
                    local_5a8 = iVar8 + 1;
                    if (iVar7 < (int)local_5a8) {
                      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_5b0,plVar17);
                      puVar20 = local_5b0;
                      iVar7 = local_5a4;
                    }
                    plVar17 = (longlong *)(ulonglong)local_5a8;
                    puVar20[iVar8] = 9;
                  }
                  if ((int)local_598[0xd] != local_230) {
                    iVar8 = (int)plVar17;
                    local_5a8 = iVar8 + 1;
                    if (iVar7 < (int)local_5a8) {
                      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_5b0,plVar17);
                      puVar20 = local_5b0;
                      iVar7 = local_5a4;
                    }
                    plVar17 = (longlong *)(ulonglong)local_5a8;
                    puVar20[iVar8] = 10;
                  }
                  if (*(int *)((longlong)local_598 + 0x6c) != local_22c) {
                    iVar8 = (int)plVar17;
                    local_5a8 = iVar8 + 1;
                    if (iVar7 < (int)local_5a8) {
                      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_5b0,plVar17);
                      puVar20 = local_5b0;
                      iVar7 = local_5a4;
                    }
                    plVar17 = (longlong *)(ulonglong)local_5a8;
                    puVar20[iVar8] = 0xb;
                  }
                  if ((int)local_598[0xe] != local_228) {
                    iVar8 = (int)plVar17;
                    local_5a8 = iVar8 + 1;
                    if (iVar7 < (int)local_5a8) {
                      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_5b0,plVar17);
                      puVar20 = local_5b0;
                      iVar7 = local_5a4;
                    }
                    plVar17 = (longlong *)(ulonglong)local_5a8;
                    puVar20[iVar8] = 0xc;
                  }
                  uVar14 = *(undefined8 *)((longlong)local_598 + 0x74);
                  local_570 = *(float *)((longlong)local_598 + 0x7c);
                  local_578 = (undefined2 *)uVar14;
                  if ((((float)uVar14 != local_224) ||
                      (local_578._4_4_ = (float)((ulonglong)uVar14 >> 0x20),
                      local_578._4_4_ != local_220)) || (local_570 != local_21c)) {
                    iVar8 = (int)plVar17;
                    local_5a8 = iVar8 + 1;
                    if (iVar7 < (int)local_5a8) {
                      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_5b0,plVar17);
                      puVar20 = local_5b0;
                      iVar7 = local_5a4;
                    }
                    plVar17 = (longlong *)(ulonglong)local_5a8;
                    puVar20[iVar8] = 0xd;
                  }
                  if ((char)local_598[0x10] != local_218) {
                    iVar8 = (int)plVar17;
                    local_5a8 = iVar8 + 1;
                    if (iVar7 < (int)local_5a8) {
                      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_5b0,plVar17);
                      puVar20 = local_5b0;
                      iVar7 = local_5a4;
                    }
                    plVar17 = (longlong *)(ulonglong)local_5a8;
                    puVar20[iVar8] = 0xe;
                  }
                  if (*(char *)((longlong)local_598 + 0x81) != local_217) {
                    iVar8 = (int)plVar17;
                    local_5a8 = iVar8 + 1;
                    if (iVar7 < (int)local_5a8) {
                      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_5b0,plVar17);
                      puVar20 = local_5b0;
                      iVar7 = local_5a4;
                    }
                    plVar17 = (longlong *)(ulonglong)local_5a8;
                    puVar20[iVar8] = 0xf;
                  }
                  if (*(int *)((longlong)local_598 + 0x84) != local_214) {
                    iVar8 = (int)plVar17;
                    local_5a8 = iVar8 + 1;
                    if (iVar7 < (int)local_5a8) {
                      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_5b0,plVar17);
                      puVar20 = local_5b0;
                      iVar7 = local_5a4;
                    }
                    plVar17 = (longlong *)(ulonglong)local_5a8;
                    puVar20[iVar8] = 0x10;
                  }
                  if ((int)local_598[0x11] != local_210) {
                    iVar8 = (int)plVar17;
                    local_5a8 = iVar8 + 1;
                    if (iVar7 < (int)local_5a8) {
                      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_5b0,plVar17);
                      puVar20 = local_5b0;
                      iVar7 = local_5a4;
                    }
                    plVar17 = (longlong *)(ulonglong)local_5a8;
                    puVar20[iVar8] = 0x1d;
                  }
                  uVar16 = (uint)plVar17;
                  if (*(int *)((longlong)local_598 + 0x8c) != local_20c) {
                    local_5a8 = uVar16 + 1;
                    if (iVar7 < (int)local_5a8) {
                      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_5b0,plVar17);
                      puVar20 = local_5b0;
                    }
                    puVar20[(int)uVar16] = 0x1e;
                    uVar16 = local_5a8;
                  }
                }
                plVar17 = local_598;
                if (uVar16 != 0) {
                  if ((local_288 != (longlong *)0x0) &&
                     (cVar6 = (**(code **)(*local_288 + 0x20))(), cVar6 != '\0')) {
                    FUN_1404c0940(plVar17 + 1,local_290);
                    FUN_140d66de0(plVar17 + 7,local_260);
                    FUN_140d668a0(plVar17 + 0x12,local_208);
                    FUN_140d66e70(plVar17 + 0x35,local_f0);
                    FUN_140a52100(plVar17 + 0x3f,local_a0);
                    FUN_140a51f90(plVar17 + 0x44,local_78);
                    *(undefined1 *)(plVar17 + 0x47) = local_60;
                    *(undefined1 *)((longlong)plVar17 + 0x239) = local_5f;
                    *(undefined1 *)((longlong)plVar17 + 0x23a) = local_5e;
                    *(undefined1 *)((longlong)plVar17 + 0x23b) = local_5d;
                    *(undefined1 *)((longlong)plVar17 + 0x23c) = local_5c;
                    *(undefined1 *)((longlong)plVar17 + 0x23d) = local_5b;
                    *(undefined1 *)((longlong)plVar17 + 0x23e) = local_5a;
                    *(undefined1 *)((longlong)plVar17 + 0x23f) = local_59;
                    plVar22 = (longlong *)FDateTime::UtcNow(local_370);
                    plVar17[6] = *plVar22;
                  }
                  lVar10 = local_580;
                  TBaseMulticastDelegate<void>::Broadcast(local_580 + 0xc0);
                  plVar17 = (longlong *)
                            ((ulonglong)
                             ((longlong)(puVar20 + (int)uVar16) + (3 - (longlong)puVar20)) >> 2);
                  if (puVar20 + (int)uVar16 < puVar20) {
                    plVar17 = plVar21;
                  }
                  puVar18 = puVar20;
                  if (plVar17 != (longlong *)0x0) {
                    do {
                      TBaseMulticastDelegate<void,FPhysScene_*,enum_EPhysicsSceneType>::Broadcast
                                (lVar10 + 0xd8,local_598 + 1,*puVar18);
                      plVar21 = (longlong *)((longlong)plVar21 + 1);
                      puVar18 = puVar18 + 1;
                    } while (plVar21 != plVar17);
                  }
                }
                if (puVar20 != (undefined4 *)0x0) {
                  FMemory::Free(puVar20);
                }
              }
              TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_598);
              FUN_140d65bc0(local_298);
            }
          }
          FArchive::~FArchive(&local_348);
        }
        if (local_560 != 0) {
          FMemory::Free();
        }
      }
    }
  }
  else {
    local_358 = local_548;
    plStack_350 = plStack_540;
    if (plStack_540 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_540 + 1) = (int)plStack_540[1] + 1;
      UNLOCK();
    }
    cVar6 = FUN_140bca7d0(*(undefined8 *)(param_1 + 0x10),&local_358);
    if (cVar6 == '\0') goto LAB_140d90588;
  }
  if (plStack_540 != (longlong *)0x0) {
    LOCK();
    plVar21 = plStack_540 + 1;
    lVar10 = *plVar21;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_540)(plStack_540);
      LOCK();
      piVar1 = (int *)((longlong)plStack_540 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_540 + 8))(plStack_540,1);
      }
    }
  }
LAB_140d9161e:
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar21 = plVar2 + 1;
    lVar10 = *plVar21;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  plVar21 = local_510;
  if (local_510 != (longlong *)0x0) {
    LOCK();
    plVar17 = local_510 + 1;
    lVar10 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_510)(local_510);
      LOCK();
      piVar1 = (int *)((longlong)plVar21 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_510 + 8))(local_510,1);
      }
    }
  }
  return;
}



// FUNCTION 140d917c0 FUN_140d917c0 body=1336 status=ok
// SIG undefined FUN_140d917c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d917c0(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  bool bVar12;
  longlong *plVar13;
  uint *puVar14;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  undefined4 local_170;
  uint *local_168;
  int local_160;
  int local_158;
  uint uStack_154;
  uint *puStack_150;
  undefined4 local_148;
  uint uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  int local_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  undefined8 uStack_110;
  int local_108;
  undefined8 local_100;
  longlong *local_f8;
  longlong local_f0;
  int local_e8;
  longlong *local_e0;
  int iStack_d8;
  uint uStack_d4;
  uint *local_d0;
  uint uStack_c8;
  uint uStack_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  bVar12 = false;
  local_160 = 0;
  if (((*param_1 != 0) && (cVar5 = FUN_140bca6c0(), cVar5 == '\0')) &&
     (lVar6 = (**(code **)(*(longlong *)*param_1 + 0x148))(), lVar6 != 0)) {
    if (*(longlong *)(lVar6 + 400) == 0) {
      local_138 = *(undefined8 *)(lVar6 + 0x3f8);
    }
    else {
      local_138 = *(undefined8 *)(*(longlong *)(lVar6 + 400) + 0x90);
    }
    FUN_142880530(local_138,param_1 + 0xc);
    param_1[0xc] = 0;
    lVar6 = FUN_140bba5e0(*param_1);
    uVar2 = *(uint *)(param_1 + 7);
    local_168 = (uint *)(param_1 + 4);
    uStack_154 = 1;
    local_158 = 0;
    uStack_144 = 0;
    iStack_140 = 0;
    if (uVar2 != 0) {
      puVar14 = (uint *)param_1[6];
      if ((uint *)param_1[6] == (uint *)0x0) {
        puVar14 = local_168;
      }
      uVar10 = *puVar14;
      while (uVar10 == 0) {
        lVar11 = (longlong)local_158;
        iStack_140 = iStack_140 + 0x20;
        iVar9 = local_158 + 1;
        bVar3 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_158;
        local_158 = iVar9;
        if (bVar3) goto LAB_140d91945;
        uVar10 = puVar14[lVar11 + 1];
      }
      uStack_154 = -uVar10 & uVar10;
      local_160 = 0x1f;
      if (uStack_154 != 0) {
        for (; uStack_154 >> local_160 == 0; local_160 = local_160 + -1) {
        }
      }
      if (uStack_154 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - local_160;
      }
      uStack_144 = (iStack_140 - iVar9) + 0x1f;
      if ((int)uVar2 < (int)uStack_144) {
LAB_140d91945:
        uStack_144 = uVar2;
      }
    }
    local_148 = 0xffffffff;
    uStack_11c = *(uint *)(param_1 + 7);
    local_e0 = param_1 + 2;
    uStack_128 = CONCAT44(uStack_154,local_158);
    uVar2 = *(uint *)(param_1 + 7);
    uStack_c8 = 0xffffffff;
    uStack_c4 = uStack_144;
    uStack_110 = CONCAT44(uStack_13c,iStack_140);
    uStack_12c = (undefined4)((ulonglong)local_e0 >> 0x20);
    uStack_120 = -1 << ((byte)uStack_11c & 0x1f);
    local_130 = (int)uStack_11c >> 5;
    uStack_118 = uStack_11c & 0xffffffe0;
    uStack_114 = uStack_144;
    iStack_d8 = local_158;
    uStack_d4 = uStack_154;
    puStack_150 = local_168;
    local_d0 = local_168;
    local_c0 = uStack_110;
    uVar10 = uStack_11c;
    if (uStack_11c != uVar2) {
      puVar14 = (uint *)param_1[6];
      if ((uint *)param_1[6] == (uint *)0x0) {
        puVar14 = local_168;
      }
      uVar10 = puVar14[local_130] & uStack_120;
      while (uVar10 == 0) {
        lVar11 = (longlong)local_130;
        uStack_118 = uStack_118 + 0x20;
        iVar9 = local_130 + 1;
        bVar3 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_130;
        local_130 = iVar9;
        if (bVar3) goto LAB_140d91a3e;
        uVar10 = puVar14[lVar11 + 1];
        uStack_120 = 0xffffffff;
      }
      uVar10 = -uVar10 & uVar10;
      local_108 = 0x1f;
      if (uVar10 != 0) {
        for (; uVar10 >> local_108 == 0; local_108 = local_108 + -1) {
        }
      }
      if (uVar10 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - local_108;
      }
      uStack_11c = (uStack_118 - iVar9) + 0x1f;
      uVar10 = uStack_11c;
      if ((int)uVar2 < (int)uStack_11c) {
LAB_140d91a3e:
        uStack_11c = uVar2;
        uVar10 = uVar2;
      }
    }
    while( true ) {
      if (((uStack_c4 == uVar10) && (local_d0 == local_168)) && (local_e0 == param_1 + 2)) break;
      lVar11 = (longlong)(int)uStack_c4 * 0x40 + *local_e0;
      if (lVar6 == 0) {
        lVar7 = 0;
      }
      else {
        local_100 = *(undefined8 *)(lVar11 + 8);
        bVar12 = true;
        local_f8 = *(longlong **)(lVar11 + 0x10);
        if (local_f8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
          UNLOCK();
        }
        lVar7 = FUN_140d3a750(lVar6,&local_100);
      }
      plVar8 = local_f8;
      if ((bVar12) && (bVar12 = false, local_f8 != (longlong *)0x0)) {
        LOCK();
        plVar13 = local_f8 + 1;
        lVar4 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_f8)(local_f8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      if (lVar7 != 0) {
        plVar8 = *(longlong **)(lVar11 + 0x28);
        plVar13 = plVar8 + (longlong)*(int *)(lVar11 + 0x30) * 2;
        for (; plVar8 != plVar13; plVar8 = plVar8 + 2) {
          lVar11 = *plVar8;
          if ((lVar11 != 0) && (*(char *)(lVar11 + 0x240) != '\0')) {
            FUN_140d83260(lVar11,&local_f0,1,*param_1);
            if (1 < local_e8) {
              FUN_140d4d190(lVar7,*plVar8 + 8,&local_f0);
            }
            *(undefined1 *)(*plVar8 + 0x240) = 0;
            plVar8 = (longlong *)FMemory::Realloc(0,0x30);
            if (plVar8 != (longlong *)0x0) {
              plVar8[1] = (longlong)param_1;
              *plVar8 = (longlong)&DAT_143f3ed00;
              plVar8[2] = (longlong)FUN_140d917c0;
              lVar6 = FDelegateHandle::GenerateNewID();
              plVar8[4] = lVar6;
              *plVar8 = (longlong)&PTR_GetPoolName_143f3ed48;
            }
            lVar6 = param_1[0xd];
            local_b8 = 0;
            local_b0 = 0;
            if (plVar8 != (longlong *)0x0) {
              (**(code **)(*plVar8 + 0x30))(plVar8,&local_b8);
            }
            FWeakObjectPtr::operator=(local_a8,0);
            local_170 = 0xbf800000;
            local_178 = 1;
            local_a0 = 0;
            local_68 = (longlong *)0x0;
            local_58 = 0;
            local_98 = AK::MemoryMgr::StartProfileThreadUsage;
            FUN_142880850(local_138,param_1 + 0xc,&local_b8,(int)lVar6);
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
            TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
            if (plVar8 != (longlong *)0x0) {
              (**(code **)(*plVar8 + 0x28))(plVar8,0);
              lVar6 = FMemory::Realloc(plVar8,0,0);
              if (lVar6 != 0) {
                FMemory::Free(lVar6);
              }
            }
            if (local_f0 == 0) {
              return;
            }
            FMemory::Free();
            return;
          }
        }
      }
      uStack_c8 = uStack_c8 & ~uStack_d4;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_d8);
    }
  }
  return;
}



// FUNCTION 140d91d00 FUN_140d91d00 body=1954 status=ok
// SIG undefined FUN_140d91d00(void)

void FUN_140d91d00(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  wchar_t wVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  wint_t wVar8;
  wint_t wVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  wchar_t *pwVar16;
  wint_t *pwVar17;
  undefined2 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined1 local_res20 [8];
  undefined2 *local_188;
  undefined8 local_180;
  longlong local_178;
  longlong *plStack_170;
  longlong local_168 [5];
  undefined8 local_140;
  undefined8 local_138;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_120 [8];
  longlong local_118;
  longlong *plStack_110;
  undefined1 *local_108;
  longlong *local_100;
  longlong *local_f8;
  undefined1 *local_f0;
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  
  bVar4 = false;
  plVar11 = (longlong *)FName::FName(local_e8,L"SPARK",1);
  if (*(longlong *)(param_1 + 0x28) != *plVar11) {
    return;
  }
  iVar10 = FUN_140d844e0(param_1,param_2);
  if (iVar10 < 0) {
    return;
  }
  if (*(int *)(param_1 + 0x40) <= iVar10) {
    return;
  }
  local_138 = 0;
  plVar11 = (longlong *)FUN_1404b0000(&local_138);
  if (plVar11 != (longlong *)0x0) {
    plVar12 = (longlong *)(**(code **)(*plVar11 + 0x50))(plVar11,local_70);
    bVar4 = true;
    if (*plVar12 != 0) {
      bVar5 = true;
      goto LAB_140d91db4;
    }
  }
  bVar5 = false;
LAB_140d91db4:
  if ((bVar4) && (local_68 != (longlong *)0x0)) {
    LOCK();
    plVar12 = local_68 + 1;
    lVar6 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  bVar4 = false;
  if (bVar5) {
    plVar12 = *(longlong **)
               (*(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar10 * 0x10) + 0x10);
    puVar19 = (undefined8 *)*plVar12;
    puVar20 = puVar19 + (longlong)(int)plVar12[1] * 2;
    if (puVar19 != puVar20) {
LAB_140d91e50:
      (**(code **)(*(longlong *)*puVar19 + 8))((longlong *)*puVar19,local_130);
      FUN_140d7d990(*(undefined8 *)(param_1 + 0x30),&local_178,local_130);
      plVar12 = plStack_170;
      if (local_178 == 0) {
        bVar5 = false;
        local_168[3] = 0xf;
        local_188 = (undefined2 *)0x0;
        local_180 = 0;
        local_168[4] = 0;
        local_140 = 0;
        local_168[2] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_168 + 2,0);
        FGenericPlatformString::Memcpy(local_168[2],L"linked_service",0x1e);
        cVar7 = (**(code **)(*(longlong *)*puVar19 + 0x20))
                          ((longlong *)*puVar19,local_168 + 2,&local_188);
        if ((cVar7 != '\0') && (1 < (int)local_180)) {
          local_168[0] = 0;
          local_168[1] = 0x12;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_168,0);
          FGenericPlatformString::Memcpy(local_168[0],L"linked_service_id",0x24);
          cVar7 = (**(code **)(*(longlong *)*puVar19 + 0x20))
                            ((longlong *)*puVar19,local_168,local_168 + 4);
          bVar4 = true;
          if ((cVar7 != '\0') && (bVar4 = true, bVar5 = false, 1 < (int)local_140)) {
            bVar5 = true;
          }
        }
        if ((bVar4) && (bVar4 = false, local_168[0] != 0)) {
          FMemory::Free();
        }
        if (local_168[2] != 0) {
          FMemory::Free();
        }
        plVar12 = plStack_170;
        if (bVar5) {
          pwVar16 = L"steam";
          puVar18 = &DAT_143f3eda8;
          if ((int)local_180 != 0) {
            puVar18 = local_188;
          }
          do {
            wVar3 = *(wchar_t *)((longlong)(puVar18 + -0xa2291eec) + (longlong)pwVar16);
            if ((wVar3 == L'\0') && (*pwVar16 == L'\0')) goto LAB_140d91fc0;
            if (wVar3 != *pwVar16) {
              wVar8 = towlower(wVar3);
              wVar9 = towlower(*pwVar16);
              if (wVar8 != wVar9) goto LAB_140d91fb6;
            }
            pwVar16 = pwVar16 + 1;
          } while( true );
        }
        goto LAB_140d923be;
      }
      goto LAB_140d923e3;
    }
  }
  return;
LAB_140d91fb6:
  if (wVar8 != wVar9) {
LAB_140d91ff3:
    pwVar17 = &DAT_144523df8;
    puVar18 = &DAT_143f3eda8;
    if ((int)local_180 != 0) {
      puVar18 = local_188;
    }
    do {
      wVar8 = *(wint_t *)((longlong)(puVar18 + -0xa2291efc) + (longlong)pwVar17);
      if ((wVar8 == 0) && (*pwVar17 == 0)) goto LAB_140d9204c;
      if (wVar8 != *pwVar17) {
        wVar8 = towlower(wVar8);
        wVar9 = towlower(*pwVar17);
        if (wVar8 != wVar9) goto LAB_140d92042;
      }
      pwVar17 = pwVar17 + 1;
    } while( true );
  }
LAB_140d91fc0:
  plVar12 = (longlong *)FName::FName(local_e0,L"STEAM",1);
  plVar13 = (longlong *)(**(code **)(*plVar11 + 8))(plVar11,local_d8);
  if (*plVar13 != *plVar12) goto LAB_140d91ff3;
  goto LAB_140d92230;
LAB_140d92042:
  if (wVar8 != wVar9) {
LAB_140d920b2:
    pwVar16 = L"xboxlive";
    puVar18 = &DAT_143f3eda8;
    if ((int)local_180 != 0) {
      puVar18 = local_188;
    }
    do {
      wVar3 = *(wchar_t *)((longlong)(puVar18 + -0xa2291f10) + (longlong)pwVar16);
      if ((wVar3 == L'\0') && (*pwVar16 == L'\0')) goto LAB_140d9210b;
      if (wVar3 != *pwVar16) {
        wVar8 = towlower(wVar3);
        wVar9 = towlower(*pwVar16);
        if (wVar8 != wVar9) goto LAB_140d92101;
      }
      pwVar16 = pwVar16 + 1;
    } while( true );
  }
LAB_140d9204c:
  plVar12 = (longlong *)FName::FName(local_d0,&DAT_144523e08,1);
  plVar13 = (longlong *)(**(code **)(*plVar11 + 8))(plVar11,local_c8);
  if (*plVar13 != *plVar12) {
    plVar12 = (longlong *)FName::FName(local_c0,L"EPIC",1);
    plVar13 = (longlong *)(**(code **)(*plVar11 + 8))(plVar11,local_b8);
    if (*plVar13 != *plVar12) goto LAB_140d920b2;
  }
  goto LAB_140d92230;
LAB_140d92101:
  if (wVar8 != wVar9) {
LAB_140d92171:
    pwVar17 = &DAT_144523e58;
    puVar18 = &DAT_143f3eda8;
    if ((int)local_180 != 0) {
      puVar18 = local_188;
    }
    do {
      wVar8 = *(wint_t *)((longlong)(puVar18 + -0xa2291f2c) + (longlong)pwVar17);
      if ((wVar8 == 0) && (*pwVar17 == 0)) goto LAB_140d921ce;
      if (wVar8 != *pwVar17) {
        wVar8 = towlower(wVar8);
        wVar9 = towlower(*pwVar17);
        if (wVar8 != wVar9) goto LAB_140d921c0;
      }
      pwVar17 = pwVar17 + 1;
    } while( true );
  }
LAB_140d9210b:
  plVar12 = (longlong *)FName::FName(local_b0,L"LIVE",1);
  plVar13 = (longlong *)(**(code **)(*plVar11 + 8))(plVar11,local_a8);
  if (*plVar13 != *plVar12) {
    plVar12 = (longlong *)FName::FName(local_a0,L"ANVIL",1);
    plVar13 = (longlong *)(**(code **)(*plVar11 + 8))(plVar11,local_98);
    if (*plVar13 != *plVar12) goto LAB_140d92171;
  }
  goto LAB_140d92230;
LAB_140d921c0:
  plVar12 = plStack_170;
  if (wVar8 != wVar9) goto LAB_140d923be;
LAB_140d921ce:
  plVar12 = (longlong *)FName::FName(local_90,&DAT_144523e60,1);
  plVar13 = (longlong *)(**(code **)(*plVar11 + 8))(plVar11,local_88);
  if (*plVar13 != *plVar12) {
    plVar13 = (longlong *)FName::FName(local_80,&DAT_144523e68,1);
    plVar14 = (longlong *)(**(code **)(*plVar11 + 8))(plVar11,local_78);
    plVar12 = plStack_170;
    if (*plVar14 != *plVar13) goto LAB_140d923be;
  }
LAB_140d92230:
  puVar15 = (undefined8 *)(**(code **)(*plVar11 + 0x50))(plVar11,local_50);
  plVar12 = (longlong *)
            (**(code **)(*(longlong *)*puVar15 + 0x60))((longlong *)*puVar15,local_60,local_168 + 4)
  ;
  if (&local_178 != plVar12) {
    local_178 = *plVar12;
    *plVar12 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_170,plVar12 + 1);
  }
  plVar12 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_58 + 1;
    lVar6 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_58)(local_58);
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
  plVar12 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_48 + 1;
    lVar6 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_48)(local_48);
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
  plVar12 = plStack_170;
  if (local_178 != 0) {
    local_118 = local_178;
    plStack_110 = plStack_170;
    if (plStack_170 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_170 + 1) = (int)plStack_170[1] + 1;
      UNLOCK();
    }
    local_108 = local_130;
    local_100 = &local_118;
    lVar6 = *(longlong *)(param_1 + 0x30);
    FUN_140d5ebd0(lVar6 + 0xd0,local_res20,&local_108,0);
    local_f8 = &local_118;
    local_f0 = local_130;
    FUN_140d5ebd0(lVar6 + 0x120,local_120,&local_f8);
    plVar13 = plStack_110;
    if (plStack_110 != (longlong *)0x0) {
      LOCK();
      plVar12 = plStack_110 + 1;
      lVar6 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      plVar12 = plStack_170;
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_110)(plStack_110);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar12 = plStack_170;
        if (iVar10 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
          plVar12 = plStack_170;
        }
      }
    }
  }
LAB_140d923be:
  if (local_168[4] != 0) {
    FMemory::Free();
  }
  if (local_188 != (undefined2 *)0x0) {
    FMemory::Free();
  }
LAB_140d923e3:
  plVar13 = plStack_170;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar12 + 1;
    lVar6 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_170)(plStack_170);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plStack_170 + 8))(plStack_170,1);
      }
    }
  }
  plVar12 = local_128;
  if (local_128 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_128 + 1;
    lVar6 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_128)(local_128);
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
  puVar19 = puVar19 + 2;
  if (puVar19 == puVar20) {
    return;
  }
  goto LAB_140d91e50;
}



// FUNCTION 140d924b0 FUN_140d924b0 body=53 status=ok
// SIG undefined FUN_140d924b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d924b0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar1 = FUN_14164ab60();
    FUN_141597530(uVar1,*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    _DAT_14686e820 = _DAT_14686e820 + -1;
  }
  return;
}



// FUNCTION 140d92500 FUN_140d92500 body=78 status=ok
// SIG undefined FUN_140d92500(void)

void FUN_140d92500(undefined8 param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  
  if ((param_2 != 0) && (lVar1 = FUN_140bb7220(param_2), *(char *)(lVar1 + 0x8c) != '\0')) {
    FUN_140d70ce0(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 140d92550 FUN_140d92550 body=401 status=ok
// SIG undefined FUN_140d92550(void)

void FUN_140d92550(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 local_68;
  longlong *local_60;
  longlong local_58 [2];
  undefined4 local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  if ((((param_2 != 0) && (*(longlong **)(param_1 + 0x38) != (longlong *)0x0)) &&
      (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))(), cVar5 != '\0')) &&
     (lVar6 = FUN_140bb7220(param_2), *(char *)(lVar6 + 0x8c) != '\0')) {
    local_68 = *(undefined8 *)(param_1 + 0x10);
    local_60 = *(longlong **)(param_1 + 0x18);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
    }
    cVar5 = FUN_140bca1f0(param_2,&local_68,1);
    plVar4 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_60)(local_60);
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
    if ((cVar5 == '\0') && (lVar6 = FUN_140d83420(param_1,param_2), lVar6 != 0)) {
      local_58[0] = 0;
      local_58[1] = 0;
      local_28 = 0;
      local_20 = 0;
      local_38 = 0;
      uStack_30 = 0;
      local_40 = &PTR_FUN_143f740c8;
      FUN_1404c0940(&local_40,param_1 + 8);
      FString::operator=(local_58,param_1 + 0x178);
      local_48 = *(undefined4 *)(param_1 + 0x7c);
      FUN_140ce53a0(lVar6,local_58);
      FUN_140d70ce0(param_1,param_2,param_3);
      FUN_1404bf980(&local_40);
      if (local_58[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140d926f0 FUN_140d926f0 body=107 status=ok
// SIG undefined FUN_140d926f0(void)

void FUN_140d926f0(longlong param_1,longlong param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_140bb7190(param_2);
    FUN_140d89c40(uVar1,param_1 + 8,param_1 + 0x30,param_1 + 0x68);
    FUN_140d70ce0(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 140d92760 FUN_140d92760 body=1138 status=ok
// SIG undefined FUN_140d92760(void)

void FUN_140d92760(longlong param_1,longlong *param_2,undefined1 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 uVar15;
  undefined8 local_98;
  longlong *local_90;
  longlong local_88;
  longlong *plStack_80;
  longlong local_78;
  int local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  bVar7 = false;
  bVar6 = false;
  local_68 = *(undefined8 *)(param_1 + 0x10);
  local_60 = *(longlong **)(param_1 + 0x18);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
  }
  cVar8 = FUN_140bca1f0(param_2,&local_68,1);
  plVar13 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_60 + 1;
    lVar9 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  if (cVar8 != '\0') {
    return;
  }
  lVar9 = (**(code **)(*param_2 + 0x148))(param_2);
  if ((lVar9 != 0) && (lVar11 = *(longlong *)(lVar9 + 0x140), lVar11 != 0)) {
    lVar10 = FUN_141425c60();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      lVar11 = FUN_142d84360(lVar11);
      goto LAB_140d9286e;
    }
  }
  lVar11 = 0;
LAB_140d9286e:
  if (((lVar9 != 0) && (lVar11 != 0)) &&
     (lVar10 = FUN_140c14b40(*(undefined4 *)(param_1 + 0x178)), lVar10 != 0)) {
    lVar12 = USpinBox::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8
         ) != lVar12 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) && (lVar10 = *(longlong *)(lVar10 + 0x4f8), lVar10 != 0)) {
      UWorld::GetPlayerControllerIterator(lVar9,&local_78);
      while( true ) {
        if ((local_70 < 0) || (*(int *)(local_78 + 8) <= local_70)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) break;
        plVar13 = (longlong *)FWeakObjectPtr::Get();
        if (plVar13 != (longlong *)0x0) {
          lVar9 = FUN_14145f370();
          if ((*(int *)(plVar13[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar13[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
              != lVar9 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            if (((*(uint *)((longlong)plVar13 + 0x4cc) >> 1 & 1) == 0) ||
               (cVar8 = (**(code **)(*plVar13 + 0x768))(), cVar8 == '\0')) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              bVar7 = true;
              plVar14 = (longlong *)FUN_142dcf3a0(plVar13,local_48);
              lVar9 = *plVar14;
            }
            else {
              bVar6 = true;
              plVar14 = &local_88;
              lVar9 = 0;
              local_88 = 0;
              plStack_80 = (longlong *)0x0;
            }
            plVar4 = (longlong *)plVar14[1];
            plVar14[1] = 0;
            *plVar14 = 0;
            plVar14 = plStack_80;
            if ((bVar6) && (bVar6 = false, plStack_80 != (longlong *)0x0)) {
              LOCK();
              plVar2 = plStack_80 + 1;
              lVar12 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar12 == 1) {
                (**(code **)*plStack_80)();
                LOCK();
                piVar1 = (int *)((longlong)plVar14 + 0xc);
                iVar3 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*plStack_80 + 8))(plStack_80,1);
                }
              }
            }
            plVar14 = local_40;
            if ((bVar7) && (bVar7 = false, local_40 != (longlong *)0x0)) {
              LOCK();
              plVar2 = local_40 + 1;
              lVar12 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar12 == 1) {
                (**(code **)*local_40)();
                LOCK();
                piVar1 = (int *)((longlong)plVar14 + 0xc);
                iVar3 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*plVar14 + 8))(plVar14,1);
                }
              }
            }
            if (lVar9 != 0) {
              local_98 = *(undefined8 *)(param_1 + 0x10);
              local_90 = *(longlong **)(param_1 + 0x18);
              if (local_90 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_90 + 1) = (int)local_90[1] + 1;
                UNLOCK();
              }
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                UNLOCK();
              }
              local_58 = lVar9;
              local_50 = plVar4;
              uVar15 = FUN_140bb74b0(param_2);
              cVar8 = FUN_140d89890(uVar15,&local_58,&local_98,0);
              plVar14 = local_50;
              if (local_50 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_50 + 1;
                lVar9 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)*local_50)(local_50);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar14 + 0xc);
                  iVar3 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*plVar14 + 8))(plVar14,1);
                  }
                }
              }
              plVar14 = local_90;
              if (local_90 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_90 + 1;
                lVar9 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)*local_90)();
                  LOCK();
                  piVar1 = (int *)((longlong)plVar14 + 0xc);
                  iVar3 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*local_90 + 8))(local_90,1);
                  }
                }
              }
              if (cVar8 != '\0') {
                FUN_142de0f50(lVar11,plVar13,lVar10);
              }
            }
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              plVar13 = plVar4 + 1;
              lVar9 = *plVar13;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plVar4)();
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
          }
        }
        local_70 = local_70 + 1;
      }
    }
  }
  FUN_140bf8330(param_2);
  FUN_140d70ce0(param_1,param_2,param_3);
  return;
}



// FUNCTION 140d92be0 FUN_140d92be0 body=143 status=ok
// SIG undefined FUN_140d92be0(void)

void FUN_140d92be0(longlong param_1,longlong param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  
  if ((((param_2 != 0) && (*(longlong **)(param_1 + 0x38) != (longlong *)0x0)) &&
      (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))(), cVar1 != '\0')) &&
     ((lVar2 = FUN_140d83420(param_1,param_2), lVar2 != 0 && (param_3 == '\0')))) {
    FUN_140d133d0(lVar2,1);
    FUN_140d089c0(lVar2);
    FUN_140cfaa50(lVar2);
    FUN_140d70ce0(param_1,param_2,0);
  }
  return;
}



// FUNCTION 140d92c70 FUN_140d92c70 body=736 status=ok
// SIG undefined FUN_140d92c70(void)

void FUN_140d92c70(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  ulonglong *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined **local_58 [2];
  longlong *local_48;
  longlong local_40;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))(), cVar4 != '\0')) {
    puVar5 = (ulonglong *)UListView::OnItemSelectionChanged(*(undefined8 *)(param_1 + 0x10));
    uVar11 = 0;
    puVar9 = (undefined8 *)*puVar5;
    uVar10 = (longlong)(int)puVar5[1] & 0x1fffffffffffffff;
    if (puVar9 + (int)puVar5[1] < puVar9) {
      uVar10 = uVar11;
    }
    if (uVar10 != 0) {
      do {
        lVar6 = FUN_142547b50(*puVar9,local_58);
        local_88 = *(longlong *)(lVar6 + 8);
        uStack_80 = *(longlong **)(lVar6 + 0x10);
        if (uStack_80 != (longlong *)0x0) {
          LOCK();
          *(int *)(uStack_80 + 1) = (int)uStack_80[1] + 1;
          UNLOCK();
        }
        local_58[0] = &PTR_FUN_143f740c8;
        if (local_40 != 0) {
          FMemory::Free();
        }
        plVar8 = local_48;
        local_58[0] = &PTR_FUN_143f73d18;
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_48 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
        }
        if (local_88 != 0) {
          local_78 = *(undefined8 *)(*param_2 + 0x10);
          local_70 = *(longlong **)(*param_2 + 0x18);
          if (local_70 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_70 + 1) = (int)local_70[1] + 1;
            UNLOCK();
          }
          local_68 = (undefined4)local_88;
          uStack_64 = local_88._4_4_;
          uStack_60 = (undefined4)uStack_80;
          uStack_5c = uStack_80._4_4_;
          if (uStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(uStack_80 + 1) = (int)uStack_80[1] + 1;
            UNLOCK();
          }
          uVar7 = FUN_140bb74b0(*(undefined8 *)(param_1 + 0x10));
          cVar4 = FUN_140d89890(uVar7,&local_68,&local_78,0);
          plVar8 = (longlong *)CONCAT44(uStack_5c,uStack_60);
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar8 + 1;
            lVar6 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar2 = (int *)((longlong)plVar8 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar8 + 8))(plVar8,1);
              }
            }
          }
          plVar8 = local_70;
          if (local_70 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_70 + 1;
            lVar6 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_70)(local_70);
              LOCK();
              piVar2 = (int *)((longlong)plVar8 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_70 + 8))(local_70,1);
              }
            }
          }
          if (cVar4 != '\0') {
            uVar7 = FUN_140bb7190(*(undefined8 *)(param_1 + 0x10));
            cVar4 = FUN_140d6da80(uVar7,param_2);
            if (cVar4 == '\0') {
              plVar8 = (longlong *)FUN_140bb7190(*(undefined8 *)(param_1 + 0x10));
              if (*plVar8 != 0) {
                FUN_140d98370(plVar8,param_2,&local_88);
                FUN_140da4e60(plVar8);
              }
              (**(code **)(*(longlong *)*param_2 + 0x38))
                        ((longlong *)*param_2,*(undefined8 *)(param_1 + 0x10),param_4);
            }
          }
        }
        plVar8 = uStack_80;
        if (uStack_80 != (longlong *)0x0) {
          LOCK();
          plVar1 = uStack_80 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*uStack_80)(uStack_80);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*uStack_80 + 8))(uStack_80,1);
            }
          }
        }
        puVar9 = puVar9 + 1;
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar10);
    }
  }
  return;
}



// FUNCTION 140d92f50 FUN_140d92f50 body=2458 status=ok
// SIG undefined FUN_140d92f50(void)

ulonglong FUN_140d92f50(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  uint *puVar20;
  longlong *plVar21;
  int iVar22;
  longlong local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  longlong *local_190;
  int local_188;
  longlong local_180;
  longlong *local_178;
  int local_170;
  uint uStack_16c;
  uint *puStack_168;
  undefined4 local_160;
  int iStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  undefined8 local_150;
  longlong *plStack_148;
  longlong *local_138;
  undefined8 uStack_130;
  uint *local_128;
  undefined8 uStack_120;
  undefined1 local_118 [16];
  longlong *local_108;
  undefined2 local_100;
  undefined1 local_f8 [8];
  undefined1 local_f0 [8];
  longlong *local_e8;
  longlong local_e0;
  longlong *local_d8;
  longlong local_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined1 *local_b8;
  longlong *local_b0;
  undefined8 uStack_a8;
  uint *puStack_a0;
  undefined1 auStack_98 [16];
  undefined8 local_88;
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  longlong *local_68;
  undefined **local_60 [2];
  longlong *local_50;
  longlong local_48;
  
  lVar9 = UGameInstance::GetFirstGamePlayer();
  if (lVar9 == 0) {
    plVar14 = (longlong *)0x0;
    local_180 = 0;
    plVar21 = (longlong *)0x0;
    bVar6 = false;
    bVar5 = false;
    bVar4 = true;
    plVar13 = param_1;
  }
  else {
    lVar9 = FUN_142547b50(lVar9,local_60);
    plVar21 = *(longlong **)(lVar9 + 0x10);
    local_180 = *(longlong *)(lVar9 + 8);
    plVar1 = plVar21 + 1;
    if (plVar21 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar1 = (int)*plVar1 + 1;
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = false;
    plVar13 = plVar21;
    plVar14 = param_1;
    if (plVar21 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar1 = (int)*plVar1 + 1;
      UNLOCK();
    }
  }
  lVar9 = local_180;
  if ((bVar4) && (plVar14 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plVar14 + 1;
    lVar15 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar14)();
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      iVar22 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar22 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  if ((bVar5) && (plVar13 != (longlong *)0x0)) {
    LOCK();
    plVar14 = plVar13 + 1;
    lVar15 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar13)();
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      iVar22 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar22 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  if (bVar6) {
    local_60[0] = &PTR_FUN_143f740c8;
    if (local_48 != 0) {
      FMemory::Free();
    }
    local_60[0] = &PTR_FUN_143f73d18;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_50 + 1;
      lVar15 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*local_50)();
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        iVar22 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar22 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  if (lVar9 != 0) {
    local_170 = 0;
    uStack_16c = 1;
    local_138 = param_1 + 0x24;
    iStack_15c = 0;
    iStack_158 = 0;
    iVar22 = (int)param_1[0x29];
    puStack_168 = (uint *)(param_1 + 0x26);
    if (iVar22 != 0) {
      puVar20 = (uint *)param_1[0x28];
      if ((uint *)param_1[0x28] == (uint *)0x0) {
        puVar20 = puStack_168;
      }
      uVar8 = *puVar20;
      iStack_158 = 0;
      local_170 = 0;
      while (uVar8 == 0) {
        lVar9 = (longlong)local_170;
        iStack_158 = iStack_158 + 0x20;
        iVar17 = local_170 + 1;
        bVar4 = (int)(iVar22 + -1 + (iVar22 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_170;
        local_170 = iVar17;
        if (bVar4) goto LAB_140d9319a;
        uVar8 = puVar20[lVar9 + 1];
      }
      uStack_16c = -uVar8 & uVar8;
      iVar17 = 0x1f;
      if (uStack_16c != 0) {
        for (; uStack_16c >> iVar17 == 0; iVar17 = iVar17 + -1) {
        }
      }
      if (uStack_16c == 0) {
        iVar17 = 0x20;
      }
      else {
        iVar17 = 0x1f - iVar17;
      }
      iStack_15c = (iStack_158 - iVar17) + 0x1f;
      if (iVar22 < iStack_15c) {
LAB_140d9319a:
        iStack_15c = iVar22;
      }
    }
    local_160 = 0xffffffff;
    uStack_120 = CONCAT44(iStack_15c,0xffffffff);
    auStack_98._8_4_ = iStack_158;
    auStack_98._0_8_ = uStack_120;
    auStack_98._12_4_ = uStack_154;
    uStack_130 = CONCAT44(uStack_16c,local_170);
    local_100 = 0;
    local_88._0_4_ = SUB84(local_138,0);
    local_88._4_4_ = (undefined4)((ulonglong)local_138 >> 0x20);
    local_118._8_4_ = (undefined4)local_88;
    local_118._0_8_ = auStack_98._8_8_;
    local_118._12_4_ = local_88._4_4_;
    iVar22 = iStack_15c;
    local_128 = puStack_168;
    local_108 = local_138;
    local_b0 = local_138;
    uStack_a8 = uStack_130;
    puStack_a0 = puStack_168;
    local_88 = local_138;
    if (iStack_15c < (int)param_1[0x29]) {
      do {
        local_198 = *(longlong *)((longlong)iVar22 * 0x20 + *local_138);
        lVar9 = *local_138 + (longlong)iVar22 * 0x20;
        puVar10 = (undefined8 *)FName::FName(local_80,"OnlineSubsystem",1);
        uVar11 = FUN_14168dc80();
        cVar7 = FModuleManager::IsModuleLoaded(uVar11,*puVar10);
        if (cVar7 == '\0') {
LAB_140d932ae:
          puVar10 = &local_150;
          local_150 = 0;
          plStack_148 = (longlong *)0x0;
          plVar13 = (longlong *)0x0;
          bVar5 = false;
          bVar4 = true;
        }
        else {
          puVar10 = (undefined8 *)FName::FName(local_78,"OnlineSubsystem",1);
          uVar11 = *puVar10;
          uVar12 = FUN_14168dc80();
          plVar13 = (longlong *)FModuleManager::GetModule(uVar12,uVar11);
          cVar7 = (**(code **)(*plVar13 + 0x70))(plVar13,local_198);
          if (cVar7 == '\0') goto LAB_140d932ae;
          puVar10 = (undefined8 *)FUN_1404cf890(local_70,local_198);
          bVar5 = true;
          bVar4 = false;
          plVar13 = (longlong *)*puVar10;
        }
        local_e8 = (longlong *)puVar10[1];
        puVar10[1] = 0;
        *puVar10 = 0;
        plVar14 = plStack_148;
        local_178 = plVar13;
        if ((bVar4) && (plStack_148 != (longlong *)0x0)) {
          LOCK();
          plVar1 = plStack_148 + 1;
          lVar15 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar15 == 1) {
            (**(code **)*plStack_148)(plStack_148);
            LOCK();
            piVar2 = (int *)((longlong)plVar14 + 0xc);
            iVar22 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar22 == 1) {
              (**(code **)(*plStack_148 + 8))(plStack_148,1);
            }
          }
        }
        plVar14 = local_68;
        if ((bVar5) && (local_68 != (longlong *)0x0)) {
          LOCK();
          plVar1 = local_68 + 1;
          lVar15 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar15 == 1) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar2 = (int *)((longlong)plVar14 + 0xc);
            iVar22 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar22 == 1) {
              (**(code **)(*plVar14 + 8))(plVar14,1);
            }
          }
        }
        lVar15 = local_198;
        if (plVar13 != (longlong *)0x0) {
          if ((int)param_1[0x16] != *(int *)((longlong)param_1 + 0xdc)) {
            plVar14 = (longlong *)param_1[0x1d];
            if ((longlong *)param_1[0x1d] == (longlong *)0x0) {
              plVar14 = param_1 + 0x1c;
            }
            iVar22 = *(int *)((longlong)plVar14 +
                             ((longlong)((int)((ulonglong)local_198 >> 0x20) + (int)local_198) &
                             (longlong)(int)param_1[0x1e] - 1U) * 4);
            if (iVar22 != -1) {
              lVar3 = param_1[0x15];
              do {
                if (*(longlong *)(lVar3 + (longlong)iVar22 * 0x18) == local_198) {
                  if (iVar22 != -1) goto LAB_140d934eb;
                  break;
                }
                iVar22 = *(int *)(lVar3 + ((longlong)iVar22 * 3 + 2) * 8);
              } while (iVar22 != -1);
            }
          }
          local_190 = (longlong *)0x0;
          local_188 = 0;
          plVar14 = (longlong *)FMemory::Realloc(0,0x30,0);
          local_188 = 3;
          local_190 = plVar14;
          if (plVar14 != (longlong *)0x0) {
            *plVar14 = (longlong)&PTR_GetPoolName_144531518;
            plVar14[1] = (longlong)param_1;
            plVar14[2] = (longlong)FUN_140d8d900;
            plVar14[3] = lVar15;
            lVar15 = FDelegateHandle::GenerateNewID();
            plVar14[4] = lVar15;
            *plVar14 = (longlong)&PTR_GetPoolName_144531560;
          }
          (**(code **)(*plVar13 + 0x1a8))(plVar13,local_f0,&local_190);
          if (local_188 == 0) {
LAB_140d934ae:
            if (local_190 != (longlong *)0x0) {
              FMemory::Free(local_190);
            }
          }
          else if (local_190 != (longlong *)0x0) {
            (**(code **)(*local_190 + 0x28))(local_190,0);
            if (local_190 != (longlong *)0x0) {
              local_190 = (longlong *)FMemory::Realloc(local_190,0,0);
            }
            local_188 = 0;
            goto LAB_140d934ae;
          }
          local_c0 = &local_198;
          local_b8 = local_f0;
          TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
                    (param_1 + 0x15,local_f8,&local_c0,0);
LAB_140d934eb:
          plVar13 = (longlong *)FUN_140d84850(param_1,local_198);
          iVar22 = *(int *)(lVar9 + 0x10);
          if (iVar22 != 0) {
            iVar17 = (int)plVar13[1];
            if (*(int *)((longlong)plVar13 + 0xc) < iVar22 + iVar17) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar13);
              iVar17 = (int)plVar13[1];
            }
            puVar10 = *(undefined8 **)(lVar9 + 8);
            puVar18 = (undefined8 *)((longlong)iVar17 * 0x10 + *plVar13);
            iVar17 = iVar22;
            do {
              *puVar18 = *puVar10;
              lVar15 = puVar10[1];
              puVar18[1] = lVar15;
              if (lVar15 != 0) {
                LOCK();
                *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
                UNLOCK();
              }
              puVar18 = puVar18 + 2;
              puVar10 = puVar10 + 2;
              iVar17 = iVar17 + -1;
            } while (iVar17 != 0);
            *(int *)(plVar13 + 1) = (int)plVar13[1] + iVar22;
          }
          puVar10 = *(undefined8 **)(lVar9 + 8);
          iVar22 = 0;
          puVar18 = puVar10 + (longlong)*(int *)(lVar9 + 0x10) * 2;
          local_1a8 = 0;
          local_1a0 = 0;
          if (puVar10 != puVar18) {
            do {
              local_1a0 = CONCAT44(local_1a0._4_4_,iVar22 + 1);
              if (local_1a0._4_4_ < iVar22 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_1a8,iVar22);
              }
              puVar19 = (undefined8 *)((longlong)iVar22 * 0x10 + local_1a8);
              *puVar19 = *puVar10;
              lVar9 = puVar10[1];
              puVar19[1] = lVar9;
              if (lVar9 != 0) {
                LOCK();
                *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
                UNLOCK();
              }
              iVar22 = (int)local_1a0;
              if ((int)local_1a0 == 0x32) {
                local_e0 = local_180;
                if (plVar21 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
                  UNLOCK();
                }
                local_d8 = plVar21;
                (**(code **)(*local_178 + 0x198))(local_178,&local_e0,&local_1a8);
                plVar13 = local_d8;
                if (local_d8 != (longlong *)0x0) {
                  LOCK();
                  plVar14 = local_d8 + 1;
                  lVar9 = *plVar14;
                  *(int *)plVar14 = (int)*plVar14 + -1;
                  UNLOCK();
                  if ((int)lVar9 == 1) {
                    (**(code **)*local_d8)(local_d8);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar13 + 0xc);
                    iVar22 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar22 == 1) {
                      (**(code **)(*plVar13 + 8))(plVar13,1);
                    }
                  }
                }
                if ((longlong)local_1a0 < 0) {
                  if ((int)local_1a0 != 0) {
                    plVar13 = (longlong *)(local_1a8 + 8);
                    iVar22 = (int)local_1a0;
                    do {
                      plVar14 = (longlong *)*plVar13;
                      if (plVar14 != (longlong *)0x0) {
                        LOCK();
                        plVar1 = plVar14 + 1;
                        lVar9 = *plVar1;
                        *(int *)plVar1 = (int)*plVar1 + -1;
                        UNLOCK();
                        if ((int)lVar9 == 1) {
                          (**(code **)*plVar14)(plVar14);
                          LOCK();
                          piVar2 = (int *)((longlong)plVar14 + 0xc);
                          iVar17 = *piVar2;
                          *piVar2 = *piVar2 + -1;
                          UNLOCK();
                          if (iVar17 == 1) {
                            (**(code **)(*plVar14 + 8))(plVar14,1);
                          }
                        }
                      }
                      plVar13 = plVar13 + 2;
                      iVar22 = iVar22 + -1;
                    } while (iVar22 != 0);
                  }
                  uVar16 = local_1a0 >> 0x20;
                  local_1a0 = local_1a0 & 0xffffffff00000000;
                  iVar22 = 0;
                  if ((int)uVar16 != 0) {
                    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_1a8,0);
                    iVar22 = (int)local_1a0;
                  }
                }
                else {
                  if ((int)local_1a0 != 0) {
                    plVar13 = (longlong *)(local_1a8 + 8);
                    iVar22 = (int)local_1a0;
                    do {
                      plVar14 = (longlong *)*plVar13;
                      if (plVar14 != (longlong *)0x0) {
                        LOCK();
                        plVar1 = plVar14 + 1;
                        lVar9 = *plVar1;
                        *(int *)plVar1 = (int)*plVar1 + -1;
                        UNLOCK();
                        if ((int)lVar9 == 1) {
                          (**(code **)*plVar14)(plVar14);
                          LOCK();
                          piVar2 = (int *)((longlong)plVar14 + 0xc);
                          iVar17 = *piVar2;
                          *piVar2 = *piVar2 + -1;
                          UNLOCK();
                          if (iVar17 == 1) {
                            (**(code **)(*plVar14 + 8))(plVar14,1);
                          }
                        }
                      }
                      plVar13 = plVar13 + 2;
                      iVar22 = iVar22 + -1;
                    } while (iVar22 != 0);
                  }
                  local_1a0 = local_1a0 & 0xffffffff00000000;
                  iVar22 = 0;
                }
              }
              puVar10 = puVar10 + 2;
            } while (puVar10 != puVar18);
            if (0 < iVar22) {
              local_d0 = local_180;
              if (plVar21 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
                UNLOCK();
              }
              local_c8 = plVar21;
              (**(code **)(*local_178 + 0x198))(local_178,&local_d0,&local_1a8);
              plVar13 = local_c8;
              if (local_c8 != (longlong *)0x0) {
                LOCK();
                plVar14 = local_c8 + 1;
                lVar9 = *plVar14;
                *(int *)plVar14 = (int)*plVar14 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)*local_c8)(local_c8);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar13 + 0xc);
                  iVar22 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar22 == 1) {
                    (**(code **)(*plVar13 + 8))(plVar13,1);
                  }
                }
              }
              iVar22 = (int)local_1a0;
            }
          }
          if (iVar22 != 0) {
            plVar13 = (longlong *)(local_1a8 + 8);
            do {
              plVar14 = (longlong *)*plVar13;
              if (plVar14 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar14 + 1;
                lVar9 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)*plVar14)(plVar14);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar14 + 0xc);
                  iVar17 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar17 == 1) {
                    (**(code **)(*plVar14 + 8))(plVar14,1);
                  }
                }
              }
              plVar13 = plVar13 + 2;
              iVar22 = iVar22 + -1;
            } while (iVar22 != 0);
          }
          if (local_1a8 != 0) {
            FMemory::Free();
          }
        }
        plVar13 = local_e8;
        if (local_e8 != (longlong *)0x0) {
          LOCK();
          plVar14 = local_e8 + 1;
          lVar9 = *plVar14;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_e8)(local_e8);
            LOCK();
            piVar2 = (int *)((longlong)plVar13 + 0xc);
            iVar22 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar22 == 1) {
              (**(code **)(*plVar13 + 8))(plVar13,1);
            }
          }
        }
        uStack_120 = CONCAT44(uStack_120._4_4_,(uint)uStack_120 & ~uStack_130._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_130);
        iVar22 = uStack_120._4_4_;
      } while (uStack_120._4_4_ < (int)local_128[6]);
      if (((char)local_100 != '\0') && (local_100._1_1_ != '\0')) {
        TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_108,(int)local_108[1] - *(int *)((longlong)local_108 + 0x34),1);
      }
    }
  }
  uVar16 = TSet<TTuple<FName,TArray<TSharedPtr<FRule,0>,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedPtr<FRule,0>,FDefaultAllocator>,0>,FDefaultSetAllocator>
           ::Empty(param_1 + 0x24,0);
  param_1[0x3a] = 0;
  if (plVar21 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar21 + 1;
    lVar9 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    uVar8 = (int)lVar9 - 1;
    uVar16 = (ulonglong)uVar8;
    if (uVar8 == 0) {
      uVar16 = (**(code **)*plVar21)(plVar21);
      LOCK();
      piVar2 = (int *)((longlong)plVar21 + 0xc);
      iVar22 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar22 == 1) {
        uVar16 = (**(code **)(*plVar21 + 8))(plVar21,1);
      }
    }
  }
  return uVar16 & 0xffffffffffffff00;
}



// FUNCTION 140d938f0 FUN_140d938f0 body=1702 status=ok
// SIG undefined FUN_140d938f0(void)

void FUN_140d938f0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  void *_Src;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  void *pvVar13;
  bool bVar14;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  longlong local_res20;
  uint in_stack_fffffffffffffef8;
  longlong *local_f8;
  int local_f0;
  longlong *local_e8;
  int local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong *local_c8;
  void *local_c0;
  int local_b8;
  undefined4 local_b4;
  void *local_b0;
  ulonglong local_a8;
  undefined8 local_a0;
  longlong *plStack_98;
  longlong local_90 [4];
  longlong *local_70;
  longlong *local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  longlong *local_40;
  
  plVar10 = (longlong *)0x0;
  local_res18 = 0;
  local_res20 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146852c60) && (_Init_thread_header(&DAT_146852c60), DAT_146852c60 == -1))
  {
    FName::FName(&DAT_146852c58,L"OnlineSubsystem",1);
    _Init_thread_footer(&DAT_146852c60);
  }
  uVar11 = DAT_146852c58;
  uVar4 = FUN_14168dc80();
  plVar5 = (longlong *)FModuleManager::GetModule(uVar4,uVar11);
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x50))(plVar5,local_res20);
  if ((plVar5 == (longlong *)0x0) ||
     (cVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5,param_2), cVar2 == '\0')) {
LAB_140d93d92:
    (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,&local_res18);
    lVar9 = *param_2;
    plVar10 = (longlong *)FUN_140d84850(param_1,CONCAT44(uStackX_1c,local_res18));
    puVar8 = (undefined8 *)*plVar10;
    puVar12 = puVar8 + (longlong)(int)plVar10[1] * 2;
    for (; puVar8 != puVar12; puVar8 = puVar8 + 2) {
      cVar2 = (*(code *)**(undefined8 **)*puVar8)((undefined8 *)*puVar8,lVar9);
      if (cVar2 != '\0') {
        return;
      }
    }
    plVar10 = (longlong *)FUN_140d84400(param_1,CONCAT44(uStackX_1c,local_res18));
    puVar8 = (undefined8 *)*plVar10;
    puVar12 = puVar8 + (longlong)(int)plVar10[1] * 2;
    for (; puVar8 != puVar12; puVar8 = puVar8 + 2) {
      cVar2 = (*(code *)**(undefined8 **)*puVar8)((undefined8 *)*puVar8,lVar9);
      if (cVar2 != '\0') {
        return;
      }
    }
    plVar10 = (longlong *)FUN_140d84400(param_1,CONCAT44(uStackX_1c,local_res18));
    iVar3 = (int)plVar10[1];
    *(int *)(plVar10 + 1) = iVar3 + 1;
    if (*(int *)((longlong)plVar10 + 0xc) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar3);
    }
    plVar10 = (longlong *)((longlong)iVar3 * 0x10 + *plVar10);
    *plVar10 = *param_2;
    lVar9 = param_2[1];
    plVar10[1] = lVar9;
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
    }
    if (*(longlong *)(param_1 + 0x1d0) == 0) {
      local_e8 = (longlong *)0x0;
      plVar10 = (longlong *)FMemory::Realloc(0,0x30);
      local_e0 = 3;
      local_e8 = plVar10;
      if (plVar10 != (longlong *)0x0) {
        plVar10[1] = param_1;
        *plVar10 = (longlong)&PTR_GetPoolName_143f3f4f8;
        plVar10[2] = (longlong)FUN_140d92f50;
        lVar9 = FDelegateHandle::GenerateNewID();
        plVar10[4] = lVar9;
      }
      uVar11 = FUN_14164ab60();
      puVar8 = (undefined8 *)
               FUN_14158f860(uVar11,local_50,&local_e8,L"FDisplayDataCache_ProcessPendingReads",0);
      *(undefined8 *)(param_1 + 0x1d0) = *puVar8;
      if (local_e0 != 0) {
        if (local_e8 == (longlong *)0x0) {
          return;
        }
        (**(code **)(*local_e8 + 0x28))(local_e8,0);
        if (local_e8 != (longlong *)0x0) {
          local_e8 = (longlong *)FMemory::Realloc(local_e8,0,0);
        }
        local_e0 = 0;
      }
      if (local_e8 != (longlong *)0x0) {
        FMemory::Free(local_e8);
      }
    }
    return;
  }
  (**(code **)(*plVar5 + 0x50))(plVar5,&local_70);
  if (local_70 == (longlong *)0x0) {
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_68 + 1;
      lVar9 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)local_68 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_68 + 8))(local_68,1);
        }
      }
    }
    goto LAB_140d93d92;
  }
  local_90[2] = 0;
  local_90[3] = 0;
  (**(code **)(*local_70 + 0xa0))(local_70,&local_b0,param_2);
  plVar7 = (longlong *)*param_2;
  plVar6 = (longlong *)FName::FName(local_60,L"SPARK",1);
  plVar7 = (longlong *)(**(code **)(*plVar7 + 8))(plVar7,local_58);
  bVar14 = *plVar7 != *plVar6;
  if (bVar14) {
    puVar8 = &local_a0;
    local_a0 = 0;
    plStack_98 = (longlong *)0x0;
  }
  else {
    puVar8 = (undefined8 *)(**(code **)(*plVar5 + 0x28))(plVar5,local_48,param_2,local_90 + 2);
    plVar10 = (longlong *)*puVar8;
  }
  plVar5 = (longlong *)puVar8[1];
  puVar8[1] = 0;
  *puVar8 = 0;
  plVar7 = plStack_98;
  if ((bVar14) && (plStack_98 != (longlong *)0x0)) {
    LOCK();
    plVar6 = plStack_98 + 1;
    lVar9 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_98)(plStack_98);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_98 + 8))(plStack_98,1);
      }
    }
  }
  if ((!bVar14) && (local_40 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_40 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  _Src = local_b0;
  if (plVar10 == (longlong *)0x0) {
    local_90[0] = 0;
    local_90[1] = 0;
    FUN_140d68fa0(param_1,param_2,&local_b0,local_90,in_stack_fffffffffffffef8 & 0xffffff00);
    if (local_90[0] != 0) {
      FMemory::Free();
    }
    local_res20 = *param_2;
    iVar3 = FUN_1404bb3d0(param_1 + 0x1c0,&local_res20);
    if (0 < iVar3) {
      FUN_140d94190(param_1 + 0x1f8,param_2);
    }
    goto LAB_140d93cc1;
  }
  local_c8 = (longlong *)param_2[1];
  local_d0 = *param_2;
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
    UNLOCK();
  }
  pvVar13 = (void *)0x0;
  local_c0 = (void *)0x0;
  iVar3 = (int)local_a8;
  local_d8 = param_1;
  local_b8 = iVar3;
  if (iVar3 == 0) {
    local_b4 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c0,local_a8 & 0xffffffff,0);
    pvVar13 = local_c0;
    _guard_xfg_dispatch_icall_nop(local_c0,_Src,(longlong)iVar3 * 2);
  }
  plVar7 = local_c8;
  local_f8 = (longlong *)0x0;
  plVar6 = (longlong *)FMemory::Realloc(0,0x40);
  local_f0 = 4;
  local_f8 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)&PTR_GetPoolName_144531488;
    plVar6[1] = local_d8;
    plVar6[2] = local_d0;
    plVar6[3] = (longlong)plVar7;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      plVar7 = local_c8;
      pvVar13 = local_c0;
    }
    plVar6[4] = (longlong)pvVar13;
    *(int *)(plVar6 + 5) = local_b8;
    *(undefined4 *)((longlong)plVar6 + 0x2c) = local_b4;
    local_c0 = (void *)0x0;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar6[7] = lVar9;
    *plVar6 = (longlong)&PTR_GetPoolName_1445314d0;
    pvVar13 = (void *)0x0;
  }
  (**(code **)(*plVar10 + 8))(plVar10,&local_b0,&local_f8);
  if (local_f0 == 0) {
LAB_140d93c0c:
    if (local_f8 != (longlong *)0x0) {
      FMemory::Free(local_f8);
    }
  }
  else if (local_f8 != (longlong *)0x0) {
    (**(code **)(*local_f8 + 0x28))(local_f8,0);
    if (local_f8 != (longlong *)0x0) {
      local_f8 = (longlong *)FMemory::Realloc(local_f8,0,0);
    }
    local_f0 = 0;
    goto LAB_140d93c0c;
  }
  if (pvVar13 != (void *)0x0) {
    FMemory::Free(pvVar13);
  }
  plVar10 = local_c8;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar7 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_c8)(local_c8);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_c8 + 8))(local_c8,1);
      }
    }
  }
LAB_140d93cc1:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar5 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if (local_b0 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_90[2] != 0) {
    FMemory::Free();
  }
  if (local_68 == (longlong *)0x0) {
    return;
  }
  LOCK();
  plVar10 = local_68 + 1;
  lVar9 = *plVar10;
  *(int *)plVar10 = (int)*plVar10 + -1;
  UNLOCK();
  if ((int)lVar9 != 1) {
    return;
  }
  (**(code **)*local_68)(local_68);
  LOCK();
  piVar1 = (int *)((longlong)local_68 + 0xc);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 != 1) {
    return;
  }
  (**(code **)(*local_68 + 8))(local_68,1);
  return;
}



// FUNCTION 140d93fa0 FUN_140d93fa0 body=490 status=ok
// SIG undefined FUN_140d93fa0(void)

void FUN_140d93fa0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int local_res8 [4];
  int local_res18 [2];
  int local_res20 [2];
  undefined8 *local_68;
  undefined8 *local_60;
  longlong *local_58;
  longlong local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined1 local_38;
  undefined8 local_30;
  
  lVar8 = *(longlong *)(param_1 + 0x30);
  FUN_140549690(lVar8 + 0x18,local_res8,param_2);
  if ((local_res8[0] == -1) ||
     (lVar6 = (longlong)local_res8[0] * 0x68 + *(longlong *)(lVar8 + 0x18), lVar6 == 0)) {
    local_68 = param_2;
    FUN_140d5d8e0(lVar8 + 0x18,local_res18,&local_68,0);
    lVar6 = (longlong)local_res18[0] * 0x68 + *(longlong *)(lVar8 + 0x18);
  }
  lVar8 = *(longlong *)(param_1 + 0x28);
  plVar1 = (longlong *)(lVar6 + 0x10);
  if (*(int *)(lVar6 + 0x18) != *(int *)(lVar6 + 0x44)) {
    lVar7 = *(longlong *)(lVar6 + 0x50);
    if (*(longlong *)(lVar6 + 0x50) == 0) {
      lVar7 = lVar6 + 0x48;
    }
    iVar5 = *(int *)(lVar7 + ((longlong)((int)((ulonglong)lVar8 >> 0x20) + (int)lVar8) &
                             (longlong)*(int *)(lVar6 + 0x58) - 1U) * 4);
    if (iVar5 != -1) {
      do {
        if (*(longlong *)(*plVar1 + (longlong)iVar5 * 0x50) == lVar8) {
          if (iVar5 != -1) {
            return;
          }
          break;
        }
        iVar5 = *(int *)(*plVar1 + 0x48 + (longlong)iVar5 * 0x50);
      } while (iVar5 != -1);
    }
  }
  plVar4 = (longlong *)param_2[1];
  local_48 = *param_2;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_30 = *(undefined8 *)(param_1 + 0x28);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_38 = 1;
  local_50 = param_1;
  local_40 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  local_58 = &local_50;
  local_60 = (undefined8 *)(param_1 + 0x28);
  FUN_140d5e500(plVar1,local_res20,&local_60,0);
  plVar4 = local_40;
  lVar8 = *plVar1 + (longlong)local_res20[0] * 0x50;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  FUN_140d5bb20(lVar8 + 0x38,lVar8 + 8,FUN_140d74f80);
  FUN_140d78a40(lVar8 + 8,0);
  return;
}



// FUNCTION 140d94190 FUN_140d94190 body=522 status=ok
// SIG undefined FUN_140d94190(void)

void FUN_140d94190(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  void *_Src;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int local_res18 [2];
  void *local_48;
  undefined8 local_40;
  longlong local_38;
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  iVar3 = FUN_140d84700();
  if (iVar3 == 0) {
    FUN_140d70650(param_1,&local_38,param_2);
    if (local_38 != 0) {
      plVar4 = (longlong *)FUN_140d84620(param_1,local_28,param_2);
      plVar2 = (longlong *)plVar4[1];
      lVar5 = *plVar4;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
      }
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_20 + 1;
        lVar6 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar1 = (int *)((longlong)local_20 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
          }
        }
      }
      if (lVar5 != 0) {
        *(undefined1 *)(lVar5 + 0x31) = 0;
      }
      lVar5 = *(longlong *)(param_1 + 0x28);
      local_48 = (void *)0x0;
      local_40 = 0;
      FUN_140d76bb0(lVar5 + 8,local_res18,param_2);
      lVar6 = 0;
      if (local_res18[0] != -1) {
        lVar6 = (longlong)local_res18[0] * 0x80 + *(longlong *)(lVar5 + 8);
      }
      lVar5 = lVar6 + 0x10;
      if (lVar6 == 0) {
        lVar5 = 0;
      }
      if (lVar5 == 0) {
        *(undefined4 *)(local_38 + 0x10) = 1;
        FUN_140d938f0(*(undefined8 *)(param_1 + 0x28),param_2);
      }
      else {
        if (&local_48 != (void **)(lVar5 + 0x50)) {
          iVar3 = *(int *)(lVar5 + 0x58);
          _Src = *(void **)(lVar5 + 0x50);
          local_40 = CONCAT44(local_40._4_4_,iVar3);
          if ((iVar3 != 0) || (local_40._4_4_ != 0)) {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,iVar3);
            _guard_xfg_dispatch_icall_nop(local_48,_Src,(longlong)iVar3 * 2);
          }
        }
        FUN_140d6fbb0(param_1,param_2,&local_48);
      }
      if (local_48 != (void *)0x0) {
        FMemory::Free();
      }
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar2 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_30 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
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
  }
  return;
}



// FUNCTION 140d943a0 FUN_140d943a0 body=1747 status=ok
// SIG undefined FUN_140d943a0(void)

void FUN_140d943a0(longlong param_1,undefined8 param_2,longlong **param_3)

{
  int *piVar1;
  longlong **pplVar2;
  bool bVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  longlong **local_res18;
  undefined8 *local_res20;
  longlong *local_148;
  undefined8 local_140;
  undefined2 *local_138;
  int local_130;
  longlong *local_128;
  int local_120;
  longlong *local_118;
  int local_110;
  longlong *local_108;
  int local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined2 **local_e8;
  undefined8 *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  
  bVar3 = true;
  local_res10 = param_2;
  local_res18 = param_3;
  plVar7 = (longlong *)FName::FName(local_98,L"SPARK",1);
  if (((*(longlong *)(param_1 + 0x28) != *plVar7) &&
      (iVar5 = FUN_140d844e0(param_1,param_2), -1 < iVar5)) && (iVar5 < *(int *)(param_1 + 0x40))) {
    lVar17 = (longlong)iVar5;
    local_148 = (longlong *)0x0;
    local_140 = 0;
    plVar7 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x38) + lVar17 * 0x10) + 0x10);
    puVar18 = (undefined8 *)*plVar7;
    local_res20 = puVar18 + (longlong)(int)plVar7[1] * 2;
    param_3 = local_res18;
    if (puVar18 != local_res20) {
      do {
        puVar8 = (undefined8 *)
                 (**(code **)(*(longlong *)*puVar18 + 8))((longlong *)*puVar18,local_90);
        (**(code **)(*(longlong *)*puVar8 + 0x28))((longlong *)*puVar8,&local_138);
        plVar7 = local_88;
        if (local_88 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_88 + 1;
          lVar10 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_88)(local_88);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
        lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x38) + lVar17 * 0x10);
        if (*(int *)(lVar10 + 0x38) != *(int *)(lVar10 + 100)) {
          puVar14 = &DAT_143f3eda8;
          if (local_130 != 0) {
            puVar14 = local_138;
          }
          iVar5 = FUN_140438070(puVar14);
          lVar9 = *(longlong *)(lVar10 + 0x70);
          if (*(longlong *)(lVar10 + 0x70) == 0) {
            lVar9 = lVar10 + 0x68;
          }
          iVar5 = *(int *)(lVar9 + ((longlong)*(int *)(lVar10 + 0x78) - 1U & (longlong)iVar5) * 4);
          if (iVar5 != -1) {
            lVar9 = *(longlong *)(lVar10 + 0x30);
            do {
              lVar16 = (longlong)iVar5 * 0x38;
              puVar14 = &DAT_143f3eda8;
              if (local_130 != 0) {
                puVar14 = local_138;
              }
              if (*(int *)(lVar9 + 8 + lVar16) == 0) {
                puVar15 = &DAT_143f3eda8;
              }
              else {
                puVar15 = *(undefined2 **)(lVar9 + lVar16);
              }
              iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar15,puVar14);
              if (iVar6 == 0) {
                if (iVar5 != -1) {
                  lVar16 = *(longlong *)(lVar10 + 0x30) + lVar16;
                  goto LAB_140d9456b;
                }
                break;
              }
              lVar9 = *(longlong *)(lVar10 + 0x30);
              iVar5 = *(int *)(lVar9 + 0x30 + lVar16);
            } while (iVar5 != -1);
          }
        }
        lVar16 = 0;
LAB_140d9456b:
        lVar10 = lVar16 + 0x10;
        if (lVar16 == 0) {
          lVar10 = 0;
        }
        if (lVar10 == 0) {
          uVar11 = (**(code **)(*(longlong *)*puVar18 + 8))((longlong *)*puVar18,local_70);
          plVar12 = (longlong *)FUN_140d84960(*(undefined8 *)(param_1 + 0x30),local_80,uVar11);
          plVar7 = local_78;
          lVar10 = *plVar12;
          if (local_78 != (longlong *)0x0) {
            LOCK();
            plVar12 = local_78 + 1;
            lVar9 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_78)(local_78);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7,1);
              }
            }
          }
          plVar7 = local_68;
          if (local_68 != (longlong *)0x0) {
            LOCK();
            plVar12 = local_68 + 1;
            lVar9 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_68)(local_68);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7,1);
              }
            }
          }
          if (lVar10 == 0) {
            puVar8 = (undefined8 *)
                     (**(code **)(*(longlong *)*puVar18 + 8))((longlong *)*puVar18,local_60);
            local_b8 = *puVar8;
            local_b0 = (longlong *)puVar8[1];
            if (local_b0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
              UNLOCK();
            }
            local_e8 = &local_138;
            local_e0 = &local_b8;
            local_a8 = 0;
            plStack_a0 = (longlong *)0x0;
            FUN_140d5f290(*(longlong *)(*(longlong *)(param_1 + 0x38) + lVar17 * 0x10) + 0x30,
                          local_res8,&local_e8,0);
            plVar7 = plStack_a0;
            if (plStack_a0 != (longlong *)0x0) {
              LOCK();
              plVar12 = plStack_a0 + 1;
              lVar10 = *plVar12;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*plStack_a0)(plStack_a0);
                LOCK();
                piVar1 = (int *)((longlong)plVar7 + 0xc);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*plVar7 + 8))(plVar7,1);
                }
              }
            }
            plVar7 = local_b0;
            if (local_b0 != (longlong *)0x0) {
              LOCK();
              plVar12 = local_b0 + 1;
              lVar10 = *plVar12;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*local_b0)(local_b0);
                LOCK();
                piVar1 = (int *)((longlong)plVar7 + 0xc);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*plVar7 + 8))(plVar7,1);
                }
              }
            }
            plVar7 = local_58;
            if (local_58 != (longlong *)0x0) {
              LOCK();
              plVar12 = local_58 + 1;
              lVar10 = *plVar12;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*local_58)(local_58);
                LOCK();
                piVar1 = (int *)((longlong)plVar7 + 0xc);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*plVar7 + 8))(plVar7,1);
                }
              }
            }
            uVar4 = local_140;
            lVar10 = (longlong)(int)local_140;
            iVar5 = (int)local_140 + 1;
            local_140 = CONCAT44(local_140._4_4_,iVar5);
            if (local_140._4_4_ < iVar5) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_148,uVar4 & 0xffffffff);
            }
            puVar14 = local_138;
            plVar7 = local_148 + lVar10 * 2;
            *plVar7 = 0;
            lVar10 = (longlong)local_130;
            *(int *)(plVar7 + 1) = local_130;
            if (local_130 == 0) {
              *(undefined4 *)((longlong)plVar7 + 0xc) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar7,local_130,0);
              _guard_xfg_dispatch_icall_nop((void *)*plVar7,puVar14,lVar10 * 2);
            }
          }
        }
        if (local_138 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        puVar18 = puVar18 + 2;
      } while (puVar18 != local_res20);
      if ((int)local_140 < 1) {
        bVar3 = true;
        param_3 = local_res18;
        param_2 = local_res10;
      }
      else {
        plVar12 = (longlong *)FUN_140d606d0(local_res10,&local_148);
        plVar7 = plVar12 + 2;
        local_d8 = plVar7;
        local_d0 = plVar12;
        TSharedRef<FStringTable,1>::Init<FStringTable>(&local_d8,plVar7);
        iVar5 = *(int *)(param_1 + 0x50);
        *(int *)(param_1 + 0x50) = iVar5 + 1;
        if (*(int *)(param_1 + 0x54) < iVar5 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x48,iVar5);
        }
        param_3 = local_res18;
        plVar13 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(param_1 + 0x48));
        *plVar13 = (longlong)plVar7;
        plVar13[1] = (longlong)plVar12;
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_128 = (longlong *)0x0;
        local_120 = 0;
        if (((local_res18 != &local_128) && (*(int *)(local_res18 + 1) != 0)) &&
           (plVar13 = *local_res18, plVar13 != (longlong *)0x0)) {
          (**(code **)(*plVar13 + 0x30))(plVar13,&local_128);
        }
        pplVar2 = (longlong **)(plVar12 + 0xe);
        local_108 = (longlong *)0x0;
        local_100 = 0;
        if ((local_120 != 0) && (local_128 != (longlong *)0x0)) {
          (**(code **)(*local_128 + 0x30))(local_128,&local_108);
        }
        local_118 = (longlong *)0x0;
        local_110 = 0;
        if ((local_100 != 0) && (local_108 != (longlong *)0x0)) {
          (**(code **)(*local_108 + 0x30))(local_108,&local_118);
        }
        plVar13 = (longlong *)FMemory::Realloc(0,0x30);
        local_c8[0] = plVar13;
        if (plVar13 != (longlong *)0x0) {
          local_f8 = 0;
          local_f0 = 0;
          if ((local_110 != 0) && (local_118 != (longlong *)0x0)) {
            (**(code **)(*local_118 + 0x30))(local_118,&local_f8);
          }
          FUN_140d62970(plVar13,param_1,FUN_140d8f600,&local_f8);
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_118);
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_108);
        if (local_c8 == pplVar2) {
LAB_140d94942:
          if (plVar13 != (longlong *)0x0) {
            (**(code **)(*plVar13 + 0x28))(plVar13,0);
            local_c8[0] = (longlong *)FMemory::Realloc(plVar13,0,0);
            if (local_c8[0] != (longlong *)0x0) {
              FMemory::Free(local_c8[0]);
            }
          }
        }
        else {
          if (plVar13 != (longlong *)0x0) {
            (**(code **)(*plVar13 + 0x30))(plVar13,pplVar2);
            goto LAB_140d94942;
          }
          if (((int)plVar12[0xf] != 0) && (plVar13 = *pplVar2, plVar13 != (longlong *)0x0)) {
            (**(code **)(*plVar13 + 0x28))(plVar13,0);
            if (*pplVar2 != (longlong *)0x0) {
              plVar13 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
              *pplVar2 = plVar13;
            }
            *(undefined4 *)(plVar12 + 0xf) = 0;
          }
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_128);
        FUN_140da0380(plVar7);
        bVar3 = false;
        param_2 = local_res10;
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar12 + 1;
          lVar17 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar17 == 1) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            param_2 = local_res10;
            if (iVar5 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
              param_2 = local_res10;
            }
          }
        }
      }
    }
    plVar7 = local_148;
    for (iVar5 = (int)local_140; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_148 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (!bVar3) goto LAB_140d94a5c;
  }
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_3,param_2);
LAB_140d94a5c:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
  return;
}



// FUNCTION 140d94a80 FUN_140d94a80 body=321 status=ok
// SIG undefined FUN_140d94a80(void)

void FUN_140d94a80(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  int *piVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined1 local_res8 [8];
  undefined1 local_38 [8];
  longlong *local_30;
  
  piVar5 = (int *)FUN_140d76bb0(param_1 + 8,local_res8,param_2);
  if (*piVar5 != -1) {
    plVar6 = (longlong *)FUN_140d84620(param_1 + 0x1f8,local_38,param_2);
    lVar1 = *plVar6;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_30 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar5 = (int *)((longlong)local_30 + 0xc);
        iVar8 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    if (lVar1 != 0) {
      uVar2 = *param_2;
      plVar6 = (longlong *)(param_1 + 0x1c0);
      puVar7 = (undefined8 *)*plVar6;
      iVar8 = *(int *)(param_1 + 0x1c8);
      puVar9 = puVar7 + (longlong)iVar8 * 2;
      if (puVar7 != puVar9) {
        do {
          cVar4 = (*(code *)**(undefined8 **)*puVar7)((undefined8 *)*puVar7,uVar2);
          if (cVar4 != '\0') goto LAB_140d94b9e;
          puVar7 = puVar7 + 2;
        } while (puVar7 != puVar9);
        iVar8 = *(int *)(param_1 + 0x1c8);
      }
      *(int *)(param_1 + 0x1c8) = iVar8 + 1;
      if (*(int *)(param_1 + 0x1cc) < iVar8 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar8);
      }
      puVar7 = (undefined8 *)((longlong)iVar8 * 0x10 + *plVar6);
      *puVar7 = *param_2;
      lVar1 = param_2[1];
      puVar7[1] = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
    }
LAB_140d94b9e:
    FUN_140d938f0(param_1,param_2);
  }
  return;
}



// FUNCTION 140d94bd0 FUN_140d94bd0 body=403 status=ok
// SIG undefined FUN_140d94bd0(void)

ulonglong FUN_140d94bd0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  int local_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  longlong *local_30;
  int iStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined1 auStack_18 [16];
  
  DAT_14686edd0 = DAT_14686edd0 + 1;
  if (DAT_14686edd0 < 2) {
    return CONCAT71((uint7)(uint3)((uint)DAT_14686edd0 >> 8),1);
  }
  *(undefined8 *)(param_1 + 0x118) = 0;
  uVar1 = *(uint *)(param_1 + 0x30);
  puStack_20 = (uint *)(param_1 + 0x18);
  DAT_14686edd0 = 0;
  local_58 = 0;
  uStack_54 = 1;
  local_48._4_4_ = 0;
  uStack_40 = 0;
  if (uVar1 != 0) {
    puVar6 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar6 = puStack_20;
    }
    uVar2 = *puVar6;
    uStack_40 = 0;
    local_58 = 0;
    while (uVar2 == 0) {
      lVar4 = (longlong)local_58;
      uStack_40 = uStack_40 + 0x20;
      iVar5 = local_58 + 1;
      bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar5;
      if (bVar3) goto LAB_140d94cbd;
      uVar2 = puVar6[lVar4 + 1];
    }
    uStack_54 = -uVar2 & uVar2;
    iVar5 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    local_48._4_4_ = (uStack_40 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)local_48._4_4_) {
LAB_140d94cbd:
      local_48._4_4_ = uVar1;
    }
  }
  auStack_18._4_4_ = local_48._4_4_;
  auStack_18._0_4_ = 0xffffffff;
  auStack_18._8_4_ = uStack_40;
  auStack_18._12_4_ = uStack_3c;
  iStack_28 = local_58;
  uStack_24 = uStack_54;
  iStack_50 = local_58;
  uStack_4c = uStack_54;
  local_38 = auStack_18._8_8_;
  uStack_40 = 0xffffffff;
  uStack_3c = local_48._4_4_;
  bVar3 = (int)local_48._4_4_ < (int)uVar1;
  local_48 = (uint *)(ulonglong)local_48._4_4_;
  local_30 = (longlong *)(param_1 + 8);
  puVar6 = puStack_20;
  if (bVar3) {
    do {
      local_48 = puVar6;
      FUN_140d94a80(param_1,(longlong)(int)uStack_3c * 0x80 + *(longlong *)(param_1 + 8));
      uStack_40 = uStack_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
      puVar6 = local_48;
    } while ((int)uStack_3c < (int)local_48[6]);
  }
  return (ulonglong)local_48 & 0xffffffffffffff00;
}



// FUNCTION 140d94d70 FUN_140d94d70 body=628 status=ok
// SIG undefined FUN_140d94d70(void)

void FUN_140d94d70(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte *pbVar10;
  uint *puVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  ulonglong uVar16;
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
    lVar8 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar8;
  }
  uVar7 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar7 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar7) {
      uVar15 = 0;
      uVar16 = (ulonglong)uVar7;
      do {
        plVar14 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar14 = plVar1;
        }
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar15;
        uVar15 = uVar15 + 1;
        *(undefined4 *)((longlong)plVar14 + uVar9 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = puStack_38;
      }
      uVar7 = *puVar11;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar7 == 0) {
        lVar8 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar13 = local_68 + 1;
        bVar5 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar13;
        if (bVar5) goto LAB_140d94e9f;
        uVar7 = puVar11[lVar8 + 1];
      }
      uStack_64 = -uVar7 & uVar7;
      iVar13 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar13 == 0; iVar13 = iVar13 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar13 = 0x20;
      }
      else {
        iVar13 = 0x1f - iVar13;
      }
      iStack_54 = (iStack_50 - iVar13) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_140d94e9f:
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
        lVar8 = (longlong)iStack_2c * 0x90 + *param_1;
        if (*(longlong **)(lVar8 + 8) == (longlong *)0x0) {
LAB_140d94f4b:
          uVar7 = 0xffffffff;
        }
        else {
          cVar6 = (**(code **)(**(longlong **)(lVar8 + 8) + 0x20))();
          if (cVar6 == '\0') goto LAB_140d94f4b;
          plVar14 = *(longlong **)(lVar8 + 8);
          uVar7 = (**(code **)(*plVar14 + 0x18))(plVar14);
          if (uVar7 < 4) {
            pbVar10 = (byte *)(**(code **)(*plVar14 + 0x10))(plVar14);
            uVar7 = (uint)*pbVar10;
          }
          else {
            pcVar4 = *(code **)(*plVar14 + 0x10);
            if (uVar7 < 8) {
              puVar11 = (uint *)(*pcVar4)();
              uVar7 = *puVar11;
            }
            else {
              puVar12 = (undefined8 *)(*pcVar4)(plVar14);
              uVar7 = (int)*puVar12 + (int)((ulonglong)*puVar12 >> 0x20) * 0x17;
            }
          }
        }
        uVar7 = (int)*plVar2 - 1U & uVar7;
        *(uint *)(lVar8 + 0x8c) = uVar7;
        plVar14 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar14 = plVar1;
        }
        *(undefined4 *)(lVar8 + 0x88) =
             *(undefined4 *)
              ((longlong)plVar14 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar7) * 4);
        plVar14 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar14 = plVar1;
        }
        *(int *)((longlong)plVar14 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar7) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 140d94ff0 FUN_140d94ff0 body=622 status=ok
// SIG undefined FUN_140d94ff0(void)

void FUN_140d94ff0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte *pbVar10;
  uint *puVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  ulonglong uVar16;
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
    lVar8 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar8;
  }
  uVar7 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar7 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar7) {
      uVar15 = 0;
      uVar16 = (ulonglong)uVar7;
      do {
        plVar14 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar14 = plVar1;
        }
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar15;
        uVar15 = uVar15 + 1;
        *(undefined4 *)((longlong)plVar14 + uVar9 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = puStack_38;
      }
      uVar7 = *puVar11;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar7 == 0) {
        lVar8 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar13 = local_68 + 1;
        bVar5 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar13;
        if (bVar5) goto LAB_140d9511f;
        uVar7 = puVar11[lVar8 + 1];
      }
      uStack_64 = -uVar7 & uVar7;
      iVar13 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar13 == 0; iVar13 = iVar13 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar13 = 0x20;
      }
      else {
        iVar13 = 0x1f - iVar13;
      }
      iStack_54 = (iStack_50 - iVar13) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_140d9511f:
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
        lVar8 = (longlong)iStack_2c * 0x50 + *param_1;
        if (*(longlong **)(lVar8 + 8) == (longlong *)0x0) {
LAB_140d951cb:
          uVar7 = 0xffffffff;
        }
        else {
          cVar6 = (**(code **)(**(longlong **)(lVar8 + 8) + 0x20))();
          if (cVar6 == '\0') goto LAB_140d951cb;
          plVar14 = *(longlong **)(lVar8 + 8);
          uVar7 = (**(code **)(*plVar14 + 0x18))(plVar14);
          if (uVar7 < 4) {
            pbVar10 = (byte *)(**(code **)(*plVar14 + 0x10))(plVar14);
            uVar7 = (uint)*pbVar10;
          }
          else {
            pcVar4 = *(code **)(*plVar14 + 0x10);
            if (uVar7 < 8) {
              puVar11 = (uint *)(*pcVar4)();
              uVar7 = *puVar11;
            }
            else {
              puVar12 = (undefined8 *)(*pcVar4)(plVar14);
              uVar7 = (int)*puVar12 + (int)((ulonglong)*puVar12 >> 0x20) * 0x17;
            }
          }
        }
        uVar7 = (int)*plVar2 - 1U & uVar7;
        *(uint *)(lVar8 + 0x4c) = uVar7;
        plVar14 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar14 = plVar1;
        }
        *(undefined4 *)(lVar8 + 0x48) =
             *(undefined4 *)
              ((longlong)plVar14 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar7) * 4);
        plVar14 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar14 = plVar1;
        }
        *(int *)((longlong)plVar14 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar7) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 140d95260 FUN_140d95260 body=664 status=ok
// SIG undefined FUN_140d95260(void)

void FUN_140d95260(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  byte *pbVar11;
  uint *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
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
    lVar9 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar9;
  }
  uVar8 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar8 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar8) {
      uVar16 = 0;
      uVar18 = (ulonglong)uVar8;
      do {
        plVar14 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar14 = plVar1;
        }
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar16;
        uVar16 = uVar16 + 1;
        *(undefined4 *)((longlong)plVar14 + uVar10 * 4) = 0xffffffff;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    iVar4 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar4 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar8 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar8 == 0) {
        lVar9 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar15 = local_68 + 1;
        bVar7 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar15;
        if (bVar7) goto LAB_140d95392;
        uVar8 = puVar12[lVar9 + 1];
      }
      uStack_64 = -uVar8 & uVar8;
      iVar15 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar15 == 0; iVar15 = iVar15 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar15 = 0x20;
      }
      else {
        iVar15 = 0x1f - iVar15;
      }
      iStack_54 = (iStack_50 - iVar15) + 0x1f;
      if (iVar4 < iStack_54) {
LAB_140d95392:
        iStack_54 = iVar4;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar4) {
      do {
        puVar17 = (undefined8 *)((longlong)iStack_2c * 0x80 + *param_1);
        plVar14 = (longlong *)puVar17[1];
        plVar5 = (longlong *)*puVar17;
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
        }
        uVar8 = (**(code **)(*plVar5 + 0x18))(plVar5);
        if (uVar8 < 4) {
          pbVar11 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5);
          uVar8 = (uint)*pbVar11;
        }
        else {
          pcVar6 = *(code **)(*plVar5 + 0x10);
          if (uVar8 < 8) {
            puVar12 = (uint *)(*pcVar6)();
            uVar8 = *puVar12;
          }
          else {
            puVar13 = (undefined8 *)(*pcVar6)(plVar5);
            uVar8 = (int)*puVar13 + (int)((ulonglong)*puVar13 >> 0x20) * 0x17;
          }
        }
        *(uint *)((longlong)puVar17 + 0x7c) = (int)*plVar2 - 1U & uVar8;
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar14 + 1;
          lVar9 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar3 = (int *)((longlong)plVar14 + 0xc);
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar14 + 8))(plVar14,1);
            }
          }
        }
        plVar14 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar14 = plVar1;
        }
        *(undefined4 *)(puVar17 + 0xf) =
             *(undefined4 *)
              ((longlong)plVar14 +
              ((longlong)(int)*plVar2 - 1U & (longlong)*(int *)((longlong)puVar17 + 0x7c)) * 4);
        plVar14 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar14 = plVar1;
        }
        *(int *)((longlong)plVar14 +
                ((longlong)(int)*plVar2 - 1U & (longlong)*(int *)((longlong)puVar17 + 0x7c)) * 4) =
             iStack_2c;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 140d95500 FUN_140d95500 body=174 status=ok
// SIG undefined FUN_140d95500(void)

void FUN_140d95500(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  
  if (*(int *)(param_1 + 0x18) == 2) {
    cVar3 = FUN_140d69880(param_1,param_2,
                          (longlong)*(int *)(param_1 + 0x54) * 0xc0 + *(longlong *)(param_1 + 0x30))
    ;
    if (cVar3 != '\0') {
      iVar2 = *(int *)(param_1 + 0x48);
      *(int *)(param_1 + 0x48) = iVar2 + 1;
      if (*(int *)(param_1 + 0x4c) < iVar2 + 1) {
        FUN_1404852a0(param_1 + 0x40,iVar2);
      }
      FUN_140b9a900((longlong)iVar2 * 0xc0 + *(longlong *)(param_1 + 0x40),param_2);
      piVar1 = (int *)(param_1 + 0x54);
      *piVar1 = *piVar1 + 1;
      if ((-1 < *piVar1) && (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0x38))) {
        TBaseDelegate<void,enum_EPartyReservationResult::Type>::ExecuteIfBound(param_1 + 8,2);
        return;
      }
      FUN_140d75a80(param_1);
    }
  }
  return;
}



// FUNCTION 140d955b0 FUN_140d955b0 body=443 status=ok
// SIG undefined FUN_140d955b0(void)

undefined8 FUN_140d955b0(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  if ((*(longlong **)(param_2 + 8) == (longlong *)0x0) ||
     (cVar4 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar4 == '\0')) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = GetTypeHash(*(undefined8 *)(param_2 + 8));
  }
  lVar7 = (longlong)(int)((int)param_1[9] - 1U & uVar5);
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  piVar8 = (int *)((longlong)plVar6 + lVar7 * 4);
  iVar1 = *(int *)((longlong)plVar6 + lVar7 * 4);
  while( true ) {
    if (iVar1 == -1) {
      return 0;
    }
    lVar7 = (longlong)iVar1 * 0x90 + *param_1;
    cVar4 = FUniqueNetIdWrapper::operator==(lVar7,param_2);
    if (cVar4 != '\0') break;
    piVar8 = (int *)(lVar7 + 0x88);
    iVar1 = *piVar8;
  }
  iVar1 = *piVar8;
  lVar7 = (longlong)iVar1;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar3 = *param_1;
    lVar9 = (longlong)(int)(*(uint *)(lVar3 + 0x8c + lVar7 * 0x90) & (int)param_1[9] - 1U);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    piVar8 = (int *)((longlong)plVar6 + lVar9 * 4);
    iVar2 = *(int *)((longlong)plVar6 + lVar9 * 4);
    while (iVar2 != -1) {
      if (iVar2 == iVar1) {
        *piVar8 = *(int *)(lVar3 + 0x88 + lVar7 * 0x90);
        break;
      }
      piVar8 = (int *)((longlong)iVar2 * 0x90 + 0x88 + lVar3);
      iVar2 = *piVar8;
    }
  }
  lVar7 = lVar7 * 0x90 + *param_1;
  *(undefined4 *)(lVar7 + 0x80) = 0;
  if (*(longlong *)(lVar7 + 0x78) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (lVar7 + 0x38);
  if (*(longlong *)(lVar7 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_1404bf980(lVar7);
  TSparseArray<TSetElement<TTuple<FSlateFontKey,TSharedRef<FCharacterList,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar1,1);
  return 1;
}



// FUNCTION 140d95770 FUN_140d95770 body=401 status=ok
// SIG undefined FUN_140d95770(void)

undefined8 FUN_140d95770(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  if ((*(longlong **)(param_2 + 8) == (longlong *)0x0) ||
     (cVar4 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar4 == '\0')) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = GetTypeHash(*(undefined8 *)(param_2 + 8));
  }
  lVar7 = (longlong)(int)((int)param_1[9] - 1U & uVar5);
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  piVar8 = (int *)((longlong)plVar6 + lVar7 * 4);
  iVar1 = *(int *)((longlong)plVar6 + lVar7 * 4);
  while( true ) {
    if (iVar1 == -1) {
      return 0;
    }
    lVar7 = (longlong)iVar1 * 0x50 + *param_1;
    cVar4 = FUniqueNetIdWrapper::operator==(lVar7,param_2);
    if (cVar4 != '\0') break;
    iVar1 = *(int *)(lVar7 + 0x48);
    piVar8 = (int *)(lVar7 + 0x48);
  }
  iVar1 = *piVar8;
  lVar7 = (longlong)iVar1;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar3 = *param_1;
    lVar9 = (longlong)(int)(*(uint *)(lVar3 + 0x4c + lVar7 * 0x50) & (int)param_1[9] - 1U);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    piVar8 = (int *)((longlong)plVar6 + lVar9 * 4);
    iVar2 = *(int *)((longlong)plVar6 + lVar9 * 4);
    while (iVar2 != -1) {
      if (iVar2 == iVar1) {
        *piVar8 = *(int *)(lVar3 + 0x48 + lVar7 * 0x50);
        break;
      }
      piVar8 = (int *)((longlong)iVar2 * 0x50 + 0x48 + lVar3);
      iVar2 = *piVar8;
    }
  }
  lVar7 = lVar7 * 0x50 + *param_1;
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(lVar7 + 0x38);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(lVar7 + 0x28);
  FUN_1404bf980(lVar7);
  TSparseArray<TSetElement<FCachedLandscapeFoliage::FGrassComp>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar1,1);
  return 1;
}



// FUNCTION 140d95910 FUN_140d95910 body=378 status=ok
// SIG undefined FUN_140d95910(void)

undefined8 FUN_140d95910(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  if ((*(longlong **)(param_2 + 8) == (longlong *)0x0) ||
     (cVar3 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar3 == '\0')) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = GetTypeHash(*(undefined8 *)(param_2 + 8));
  }
  lVar6 = (longlong)(int)((int)param_1[9] - 1U & uVar4);
  plVar5 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar5 = param_1 + 7;
  }
  piVar7 = (int *)((longlong)plVar5 + lVar6 * 4);
  iVar1 = *(int *)((longlong)plVar5 + lVar6 * 4);
  while( true ) {
    if (iVar1 == -1) {
      return 0;
    }
    lVar6 = (longlong)iVar1 * 0x40 + *param_1;
    cVar3 = FUniqueNetIdWrapper::operator==(lVar6,param_2);
    if (cVar3 != '\0') break;
    iVar1 = *(int *)(lVar6 + 0x38);
    piVar7 = (int *)(lVar6 + 0x38);
  }
  iVar1 = *piVar7;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar6 = *param_1;
    lVar9 = (longlong)iVar1 * 0x40;
    lVar8 = (longlong)(int)(*(uint *)(lVar9 + 0x3c + lVar6) & (int)param_1[9] - 1U);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    piVar7 = (int *)((longlong)plVar5 + lVar8 * 4);
    iVar2 = *(int *)((longlong)plVar5 + lVar8 * 4);
    while (iVar2 != -1) {
      if (iVar2 == iVar1) {
        *piVar7 = *(int *)(lVar9 + 0x38 + lVar6);
        break;
      }
      piVar7 = (int *)(lVar6 + 0x38 + (longlong)iVar2 * 0x40);
      iVar2 = *piVar7;
    }
  }
  lVar6 = (longlong)iVar1 * 0x40 + *param_1;
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(lVar6 + 0x28);
  FUN_1404bf980(lVar6);
  TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,FSocketSubsystemSteam::FSteamP2PConnectionInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar1,1);
  return 1;
}



// FUNCTION 140d95a90 FUN_140d95a90 body=238 status=ok
// SIG undefined FUN_140d95a90(void)

void FUN_140d95a90(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar6 = *param_1;
    lVar7 = (longlong)param_2 * 0x80;
    lVar4 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar7 + 0x7c + lVar6));
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    piVar5 = (int *)((longlong)plVar3 + lVar4 * 4);
    iVar2 = *(int *)((longlong)plVar3 + lVar4 * 4);
    while (iVar2 != -1) {
      if (iVar2 == param_2) {
        *piVar5 = *(int *)(lVar7 + 0x78 + lVar6);
        break;
      }
      piVar5 = (int *)(lVar6 + 0x78 + (longlong)iVar2 * 0x80);
      iVar2 = *piVar5;
    }
  }
  lVar6 = (longlong)param_2 * 0x80 + *param_1;
  FUN_140d658c0(lVar6 + 0x10);
  plVar3 = *(longlong **)(lVar6 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar5 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  FUN_140483a60(param_1,param_2,1);
  return;
}



// FUNCTION 140d95b80 FUN_140d95b80 body=247 status=ok
// SIG undefined FUN_140d95b80(void)

undefined8 FUN_140d95b80(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar7 = (longlong)(int)param_1[9] - 1;
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  iVar4 = *(int *)((longlong)plVar6 +
                  ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) & uVar7) * 4);
  if (iVar4 != -1) {
    lVar2 = *param_1;
    do {
      lVar5 = (longlong)iVar4;
      if (*(longlong *)(lVar2 + lVar5 * 0x50) == param_2) {
        lVar5 = lVar5 * 0x50;
        uVar7 = (longlong)*(int *)(lVar5 + 0x4c + lVar2) & uVar7;
        piVar3 = (int *)((longlong)plVar6 + uVar7 * 4);
        iVar1 = *(int *)((longlong)plVar6 + uVar7 * 4);
        goto joined_r0x000140d95c16;
      }
      iVar4 = *(int *)(lVar2 + 0x48 + lVar5 * 0x50);
    } while (iVar4 != -1);
  }
  return 0;
joined_r0x000140d95c16:
  if (iVar1 == -1) {
LAB_140d95c40:
    FUN_140d65de0(*param_1 + 8 + lVar5);
    TSparseArray<TSetElement<FCachedLandscapeFoliage::FGrassComp>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar4,1);
    return 1;
  }
  if (iVar1 == iVar4) {
    *piVar3 = *(int *)(lVar5 + lVar2 + 0x48);
    goto LAB_140d95c40;
  }
  piVar3 = (int *)((longlong)iVar1 * 0x50 + 0x48 + lVar2);
  iVar1 = *piVar3;
  goto joined_r0x000140d95c16;
}



// FUNCTION 140d95c80 FUN_140d95c80 body=396 status=ok
// SIG undefined FUN_140d95c80(void)

undefined8 FUN_140d95c80(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  int *piVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*param_2;
  }
  uVar2 = FUN_140438070(puVar7);
  lVar6 = (longlong)(int)((int)param_1[9] - 1U & uVar2);
  plVar10 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar10 = param_1 + 7;
  }
  piVar8 = (int *)((longlong)plVar10 + lVar6 * 4);
  iVar3 = *(int *)((longlong)plVar10 + lVar6 * 4);
  while( true ) {
    if (iVar3 == -1) {
      return 0;
    }
    puVar9 = (undefined8 *)((longlong)iVar3 * 0x38 + *param_1);
    if (*(int *)(param_2 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*param_2;
    }
    if (*(int *)(puVar9 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*puVar9;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar7);
    if (iVar3 == 0) break;
    iVar3 = *(int *)(puVar9 + 6);
    piVar8 = (int *)(puVar9 + 6);
  }
  iVar3 = *piVar8;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar6 = *param_1;
    lVar11 = (longlong)iVar3 * 0x38;
    lVar5 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar11 + 0x34 + lVar6));
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    piVar8 = (int *)((longlong)plVar10 + lVar5 * 4);
    iVar1 = *(int *)((longlong)plVar10 + lVar5 * 4);
    while (iVar1 != -1) {
      if (iVar1 == iVar3) {
        *piVar8 = *(int *)(lVar11 + 0x30 + lVar6);
        break;
      }
      piVar8 = (int *)(lVar6 + 0x30 + (longlong)iVar1 * 0x38);
      iVar1 = *piVar8;
    }
  }
  plVar10 = (longlong *)((longlong)iVar3 * 0x38 + *param_1);
  UE::Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
  ::
  ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
            (plVar10 + 2);
  if (*plVar10 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar3,1);
  return 1;
}



// FUNCTION 140d95e10 RemoveAtUninitialized body=179 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<FCachedLandscapeFoliage::FGrassComp>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::RemoveAtUninitialized(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar10 = (ulonglong)param_2;
  if (param_3 != 0) {
    bVar3 = (byte)param_2 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    lVar8 = uVar10 * 0x50;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x50) = iVar9;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + lVar8) = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar2 + 4 + lVar8) = uVar4;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar7 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      lVar8 = lVar8 + 0x50;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140d95ed0 FUN_140d95ed0 body=1757 status=ok
// SIG undefined FUN_140d95ed0(void)

void FUN_140d95ed0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined **local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 local_50;
  
  iVar10 = *(int *)(param_1 + 0x48) + -1;
  lVar12 = (longlong)iVar10;
  if (-1 < iVar10) {
    plVar1 = (longlong *)(param_1 + 0x40);
    do {
      plVar20 = (longlong *)(lVar12 * 0x10 + *plVar1);
      bVar7 = false;
      lVar13 = FUN_140d82cf0(param_1);
      if (lVar13 == 0) {
LAB_140d96055:
        if ((*(longlong *)(param_1 + 8) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 8) + 0xae8) != 0)) {
          plVar19 = *(longlong **)(param_1 + 0x30);
          plVar17 = plVar19 + *(int *)(param_1 + 0x38);
          if (plVar19 != plVar17) {
LAB_140d96090:
            lVar13 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xae8);
            plVar14 = *(longlong **)(lVar13 + 0x238);
            plVar18 = plVar14 + *(int *)(lVar13 + 0x240);
            for (; plVar14 != plVar18; plVar14 = plVar14 + 1) {
              lVar15 = *plVar14;
              if ((lVar15 != 0) && (*(longlong *)(lVar15 + 0xc0) == *plVar19)) goto LAB_140d9611f;
            }
            plVar14 = *(longlong **)(lVar13 + 0x248);
            plVar18 = plVar14 + *(int *)(lVar13 + 0x250);
            for (; plVar14 != plVar18; plVar14 = plVar14 + 1) {
              lVar15 = *plVar14;
              if ((lVar15 != 0) && (*(longlong *)(lVar15 + 0xc0) == *plVar19)) goto LAB_140d9611f;
            }
            goto LAB_140d9623a;
          }
        }
      }
      else {
        local_a0 = (undefined8 *)0x0;
        local_98 = 0;
        FUN_140d82d80(lVar13,&local_a0);
        puVar21 = local_a0 + (longlong)(int)local_98 * 2;
        for (puVar16 = local_a0; puVar16 != puVar21; puVar16 = puVar16 + 2) {
          plVar17 = (longlong *)((undefined8 *)*plVar20)[1];
          puVar4 = *(undefined8 **)*plVar20;
          if (plVar17 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
            UNLOCK();
          }
          cVar9 = (**(code **)*puVar4)(puVar4,*puVar16);
          if (plVar17 != (longlong *)0x0) {
            LOCK();
            plVar19 = plVar17 + 1;
            lVar13 = *plVar19;
            *(int *)plVar19 = (int)*plVar19 + -1;
            UNLOCK();
            if ((int)lVar13 == 1) {
              (**(code **)*plVar17)(plVar17);
              LOCK();
              piVar2 = (int *)((longlong)plVar17 + 0xc);
              iVar10 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*plVar17 + 8))(plVar17);
              }
            }
          }
          if (cVar9 != '\0') {
            bVar8 = true;
            bVar7 = true;
            goto LAB_140d95fdf;
          }
        }
        bVar8 = false;
LAB_140d95fdf:
        if ((int)local_98 != 0) {
          plVar17 = local_a0 + 1;
          iVar10 = (int)local_98;
          do {
            plVar19 = (longlong *)*plVar17;
            if (plVar19 != (longlong *)0x0) {
              LOCK();
              plVar18 = plVar19 + 1;
              lVar13 = *plVar18;
              *(int *)plVar18 = (int)*plVar18 + -1;
              UNLOCK();
              if ((int)lVar13 == 1) {
                (**(code **)*plVar19)(plVar19);
                LOCK();
                piVar2 = (int *)((longlong)plVar19 + 0xc);
                iVar11 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar11 == 1) {
                  (**(code **)(*plVar19 + 8))(plVar19,1);
                }
              }
            }
            plVar17 = plVar17 + 2;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
        if (local_a0 != (undefined8 *)0x0) {
          FMemory::Free(local_a0);
        }
        if (!bVar8) goto LAB_140d96055;
      }
LAB_140d96250:
      if (!bVar7) {
        plVar17 = (longlong *)((undefined8 *)*plVar20)[1];
        local_80 = *(undefined8 *)*plVar20;
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
          UNLOCK();
        }
        local_78 = plVar17;
        FUN_140d696a0(plVar1,&local_80);
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          plVar19 = plVar17 + 1;
          lVar13 = *plVar19;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plVar17)(plVar17);
            LOCK();
            piVar2 = (int *)((longlong)plVar17 + 0xc);
            iVar10 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar17 + 8))(plVar17,1);
            }
          }
        }
        plVar17 = (longlong *)((undefined8 *)*plVar20)[1];
        local_68 = *(undefined8 *)*plVar20;
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
          UNLOCK();
        }
        local_70 = &PTR_FUN_143f740c8;
        local_58 = 0;
        local_50 = 0;
        local_60 = plVar17;
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          plVar19 = plVar17 + 1;
          lVar13 = *plVar19;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plVar17)(plVar17);
            LOCK();
            piVar2 = (int *)((longlong)plVar17 + 0xc);
            iVar10 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar17 + 8))(plVar17,1);
            }
          }
        }
        bVar7 = false;
        *(int *)(param_1 + 0x164) = *(int *)(param_1 + 0x164) + 1;
        iVar10 = *(int *)(param_1 + 0x164);
        iVar11 = *(int *)(param_1 + 0x158) + -1;
        lVar13 = (longlong)iVar11;
        if (-1 < iVar11) {
          lVar15 = lVar13 << 4;
          bVar7 = false;
          do {
            lVar5 = *(longlong *)(param_1 + 0x150);
            if (((*(int *)(lVar15 + 8 + lVar5) == 0) ||
                (plVar17 = *(longlong **)(lVar15 + lVar5), plVar17 == (longlong *)0x0)) ||
               (cVar9 = (**(code **)(*plVar17 + 0x40))(plVar17,&local_70), cVar9 == '\0')) {
              bVar7 = true;
            }
            lVar15 = lVar15 + -0x10;
            lVar13 = lVar13 + -1;
          } while (-1 < lVar13);
          iVar10 = *(int *)(param_1 + 0x164);
        }
        *(int *)(param_1 + 0x164) = iVar10 + -1;
        if (bVar7) {
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList
                    ((longlong *)(param_1 + 0x150),0);
        }
        plVar17 = (longlong *)((undefined8 *)*plVar20)[1];
        puVar16 = *(undefined8 **)*plVar20;
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
          UNLOCK();
        }
        iVar10 = 0;
        if (0 < *(int *)(param_1 + 0x48)) {
          lVar13 = 0;
          do {
            plVar20 = (longlong *)(*(undefined8 **)(lVar13 + *plVar1))[1];
            uVar6 = **(undefined8 **)(lVar13 + *plVar1);
            if (plVar20 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
              UNLOCK();
            }
            cVar9 = (**(code **)*puVar16)(puVar16,uVar6);
            if (plVar20 != (longlong *)0x0) {
              LOCK();
              plVar19 = plVar20 + 1;
              lVar15 = *plVar19;
              *(int *)plVar19 = (int)*plVar19 + -1;
              UNLOCK();
              if ((int)lVar15 == 1) {
                (**(code **)*plVar20)(plVar20);
                LOCK();
                piVar2 = (int *)((longlong)plVar20 + 0xc);
                iVar11 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar11 == 1) {
                  (**(code **)(*plVar20 + 8))(plVar20);
                }
              }
            }
            if (cVar9 != '\0') {
              TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                        (plVar1,iVar10,1,1);
              break;
            }
            iVar10 = iVar10 + 1;
            lVar13 = lVar13 + 0x10;
          } while (iVar10 < *(int *)(param_1 + 0x48));
        }
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          plVar20 = plVar17 + 1;
          lVar13 = *plVar20;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plVar17)(plVar17);
            LOCK();
            piVar2 = (int *)((longlong)plVar17 + 0xc);
            iVar10 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar17 + 8))(plVar17,1);
            }
          }
        }
        bVar7 = false;
        *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
        iVar10 = *(int *)(param_1 + 0x104);
        iVar11 = *(int *)(param_1 + 0xf8) + -1;
        lVar13 = (longlong)iVar11;
        if (-1 < iVar11) {
          lVar15 = lVar13 << 4;
          do {
            lVar5 = *(longlong *)(param_1 + 0xf0);
            if (((*(int *)(lVar15 + 8 + lVar5) == 0) ||
                (plVar20 = *(longlong **)(lVar15 + lVar5), plVar20 == (longlong *)0x0)) ||
               (cVar9 = (**(code **)(*plVar20 + 0x40))(), cVar9 == '\0')) {
              bVar7 = true;
            }
            lVar15 = lVar15 + -0x10;
            lVar13 = lVar13 + -1;
          } while (-1 < lVar13);
          iVar10 = *(int *)(param_1 + 0x104);
        }
        *(int *)(param_1 + 0x104) = iVar10 + -1;
        if (bVar7) {
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList
                    ((longlong *)(param_1 + 0xf0),0);
        }
        local_70 = &PTR_FUN_143f740c8;
        if (local_58 != 0) {
          FMemory::Free();
        }
        plVar20 = local_60;
        local_70 = &PTR_FUN_143f73d18;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar17 = local_60 + 1;
          lVar13 = *plVar17;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar2 = (int *)((longlong)plVar20 + 0xc);
            iVar10 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar20 + 8))(plVar20,1);
            }
          }
        }
      }
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
  }
  return;
LAB_140d9611f:
  if (lVar15 != 0) {
    local_90 = (undefined8 *)0x0;
    local_88 = 0;
    FUN_140d795e0(lVar15,&local_90);
    puVar21 = local_90 + (longlong)(int)local_88 * 2;
    for (puVar16 = local_90; puVar16 != puVar21; puVar16 = puVar16 + 2) {
      plVar18 = (longlong *)((undefined8 *)*plVar20)[1];
      puVar4 = *(undefined8 **)*plVar20;
      if (plVar18 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
        UNLOCK();
      }
      cVar9 = (**(code **)*puVar4)(puVar4,*puVar16);
      if (plVar18 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar18 + 1;
        lVar13 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar18)(plVar18);
          LOCK();
          piVar2 = (int *)((longlong)plVar18 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar18 + 8))(plVar18);
          }
        }
      }
      if (cVar9 != '\0') {
        bVar7 = true;
        break;
      }
    }
    if ((int)local_88 != 0) {
      plVar18 = local_90 + 1;
      iVar10 = (int)local_88;
      do {
        plVar14 = (longlong *)*plVar18;
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar14 + 1;
          lVar13 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar2 = (int *)((longlong)plVar14 + 0xc);
            iVar11 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar14 + 8))(plVar14,1);
            }
          }
        }
        plVar18 = plVar18 + 2;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    if (local_90 != (undefined8 *)0x0) {
      FMemory::Free(local_90);
    }
  }
LAB_140d9623a:
  plVar19 = plVar19 + 1;
  if (plVar19 == plVar17) goto LAB_140d96250;
  goto LAB_140d96090;
}



// FUNCTION 140d965b0 FUN_140d965b0 body=605 status=ok
// SIG undefined FUN_140d965b0(void)

void FUN_140d965b0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int local_res8 [2];
  undefined ***local_res18 [2];
  undefined8 local_78;
  longlong *local_70;
  undefined **local_68;
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  undefined8 local_48;
  
  if (*param_1 != 0) {
    local_58 = (longlong *)param_2[1];
    local_60 = (longlong *)*param_2;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
    }
    local_68 = &PTR_FUN_143f740c8;
    local_50 = 0;
    local_48 = 0;
    if ((int)param_1[2] != *(int *)((longlong)param_1 + 0x3c)) {
      if ((local_60 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*local_60 + 0x20))(local_60), cVar4 == '\0')) {
        iVar5 = -1;
      }
      else {
        iVar5 = GetTypeHash(local_60);
      }
      plVar7 = (longlong *)param_1[9];
      if ((longlong *)param_1[9] == (longlong *)0x0) {
        plVar7 = param_1 + 8;
      }
      iVar5 = *(int *)((longlong)plVar7 + ((longlong)(int)param_1[10] - 1U & (longlong)iVar5) * 4);
      if (iVar5 != -1) {
        lVar6 = param_1[1];
        do {
          lVar8 = (longlong)iVar5 * 0x50;
          plVar7 = *(longlong **)(lVar8 + 8 + lVar6);
          if ((((plVar7 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar7 + 0x20))(), cVar4 == '\0')) ||
              (local_60 == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(*local_60 + 0x20))(local_60), cVar4 == '\0')) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          plVar7 = *(longlong **)(lVar8 + lVar6 + 8);
          if ((((plVar7 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar7 + 0x20))(), cVar4 == '\0')) &&
              ((local_60 == (longlong *)0x0 ||
               (cVar4 = (**(code **)(*local_60 + 0x20))(local_60), cVar4 == '\0')))) ||
             ((bVar3 && (cVar4 = (**(code **)*local_60)(local_60,*(undefined8 *)(lVar8 + lVar6 + 8))
                        , cVar4 != '\0')))) {
            if ((iVar5 != -1) && (lVar8 = param_1[1] + lVar8, lVar8 != 0)) goto LAB_140d96768;
            break;
          }
          lVar6 = param_1[1];
          iVar5 = *(int *)(lVar8 + 0x48 + lVar6);
        } while (iVar5 != -1);
      }
    }
    local_res18[0] = &local_68;
    FUN_140d5c150(param_1 + 1,local_res8,local_res18,0);
    lVar8 = (longlong)local_res8[0] * 0x50 + param_1[1];
LAB_140d96768:
    local_68 = &PTR_FUN_143f740c8;
    if (local_50 != 0) {
      FMemory::Free();
    }
    plVar7 = local_58;
    local_68 = &PTR_FUN_143f73d18;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    local_78 = FUN_140bb74b0(*param_1);
    local_70 = param_2;
    FUN_140d610f0(lVar8 + 0x28,&local_78);
  }
  return;
}



// FUNCTION 140d96810 FUN_140d96810 body=597 status=ok
// SIG undefined FUN_140d96810(void)

void FUN_140d96810(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int local_res8 [2];
  undefined ***local_res18 [2];
  undefined8 local_78;
  longlong *local_70;
  undefined **local_68;
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  undefined8 local_48;
  
  if (*param_1 != 0) {
    local_58 = (longlong *)param_2[1];
    local_60 = (longlong *)*param_2;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
    }
    local_68 = &PTR_FUN_143f740c8;
    local_50 = 0;
    local_48 = 0;
    if ((int)param_1[3] != *(int *)((longlong)param_1 + 0x44)) {
      if ((local_60 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*local_60 + 0x20))(local_60), cVar4 == '\0')) {
        iVar5 = -1;
      }
      else {
        iVar5 = GetTypeHash(local_60);
      }
      plVar7 = (longlong *)param_1[10];
      if ((longlong *)param_1[10] == (longlong *)0x0) {
        plVar7 = param_1 + 9;
      }
      iVar5 = *(int *)((longlong)plVar7 + ((longlong)(int)param_1[0xb] - 1U & (longlong)iVar5) * 4);
      if (iVar5 != -1) {
        lVar6 = param_1[2];
        do {
          lVar8 = (longlong)iVar5 * 0x40;
          plVar7 = *(longlong **)(lVar8 + 8 + lVar6);
          if ((((plVar7 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar7 + 0x20))(), cVar4 == '\0')) ||
              (local_60 == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(*local_60 + 0x20))(local_60), cVar4 == '\0')) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          plVar7 = *(longlong **)(lVar8 + lVar6 + 8);
          if ((((plVar7 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar7 + 0x20))(), cVar4 == '\0')) &&
              ((local_60 == (longlong *)0x0 ||
               (cVar4 = (**(code **)(*local_60 + 0x20))(local_60), cVar4 == '\0')))) ||
             ((bVar3 && (cVar4 = (**(code **)*local_60)(local_60,*(undefined8 *)(lVar8 + lVar6 + 8))
                        , cVar4 != '\0')))) {
            if ((iVar5 != -1) && (lVar8 = param_1[2] + lVar8, lVar8 != 0)) goto LAB_140d969c0;
            break;
          }
          lVar6 = param_1[2];
          iVar5 = *(int *)(lVar8 + 0x38 + lVar6);
        } while (iVar5 != -1);
      }
    }
    local_res18[0] = &local_68;
    FUN_140d5c380(param_1 + 2,local_res8,local_res18,0);
    lVar8 = (longlong)local_res8[0] * 0x40 + param_1[2];
LAB_140d969c0:
    local_68 = &PTR_FUN_143f740c8;
    if (local_50 != 0) {
      FMemory::Free();
    }
    plVar7 = local_58;
    local_68 = &PTR_FUN_143f73d18;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    local_78 = FUN_140bb74b0(*param_1);
    local_70 = param_2;
    FUN_140d60e90(lVar8 + 0x28,&local_78);
  }
  return;
}



// FUNCTION 140d96a80 FUN_140d96a80 body=872 status=ok
// SIG undefined FUN_140d96a80(void)

void FUN_140d96a80(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  longlong local_f8;
  longlong *local_f0;
  undefined **local_e8;
  longlong local_e0;
  longlong *local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined **local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined **local_98;
  longlong local_90;
  longlong *local_88;
  longlong local_80;
  undefined8 local_78;
  undefined **local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 local_50;
  undefined **local_48;
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  undefined8 local_28;
  
  FUN_140dbc800(param_1,&local_f8);
  if ((local_f8 != 0) && (*(longlong **)(param_2 + 8) != (longlong *)0x0)) {
    cVar6 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))();
    if (cVar6 != '\0') {
      local_e0 = local_f8;
      local_d8 = local_f0;
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
        UNLOCK();
      }
      local_e8 = &PTR_FUN_143f740c8;
      local_d0 = 0;
      local_c8 = 0;
      FUN_140d75260(param_1,2,&local_e8,param_2);
      if (local_d0 != 0) {
        FMemory::Free();
      }
      plVar3 = local_d8;
      if (local_d8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_d8 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_d8)(local_d8);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_d8 + 8))(local_d8,1);
          }
        }
      }
      local_b8 = local_f8;
      local_b0 = local_f0;
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
        UNLOCK();
      }
      local_c0 = &PTR_FUN_143f740c8;
      local_a8 = 0;
      local_a0 = 0;
      FUN_140d75260(param_1,3,&local_c0,param_2);
      if (local_a8 != 0) {
        FMemory::Free();
      }
      plVar3 = local_b0;
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_b0 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_b0 + 8))(local_b0,1);
          }
        }
      }
      local_90 = local_f8;
      local_88 = local_f0;
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
        UNLOCK();
      }
      local_98 = &PTR_FUN_143f740c8;
      local_80 = 0;
      local_78 = 0;
      FUN_140d75260(param_1,4,&local_98,param_2);
      if (local_80 != 0) {
        FMemory::Free();
      }
      plVar3 = local_88;
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_88 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_88 + 8))(local_88,1);
          }
        }
      }
      local_68 = local_f8;
      local_60 = local_f0;
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
        UNLOCK();
      }
      local_70 = &PTR_FUN_143f740c8;
      local_58 = 0;
      local_50 = 0;
      FUN_140d75260(param_1,5,&local_70,param_2);
      if (local_58 != 0) {
        FMemory::Free();
      }
      plVar3 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
      local_40 = local_f8;
      local_38 = local_f0;
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
        UNLOCK();
      }
      local_48 = &PTR_FUN_143f740c8;
      local_30 = 0;
      local_28 = 0;
      FUN_140d75260(param_1,6,&local_48,param_2);
      if (local_30 != 0) {
        FMemory::Free();
      }
      plVar3 = local_38;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_38 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_38 + 8))(local_38,1);
          }
        }
      }
    }
  }
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_f0 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar2 = (int *)((longlong)local_f0 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_f0 + 8))(local_f0,1);
      }
    }
  }
  return;
}



// FUNCTION 140d96df0 FUN_140d96df0 body=234 status=ok
// SIG undefined FUN_140d96df0(void)

void FUN_140d96df0(undefined8 param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  undefined4 local_68 [2];
  undefined **local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined **local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined2 local_10;
  
  if (*(longlong **)(param_2 + 8) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))();
    if ((cVar1 != '\0') && (*(longlong **)(param_3 + 8) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(param_3 + 8) + 0x20))();
      if (cVar1 != '\0') {
        local_68[0] = 0xd;
        local_48 = 0;
        local_40 = 0;
        local_30 = 0;
        local_28 = 0;
        local_20 = 0;
        local_18 = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_60 = &PTR_FUN_143f740c8;
        local_38 = &PTR_FUN_143f740c8;
        local_10 = 0x100;
        FUN_1404c0940(&local_60,param_2);
        FUN_1404c0940(&local_38,param_3);
        FUN_140d9cf60(param_1,local_68);
        FUN_1404bf980(&local_38);
        FUN_1404bf980(&local_60);
      }
    }
  }
  return;
}



// FUNCTION 140d96ee0 FUN_140d96ee0 body=716 status=ok
// SIG undefined FUN_140d96ee0(void)

void FUN_140d96ee0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  int local_res10 [2];
  undefined ***local_res18 [2];
  longlong local_78;
  int local_70;
  undefined **local_68;
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  undefined8 local_48;
  
  if (((*param_2 != 0) && (*param_1 != 0)) && (lVar5 = FUN_140d84560(), lVar5 != 0)) {
    FUN_140d29440(lVar5);
    local_58 = (longlong *)param_2[1];
    local_60 = (longlong *)*param_2;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
    }
    local_68 = &PTR_FUN_143f740c8;
    local_50 = 0;
    local_48 = 0;
    if ((int)param_1[2] != *(int *)((longlong)param_1 + 0x3c)) {
      if ((local_60 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*local_60 + 0x20))(local_60), cVar3 == '\0')) {
        iVar4 = -1;
      }
      else {
        iVar4 = GetTypeHash(local_60);
      }
      plVar7 = (longlong *)param_1[9];
      if ((longlong *)param_1[9] == (longlong *)0x0) {
        plVar7 = param_1 + 8;
      }
      iVar4 = *(int *)((longlong)plVar7 + ((longlong)(int)param_1[10] - 1U & (longlong)iVar4) * 4);
      if (iVar4 != -1) {
        lVar6 = param_1[1];
        do {
          lVar8 = (longlong)iVar4 * 0x50;
          plVar7 = *(longlong **)(lVar6 + 8 + lVar8);
          if (((plVar7 == (longlong *)0x0) ||
              (cVar3 = (**(code **)(*plVar7 + 0x20))(), cVar3 == '\0')) ||
             ((local_60 == (longlong *)0x0 ||
              (cVar3 = (**(code **)(*local_60 + 0x20))(local_60), cVar3 == '\0')))) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          plVar7 = *(longlong **)(lVar6 + lVar8 + 8);
          if ((((plVar7 == (longlong *)0x0) ||
               (cVar3 = (**(code **)(*plVar7 + 0x20))(), cVar3 == '\0')) &&
              ((local_60 == (longlong *)0x0 ||
               (cVar3 = (**(code **)(*local_60 + 0x20))(local_60), cVar3 == '\0')))) ||
             ((bVar2 && (cVar3 = (**(code **)*local_60)(local_60,*(undefined8 *)(lVar6 + lVar8 + 8))
                        , cVar3 != '\0')))) {
            if ((iVar4 != -1) && (lVar8 = param_1[1] + lVar8, lVar8 != 0)) goto LAB_140d970bc;
            break;
          }
          lVar6 = param_1[1];
          iVar4 = *(int *)(lVar6 + 0x48 + lVar8);
        } while (iVar4 != -1);
      }
    }
    local_res18[0] = &local_68;
    FUN_140d5c150(param_1 + 1,local_res10,local_res18,0);
    lVar8 = (longlong)local_res10[0] * 0x50 + param_1[1];
LAB_140d970bc:
    local_68 = &PTR_FUN_143f740c8;
    if (local_50 != 0) {
      FMemory::Free();
    }
    plVar7 = local_58;
    local_68 = &PTR_FUN_143f73d18;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_58 + 1;
      lVar6 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_58)(local_58);
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
    plVar7 = *(longlong **)(lVar8 + 0x28);
    plVar9 = plVar7 + (longlong)*(int *)(lVar8 + 0x30) * 2;
    for (; plVar7 != plVar9; plVar7 = plVar7 + 2) {
      if (((longlong *)*plVar7 != (longlong *)0x0) &&
         (cVar3 = (**(code **)(*(longlong *)*plVar7 + 0x30))(), cVar3 != '\0')) {
        FUN_140d83080(*plVar7,&local_78,1,*param_1);
        if (1 < local_70) {
          FUN_140d27010(lVar5,&local_78);
        }
        if (local_78 != 0) {
          FMemory::Free();
        }
      }
    }
    FUN_140da4e60(param_1);
  }
  return;
}



// FUNCTION 140d971b0 FUN_140d971b0 body=592 status=ok
// SIG undefined FUN_140d971b0(void)

void FUN_140d971b0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  uint *puVar11;
  int local_88;
  uint uStack_84;
  int iStack_80;
  uint uStack_7c;
  undefined8 local_78;
  uint uStack_70;
  int iStack_6c;
  undefined1 local_68 [16];
  longlong *local_58;
  char local_50;
  char cStack_4f;
  longlong *local_48;
  int iStack_40;
  uint uStack_3c;
  uint *puStack_38;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146852c60) && (_Init_thread_header(&DAT_146852c60), DAT_146852c60 == -1))
  {
    FName::FName(&DAT_146852c58,L"OnlineSubsystem",1);
    _Init_thread_footer(&DAT_146852c60);
  }
  uVar4 = DAT_146852c58;
  uVar6 = FUN_14168dc80();
  plVar7 = (longlong *)FModuleManager::GetModule(uVar6,uVar4);
  plVar8 = (longlong *)(**(code **)(*plVar7 + 0x50))(plVar7,0);
  plVar7 = (longlong *)(param_1 + 8);
  if (plVar8 == (longlong *)0x0) {
    FUN_140d74510(plVar7,0);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x30);
    puStack_38 = (uint *)(param_1 + 0x18);
    local_88 = 0;
    uStack_84 = 1;
    local_78._4_4_ = 0;
    uStack_70 = 0;
    if (iVar1 != 0) {
      puVar11 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar11 = puStack_38;
      }
      uVar2 = *puVar11;
      uStack_70 = 0;
      local_88 = 0;
      while (uVar2 == 0) {
        lVar9 = (longlong)local_88;
        uStack_70 = uStack_70 + 0x20;
        iVar10 = local_88 + 1;
        bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_88;
        local_88 = iVar10;
        if (bVar3) goto LAB_140d972cb;
        uVar2 = puVar11[lVar9 + 1];
      }
      uStack_84 = -uVar2 & uVar2;
      iVar10 = 0x1f;
      if (uStack_84 != 0) {
        for (; uStack_84 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      if (uStack_84 == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0x1f - iVar10;
      }
      local_78._4_4_ = (uStack_70 - iVar10) + 0x1f;
      if (iVar1 < local_78._4_4_) {
LAB_140d972cb:
        local_78._4_4_ = iVar1;
      }
    }
    auStack_30._4_4_ = local_78._4_4_;
    auStack_30._0_4_ = 0xffffffff;
    auStack_30._8_4_ = uStack_70;
    auStack_30._12_4_ = iStack_6c;
    iStack_40 = local_88;
    uStack_3c = uStack_84;
    local_50 = '\0';
    cStack_4f = '\0';
    local_20._0_4_ = SUB84(plVar7,0);
    local_20._4_4_ = (undefined4)((ulonglong)plVar7 >> 0x20);
    uStack_70 = 0xffffffff;
    iStack_6c = local_78._4_4_;
    iStack_80 = local_88;
    uStack_7c = uStack_84;
    local_68._8_4_ = (undefined4)local_20;
    local_68._0_8_ = auStack_30._8_8_;
    local_68._12_4_ = local_20._4_4_;
    bVar3 = local_78._4_4_ < *(int *)(param_1 + 0x30);
    local_58 = plVar7;
    local_48 = plVar7;
    local_20 = plVar7;
    local_78 = puStack_38;
    if (bVar3) {
      do {
        iVar1 = iStack_6c;
        cVar5 = (**(code **)(*plVar8 + 0xf8))(plVar8,(longlong)iStack_6c * 0x80 + *plVar7);
        if (cVar5 == '\0') {
          FUN_140d95a90(local_68._8_8_,iVar1);
          local_50 = '\x01';
        }
        uStack_70 = uStack_70 & ~uStack_7c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
      } while (iStack_6c < (int)local_78[6]);
      if ((local_50 != '\0') && (cStack_4f != '\0')) {
        FUN_140d6f970(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34),1);
      }
    }
  }
  return;
}



// FUNCTION 140d97400 FUN_140d97400 body=738 status=ok
// SIG undefined FUN_140d97400(void)

void FUN_140d97400(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  undefined8 local_res10;
  int local_a8;
  uint uStack_a4;
  int iStack_94;
  int iStack_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  undefined8 uStack_70;
  uint *local_68;
  uint uStack_60;
  int iStack_5c;
  int local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar10 = *(int *)(param_1 + 0x40);
  if (iVar10 != 0) {
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x38) + 8);
    do {
      plVar4 = (longlong *)*plVar7;
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
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
      plVar7 = plVar7 + 2;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x38,0);
  }
  iVar10 = *(int *)(param_1 + 0x50);
  if (iVar10 != 0) {
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x48) + 8);
    do {
      plVar4 = (longlong *)*plVar7;
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
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
      plVar7 = plVar7 + 2;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x48,0);
  }
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x58,0);
  plVar7 = (longlong *)(param_1 + 0xa8);
  iVar10 = *(int *)(param_1 + 0xd0);
  local_68 = (uint *)(param_1 + 0xb8);
  local_a8 = 0;
  uStack_a4 = 1;
  iStack_94 = 0;
  iStack_90 = 0;
  if (iVar10 != 0) {
    puVar9 = *(uint **)(param_1 + 200);
    if (*(uint **)(param_1 + 200) == (uint *)0x0) {
      puVar9 = local_68;
    }
    uVar3 = *puVar9;
    iStack_90 = 0;
    local_a8 = 0;
    while (uVar3 == 0) {
      lVar6 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar8 = local_a8 + 1;
      bVar5 = (int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar8;
      if (bVar5) goto LAB_140d975de;
      uVar3 = puVar9[lVar6 + 1];
    }
    uStack_a4 = -uVar3 & uVar3;
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
    iStack_94 = (iStack_90 - iVar8) + 0x1f;
    if (iVar10 < iStack_94) {
LAB_140d975de:
      iStack_94 = iVar10;
    }
  }
  uStack_70 = CONCAT44(uStack_a4,local_a8);
  uStack_38 = 0xffffffff;
  iStack_34 = iStack_94;
  iStack_30 = iStack_90;
  uStack_60 = 0xffffffff;
  iStack_5c = iStack_94;
  local_58 = iStack_90;
  local_78 = plVar7;
  local_50 = plVar7;
  uStack_48 = uStack_70;
  puStack_40 = local_68;
  if (iStack_94 < iVar10) {
    do {
      local_res10 = *(undefined8 *)(*local_78 + 8 + (longlong)iStack_5c * 0x18);
      FUN_1404cf890(&local_88,*(undefined8 *)(*local_78 + (longlong)iStack_5c * 0x18));
      if (local_88 != (longlong *)0x0) {
        (**(code **)(*local_88 + 0x100))(local_88,&local_res10);
      }
      plVar4 = local_80;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_80 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*local_80 + 8))(local_80,1);
          }
        }
      }
      uStack_60 = uStack_60 & ~uStack_70._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    } while (iStack_5c < (int)local_68[6]);
  }
  FUN_1406c5d90(plVar7,0);
  return;
}



// FUNCTION 140d976f0 FUN_140d976f0 body=149 status=ok
// SIG undefined FUN_140d976f0(void)

void FUN_140d976f0(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x30);
  if (param_3 < 4) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 4);
    pvVar1 = *(void **)((longlong)param_1 + 0x30);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0x30) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 4);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar2;
  return;
}



// FUNCTION 140d97790 ResizeAllocation body=163 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<4,TSizedDefaultAllocator<32>_>::ForElementType<FGPUSortManager::FSortBatch>::
     ResizeAllocation(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0xa0);
  if (param_3 < 5) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x28);
    pvVar1 = *(void **)((longlong)param_1 + 0xa0);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0xa0) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x28);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0xa0) = uVar2;
  return;
}



// FUNCTION 140d97840 FUN_140d97840 body=112 status=ok
// SIG undefined FUN_140d97840(void)

void FUN_140d97840(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 4) {
      iVar1 = 3;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != param_3) {
    FUN_140d976f0(param_1,0,iVar1,0x10);
  }
  *(int *)(param_1 + 0x3c) = iVar1;
  return;
}



// FUNCTION 140d978b0 FUN_140d978b0 body=132 status=ok
// SIG undefined FUN_140d978b0(void)

void FUN_140d978b0(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 5) {
      iVar2 = 4;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x28,0);
      iVar2 = (int)(uVar1 / 0x28);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != param_3) {
    TInlineAllocator<4,TSizedDefaultAllocator<32>_>::ForElementType<FGPUSortManager::FSortBatch>::
    ResizeAllocation(param_1,0,iVar2,0x28);
  }
  *(int *)(param_1 + 0xac) = iVar2;
  return;
}



// FUNCTION 140d97940 ResizeGrow body=132 status=ok
// SIG undefined ResizeGrow(void)

void TArray<enum_D3D12_RESOURCE_STATES,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 < 5) {
    iVar2 = 4;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x1c) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 * 4,0);
    iVar2 = (int)(uVar3 >> 2);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x1c) = iVar2;
  TInlineAllocator<4,FDefaultAllocator>::ForElementType<unsigned_int>::ResizeAllocation
            (param_1,param_2,iVar2,4);
  return;
}



// FUNCTION 140d979d0 FUN_140d979d0 body=140 status=ok
// SIG undefined FUN_140d979d0(void)

void FUN_140d979d0(longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x28,0);
  iVar4 = (int)(uVar3 / 0x28);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x28,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 140d97a60 ResizeGrow body=128 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FCurveHandle,TInlineAllocator<3,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (uVar1 < 4) {
    iVar2 = 3;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x3c) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 << 4,0);
    iVar2 = (int)(uVar3 >> 4);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x3c) = iVar2;
  FUN_140d976f0(param_1,param_2,iVar2,0x10);
  return;
}



// FUNCTION 140d97ae0 ResizeGrow body=149 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FGPUSortManager::FSortBatch,TInlineAllocator<4,TSizedDefaultAllocator<32>_>_>::
     ResizeGrow(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0xa8);
  uVar3 = 4;
  if (4 < uVar1) {
    if ((*(int *)(param_1 + 0xac) != 0) || (4 < uVar1)) {
      uVar3 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar2 = FMemory::QuantizeSize(uVar3 * 0x28,0);
    uVar3 = uVar2 / 0x28 & 0xffffffff;
    if ((int)(uVar2 / 0x28) < (int)uVar1) {
      uVar3 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0xac) = (int)uVar3;
  TInlineAllocator<4,TSizedDefaultAllocator<32>_>::ForElementType<FGPUSortManager::FSortBatch>::
  ResizeAllocation(param_1,param_2,uVar3,0x28);
  return;
}



// FUNCTION 140d97b80 ResizeGrow body=151 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FEnvQueryInstanceCache,FDefaultAllocator>::ResizeGrow(longlong *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar4 = FMemory::QuantizeSize(lVar3 * 0x188,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  lVar3 = SUB168(ZEXT816(0x4e5e0a72f0539783) * auVar2,8);
  iVar5 = (int)((uVar4 - lVar3 >> 1) + lVar3 >> 8);
  if (iVar5 < (int)uVar1) {
    iVar5 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar5;
  if ((*param_1 != 0) || (iVar5 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0x188,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 140d97c20 ResizeTo body=101 status=ok
// SIG undefined ResizeTo(void)

void TArray<float,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 5) {
      iVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 2,0);
      iVar1 = (int)(uVar2 >> 2);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x1c)) {
    *(int *)(param_1 + 0x1c) = iVar1;
    TInlineAllocator<4,FDefaultAllocator>::ForElementType<unsigned_int>::ResizeAllocation
              (param_1,*(undefined4 *)(param_1 + 0x18),iVar1,4);
  }
  return;
}



// FUNCTION 140d97c90 ResizeTo body=120 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TSizedDefaultAllocator<32>_>::
     ResizeTo(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x28,0);
    iVar3 = (int)(uVar1 / 0x28);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x28,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 140d97d10 FUN_140d97d10 body=101 status=ok
// SIG undefined FUN_140d97d10(void)

void FUN_140d97d10(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 4) {
      iVar1 = 3;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x3c)) {
    *(int *)(param_1 + 0x3c) = iVar1;
    FUN_140d976f0(param_1,*(undefined4 *)(param_1 + 0x38),iVar1,0x10);
  }
  return;
}



// FUNCTION 140d97d80 FUN_140d97d80 body=127 status=ok
// SIG undefined FUN_140d97d80(void)

void FUN_140d97d80(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 5) {
      iVar2 = 4;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x28,0);
      iVar2 = (int)(uVar1 / 0x28);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != *(int *)(param_1 + 0xac)) {
    *(int *)(param_1 + 0xac) = iVar2;
    TInlineAllocator<4,TSizedDefaultAllocator<32>_>::ForElementType<FGPUSortManager::FSortBatch>::
    ResizeAllocation(param_1,*(undefined4 *)(param_1 + 0xa8),iVar2,0x28);
  }
  return;
}



// FUNCTION 140d97e00 ResizeTo body=130 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<392,8>_>,TSizedDefaultAllocator<32>_>::
     ResizeTo(longlong *param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0x188,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x4e5e0a72f0539783) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 8);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if (iVar4 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x188,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 140d97e90 FUN_140d97e90 body=217 status=ok
// SIG undefined FUN_140d97e90(void)

void FUN_140d97e90(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((*(longlong *)(param_1 + 8) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xae8), lVar2 != 0)) {
    FUN_1404c9880(lVar2,DAT_14686e880);
  }
  FUN_140d703a0(param_1);
  if (((*(char *)(param_1 + 0xd8) != '\0') && (*(longlong *)(param_1 + 8) != 0)) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xae8), lVar2 != 0)) {
    plVar4 = *(longlong **)(lVar2 + 0x238);
    plVar1 = plVar4 + *(int *)(lVar2 + 0x240);
    for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
      lVar3 = *plVar4;
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0xc0) == DAT_14686e880)) goto LAB_140d97f57;
    }
    plVar4 = *(longlong **)(lVar2 + 0x248);
    plVar1 = plVar4 + *(int *)(lVar2 + 0x250);
    if (plVar4 != plVar1) {
      while ((lVar3 = *plVar4, lVar3 == 0 || (*(longlong *)(lVar3 + 0xc0) != DAT_14686e880))) {
        plVar4 = plVar4 + 1;
        if (plVar4 == plVar1) {
          return;
        }
      }
LAB_140d97f57:
      if (lVar3 != 0) {
        *(undefined4 *)(lVar3 + 0x50) = 0;
      }
    }
  }
  return;
}


